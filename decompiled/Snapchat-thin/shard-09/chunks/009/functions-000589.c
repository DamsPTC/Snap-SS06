/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072b8528; end: 1072b8577;  */

void FUN_1072b8528(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x0001072cf8bc();
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  FUN_1072f5374();
  FUN_1072cd28c(auStack_30);
  return;
}



/* Entry: 1072b8578; end: 1072b85db;  */

void FUN_1072b8578(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x0001072cfedc(param_1,"app");
  auStack_58[0] = 1;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_1072b4f2c(param_1,param_2,auStack_38,auStack_58);
  func_0x0001072cecfc();
  return;
}



/* Entry: 1072b85dc; end: 1072b8603;  */

long FUN_1072b85dc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong extraout_x8;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(**(long **)(param_2 + 0xa8) + 0x10f8) + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107946d88(&PTR_DAT_1109ed050);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = *(int *)(lVar4 + 0x1f0);
  *(int *)(param_1 + 0x20) = iVar1;
  iVar2 = *(int *)(lVar4 + 500);
  *(int *)(param_1 + 0x24) = iVar2;
  iVar3 = *(int *)(lVar4 + 0x1f8);
  *(int *)(param_1 + 0x28) = iVar3;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar4 + 0x1e0);
  }
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar4 + 0x1e4);
  }
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar4 + 0x1e8);
  }
  return param_1;
}



/* Entry: 1072b8604; end: 1072b8663;  */

void FUN_1072b8604(void)

{
  undefined1 in_ZR;
  
  func_0x0001072ce1d0();
  func_0x0001072cf1bc();
  func_0x0001072cfb48();
  func_0x0001072cec88();
  func_0x0001072cefb4();
  func_0x0001072cec80();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ced4c();
  func_0x0001072cec80();
  func_0x0001072ce900();
  return;
}



/* Entry: 1072b8664; end: 1072b8667;  */

void FUN_1072b8664(void)

{
  return;
}



/* Entry: 1072b8668; end: 1072b86c7;  */

ulong FUN_1072b8668(ulong param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  uint *puVar2;
  
  func_0x0001072ce1d0();
  puVar2 = (uint *)&DAT_10f408dd9;
  func_0x0001072cf1bc();
  func_0x0001072cfb48();
  func_0x0001072cec88();
  func_0x0001072cefb4();
  func_0x0001072cec80();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001072ced4c();
  func_0x0001072cec80();
  func_0x0001072ce900();
  FUN_1072cd2b0();
  uVar1 = *puVar2;
  if ((param_1 & 0x100000000) != 0) {
    uVar1 = (uint)param_1;
  }
  return (ulong)uVar1;
}



/* Entry: 1072b86c8; end: 1072b86f3;  */

undefined4 FUN_1072b86c8(ulong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_1072cd2b0();
  uVar1 = *param_2;
  if ((param_1 & 0x100000000) != 0) {
    uVar1 = (undefined4)param_1;
  }
  return uVar1;
}



/* Entry: 1072b86f4; end: 1072b87f7;  */

void FUN_1072b86f4(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  auStack_a0[0] = 0x122;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001072cfaa8(param_1,param_2,param_2);
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_54 = 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puVar1 = auStack_a0;
  FUN_10729d56c(puVar1,&DAT_10f2e34e7);
  FUN_1072bbe40();
  FUN_10729d56c();
  auStack_b0[0] = 1;
  uStack_a8 = 0;
  uStack_c0 = *param_1;
  uStack_b8 = 3;
  func_0x0001072cf8ac(param_1,puVar1,auStack_b0,&uStack_c0);
  FUN_107262330(auStack_a0);
  return;
}



/* Entry: 1072b87f8; end: 1072b8837;  */

