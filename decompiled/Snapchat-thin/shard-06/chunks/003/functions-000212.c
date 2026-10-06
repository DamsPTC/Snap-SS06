/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046c14f0; end: 1046c1503;  */

undefined1  [16] FUN_1046c14f0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046c1504; end: 1046c1543;  */

void FUN_1046c1504(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d8a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2eb98;
  _swift_getWitnessTable(&UNK_10dd2eb98,&UNK_11079b0b0);
  puRam000000011308d8a8 = puVar1;
  return;
}



/* Entry: 1046c1544; end: 1046c1553;  */

undefined1  [16] FUN_1046c1544(void)

{
  return ZEXT816(0x11079b0b0);
}



/* Entry: 1046c1554; end: 1046c1643;  */

void FUN_1046c1554(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  double *unaff_x20;
  double dVar3;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined2 uStack_e0;
  undefined1 uStack_de;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  iVar2 = (int)&dStack_160;
  dVar3 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar3 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar3 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dStack_f8 = unaff_x20[0xf];
  dStack_100 = unaff_x20[0xe];
  dStack_f0 = unaff_x20[0x10];
  uStack_e8 = SUB87(unaff_x20[0x11],0);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x8f);
  uStack_e1 = (undefined1)uVar1;
  uStack_e0 = (undefined2)((uint)uVar1 >> 8);
  uStack_de = (undefined1)((uint)uVar1 >> 0x18);
  dStack_138 = unaff_x20[7];
  dStack_140 = unaff_x20[6];
  dStack_128 = unaff_x20[9];
  dStack_130 = unaff_x20[8];
  dStack_118 = unaff_x20[0xb];
  dStack_120 = unaff_x20[10];
  dStack_108 = unaff_x20[0xd];
  dStack_110 = unaff_x20[0xc];
  dStack_158 = unaff_x20[3];
  dStack_160 = unaff_x20[2];
  dStack_148 = unaff_x20[5];
  dStack_150 = unaff_x20[4];
  FUN_1046c199c();
  if (iVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_58 = CONCAT17(uStack_e1,uStack_e8);
    dStack_68 = dStack_f8;
    dStack_70 = dStack_100;
    dStack_60 = dStack_f0;
    uStack_50 = uStack_e0;
    dStack_a8 = dStack_138;
    dStack_b0 = dStack_140;
    dStack_98 = dStack_128;
    dStack_a0 = dStack_130;
    dStack_88 = dStack_118;
    dStack_90 = dStack_120;
    dStack_78 = dStack_108;
    dStack_80 = dStack_110;
    dStack_c8 = dStack_158;
    dStack_d0 = dStack_160;
    dStack_b8 = dStack_148;
    dStack_c0 = dStack_150;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470dd8c(param_1);
  }
  return;
}



/* Entry: 1046c1644; end: 1046c1747;  */

void FUN_1046c1644(void)

{
  undefined4 uVar1;
  int iVar2;
  double *unaff_x20;
  double dVar3;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined1 auStack_118 [72];
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  iVar2 = (int)&dStack_1a0;
  __ss6HasherV5_seedABSi_tcfC(auStack_118,0);
  dVar3 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar3 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar3 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dStack_138 = unaff_x20[0xf];
  dStack_140 = unaff_x20[0xe];
  dStack_130 = unaff_x20[0x10];
  uStack_128 = SUB87(unaff_x20[0x11],0);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x8f);
  uStack_121 = (undefined1)uVar1;
  uStack_120 = (undefined2)((uint)uVar1 >> 8);
  uStack_11e = (undefined1)((uint)uVar1 >> 0x18);
  dStack_178 = unaff_x20[7];
  dStack_180 = unaff_x20[6];
  dStack_168 = unaff_x20[9];
  dStack_170 = unaff_x20[8];
  dStack_158 = unaff_x20[0xb];
  dStack_160 = unaff_x20[10];
  dStack_148 = unaff_x20[0xd];
  dStack_150 = unaff_x20[0xc];
  dStack_198 = unaff_x20[3];
  dStack_1a0 = unaff_x20[2];
  dStack_188 = unaff_x20[5];
  dStack_190 = unaff_x20[4];
  FUN_1046c199c();
  if (iVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_58 = CONCAT17(uStack_121,uStack_128);
    dStack_68 = dStack_138;
    dStack_70 = dStack_140;
    dStack_60 = dStack_130;
    uStack_50 = uStack_120;
    dStack_a8 = dStack_178;
    dStack_b0 = dStack_180;
    dStack_98 = dStack_168;
    dStack_a0 = dStack_170;
    dStack_88 = dStack_158;
    dStack_90 = dStack_160;
    dStack_78 = dStack_148;
    dStack_80 = dStack_150;
    dStack_c8 = dStack_198;
    dStack_d0 = dStack_1a0;
    dStack_b8 = dStack_188;
    dStack_c0 = dStack_190;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470dd8c(auStack_118);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c1748; end: 1046c174f;  */

void FUN_1046c1748(void)

{
  undefined4 uVar1;
  int iVar2;
  double *unaff_x20;
  double dVar3;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined1 auStack_118 [72];
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  iVar2 = (int)&dStack_1a0;
  __ss6HasherV5_seedABSi_tcfC(auStack_118,0);
  dVar3 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar3 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar3 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dStack_138 = unaff_x20[0xf];
  dStack_140 = unaff_x20[0xe];
  dStack_130 = unaff_x20[0x10];
  uStack_128 = SUB87(unaff_x20[0x11],0);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x8f);
  uStack_121 = (undefined1)uVar1;
  uStack_120 = (undefined2)((uint)uVar1 >> 8);
  uStack_11e = (undefined1)((uint)uVar1 >> 0x18);
  dStack_178 = unaff_x20[7];
  dStack_180 = unaff_x20[6];
  dStack_168 = unaff_x20[9];
  dStack_170 = unaff_x20[8];
  dStack_158 = unaff_x20[0xb];
  dStack_160 = unaff_x20[10];
  dStack_148 = unaff_x20[0xd];
  dStack_150 = unaff_x20[0xc];
  dStack_198 = unaff_x20[3];
  dStack_1a0 = unaff_x20[2];
  dStack_188 = unaff_x20[5];
  dStack_190 = unaff_x20[4];
  FUN_1046c199c();
  if (iVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_58 = CONCAT17(uStack_121,uStack_128);
    dStack_68 = dStack_138;
    dStack_70 = dStack_140;
    dStack_60 = dStack_130;
    uStack_50 = uStack_120;
    dStack_a8 = dStack_178;
    dStack_b0 = dStack_180;
    dStack_98 = dStack_168;
    dStack_a0 = dStack_170;
    dStack_88 = dStack_158;
    dStack_90 = dStack_160;
    dStack_78 = dStack_148;
    dStack_80 = dStack_150;
    dStack_c8 = dStack_198;
    dStack_d0 = dStack_1a0;
    dStack_b8 = dStack_188;
    dStack_c0 = dStack_190;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10470dd8c(auStack_118);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c1750; end: 1046c1787;  */

void FUN_1046c1750(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1046c1554(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c1788; end: 1046c181b;  */

uint FUN_1046c1788(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined7 uStack_d8;
  undefined4 uStack_d1;
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
  undefined7 uStack_38;
  undefined4 uStack_31;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_e0 = param_1[0x10];
  uStack_d8 = (undefined7)param_1[0x11];
  uStack_d1 = *(undefined4 *)((long)param_1 + 0x8f);
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_40 = param_2[0x10];
  uStack_38 = (undefined7)param_2[0x11];
  uStack_31 = *(undefined4 *)((long)param_2 + 0x8f);
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_1046c181c(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1046c181c; end: 1046c199b;  */

uint FUN_1046c181c(double *param_1,double *param_2)

{
  undefined7 uVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  undefined1 uStack_271;
  undefined2 uStack_270;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  undefined7 uStack_1e8;
  undefined4 uStack_1e1;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined2 uStack_158;
  undefined1 uStack_156;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    pdVar4 = &dStack_1d8;
    uStack_158 = (undefined2)((uint)*(undefined4 *)((long)param_2 + 0x8f) >> 8);
    uStack_156 = (undefined1)((uint)*(undefined4 *)((long)param_2 + 0x8f) >> 0x18);
    dStack_1f8 = param_1[0xf];
    dStack_200 = param_1[0xe];
    dStack_1f0 = param_1[0x10];
    uStack_1e8 = SUB87(param_1[0x11],0);
    dStack_238 = param_1[7];
    dStack_240 = param_1[6];
    dStack_228 = param_1[9];
    dStack_230 = param_1[8];
    dStack_218 = param_1[0xb];
    dStack_220 = param_1[10];
    dStack_208 = param_1[0xd];
    dStack_210 = param_1[0xc];
    dStack_258 = param_1[3];
    dStack_260 = param_1[2];
    dStack_248 = param_1[5];
    dStack_250 = param_1[4];
    dStack_190 = param_2[0xb];
    dStack_198 = param_2[10];
    dStack_180 = param_2[0xd];
    dStack_188 = param_2[0xc];
    dStack_170 = param_2[0xf];
    dStack_178 = param_2[0xe];
    dStack_168 = param_2[0x10];
    uStack_160 = SUB87(param_2[0x11],0);
    uStack_159 = (undefined1)((ulong)param_2[0x11] >> 0x38);
    dStack_1d0 = param_2[3];
    dStack_1d8 = param_2[2];
    dStack_1c0 = param_2[5];
    dStack_1c8 = param_2[4];
    dStack_1b0 = param_2[7];
    dStack_1b8 = param_2[6];
    dStack_1a0 = param_2[9];
    dStack_1a8 = param_2[8];
    uStack_1e1 = *(undefined4 *)((long)param_1 + 0x8f);
    iVar2 = (int)&dStack_260;
    FUN_1046c199c();
    uVar1 = uStack_1e8;
    dStack_e0 = dStack_1f0;
    dStack_e8 = dStack_1f8;
    dStack_f0 = dStack_200;
    dStack_f8 = dStack_208;
    dStack_100 = dStack_210;
    dStack_108 = dStack_218;
    dStack_110 = dStack_220;
    dStack_118 = dStack_228;
    dStack_120 = dStack_230;
    dStack_128 = dStack_238;
    dStack_130 = dStack_240;
    dStack_138 = dStack_248;
    dStack_140 = dStack_250;
    dStack_148 = dStack_258;
    dStack_150 = dStack_260;
    if (iVar2 == 1) {
      FUN_1046c199c(pdVar4);
      uVar3 = (uint)((int)pdVar4 == 1);
    }
    else {
      uStack_271 = (undefined1)uStack_1e1;
      uStack_270 = (undefined2)((uint)uStack_1e1 >> 8);
      FUN_1046c199c();
      if ((int)pdVar4 == 1) {
        uVar3 = 0;
      }
      else {
        uStack_48 = CONCAT17(uStack_159,uStack_160);
        dStack_58 = dStack_170;
        dStack_60 = dStack_178;
        dStack_50 = dStack_168;
        uStack_40 = uStack_158;
        dStack_98 = dStack_1b0;
        dStack_a0 = dStack_1b8;
        dStack_88 = dStack_1a0;
        dStack_90 = dStack_1a8;
        dStack_78 = dStack_190;
        dStack_80 = dStack_198;
        dStack_68 = dStack_180;
        dStack_70 = dStack_188;
        dStack_b8 = dStack_1d0;
        dStack_c0 = dStack_1d8;
        dStack_a8 = dStack_1c0;
        dStack_b0 = dStack_1c8;
        uStack_d8 = CONCAT17(uStack_271,uVar1);
        uStack_d0 = uStack_270;
        pdVar4 = &dStack_150;
        FUN_10470e040(pdVar4,&dStack_c0);
        uVar3 = (uint)pdVar4;
      }
    }
    return uVar3 & 1;
  }
  return 0;
}



/* Entry: 1046c199c; end: 1046c19bb;  */

int FUN_1046c199c(int *param_1)

{
  if (*(char *)((long)param_1 + 0x82) != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1046c19bc; end: 1046c19fb;  */

void FUN_1046c19bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ec4c;
  _swift_getWitnessTable(&UNK_10dd2ec4c,&UNK_11079b190);
  puRam000000011308d8b0 = puVar1;
  return;
}



/* Entry: 1046c19fc; end: 1046c1a27;  */

long FUN_1046c19fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046c1a28; end: 1046c1ae3;  */

void FUN_1046c1a28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  *(undefined4 *)((long)param_1 + 0x8f) = *(undefined4 *)((long)param_2 + 0x8f);
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Entry: 1046c1ae4; end: 1046c1bf3;  */

void FUN_1046c1ae4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c1bf4; end: 1046c1c2f;  */

bool FUN_1046c1bf4(undefined8 *param_1,undefined8 *param_2)

{
  return (int)*param_1 == (int)*param_2 &&
         ((int)param_1[1] == (int)param_2[1] && (int)param_1[2] == (int)param_2[2]);
}



/* Entry: 1046c1c30; end: 1046c1c6f;  */

void FUN_1046c1c30(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d8b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ecc0;
  _swift_getWitnessTable(&UNK_10dd2ecc0,&UNK_11079b250);
  puRam000000011308d8b8 = puVar1;
  return;
}



/* Entry: 1046c1c70; end: 1046c1ccb;  */

int FUN_1046c1c70(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1046c1ccc; end: 1046c1d1b;  */

undefined8 FUN_1046c1ccc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db3e98;
  func_0x0001000285a8(0x112db3e98,&UNK_10dd2ed10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1046c1d1c; end: 1046c1f1f;  */

void FUN_1046c1d1c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar6 = unaff_x20[8];
  if (lVar6 == 1) {
LAB_1046c1dbc:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = unaff_x20[2];
    uVar3 = unaff_x20[3];
    lVar1 = unaff_x20[4];
    uVar4 = unaff_x20[5];
    lVar2 = unaff_x20[6];
    uVar5 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar1 == 1) {
LAB_1046c1dd4:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar7);
      if (lVar1 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar1);
      }
      if (lVar2 == 0) goto LAB_1046c1dd4;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    }
    if (lVar6 == 0) goto LAB_1046c1dbc;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar6);
  }
  lVar6 = unaff_x20[0xf];
  if (lVar6 != 1) {
    uVar7 = unaff_x20[9];
    uVar3 = unaff_x20[10];
    lVar1 = unaff_x20[0xb];
    uVar4 = unaff_x20[0xc];
    lVar2 = unaff_x20[0xd];
    uVar5 = unaff_x20[0xe];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar1 == 1) {
LAB_1046c1e84:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar7);
      if (lVar1 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar1);
      }
      if (lVar2 == 0) goto LAB_1046c1e84;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    }
    if (lVar6 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar6);
      goto LAB_1046c1ea8;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1046c1ea8:
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x10) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x81) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[0x11]);
  lVar6 = unaff_x20[0x13];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = unaff_x20[0x12];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,lVar6);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x14) & 1);
  return;
}



