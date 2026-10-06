/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10740eb38; end: 10740eb47;  */

void FUN_10740eb38(long *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  char cVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  ulong uVar11;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_88;
  double dStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  double dVar10;
  
  pfVar4 = (float *)*param_1;
  func_0x0001074118dc();
  *(undefined1 *)(pfVar4 + 0x459) = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  dStack_80 = (double)((ulong)dStack_80 & 0xffffffffffffff00);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  uStack_58 = 0;
  cVar6 = *(char *)(param_2 + 0x28);
  pfVar5 = pfVar4;
  if (cVar6 == '\x01') {
    uStack_f8 = unaff_x20[1];
    uStack_100 = *unaff_x20;
    uStack_e8 = unaff_x20[3];
    uStack_f0 = unaff_x20[2];
    uStack_e0 = unaff_x20[4];
    pfVar5 = (float *)(unaff_x19 + 0x50);
    FUN_107413204(pfVar5,&uStack_100);
  }
  if ((*(byte *)(unaff_x20 + 9) & 1) == 0) {
    fVar9 = 0.0;
    if (((uint)pfVar4[0x452] & 1) != 0) goto LAB_107410104;
  }
  else {
    dVar8 = (double)unaff_x20[8];
    fVar9 = (float)dVar8;
    dVar10 = (double)(ulong)(uint)fVar9;
    if (*(char *)(pfVar4 + 0x452) == '\x01') {
LAB_107410104:
      func_0x000107411800(0x1144);
      fVar7 = *pfVar5;
      dVar8 = (double)(ulong)(uint)fVar7;
      uVar1 = fVar7 < fVar9;
      if (!(bool)uVar1) {
        fVar9 = fVar7;
      }
      dVar10 = (double)(ulong)(uint)fVar9;
      func_0x000107411798();
      func_0x0001074118bc();
      if ((bool)uVar1) {
        func_0x0001074118b0();
        dVar10 = (double)(ulong)(uint)(float)dVar8;
      }
    }
    func_0x00010741176c();
    FUN_107413284();
    func_0x000107411798();
    if (dVar8 < dVar10) {
      cVar6 = '\x01';
      uStack_78 = 1;
      dStack_80 = dVar10;
    }
  }
  if ((*(byte *)(unaff_x20 + 7) & 1) == 0) {
    fVar9 = 22.0;
    if (((uint)pfVar4[0x454] & 1) != 0) goto LAB_107410178;
  }
  else {
    dVar8 = (double)unaff_x20[6];
    fVar9 = (float)dVar8;
    dVar10 = (double)(ulong)(uint)fVar9;
    if (*(char *)(pfVar4 + 0x454) == '\x01') {
LAB_107410178:
      func_0x000107411800(0x114c);
      fVar7 = *pfVar5;
      dVar8 = (double)(ulong)(uint)fVar7;
      cVar3 = NAN(fVar9) || NAN(fVar7);
      uVar1 = fVar9 == fVar7;
      cVar2 = fVar9 < fVar7;
      if (!(bool)cVar2) {
        fVar9 = fVar7;
      }
      dVar10 = (double)(ulong)(uint)fVar9;
      func_0x000107411798();
      func_0x0001074118bc();
      if (!(bool)uVar1 && cVar2 == cVar3) {
        func_0x0001074118b0();
        dVar10 = (double)(ulong)(uint)(float)dVar8;
      }
    }
    func_0x00010741176c();
    FUN_1074132e0();
    func_0x000107411798();
    if (dVar10 < dVar8) {
      cVar6 = '\x01';
      uStack_78 = 1;
      dStack_80 = dVar10;
    }
  }
  if ((*(byte *)(unaff_x20 + 0xb) & 1) == 0) {
    if (((uint)pfVar4[0x458] & 1) != 0) {
      fVar9 = 60.0;
      goto LAB_1074101f4;
    }
  }
  else {
    dVar8 = (double)unaff_x20[10];
    fVar9 = (float)dVar8;
    uVar11 = (ulong)(uint)fVar9;
    if (*(char *)(pfVar4 + 0x458) == '\x01') {
LAB_1074101f4:
      func_0x000107411800(0x115c);
      fVar7 = *pfVar5;
      dVar8 = (double)(ulong)(uint)fVar7;
      cVar3 = NAN(fVar9) || NAN(fVar7);
      uVar1 = fVar9 == fVar7;
      cVar2 = fVar9 < fVar7;
      if (!(bool)cVar2) {
        fVar9 = fVar7;
      }
      uVar11 = (ulong)(uint)fVar9;
      func_0x000107411790();
      dVar8 = dVar8 * 57.29577951308232;
      func_0x0001074118bc();
      if (!(bool)uVar1 && cVar2 == cVar3) {
        func_0x0001074118b0();
        func_0x000107411790();
        dVar8 = dVar8 * 57.29577951308232;
        uVar11 = (ulong)(uint)(float)dVar8;
      }
    }
    func_0x00010741176c();
    func_0x000107413328();
    func_0x000107411790();
    if (*(double *)(unaff_x19 + 0x98) < dVar8) {
      cVar6 = '\x01';
      uStack_58 = 1;
      uStack_60 = uVar11;
    }
  }
  if ((*(byte *)(unaff_x20 + 0xd) & 1) == 0) {
    fVar9 = 0.0;
    if (((uint)pfVar4[0x456] & 1) != 0) goto LAB_10741027c;
  }
  else {
    dVar8 = (double)unaff_x20[0xc];
    fVar9 = (float)dVar8;
    uVar11 = (ulong)(uint)fVar9;
    if (*(char *)(pfVar4 + 0x456) == '\x01') {
LAB_10741027c:
      func_0x000107411800(0x1154);
      fVar7 = *pfVar5;
      dVar8 = (double)(ulong)(uint)fVar7;
      uVar1 = fVar7 < fVar9;
      if (!(bool)uVar1) {
        fVar9 = fVar7;
      }
      uVar11 = (ulong)(uint)fVar9;
      func_0x000107411790();
      dVar8 = dVar8 * 57.29577951308232;
      func_0x0001074118bc();
      if ((bool)uVar1) {
        func_0x0001074118b0();
        func_0x000107411790();
        dVar8 = dVar8 * 57.29577951308232;
        uVar11 = (ulong)(uint)(float)dVar8;
      }
    }
    func_0x00010741176c();
    func_0x0001074132f4();
    func_0x000107411790();
    if (dVar8 < *(double *)(unaff_x19 + 0x90)) {
      uStack_58 = 1;
      uStack_60 = uVar11;
      goto LAB_1074102e0;
    }
  }
  if (cVar6 == '\0') {
    return;
  }
LAB_1074102e0:
  FUN_107410948();
  return;
}



/* Entry: 10740eb48; end: 10740ec13;  */

void FUN_10740eb48(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  lVar2 = *param_2;
  uVar1 = *(undefined1 *)(lVar2 + 0x58);
  uVar3 = *(undefined8 *)(lVar2 + 0x59);
  *(undefined8 *)(param_1 + 9) = *(undefined8 *)(lVar2 + 0x61);
  *(undefined8 *)(param_1 + 1) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x69);
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(lVar2 + 0x71);
  *(undefined8 *)(param_1 + 0x11) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar2 + 0x78);
  FUN_1074169e0();
  lVar2 = *param_2;
  uVar4 = *(undefined8 *)(lVar2 + 0x88);
  _log2();
  dVar5 = *(double *)(lVar2 + 0x90);
  dVar6 = *(double *)(lVar2 + 0x98);
  *param_1 = uVar1;
  param_1[0x28] = 1;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  param_1[0x38] = 1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  param_1[0x48] = 1;
  *(double *)(param_1 + 0x50) = dVar6 * 57.29577951308232;
  param_1[0x58] = 1;
  *(double *)(param_1 + 0x60) = dVar5 * 57.29577951308232;
  param_1[0x68] = 1;
  return;
}



/* Entry: 10740ec14; end: 10740ed33;  */