void FUN_1072b87f8(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar14;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar13;
  
  if (8 < param_2) {
    return;
  }
  puVar7 = (&PTR_DAT_11099bea0)[param_2];
  lVar5 = **(long **)(param_1 + 0xa8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5,puVar7);
  uVar10 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_FUN_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  FUN_10729d56c(puVar6,"reason",puVar7);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  func_0x00010743fa9c(uVar10,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  FUN_107262330();
  if (*(int *)(lVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar8 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar8 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar8 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar8 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar8 + 0x1c8)) {
    func_0x000107410e94(lVar5 + 0x1168);
    func_0x0001074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar12 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar13 = (double)(ulong)uVar12;
  uVar14 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar12;
  *(undefined4 *)(lVar5 + 0x1440) = uVar14;
  func_0x000107411798();
  func_0x0001074e33b8((float)dVar13,lVar5 + 0x1168);
  func_0x0001074e3804(&uStack_80,lVar5 + 0x1168);
  func_0x000107413c78(lVar5 + 0x50,&uStack_80);
  func_0x0001074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    func_0x000107410058(lVar5,&uStack_1090);
  }
  lVar8 = *(long *)(lVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar8 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar8 + 8) + 0x90);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar8 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar8 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar8 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar8 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar8 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1a8) >> 8);
  func_0x000107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  puVar9 = *(undefined8 **)(lVar8 + 0x1c0);
  lStack_140 = puVar9[1];
  uStack_148 = *puVar9;
  if (puVar9[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8;
    lVar8 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar8 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar8 + 0xa8);
  if (*(long *)(lVar8 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar8 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar8 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar8 + 0xd0);
  if (*(long *)(lVar8 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar8 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar8 + 0x100);
  uStack_118 = *(undefined8 *)(lVar8 + 0xf8);
  if (*(long *)(lVar8 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar8 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar8 + 0x338);
  lStack_100 = *(long *)(lVar8 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar8 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar8 + 0x348);
  lStack_f0 = *(long *)(lVar8 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar8 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar8 + 0x358);
  lStack_e0 = *(long *)(lVar8 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar8 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar8 + 0x368);
  lStack_d0 = *(long *)(lVar8 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
  lStack_c0 = *(long *)(lVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
  *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(lVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(lVar5 + 0x1110);
  if (*(long *)(lVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar11 = *(long **)(lVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  func_0x000107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar11 + 0x20))(plVar11,&puStack_10a0);
  FUN_10725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 1072b8838; end: 1072b88e3;  */

void FUN_1072b8838(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_2 + 0x268) + 0x3c0;
  FUN_107261fa8(auStack_78);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  puVar1 = auStack_78;
  FUN_1072621e0();
  uStack_38 = 0;
  puStack_30 = puVar1;
  lStack_28 = lVar2;
  puStack_40 = param_1;
  while (puStack_30 != (undefined1 *)0x0) {
    FUN_10724ef84(auStack_58,lStack_28);
    FUN_10726dcdc(&puStack_40,auStack_58);
    func_0x0001072cecfc();
    FUN_107262260(&puStack_30);
  }
  FUN_107261dac(auStack_78);
  return;
}



/* Entry: 1072b88e4; end: 1072b89bf;  */

void FUN_1072b88e4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined8 **ppuVar13;
  long lVar14;
  undefined8 **ppuVar15;
  ulong *puVar16;
  undefined1 **ppuVar17;
  ulong uVar18;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 **ppuVar19;
  undefined8 **extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar20;
  undefined8 **extraout_x9;
  undefined8 **ppuVar21;
  undefined8 **extraout_x9_00;
  ulong uVar22;
  ulong extraout_x9_01;
  undefined8 *puVar23;
  undefined8 **ppuVar24;
  undefined8 **extraout_x10;
  undefined8 **ppuVar25;
  undefined8 **extraout_x11;
  undefined8 **ppuVar26;
  long unaff_x19;
  undefined8 *puVar27;
  code *pcVar28;
  long lVar29;
  undefined8 **ppuVar30;
  undefined8 *puVar31;
  long *plVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lStack_8e0;
  undefined8 **ppuStack_8d8;
  undefined8 **ppuStack_8d0;
  undefined8 *puStack_8c8;
  float fStack_8c0;
  undefined8 **ppuStack_8b0;
  undefined8 **ppuStack_8a8;
  undefined8 **ppuStack_8a0;
  undefined8 *puStack_890;
  undefined8 *puStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined1 auStack_870 [16];
  long alStack_860 [2];
  undefined8 **ppuStack_850;
  undefined8 ***pppuStack_848;
  undefined8 *puStack_840;
  undefined1 auStack_818 [16];
  undefined1 auStack_808 [56];
  undefined1 auStack_7d0 [24];
  undefined8 *apuStack_7b8 [6];
  undefined8 uStack_788;
  long lStack_6f0;
  long lStack_6e8;
  char cStack_6d8;
  undefined *puStack_6d0;
  undefined1 auStack_6c8 [40];
  undefined8 uStack_6a0;
  undefined **ppuStack_698;
  char cStack_690;
  ulong uStack_648;
  char cStack_640;
  undefined *puStack_618;
  undefined1 uStack_610;
  undefined1 auStack_608 [24];
  undefined **ppuStack_5f0;
  ulong *puStack_5e8;
  long lStack_5e0;
  undefined8 uStack_5d8;
  ulong auStack_5d0 [3];
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined **ppuStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [504];
  undefined1 *puStack_1c0;
  ulong *puStack_1b8;
  undefined8 uStack_1b0;
  undefined ***pppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [112];
  undefined1 auStack_70 [64];
  
  uVar34 = (undefined4)((ulong)param_2 >> 0x20);
  uVar33 = (undefined4)param_2;
  func_0x0001072ce1e4();
  func_0x0001078696e8(auStack_130);
  func_0x0001072cf234();
  func_0x0001072cfe38(auStack_118);
  FUN_107277488(auStack_e0,auStack_118);
  func_0x000107869848(auStack_130,auStack_70,auStack_e0);
  func_0x0001072ceb60();
  func_0x000104c2f714(auStack_118);
  func_0x0001072cedb0();
  plVar7 = *(long **)(unaff_x19 + 0xd0);
  (**(code **)(*plVar7 + 0x28))(plVar7,auStack_130);
  func_0x0001072cec0c();
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar32 = plVar7;
  func_0x0001072cec0c();
  func_0x0001072ce900();
  plVar8 = plVar32;
  func_0x0001072ce294();
  puStack_618 = (undefined *)0x0;
  uStack_610 = 0;
  puStack_3d0 = auStack_3b8;
  ppuStack_3d8 = &PTR_DAT_11099bc38;
  uVar37 = 0;
  uStack_3c0 = 500;
  uStack_3c8 = 0;
  ppuStack_5f0 = (undefined **)((ulong)ppuStack_5f0 & 0xffffffffffffff00);
  auStack_5d0[0] = auStack_5d0[0] & 0xffffffffffffff00;
  uStack_188 = extraout_x8;
  func_0x00010740e07c(&uStack_6a0,plVar8[0x15],&ppuStack_5f0);
  puVar23 = &uStack_6a0;
  func_0x00010740e0f0(auStack_6c8,plVar32[0x15],puVar23);
  FUN_1072594c0(auStack_6c8);
  uVar35 = CONCAT44(uVar34,uVar33);
  uVar36 = uVar37;
  func_0x0001072594e0(auStack_6c8);
  if (cStack_690 == '\0') {
    ppuStack_698 = (undefined **)0x0;
    uStack_6a0 = 0;
  }
  if (cStack_640 == '\0') {
    uStack_648 = 0;
  }
  puStack_5e8 = (ulong *)0x0;
  uStack_5d8 = 0;
  auStack_5d0[1] = 0;
  uStack_5b8 = 0;
  uStack_5a8 = 0;
  uStack_598 = 0;
  uStack_5a0 = CONCAT44(uVar34,uVar33);
  uStack_588 = 0;
  puVar9 = &UNK_10f408dfd;
  ppuStack_5f0 = ppuStack_698;
  lStack_5e0 = uStack_6a0;
  auStack_5d0[0] = uStack_648;
  auStack_5d0[2] = uVar35;
  uStack_5b0 = uVar37;
  uStack_590 = uVar36;
  func_0x0001003a91d4(&UNK_10f408dfd);
  func_0x0001072ced80(&ppuStack_3d8,puVar9,puVar23,0xaaaaaaa,&ppuStack_5f0);
  func_0x00010740ec5c(&ppuStack_5f0,plVar32[0x15]);
  puStack_6d0 = ppuStack_5f0[2];
  pppuVar10 = &ppuStack_5f0;
  func_0x0001074119b0();
  puStack_5e8 = auStack_5d0;
  ppuStack_5f0 = &PTR_DAT_11099bc38;
  uStack_5d8 = 500;
  lStack_5e0 = 0;
  lVar29 = plVar32[0x16];
  func_0x0001072cf4dc();
  *pppuVar10 = &PTR_DAT_11099ba68;
  pppuVar10[1] = &puStack_6d0;
  pppuVar10[2] = (undefined **)&ppuStack_5f0;
  pppuVar10[3] = &puStack_618;
  pppuStack_1a8 = pppuVar10;
  FUN_107292e94(lVar29,&puStack_1c0);
  func_0x000107283e00(&puStack_1c0);
  ppuVar11 = &puStack_618;
  puVar16 = (ulong *)0x1;
  func_0x00010ae7dd64(ppuVar11,1,0);
  if ((int)ppuVar11 != 0) {
    puVar16 = puStack_5e8;
    func_0x0001003ac110(&ppuStack_3d8,puStack_5e8,(long)puStack_5e8 + lStack_5e0);
  }
  func_0x0001072d0374();
  (**(code **)(extraout_x8_00 + 0x38))(&lStack_6f0);
  if (cStack_6d8 == '\x01') {
    puStack_1c0 = (undefined1 *)((lStack_6e8 - lStack_6f0) / 0x250);
  }
  else {
    puStack_1c0 = (undefined1 *)0x0;
  }
  puStack_1b8 = (ulong *)0x0;
  func_0x0001003a91d4(&UNK_10f408e46);
  func_0x0001072cf868();
  func_0x0001072ced20();
  uVar5 = false;
  if (cStack_6d8 == '\x01') {
    for (; uVar5 = lStack_6f0 == lStack_6e8, !(bool)uVar5; lStack_6f0 = lStack_6f0 + 0x250) {
      FUN_10724ef84(auStack_608,lStack_6f0);
      puVar12 = auStack_608;
      func_0x0001005d466c();
      uStack_1b0 = *(undefined8 *)(lStack_6f0 + 0x90);
      uStack_1a0 = *(undefined8 *)(lStack_6f0 + 0x98);
      pppuStack_1a8 = (undefined ***)0x0;
      uStack_198 = 0;
      puStack_1c0 = puVar12;
      puStack_1b8 = puVar16;
      func_0x0001003a91d4(&UNK_10f409186);
      func_0x0001072cf868();
      func_0x0001072ced80();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_608);
    }
  }
  *plVar7 = (long)&PTR_DAT_1109ed280;
  plVar7[1] = 0;
  plVar7[2] = (long)&DAT_11383d918;
  plVar7[3] = (long)&DAT_11383d918;
  *(undefined4 *)(plVar7 + 4) = 0;
  func_0x0001003ac6d0(&puStack_1c0,&ppuStack_3d8);
  ppuVar17 = &puStack_1c0;
  func_0x0001005f70e4(plVar7 + 3,ppuVar17,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1c0);
  FUN_1072bbf54(&lStack_6f0);
  func_0x0001003ac644(&ppuStack_5f0);
  func_0x0001003ac644(&ppuStack_3d8);
  func_0x00010ae7dc90();
  func_0x0001072ce0cc(uStack_188);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1c0);
  func_0x000107941ef4(plVar7);
  FUN_1072bbf54(&lStack_6f0);
  func_0x0001003ac644(&ppuStack_5f0);
  func_0x0001003ac644(&ppuStack_3d8);
  func_0x00010ae7dc90(&puStack_618);
  func_0x0001072ce94c();
  func_0x0001072ce1e4();
  uStack_788 = extraout_x8_01;
  func_0x000100060964(auStack_808,&UNK_10f408e5a);
  puStack_890 = (undefined8 *)0x0;
  puStack_888 = (undefined8 *)0x0;
  puStack_880 = (undefined8 *)0x0;
  ppuVar30 = &puStack_890;
  puVar23 = (undefined8 *)*ppuVar17;
  puVar31 = (undefined8 *)ppuVar17[1];
  if ((long)puVar31 - (long)puVar23 == 0) {
LAB_1072b8ea4:
    for (; puVar23 != puVar31; puVar23 = puVar23 + 4) {
      uVar37 = *puVar23;
      uVar38 = puVar23[1];
      uVar35 = puVar23[2];
      uVar36 = puVar23[3];
      if (puStack_888 < puStack_880) {
        *puStack_888 = uVar38;
        puStack_888[1] = uVar37;
        puVar20 = puStack_888 + 4;
        puStack_888[2] = uVar36;
        puStack_888[3] = uVar35;
      }
      else {
        ppuVar13 = &puStack_890;
        FUN_1072bc0e8(ppuVar13,((long)puStack_888 - (long)puStack_890 >> 5) + 1);
        FUN_1072bc030(&ppuStack_850,ppuVar13,(long)puStack_888 - (long)puStack_890 >> 5,&puStack_880
                     );
        *puStack_840 = uVar38;
        puStack_840[1] = uVar37;
        puStack_840[2] = uVar36;
        puStack_840[3] = uVar35;
        puStack_840 = puStack_840 + 4;
        puVar27 = (undefined8 *)((long)pppuStack_848 - ((long)puStack_888 - (long)puStack_890));
        _memcpy(puVar27);
        puVar20 = puStack_840;
        puVar2 = puStack_890;
        puStack_890 = puVar27;
        func_0x0001072cf4c8(puVar2);
      }
      puStack_888 = puVar20;
    }
    func_0x0001072cf7a4();
    func_0x0001072cfe64(&ppuStack_850);
    func_0x0001072cfe64(auStack_7d0);
    FUN_1072cd9a0(auStack_818,auStack_7d0,1);
    uVar4 = (long)ppuStack_8a8 - (long)ppuStack_8a0 < 0;
    uVar5 = ppuStack_8a8 == ppuStack_8a0;
    if (ppuStack_8a8 < ppuStack_8a0) {
      FUN_1072bc110(ppuStack_8a8,&ppuStack_850);
      ppuVar13 = ppuStack_8a8 + 9;
    }
    else {
      lVar29 = (long)ppuStack_8a8 - (long)ppuStack_8b0;
      uVar18 = lVar29 / 0x48 + 1;
      if (0x38e38e38e38e38e < uVar18) {
        FUN_1072bc138();
        goto LAB_1072b94d0;
      }
      uVar1 = ((long)ppuStack_8a0 - (long)ppuStack_8b0) / 0x48;
      uVar22 = uVar1 * 2;
      if (uVar22 < uVar18 || uVar22 - uVar18 == 0) {
        uVar22 = uVar18;
      }
      if (0x1c71c71c71c71c6 < uVar1) {
        uVar22 = 0x38e38e38e38e38e;
      }
      if (uVar22 == 0) {
        lVar14 = 0;
      }
      else {
        if (0x38e38e38e38e38e < uVar22) {
          func_0x000104bd35f4();
          goto LAB_1072b94d0;
        }
        lVar14 = uVar22 * 0x48;
        __Znwm();
      }
      lVar29 = lVar14 + lVar29;
      FUN_1072bc110(lVar29,&ppuStack_850);
      ppuVar30 = ppuStack_8b0;
      ppuVar21 = (undefined8 **)
                 (lVar29 + (((long)ppuStack_8a8 - (long)ppuStack_8b0) / -0x48) * 0x48);
      ppuVar15 = ppuVar21;
      for (ppuVar13 = ppuStack_8b0; ppuVar13 != ppuStack_8a8; ppuVar13 = ppuVar13 + 9) {
        FUN_1072bc110(ppuVar15,ppuVar13);
        ppuVar15 = ppuVar15 + 9;
      }
      while( true ) {
        uVar4 = (long)ppuVar30 - (long)ppuStack_8a8 < 0;
        uVar5 = ppuVar30 == ppuStack_8a8;
        if ((bool)uVar5) break;
        FUN_1072bc144(ppuVar30);
        ppuVar30 = ppuVar30 + 9;
      }
      ppuVar13 = (undefined8 **)(lVar29 + 0x48);
      ppuStack_8a0 = (undefined8 **)(lVar14 + uVar22 * 0x48);
      bVar6 = ppuStack_8b0 != (undefined8 **)0x0;
      ppuStack_8b0 = ppuVar21;
      if (bVar6) {
        ppuStack_8a8 = ppuVar13;
        __ZdlPv();
      }
    }
    ppuStack_8a8 = ppuVar13;
    FUN_1072bc144(&ppuStack_850);
    func_0x000104c2f714(auStack_7d0);
    func_0x0001072cf384();
    ppuVar13 = &puStack_8c8;
    FUN_10726364c(ppuVar13,auStack_808);
    ppuVar21 = ppuStack_8d8;
    ppuVar15 = ppuVar13;
    if (ppuStack_8d8 != (undefined8 **)0x0) {
      uVar18 = (long)ppuStack_8d8 - 1;
      if (((ulong)ppuStack_8d8 & uVar18) == 0) {
        ppuVar30 = (undefined8 **)(uVar18 & (ulong)ppuVar13);
        uVar5 = true;
        uVar4 = false;
      }
      else {
        uVar4 = (long)ppuVar13 - (long)ppuStack_8d8 < 0;
        uVar5 = ppuVar13 == ppuStack_8d8;
        ppuVar30 = ppuVar13;
        if (ppuStack_8d8 <= ppuVar13) {
          uVar22 = 0;
          if (ppuStack_8d8 != (undefined8 **)0x0) {
            uVar22 = (ulong)ppuVar13 / (ulong)ppuStack_8d8;
          }
          ppuVar30 = (undefined8 **)((long)ppuVar13 - uVar22 * (long)ppuStack_8d8);
        }
      }
      plVar32 = *(long **)(lStack_8e0 + (long)ppuVar30 * 8);
      if (plVar32 != (long *)0x0) {
        do {
          while( true ) {
            plVar32 = (long *)*plVar32;
            if (plVar32 == (long *)0x0) goto LAB_1072b90ac;
            ppuVar19 = (undefined8 **)plVar32[1];
            uVar4 = (long)ppuVar19 - (long)ppuVar13 < 0;
            uVar5 = ppuVar19 == ppuVar13;
            if (!(bool)uVar5) break;
            ppuVar15 = (undefined8 **)(plVar32 + 2);
            func_0x000104c32db4(ppuVar15,auStack_808);
            if (((ulong)ppuVar15 & 1) != 0) goto LAB_1072b9320;
          }
          if (((ulong)ppuVar21 & uVar18) == 0) {
            ppuVar19 = (undefined8 **)((ulong)ppuVar19 & uVar18);
          }
          else if (ppuVar21 <= ppuVar19) {
            uVar22 = 0;
            if (ppuVar21 != (undefined8 **)0x0) {
              uVar22 = (ulong)ppuVar19 / (ulong)ppuVar21;
            }
            ppuVar19 = (undefined8 **)((long)ppuVar19 - uVar22 * (long)ppuVar21);
          }
          uVar4 = (long)ppuVar19 - (long)ppuVar30 < 0;
          uVar5 = ppuVar19 == ppuVar30;
        } while ((bool)uVar5);
      }
    }
LAB_1072b90ac:
    func_0x0001072cf804();
    puStack_840 = (undefined8 *)0x1;
    ppuStack_850 = ppuVar15;
    pppuStack_848 = &ppuStack_8d0;
    *ppuVar15 = (undefined8 *)0x0;
    ppuVar15[1] = ppuVar13;
    func_0x0001072cfe64(ppuVar15 + 2);
    ppuVar15[10] = puStack_888;
    ppuVar15[9] = puStack_890;
    ppuVar15[0xb] = puStack_880;
    puStack_888 = (undefined8 *)0x0;
    puStack_880 = (undefined8 *)0x0;
    puStack_890 = (undefined8 *)0x0;
    if ((ppuVar21 == (undefined8 **)0x0) ||
       (func_0x0001072d01ec((float)((long)puStack_8c8 + 1),fStack_8c0,(float)ppuVar21), (bool)uVar4)
       ) {
      func_0x0001072cfbe4();
      bVar3 = (undefined8 **)0x2 < ppuVar21;
      bVar6 = ppuVar21 == (undefined8 **)0x3;
      func_0x0001072ceb68();
      ppuVar30 = extraout_x8_02;
      if (!bVar3 || bVar6) {
        ppuVar30 = extraout_x9;
      }
      if ((long)ppuVar30 - 1U == 0) {
        ppuVar30 = (undefined8 **)0x2;
      }
      else if (((ulong)ppuVar30 & (long)ppuVar30 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      ppuVar19 = ppuStack_8d8;
      if (ppuStack_8d8 < ppuVar30) {
LAB_1072b9148:
        if ((ulong)ppuVar30 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_1072b94d0;
        }
        lVar29 = (long)ppuVar30 << 3;
        __Znwm(lVar29);
        func_0x0001072cdd38(&lStack_8e0,lVar29);
        ppuVar21 = (undefined8 **)0x0;
        lVar29 = lStack_8e0;
        ppuStack_8d8 = ppuVar30;
        while (ppuVar30 != ppuVar21) {
          func_0x0001072d01d4();
          lVar29 = extraout_x8_03;
          ppuVar21 = extraout_x9_00;
        }
        ppuVar21 = ppuVar30;
        if (ppuStack_8d0 != (undefined8 **)0x0) {
          ppuVar19 = (undefined8 **)ppuStack_8d0[1];
          uVar22 = (long)ppuVar30 - 1;
          uVar18 = 0;
          if (ppuVar30 != (undefined8 **)0x0) {
            uVar18 = (ulong)ppuVar19 / (ulong)ppuVar30;
          }
          ppuVar25 = ppuVar19;
          if (ppuVar30 <= ppuVar19) {
            ppuVar25 = (undefined8 **)((long)ppuVar19 - uVar18 * (long)ppuVar30);
          }
          if (((ulong)ppuVar30 & uVar22) == 0) {
            ppuVar25 = (undefined8 **)((ulong)ppuVar19 & uVar22);
          }
          *(undefined8 ****)(lVar29 + (long)ppuVar25 * 8) = &ppuStack_8d0;
          ppuVar19 = ppuStack_8d0;
          while (ppuVar24 = ppuVar19, ppuVar19 = (undefined8 **)*ppuVar24,
                ppuVar19 != (undefined8 **)0x0) {
            ppuVar26 = (undefined8 **)ppuVar19[1];
            if (((ulong)ppuVar30 & uVar22) == 0) {
              ppuVar26 = (undefined8 **)((ulong)ppuVar26 & uVar22);
            }
            else if (ppuVar30 <= ppuVar26) {
              uVar18 = 0;
              if (ppuVar30 != (undefined8 **)0x0) {
                uVar18 = (ulong)ppuVar26 / (ulong)ppuVar30;
              }
              ppuVar26 = (undefined8 **)((long)ppuVar26 - uVar18 * (long)ppuVar30);
            }
            if (ppuVar26 != ppuVar25) {
              if (*(long *)(lVar29 + (long)ppuVar26 * 8) == 0) {
                *(undefined8 ***)(lVar29 + (long)ppuVar26 * 8) = ppuVar24;
                ppuVar25 = ppuVar26;
              }
              else {
                *ppuVar24 = *ppuVar19;
                func_0x0001072ce844();
                lVar29 = extraout_x8_04;
                uVar22 = extraout_x9_01;
                ppuVar19 = extraout_x10;
                ppuVar25 = extraout_x11;
              }
            }
          }
        }
      }
      else {
        ppuVar21 = ppuStack_8d8;
        if (ppuVar30 < ppuStack_8d8) {
          ppuVar21 = (undefined8 **)(long)((float)puStack_8c8 / fStack_8c0);
          if ((ppuStack_8d8 < (undefined8 **)0x3) ||
             (((ulong)ppuStack_8d8 & (long)ppuStack_8d8 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x0001072ce5e0();
          }
          if (ppuVar30 <= ppuVar21) {
            ppuVar30 = ppuVar21;
          }
          ppuVar21 = ppuStack_8d8;
          if (ppuVar30 < ppuVar19) {
            if (ppuVar30 != (undefined8 **)0x0) goto LAB_1072b9148;
            func_0x0001072cdd38(&lStack_8e0,0);
            ppuStack_8d8 = (undefined8 **)0x0;
            ppuVar21 = (undefined8 **)0x0;
          }
        }
      }
      if (((ulong)ppuVar21 & (long)ppuVar21 - 1U) == 0) {
        uVar5 = 1;
        ppuVar30 = (undefined8 **)((long)ppuVar21 - 1U & (ulong)ppuVar13);
      }
      else {
        uVar5 = ppuVar13 == ppuVar21;
        ppuVar30 = ppuVar13;
        if (ppuVar21 <= ppuVar13) {
          uVar18 = 0;
          if (ppuVar21 != (undefined8 **)0x0) {
            uVar18 = (ulong)ppuVar13 / (ulong)ppuVar21;
          }
          ppuVar30 = (undefined8 **)((long)ppuVar13 - uVar18 * (long)ppuVar21);
        }
      }
    }
    puVar23 = *(undefined8 **)(lStack_8e0 + (long)ppuVar30 * 8);
    if (puVar23 == (undefined8 *)0x0) {
      *ppuVar15 = ppuStack_8d0;
      *(undefined8 ****)(lStack_8e0 + (long)ppuVar30 * 8) = &ppuStack_8d0;
      ppuStack_8d0 = ppuVar15;
      if (*ppuVar15 != (undefined8 *)0x0) {
        ppuVar30 = (undefined8 **)(*ppuVar15)[1];
        if (((ulong)ppuVar21 & (long)ppuVar21 - 1U) == 0) {
          ppuVar30 = (undefined8 **)((ulong)ppuVar30 & (long)ppuVar21 - 1U);
          uVar5 = true;
        }
        else {
          uVar5 = ppuVar30 == ppuVar21;
          if (ppuVar21 <= ppuVar30) {
            uVar18 = 0;
            if (ppuVar21 != (undefined8 **)0x0) {
              uVar18 = (ulong)ppuVar30 / (ulong)ppuVar21;
            }
            ppuVar30 = (undefined8 **)((long)ppuVar30 - uVar18 * (long)ppuVar21);
          }
        }
        *(undefined8 ***)(lStack_8e0 + (long)ppuVar30 * 8) = ppuVar15;
      }
    }
    else {
      *ppuVar15 = (undefined8 *)*puVar23;
      *puVar23 = ppuVar15;
    }
    ppuStack_850 = (undefined8 **)0x0;
    puStack_8c8 = (undefined8 *)((long)puStack_8c8 + 1);
    FUN_1072cdd50(&ppuStack_850);
LAB_1072b9320:
    plVar7 = (long *)plVar7[0x16];
    if ((*(byte *)(plVar7 + 1) & 1) == 0) {
      plVar32 = plVar7;
      (**(code **)(*plVar7 + 0x10))();
      if ((int)plVar32 == 0) {
        (**(code **)(*plVar7 + 0x20))(&puStack_878,plVar7);
        FUN_10724bb70(alStack_860,auStack_870);
        if (alStack_860[0] != 0) {
          func_0x0001072d02d0();
          func_0x0001072cf7a4();
          ppuVar30 = apuStack_7b8;
          FUN_1072cdd90(ppuVar30,&lStack_8e0);
          func_0x0001072cf804();
          FUN_1072cde00(&ppuStack_850,auStack_7d0);
          *ppuVar30 = &PTR_FUN_11099bae8;
          ppuVar30[1] = puStack_878;
          ppuVar30[3] = (undefined8 *)0x1;
          ppuVar30[2] = (undefined8 *)0xd8;
          FUN_1072cde00(ppuVar30 + 4,&ppuStack_850);
          func_0x0001072cdf00(&ppuStack_850);
          ppuStack_850 = ppuVar30;
          func_0x0001072cdf00(auStack_7d0);
          func_0x0001073ae140(alStack_860[0],&ppuStack_850);
          ppuVar30 = ppuStack_850;
          ppuStack_850 = (undefined8 **)0x0;
          if (ppuVar30 != (undefined8 **)0x0) {
            func_0x0001072ce338();
          }
        }
        func_0x00010724bcd8(alStack_860);
        FUN_10724ae28(auStack_870);
      }
      else {
        (**(code **)(*plVar7 + 0x18))();
        if (plVar7 != (long *)0x0) {
          pcVar28 = *(code **)(*plVar7 + 0xd8);
          func_0x0001072d02d0();
          ppuStack_8a8 = (undefined8 **)0x0;
          ppuStack_8a0 = (undefined8 **)0x0;
          ppuStack_8b0 = (undefined8 **)0x0;
          FUN_1072cdd90(&ppuStack_850,&lStack_8e0);
          (*pcVar28)(plVar7,auStack_7d0,&ppuStack_850);
          FUN_1072cdc88(&ppuStack_850);
          func_0x0001072bc168(auStack_7d0);
        }
      }
    }
    FUN_1072cdc88(&lStack_8e0);
    func_0x0001072bc168(&ppuStack_8b0);
    func_0x0001072bc1f0(&puStack_890);
    func_0x000104c2f714(auStack_808);
    func_0x0001072ce0cc(uStack_788);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar18 = (long)puVar31 - (long)puVar23 >> 5;
    if (uVar18 >> 0x3b == 0) {
      FUN_1072bc030(&ppuStack_850,uVar18,0,&puStack_880);
      func_0x0001072cf838(pppuStack_848);
      puVar31 = puStack_890;
      puStack_890 = puVar23;
      func_0x0001072cf4c8(puVar31,puStack_840);
      puVar23 = (undefined8 *)*ppuVar17;
      puVar31 = (undefined8 *)ppuVar17[1];
      goto LAB_1072b8ea4;
    }
  }
  FUN_1072bbffc();
LAB_1072b94d0:
                    /* WARNING: Does not return */
  pcVar28 = (code *)SoftwareBreakpoint(1,0x1072b94d4);
  (*pcVar28)();
}



/* Entry: 1072b89c0; end: 1072b8d57;  */

void FUN_1072b89c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 **ppuVar11;
  long lVar12;
  undefined8 **ppuVar13;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  undefined1 **ppuVar17;
  ulong uVar18;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 **ppuVar19;
  undefined8 **extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar20;
  undefined8 **extraout_x9;
  undefined8 **ppuVar21;
  undefined8 **extraout_x9_00;
  ulong uVar22;
  ulong extraout_x9_01;
  undefined8 *puVar23;
  undefined8 **ppuVar24;
  undefined8 **extraout_x10;
  undefined8 **ppuVar25;
  undefined8 **extraout_x11;
  undefined8 **ppuVar26;
  undefined8 *unaff_x19;
  undefined8 *puVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 **ppuVar30;
  undefined8 *puVar31;
  long *plVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lStack_7b0;
  undefined8 **ppuStack_7a8;
  undefined8 **ppuStack_7a0;
  undefined8 *puStack_798;
  float fStack_790;
  undefined8 **ppuStack_780;
  undefined8 **ppuStack_778;
  undefined8 **ppuStack_770;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined1 auStack_740 [16];
  long alStack_730 [2];
  undefined8 **ppuStack_720;
  undefined8 ***pppuStack_718;
  undefined8 *puStack_710;
  undefined1 auStack_6e8 [16];
  undefined1 auStack_6d8 [56];
  undefined1 auStack_6a0 [24];
  undefined8 *apuStack_688 [6];
  undefined8 uStack_658;
  long lStack_5c0;
  long lStack_5b8;
  char cStack_5a8;
  undefined *puStack_5a0;
  undefined1 auStack_598 [40];
  undefined8 uStack_570;
  undefined **ppuStack_568;
  char cStack_560;
  ulong uStack_518;
  char cStack_510;
  undefined *puStack_4e8;
  undefined1 uStack_4e0;
  undefined1 auStack_4d8 [24];
  undefined **ppuStack_4c0;
  ulong *puStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  ulong auStack_4a0 [3];
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined **ppuStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [504];
  undefined1 *puStack_90;
  ulong *puStack_88;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  uVar34 = (undefined4)((ulong)param_2 >> 0x20);
  uVar33 = (undefined4)param_2;
  lVar14 = param_3;
  func_0x0001072ce294();
  puStack_4e8 = (undefined *)0x0;
  uStack_4e0 = 0;
  puStack_2a0 = auStack_288;
  ppuStack_2a8 = &PTR_DAT_11099bc38;
  uVar36 = 0;
  uStack_290 = 500;
  uStack_298 = 0;
  ppuStack_4c0 = (undefined **)((ulong)ppuStack_4c0 & 0xffffffffffffff00);
  auStack_4a0[0] = auStack_4a0[0] & 0xffffffffffffff00;
  uStack_58 = extraout_x8;
  func_0x00010740e07c(&uStack_570,*(undefined8 *)(lVar14 + 0xa8),&ppuStack_4c0);
  puVar23 = &uStack_570;
  func_0x00010740e0f0(auStack_598,*(undefined8 *)(param_3 + 0xa8),puVar23);
  FUN_1072594c0(auStack_598);
  uVar29 = CONCAT44(uVar34,uVar33);
  uVar35 = uVar36;
  func_0x0001072594e0(auStack_598);
  if (cStack_560 == '\0') {
    ppuStack_568 = (undefined **)0x0;
    uStack_570 = 0;
  }
  if (cStack_510 == '\0') {
    uStack_518 = 0;
  }
  puStack_4b8 = (ulong *)0x0;
  uStack_4a8 = 0;
  auStack_4a0[1] = 0;
  uStack_488 = 0;
  uStack_478 = 0;
  uStack_468 = 0;
  uStack_470 = CONCAT44(uVar34,uVar33);
  uStack_458 = 0;
  puVar7 = &UNK_10f408dfd;
  ppuStack_4c0 = ppuStack_568;
  lStack_4b0 = uStack_570;
  auStack_4a0[0] = uStack_518;
  auStack_4a0[2] = uVar29;
  uStack_480 = uVar36;
  uStack_460 = uVar35;
  func_0x0001003a91d4(&UNK_10f408dfd);
  func_0x0001072ced80(&ppuStack_2a8,puVar7,puVar23,0xaaaaaaa,&ppuStack_4c0);
  func_0x00010740ec5c(&ppuStack_4c0,*(undefined8 *)(param_3 + 0xa8));
  puStack_5a0 = ppuStack_4c0[2];
  pppuVar8 = &ppuStack_4c0;
  func_0x0001074119b0();
  puStack_4b8 = auStack_4a0;
  ppuStack_4c0 = &PTR_DAT_11099bc38;
  uStack_4a8 = 500;
  lStack_4b0 = 0;
  uVar29 = *(undefined8 *)(param_3 + 0xb0);
  func_0x0001072cf4dc();
  *pppuVar8 = &PTR_DAT_11099ba68;
  pppuVar8[1] = &puStack_5a0;
  pppuVar8[2] = (undefined **)&ppuStack_4c0;
  pppuVar8[3] = &puStack_4e8;
  pppuStack_78 = pppuVar8;
  FUN_107292e94(uVar29,&puStack_90);
  func_0x000107283e00(&puStack_90);
  ppuVar9 = &puStack_4e8;
  puVar16 = (ulong *)0x1;
  func_0x00010ae7dd64(ppuVar9,1,0);
  if ((int)ppuVar9 != 0) {
    puVar16 = puStack_4b8;
    func_0x0001003ac110(&ppuStack_2a8,puStack_4b8,(long)puStack_4b8 + lStack_4b0);
  }
  func_0x0001072d0374();
  (**(code **)(extraout_x8_00 + 0x38))(&lStack_5c0);
  if (cStack_5a8 == '\x01') {
    puStack_90 = (undefined1 *)((lStack_5b8 - lStack_5c0) / 0x250);
  }
  else {
    puStack_90 = (undefined1 *)0x0;
  }
  puStack_88 = (ulong *)0x0;
  func_0x0001003a91d4(&UNK_10f408e46);
  func_0x0001072cf868();
  func_0x0001072ced20();
  uVar5 = false;
  if (cStack_5a8 == '\x01') {
    for (; uVar5 = lStack_5c0 == lStack_5b8, !(bool)uVar5; lStack_5c0 = lStack_5c0 + 0x250) {
      FUN_10724ef84(auStack_4d8,lStack_5c0);
      puVar10 = auStack_4d8;
      func_0x0001005d466c();
      uStack_80 = *(undefined8 *)(lStack_5c0 + 0x90);
      uStack_70 = *(undefined8 *)(lStack_5c0 + 0x98);
      pppuStack_78 = (undefined ***)0x0;
      uStack_68 = 0;
      puStack_90 = puVar10;
      puStack_88 = puVar16;
      func_0x0001003a91d4(&UNK_10f409186);
      func_0x0001072cf868();
      func_0x0001072ced80();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d8);
    }
  }
  *unaff_x19 = &PTR_DAT_1109ed280;
  unaff_x19[1] = 0;
  unaff_x19[2] = &DAT_11383d918;
  unaff_x19[3] = &DAT_11383d918;
  *(undefined4 *)(unaff_x19 + 4) = 0;
  func_0x0001003ac6d0(&puStack_90,&ppuStack_2a8);
  ppuVar17 = &puStack_90;
  func_0x0001005f70e4(unaff_x19 + 3,ppuVar17,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_90);
  FUN_1072bbf54(&lStack_5c0);
  func_0x0001003ac644(&ppuStack_4c0);
  func_0x0001003ac644(&ppuStack_2a8);
  func_0x00010ae7dc90();
  func_0x0001072ce0cc(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_90);
  func_0x000107941ef4();
  FUN_1072bbf54(&lStack_5c0);
  func_0x0001003ac644(&ppuStack_4c0);
  func_0x0001003ac644(&ppuStack_2a8);
  func_0x00010ae7dc90(&puStack_4e8);
  func_0x0001072ce94c();
  func_0x0001072ce1e4();
  uStack_658 = extraout_x8_01;
  func_0x000100060964(auStack_6d8,&UNK_10f408e5a);
  puStack_760 = (undefined8 *)0x0;
  puStack_758 = (undefined8 *)0x0;
  puStack_750 = (undefined8 *)0x0;
  ppuVar30 = &puStack_760;
  puVar23 = (undefined8 *)*ppuVar17;
  puVar31 = (undefined8 *)ppuVar17[1];
  if ((long)puVar31 - (long)puVar23 == 0) {
LAB_1072b8ea4:
    for (; puVar23 != puVar31; puVar23 = puVar23 + 4) {
      uVar36 = *puVar23;
      uVar37 = puVar23[1];
      uVar29 = puVar23[2];
      uVar35 = puVar23[3];
      if (puStack_758 < puStack_750) {
        *puStack_758 = uVar37;
        puStack_758[1] = uVar36;
        puVar20 = puStack_758 + 4;
        puStack_758[2] = uVar35;
        puStack_758[3] = uVar29;
      }
      else {
        ppuVar11 = &puStack_760;
        FUN_1072bc0e8(ppuVar11,((long)puStack_758 - (long)puStack_760 >> 5) + 1);
        FUN_1072bc030(&ppuStack_720,ppuVar11,(long)puStack_758 - (long)puStack_760 >> 5,&puStack_750
                     );
        *puStack_710 = uVar37;
        puStack_710[1] = uVar36;
        puStack_710[2] = uVar35;
        puStack_710[3] = uVar29;
        puStack_710 = puStack_710 + 4;
        puVar27 = (undefined8 *)((long)pppuStack_718 - ((long)puStack_758 - (long)puStack_760));
        _memcpy(puVar27);
        puVar20 = puStack_710;
        puVar2 = puStack_760;
        puStack_760 = puVar27;
        func_0x0001072cf4c8(puVar2);
      }
      puStack_758 = puVar20;
    }
    func_0x0001072cf7a4();
    func_0x0001072cfe64(&ppuStack_720);
    func_0x0001072cfe64(auStack_6a0);
    FUN_1072cd9a0(auStack_6e8,auStack_6a0,1);
    uVar4 = (long)ppuStack_778 - (long)ppuStack_770 < 0;
    uVar5 = ppuStack_778 == ppuStack_770;
    if (ppuStack_778 < ppuStack_770) {
      FUN_1072bc110(ppuStack_778,&ppuStack_720);
      ppuVar11 = ppuStack_778 + 9;
    }
    else {
      lVar14 = (long)ppuStack_778 - (long)ppuStack_780;
      uVar18 = lVar14 / 0x48 + 1;
      if (0x38e38e38e38e38e < uVar18) {
        FUN_1072bc138();
        goto LAB_1072b94d0;
      }
      uVar1 = ((long)ppuStack_770 - (long)ppuStack_780) / 0x48;
      uVar22 = uVar1 * 2;
      if (uVar22 < uVar18 || uVar22 - uVar18 == 0) {
        uVar22 = uVar18;
      }
      if (0x1c71c71c71c71c6 < uVar1) {
        uVar22 = 0x38e38e38e38e38e;
      }
      if (uVar22 == 0) {
        lVar12 = 0;
      }
      else {
        if (0x38e38e38e38e38e < uVar22) {
          func_0x000104bd35f4();
          goto LAB_1072b94d0;
        }
        lVar12 = uVar22 * 0x48;
        __Znwm();
      }
      lVar14 = lVar12 + lVar14;
      FUN_1072bc110(lVar14,&ppuStack_720);
      ppuVar30 = ppuStack_780;
      ppuVar21 = (undefined8 **)
                 (lVar14 + (((long)ppuStack_778 - (long)ppuStack_780) / -0x48) * 0x48);
      ppuVar13 = ppuVar21;
      for (ppuVar11 = ppuStack_780; ppuVar11 != ppuStack_778; ppuVar11 = ppuVar11 + 9) {
        FUN_1072bc110(ppuVar13,ppuVar11);
        ppuVar13 = ppuVar13 + 9;
      }
      while( true ) {
        uVar4 = (long)ppuVar30 - (long)ppuStack_778 < 0;
        uVar5 = ppuVar30 == ppuStack_778;
        if ((bool)uVar5) break;
        FUN_1072bc144(ppuVar30);
        ppuVar30 = ppuVar30 + 9;
      }
      ppuVar11 = (undefined8 **)(lVar14 + 0x48);
      ppuStack_770 = (undefined8 **)(lVar12 + uVar22 * 0x48);
      bVar6 = ppuStack_780 != (undefined8 **)0x0;
      ppuStack_780 = ppuVar21;
      if (bVar6) {
        ppuStack_778 = ppuVar11;
        __ZdlPv();
      }
    }
    ppuStack_778 = ppuVar11;
    FUN_1072bc144(&ppuStack_720);
    func_0x000104c2f714(auStack_6a0);
    func_0x0001072cf384();
    ppuVar11 = &puStack_798;
    FUN_10726364c(ppuVar11,auStack_6d8);
    ppuVar21 = ppuStack_7a8;
    ppuVar13 = ppuVar11;
    if (ppuStack_7a8 != (undefined8 **)0x0) {
      uVar18 = (long)ppuStack_7a8 - 1;
      if (((ulong)ppuStack_7a8 & uVar18) == 0) {
        ppuVar30 = (undefined8 **)(uVar18 & (ulong)ppuVar11);
        uVar5 = true;
        uVar4 = false;
      }
      else {
        uVar4 = (long)ppuVar11 - (long)ppuStack_7a8 < 0;
        uVar5 = ppuVar11 == ppuStack_7a8;
        ppuVar30 = ppuVar11;
        if (ppuStack_7a8 <= ppuVar11) {
          uVar22 = 0;
          if (ppuStack_7a8 != (undefined8 **)0x0) {
            uVar22 = (ulong)ppuVar11 / (ulong)ppuStack_7a8;
          }
          ppuVar30 = (undefined8 **)((long)ppuVar11 - uVar22 * (long)ppuStack_7a8);
        }
      }
      plVar32 = *(long **)(lStack_7b0 + (long)ppuVar30 * 8);
      if (plVar32 != (long *)0x0) {
        do {
          while( true ) {
            plVar32 = (long *)*plVar32;
            if (plVar32 == (long *)0x0) goto LAB_1072b90ac;
            ppuVar19 = (undefined8 **)plVar32[1];
            uVar4 = (long)ppuVar19 - (long)ppuVar11 < 0;
            uVar5 = ppuVar19 == ppuVar11;
            if (!(bool)uVar5) break;
            ppuVar13 = (undefined8 **)(plVar32 + 2);
            func_0x000104c32db4(ppuVar13,auStack_6d8);
            if (((ulong)ppuVar13 & 1) != 0) goto LAB_1072b9320;
          }
          if (((ulong)ppuVar21 & uVar18) == 0) {
            ppuVar19 = (undefined8 **)((ulong)ppuVar19 & uVar18);
          }
          else if (ppuVar21 <= ppuVar19) {
            uVar22 = 0;
            if (ppuVar21 != (undefined8 **)0x0) {
              uVar22 = (ulong)ppuVar19 / (ulong)ppuVar21;
            }
            ppuVar19 = (undefined8 **)((long)ppuVar19 - uVar22 * (long)ppuVar21);
          }
          uVar4 = (long)ppuVar19 - (long)ppuVar30 < 0;
          uVar5 = ppuVar19 == ppuVar30;
        } while ((bool)uVar5);
      }
    }
LAB_1072b90ac:
    func_0x0001072cf804();
    puStack_710 = (undefined8 *)0x1;
    ppuStack_720 = ppuVar13;
    pppuStack_718 = &ppuStack_7a0;
    *ppuVar13 = (undefined8 *)0x0;
    ppuVar13[1] = ppuVar11;
    func_0x0001072cfe64(ppuVar13 + 2);
    ppuVar13[10] = puStack_758;
    ppuVar13[9] = puStack_760;
    ppuVar13[0xb] = puStack_750;
    puStack_758 = (undefined8 *)0x0;
    puStack_750 = (undefined8 *)0x0;
    puStack_760 = (undefined8 *)0x0;
    if ((ppuVar21 == (undefined8 **)0x0) ||
       (func_0x0001072d01ec((float)((long)puStack_798 + 1),fStack_790,(float)ppuVar21), (bool)uVar4)
       ) {
      func_0x0001072cfbe4();
      bVar3 = (undefined8 **)0x2 < ppuVar21;
      bVar6 = ppuVar21 == (undefined8 **)0x3;
      func_0x0001072ceb68();
      ppuVar30 = extraout_x8_02;
      if (!bVar3 || bVar6) {
        ppuVar30 = extraout_x9;
      }
      if ((long)ppuVar30 - 1U == 0) {
        ppuVar30 = (undefined8 **)0x2;
      }
      else if (((ulong)ppuVar30 & (long)ppuVar30 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      ppuVar19 = ppuStack_7a8;
      if (ppuStack_7a8 < ppuVar30) {
LAB_1072b9148:
        if ((ulong)ppuVar30 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_1072b94d0;
        }
        lVar14 = (long)ppuVar30 << 3;
        __Znwm(lVar14);
        func_0x0001072cdd38(&lStack_7b0,lVar14);
        ppuVar21 = (undefined8 **)0x0;
        lVar14 = lStack_7b0;
        ppuStack_7a8 = ppuVar30;
        while (ppuVar30 != ppuVar21) {
          func_0x0001072d01d4();
          lVar14 = extraout_x8_03;
          ppuVar21 = extraout_x9_00;
        }
        ppuVar21 = ppuVar30;
        if (ppuStack_7a0 != (undefined8 **)0x0) {
          ppuVar19 = (undefined8 **)ppuStack_7a0[1];
          uVar22 = (long)ppuVar30 - 1;
          uVar18 = 0;
          if (ppuVar30 != (undefined8 **)0x0) {
            uVar18 = (ulong)ppuVar19 / (ulong)ppuVar30;
          }
          ppuVar25 = ppuVar19;
          if (ppuVar30 <= ppuVar19) {
            ppuVar25 = (undefined8 **)((long)ppuVar19 - uVar18 * (long)ppuVar30);
          }
          if (((ulong)ppuVar30 & uVar22) == 0) {
            ppuVar25 = (undefined8 **)((ulong)ppuVar19 & uVar22);
          }
          *(undefined8 ****)(lVar14 + (long)ppuVar25 * 8) = &ppuStack_7a0;
          ppuVar19 = ppuStack_7a0;
          while (ppuVar24 = ppuVar19, ppuVar19 = (undefined8 **)*ppuVar24,
                ppuVar19 != (undefined8 **)0x0) {
            ppuVar26 = (undefined8 **)ppuVar19[1];
            if (((ulong)ppuVar30 & uVar22) == 0) {
              ppuVar26 = (undefined8 **)((ulong)ppuVar26 & uVar22);
            }
            else if (ppuVar30 <= ppuVar26) {
              uVar18 = 0;
              if (ppuVar30 != (undefined8 **)0x0) {
                uVar18 = (ulong)ppuVar26 / (ulong)ppuVar30;
              }
              ppuVar26 = (undefined8 **)((long)ppuVar26 - uVar18 * (long)ppuVar30);
            }
            if (ppuVar26 != ppuVar25) {
              if (*(long *)(lVar14 + (long)ppuVar26 * 8) == 0) {
                *(undefined8 ***)(lVar14 + (long)ppuVar26 * 8) = ppuVar24;
                ppuVar25 = ppuVar26;
              }
              else {
                *ppuVar24 = *ppuVar19;
                func_0x0001072ce844();
                lVar14 = extraout_x8_04;
                uVar22 = extraout_x9_01;
                ppuVar19 = extraout_x10;
                ppuVar25 = extraout_x11;
              }
            }
          }
        }
      }
      else {
        ppuVar21 = ppuStack_7a8;
        if (ppuVar30 < ppuStack_7a8) {
          ppuVar21 = (undefined8 **)(long)((float)puStack_798 / fStack_790);
          if ((ppuStack_7a8 < (undefined8 **)0x3) ||
             (((ulong)ppuStack_7a8 & (long)ppuStack_7a8 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x0001072ce5e0();
          }
          if (ppuVar30 <= ppuVar21) {
            ppuVar30 = ppuVar21;
          }
          ppuVar21 = ppuStack_7a8;
          if (ppuVar30 < ppuVar19) {
            if (ppuVar30 != (undefined8 **)0x0) goto LAB_1072b9148;
            func_0x0001072cdd38(&lStack_7b0,0);
            ppuStack_7a8 = (undefined8 **)0x0;
            ppuVar21 = (undefined8 **)0x0;
          }
        }
      }
      if (((ulong)ppuVar21 & (long)ppuVar21 - 1U) == 0) {
        uVar5 = 1;
        ppuVar30 = (undefined8 **)((long)ppuVar21 - 1U & (ulong)ppuVar11);
      }
      else {
        uVar5 = ppuVar11 == ppuVar21;
        ppuVar30 = ppuVar11;
        if (ppuVar21 <= ppuVar11) {
          uVar18 = 0;
          if (ppuVar21 != (undefined8 **)0x0) {
            uVar18 = (ulong)ppuVar11 / (ulong)ppuVar21;
          }
          ppuVar30 = (undefined8 **)((long)ppuVar11 - uVar18 * (long)ppuVar21);
        }
      }
    }
    puVar23 = *(undefined8 **)(lStack_7b0 + (long)ppuVar30 * 8);
    if (puVar23 == (undefined8 *)0x0) {
      *ppuVar13 = ppuStack_7a0;
      *(undefined8 ****)(lStack_7b0 + (long)ppuVar30 * 8) = &ppuStack_7a0;
      ppuStack_7a0 = ppuVar13;
      if (*ppuVar13 != (undefined8 *)0x0) {
        ppuVar30 = (undefined8 **)(*ppuVar13)[1];
        if (((ulong)ppuVar21 & (long)ppuVar21 - 1U) == 0) {
          ppuVar30 = (undefined8 **)((ulong)ppuVar30 & (long)ppuVar21 - 1U);
          uVar5 = true;
        }
        else {
          uVar5 = ppuVar30 == ppuVar21;
          if (ppuVar21 <= ppuVar30) {
            uVar18 = 0;
            if (ppuVar21 != (undefined8 **)0x0) {
              uVar18 = (ulong)ppuVar30 / (ulong)ppuVar21;
            }
            ppuVar30 = (undefined8 **)((long)ppuVar30 - uVar18 * (long)ppuVar21);
          }
        }
        *(undefined8 ***)(lStack_7b0 + (long)ppuVar30 * 8) = ppuVar13;
      }
    }
    else {
      *ppuVar13 = (undefined8 *)*puVar23;
      *puVar23 = ppuVar13;
    }
    ppuStack_720 = (undefined8 **)0x0;
    puStack_798 = (undefined8 *)((long)puStack_798 + 1);
    FUN_1072cdd50(&ppuStack_720);
LAB_1072b9320:
    plVar32 = (long *)unaff_x19[0x16];
    if ((*(byte *)(plVar32 + 1) & 1) == 0) {
      plVar15 = plVar32;
      (**(code **)(*plVar32 + 0x10))();
      if ((int)plVar15 == 0) {
        (**(code **)(*plVar32 + 0x20))(&puStack_748,plVar32);
        FUN_10724bb70(alStack_730,auStack_740);
        if (alStack_730[0] != 0) {
          func_0x0001072d02d0();
          func_0x0001072cf7a4();
          ppuVar30 = apuStack_688;
          FUN_1072cdd90(ppuVar30,&lStack_7b0);
          func_0x0001072cf804();
          FUN_1072cde00(&ppuStack_720,auStack_6a0);
          *ppuVar30 = &PTR_FUN_11099bae8;
          ppuVar30[1] = puStack_748;
          ppuVar30[3] = (undefined8 *)0x1;
          ppuVar30[2] = (undefined8 *)0xd8;
          FUN_1072cde00(ppuVar30 + 4,&ppuStack_720);
          func_0x0001072cdf00(&ppuStack_720);
          ppuStack_720 = ppuVar30;
          func_0x0001072cdf00(auStack_6a0);
          func_0x0001073ae140(alStack_730[0],&ppuStack_720);
          ppuVar30 = ppuStack_720;
          ppuStack_720 = (undefined8 **)0x0;
          if (ppuVar30 != (undefined8 **)0x0) {
            func_0x0001072ce338();
          }
        }
        func_0x00010724bcd8(alStack_730);
        FUN_10724ae28(auStack_740);
      }
      else {
        (**(code **)(*plVar32 + 0x18))();
        if (plVar32 != (long *)0x0) {
          pcVar28 = *(code **)(*plVar32 + 0xd8);
          func_0x0001072d02d0();
          ppuStack_778 = (undefined8 **)0x0;
          ppuStack_770 = (undefined8 **)0x0;
          ppuStack_780 = (undefined8 **)0x0;
          FUN_1072cdd90(&ppuStack_720,&lStack_7b0);
          (*pcVar28)(plVar32,auStack_6a0,&ppuStack_720);
          FUN_1072cdc88(&ppuStack_720);
          func_0x0001072bc168(auStack_6a0);
        }
      }
    }
    FUN_1072cdc88(&lStack_7b0);
    func_0x0001072bc168(&ppuStack_780);
    func_0x0001072bc1f0(&puStack_760);
    func_0x000104c2f714(auStack_6d8);
    func_0x0001072ce0cc(uStack_658);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar18 = (long)puVar31 - (long)puVar23 >> 5;
    if (uVar18 >> 0x3b == 0) {
      FUN_1072bc030(&ppuStack_720,uVar18,0,&puStack_750);
      func_0x0001072cf838(pppuStack_718);
      puVar31 = puStack_760;
      puStack_760 = puVar23;
      func_0x0001072cf4c8(puVar31,puStack_710);
      puVar23 = (undefined8 *)*ppuVar17;
      puVar31 = (undefined8 *)ppuVar17[1];
      goto LAB_1072b8ea4;
    }
  }
  FUN_1072bbffc();
LAB_1072b94d0:
                    /* WARNING: Does not return */
  pcVar28 = (code *)SoftwareBreakpoint(1,0x1072b94d4);
  (*pcVar28)();
}



/* Entry: 1072b8d58; end: 1072b9593;  */

void FUN_1072b8d58(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 **ppuVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  undefined8 **ppuVar13;
  undefined8 **extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar14;
  undefined8 **extraout_x9;
  undefined8 **ppuVar15;
  undefined8 **extraout_x9_00;
  ulong uVar16;
  ulong extraout_x9_01;
  undefined8 *puVar17;
  undefined8 **ppuVar18;
  undefined8 **extraout_x10;
  undefined8 **ppuVar19;
  undefined8 **extraout_x11;
  undefined8 **ppuVar20;
  long unaff_x19;
  undefined8 *puVar21;
  code *pcVar22;
  undefined8 **ppuVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 *puStack_1c8;
  float fStack_1c0;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [16];
  long alStack_160 [2];
  undefined8 **ppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [24];
  undefined8 *apuStack_b8 [6];
  undefined8 uStack_88;
  
  func_0x0001072ce1e4();
  uStack_88 = extraout_x8;
  func_0x000100060964(auStack_108,&UNK_10f408e5a);
  puStack_190 = (undefined8 *)0x0;
  puStack_188 = (undefined8 *)0x0;
  puStack_180 = (undefined8 *)0x0;
  ppuVar23 = &puStack_190;
  puVar17 = (undefined8 *)*param_2;
  puVar24 = (undefined8 *)param_2[1];
  if ((long)puVar24 - (long)puVar17 == 0) {
LAB_1072b8ea4:
    for (; puVar17 != puVar24; puVar17 = puVar17 + 4) {
      uVar28 = *puVar17;
      uVar29 = puVar17[1];
      uVar26 = puVar17[2];
      uVar27 = puVar17[3];
      if (puStack_188 < puStack_180) {
        *puStack_188 = uVar29;
        puStack_188[1] = uVar28;
        puVar14 = puStack_188 + 4;
        puStack_188[2] = uVar27;
        puStack_188[3] = uVar26;
      }
      else {
        ppuVar7 = &puStack_190;
        FUN_1072bc0e8(ppuVar7,((long)puStack_188 - (long)puStack_190 >> 5) + 1);
        FUN_1072bc030(&ppuStack_150,ppuVar7,(long)puStack_188 - (long)puStack_190 >> 5,&puStack_180)
        ;
        *puStack_140 = uVar29;
        puStack_140[1] = uVar28;
        puStack_140[2] = uVar27;
        puStack_140[3] = uVar26;
        puStack_140 = puStack_140 + 4;
        puVar21 = (undefined8 *)((long)pppuStack_148 - ((long)puStack_188 - (long)puStack_190));
        _memcpy(puVar21);
        puVar14 = puStack_140;
        puVar2 = puStack_190;
        puStack_190 = puVar21;
        func_0x0001072cf4c8(puVar2);
      }
      puStack_188 = puVar14;
    }
    func_0x0001072cf7a4();
    func_0x0001072cfe64(&ppuStack_150);
    func_0x0001072cfe64(auStack_d0);
    FUN_1072cd9a0(auStack_118,auStack_d0,1);
    uVar4 = (long)ppuStack_1a8 - (long)ppuStack_1a0 < 0;
    uVar5 = ppuStack_1a8 == ppuStack_1a0;
    if (ppuStack_1a8 < ppuStack_1a0) {
      FUN_1072bc110(ppuStack_1a8,&ppuStack_150);
      ppuVar7 = ppuStack_1a8 + 9;
    }
    else {
      lVar10 = (long)ppuStack_1a8 - (long)ppuStack_1b0;
      uVar12 = lVar10 / 0x48 + 1;
      if (0x38e38e38e38e38e < uVar12) {
        FUN_1072bc138();
        goto LAB_1072b94d0;
      }
      uVar1 = ((long)ppuStack_1a0 - (long)ppuStack_1b0) / 0x48;
      uVar16 = uVar1 * 2;
      if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
        uVar16 = uVar12;
      }
      if (0x1c71c71c71c71c6 < uVar1) {
        uVar16 = 0x38e38e38e38e38e;
      }
      if (uVar16 == 0) {
        lVar8 = 0;
      }
      else {
        if (0x38e38e38e38e38e < uVar16) {
          func_0x000104bd35f4();
          goto LAB_1072b94d0;
        }
        lVar8 = uVar16 * 0x48;
        __Znwm();
      }
      lVar10 = lVar8 + lVar10;
      FUN_1072bc110(lVar10,&ppuStack_150);
      ppuVar23 = ppuStack_1b0;
      ppuVar15 = (undefined8 **)
                 (lVar10 + (((long)ppuStack_1a8 - (long)ppuStack_1b0) / -0x48) * 0x48);
      ppuVar9 = ppuVar15;
      for (ppuVar7 = ppuStack_1b0; ppuVar7 != ppuStack_1a8; ppuVar7 = ppuVar7 + 9) {
        FUN_1072bc110(ppuVar9,ppuVar7);
        ppuVar9 = ppuVar9 + 9;
      }
      while( true ) {
        uVar4 = (long)ppuVar23 - (long)ppuStack_1a8 < 0;
        uVar5 = ppuVar23 == ppuStack_1a8;
        if ((bool)uVar5) break;
        FUN_1072bc144(ppuVar23);
        ppuVar23 = ppuVar23 + 9;
      }
      ppuVar7 = (undefined8 **)(lVar10 + 0x48);
      ppuStack_1a0 = (undefined8 **)(lVar8 + uVar16 * 0x48);
      bVar6 = ppuStack_1b0 != (undefined8 **)0x0;
      ppuStack_1b0 = ppuVar15;
      if (bVar6) {
        ppuStack_1a8 = ppuVar7;
        __ZdlPv();
      }
    }
    ppuStack_1a8 = ppuVar7;
    FUN_1072bc144(&ppuStack_150);
    func_0x000104c2f714(auStack_d0);
    func_0x0001072cf384();
    ppuVar7 = &puStack_1c8;
    FUN_10726364c(ppuVar7,auStack_108);
    ppuVar15 = ppuStack_1d8;
    ppuVar9 = ppuVar7;
    if (ppuStack_1d8 != (undefined8 **)0x0) {
      uVar12 = (long)ppuStack_1d8 - 1;
      if (((ulong)ppuStack_1d8 & uVar12) == 0) {
        ppuVar23 = (undefined8 **)(uVar12 & (ulong)ppuVar7);
        uVar5 = true;
        uVar4 = false;
      }
      else {
        uVar4 = (long)ppuVar7 - (long)ppuStack_1d8 < 0;
        uVar5 = ppuVar7 == ppuStack_1d8;
        ppuVar23 = ppuVar7;
        if (ppuStack_1d8 <= ppuVar7) {
          uVar16 = 0;
          if (ppuStack_1d8 != (undefined8 **)0x0) {
            uVar16 = (ulong)ppuVar7 / (ulong)ppuStack_1d8;
          }
          ppuVar23 = (undefined8 **)((long)ppuVar7 - uVar16 * (long)ppuStack_1d8);
        }
      }
      plVar25 = *(long **)(lStack_1e0 + (long)ppuVar23 * 8);
      if (plVar25 != (long *)0x0) {
        do {
          while( true ) {
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) goto LAB_1072b90ac;
            ppuVar13 = (undefined8 **)plVar25[1];
            uVar4 = (long)ppuVar13 - (long)ppuVar7 < 0;
            uVar5 = ppuVar13 == ppuVar7;
            if (!(bool)uVar5) break;
            ppuVar9 = (undefined8 **)(plVar25 + 2);
            func_0x000104c32db4(ppuVar9,auStack_108);
            if (((ulong)ppuVar9 & 1) != 0) goto LAB_1072b9320;
          }
          if (((ulong)ppuVar15 & uVar12) == 0) {
            ppuVar13 = (undefined8 **)((ulong)ppuVar13 & uVar12);
          }
          else if (ppuVar15 <= ppuVar13) {
            uVar16 = 0;
            if (ppuVar15 != (undefined8 **)0x0) {
              uVar16 = (ulong)ppuVar13 / (ulong)ppuVar15;
            }
            ppuVar13 = (undefined8 **)((long)ppuVar13 - uVar16 * (long)ppuVar15);
          }
          uVar4 = (long)ppuVar13 - (long)ppuVar23 < 0;
          uVar5 = ppuVar13 == ppuVar23;
        } while ((bool)uVar5);
      }
    }
LAB_1072b90ac:
    func_0x0001072cf804();
    puStack_140 = (undefined8 *)0x1;
    ppuStack_150 = ppuVar9;
    pppuStack_148 = &ppuStack_1d0;
    *ppuVar9 = (undefined8 *)0x0;
    ppuVar9[1] = ppuVar7;
    func_0x0001072cfe64(ppuVar9 + 2);
    ppuVar9[10] = puStack_188;
    ppuVar9[9] = puStack_190;
    ppuVar9[0xb] = puStack_180;
    puStack_188 = (undefined8 *)0x0;
    puStack_180 = (undefined8 *)0x0;
    puStack_190 = (undefined8 *)0x0;
    if ((ppuVar15 == (undefined8 **)0x0) ||
       (func_0x0001072d01ec((float)((long)puStack_1c8 + 1),fStack_1c0,(float)ppuVar15), (bool)uVar4)
       ) {
      func_0x0001072cfbe4();
      bVar3 = (undefined8 **)0x2 < ppuVar15;
      bVar6 = ppuVar15 == (undefined8 **)0x3;
      func_0x0001072ceb68();
      ppuVar23 = extraout_x8_00;
      if (!bVar3 || bVar6) {
        ppuVar23 = extraout_x9;
      }
      if ((long)ppuVar23 - 1U == 0) {
        ppuVar23 = (undefined8 **)0x2;
      }
      else if (((ulong)ppuVar23 & (long)ppuVar23 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      ppuVar13 = ppuStack_1d8;
      if (ppuStack_1d8 < ppuVar23) {
LAB_1072b9148:
        if ((ulong)ppuVar23 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_1072b94d0;
        }
        lVar10 = (long)ppuVar23 << 3;
        __Znwm(lVar10);
        func_0x0001072cdd38(&lStack_1e0,lVar10);
        ppuVar15 = (undefined8 **)0x0;
        lVar10 = lStack_1e0;
        ppuStack_1d8 = ppuVar23;
        while (ppuVar23 != ppuVar15) {
          func_0x0001072d01d4();
          lVar10 = extraout_x8_01;
          ppuVar15 = extraout_x9_00;
        }
        ppuVar15 = ppuVar23;
        if (ppuStack_1d0 != (undefined8 **)0x0) {
          ppuVar13 = (undefined8 **)ppuStack_1d0[1];
          uVar16 = (long)ppuVar23 - 1;
          uVar12 = 0;
          if (ppuVar23 != (undefined8 **)0x0) {
            uVar12 = (ulong)ppuVar13 / (ulong)ppuVar23;
          }
          ppuVar19 = ppuVar13;
          if (ppuVar23 <= ppuVar13) {
            ppuVar19 = (undefined8 **)((long)ppuVar13 - uVar12 * (long)ppuVar23);
          }
          if (((ulong)ppuVar23 & uVar16) == 0) {
            ppuVar19 = (undefined8 **)((ulong)ppuVar13 & uVar16);
          }
          *(undefined8 ****)(lVar10 + (long)ppuVar19 * 8) = &ppuStack_1d0;
          ppuVar13 = ppuStack_1d0;
          while (ppuVar18 = ppuVar13, ppuVar13 = (undefined8 **)*ppuVar18,
                ppuVar13 != (undefined8 **)0x0) {
            ppuVar20 = (undefined8 **)ppuVar13[1];
            if (((ulong)ppuVar23 & uVar16) == 0) {
              ppuVar20 = (undefined8 **)((ulong)ppuVar20 & uVar16);
            }
            else if (ppuVar23 <= ppuVar20) {
              uVar12 = 0;
              if (ppuVar23 != (undefined8 **)0x0) {
                uVar12 = (ulong)ppuVar20 / (ulong)ppuVar23;
              }
              ppuVar20 = (undefined8 **)((long)ppuVar20 - uVar12 * (long)ppuVar23);
            }
            if (ppuVar20 != ppuVar19) {
              if (*(long *)(lVar10 + (long)ppuVar20 * 8) == 0) {
                *(undefined8 ***)(lVar10 + (long)ppuVar20 * 8) = ppuVar18;
                ppuVar19 = ppuVar20;
              }
              else {
                *ppuVar18 = *ppuVar13;
                func_0x0001072ce844();
                lVar10 = extraout_x8_02;
                uVar16 = extraout_x9_01;
                ppuVar13 = extraout_x10;
                ppuVar19 = extraout_x11;
              }
            }
          }
        }
      }
      else {
        ppuVar15 = ppuStack_1d8;
        if (ppuVar23 < ppuStack_1d8) {
          ppuVar15 = (undefined8 **)(long)((float)puStack_1c8 / fStack_1c0);
          if ((ppuStack_1d8 < (undefined8 **)0x3) ||
             (((ulong)ppuStack_1d8 & (long)ppuStack_1d8 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x0001072ce5e0();
          }
          if (ppuVar23 <= ppuVar15) {
            ppuVar23 = ppuVar15;
          }
          ppuVar15 = ppuStack_1d8;
          if (ppuVar23 < ppuVar13) {
            if (ppuVar23 != (undefined8 **)0x0) goto LAB_1072b9148;
            func_0x0001072cdd38(&lStack_1e0,0);
            ppuStack_1d8 = (undefined8 **)0x0;
            ppuVar15 = (undefined8 **)0x0;
          }
        }
      }
      if (((ulong)ppuVar15 & (long)ppuVar15 - 1U) == 0) {
        uVar5 = 1;
        ppuVar23 = (undefined8 **)((long)ppuVar15 - 1U & (ulong)ppuVar7);
      }
      else {
        uVar5 = ppuVar7 == ppuVar15;
        ppuVar23 = ppuVar7;
        if (ppuVar15 <= ppuVar7) {
          uVar12 = 0;
          if (ppuVar15 != (undefined8 **)0x0) {
            uVar12 = (ulong)ppuVar7 / (ulong)ppuVar15;
          }
          ppuVar23 = (undefined8 **)((long)ppuVar7 - uVar12 * (long)ppuVar15);
        }
      }
    }
    puVar17 = *(undefined8 **)(lStack_1e0 + (long)ppuVar23 * 8);
    if (puVar17 == (undefined8 *)0x0) {
      *ppuVar9 = ppuStack_1d0;
      *(undefined8 ****)(lStack_1e0 + (long)ppuVar23 * 8) = &ppuStack_1d0;
      ppuStack_1d0 = ppuVar9;
      if (*ppuVar9 != (undefined8 *)0x0) {
        ppuVar23 = (undefined8 **)(*ppuVar9)[1];
        if (((ulong)ppuVar15 & (long)ppuVar15 - 1U) == 0) {
          ppuVar23 = (undefined8 **)((ulong)ppuVar23 & (long)ppuVar15 - 1U);
          uVar5 = true;
        }
        else {
          uVar5 = ppuVar23 == ppuVar15;
          if (ppuVar15 <= ppuVar23) {
            uVar12 = 0;
            if (ppuVar15 != (undefined8 **)0x0) {
              uVar12 = (ulong)ppuVar23 / (ulong)ppuVar15;
            }
            ppuVar23 = (undefined8 **)((long)ppuVar23 - uVar12 * (long)ppuVar15);
          }
        }
        *(undefined8 ***)(lStack_1e0 + (long)ppuVar23 * 8) = ppuVar9;
      }
    }
    else {
      *ppuVar9 = (undefined8 *)*puVar17;
      *puVar17 = ppuVar9;
    }
    ppuStack_150 = (undefined8 **)0x0;
    puStack_1c8 = (undefined8 *)((long)puStack_1c8 + 1);
    FUN_1072cdd50(&ppuStack_150);
LAB_1072b9320:
    plVar25 = *(long **)(unaff_x19 + 0xb0);
    if ((*(byte *)(plVar25 + 1) & 1) == 0) {
      plVar11 = plVar25;
      (**(code **)(*plVar25 + 0x10))();
      if ((int)plVar11 == 0) {
        (**(code **)(*plVar25 + 0x20))(&puStack_178,plVar25);
        FUN_10724bb70(alStack_160,auStack_170);
        if (alStack_160[0] != 0) {
          func_0x0001072d02d0();
          func_0x0001072cf7a4();
          ppuVar23 = apuStack_b8;
          FUN_1072cdd90(ppuVar23,&lStack_1e0);
          func_0x0001072cf804();
          FUN_1072cde00(&ppuStack_150,auStack_d0);
          *ppuVar23 = &PTR_FUN_11099bae8;
          ppuVar23[1] = puStack_178;
          ppuVar23[3] = (undefined8 *)0x1;
          ppuVar23[2] = (undefined8 *)0xd8;
          FUN_1072cde00(ppuVar23 + 4,&ppuStack_150);
          func_0x0001072cdf00(&ppuStack_150);
          ppuStack_150 = ppuVar23;
          func_0x0001072cdf00(auStack_d0);
          func_0x0001073ae140(alStack_160[0],&ppuStack_150);
          ppuVar23 = ppuStack_150;
          ppuStack_150 = (undefined8 **)0x0;
          if (ppuVar23 != (undefined8 **)0x0) {
            func_0x0001072ce338();
          }
        }
        func_0x00010724bcd8(alStack_160);
        FUN_10724ae28(auStack_170);
      }
      else {
        (**(code **)(*plVar25 + 0x18))();
        if (plVar25 != (long *)0x0) {
          pcVar22 = *(code **)(*plVar25 + 0xd8);
          func_0x0001072d02d0();
          ppuStack_1a8 = (undefined8 **)0x0;
          ppuStack_1a0 = (undefined8 **)0x0;
          ppuStack_1b0 = (undefined8 **)0x0;
          FUN_1072cdd90(&ppuStack_150,&lStack_1e0);
          (*pcVar22)(plVar25,auStack_d0,&ppuStack_150);
          FUN_1072cdc88(&ppuStack_150);
          func_0x0001072bc168(auStack_d0);
        }
      }
    }
    FUN_1072cdc88(&lStack_1e0);
    func_0x0001072bc168(&ppuStack_1b0);
    func_0x0001072bc1f0(&puStack_190);
    func_0x000104c2f714(auStack_108);
    func_0x0001072ce0cc(uStack_88);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar12 = (long)puVar24 - (long)puVar17 >> 5;
    if (uVar12 >> 0x3b == 0) {
      FUN_1072bc030(&ppuStack_150,uVar12,0,&puStack_180);
      func_0x0001072cf838(pppuStack_148);
      puVar24 = puStack_190;
      puStack_190 = puVar17;
      func_0x0001072cf4c8(puVar24,puStack_140);
      puVar17 = (undefined8 *)*param_2;
      puVar24 = (undefined8 *)param_2[1];
      goto LAB_1072b8ea4;
    }
  }
  FUN_1072bbffc();
LAB_1072b94d0:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x1072b94d4);
  (*pcVar22)();
}



/* Entry: 1072b9594; end: 1072b959f;  */

void FUN_1072b9594(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar14;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar13;
  
  lVar5 = **(long **)(param_1 + 0xa8);
  *(undefined4 *)(lVar5 + 0x10dc) = *(undefined4 *)(param_2 + 0x10);
  puVar7 = &UNK_10de67fd7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5,&UNK_10de67fd7);
  uVar10 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_FUN_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  FUN_10729d56c(puVar6,"reason",puVar7);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  func_0x00010743fa9c(uVar10,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  FUN_107262330();
  if (*(int *)(lVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar8 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar8 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar8 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar8 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar8 + 0x1c8)) {
    func_0x000107410e94(lVar5 + 0x1168);
    func_0x0001074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar12 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar13 = (double)(ulong)uVar12;
  uVar14 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar12;
  *(undefined4 *)(lVar5 + 0x1440) = uVar14;
  func_0x000107411798();
  func_0x0001074e33b8((float)dVar13,lVar5 + 0x1168);
  func_0x0001074e3804(&uStack_80,lVar5 + 0x1168);
  func_0x000107413c78(lVar5 + 0x50,&uStack_80);
  func_0x0001074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    func_0x000107410058(lVar5,&uStack_1090);
  }
  lVar8 = *(long *)(lVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar8 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar8 + 8) + 0x90);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar8 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar8 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar8 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar8 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar8 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1a8) >> 8);
  func_0x000107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  puVar9 = *(undefined8 **)(lVar8 + 0x1c0);
  lStack_140 = puVar9[1];
  uStack_148 = *puVar9;
  if (puVar9[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8;
    lVar8 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar8 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar8 + 0xa8);
  if (*(long *)(lVar8 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar8 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar8 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar8 + 0xd0);
  if (*(long *)(lVar8 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar8 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar8 + 0x100);
  uStack_118 = *(undefined8 *)(lVar8 + 0xf8);
  if (*(long *)(lVar8 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar8 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar8 + 0x338);
  lStack_100 = *(long *)(lVar8 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar8 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar8 + 0x348);
  lStack_f0 = *(long *)(lVar8 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar8 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar8 + 0x358);
  lStack_e0 = *(long *)(lVar8 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar8 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar8 + 0x368);
  lStack_d0 = *(long *)(lVar8 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
  lStack_c0 = *(long *)(lVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
  *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(lVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(lVar5 + 0x1110);
  if (*(long *)(lVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar11 = *(long **)(lVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  func_0x000107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar11 + 0x20))(plVar11,&puStack_10a0);
  FUN_10725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 1072b95a0; end: 1072b974b;  */

void FUN_1072b95a0(long param_1)

{
  long unaff_x20;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char cStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char cStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  func_0x0001072ceb38();
  func_0x0001072cf144(*(undefined8 *)(param_1 + 0xa8));
  func_0x0001077c3744(auStack_48);
  func_0x0001072cf144(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x0001077c3754(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c0,auStack_48);
  func_0x00010028af84(&uStack_140,auStack_88);
  func_0x00010028af84(&uStack_160,auStack_68);
  func_0x00010028af84(&uStack_180,auStack_a8);
  uStack_120 = uStack_120 & 0xffffffffffffff00;
  uStack_108 = cStack_128 == '\x01';
  if ((bool)uStack_108) {
    uStack_118 = uStack_138;
    uStack_120 = uStack_140;
    uStack_110 = uStack_130;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
  }
  uStack_100 = uStack_100 & 0xffffffffffffff00;
  uStack_e8 = cStack_148 == '\x01';
  if ((bool)uStack_e8) {
    uStack_f8 = uStack_158;
    uStack_100 = uStack_160;
    uStack_f0 = uStack_150;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_160 = 0;
  }
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  uStack_c8 = cStack_168 == '\x01';
  if ((bool)uStack_c8) {
    uStack_d8 = uStack_178;
    uStack_e0 = uStack_180;
    uStack_d0 = uStack_170;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
  }
  FUN_1072bc228();
  FUN_1072bc2fc(&uStack_120);
  func_0x0001001148fc(&uStack_180);
  func_0x0001001148fc(&uStack_160);
  func_0x0001001148fc(&uStack_140);
  func_0x0001072cf8b4();
  func_0x0001072bc324(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 1072b974c; end: 1072b9753;  */

void FUN_1072b974c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x218);
  *param_1 = &PTR_DAT_1109ec3d0;
  param_1[1] = 0;
  param_1[3] = 0;
  uVar2 = 0;
  if (*(char *)(lVar1 + 0xec) == '\x01') {
    uVar2 = *(undefined4 *)(lVar1 + 0xe8);
  }
  *(undefined4 *)(param_1 + 2) = uVar2;
  uVar2 = (undefined4)uRam0000000113822078;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x104);
  *(undefined4 *)(param_1 + 3) = uVar2;
  return;
}



/* Entry: 1072b9754; end: 1072b975f;  */

void FUN_1072b9754(void)

{
  int extraout_w8;
  
  func_0x0001072ce494();
  func_0x0001072cee54();
  if (extraout_w8 == 1) {
    FUN_1072b978c();
  }
  return;
}



/* Entry: 1072b9760; end: 1072b978b;  */

void FUN_1072b9760(void)

{
  int extraout_w8;
  
  func_0x0001072cee54();
  if (extraout_w8 == 1) {
    FUN_1072b978c();
  }
  return;
}



/* Entry: 1072b978c; end: 1072b97cf;  */

void FUN_1072b978c(long param_1)

{
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099a760)[*(uint *)(param_1 + 0x10)]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 1072b97d0; end: 1072b9cf7;  */

void FUN_1072b97d0(undefined8 param_1,long param_2)

{
  func_0x000107274970();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072b9cf8; end: 1072b9edf;  */

void FUN_1072b9cf8(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 extraout_x8;
  long lVar11;
  ulong uVar12;
  undefined8 in_stack_00000050;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [504];
  undefined8 uStack_8;
  
  func_0x0001072cfcb0();
  func_0x0001072ce328();
  puStack_218 = auStack_200;
  ppuStack_220 = &PTR_DAT_11099bc38;
  uStack_208 = 500;
  uStack_210 = 0;
  uStack_8 = extraout_x8;
  FUN_1072b9ee0(&ppuStack_220,&DAT_10f62a9e8);
  uVar12 = (lRam00000001136ca208 - lRam00000001136ca200) / 0x70;
  uVar2 = 0;
  if (9 < uVar12) {
    uVar2 = uVar12 - 10;
  }
  lVar11 = uVar12 * 0x70;
  if (9 < uVar12) {
    uVar12 = 10;
  }
  lVar11 = lVar11 + uVar12 * -0x70 + 0x68;
  for (uVar12 = uVar2; lVar4 = lRam00000001136ca200,
      uVar3 = (lRam00000001136ca208 - lRam00000001136ca200) / 0x70, uVar6 = uVar12 == uVar3,
      uVar12 < uVar3; uVar12 = uVar12 + 1) {
    if (uVar2 < uVar12) {
      FUN_1072b9ee0(&ppuStack_220,&DAT_10f68e8ee);
    }
    puVar1 = (undefined8 *)(lVar4 + lVar11);
    uStack_2f0 = puVar1[-0xc];
    uStack_2e0 = puVar1[-0xb];
    uStack_2d0 = puVar1[-10];
    uStack_2c0 = puVar1[-9];
    uStack_2b0 = puVar1[-8];
    uStack_2a0 = puVar1[-7];
    uStack_290 = puVar1[-5];
    uStack_280 = puVar1[-4];
    uStack_270 = puVar1[-3];
    uStack_260 = puVar1[-2];
    uVar9 = puVar1[-1];
    uStack_240 = *puVar1;
    uStack_2e8 = 0;
    uStack_2d8 = 0;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    uStack_2a8 = 0;
    uStack_298 = 0;
    uStack_288 = 0;
    uStack_278 = 0;
    uStack_268 = 0;
    uStack_258 = 0;
    uStack_248 = 0;
    uStack_238 = 0;
    puVar8 = &UNK_10f408e61;
    uStack_250 = uVar9;
    func_0x0001003a91d4();
    puStack_230 = puVar8;
    uStack_228 = uVar9;
    func_0x0001072b9f3c(&ppuStack_220,&puStack_230,0x444444444444,&uStack_2f0);
    lVar11 = lVar11 + 0x70;
  }
  puVar8 = &DAT_10f62a9ea;
  FUN_1072b9ee0(&ppuStack_220);
  func_0x0001003ac6d0(&uStack_2f0,&ppuStack_220);
  func_0x0001072b9f20(&uStack_300,&uStack_2f0);
  uVar5 = uStack_2f8;
  uVar9 = uStack_300;
  uStack_300 = 0;
  uStack_2f8 = 0;
  puStack_230 = puRam00000001136ca218;
  uStack_228 = uRam00000001136ca220;
  puRam00000001136ca218 = (undefined *)uVar9;
  uRam00000001136ca220 = uVar5;
  FUN_10724c894(&puStack_230);
  FUN_10724c894(&uStack_300);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2f0);
  func_0x0001003ac644(&ppuStack_220);
  func_0x0001072ce0cc(uStack_8);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x0001072cf12c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    pppuVar7 = &ppuStack_220;
    func_0x0001003ac644(pppuVar7);
    func_0x0001072ce900();
    puStack_320 = &UNK_10f408e61;
    puStack_318 = &DAT_10f68e8ee;
    pcStack_308 = FUN_1072b9ee0;
    uStack_330 = 0;
    uStack_328 = 0;
    puVar10 = puVar8;
    puStack_310 = &stack0x00000050;
    func_0x0001003a91d4();
    puStack_340 = puVar8;
    puStack_338 = puVar10;
    func_0x0001072b9f3c(pppuVar7,&puStack_340,0,&uStack_330);
    return;
  }
  return;
}



/* Entry: 1072b9ee0; end: 1072b9f1f;  */

void FUN_1072b9ee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uVar1 = param_2;
  func_0x0001003a91d4();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x0001072b9f3c(param_1,&uStack_40,0,&uStack_30);
  return;
}



/* Entry: 1072b9f20; end: 1072b9f87;  */

void FUN_1072b9f20(void)

{
  func_0x0001072cfc38();
  FUN_1072b9fb8();
  return;
}



/* Entry: 1072b9f88; end: 1072b9fb7;  */

void FUN_1072b9f88(long param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce940();
  func_0x0001003ac208(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(unaff_x20 + 8) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 8);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
  return;
}



/* Entry: 1072b9fb8; end: 1072ba02f;  */

void FUN_1072b9fb8(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_30;
  
  func_0x0001072ce294();
  func_0x0001072cf450();
  FUN_10724c79c();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110995158;
  puStack_30[1] = 0;
  uVar3 = param_2[2];
  uVar4 = *param_2;
  puStack_30[4] = param_2[1];
  puStack_30[3] = uVar4;
  puStack_30[5] = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001072ce344();
  func_0x00010724c884();
  func_0x0001072ce0cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar2 = param_1;
  puStack_60 = param_2;
  FUN_1072ba090();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_70);
    func_0x0001000df524(&uStack_70);
  }
  FUN_1072ba0cc(param_1);
  return;
}



/* Entry: 1072ba030; end: 1072ba08f;  */

void FUN_1072ba030(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1072ba090();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1072ba0cc(param_1);
  return;
}



/* Entry: 1072ba090; end: 1072ba0cb;  */

void FUN_1072ba090(long *param_1)

{
  int extraout_w10;
  
  if (*param_1 != 0) {
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072ba0cc; end: 1072ba163;  */

void FUN_1072ba0cc(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072ba164; end: 1072ba16f;  */

void FUN_1072ba164(void)

{
  func_0x0001072ce494();
  func_0x0001072ce4a0();
  FUN_1072ba194();
  return;
}



/* Entry: 1072ba170; end: 1072ba193;  */

void FUN_1072ba170(void)

{
  func_0x0001072ce4a0();
  FUN_1072ba194();
  return;
}



/* Entry: 1072ba194; end: 1072ba1a7;  */

void FUN_1072ba194(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ba1a8; end: 1072ba1cb;  */

void FUN_1072ba1a8(void)

{
  func_0x0001072ce4a0();
  FUN_1072ba1cc();
  return;
}



/* Entry: 1072ba1cc; end: 1072ba1df;  */

void FUN_1072ba1cc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ba1e0; end: 1072ba21f;  */

void FUN_1072ba1e0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000104bff3c8();
  }
  return;
}



/* Entry: 1072ba220; end: 1072ba277;  */

long FUN_1072ba220(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072ba278();
  }
  else {
    func_0x0001072ba254();
    param_1 = unaff_x20 + 0x58;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x58;
}



/* Entry: 1072ba278; end: 1072ba2df;  */

void FUN_1072ba278(void)

{
  func_0x0001072ce314();
  func_0x0001072cf038();
  FUN_1072ba2e0();
  func_0x0001072ce15c();
  FUN_1072ba374();
  func_0x0001072cfa50();
  FUN_10729dca0();
  func_0x0001072ce9c4();
  FUN_1072ba334();
  func_0x0001072ceb54();
  func_0x0001072ba4f0();
  return;
}



/* Entry: 1072ba2e0; end: 1072ba333;  */

undefined8 FUN_1072ba2e0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  ulong extraout_x9;
  undefined8 extraout_x10;
  
  if (0x2e8ba2e8ba2e8ba < param_2) {
    FUN_1072ba368();
    func_0x0001072ce2cc();
    func_0x0001072cf398();
    FUN_1072ba3f8();
    func_0x0001072cdfc8();
    return param_1;
  }
  func_0x0001072d0100();
  uVar1 = extraout_x10;
  if (0x1745d1745d1745c < extraout_x9) {
    uVar1 = extraout_x8;
  }
  return uVar1;
}



/* Entry: 1072ba334; end: 1072ba367;  */

void FUN_1072ba334(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cf398();
  FUN_1072ba3f8();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072ba368; end: 1072ba373;  */

void FUN_1072ba368(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce494();
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    func_0x0001072ba3a8(param_4);
  }
  func_0x0001072ce27c(0x58);
  return;
}



/* Entry: 1072ba374; end: 1072ba3c7;  */

void FUN_1072ba374(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    func_0x0001072ba3a8(param_4);
  }
  func_0x0001072ce27c(0x58);
  return;
}



/* Entry: 1072ba3c8; end: 1072ba3f7;  */

void FUN_1072ba3c8(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x58) {
    func_0x0001072cf5d0();
    FUN_10729dca0();
    lStack_48 = lStack_48 + 0x58;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  FUN_1072ba45c();
  FUN_1072ba488(auStack_70);
  return;
}



/* Entry: 1072ba3f8; end: 1072ba45b;  */

void FUN_1072ba3f8(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x58) {
    func_0x0001072cf5d0();
    FUN_10729dca0();
    lStack_38 = lStack_38 + 0x58;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  FUN_1072ba45c();
  FUN_1072ba488(auStack_60);
  return;
}



/* Entry: 1072ba45c; end: 1072ba487;  */

void FUN_1072ba45c(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x58) {
    func_0x000107932ce0();
  }
  return;
}



/* Entry: 1072ba488; end: 1072ba4b3;  */

void FUN_1072ba488(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072ba4b4();
  }
  return;
}



/* Entry: 1072ba4b4; end: 1072ba4c3;  */

void FUN_1072ba4b4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x000107932ce0();
  }
  return;
}



/* Entry: 1072ba4c4; end: 1072ba51b;  */

void FUN_1072ba4c4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x000107932ce0();
  }
  return;
}



/* Entry: 1072ba51c; end: 1072ba523;  */

void FUN_1072ba51c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x58;
    func_0x000107932ce0();
  }
  return;
}



/* Entry: 1072ba524; end: 1072ba5a3;  */

void FUN_1072ba524(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x58;
    func_0x000107932ce0();
  }
  return;
}



/* Entry: 1072ba5a4; end: 1072ba5ab;  */

void FUN_1072ba5a4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb;
    func_0x000107932ce0();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072ba5ac; end: 1072ba5db;  */

void FUN_1072ba5ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x000107932ce0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072ba5dc; end: 1072ba627;  */

void FUN_1072ba5dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  func_0x0001072d0020();
  func_0x0001072cfd64();
  return;
}



/* Entry: 1072ba628; end: 1072ba677;  */

void FUN_1072ba628(void)

{
  undefined8 extraout_x8;
  
  func_0x0001003ac100();
  FUN_1072ba778();
  func_0x0001072cefcc(extraout_x8);
  FUN_1072ba818();
  return;
}



/* Entry: 1072ba678; end: 1072ba6e3;  */

double FUN_1072ba678(double param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 5.0;
  if (param_2 < 0x12) {
    dVar3 = 1.0;
    if (param_2 < 7) {
      dVar3 = 0.0;
    }
    dVar2 = 2.0;
    if (param_2 < 0xc) {
      dVar2 = dVar3;
    }
    dVar1 = 3.0;
    if (param_2 < 0xf) {
      dVar1 = dVar2;
    }
    dVar3 = 4.0;
    if (param_2 != 0x11) {
      dVar3 = dVar1;
    }
  }
  ___exp10(dVar3);
  return (double)(long)(param_1 * dVar3) / dVar3;
}



/* Entry: 1072ba6e4; end: 1072ba75f;  */

void FUN_1072ba6e4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong auStack_30 [2];
  
  auStack_30[0] = param_3 & 0xffffffff;
  auStack_30[1] = 0;
  FUN_107268a34(param_4,param_5,param_1,param_2,2,auStack_30);
  *(undefined1 *)(param_4 + param_5) = 0;
  return;
}



/* Entry: 1072ba760; end: 1072ba777;  */

void FUN_1072ba760(void)

{
  func_0x0001072cf088();
  return;
}



/* Entry: 1072ba778; end: 1072ba817;  */

undefined8 * FUN_1072ba778(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_1c0 [3];
  undefined5 uStack_1bd;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [256];
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_160;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = *param_3;
  uStack_158 = 0;
  puStack_148 = auStack_130;
  uStack_138 = 0x100;
  lStack_140 = 0;
  ppuStack_150 = &PTR_FUN_1109965d0;
  lStack_30 = 0;
  func_0x0001072ced20(&ppuStack_150);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined8 *)(lStack_140 + lStack_30);
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)auStack_1c0;
  func_0x0001072cebd4();
  func_0x0001072ce294();
  uVar2 = param_2 == 0x25;
  uStack_198 = extraout_x8;
  if (param_2 < 0x26) {
    auStack_1c0[2] = 0;
    param_1 = (undefined8 *)(auStack_1c0 + 2);
    *(undefined1 *)((long)param_1 + unaff_x21) = 0;
    param_2 = 0x26;
    auStack_1c0._0_2_ = (short)unaff_x21;
    FUN_1072ba924();
    unaff_x19[1] = lStack_1b8;
    *unaff_x19 = CONCAT53(uStack_1bd,CONCAT12(auStack_1c0[2],auStack_1c0._0_2_));
    unaff_x19[3] = uStack_1a8;
    unaff_x19[2] = uStack_1b0;
    unaff_x19[4] = uStack_1a0;
    func_0x0001072ceb14(1);
    puVar4 = unaff_x20;
  }
  else {
    uVar2 = unaff_x21 == 0x51;
    if (unaff_x21 < 0x52) {
      func_0x0001072cea30(auStack_1c0);
      puVar1 = (undefined2 *)CONCAT53(uStack_1bd,CONCAT12(auStack_1c0[2],auStack_1c0._0_2_));
      *puVar1 = (short)unaff_x21;
      *(undefined1 *)((long)puVar1 + unaff_x21 + 2) = 0;
      param_1 = (undefined8 *)(CONCAT53(uStack_1bd,CONCAT12(auStack_1c0[2],auStack_1c0._0_2_)) + 2);
      param_2 = 0x52;
      FUN_1072ba924();
      unaff_x19[1] = lStack_1b8;
      *unaff_x19 = CONCAT53(uStack_1bd,CONCAT12(auStack_1c0[2],auStack_1c0._0_2_));
      if (lStack_1b8 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      func_0x0001072ceb14(2);
      func_0x000104c2f784();
      puVar4 = puVar3;
    }
    else {
      func_0x0001072ba954(auStack_1c0);
      func_0x0001072ced6c();
      FUN_1072625b4();
      func_0x0001072cec80();
    }
  }
  func_0x0001072ce0cc(uStack_198);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001072ce928();
    func_0x000104c2f784();
    func_0x0001072ce900();
    puVar3 = param_1;
    func_0x0001072ba984(param_1,param_2,*puVar4,puVar4[1]);
    *(undefined1 *)((long)param_1 + param_2) = 0;
    return puVar3;
  }
  return puVar4;
}



