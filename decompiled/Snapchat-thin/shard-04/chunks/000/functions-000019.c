/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f7cbc4; end: 102f7cc53;  */

uint FUN_102f7cbc4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_e8 = param_1[0x17];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_28 = param_2[0x17];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_102f91af0(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 102f7cc54; end: 102f7cc9b;  */

void FUN_102f7cc54(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db704a0,0x1f,2);
  uRam0000000113805dc0 = uStack_38;
  uRam0000000113805db8 = uStack_40;
  uRam0000000113805dd0 = uStack_28;
  uRam0000000113805dc8 = uStack_30;
  uRam0000000113805de0 = uStack_18;
  uRam0000000113805dd8 = uStack_20;
  return;
}



/* Entry: 102f7cc9c; end: 102f7ccd3;  */

undefined1  [16] FUN_102f7cc9c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116110;
  auVar1._0_8_ = 0xd000000000000026;
  return auVar1;
}



/* Entry: 102f7ccd4; end: 102f7cd0b;  */

uint FUN_102f7ccd4(long param_1,long param_2)

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
  func_0x000102fa4f40();
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



/* Entry: 102f7cd0c; end: 102f7cdab;  */

/* WARNING: Possible PIC construction at 0x000102f7cd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7cd68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7cd5c) */
/* WARNING: Removing unreachable block (ram,0x000102f7cd6c) */

void FUN_102f7cd0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b770 != -1) {
    func_0x000107c61568(0x112f2b770,FUN_102f7cc54);
  }
  uVar5 = uRam0000000113805de0;
  uVar4 = uRam0000000113805dd8;
  uVar3 = uRam0000000113805dd0;
  uVar2 = uRam0000000113805dc8;
  uVar1 = uRam0000000113805dc0;
  *param_1 = uRam0000000113805db8;
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



/* Entry: 102f7cdac; end: 102f7cdbf;  */

void FUN_102f7cdac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c840;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c840,&UNK_10db6fcd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7cdc0; end: 102f7cdf7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f7cdc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_102f9812c();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 102f7cdf8; end: 102f7ce3f;  */

void FUN_102f7cdf8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70480,0x1c,2);
  uRam0000000113805df0 = uStack_38;
  uRam0000000113805de8 = uStack_40;
  uRam0000000113805e00 = uStack_28;
  uRam0000000113805df8 = uStack_30;
  uRam0000000113805e10 = uStack_18;
  uRam0000000113805e08 = uStack_20;
  return;
}



/* Entry: 102f7ce40; end: 102f7ce77;  */

undefined1  [16] FUN_102f7ce40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116140;
  auVar1._0_8_ = 0xd000000000000022;
  return auVar1;
}



/* Entry: 102f7ce78; end: 102f7ceaf;  */

uint FUN_102f7ce78(long param_1,long param_2)

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
  func_0x000102fa4f00();
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



/* Entry: 102f7ceb0; end: 102f7cf4f;  */

/* WARNING: Possible PIC construction at 0x000102f7cefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7cf0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7cf00) */
/* WARNING: Removing unreachable block (ram,0x000102f7cf10) */

void FUN_102f7ceb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b780 != -1) {
    func_0x000107c61568(0x112f2b780,FUN_102f7cdf8);
  }
  uVar5 = uRam0000000113805e10;
  uVar4 = uRam0000000113805e08;
  uVar3 = uRam0000000113805e00;
  uVar2 = uRam0000000113805df8;
  uVar1 = uRam0000000113805df0;
  *param_1 = uRam0000000113805de8;
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



/* Entry: 102f7cf50; end: 102f7cf63;  */

void FUN_102f7cf50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c830;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c830,&UNK_10db6fcc8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7cf64; end: 102f7cf9b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f7cf64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_102f98228();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 102f7cf9c; end: 102f7cfe3;  */

void FUN_102f7cf9c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70460,0x1d,2);
  uRam0000000113805e20 = uStack_38;
  uRam0000000113805e18 = uStack_40;
  uRam0000000113805e30 = uStack_28;
  uRam0000000113805e28 = uStack_30;
  uRam0000000113805e40 = uStack_18;
  uRam0000000113805e38 = uStack_20;
  return;
}



/* Entry: 102f7cfe4; end: 102f7d087;  */

void FUN_102f7cfe4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_102f7d088();
    }
    else if (lVar1 == 2) {
      FUN_102f7d254();
    }
  }
  return;
}



/* Entry: 102f7d088; end: 102f7d253;  */

/* WARNING: Removing unreachable block (ram,0x000102f7d1fc) */