void FUN_10740ec14(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long lVar7;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
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
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  undefined4 uVar13;
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
  double dVar12;
  
  func_0x00010740f42c();
  lVar5 = extraout_x8 + 0x50;
  FUN_107411a4c();
  func_0x00010740f3a4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  func_0x00010729d56c(puVar6,"reason",param_2);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar9,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(lVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar7 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar7 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar7 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar7 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar7 + 0x1c8)) {
    func_0x000107410e94(lVar5 + 0x1168);
    FUN_1074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar11 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar12 = (double)(ulong)uVar11;
  uVar13 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar11;
  *(undefined4 *)(lVar5 + 0x1440) = uVar13;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar12,lVar5 + 0x1168);
  FUN_1074e3804(&uStack_80,lVar5 + 0x1168);
  FUN_107413c78(lVar5 + 0x50,&uStack_80);
  FUN_1074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(lVar5,&uStack_1090);
  }
  lVar7 = *(long *)(lVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar7 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar7 + 8) + 0x90);
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar7 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar7 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar7 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar7 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar7 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  puVar8 = *(undefined8 **)(lVar7 + 0x1c0);
  lStack_140 = puVar8[1];
  uStack_148 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar7 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar7 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar7 + 0xa8);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar7 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar7 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar7 + 0xd0);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar7 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar7 + 0x100);
  uStack_118 = *(undefined8 *)(lVar7 + 0xf8);
  if (*(long *)(lVar7 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar7 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x338);
  lStack_100 = *(long *)(lVar7 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar7 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0x348);
  lStack_f0 = *(long *)(lVar7 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar7 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0x358);
  lStack_e0 = *(long *)(lVar7 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_06;
    lVar7 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x368);
  lStack_d0 = *(long *)(lVar7 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
  lStack_c0 = *(long *)(lVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_08;
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
  plVar10 = *(long **)(lVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar6 + 0x1da,auStack_1d8);
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
  (**(code **)(*plVar10 + 0x20))(plVar10,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740ed34; end: 10740ed43;  */

void FUN_10740ed34(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_1 + 0x50;
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  func_0x000107415a44(*(undefined4 *)(*param_1 + 0xa8),lVar1,param_2,1);
  FUN_107417f00(lVar1 + 8,&uStack_20);
  return;
}



/* Entry: 10740ed44; end: 10740edc3;  */

void FUN_10740ed44(long *param_1,ulong param_2)

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
  undefined8 *puStack_10f0;
  undefined8 *puStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined **ppuStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined4 uStack_10a0;
  undefined4 uStack_1098;
  undefined1 uStack_1094;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  ulong uStack_1080;
  undefined1 uStack_1078;
  undefined1 auStack_270 [24];
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 auStack_228 [136];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_a8;
  long alStack_48 [5];
  double dVar13;
  
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      func_0x000104c31ae4();
      uVar14 = (undefined4)param_2;
      plVar11 = alStack_48;
      func_0x000104c31b5c();
      func_0x00010740f3c4();
      lVar5 = *plVar11;
      *(undefined4 *)(lVar5 + 0x10dc) = uVar14;
      puVar7 = &UNK_10de67fd7;
      (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5,&UNK_10de67fd7);
      uVar10 = *(undefined8 *)(lVar5 + 0x48);
      uStack_10e0 = (undefined8 *)CONCAT44(uStack_10e0._4_4_,0x76);
      uStack_10c8 = (undefined8 *)((ulong)uStack_10c8._4_4_ << 0x20);
      uStack_10b0 = 0;
      uStack_10a8 = 0;
      ppuStack_10c0 = &PTR_DAT_110996720;
      uStack_10b8 = 0;
      uStack_10a0 = 0x76;
      uStack_1098 = 0;
      uStack_1094 = 1;
      uStack_1088 = 0;
      uStack_1080 = 0;
      uStack_1090 = 0;
      puVar6 = &uStack_10e0;
      func_0x00010729d56c(puVar6,"reason",puVar7);
      uStack_d0 = 1;
      uStack_c8 = 0;
      puStack_b0 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
      uStack_a8 = 3;
      FUN_10743fa9c(uVar10,puVar6,&uStack_d0,&puStack_b0,7);
      puVar6 = &uStack_10e0;
      func_0x000107262330();
      if (*(int *)(lVar5 + 0x10d0) == 0) {
        __ZNSt3__16chrono12steady_clock3nowEv();
      }
      else {
        puVar6 = (undefined8 *)0x7fffffffffffffff;
      }
      lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
      uStack_10d0 = *(undefined8 *)(lVar8 + 0x1a0);
      uStack_10d8 = *(undefined8 *)(lVar8 + 0x198);
      ppuStack_10c0 = *(undefined ***)(lVar8 + 0x1b0);
      uStack_10c8 = *(undefined8 **)(lVar8 + 0x1a8);
      uStack_10b8 = *(undefined8 *)(lVar8 + 0x1b8);
      uStack_10e0 = puVar6;
      puStack_b0 = puVar6;
      if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar8 + 0x1c8)) {
        func_0x000107410e94(lVar5 + 0x1168);
        FUN_1074e31dc(lVar5 + 0x1168,&uStack_10e0);
      }
      uVar12 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
      dVar13 = (double)(ulong)uVar12;
      uVar14 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
      *(uint *)(lVar5 + 0x143c) = uVar12;
      *(undefined4 *)(lVar5 + 0x1440) = uVar14;
      func_0x000107411798();
      FUN_1074e33b8((float)dVar13,lVar5 + 0x1168);
      FUN_1074e3804(&uStack_d0,lVar5 + 0x1168);
      FUN_107413c78(lVar5 + 0x50,&uStack_d0);
      FUN_1074137f8(lVar5 + 0x50,&puStack_b0);
      if (*(char *)(lVar5 + 0x1164) == '\x01') {
        uStack_10e0 = (undefined8 *)((ulong)uStack_10e0 & 0xffffffffffffff00);
        func_0x0001074117a0();
        uStack_1080 = uStack_1080 & 0xffffffffffffff00;
        uStack_1078 = 0;
        FUN_107410058(lVar5,&uStack_10e0);
      }
      lVar8 = *(long *)(lVar5 + 0x10f8);
      uVar4 = (undefined1)*(undefined8 *)(lVar8 + 8);
      func_0x0001077c5a6c();
      uStack_10e0 = (undefined8 *)CONCAT71(uStack_10e0._1_7_,uVar4);
      uStack_10e0 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_10e0);
      uStack_10d8 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
      uStack_10d0 = CONCAT71(uStack_10d0._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
      uStack_10c8 = puStack_b0;
      _memcpy(&ppuStack_10c0,lVar5 + 0x58,0xe50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_270,*(long *)(lVar8 + 8) + 0x90);
      lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
      uStack_258 = *(undefined1 *)(lVar8 + 0x22);
      uStack_248 = *(undefined8 *)(lVar8 + 0x1a0);
      uStack_250 = *(undefined8 *)(lVar8 + 0x198);
      uStack_230 = (undefined1)*(undefined8 *)(lVar8 + 0x1b8);
      uStack_22f = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b8) >> 8);
      uStack_238 = (undefined1)*(undefined8 *)(lVar8 + 0x1b0);
      uStack_237 = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b0) >> 8);
      uStack_240 = (undefined1)*(undefined8 *)(lVar8 + 0x1a8);
      uStack_23f = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1a8) >> 8);
      FUN_107411660(auStack_228,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
      puVar6 = &uStack_10e0;
      uStack_1a0 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
      lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
      puVar9 = *(undefined8 **)(lVar8 + 0x1c0);
      lStack_190 = puVar9[1];
      uStack_198 = *puVar9;
      if (puVar9[1] != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11 != 0);
        func_0x0001074117c0();
        puVar6 = extraout_x8;
        lVar8 = extraout_x9;
      }
      lStack_180 = *(long *)(lVar8 + 0xb0);
      uStack_188 = *(undefined8 *)(lVar8 + 0xa8);
      if (*(long *)(lVar8 + 0xb0) != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_00 != 0);
        func_0x0001074117c0();
        puVar6 = extraout_x8_00;
        lVar8 = extraout_x9_00;
      }
      lStack_170 = *(long *)(lVar8 + 0xd8);
      uStack_178 = *(undefined8 *)(lVar8 + 0xd0);
      if (*(long *)(lVar8 + 0xd8) != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_01 != 0);
        func_0x0001074117c0();
        puVar6 = extraout_x8_01;
        lVar8 = extraout_x9_01;
      }
      lStack_160 = *(long *)(lVar8 + 0x100);
      uStack_168 = *(undefined8 *)(lVar8 + 0xf8);
      if (*(long *)(lVar8 + 0x100) != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_02 != 0);
        func_0x0001074117c0();
        puVar6 = extraout_x8_02;
        lVar8 = extraout_x9_02;
      }
      uStack_158 = *(undefined8 *)(lVar8 + 0x338);
      lStack_150 = *(long *)(lVar8 + 0x340);
      if (lStack_150 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_03 != 0);
        func_0x0001074117c0();
        puVar6 = extraout_x8_03;
        lVar8 = extraout_x9_03;
      }
      uStack_148 = *(undefined8 *)(lVar8 + 0x348);
      lStack_140 = *(long *)(lVar8 + 0x350);
      if (lStack_140 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_04 != 0);
        func_0x0001074117c0();
        puVar6 = extraout_x8_04;
        lVar8 = extraout_x9_04;
      }
      uStack_138 = *(undefined8 *)(lVar8 + 0x358);
      lStack_130 = *(long *)(lVar8 + 0x360);
      if (lStack_130 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_05 != 0);
        func_0x0001074117c0();
        puVar6 = extraout_x8_05;
        lVar8 = extraout_x9_05;
      }
      uStack_128 = *(undefined8 *)(lVar8 + 0x368);
      lStack_120 = *(long *)(lVar8 + 0x370);
      if (lStack_120 != 0) {
        do {
          func_0x000107411734();
          puVar6 = extraout_x8_06;
        } while (extraout_w11_06 != 0);
      }
      uStack_118 = *(undefined8 *)(lVar5 + 0x10e8);
      lStack_110 = *(long *)(lVar5 + 0x10f0);
      if (lStack_110 != 0) {
        do {
          func_0x000107411734();
          puVar6 = extraout_x8_07;
        } while (extraout_w11_07 != 0);
      }
      *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
      *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
      *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
      uStack_fc = uStack_c8;
      uStack_f8 = uStack_c4;
      uStack_104 = uStack_d0;
      uStack_100 = uStack_cc;
      uStack_ec = (undefined4)uStack_b8;
      uStack_e8 = (undefined4)((ulong)uStack_b8 >> 0x20);
      uStack_f4 = (undefined4)uStack_c0;
      uStack_f0 = (undefined4)((ulong)uStack_c0 >> 0x20);
      uStack_d8 = *(undefined8 *)(lVar5 + 0x1118);
      uStack_e0 = *(undefined8 *)(lVar5 + 0x1110);
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
      *puVar6 = &PTR_FUN_1109adf98;
      _memcpy(puVar6 + 3,&uStack_10e0,0xe70);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar6 + 0x1d1,auStack_270);
      puVar6[0x1d5] = uStack_250;
      puVar6[0x1d4] = CONCAT71(uStack_257,uStack_258);
      puVar6[0x1d7] = CONCAT71(uStack_23f,uStack_240);
      puVar6[0x1d6] = uStack_248;
      *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_230,uStack_237);
      *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_238,uStack_23f);
      FUN_107411660(puVar6 + 0x1da,auStack_228);
      puVar6[0x1eb] = uStack_1a0;
      puVar6[0x1ed] = lStack_190;
      puVar6[0x1ec] = uStack_198;
      if (lStack_190 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_00 != 0);
      }
      puVar6[0x1ef] = lStack_180;
      puVar6[0x1ee] = uStack_188;
      if (lStack_180 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_01 != 0);
      }
      puVar6[0x1f1] = lStack_170;
      puVar6[0x1f0] = uStack_178;
      if (lStack_170 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_02 != 0);
      }
      puVar6[499] = lStack_160;
      puVar6[0x1f2] = uStack_168;
      if (lStack_160 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_03 != 0);
      }
      puVar6[0x1f5] = lStack_150;
      puVar6[500] = uStack_158;
      if (lStack_150 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_04 != 0);
      }
      puVar6[0x1f7] = lStack_140;
      puVar6[0x1f6] = uStack_148;
      if (lStack_140 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_05 != 0);
      }
      puVar6[0x1f9] = lStack_130;
      puVar6[0x1f8] = uStack_138;
      if (lStack_130 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_06 != 0);
      }
      puVar6[0x1fb] = lStack_120;
      puVar6[0x1fa] = uStack_128;
      if (lStack_120 != 0) {
        plVar1 = (long *)(lStack_120 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6[0x1fd] = lStack_110;
      puVar6[0x1fc] = uStack_118;
      puVar6[0x1ff] = CONCAT44(uStack_fc,uStack_100);
      puVar6[0x1fe] = CONCAT44(uStack_104,uStack_108);
      uStack_118 = 0;
      lStack_110 = 0;
      puVar6[0x201] = CONCAT44(uStack_ec,uStack_f0);
      puVar6[0x200] = CONCAT44(uStack_f4,uStack_f8);
      *(undefined4 *)(puVar6 + 0x202) = uStack_e8;
      puVar6[0x204] = uStack_d8;
      puVar6[0x203] = uStack_e0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puStack_10f0 = puVar6 + 3;
      puStack_10e8 = puVar6;
      (**(code **)(*plVar11 + 0x20))(plVar11,&puStack_10f0);
      func_0x00010725ab14(&puStack_10f0);
      func_0x000107410df4(&uStack_10e0);
      return;
    }
    func_0x000104c31af0(alStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x000104c31ac4(param_1,alStack_48);
    func_0x000104c31b5c(alStack_48);
  }
  return;
}