/* Entry: 1072ba818; end: 1072ba923;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1072ba818(undefined8 param_1,undefined2 *param_2,ulong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_60;
  func_0x0001072cebd4();
  func_0x0001072ce294();
  uVar2 = param_3 == 0x25;
  uStack_38 = extraout_x8;
  if (param_3 < 0x26) {
    uStack_60._2_1_ = 0;
    param_2 = (undefined2 *)((long)&uStack_60 + 2);
    *(undefined1 *)((long)param_2 + unaff_x21) = 0;
    param_3 = 0x26;
    uStack_60._0_2_ = (short)unaff_x21;
    FUN_1072ba924();
    unaff_x19[1] = lStack_58;
    *unaff_x19 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
    unaff_x19[3] = uStack_48;
    unaff_x19[2] = uStack_50;
    unaff_x19[4] = uStack_40;
    func_0x0001072ceb14(1);
    param_5 = unaff_x20;
  }
  else {
    uVar2 = unaff_x21 == 0x51;
    if (unaff_x21 < 0x52) {
      func_0x0001072cea30(&uStack_60);
      puVar1 = (undefined2 *)
               CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      *puVar1 = (short)unaff_x21;
      *(undefined1 *)((long)puVar1 + unaff_x21 + 2) = 0;
      param_2 = (undefined2 *)
                (CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60)) + 2);
      param_3 = 0x52;
      FUN_1072ba924();
      unaff_x19[1] = lStack_58;
      *unaff_x19 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      if (lStack_58 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      func_0x0001072ceb14(2);
      func_0x000104c2f784();
      param_5 = puVar3;
    }
    else {
      func_0x0001072ba954(&uStack_60);
      func_0x0001072ced6c();
      FUN_1072625b4();
      func_0x0001072cec80();
    }
  }
  func_0x0001072ce0cc(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001072ce928();
    func_0x000104c2f784();
    func_0x0001072ce900();
    func_0x0001072ba984(param_2,param_3,*param_5,param_5[1]);
    *(undefined1 *)((long)param_2 + param_3) = 0;
    return;
  }
  return;
}



/* Entry: 1072ba924; end: 1072ba953;  */

