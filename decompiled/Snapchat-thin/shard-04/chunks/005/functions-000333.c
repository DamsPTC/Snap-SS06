/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103579ac8; end: 103579acb;  */

void FUN_103579ac8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd460;
  func_0x000107c61520(&UNK_10dbdd460,&UNK_1106664c0);
  puRam0000000112f79670 = puVar1;
  return;
}



/* Entry: 103579acc; end: 103579b0b;  */

void FUN_103579acc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd460;
  func_0x000107c61520(&UNK_10dbdd460,&UNK_1106664c0);
  puRam0000000112f79670 = puVar1;
  return;
}



/* Entry: 103579b0c; end: 103579baf;  */

long FUN_103579b0c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103579bb0; end: 103579ffb;  */

undefined8 * FUN_103579bb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  uVar2 = param_2[4];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = param_2[3];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[3] = uVar3;
    param_1[4] = uVar2;
  }
  else {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  uVar2 = param_2[10];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    param_1[8] = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[9] = uVar3;
    param_1[10] = uVar2;
  }
  else {
    uVar3 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[10] = param_2[10];
  }
  return param_1;
}



/* Entry: 103579ffc; end: 10357a0c3;  */

int FUN_103579ffc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10357a0c4; end: 10357a103;  */

void FUN_10357a0c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdd3cc;
  func_0x000107c61520(&DAT_10dbdd3cc,&UNK_1106664c0);
  puRam0000000112f79680 = puVar1;
  return;
}



/* Entry: 10357a104; end: 10357a117;  */

undefined * FUN_10357a104(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 10357a118; end: 10357a15f;  */

void FUN_10357a118(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdd890,0x16,2);
  uRam0000000113808a38 = uStack_38;
  uRam0000000113808a30 = uStack_40;
  uRam0000000113808a48 = uStack_28;
  uRam0000000113808a40 = uStack_30;
  uRam0000000113808a58 = uStack_18;
  uRam0000000113808a50 = uStack_20;
  return;
}



/* Entry: 10357a160; end: 10357a213;  */

/* WARNING: Removing unreachable block (ram,0x00010357a210) */

