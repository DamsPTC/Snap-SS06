/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035eeea4; end: 1035ef107;  */

/* WARNING: Removing unreachable block (ram,0x0001035ef050) */

void FUN_1035eeea4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
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
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_e8 = 0;
  lStack_f0 = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  lStack_108 = 0;
  lStack_110 = 0;
  lStack_f8 = 0;
  lStack_100 = 0;
  lVar4 = *param_1;
  lStack_c8 = param_1[2];
  lStack_d0 = param_1[1];
  lStack_b8 = param_1[4];
  lStack_c0 = param_1[3];
  lStack_a8 = param_1[6];
  lStack_b0 = param_1[5];
  lStack_a0 = param_1[7];
  plVar1 = param_1;
  lStack_90 = lVar4;
  lStack_88 = lStack_d0;
  lStack_80 = lStack_c8;
  lStack_78 = lStack_c0;
  lStack_70 = lStack_b8;
  lStack_68 = lStack_b0;
  lStack_60 = lStack_a8;
  lStack_58 = lStack_a0;
  if (lVar4 != 0) {
    func_0x0001034bb7dc(&lStack_90,&lStack_150);
    lStack_1a8 = 0;
    lStack_1b0 = 0;
    lStack_198 = 0;
    lStack_1a0 = 0;
    lStack_1c8 = 0;
    lStack_1d0 = 0;
    lStack_1b8 = 0;
    lStack_1c0 = 0;
    lStack_180 = lStack_c8;
    lStack_188 = lStack_d0;
    lStack_170 = lStack_b8;
    lStack_178 = lStack_c0;
    lStack_160 = lStack_a8;
    lStack_168 = lStack_b0;
    lStack_158 = lStack_a0;
    lStack_190 = lVar4;
    FUN_1035eebd4(&lStack_190,&lStack_210);
    plVar1 = &lStack_1d0;
    FUN_1035f0fb8(plVar1,0x112f7d278,&UNK_10dbe5a58);
    lStack_108 = lStack_148;
    lStack_110 = lStack_150;
    lStack_f8 = lStack_138;
    lStack_100 = lStack_140;
    lStack_e8 = lStack_128;
    lStack_f0 = lStack_130;
    lStack_d8 = lStack_118;
    lStack_e0 = lStack_120;
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_1035f0634();
  (*pcVar5)(&lStack_110,&UNK_11066bf60,plVar1,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_188 = lStack_108;
    lStack_190 = lStack_110;
    lStack_178 = lStack_f8;
    lStack_180 = lStack_100;
    lStack_168 = lStack_e8;
    lStack_170 = lStack_f0;
    lStack_158 = lStack_d8;
    lStack_160 = lStack_e0;
    lStack_148 = lStack_108;
    lStack_150 = lStack_110;
    lStack_138 = lStack_f8;
    lStack_140 = lStack_100;
    lStack_128 = lStack_e8;
    lStack_130 = lStack_f0;
    lStack_118 = lStack_d8;
    lStack_120 = lStack_e0;
    if (lStack_110 != 0) {
      if (lVar4 == 0) {
        lStack_1c8 = lStack_108;
        lStack_1d0 = lStack_110;
        lStack_1b8 = lStack_f8;
        lStack_1c0 = lStack_100;
        lStack_1a8 = lStack_e8;
        lStack_1b0 = lStack_f0;
        lStack_198 = lStack_d8;
        lStack_1a0 = lStack_e0;
        func_0x0001034bb818(&lStack_1d0,&lStack_210);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        lStack_1c8 = lStack_108;
        lStack_1d0 = lStack_110;
        lStack_1b8 = lStack_f8;
        lStack_1c0 = lStack_100;
        lStack_1a8 = lStack_e8;
        lStack_1b0 = lStack_f0;
        lStack_198 = lStack_d8;
        lStack_1a0 = lStack_e0;
        func_0x0001034bb818(&lStack_1d0,&lStack_210);
        (*pcVar5)(param_3,param_4);
      }
      FUN_1035f0fb8(&lStack_110,0x112f7d278,&UNK_10dbe5a58);
      lStack_248 = lStack_148;
      lStack_250 = lStack_150;
      lStack_238 = lStack_138;
      lStack_240 = lStack_140;
      lStack_228 = lStack_128;
      lStack_230 = lStack_130;
      lStack_218 = lStack_118;
      lStack_220 = lStack_120;
      func_0x0001034bb7dc(&lStack_250,&lStack_210);
      lStack_1c8 = param_1[1];
      lStack_1d0 = *param_1;
      lStack_1b8 = param_1[3];
      lStack_1c0 = param_1[2];
      lStack_1a8 = param_1[5];
      lStack_1b0 = param_1[4];
      lStack_198 = param_1[7];
      lStack_1a0 = param_1[6];
      param_1[1] = lStack_208;
      *param_1 = lStack_210;
      param_1[3] = lStack_1f8;
      param_1[2] = lStack_200;
      param_1[5] = lStack_1e8;
      param_1[4] = lStack_1f0;
      param_1[7] = lStack_1d8;
      param_1[6] = lStack_1e0;
      uVar2 = 0x112f73210;
      puVar3 = &UNK_10dbce5d0;
      plVar1 = &lStack_1d0;
      goto LAB_1035eefd0;
    }
  }
  uVar2 = 0x112f7d278;
  puVar3 = &UNK_10dbe5a58;
  plVar1 = &lStack_110;
LAB_1035eefd0:
  FUN_1035f0fb8(plVar1,uVar2,puVar3);
  return;
}



/* Entry: 1035ef108; end: 1035ef163;  */

void FUN_1035ef108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1035ef164();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                        param_2,param_3);
  }
  return;
}



/* Entry: 1035ef164; end: 1035ef20f;  */