void FUN_102f7d088(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x21;
  code *pcVar12;
  ulong uVar13;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar13 = param_1[4];
  puVar10 = param_1;
  if ((uVar13 >> 0x3d & 1) == 0) {
    uVar1 = param_1[2];
    uVar5 = param_1[3];
    uVar2 = *param_1;
    lVar6 = param_1[1];
    FUN_102f54eb8(uVar2,lVar6,uVar1,uVar5,uVar13);
    puVar10 = (undefined8 *)0x0;
    func_0x000102fa512c(0,0,0,0,0);
    uStack_90 = uVar2;
    lStack_88 = lVar6;
    uStack_80 = uVar1;
    uStack_78 = uVar5;
    uStack_70 = uVar13;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  FUN_102f9812c();
  (*pcVar12)(&uStack_90,&UNK_1105f3130,puVar10,param_3,param_4);
  uVar9 = uStack_70;
  uVar5 = uStack_78;
  uVar2 = uStack_80;
  lVar6 = lStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if ((uVar13 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar5,uVar9);
    }
    else {
      pcVar12 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar5,uVar9);
      (*pcVar12)(param_3,param_4);
    }
    func_0x000102fa512c(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70);
    uVar3 = *param_1;
    uVar7 = param_1[1];
    uVar4 = param_1[2];
    uVar8 = param_1[3];
    uVar11 = param_1[4];
    *param_1 = uVar1;
    param_1[1] = lVar6;
    param_1[2] = uVar2;
    param_1[3] = uVar5;
    param_1[4] = uVar9;
    FUN_102f54e60(uVar3,uVar7,uVar4,uVar8,uVar11);
  }
  else {
    func_0x000102fa512c(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 102f7d254; end: 102f7d433;  */

/* WARNING: Removing unreachable block (ram,0x000102f7d3d8) */

void FUN_102f7d254(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x21;
  code *pcVar13;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar11 = param_1[4];
  puVar10 = param_1;
  if ((uVar11 & 0x3000000000000000) != 0x3000000000000000 && (uVar11 & 0x2000000000000000) != 0) {
    uVar1 = param_1[2];
    uVar5 = param_1[3];
    uVar2 = *param_1;
    lVar6 = param_1[1];
    FUN_102f54eb8(uVar2,lVar6,uVar1,uVar5);
    puVar10 = (undefined8 *)0x0;
    func_0x000102fa512c(0,0,0,0,0);
    uStack_90 = uVar2;
    lStack_88 = lVar6;
    uStack_80 = uVar1;
    uStack_78 = uVar5;
    uStack_70 = uVar11 & 0xdfffffffffffffff;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  FUN_102f98228();
  (*pcVar13)(&uStack_90,&UNK_1105f31b8,puVar10,param_3,param_4);
  uVar9 = uStack_70;
  uVar5 = uStack_78;
  uVar2 = uStack_80;
  lVar6 = lStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if ((uVar11 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar5,uVar9);
    }
    else {
      pcVar13 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar5,uVar9);
      (*pcVar13)(param_3,param_4);
    }
    func_0x000102fa512c(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70);
    uVar3 = *param_1;
    uVar7 = param_1[1];
    uVar4 = param_1[2];
    uVar8 = param_1[3];
    uVar12 = param_1[4];
    *param_1 = uVar1;
    param_1[1] = lVar6;
    param_1[2] = uVar2;
    param_1[3] = uVar5;
    param_1[4] = uVar9 | 0x2000000000000000;
    FUN_102f54e60(uVar3,uVar7,uVar4,uVar8,uVar12);
  }
  else {
    func_0x000102fa512c(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 102f7d434; end: 102f7d4af;  */

void FUN_102f7d434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  if (((*(ulong *)(unaff_x20 + 0x20) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    if ((*(ulong *)(unaff_x20 + 0x20) >> 0x3d & 1) == 0) {
      FUN_102f7d4b0();
    }
    else {
      FUN_102f7d534();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      param_2,param_3);
  return;
}



/* Entry: 102f7d4b0; end: 102f7d533;  */

void FUN_102f7d4b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[4];
  if ((uStack_50 >> 0x3d & 1) == 0) {
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f9812c();
    (*pcVar1)(&uStack_70,1,&UNK_1105f3130,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f7d534);
  (*pcVar1)();
}



/* Entry: 102f7d534; end: 102f7d5cf;  */

void FUN_102f7d534(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[4];
  if (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_50 & 0x2000000000000000) != 0) {
    uStack_50 = uStack_50 & 0xdfffffffffffffff;
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f98228();
    (*pcVar1)(&uStack_70,2,&UNK_1105f31b8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f7d5d0);
  (*pcVar1)();
}



/* Entry: 102f7d5d0; end: 102f7d627;  */

void FUN_102f7d5d0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0x3000000000000000;
  param_1[6] = 0xc000000000000000;
  return;
}



/* Entry: 102f7d628; end: 102f7d63b;  */

void FUN_102f7d628(void)

{
  FUN_102f7cfe4();
  return;
}



/* Entry: 102f7d63c; end: 102f7d67b;  */

void FUN_102f7d63c(void)

{
  FUN_102f7d434();
  return;
}



/* Entry: 102f7d67c; end: 102f7d6b3;  */

uint FUN_102f7d67c(long param_1,long param_2)

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
  func_0x000102fa4ec0();
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



/* Entry: 102f7d6b4; end: 102f7d70b;  */

uint FUN_102f7d6b4(undefined8 *param_1)

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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_102f91168(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f7d70c; end: 102f7d7ab;  */

/* WARNING: Possible PIC construction at 0x000102f7d758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7d768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7d75c) */
/* WARNING: Removing unreachable block (ram,0x000102f7d76c) */

void FUN_102f7d70c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b790 != -1) {
    func_0x000107c61568(0x112f2b790,FUN_102f7cf9c);
  }
  uVar5 = uRam0000000113805e40;
  uVar4 = uRam0000000113805e38;
  uVar3 = uRam0000000113805e30;
  uVar2 = uRam0000000113805e28;
  uVar1 = uRam0000000113805e20;
  *param_1 = uRam0000000113805e18;
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



/* Entry: 102f7d7ac; end: 102f7d7bf;  */

void FUN_102f7d7ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c820;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c820,&UNK_10db6fcc0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7d7c0; end: 102f7d8d3;  */

void FUN_102f7d7c0(undefined8 param_1,undefined8 param_2)

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
  
  uStack_40 = unaff_x20[6];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f7d8d4; end: 102f7d973;  */

uint FUN_102f7d8d4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_102f91168(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f7d974; end: 102f7da1f;  */

void FUN_102f7d974(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x30);
      goto LAB_102f7d9b0;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_102f7d9b0:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x30);
  goto LAB_102f7d9b0;
}



/* Entry: 102f7da20; end: 102f7dadb;  */

void FUN_102f7da20(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[2] == 0 || ((**(code **)(param_3 + 0x10))(2,param_2,param_3), unaff_x21 == 0))))
     && ((unaff_x20[3] == 0 || ((**(code **)(param_3 + 0x10))(3,param_2,param_3), unaff_x21 == 0))))
  {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 102f7dadc; end: 102f7db2b;  */

void FUN_102f7dadc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc000000000000000;
  return;
}



/* Entry: 102f7db2c; end: 102f7db53;  */

void FUN_102f7db2c(void)

{
  FUN_102f7d974();
  return;
}



/* Entry: 102f7db54; end: 102f7db8b;  */

uint FUN_102f7db54(long param_1,long param_2)

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
  func_0x000102fa4e80();
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



/* Entry: 102f7db8c; end: 102f7dc33;  */

/* WARNING: Possible PIC construction at 0x000102f7dbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f7dbd8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f7db8c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
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
  
  pbVar15 = (byte *)*param_1;
  pbVar17 = (byte *)param_1[1];
  lVar24 = param_1[4];
  uVar16 = param_1[5];
  pbVar12 = (byte *)*unaff_x20;
  pbVar14 = (byte *)unaff_x20[1];
  pbVar10 = (byte *)unaff_x20[4];
  pbVar25 = (byte *)unaff_x20[5];
  if ((pbVar12 != pbVar15) || (pbVar14 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  bVar7 = false;
  if (((double)unaff_x20[2] == (double)param_1[2]) &&
     (bVar7 = false, !NAN((double)unaff_x20[3]) && !NAN((double)param_1[3]))) {
    bVar7 = (double)unaff_x20[3] == (double)param_1[3];
  }
  if (!bVar7) {
    return (byte *)0x0;
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
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
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
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar24,
                            uVar16);
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
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
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar10 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
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
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      lVar24 = CONCAT17(bVar34 | auVar43[7],
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
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
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



/* Entry: 102f7dc34; end: 102f7dcd3;  */

/* WARNING: Possible PIC construction at 0x000102f7dc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7dc90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7dc84) */
/* WARNING: Removing unreachable block (ram,0x000102f7dc94) */

void FUN_102f7dc34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b7a0 != -1) {
    func_0x000107c61568(0x112f2b7a0,0x102f7d92c);
  }
  uVar5 = uRam0000000113805e70;
  uVar4 = uRam0000000113805e68;
  uVar3 = uRam0000000113805e60;
  uVar2 = uRam0000000113805e58;
  uVar1 = uRam0000000113805e50;
  *param_1 = uRam0000000113805e48;
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



/* Entry: 102f7dcd4; end: 102f7dce7;  */

void FUN_102f7dcd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c810;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c810,&UNK_10db6fcb8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7dce8; end: 102f7ddeb;  */

void FUN_102f7dce8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = unaff_x20[1];
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f7ddec; end: 102f7de93;  */

/* WARNING: Possible PIC construction at 0x000102f7de3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f7de40) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f7ddec(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
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
  
  pbVar12 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  lVar24 = param_2[4];
  uVar16 = param_2[5];
  if ((pbVar12 != pbVar15) || (pbVar14 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  bVar7 = false;
  if (((double)param_1[2] == (double)param_2[2]) &&
     (bVar7 = false, !NAN((double)param_1[3]) && !NAN((double)param_2[3]))) {
    bVar7 = (double)param_1[3] == (double)param_2[3];
  }
  if (!bVar7) {
    return (byte *)0x0;
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
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
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
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar24,
                            uVar16);
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
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
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar10 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
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
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      lVar24 = CONCAT17(bVar34 | auVar43[7],
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
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
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



/* Entry: 102f7de94; end: 102f7dedb;  */

void FUN_102f7de94(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70410,0x20,2);
  uRam0000000113805e80 = uStack_38;
  uRam0000000113805e78 = uStack_40;
  uRam0000000113805e90 = uStack_28;
  uRam0000000113805e88 = uStack_30;
  uRam0000000113805ea0 = uStack_18;
  uRam0000000113805e98 = uStack_20;
  return;
}



/* Entry: 102f7dedc; end: 102f7df7f;  */

void FUN_102f7dedc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_102f7df80(param_1);
    }
    else if (lVar1 == 2) {
      FUN_102f7e12c();
    }
  }
  return;
}



/* Entry: 102f7df80; end: 102f7e12b;  */

/* WARNING: Removing unreachable block (ram,0x000102f7e0d8) */