void FUN_10357a160(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_10357b3d8();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10357a214; end: 10357a2af;  */

void FUN_10357a214(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    FUN_10357b3d8();
    (*pcVar2)(param_2,1,&UNK_110666780,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10357a2b0; end: 10357a2f3;  */

uint FUN_10357a2b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_358 [248];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 uStack_70;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_4 + 0x10)) {
    if (lVar3 != 0 && param_1 != param_4) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_198 = puVar4[0x19];
        uStack_1a0 = puVar4[0x18];
        uStack_188 = puVar4[0x1b];
        uStack_190 = puVar4[0x1a];
        uStack_178 = puVar4[0x1d];
        uStack_180 = puVar4[0x1c];
        uStack_170 = puVar4[0x1e];
        uStack_1d8 = puVar4[0x11];
        uStack_1e0 = puVar4[0x10];
        uStack_1c8 = puVar4[0x13];
        uStack_1d0 = puVar4[0x12];
        uStack_1b8 = puVar4[0x15];
        uStack_1c0 = puVar4[0x14];
        uStack_1a8 = puVar4[0x17];
        uStack_1b0 = puVar4[0x16];
        uStack_218 = puVar4[9];
        uStack_220 = puVar4[8];
        uStack_208 = puVar4[0xb];
        uStack_210 = puVar4[10];
        uStack_1f8 = puVar4[0xd];
        uStack_200 = puVar4[0xc];
        uStack_1e8 = puVar4[0xf];
        uStack_1f0 = puVar4[0xe];
        uStack_258 = puVar4[1];
        uStack_260 = *puVar4;
        uStack_248 = puVar4[3];
        uStack_250 = puVar4[2];
        uStack_238 = puVar4[5];
        uStack_240 = puVar4[4];
        uStack_228 = puVar4[7];
        uStack_230 = puVar4[6];
        uStack_98 = puVar5[0x19];
        uStack_a0 = puVar5[0x18];
        uStack_88 = puVar5[0x1b];
        uStack_90 = puVar5[0x1a];
        uStack_78 = puVar5[0x1d];
        uStack_80 = puVar5[0x1c];
        uStack_70 = puVar5[0x1e];
        uStack_d8 = puVar5[0x11];
        uStack_e0 = puVar5[0x10];
        uStack_c8 = puVar5[0x13];
        uStack_d0 = puVar5[0x12];
        uStack_b8 = puVar5[0x15];
        uStack_c0 = puVar5[0x14];
        uStack_a8 = puVar5[0x17];
        uStack_b0 = puVar5[0x16];
        uStack_118 = puVar5[9];
        uStack_120 = puVar5[8];
        uStack_108 = puVar5[0xb];
        uStack_110 = puVar5[10];
        uStack_f8 = puVar5[0xd];
        uStack_100 = puVar5[0xc];
        uStack_e8 = puVar5[0xf];
        uStack_f0 = puVar5[0xe];
        uStack_158 = puVar5[1];
        uStack_160 = *puVar5;
        uStack_148 = puVar5[3];
        uStack_150 = puVar5[2];
        uStack_138 = puVar5[5];
        uStack_140 = puVar5[4];
        uStack_128 = puVar5[7];
        uStack_130 = puVar5[6];
        func_0x0001034d58bc(&uStack_260,auStack_358);
        func_0x0001034d58bc(&uStack_160,auStack_358);
        puVar2 = &uStack_260;
        FUN_10357b418(puVar2,&uStack_160);
        func_0x0001034d58f8(&uStack_160);
        func_0x0001034d58f8(&uStack_260);
        if (((ulong)puVar2 & 1) == 0) goto LAB_10357c320;
        puVar5 = puVar5 + 0x1f;
        puVar4 = puVar4 + 0x1f;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
  }
  else {
LAB_10357c320:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10357a2f4; end: 10357a323;  */

undefined1  [16] FUN_10357a2f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10357a324; end: 10357a357;  */

void FUN_10357a324(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10357a358; end: 10357a36b;  */

undefined1  [16] FUN_10357a358(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10357a368;
  return auVar1;
}



/* Entry: 10357a36c; end: 10357a3a3;  */

void FUN_10357a36c(void)

{
  FUN_10357a160();
  return;
}



/* Entry: 10357a3a4; end: 10357a3a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10357a3a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10357a3a8; end: 10357a3df;  */

uint FUN_10357a3a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010357d4c4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10357a3e0; end: 10357a3f3;  */

uint FUN_10357a3e0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_358 [248];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 uStack_70;
  long lVar6;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  lVar2 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  lVar9 = *(long *)(lVar2 + 0x10);
  if (lVar9 == *(long *)(lVar1 + 0x10)) {
    if (lVar9 != 0 && lVar2 != lVar1) {
      puVar10 = (undefined8 *)(lVar2 + 0x20);
      puVar11 = (undefined8 *)(lVar1 + 0x20);
      do {
        uStack_198 = puVar10[0x19];
        uStack_1a0 = puVar10[0x18];
        uStack_188 = puVar10[0x1b];
        uStack_190 = puVar10[0x1a];
        uStack_178 = puVar10[0x1d];
        uStack_180 = puVar10[0x1c];
        uStack_170 = puVar10[0x1e];
        uStack_1d8 = puVar10[0x11];
        uStack_1e0 = puVar10[0x10];
        uStack_1c8 = puVar10[0x13];
        uStack_1d0 = puVar10[0x12];
        uStack_1b8 = puVar10[0x15];
        uStack_1c0 = puVar10[0x14];
        uStack_1a8 = puVar10[0x17];
        uStack_1b0 = puVar10[0x16];
        uStack_218 = puVar10[9];
        uStack_220 = puVar10[8];
        uStack_208 = puVar10[0xb];
        uStack_210 = puVar10[10];
        uStack_1f8 = puVar10[0xd];
        uStack_200 = puVar10[0xc];
        uStack_1e8 = puVar10[0xf];
        uStack_1f0 = puVar10[0xe];
        uStack_258 = puVar10[1];
        uStack_260 = *puVar10;
        uStack_248 = puVar10[3];
        uStack_250 = puVar10[2];
        uStack_238 = puVar10[5];
        uStack_240 = puVar10[4];
        uStack_228 = puVar10[7];
        uStack_230 = puVar10[6];
        uStack_98 = puVar11[0x19];
        uStack_a0 = puVar11[0x18];
        uStack_88 = puVar11[0x1b];
        uStack_90 = puVar11[0x1a];
        uStack_78 = puVar11[0x1d];
        uStack_80 = puVar11[0x1c];
        uStack_70 = puVar11[0x1e];
        uStack_d8 = puVar11[0x11];
        uStack_e0 = puVar11[0x10];
        uStack_c8 = puVar11[0x13];
        uStack_d0 = puVar11[0x12];
        uStack_b8 = puVar11[0x15];
        uStack_c0 = puVar11[0x14];
        uStack_a8 = puVar11[0x17];
        uStack_b0 = puVar11[0x16];
        uStack_118 = puVar11[9];
        uStack_120 = puVar11[8];
        uStack_108 = puVar11[0xb];
        uStack_110 = puVar11[10];
        uStack_f8 = puVar11[0xd];
        uStack_100 = puVar11[0xc];
        uStack_e8 = puVar11[0xf];
        uStack_f0 = puVar11[0xe];
        uStack_158 = puVar11[1];
        uStack_160 = *puVar11;
        uStack_148 = puVar11[3];
        uStack_150 = puVar11[2];
        uStack_138 = puVar11[5];
        uStack_140 = puVar11[4];
        uStack_128 = puVar11[7];
        uStack_130 = puVar11[6];
        func_0x0001034d58bc(&uStack_260,auStack_358);
        func_0x0001034d58bc(&uStack_160,auStack_358);
        puVar5 = &uStack_260;
        FUN_10357b418(puVar5,&uStack_160);
        func_0x0001034d58f8(&uStack_160);
        func_0x0001034d58f8(&uStack_260);
        if (((ulong)puVar5 & 1) == 0) goto LAB_10357c320;
        puVar11 = puVar11 + 0x1f;
        puVar10 = puVar10 + 0x1f;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_10357c320:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 10357a3f4; end: 10357a493;  */

/* WARNING: Possible PIC construction at 0x00010357a440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010357a450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010357a444) */
/* WARNING: Removing unreachable block (ram,0x00010357a454) */

void FUN_10357a3f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f79688 != -1) {
    func_0x000107c61568(0x112f79688,FUN_10357a118);
  }
  uVar5 = uRam0000000113808a58;
  uVar4 = uRam0000000113808a50;
  uVar3 = uRam0000000113808a48;
  uVar2 = uRam0000000113808a40;
  uVar1 = uRam0000000113808a38;
  *param_1 = uRam0000000113808a30;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10357a494; end: 10357a4cf;  */

void FUN_10357a494(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f796e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f796e0,&UNK_10dbdd7d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10357a4d0; end: 10357a5d3;  */

void FUN_10357a4d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10357a5d4; end: 10357a5ef;  */

uint FUN_10357a5d4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_358 [248];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 uStack_70;
  long lVar6;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = *(long *)(lVar1 + 0x10);
  if (lVar9 == *(long *)(lVar2 + 0x10)) {
    if (lVar9 != 0 && lVar1 != lVar2) {
      puVar10 = (undefined8 *)(lVar1 + 0x20);
      puVar11 = (undefined8 *)(lVar2 + 0x20);
      do {
        uStack_198 = puVar10[0x19];
        uStack_1a0 = puVar10[0x18];
        uStack_188 = puVar10[0x1b];
        uStack_190 = puVar10[0x1a];
        uStack_178 = puVar10[0x1d];
        uStack_180 = puVar10[0x1c];
        uStack_170 = puVar10[0x1e];
        uStack_1d8 = puVar10[0x11];
        uStack_1e0 = puVar10[0x10];
        uStack_1c8 = puVar10[0x13];
        uStack_1d0 = puVar10[0x12];
        uStack_1b8 = puVar10[0x15];
        uStack_1c0 = puVar10[0x14];
        uStack_1a8 = puVar10[0x17];
        uStack_1b0 = puVar10[0x16];
        uStack_218 = puVar10[9];
        uStack_220 = puVar10[8];
        uStack_208 = puVar10[0xb];
        uStack_210 = puVar10[10];
        uStack_1f8 = puVar10[0xd];
        uStack_200 = puVar10[0xc];
        uStack_1e8 = puVar10[0xf];
        uStack_1f0 = puVar10[0xe];
        uStack_258 = puVar10[1];
        uStack_260 = *puVar10;
        uStack_248 = puVar10[3];
        uStack_250 = puVar10[2];
        uStack_238 = puVar10[5];
        uStack_240 = puVar10[4];
        uStack_228 = puVar10[7];
        uStack_230 = puVar10[6];
        uStack_98 = puVar11[0x19];
        uStack_a0 = puVar11[0x18];
        uStack_88 = puVar11[0x1b];
        uStack_90 = puVar11[0x1a];
        uStack_78 = puVar11[0x1d];
        uStack_80 = puVar11[0x1c];
        uStack_70 = puVar11[0x1e];
        uStack_d8 = puVar11[0x11];
        uStack_e0 = puVar11[0x10];
        uStack_c8 = puVar11[0x13];
        uStack_d0 = puVar11[0x12];
        uStack_b8 = puVar11[0x15];
        uStack_c0 = puVar11[0x14];
        uStack_a8 = puVar11[0x17];
        uStack_b0 = puVar11[0x16];
        uStack_118 = puVar11[9];
        uStack_120 = puVar11[8];
        uStack_108 = puVar11[0xb];
        uStack_110 = puVar11[10];
        uStack_f8 = puVar11[0xd];
        uStack_100 = puVar11[0xc];
        uStack_e8 = puVar11[0xf];
        uStack_f0 = puVar11[0xe];
        uStack_158 = puVar11[1];
        uStack_160 = *puVar11;
        uStack_148 = puVar11[3];
        uStack_150 = puVar11[2];
        uStack_138 = puVar11[5];
        uStack_140 = puVar11[4];
        uStack_128 = puVar11[7];
        uStack_130 = puVar11[6];
        func_0x0001034d58bc(&uStack_260,auStack_358);
        func_0x0001034d58bc(&uStack_160,auStack_358);
        puVar5 = &uStack_260;
        FUN_10357b418(puVar5,&uStack_160);
        func_0x0001034d58f8(&uStack_160);
        func_0x0001034d58f8(&uStack_260);
        if (((ulong)puVar5 & 1) == 0) goto LAB_10357c320;
        puVar11 = puVar11 + 0x1f;
        puVar10 = puVar10 + 0x1f;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_10357c320:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 10357a5f0; end: 10357a637;  */

void FUN_10357a5f0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdd7e0,0xa5,2);
  uRam0000000113808a68 = uStack_38;
  uRam0000000113808a60 = uStack_40;
  uRam0000000113808a78 = uStack_28;
  uRam0000000113808a70 = uStack_30;
  uRam0000000113808a88 = uStack_18;
  uRam0000000113808a80 = uStack_20;
  return;
}



/* Entry: 10357a638; end: 10357a7ff;  */

/* WARNING: Removing unreachable block (ram,0x00010357a724) */

void FUN_10357a638(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790c00;
      switch(uVar1) {
      case 1:
        (**(code **)(param_3 + 0x60))();
        goto LAB_10357a6d4;
      case 2:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x18;
        puVar3 = &UNK_110790c80;
        break;
      case 3:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x38;
        goto code_r0x00010357a78c;
      case 4:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x50;
code_r0x00010357a78c:
        puVar3 = &UNK_110790b00;
        break;
      case 5:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x68;
        goto code_r0x00010357a754;
      case 6:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x80;
        break;
      case 7:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x98;
        break;
      case 8:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0xb0;
        break;
      case 9:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 200;
        break;
      case 10:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0xe0;
code_r0x00010357a754:
        puVar3 = &UNK_110790a00;
        break;
      default:
        goto LAB_10357a6d4;
      }
      (*pcVar5)(lVar2,puVar3,uVar1,param_2,param_3);
LAB_10357a6d4:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10357a800; end: 10357a93b;  */

void FUN_10357a800(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_10357a93c(), unaff_x21 == 0)) {
    FUN_10357a9c0();
    FUN_10357aa48();
    FUN_10357aad0();
    FUN_10357ab58();
    FUN_10357abe0();
    FUN_10357ac68();
    FUN_10357acf0();
    FUN_10357ad78();
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 10357a93c; end: 10357a9bf;  */

void FUN_10357a93c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x20);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357a9c0; end: 10357aa47;  */

void FUN_10357a9c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,3,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357aa48; end: 10357aacf;  */

void FUN_10357aa48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,4,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357aad0; end: 10357ab57;  */

void FUN_10357aad0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x78);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357ab58; end: 10357abdf;  */

void FUN_10357ab58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x80);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357abe0; end: 10357ac67;  */

void FUN_10357abe0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x98);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,7,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357ac68; end: 10357acef;  */

void FUN_10357ac68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xb0);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xc0);
    uStack_50 = *(undefined8 *)(param_1 + 0xb8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,8,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357acf0; end: 10357ad77;  */

void FUN_10357acf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 200);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xd0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,9,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357ad78; end: 10357adff;  */

void FUN_10357ad78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xf0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xe8);
    uStack_60 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,10,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357ae00; end: 10357ae7f;  */

void FUN_10357ae00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0xf000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 2;
  param_1[0xf] = 0xf000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 2;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0xf000000000000000;
  return;
}