/* Entry: 10740edc4; end: 10740ee13;  */

void FUN_10740edc4(long *param_1,undefined4 param_2)

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
  
  lVar5 = *param_1;
  *(undefined4 *)(lVar5 + 0x10dc) = param_2;
  puVar7 = &UNK_10de67fd7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5,&UNK_10de67fd7);
  uVar10 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  func_0x00010729d56c(puVar6,"reason",puVar7);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar10,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  func_0x000107262330();
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
    FUN_1074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar12 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar13 = (double)(ulong)uVar12;
  uVar14 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar12;
  *(undefined4 *)(lVar5 + 0x1440) = uVar14;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar13,lVar5 + 0x1168);
  FUN_1074e3804(&uStack_80,lVar5 + 0x1168);
  FUN_107413c78(lVar5 + 0x50,&uStack_80);
  FUN_1074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(lVar5,&uStack_1090);
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
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
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
  *puVar6 = &PTR_FUN_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar6 + 0x1da,auStack_1d8);
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
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 10740ee14; end: 10740ee4f;  */

long FUN_10740ee14(long param_1)

{
  FUN_10740ee50(param_1 + 0xfb8);
  func_0x00010740ee9c(param_1 + 0xed8);
  func_0x0001006393ec(param_1 + 0xe88);
  func_0x00010740ef80(param_1 + 0xe68);
  return param_1;
}



/* Entry: 10740ee50; end: 10740ee6f;  */

void FUN_10740ee50(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_10740ee70();
  }
  return;
}



/* Entry: 10740ee70; end: 10740eecb;  */

long FUN_10740ee70(long param_1)

{
  func_0x0001006393ec(param_1 + 0xa0);
  func_0x00010728397c(param_1 + 0x80);
  return param_1;
}



/* Entry: 10740eecc; end: 10740ef17;  */

void FUN_10740eecc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0xd0) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109adcc0)[*(uint *)(param_1 + 0xd0)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  return;
}



/* Entry: 10740ef18; end: 10740ef27;  */

long FUN_10740ef18(undefined8 param_1,long param_2)

{
  func_0x0001006393ec(param_2 + 0xb0);
  func_0x0001072822ec(param_2 + 0x90);
  return param_2;
}



/* Entry: 10740ef28; end: 10740efc3;  */

long FUN_10740ef28(long param_1)

{
  func_0x0001006393ec(param_1 + 0xb0);
  func_0x0001072822ec(param_1 + 0x90);
  return param_1;
}



/* Entry: 10740efc4; end: 10740efdb;  */

void FUN_10740efc4(void)

{
  __ZNSt13runtime_errorC2EPKc();
  func_0x00010740f494();
  return;
}



/* Entry: 10740efdc; end: 10740efdf;  */

void FUN_10740efdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10740efe0; end: 10740eff3;  */

void FUN_10740efe0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10740eff4; end: 10740f023;  */

undefined8 * FUN_10740eff4(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10740f024(param_1,param_2,param_2 + param_3 * 0x10,param_3);
  return param_1;
}



/* Entry: 10740f024; end: 10740f0a3;  */