/* Entry: 1046c1f20; end: 1046c1f5b;  */

void FUN_1046c1f20(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1046c1d1c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c1f5c; end: 1046c1f5f;  */

void FUN_1046c1f5c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar6 = unaff_x20[8];
  if (lVar6 == 1) {
LAB_1046c1dbc:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = unaff_x20[2];
    uVar3 = unaff_x20[3];
    lVar1 = unaff_x20[4];
    uVar4 = unaff_x20[5];
    lVar2 = unaff_x20[6];
    uVar5 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar1 == 1) {
LAB_1046c1dd4:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar7);
      if (lVar1 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar1);
      }
      if (lVar2 == 0) goto LAB_1046c1dd4;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    }
    if (lVar6 == 0) goto LAB_1046c1dbc;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar6);
  }
  lVar6 = unaff_x20[0xf];
  if (lVar6 != 1) {
    uVar7 = unaff_x20[9];
    uVar3 = unaff_x20[10];
    lVar1 = unaff_x20[0xb];
    uVar4 = unaff_x20[0xc];
    lVar2 = unaff_x20[0xd];
    uVar5 = unaff_x20[0xe];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar1 == 1) {
LAB_1046c1e84:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar7);
      if (lVar1 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar1);
      }
      if (lVar2 == 0) goto LAB_1046c1e84;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    }
    if (lVar6 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar6);
      goto LAB_1046c1ea8;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1046c1ea8:
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x10) & 1);
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x81) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[0x11]);
  lVar6 = unaff_x20[0x13];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = unaff_x20[0x12];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,lVar6);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0x14) & 1);
  return;
}



/* Entry: 1046c1f60; end: 1046c1f97;  */