void FUN_1072ba924(undefined8 *param_1,long param_2,long param_3)

{
  func_0x0001072ba984(param_2,param_3,*param_1,param_1[1]);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 1072ba954; end: 1072ba99b;  */

void FUN_1072ba954(long *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *(undefined8 *)param_1[1];
  uStack_18 = 0;
  func_0x0001003a9204(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],4,&uStack_20);
  return;
}



/* Entry: 1072ba99c; end: 1072ba9bb;  */

undefined8 FUN_1072ba99c(undefined8 *param_1)

{
  FUN_10729604c();
  return *param_1;
}



/* Entry: 1072ba9bc; end: 1072bad03;  */

undefined1 **
FUN_1072ba9bc(undefined8 param_1,undefined1 **param_2,undefined1 **param_3,undefined8 param_4,
             undefined8 param_5,undefined1 **param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined1 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  undefined2 *puVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 **ppuVar17;
  undefined8 extraout_x8;
  undefined1 *puVar18;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long *plVar19;
  undefined1 *unaff_x26;
  uint uVar20;
  undefined1 **ppuStack_380;
  undefined1 **ppuStack_378;
  undefined1 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 **ppuStack_358;
  undefined2 auStack_338 [12];
  undefined8 uStack_320;
  undefined1 **ppuStack_318;
  undefined1 *puStack_310;
  undefined1 *puStack_308;
  undefined1 *apuStack_300 [32];
  long lStack_200;
  undefined8 uStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 **ppuStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 **ppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined1 *puStack_118;
  double dStack_110;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  ppuVar10 = param_2;
  ppuVar13 = param_3;
  func_0x0001072ce328();
  uStack_138 = 0;
  puStack_140 = (undefined1 *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_120 = 0x3f800000;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_150 = 0x3f800000;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  lStack_190 = 0;
  uStack_180 = 0x3f800000;
  uStack_70 = extraout_x8;
  for (; uVar6 = param_2 == param_3, plVar19 = plStack_130, !(bool)uVar6; param_2 = param_2 + 0xb) {
    uVar20 = 0;
    puVar1 = param_2[9];
    unaff_x26 = param_2[8];
    for (puVar18 = unaff_x26; puVar18 != puVar1; puVar18 = puVar18 + 0x160) {
      uVar20 = uVar20 + (byte)puVar18[200];
    }
    for (; unaff_x26 != puVar1; unaff_x26 = unaff_x26 + 0x160) {
      plVar19 = (long *)(*(long *)(unaff_x26 + 0x110) + 0x10);
      while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
        ppuVar10 = (undefined1 **)(plVar19 + 2);
        piVar8 = (int *)&uStack_1a0;
        FUN_1072baf74();
        *piVar8 = *piVar8 + 1;
      }
    }
    puVar18 = param_2[8];
    puVar1 = param_2[9];
    if ((long)puVar1 - (long)puVar18 != 0) {
      FUN_1072baec8(&puStack_118,*(undefined1 *)(param_2 + 7));
      param_6 = &puStack_118;
      ppuVar13 = (undefined1 **)0x1d;
      func_0x0001072cff9c(auStack_a8,&UNK_10f409021);
      uVar2 = ((long)puVar1 - (long)puVar18) / 0x160;
      func_0x0001072cf304();
      dStack_110 = (double)uVar2;
      uStack_b0 = 2;
      func_0x0001072cea18();
      func_0x0001072cfe84();
      func_0x0001072cf88c();
      func_0x0001072cffc0();
      ppuVar9 = &puStack_140;
      ppuVar10 = &puStack_118;
      FUN_1072baf74();
      *(int *)ppuVar9 = *(int *)ppuVar9 + (int)uVar2;
      func_0x0001072cffb8();
      func_0x0001072cec14();
    }
    if (uVar20 != 0) {
      FUN_1072baec8(&puStack_118,*(undefined1 *)(param_2 + 7));
      param_6 = &puStack_118;
      ppuVar13 = (undefined1 **)0x1c;
      func_0x0001072cff9c(auStack_a8,&UNK_10f40903f);
      func_0x0001072cf304();
      dStack_110 = (double)uVar20;
      uStack_b0 = 2;
      func_0x0001072cea18();
      func_0x0001072cfe84();
      func_0x0001072cf88c();
      func_0x0001072cffc0();
      piVar8 = (int *)&uStack_170;
      ppuVar10 = &puStack_118;
      FUN_1072baf74();
      *piVar8 = *piVar8 + uVar20;
      func_0x0001072cffb8();
      func_0x0001072cec14();
    }
  }
  for (; plVar3 = plStack_160, plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    if (*(int *)(plVar19 + 9) != 0) {
      func_0x0001072cfb18();
      ppuVar13 = (undefined1 **)0x1a;
      func_0x0001072cffa8();
      func_0x0001072cf2f0();
      func_0x0001072cea18();
      func_0x0001072cf288();
      func_0x0001072ceeac();
      func_0x0001072cec14();
    }
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (*(int *)(plVar3 + 9) != 0) {
      func_0x0001072cfb18();
      ppuVar13 = (undefined1 **)0x19;
      func_0x0001072cffa8();
      func_0x0001072cf2f0();
      func_0x0001072cea18();
      func_0x0001072cf288();
      func_0x0001072ceeac();
      func_0x0001072cec14();
    }
  }
  for (plVar19 = (long *)lStack_190; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    if (*(int *)(plVar19 + 9) != 0) {
      func_0x0001072cfb18();
      ppuVar13 = (undefined1 **)0x20;
      func_0x0001072cffa8();
      func_0x0001072cf2f0();
      func_0x0001072cea18();
      func_0x0001072cf288();
      func_0x0001072ceeac();
      func_0x0001072cec14();
    }
  }
  FUN_1072bb790(&uStack_1a0);
  FUN_1072bb790(&uStack_170);
  ppuVar9 = &puStack_140;
  FUN_1072bb790();
  func_0x0001072ce0cc(uStack_70);
  if ((bool)uVar6) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  func_0x0001072cffb8();
  func_0x0001072cec14();
  FUN_1072bb790(&uStack_1a0);
  FUN_1072bb790(&uStack_170);
  FUN_1072bb790(&puStack_140);
  func_0x0001072ce900();
  uStack_1e0 = 2;
  puStack_1c8 = &UNK_10f4090b4;
  pcStack_1a8 = FUN_1072bad04;
  ppuVar11 = ppuVar10;
  ppuVar14 = ppuVar13;
  uVar15 = param_4;
  uVar16 = param_5;
  ppuVar17 = param_6;
  puStack_1f0 = unaff_x26;
  ppuStack_1e8 = &puStack_118;
  lStack_1d8 = (long)plVar19;
  ppuStack_1d0 = &puStack_118;
  uStack_1c0 = param_1;
  ppuStack_1b8 = ppuVar9;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x0001072ce1e4();
  ppuStack_380 = ppuVar11;
  ppuStack_378 = ppuVar14;
  uStack_1f8 = extraout_x8_00;
  FUN_1072bb35c(&puStack_370,uVar15,uVar16,ppuVar17);
  ppuStack_318 = apuStack_300;
  puStack_308 = (undefined1 *)0x100;
  puStack_310 = (undefined1 *)0x0;
  uStack_320 = &PTR_FUN_1109965d0;
  lStack_200 = 0;
  func_0x0001072ced80(&uStack_320,ppuVar10,ppuVar13,0xddd,&puStack_370);
  puVar18 = puStack_310 + lStack_200;
  uVar6 = puVar18 == (undefined1 *)0x25;
  uStack_368 = param_4;
  uStack_360 = param_5;
  ppuStack_358 = param_6;
  if (puVar18 < (undefined1 *)0x26) {
    puVar12 = (undefined2 *)((long)&uStack_320 + 2);
    uStack_320 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_320 >> 0x10),(short)puVar18) & 0xffffffffff00ffff);
    *(undefined1 *)((long)puVar12 + (long)puVar18) = 0;
    ppuVar10 = &puStack_370;
    puStack_370 = (undefined1 *)&ppuStack_380;
    FUN_1072bb3c8(ppuVar10,puVar12,0x26);
    puVar1 = puStack_308;
    puVar18 = puStack_310;
    ppuVar4 = uStack_320;
    ppuVar9[1] = (undefined1 *)ppuStack_318;
    *ppuVar9 = (undefined1 *)ppuVar4;
    ppuVar9[3] = puVar1;
    ppuVar9[2] = puVar18;
    ppuVar9[4] = apuStack_300[0];
    func_0x0001072ceb14(1);
    ppuVar9 = ppuVar10;
  }
  else {
    uVar6 = puVar18 == (undefined1 *)0x51;
    if (puVar18 < (undefined1 *)0x52) {
      puStack_370 = (undefined1 *)&ppuStack_380;
      func_0x0001072cea30(&uStack_320);
      *(short *)uStack_320 = (short)puVar18;
      *(undefined1 *)((long)uStack_320 + (long)(puVar18 + 2)) = 0;
      puVar12 = (undefined2 *)((long)uStack_320 + 2);
      FUN_1072bb3c8(&puStack_370,puVar12,0x52);
      ppuVar10 = ppuStack_318;
      ppuVar4 = uStack_320;
      ppuVar9[1] = (undefined1 *)ppuStack_318;
      *ppuVar9 = (undefined1 *)ppuVar4;
      if (ppuVar10 != (undefined1 **)0x0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      func_0x0001072ceb14(2);
      ppuVar9 = (undefined1 **)&uStack_320;
      func_0x000104c2f784();
    }
    else {
      puStack_370 = (undefined1 *)&ppuStack_380;
      func_0x0001072ce640(&uStack_320);
      FUN_1072bb35c();
      func_0x0001003a9204(auStack_338,ppuStack_380,ppuStack_378,0xddd,&uStack_320);
      puVar12 = auStack_338;
      FUN_1072625b4();
      func_0x0001072cf608();
    }
  }
  func_0x0001072ce0cc(uStack_1f8);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x000104c2f784(&uStack_320);
    func_0x0001072ce900();
    pcVar7 = "none";
    switch((ulong)puVar12 & 0xff) {
    case 1:
      pcVar7 = "prepare";
    case 0:
      break;
    case 2:
      pcVar7 = "opaque";
      break;
    case 3:
    case 5:
    case 6:
    case 7:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1072baf4c);
      (*pcVar5)();
    case 4:
      pcVar7 = "translucent";
      break;
    case 8:
      pcVar7 = "shadow_casting";
      break;
    default:
      pcVar7 = "debug";
      if (((uint)puVar12 & 0xff) != 0x10) {
        pcVar7 = "capture";
      }
    }
    func_0x00010002b82c();
    func_0x000107c613d0(pcVar7);
    func_0x000107c60c50(param_6,ppuVar9,pcVar7);
    return param_6;
  }
  return ppuVar9;
}