/* Entry: 10357ae80; end: 10357aeaf;  */

undefined1  [16] FUN_10357ae80(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10357aeb0; end: 10357aee3;  */

void FUN_10357aeb0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10357aee4; end: 10357aef7;  */

undefined1  [16] FUN_10357aee4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10357aef4;
  return auVar1;
}



/* Entry: 10357aef8; end: 10357af0b;  */

void FUN_10357aef8(void)

{
  FUN_10357a638();
  return;
}



/* Entry: 10357af0c; end: 10357af7b;  */

void FUN_10357af0c(void)

{
  FUN_10357a800();
  return;
}



/* Entry: 10357af7c; end: 10357af7f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10357af7c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10357af80; end: 10357afb7;  */

uint FUN_10357af80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10357d484();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10357afb8; end: 10357b077;  */

uint FUN_10357afb8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[0x19];
  uStack_60 = param_1[0x18];
  uStack_48 = param_1[0x1b];
  uStack_50 = param_1[0x1a];
  uStack_38 = param_1[0x1d];
  uStack_40 = param_1[0x1c];
  uStack_30 = param_1[0x1e];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_158 = unaff_x20[0x19];
  uStack_160 = unaff_x20[0x18];
  uStack_148 = unaff_x20[0x1b];
  uStack_150 = unaff_x20[0x1a];
  uStack_138 = unaff_x20[0x1d];
  uStack_140 = unaff_x20[0x1c];
  uStack_130 = unaff_x20[0x1e];
  uStack_198 = unaff_x20[0x11];
  uStack_1a0 = unaff_x20[0x10];
  uStack_188 = unaff_x20[0x13];
  uStack_190 = unaff_x20[0x12];
  uStack_178 = unaff_x20[0x15];
  uStack_180 = unaff_x20[0x14];
  uStack_168 = unaff_x20[0x17];
  uStack_170 = unaff_x20[0x16];
  uStack_1d8 = unaff_x20[9];
  uStack_1e0 = unaff_x20[8];
  uStack_1c8 = unaff_x20[0xb];
  uStack_1d0 = unaff_x20[10];
  uStack_1b8 = unaff_x20[0xd];
  uStack_1c0 = unaff_x20[0xc];
  uStack_1a8 = unaff_x20[0xf];
  uStack_1b0 = unaff_x20[0xe];
  uStack_218 = unaff_x20[1];
  uStack_220 = *unaff_x20;
  uStack_208 = unaff_x20[3];
  uStack_210 = unaff_x20[2];
  uStack_1f8 = unaff_x20[5];
  uStack_200 = unaff_x20[4];
  uStack_1e8 = unaff_x20[7];
  uStack_1f0 = unaff_x20[6];
  FUN_10357b418(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10357b078; end: 10357b117;  */

/* WARNING: Possible PIC construction at 0x00010357b0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010357b0d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010357b0c8) */
/* WARNING: Removing unreachable block (ram,0x00010357b0d8) */

void FUN_10357b078(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f796a0 != -1) {
    func_0x000107c61568(0x112f796a0,FUN_10357a5f0);
  }
  uVar5 = uRam0000000113808a88;
  uVar4 = uRam0000000113808a80;
  uVar3 = uRam0000000113808a78;
  uVar2 = uRam0000000113808a70;
  uVar1 = uRam0000000113808a68;
  *param_1 = uRam0000000113808a60;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10357b118; end: 10357b153;  */

void FUN_10357b118(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f796d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f796d0,&UNK_10dbdd7c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10357b154; end: 10357b2cf;  */

void FUN_10357b154(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_178 [72];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[0x19];
  uStack_70 = unaff_x20[0x18];
  uStack_58 = unaff_x20[0x1b];
  uStack_60 = unaff_x20[0x1a];
  uStack_48 = unaff_x20[0x1d];
  uStack_50 = unaff_x20[0x1c];
  uStack_40 = unaff_x20[0x1e];
  uStack_a8 = unaff_x20[0x11];
  uStack_b0 = unaff_x20[0x10];
  uStack_98 = unaff_x20[0x13];
  uStack_a0 = unaff_x20[0x12];
  uStack_88 = unaff_x20[0x15];
  uStack_90 = unaff_x20[0x14];
  uStack_78 = unaff_x20[0x17];
  uStack_80 = unaff_x20[0x16];
  uStack_e8 = unaff_x20[9];
  uStack_f0 = unaff_x20[8];
  uStack_d8 = unaff_x20[0xb];
  uStack_e0 = unaff_x20[10];
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_b8 = unaff_x20[0xf];
  uStack_c0 = unaff_x20[0xe];
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  uStack_118 = unaff_x20[3];
  uStack_120 = unaff_x20[2];
  uStack_108 = unaff_x20[5];
  uStack_110 = unaff_x20[4];
  uStack_f8 = unaff_x20[7];
  uStack_100 = unaff_x20[6];
  func_0x000107c6068c(auStack_178,0);
  func_0x000107c5fa50(auStack_178,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10357b2d0; end: 10357b38f;  */

uint FUN_10357b2d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_130 = param_1[0x1e];
  uStack_198 = param_1[0x11];
  uStack_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_218 = param_1[1];
  uStack_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_58 = param_2[0x19];
  uStack_60 = param_2[0x18];
  uStack_48 = param_2[0x1b];
  uStack_50 = param_2[0x1a];
  uStack_38 = param_2[0x1d];
  uStack_40 = param_2[0x1c];
  uStack_30 = param_2[0x1e];
  uStack_98 = param_2[0x11];
  uStack_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uStack_78 = param_2[0x15];
  uStack_80 = param_2[0x14];
  uStack_68 = param_2[0x17];
  uStack_70 = param_2[0x16];
  uStack_d8 = param_2[9];
  uStack_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  uStack_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  FUN_10357b418(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10357b390; end: 10357b3d7;  */

undefined8 FUN_10357b390(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10357b3d8; end: 10357b417;  */

void FUN_10357b3d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdd638;
  func_0x000107c61520(&DAT_10dbdd638,&UNK_110666780);
  puRam0000000112f79690 = puVar1;
  return;
}



/* Entry: 10357b418; end: 10357c347;  */

uint FUN_10357b418(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong auStack_2c8 [3];
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  long lStack_240;
  ulong uStack_230;
  ulong uStack_228;
  long lStack_220;
  ulong uStack_210;
  ulong uStack_208;
  long lStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar6 = param_1[4];
  uVar5 = param_1[3];
  lVar10 = param_1[6];
  uVar16 = param_1[5];
  lVar15 = param_2[4];
  uVar13 = param_2[3];
  lVar18 = param_2[6];
  uVar9 = param_2[5];
  uStack_b0 = uVar13;
  lStack_a8 = lVar15;
  uStack_a0 = uVar9;
  lStack_98 = lVar18;
  uStack_90 = uVar5;
  lStack_88 = lVar6;
  uStack_80 = uVar16;
  lStack_78 = lVar10;
  if (lVar6 == 0) {
    if (lVar15 != 0) goto LAB_10357b524;
    FUN_10357b390(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
    FUN_10357b390(&uStack_b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
LAB_10357b5c0:
    func_0x000101597ae4(uVar5,lVar6,uVar16,lVar10);
    uVar16 = param_1[8];
    uVar13 = param_1[7];
    uVar5 = param_1[9];
    uVar17 = param_2[8];
    uVar14 = param_2[7];
    uVar9 = param_2[9];
    uStack_2b0 = uVar13;
    uStack_2a8 = uVar16;
    uStack_2a0 = uVar5;
    uStack_d0 = uVar14;
    uStack_c8 = uVar17;
    uStack_c0 = uVar9;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_10357ba60;
      uVar11 = 0x112db80f8;
      puVar12 = &UNK_10d9671e0;
      if ((int)uVar13 == (int)uVar14) {
        FUN_10357b390(&uStack_2b0,&uStack_f0,0x112db80f8,&UNK_10d9671e0);
        FUN_10357b390(&uStack_d0,&uStack_f0,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar16;
        func_0x000100e25fcc(uVar16,uVar5,uVar17,uVar9);
        func_0x000100d55f80(uVar14,uVar17,uVar9);
        if ((uVar2 & 1) != 0) goto LAB_10357b654;
      }
      else {
        FUN_10357b390(&uStack_2b0,&uStack_f0,0x112db80f8,&UNK_10d9671e0);
        puVar3 = &uStack_d0;
        puVar4 = &uStack_f0;
LAB_10357bd64:
        FUN_10357b390(puVar3,puVar4,uVar11,puVar12);
        func_0x000100d55f80(uVar14,uVar17,uVar9);
      }
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_10357b390(&uStack_2b0,&uStack_f0,0x112db80f8,&UNK_10d9671e0);
        FUN_10357b390(&uStack_d0,&uStack_f0,0x112db80f8,&UNK_10d9671e0);
LAB_10357b654:
        func_0x000100d55f80(uVar13,uVar16,uVar5);
        uVar16 = param_1[0xb];
        uVar13 = param_1[10];
        uVar5 = param_1[0xc];
        uVar17 = param_2[0xb];
        uVar14 = param_2[10];
        uVar9 = param_2[0xc];
        uStack_110 = uVar14;
        uStack_108 = uVar17;
        uStack_100 = uVar9;
        uStack_f0 = uVar13;
        uStack_e8 = uVar16;
        uStack_e0 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar9 >> 0x3c) goto LAB_10357bb6c;
          uVar11 = 0x112db80f8;
          puVar12 = &UNK_10d9671e0;
          if ((int)uVar13 != (int)uVar14) {
            FUN_10357b390(&uStack_f0,&uStack_130,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_110;
            puVar4 = &uStack_130;
            goto LAB_10357bd64;
          }
          FUN_10357b390(&uStack_f0,&uStack_130,0x112db80f8,&UNK_10d9671e0);
          FUN_10357b390(&uStack_110,&uStack_130,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar16;
          func_0x000100e25fcc(uVar16,uVar5,uVar17,uVar9);
          func_0x000100d55f80(uVar14,uVar17,uVar9);
          if ((uVar2 & 1) == 0) goto LAB_10357bd8c;
        }
        else {
          if (uVar9 >> 0x3c < 0xf) {
LAB_10357bb6c:
            uVar11 = 0x112db80f8;
            puVar12 = &UNK_10d9671e0;
            FUN_10357b390(&uStack_f0,&uStack_130,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_110;
            puVar4 = &uStack_130;
            uVar2 = uVar5;
            uVar7 = uVar16;
            uVar8 = uVar13;
            uVar5 = uVar9;
            uVar16 = uVar17;
            uVar13 = uVar14;
            goto LAB_10357bc50;
          }
          FUN_10357b390(&uStack_f0,&uStack_130,0x112db80f8,&UNK_10d9671e0);
          FUN_10357b390(&uStack_110,&uStack_130,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x000100d55f80(uVar13,uVar16,uVar5);
        uVar16 = param_1[0xe];
        uVar13 = param_1[0xd];
        uVar5 = param_1[0xf];
        uVar17 = param_2[0xe];
        uVar14 = param_2[0xd];
        uVar9 = param_2[0xf];
        uStack_150 = uVar14;
        uStack_148 = uVar17;
        uStack_140 = uVar9;
        uStack_130 = uVar13;
        uStack_128 = uVar16;
        uStack_120 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar9 >> 0x3c) goto LAB_10357bc24;
          if (uVar13 != uVar14) {
            uVar11 = 0x112db6f48;
            puVar12 = &UNK_10d969b40;
            FUN_10357b390(&uStack_130,&uStack_170,0x112db6f48,&UNK_10d969b40);
            puVar3 = &uStack_150;
            puVar4 = &uStack_170;
            goto LAB_10357bd64;
          }
          FUN_10357b390(&uStack_130,&uStack_170,0x112db6f48,&UNK_10d969b40);
          FUN_10357b390(&uStack_150,&uStack_170,0x112db6f48,&UNK_10d969b40);
          uVar14 = uVar16;
          func_0x000100e25fcc(uVar16,uVar5,uVar17,uVar9);
          func_0x000100d55f80(uVar13,uVar17,uVar9);
          if ((uVar14 & 1) == 0) goto LAB_10357bd8c;
        }
        else {
          if (uVar9 >> 0x3c < 0xf) {
LAB_10357bc24:
            uVar11 = 0x112db6f48;
            puVar12 = &UNK_10d969b40;
            FUN_10357b390(&uStack_130,&uStack_170,0x112db6f48,&UNK_10d969b40);
            puVar3 = &uStack_150;
            puVar4 = &uStack_170;
            uVar2 = uVar5;
            uVar7 = uVar16;
            uVar8 = uVar13;
            uVar5 = uVar9;
            uVar16 = uVar17;
            uVar13 = uVar14;
            goto LAB_10357bc50;
          }
          FUN_10357b390(&uStack_130,&uStack_170,0x112db6f48,&UNK_10d969b40);
          FUN_10357b390(&uStack_150,&uStack_170,0x112db6f48,&UNK_10d969b40);
        }
        func_0x000100d55f80(uVar13,uVar16,uVar5);
        uVar5 = param_1[0x11];
        uVar16 = param_1[0x10];
        lVar6 = param_1[0x12];
        uVar13 = param_2[0x11];
        uVar9 = param_2[0x10];
        lVar10 = param_2[0x12];
        uStack_190 = uVar9;
        uStack_188 = uVar13;
        lStack_180 = lVar10;
        uStack_170 = uVar16;
        uStack_168 = uVar5;
        lStack_160 = lVar6;
        if ((uVar16 & 0xff) == 2) {
          if ((uVar9 & 0xff) == 2) {
            FUN_10357b390(&uStack_170,&uStack_1b0,0x112db94f0,&UNK_10d96af00);
            FUN_10357b390(&uStack_190,&uStack_1b0,0x112db94f0,&UNK_10d96af00);
LAB_10357b808:
            func_0x000101556278(uVar16,uVar5,lVar6);
            uVar5 = param_1[0x14];
            uVar16 = param_1[0x13];
            lVar6 = param_1[0x15];
            uVar13 = param_2[0x14];
            uVar9 = param_2[0x13];
            lVar10 = param_2[0x15];
            uStack_1d0 = uVar9;
            uStack_1c8 = uVar13;
            lStack_1c0 = lVar10;
            uStack_1b0 = uVar16;
            uStack_1a8 = uVar5;
            lStack_1a0 = lVar6;
            if ((uVar16 & 0xff) == 2) {
              if ((uVar9 & 0xff) != 2) {
LAB_10357bdf8:
                FUN_10357b390(&uStack_1b0,&uStack_1f0,0x112db94f0,&UNK_10d96af00);
                puVar3 = &uStack_1d0;
                puVar4 = &uStack_1f0;
                lVar15 = lVar6;
                uVar17 = uVar5;
                uVar14 = uVar16;
                lVar6 = lVar10;
                uVar5 = uVar13;
                uVar16 = uVar9;
                goto LAB_10357bfc0;
              }
              FUN_10357b390(&uStack_1b0,&uStack_1f0,0x112db94f0,&UNK_10d96af00);
              FUN_10357b390(&uStack_1d0,&uStack_1f0,0x112db94f0,&UNK_10d96af00);
            }
            else {
              if ((uVar9 & 0xff) == 2) goto LAB_10357bdf8;
              if ((((uint)uVar9 ^ (uint)uVar16) & 1) != 0) {
                FUN_10357b390(&uStack_1b0,&uStack_1f0,0x112db94f0,&UNK_10d96af00);
                puVar3 = &uStack_1d0;
                puVar4 = &uStack_1f0;
                goto LAB_10357c080;
              }
              FUN_10357b390(&uStack_1b0,&uStack_1f0,0x112db94f0,&UNK_10d96af00);
              FUN_10357b390(&uStack_1d0,&uStack_1f0,0x112db94f0,&UNK_10d96af00);
              uVar17 = uVar5;
              func_0x000100e25fcc(uVar5,lVar6,uVar13,lVar10);
              func_0x000101556278(uVar9,uVar13,lVar10);
              if ((uVar17 & 1) == 0) goto LAB_10357c0a8;
            }
            func_0x000101556278(uVar16,uVar5,lVar6);
            uVar5 = param_1[0x17];
            uVar16 = param_1[0x16];
            lVar6 = param_1[0x18];
            uVar13 = param_2[0x17];
            uVar9 = param_2[0x16];
            lVar10 = param_2[0x18];
            uStack_210 = uVar9;
            uStack_208 = uVar13;
            lStack_200 = lVar10;
            uStack_1f0 = uVar16;
            uStack_1e8 = uVar5;
            lStack_1e0 = lVar6;
            if ((uVar16 & 0xff) == 2) {
              if ((uVar9 & 0xff) != 2) {
LAB_10357bed8:
                FUN_10357b390(&uStack_1f0,&uStack_230,0x112db94f0,&UNK_10d96af00);
                puVar3 = &uStack_210;
                puVar4 = &uStack_230;
                lVar15 = lVar6;
                uVar17 = uVar5;
                uVar14 = uVar16;
                lVar6 = lVar10;
                uVar5 = uVar13;
                uVar16 = uVar9;
                goto LAB_10357bfc0;
              }
              FUN_10357b390(&uStack_1f0,&uStack_230,0x112db94f0,&UNK_10d96af00);
              FUN_10357b390(&uStack_210,&uStack_230,0x112db94f0,&UNK_10d96af00);
            }
            else {
              if ((uVar9 & 0xff) == 2) goto LAB_10357bed8;
              if ((((uint)uVar9 ^ (uint)uVar16) & 1) != 0) {
                FUN_10357b390(&uStack_1f0,&uStack_230,0x112db94f0,&UNK_10d96af00);
                puVar3 = &uStack_210;
                puVar4 = &uStack_230;
                goto LAB_10357c080;
              }
              FUN_10357b390(&uStack_1f0,&uStack_230,0x112db94f0,&UNK_10d96af00);
              FUN_10357b390(&uStack_210,&uStack_230,0x112db94f0,&UNK_10d96af00);
              uVar17 = uVar5;
              func_0x000100e25fcc(uVar5,lVar6,uVar13,lVar10);
              func_0x000101556278(uVar9,uVar13,lVar10);
              if ((uVar17 & 1) == 0) goto LAB_10357c0a8;
            }
            func_0x000101556278(uVar16,uVar5,lVar6);
            uVar5 = param_1[0x1a];
            uVar16 = param_1[0x19];
            lVar6 = param_1[0x1b];
            uVar13 = param_2[0x1a];
            uVar9 = param_2[0x19];
            lVar10 = param_2[0x1b];
            uStack_250 = uVar9;
            uStack_248 = uVar13;
            lStack_240 = lVar10;
            uStack_230 = uVar16;
            uStack_228 = uVar5;
            lStack_220 = lVar6;
            if ((uVar16 & 0xff) == 2) {
              if ((uVar9 & 0xff) != 2) {
LAB_10357bf94:
                FUN_10357b390(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                puVar3 = &uStack_250;
                puVar4 = &uStack_270;
                lVar15 = lVar6;
                uVar17 = uVar5;
                uVar14 = uVar16;
                lVar6 = lVar10;
                uVar5 = uVar13;
                uVar16 = uVar9;
                goto LAB_10357bfc0;
              }
              FUN_10357b390(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
              FUN_10357b390(&uStack_250,&uStack_270,0x112db94f0,&UNK_10d96af00);
            }
            else {
              if ((uVar9 & 0xff) == 2) goto LAB_10357bf94;
              if ((((uint)uVar9 ^ (uint)uVar16) & 1) != 0) {
                FUN_10357b390(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                puVar3 = &uStack_250;
                puVar4 = &uStack_270;
                goto LAB_10357c080;
              }
              FUN_10357b390(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
              FUN_10357b390(&uStack_250,&uStack_270,0x112db94f0,&UNK_10d96af00);
              uVar17 = uVar5;
              func_0x000100e25fcc(uVar5,lVar6,uVar13,lVar10);
              func_0x000101556278(uVar9,uVar13,lVar10);
              if ((uVar17 & 1) == 0) goto LAB_10357c0a8;
            }
            func_0x000101556278(uVar16,uVar5,lVar6);
            uVar16 = param_1[0x1d];
            uVar13 = param_1[0x1c];
            uVar5 = param_1[0x1e];
            uVar17 = param_2[0x1d];
            uVar14 = param_2[0x1c];
            uVar9 = param_2[0x1e];
            uStack_290 = uVar14;
            uStack_288 = uVar17;
            uStack_280 = uVar9;
            uStack_270 = uVar13;
            uStack_268 = uVar16;
            uStack_260 = uVar5;
            if (uVar5 >> 0x3c < 0xf) {
              if (0xe < uVar9 >> 0x3c) goto LAB_10357c0bc;
              if (uVar13 != uVar14) {
                uVar11 = 0x112db6f48;
                puVar12 = &UNK_10d969b40;
                FUN_10357b390(&uStack_270,auStack_2c8,0x112db6f48,&UNK_10d969b40);
                puVar3 = &uStack_290;
                puVar4 = auStack_2c8;
                goto LAB_10357bd64;
              }
              FUN_10357b390(&uStack_270,auStack_2c8,0x112db6f48,&UNK_10d969b40);
              FUN_10357b390(&uStack_290,auStack_2c8,0x112db6f48,&UNK_10d969b40);
              uVar14 = uVar16;
              func_0x000100e25fcc(uVar16,uVar5,uVar17,uVar9);
              func_0x000100d55f80(uVar13,uVar17,uVar9);
              if ((uVar14 & 1) == 0) goto LAB_10357bd8c;
            }
            else {
              if (uVar9 >> 0x3c < 0xf) {
LAB_10357c0bc:
                uVar11 = 0x112db6f48;
                puVar12 = &UNK_10d969b40;
                FUN_10357b390(&uStack_270,auStack_2c8,0x112db6f48,&UNK_10d969b40);
                puVar3 = &uStack_290;
                puVar4 = auStack_2c8;
                uVar2 = uVar5;
                uVar7 = uVar16;
                uVar8 = uVar13;
                uVar5 = uVar9;
                uVar16 = uVar17;
                uVar13 = uVar14;
                goto LAB_10357bc50;
              }
              FUN_10357b390(&uStack_270,auStack_2c8,0x112db6f48,&UNK_10d969b40);
              FUN_10357b390(&uStack_290,auStack_2c8,0x112db6f48,&UNK_10d969b40);
            }
            func_0x000100d55f80(uVar13,uVar16,uVar5);
            lVar6 = param_1[1];
            func_0x000100e25fcc(lVar6,param_1[2],param_2[1],param_2[2]);
            uVar1 = (uint)lVar6;
            goto LAB_10357bd94;
          }
LAB_10357bd08:
          FUN_10357b390(&uStack_170,&uStack_1b0,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_190;
          puVar4 = &uStack_1b0;
          lVar15 = lVar6;
          uVar17 = uVar5;
          uVar14 = uVar16;
          lVar6 = lVar10;
          uVar5 = uVar13;
          uVar16 = uVar9;
LAB_10357bfc0:
          FUN_10357b390(puVar3,puVar4,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar14,uVar17,lVar15);
        }
        else {
          if ((uVar9 & 0xff) == 2) goto LAB_10357bd08;
          if ((((uint)uVar9 ^ (uint)uVar16) & 1) == 0) {
            FUN_10357b390(&uStack_170,&uStack_1b0,0x112db94f0,&UNK_10d96af00);
            FUN_10357b390(&uStack_190,&uStack_1b0,0x112db94f0,&UNK_10d96af00);
            uVar17 = uVar5;
            func_0x000100e25fcc(uVar5,lVar6,uVar13,lVar10);
            func_0x000101556278(uVar9,uVar13,lVar10);
            if ((uVar17 & 1) != 0) goto LAB_10357b808;
          }
          else {
            FUN_10357b390(&uStack_170,&uStack_1b0,0x112db94f0,&UNK_10d96af00);
            puVar3 = &uStack_190;
            puVar4 = &uStack_1b0;
LAB_10357c080:
            FUN_10357b390(puVar3,puVar4,0x112db94f0,&UNK_10d96af00);
            func_0x000101556278(uVar9,uVar13,lVar10);
          }
        }
LAB_10357c0a8:
        func_0x000101556278(uVar16,uVar5,lVar6);
        goto LAB_10357bd90;
      }
LAB_10357ba60:
      uVar11 = 0x112db80f8;
      puVar12 = &UNK_10d9671e0;
      FUN_10357b390(&uStack_2b0,&uStack_f0,0x112db80f8,&UNK_10d9671e0);
      puVar3 = &uStack_d0;
      puVar4 = &uStack_f0;
      uVar2 = uVar5;
      uVar7 = uVar16;
      uVar8 = uVar13;
      uVar5 = uVar9;
      uVar16 = uVar17;
      uVar13 = uVar14;
LAB_10357bc50:
      FUN_10357b390(puVar3,puVar4,uVar11,puVar12);
      func_0x000100d55f80(uVar8,uVar7,uVar2);
    }
LAB_10357bd8c:
    func_0x000100d55f80(uVar13,uVar16,uVar5);
  }
  else {
    if (lVar15 == 0) {
LAB_10357b524:
      FUN_10357b390(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
      FUN_10357b390(&uStack_b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar5,lVar6,uVar16,lVar10);
      uVar5 = uVar13;
      lVar6 = lVar15;
      uVar16 = uVar9;
      lVar10 = lVar18;
    }
    else if (((uVar5 == uVar13) && (lVar6 == lVar15)) ||
            (uVar17 = uVar5, func_0x000107c605b8(uVar5,lVar6,uVar13,lVar15,0), (uVar17 & 1) != 0)) {
      FUN_10357b390(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
      FUN_10357b390(&uStack_b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
      uVar17 = uVar16;
      func_0x000100e25fcc(uVar16,lVar10,uVar9,lVar18);
      func_0x000101597ae4(uVar13,lVar15,uVar9,lVar18);
      if ((uVar17 & 1) != 0) goto LAB_10357b5c0;
    }
    else {
      FUN_10357b390(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
      FUN_10357b390(&uStack_b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar13,lVar15,uVar9,lVar18);
    }
    func_0x000101597ae4(uVar5,lVar6,uVar16,lVar10);
  }
LAB_10357bd90:
  uVar1 = 0;
LAB_10357bd94:
  return uVar1 & 1;
}



/* Entry: 10357c348; end: 10357c3c7;  */

void FUN_10357c348(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd5d0;
  func_0x000107c61520(&UNK_10dbdd5d0,&UNK_110666700);
  puRam0000000112f79698 = puVar1;
  return;
}



/* Entry: 10357c3c8; end: 10357c3eb;  */

void FUN_10357c3c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10357c3ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10357c3ec; end: 10357c42b;  */

void FUN_10357c3ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f796b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd5a8;
  func_0x000107c61520(&UNK_10dbdd5a8,&UNK_110666700);
  puRam0000000112f796b0 = puVar1;
  return;
}



/* Entry: 10357c42c; end: 10357c443;  */

void FUN_10357c42c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10357c348();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10357892c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10357c444; end: 10357c483;  */

void FUN_10357c444(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f796b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd610;
  func_0x000107c61520(&UNK_10dbdd610,&UNK_110666700);
  puRam0000000112f796b8 = puVar1;
  return;
}



/* Entry: 10357c484; end: 10357c4a7;  */

void FUN_10357c484(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10357c4a8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10357c4a8; end: 10357c4e7;  */

void FUN_10357c4a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f796c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd680;
  func_0x000107c61520(&UNK_10dbdd680,&UNK_110666780);
  puRam0000000112f796c0 = puVar1;
  return;
}



/* Entry: 10357c4e8; end: 10357c4fb;  */

void FUN_10357c4e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10357c388)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10357b3d8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10357c4fc; end: 10357c52b;  */

void FUN_10357c4fc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10357c52c; end: 10357c52f;  */

void FUN_10357c52c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f796c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd6e8;
  func_0x000107c61520(&UNK_10dbdd6e8,&UNK_110666780);
  puRam0000000112f796c8 = puVar1;
  return;
}



/* Entry: 10357c530; end: 10357c56f;  */

void FUN_10357c530(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f796c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd6e8;
  func_0x000107c61520(&UNK_10dbdd6e8,&UNK_110666780);
  puRam0000000112f796c8 = puVar1;
  return;
}



/* Entry: 10357c570; end: 10357c597;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10357c570(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10357c598; end: 10357c63f;  */

undefined8 * FUN_10357c598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10357c640; end: 10357c683;  */

undefined8 * FUN_10357c640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 10357c684; end: 10357c71b;  */

int FUN_10357c684(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10357c71c; end: 10357c83b;  */

long FUN_10357c71c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10357c83c; end: 10357d387;  */

undefined8 * FUN_10357c83c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  uVar4 = param_2[2];
  func_0x00010006c00c(uVar5,uVar4);
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  lVar2 = param_2[4];
  if (lVar2 == 0) {
    uVar5 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar5;
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
  }
  else {
    param_1[3] = param_2[3];
    param_1[4] = lVar2;
    uVar5 = param_2[5];
    uVar4 = param_2[6];
    func_0x000107c61434();
    func_0x00010006c00c(uVar5,uVar4);
    param_1[5] = uVar5;
    param_1[6] = uVar4;
  }
  uVar3 = param_2[9];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar5 = param_2[8];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[8] = uVar5;
    param_1[9] = uVar3;
  }
  else {
    uVar5 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar5;
    param_1[9] = param_2[9];
  }
  uVar3 = param_2[0xc];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar5 = param_2[0xb];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0xb] = uVar5;
    param_1[0xc] = uVar3;
  }
  else {
    uVar5 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xc] = param_2[0xc];
  }
  uVar3 = param_2[0xf];
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar3;
  }
  else {
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    param_1[0xf] = param_2[0xf];
  }
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 == '\x02') {
    uVar5 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar5;
    param_1[0x12] = param_2[0x12];
  }
  else {
    *(char *)(param_1 + 0x10) = cVar1;
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x12];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar4;
  }
  cVar1 = *(char *)(param_2 + 0x13);
  if (cVar1 == '\x02') {
    uVar5 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar5;
    param_1[0x15] = param_2[0x15];
  }
  else {
    *(char *)(param_1 + 0x13) = cVar1;
    uVar5 = param_2[0x14];
    uVar4 = param_2[0x15];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x14] = uVar5;
    param_1[0x15] = uVar4;
  }
  cVar1 = *(char *)(param_2 + 0x16);
  if (cVar1 == '\x02') {
    uVar5 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
    param_1[0x18] = param_2[0x18];
  }
  else {
    *(char *)(param_1 + 0x16) = cVar1;
    uVar5 = param_2[0x17];
    uVar4 = param_2[0x18];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x17] = uVar5;
    param_1[0x18] = uVar4;
  }
  cVar1 = *(char *)(param_2 + 0x19);
  if (cVar1 == '\x02') {
    uVar5 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar5;
    param_1[0x1b] = param_2[0x1b];
  }
  else {
    *(char *)(param_1 + 0x19) = cVar1;
    uVar5 = param_2[0x1a];
    uVar4 = param_2[0x1b];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x1a] = uVar5;
    param_1[0x1b] = uVar4;
  }
  uVar3 = param_2[0x1e];
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0x1d] = uVar5;
    param_1[0x1e] = uVar3;
  }
  else {
    uVar5 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar5;
    param_1[0x1e] = param_2[0x1e];
  }
  return param_1;
}



/* Entry: 10357d388; end: 10357d483;  */

int FUN_10357d388(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x3e] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10357d484; end: 10357d503;  */

void FUN_10357d484(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f796d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdd654;
  func_0x000107c61520(&DAT_10dbdd654,&UNK_110666780);
  puRam0000000112f796d8 = puVar1;
  return;
}



/* Entry: 10357d504; end: 10357d51f;  */

undefined8 * FUN_10357d504(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10357d520; end: 10357d54f;  */

void FUN_10357d520(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10357d780();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10357d550; end: 10357d557;  */

undefined8 FUN_10357d550(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10357d558; end: 10357d5cb;  */

void FUN_10357d558(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f797e8;
  func_0x0001000285a8(0x112f797e8,&UNK_10dbdd8b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10357d5cc; end: 10357d5d7;  */

void FUN_10357d5cc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10357d5d8; end: 10357d683;  */

void FUN_10357d5d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10357d684; end: 10357d697;  */

bool FUN_10357d684(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10357d698; end: 10357d6df;  */

void FUN_10357d698(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdda40,0x109,2);
  uRam0000000113808a98 = uStack_38;
  uRam0000000113808a90 = uStack_40;
  uRam0000000113808aa8 = uStack_28;
  uRam0000000113808aa0 = uStack_30;
  uRam0000000113808ab8 = uStack_18;
  uRam0000000113808ab0 = uStack_20;
  return;
}



/* Entry: 10357d6e0; end: 10357d77f;  */

/* WARNING: Possible PIC construction at 0x00010357d72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010357d73c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010357d730) */
/* WARNING: Removing unreachable block (ram,0x00010357d740) */

void FUN_10357d6e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f797f0 != -1) {
    func_0x000107c61568(0x112f797f0,FUN_10357d698);
  }
  uVar5 = uRam0000000113808ab8;
  uVar4 = uRam0000000113808ab0;
  uVar3 = uRam0000000113808aa8;
  uVar2 = uRam0000000113808aa0;
  uVar1 = uRam0000000113808a98;
  *param_1 = uRam0000000113808a90;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10357d780; end: 10357d78b;  */

void FUN_10357d780(void)

{
  return;
}



/* Entry: 10357d78c; end: 10357d7b7;  */

void FUN_10357d78c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10357d7b8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010357d7f8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10357d7b8; end: 10357d837;  */

void FUN_10357d7b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f797f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd950;
  func_0x000107c61520(&UNK_10dbdd950,&UNK_110666918);
  puRam0000000112f797f8 = puVar1;
  return;
}



/* Entry: 10357d838; end: 10357d83b;  */

void FUN_10357d838(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f79808 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f79810;
  func_0x00010002969c(0x112f79810,&UNK_10dbdd8d8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f79808 = puVar2;
  return;
}



/* Entry: 10357d83c; end: 10357d88b;  */

void FUN_10357d83c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f79808 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f79810;
  func_0x00010002969c(0x112f79810,&UNK_10dbdd8d8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f79808 = puVar2;
  return;
}



/* Entry: 10357d88c; end: 10357d88f;  */

void FUN_10357d88c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd990;
  func_0x000107c61520(&UNK_10dbdd990,&UNK_110666918);
  puRam0000000112f79818 = puVar1;
  return;
}



/* Entry: 10357d890; end: 10357d8cf;  */

void FUN_10357d890(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdd990;
  func_0x000107c61520(&UNK_10dbdd990,&UNK_110666918);
  puRam0000000112f79818 = puVar1;
  return;
}



/* Entry: 10357d8d0; end: 10357d96f;  */

int FUN_10357d8d0(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10357d970; end: 10357d9b7;  */

undefined8 FUN_10357d970(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10357d9b8; end: 10357d9ff;  */

void FUN_10357d9b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbddca0,0x29,2);
  uRam0000000113808ac8 = uStack_38;
  uRam0000000113808ac0 = uStack_40;
  uRam0000000113808ad8 = uStack_28;
  uRam0000000113808ad0 = uStack_30;
  uRam0000000113808ae8 = uStack_18;
  uRam0000000113808ae0 = uStack_20;
  return;
}



/* Entry: 10357da00; end: 10357dae3;  */

void FUN_10357da00(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000103510fbc();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_11066abb0;
LAB_10357da88:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790c00;
        goto LAB_10357da88;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10357dae4; end: 10357db57;  */

void FUN_10357dae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10357db58();
  if (unaff_x21 == 0) {
    FUN_10357dbd8();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10357db58; end: 10357dbd7;  */

void FUN_10357db58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x20);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357dbd8; end: 10357dc5f;  */

void FUN_10357dbd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x28);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10357dc60; end: 10357dca7;  */

uint FUN_10357dc60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_f8 [24];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar6 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar3 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar3;
  uStack_98 = uVar9;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar6;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_10357e0f4;
    FUN_10357d970(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10357d970(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,0);
LAB_10357e198:
    uVar10 = param_1[6];
    uVar7 = param_1[5];
    uVar3 = param_1[7];
    uVar11 = param_2[6];
    uVar8 = param_2[5];
    uVar6 = param_2[7];
    uStack_e0 = uVar8;
    uStack_d8 = uVar11;
    uStack_d0 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uVar10;
    uStack_b0 = uVar3;
    if ((uVar7 & 0xff) == 2) {
      if ((uVar8 & 0xff) == 2) {
        FUN_10357d970(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10357d970(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
LAB_10357e210:
        func_0x000101556278(uVar7,uVar10,uVar3);
        uVar3 = *param_1;
        func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar3;
        goto LAB_10357e35c;
      }
LAB_10357e238:
      FUN_10357d970(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      FUN_10357d970(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar7,uVar10,uVar3);
      uVar7 = uVar8;
      uVar10 = uVar11;
      uVar3 = uVar6;
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_10357e238;
      if ((((uint)uVar8 ^ (uint)uVar7) & 1) == 0) {
        FUN_10357d970(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10357d970(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar3,uVar11,uVar6);
        func_0x000101556278(uVar8,uVar11,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_10357e210;
      }
      else {
        FUN_10357d970(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10357d970(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar11,uVar6);
      }
    }
    func_0x000101556278(uVar7,uVar10,uVar3);
  }
  else if (lVar5 == 0) {
LAB_10357e0f4:
    FUN_10357d970(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10357d970(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    func_0x00010349f458(uVar3,uVar9,lVar5);
  }
  else {
    FUN_10357d970(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10357d970(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar10 = uVar7;
    FUN_1035d8f6c(uVar7,uVar6,lVar4,uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    if ((uVar10 & 1) != 0) goto LAB_10357e198;
  }
  uVar1 = 0;
LAB_10357e35c:
  return uVar1 & 1;
}



/* Entry: 10357dca8; end: 10357dcd7;  */

undefined1  [16] FUN_10357dca8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10357dcd8; end: 10357dd0b;  */

void FUN_10357dcd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10357dd0c; end: 10357dd1f;  */

undefined8 FUN_10357dd0c(void)

{
  return 0x10357dd1c;
}



/* Entry: 10357dd20; end: 10357dd33;  */

void FUN_10357dd20(void)

{
  FUN_10357da00();
  return;
}



/* Entry: 10357dd34; end: 10357dd6b;  */

void FUN_10357dd34(void)

{
  FUN_10357dae4();
  return;
}



/* Entry: 10357dd6c; end: 10357dd6f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10357dd6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10357dd70; end: 10357dda7;  */

uint FUN_10357dd70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10357e904();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}