void FUN_1046c1f60(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1046c1d1c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c1f98; end: 1046c2027;  */

uint FUN_1046c1f98(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
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
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_e0 = *(undefined1 *)(param_1 + 0x14);
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_30 = *(undefined1 *)(param_2 + 0x14);
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  FUN_1046c2028(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1046c2028; end: 1046c2433;  */

byte FUN_1046c2028(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_2b8 [56];
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) != 0)) {
    uVar10 = param_1[3];
    uVar6 = param_1[2];
    uVar16 = param_1[5];
    uVar14 = param_1[4];
    uVar11 = param_1[7];
    uVar7 = param_1[6];
    uVar1 = param_1[8];
    uVar12 = param_2[3];
    uVar8 = param_2[2];
    uVar17 = param_2[5];
    uVar15 = param_2[4];
    uVar13 = param_2[7];
    uVar9 = param_2[6];
    uVar5 = param_2[8];
    uStack_190 = uVar8;
    uStack_188 = uVar12;
    uStack_180 = uVar15;
    uStack_178 = uVar17;
    uStack_170 = uVar9;
    uStack_168 = uVar13;
    uStack_160 = uVar5;
    uStack_150 = uVar6;
    uStack_148 = uVar10;
    uStack_140 = uVar14;
    uStack_138 = uVar16;
    uStack_130 = uVar7;
    uStack_128 = uVar11;
    uStack_120 = uVar1;
    if (uVar1 == 1) {
      if (uVar5 == 1) {
        FUN_1046c1ccc(&uStack_150,&uStack_280);
        FUN_1046c1ccc(&uStack_190,&uStack_280);
        func_0x0001015543ac(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,1);
LAB_1046c21f8:
        uVar10 = param_1[10];
        uVar6 = param_1[9];
        uVar16 = param_1[0xc];
        uVar14 = param_1[0xb];
        uVar11 = param_1[0xe];
        uVar7 = param_1[0xd];
        uVar1 = param_1[0xf];
        uVar12 = param_2[10];
        uVar8 = param_2[9];
        uVar17 = param_2[0xc];
        uVar15 = param_2[0xb];
        uVar13 = param_2[0xe];
        uVar9 = param_2[0xd];
        uVar5 = param_2[0xf];
        uStack_210 = uVar8;
        uStack_208 = uVar12;
        uStack_200 = uVar15;
        uStack_1f8 = uVar17;
        uStack_1f0 = uVar9;
        uStack_1e8 = uVar13;
        uStack_1e0 = uVar5;
        uStack_1d0 = uVar6;
        uStack_1c8 = uVar10;
        uStack_1c0 = uVar14;
        uStack_1b8 = uVar16;
        uStack_1b0 = uVar7;
        uStack_1a8 = uVar11;
        uStack_1a0 = uVar1;
        if (uVar1 == 1) {
          if (uVar5 != 1) {
LAB_1046c22b4:
            uStack_280 = uVar6;
            uStack_278 = uVar10;
            uStack_270 = uVar14;
            uStack_268 = uVar16;
            uStack_260 = uVar7;
            uStack_258 = uVar11;
            uStack_250 = uVar1;
            uStack_248 = uVar8;
            uStack_240 = uVar12;
            uStack_238 = uVar15;
            uStack_230 = uVar17;
            uStack_228 = uVar9;
            uStack_220 = uVar13;
            uStack_218 = uVar5;
            FUN_1046c1ccc(&uStack_1d0,&uStack_118);
            puVar2 = &uStack_210;
            puVar3 = &uStack_118;
            goto LAB_1046c22e4;
          }
          FUN_1046c1ccc(&uStack_1d0,&uStack_280);
          FUN_1046c1ccc(&uStack_210,&uStack_280);
          func_0x0001015543ac(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,1);
        }
        else {
          if (uVar5 == 1) goto LAB_1046c22b4;
          uStack_280 = uVar8;
          uStack_278 = uVar12;
          uStack_270 = uVar15;
          uStack_268 = uVar17;
          uStack_260 = uVar9;
          uStack_258 = uVar13;
          uStack_250 = uVar5;
          uStack_118 = uVar6;
          uStack_110 = uVar10;
          uStack_108 = uVar14;
          uStack_100 = uVar16;
          uStack_f8 = uVar7;
          uStack_f0 = uVar11;
          uStack_e8 = uVar1;
          FUN_1046c1ccc(&uStack_1d0,auStack_2b8);
          FUN_1046c1ccc(&uStack_210,auStack_2b8);
          puVar2 = &uStack_118;
          FUN_104741990(puVar2,&uStack_280);
          func_0x0001015543ac(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
          func_0x0001015543ac(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar1);
          if (((ulong)puVar2 & 1) == 0) goto LAB_1046c22f0;
        }
        if ((((((byte)param_1[0x10] ^ (byte)param_2[0x10]) & 1) == 0) &&
            (((*(byte *)((long)param_1 + 0x81) ^ *(byte *)((long)param_2 + 0x81)) & 1) == 0)) &&
           ((int)param_1[0x11] == (int)param_2[0x11])) {
          uVar1 = param_2[0x13];
          if (param_1[0x13] == 0) {
            if (uVar1 == 0) goto LAB_1046c2420;
          }
          else if ((uVar1 != 0) &&
                  (((uVar5 = param_1[0x12], uVar5 == param_2[0x12] && (param_1[0x13] == uVar1)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar5 & 1) != 0)))) {
LAB_1046c2420:
            bVar4 = (byte)param_1[0x14] ^ (byte)param_2[0x14] ^ 1;
            goto LAB_1046c22f4;
          }
        }
      }
      else {
LAB_1046c212c:
        uStack_280 = uVar6;
        uStack_278 = uVar10;
        uStack_270 = uVar14;
        uStack_268 = uVar16;
        uStack_260 = uVar7;
        uStack_258 = uVar11;
        uStack_250 = uVar1;
        uStack_248 = uVar8;
        uStack_240 = uVar12;
        uStack_238 = uVar15;
        uStack_230 = uVar17;
        uStack_228 = uVar9;
        uStack_220 = uVar13;
        uStack_218 = uVar5;
        FUN_1046c1ccc(&uStack_150,&uStack_a8);
        puVar2 = &uStack_190;
        puVar3 = &uStack_a8;
LAB_1046c22e4:
        FUN_1046c1ccc(puVar2,puVar3);
        FUN_1046c2d24(&uStack_280);
      }
    }
    else {
      if (uVar5 == 1) goto LAB_1046c212c;
      uStack_e0 = uVar6;
      uStack_d8 = uVar10;
      uStack_d0 = uVar14;
      uStack_c8 = uVar16;
      uStack_c0 = uVar7;
      uStack_b8 = uVar11;
      uStack_b0 = uVar1;
      uStack_a8 = uVar8;
      uStack_a0 = uVar12;
      uStack_98 = uVar15;
      uStack_90 = uVar17;
      uStack_88 = uVar9;
      uStack_80 = uVar13;
      uStack_78 = uVar5;
      FUN_1046c1ccc(&uStack_150,&uStack_280);
      FUN_1046c1ccc(&uStack_190,&uStack_280);
      puVar2 = &uStack_e0;
      FUN_104741990(puVar2,&uStack_a8);
      func_0x0001015543ac(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
      func_0x0001015543ac(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar1);
      if (((ulong)puVar2 & 1) != 0) goto LAB_1046c21f8;
    }
  }
LAB_1046c22f0:
  bVar4 = 0;
LAB_1046c22f4:
  return bVar4 & 1;
}



/* Entry: 1046c2434; end: 1046c2437;  */

void FUN_1046c2434(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ed58;
  _swift_getWitnessTable(&UNK_10dd2ed58,&UNK_11079b310);
  puRam000000011308d8c0 = puVar1;
  return;
}



/* Entry: 1046c2438; end: 1046c2477;  */

void FUN_1046c2438(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ed58;
  _swift_getWitnessTable(&UNK_10dd2ed58,&UNK_11079b310);
  puRam000000011308d8c0 = puVar1;
  return;
}



/* Entry: 1046c2478; end: 1046c2523;  */

long FUN_1046c2478(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046c2524; end: 1046c2c5f;  */

undefined8 * FUN_1046c2524(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  lVar2 = param_2[8];
  _swift_bridgeObjectRetain();
  if (lVar2 == 1) {
    uVar3 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    uVar3 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[8] = param_2[8];
  }
  else {
    lVar1 = param_2[4];
    if (lVar1 == 1) {
      uVar3 = param_2[2];
      uVar5 = param_2[5];
      uVar4 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = uVar3;
      param_1[5] = uVar5;
      param_1[4] = uVar4;
      param_1[6] = param_2[6];
    }
    else {
      uVar3 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar3;
      uVar3 = param_2[5];
      uVar4 = param_2[6];
      param_1[4] = lVar1;
      param_1[5] = uVar3;
      param_1[6] = uVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
    }
    param_1[7] = param_2[7];
    param_1[8] = lVar2;
    _swift_bridgeObjectRetain(lVar2);
  }
  lVar2 = param_2[0xf];
  if (lVar2 == 1) {
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    param_1[0xf] = param_2[0xf];
  }
  else {
    lVar1 = param_2[0xb];
    if (lVar1 == 1) {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
      param_1[0xd] = param_2[0xd];
    }
    else {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      uVar3 = param_2[0xc];
      uVar4 = param_2[0xd];
      param_1[0xb] = lVar1;
      param_1[0xc] = uVar3;
      param_1[0xd] = uVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
    }
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar2;
    _swift_bridgeObjectRetain(lVar2);
  }
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  uVar3 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar3;
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1046c2c60; end: 1046c2d23;  */

int FUN_1046c2c60(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xa1) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046c2d24; end: 1046c2dcb;  */

undefined8 FUN_1046c2d24(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x11308d8c8;
  func_0x0001000285a8(0x11308d8c8,&UNK_10dd2ed98);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1046c2dcc; end: 1046c2f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1046c2dcc(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  long alStack_78 [3];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_11308ee98);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11308ee90);
  alStack_78[2] = *(undefined8 *)(unaff_x20 + _DAT_11308ee88);
  alStack_78[0] = lVar7;
  alStack_78[1] = uVar8;
  _objc_retain();
  _objc_retain(lVar7);
  _objc_retain(uVar8);
  uVar9 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar9;
    if (uVar9 < 4) {
      uVar1 = 3;
    }
    do {
      if (uVar9 == 3) {
        uVar8 = 0x11308d8d0;
        func_0x0001000285a8(0x11308d8d0,&UNK_10dd2eda0);
        _swift_arrayDestroy(alStack_78,3,uVar8);
        return puVar5;
      }
      if (uVar1 == uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c2fa0);
        (*pcVar2)();
      }
      lVar7 = alStack_78[uVar9];
      uVar9 = uVar9 + 1;
    } while (lVar7 == 0);
    _objc_retain();
    puVar4 = puVar5;
    _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
    if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
       (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar3 = puVar5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg(puVar3);
      }
      puVar4 = (undefined *)0x0;
      FUN_1046c5290(0,puVar3 + 1,1,puVar5,FUN_1047b68dc,0x11308d9e8,&UNK_10dd2ef08,FUN_1046c5470);
    }
    uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar6 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1046c5290(puVar5,uVar1 + 1,1,puVar4,FUN_1047b68dc,0x11308d9e8,&UNK_10dd2ef08,FUN_1046c5470
                   );
      uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
    *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar7;
  } while( true );
}



/* Entry: 1046c2fa0; end: 1046c2fb3; -[SCAdBrandSafetyPods allPods] */