/* Entry: 1072bad04; end: 1072baec7;  */

undefined1 **
FUN_1072bad04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 **param_6)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 **unaff_x19;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 **ppuStack_1b8;
  undefined2 auStack_198 [12];
  undefined8 uStack_180;
  undefined1 **ppuStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *apuStack_160 [32];
  long lStack_60;
  undefined8 uStack_58;
  
  uVar6 = param_2;
  uVar8 = param_3;
  uVar9 = param_4;
  uVar10 = param_5;
  ppuVar5 = param_6;
  func_0x0001072ce1e4();
  uStack_1e0 = uVar6;
  uStack_1d8 = uVar8;
  uStack_58 = extraout_x8;
  FUN_1072bb35c(&puStack_1d0,uVar9,uVar10,ppuVar5);
  ppuStack_178 = apuStack_160;
  puStack_168 = (undefined1 *)0x100;
  puStack_170 = (undefined1 *)0x0;
  uStack_180 = &PTR_FUN_1109965d0;
  lStack_60 = 0;
  func_0x0001072ced80(&uStack_180,param_2,param_3,0xddd,&puStack_1d0);
  puVar1 = puStack_170 + lStack_60;
  uVar3 = puVar1 == (undefined1 *)0x25;
  uStack_1c8 = param_4;
  uStack_1c0 = param_5;
  ppuStack_1b8 = param_6;
  if (puVar1 < (undefined1 *)0x26) {
    puVar7 = (undefined2 *)((long)&uStack_180 + 2);
    uStack_180 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_180 >> 0x10),(short)puVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)puVar7 + (long)puVar1) = 0;
    ppuVar5 = &puStack_1d0;
    puStack_1d0 = (undefined1 *)&uStack_1e0;
    FUN_1072bb3c8(ppuVar5,puVar7,0x26);
    unaff_x19[1] = (undefined1 *)ppuStack_178;
    *unaff_x19 = (undefined1 *)uStack_180;
    unaff_x19[3] = puStack_168;
    unaff_x19[2] = puStack_170;
    unaff_x19[4] = apuStack_160[0];
    func_0x0001072ceb14(1);
    unaff_x19 = ppuVar5;
  }
  else {
    uVar3 = puVar1 == (undefined1 *)0x51;
    if (puVar1 < (undefined1 *)0x52) {
      puStack_1d0 = (undefined1 *)&uStack_1e0;
      func_0x0001072cea30(&uStack_180);
      *(short *)uStack_180 = (short)puVar1;
      *(undefined1 *)((long)uStack_180 + (long)(puVar1 + 2)) = 0;
      puVar7 = (undefined2 *)((long)uStack_180 + 2);
      FUN_1072bb3c8(&puStack_1d0,puVar7,0x52);
      unaff_x19[1] = (undefined1 *)ppuStack_178;
      *unaff_x19 = (undefined1 *)uStack_180;
      if (ppuStack_178 != (undefined1 **)0x0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      func_0x0001072ceb14(2);
      unaff_x19 = (undefined1 **)&uStack_180;
      func_0x000104c2f784();
    }
    else {
      puStack_1d0 = (undefined1 *)&uStack_1e0;
      func_0x0001072ce640(&uStack_180);
      FUN_1072bb35c();
      func_0x0001003a9204(auStack_198,uStack_1e0,uStack_1d8,0xddd,&uStack_180);
      puVar7 = auStack_198;
      FUN_1072625b4();
      func_0x0001072cf608();
    }
  }
  func_0x0001072ce0cc(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x000104c2f784(&uStack_180);
    func_0x0001072ce900();
    pcVar4 = "none";
    switch((ulong)puVar7 & 0xff) {
    case 1:
      pcVar4 = "prepare";
    case 0:
      break;
    case 2:
      pcVar4 = "opaque";
      break;
    case 3:
    case 5:
    case 6:
    case 7:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1072baf4c);
      (*pcVar2)();
    case 4:
      pcVar4 = "translucent";
      break;
    case 8:
      pcVar4 = "shadow_casting";
      break;
    default:
      pcVar4 = "debug";
      if (((uint)puVar7 & 0xff) != 0x10) {
        pcVar4 = "capture";
      }
    }
    func_0x00010002b82c();
    func_0x000107c613d0(pcVar4);
    func_0x000107c60c50(param_6,unaff_x19,pcVar4);
    return param_6;
  }
  return unaff_x19;
}