void FUN_102f7df80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x21;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uStack_70 = 0;
  lStack_68 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_70,param_3,param_4);
  lVar7 = lStack_68;
  uVar6 = uStack_70;
  if (unaff_x21 == 0) {
    if (lStack_68 != 0) {
      uVar8 = param_2[2];
      uVar1 = *param_2;
      uVar3 = param_2[1];
      uVar2 = param_2[3];
      uVar4 = param_2[4];
      uVar9 = param_2[5];
      if (((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
        FUN_102fa50e0(uVar1,uVar3,uVar8,uVar2,uVar4,uVar9);
        FUN_102f55208(uVar1,uVar3,uVar8,uVar2,uVar4,uVar9);
      }
      else {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        uStack_78 = 0x3000000000000000;
        uStack_d0 = uVar1;
        uStack_c8 = uVar3;
        uStack_c0 = uVar8;
        uStack_b8 = uVar2;
        uStack_b0 = uVar4;
        uStack_a8 = uVar9;
        func_0x000107c61434(lStack_68);
        FUN_102fa50e0(uVar1,uVar3,uVar8,uVar2,uVar4,uVar9);
        func_0x000102fa51bc(&uStack_d0,0x112f2c890,&UNK_10db70400);
        (**(code **)(param_4 + 8))(param_3,param_4);
        func_0x000107c6142c(lVar7);
      }
      uVar1 = *param_2;
      uVar4 = param_2[1];
      uVar2 = param_2[2];
      uVar8 = param_2[3];
      uVar3 = param_2[4];
      uVar5 = param_2[5];
      *param_2 = uVar6;
      param_2[1] = lVar7;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      FUN_102f55208(uVar1,uVar4,uVar2,uVar8,uVar3,uVar5);
    }
  }
  else {
    func_0x000107c6142c(lStack_68);
  }
  return;
}



/* Entry: 102f7e12c; end: 102f7e323;  */

/* WARNING: Removing unreachable block (ram,0x000102f7e2c8) */

void FUN_102f7e12c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long unaff_x21;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uVar13 = param_1[5];
  puVar12 = param_1;
  if ((uVar13 & 0x3000000000000000) != 0x3000000000000000 && (uVar13 & 0x2000000000000000) != 0) {
    uVar1 = param_1[3];
    uVar6 = param_1[4];
    lVar2 = param_1[1];
    uVar7 = param_1[2];
    uVar15 = *param_1;
    FUN_102f90bb8(uVar15,lVar2,uVar7,uVar1,uVar6);
    puVar12 = (undefined8 *)0x0;
    FUN_102fa50f4(0,0,0,0,0,0);
    uStack_90 = uVar15;
    lStack_88 = lVar2;
    uStack_80 = uVar7;
    uStack_78 = uVar1;
    uStack_70 = uVar6;
    uStack_68 = uVar13 & 0xdfffffffffffffff;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  FUN_102f98420();
  (*pcVar14)(&uStack_90,&UNK_1105f3350,puVar12,param_3,param_4);
  uVar11 = uStack_68;
  uVar15 = uStack_70;
  uVar7 = uStack_78;
  uVar6 = uStack_80;
  lVar2 = lStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if ((uVar13 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar15,uVar11);
    }
    else {
      pcVar14 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar15,uVar11);
      (*pcVar14)(param_3,param_4);
    }
    FUN_102fa50f4(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar3 = *param_1;
    uVar8 = param_1[1];
    uVar4 = param_1[2];
    uVar9 = param_1[3];
    uVar5 = param_1[4];
    uVar10 = param_1[5];
    *param_1 = uVar1;
    param_1[1] = lVar2;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar15;
    param_1[5] = uVar11 | 0x2000000000000000;
    FUN_102f55208(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  }
  else {
    FUN_102fa50f4(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 102f7e324; end: 102f7e3c7;  */

void FUN_102f7e324(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (((unaff_x20[5] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    if (((ulong)unaff_x20[5] >> 0x3d & 1) == 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,unaff_x20[1],1,param_2,param_3);
    }
    else {
      FUN_102f7e3c8();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  return;
}



/* Entry: 102f7e3c8; end: 102f7e467;  */

void FUN_102f7e3c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = param_1[5];
  if (((uStack_48 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_48 & 0x2000000000000000) != 0) {
    uStack_50 = param_1[4];
    uStack_48 = uStack_48 & 0xdfffffffffffffff;
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f98420();
    (*pcVar1)(&uStack_70,2,&UNK_1105f3350,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f7e468);
  (*pcVar1)();
}



/* Entry: 102f7e468; end: 102f7e4c3;  */

void FUN_102f7e468(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[5] = 0x3000000000000000;
  param_1[7] = 0xc000000000000000;
  return;
}



/* Entry: 102f7e4c4; end: 102f7e4d7;  */

void FUN_102f7e4c4(void)

{
  FUN_102f7dedc();
  return;
}



/* Entry: 102f7e4d8; end: 102f7e50f;  */

void FUN_102f7e4d8(void)

{
  FUN_102f7e324();
  return;
}



/* Entry: 102f7e510; end: 102f7e547;  */

uint FUN_102f7e510(long param_1,long param_2)

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
  func_0x000102fa4e40();
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



/* Entry: 102f7e548; end: 102f7e58f;  */

uint FUN_102f7e548(undefined8 *param_1)

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
  FUN_102f90cf8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f7e590; end: 102f7e62f;  */

/* WARNING: Possible PIC construction at 0x000102f7e5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7e5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7e5e0) */
/* WARNING: Removing unreachable block (ram,0x000102f7e5f0) */

void FUN_102f7e590(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b7b0 != -1) {
    func_0x000107c61568(0x112f2b7b0,FUN_102f7de94);
  }
  uVar5 = uRam0000000113805ea0;
  uVar4 = uRam0000000113805e98;
  uVar3 = uRam0000000113805e90;
  uVar2 = uRam0000000113805e88;
  uVar1 = uRam0000000113805e80;
  *param_1 = uRam0000000113805e78;
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



/* Entry: 102f7e630; end: 102f7e643;  */

void FUN_102f7e630(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c800;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c800,&UNK_10db6fcb0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7e644; end: 102f7e747;  */

void FUN_102f7e644(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102f7e748; end: 102f7e7d7;  */

uint FUN_102f7e748(undefined8 *param_1,undefined8 *param_2)

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
  FUN_102f90cf8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f7e7d8; end: 102f7e8bb;  */

void FUN_102f7e7d8(undefined8 param_1,long param_2,long param_3)

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
        FUN_102f97e38();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_1105f2ef0;
LAB_102f7e860:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000102f972e8();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_1105f2e68;
        goto LAB_102f7e860;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102f7e8bc; end: 102f7e92f;  */

void FUN_102f7e8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_102f7e930();
  if (unaff_x21 == 0) {
    FUN_102f7e9bc();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 102f7e930; end: 102f7e9bb;  */

void FUN_102f7e930(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x28);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f97e38();
    (*pcVar1)(&uStack_60,1,&UNK_1105f2ef0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f7e9bc; end: 102f7ea3f;  */

void FUN_102f7e9bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x38);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f972e8();
    (*pcVar1)(&uStack_70,2,&UNK_1105f2e68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f7ea40; end: 102f7ea8b;  */

void FUN_102f7ea40(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}



/* Entry: 102f7ea8c; end: 102f7eabb;  */

undefined1  [16] FUN_102f7ea8c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102f7eabc; end: 102f7eaef;  */

void FUN_102f7eabc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 102f7eaf0; end: 102f7eb03;  */

undefined8 FUN_102f7eaf0(void)

{
  return 0x102f7eb00;
}



/* Entry: 102f7eb04; end: 102f7eb17;  */

void FUN_102f7eb04(void)

{
  FUN_102f7e7d8();
  return;
}



/* Entry: 102f7eb18; end: 102f7eb57;  */

void FUN_102f7eb18(void)

{
  FUN_102f7e8bc();
  return;
}



/* Entry: 102f7eb58; end: 102f7eb5b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f7eb58(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102f7eb5c; end: 102f7eb93;  */

uint FUN_102f7eb5c(long param_1,long param_2)

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
  func_0x000102fa4e00();
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



/* Entry: 102f7eb94; end: 102f7ebeb;  */

uint FUN_102f7eb94(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000102f914e0(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 102f7ebec; end: 102f7ec8b;  */

/* WARNING: Possible PIC construction at 0x000102f7ec38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7ec48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7ec3c) */
/* WARNING: Removing unreachable block (ram,0x000102f7ec4c) */

void FUN_102f7ebec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b7c0 != -1) {
    func_0x000107c61568(0x112f2b7c0,0x102f7e790);
  }
  uVar5 = uRam0000000113805ed0;
  uVar4 = uRam0000000113805ec8;
  uVar3 = uRam0000000113805ec0;
  uVar2 = uRam0000000113805eb8;
  uVar1 = uRam0000000113805eb0;
  *param_1 = uRam0000000113805ea8;
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



/* Entry: 102f7ec8c; end: 102f7ecc7;  */

void FUN_102f7ec8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c7f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c7f0,&UNK_10db6fca8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7ecc8; end: 102f7ede3;  */

void FUN_102f7ecc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f7ede4; end: 102f7ee83;  */

uint FUN_102f7ede4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x000102f914e0(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 102f7ee84; end: 102f7eebb;  */

undefined1  [16] FUN_102f7ee84(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116230;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 102f7eebc; end: 102f7eef3;  */

uint FUN_102f7eebc(long param_1,long param_2)

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
  func_0x000102fa4dc0();
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



/* Entry: 102f7eef4; end: 102f7ef93;  */

/* WARNING: Possible PIC construction at 0x000102f7ef40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7ef50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7ef44) */
/* WARNING: Removing unreachable block (ram,0x000102f7ef54) */

void FUN_102f7eef4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b7d0 != -1) {
    func_0x000107c61568(0x112f2b7d0,0x102f7ee3c);
  }
  uVar5 = uRam0000000113805f00;
  uVar4 = uRam0000000113805ef8;
  uVar3 = uRam0000000113805ef0;
  uVar2 = uRam0000000113805ee8;
  uVar1 = uRam0000000113805ee0;
  *param_1 = uRam0000000113805ed8;
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



/* Entry: 102f7ef94; end: 102f7efa7;  */

void FUN_102f7ef94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c7e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c7e0,&UNK_10db6fca0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7efa8; end: 102f7efdf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f7efa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_102f98714();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 102f7efe0; end: 102f7f0c7;  */

void FUN_102f7efe0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70300,0xb0,2);
  uRam0000000113805f10 = uStack_38;
  uRam0000000113805f08 = uStack_40;
  uRam0000000113805f20 = uStack_28;
  uRam0000000113805f18 = uStack_30;
  uRam0000000113805f30 = uStack_18;
  uRam0000000113805f28 = uStack_20;
  return;
}



/* Entry: 102f7f0c8; end: 102f7f717;  */

void FUN_102f7f0c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_4c8 [24];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [96];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
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
  
  puVar21 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar21 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar22 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar22 = 0;
  puVar19 = (undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *puVar19 = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  puVar14 = (undefined8 *)(unaff_x20 + 0x58);
  *puVar14 = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xe000000000000000;
  puVar15 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar15 = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *puVar16 = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 200) = 0xe000000000000000;
  puVar17 = (undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *puVar17 = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x110) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 1;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0xe000000000000000;
  func_0x000107c61428(param_1 + 0x10,auStack_1c8,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar21,auStack_1e0,1,0);
  *puVar21 = uVar18;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  func_0x000107c61428(param_1 + 0x20,auStack_1f8,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar19,auStack_210,1,0);
  *puVar19 = uVar18;
  func_0x000107c61428(param_1 + 0x28,auStack_228,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_240,1,0);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar18;
  func_0x000107c61428(param_1 + 0x30,auStack_258,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61428(puVar22,auStack_270,1,0);
  *puVar22 = uVar18;
  func_0x000107c61428(param_1 + 0x38,auStack_288,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_2a0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar6;
  func_0x000107c61434(uVar4);
  func_0x000100d2ebbc(uVar18,uVar5,uVar2,uVar6);
  func_0x000100d2ebd8(uVar20,uVar7,uVar3,uVar8);
  func_0x000107c61428(param_1 + 0x58,auStack_2b8,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61428(puVar14,auStack_2d0,1,0);
  *puVar14 = uVar18;
  func_0x000107c61428(param_1 + 0x60,auStack_2e8,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar13,auStack_300,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar13 = uVar18;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar20);
  func_0x000107c61428(param_1 + 0x70,auStack_318,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c61428(puVar15,auStack_330,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x78);
  *puVar15 = uVar18;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar20);
  func_0x000107c61428(param_1 + 0x80,auStack_348,0,0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_198 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_188 = *(undefined8 *)(param_1 + 0xa8);
  uStack_190 = *(undefined8 *)(param_1 + 0xa0);
  uStack_178 = *(undefined8 *)(param_1 + 0xb8);
  uStack_180 = *(undefined8 *)(param_1 + 0xb0);
  func_0x000107c61428(puVar16,auStack_360,1,0);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_170 = *puVar16;
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_1a8;
  *puVar16 = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_180;
  FUN_102fa5174(&uStack_1b0,&uStack_d0,0x112f2a138,&UNK_10db6af50);
  func_0x000102fa51bc(&uStack_170,0x112f2a138,&UNK_10db6af50);
  func_0x000107c61428(param_1 + 0xc0,auStack_378,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(unaff_x20 + 0xc0,auStack_390,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar18;
  *(undefined8 *)(unaff_x20 + 200) = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar20);
  func_0x000107c61428(param_1 + 0xd0,auStack_3a8,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0xd0);
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  uVar20 = *(undefined8 *)(param_1 + 0xf0);
  uVar8 = *(undefined8 *)(param_1 + 0xf8);
  uVar23 = *(undefined8 *)(param_1 + 0x100);
  func_0x000107c61428(puVar17,auStack_3c0,1,0);
  uVar24 = *puVar17;
  uVar3 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x100);
  *puVar17 = uVar18;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar7;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar20;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar23;
  FUN_102f9112c(uVar18,uVar6,uVar2,uVar7,uVar20,uVar8,uVar23);
  func_0x000102f54e24(uVar24,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11);
  func_0x000107c61428(param_1 + 0x108,auStack_3d8,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x108);
  uVar12 = *(undefined1 *)(param_1 + 0x110);
  func_0x000107c61428(unaff_x20 + 0x108,auStack_3f0,1,0);
  *(undefined8 *)(unaff_x20 + 0x108) = uVar18;
  *(undefined1 *)(unaff_x20 + 0x110) = uVar12;
  func_0x000107c61428((undefined8 *)(param_1 + 0x118),auStack_408,0,0);
  uStack_108 = *(undefined8 *)(param_1 + 0x140);
  uStack_110 = *(undefined8 *)(param_1 + 0x138);
  uStack_f8 = *(undefined8 *)(param_1 + 0x150);
  uStack_100 = *(undefined8 *)(param_1 + 0x148);
  uStack_e8 = *(undefined8 *)(param_1 + 0x160);
  uStack_f0 = *(undefined8 *)(param_1 + 0x158);
  uStack_d8 = *(undefined8 *)(param_1 + 0x170);
  uStack_e0 = *(undefined8 *)(param_1 + 0x168);
  uStack_128 = *(undefined8 *)(param_1 + 0x120);
  uStack_130 = *(undefined8 *)(param_1 + 0x118);
  uStack_118 = *(undefined8 *)(param_1 + 0x130);
  uStack_120 = *(undefined8 *)(param_1 + 0x128);
  func_0x000107c61428(puVar1,auStack_420,1,0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_d0 = *puVar1;
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_128;
  *puVar1 = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_120;
  FUN_102fa5174(&uStack_130,auStack_480,0x112f2b690,&UNK_10db6af60);
  func_0x000102fa51bc(&uStack_d0,0x112f2b690,&UNK_10db6af60);
  func_0x000107c61428(param_1 + 0x178,auStack_480,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x178);
  uVar6 = *(undefined8 *)(param_1 + 0x180);
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uVar7 = *(undefined8 *)(param_1 + 400);
  uVar20 = *(undefined8 *)(param_1 + 0x198);
  uVar8 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x000107c61428(unaff_x20 + 0x178,auStack_498,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar10 = *(undefined8 *)(unaff_x20 + 400);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x20 + 0x178) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar2;
  *(undefined8 *)(unaff_x20 + 400) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x198) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar8;
  FUN_102f91a38(uVar18,uVar6,uVar2,uVar7,uVar20,uVar8);
  func_0x000102f91a84(uVar3,uVar9,uVar4,uVar10,uVar5,uVar11);
  func_0x000107c61428(param_1 + 0x1a8,auStack_4b0,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x1a8);
  uVar2 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x1a8,auStack_4c8,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x1b0);
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar2;
  func_0x000107c6142c(uVar20);
  return;
}



/* Entry: 102f7f718; end: 102f7f7e3;  */

void FUN_102f7f718(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100d2ebd8(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  FUN_102fa3ff0(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 200));
  func_0x000102f54e24(*(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100));
  FUN_102fa402c(*(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000102f91a84(*(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x1b0));
  return;
}



/* Entry: 102f7f7e4; end: 102f7f873;  */

void FUN_102f7f7e4(void)

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
    FUN_102f90cd8(0);
    func_0x000107c613fc();
    FUN_102f7f0c8(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_102f7f874();
  return;
}



/* Entry: 102f7f874; end: 102f7fb1f;  */

/* WARNING: Removing unreachable block (ram,0x000102f7fb1c) */
/* WARNING: Removing unreachable block (ram,0x000102f7f994) */
/* WARNING: Removing unreachable block (ram,0x000102f7f9cc) */
/* WARNING: Removing unreachable block (ram,0x000102f7fb00) */
/* WARNING: Removing unreachable block (ram,0x000102f7f9b0) */
/* WARNING: Removing unreachable block (ram,0x000102f7fac0) */

void FUN_102f7f874(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x10;
        break;
      case 2:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x20;
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x28,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x28;
        break;
      case 4:
        func_0x000107c61428(param_1 + 0x30,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x30;
        break;
      case 5:
        FUN_102f7fb20(param_2,param_1,param_3,param_4);
        goto LAB_102f7f920;
      case 6:
        func_0x000107c61428(param_1 + 0x58,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x58;
        break;
      case 7:
        func_0x000107c61428(param_1 + 0x60,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x60;
        break;
      case 8:
        func_0x000107c61428(param_1 + 0x70,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x70;
        break;
      case 9:
        FUN_102f7fbb4(param_2,param_1,param_3,param_4);
        goto LAB_102f7f920;
      case 10:
        func_0x000107c61428(param_1 + 0xc0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xc0;
        break;
      case 0xb:
        FUN_102f7fc48(param_2,param_1,param_3,param_4);
        goto LAB_102f7f920;
      case 0xc:
        FUN_102f7fcdc(param_2,param_1,param_3,param_4);
        goto LAB_102f7f920;
      case 0xd:
        FUN_102f7fd70(param_2,param_1,param_3,param_4);
        goto LAB_102f7f920;
      case 0xe:
        FUN_102f7fe04(param_2,param_1,param_3,param_4);
        goto LAB_102f7f920;
      case 0xf:
        func_0x000107c61428(param_1 + 0x1a8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x1a8;
        break;
      default:
        goto LAB_102f7f920;
      }
      (*pcVar3)(lVar2,param_3,param_4);
      func_0x000107c614a8(auStack_68);
LAB_102f7f920:
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102f7fb20; end: 102f7fbb3;  */

void FUN_102f7fb20(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x38;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_102f97e38();
  (*pcVar2)(param_2 + 0x38,&UNK_1105f2ef0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102f7fbb4; end: 102f7fc47;  */

void FUN_102f7fbb4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_102f9851c();
  (*pcVar2)(param_2 + 0x80,&UNK_1105f33d8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102f7fc48; end: 102f7fcdb;  */

void FUN_102f7fc48(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_102f98324();
  (*pcVar2)(param_2 + 0xd0,&UNK_1105f3240,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102f7fcdc; end: 102f7fd6f;  */

void FUN_102f7fcdc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x108;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000102f92b70();
  (*pcVar2)(param_2 + 0x108,&UNK_1105f2bb0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102f7fd70; end: 102f7fe03;  */

void FUN_102f7fd70(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x118;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_102f98618();
  (*pcVar2)(param_2 + 0x118,&UNK_1105f34e8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102f7fe04; end: 102f7fe97;  */

void FUN_102f7fe04(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x178;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_102f98714();
  (*pcVar2)(param_2 + 0x178,&UNK_1105f3570,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102f7fe98; end: 102f7ff03;  */

void FUN_102f7fe98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_102f7ff04(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 102f7ff04; end: 102f80337;  */

void FUN_102f7ff04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x21;
  code *pcVar5;
  long lStack_140;
  undefined1 uStack_138;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar3);
    (*pcVar5)(uVar2,uVar3,1,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_102f7ff94;
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(param_1 + 0x20,auStack_80,0,0);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     ((**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x20),2,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  func_0x000107c61428(param_1 + 0x28,auStack_98,0,0);
  if ((*(long *)(param_1 + 0x28) != 0) &&
     ((**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x28),3,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  func_0x000107c61428(param_1 + 0x30,auStack_b0,0,0);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x30),4,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  FUN_102f80338(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  func_0x000107c61428(param_1 + 0x58,auStack_c8,0,0);
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x58),6,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 0x60,auStack_e0,0,0);
  uVar2 = *(ulong *)(param_1 + 0x60);
  uVar3 = *(ulong *)(param_1 + 0x68);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar3);
    (*pcVar5)(uVar2,uVar3,7,param_3,param_4);
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(param_1 + 0x70,auStack_f8,0,0);
  uVar2 = *(ulong *)(param_1 + 0x70);
  uVar3 = *(ulong *)(param_1 + 0x78);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar3);
    (*pcVar5)(uVar2,uVar3,8,param_3,param_4);
    func_0x000107c6142c(uVar3);
  }
  FUN_102f803e4(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0xc0,auStack_110,0,0);
  uVar2 = *(ulong *)(param_1 + 0xc0);
  uVar3 = *(ulong *)(param_1 + 200);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar3);
    (*pcVar5)(uVar2,uVar3,10,param_3,param_4);
    func_0x000107c6142c(uVar3);
  }
  FUN_102f80498(param_1,param_2,param_3,param_4);
  lVar4 = param_1 + 0x108;
  func_0x000107c61428(lVar4,auStack_128,0,0);
  if (*(long *)(param_1 + 0x108) != 0) {
    uStack_138 = *(undefined1 *)(param_1 + 0x110);
    pcVar5 = *(code **)(param_4 + 0x80);
    lStack_140 = *(long *)(param_1 + 0x108);
    func_0x000102f92b70();
    (*pcVar5)(&lStack_140,0xc,&UNK_1105f2bb0,lVar4,param_3,param_4);
  }
  FUN_102f80548(param_1,param_2,param_3,param_4);
  FUN_102f80608(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x1a8,&lStack_140,0,0);
  uVar2 = *(ulong *)(param_1 + 0x1a8);
  uVar3 = *(ulong *)(param_1 + 0x1b0);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return;
  }
  pcVar5 = *(code **)(param_4 + 0x70);
  func_0x000107c61434(uVar3);
  (*pcVar5)(uVar2,uVar3,0xf,param_3,param_4);
LAB_102f7ff94:
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 102f80338; end: 102f803e3;  */

void FUN_102f80338(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0x50);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x38);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_102f97e38();
    (*pcVar2)(&uStack_80,5,&UNK_1105f2ef0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 102f803e4; end: 102f80497;  */

void FUN_102f803e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0xb8);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x88);
    uStack_a0 = *(undefined8 *)(param_1 + 0x80);
    uStack_88 = *(undefined8 *)(param_1 + 0x98);
    uStack_90 = *(undefined8 *)(param_1 + 0x90);
    uStack_78 = *(undefined8 *)(param_1 + 0xa8);
    uStack_80 = *(undefined8 *)(param_1 + 0xa0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb0);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_102f9851c();
    (*pcVar2)(&uStack_a0,9,&UNK_1105f33d8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 102f80498; end: 102f80547;  */

void FUN_102f80498(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x100);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_88 = *(undefined8 *)(param_1 + 0xd8);
    uStack_90 = *(undefined8 *)(param_1 + 0xd0);
    uStack_78 = *(undefined8 *)(param_1 + 0xe8);
    uStack_80 = *(undefined8 *)(param_1 + 0xe0);
    uStack_68 = *(undefined8 *)(param_1 + 0xf8);
    uStack_70 = *(undefined8 *)(param_1 + 0xf0);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_102f98324();
    (*pcVar2)(&uStack_90,0xb,&UNK_1105f3240,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 102f80548; end: 102f80607;  */

void FUN_102f80548(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x118);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x150);
  if (lStack_88 != 1) {
    uStack_b8 = *(undefined8 *)(param_1 + 0x120);
    uStack_c0 = *puVar1;
    uStack_a8 = *(undefined8 *)(param_1 + 0x130);
    uStack_b0 = *(undefined8 *)(param_1 + 0x128);
    uStack_98 = *(undefined8 *)(param_1 + 0x140);
    uStack_a0 = *(undefined8 *)(param_1 + 0x138);
    uStack_90 = *(undefined8 *)(param_1 + 0x148);
    uStack_78 = *(undefined8 *)(param_1 + 0x160);
    uStack_80 = *(undefined8 *)(param_1 + 0x158);
    uStack_68 = *(undefined8 *)(param_1 + 0x170);
    uStack_70 = *(undefined8 *)(param_1 + 0x168);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_102f98618();
    (*pcVar3)(&uStack_c0,0xd,&UNK_1105f34e8,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 102f80608; end: 102f806b7;  */

void FUN_102f80608(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x178;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_80 = *(long *)(param_1 + 0x180);
  if (lStack_80 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x188);
    uStack_70 = *(undefined8 *)(param_1 + 400);
    uStack_88 = *(undefined8 *)(param_1 + 0x178);
    uStack_60 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_68 = *(undefined8 *)(param_1 + 0x198);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_102f98714();
    (*pcVar2)(&uStack_88,0xe,&UNK_1105f3570,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 102f806b8; end: 102f8152f;  */

undefined8 FUN_102f806b8(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined1 auStack_780 [96];
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
  undefined1 auStack_6b8 [24];
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  ulong uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  ulong uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
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
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_1d8,0,0);
  func_0x000107c61428(param_2 + 0x10,&uStack_5e0,0x20,0);
  uVar14 = *(ulong *)(param_1 + 0x10);
  if (uVar14 == *(ulong *)(param_2 + 0x10) && *(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)
     ) {
    func_0x000107c614a8(&uStack_5e0);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_5e0);
    if ((uVar14 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x20,auStack_1f0,0,0);
  lVar23 = *(long *)(param_1 + 0x20);
  func_0x000107c61428(param_2 + 0x20,auStack_208,0,0);
  if (lVar23 != *(long *)(param_2 + 0x20)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x28,auStack_220,0,0);
  lVar23 = *(long *)(param_1 + 0x28);
  func_0x000107c61428(param_2 + 0x28,auStack_238,0,0);
  if (lVar23 != *(long *)(param_2 + 0x28)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x30,auStack_250,0,0);
  lVar23 = *(long *)(param_1 + 0x30);
  func_0x000107c61428(param_2 + 0x30,auStack_268,0,0);
  if (lVar23 != *(long *)(param_2 + 0x30)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x38,auStack_280,0,0);
  func_0x000107c61428(param_2 + 0x38,auStack_298,0,0);
  lVar23 = *(long *)(param_1 + 0x38);
  lVar18 = *(long *)(param_1 + 0x40);
  uVar14 = *(ulong *)(param_1 + 0x48);
  uVar21 = *(ulong *)(param_1 + 0x50);
  lVar24 = *(long *)(param_2 + 0x38);
  lVar7 = *(long *)(param_2 + 0x40);
  uVar25 = *(ulong *)(param_2 + 0x48);
  uVar8 = *(ulong *)(param_2 + 0x50);
  if (uVar21 >> 0x3c < 0xf) {
    if (uVar8 >> 0x3c < 0xf) {
      if (lVar23 == lVar24) {
        func_0x000100d2ebbc(lVar23,lVar18,uVar14,uVar21);
        lVar24 = lVar23;
        if (lVar18 == lVar7) {
          func_0x000100d2ebbc(lVar23,lVar18,uVar25,uVar8);
          uVar15 = uVar14;
          func_0x000100e25fcc(uVar14,uVar21,uVar25,uVar8);
          func_0x000100d2ebd8(lVar23,lVar18,uVar25,uVar8);
          if ((uVar15 & 1) == 0) goto LAB_102f809fc;
          goto LAB_102f80860;
        }
      }
      else {
        func_0x000100d2ebbc(lVar23,lVar18,uVar14,uVar21);
      }
      func_0x000100d2ebbc(lVar24,lVar7,uVar25,uVar8);
      func_0x000100d2ebd8(lVar24,lVar7,uVar25,uVar8);
      goto LAB_102f809fc;
    }
  }
  else if (0xe < uVar8 >> 0x3c) {
    func_0x000100d2ebbc(lVar23,lVar18,uVar14,uVar21);
    func_0x000100d2ebbc(lVar24,lVar7,uVar25,uVar8);
LAB_102f80860:
    func_0x000100d2ebd8(lVar23,lVar18,uVar14,uVar21);
    func_0x000107c61428(param_1 + 0x58,auStack_2b0,0,0);
    lVar23 = *(long *)(param_1 + 0x58);
    func_0x000107c61428(param_2 + 0x58,auStack_2c8,0,0);
    if (lVar23 != *(long *)(param_2 + 0x58)) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0x60,auStack_2e0,0,0);
    func_0x000107c61428(param_2 + 0x60,&uStack_5e0,0x20,0);
    uVar14 = *(ulong *)(param_1 + 0x60);
    if ((uVar14 == *(ulong *)(param_2 + 0x60)) &&
       (*(long *)(param_1 + 0x68) == *(long *)(param_2 + 0x68))) {
      func_0x000107c614a8(&uStack_5e0);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_5e0);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
    }
    func_0x000107c61428(param_1 + 0x70,auStack_2f8,0,0);
    func_0x000107c61428(param_2 + 0x70,&uStack_5e0,0x20,0);
    uVar14 = *(ulong *)(param_1 + 0x70);
    if ((uVar14 == *(ulong *)(param_2 + 0x70)) &&
       (*(long *)(param_1 + 0x78) == *(long *)(param_2 + 0x78))) {
      func_0x000107c614a8(&uStack_5e0);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_5e0);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
    }
    func_0x000107c61428(param_1 + 0x80,auStack_398,0,0);
    func_0x000107c61428(param_2 + 0x80,auStack_3b0,0,0);
    uStack_5d8 = *(undefined8 *)(param_1 + 0x88);
    uStack_5e0 = *(undefined8 *)(param_1 + 0x80);
    uStack_5c8 = *(undefined8 *)(param_1 + 0x98);
    uStack_5d0 = *(undefined8 *)(param_1 + 0x90);
    uStack_5b8 = *(undefined8 *)(param_1 + 0xa8);
    uStack_5c0 = *(undefined8 *)(param_1 + 0xa0);
    uStack_5a8 = *(ulong *)(param_1 + 0xb8);
    uStack_5b0 = *(undefined8 *)(param_1 + 0xb0);
    uStack_338 = *(undefined8 *)(param_2 + 0x88);
    uStack_340 = *(undefined8 *)(param_2 + 0x80);
    uStack_328 = *(undefined8 *)(param_2 + 0x98);
    uStack_330 = *(undefined8 *)(param_2 + 0x90);
    uStack_658 = *(undefined8 *)(param_2 + 0x88);
    uStack_660 = *(undefined8 *)(param_2 + 0x80);
    uStack_648 = *(undefined8 *)(param_2 + 0x98);
    uStack_650 = *(undefined8 *)(param_2 + 0x90);
    uStack_638 = *(undefined8 *)(param_2 + 0xa8);
    uStack_640 = *(undefined8 *)(param_2 + 0xa0);
    uStack_308 = *(undefined8 *)(param_2 + 0xb8);
    uStack_310 = *(undefined8 *)(param_2 + 0xb0);
    uStack_318 = *(undefined8 *)(param_2 + 0xa8);
    uStack_320 = *(undefined8 *)(param_2 + 0xa0);
    uStack_628 = *(ulong *)(param_2 + 0xb8);
    uStack_630 = *(undefined8 *)(param_2 + 0xb0);
    uStack_5a0 = uStack_660;
    uStack_598 = uStack_658;
    uStack_590 = uStack_650;
    uStack_588 = uStack_648;
    uStack_580 = uStack_640;
    uStack_578 = uStack_638;
    uStack_570 = uStack_630;
    uStack_568 = uStack_628;
    uStack_380 = uStack_5e0;
    uStack_378 = uStack_5d8;
    uStack_370 = uStack_5d0;
    uStack_368 = uStack_5c8;
    uStack_360 = uStack_5c0;
    uStack_358 = uStack_5b8;
    uStack_350 = uStack_5b0;
    uStack_348 = uStack_5a8;
    if (uStack_5a8 >> 0x3c < 0xf) {
      if (0xe < uStack_628 >> 0x3c) {
LAB_102f80b98:
        uStack_6a0 = uStack_5e0;
        uStack_698 = uStack_5d8;
        uStack_690 = uStack_5d0;
        uStack_688 = uStack_5c8;
        uStack_680 = uStack_5c0;
        uStack_678 = uStack_5b8;
        uStack_670 = uStack_5b0;
        uStack_668 = uStack_5a8;
        FUN_102fa5174(&uStack_380,&uStack_1c0,0x112f2a138,&UNK_10db6af50);
        FUN_102fa5174(&uStack_340,&uStack_1c0,0x112f2a138,&UNK_10db6af50);
        uVar19 = 0x112f2b688;
        puVar20 = &UNK_10db6af58;
        goto LAB_102f80c00;
      }
      uStack_698 = *(undefined8 *)(param_2 + 0x88);
      uStack_6a0 = *(undefined8 *)(param_2 + 0x80);
      uStack_688 = *(undefined8 *)(param_2 + 0x98);
      uStack_690 = *(undefined8 *)(param_2 + 0x90);
      uStack_678 = *(undefined8 *)(param_2 + 0xa8);
      uStack_680 = *(undefined8 *)(param_2 + 0xa0);
      uStack_668 = *(undefined8 *)(param_2 + 0xb8);
      uStack_670 = *(undefined8 *)(param_2 + 0xb0);
      uStack_e8 = *(undefined8 *)(param_1 + 0x88);
      uStack_f0 = *(undefined8 *)(param_1 + 0x80);
      uStack_d8 = *(undefined8 *)(param_1 + 0x98);
      uStack_e0 = *(undefined8 *)(param_1 + 0x90);
      uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
      uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
      uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_b0 = uStack_6a0;
      uStack_a8 = uStack_698;
      uStack_a0 = uStack_690;
      uStack_98 = uStack_688;
      uStack_90 = uStack_680;
      uStack_88 = uStack_678;
      uStack_80 = uStack_670;
      uStack_78 = uStack_668;
      FUN_102fa5174(&uStack_380,&uStack_1c0,0x112f2a138,&UNK_10db6af50);
      FUN_102fa5174(&uStack_340,&uStack_1c0,0x112f2a138,&UNK_10db6af50);
      puVar16 = &uStack_f0;
      FUN_102f90cf8(puVar16,&uStack_b0);
      func_0x000102fa51bc(&uStack_6a0,0x112f2a138,&UNK_10db6af50);
      func_0x000102fa51bc(&uStack_5e0,0x112f2a138,&UNK_10db6af50);
      if (((ulong)puVar16 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (uStack_628 >> 0x3c < 0xf) goto LAB_102f80b98;
      uStack_698 = *(undefined8 *)(param_1 + 0x88);
      uStack_6a0 = *(undefined8 *)(param_1 + 0x80);
      uStack_688 = *(undefined8 *)(param_1 + 0x98);
      uStack_690 = *(undefined8 *)(param_1 + 0x90);
      uStack_678 = *(undefined8 *)(param_1 + 0xa8);
      uStack_680 = *(undefined8 *)(param_1 + 0xa0);
      uStack_668 = *(undefined8 *)(param_1 + 0xb8);
      uStack_670 = *(undefined8 *)(param_1 + 0xb0);
      FUN_102fa5174(&uStack_380,&uStack_1c0,0x112f2a138,&UNK_10db6af50);
      FUN_102fa5174(&uStack_340,&uStack_1c0,0x112f2a138,&UNK_10db6af50);
      func_0x000102fa51bc(&uStack_6a0,0x112f2a138,&UNK_10db6af50);
    }
    func_0x000107c61428(param_1 + 0xc0,auStack_3c8,0,0);
    func_0x000107c61428(param_2 + 0xc0,&uStack_5e0,0x20,0);
    uVar14 = *(ulong *)(param_1 + 0xc0);
    if ((uVar14 == *(ulong *)(param_2 + 0xc0)) &&
       (*(long *)(param_1 + 200) == *(long *)(param_2 + 200))) {
      func_0x000107c614a8(&uStack_5e0);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_5e0);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
    }
    func_0x000107c61428(param_1 + 0xd0,auStack_3e0,0,0);
    func_0x000107c61428(param_2 + 0xd0,auStack_3f8,0,0);
    uVar19 = *(undefined8 *)(param_1 + 0xd0);
    uVar9 = *(undefined8 *)(param_1 + 0xd8);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    uVar10 = *(undefined8 *)(param_1 + 0xe8);
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    uVar11 = *(undefined8 *)(param_1 + 0xf8);
    uVar25 = *(ulong *)(param_1 + 0x100);
    uVar4 = *(undefined8 *)(param_2 + 0xd0);
    uVar12 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = *(undefined8 *)(param_2 + 0xe0);
    uVar13 = *(undefined8 *)(param_2 + 0xe8);
    uVar6 = *(undefined8 *)(param_2 + 0xf8);
    uVar14 = *(ulong *)(param_2 + 0x100);
    uVar22 = *(undefined8 *)(param_2 + 0xf0);
    if (uVar25 >> 0x3c < 0xf) {
      if (0xe < uVar14 >> 0x3c) goto LAB_102f80ddc;
      uStack_160 = uVar19;
      uStack_158 = uVar9;
      uStack_150 = uVar2;
      uStack_148 = uVar10;
      uStack_140 = uVar3;
      uStack_138 = uVar11;
      uStack_130 = uVar25;
      uStack_128 = uVar4;
      uStack_120 = uVar12;
      uStack_118 = uVar5;
      uStack_110 = uVar13;
      uStack_108 = uVar22;
      uStack_100 = uVar6;
      uStack_f8 = uVar14;
      FUN_102f9112c(uVar19,uVar9,uVar2,uVar10,uVar3,uVar11,uVar25);
      FUN_102f9112c(uVar4,uVar12,uVar5,uVar13,uVar22,uVar6,uVar14);
      puVar16 = &uStack_160;
      func_0x000102f91168(puVar16,&uStack_128);
      func_0x000102f54e24(uVar4,uVar12,uVar5,uVar13,uVar22,uVar6,uVar14);
      func_0x000102f54e24(uVar19,uVar9,uVar2,uVar10,uVar3,uVar11,uVar25);
      if (((ulong)puVar16 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (uVar14 >> 0x3c < 0xf) {
LAB_102f80ddc:
        FUN_102f9112c(uVar19,uVar9,uVar2,uVar10,uVar3,uVar11,uVar25);
        FUN_102f9112c(uVar4,uVar12,uVar5,uVar13,uVar22,uVar6,uVar14);
        func_0x000102f54e24(uVar19,uVar9,uVar2,uVar10,uVar3,uVar11,uVar25);
        func_0x000102f54e24(uVar4,uVar12,uVar5,uVar13,uVar22,uVar6,uVar14);
        return 0;
      }
      FUN_102f9112c(uVar19,uVar9,uVar2,uVar10,uVar3,uVar11,uVar25);
      FUN_102f9112c(uVar4,uVar12,uVar5,uVar13,uVar22,uVar6,uVar14);
      func_0x000102f54e24(uVar19,uVar9,uVar2,uVar10,uVar3,uVar11,uVar25);
    }
    func_0x000107c61428(param_1 + 0x108,auStack_410,0,0);
    lVar24 = *(long *)(param_1 + 0x108);
    func_0x000107c61428(param_2 + 0x108,auStack_428,0,0);
    lVar23 = *(long *)(param_2 + 0x108);
    if (*(char *)(param_2 + 0x110) == '\x01') {
      if (lVar23 == 0) {
        if (lVar24 != 0) {
          return 0;
        }
      }
      else if (lVar23 == 1) {
        if (lVar24 != 1) {
          return 0;
        }
      }
      else if (lVar24 != 2) {
        return 0;
      }
    }
    else if (lVar24 != lVar23) {
      return 0;
    }
    puVar16 = (undefined8 *)(param_1 + 0x118);
    func_0x000107c61428(puVar16,auStack_508,0,0);
    puVar1 = (undefined8 *)(param_2 + 0x118);
    func_0x000107c61428(puVar1,auStack_520,0,0);
    uStack_5b8 = *(undefined8 *)(param_1 + 0x140);
    uStack_5c0 = *(undefined8 *)(param_1 + 0x138);
    uStack_5a8 = *(ulong *)(param_1 + 0x150);
    uStack_5b0 = *(undefined8 *)(param_1 + 0x148);
    uStack_598 = *(undefined8 *)(param_1 + 0x160);
    uStack_5a0 = *(undefined8 *)(param_1 + 0x158);
    uStack_588 = *(undefined8 *)(param_1 + 0x170);
    uStack_590 = *(undefined8 *)(param_1 + 0x168);
    uStack_5d8 = *(undefined8 *)(param_1 + 0x120);
    uStack_5e0 = *puVar16;
    uStack_5c8 = *(undefined8 *)(param_1 + 0x130);
    uStack_5d0 = *(undefined8 *)(param_1 + 0x128);
    uStack_5f8 = *(undefined8 *)(param_2 + 0x160);
    uStack_600 = *(undefined8 *)(param_2 + 0x158);
    uStack_5e8 = *(undefined8 *)(param_2 + 0x170);
    uStack_5f0 = *(undefined8 *)(param_2 + 0x168);
    uStack_618 = *(undefined8 *)(param_2 + 0x140);
    uStack_620 = *(undefined8 *)(param_2 + 0x138);
    lStack_608 = *(long *)(param_2 + 0x150);
    uStack_610 = *(undefined8 *)(param_2 + 0x148);
    uStack_638 = *(undefined8 *)(param_2 + 0x120);
    uStack_640 = *puVar1;
    uStack_628 = *(ulong *)(param_2 + 0x130);
    uStack_630 = *(undefined8 *)(param_2 + 0x128);
    uStack_580 = uStack_640;
    uStack_578 = uStack_638;
    uStack_570 = uStack_630;
    uStack_568 = uStack_628;
    uStack_560 = uStack_620;
    uStack_558 = uStack_618;
    uStack_550 = uStack_610;
    lStack_548 = lStack_608;
    uStack_540 = uStack_600;
    uStack_538 = uStack_5f8;
    uStack_530 = uStack_5f0;
    uStack_528 = uStack_5e8;
    uStack_4f0 = uStack_5e0;
    uStack_4e8 = uStack_5d8;
    uStack_4e0 = uStack_5d0;
    uStack_4d8 = uStack_5c8;
    uStack_4d0 = uStack_5c0;
    uStack_4c8 = uStack_5b8;
    uStack_4c0 = uStack_5b0;
    uStack_4b8 = uStack_5a8;
    uStack_4b0 = uStack_5a0;
    uStack_4a8 = uStack_598;
    uStack_4a0 = uStack_590;
    uStack_498 = uStack_588;
    uStack_490 = uStack_640;
    uStack_488 = uStack_638;
    uStack_480 = uStack_630;
    uStack_478 = uStack_628;
    uStack_470 = uStack_620;
    uStack_468 = uStack_618;
    uStack_460 = uStack_610;
    lStack_458 = lStack_608;
    uStack_450 = uStack_600;
    uStack_448 = uStack_5f8;
    uStack_440 = uStack_5f0;
    uStack_438 = uStack_5e8;
    if (uStack_5a8 == 1) {
      if (lStack_608 != 1) {
LAB_102f810e4:
        uStack_6a0 = uStack_5e0;
        uStack_698 = uStack_5d8;
        uStack_690 = uStack_5d0;
        uStack_688 = uStack_5c8;
        uStack_680 = uStack_5c0;
        uStack_678 = uStack_5b8;
        uStack_670 = uStack_5b0;
        uStack_668 = uStack_5a8;
        uStack_660 = uStack_5a0;
        uStack_658 = uStack_598;
        uStack_650 = uStack_590;
        uStack_648 = uStack_588;
        FUN_102fa5174(&uStack_4f0,&uStack_1c0,0x112f2b690,&UNK_10db6af60);
        FUN_102fa5174(&uStack_490,&uStack_1c0,0x112f2b690,&UNK_10db6af60);
        uVar19 = 0x112f2b698;
        puVar20 = &UNK_10db6af68;
LAB_102f80c00:
        func_0x000102fa51bc(&uStack_6a0,uVar19,puVar20);
        return 0;
      }
      uStack_678 = *(undefined8 *)(param_1 + 0x140);
      uStack_680 = *(undefined8 *)(param_1 + 0x138);
      uStack_668 = *(undefined8 *)(param_1 + 0x150);
      uStack_670 = *(undefined8 *)(param_1 + 0x148);
      uStack_658 = *(undefined8 *)(param_1 + 0x160);
      uStack_660 = *(undefined8 *)(param_1 + 0x158);
      uStack_648 = *(undefined8 *)(param_1 + 0x170);
      uStack_650 = *(undefined8 *)(param_1 + 0x168);
      uStack_698 = *(undefined8 *)(param_1 + 0x120);
      uStack_6a0 = *puVar16;
      uStack_688 = *(undefined8 *)(param_1 + 0x130);
      uStack_690 = *(undefined8 *)(param_1 + 0x128);
      FUN_102fa5174(&uStack_4f0,&uStack_1c0,0x112f2b690,&UNK_10db6af60);
      FUN_102fa5174(&uStack_490,&uStack_1c0,0x112f2b690,&UNK_10db6af60);
      func_0x000102fa51bc(&uStack_6a0,0x112f2b690,&UNK_10db6af60);
    }
    else {
      if (lStack_608 == 1) goto LAB_102f810e4;
      uStack_6f8 = *(undefined8 *)(param_2 + 0x140);
      uStack_700 = *(undefined8 *)(param_2 + 0x138);
      uStack_6e8 = *(undefined8 *)(param_2 + 0x150);
      uStack_6f0 = *(undefined8 *)(param_2 + 0x148);
      uStack_6d8 = *(undefined8 *)(param_2 + 0x160);
      uStack_6e0 = *(undefined8 *)(param_2 + 0x158);
      uStack_6c8 = *(undefined8 *)(param_2 + 0x170);
      uStack_6d0 = *(undefined8 *)(param_2 + 0x168);
      uStack_718 = *(undefined8 *)(param_2 + 0x120);
      uStack_720 = *puVar1;
      uStack_708 = *(undefined8 *)(param_2 + 0x130);
      uStack_710 = *(undefined8 *)(param_2 + 0x128);
      uStack_198 = *(undefined8 *)(param_1 + 0x140);
      uStack_1a0 = *(undefined8 *)(param_1 + 0x138);
      uStack_188 = *(undefined8 *)(param_1 + 0x150);
      uStack_190 = *(undefined8 *)(param_1 + 0x148);
      uStack_178 = *(undefined8 *)(param_1 + 0x160);
      uStack_180 = *(undefined8 *)(param_1 + 0x158);
      uStack_168 = *(undefined8 *)(param_1 + 0x170);
      uStack_170 = *(undefined8 *)(param_1 + 0x168);
      uStack_1b8 = *(undefined8 *)(param_1 + 0x120);
      uStack_1c0 = *puVar16;
      uStack_1a8 = *(undefined8 *)(param_1 + 0x130);
      uStack_1b0 = *(undefined8 *)(param_1 + 0x128);
      uStack_6a0 = uStack_720;
      uStack_698 = uStack_718;
      uStack_690 = uStack_710;
      uStack_688 = uStack_708;
      uStack_680 = uStack_700;
      uStack_678 = uStack_6f8;
      uStack_670 = uStack_6f0;
      uStack_668 = uStack_6e8;
      uStack_660 = uStack_6e0;
      uStack_658 = uStack_6d8;
      uStack_650 = uStack_6d0;
      uStack_648 = uStack_6c8;
      FUN_102fa5174(&uStack_4f0,auStack_780,0x112f2b690,&UNK_10db6af60);
      FUN_102fa5174(&uStack_490,auStack_780,0x112f2b690,&UNK_10db6af60);
      puVar16 = &uStack_1c0;
      func_0x000102f914e0(puVar16,&uStack_6a0);
      func_0x000102fa51bc(&uStack_720,0x112f2b690,&UNK_10db6af60);
      func_0x000102fa51bc(&uStack_5e0,0x112f2b690,&UNK_10db6af60);
      if (((ulong)puVar16 & 1) == 0) {
        return 0;
      }
    }
    func_0x000107c61428(param_1 + 0x178,&uStack_5e0,0,0);
    func_0x000107c61428(param_2 + 0x178,&uStack_720,0,0);
    uVar14 = *(ulong *)(param_1 + 0x178);
    lVar23 = *(long *)(param_1 + 0x180);
    uVar25 = *(ulong *)(param_1 + 0x188);
    lVar24 = *(long *)(param_1 + 400);
    uVar21 = *(ulong *)(param_1 + 0x198);
    uVar2 = *(undefined8 *)(param_1 + 0x1a0);
    uVar8 = *(ulong *)(param_2 + 0x178);
    lVar18 = *(long *)(param_2 + 0x180);
    uVar15 = *(ulong *)(param_2 + 0x188);
    lVar7 = *(long *)(param_2 + 400);
    uVar19 = *(undefined8 *)(param_2 + 0x198);
    uVar3 = *(undefined8 *)(param_2 + 0x1a0);
    if (lVar23 == 0) {
      if (lVar18 == 0) {
        FUN_102f91a38(uVar14,0,uVar25,lVar24,uVar21,uVar2);
        FUN_102f91a38(uVar8,0,uVar15,lVar7,uVar19,uVar3);
        goto LAB_102f814b0;
      }
    }
    else if (lVar18 != 0) {
      if ((((uVar14 != uVar8) || (lVar23 != lVar18)) &&
          (uVar17 = uVar14, func_0x000107c605b8(uVar14,lVar23,uVar8,lVar18,0), (uVar17 & 1) == 0))
         || (((uVar25 != uVar15 || (lVar24 != lVar7)) &&
             (uVar17 = uVar25, func_0x000107c605b8(uVar25,lVar24,uVar15,lVar7,0), (uVar17 & 1) == 0)
             ))) {
        FUN_102f91a38(uVar14,lVar23,uVar25,lVar24,uVar21,uVar2);
        FUN_102f91a38(uVar8,lVar18,uVar15,lVar7,uVar19,uVar3);
        func_0x000102f91a84(uVar8,lVar18,uVar15,lVar7,uVar19,uVar3);
        func_0x000102f91a84(uVar14,lVar23,uVar25,lVar24,uVar21,uVar2);
        return 0;
      }
      FUN_102f91a38(uVar14,lVar23,uVar25,lVar24,uVar21,uVar2);
      FUN_102f91a38(uVar8,lVar18,uVar15,lVar7,uVar19,uVar3);
      uVar17 = uVar21;
      func_0x000100e25fcc(uVar21,uVar2,uVar19,uVar3);
      func_0x000102f91a84(uVar8,lVar18,uVar15,lVar7,uVar19,uVar3);
      if ((uVar17 & 1) == 0) {
        func_0x000102f91a84(uVar14,lVar23,uVar25,lVar24,uVar21,uVar2);
        return 0;
      }
LAB_102f814b0:
      func_0x000102f91a84(uVar14,lVar23,uVar25,lVar24,uVar21,uVar2);
      func_0x000107c61428(param_1 + 0x1a8,auStack_780,0,0);
      func_0x000107c61428(param_2 + 0x1a8,auStack_6b8,0x20,0);
      uVar14 = *(ulong *)(param_1 + 0x1a8);
      if ((uVar14 == *(ulong *)(param_2 + 0x1a8)) &&
         (*(long *)(param_1 + 0x1b0) == *(long *)(param_2 + 0x1b0))) {
        func_0x000107c614a8(auStack_6b8);
        return 1;
      }
      func_0x000107c605b8();
      func_0x000107c614a8(auStack_6b8);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    FUN_102f91a38(uVar14,lVar23,uVar25,lVar24,uVar21,uVar2);
    FUN_102f91a38(uVar8,lVar18,uVar15,lVar7,uVar19,uVar3);
    func_0x000102f91a84(uVar14,lVar23,uVar25,lVar24,uVar21,uVar2);
    func_0x000102f91a84(uVar8,lVar18,uVar15,lVar7,uVar19,uVar3);
    return 0;
  }
  func_0x000100d2ebbc(lVar23,lVar18,uVar14,uVar21);
  func_0x000100d2ebbc(lVar24,lVar7,uVar25,uVar8);
  func_0x000100d2ebd8(lVar23,lVar18,uVar14,uVar21);
  lVar23 = lVar24;
  lVar18 = lVar7;
  uVar14 = uVar25;
  uVar21 = uVar8;
LAB_102f809fc:
  func_0x000100d2ebd8(lVar23,lVar18,uVar14,uVar21);
  return 0;
}



/* Entry: 102f81530; end: 102f8158f;  */

void FUN_102f81530(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f2b6a0 != -1) {
    func_0x000107c61568(0x112f2b6a0,0x102f7f028);
  }
  uVar1 = uRam0000000112f2b6a8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102f81590; end: 102f815b3;  */

undefined1  [16] FUN_102f81590(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116260;
  auVar1._0_8_ = 0xd000000000000024;
  return auVar1;
}



/* Entry: 102f815b4; end: 102f815e3;  */

undefined1  [16] FUN_102f815b4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102f815e4; end: 102f81617;  */

void FUN_102f815e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 102f81618; end: 102f8162b;  */

undefined8 FUN_102f81618(void)

{
  return 0x102f81628;
}