void FUN_1046c2fa0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046c2dcc();
  _objc_release(param_1);
  uVar2 = 0;
  FUN_1047b68dc(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1046c2fb4; end: 1046c338f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1046c2fb4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined1 auStack_78 [24];
  undefined *puVar6;
  
  FUN_1046c2dcc();
  if (param_1 >> 0x3e == 0) {
    uVar14 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar14 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar17;
  if (uVar14 != 0) {
    uVar13 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c3320);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + 0x20 + uVar13 * 8);
        _objc_retain();
        lVar1 = _DAT_11308f098;
      }
      else {
        uVar4 = uVar13;
        FUN_1046c4874(uVar13,param_1,FUN_1047b68dc,0x6a624f646f506441,0xe900000000000063);
        lVar1 = _DAT_11308f098;
      }
      _DAT_11308f098 = lVar1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c331c);
        (*pcVar2)();
      }
      uVar13 = uVar13 + 1;
      _swift_beginAccess(uVar4 + lVar1,auStack_78,0,0);
      uVar16 = *(ulong *)(uVar4 + lVar1);
      _swift_bridgeObjectRetain(uVar16);
      _objc_release(uVar4);
      if (uVar16 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar16 & 0xffffffffffffff8;
        if ((uVar16 & 0x8000000000000000) != 0) {
          uVar4 = uVar16;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      uVar19 = (ulong)puVar17 >> 0x3e;
      if (uVar19 == 0) {
        puVar5 = *(undefined **)((undefined *)((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
        if (((ulong)puVar17 & 0x8000000000000000) != 0) {
          puVar5 = puVar17;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (SCARRY8((long)puVar5,uVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c3324);
        (*pcVar2)();
      }
      puVar5 = puVar5 + uVar4;
      puVar6 = puVar17;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      uVar3 = 0;
      if (uVar19 == 0) {
        uVar3 = (uint)puVar6;
      }
      puVar6 = (undefined *)(ulong)uVar3;
      if ((uVar3 != 1) ||
         (uVar18 = (ulong)puVar17 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar18 + 0x18) >> 1) < (long)puVar5)) {
        if (uVar19 == 0) {
          puVar11 = *(undefined **)((undefined *)((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
          if (((ulong)puVar17 & 0x8000000000000000) != 0) {
            puVar11 = puVar17;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if ((long)puVar11 <= (long)puVar5) {
          puVar11 = puVar5;
        }
        FUN_1046c5290(puVar6,puVar11,1,puVar17,FUN_1047c0984,0x112f0d800,&UNK_10db405f0,0x1046c5568)
        ;
        uVar18 = (ulong)puVar6 & 0xffffffffffffff8;
        puVar17 = puVar6;
      }
      lVar1 = *(long *)(uVar18 + 0x10);
      uVar19 = (*(ulong *)(uVar18 + 0x18) >> 1) - lVar1;
      if (uVar16 >> 0x3e == 0) {
        uVar21 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
        if (uVar21 == 0) goto LAB_1046c3024;
        if (uVar19 < uVar21) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c3334);
          (*pcVar2)();
        }
        uVar7 = 0;
        FUN_1047c0984(0);
        _swift_arrayInitWithCopy
                  (uVar18 + lVar1 * 8 + 0x20,(uVar16 & 0xffffffffffffff8) + 0x20,uVar21,uVar7);
LAB_1046c3264:
        _swift_bridgeObjectRelease(uVar16);
        if ((long)uVar21 < (long)uVar4) goto LAB_1046c3324;
        if (0 < (long)uVar21) {
          if (SCARRY8(*(long *)(uVar18 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c332c);
            (*pcVar2)();
          }
          *(ulong *)(uVar18 + 0x10) = *(long *)(uVar18 + 0x10) + uVar21;
        }
      }
      else {
        uVar21 = uVar16 & 0xffffffffffffff8;
        if ((uVar16 & 0x8000000000000000) != 0) {
          uVar21 = uVar16;
        }
        uVar8 = uVar21;
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (uVar8 != 0) {
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          if ((long)uVar19 < (long)uVar21) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c3330);
            (*pcVar2)();
          }
          if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c3338);
            (*pcVar2)();
          }
          lVar1 = uVar18 + lVar1 * 8;
          puVar15 = (undefined8 *)(lVar1 + 0x20);
          if ((uVar16 & 0xc000000000000001) == 0) {
            uVar7 = *(undefined8 *)(uVar16 + 0x20);
            *puVar15 = uVar7;
            lVar12 = uVar8 - 1;
            if (lVar12 != 0) {
              uVar10 = uVar7;
              puVar15 = (undefined8 *)(lVar1 + 0x28);
              puVar20 = (undefined8 *)(uVar16 + 0x28);
              do {
                uVar7 = *puVar20;
                *puVar15 = uVar7;
                _objc_retain(uVar10);
                lVar12 = lVar12 + -1;
                uVar10 = uVar7;
                puVar15 = puVar15 + 1;
                puVar20 = puVar20 + 1;
              } while (lVar12 != 0);
            }
            _objc_retain(uVar7);
          }
          else {
            uVar19 = 0;
            do {
              uVar9 = uVar19;
              FUN_1046c4874(uVar19,uVar16,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
              puVar15[uVar19] = uVar9;
              uVar19 = uVar19 + 1;
            } while (uVar8 != uVar19);
          }
          goto LAB_1046c3264;
        }
LAB_1046c3024:
        _swift_bridgeObjectRelease(uVar16);
        if (0 < (long)uVar4) {
LAB_1046c3324:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c3328);
          (*pcVar2)();
        }
      }
    } while (uVar13 != uVar14);
  }
  _swift_bridgeObjectRelease(param_1);
  return puVar17;
}



/* Entry: 1046c3390; end: 1046c33a3; -[SCAdBrandSafetyPods allAdResponses] */

void FUN_1046c3390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046c2fb4();
  _objc_release(param_1);
  uVar2 = 0;
  FUN_1047c0984(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1046c33a4; end: 1046c35f7;  */

/* WARNING: Removing unreachable block (ram,0x0001046c35ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1046c33a4(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  undefined *apuStack_98 [5];
  long alStack_70 [2];
  
  lVar10 = *(long *)(unaff_x20 + _DAT_11308ee90);
  alStack_70[1] = *(undefined8 *)(unaff_x20 + _DAT_11308ee88);
  alStack_70[0] = lVar10;
  _objc_retain();
  _objc_retain(lVar10);
  lVar10 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lVar10 != 2) {
    lVar3 = alStack_70[lVar10];
    lVar10 = lVar10 + 1;
    if (lVar3 != 0) {
      _objc_retain();
      puVar5 = puVar6;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
         (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar4 = puVar6;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar4);
        }
        puVar5 = (undefined *)0x0;
        FUN_1046c5290(0,puVar4 + 1,1,puVar6,FUN_1047b68dc,0x11308d9e8,&UNK_10dd2ef08,FUN_1046c5470);
      }
      uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar9 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_1046c5290(puVar6,uVar1 + 1,1,puVar5,FUN_1047b68dc,0x11308d9e8,&UNK_10dd2ef08,
                      FUN_1046c5470);
        uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
      *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar3;
    }
  }
  uVar7 = 0x11308d8d0;
  func_0x0001000285a8(0x11308d8d0,&UNK_10dd2eda0);
  _swift_arrayDestroy(alStack_70,2,uVar7);
  if ((ulong)puVar6 >> 0x3e == 0) {
    _swift_bridgeObjectRetain(puVar6);
    apuStack_98[0] = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
  }
  else {
    puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar5 = puVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) {
      _swift_bridgeObjectRetain(puVar6);
      puVar4 = puVar5;
      FUN_1046c53e4(puVar5,0,FUN_1047b68dc,0x11308d9e8,&UNK_10dd2ef08);
      puVar8 = puVar6;
      FUN_1046c85cc(puVar4 + 0x20,puVar5);
      _swift_bridgeObjectRelease();
      apuStack_98[0] = puVar4;
      if (puVar8 != puVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c35e0);
        (*pcVar2)();
      }
    }
  }
  FUN_1046c5708(apuStack_98);
  _swift_bridgeObjectRelease(puVar6);
  return apuStack_98[0];
}



/* Entry: 1046c35f8; end: 1046c360b; -[SCAdBrandSafetyPods standardAndFullPodsByResolvedTime] */

void FUN_1046c35f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046c33a4();
  _objc_release(param_1);
  uVar2 = 0;
  FUN_1047b68dc(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1046c360c; end: 1046c366f;  */

void FUN_1046c360c(undefined8 param_1,undefined8 param_2,code *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  (*param_3)();
  _objc_release(param_1);
  uVar2 = 0;
  (*param_4)(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1046c3670; end: 1046c381f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1046c3670(long *param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  lVar5 = *param_2;
  uVar4 = *(ulong *)(*param_1 + _DAT_11308f098);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar2 == 0) {
    dVar6 = 1.79769313486232e+308;
  }
  else if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c381c);
      (*pcVar1)();
    }
    dVar6 = *(double *)(*(long *)(uVar4 + 0x20) + _DAT_11308f108);
  }
  else {
    lVar3 = 0;
    FUN_1046c4874(0,uVar4,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
    dVar6 = *(double *)(lVar3 + _DAT_11308f108);
    _swift_unknownObjectRelease();
  }
  uVar4 = *(ulong *)(lVar5 + _DAT_11308f098);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar2 == 0) {
    dVar7 = 1.79769313486232e+308;
  }
  else if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c3820);
      (*pcVar1)();
    }
    dVar7 = *(double *)(*(long *)(uVar4 + 0x20) + _DAT_11308f108);
  }
  else {
    lVar5 = 0;
    FUN_1046c4874(0,uVar4,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
    dVar7 = *(double *)(lVar5 + _DAT_11308f108);
    _swift_unknownObjectRelease();
  }
  return dVar6 <= dVar7;
}



/* Entry: 1046c3820; end: 1046c38b7; -[SCAdBrandSafetyPods allPodsByResolvedTime] */

/* WARNING: Removing unreachable block (ram,0x0001046c38ac) */

void FUN_1046c3820(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046c2dcc();
  uVar2 = uVar1;
  _swift_bridgeObjectRetain();
  FUN_1046c5660();
  uStack_38 = uVar2;
  FUN_1046c5708(&uStack_38);
  _swift_bridgeObjectRelease(uVar1);
  _objc_release(param_1);
  uVar1 = uStack_38;
  uVar3 = 0;
  FUN_1047b68dc(0);
  uVar2 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar3);
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046c38b8; end: 1046c3903; -[SCAdBrandSafetyPods hasAllEmptyPods] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1046c38b8(long param_1)

{
  if ((*(long *)(param_1 + _DAT_11308ee88) == 0) && (*(long *)(param_1 + _DAT_11308ee90) == 0)) {
    return *(long *)(param_1 + _DAT_11308ee98) == 0;
  }
  return false;
}