void FUN_10740f024(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_107365968(param_1,param_4);
    FUN_10740f0a4(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001073659a0(&uStack_40);
  return;
}



/* Entry: 10740f0a4; end: 10740f0c3;  */

void FUN_10740f0a4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10740f0c4; end: 10740f11f;  */

long FUN_10740f0c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10740f120; end: 10740f143;  */

undefined8 FUN_10740f120(undefined8 param_1)

{
  FUN_10740f144(param_1,0);
  return param_1;
}



/* Entry: 10740f144; end: 10740f15b;  */

void FUN_10740f144(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10740f978(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10740f15c; end: 10740f177;  */

void FUN_10740f15c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10740f978(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10740f178; end: 10740f19b;  */

undefined8 FUN_10740f178(undefined8 param_1)

{
  FUN_10740f19c(param_1,0);
  return param_1;
}



/* Entry: 10740f19c; end: 10740f1b3;  */

void FUN_10740f19c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074118f4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10740f1b4; end: 10740f207;  */

void FUN_10740f1b4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074118f4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10740f208; end: 10740f22b;  */

undefined8 FUN_10740f208(undefined8 param_1)

{
  FUN_10740f22c(param_1,0);
  return param_1;
}



/* Entry: 10740f22c; end: 10740f243;  */

void FUN_10740f22c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010724bfc0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10740f244; end: 10740f25f;  */

void FUN_10740f244(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010724bfc0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10740f260; end: 10740f277;  */

void FUN_10740f260(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001077c3668(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10740f278; end: 10740f293;  */

void FUN_10740f278(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001077c3668(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10740f294; end: 10740f2cf;  */

undefined8 FUN_10740f294(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010740f418();
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa8);
  func_0x00010724e49c(auStack_40);
  return uVar1;
}



/* Entry: 10740f2d0; end: 10740f353;  */

long FUN_10740f2d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10740f354; end: 10740f4df;  */

void FUN_10740f354(void)

{
  long unaff_x25;
  
  *(undefined1 *)(unaff_x25 + 0xeb0) = 0;
  *(undefined1 *)(unaff_x25 + 0xed0) = 0;
  *(undefined1 *)(unaff_x25 + 0xed8) = 0;
  *(undefined1 *)(unaff_x25 + 0xfb0) = 0;
  return;
}



/* Entry: 10740f4e0; end: 10740f877;  */

undefined ** FUN_10740f4e0(undefined **param_1,undefined8 *param_2,undefined *param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined4 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (undefined *)&PTR_DAT_1109adde0;
  *param_1 = (undefined *)&PTR_FUN_1109add20;
  param_1[2] = param_3;
  plVar4 = (long *)param_4[3];
  if (plVar4 == (long *)0x0) {
    param_1[6] = (undefined *)0x0;
  }
  else if (plVar4 == param_4) {
    param_1[6] = (undefined *)(param_1 + 3);
    plVar4 = (long *)param_4[3];
    (**(code **)(*plVar4 + 0x18))();
  }
  else {
    func_0x000107411744();
    param_1[6] = (undefined *)plVar4;
  }
  param_1[7] = (undefined *)*param_2;
  param_1[8] = (undefined *)param_2[8];
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  param_1[9] = (undefined *)(plVar4 + 1);
  func_0x0001074118e8();
  FUN_1074119f0(param_1 + 10);
  func_0x0001074118e8();
  *(undefined4 *)(param_1 + 0x21a) = *extraout_x8;
  *(undefined4 *)((long)param_1 + 0x10d4) = extraout_x8[6];
  uVar3 = *(undefined1 *)((long)extraout_x8 + 0xd);
  puVar5 = (undefined *)param_2[1];
  ppuVar7 = param_1 + 0x21d;
  param_1[0x21e] = (undefined *)param_2[2];
  *ppuVar7 = puVar5;
  *(undefined1 *)(param_1 + 0x21b) = uVar3;
  *(undefined4 *)((long)param_1 + 0x10dc) = 0;
  *(undefined1 *)(param_1 + 0x21c) = 0;
  if (param_2[2] != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[4];
  lVar2 = param_2[5];
  uStack_b0 = uVar1;
  lStack_a8 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar11 = param_1[9];
  puVar10 = param_1[0x21e];
  puVar13 = param_1[0x21e];
  ppuVar12 = (undefined **)*ppuVar7;
  puVar5 = (undefined *)0x10;
  __Znwm();
  ppuStack_90 = ppuVar12;
  ppuStack_88 = (undefined **)puVar13;
  if (puVar10 != (undefined *)0x0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = uVar1;
  lStack_98 = lVar2;
  func_0x0001077c355c(*(undefined4 *)((long)param_1 + 0x10d4),puVar5,&ppuStack_90,&uStack_a0,puVar11
                     );
  param_1[0x21f] = puVar5;
  func_0x0001072aa180(&uStack_a0);
  func_0x00010724bd50(&ppuStack_90);
  func_0x0001072aa180(&uStack_b0);
  *(undefined2 *)(param_1 + 0x220) = 0x400;
  *(undefined1 *)((long)param_1 + 0x1102) = 0;
  param_1[0x221] = (undefined *)0x0;
  param_1[0x223] = (undefined *)0x0;
  param_1[0x222] = (undefined *)0x0;
  FUN_10740f878(param_1 + 0x224,0x12);
  param_1[0x227] = (undefined *)0x0;
  param_1[0x226] = (undefined *)0x0;
  *(undefined1 *)((long)param_1 + 0x1144) = 0;
  *(undefined1 *)(param_1 + 0x229) = 0;
  *(undefined1 *)((long)param_1 + 0x114c) = 0;
  *(undefined1 *)(param_1 + 0x22a) = 0;
  *(undefined1 *)((long)param_1 + 0x1154) = 0;
  *(undefined1 *)(param_1 + 0x22b) = 0;
  *(undefined1 *)((long)param_1 + 0x115c) = 0;
  *(undefined1 *)(param_1 + 0x22c) = 0;
  *(undefined1 *)((long)param_1 + 0x1164) = 0;
  puVar9 = *(undefined8 **)(*(long *)(param_1[0x21f] + 8) + 0x1c8);
  uStack_b8 = puVar9[1];
  uStack_c0 = *puVar9;
  if (puVar9[1] != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  FUN_1074e3170(param_1 + 0x22d,&uStack_c0,param_1[8]);
  FUN_107410b3c(&uStack_c0);
  func_0x0001074118e8();
  FUN_107413360(param_1 + 10,*(undefined1 *)(extraout_x8_00 + 0xc));
  *(undefined ***)(*(long *)(param_1[0x21f] + 8) + 0x3a8) = param_1;
  (**(code **)(*(long *)param_1[7] + 0x18))(param_1[7],param_1 + 1);
  func_0x0001074118e8();
  FUN_107411a4c(param_1 + 10,*(undefined8 *)(extraout_x8_01 + 0x10));
  FUN_10740f8c8(param_1);
  plVar4 = (long *)param_1[8];
  ppuStack_90 = &PTR_FUN_1109adf08;
  pppuStack_78 = &ppuStack_90;
  pppuVar6 = &ppuStack_90;
  ppuStack_88 = param_1;
  (**(code **)(*plVar4 + 0x10))(plVar4,pppuVar6);
  uVar8 = (uint)pppuVar6;
  *(int *)(param_1 + 0x228) = (int)plVar4;
  pppuVar6 = &ppuStack_90;
  FUN_1074115f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_1074115f8(&ppuStack_90);
    func_0x000107410b60(param_1 + 0x22d);
    FUN_1074114d8(param_1 + 0x226);
    FUN_1074114d8(param_1 + 0x224);
    func_0x000107411878();
    FUN_10740f208(param_1 + 0x221);
    func_0x000107411480(param_1 + 0x21f);
    func_0x00010724bd50(ppuVar7);
    FUN_10740ee14(param_1 + 10);
    func_0x0001072bcf1c(param_1 + 3);
    __Unwind_Resume();
    ppuVar7 = (undefined **)0x40;
    __Znwm();
    ppuVar7[1] = (undefined *)0x0;
    ppuVar7[2] = (undefined *)0x0;
    ppuVar12 = ppuVar7 + 3;
    *ppuVar7 = (undefined *)&PTR_FUN_1109adeb8;
    func_0x000107878e84(ppuVar12,uVar8 & 0xff);
    *pppuVar6 = ppuVar12;
    pppuVar6[1] = ppuVar7;
    return ppuVar12;
  }
  return param_1;
}



/* Entry: 10740f878; end: 10740f8c7;  */

void FUN_10740f878(undefined8 *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_1109adeb8;
  func_0x000107878e84(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10740f8c8; end: 10740f977;  */

void FUN_10740f8c8(long param_1)

{
  long *plVar1;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_40 = &UNK_10e52b660;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001078657a4(*(undefined8 *)(param_1 + 0x40),&puStack_40);
  plVar1 = *(long **)(param_1 + 0x38);
  func_0x000107278fec(auStack_68,&puStack_40);
  func_0x00010786975c(auStack_58,auStack_68);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_58);
  func_0x00010726b264(auStack_58);
  func_0x00010726b264(auStack_68);
  func_0x00010726ae88(&puStack_40);
  return;
}



/* Entry: 10740f978; end: 10740fa17;  */

long FUN_10740f978(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
            (*(long **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x1140));
  (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
  func_0x000107410b60(param_1 + 0x1168);
  FUN_1074114d8(param_1 + 0x1130);
  FUN_1074114d8(param_1 + 0x1120);
  func_0x000107411878();
  FUN_10740f208(param_1 + 0x1108);
  func_0x000107411480(param_1 + 0x10f8);
  func_0x00010724bd50(param_1 + 0x10e8);
  FUN_10740ee14(param_1 + 0x50);
  func_0x0001072bcf1c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10740fa18; end: 10740fa23;  */

long FUN_10740fa18(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
            (*(long **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x1140));
  (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
  func_0x000107410b60(param_1 + 0x1168);
  FUN_1074114d8(param_1 + 0x1130);
  FUN_1074114d8(param_1 + 0x1120);
  func_0x000107411878();
  FUN_10740f208(param_1 + 0x1108);
  func_0x000107411480(param_1 + 0x10f8);
  func_0x00010724bd50(param_1 + 0x10e8);
  FUN_10740ee14(param_1 + 0x50);
  func_0x0001072bcf1c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10740fa24; end: 10740fa37;  */

void FUN_10740fa24(void)

{
  FUN_10740f978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10740fa38; end: 10740fa4f;  */

void FUN_10740fa38(long param_1)

{
  FUN_10740f978(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10740fa50; end: 107410057;  */

void FUN_10740fa50(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
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
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar12;
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
  double dVar11;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar5 = &uStack_1090;
  func_0x00010729d56c(puVar5,"reason",param_2);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(param_1 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar8,puVar5,&uStack_80,&puStack_60,7);
  puVar5 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(param_1 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar5 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar6 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar6 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar6 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar6 + 0x1b8);
  uStack_1090 = puVar5;
  puStack_60 = puVar5;
  if (*(long *)(param_1 + 0x1168) != **(long **)(lVar6 + 0x1c8)) {
    func_0x000107410e94(param_1 + 0x1168);
    FUN_1074e31dc(param_1 + 0x1168,&uStack_1090);
  }
  uVar10 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa4));
  dVar11 = (double)(ulong)uVar10;
  uVar12 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa8));
  *(uint *)(param_1 + 0x143c) = uVar10;
  *(undefined4 *)(param_1 + 0x1440) = uVar12;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar11,param_1 + 0x1168);
  FUN_1074e3804(&uStack_80,param_1 + 0x1168);
  FUN_107413c78(param_1 + 0x50,&uStack_80);
  FUN_1074137f8(param_1 + 0x50,&puStack_60);
  if (*(char *)(param_1 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(param_1,&uStack_1090);
  }
  lVar6 = *(long *)(param_1 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar6 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(param_1 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(param_1 + 0x10dc),*(undefined4 *)(param_1 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(param_1 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,param_1 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar6 + 8) + 0x90);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar6 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar6 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar6 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar6 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar6 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 0x108);
  puVar5 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 400);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  puVar7 = *(undefined8 **)(lVar6 + 0x1c0);
  lStack_140 = puVar7[1];
  uStack_148 = *puVar7;
  if (puVar7[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8;
    lVar6 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar6 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar6 + 0xa8);
  if (*(long *)(lVar6 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_00;
    lVar6 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar6 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar6 + 0xd0);
  if (*(long *)(lVar6 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_01;
    lVar6 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar6 + 0x100);
  uStack_118 = *(undefined8 *)(lVar6 + 0xf8);
  if (*(long *)(lVar6 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_02;
    lVar6 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar6 + 0x338);
  lStack_100 = *(long *)(lVar6 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_03;
    lVar6 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar6 + 0x348);
  lStack_f0 = *(long *)(lVar6 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_04;
    lVar6 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar6 + 0x358);
  lStack_e0 = *(long *)(lVar6 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_05;
    lVar6 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar6 + 0x368);
  lStack_d0 = *(long *)(lVar6 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0x10e8);
  lStack_c0 = *(long *)(param_1 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar5 + 0x1fb) = *(undefined1 *)(param_1 + 0x1101);
  *(bool *)((long)puVar5 + 0xfd9) = *(long *)(param_1 + 0x1108) != 0;
  *(undefined1 *)((long)puVar5 + 0xfda) = *(undefined1 *)(param_1 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x1118);
  uStack_90 = *(undefined8 *)(param_1 + 0x1110);
  if (*(long *)(param_1 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar9 = *(long **)(param_1 + 0x38);
  puVar5 = (undefined8 *)0x1028;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1109adf98;
  _memcpy(puVar5 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar5 + 0x1d1,auStack_220);
  puVar5[0x1d5] = uStack_200;
  puVar5[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar5[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar5[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar5 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar5 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar5 + 0x1da,auStack_1d8);
  puVar5[0x1eb] = uStack_150;
  puVar5[0x1ed] = lStack_140;
  puVar5[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar5[0x1ef] = lStack_130;
  puVar5[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar5[0x1f1] = lStack_120;
  puVar5[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar5[499] = lStack_110;
  puVar5[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar5[0x1f5] = lStack_100;
  puVar5[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar5[0x1f7] = lStack_f0;
  puVar5[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar5[0x1f9] = lStack_e0;
  puVar5[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar5[0x1fb] = lStack_d0;
  puVar5[0x1fa] = uStack_d8;
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
  puVar5[0x1fd] = lStack_c0;
  puVar5[0x1fc] = uStack_c8;
  puVar5[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar5[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar5[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar5[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar5 + 0x202) = uStack_98;
  puVar5[0x204] = uStack_88;
  puVar5[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar5 + 3;
  puStack_1098 = puVar5;
  (**(code **)(*plVar9 + 0x20))(plVar9,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 107410058; end: 107410307;  */

void FUN_107410058(float *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  float *pfVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  char cVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  ulong uVar10;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_88;
  double dStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  double dVar9;
  
  func_0x0001074118dc();
  *(undefined1 *)(param_1 + 0x459) = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  dStack_80 = (double)((ulong)dStack_80 & 0xffffffffffffff00);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  uStack_58 = 0;
  cVar5 = *(char *)(param_2 + 0x28);
  pfVar4 = param_1;
  if (cVar5 == '\x01') {
    uStack_f8 = unaff_x20[1];
    uStack_100 = *unaff_x20;
    uStack_e8 = unaff_x20[3];
    uStack_f0 = unaff_x20[2];
    uStack_e0 = unaff_x20[4];
    pfVar4 = (float *)(unaff_x19 + 0x50);
    FUN_107413204(pfVar4,&uStack_100);
  }
  if ((*(byte *)(unaff_x20 + 9) & 1) == 0) {
    fVar8 = 0.0;
    if (((uint)param_1[0x452] & 1) != 0) goto LAB_107410104;
  }
  else {
    dVar7 = (double)unaff_x20[8];
    fVar8 = (float)dVar7;
    dVar9 = (double)(ulong)(uint)fVar8;
    if (*(char *)(param_1 + 0x452) == '\x01') {
LAB_107410104:
      func_0x000107411800(0x1144);
      fVar6 = *pfVar4;
      dVar7 = (double)(ulong)(uint)fVar6;
      uVar1 = fVar6 < fVar8;
      if (!(bool)uVar1) {
        fVar8 = fVar6;
      }
      dVar9 = (double)(ulong)(uint)fVar8;
      func_0x000107411798();
      func_0x0001074118bc();
      if ((bool)uVar1) {
        func_0x0001074118b0();
        dVar9 = (double)(ulong)(uint)(float)dVar7;
      }
    }
    func_0x00010741176c();
    FUN_107413284();
    func_0x000107411798();
    if (dVar7 < dVar9) {
      cVar5 = '\x01';
      uStack_78 = 1;
      dStack_80 = dVar9;
    }
  }
  if ((*(byte *)(unaff_x20 + 7) & 1) == 0) {
    fVar8 = 22.0;
    if (((uint)param_1[0x454] & 1) != 0) goto LAB_107410178;
  }
  else {
    dVar7 = (double)unaff_x20[6];
    fVar8 = (float)dVar7;
    dVar9 = (double)(ulong)(uint)fVar8;
    if (*(char *)(param_1 + 0x454) == '\x01') {
LAB_107410178:
      func_0x000107411800(0x114c);
      fVar6 = *pfVar4;
      dVar7 = (double)(ulong)(uint)fVar6;
      cVar3 = NAN(fVar8) || NAN(fVar6);
      uVar1 = fVar8 == fVar6;
      cVar2 = fVar8 < fVar6;
      if (!(bool)cVar2) {
        fVar8 = fVar6;
      }
      dVar9 = (double)(ulong)(uint)fVar8;
      func_0x000107411798();
      func_0x0001074118bc();
      if (!(bool)uVar1 && cVar2 == cVar3) {
        func_0x0001074118b0();
        dVar9 = (double)(ulong)(uint)(float)dVar7;
      }
    }
    func_0x00010741176c();
    FUN_1074132e0();
    func_0x000107411798();
    if (dVar9 < dVar7) {
      cVar5 = '\x01';
      uStack_78 = 1;
      dStack_80 = dVar9;
    }
  }
  if ((*(byte *)(unaff_x20 + 0xb) & 1) == 0) {
    if (((uint)param_1[0x458] & 1) != 0) {
      fVar8 = 60.0;
      goto LAB_1074101f4;
    }
  }
  else {
    dVar7 = (double)unaff_x20[10];
    fVar8 = (float)dVar7;
    uVar10 = (ulong)(uint)fVar8;
    if (*(char *)(param_1 + 0x458) == '\x01') {
LAB_1074101f4:
      func_0x000107411800(0x115c);
      fVar6 = *pfVar4;
      dVar7 = (double)(ulong)(uint)fVar6;
      cVar3 = NAN(fVar8) || NAN(fVar6);
      uVar1 = fVar8 == fVar6;
      cVar2 = fVar8 < fVar6;
      if (!(bool)cVar2) {
        fVar8 = fVar6;
      }
      uVar10 = (ulong)(uint)fVar8;
      func_0x000107411790();
      dVar7 = dVar7 * 57.29577951308232;
      func_0x0001074118bc();
      if (!(bool)uVar1 && cVar2 == cVar3) {
        func_0x0001074118b0();
        func_0x000107411790();
        dVar7 = dVar7 * 57.29577951308232;
        uVar10 = (ulong)(uint)(float)dVar7;
      }
    }
    func_0x00010741176c();
    func_0x000107413328();
    func_0x000107411790();
    if (*(double *)(unaff_x19 + 0x98) < dVar7) {
      cVar5 = '\x01';
      uStack_58 = 1;
      uStack_60 = uVar10;
    }
  }
  if ((*(byte *)(unaff_x20 + 0xd) & 1) == 0) {
    fVar8 = 0.0;
    if (((uint)param_1[0x456] & 1) != 0) goto LAB_10741027c;
  }
  else {
    dVar7 = (double)unaff_x20[0xc];
    fVar8 = (float)dVar7;
    uVar10 = (ulong)(uint)fVar8;
    if (*(char *)(param_1 + 0x456) == '\x01') {
LAB_10741027c:
      func_0x000107411800(0x1154);
      fVar6 = *pfVar4;
      dVar7 = (double)(ulong)(uint)fVar6;
      uVar1 = fVar6 < fVar8;
      if (!(bool)uVar1) {
        fVar8 = fVar6;
      }
      uVar10 = (ulong)(uint)fVar8;
      func_0x000107411790();
      dVar7 = dVar7 * 57.29577951308232;
      func_0x0001074118bc();
      if ((bool)uVar1) {
        func_0x0001074118b0();
        func_0x000107411790();
        dVar7 = dVar7 * 57.29577951308232;
        uVar10 = (ulong)(uint)(float)dVar7;
      }
    }
    func_0x00010741176c();
    func_0x0001074132f4();
    func_0x000107411790();
    if (dVar7 < *(double *)(unaff_x19 + 0x90)) {
      uStack_58 = 1;
      uStack_60 = uVar10;
      goto LAB_1074102e0;
    }
  }
  if (cVar5 == '\0') {
    return;
  }
LAB_1074102e0:
  FUN_107410948();
  return;
}



/* Entry: 107410308; end: 107410317;  */

void FUN_107410308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107410314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
  return;
}



/* Entry: 107410318; end: 1074103ef;  */

void FUN_107410318(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010741184c();
  FUN_10740f878();
  uVar2 = uStack_38;
  uVar1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = *(undefined8 *)(unaff_x19 + 0x1138);
  uStack_30 = *(undefined8 *)(unaff_x19 + 0x1130);
  *(undefined8 *)(unaff_x19 + 0x1138) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x1130) = uVar1;
  FUN_1074114d8(&uStack_30);
  FUN_1074114d8(&uStack_40);
  *(undefined2 *)(unaff_x19 + 0x1102) = 1;
  func_0x000107411810();
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 1074103f0; end: 1074103ff;  */

void FUN_1074103f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001074103fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
  return;
}



/* Entry: 107410400; end: 107410547;  */

void FUN_107410400(void)

{
  code *pcVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  __ZNSt13exception_ptrC1ERKS_(auStack_50);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107410434);
  (*pcVar1)();
}



/* Entry: 107410548; end: 107410553;  */

void FUN_107410548(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
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
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar12;
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
  double dVar11;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar5 = &uStack_1090;
  func_0x00010729d56c(puVar5,"reason",param_2);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(param_1 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar8,puVar5,&uStack_80,&puStack_60,7);
  puVar5 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(param_1 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar5 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar6 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar6 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar6 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar6 + 0x1b8);
  uStack_1090 = puVar5;
  puStack_60 = puVar5;
  if (*(long *)(param_1 + 0x1168) != **(long **)(lVar6 + 0x1c8)) {
    func_0x000107410e94(param_1 + 0x1168);
    FUN_1074e31dc(param_1 + 0x1168,&uStack_1090);
  }
  uVar10 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa4));
  dVar11 = (double)(ulong)uVar10;
  uVar12 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa8));
  *(uint *)(param_1 + 0x143c) = uVar10;
  *(undefined4 *)(param_1 + 0x1440) = uVar12;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar11,param_1 + 0x1168);
  FUN_1074e3804(&uStack_80,param_1 + 0x1168);
  FUN_107413c78(param_1 + 0x50,&uStack_80);
  FUN_1074137f8(param_1 + 0x50,&puStack_60);
  if (*(char *)(param_1 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(param_1,&uStack_1090);
  }
  lVar6 = *(long *)(param_1 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar6 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(param_1 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(param_1 + 0x10dc),*(undefined4 *)(param_1 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(param_1 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,param_1 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar6 + 8) + 0x90);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar6 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar6 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar6 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar6 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar6 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar6 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 0x108);
  puVar5 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 400);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  puVar7 = *(undefined8 **)(lVar6 + 0x1c0);
  lStack_140 = puVar7[1];
  uStack_148 = *puVar7;
  if (puVar7[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8;
    lVar6 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar6 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar6 + 0xa8);
  if (*(long *)(lVar6 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_00;
    lVar6 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar6 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar6 + 0xd0);
  if (*(long *)(lVar6 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_01;
    lVar6 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar6 + 0x100);
  uStack_118 = *(undefined8 *)(lVar6 + 0xf8);
  if (*(long *)(lVar6 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_02;
    lVar6 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar6 + 0x338);
  lStack_100 = *(long *)(lVar6 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_03;
    lVar6 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar6 + 0x348);
  lStack_f0 = *(long *)(lVar6 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_04;
    lVar6 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar6 + 0x358);
  lStack_e0 = *(long *)(lVar6 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_05;
    lVar6 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar6 + 0x368);
  lStack_d0 = *(long *)(lVar6 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0x10e8);
  lStack_c0 = *(long *)(param_1 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar5 + 0x1fb) = *(undefined1 *)(param_1 + 0x1101);
  *(bool *)((long)puVar5 + 0xfd9) = *(long *)(param_1 + 0x1108) != 0;
  *(undefined1 *)((long)puVar5 + 0xfda) = *(undefined1 *)(param_1 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x1118);
  uStack_90 = *(undefined8 *)(param_1 + 0x1110);
  if (*(long *)(param_1 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar9 = *(long **)(param_1 + 0x38);
  puVar5 = (undefined8 *)0x1028;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1109adf98;
  _memcpy(puVar5 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar5 + 0x1d1,auStack_220);
  puVar5[0x1d5] = uStack_200;
  puVar5[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar5[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar5[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar5 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar5 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar5 + 0x1da,auStack_1d8);
  puVar5[0x1eb] = uStack_150;
  puVar5[0x1ed] = lStack_140;
  puVar5[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar5[0x1ef] = lStack_130;
  puVar5[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar5[0x1f1] = lStack_120;
  puVar5[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar5[499] = lStack_110;
  puVar5[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar5[0x1f5] = lStack_100;
  puVar5[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar5[0x1f7] = lStack_f0;
  puVar5[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar5[0x1f9] = lStack_e0;
  puVar5[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar5[0x1fb] = lStack_d0;
  puVar5[0x1fa] = uStack_d8;
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
  puVar5[0x1fd] = lStack_c0;
  puVar5[0x1fc] = uStack_c8;
  puVar5[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar5[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar5[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar5[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar5 + 0x202) = uStack_98;
  puVar5[0x204] = uStack_88;
  puVar5[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar5 + 3;
  puStack_1098 = puVar5;
  (**(code **)(*plVar9 + 0x20))(plVar9,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 107410554; end: 1074105c3;  */

void FUN_107410554(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  if ((*(int *)(param_1 + 0x10d0) != 0) && (lVar1 = *(long *)(param_1 + 0x1108), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x1108) = 0;
    lStack_28 = lVar1;
    __ZNSt13exception_ptrC1ERKS_(auStack_30);
    func_0x00010740f1e8(lVar1,auStack_30);
    __ZNSt13exception_ptrD1Ev(auStack_30);
    FUN_10740f208(&lStack_28);
  }
  return;
}



/* Entry: 1074105c4; end: 1074105ef;  */

void FUN_1074105c4(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  if ((*(int *)(param_1 + 0x10c8) != 0) && (lVar1 = *(long *)(param_1 + 0x1100), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x1100) = 0;
    lStack_28 = lVar1;
    __ZNSt13exception_ptrC1ERKS_(auStack_30);
    func_0x00010740f1e8(lVar1,auStack_30);
    __ZNSt13exception_ptrD1Ev(auStack_30);
    FUN_10740f208(&lStack_28);
  }
  return;
}



/* Entry: 1074105f0; end: 1074107e7;  */

void FUN_1074105f0(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  undefined8 uStack_98;
  long alStack_90 [2];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  func_0x0001074118dc();
  iVar1 = *param_2;
  *(bool *)(param_1 + 0x1103) = iVar1 == 1;
  iVar3 = *(int *)(param_1 + 0x10d0);
  if (iVar3 == 0) {
    plVar4 = *(long **)(unaff_x19 + 0x10);
    alStack_90[0] = CONCAT44(alStack_90[0]._4_4_,iVar1);
    func_0x0001074117d4();
    func_0x000107410ee0(auStack_80,unaff_x20 + 0x28);
    FUN_1074116bc(auStack_68,unaff_x20 + 0x40);
    func_0x000107277f0c(auStack_58,unaff_x20 + 0x50);
    func_0x00010741186c(*(undefined8 *)(*plVar4 + 0x48));
    func_0x000107411884();
    if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
      if (((*(long *)(unaff_x19 + 0xed0) == 0) && ((*(byte *)(param_1 + 0x1000) & 1) == 0)) &&
         ((*(byte *)(param_1 + 0x10c8) & 1) == 0)) {
        if (*(char *)(param_1 + 0x1103) == '\x01') {
          func_0x000107411810();
          (**(code **)(extraout_x8 + 0x78))();
        }
        goto LAB_107410728;
      }
    }
    else {
      FUN_1074107e8(unaff_x20 + 8);
    }
    FUN_10740fa50();
  }
  else {
    if (iVar1 != 1) goto LAB_10741072c;
    plVar4 = *(long **)(unaff_x19 + 0x10);
    alStack_90[0] = CONCAT44(alStack_90[0]._4_4_,1);
    func_0x0001074117d4();
    func_0x000107410ee0(auStack_80,unaff_x20 + 0x28);
    FUN_1074116bc(auStack_68,unaff_x20 + 0x40);
    func_0x000107277f0c(auStack_58,unaff_x20 + 0x50);
    func_0x00010741186c(*(undefined8 *)(*plVar4 + 0x48));
    func_0x000107411884();
    lVar2 = *(long *)(unaff_x19 + 0x1108);
    if (lVar2 != 0) {
      *(undefined8 *)(unaff_x19 + 0x1108) = 0;
      uStack_98 = 0;
      alStack_90[0] = lVar2;
      func_0x00010740f1e8(lVar2,&uStack_98);
      __ZNSt13exception_ptrD1Ev(&uStack_98);
      FUN_10740f208(alStack_90);
    }
  }
LAB_107410728:
  iVar3 = *(int *)(unaff_x19 + 0x10d0);
LAB_10741072c:
  if ((iVar3 == 1) && ((*(byte *)(unaff_x20 + 0x10) & 1) != 0)) {
    FUN_1074107e8(unaff_x20 + 8);
    FUN_10740fa50();
  }
  return;
}



/* Entry: 1074107e8; end: 1074107ff;  */

void FUN_1074107e8(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  undefined8 uStack_a8;
  long alStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  param_1 = param_1 + -8;
  func_0x0001074118dc();
  iVar1 = *param_2;
  *(bool *)(param_1 + 0x1103) = iVar1 == 1;
  iVar3 = *(int *)(param_1 + 0x10d0);
  if (iVar3 == 0) {
    plVar4 = *(long **)(unaff_x19 + 0x10);
    alStack_a0[0] = CONCAT44(alStack_a0[0]._4_4_,iVar1);
    func_0x0001074117d4();
    func_0x000107410ee0(auStack_90,unaff_x20 + 0x28);
    FUN_1074116bc(auStack_78,unaff_x20 + 0x40);
    func_0x000107277f0c(auStack_68,unaff_x20 + 0x50);
    func_0x00010741186c(*(undefined8 *)(*plVar4 + 0x48));
    func_0x000107411884();
    if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
      if (((*(long *)(unaff_x19 + 0xed0) == 0) && ((*(byte *)(param_1 + 0x1000) & 1) == 0)) &&
         ((*(byte *)(param_1 + 0x10c8) & 1) == 0)) {
        if (*(char *)(param_1 + 0x1103) == '\x01') {
          func_0x000107411810();
          (**(code **)(extraout_x8 + 0x78))();
        }
        goto LAB_107410728;
      }
    }
    else {
      FUN_1074107e8(unaff_x20 + 8);
    }
    FUN_10740fa50();
  }
  else {
    if (iVar1 != 1) goto LAB_10741072c;
    plVar4 = *(long **)(unaff_x19 + 0x10);
    alStack_a0[0] = CONCAT44(alStack_a0[0]._4_4_,1);
    func_0x0001074117d4();
    func_0x000107410ee0(auStack_90,unaff_x20 + 0x28);
    FUN_1074116bc(auStack_78,unaff_x20 + 0x40);
    func_0x000107277f0c(auStack_68,unaff_x20 + 0x50);
    func_0x00010741186c(*(undefined8 *)(*plVar4 + 0x48));
    func_0x000107411884();
    lVar2 = *(long *)(unaff_x19 + 0x1108);
    if (lVar2 != 0) {
      *(undefined8 *)(unaff_x19 + 0x1108) = 0;
      uStack_a8 = 0;
      alStack_a0[0] = lVar2;
      func_0x00010740f1e8(lVar2,&uStack_a8);
      __ZNSt13exception_ptrD1Ev(&uStack_a8);
      FUN_10740f208(alStack_a0);
    }
  }
LAB_107410728:
  iVar3 = *(int *)(unaff_x19 + 0x10d0);
LAB_10741072c:
  if ((iVar3 == 1) && ((*(byte *)(unaff_x20 + 0x10) & 1) != 0)) {
    FUN_1074107e8(unaff_x20 + 8);
    FUN_10740fa50();
  }
  return;
}



/* Entry: 107410800; end: 10741082b;  */

void FUN_107410800(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  undefined8 uStack_98;
  long alStack_90 [2];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  param_1 = param_1 + -8;
  func_0x0001074118dc();
  iVar1 = *param_2;
  *(bool *)(param_1 + 0x1103) = iVar1 == 1;
  iVar3 = *(int *)(param_1 + 0x10d0);
  if (iVar3 == 0) {
    plVar4 = *(long **)(unaff_x19 + 0x10);
    alStack_90[0] = CONCAT44(alStack_90[0]._4_4_,iVar1);
    func_0x0001074117d4();
    func_0x000107410ee0(auStack_80,unaff_x20 + 0x28);
    FUN_1074116bc(auStack_68,unaff_x20 + 0x40);
    func_0x000107277f0c(auStack_58,unaff_x20 + 0x50);
    func_0x00010741186c(*(undefined8 *)(*plVar4 + 0x48));
    func_0x000107411884();
    if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
      if (((*(long *)(unaff_x19 + 0xed0) == 0) && ((*(byte *)(param_1 + 0x1000) & 1) == 0)) &&
         ((*(byte *)(param_1 + 0x10c8) & 1) == 0)) {
        if (*(char *)(param_1 + 0x1103) == '\x01') {
          func_0x000107411810();
          (**(code **)(extraout_x8 + 0x78))();
        }
        goto LAB_107410728;
      }
    }
    else {
      FUN_1074107e8(unaff_x20 + 8);
    }
    FUN_10740fa50();
  }
  else {
    if (iVar1 != 1) goto LAB_10741072c;
    plVar4 = *(long **)(unaff_x19 + 0x10);
    alStack_90[0] = CONCAT44(alStack_90[0]._4_4_,1);
    func_0x0001074117d4();
    func_0x000107410ee0(auStack_80,unaff_x20 + 0x28);
    FUN_1074116bc(auStack_68,unaff_x20 + 0x40);
    func_0x000107277f0c(auStack_58,unaff_x20 + 0x50);
    func_0x00010741186c(*(undefined8 *)(*plVar4 + 0x48));
    func_0x000107411884();
    lVar2 = *(long *)(unaff_x19 + 0x1108);
    if (lVar2 != 0) {
      *(undefined8 *)(unaff_x19 + 0x1108) = 0;
      uStack_98 = 0;
      alStack_90[0] = lVar2;
      func_0x00010740f1e8(lVar2,&uStack_98);
      __ZNSt13exception_ptrD1Ev(&uStack_98);
      FUN_10740f208(alStack_90);
    }
  }
LAB_107410728:
  iVar3 = *(int *)(unaff_x19 + 0x10d0);
LAB_10741072c:
  if ((iVar3 == 1) && ((*(byte *)(unaff_x20 + 0x10) & 1) != 0)) {
    FUN_1074107e8(unaff_x20 + 8);
    FUN_10740fa50();
  }
  return;
}



/* Entry: 10741082c; end: 10741093f;  */

void FUN_10741082c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  undefined4 auStack_b8 [2];
  undefined4 uStack_b0;
  undefined4 auStack_a8 [6];
  undefined4 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((*(int *)(param_1 + 0x10d0) == 0) && (*(char *)(param_1 + 0x1102) == '\x01')) {
    lVar1 = *(long *)(param_1 + 0x1120);
    func_0x00010002b838(auStack_a8,&UNK_10f4103cf);
    func_0x000107878ebc(lVar1,auStack_a8);
    lStack_38 = lVar1 / 1000;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    auStack_a8[0] = 8;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    ppuStack_88 = &PTR_DAT_110996720;
    uStack_80 = 0;
    uStack_68 = 8;
    uStack_60 = 0;
    uStack_5c = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    auStack_b8[0] = 0;
    uStack_b0 = 0;
    FUN_10743f9dc(*(undefined8 *)(param_1 + 0x48),auStack_a8,&lStack_38,auStack_b8,7);
    func_0x000107262330(auStack_a8);
    func_0x000107411810();
    (**(code **)(extraout_x8 + 0x58))();
    if (*(char *)(param_1 + 0x1102) == '\x01') {
      *(undefined1 *)(param_1 + 0x1102) = 0;
      func_0x000107411810();
      (**(code **)(extraout_x8_00 + 0x30))();
    }
  }
  return;
}



/* Entry: 107410940; end: 107410947;  */

void FUN_107410940(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  undefined4 auStack_b8 [2];
  undefined4 uStack_b0;
  undefined4 auStack_a8 [6];
  undefined4 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((*(int *)(param_1 + 0x10c8) == 0) && (*(char *)(param_1 + 0x10fa) == '\x01')) {
    lVar1 = *(long *)(param_1 + 0x1118);
    func_0x00010002b838(auStack_a8,&UNK_10f4103cf);
    func_0x000107878ebc(lVar1,auStack_a8);
    lStack_38 = lVar1 / 1000;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    auStack_a8[0] = 8;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    ppuStack_88 = &PTR_DAT_110996720;
    uStack_80 = 0;
    uStack_68 = 8;
    uStack_60 = 0;
    uStack_5c = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    auStack_b8[0] = 0;
    uStack_b0 = 0;
    FUN_10743f9dc(*(undefined8 *)(param_1 + 0x40),auStack_a8,&lStack_38,auStack_b8,7);
    func_0x000107262330(auStack_a8);
    func_0x000107411810();
    (**(code **)(extraout_x8 + 0x58))();
    if (*(char *)(param_1 + 0x10fa) == '\x01') {
      *(undefined1 *)(param_1 + 0x10fa) = 0;
      func_0x000107411810();
      (**(code **)(extraout_x8_00 + 0x30))();
    }
  }
  return;
}



/* Entry: 107410948; end: 107410983;  */

void FUN_107410948(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
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
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  undefined4 uVar13;
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
  double dVar12;
  
  *(undefined1 *)(param_1 + 0x1100) = 1;
  FUN_107411f4c(param_1 + 0x50);
  puVar6 = &UNK_10de68262;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1,&UNK_10de68262);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar5 = &uStack_1090;
  func_0x00010729d56c(puVar5,"reason",puVar6);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(param_1 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar9,puVar5,&uStack_80,&puStack_60,7);
  puVar5 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(param_1 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar5 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar7 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar7 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar7 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar7 + 0x1b8);
  uStack_1090 = puVar5;
  puStack_60 = puVar5;
  if (*(long *)(param_1 + 0x1168) != **(long **)(lVar7 + 0x1c8)) {
    func_0x000107410e94(param_1 + 0x1168);
    FUN_1074e31dc(param_1 + 0x1168,&uStack_1090);
  }
  uVar11 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa4));
  dVar12 = (double)(ulong)uVar11;
  uVar13 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xa8));
  *(uint *)(param_1 + 0x143c) = uVar11;
  *(undefined4 *)(param_1 + 0x1440) = uVar13;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar12,param_1 + 0x1168);
  FUN_1074e3804(&uStack_80,param_1 + 0x1168);
  FUN_107413c78(param_1 + 0x50,&uStack_80);
  FUN_1074137f8(param_1 + 0x50,&puStack_60);
  if (*(char *)(param_1 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(param_1,&uStack_1090);
  }
  lVar7 = *(long *)(param_1 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar7 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(param_1 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(param_1 + 0x10dc),*(undefined4 *)(param_1 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(param_1 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,param_1 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar7 + 8) + 0x90);
  lVar7 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar7 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar7 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar7 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar7 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar7 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 0x108);
  puVar5 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10f8) + 8) + 400);
  lVar7 = *(long *)(*(long *)(param_1 + 0x10f8) + 8);
  puVar8 = *(undefined8 **)(lVar7 + 0x1c0);
  lStack_140 = puVar8[1];
  uStack_148 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8;
    lVar7 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar7 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar7 + 0xa8);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_00;
    lVar7 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar7 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar7 + 0xd0);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_01;
    lVar7 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar7 + 0x100);
  uStack_118 = *(undefined8 *)(lVar7 + 0xf8);
  if (*(long *)(lVar7 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_02;
    lVar7 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x338);
  lStack_100 = *(long *)(lVar7 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_03;
    lVar7 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0x348);
  lStack_f0 = *(long *)(lVar7 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_04;
    lVar7 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0x358);
  lStack_e0 = *(long *)(lVar7 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_05;
    lVar7 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x368);
  lStack_d0 = *(long *)(lVar7 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0x10e8);
  lStack_c0 = *(long *)(param_1 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar5 + 0x1fb) = *(undefined1 *)(param_1 + 0x1101);
  *(bool *)((long)puVar5 + 0xfd9) = *(long *)(param_1 + 0x1108) != 0;
  *(undefined1 *)((long)puVar5 + 0xfda) = *(undefined1 *)(param_1 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x1118);
  uStack_90 = *(undefined8 *)(param_1 + 0x1110);
  if (*(long *)(param_1 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar10 = *(long **)(param_1 + 0x38);
  puVar5 = (undefined8 *)0x1028;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1109adf98;
  _memcpy(puVar5 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar5 + 0x1d1,auStack_220);
  puVar5[0x1d5] = uStack_200;
  puVar5[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar5[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar5[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar5 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar5 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar5 + 0x1da,auStack_1d8);
  puVar5[0x1eb] = uStack_150;
  puVar5[0x1ed] = lStack_140;
  puVar5[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar5[0x1ef] = lStack_130;
  puVar5[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar5[0x1f1] = lStack_120;
  puVar5[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar5[499] = lStack_110;
  puVar5[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar5[0x1f5] = lStack_100;
  puVar5[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar5[0x1f7] = lStack_f0;
  puVar5[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar5[0x1f9] = lStack_e0;
  puVar5[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar5[0x1fb] = lStack_d0;
  puVar5[0x1fa] = uStack_d8;
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
  puVar5[0x1fd] = lStack_c0;
  puVar5[0x1fc] = uStack_c8;
  puVar5[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar5[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar5[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar5[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar5 + 0x202) = uStack_98;
  puVar5[0x204] = uStack_88;
  puVar5[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar5 + 3;
  puStack_1098 = puVar5;
  (**(code **)(*plVar10 + 0x20))(plVar10,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 107410984; end: 1074109b3;  */

void FUN_107410984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001074118a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x88))();
  return;
}



/* Entry: 1074109b4; end: 107410a0f;  */

void FUN_1074109b4(long param_1)

{
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [72];
  
  plVar1 = *(long **)(param_1 + 0x10);
  func_0x0001072bb94c(auStack_78);
  (**(code **)(*plVar1 + 0xa0))(plVar1,auStack_78);
  func_0x00010725b590(auStack_68);
  return;
}



/* Entry: 107410a10; end: 107410a17;  */

void FUN_107410a10(long param_1)

{
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [72];
  
  plVar1 = *(long **)(param_1 + 8);
  func_0x0001072bb94c(auStack_78);
  (**(code **)(*plVar1 + 0xa0))(plVar1,auStack_78);
  func_0x00010725b590(auStack_68);
  return;
}



/* Entry: 107410a18; end: 107410b2b;  */

void FUN_107410a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  
  cVar5 = (char)((ulong)param_5 >> 0x20);
  cVar4 = (char)((ulong)param_4 >> 0x20);
  cVar3 = (char)((ulong)param_3 >> 0x20);
  bVar1 = *(byte *)(param_1 + 0x1148);
  uVar6 = (uint)((ulong)param_2 >> 0x20);
  if ((uint)bVar1 == (uVar6 & 0xff) && bVar1 != 0) {
    if (*(float *)(param_1 + 0x1144) != (float)param_2) goto LAB_107410ad0;
  }
  else if ((uint)bVar1 != (uVar6 & 0xff)) goto LAB_107410ad0;
  cVar2 = *(char *)(param_1 + 0x1150);
  if (cVar2 == cVar3 && cVar2 != '\0') {
    if (*(float *)(param_1 + 0x114c) != (float)param_3) goto LAB_107410ad0;
  }
  else if (cVar2 != cVar3) goto LAB_107410ad0;
  cVar2 = *(char *)(param_1 + 0x1158);
  if ((cVar2 == cVar4) && (cVar2 != '\0')) {
    if (*(float *)(param_1 + 0x1154) != (float)param_4) goto LAB_107410ad0;
  }
  else if (cVar2 != cVar4) goto LAB_107410ad0;
  cVar2 = *(char *)(param_1 + 0x1160);
  if ((cVar2 == cVar5) && (cVar2 != '\0')) {
    if (*(float *)(param_1 + 0x115c) == (float)param_5) {
      return;
    }
  }
  else if (cVar2 == cVar5) {
    return;
  }
LAB_107410ad0:
  *(float *)(param_1 + 0x1144) = (float)param_2;
  *(char *)(param_1 + 0x1148) = (char)((ulong)param_2 >> 0x20);
  *(float *)(param_1 + 0x114c) = (float)param_3;
  *(char *)(param_1 + 0x1150) = cVar3;
  *(float *)(param_1 + 0x1154) = (float)param_4;
  *(char *)(param_1 + 0x1158) = cVar4;
  *(float *)(param_1 + 0x115c) = (float)param_5;
  *(char *)(param_1 + 0x1160) = cVar5;
  func_0x0001074117a0();
  FUN_107410058();
  return;
}



/* Entry: 107410b2c; end: 107410b3b;  */

void FUN_107410b2c(void)

{
  return;
}



/* Entry: 107410b3c; end: 107410b97;  */

void FUN_107410b3c(long param_1)

{
  func_0x000107411760();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107410b98; end: 107410bb7;  */

void FUN_107410b98(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000107266af0();
  }
  return;
}



/* Entry: 107410bb8; end: 107410c53;  */

long FUN_107410bb8(long param_1)

{
  FUN_1073dd4c4(param_1 + 0xa8);
  FUN_1073dd4c4(param_1 + 0x70);
  FUN_1073dd4c4(param_1 + 0x38);
  FUN_1073dd4c4(param_1);
  return param_1;
}



/* Entry: 107410c54; end: 107410c73;  */

void FUN_107410c54(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107410c74();
  }
  return;
}



/* Entry: 107410c74; end: 107410c97;  */

undefined8 FUN_107410c74(undefined8 param_1)

{
  FUN_107410c98(param_1,0);
  return param_1;
}



/* Entry: 107410c98; end: 107410caf;  */

void FUN_107410c98(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107410c2c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107410cb0; end: 107410ccb;  */

void FUN_107410cb0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107410c2c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107410ccc; end: 107410f0b;  */

void FUN_107410ccc(long param_1)

{
  func_0x000107411760();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107410f0c; end: 107410f67;  */

void FUN_107410f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010741181c();
    FUN_107410f68();
    func_0x0001074118c8();
    FUN_107410fb4();
  }
  uStack_38 = 1;
  func_0x000107411378(&uStack_40);
  return;
}



/* Entry: 107410f68; end: 107410fb3;  */

void FUN_107410f68(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    plVar1 = param_1 + 2;
    FUN_107410ff4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xb);
  }
  else {
    FUN_107410fe8();
    plVar1 = param_1 + 2;
    func_0x000107411048();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 107410fb4; end: 107410fe7;  */

void FUN_107410fb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000107411048();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 107410fe8; end: 107410ff3;  */

void FUN_107410fe8(void)

{
  func_0x000107411858();
  FUN_107411018();
  return;
}



/* Entry: 107410ff4; end: 107411017;  */

void FUN_107410ff4(void)

{
  FUN_107411018();
  return;
}



/* Entry: 107411018; end: 10741105b;  */

void FUN_107411018(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  FUN_10741105c();
  return;
}



/* Entry: 10741105c; end: 1074110ef;  */

long FUN_10741105c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_1074110f0(param_4,param_2);
    param_4 = lStack_38 + 0x58;
  }
  uStack_48 = 1;
  FUN_1074112a0(&uStack_60);
  return param_4;
}



/* Entry: 1074110f0; end: 107411133;  */

void FUN_1074110f0(long param_1)

{
  long unaff_x20;
  
  func_0x0001074118dc();
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_107411134(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 107411134; end: 10741115b;  */

void FUN_107411134(void)

{
  func_0x000107411834();
  FUN_10741115c();
  return;
}



/* Entry: 10741115c; end: 1074111b7;  */

void FUN_10741115c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010741181c();
    FUN_1074111b8();
    func_0x0001074118c8();
    FUN_1074111f0();
  }
  uStack_38 = 1;
  FUN_10741125c(&uStack_40);
  return;
}



/* Entry: 1074111b8; end: 1074111ef;  */

void FUN_1074111b8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    FUN_10741121c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 2);
    return;
  }
  FUN_107411210();
  puVar2 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar3 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar3;
    puVar2 = puVar2 + 2;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 1074111f0; end: 10741120f;  */

void FUN_1074111f0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 107411210; end: 10741121b;  */

void FUN_107411210(void)

{
  func_0x000107411858();
  FUN_107411240();
  return;
}



/* Entry: 10741121c; end: 10741123f;  */

void FUN_10741121c(void)

{
  FUN_107411240();
  return;
}



/* Entry: 107411240; end: 10741125b;  */

long FUN_107411240(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_107411288(param_1);
  }
  return param_1;
}



/* Entry: 10741125c; end: 107411287;  */

long FUN_10741125c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_107411288(param_1);
  }
  return param_1;
}



/* Entry: 107411288; end: 10741129f;  */

void FUN_107411288(undefined8 *param_1)

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



/* Entry: 1074112a0; end: 1074112cf;  */

long FUN_1074112a0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1074112d0(param_1);
  }
  return param_1;
}



/* Entry: 1074112d0; end: 1074112ef;  */

void FUN_1074112d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    func_0x000107411320();
  }
  return;
}



/* Entry: 1074112f0; end: 1074113df;  */

void FUN_1074112f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x000107411320();
  }
  return;
}



/* Entry: 1074113e0; end: 1074113e7;  */

void FUN_1074113e0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    func_0x000107411320();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1074113e8; end: 1074114a3;  */

void FUN_1074113e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x58;
    func_0x000107411320();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1074114a4; end: 1074114a7;  */

void FUN_1074114a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109adeb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074114a8; end: 1074114bb;  */

void FUN_1074114a8(void)

{
  func_0x0001074114c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074114bc; end: 1074114d7;  */

void FUN_1074114bc(long param_1)

{
  long lVar1;
  
  lVar1 = (long)*(char *)(param_1 + 0x2f);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (lVar1 != 0) {
    func_0x000107878ebc(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 1074114d8; end: 10741151f;  */

void FUN_1074114d8(long param_1)

{
  func_0x000107411760();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107411520; end: 107411527;  */

void FUN_107411520(void)

{
  return;
}



/* Entry: 107411528; end: 107411557;  */

void FUN_107411528(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109adf08;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107411558; end: 107411583;  */

void FUN_107411558(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109adf08;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107411584; end: 1074115eb;  */

void FUN_107411584(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
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
  undefined8 *puVar8;
  long lVar9;
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
  
  lVar9 = *(long *)(param_1 + 8);
  FUN_10740f8c8(lVar9);
  puVar6 = &UNK_10de68182;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9,&UNK_10de68182);
  uVar10 = *(undefined8 *)(lVar9 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_DAT_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar5 = &uStack_1090;
  func_0x00010729d56c(puVar5,"reason",puVar6);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar9 + 0x48);
  uStack_58 = 3;
  FUN_10743fa9c(uVar10,puVar5,&uStack_80,&puStack_60,7);
  puVar5 = &uStack_1090;
  func_0x000107262330();
  if (*(int *)(lVar9 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar5 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar7 = *(long *)(*(long *)(lVar9 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar7 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar7 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar7 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar7 + 0x1b8);
  uStack_1090 = puVar5;
  puStack_60 = puVar5;
  if (*(long *)(lVar9 + 0x1168) != **(long **)(lVar7 + 0x1c8)) {
    func_0x000107410e94(lVar9 + 0x1168);
    FUN_1074e31dc(lVar9 + 0x1168,&uStack_1090);
  }
  uVar12 = NEON_ucvtf(*(undefined4 *)(lVar9 + 0xa4));
  dVar13 = (double)(ulong)uVar12;
  uVar14 = NEON_ucvtf(*(undefined4 *)(lVar9 + 0xa8));
  *(uint *)(lVar9 + 0x143c) = uVar12;
  *(undefined4 *)(lVar9 + 0x1440) = uVar14;
  func_0x000107411798();
  FUN_1074e33b8((float)dVar13,lVar9 + 0x1168);
  FUN_1074e3804(&uStack_80,lVar9 + 0x1168);
  FUN_107413c78(lVar9 + 0x50,&uStack_80);
  FUN_1074137f8(lVar9 + 0x50,&puStack_60);
  if (*(char *)(lVar9 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    FUN_107410058(lVar9,&uStack_1090);
  }
  lVar7 = *(long *)(lVar9 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar7 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar9 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar9 + 0x10dc),*(undefined4 *)(lVar9 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar9 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar9 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar7 + 8) + 0x90);
  lVar7 = *(long *)(*(long *)(lVar9 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar7 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar7 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar7 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar7 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar7 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar7 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x1a8) >> 8);
  FUN_107411660(auStack_1d8,*(long *)(*(long *)(lVar9 + 0x10f8) + 8) + 0x108);
  puVar5 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x10f8) + 8) + 400);
  lVar7 = *(long *)(*(long *)(lVar9 + 0x10f8) + 8);
  puVar8 = *(undefined8 **)(lVar7 + 0x1c0);
  lStack_140 = puVar8[1];
  uStack_148 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8;
    lVar7 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar7 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar7 + 0xa8);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_00;
    lVar7 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar7 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar7 + 0xd0);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_01;
    lVar7 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar7 + 0x100);
  uStack_118 = *(undefined8 *)(lVar7 + 0xf8);
  if (*(long *)(lVar7 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_02;
    lVar7 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x338);
  lStack_100 = *(long *)(lVar7 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_03;
    lVar7 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0x348);
  lStack_f0 = *(long *)(lVar7 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_04;
    lVar7 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0x358);
  lStack_e0 = *(long *)(lVar7 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar5 = extraout_x8_05;
    lVar7 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x368);
  lStack_d0 = *(long *)(lVar7 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar9 + 0x10e8);
  lStack_c0 = *(long *)(lVar9 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar5 = extraout_x8_07;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar5 + 0x1fb) = *(undefined1 *)(lVar9 + 0x1101);
  *(bool *)((long)puVar5 + 0xfd9) = *(long *)(lVar9 + 0x1108) != 0;
  *(undefined1 *)((long)puVar5 + 0xfda) = *(undefined1 *)(lVar9 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(lVar9 + 0x1118);
  uStack_90 = *(undefined8 *)(lVar9 + 0x1110);
  if (*(long *)(lVar9 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar11 = *(long **)(lVar9 + 0x38);
  puVar5 = (undefined8 *)0x1028;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1109adf98;
  _memcpy(puVar5 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar5 + 0x1d1,auStack_220);
  puVar5[0x1d5] = uStack_200;
  puVar5[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar5[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar5[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar5 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar5 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  FUN_107411660(puVar5 + 0x1da,auStack_1d8);
  puVar5[0x1eb] = uStack_150;
  puVar5[0x1ed] = lStack_140;
  puVar5[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar5[0x1ef] = lStack_130;
  puVar5[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar5[0x1f1] = lStack_120;
  puVar5[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar5[499] = lStack_110;
  puVar5[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar5[0x1f5] = lStack_100;
  puVar5[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar5[0x1f7] = lStack_f0;
  puVar5[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar5[0x1f9] = lStack_e0;
  puVar5[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar5[0x1fb] = lStack_d0;
  puVar5[0x1fa] = uStack_d8;
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
  puVar5[0x1fd] = lStack_c0;
  puVar5[0x1fc] = uStack_c8;
  puVar5[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar5[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar5[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar5[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar5 + 0x202) = uStack_98;
  puVar5[0x204] = uStack_88;
  puVar5[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar5 + 3;
  puStack_1098 = puVar5;
  (**(code **)(*plVar11 + 0x20))(plVar11,&puStack_10a0);
  func_0x00010725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 1074115ec; end: 1074115f7;  */

undefined ** FUN_1074115ec(void)

{
  return &PTR_DAT_1109adf78;
}



/* Entry: 1074115f8; end: 10741163b;  */

long * FUN_1074115f8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}