/* Entry: 1072baec8; end: 1072baf4b;  */

void FUN_1072baec8(undefined8 param_1,char param_2)

{
  code *pcVar1;
  char *pcVar2;
  
  pcVar2 = "none";
  switch(param_2) {
  case '\x01':
    pcVar2 = "prepare";
  case '\0':
    break;
  case '\x02':
    pcVar2 = "opaque";
    break;
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1072baf4c);
    (*pcVar1)();
  case '\x04':
    pcVar2 = "translucent";
    break;
  case '\b':
    pcVar2 = "shadow_casting";
    break;
  default:
    pcVar2 = "debug";
    if (param_2 != '\x10') {
      pcVar2 = "capture";
    }
  }
  func_0x00010002b82c(param_1,pcVar2);
  func_0x000107c613d0(pcVar2);
  func_0x000107c60c50();
  return;
}



/* Entry: 1072baf4c; end: 1072baf73;  */

long FUN_1072baf4c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1072bb458(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 1072baf74; end: 1072bb15f;  */

long * FUN_1072baf74(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long *plVar5;
  long *plVar6;
  long *unaff_x24;
  ulong uVar7;
  
  func_0x0001072cfa2c();
  FUN_10726364c();
  plVar6 = (long *)unaff_x19[1];
  plVar2 = param_3;
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x24 = (long *)(uVar7 & (ulong)param_3);
      in_NG = false;
    }
    else {
      in_NG = (long)param_3 - (long)plVar6 < 0;
      unaff_x24 = param_3;
      if (plVar6 <= param_3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)param_3 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)param_3 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_1072bb030;
          plVar3 = (long *)plVar5[1];
          in_NG = (long)plVar3 - (long)param_3 < 0;
          if (plVar3 != param_3) break;
          plVar2 = plVar5 + 2;
          func_0x000104c32db4(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) goto LAB_1072bb134;
        }
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar7);
        }
        else if (plVar6 <= plVar3) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar6;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
        }
        in_NG = (long)plVar3 - (long)unaff_x24 < 0;
      } while (plVar3 == unaff_x24);
    }
  }