/* Entry: 1046c3904; end: 1046c3a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1046c3904(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  
  lVar5 = _DAT_11308ee98;
  lVar4 = _DAT_11308ee90;
  lVar3 = _DAT_11308ee88;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0;
LAB_1046c3960:
  uVar10 = uVar8;
  if (uVar8 < 5) {
    uVar8 = 4;
  }
  do {
    if (uVar8 == uVar10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1046c3a88);
      (*pcVar6)();
    }
    uVar12 = *(undefined8 *)(uVar10 * 8 + 0x11308d900);
    iVar11 = (int)uVar12;
    if (iVar11 == 3) {
      lVar9 = *(long *)(unaff_x20 + lVar5);
joined_r0x0001046c39bc:
      if (lVar9 == 0) break;
    }
    else {
      if (iVar11 == 2) {
        lVar9 = *(long *)(unaff_x20 + lVar4);
        goto joined_r0x0001046c39bc;
      }
      if (iVar11 == 1) {
        lVar9 = *(long *)(unaff_x20 + lVar3);
        goto joined_r0x0001046c39bc;
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 4) goto LAB_1046c3a4c;
  } while( true );
  puVar7 = puVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_1046c7060(0,*(long *)(puVar2 + 0x10) + 1,1);
  }
  uVar1 = *(ulong *)(puVar2 + 0x10);
  if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
    FUN_1046c7060(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
  }
  uVar8 = uVar10 + 1;
  *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puVar2 + uVar1 * 8 + 0x20) = uVar12;
  if (uVar10 == 3) {
LAB_1046c3a4c:
    puVar7 = puVar2;
    FUN_1046c8788(puVar2);
    _swift_release(puVar2);
    return puVar7;
  }
  goto LAB_1046c3960;
}



/* Entry: 1046c3a88; end: 1046c3c97;  */

undefined * FUN_1046c3a88(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    func_0x000100dd4260(0,lVar5,0);
    uVar1 = param_1 + 0x38;
    uVar9 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar13 = 0;
    do {
      if (uVar9 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c3c88);
        (*pcVar4)();
      }
      uVar14 = uVar9 >> 6;
      uVar11 = 1L << (uVar9 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar14 * 8) & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c3c8c);
        (*pcVar4)();
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 8);
      iVar2 = *(int *)(param_1 + 0x24);
      uVar10 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
        func_0x000100dd4260(1 < *(ulong *)(puVar3 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar3 + uVar10 * 8 + 0x20) = uVar8;
      uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar10 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c3c90);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(uVar1 + uVar14 * 8);
      if ((uVar6 & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c3c94);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c3c98);
        (*pcVar4)();
      }
      uVar6 = uVar6 & -2L << (uVar9 & 0x3f);
      if (uVar6 == 0) {
        lVar12 = uVar14 << 6;
        puVar7 = (ulong *)(param_1 + 0x40 + uVar14 * 8);
        do {
          uVar14 = uVar14 + 1;
          if (uVar10 + 0x3f >> 6 <= uVar14) {
            func_0x0001046c8da0();
            uVar9 = uVar10;
            goto LAB_1046c3b24;
          }
          uVar9 = *puVar7;
          lVar12 = lVar12 + 0x40;
          puVar7 = puVar7 + 1;
        } while (uVar9 == 0);
        func_0x0001046c8da0();
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + lVar12;
      }
      else {
        uVar14 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
LAB_1046c3b24:
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar5);
  }
  return puVar3;
}



/* Entry: 1046c3c98; end: 1046c3d27; -[SCAdBrandSafetyPods missingTypes] */

void FUN_1046c3c98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046c3904();
  uVar2 = uVar1;
  FUN_1046c3a88();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar2;
  func_0x000101164de8(uVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = uVar1;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
            (uVar1,PTR___sSiN_11034deb0,PTR___sSiSHsWP_11034dec0);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046c3d28; end: 1046c418b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1046c3d28(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined1 *unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  undefined1 auStack_70 [16];
  
  puVar5 = unaff_x20;
  _swift_getObjectType();
  if (param_1 == 0) goto LAB_1046c4160;
  if (param_2 == 0) {
    _objc_retain(param_1);
    goto LAB_1046c3e5c;
  }
  uVar12 = *(ulong *)(param_1 + _DAT_11308f098);
  if (uVar12 >> 0x3e == 0) {
    if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1046c3d8c;
LAB_1046c3de0:
    _objc_retain(param_1);
    iVar14 = 0;
  }
  else {
    uVar6 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar6 = uVar12;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar6 == 0) goto LAB_1046c3de0;
LAB_1046c3d8c:
    if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c4188);
        (*pcVar4)();
      }
      iVar14 = (int)*(undefined8 *)(*(long *)(uVar12 + 0x20) + _DAT_1138152c0);
      _objc_retain(param_1);
    }
    else {
      _objc_retain(param_1);
      lVar10 = 0;
      FUN_1046c4874(0,uVar12,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
      iVar14 = (int)*(undefined8 *)(lVar10 + _DAT_1138152c0);
      _swift_unknownObjectRelease();
    }
  }
  uVar12 = *(ulong *)(param_2 + _DAT_11308f098);
  if (uVar12 >> 0x3e == 0) {
    if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1046c3e08;
LAB_1046c3e50:
    if (iVar14 == 0) goto LAB_1046c3e5c;
  }
  else {
    uVar6 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar6 = uVar12;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar6 == 0) goto LAB_1046c3e50;
LAB_1046c3e08:
    if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c418c);
        (*pcVar4)();
      }
      iVar11 = (int)*(undefined8 *)(*(long *)(uVar12 + 0x20) + _DAT_1138152c0);
    }
    else {
      lVar10 = 0;
      FUN_1046c4874(0,uVar12,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
      uVar13 = *(undefined8 *)(lVar10 + _DAT_1138152c0);
      _swift_unknownObjectRelease();
      iVar11 = (int)uVar13;
    }
    if (iVar14 == iVar11) {
LAB_1046c3e5c:
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11308ee80);
      uVar2 = *(undefined8 *)((long)(unaff_x20 + _DAT_11308ee80) + 8);
      uVar12 = *(ulong *)(unaff_x20 + _DAT_11308ee88);
      if (uVar12 == 0) {
        _objc_retain(param_1);
        _swift_bridgeObjectRetain(uVar2);
        uVar6 = uVar12;
      }
      else {
        FUN_1047b68dc(0);
        _objc_retain(param_1);
        _swift_bridgeObjectRetain(uVar2);
        uVar6 = uVar12;
        _objc_retain();
        uVar7 = uVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar6);
        uVar6 = param_2;
        if ((uVar7 & 1) == 0) {
          uVar6 = uVar12;
        }
      }
      uVar12 = *(ulong *)(unaff_x20 + _DAT_11308ee90);
      if (uVar12 == 0) {
        _objc_retain(uVar6);
        uVar7 = uVar12;
      }
      else {
        FUN_1047b68dc(0);
        _objc_retain(uVar6);
        uVar7 = uVar12;
        _objc_retain();
        lVar10 = param_1;
        _objc_retain(param_1);
        uVar15 = uVar7;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar7,lVar10);
        _objc_release(uVar7);
        _objc_release(lVar10);
        uVar7 = param_2;
        if ((uVar15 & 1) == 0) {
          uVar7 = uVar12;
        }
      }
      uVar15 = *(ulong *)(unaff_x20 + _DAT_11308ee98);
      uVar12 = uVar7;
      if (uVar15 == 0) {
        _objc_retain(uVar7);
        _objc_release(param_1);
        param_2 = 0;
      }
      else {
        FUN_1047b68dc(0);
        _objc_retain(uVar7);
        uVar8 = uVar15;
        _objc_retain();
        uVar9 = uVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar8);
        _objc_release(param_1);
        if ((uVar9 & 1) == 0) {
          param_2 = uVar15;
        }
      }
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(puVar5 + _DAT_11308ee80);
      *puVar1 = uVar13;
      puVar1[1] = uVar2;
      *(ulong *)(puVar5 + _DAT_11308ee88) = uVar6;
      *(ulong *)(puVar5 + _DAT_11308ee90) = uVar7;
      *(ulong *)(puVar5 + _DAT_11308ee98) = param_2;
      puVar3 = PTR_s_init_1125d9248;
      _objc_retain(param_2);
      _objc_retain(uVar6);
      _objc_retain(uVar12);
      _objc_retain(param_2);
      puVar5 = auStack_70;
      _objc_msgSendSuper2(puVar5,puVar3);
      _objc_release(uVar6);
      _objc_release(uVar12);
      _objc_release(param_2);
      _objc_release(param_1);
      return puVar5;
    }
  }
  _objc_release(param_1);
LAB_1046c4160:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return unaff_x20;
}



/* Entry: 1046c418c; end: 1046c4213; -[SCAdBrandSafetyPods replaceOfAdPod:with:] */

void FUN_1046c418c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_1046c3d28(param_3,param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046c4214; end: 1046c436b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046c4214(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [16];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ee80);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308ee80))[1];
  lVar6 = *(long *)(param_1 + _DAT_11308ee88);
  lVar8 = lVar6;
  if (lVar6 == 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_11308ee88);
    _objc_retain(lVar8);
  }
  lVar7 = *(long *)(param_1 + _DAT_11308ee90);
  lVar10 = lVar7;
  if (lVar7 == 0) {
    lVar10 = *(long *)(unaff_x20 + _DAT_11308ee90);
    _objc_retain(lVar10);
  }
  lVar9 = *(long *)(param_1 + _DAT_11308ee98);
  lVar11 = lVar9;
  if (lVar9 == 0) {
    lVar11 = *(long *)(unaff_x20 + _DAT_11308ee98);
    _objc_retain(lVar11);
  }
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308ee80);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(long *)(lVar5 + _DAT_11308ee88) = lVar8;
  *(long *)(lVar5 + _DAT_11308ee90) = lVar10;
  *(long *)(lVar5 + _DAT_11308ee98) = lVar11;
  puVar4 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(lVar6);
  _objc_retain(lVar7);
  _objc_retain(lVar9);
  _objc_msgSendSuper2(auStack_70,puVar4);
  return;
}