void FUN_1035ef164(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [64];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_f8 = param_1[1];
  lStack_100 = *param_1;
  lStack_e8 = param_1[3];
  lStack_f0 = param_1[2];
  lStack_d8 = param_1[5];
  lStack_e0 = param_1[4];
  lStack_c8 = param_1[7];
  lStack_d0 = param_1[6];
  if (lStack_100 != 0) {
    func_0x0001034bb7dc(&lStack_100,auStack_c0);
    puVar1 = auStack_c0;
    func_0x0001034bb7dc(puVar1,&uStack_80);
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_108 = uStack_48;
    uStack_110 = uStack_50;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1035f0634();
    (*pcVar2)(&uStack_140,1,&UNK_11066bf60,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035ef210; end: 1035ef24f;  */

uint FUN_1035ef210(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_2c0 [64];
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
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
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_b8 = param_1[1];
  lStack_c0 = *param_1;
  lStack_a8 = param_1[3];
  lStack_b0 = param_1[2];
  lStack_98 = param_1[5];
  lStack_a0 = param_1[4];
  lStack_88 = param_1[7];
  lStack_90 = param_1[6];
  lStack_178 = param_1[1];
  lStack_180 = *param_1;
  lStack_168 = param_1[3];
  lStack_170 = param_1[2];
  lStack_f8 = param_2[1];
  lStack_100 = *param_2;
  lStack_e8 = param_2[3];
  lStack_f0 = param_2[2];
  lStack_d8 = param_2[5];
  lStack_e0 = param_2[4];
  lStack_c8 = param_2[7];
  lStack_d0 = param_2[6];
  lStack_1b8 = param_2[1];
  lStack_1c0 = *param_2;
  lStack_1a8 = param_2[3];
  lStack_1b0 = param_2[2];
  lStack_158 = param_1[5];
  lStack_160 = param_1[4];
  lStack_148 = param_1[7];
  lStack_150 = param_1[6];
  lStack_198 = param_2[5];
  lStack_1a0 = param_2[4];
  lStack_188 = param_2[7];
  lStack_190 = param_2[6];
  lStack_140 = lStack_1c0;
  lStack_138 = lStack_1b8;
  lStack_130 = lStack_1b0;
  lStack_128 = lStack_1a8;
  lStack_120 = lStack_1a0;
  lStack_118 = lStack_198;
  lStack_110 = lStack_190;
  lStack_108 = lStack_188;
  if (lStack_180 == 0) {
    if (lStack_1c0 != 0) goto LAB_1035f01ec;
    lStack_1f8 = param_1[1];
    lStack_200 = *param_1;
    lStack_1e8 = param_1[3];
    lStack_1f0 = param_1[2];
    lStack_1d8 = param_1[5];
    lStack_1e0 = param_1[4];
    lStack_1c8 = param_1[7];
    lStack_1d0 = param_1[6];
    FUN_1035f001c(&lStack_c0,&lStack_80,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f001c(&lStack_100,&lStack_80,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f0fb8(&lStack_200,0x112f73210,&UNK_10dbce5d0);
  }
  else {
    lStack_238 = param_1[1];
    lStack_240 = *param_1;
    lStack_228 = param_1[3];
    lStack_230 = param_1[2];
    lStack_218 = param_1[5];
    lStack_220 = param_1[4];
    lStack_208 = param_1[7];
    lStack_210 = param_1[6];
    if (lStack_1c0 == 0) {
LAB_1035f01ec:
      lStack_200 = lStack_180;
      lStack_1f8 = lStack_178;
      lStack_1f0 = lStack_170;
      lStack_1e8 = lStack_168;
      lStack_1e0 = lStack_160;
      lStack_1d8 = lStack_158;
      lStack_1d0 = lStack_150;
      lStack_1c8 = lStack_148;
      FUN_1035f001c(&lStack_c0,&lStack_80,0x112f73210,&UNK_10dbce5d0);
      FUN_1035f001c(&lStack_100,&lStack_80,0x112f73210,&UNK_10dbce5d0);
      FUN_1035f0fb8(&lStack_200,0x112f7d270,&UNK_10dbe5a50);
      uVar1 = 0;
      goto LAB_1035f02c8;
    }
    lStack_278 = param_2[1];
    lStack_280 = *param_2;
    lStack_268 = param_2[3];
    lStack_270 = param_2[2];
    lStack_258 = param_2[5];
    lStack_260 = param_2[4];
    lStack_248 = param_2[7];
    lStack_250 = param_2[6];
    uStack_70 = (undefined1)lStack_230;
    lStack_1f0 = CONCAT71(lStack_1f0._1_7_,(undefined1)lStack_270);
    lStack_200 = lStack_280;
    lStack_1f8 = lStack_278;
    lStack_1e8 = lStack_268;
    lStack_1e0 = lStack_260;
    lStack_1d8 = lStack_258;
    lStack_1d0 = lStack_250;
    lStack_1c8 = lStack_248;
    lStack_80 = lStack_240;
    lStack_78 = lStack_238;
    lStack_68 = lStack_228;
    lStack_60 = lStack_220;
    lStack_58 = lStack_218;
    lStack_50 = lStack_210;
    lStack_48 = lStack_208;
    FUN_1035f001c(&lStack_c0,auStack_2c0,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f001c(&lStack_100,auStack_2c0,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f001c(&lStack_240,auStack_2c0,0x112f73210,&UNK_10dbce5d0);
    plVar2 = &lStack_80;
    FUN_1035efd5c(plVar2,&lStack_200);
    FUN_1035f0fb8(&lStack_280,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f0fb8(&lStack_240,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f0fb8(&lStack_180,0x112f73210,&UNK_10dbce5d0);
    if (((ulong)plVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1035f02c8;
    }
  }
  lVar3 = param_1[8];
  func_0x000100e25fcc(lVar3,param_1[9],param_2[8],param_2[9]);
  uVar1 = (uint)lVar3;
LAB_1035f02c8:
  return uVar1 & 1;
}



/* Entry: 1035ef250; end: 1035ef27f;  */

undefined1  [16] FUN_1035ef250(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1035ef280; end: 1035ef2b3;  */

void FUN_1035ef280(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 1035ef2b4; end: 1035ef2c7;  */

undefined1  [16] FUN_1035ef2b4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1035ef2c4;
  return auVar1;
}



/* Entry: 1035ef2c8; end: 1035ef2db;  */

void FUN_1035ef2c8(void)

{
  FUN_1035eee20();
  return;
}



/* Entry: 1035ef2dc; end: 1035ef31b;  */

void FUN_1035ef2dc(void)

{
  FUN_1035ef108();
  return;
}



/* Entry: 1035ef31c; end: 1035ef31f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035ef31c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035ef320; end: 1035ef357;  */

uint FUN_1035ef320(long param_1,long param_2)

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
  func_0x0001035f0f78();
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



/* Entry: 1035ef358; end: 1035ef3af;  */

uint FUN_1035ef358(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_1035f0064(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035ef3b0; end: 1035ef44f;  */

/* WARNING: Possible PIC construction at 0x0001035ef3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ef40c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035ef400) */
/* WARNING: Removing unreachable block (ram,0x0001035ef410) */

void FUN_1035ef3b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d1d0 != -1) {
    func_0x000107c61568(0x112f7d1d0,FUN_1035eedd8);
  }
  uVar5 = uRam00000001138095a8;
  uVar4 = uRam00000001138095a0;
  uVar3 = uRam0000000113809598;
  uVar2 = uRam0000000113809590;
  uVar1 = uRam0000000113809588;
  *param_1 = uRam0000000113809580;
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



/* Entry: 1035ef450; end: 1035ef48b;  */

void FUN_1035ef450(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d260;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d260,&UNK_10dbe59b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035ef48c; end: 1035ef59f;  */

void FUN_1035ef48c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035ef5a0; end: 1035ef63f;  */

uint FUN_1035ef5a0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1035f0064(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035ef640; end: 1035ef74f;  */

/* WARNING: Removing unreachable block (ram,0x0001035ef708) */
/* WARNING: Removing unreachable block (ram,0x0001035ef74c) */

void FUN_1035ef640(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x180);
        func_0x0001035f0324();
        lVar2 = unaff_x20 + 8;
        puVar3 = &UNK_11066c000;
LAB_1035ef738:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_110790b00;
          goto LAB_1035ef738;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x160))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035ef750; end: 1035ef827;  */

void FUN_1035ef750(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x100))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (plVar1 = unaff_x20, FUN_1035ef828(), unaff_x21 == 0)) {
    if (unaff_x20[1] != 0) {
      uStack_48 = (undefined1)unaff_x20[2];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[1];
      func_0x0001035f0324();
      (*pcVar2)(&lStack_50,3,&UNK_11066c000,plVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 1035ef828; end: 1035ef8af;  */

void FUN_1035ef828(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035ef8b0; end: 1035ef903;  */

void FUN_1035ef8b0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  return;
}



/* Entry: 1035ef904; end: 1035ef933;  */

undefined1  [16] FUN_1035ef904(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1035ef934; end: 1035ef967;  */

void FUN_1035ef934(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1035ef968; end: 1035ef97b;  */

undefined1  [16] FUN_1035ef968(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1035ef978;
  return auVar1;
}



/* Entry: 1035ef97c; end: 1035ef98f;  */

void FUN_1035ef97c(void)

{
  FUN_1035ef640();
  return;
}



/* Entry: 1035ef990; end: 1035ef9c7;  */

void FUN_1035ef990(void)

{
  FUN_1035ef750();
  return;
}



/* Entry: 1035ef9c8; end: 1035ef9cb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035ef9c8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035ef9cc; end: 1035efa03;  */

uint FUN_1035ef9cc(long param_1,long param_2)

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
  FUN_1035f0f38();
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



/* Entry: 1035efa04; end: 1035efa4b;  */

uint FUN_1035efa04(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_1035efd5c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035efa4c; end: 1035efaeb;  */

/* WARNING: Possible PIC construction at 0x0001035efa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035efaa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035efa9c) */
/* WARNING: Removing unreachable block (ram,0x0001035efaac) */

void FUN_1035efa4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d1e0 != -1) {
    func_0x000107c61568(0x112f7d1e0,0x1035ef5f8);
  }
  uVar5 = uRam00000001138095d8;
  uVar4 = uRam00000001138095d0;
  uVar3 = uRam00000001138095c8;
  uVar2 = uRam00000001138095c0;
  uVar1 = uRam00000001138095b8;
  *param_1 = uRam00000001138095b0;
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



/* Entry: 1035efaec; end: 1035efb27;  */

void FUN_1035efaec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d250;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d250,&UNK_10dbe59b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035efb28; end: 1035efc2b;  */

void FUN_1035efb28(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035efc2c; end: 1035efcbb;  */

uint FUN_1035efc2c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1035efd5c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035efcbc; end: 1035efd5b;  */

/* WARNING: Possible PIC construction at 0x0001035efd08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035efd18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035efd0c) */
/* WARNING: Removing unreachable block (ram,0x0001035efd1c) */

void FUN_1035efcbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d1f8 != -1) {
    func_0x000107c61568(0x112f7d1f8,0x1035efc74);
  }
  uVar5 = uRam0000000113809608;
  uVar4 = uRam0000000113809600;
  uVar3 = uRam00000001138095f8;
  uVar2 = uRam00000001138095f0;
  uVar1 = uRam00000001138095e8;
  *param_1 = uRam00000001138095e0;
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



/* Entry: 1035efd5c; end: 1035f001b;  */

uint FUN_1035efd5c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 != *(long *)(lVar4 + 0x10)) goto LAB_1035effd4;
  if (lVar5 != 0 && lVar3 != lVar4) {
    plVar7 = (long *)(lVar4 + 0x28);
    plVar8 = (long *)(lVar3 + 0x28);
    do {
      uVar10 = plVar8[-1];
      if ((uVar10 != plVar7[-1] || *plVar8 != *plVar7) && (func_0x000107c605b8(), (uVar10 & 1) == 0)
         ) goto LAB_1035effd4;
      plVar7 = plVar7 + 2;
      plVar8 = plVar8 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  uVar10 = param_1[6];
  lVar5 = param_1[5];
  uVar6 = param_1[7];
  uVar11 = param_2[6];
  lVar3 = param_2[5];
  uVar9 = param_2[7];
  lStack_a0 = lVar3;
  uStack_98 = uVar11;
  uStack_90 = uVar9;
  lStack_80 = lVar5;
  uStack_78 = uVar10;
  uStack_70 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) goto LAB_1035efe68;
    if ((int)lVar5 == (int)lVar3) {
      FUN_1035f001c(&lStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_1035f001c(&lStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar9);
      func_0x0001015dc5d0(lVar3,uVar11,uVar9);
      if ((uVar2 & 1) != 0) goto LAB_1035efe20;
    }
    else {
      FUN_1035f001c(&lStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_1035f001c(&lStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(lVar3,uVar11,uVar9);
    }
LAB_1035effd0:
    func_0x0001015dc5d0(lVar5,uVar10,uVar6);
  }
  else {
    if (uVar9 >> 0x3c < 0xf) {
LAB_1035efe68:
      FUN_1035f001c(&lStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_1035f001c(&lStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(lVar5,uVar10,uVar6);
      lVar5 = lVar3;
      uVar10 = uVar11;
      uVar6 = uVar9;
      goto LAB_1035effd0;
    }
    FUN_1035f001c(&lStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
    FUN_1035f001c(&lStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
LAB_1035efe20:
    func_0x0001015dc5d0(lVar5,uVar10,uVar6);
    lVar5 = param_1[1];
    lVar3 = param_2[1];
    if ((char)param_2[2] == '\x01') {
      if (lVar3 == 0) {
        if (lVar5 == 0) goto LAB_1035f000c;
      }
      else if (lVar3 == 1) {
        if (lVar5 == 1) {
LAB_1035f000c:
          lVar5 = param_1[3];
          func_0x000100e25fcc(lVar5,param_1[4],param_2[3],param_2[4]);
          uVar1 = (uint)lVar5;
          goto LAB_1035effd8;
        }
      }
      else if (lVar5 == 2) goto LAB_1035f000c;
    }
    else if (lVar5 == lVar3) goto LAB_1035f000c;
  }
LAB_1035effd4:
  uVar1 = 0;
LAB_1035effd8:
  return uVar1 & 1;
}



/* Entry: 1035f001c; end: 1035f0063;  */

undefined8 FUN_1035f001c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035f0064; end: 1035f02e3;  */

uint FUN_1035f0064(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_2c0 [64];
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
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
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_b8 = param_1[1];
  lStack_c0 = *param_1;
  lStack_a8 = param_1[3];
  lStack_b0 = param_1[2];
  lStack_98 = param_1[5];
  lStack_a0 = param_1[4];
  lStack_88 = param_1[7];
  lStack_90 = param_1[6];
  lStack_178 = param_1[1];
  lStack_180 = *param_1;
  lStack_168 = param_1[3];
  lStack_170 = param_1[2];
  lStack_f8 = param_2[1];
  lStack_100 = *param_2;
  lStack_e8 = param_2[3];
  lStack_f0 = param_2[2];
  lStack_d8 = param_2[5];
  lStack_e0 = param_2[4];
  lStack_c8 = param_2[7];
  lStack_d0 = param_2[6];
  lStack_1b8 = param_2[1];
  lStack_1c0 = *param_2;
  lStack_1a8 = param_2[3];
  lStack_1b0 = param_2[2];
  lStack_158 = param_1[5];
  lStack_160 = param_1[4];
  lStack_148 = param_1[7];
  lStack_150 = param_1[6];
  lStack_198 = param_2[5];
  lStack_1a0 = param_2[4];
  lStack_188 = param_2[7];
  lStack_190 = param_2[6];
  lStack_140 = lStack_1c0;
  lStack_138 = lStack_1b8;
  lStack_130 = lStack_1b0;
  lStack_128 = lStack_1a8;
  lStack_120 = lStack_1a0;
  lStack_118 = lStack_198;
  lStack_110 = lStack_190;
  lStack_108 = lStack_188;
  if (lStack_180 == 0) {
    if (lStack_1c0 != 0) goto LAB_1035f01ec;
    lStack_1f8 = param_1[1];
    lStack_200 = *param_1;
    lStack_1e8 = param_1[3];
    lStack_1f0 = param_1[2];
    lStack_1d8 = param_1[5];
    lStack_1e0 = param_1[4];
    lStack_1c8 = param_1[7];
    lStack_1d0 = param_1[6];
    FUN_1035f001c(&lStack_c0,&lStack_80,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f001c(&lStack_100,&lStack_80,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f0fb8(&lStack_200,0x112f73210,&UNK_10dbce5d0);
  }
  else {
    lStack_238 = param_1[1];
    lStack_240 = *param_1;
    lStack_228 = param_1[3];
    lStack_230 = param_1[2];
    lStack_218 = param_1[5];
    lStack_220 = param_1[4];
    lStack_208 = param_1[7];
    lStack_210 = param_1[6];
    if (lStack_1c0 == 0) {
LAB_1035f01ec:
      lStack_200 = lStack_180;
      lStack_1f8 = lStack_178;
      lStack_1f0 = lStack_170;
      lStack_1e8 = lStack_168;
      lStack_1e0 = lStack_160;
      lStack_1d8 = lStack_158;
      lStack_1d0 = lStack_150;
      lStack_1c8 = lStack_148;
      FUN_1035f001c(&lStack_c0,&lStack_80,0x112f73210,&UNK_10dbce5d0);
      FUN_1035f001c(&lStack_100,&lStack_80,0x112f73210,&UNK_10dbce5d0);
      FUN_1035f0fb8(&lStack_200,0x112f7d270,&UNK_10dbe5a50);
      uVar1 = 0;
      goto LAB_1035f02c8;
    }
    lStack_278 = param_2[1];
    lStack_280 = *param_2;
    lStack_268 = param_2[3];
    lStack_270 = param_2[2];
    lStack_258 = param_2[5];
    lStack_260 = param_2[4];
    lStack_248 = param_2[7];
    lStack_250 = param_2[6];
    uStack_70 = (undefined1)lStack_230;
    lStack_1f0 = CONCAT71(lStack_1f0._1_7_,(undefined1)lStack_270);
    lStack_200 = lStack_280;
    lStack_1f8 = lStack_278;
    lStack_1e8 = lStack_268;
    lStack_1e0 = lStack_260;
    lStack_1d8 = lStack_258;
    lStack_1d0 = lStack_250;
    lStack_1c8 = lStack_248;
    lStack_80 = lStack_240;
    lStack_78 = lStack_238;
    lStack_68 = lStack_228;
    lStack_60 = lStack_220;
    lStack_58 = lStack_218;
    lStack_50 = lStack_210;
    lStack_48 = lStack_208;
    FUN_1035f001c(&lStack_c0,auStack_2c0,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f001c(&lStack_100,auStack_2c0,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f001c(&lStack_240,auStack_2c0,0x112f73210,&UNK_10dbce5d0);
    plVar2 = &lStack_80;
    FUN_1035efd5c(plVar2,&lStack_200);
    FUN_1035f0fb8(&lStack_280,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f0fb8(&lStack_240,0x112f73210,&UNK_10dbce5d0);
    FUN_1035f0fb8(&lStack_180,0x112f73210,&UNK_10dbce5d0);
    if (((ulong)plVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1035f02c8;
    }
  }
  lVar3 = param_1[8];
  func_0x000100e25fcc(lVar3,param_1[9],param_2[8],param_2[9]);
  uVar1 = (uint)lVar3;
LAB_1035f02c8:
  return uVar1 & 1;
}



/* Entry: 1035f02e4; end: 1035f03a3;  */

void FUN_1035f02e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d1d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5780;
  func_0x000107c61520(&UNK_10dbe5780,&UNK_11066be50);
  puRam0000000112f7d1d8 = puVar1;
  return;
}



/* Entry: 1035f03a4; end: 1035f03b7;  */

void FUN_1035f03a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f03b8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035f03f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f03b8; end: 1035f0437;  */

void FUN_1035f03b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe56a8;
  func_0x000107c61520(&UNK_10dbe56a8,&UNK_11066c000);
  puRam0000000112f7d200 = puVar1;
  return;
}



/* Entry: 1035f0438; end: 1035f043b;  */

void FUN_1035f0438(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d210 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d218;
  func_0x00010002969c(0x112f7d218,&UNK_10dbe5630);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d210 = puVar2;
  return;
}



/* Entry: 1035f043c; end: 1035f048b;  */

void FUN_1035f043c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d210 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d218;
  func_0x00010002969c(0x112f7d218,&UNK_10dbe5630);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d210 = puVar2;
  return;
}



/* Entry: 1035f048c; end: 1035f048f;  */

void FUN_1035f048c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe56e8;
  func_0x000107c61520(&UNK_10dbe56e8,&UNK_11066c000);
  puRam0000000112f7d220 = puVar1;
  return;
}



/* Entry: 1035f0490; end: 1035f04cf;  */

void FUN_1035f0490(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe56e8;
  func_0x000107c61520(&UNK_10dbe56e8,&UNK_11066c000);
  puRam0000000112f7d220 = puVar1;
  return;
}



/* Entry: 1035f04d0; end: 1035f04f3;  */

void FUN_1035f04d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f04f4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035f04f4; end: 1035f0533;  */

void FUN_1035f04f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5758;
  func_0x000107c61520(&UNK_10dbe5758,&UNK_11066be50);
  puRam0000000112f7d228 = puVar1;
  return;
}



/* Entry: 1035f0534; end: 1035f054b;  */

void FUN_1035f0534(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f02e4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e0e78)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f054c; end: 1035f058b;  */

void FUN_1035f054c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe57c0;
  func_0x000107c61520(&UNK_10dbe57c0,&UNK_11066be50);
  puRam0000000112f7d230 = puVar1;
  return;
}



/* Entry: 1035f058c; end: 1035f05af;  */

void FUN_1035f058c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f05b0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035f05b0; end: 1035f05ef;  */

void FUN_1035f05b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5830;
  func_0x000107c61520(&UNK_10dbe5830,&UNK_11066bf60);
  puRam0000000112f7d238 = puVar1;
  return;
}



/* Entry: 1035f05f0; end: 1035f0603;  */

void FUN_1035f05f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035f0364)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035f0634();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f0604; end: 1035f0633;  */

void FUN_1035f0604(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f0634; end: 1035f0673;  */

void FUN_1035f0634(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe57e8;
  func_0x000107c61520(&DAT_10dbe57e8,&UNK_11066bf60);
  puRam0000000112f7d240 = puVar1;
  return;
}



/* Entry: 1035f0674; end: 1035f0677;  */

void FUN_1035f0674(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5898;
  func_0x000107c61520(&UNK_10dbe5898,&UNK_11066bf60);
  puRam0000000112f7d248 = puVar1;
  return;
}



/* Entry: 1035f0678; end: 1035f06b7;  */

void FUN_1035f0678(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5898;
  func_0x000107c61520(&UNK_10dbe5898,&UNK_11066bf60);
  puRam0000000112f7d248 = puVar1;
  return;
}



/* Entry: 1035f06b8; end: 1035f0703;  */

/* WARNING: Possible PIC construction at 0x0001035f06d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f06dc) */
/* WARNING: Removing unreachable block (ram,0x0001035f06ec) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035f06b8(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*param_1 == 0) {
    uVar2 = param_1[8];
    uVar3 = param_1[9];
  }
  else {
    func_0x000107c6142c();
    uVar2 = param_1[3];
    uVar3 = param_1[4];
    unaff_x30 = 0x1035f06dc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  uVar4 = (uint)(uVar3 >> 0x3e);
  if (uVar4 == 1) {
    uVar2 = uVar3 & 0x3fffffffffffffff;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1035f0704; end: 1035f095f;  */

long * FUN_1035f0704(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 == 0) {
    lVar1 = *param_2;
    lVar4 = param_2[3];
    lVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar1;
    param_1[3] = lVar4;
    param_1[2] = lVar3;
    lVar1 = param_2[4];
    lVar4 = param_2[7];
    lVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar1;
    param_1[7] = lVar4;
    param_1[6] = lVar3;
  }
  else {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar1 = param_2[3];
    lVar3 = param_2[4];
    func_0x000107c61434();
    func_0x00010006c00c(lVar1,lVar3);
    param_1[3] = lVar1;
    param_1[4] = lVar3;
    uVar2 = param_2[7];
    if (uVar2 >> 0x3c < 0xf) {
      *(int *)(param_1 + 5) = (int)param_2[5];
      lVar1 = param_2[6];
      func_0x00010006c00c(lVar1,uVar2);
      param_1[6] = lVar1;
      param_1[7] = uVar2;
    }
    else {
      lVar1 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = lVar1;
      param_1[7] = param_2[7];
    }
  }
  lVar1 = param_2[8];
  lVar3 = param_2[9];
  func_0x00010006c00c(lVar1,lVar3);
  param_1[8] = lVar1;
  param_1[9] = lVar3;
  return param_1;
}



/* Entry: 1035f0960; end: 1035f0a67;  */

undefined8 FUN_1035f0960(undefined8 param_1)

{
  func_0x000100d563b4(param_1,&UNK_11066bee8);
  return param_1;
}



/* Entry: 1035f0a68; end: 1035f0b5b;  */

int FUN_1035f0a68(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035f0b5c; end: 1035f0ba7;  */

/* WARNING: Possible PIC construction at 0x0001035f0b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f0b7c) */
/* WARNING: Removing unreachable block (ram,0x0001035f0b98) */
/* WARNING: Removing unreachable block (ram,0x0001035f0b8c) */

void FUN_1035f0b5c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[4];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[3]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1035f0ba8; end: 1035f0d47;  */

undefined8 * FUN_1035f0ba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  uVar1 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  return param_1;
}



/* Entry: 1035f0d48; end: 1035f0def;  */

undefined8 * FUN_1035f0d48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  uVar1 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar2 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 5);
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 1035f0df0; end: 1035f0f37;  */

int FUN_1035f0df0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035f0f38; end: 1035f0fb7;  */

void FUN_1035f0f38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe5804;
  func_0x000107c61520(&DAT_10dbe5804,&UNK_11066bf60);
  puRam0000000112f7d258 = puVar1;
  return;
}



/* Entry: 1035f0fb8; end: 1035f0ff7;  */

undefined8 FUN_1035f0fb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1035f0ff8; end: 1035f1033;  */

void FUN_1035f0ff8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 1035f1034; end: 1035f1053;  */

void FUN_1035f1034(void)

{
  func_0x000107c61168(&PTR_PTR_112f7d520);
  return;
}



/* Entry: 1035f1054; end: 1035f1223;  */

void FUN_1035f1054(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_320 [368];
  undefined1 auStack_1b0 [368];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035f1034(0);
    func_0x000107c613fc();
    FUN_1035f1628();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_408 = param_1[0x11];
  uStack_410 = param_1[0x10];
  uStack_3f8 = param_1[0x13];
  uStack_400 = param_1[0x12];
  uStack_3f0 = param_1[0x14];
  uStack_448 = param_1[9];
  uStack_450 = param_1[8];
  uStack_438 = param_1[0xb];
  uStack_440 = param_1[10];
  uStack_428 = param_1[0xd];
  uStack_430 = param_1[0xc];
  uStack_418 = param_1[0xf];
  uStack_420 = param_1[0xe];
  uStack_488 = param_1[1];
  uStack_490 = *param_1;
  uStack_478 = param_1[3];
  uStack_480 = param_1[2];
  uStack_468 = param_1[5];
  uStack_470 = param_1[4];
  uStack_458 = param_1[7];
  uStack_460 = param_1[6];
  FUN_1035f1870(&uStack_490);
  func_0x000107c610b4(auStack_320,&uStack_490,0x170);
  func_0x0001035f188c(auStack_320);
  func_0x000107c610b4(auStack_1b0,lVar2 + 0x10,0x170);
  func_0x000107c610b4(lVar2 + 0x10,auStack_320,0x170);
  FUN_1035f8f14(auStack_1b0,0x112f7d280,&UNK_10dbe5a70);
  return;
}



/* Entry: 1035f1224; end: 1035f140f;  */

void FUN_1035f1224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035f1034(0);
    func_0x000107c613fc();
    FUN_1035f1628(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x180,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x180);
  uVar1 = *(undefined8 *)(lVar5 + 0x188);
  uVar4 = *(undefined8 *)(lVar5 + 400);
  *(undefined8 *)(lVar5 + 0x180) = param_1;
  *(undefined8 *)(lVar5 + 0x188) = param_2;
  *(undefined8 *)(lVar5 + 400) = param_3;
  func_0x000100d563fc(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035f1410; end: 1035f15af;  */

uint FUN_1035f1410(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 auStack_5f0 [46];
  undefined1 auStack_480 [368];
  undefined1 auStack_310 [368];
  undefined8 auStack_1a0 [46];
  
  puVar4 = &uStack_8d0;
  uVar2 = 0;
  func_0x000107c610b4(auStack_480,param_1,0x170);
  func_0x000107c610b4(auStack_310,param_2,0x170);
  func_0x000107c610b4(auStack_1a0,param_1,0x170);
  iVar1 = (int)auStack_480;
  func_0x0001035f1830();
  if (iVar1 == 1) {
    puVar3 = auStack_1a0;
    func_0x000100d563cc(puVar3);
    func_0x000107c610b4(&uStack_760,puVar3,0x170);
    func_0x000107c610b4(&uStack_8d0,auStack_310,0x170);
    iVar1 = (int)auStack_310;
    func_0x0001035f1830();
    if (iVar1 == 1) {
      func_0x000100d563cc(&uStack_8d0);
      func_0x000107c610b4(auStack_5f0,puVar4,0x170);
      puVar4 = &uStack_760;
      func_0x0001035f4eb4(puVar4,auStack_5f0);
      uVar2 = (uint)puVar4;
      goto LAB_1035f1598;
    }
  }
  else {
    puVar4 = auStack_1a0;
    func_0x000100d563cc();
    uStack_858 = puVar4[0xf];
    uStack_860 = puVar4[0xe];
    uStack_848 = puVar4[0x11];
    uStack_850 = puVar4[0x10];
    uStack_838 = puVar4[0x13];
    uStack_840 = puVar4[0x12];
    uStack_830 = puVar4[0x14];
    uStack_898 = puVar4[7];
    uStack_8a0 = puVar4[6];
    uStack_888 = puVar4[9];
    uStack_890 = puVar4[8];
    uStack_878 = puVar4[0xb];
    uStack_880 = puVar4[10];
    uStack_868 = puVar4[0xd];
    uStack_870 = puVar4[0xc];
    uStack_8c8 = puVar4[1];
    uStack_8d0 = *puVar4;
    uStack_8b8 = puVar4[3];
    uStack_8c0 = puVar4[2];
    uStack_8a8 = puVar4[5];
    uStack_8b0 = puVar4[4];
    func_0x000107c610b4(auStack_5f0,auStack_310,0x170);
    iVar1 = (int)auStack_310;
    func_0x0001035f1830();
    if (iVar1 != 1) {
      puVar4 = auStack_5f0;
      func_0x000100d563cc();
      uStack_6d8 = puVar4[0x11];
      uStack_6e0 = puVar4[0x10];
      uStack_6c8 = puVar4[0x13];
      uStack_6d0 = puVar4[0x12];
      uStack_6c0 = puVar4[0x14];
      uStack_718 = puVar4[9];
      uStack_720 = puVar4[8];
      uStack_708 = puVar4[0xb];
      uStack_710 = puVar4[10];
      uStack_6f8 = puVar4[0xd];
      uStack_700 = puVar4[0xc];
      uStack_6e8 = puVar4[0xf];
      uStack_6f0 = puVar4[0xe];
      uStack_758 = puVar4[1];
      uStack_760 = *puVar4;
      uStack_748 = puVar4[3];
      uStack_750 = puVar4[2];
      uStack_738 = puVar4[5];
      uStack_740 = puVar4[4];
      uStack_728 = puVar4[7];
      uStack_730 = puVar4[6];
      func_0x0001035f4a20(&uStack_8d0,&uStack_760);
      goto LAB_1035f1598;
    }
  }
  uVar2 = 0;
LAB_1035f1598:
  return uVar2 & 1;
}



/* Entry: 1035f15b0; end: 1035f1627;  */

undefined8 FUN_1035f15b0(void)

{
  FUN_1035f1034(0);
  func_0x000107c61538();
  return 0;
}



/* Entry: 1035f1628; end: 1035f1817;  */

void FUN_1035f1628(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [368];
  undefined1 auStack_4a8 [368];
  undefined1 auStack_338 [368];
  undefined1 auStack_1c8 [376];
  
  func_0x0001035f8f80(auStack_4a8);
  func_0x000107c610b4(unaff_x20 + 0x10,auStack_4a8,0x170);
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0xf000000000000000;
  func_0x000107c610b4(auStack_338,param_1 + 0x10,0x170);
  func_0x000107c610b4(auStack_1c8,auStack_4a8,0x170);
  func_0x000107c610b8(unaff_x20 + 0x10,param_1 + 0x10,0x170);
  FUN_1035f5a88(auStack_338,auStack_618,0x112f7d280,&UNK_10dbe5a70);
  FUN_1035f8f14(auStack_1c8,0x112f7d280,&UNK_10dbe5a70);
  func_0x000107c61428(param_1 + 0x180,auStack_618,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  uVar5 = *(undefined8 *)(param_1 + 400);
  func_0x000107c61428(unaff_x20 + 0x180,auStack_630,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x20 + 0x180) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar3;
  *(undefined8 *)(unaff_x20 + 400) = uVar5;
  func_0x000100d563e0(uVar1,uVar3,uVar5);
  func_0x000100d563fc(uVar2,uVar4,uVar6);
  func_0x000107c61428(param_1 + 0x198,auStack_648,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  uVar3 = *(undefined8 *)(param_1 + 0x1a0);
  uVar5 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x000107c61428(unaff_x20 + 0x198,auStack_660,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x20 + 0x198) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar5;
  func_0x000100d563e0(uVar1,uVar3,uVar5);
  func_0x000100d563fc(uVar2,uVar4,uVar6);
  func_0x000107c61428(param_1 + 0x1b0,auStack_678,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000100d563e0(uVar1,uVar3,uVar6);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x1b0,auStack_690,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar6;
  func_0x000100d563fc(uVar2,uVar4,uVar5);
  return;
}



/* Entry: 1035f1818; end: 1035f183b;  */

int FUN_1035f1818(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(ulong *)(param_1 + 8) >> 1);
  iVar1 = 0;
  if (0x80000000 < uVar2) {
    iVar1 = -uVar2;
  }
  return iVar1;
}



/* Entry: 1035f183c; end: 1035f186f;  */

undefined8 FUN_1035f183c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001035f64ac(param_2,param_1,&UNK_11066c3a0);
  return param_2;
}



/* Entry: 1035f1870; end: 1035f18af;  */

void FUN_1035f1870(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 1;
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xcfffffffffffffff;
  return;
}



/* Entry: 1035f18b0; end: 1035f1907;  */

void FUN_1035f18b0(void)

{
  long unaff_x20;
  
  FUN_1035f8f14(unaff_x20 + 0x10,0x112f7d280,&UNK_10dbe5a70);
  func_0x000100d563fc(*(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400));
  func_0x000100d563fc(*(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000100d563fc(*(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1035f1908; end: 1035f1997;  */

void FUN_1035f1908(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_1035f1034(0);
    func_0x000107c613fc();
    FUN_1035f1628(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1035f1998();
  return;
}



/* Entry: 1035f1998; end: 1035f1aaf;  */

/* WARNING: Removing unreachable block (ram,0x0001035f1a80) */
/* WARNING: Removing unreachable block (ram,0x0001035f1a38) */
/* WARNING: Removing unreachable block (ram,0x0001035f1a64) */

void FUN_1035f1998(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  while ((lVar1 = param_3, lVar2 = param_4, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 < 3) {
      if (lVar1 == 1) {
        FUN_1035f1ab0(param_1,param_2,param_3,param_4);
      }
      else if (lVar1 == 2) {
        FUN_1035f1f74(param_1,param_2,param_3,param_4);
      }
    }
    else if (lVar1 == 3) {
      FUN_1035f2230(param_2,param_1,param_3,param_4);
    }
    else if (lVar1 == 4) {
      FUN_1035f22c4(param_2,param_1,param_3,param_4);
    }
    else if (lVar1 == 5) {
      FUN_1035f2358(param_2,param_1,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1035f1ab0; end: 1035f1f73;  */

/* WARNING: Removing unreachable block (ram,0x0001035f1e90) */

void FUN_1035f1ab0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x21;
  code *pcVar8;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined1 auStack_8c0 [368];
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [368];
  undefined1 auStack_1c0 [368];
  
  puVar5 = &uStack_a30;
  FUN_1035f8e84(&uStack_3d8);
  uStack_3f8 = uStack_350;
  uStack_400 = uStack_358;
  uStack_3e8 = uStack_340;
  uStack_3f0 = uStack_348;
  uStack_3e0 = uStack_338;
  uStack_438 = uStack_390;
  uStack_440 = uStack_398;
  uStack_428 = uStack_380;
  uStack_430 = uStack_388;
  uStack_408 = uStack_360;
  uStack_410 = uStack_368;
  uStack_418 = uStack_370;
  uStack_420 = uStack_378;
  uStack_478 = uStack_3d0;
  uStack_480 = uStack_3d8;
  uStack_468 = uStack_3c0;
  uStack_470 = uStack_3c8;
  uStack_448 = uStack_3a0;
  uStack_450 = uStack_3a8;
  uStack_458 = uStack_3b0;
  uStack_460 = uStack_3b8;
  func_0x000107c610b4(auStack_330,param_1 + 0x10,0x170);
  func_0x000107c610b4(auStack_1c0,param_1 + 0x10,0x170);
  puVar2 = auStack_330;
  FUN_1035f1818();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    func_0x000107c610b4(&uStack_750,auStack_1c0,0x170);
    puVar3 = auStack_1c0;
    func_0x0001035f1830();
    if ((int)puVar3 != 1) {
      puVar4 = &uStack_750;
      func_0x000100d563cc();
      uStack_4a8 = uStack_3f8;
      uStack_4b0 = uStack_400;
      uStack_498 = uStack_3e8;
      uStack_4a0 = uStack_3f0;
      uStack_490 = uStack_3e0;
      uStack_4e8 = uStack_438;
      uStack_4f0 = uStack_440;
      uStack_4d8 = uStack_428;
      uStack_4e0 = uStack_430;
      uStack_4b8 = uStack_408;
      uStack_4c0 = uStack_410;
      uStack_4c8 = uStack_418;
      uStack_4d0 = uStack_420;
      uStack_528 = uStack_478;
      uStack_530 = uStack_480;
      uStack_518 = uStack_468;
      uStack_520 = uStack_470;
      uStack_4f8 = uStack_448;
      uStack_500 = uStack_450;
      uStack_508 = uStack_458;
      uStack_510 = uStack_460;
      func_0x000107c610b4(auStack_8c0,auStack_330,0x170);
      FUN_1035f183c(auStack_8c0,&uStack_a30);
      FUN_1035f8f14(&uStack_530,0x112f7d638,&UNK_10dbe5f60);
      uStack_a18 = puVar4[3];
      uStack_a20 = puVar4[2];
      uStack_a08 = puVar4[5];
      uStack_a10 = puVar4[4];
      uStack_a28 = puVar4[1];
      uStack_a30 = *puVar4;
      uStack_9d8 = puVar4[0xb];
      uStack_9e0 = puVar4[10];
      uStack_9c8 = puVar4[0xd];
      uStack_9d0 = puVar4[0xc];
      uStack_9f8 = puVar4[7];
      uStack_a00 = puVar4[6];
      uStack_9e8 = puVar4[9];
      uStack_9f0 = puVar4[8];
      uStack_9a8 = puVar4[0x11];
      uStack_9b0 = puVar4[0x10];
      uStack_998 = puVar4[0x13];
      uStack_9a0 = puVar4[0x12];
      uStack_990 = puVar4[0x14];
      uStack_9b8 = puVar4[0xf];
      uStack_9c0 = puVar4[0xe];
      func_0x0001035f8ed4(&uStack_a30);
      uStack_3f8 = uStack_9a8;
      uStack_400 = uStack_9b0;
      uStack_3e8 = uStack_998;
      uStack_3f0 = uStack_9a0;
      uStack_3e0 = uStack_990;
      uStack_438 = uStack_9e8;
      uStack_440 = uStack_9f0;
      uStack_428 = uStack_9d8;
      uStack_430 = uStack_9e0;
      uStack_408 = uStack_9b8;
      uStack_410 = uStack_9c0;
      uStack_418 = uStack_9c8;
      uStack_420 = uStack_9d0;
      uStack_478 = uStack_a28;
      uStack_480 = uStack_a30;
      uStack_468 = uStack_a18;
      uStack_470 = uStack_a20;
      uStack_448 = uStack_9f8;
      uStack_450 = uStack_a00;
      uStack_458 = uStack_a08;
      uStack_460 = uStack_a10;
      puVar3 = (undefined1 *)puVar5;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_1035f5d84();
  (*pcVar8)(&uStack_480,&UNK_11066c418,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_558 = uStack_3f8;
    uStack_560 = uStack_400;
    uStack_548 = uStack_3e8;
    uStack_550 = uStack_3f0;
    uStack_598 = uStack_438;
    uStack_5a0 = uStack_440;
    uStack_588 = uStack_428;
    uStack_590 = uStack_430;
    uStack_568 = uStack_408;
    uStack_570 = uStack_410;
    uStack_578 = uStack_418;
    uStack_580 = uStack_420;
    uStack_5d8 = uStack_478;
    uStack_5e0 = uStack_480;
    uStack_5c8 = uStack_468;
    uStack_5d0 = uStack_470;
    uStack_5a8 = uStack_448;
    uStack_5b0 = uStack_450;
    uStack_5b8 = uStack_458;
    uStack_5c0 = uStack_460;
    uStack_4a8 = uStack_3f8;
    uStack_4b0 = uStack_400;
    uStack_498 = uStack_3e8;
    uStack_4a0 = uStack_3f0;
    uStack_4e8 = uStack_438;
    uStack_4f0 = uStack_440;
    uStack_4d8 = uStack_428;
    uStack_4e0 = uStack_430;
    uStack_4b8 = uStack_408;
    uStack_4c0 = uStack_410;
    uStack_4c8 = uStack_418;
    uStack_4d0 = uStack_420;
    uStack_528 = uStack_478;
    uStack_530 = uStack_480;
    uStack_518 = uStack_468;
    uStack_520 = uStack_470;
    uStack_540 = uStack_3e0;
    uStack_490 = uStack_3e0;
    uStack_4f8 = uStack_448;
    uStack_500 = uStack_450;
    uStack_508 = uStack_458;
    uStack_510 = uStack_460;
    iVar1 = (int)&uStack_5e0;
    func_0x0001035f8eac();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_6c8 = uStack_558;
        uStack_6d0 = uStack_560;
        uStack_6b8 = uStack_548;
        uStack_6c0 = uStack_550;
        uStack_6b0 = uStack_540;
        uStack_708 = uStack_598;
        uStack_710 = uStack_5a0;
        uStack_6f8 = uStack_588;
        uStack_700 = uStack_590;
        uStack_6e8 = uStack_578;
        uStack_6f0 = uStack_580;
        uStack_6d8 = uStack_568;
        uStack_6e0 = uStack_570;
        uStack_748 = uStack_5d8;
        uStack_750 = uStack_5e0;
        uStack_738 = uStack_5c8;
        uStack_740 = uStack_5d0;
        uStack_728 = uStack_5b8;
        uStack_730 = uStack_5c0;
        uStack_718 = uStack_5a8;
        uStack_720 = uStack_5b0;
        func_0x0001034cc2ac(&uStack_750,auStack_8c0);
      }
      else {
        pcVar8 = *(code **)(param_4 + 8);
        uStack_6c8 = uStack_558;
        uStack_6d0 = uStack_560;
        uStack_6b8 = uStack_548;
        uStack_6c0 = uStack_550;
        uStack_6b0 = uStack_540;
        uStack_708 = uStack_598;
        uStack_710 = uStack_5a0;
        uStack_6f8 = uStack_588;
        uStack_700 = uStack_590;
        uStack_6e8 = uStack_578;
        uStack_6f0 = uStack_580;
        uStack_6d8 = uStack_568;
        uStack_6e0 = uStack_570;
        uStack_748 = uStack_5d8;
        uStack_750 = uStack_5e0;
        uStack_738 = uStack_5c8;
        uStack_740 = uStack_5d0;
        uStack_728 = uStack_5b8;
        uStack_730 = uStack_5c0;
        uStack_718 = uStack_5a8;
        uStack_720 = uStack_5b0;
        func_0x0001034cc2ac(&uStack_750,auStack_8c0);
        (*pcVar8)(param_3,param_4);
      }
      FUN_1035f8f14(&uStack_480,0x112f7d638,&UNK_10dbe5f60);
      uStack_9a8 = uStack_4a8;
      uStack_9b0 = uStack_4b0;
      uStack_998 = uStack_498;
      uStack_9a0 = uStack_4a0;
      uStack_990 = uStack_490;
      uStack_9e8 = uStack_4e8;
      uStack_9f0 = uStack_4f0;
      uStack_9d8 = uStack_4d8;
      uStack_9e0 = uStack_4e0;
      uStack_9c8 = uStack_4c8;
      uStack_9d0 = uStack_4d0;
      uStack_9b8 = uStack_4b8;
      uStack_9c0 = uStack_4c0;
      uStack_a28 = uStack_528;
      uStack_a30 = uStack_530;
      uStack_a18 = uStack_518;
      uStack_a20 = uStack_520;
      uStack_a08 = uStack_508;
      uStack_a10 = uStack_510;
      uStack_9f8 = uStack_4f8;
      uStack_a00 = uStack_500;
      FUN_1035f1870(&uStack_a30);
      func_0x000107c610b4(auStack_8c0,&uStack_a30,0x170);
      func_0x0001035f188c(auStack_8c0);
      func_0x000107c610b4(&uStack_750,param_1 + 0x10,0x170);
      func_0x000107c610b4(param_1 + 0x10,auStack_8c0,0x170);
      uVar6 = 0x112f7d280;
      puVar7 = &UNK_10dbe5a70;
      puVar5 = &uStack_750;
      goto LAB_1035f1da4;
    }
  }
  uVar6 = 0x112f7d638;
  puVar7 = &UNK_10dbe5f60;
  puVar5 = &uStack_480;
LAB_1035f1da4:
  FUN_1035f8f14(puVar5,uVar6,puVar7);
  return;
}



/* Entry: 1035f1f74; end: 1035f222f;  */

/* WARNING: Removing unreachable block (ram,0x0001035f2180) */

void FUN_1035f1f74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_d40 [368];
  undefined1 auStack_bd0 [368];
  undefined1 auStack_a60 [368];
  undefined1 auStack_8f0 [368];
  undefined1 auStack_780 [368];
  undefined1 auStack_610 [368];
  undefined1 auStack_4a0 [368];
  undefined1 auStack_330 [368];
  undefined1 auStack_1c0 [368];
  
  func_0x0001035f8ed8(auStack_4a0);
  func_0x000107c610b4(auStack_610,auStack_4a0,0x170);
  func_0x000107c610b4(auStack_330,param_1 + 0x10,0x170);
  func_0x000107c610b4(auStack_1c0,param_1 + 0x10,0x170);
  puVar3 = auStack_330;
  FUN_1035f1818();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_780,auStack_1c0,0x170);
    puVar3 = auStack_1c0;
    func_0x0001035f1830();
    if ((int)puVar3 == 1) {
      puVar3 = auStack_780;
      func_0x000100d563cc(puVar3);
      func_0x000107c610b4(auStack_bd0,auStack_610,0x170);
      func_0x000107c610b4(auStack_a60,auStack_330,0x170);
      FUN_1035f183c(auStack_a60,auStack_8f0);
      FUN_1035f8f14(auStack_bd0,0x112f7d640,&UNK_10dbe5f68);
      func_0x000107c610b4(auStack_8f0,puVar3,0x170);
      func_0x0001035f8f7c(auStack_8f0);
      puVar3 = auStack_610;
      func_0x000107c610b4(puVar3,auStack_8f0,0x170);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1035f5eb0();
  (*pcVar6)(auStack_610,&UNK_11066c4a0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000107c610b4(auStack_8f0,auStack_610,0x170);
    func_0x000107c610b4(auStack_780,auStack_610,0x170);
    iVar2 = (int)auStack_8f0;
    func_0x0001035f8f54();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        func_0x000107c610b4(auStack_a60,auStack_8f0,0x170);
        func_0x0001034cc23c(auStack_a60,auStack_bd0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        func_0x000107c610b4(auStack_a60,auStack_8f0,0x170);
        func_0x0001034cc23c(auStack_a60,auStack_bd0);
        (*pcVar6)(param_3,param_4);
      }
      FUN_1035f8f14(auStack_610,0x112f7d640,&UNK_10dbe5f68);
      func_0x000107c610b4(auStack_d40,auStack_780,0x170);
      func_0x0001035f1890(auStack_d40);
      func_0x000107c610b4(auStack_bd0,auStack_d40,0x170);
      func_0x0001035f188c(auStack_bd0);
      func_0x000107c610b4(auStack_a60,param_1 + 0x10,0x170);
      func_0x000107c610b4(param_1 + 0x10,auStack_bd0,0x170);
      uVar4 = 0x112f7d280;
      puVar5 = &UNK_10dbe5a70;
      puVar3 = auStack_a60;
      goto LAB_1035f20fc;
    }
  }
  uVar4 = 0x112f7d640;
  puVar5 = &UNK_10dbe5f68;
  puVar3 = auStack_610;
LAB_1035f20fc:
  FUN_1035f8f14(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 1035f2230; end: 1035f22c3;  */

void FUN_1035f2230(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x180,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035f22c4; end: 1035f2357;  */

void FUN_1035f22c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x198;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x198,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035f2358; end: 1035f23eb;  */

void FUN_1035f2358(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x1b0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035f23ec; end: 1035f2457;  */

void FUN_1035f23ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_1035f2458(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1035f2458; end: 1035f2563;  */

void FUN_1035f2458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long unaff_x21;
  undefined1 auStack_320 [368];
  undefined1 auStack_1b0 [368];
  
  iVar1 = (int)auStack_320;
  func_0x000107c610b4(auStack_320,param_1 + 0x10,0x170);
  func_0x000107c610b4(auStack_1b0,param_1 + 0x10,0x170);
  FUN_1035f1818();
  if (iVar1 != 1) {
    iVar1 = (int)auStack_1b0;
    func_0x0001035f1830();
    if (iVar1 == 1) {
      FUN_1035f2668(param_1,param_2,param_3,param_4);
    }
    else {
      FUN_1035f2564(param_1,param_2,param_3,param_4);
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_1035f2744(param_1,param_2,param_3,param_4);
  if (unaff_x21 == 0) {
    FUN_1035f27ec(param_1,param_2,param_3,param_4);
    FUN_1035f2898(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1035f2564; end: 1035f2667;  */

void FUN_1035f2564(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 auStack_490 [46];
  undefined1 auStack_320 [368];
  undefined1 auStack_1b0 [368];
  
  func_0x000107c610b4(auStack_320,param_1 + 0x10,0x170);
  func_0x000107c610b4(auStack_1b0,param_1 + 0x10,0x170);
  iVar1 = (int)auStack_320;
  FUN_1035f1818();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_490,auStack_1b0,0x170);
    iVar1 = (int)auStack_1b0;
    func_0x0001035f1830();
    if (iVar1 != 1) {
      puVar2 = auStack_490;
      func_0x000100d563cc();
      uStack_538 = puVar2[1];
      uStack_540 = *puVar2;
      uStack_528 = puVar2[3];
      uStack_530 = puVar2[2];
      uStack_518 = puVar2[5];
      uStack_520 = puVar2[4];
      uStack_508 = puVar2[7];
      uStack_510 = puVar2[6];
      uStack_4f8 = puVar2[9];
      uStack_500 = puVar2[8];
      uStack_4e8 = puVar2[0xb];
      uStack_4f0 = puVar2[10];
      uStack_4d8 = puVar2[0xd];
      uStack_4e0 = puVar2[0xc];
      uStack_4c8 = puVar2[0xf];
      uStack_4d0 = puVar2[0xe];
      uStack_4b8 = puVar2[0x11];
      uStack_4c0 = puVar2[0x10];
      uStack_4a8 = puVar2[0x13];
      uStack_4b0 = puVar2[0x12];
      uStack_4a0 = puVar2[0x14];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1035f5d84();
      (*pcVar3)(&uStack_540,1,&UNK_11066c418,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1035f2668);
  (*pcVar3)();
}



/* Entry: 1035f2668; end: 1035f2743;  */

void FUN_1035f2668(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_600 [368];
  undefined1 auStack_490 [368];
  undefined1 auStack_320 [368];
  undefined1 auStack_1b0 [368];
  
  puVar3 = auStack_600;
  func_0x000107c610b4(auStack_320,param_1 + 0x10,0x170);
  func_0x000107c610b4(auStack_1b0,param_1 + 0x10,0x170);
  iVar1 = (int)auStack_320;
  FUN_1035f1818();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_490,auStack_1b0,0x170);
    iVar1 = (int)auStack_1b0;
    func_0x0001035f1830();
    if (iVar1 == 1) {
      puVar2 = auStack_490;
      func_0x000100d563cc(puVar2);
      func_0x000107c610b4(auStack_600,puVar2,0x170);
      pcVar4 = *(code **)(param_4 + 0x88);
      FUN_1035f5eb0();
      (*pcVar4)(auStack_600,2,&UNK_11066c4a0,puVar3,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1035f2744);
  (*pcVar4)();
}



/* Entry: 1035f2744; end: 1035f27eb;  */

void FUN_1035f2744(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 400);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x188);
    uStack_70 = *(undefined8 *)(param_1 + 0x180);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,3,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f27ec; end: 1035f2897;  */

void FUN_1035f27ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x198);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1a8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,4,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035f2898; end: 1035f293f;  */

void FUN_1035f2898(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1c0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1b0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,5,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f2940; end: 1035f29ef;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035f2940(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_1035f29f0(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1035f29f0; end: 1035f3227;  */

undefined8 FUN_1035f29f0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined1 auStack_11a0 [368];
  undefined1 auStack_1030 [368];
  undefined1 auStack_ec0 [368];
  undefined8 auStack_d50 [46];
  undefined1 auStack_be0 [368];
  undefined8 auStack_a70 [92];
  undefined8 auStack_790 [46];
  undefined1 auStack_620 [368];
  undefined8 auStack_4b0 [46];
  undefined1 auStack_340 [368];
  undefined1 auStack_1d0 [368];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (undefined8 *)0x0;
  func_0x000107c610b4(auStack_340,param_1 + 0x10,0x170);
  func_0x000107c610b4(auStack_790,param_1 + 0x10,0x170);
  func_0x000107c610b4(auStack_1d0,param_2 + 0x10,0x170);
  func_0x000107c610b4(auStack_620,param_2 + 0x10,0x170);
  iVar1 = (int)auStack_790;
  FUN_1035f1818();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_620;
    FUN_1035f1818();
    if (iVar1 != 1) {
LAB_1035f2ca0:
      func_0x000107c610b4(auStack_a70,auStack_790,0x2e0);
      FUN_1035f5a88(auStack_340,auStack_4b0,0x112f7d280,&UNK_10dbe5a70);
      FUN_1035f5a88(auStack_1d0,auStack_4b0,0x112f7d280,&UNK_10dbe5a70);
      uVar6 = 0x112f7d630;
      puVar8 = &UNK_10dbe5f58;
      puVar4 = auStack_a70;
LAB_1035f2d04:
      FUN_1035f8f14(puVar4,uVar6,puVar8);
      return 0;
    }
    func_0x000107c610b4(auStack_a70,auStack_790,0x170);
    FUN_1035f5a88(auStack_340,auStack_4b0,0x112f7d280,&UNK_10dbe5a70);
    FUN_1035f5a88(auStack_1d0,auStack_4b0,0x112f7d280,&UNK_10dbe5a70);
    FUN_1035f8f14(auStack_a70,0x112f7d280,&UNK_10dbe5a70);
  }
  else {
    func_0x000107c610b4(auStack_be0,auStack_790,0x170);
    iVar1 = (int)auStack_620;
    FUN_1035f1818();
    if (iVar1 == 1) goto LAB_1035f2ca0;
    func_0x000107c610b4(auStack_11a0,auStack_620,0x170);
    func_0x000107c610b4(auStack_1030,auStack_620,0x170);
    func_0x000107c610b4(auStack_ec0,auStack_be0,0x170);
    func_0x000107c610b4(auStack_d50,auStack_be0,0x170);
    iVar1 = (int)auStack_ec0;
    func_0x0001035f1830();
    if (iVar1 == 1) {
      puVar4 = auStack_d50;
      func_0x000100d563cc(puVar4);
      func_0x000107c610b4(auStack_4b0,puVar4,0x170);
      func_0x000107c610b4(&uStack_1310,auStack_1030,0x170);
      iVar1 = (int)auStack_1030;
      func_0x0001035f1830();
      if (iVar1 != 1) {
        FUN_1035f5a88(auStack_340,auStack_a70,0x112f7d280,&UNK_10dbe5a70);
        puVar4 = auStack_a70;
LAB_1035f2f4c:
        FUN_1035f5a88(auStack_1d0,puVar4,0x112f7d280,&UNK_10dbe5a70);
        FUN_1035f8f14(auStack_11a0,0x112f7d280,&UNK_10dbe5a70);
        uVar6 = 0x112f7d280;
        puVar8 = &UNK_10dbe5a70;
        puVar4 = auStack_790;
        goto LAB_1035f2d04;
      }
      puVar4 = &uStack_1310;
      func_0x000100d563cc(puVar4);
      func_0x000107c610b4(auStack_a70,puVar4,0x170);
      FUN_1035f5a88(auStack_340,&uStack_1480,0x112f7d280,&UNK_10dbe5a70);
      FUN_1035f5a88(auStack_1d0,&uStack_1480,0x112f7d280,&UNK_10dbe5a70);
      puVar4 = auStack_4b0;
      func_0x0001035f4eb4(puVar4,auStack_a70);
    }
    else {
      puVar3 = auStack_d50;
      func_0x000100d563cc();
      uStack_1408 = puVar3[0xf];
      uStack_1410 = puVar3[0xe];
      uStack_13f8 = puVar3[0x11];
      uStack_1400 = puVar3[0x10];
      uStack_13e8 = puVar3[0x13];
      uStack_13f0 = puVar3[0x12];
      uStack_13e0 = puVar3[0x14];
      uStack_1448 = puVar3[7];
      uStack_1450 = puVar3[6];
      uStack_1438 = puVar3[9];
      uStack_1440 = puVar3[8];
      uStack_1428 = puVar3[0xb];
      uStack_1430 = puVar3[10];
      uStack_1418 = puVar3[0xd];
      uStack_1420 = puVar3[0xc];
      uStack_1478 = puVar3[1];
      uStack_1480 = *puVar3;
      uStack_1468 = puVar3[3];
      uStack_1470 = puVar3[2];
      uStack_1458 = puVar3[5];
      uStack_1460 = puVar3[4];
      func_0x000107c610b4(auStack_a70,auStack_1030,0x170);
      iVar1 = (int)auStack_1030;
      func_0x0001035f1830();
      if (iVar1 == 1) {
        FUN_1035f5a88(auStack_340,auStack_4b0,0x112f7d280,&UNK_10dbe5a70);
        puVar4 = auStack_4b0;
        goto LAB_1035f2f4c;
      }
      puVar3 = auStack_a70;
      func_0x000100d563cc();
      uStack_1298 = puVar3[0xf];
      uStack_12a0 = puVar3[0xe];
      uStack_1288 = puVar3[0x11];
      uStack_1290 = puVar3[0x10];
      uStack_1278 = puVar3[0x13];
      uStack_1280 = puVar3[0x12];
      uStack_1270 = puVar3[0x14];
      uStack_12d8 = puVar3[7];
      uStack_12e0 = puVar3[6];
      uStack_12c8 = puVar3[9];
      uStack_12d0 = puVar3[8];
      uStack_12b8 = puVar3[0xb];
      uStack_12c0 = puVar3[10];
      uStack_12a8 = puVar3[0xd];
      uStack_12b0 = puVar3[0xc];
      uStack_1308 = puVar3[1];
      uStack_1310 = *puVar3;
      uStack_12f8 = puVar3[3];
      uStack_1300 = puVar3[2];
      uStack_12e8 = puVar3[5];
      uStack_12f0 = puVar3[4];
      FUN_1035f5a88(auStack_340,auStack_4b0,0x112f7d280,&UNK_10dbe5a70);
      FUN_1035f5a88(auStack_1d0,auStack_4b0,0x112f7d280,&UNK_10dbe5a70);
      func_0x0001035f4a20(&uStack_1480,&uStack_1310);
    }
    FUN_1035f8f14(auStack_11a0,0x112f7d280,&UNK_10dbe5a70);
    FUN_1035f8f14(auStack_790,0x112f7d280,&UNK_10dbe5a70);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x180,auStack_790,0,0);
  func_0x000107c61428(param_2 + 0x180,auStack_be0,0,0);
  lVar5 = *(long *)(param_1 + 0x180);
  uVar7 = *(ulong *)(param_1 + 0x188);
  uVar9 = *(ulong *)(param_1 + 400);
  lVar14 = *(long *)(param_2 + 0x180);
  uVar13 = *(ulong *)(param_2 + 0x188);
  uVar12 = *(ulong *)(param_2 + 400);
  uVar2 = uVar9;
  uVar10 = uVar7;
  lVar11 = lVar5;
  if (uVar9 >> 0x3c < 0xf) {
    if (uVar12 >> 0x3c < 0xf) {
      func_0x000100d563e0(lVar5,uVar7,uVar9);
      if (lVar5 == lVar14) {
        func_0x000100d563e0(lVar5,uVar13,uVar12);
        uVar2 = uVar7;
        func_0x000100e25fcc(uVar7,uVar9,uVar13,uVar12);
        func_0x000100d563fc(lVar5,uVar13,uVar12);
        if ((uVar2 & 1) == 0) goto LAB_1035f3128;
        goto LAB_1035f2b68;
      }
LAB_1035f30fc:
      func_0x000100d563e0(lVar14,uVar13,uVar12);
      func_0x000100d563fc(lVar14,uVar13,uVar12);
      goto LAB_1035f3128;
    }
  }
  else if (0xe < uVar12 >> 0x3c) {
    func_0x000100d563e0(lVar5,uVar7,uVar9);
    func_0x000100d563e0(lVar14,uVar13,uVar12);
LAB_1035f2b68:
    func_0x000100d563fc(lVar5,uVar7,uVar9);
    func_0x000107c61428(param_1 + 0x198,auStack_d50,0,0);
    func_0x000107c61428(param_2 + 0x198,auStack_ec0,0,0);
    lVar5 = *(long *)(param_1 + 0x198);
    uVar7 = *(ulong *)(param_1 + 0x1a0);
    uVar9 = *(ulong *)(param_1 + 0x1a8);
    lVar14 = *(long *)(param_2 + 0x198);
    uVar13 = *(ulong *)(param_2 + 0x1a0);
    uVar12 = *(ulong *)(param_2 + 0x1a8);
    uVar2 = uVar9;
    uVar10 = uVar7;
    lVar11 = lVar5;
    if (uVar9 >> 0x3c < 0xf) {
      if (0xe < uVar12 >> 0x3c) goto LAB_1035f3064;
      func_0x000100d563e0(lVar5,uVar7,uVar9);
      if (lVar5 != lVar14) goto LAB_1035f30fc;
      func_0x000100d563e0(lVar5,uVar13,uVar12);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar13,uVar12);
      func_0x000100d563fc(lVar5,uVar13,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_1035f3128;
    }
    else {
      if (uVar12 >> 0x3c < 0xf) goto LAB_1035f3064;
      func_0x000100d563e0(lVar5,uVar7,uVar9);
      func_0x000100d563e0(lVar14,uVar13,uVar12);
    }
    func_0x000100d563fc(lVar5,uVar7,uVar9);
    func_0x000107c61428(param_1 + 0x1b0,auStack_1030,0,0);
    func_0x000107c61428(param_2 + 0x1b0,auStack_11a0,0,0);
    lVar5 = *(long *)(param_1 + 0x1b0);
    uVar7 = *(ulong *)(param_1 + 0x1b8);
    uVar9 = *(ulong *)(param_1 + 0x1c0);
    lVar14 = *(long *)(param_2 + 0x1b0);
    uVar13 = *(ulong *)(param_2 + 0x1b8);
    uVar12 = *(ulong *)(param_2 + 0x1c0);
    if (uVar9 >> 0x3c < 0xf) {
      if (uVar12 >> 0x3c < 0xf) {
        func_0x000100d563e0(lVar5,uVar7,uVar9);
        if (lVar5 == lVar14) {
          func_0x000100d563e0(lVar5,uVar13,uVar12);
          uVar2 = uVar7;
          func_0x000100e25fcc(uVar7,uVar9,uVar13,uVar12);
          func_0x000100d563fc(lVar5,uVar13,uVar12);
          if ((uVar2 & 1) != 0) goto LAB_1035f2c68;
        }
        else {
          func_0x000100d563e0(lVar14,uVar13,uVar12);
          func_0x000100d563fc(lVar14,uVar13,uVar12);
        }
        goto LAB_1035f3128;
      }
    }
    else if (0xe < uVar12 >> 0x3c) {
      func_0x000100d563e0(lVar5,uVar7,uVar9);
      func_0x000100d563e0(lVar14,uVar13,uVar12);
LAB_1035f2c68:
      func_0x000100d563fc(lVar5,uVar7,uVar9);
      return 1;
    }
    func_0x000100d563e0(lVar5,uVar7,uVar9);
    func_0x000100d563e0(lVar14,uVar13,uVar12);
    func_0x000100d563fc(lVar5,uVar7,uVar9);
    lVar5 = lVar14;
    uVar7 = uVar13;
    uVar9 = uVar12;
    goto LAB_1035f3128;
  }
LAB_1035f3064:
  lVar5 = lVar14;
  uVar7 = uVar13;
  uVar9 = uVar12;
  func_0x000100d563e0(lVar11,uVar10,uVar2);
  func_0x000100d563e0(lVar5,uVar7,uVar9);
  func_0x000100d563fc(lVar11,uVar10,uVar2);
LAB_1035f3128:
  func_0x000100d563fc(lVar5,uVar7,uVar9);
  return 0;
}



/* Entry: 1035f3228; end: 1035f3267;  */

void FUN_1035f3228(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1035f1034();
  func_0x000107c61538();
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1035f3268; end: 1035f328b;  */

undefined1  [16] FUN_1035f3268(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156520;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 1035f328c; end: 1035f32bb;  */

undefined1  [16] FUN_1035f328c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035f32bc; end: 1035f32ef;  */

void FUN_1035f32bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035f32f0; end: 1035f3303;  */

undefined8 FUN_1035f32f0(void)

{
  return 0x1035f3300;
}



/* Entry: 1035f3304; end: 1035f333b;  */

void FUN_1035f3304(void)

{
  FUN_1035f1908();
  return;
}



/* Entry: 1035f333c; end: 1035f333f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035f333c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035f3340; end: 1035f3377;  */

uint FUN_1035f3340(long param_1,long param_2)

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
  func_0x0001035f8e44();
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



/* Entry: 1035f3378; end: 1035f341f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035f3378(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1035f29f0(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}