LAB_1072bb030:
  plVar5 = unaff_x19 + 2;
  func_0x0001072cf830();
  *plVar2 = 0;
  plVar2[1] = (long)param_3;
  func_0x000104c2fe00(plVar2 + 2,param_4);
  *(undefined4 *)(plVar2 + 9) = 0;
  func_0x0001072cf168();
  if ((plVar6 == (long *)0x0) || (func_0x0001072d01ec(param_1,param_2,(float)plVar6), (bool)in_NG))
  {
    func_0x0001072ceb68((long)plVar6 << 1);
    FUN_1072bb160();
    plVar6 = (long *)unaff_x19[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)param_3);
    }
    else {
      unaff_x24 = param_3;
      if (plVar6 <= param_3) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)param_3 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)param_3 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar4 = *unaff_x19;
  plVar3 = *(long **)(lVar4 + (long)unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
    *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar5;
    if (*plVar2 != 0) {
      plVar5 = *(long **)(*plVar2 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar3;
    *plVar3 = (long)plVar2;
  }
  func_0x0001072cfb60();
  FUN_1072bb2e4();
  plVar5 = plVar2;
LAB_1072bb134:
  return plVar5 + 9;
}



/* Entry: 1072bb160; end: 1072bb1eb;  */

void FUN_1072bb160(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar5;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar6;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = param_1;
  if (param_2 - 1 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = param_2;
    if ((param_2 & param_2 - 1) != 0) {
      func_0x0001072cfdd8();
      uVar5 = uVar3;
    }
  }
  uVar8 = *(ulong *)(param_1 + 8);
  uVar2 = uVar8 <= uVar5;
  if (uVar8 < uVar5) {
LAB_1072bb1a4:
    func_0x0001072cef80();
    if (param_2 == 0) {
      FUN_1072bb2b4(uVar3);
      *(undefined8 *)(uVar3 + 8) = 0;
    }
    else {
      lVar4 = uVar3 + 8;
      FUN_1072bb2cc(lVar4);
      FUN_1072bb2b4(uVar3,lVar4);
      func_0x0001072cfac8();
      uVar5 = extraout_x9;
      while (param_2 != uVar5) {
        func_0x0001072d01d4();
        uVar5 = extraout_x9_00;
      }
      if (*(long *)(uVar3 + 0x10) != 0) {
        func_0x0001072cf2a8();
        func_0x0001072cf294();
        lVar4 = extraout_x8;
        plVar7 = extraout_x9_01;
        uVar3 = extraout_x10;
        uVar5 = extraout_x11;
        while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((param_2 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar5) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar6;
              uVar5 = uVar8;
            }
            else {
              *plVar6 = *plVar7;
              func_0x0001072ce844();
              lVar4 = extraout_x8_00;
              plVar7 = extraout_x9_02;
              uVar3 = extraout_x10_00;
              uVar5 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)uVar2) {
    func_0x0001072ceaa8();
    if (((bool)uVar2) && ((uVar8 & uVar8 - 1) == 0)) {
      func_0x0001072ce5e0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x0001072cfae8();
    if (!(bool)uVar2) goto LAB_1072bb1a4;
  }
  return;
}



/* Entry: 1072bb1ec; end: 1072bb2b3;  */

void FUN_1072bb1ec(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1072bb2b4(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_1072bb2cc(lVar2);
    FUN_1072bb2b4(param_1,lVar2);
    func_0x0001072cfac8();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x0001072d01d4();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072cf2a8();
      func_0x0001072cf294();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x0001072ce844();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072bb2b4; end: 1072bb2cb;  */

void FUN_1072bb2b4(long *param_1,long param_2)

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



/* Entry: 1072bb2cc; end: 1072bb2e3;  */

void FUN_1072bb2cc(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072cebb4();
  FUN_1072bb304();
  return;
}



/* Entry: 1072bb2e4; end: 1072bb303;  */

void FUN_1072bb2e4(void)

{
  func_0x0001072cebb4();
  FUN_1072bb304();
  return;
}



/* Entry: 1072bb304; end: 1072bb31b;  */

void FUN_1072bb304(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000104c2f714(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1072bb31c; end: 1072bb35b;  */

void FUN_1072bb31c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104c2f714(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1072bb35c; end: 1072bb3b3;  */

void FUN_1072bb35c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x0001072ce8d4();
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  FUN_1072bb3b4();
  uVar3 = uVar2;
  func_0x0001005d466c();
  *unaff_x21 = param_2;
  unaff_x21[1] = uVar1;
  unaff_x21[2] = unaff_x20;
  unaff_x21[3] = uVar2;
  unaff_x21[4] = unaff_x19;
  unaff_x21[5] = uVar3;
  return;
}



/* Entry: 1072bb3b4; end: 1072bb3c7;  */

void FUN_1072bb3b4(void)

{
  func_0x000107264c5c();
  return;
}



/* Entry: 1072bb3c8; end: 1072bb457;  */

void FUN_1072bb3c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x0001005d466c();
  FUN_1072bb3b4();
  func_0x0001005d466c();
  func_0x0001072cee80();
  FUN_107268a34();
  *(undefined1 *)(param_2 + lVar1) = 0;
  return;
}



/* Entry: 1072bb458; end: 1072bb4bb;  */

void FUN_1072bb458(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_10726c9e8();
  if ((uVar3 & 1) != 0) {
    FUN_1072bb4bc(param_2[1] + (long)plVar2 * 0xa8,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0xa8;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 1072bb4bc; end: 1072bb4ef;  */

void FUN_1072bb4bc(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1072bb4f0; end: 1072bb6b3;  */

undefined8 **
FUN_1072bb4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 **param_5)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *apuStack_1a0 [4];
  undefined1 auStack_180 [8];
  undefined8 *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 auStack_160 [32];
  long lStack_60;
  undefined8 uStack_58;
  
  uVar4 = param_2;
  uVar6 = param_3;
  puVar7 = param_4;
  ppuVar5 = param_5;
  func_0x0001072ce1e4();
  uStack_1b0 = uVar4;
  uStack_1a8 = uVar6;
  uStack_58 = extraout_x8;
  FUN_1072bb6b4(apuStack_1a0,puVar7,ppuVar5);
  puStack_178 = auStack_160;
  uStack_168 = 0x100;
  lStack_170 = 0;
  auStack_180 = (undefined1  [8])&PTR_FUN_1109965d0;
  lStack_60 = 0;
  func_0x0001072ced80(auStack_180,param_2,param_3,0xdd,apuStack_1a0);
  puVar7 = (undefined8 *)(lStack_170 + lStack_60);
  puStack_1c8 = &uStack_1b0;
  uVar1 = puVar7 == (undefined8 *)0x25;
  puStack_1c0 = param_4;
  ppuStack_1b8 = param_5;
  if (puVar7 < (undefined8 *)0x26) {
    ppuVar5 = (undefined8 **)(auStack_180 + 2);
    auStack_180 = (undefined1  [8])(CONCAT62(auStack_180._2_6_,(short)puVar7) & 0xffffffffff00ffff);
    *(undefined1 *)((long)ppuVar5 + (long)puVar7) = 0;
    ppuVar2 = &puStack_1c8;
    FUN_1072bb6e0(ppuVar2,ppuVar5,0x26);
    unaff_x19[1] = puStack_178;
    *unaff_x19 = auStack_180;
    unaff_x19[3] = uStack_168;
    unaff_x19[2] = lStack_170;
    unaff_x19[4] = auStack_160[0];
    func_0x0001072ceb14(1);
  }
  else {
    uVar1 = puVar7 == (undefined8 *)0x51;
    if (puVar7 < (undefined8 *)0x52) {
      func_0x0001072cea30(auStack_180);
      *(short *)auStack_180 = (short)puVar7;
      *(undefined1 *)((long)auStack_180 + (long)puVar7 + 2U) = 0;
      ppuVar5 = (undefined8 **)((long)auStack_180 + 2);
      FUN_1072bb6e0(&puStack_1c8,ppuVar5,0x52);
      unaff_x19[1] = puStack_178;
      *unaff_x19 = auStack_180;
      if (puStack_178 != (undefined8 *)0x0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      func_0x0001072ceb14(2);
      ppuVar2 = (undefined8 **)auStack_180;
      func_0x000104c2f784();
    }
    else {
      FUN_1072bb6b4(auStack_180,param_4,param_5);
      func_0x0001003a9204(apuStack_1a0,uStack_1b0,uStack_1a8,0xdd,auStack_180);
      ppuVar5 = apuStack_1a0;
      FUN_1072625b4();
      ppuVar2 = apuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  func_0x0001072ce0cc(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar3 = (undefined8 *)auStack_180;
    func_0x000104c2f784();
    func_0x0001072ce900();
    func_0x0001072cf998();
    func_0x0001072cf7d4();
    *param_5 = param_4;
    param_5[1] = puVar7;
    param_5[2] = puVar3;
    param_5[3] = ppuVar5;
    return param_5;
  }
  return ppuVar2;
}



/* Entry: 1072bb6b4; end: 1072bb6df;  */

void FUN_1072bb6b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x0001072cf998();
  func_0x0001072cf7d4();
  *unaff_x20 = unaff_x21;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  return;
}



/* Entry: 1072bb6e0; end: 1072bb713;  */

void FUN_1072bb6e0(undefined8 *param_1,long param_2,long param_3)

{
  FUN_1072bb714(param_2,param_3,*param_1,param_1[1],param_1[2]);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 1072bb714; end: 1072bb78f;  */

void FUN_1072bb714(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_50 [32];
  
  func_0x0001003ac100();
  func_0x0001072bb764(auStack_50,in_x3,in_x4);
  func_0x0001072cefcc();
  FUN_107268a34();
  return;
}



/* Entry: 1072bb790; end: 1072bb803;  */

undefined8 FUN_1072bb790(void)

{
  undefined8 unaff_x19;
  
  func_0x0001072cfc98();
  func_0x0001072bb7b4();
  func_0x0001072cebb4();
  FUN_1072bb804();
  return unaff_x19;
}



/* Entry: 1072bb804; end: 1072bb81b;  */

void FUN_1072bb804(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bb81c; end: 1072bb83b;  */

void FUN_1072bb81c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1072bb83c();
  }
  return;
}



/* Entry: 1072bb83c; end: 1072bb8d3;  */

undefined8 FUN_1072bb83c(void)

{
  undefined8 unaff_x19;
  
  func_0x0001072cfc98();
  func_0x0001072bb860();
  func_0x0001072cebb4();
  FUN_1072bb8d4();
  return unaff_x19;
}



/* Entry: 1072bb8d4; end: 1072bb8eb;  */

void FUN_1072bb8d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bb8ec; end: 1072bb90b;  */

void FUN_1072bb8ec(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1072bb90c();
  }
  return;
}



/* Entry: 1072bb90c; end: 1072bb973;  */

void FUN_1072bb90c(void)

{
  func_0x0001072cfa2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1072bb974; end: 1072bb99f;  */

undefined1 * FUN_1072bb974(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_1072bb9a0();
  return param_1;
}



/* Entry: 1072bb9a0; end: 1072bb9b3;  */

void FUN_1072bb9a0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x0001073c8e34();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1072bb9b4; end: 1072bb9cf;  */

void FUN_1072bb9b4(long param_1)

{
  func_0x0001073c8e34();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1072bb9d0; end: 1072bb9f3;  */

void FUN_1072bb9d0(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072bb9f4; end: 1072bba13;  */

void FUN_1072bb9f4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1072bba14();
  }
  return;
}



/* Entry: 1072bba14; end: 1072bba47;  */

void FUN_1072bba14(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072ce5c4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072ce508(uVar1);
  return;
}



/* Entry: 1072bba48; end: 1072bba53;  */

void FUN_1072bba48(void)

{
  func_0x0001072ce494();
  FUN_1072bba74();
  return;
}



/* Entry: 1072bba54; end: 1072bba73;  */

void FUN_1072bba54(void)

{
  FUN_1072bba74();
  return;
}



/* Entry: 1072bba74; end: 1072bba97;  */

void FUN_1072bba74(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  ulong extraout_x8;
  
  func_0x0001072d03d4();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072cee54();
  if ((extraout_x8 & 1) == 0) {
    FUN_1072bbac4();
  }
  return;
}



/* Entry: 1072bba98; end: 1072bbac3;  */

void FUN_1072bba98(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072bbac4();
  }
  return;
}



/* Entry: 1072bbac4; end: 1072bbad3;  */

void FUN_1072bbac4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x000107931394();
  }
  return;
}



/* Entry: 1072bbad4; end: 1072bbb53;  */

void FUN_1072bbad4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x000107931394();
  }
  return;
}