/* Entry: 1046c436c; end: 1046c4677; -[SCAdBrandSafetyPods mergeWithAdPods:] */

void FUN_1046c436c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1046c4214(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046c4678; end: 1046c4847; -[SCAdBrandSafetyPods isBackupCache] */

uint FUN_1046c4678(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001046c43c8();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1046c4848; end: 1046c4873;  */

ulong FUN_1046c4848(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c495c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c4960);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1047af8c4(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    FUN_1047af8c4(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x74616d696e416441,0xef636a624f6e6f69);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c4a18);
  (*pcVar2)();
}



/* Entry: 1046c4874; end: 1046c4a17;  */

ulong FUN_1046c4874(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c495c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c4960);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    (*param_3)(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    (*param_3)(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(param_4,param_5);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c4a18);
  (*pcVar2)();
}



/* Entry: 1046c4a18; end: 1046c5223;  */

ulong FUN_1046c4a18(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c4ae8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c4aec);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1047fc144(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_1047fc144(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000010,0x800000010f20cef0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c4bb4);
  (*pcVar2)();
}



/* Entry: 1046c5224; end: 1046c528f;  */

void FUN_1046c5224(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1046c5290; end: 1046c53e3;  */

ulong FUN_1046c5290(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c53e4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1046c53e4(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c53e0);
      (*pcVar1)();
    }
    (*param_8)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 1046c53e4; end: 1046c546f;  */

undefined *
FUN_1046c53e4(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1046c5224(param_3,param_4,param_5);
    _swift_allocObject();
    puVar1 = param_3;
    _malloc_size();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1046c5470; end: 1046c565f;  */

long FUN_1046c5470(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1046c5564);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1046c5568);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1047b68dc(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1047b68dc(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1046c5560);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1046c5660; end: 1046c5707;  */

undefined * FUN_1046c5660(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar3 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  }
  else {
    puVar2 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar2 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (puVar2 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(param_1);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar3 = puVar2;
      FUN_1046c53e4();
      FUN_1046c85cc(puVar3 + 0x20,puVar2);
      _swift_bridgeObjectRelease();
      if (param_1 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c56f4);
        (*pcVar1)();
      }
    }
  }
  return puVar3;
}



/* Entry: 1046c5708; end: 1046c5807;  */

void FUN_1046c5708(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar1 & 1) == 0) {
    FUN_1046c874c();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_1047b68dc(0);
      puVar3 = puVar6;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_1046c5808(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _swift_release(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1046c5fe8(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1046c5808; end: 1046c5fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046c5808(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long unaff_x21;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = param_3[1];
  if (0 < lVar13) {
    lVar11 = 0;
    do {
      lVar19 = lVar11 + 1;
      if (lVar19 < lVar13) {
        lVar15 = *param_3;
        uVar3 = *(undefined8 *)(lVar15 + lVar19 * 8);
        uVar17 = *(undefined8 *)(lVar15 + lVar11 * 8);
        uStack_80 = uVar17;
        uStack_78 = uVar3;
        _objc_retain();
        _objc_retain(uVar17);
        puVar4 = &uStack_78;
        FUN_1046c3670(puVar4,&uStack_80);
        _objc_release(uVar3);
        _objc_release(uVar17);
        if (unaff_x21 != 0) goto LAB_1046c5f6c;
        plVar20 = (long *)(lVar15 + lVar11 * 8 + 0x10);
        lVar15 = lVar11 + 2;
        do {
          lVar10 = lVar15;
          lVar19 = lVar13;
          if (lVar13 == lVar10) break;
          lVar19 = plVar20[-1];
          lVar15 = *plVar20;
          uVar18 = *(ulong *)(lVar15 + _DAT_11308f098);
          if (uVar18 >> 0x3e == 0) {
            if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1046c5940;
LAB_1046c5990:
            _objc_retain(lVar15);
            _objc_retain(lVar19);
            dVar23 = 1.79769313486232e+308;
          }
          else {
            uVar5 = uVar18 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar18) {
              uVar5 = uVar18;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
            if (uVar5 == 0) goto LAB_1046c5990;
LAB_1046c5940:
            if ((uVar18 & 0xc000000000000001) == 0) {
              if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fa4);
                (*pcVar1)();
              }
              dVar23 = *(double *)(*(long *)(uVar18 + 0x20) + _DAT_11308f108);
              _objc_retain(lVar15);
              _objc_retain(lVar19);
            }
            else {
              _objc_retain(lVar15);
              _objc_retain(lVar19);
              lVar16 = 0;
              FUN_1046c4874(0,uVar18,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
              dVar23 = *(double *)(lVar16 + _DAT_11308f108);
              _swift_unknownObjectRelease();
            }
          }
          uVar18 = *(ulong *)(lVar19 + _DAT_11308f098);
          if (uVar18 >> 0x3e == 0) {
            if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1046c59c4;
LAB_1046c58e4:
            _objc_release(lVar15);
            _objc_release(lVar19);
            dVar24 = 1.79769313486232e+308;
          }
          else {
            uVar5 = uVar18 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar18) {
              uVar5 = uVar18;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
            if (uVar5 == 0) goto LAB_1046c58e4;
LAB_1046c59c4:
            if ((uVar18 & 0xc000000000000001) == 0) {
              if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fa8);
                (*pcVar1)();
              }
              dVar24 = *(double *)(*(long *)(uVar18 + 0x20) + _DAT_11308f108);
              _objc_release(lVar15);
              _objc_release(lVar19);
            }
            else {
              lVar16 = 0;
              FUN_1046c4874(0,uVar18,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
              dVar24 = *(double *)(lVar16 + _DAT_11308f108);
              _objc_release(lVar15);
              _objc_release(lVar19);
              _swift_unknownObjectRelease(lVar16);
            }
          }
          plVar20 = plVar20 + 1;
          lVar15 = lVar10 + 1;
          lVar19 = lVar10;
        } while ((((uint)puVar4 ^ (uint)(dVar24 < dVar23)) & 1) != 0);
        if (((ulong)puVar4 & 1) != 0) {
          if (lVar19 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fc4);
            (*pcVar1)();
          }
          if (lVar11 < lVar19) {
            lVar10 = *param_3;
            puVar12 = (undefined8 *)(lVar10 + lVar19 * 8);
            puVar4 = (undefined8 *)(lVar10 + lVar11 * 8);
            lVar15 = lVar19;
            lVar13 = lVar11;
            do {
              puVar12 = puVar12 + -1;
              lVar15 = lVar15 + -1;
              if (lVar13 != lVar15) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fdc);
                  (*pcVar1)();
                }
                uVar3 = *puVar4;
                *puVar4 = *puVar12;
                *puVar12 = uVar3;
              }
              lVar13 = lVar13 + 1;
              puVar4 = puVar4 + 1;
            } while (lVar13 < lVar15);
          }
        }
      }
      lVar13 = param_3[1];
      lVar15 = lVar19;
      if (lVar19 < lVar13) {
        if (SBORROW8(lVar19,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fb8);
          (*pcVar1)();
        }
        if (lVar19 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fbc);
            (*pcVar1)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar13 <= lVar11 + param_4) {
            lVar10 = lVar13;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fc0);
            (*pcVar1)();
          }
          if (lVar19 != lVar10) {
            lVar16 = *param_3;
            plVar20 = (long *)(lVar16 + lVar19 * 8 + -8);
            lVar13 = lVar11 - lVar19;
            do {
              lVar21 = *(long *)(lVar16 + lVar19 * 8);
              plVar14 = plVar20;
              lVar15 = lVar13;
              do {
                lVar22 = *plVar14;
                uVar18 = *(ulong *)(lVar21 + _DAT_11308f098);
                if (uVar18 >> 0x3e == 0) {
                  if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1046c5c00;
LAB_1046c5c50:
                  _objc_retain(lVar21);
                  _objc_retain(lVar22);
                  dVar23 = 1.79769313486232e+308;
                }
                else {
                  uVar5 = uVar18 & 0xffffffffffffff8;
                  if (0x7fffffffffffffff < uVar18) {
                    uVar5 = uVar18;
                  }
                  __ss18_CocoaArrayWrapperV8endIndexSivg();
                  if (uVar5 == 0) goto LAB_1046c5c50;
LAB_1046c5c00:
                  if ((uVar18 & 0xc000000000000001) == 0) {
                    if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5f9c);
                      (*pcVar1)();
                    }
                    dVar23 = *(double *)(*(long *)(uVar18 + 0x20) + _DAT_11308f108);
                    _objc_retain(lVar21);
                    _objc_retain(lVar22);
                  }
                  else {
                    _objc_retain(lVar21);
                    _objc_retain(lVar22);
                    lVar6 = 0;
                    FUN_1046c4874(0,uVar18,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
                    dVar23 = *(double *)(lVar6 + _DAT_11308f108);
                    _swift_unknownObjectRelease();
                  }
                }
                uVar18 = *(ulong *)(lVar22 + _DAT_11308f098);
                if (uVar18 >> 0x3e == 0) {
                  if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1046c5c84;
LAB_1046c5cdc:
                  _objc_release(lVar21);
                  _objc_release(lVar22);
                  if (1.79769313486232e+308 < dVar23) break;
                }
                else {
                  uVar5 = uVar18 & 0xffffffffffffff8;
                  if (0x7fffffffffffffff < uVar18) {
                    uVar5 = uVar18;
                  }
                  __ss18_CocoaArrayWrapperV8endIndexSivg();
                  if (uVar5 == 0) goto LAB_1046c5cdc;
LAB_1046c5c84:
                  if ((uVar18 & 0xc000000000000001) == 0) {
                    if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fa0);
                      (*pcVar1)();
                    }
                    dVar24 = *(double *)(*(long *)(uVar18 + 0x20) + _DAT_11308f108);
                    _objc_release(lVar21);
                    _objc_release(lVar22);
                  }
                  else {
                    lVar6 = 0;
                    FUN_1046c4874(0,uVar18,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
                    dVar24 = *(double *)(lVar6 + _DAT_11308f108);
                    _objc_release(lVar21);
                    _objc_release(lVar22);
                    _swift_unknownObjectRelease(lVar6);
                  }
                  if (dVar24 < dVar23) break;
                }
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fd8);
                  (*pcVar1)();
                }
                lVar22 = *plVar14;
                lVar21 = plVar14[1];
                *plVar14 = lVar21;
                plVar14[1] = lVar22;
                bVar2 = lVar15 != -1;
                lVar15 = lVar15 + 1;
                plVar14 = plVar14 + -1;
              } while (bVar2);
              lVar19 = lVar19 + 1;
              plVar20 = plVar20 + 1;
              lVar13 = lVar13 + -1;
              lVar15 = lVar10;
            } while (lVar19 != lVar10);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar15 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fac);
        (*pcVar1)();
      }
      puVar7 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar18 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar18) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar18 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar18 + 1;
      *(long *)(puVar9 + uVar18 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar18 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fe0);
        (*pcVar1)();
      }
      FUN_1046c6278(&puStack_58,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_1046c5f6c;
      lVar13 = param_3[1];
      lVar11 = lVar15;
    } while (lVar15 < lVar13);
  }
  puVar9 = puStack_58;
  lVar13 = *param_1;
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fe8);
    (*pcVar1)();
  }
  puVar7 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar18 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar18) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fe4);
      (*pcVar1)();
    }
    lVar10 = uVar18 - 1;
    lVar15 = *(long *)(puVar9 + uVar18 * 0x10);
    lVar19 = *(long *)(puVar9 + lVar10 * 0x10 + 0x28);
    FUN_1046c64e0(lVar11 + lVar15 * 8,lVar11 + *(long *)(puVar9 + lVar10 * 0x10 + 0x20) * 8,
                  lVar11 + lVar19 * 8,lVar13);
    if (unaff_x21 != 0) break;
    if (lVar19 < lVar15) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fb0);
      (*pcVar1)();
    }
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c5fb4);
      (*pcVar1)();
    }
    *(long *)(puVar9 + uVar18 * 0x10) = lVar15;
    *(long *)((long)(puVar9 + uVar18 * 0x10) + 8) = lVar19;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar10);
    puVar9 = puStack_58;
    uVar18 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1046c5f6c:
  _swift_bridgeObjectRelease(puStack_58);
  return;
}



/* Entry: 1046c5fe8; end: 1046c6277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046c5fe8(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    plVar6 = (long *)(lVar5 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar9 = *(long *)(lVar5 + param_3 * 8);
      plVar7 = plVar6;
      lVar8 = param_1;
      do {
        lVar10 = *plVar7;
        uVar11 = *(ulong *)(lVar9 + _DAT_11308f098);
        if (uVar11 >> 0x3e == 0) {
          if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1046c60b0;
LAB_1046c60f8:
          _objc_retain(lVar9);
          _objc_retain(lVar10);
          dVar12 = 1.79769313486232e+308;
        }
        else {
          uVar3 = uVar11 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar11) {
            uVar3 = uVar11;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          if (uVar3 == 0) goto LAB_1046c60f8;
LAB_1046c60b0:
          if ((uVar11 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c6270);
              (*pcVar1)();
            }
            dVar12 = *(double *)(*(long *)(uVar11 + 0x20) + _DAT_11308f108);
            _objc_retain(lVar9);
            _objc_retain(lVar10);
          }
          else {
            _objc_retain(lVar9);
            _objc_retain(lVar10);
            lVar4 = 0;
            FUN_1046c4874(0,uVar11,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
            dVar12 = *(double *)(lVar4 + _DAT_11308f108);
            _swift_unknownObjectRelease();
          }
        }
        uVar11 = *(ulong *)(lVar10 + _DAT_11308f098);
        if (uVar11 >> 0x3e == 0) {
          if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1046c612c;
LAB_1046c617c:
          _objc_release(lVar9);
          _objc_release(lVar10);
          if (1.79769313486232e+308 < dVar12) break;
        }
        else {
          uVar3 = uVar11 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar11) {
            uVar3 = uVar11;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          if (uVar3 == 0) goto LAB_1046c617c;
LAB_1046c612c:
          if ((uVar11 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c6274);
              (*pcVar1)();
            }
            dVar13 = *(double *)(*(long *)(uVar11 + 0x20) + _DAT_11308f108);
            _objc_release(lVar9);
            _objc_release(lVar10);
          }
          else {
            lVar4 = 0;
            FUN_1046c4874(0,uVar11,FUN_1047c0984,0x6e6f707365526441,0xee00636a624f6573);
            dVar13 = *(double *)(lVar4 + _DAT_11308f108);
            _objc_release(lVar9);
            _objc_release(lVar10);
            _swift_unknownObjectRelease(lVar4);
          }
          if (dVar13 < dVar12) break;
        }
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c6278);
          (*pcVar1)();
        }
        lVar10 = *plVar7;
        lVar9 = plVar7[1];
        *plVar7 = lVar9;
        plVar7[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar7 = plVar7 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1046c6278; end: 1046c64df;  */

undefined8 FUN_1046c6278(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1046c634c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64c8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1046c63b0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64b8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64c0);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64a0);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64a4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64ac);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64b4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1046c634c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64a8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64b0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64bc);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64c4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1046c63b0;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64cc);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c6494);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c64e0);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1046c64e0(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c6498);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c649c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1046c64e0; end: 1046c689b;  */

undefined8
FUN_1046c64e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar5 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar5 = lVar9;
  }
  lVar5 = lVar5 >> 3;
  lVar14 = (long)param_3 - (long)param_2;
  lVar7 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar7 = lVar14;
  }
  lVar7 = lVar7 >> 3;
  if (lVar5 < lVar7) {
    if (((param_4 < param_1) || (param_1 + lVar5 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar5 << 3);
    }
    puVar11 = param_4 + lVar5;
    puVar4 = param_1;
    if (7 < lVar9) {
      while (param_2 < param_3) {
        uVar1 = *param_2;
        uVar13 = *param_4;
        uStack_68 = uVar13;
        uStack_58 = uVar1;
        _objc_retain();
        _objc_retain(uVar13);
        puVar2 = &uStack_58;
        FUN_1046c3670(puVar2,&uStack_68);
        if (unaff_x21 != 0) {
          _objc_release(uVar1);
          _objc_release(uVar13);
          uVar6 = (long)puVar11 - (long)param_4;
          uVar10 = uVar6 + 7;
          if (-1 < (long)uVar6) {
            uVar10 = uVar6;
          }
          if (((param_4 <= puVar4) &&
              (puVar4 < (undefined8 *)((long)param_4 + (uVar10 & 0xfffffffffffffff8)))) &&
             (puVar4 == param_4)) {
            return 1;
          }
          goto LAB_1046c685c;
        }
        _objc_release(uVar1);
        _objc_release(uVar13);
        if (((ulong)puVar2 & 1) == 0) {
          puVar12 = param_4 + 1;
          puVar8 = param_2;
          puVar2 = param_4;
        }
        else {
          puVar12 = param_4;
          puVar8 = param_2 + 1;
          puVar2 = param_2;
        }
        param_2 = puVar8;
        param_4 = puVar12;
        if (puVar4 != puVar2) {
          *puVar4 = *puVar2;
        }
        puVar4 = puVar4 + 1;
        if (puVar11 <= param_4) break;
      }
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar7 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar7 << 3);
    }
    puVar2 = param_4 + lVar7;
    puVar4 = param_2;
    puVar11 = puVar2;
    if ((param_1 < param_2) && (7 < lVar14)) {
      do {
        puVar8 = puVar4 + -1;
        uVar10 = (long)puVar2 - (long)param_4;
        puVar12 = param_3;
        while( true ) {
          param_3 = puVar12 + -1;
          puVar11 = puVar2 + -1;
          uVar1 = *puVar11;
          uVar13 = *puVar8;
          uStack_68 = uVar13;
          uStack_58 = uVar1;
          _objc_retain();
          _objc_retain(uVar13);
          puVar3 = &uStack_58;
          FUN_1046c3670(puVar3,&uStack_68);
          if (unaff_x21 != 0) {
            _objc_release(uVar1);
            _objc_release(uVar13);
            uVar6 = uVar10 + 7;
            if (-1 < (long)uVar10) {
              uVar6 = uVar10;
            }
            lVar5 = (long)uVar6 >> 3;
            if ((puVar4 < param_4) ||
               ((undefined8 *)((long)param_4 + (uVar6 & 0xfffffffffffffff8)) <= puVar4)) {
              _memmove(puVar4,param_4,lVar5 << 3);
              return 1;
            }
            if (puVar4 == param_4) {
              return 1;
            }
            goto LAB_1046c6860;
          }
          _objc_release(uVar1);
          _objc_release(uVar13);
          if (((ulong)puVar3 & 1) != 0) break;
          if (puVar12 != puVar2) {
            *param_3 = *puVar11;
          }
          uVar10 = uVar10 - 8;
          puVar2 = puVar11;
          puVar12 = param_3;
          if (puVar11 <= param_4) goto LAB_1046c6820;
        }
        if (puVar12 != puVar4) {
          *param_3 = *puVar8;
        }
        puVar4 = puVar8;
        puVar11 = puVar2;
      } while ((param_1 < puVar8) && (param_4 < puVar2));
    }
  }
LAB_1046c6820:
  uVar6 = (long)puVar11 - (long)param_4;
  uVar10 = uVar6 + 7;
  if (-1 < (long)uVar6) {
    uVar10 = uVar6;
  }
  if (((puVar4 < param_4) ||
      ((undefined8 *)((long)param_4 + (uVar10 & 0xfffffffffffffff8)) <= puVar4)) ||
     (puVar4 != param_4)) {
LAB_1046c685c:
    lVar5 = (long)uVar10 >> 3;
LAB_1046c6860:
    _memmove(puVar4,param_4,lVar5 << 3);
  }
  return 1;
}



/* Entry: 1046c689c; end: 1046c698b;  */

undefined8 FUN_1046c689c(ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long alStack_88 [9];
  
  lVar5 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(alStack_88,*(undefined8 *)(lVar5 + 0x28));
  uVar4 = param_2;
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar2 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    do {
      uVar3 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar4 * 8);
      if ((int)uVar3 == (int)param_2) {
        uVar1 = 0;
        goto LAB_1046c6970;
      }
      uVar4 = uVar4 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  alStack_88[0] = *unaff_x20;
  FUN_1046c698c(param_2,uVar4,lVar5);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
  uVar3 = param_2;
LAB_1046c6970:
  *param_1 = uVar3;
  return uVar1;
}



/* Entry: 1046c698c; end: 1046c6abb;  */

void FUN_1046c698c(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1046c6ccc();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1046c6abc(uVar3 + 1);
    }
    else {
      FUN_1046c6e0c();
    }
    lVar4 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(lVar4 + 0x28));
    param_2 = param_1;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((int)*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == (int)param_1) {
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_1107971a8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c6abc);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c6aac);
  (*pcVar1)();
}



/* Entry: 1046c6abc; end: 1046c6ccb;  */

void FUN_1046c6abc(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x11308d9e0;
  func_0x0001000285a8(0x11308d9e0,&UNK_10dd2ef00);
  lVar5 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,0,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1046c6c94:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1046c6cc8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_1046c6c94;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar14 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar14;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1046c6ccc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1046c6ccc; end: 1046c6e0b;  */

void FUN_1046c6ccc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x11308d9e0,&UNK_10dd2ef00);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      _memmove(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c6e0c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1046c6dec;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_1046c6dec:
  _swift_release(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1046c6e0c; end: 1046c705f;  */

void FUN_1046c6e0c(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x11308d9e0;
  func_0x0001000285a8(0x11308d9e0,&UNK_10dd2ef00);
  lVar5 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,1,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1046c702c:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1046c705c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_1046c702c;
        }
        uVar12 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar15 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1046c7060);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 1046c7060; end: 1046c770b;  */

void FUN_1046c7060(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1046c770c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1046c770c; end: 1046c780b;  */

undefined * FUN_1046c770c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c780c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x11304f548;
    func_0x0001000285a8(0x11304f548,&UNK_10dcc8010);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1046c780c; end: 1046c7947;  */

code * FUN_1046c780c(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c7948);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    FUN_1046c5224(param_5,param_6,param_7);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Entry: 1046c7948; end: 1046c7db3;  */

undefined * FUN_1046c7948(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c7a64);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112db3b98;
    func_0x0001000285a8(0x112db3b98,&UNK_10dd2eef0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_11079ba50);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1046c7db4; end: 1046c7f2b;  */

undefined *
FUN_1046c7db4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c7f2c);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001000285a8(param_5,param_6);
    lVar5 = 0;
    (*param_7)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(param_5,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = param_5;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c7f24);
      (*pcVar4)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1046c7f28);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar5 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar6 = param_5;
  }
  lVar5 = 0;
  (*param_7)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar6 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar1))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar9);
    }
    else if (puVar6 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar6;
}



/* Entry: 1046c7f2c; end: 1046c8287;  */

undefined * FUN_1046c7f2c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c8048);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112db3b40;
    func_0x0001000285a8(0x112db3b40,&UNK_10d95dec0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_1107a0d18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1046c8288; end: 1046c84a7;  */

undefined *
FUN_1046c8288(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c8390);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar6 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 5) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x20 <= puVar3) {
      _memmove(puVar3,puVar1,uVar5 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar6;
}



/* Entry: 1046c84a8; end: 1046c85cb;  */

undefined * FUN_1046c84a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046c85cc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112db3b50;
    func_0x0001000285a8(0x112db3b50,&UNK_10d95ded0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_1107a1740);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1046c85cc; end: 1046c874b;  */

ulong FUN_1046c85cc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c874c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c8740);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1047b68dc(0);
      _swift_arrayInitWithCopy(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c8744);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c8748);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            _objc_retain(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        _objc_retain(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1046c4874(uVar7,param_3,FUN_1047b68dc,0x6a624f646f506441,0xe900000000000063);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1046c874c; end: 1046c8787;  */

void FUN_1046c874c(long param_1)

{
  FUN_1046c780c(0,*(undefined8 *)(param_1 + 0x10),0,param_1,FUN_1047b68dc,0x11308d9e8,&UNK_10dd2ef08
               );
  return;
}



/* Entry: 1046c8788; end: 1046c87f7;  */

void FUN_1046c8788(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = param_1;
  FUN_1046c8db4();
  lVar2 = lVar3;
  __sSh15minimumCapacityShyxGSi_tcfC(lVar3,&UNK_1107971a8,lVar1);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    lStack_38 = lVar2;
    do {
      FUN_1046c689c(auStack_40,*puVar4);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1046c87f8; end: 1046c888b;  */

long FUN_1046c87f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046c888c; end: 1046c8ba3;  */

undefined8 * FUN_1046c888c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  lVar1 = param_2[3];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
    lVar1 = param_2[6];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar2 = param_2[4];
    param_1[4] = uVar2;
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar2);
    lVar1 = param_2[6];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
    lVar1 = param_2[9];
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = lVar1;
    uVar2 = param_2[7];
    param_1[7] = uVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar2);
    lVar1 = param_2[9];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[10] = param_2[10];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    uVar2 = param_2[10];
    param_1[10] = uVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar2);
  }
  return param_1;
}



/* Entry: 1046c8ba4; end: 1046c8cf3;  */

undefined8 FUN_1046c8ba4(undefined8 param_1)

{
  (*(code *)(undefined *)0x1046ca410)();
  return param_1;
}



/* Entry: 1046c8cf4; end: 1046c8db3;  */

int FUN_1046c8cf4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046c8db4; end: 1046c8df3;  */

void FUN_1046c8db4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd273b8;
  _swift_getWitnessTable(&UNK_10dd273b8,&UNK_1107971a8);
  puRam000000011308d9d8 = puVar1;
  return;
}



/* Entry: 1046c8df4; end: 1046c8e77;  */

void FUN_1046c8df4(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  dVar1 = 0.0;
  if ((double)unaff_x20[1] != 0.0) {
    dVar1 = (double)unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c8e78; end: 1046c8e7b;  */

void FUN_1046c8e78(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  dVar1 = 0.0;
  if ((double)unaff_x20[1] != 0.0) {
    dVar1 = (double)unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c8e7c; end: 1046c8f93;  */

void FUN_1046c8e7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  __ss6HasherV8_combineyySuF(*unaff_x20);
  dVar4 = 0.0;
  if (dVar5 != 0.0) {
    dVar4 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  return;
}



/* Entry: 1046c8f94; end: 1046c8fdb;  */

uint FUN_1046c8f94(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1046c8fdc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046c8fdc; end: 1046c903b;  */

bool FUN_1046c8fdc(long *param_1,long *param_2)

{
  if ((((*param_1 == *param_2) && ((double)param_1[1] == (double)param_2[1])) &&
      (param_1[2] == param_2[2])) && (param_1[3] == param_2[3])) {
    return (int)param_1[4] == (int)param_2[4];
  }
  return false;
}



/* Entry: 1046c903c; end: 1046c907b;  */

void FUN_1046c903c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ef50;
  _swift_getWitnessTable(&UNK_10dd2ef50,&UNK_11079b468);
  puRam000000011308d9f0 = puVar1;
  return;
}



/* Entry: 1046c907c; end: 1046c90a7;  */

long FUN_1046c907c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046c90a8; end: 1046c910b;  */

int FUN_1046c90a8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1046c910c; end: 1046c91b7;  */

void FUN_1046c910c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c91b8; end: 1046c91bb;  */

void FUN_1046c91b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2efe0;
  _swift_getWitnessTable(&UNK_10dd2efe0,&UNK_11079b530);
  puRam000000011308d9f8 = puVar1;
  return;
}



/* Entry: 1046c91bc; end: 1046c91fb;  */

void FUN_1046c91bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2efe0;
  _swift_getWitnessTable(&UNK_10dd2efe0,&UNK_11079b530);
  puRam000000011308d9f8 = puVar1;
  return;
}



/* Entry: 1046c91fc; end: 1046c9373;  */

byte FUN_1046c91fc(byte *param_1,byte *param_2)

{
  return (*param_1 ^ *param_2 ^ 0xff) & 1;
}



/* Entry: 1046c9374; end: 1046c93ef;  */

void FUN_1046c9374(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_4 != 0.0) {
    dVar1 = param_4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 1046c93f0; end: 1046c949f;  */

void FUN_1046c93f0(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  undefined1 auStack_98 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_4 != 0.0) {
    dVar1 = param_4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c94a0; end: 1046c94b7;  */

void FUN_1046c94a0(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_98 [72];
  
  dVar2 = *unaff_x20;
  dVar3 = unaff_x20[1];
  dVar4 = unaff_x20[2];
  dVar5 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar5 != 0.0) {
    dVar1 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c94b8; end: 1046c9517;  */

void FUN_1046c94b8(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  FUN_1046c9374(uVar1,uVar2,uVar3,uVar4,auStack_88);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046c9518; end: 1046c9553;  */

bool FUN_1046c9518(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
    bVar2 = param_1[2] == param_2[2];
  }
  if (!bVar2) {
    return false;
  }
  return param_1[3] == param_2[3];
}



/* Entry: 1046c9554; end: 1046c95d3; -[SCAdCustomColor uiColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046c9554(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308ef48);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308ef50);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11308ef58);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11308ef60);
  _objc_allocWithZone(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x00010c03d7c0(uVar1,uVar2,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


