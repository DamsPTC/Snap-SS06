/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a0d040; end: 103a0d0cb;  */

void FUN_103a0d040(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xb0);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar1)(&uStack_60,6,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103a0d0cc; end: 103a0d157;  */

void FUN_103a0d0cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xd8);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 200);
    uStack_60 = *(undefined8 *)(param_1 + 0xc0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103a122ec();
    (*pcVar1)(&uStack_60,9,&UNK_11078ede8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103a0d158; end: 103a0d1cf;  */

void FUN_103a0d158(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf000000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xf000000000000000;
  *(undefined2 *)(param_1 + 0x17) = 0x202;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xf000000000000000;
  return;
}



/* Entry: 103a0d1d0; end: 103a0d1ff;  */

undefined1  [16] FUN_103a0d1d0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103a0d200; end: 103a0d233;  */

void FUN_103a0d200(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103a0d234; end: 103a0d247;  */

undefined8 FUN_103a0d234(void)

{
  return 0x103a0d244;
}



/* Entry: 103a0d248; end: 103a0d25b;  */

void FUN_103a0d248(void)

{
  FUN_103a0caf8();
  return;
}



/* Entry: 103a0d25c; end: 103a0d2bb;  */

void FUN_103a0d25c(void)

{
  FUN_103a0ccc0();
  return;
}



/* Entry: 103a0d2bc; end: 103a0d2bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a0d2bc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103a0d2c0; end: 103a0d2f7;  */

uint FUN_103a0d2c0(long param_1,long param_2)

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
  FUN_103a17694();
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



/* Entry: 103a0d2f8; end: 103a0d397;  */

uint FUN_103a0d2f8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0x15];
  uStack_60 = param_1[0x14];
  uStack_48 = param_1[0x17];
  uStack_50 = param_1[0x16];
  uStack_38 = param_1[0x19];
  uStack_40 = param_1[0x18];
  uStack_28 = param_1[0x1b];
  uStack_30 = param_1[0x1a];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_68 = param_1[0x13];
  uStack_70 = param_1[0x12];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_138 = unaff_x20[0x15];
  uStack_140 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x17];
  uStack_130 = unaff_x20[0x16];
  uStack_118 = unaff_x20[0x19];
  uStack_120 = unaff_x20[0x18];
  uStack_108 = unaff_x20[0x1b];
  uStack_110 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0xd];
  uStack_180 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xf];
  uStack_170 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0x11];
  uStack_160 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x13];
  uStack_150 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[5];
  uStack_1c0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[7];
  uStack_1b0 = unaff_x20[6];
  uStack_198 = unaff_x20[9];
  uStack_1a0 = unaff_x20[8];
  uStack_188 = unaff_x20[0xb];
  uStack_190 = unaff_x20[10];
  uStack_1d8 = unaff_x20[1];
  uStack_1e0 = *unaff_x20;
  uStack_1c8 = unaff_x20[3];
  uStack_1d0 = unaff_x20[2];
  func_0x000103a0f820(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 103a0d398; end: 103a0d437;  */

/* WARNING: Possible PIC construction at 0x000103a0d3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a0d3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a0d3e8) */
/* WARNING: Removing unreachable block (ram,0x000103a0d3f8) */

void FUN_103a0d398(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9bf8 != -1) {
    func_0x000107c61568(0x112fc9bf8,FUN_103a0cab0);
  }
  uVar5 = uRam000000011380cbb0;
  uVar4 = uRam000000011380cba8;
  uVar3 = uRam000000011380cba0;
  uVar2 = uRam000000011380cb98;
  uVar1 = uRam000000011380cb90;
  *param_1 = uRam000000011380cb88;
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



/* Entry: 103a0d438; end: 103a0d473;  */

void FUN_103a0d438(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca498;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca498,&UNK_10dc3a628);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a0d474; end: 103a0d5cf;  */

void FUN_103a0d474(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_158 [72];
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
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_38 = unaff_x20[0x1b];
  uStack_40 = unaff_x20[0x1a];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  func_0x000107c6068c(auStack_158,0);
  func_0x000107c5fa50(auStack_158,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a0d5d0; end: 103a0d66f;  */

uint FUN_103a0d5d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_108 = param_1[0x1b];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_28 = param_2[0x1b];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  func_0x000103a0f820(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 103a0d670; end: 103a0dacf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a0d670(byte *param_1,byte *param_2,byte *param_3,byte *param_4,ulong param_5,
                    uint param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar23;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  long lVar24;
  undefined1 *puVar25;
  code *pcVar26;
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
  undefined1 auStack_a0 [8];
  byte *pbStack_98;
  undefined8 uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  uVar13 = (uint)param_3;
  puVar5 = auStack_a0;
  puVar25 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 == *(long *)(param_2 + 0x10)) {
    if ((lVar24 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      param_1 = param_1 + 0x38;
      pbVar11 = param_2 + 0x38;
      do {
        uVar13 = (uint)param_3;
        unaff_x25 = (byte *)0xc000000000000000;
        if (*(long *)(param_1 + -0x18) != *(long *)(pbVar11 + -0x18) ||
            *(int *)(param_1 + -0x10) != *(int *)(pbVar11 + -0x10)) goto LAB_103a0da68;
        unaff_x22 = *(ulong *)(param_1 + -8);
        unaff_x19 = *(byte **)param_1;
        unaff_x24 = *(byte **)(pbVar11 + -8);
        unaff_x23 = *(byte **)pbVar11;
        uVar1 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar20 = uVar1 >> 0x1e;
        uVar16 = (uint)((ulong)unaff_x23 >> 0x20);
        uVar18 = uVar16 >> 0x1e;
        iVar6 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((unaff_x22 != 0 || unaff_x19 != (byte *)0xc000000000000000) ||
                (ulong)unaff_x23 >> 0x3e < 3) || (unaff_x24 != (byte *)0x0)) ||
             (unaff_x23 != (byte *)0xc000000000000000)) goto joined_r0x000103a0d8e8;
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar20 == 0) {
              uVar21 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar17,iVar6)) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x103a0dabc);
                (*pcVar26)();
              }
              uVar21 = (ulong)(iVar17 - iVar6);
            }
joined_r0x000103a0d8e8:
            if (1 < uVar16 >> 0x1e) goto LAB_103a0d754;
LAB_103a0d788:
            if (uVar18 == 0) {
              uVar19 = (ulong)unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)((ulong)unaff_x24 >> 0x20);
              if (SBORROW4(iVar17,(int)unaff_x24)) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x103a0dab4);
                (*pcVar26)();
              }
              uVar19 = (ulong)(iVar17 - (int)unaff_x24);
            }
          }
          else {
            if (uVar20 == 2) {
              uVar21 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x103a0dab8);
                (*pcVar26)();
              }
              goto joined_r0x000103a0d8e8;
            }
            uVar21 = 0;
            if (uVar18 < 2) goto LAB_103a0d788;
LAB_103a0d754:
            if (uVar18 != 2) {
              if (uVar21 == 0) goto LAB_103a0d6d4;
              goto LAB_103a0da68;
            }
            uVar19 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
            if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x103a0dab0);
              (*pcVar26)();
            }
          }
          if (uVar21 != uVar19) goto LAB_103a0da68;
          if (0 < (long)uVar21) {
            param_2 = unaff_x19;
            param_3 = unaff_x24;
            param_4 = unaff_x23;
            if (uVar20 < 2) {
              if (uVar20 != 0) {
                lVar23 = (long)iVar6;
                pbStack_98 = (byte *)(((long)unaff_x22 >> 0x20) - lVar23);
                if ((long)unaff_x22 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x103a0dac0);
                  uStack_90 = unaff_x21;
                  (*pcVar26)();
                }
                uStack_90 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                pbVar12 = unaff_x24;
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000107c5ec30();
                if (pbVar12 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar7 = (byte *)0x0;
                  pbVar9 = (byte *)0x0;
                }
                else {
                  pbVar10 = pbVar12;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar23,(long)pbVar10)) {
                    /* WARNING: Does not return */
                    pcVar26 = (code *)SoftwareBreakpoint(1,0x103a0dacc);
                    (*pcVar26)();
                  }
                  pbVar12 = pbVar12 + (lVar23 - (long)pbVar10);
                  func_0x000107c5ec38();
                  if ((long)pbStack_98 <= (long)pbVar10) {
                    pbVar10 = pbStack_98;
                  }
                  pbVar7 = (byte *)0x0;
                  if (pbVar12 != (byte *)0x0) {
                    pbVar7 = pbVar12;
                  }
                  pbVar9 = (byte *)0x0;
                  if (pbVar12 != (byte *)0x0) {
                    pbVar9 = pbVar10 + (long)pbVar12;
                  }
                }
                unaff_x21 = uStack_90;
                unaff_x20 = (byte *)((ulong)unaff_x19 & 0x3fffffffffffffff);
                func_0x000100e25bdc(abStack_80,pbVar7,pbVar9);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                uVar13 = (uint)param_3;
                unaff_x25 = (byte *)0xc000000000000000;
                if ((abStack_80[0] & 1) != 0) goto LAB_103a0d6d4;
                goto LAB_103a0da68;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)(unaff_x22 >> 8);
              abStack_80[2] = (byte)(unaff_x22 >> 0x10);
              abStack_80[3] = (byte)(unaff_x22 >> 0x18);
              abStack_80[4] = (byte)(unaff_x22 >> 0x20);
              abStack_80[5] = (byte)(unaff_x22 >> 0x28);
              abStack_80[6] = (byte)(unaff_x22 >> 0x30);
              abStack_80[7] = (byte)(unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              pbVar12 = abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x24,unaff_x23);
              unaff_x20 = pbVar12;
LAB_103a0d9a8:
              func_0x000100e25bdc(&bStack_81,abStack_80,pbVar12);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              uVar13 = (uint)param_3;
              bVar27 = bStack_81;
            }
            else {
              if (uVar20 != 2) {
                abStack_80[8] = 0;
                abStack_80[9] = 0;
                abStack_80[10] = 0;
                abStack_80[0xb] = 0;
                abStack_80[0xc] = 0;
                abStack_80[0xd] = 0;
                abStack_80[0] = 0;
                abStack_80[1] = 0;
                abStack_80[2] = 0;
                abStack_80[3] = 0;
                abStack_80[4] = 0;
                abStack_80[5] = 0;
                abStack_80[6] = 0;
                abStack_80[7] = 0;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x00010006c00c(unaff_x24,unaff_x23);
                pbVar12 = abStack_80;
                goto LAB_103a0d9a8;
              }
              lVar23 = *(long *)(unaff_x22 + 0x10);
              pbStack_98 = *(byte **)(unaff_x22 + 0x18);
              uStack_90 = unaff_x21;
              func_0x00010006c00c(unaff_x22,unaff_x19);
              unaff_x25 = unaff_x24;
              func_0x00010006c00c(unaff_x24,unaff_x23);
              func_0x000107c5ec30();
              pbVar12 = unaff_x25;
              if (unaff_x25 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar23,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x103a0dac8);
                  (*pcVar26)();
                }
                unaff_x25 = unaff_x25 + (lVar23 - (long)pbVar12);
              }
              pbVar7 = pbStack_98 + -lVar23;
              if (SBORROW8((long)pbStack_98,lVar23)) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x103a0dac4);
                (*pcVar26)();
              }
              unaff_x20 = (byte *)((ulong)unaff_x19 & 0x3fffffffffffffff);
              func_0x000107c5ec38();
              unaff_x21 = uStack_90;
              if (unaff_x25 == (byte *)0x0) {
                pbVar12 = (byte *)0x0;
              }
              else {
                if ((long)pbVar7 <= (long)pbVar12) {
                  pbVar12 = pbVar7;
                }
                pbVar12 = pbVar12 + (long)unaff_x25;
              }
              func_0x000100e25bdc(abStack_80,unaff_x25,pbVar12);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              uVar13 = (uint)param_3;
              bVar27 = abStack_80[0];
            }
            if ((bVar27 & 1) == 0) goto LAB_103a0da68;
          }
        }
LAB_103a0d6d4:
        uVar13 = (uint)param_3;
        unaff_x25 = (byte *)0xc000000000000000;
        param_1 = param_1 + 0x20;
        pbVar11 = pbVar11 + 0x20;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    pbVar11 = (byte *)0x1;
  }
  else {
LAB_103a0da68:
    pbVar11 = (byte *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar11;
  }
  pcVar26 = FUN_103a0dad0;
  func_0x000107c60e78();
  if ((uVar13 & 0xff) == 2) {
    if ((param_6 & 0xff) != 2) {
      return (byte *)0x0;
    }
  }
  else {
    if ((param_6 & 0xff) == 2) {
      return (byte *)0x0;
    }
    if (((uVar13 ^ param_6) & 1) != 0) {
      return (byte *)0x0;
    }
  }
  uVar13 = uVar13 >> 8 & 0xff;
  uVar1 = param_6 >> 8 & 0xff;
  if (uVar13 == 2) {
    puVar5 = auStack_a0;
    if (uVar1 == 2) {
SUB_100e25fcc:
      do {
        *(long *)(puVar5 + -0x50) = lVar24;
        *(byte **)(puVar5 + -0x48) = unaff_x25;
        *(byte **)(puVar5 + -0x40) = unaff_x24;
        *(byte **)(puVar5 + -0x38) = unaff_x23;
        *(ulong *)(puVar5 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
        *(byte **)(puVar5 + -0x20) = unaff_x20;
        *(byte **)(puVar5 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar5 + -0x10) = puVar25;
        *(code **)(puVar5 + -8) = pcVar26;
        *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar13 = (uint)((ulong)param_2 >> 0x20);
        uVar16 = uVar13 >> 0x1e;
        uVar1 = (uint)(param_5 >> 0x20);
        uVar20 = uVar1 >> 0x1e;
        iVar6 = (int)pbVar11;
        pbVar12 = param_2;
        if ((ulong)param_2 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar11 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
             ((param_5 >> 0x3e < 3 ||
              ((uVar21 = 0, param_4 != (byte *)0x0 || (param_5 != 0xc000000000000000))))))
          goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar7 = (byte *)0x1;
        }
        else if (uVar13 >> 0x1e < 2) {
          if (uVar16 == 0) {
            uVar21 = (ulong)param_2 >> 0x30 & 0xff;
          }
          else {
            iVar17 = (int)((ulong)pbVar11 >> 0x20);
            if (SBORROW4(iVar17,iVar6)) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar26)();
            }
            uVar21 = (ulong)(iVar17 - iVar6);
          }
joined_r0x000100e26170:
          if (1 < uVar1 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar20 == 0) {
            uVar19 = param_5 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar17 = (int)((ulong)param_4 >> 0x20);
          if (SBORROW4(iVar17,(int)param_4)) {
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar26)();
          }
          if (uVar21 == (long)(iVar17 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar7 = (byte *)0x0;
        }
        else {
          if (uVar16 == 2) {
            uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
            if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar26)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar20 == 2) {
            uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
            if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar26)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar16 < 2) {
              if (uVar16 == 0) {
                puVar5[-0x70] = (char)pbVar11;
                puVar5[-0x6f] = (char)((ulong)pbVar11 >> 8);
                puVar5[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
                puVar5[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
                puVar5[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
                puVar5[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
                puVar5[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
                puVar5[-0x69] = (char)((ulong)pbVar11 >> 0x38);
                puVar5[-0x68] = (char)param_2;
                puVar5[-0x67] = (char)((ulong)param_2 >> 8);
                puVar5[-0x66] = (char)((ulong)param_2 >> 0x10);
                puVar5[-0x65] = (char)((ulong)param_2 >> 0x18);
                puVar5[-100] = (char)((ulong)param_2 >> 0x20);
                puVar5[-99] = (char)((ulong)param_2 >> 0x28);
                pbVar12 = puVar5 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar5 + -0x71,puVar5 + -0x70);
                pbVar7 = (byte *)(ulong)(byte)puVar5[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar6;
              unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar26)();
              }
              func_0x000107c5ec30();
              unaff_x24 = param_2;
              if (pbVar11 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar12 = pbVar11;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar26)();
                }
                pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar12);
                func_0x000107c5ec38();
                unaff_x19 = pbVar11;
                if (pbVar11 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar12) {
                    pbVar12 = unaff_x23;
                  }
                  pbVar12 = pbVar12 + (long)pbVar11;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar16 != 2) {
                *(undefined8 *)(puVar5 + -0x6a) = 0;
                *(undefined8 *)(puVar5 + -0x70) = 0;
                pbVar12 = puVar5 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar23 = *(long *)(pbVar11 + 0x10);
              unaff_x24 = *(byte **)(pbVar11 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar23,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar26)();
                }
                pbVar11 = pbVar11 + (lVar23 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar23;
              if (SBORROW8((long)unaff_x24,lVar23)) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar26)();
              }
              func_0x000107c5ec38();
              unaff_x25 = param_2;
              unaff_x19 = pbVar11;
              if (pbVar11 == (byte *)0x0) {
                pbVar12 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar12) {
                  pbVar12 = unaff_x23;
                }
                pbVar12 = pbVar12 + (long)pbVar11;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (byte *)((ulong)param_2 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar5 + -0x70,pbVar11,pbVar12,param_4,param_5);
            pbVar7 = (byte *)(ulong)(byte)puVar5[-0x70];
            unaff_x22 = param_5;
          }
          else {
            pbVar7 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x58)) {
          return pbVar7;
        }
        func_0x000107c60e78();
        *(byte **)(puVar5 + -0xc0) = unaff_x24;
        *(byte **)(puVar5 + -0xb8) = unaff_x23;
        *(ulong *)(puVar5 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar5 + -0xa8) = unaff_x21;
        *(byte **)(puVar5 + -0xa0) = unaff_x20;
        *(byte **)(puVar5 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x88) = &UNK_100e26304;
        pbVar9 = *(byte **)pbVar7;
        pbVar11 = *(byte **)(pbVar7 + 8);
        pbVar22 = *(byte **)(pbVar7 + 0x18);
        bVar27 = pbVar7[0x28];
        param_2 = (byte *)((ulong)*(uint *)(pbVar7 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar7 + 0x15) << 0x28 | (ulong)pbVar7[0x10]);
        pbVar10 = pbVar11;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar24 = *(long *)pbVar12;
              uVar8 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar9,lVar24,uVar8);
              return (byte *)(ulong)((uint)pbVar9 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar12 + 8);
            pbVar15 = *(byte **)(pbVar12 + 0x10);
            lVar24 = *(long *)pbVar12;
            uVar8 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar9,lVar24,uVar8);
            if (((ulong)pbVar9 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar9 = pbVar11;
            pbVar10 = param_2;
            if ((pbVar11 == pbVar14) && (param_2 == pbVar15)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)pbVar12;
            pbVar15 = *(byte **)(pbVar12 + 8);
            lVar24 = *(long *)(pbVar12 + 0x18);
            if ((pbVar9 == pbVar14) && (pbVar11 == pbVar15)) {
              if (((pbVar7[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar24);
              func_0x000107c61174();
              pbVar11 = pbVar22;
              func_0x000107c60118();
              func_0x000107c61170(pbVar22);
              func_0x000107c61170(lVar24);
              pbVar22 = pbVar11;
joined_r0x000100e266a4:
              if (((ulong)pbVar22 & 1) == 0) {
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
          )(pbVar9,pbVar10,pbVar14,pbVar15,0);
          return pbVar9;
        }
        lVar23 = *(long *)(pbVar7 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)pbVar12;
            pbVar15 = *(byte **)(pbVar12 + 8);
            if (((pbVar9 == pbVar14) && (pbVar11 == pbVar15)) &&
               (pbVar9 = param_2, pbVar10 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
               pbVar15 = *(byte **)(pbVar12 + 0x18),
               param_2 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar12[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar12 != ((uint)pbVar9 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar15 = *(byte **)(pbVar12 + 0x10);
          lVar24 = *(long *)(pbVar12 + 0x20);
          if (param_2 == (byte *)0x0) {
            if (pbVar15 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar12 + 8);
            pbVar9 = pbVar11;
            pbVar10 = param_2;
            if ((pbVar11 != pbVar14) || (param_2 != pbVar15)) goto code_r0x000107c605b8;
          }
          if (lVar23 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar23 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar22,lVar23,*(byte **)(pbVar12 + 0x18),lVar24,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar22 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar9 == (byte *)0x0) &&
              lVar23 == 0) && param_2 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar23 = *(long *)(pbVar12 + 0x20);
            lVar24 = *(long *)(pbVar12 + 0x18);
            bVar27 = pbVar12[8] | (byte)lVar24;
            bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar12[0x10] | (byte)lVar23;
            bVar36 = pbVar12[0x11] | (byte)((ulong)lVar23 >> 8);
            bVar37 = pbVar12[0x12] | (byte)((ulong)lVar23 >> 0x10);
            bVar38 = pbVar12[0x13] | (byte)((ulong)lVar23 >> 0x18);
            bVar39 = pbVar12[0x14] | (byte)((ulong)lVar23 >> 0x20);
            bVar40 = pbVar12[0x15] | (byte)((ulong)lVar23 >> 0x28);
            bVar41 = pbVar12[0x16] | (byte)((ulong)lVar23 >> 0x30);
            bVar42 = pbVar12[0x17] | (byte)((ulong)lVar23 >> 0x38);
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
            auVar4[1] = bVar28;
            auVar4[0] = bVar27;
            auVar4[2] = bVar29;
            auVar4[3] = bVar30;
            auVar4[4] = bVar31;
            auVar4[5] = bVar32;
            auVar4[6] = bVar33;
            auVar4[7] = bVar34;
            auVar4[8] = bVar35;
            auVar4[9] = bVar36;
            auVar4[10] = bVar37;
            auVar4[0xb] = bVar38;
            auVar4[0xc] = bVar39;
            auVar4[0xd] = bVar40;
            auVar4[0xe] = bVar41;
            auVar4[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar4,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar9 == (byte *)0x1) &&
             (((pbVar22 == (byte *)0x0 && pbVar11 == (byte *)0x0) && param_2 == (byte *)0x0) &&
              lVar23 == 0)) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar12 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar12 != 2) {
              return (byte *)0x0;
            }
          }
          lVar23 = *(long *)(pbVar12 + 0x20);
          lVar24 = *(long *)(pbVar12 + 0x18);
          bVar27 = pbVar12[8] | (byte)lVar24;
          bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar12[0x10] | (byte)lVar23;
          bVar36 = pbVar12[0x11] | (byte)((ulong)lVar23 >> 8);
          bVar37 = pbVar12[0x12] | (byte)((ulong)lVar23 >> 0x10);
          bVar38 = pbVar12[0x13] | (byte)((ulong)lVar23 >> 0x18);
          bVar39 = pbVar12[0x14] | (byte)((ulong)lVar23 >> 0x20);
          bVar40 = pbVar12[0x15] | (byte)((ulong)lVar23 >> 0x28);
          bVar41 = pbVar12[0x16] | (byte)((ulong)lVar23 >> 0x30);
          bVar42 = pbVar12[0x17] | (byte)((ulong)lVar23 >> 0x38);
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
          auVar43 = NEON_ext(auVar2,auVar3,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        param_4 = *(byte **)(pbVar12 + 8);
        param_5 = *(ulong *)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar8 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar9,lVar23,uVar8);
        if (((ulong)pbVar9 & 1) == 0) {
          return (byte *)0x0;
        }
        puVar25 = *(undefined1 **)(puVar5 + -0x90);
        pcVar26 = *(code **)(puVar5 + -0x88);
        unaff_x20 = *(byte **)(puVar5 + -0xa0);
        unaff_x19 = *(byte **)(puVar5 + -0x98);
        unaff_x22 = *(ulong *)(puVar5 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar5 + -0xa8);
        unaff_x24 = *(byte **)(puVar5 + -0xc0);
        unaff_x23 = *(byte **)(puVar5 + -0xb8);
        puVar5 = puVar5 + -0x80;
      } while( true );
    }
  }
  else if ((uVar1 != 2) && (((uVar13 ^ uVar1) & 1) == 0)) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103a0dad0; end: 103a0db5f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a0dad0(byte *param_1,byte *param_2,uint param_3,long param_4,ulong param_5,
                    uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  
  if ((param_3 & 0xff) == 2) {
    if ((param_6 & 0xff) != 2) {
      return (byte *)0x0;
    }
  }
  else {
    if ((param_6 & 0xff) == 2) {
      return (byte *)0x0;
    }
    if (((param_3 ^ param_6) & 1) != 0) {
      return (byte *)0x0;
    }
  }
  uVar1 = param_3 >> 8 & 0xff;
  uVar2 = param_6 >> 8 & 0xff;
  if (uVar1 == 2) {
    if (uVar2 == 2) {
SUB_100e25fcc:
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
        uVar1 = (uint)((ulong)param_2 >> 0x20);
        uVar15 = uVar1 >> 0x1e;
        uVar2 = (uint)(param_5 >> 0x20);
        uVar18 = uVar2 >> 0x1e;
        iVar7 = (int)param_1;
        pbVar11 = param_2;
        if ((ulong)param_2 >> 0x3e == 3) {
          uVar17 = 0;
          if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
              (param_5 >> 0x3e < 3)) ||
             ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
          goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar1 >> 0x1e < 2) {
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
          if (1 < uVar2 >> 0x1e) goto code_r0x000100e26050;
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
                pbVar11 = (byte *)((long)register0x00000008 +
                                  (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
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
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,
                                param_4,param_5);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = param_5;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar17 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
            auVar5[1] = bVar24;
            auVar5[0] = bVar23;
            auVar5[2] = bVar25;
            auVar5[3] = bVar26;
            auVar5[4] = bVar27;
            auVar5[5] = bVar28;
            auVar5[6] = bVar29;
            auVar5[7] = bVar30;
            auVar5[8] = bVar31;
            auVar5[9] = bVar32;
            auVar5[10] = bVar33;
            auVar5[0xb] = bVar34;
            auVar5[0xc] = bVar35;
            auVar5[0xd] = bVar36;
            auVar5[0xe] = bVar37;
            auVar5[0xf] = bVar38;
            auVar39 = NEON_ext(auVar39,auVar5,8,1);
            if (CONCAT17(bVar30 | auVar39[7],
                         CONCAT16(bVar29 | auVar39[6],
                                  CONCAT15(bVar28 | auVar39[5],
                                           CONCAT14(bVar27 | auVar39[4],
                                                    CONCAT13(bVar26 | auVar39[3],
                                                             CONCAT12(bVar25 | auVar39[2],
                                                                      CONCAT11(bVar24 | auVar39[1],
                                                                               bVar23 | auVar39[0]))
                                                            ))))) == 0 && *(long *)pbVar11 == 0) {
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
          auVar4[1] = bVar24;
          auVar4[0] = bVar23;
          auVar4[2] = bVar25;
          auVar4[3] = bVar26;
          auVar4[4] = bVar27;
          auVar4[5] = bVar28;
          auVar4[6] = bVar29;
          auVar4[7] = bVar30;
          auVar4[8] = bVar31;
          auVar4[9] = bVar32;
          auVar4[10] = bVar33;
          auVar4[0xb] = bVar34;
          auVar4[0xc] = bVar35;
          auVar4[0xd] = bVar36;
          auVar4[0xe] = bVar37;
          auVar4[0xf] = bVar38;
          auVar39 = NEON_ext(auVar3,auVar4,8,1);
          lVar21 = CONCAT17(bVar30 | auVar39[7],
                            CONCAT16(bVar29 | auVar39[6],
                                     CONCAT15(bVar28 | auVar39[5],
                                              CONCAT14(bVar27 | auVar39[4],
                                                       CONCAT13(bVar26 | auVar39[3],
                                                                CONCAT12(bVar25 | auVar39[2],
                                                                         CONCAT11(bVar24 | auVar39[1
                                                  ],bVar23 | auVar39[0])))))));
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
  }
  else if ((uVar2 != 2) && (((uVar1 ^ uVar2) & 1) == 0)) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103a0db60; end: 103a0db93;  */

undefined8 FUN_103a0db60(undefined8 param_1,undefined8 param_2)

{
  func_0x000103a14370(param_2,param_1,&UNK_1106bdf68);
  return param_2;
}



/* Entry: 103a0db94; end: 103a0db9f;  */

void FUN_103a0db94(long param_1)

{
  *(undefined1 *)(param_1 + 0xe0) = 0;
  return;
}



/* Entry: 103a0dba0; end: 103a0dbd3;  */

undefined8 FUN_103a0dba0(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d650f8(param_2,param_1,&UNK_1106bdfe0);
  return param_2;
}



/* Entry: 103a0dbd4; end: 103a0dbe3;  */

void FUN_103a0dbd4(void)

{
  return;
}



/* Entry: 103a0dbe4; end: 103a0dc17;  */

undefined8 FUN_103a0dbe4(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6510c(param_2,param_1,&UNK_1106be080);
  return param_2;
}



/* Entry: 103a0dc18; end: 103a0dc27;  */

void FUN_103a0dc18(void)

{
  return;
}



/* Entry: 103a0dc28; end: 103a0dc5b;  */

undefined8 FUN_103a0dc28(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d650f8(param_2,param_1,&UNK_1106be120);
  return param_2;
}



/* Entry: 103a0dc5c; end: 103a0dc6b;  */

void FUN_103a0dc5c(void)

{
  return;
}



/* Entry: 103a0dc6c; end: 103a0dc9f;  */

undefined8 FUN_103a0dc6c(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6510c(param_2,param_1,&UNK_1106be1c0);
  return param_2;
}



/* Entry: 103a0dca0; end: 103a0dcaf;  */

void FUN_103a0dca0(void)

{
  return;
}



/* Entry: 103a0dcb0; end: 103a0dce3;  */

undefined8 FUN_103a0dcb0(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d650f8(param_2,param_1,&UNK_1106be260);
  return param_2;
}



/* Entry: 103a0dce4; end: 103a0dcf3;  */

void FUN_103a0dce4(void)

{
  return;
}



/* Entry: 103a0dcf4; end: 103a0dd27;  */

undefined8 FUN_103a0dcf4(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6510c(param_2,param_1,&UNK_1106be300);
  return param_2;
}



/* Entry: 103a0dd28; end: 103a0dd37;  */

void FUN_103a0dd28(void)

{
  return;
}



/* Entry: 103a0dd38; end: 103a0dd6b;  */

undefined8 FUN_103a0dd38(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d650f8(param_2,param_1,&UNK_1106be3a0);
  return param_2;
}



/* Entry: 103a0dd6c; end: 103a0dd7b;  */

void FUN_103a0dd6c(void)

{
  return;
}



/* Entry: 103a0dd7c; end: 103a0ddaf;  */

undefined8 FUN_103a0dd7c(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6510c(param_2,param_1,&UNK_1106be440);
  return param_2;
}



/* Entry: 103a0ddb0; end: 103a0ddbf;  */

void FUN_103a0ddb0(void)

{
  return;
}



/* Entry: 103a0ddc0; end: 103a0ddf3;  */

undefined8 FUN_103a0ddc0(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d650f8(param_2,param_1,&UNK_1106be4e0);
  return param_2;
}



/* Entry: 103a0ddf4; end: 103a0de03;  */

void FUN_103a0ddf4(void)

{
  return;
}



/* Entry: 103a0de04; end: 103a0de37;  */

undefined8 FUN_103a0de04(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6510c(param_2,param_1,&UNK_1106be580);
  return param_2;
}



/* Entry: 103a0de38; end: 103a0de47;  */

void FUN_103a0de38(void)

{
  return;
}



/* Entry: 103a0de48; end: 103a0de7b;  */

undefined8 FUN_103a0de48(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d650f8(param_2,param_1,&UNK_1106be620);
  return param_2;
}



/* Entry: 103a0de7c; end: 103a0de8b;  */

void FUN_103a0de7c(void)

{
  return;
}



/* Entry: 103a0de8c; end: 103a0debf;  */

undefined8 FUN_103a0de8c(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6510c(param_2,param_1,&UNK_1106be6c0);
  return param_2;
}



/* Entry: 103a0dec0; end: 103a0deef;  */

void FUN_103a0dec0(void)

{
  return;
}



/* Entry: 103a0def0; end: 103a0df23;  */

undefined8 FUN_103a0def0(undefined8 param_1,undefined8 param_2)

{
  FUN_103a152e4(param_2,param_1,&UNK_1106be8f0);
  return param_2;
}



/* Entry: 103a0df24; end: 103a0df33;  */

void FUN_103a0df24(void)

{
  return;
}



/* Entry: 103a0df34; end: 103a0df53;  */

void FUN_103a0df34(void)

{
  func_0x000107c61168(&PTR_PTR_112fca238);
  return;
}



/* Entry: 103a0df54; end: 103a0df63;  */

void FUN_103a0df54(void)

{
  return;
}



/* Entry: 103a0df64; end: 103a0df83;  */

void FUN_103a0df64(void)

{
  func_0x000107c61168(&PTR_PTR_112fca378);
  return;
}



/* Entry: 103a0df84; end: 103a0dfb3;  */

void FUN_103a0df84(void)

{
  return;
}



/* Entry: 103a0dfb4; end: 103a0dfe7;  */

undefined8 FUN_103a0dfb4(undefined8 param_1,undefined8 param_2)

{
  FUN_103a16364(param_2,param_1,&UNK_1106becd0);
  return param_2;
}



/* Entry: 103a0dfe8; end: 103a0dff7;  */

void FUN_103a0dfe8(void)

{
  return;
}



/* Entry: 103a0dff8; end: 103a0e02b;  */

undefined8 FUN_103a0dff8(undefined8 param_1,undefined8 param_2)

{
  FUN_103a16cf0(param_2,param_1,&UNK_1106bed70);
  return param_2;
}



/* Entry: 103a0e02c; end: 103a0e833;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a0e02c(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  float *pfVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  float *pfVar28;
  byte *pbVar29;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar30;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 auVar47 [16];
  
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    if (*(char *)((long)param_2 + 0x24) != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    bVar8 = false;
    if ((*(char *)((long)param_2 + 0x24) != '\x01') &&
       (bVar8 = false, !NAN(*(float *)(param_1 + 4)) && !NAN(*(float *)(param_2 + 4)))) {
      bVar8 = *(float *)(param_1 + 4) == *(float *)(param_2 + 4);
    }
    if (!bVar8) {
      return (byte *)0x0;
    }
  }
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    if (*(char *)((long)param_2 + 0x2c) != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    bVar8 = false;
    if ((*(char *)((long)param_2 + 0x2c) != '\x01') &&
       (bVar8 = false, !NAN(*(float *)(param_1 + 5)) && !NAN(*(float *)(param_2 + 5)))) {
      bVar8 = *(float *)(param_1 + 5) == *(float *)(param_2 + 5);
    }
    if (!bVar8) {
      return (byte *)0x0;
    }
  }
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    if (*(char *)((long)param_2 + 0x34) != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x34) == '\x01') {
      return (byte *)0x0;
    }
    if (*(float *)(param_1 + 6) != *(float *)(param_2 + 6)) {
      return (byte *)0x0;
    }
  }
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    if (*(char *)((long)param_2 + 0x3c) != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x3c) == '\x01') {
      return (byte *)0x0;
    }
    if (*(float *)(param_1 + 7) != *(float *)(param_2 + 7)) {
      return (byte *)0x0;
    }
  }
  if (*(char *)((long)param_1 + 0x44) == '\x01') {
    if (*(char *)((long)param_2 + 0x44) != '\x01') {
      return (byte *)0x0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x44) == '\x01') {
      return (byte *)0x0;
    }
    if (*(float *)(param_1 + 8) != *(float *)(param_2 + 8)) {
      return (byte *)0x0;
    }
  }
  lVar23 = *param_1;
  lVar27 = *param_2;
  lVar20 = *(long *)(lVar23 + 0x10);
  if (lVar20 == *(long *)(lVar27 + 0x10)) {
    if ((lVar20 != 0) && (lVar23 != lVar27)) {
      pfVar24 = (float *)(lVar23 + 0x20);
      pfVar28 = (float *)(lVar27 + 0x20);
      do {
        if (*pfVar24 != *pfVar28) {
          return (byte *)0x0;
        }
        lVar20 = lVar20 + -1;
        pfVar24 = pfVar24 + 1;
        pfVar28 = pfVar28 + 1;
      } while (lVar20 != 0);
    }
    lVar23 = param_1[1];
    lVar27 = param_2[1];
    lVar20 = *(long *)(lVar23 + 0x10);
    if (lVar20 == *(long *)(lVar27 + 0x10)) {
      if (lVar20 != 0 && lVar23 != lVar27) {
        pfVar24 = (float *)(lVar23 + 0x20);
        pfVar28 = (float *)(lVar27 + 0x20);
        do {
          if (*pfVar24 != *pfVar28) {
            return (byte *)0x0;
          }
          lVar20 = lVar20 + -1;
          pfVar24 = pfVar24 + 1;
          pfVar28 = pfVar28 + 1;
        } while (lVar20 != 0);
      }
      bVar31 = *(byte *)((long)param_2 + 0x45);
      if (*(byte *)((long)param_1 + 0x45) == 2) {
        if (bVar31 == 2) {
LAB_103a0e1dc:
          pbVar11 = (byte *)param_1[2];
          pbVar30 = (byte *)param_1[3];
          lVar20 = param_2[2];
          uVar17 = param_2[3];
          puVar7 = (undefined1 *)register0x00000008;
          do {
            *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
            *(byte **)(puVar7 + -0x48) = unaff_x25;
            *(byte **)(puVar7 + -0x40) = unaff_x24;
            *(byte **)(puVar7 + -0x38) = unaff_x23;
            *(ulong *)(puVar7 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
            *(ulong *)(puVar7 + -0x20) = unaff_x20;
            *(byte **)(puVar7 + -0x18) = unaff_x19;
            *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
            *(undefined8 *)(puVar7 + -8) = unaff_x30;
            *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar4 = (uint)((ulong)pbVar30 >> 0x20);
            uVar19 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar17 >> 0x20);
            uVar25 = uVar5 >> 0x1e;
            iVar9 = (int)pbVar11;
            pbVar14 = pbVar30;
            if ((ulong)pbVar30 >> 0x3e == 3) {
              uVar22 = 0;
              if ((((pbVar11 != (byte *)0x0) || (pbVar30 != (byte *)0xc000000000000000)) ||
                  (uVar17 >> 0x3e < 3)) ||
                 ((uVar22 = 0, lVar20 != 0 || (uVar17 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar10 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar19 == 0) {
                uVar22 = (ulong)pbVar30 >> 0x30 & 0xff;
              }
              else {
                iVar21 = (int)((ulong)pbVar11 >> 0x20);
                if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar22 = (ulong)(iVar21 - iVar9);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar25 == 0) {
                uVar26 = uVar17 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar21 = (int)((ulong)lVar20 >> 0x20);
              if (SBORROW4(iVar21,(int)lVar20)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar22 == (long)(iVar21 - (int)lVar20)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar10 = (byte *)0x0;
            }
            else {
              if (uVar19 == 2) {
                uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
                if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar22 = 0;
              if (uVar25 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar25 == 2) {
                uVar26 = *(long *)(lVar20 + 0x18) - *(long *)(lVar20 + 0x10);
                if (SBORROW8(*(long *)(lVar20 + 0x18),*(long *)(lVar20 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar22 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar22 < 1) goto code_r0x000100e26128;
                if (uVar19 < 2) {
                  if (uVar19 == 0) {
                    puVar7[-0x70] = (char)pbVar11;
                    puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
                    puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
                    puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
                    puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
                    puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
                    puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
                    puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
                    puVar7[-0x68] = (char)pbVar30;
                    puVar7[-0x67] = (char)((ulong)pbVar30 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar30 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar30 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar30 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar30 >> 0x28);
                    pbVar14 = puVar7 + (((ulong)pbVar30 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                    pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar9;
                  unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar30;
                  if (pbVar11 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar11 = (byte *)0x0;
                  }
                  else {
                    pbVar14 = pbVar11;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar11;
                    if (pbVar11 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar14) {
                        pbVar14 = unaff_x23;
                      }
                      pbVar14 = pbVar14 + (long)pbVar11;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar14 = (byte *)0x0;
                }
                else {
                  if (uVar19 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar14 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar23 = *(long *)(pbVar11 + 0x10);
                  unaff_x24 = *(byte **)(pbVar11 + 0x18);
                  func_0x000107c5ec30();
                  pbVar14 = pbVar11;
                  if (pbVar11 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar23,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar11 = pbVar11 + (lVar23 - (long)pbVar14);
                  }
                  unaff_x23 = unaff_x24 + -lVar23;
                  if (SBORROW8((long)unaff_x24,lVar23)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar11;
                  unaff_x25 = pbVar30;
                  if (pbVar11 == (byte *)0x0) {
                    pbVar14 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar14) {
                      pbVar14 = unaff_x23;
                    }
                    pbVar14 = pbVar14 + (long)pbVar11;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar30 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar20,uVar17);
                pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar17;
              }
              else {
                pbVar10 = (byte *)(ulong)(uVar22 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
              return pbVar10;
            }
            func_0x000107c60e78();
            *(byte **)(puVar7 + -0xc0) = unaff_x24;
            *(byte **)(puVar7 + -0xb8) = unaff_x23;
            *(ulong *)(puVar7 + -0xb0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
            *(ulong *)(puVar7 + -0xa0) = unaff_x20;
            *(byte **)(puVar7 + -0x98) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
            *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
            pbVar13 = *(byte **)pbVar10;
            pbVar11 = *(byte **)(pbVar10 + 8);
            pbVar29 = *(byte **)(pbVar10 + 0x18);
            bVar31 = pbVar10[0x28];
            pbVar30 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
            pbVar15 = pbVar11;
            if (bVar31 < 3) {
              if (bVar31 == 0) {
                if (pbVar14[0x28] == 0) {
                  lVar20 = *(long *)pbVar14;
                  uVar12 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar13,lVar20,uVar12);
                  return (byte *)(ulong)((uint)pbVar13 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar31 == 1) {
                if (pbVar14[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)(pbVar14 + 8);
                pbVar18 = *(byte **)(pbVar14 + 0x10);
                lVar20 = *(long *)pbVar14;
                uVar12 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar20,uVar12);
                if (((ulong)pbVar13 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar13 = pbVar11;
                pbVar15 = pbVar30;
                if ((pbVar11 == pbVar16) && (pbVar30 == pbVar18)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar14[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar18 = *(byte **)(pbVar14 + 8);
                lVar20 = *(long *)(pbVar14 + 0x18);
                if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
                  if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar29 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (lVar20 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar20);
                  func_0x000107c61174();
                  pbVar11 = pbVar29;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar29);
                  func_0x000107c61170(lVar20);
                  pbVar29 = pbVar11;
joined_r0x000100e266a4:
                  if (((ulong)pbVar29 & 1) == 0) {
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
              )(pbVar13,pbVar15,pbVar16,pbVar18,0);
              return pbVar13;
            }
            lVar23 = *(long *)(pbVar10 + 0x20);
            if (bVar31 < 5) {
              if (bVar31 != 3) {
                if (pbVar14[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar18 = *(byte **)(pbVar14 + 8);
                if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
                   (pbVar13 = pbVar30, pbVar15 = pbVar29, pbVar16 = *(byte **)(pbVar14 + 0x10),
                   pbVar18 = *(byte **)(pbVar14 + 0x18),
                   pbVar30 == *(byte **)(pbVar14 + 0x10) && pbVar29 == *(byte **)(pbVar14 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar14[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar18 = *(byte **)(pbVar14 + 0x10);
              lVar20 = *(long *)(pbVar14 + 0x20);
              if (pbVar30 == (byte *)0x0) {
                if (pbVar18 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar18 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)(pbVar14 + 8);
                pbVar13 = pbVar11;
                pbVar15 = pbVar30;
                if ((pbVar11 != pbVar16) || (pbVar30 != pbVar18)) goto code_r0x000107c605b8;
              }
              if (lVar23 != 0) {
                if (lVar20 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar29 == *(byte **)(pbVar14 + 0x18)) && (lVar23 == lVar20)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar29,lVar23,*(byte **)(pbVar14 + 0x18),lVar20,0);
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar20 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if (bVar31 != 5) {
              if ((((pbVar29 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                  lVar23 == 0) && pbVar30 == (byte *)0x0) {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar23 = *(long *)(pbVar14 + 0x20);
                lVar20 = *(long *)(pbVar14 + 0x18);
                bVar31 = pbVar14[8] | (byte)lVar20;
                bVar32 = pbVar14[9] | (byte)((ulong)lVar20 >> 8);
                bVar33 = pbVar14[10] | (byte)((ulong)lVar20 >> 0x10);
                bVar34 = pbVar14[0xb] | (byte)((ulong)lVar20 >> 0x18);
                bVar35 = pbVar14[0xc] | (byte)((ulong)lVar20 >> 0x20);
                bVar36 = pbVar14[0xd] | (byte)((ulong)lVar20 >> 0x28);
                bVar37 = pbVar14[0xe] | (byte)((ulong)lVar20 >> 0x30);
                bVar38 = pbVar14[0xf] | (byte)((ulong)lVar20 >> 0x38);
                bVar39 = pbVar14[0x10] | (byte)lVar23;
                bVar40 = pbVar14[0x11] | (byte)((ulong)lVar23 >> 8);
                bVar41 = pbVar14[0x12] | (byte)((ulong)lVar23 >> 0x10);
                bVar42 = pbVar14[0x13] | (byte)((ulong)lVar23 >> 0x18);
                bVar43 = pbVar14[0x14] | (byte)((ulong)lVar23 >> 0x20);
                bVar44 = pbVar14[0x15] | (byte)((ulong)lVar23 >> 0x28);
                bVar45 = pbVar14[0x16] | (byte)((ulong)lVar23 >> 0x30);
                bVar46 = pbVar14[0x17] | (byte)((ulong)lVar23 >> 0x38);
                auVar47[1] = bVar32;
                auVar47[0] = bVar31;
                auVar47[2] = bVar33;
                auVar47[3] = bVar34;
                auVar47[4] = bVar35;
                auVar47[5] = bVar36;
                auVar47[6] = bVar37;
                auVar47[7] = bVar38;
                auVar47[8] = bVar39;
                auVar47[9] = bVar40;
                auVar47[10] = bVar41;
                auVar47[0xb] = bVar42;
                auVar47[0xc] = bVar43;
                auVar47[0xd] = bVar44;
                auVar47[0xe] = bVar45;
                auVar47[0xf] = bVar46;
                auVar3[1] = bVar32;
                auVar3[0] = bVar31;
                auVar3[2] = bVar33;
                auVar3[3] = bVar34;
                auVar3[4] = bVar35;
                auVar3[5] = bVar36;
                auVar3[6] = bVar37;
                auVar3[7] = bVar38;
                auVar3[8] = bVar39;
                auVar3[9] = bVar40;
                auVar3[10] = bVar41;
                auVar3[0xb] = bVar42;
                auVar3[0xc] = bVar43;
                auVar3[0xd] = bVar44;
                auVar3[0xe] = bVar45;
                auVar3[0xf] = bVar46;
                auVar47 = NEON_ext(auVar47,auVar3,8,1);
                if (CONCAT17(bVar38 | auVar47[7],
                             CONCAT16(bVar37 | auVar47[6],
                                      CONCAT15(bVar36 | auVar47[5],
                                               CONCAT14(bVar35 | auVar47[4],
                                                        CONCAT13(bVar34 | auVar47[3],
                                                                 CONCAT12(bVar33 | auVar47[2],
                                                                          CONCAT11(bVar32 | auVar47[
                                                  1],bVar31 | auVar47[0]))))))) == 0 &&
                    *(long *)pbVar14 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar13 == (byte *)0x1) &&
                 (((pbVar29 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar30 == (byte *)0x0) &&
                  lVar23 == 0)) {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar14 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar14 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar23 = *(long *)(pbVar14 + 0x20);
              lVar20 = *(long *)(pbVar14 + 0x18);
              bVar31 = pbVar14[8] | (byte)lVar20;
              bVar32 = pbVar14[9] | (byte)((ulong)lVar20 >> 8);
              bVar33 = pbVar14[10] | (byte)((ulong)lVar20 >> 0x10);
              bVar34 = pbVar14[0xb] | (byte)((ulong)lVar20 >> 0x18);
              bVar35 = pbVar14[0xc] | (byte)((ulong)lVar20 >> 0x20);
              bVar36 = pbVar14[0xd] | (byte)((ulong)lVar20 >> 0x28);
              bVar37 = pbVar14[0xe] | (byte)((ulong)lVar20 >> 0x30);
              bVar38 = pbVar14[0xf] | (byte)((ulong)lVar20 >> 0x38);
              bVar39 = pbVar14[0x10] | (byte)lVar23;
              bVar40 = pbVar14[0x11] | (byte)((ulong)lVar23 >> 8);
              bVar41 = pbVar14[0x12] | (byte)((ulong)lVar23 >> 0x10);
              bVar42 = pbVar14[0x13] | (byte)((ulong)lVar23 >> 0x18);
              bVar43 = pbVar14[0x14] | (byte)((ulong)lVar23 >> 0x20);
              bVar44 = pbVar14[0x15] | (byte)((ulong)lVar23 >> 0x28);
              bVar45 = pbVar14[0x16] | (byte)((ulong)lVar23 >> 0x30);
              bVar46 = pbVar14[0x17] | (byte)((ulong)lVar23 >> 0x38);
              auVar1[1] = bVar32;
              auVar1[0] = bVar31;
              auVar1[2] = bVar33;
              auVar1[3] = bVar34;
              auVar1[4] = bVar35;
              auVar1[5] = bVar36;
              auVar1[6] = bVar37;
              auVar1[7] = bVar38;
              auVar1[8] = bVar39;
              auVar1[9] = bVar40;
              auVar1[10] = bVar41;
              auVar1[0xb] = bVar42;
              auVar1[0xc] = bVar43;
              auVar1[0xd] = bVar44;
              auVar1[0xe] = bVar45;
              auVar1[0xf] = bVar46;
              auVar2[1] = bVar32;
              auVar2[0] = bVar31;
              auVar2[2] = bVar33;
              auVar2[3] = bVar34;
              auVar2[4] = bVar35;
              auVar2[5] = bVar36;
              auVar2[6] = bVar37;
              auVar2[7] = bVar38;
              auVar2[8] = bVar39;
              auVar2[9] = bVar40;
              auVar2[10] = bVar41;
              auVar2[0xb] = bVar42;
              auVar2[0xc] = bVar43;
              auVar2[0xd] = bVar44;
              auVar2[0xe] = bVar45;
              auVar2[0xf] = bVar46;
              auVar47 = NEON_ext(auVar1,auVar2,8,1);
              lVar20 = CONCAT17(bVar38 | auVar47[7],
                                CONCAT16(bVar37 | auVar47[6],
                                         CONCAT15(bVar36 | auVar47[5],
                                                  CONCAT14(bVar35 | auVar47[4],
                                                           CONCAT13(bVar34 | auVar47[3],
                                                                    CONCAT12(bVar33 | auVar47[2],
                                                                             CONCAT11(bVar32 | 
                                                  auVar47[1],bVar31 | auVar47[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar14[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar20 = *(long *)(pbVar14 + 8);
            uVar17 = *(ulong *)(pbVar14 + 0x10);
            lVar23 = *(long *)pbVar14;
            uVar12 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar23,uVar12);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
            unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
            unaff_x20 = *(ulong *)(puVar7 + -0xa0);
            unaff_x19 = *(byte **)(puVar7 + -0x98);
            unaff_x22 = *(ulong *)(puVar7 + -0xb0);
            unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
            unaff_x24 = *(byte **)(puVar7 + -0xc0);
            unaff_x23 = *(byte **)(puVar7 + -0xb8);
            puVar7 = puVar7 + -0x80;
          } while( true );
        }
      }
      else if ((bVar31 != 2) && (((*(byte *)((long)param_1 + 0x45) ^ bVar31) & 1) == 0))
      goto LAB_103a0e1dc;
    }
  }
  return (byte *)0x0;
}



/* Entry: 103a0e834; end: 103a0eebb;  */

uint FUN_103a0e834(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong auStack_e0 [2];
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  puVar7 = auStack_e0;
  uVar8 = param_1[6];
  uVar6 = param_1[5];
  uVar10 = param_2[6];
  uVar9 = param_2[5];
  uStack_70 = uVar9;
  uStack_68 = uVar10;
  uStack_60 = uVar6;
  uStack_58 = uVar8;
  if (uVar8 >> 0x3c < 0xf) {
    if (uVar10 >> 0x3c < 0xf) {
      FUN_103a11d64(&uStack_60,&uStack_80,0x112d56fe0,&UNK_10d91dda0);
      FUN_103a11d64(&uStack_70,&uStack_80,0x112d56fe0,&UNK_10d91dda0);
      uVar5 = uVar6;
      func_0x000100e25fcc(uVar6,uVar8,uVar9,uVar10);
      func_0x0001000b44c0(uVar9,uVar10);
      func_0x0001000b44c0(uVar6,uVar8);
      if ((uVar5 & 1) != 0) goto LAB_103a0e9b4;
      goto LAB_103a0e924;
    }
LAB_103a0e8d4:
    FUN_103a11d64(&uStack_60,&uStack_80,0x112d56fe0,&UNK_10d91dda0);
    puVar4 = &uStack_70;
    puVar7 = &uStack_80;
LAB_103a0e900:
    FUN_103a11d64(puVar4,puVar7,0x112d56fe0,&UNK_10d91dda0);
    func_0x0001000b44c0(uVar6,uVar8);
    func_0x0001000b44c0(uVar9,uVar10);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) goto LAB_103a0e8d4;
    FUN_103a11d64(&uStack_60,&uStack_80,0x112d56fe0,&UNK_10d91dda0);
    FUN_103a11d64(&uStack_70,&uStack_80,0x112d56fe0,&UNK_10d91dda0);
    func_0x0001000b44c0(uVar6,uVar8);
LAB_103a0e9b4:
    if ((char)param_1[8] == '\x01') {
      if (*(char *)(param_2 + 8) != '\x01') goto LAB_103a0e924;
    }
    else {
      uVar3 = 0;
      if ((*(char *)(param_2 + 8) == '\x01') || (param_1[7] != param_2[7])) goto LAB_103a0e928;
    }
    if ((char)param_1[10] == '\x01') {
      if (*(char *)(param_2 + 10) != '\x01') goto LAB_103a0e924;
    }
    else {
      uVar3 = 0;
      if ((*(char *)(param_2 + 10) == '\x01') || (param_1[9] != param_2[9])) goto LAB_103a0e928;
    }
    if ((char)param_1[0xc] == '\x01') {
      if (*(char *)(param_2 + 0xc) != '\x01') goto LAB_103a0e924;
    }
    else {
      uVar3 = 0;
      if ((*(char *)(param_2 + 0xc) == '\x01') || (param_1[0xb] != param_2[0xb]))
      goto LAB_103a0e928;
    }
    uVar8 = param_2[0xe];
    if (param_1[0xe] == 0) {
      if (uVar8 != 0) goto LAB_103a0e924;
LAB_103a0ea98:
      uVar8 = param_1[0x10];
      uVar6 = param_1[0xf];
      uVar10 = param_2[0x10];
      uVar9 = param_2[0xf];
      uStack_90 = uVar9;
      uStack_88 = uVar10;
      uStack_80 = uVar6;
      uStack_78 = uVar8;
      if (uVar8 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_103a0eb18;
        FUN_103a11d64(&uStack_80,&uStack_a0,0x112d56fe0,&UNK_10d91dda0);
        FUN_103a11d64(&uStack_90,&uStack_a0,0x112d56fe0,&UNK_10d91dda0);
        uVar5 = uVar6;
        func_0x000100e25fcc(uVar6,uVar8,uVar9,uVar10);
        func_0x0001000b44c0(uVar9,uVar10);
        func_0x0001000b44c0(uVar6,uVar8);
        if ((uVar5 & 1) != 0) goto LAB_103a0ebb4;
        goto LAB_103a0e924;
      }
      if (0xe < uVar10 >> 0x3c) {
        FUN_103a11d64(&uStack_80,&uStack_a0,0x112d56fe0,&UNK_10d91dda0);
        FUN_103a11d64(&uStack_90,&uStack_a0,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001000b44c0(uVar6,uVar8);
LAB_103a0ebb4:
        uVar8 = param_1[0x12];
        uVar6 = param_1[0x11];
        uVar10 = param_2[0x12];
        uVar9 = param_2[0x11];
        uStack_b0 = uVar9;
        uStack_a8 = uVar10;
        uStack_a0 = uVar6;
        uStack_98 = uVar8;
        if (uVar8 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_103a0ec34;
          FUN_103a11d64(&uStack_a0,&uStack_c0,0x112d56fe0,&UNK_10d91dda0);
          FUN_103a11d64(&uStack_b0,&uStack_c0,0x112d56fe0,&UNK_10d91dda0);
          uVar5 = uVar6;
          func_0x000100e25fcc(uVar6,uVar8,uVar9,uVar10);
          func_0x0001000b44c0(uVar9,uVar10);
          func_0x0001000b44c0(uVar6,uVar8);
          if ((uVar5 & 1) == 0) goto LAB_103a0e924;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_103a0ec34:
            FUN_103a11d64(&uStack_a0,&uStack_c0,0x112d56fe0,&UNK_10d91dda0);
            puVar4 = &uStack_b0;
            puVar7 = &uStack_c0;
            goto LAB_103a0e900;
          }
          FUN_103a11d64(&uStack_a0,&uStack_c0,0x112d56fe0,&UNK_10d91dda0);
          FUN_103a11d64(&uStack_b0,&uStack_c0,0x112d56fe0,&UNK_10d91dda0);
          func_0x0001000b44c0(uVar6,uVar8);
        }
        uVar8 = param_1[0x14];
        uVar6 = param_1[0x13];
        uVar10 = param_2[0x14];
        uVar9 = param_2[0x13];
        uStack_d0 = uVar9;
        uStack_c8 = uVar10;
        uStack_c0 = uVar6;
        uStack_b8 = uVar8;
        if (uVar8 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_103a0ed50;
          FUN_103a11d64(&uStack_c0,auStack_e0,0x112d56fe0,&UNK_10d91dda0);
          FUN_103a11d64(&uStack_d0,auStack_e0,0x112d56fe0,&UNK_10d91dda0);
          uVar5 = uVar6;
          func_0x000100e25fcc(uVar6,uVar8,uVar9,uVar10);
          func_0x0001000b44c0(uVar9,uVar10);
          func_0x0001000b44c0(uVar6,uVar8);
          if ((uVar5 & 1) == 0) goto LAB_103a0e924;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_103a0ed50:
            FUN_103a11d64(&uStack_c0,auStack_e0,0x112d56fe0,&UNK_10d91dda0);
            puVar4 = &uStack_d0;
            goto LAB_103a0e900;
          }
          FUN_103a11d64(&uStack_c0,auStack_e0,0x112d56fe0,&UNK_10d91dda0);
          FUN_103a11d64(&uStack_d0,auStack_e0,0x112d56fe0,&UNK_10d91dda0);
          func_0x0001000b44c0(uVar6,uVar8);
        }
        uVar8 = *param_1;
        func_0x000101731444(uVar8,*param_2);
        if ((uVar8 & 1) != 0) {
          uVar8 = param_1[1];
          func_0x000101731444(uVar8,param_2[1]);
          if ((uVar8 & 1) != 0) {
            bVar2 = (byte)param_1[2];
            bVar1 = *(byte *)(param_2 + 2);
            if (bVar2 < 0xfe) {
              if (bVar1 < 0xfe) {
                if (bVar2 >> 6 == 0) {
                  uVar3 = 0;
                  if (0x3f < bVar1) goto LAB_103a0e928;
                }
                else if (bVar2 >> 6 == 1) {
                  uVar3 = 0;
                  if ((bVar1 & 0xc0) != 0x40) goto LAB_103a0e928;
                }
                else {
                  uVar3 = 0;
                  if (-0x41 < (char)bVar1) goto LAB_103a0e928;
                }
                uVar3 = 0;
                if (((bVar1 ^ bVar2) & 1) != 0) goto LAB_103a0e928;
                goto LAB_103a0ee7c;
              }
            }
            else if (0xfd < bVar1) {
LAB_103a0ee7c:
              bVar2 = *(byte *)(param_2 + 0x15);
              if ((byte)param_1[0x15] == 2) {
                if (bVar2 != 2) goto LAB_103a0e924;
              }
              else {
                uVar3 = 0;
                if ((bVar2 == 2) || ((((byte)param_1[0x15] ^ bVar2) & 1) != 0)) goto LAB_103a0e928;
              }
              uVar8 = param_1[3];
              func_0x000100e25fcc(uVar8,param_1[4],param_2[3],param_2[4]);
              uVar3 = (uint)uVar8;
              goto LAB_103a0e928;
            }
          }
        }
        goto LAB_103a0e924;
      }
LAB_103a0eb18:
      FUN_103a11d64(&uStack_80,&uStack_a0,0x112d56fe0,&UNK_10d91dda0);
      puVar4 = &uStack_90;
      puVar7 = &uStack_a0;
      goto LAB_103a0e900;
    }
    if ((uVar8 != 0) &&
       (((uVar6 = param_1[0xd], uVar6 == param_2[0xd] && (param_1[0xe] == uVar8)) ||
        (func_0x000107c605b8(), (uVar6 & 1) != 0)))) goto LAB_103a0ea98;
  }
LAB_103a0e924:
  uVar3 = 0;
LAB_103a0e928:
  return uVar3 & 1;
}



/* Entry: 103a0eebc; end: 103a1125f;  */

uint FUN_103a0eebc(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong auStack_210 [4];
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  puVar5 = auStack_210;
  uVar7 = param_1[6];
  uVar6 = param_1[5];
  uVar11 = param_1[8];
  uVar9 = param_1[7];
  uVar8 = param_2[6];
  uVar3 = param_2[5];
  uVar12 = param_2[8];
  uVar10 = param_2[7];
  uStack_b0 = uVar3;
  uStack_a8 = uVar8;
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar6;
  uStack_88 = uVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (uVar11 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) goto LAB_103a0f218;
    if (uVar6 == uVar3) {
      if ((int)uVar7 != (int)uVar8) {
        FUN_103a11d64(&uStack_90,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_b0;
LAB_103a0f7bc:
        FUN_103a11d64(puVar5,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        uVar3 = uVar6;
        goto LAB_103a0f7d0;
      }
      FUN_103a11d64(&uStack_90,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_b0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000100d65094(uVar6,uVar8,uVar10,uVar12);
      if ((uVar3 & 1) != 0) goto LAB_103a0ef90;
    }
    else {
      FUN_103a11d64(&uStack_90,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      puVar5 = &uStack_b0;
LAB_103a0f788:
      FUN_103a11d64(puVar5,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
LAB_103a0f7d0:
      func_0x000100d65094(uVar3,uVar8,uVar10,uVar12);
    }
LAB_103a0f7e4:
    func_0x000100d65094(uVar6,uVar7,uVar9,uVar11);
  }
  else if (uVar12 >> 0x3c < 0xf) {
LAB_103a0f218:
    uStack_1f0 = uVar6;
    uStack_1e8 = uVar7;
    uStack_1e0 = uVar9;
    uStack_1d8 = uVar11;
    uStack_1d0 = uVar3;
    uStack_1c8 = uVar8;
    uStack_1c0 = uVar10;
    uStack_1b8 = uVar12;
    FUN_103a11d64(&uStack_90,&uStack_d0,0x112fc9a80,&UNK_10dc38d18);
    puVar4 = &uStack_b0;
    puVar5 = &uStack_d0;
LAB_103a0f66c:
    FUN_103a11d64(puVar4,puVar5,0x112fc9a80,&UNK_10dc38d18);
    FUN_103a17eac(&uStack_1f0,0x112fca6d8,&UNK_10dc3ab68);
  }
  else {
    FUN_103a11d64(&uStack_90,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
    FUN_103a11d64(&uStack_b0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
LAB_103a0ef90:
    func_0x000100d65094(uVar6,uVar7,uVar9,uVar11);
    uVar7 = param_1[10];
    uVar6 = param_1[9];
    uVar11 = param_1[0xc];
    uVar9 = param_1[0xb];
    uVar8 = param_2[10];
    uVar3 = param_2[9];
    uVar12 = param_2[0xc];
    uVar10 = param_2[0xb];
    uStack_f0 = uVar3;
    uStack_e8 = uVar8;
    uStack_e0 = uVar10;
    uStack_d8 = uVar12;
    uStack_d0 = uVar6;
    uStack_c8 = uVar7;
    uStack_c0 = uVar9;
    uStack_b8 = uVar11;
    if (uVar11 >> 0x3c < 0xf) {
      if (0xe < uVar12 >> 0x3c) goto LAB_103a0f2e4;
      if (uVar6 != uVar3) {
        FUN_103a11d64(&uStack_d0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_f0;
        goto LAB_103a0f788;
      }
      if ((int)uVar7 != (int)uVar8) {
        FUN_103a11d64(&uStack_d0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_f0;
        goto LAB_103a0f7bc;
      }
      FUN_103a11d64(&uStack_d0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_f0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000100d65094(uVar6,uVar8,uVar10,uVar12);
      if ((uVar3 & 1) == 0) goto LAB_103a0f7e4;
    }
    else {
      if (uVar12 >> 0x3c < 0xf) {
LAB_103a0f2e4:
        uStack_1f0 = uVar6;
        uStack_1e8 = uVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar3;
        uStack_1c8 = uVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        FUN_103a11d64(&uStack_d0,&uStack_110,0x112fc9a80,&UNK_10dc38d18);
        puVar4 = &uStack_f0;
        puVar5 = &uStack_110;
        goto LAB_103a0f66c;
      }
      FUN_103a11d64(&uStack_d0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_f0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
    }
    func_0x000100d65094(uVar6,uVar7,uVar9,uVar11);
    uVar7 = param_1[0xe];
    uVar6 = param_1[0xd];
    uVar11 = param_1[0x10];
    uVar9 = param_1[0xf];
    uVar8 = param_2[0xe];
    uVar3 = param_2[0xd];
    uVar12 = param_2[0x10];
    uVar10 = param_2[0xf];
    uStack_130 = uVar3;
    uStack_128 = uVar8;
    uStack_120 = uVar10;
    uStack_118 = uVar12;
    uStack_110 = uVar6;
    uStack_108 = uVar7;
    uStack_100 = uVar9;
    uStack_f8 = uVar11;
    if (uVar11 >> 0x3c < 0xf) {
      if (0xe < uVar12 >> 0x3c) goto LAB_103a0f400;
      if (uVar6 != uVar3) {
        FUN_103a11d64(&uStack_110,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_130;
        goto LAB_103a0f788;
      }
      if ((int)uVar7 != (int)uVar8) {
        FUN_103a11d64(&uStack_110,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_130;
        goto LAB_103a0f7bc;
      }
      FUN_103a11d64(&uStack_110,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_130,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000100d65094(uVar6,uVar8,uVar10,uVar12);
      if ((uVar3 & 1) == 0) goto LAB_103a0f7e4;
    }
    else {
      if (uVar12 >> 0x3c < 0xf) {
LAB_103a0f400:
        uStack_1f0 = uVar6;
        uStack_1e8 = uVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar3;
        uStack_1c8 = uVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        FUN_103a11d64(&uStack_110,&uStack_150,0x112fc9a80,&UNK_10dc38d18);
        puVar4 = &uStack_130;
        puVar5 = &uStack_150;
        goto LAB_103a0f66c;
      }
      FUN_103a11d64(&uStack_110,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_130,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
    }
    func_0x000100d65094(uVar6,uVar7,uVar9,uVar11);
    uVar7 = param_1[0x12];
    uVar6 = param_1[0x11];
    uVar11 = param_1[0x14];
    uVar9 = param_1[0x13];
    uVar8 = param_2[0x12];
    uVar3 = param_2[0x11];
    uVar12 = param_2[0x14];
    uVar10 = param_2[0x13];
    uStack_170 = uVar3;
    uStack_168 = uVar8;
    uStack_160 = uVar10;
    uStack_158 = uVar12;
    uStack_150 = uVar6;
    uStack_148 = uVar7;
    uStack_140 = uVar9;
    uStack_138 = uVar11;
    if (uVar11 >> 0x3c < 0xf) {
      if (0xe < uVar12 >> 0x3c) goto LAB_103a0f518;
      if (uVar6 != uVar3) {
        FUN_103a11d64(&uStack_150,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_170;
        goto LAB_103a0f788;
      }
      if ((int)uVar7 != (int)uVar8) {
        FUN_103a11d64(&uStack_150,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_170;
        goto LAB_103a0f7bc;
      }
      FUN_103a11d64(&uStack_150,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_170,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000100d65094(uVar6,uVar8,uVar10,uVar12);
      if ((uVar3 & 1) == 0) goto LAB_103a0f7e4;
    }
    else {
      if (uVar12 >> 0x3c < 0xf) {
LAB_103a0f518:
        uStack_1f0 = uVar6;
        uStack_1e8 = uVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar3;
        uStack_1c8 = uVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        FUN_103a11d64(&uStack_150,&uStack_190,0x112fc9a80,&UNK_10dc38d18);
        puVar4 = &uStack_170;
        puVar5 = &uStack_190;
        goto LAB_103a0f66c;
      }
      FUN_103a11d64(&uStack_150,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_170,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
    }
    func_0x000100d65094(uVar6,uVar7,uVar9,uVar11);
    uVar7 = param_1[0x16];
    uVar6 = param_1[0x15];
    uVar11 = param_1[0x18];
    uVar9 = param_1[0x17];
    uVar8 = param_2[0x16];
    uVar3 = param_2[0x15];
    uVar12 = param_2[0x18];
    uVar10 = param_2[0x17];
    uStack_1b0 = uVar3;
    uStack_1a8 = uVar8;
    uStack_1a0 = uVar10;
    uStack_198 = uVar12;
    uStack_190 = uVar6;
    uStack_188 = uVar7;
    uStack_180 = uVar9;
    uStack_178 = uVar11;
    if (uVar11 >> 0x3c < 0xf) {
      if (0xe < uVar12 >> 0x3c) goto LAB_103a0f630;
      if (uVar6 != uVar3) {
        FUN_103a11d64(&uStack_190,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_1b0;
        goto LAB_103a0f788;
      }
      if ((int)uVar7 != (int)uVar8) {
        FUN_103a11d64(&uStack_190,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
        puVar5 = &uStack_1b0;
        goto LAB_103a0f7bc;
      }
      FUN_103a11d64(&uStack_190,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_1b0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000100d65094(uVar6,uVar8,uVar10,uVar12);
      if ((uVar3 & 1) == 0) goto LAB_103a0f7e4;
    }
    else {
      if (uVar12 >> 0x3c < 0xf) {
LAB_103a0f630:
        uStack_1f0 = uVar6;
        uStack_1e8 = uVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar3;
        uStack_1c8 = uVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        FUN_103a11d64(&uStack_190,auStack_210,0x112fc9a80,&UNK_10dc38d18);
        puVar4 = &uStack_1b0;
        goto LAB_103a0f66c;
      }
      FUN_103a11d64(&uStack_190,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
      FUN_103a11d64(&uStack_1b0,&uStack_1f0,0x112fc9a80,&UNK_10dc38d18);
    }
    func_0x000100d65094(uVar6,uVar7,uVar9,uVar11);
    uVar3 = *param_1;
    FUN_103a0d670(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      FUN_103a0d670(uVar3,param_2[1]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[2];
        func_0x000100e25fcc(uVar3,param_1[3],param_2[2],param_2[3]);
        uVar2 = (uint)uVar3;
        goto LAB_103a0f7fc;
      }
    }
  }
  uVar2 = 0;
LAB_103a0f7fc:
  return uVar2 & 1;
}



/* Entry: 103a11260; end: 103a1135f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a11260(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
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
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  byte *pbVar28;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar29;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    if (*(char *)((long)param_2 + 0x24) != '\x01') {
      return (byte *)0x0;
    }
  }
  else if (*(char *)((long)param_2 + 0x24) == '\x01' || (int)param_1[4] != (int)param_2[4]) {
    return (byte *)0x0;
  }
  bVar30 = *(byte *)((long)param_2 + 0x25);
  if (*(byte *)((long)param_1 + 0x25) == 2) {
    if (bVar30 != 2) {
      return (byte *)0x0;
    }
  }
  else {
    if (bVar30 == 2) {
      return (byte *)0x0;
    }
    if (((*(byte *)((long)param_1 + 0x25) ^ bVar30) & 1) != 0) {
      return (byte *)0x0;
    }
  }
  lVar22 = *param_1;
  lVar26 = *param_2;
  lVar19 = *(long *)(lVar22 + 0x10);
  if (lVar19 == *(long *)(lVar26 + 0x10)) {
    if (lVar19 != 0 && lVar22 != lVar26) {
      piVar23 = (int *)(lVar22 + 0x20);
      piVar27 = (int *)(lVar26 + 0x20);
      do {
        if (*piVar23 != *piVar27) {
          return (byte *)0x0;
        }
        lVar19 = lVar19 + -1;
        piVar23 = piVar23 + 1;
        piVar27 = piVar27 + 1;
      } while (lVar19 != 0);
    }
    lVar22 = param_1[1];
    lVar26 = param_2[1];
    lVar19 = *(long *)(lVar22 + 0x10);
    if (lVar19 == *(long *)(lVar26 + 0x10)) {
      if (lVar19 != 0 && lVar22 != lVar26) {
        piVar23 = (int *)(lVar22 + 0x20);
        piVar27 = (int *)(lVar26 + 0x20);
        do {
          if (*piVar23 != *piVar27) {
            return (byte *)0x0;
          }
          lVar19 = lVar19 + -1;
          piVar23 = piVar23 + 1;
          piVar27 = piVar27 + 1;
        } while (lVar19 != 0);
      }
      pbVar10 = (byte *)param_1[2];
      pbVar29 = (byte *)param_1[3];
      lVar19 = param_2[2];
      uVar16 = param_2[3];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar29 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar24 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar29;
        if ((ulong)pbVar29 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar29 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar29 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar24 == 0) {
            uVar25 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar19 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar24 == 2) {
            uVar25 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
            if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar29;
                puVar7[-0x67] = (char)((ulong)pbVar29 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar29 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar29 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar29 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar29 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar29 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
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
              unaff_x24 = pbVar29;
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
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar22 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar22;
              if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar29;
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
            unaff_x20 = (ulong)pbVar29 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar28 = *(byte **)(pbVar9 + 0x18);
        bVar30 = pbVar9[0x28];
        pbVar29 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar19,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar29;
            if ((pbVar10 == pbVar15) && (pbVar29 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar19 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar28 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar19);
              func_0x000107c61174();
              pbVar10 = pbVar28;
              func_0x000107c60118();
              func_0x000107c61170(pbVar28);
              func_0x000107c61170(lVar19);
              pbVar28 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar28 & 1) == 0) {
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
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar22 = *(long *)(pbVar9 + 0x20);
        if (bVar30 < 5) {
          if (bVar30 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar29, pbVar14 = pbVar28, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar29 == *(byte **)(pbVar13 + 0x10) && pbVar28 == *(byte **)(pbVar13 + 0x18))) {
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
          lVar19 = *(long *)(pbVar13 + 0x20);
          if (pbVar29 == (byte *)0x0) {
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
            pbVar14 = pbVar29;
            if ((pbVar10 != pbVar15) || (pbVar29 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar22 != 0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar28 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar28,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar19 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar30 != 5) {
          if ((((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar22 == 0) && pbVar29 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar19;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar22;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar46[1] = bVar31;
            auVar46[0] = bVar30;
            auVar46[2] = bVar32;
            auVar46[3] = bVar33;
            auVar46[4] = bVar34;
            auVar46[5] = bVar35;
            auVar46[6] = bVar36;
            auVar46[7] = bVar37;
            auVar46[8] = bVar38;
            auVar46[9] = bVar39;
            auVar46[10] = bVar40;
            auVar46[0xb] = bVar41;
            auVar46[0xc] = bVar42;
            auVar46[0xd] = bVar43;
            auVar46[0xe] = bVar44;
            auVar46[0xf] = bVar45;
            auVar3[1] = bVar31;
            auVar3[0] = bVar30;
            auVar3[2] = bVar32;
            auVar3[3] = bVar33;
            auVar3[4] = bVar34;
            auVar3[5] = bVar35;
            auVar3[6] = bVar36;
            auVar3[7] = bVar37;
            auVar3[8] = bVar38;
            auVar3[9] = bVar39;
            auVar3[10] = bVar40;
            auVar3[0xb] = bVar41;
            auVar3[0xc] = bVar42;
            auVar3[0xd] = bVar43;
            auVar3[0xe] = bVar44;
            auVar3[0xf] = bVar45;
            auVar46 = NEON_ext(auVar46,auVar3,8,1);
            if (CONCAT17(bVar37 | auVar46[7],
                         CONCAT16(bVar36 | auVar46[6],
                                  CONCAT15(bVar35 | auVar46[5],
                                           CONCAT14(bVar34 | auVar46[4],
                                                    CONCAT13(bVar33 | auVar46[3],
                                                             CONCAT12(bVar32 | auVar46[2],
                                                                      CONCAT11(bVar31 | auVar46[1],
                                                                               bVar30 | auVar46[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar29 == (byte *)0x0) &&
              lVar22 == 0)) {
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
          lVar22 = *(long *)(pbVar13 + 0x20);
          lVar19 = *(long *)(pbVar13 + 0x18);
          bVar30 = pbVar13[8] | (byte)lVar19;
          bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
          bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
          bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
          bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
          bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
          bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
          bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
          bVar38 = pbVar13[0x10] | (byte)lVar22;
          bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
          bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
          bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
          bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
          bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
          bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
          bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
          auVar1[1] = bVar31;
          auVar1[0] = bVar30;
          auVar1[2] = bVar32;
          auVar1[3] = bVar33;
          auVar1[4] = bVar34;
          auVar1[5] = bVar35;
          auVar1[6] = bVar36;
          auVar1[7] = bVar37;
          auVar1[8] = bVar38;
          auVar1[9] = bVar39;
          auVar1[10] = bVar40;
          auVar1[0xb] = bVar41;
          auVar1[0xc] = bVar42;
          auVar1[0xd] = bVar43;
          auVar1[0xe] = bVar44;
          auVar1[0xf] = bVar45;
          auVar2[1] = bVar31;
          auVar2[0] = bVar30;
          auVar2[2] = bVar32;
          auVar2[3] = bVar33;
          auVar2[4] = bVar34;
          auVar2[5] = bVar35;
          auVar2[6] = bVar36;
          auVar2[7] = bVar37;
          auVar2[8] = bVar38;
          auVar2[9] = bVar39;
          auVar2[10] = bVar40;
          auVar2[0xb] = bVar41;
          auVar2[0xc] = bVar42;
          auVar2[0xd] = bVar43;
          auVar2[0xe] = bVar44;
          auVar2[0xf] = bVar45;
          auVar46 = NEON_ext(auVar1,auVar2,8,1);
          lVar19 = CONCAT17(bVar37 | auVar46[7],
                            CONCAT16(bVar36 | auVar46[6],
                                     CONCAT15(bVar35 | auVar46[5],
                                              CONCAT14(bVar34 | auVar46[4],
                                                       CONCAT13(bVar33 | auVar46[3],
                                                                CONCAT12(bVar32 | auVar46[2],
                                                                         CONCAT11(bVar31 | auVar46[1
                                                  ],bVar30 | auVar46[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar19 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar22,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103a11360; end: 103a1144b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a1142c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103a11430) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a11360(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  bVar30 = *(byte *)(param_2 + 4);
  if (*(byte *)(param_1 + 4) == 2) {
    if (bVar30 != 2) {
      return (byte *)0x0;
    }
  }
  else {
    if (bVar30 == 2) {
      return (byte *)0x0;
    }
    if (((*(byte *)(param_1 + 4) ^ bVar30) & 1) != 0) {
      return (byte *)0x0;
    }
  }
  lVar19 = *param_1;
  lVar22 = *param_2;
  lVar26 = *(long *)(lVar19 + 0x10);
  if (lVar26 == *(long *)(lVar22 + 0x10)) {
    if (lVar26 != 0 && lVar19 != lVar22) {
      puVar28 = (undefined8 *)(lVar22 + 0x28);
      puVar29 = (undefined8 *)(lVar19 + 0x28);
      do {
        pbVar12 = (byte *)puVar29[-1];
        pbVar15 = (byte *)*puVar29;
        pbVar16 = (byte *)puVar28[-1];
        pbVar17 = (byte *)*puVar28;
        if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
        goto code_r0x000107c605b8;
        puVar28 = puVar28 + 2;
        puVar29 = puVar29 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    uVar13 = param_1[1];
    func_0x00010142cfc4(uVar13,param_2[1]);
    if ((uVar13 & 1) != 0) {
      pbVar10 = (byte *)param_1[2];
      pbVar27 = (byte *)param_1[3];
      lVar26 = param_2[2];
      uVar13 = param_2[3];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar27 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar26 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar26 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar26)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
            if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar27;
                puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
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
              unaff_x24 = pbVar27;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar27;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar26,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar30 = pbVar9[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar26 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar26,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar26 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar27;
            if ((pbVar10 == pbVar16) && (pbVar27 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar26 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar26);
                func_0x000107c61174();
                pbVar12 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar26);
                pbVar25 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar26 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar30 < 5) {
          if (bVar30 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar27, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar26 = *(long *)(pbVar14 + 0x20);
          if (pbVar27 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
              )(pbVar12,pbVar15,pbVar16,pbVar17,0);
              return pbVar12;
            }
          }
          if (lVar19 != 0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar19 == lVar26)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar14 + 0x18),lVar26,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar30 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar14 + 0x20);
            lVar26 = *(long *)(pbVar14 + 0x18);
            bVar30 = pbVar14[8] | (byte)lVar26;
            bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
            bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
            bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
            bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
            bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
            bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
            bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
            bVar38 = pbVar14[0x10] | (byte)lVar19;
            bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar46[1] = bVar31;
            auVar46[0] = bVar30;
            auVar46[2] = bVar32;
            auVar46[3] = bVar33;
            auVar46[4] = bVar34;
            auVar46[5] = bVar35;
            auVar46[6] = bVar36;
            auVar46[7] = bVar37;
            auVar46[8] = bVar38;
            auVar46[9] = bVar39;
            auVar46[10] = bVar40;
            auVar46[0xb] = bVar41;
            auVar46[0xc] = bVar42;
            auVar46[0xd] = bVar43;
            auVar46[0xe] = bVar44;
            auVar46[0xf] = bVar45;
            auVar3[1] = bVar31;
            auVar3[0] = bVar30;
            auVar3[2] = bVar32;
            auVar3[3] = bVar33;
            auVar3[4] = bVar34;
            auVar3[5] = bVar35;
            auVar3[6] = bVar36;
            auVar3[7] = bVar37;
            auVar3[8] = bVar38;
            auVar3[9] = bVar39;
            auVar3[10] = bVar40;
            auVar3[0xb] = bVar41;
            auVar3[0xc] = bVar42;
            auVar3[0xd] = bVar43;
            auVar3[0xe] = bVar44;
            auVar3[0xf] = bVar45;
            auVar46 = NEON_ext(auVar46,auVar3,8,1);
            if (CONCAT17(bVar37 | auVar46[7],
                         CONCAT16(bVar36 | auVar46[6],
                                  CONCAT15(bVar35 | auVar46[5],
                                           CONCAT14(bVar34 | auVar46[4],
                                                    CONCAT13(bVar33 | auVar46[3],
                                                             CONCAT12(bVar32 | auVar46[2],
                                                                      CONCAT11(bVar31 | auVar46[1],
                                                                               bVar30 | auVar46[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar19 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar19 = *(long *)(pbVar14 + 0x20);
          lVar26 = *(long *)(pbVar14 + 0x18);
          bVar30 = pbVar14[8] | (byte)lVar26;
          bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
          bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
          bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
          bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
          bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
          bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
          bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
          bVar38 = pbVar14[0x10] | (byte)lVar19;
          bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar31;
          auVar1[0] = bVar30;
          auVar1[2] = bVar32;
          auVar1[3] = bVar33;
          auVar1[4] = bVar34;
          auVar1[5] = bVar35;
          auVar1[6] = bVar36;
          auVar1[7] = bVar37;
          auVar1[8] = bVar38;
          auVar1[9] = bVar39;
          auVar1[10] = bVar40;
          auVar1[0xb] = bVar41;
          auVar1[0xc] = bVar42;
          auVar1[0xd] = bVar43;
          auVar1[0xe] = bVar44;
          auVar1[0xf] = bVar45;
          auVar2[1] = bVar31;
          auVar2[0] = bVar30;
          auVar2[2] = bVar32;
          auVar2[3] = bVar33;
          auVar2[4] = bVar34;
          auVar2[5] = bVar35;
          auVar2[6] = bVar36;
          auVar2[7] = bVar37;
          auVar2[8] = bVar38;
          auVar2[9] = bVar39;
          auVar2[10] = bVar40;
          auVar2[0xb] = bVar41;
          auVar2[0xc] = bVar42;
          auVar2[0xd] = bVar43;
          auVar2[0xe] = bVar44;
          auVar2[0xf] = bVar45;
          auVar46 = NEON_ext(auVar1,auVar2,8,1);
          lVar26 = CONCAT17(bVar37 | auVar46[7],
                            CONCAT16(bVar36 | auVar46[6],
                                     CONCAT15(bVar35 | auVar46[5],
                                              CONCAT14(bVar34 | auVar46[4],
                                                       CONCAT13(bVar33 | auVar46[3],
                                                                CONCAT12(bVar32 | auVar46[2],
                                                                         CONCAT11(bVar31 | auVar46[1
                                                  ],bVar30 | auVar46[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar19 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103a1144c; end: 103a1146b;  */

void FUN_103a1144c(void)

{
  func_0x000107c61168(&PTR_PTR_112fc9f78);
  return;
}



/* Entry: 103a1146c; end: 103a11b23;  */

void FUN_103a1146c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar22 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar22 = 0;
  puVar23 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar23 = 0;
  puVar18 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar18 = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  puVar21 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar21 = 0;
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  puVar15 = (undefined8 *)(unaff_x20 + 0x50);
  *puVar15 = 0;
  puVar19 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar19 = 0;
  *(undefined1 *)(unaff_x20 + 0x58) = 1;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  puVar6 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar6 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *puVar7 = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *puVar8 = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *puVar9 = 0;
  puVar10 = (undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *puVar10 = 0;
  *(undefined1 *)(unaff_x20 + 0x78) = 1;
  puVar5 = (undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *puVar5 = 0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = (undefined8 *)(unaff_x20 + 0xd0);
  *puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar12 = (undefined8 *)(unaff_x20 + 0xd8);
  *puVar12 = puVar4;
  *(undefined2 *)(unaff_x20 + 0xe0) = 0x2fc;
  puVar13 = (undefined1 *)(unaff_x20 + 0xe2);
  *puVar13 = 2;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar23,auStack_98,1,0);
  *puVar23 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar17;
  func_0x000107c61428(param_1 + 0x20,auStack_b0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(puVar22,auStack_c8,1,0);
  *puVar22 = uVar14;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar3;
  func_0x000107c61428(param_1 + 0x30,auStack_e0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined1 *)(param_1 + 0x38);
  func_0x000107c61428(puVar18,auStack_f8,1,0);
  *puVar18 = uVar14;
  *(undefined1 *)(unaff_x20 + 0x38) = uVar3;
  func_0x000107c61428(param_1 + 0x40,auStack_110,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined1 *)(param_1 + 0x48);
  func_0x000107c61428(puVar21,auStack_128,1,0);
  *puVar21 = uVar14;
  *(undefined1 *)(unaff_x20 + 0x48) = uVar3;
  func_0x000107c61428(param_1 + 0x50,auStack_140,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined1 *)(param_1 + 0x58);
  func_0x000107c61428(puVar15,auStack_158,1,0);
  *puVar15 = uVar14;
  *(undefined1 *)(unaff_x20 + 0x58) = uVar3;
  func_0x000107c61428(param_1 + 0x60,auStack_170,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined1 *)(param_1 + 0x68);
  func_0x000107c61428(puVar19,auStack_188,1,0);
  *puVar19 = uVar14;
  *(undefined1 *)(unaff_x20 + 0x68) = uVar3;
  func_0x000107c61428(param_1 + 0x70,auStack_1a0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined1 *)(param_1 + 0x78);
  func_0x000107c61428(puVar6,auStack_1b8,1,0);
  *puVar6 = uVar14;
  *(undefined1 *)(unaff_x20 + 0x78) = uVar3;
  func_0x000107c61428(param_1 + 0x80,auStack_1d0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x80);
  uVar16 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c61428(puVar5,auStack_1e8,1,0);
  *puVar5 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar16;
  func_0x000107c61428(param_1 + 0x90,auStack_200,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(puVar10,auStack_218,1,0);
  *puVar10 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
  func_0x000107c61428(param_1 + 0xa0,auStack_230,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(puVar9,auStack_248,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar9 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar2;
  func_0x000107c61434(uVar17);
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar20);
  func_0x000107c61428(param_1 + 0xb0,auStack_260,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xb0);
  uVar17 = *(undefined8 *)(param_1 + 0xb8);
  func_0x000107c61428(puVar8,auStack_278,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb8);
  *puVar8 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar17;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0xc0,auStack_290,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
  uVar17 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(puVar7,auStack_2a8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 200);
  *puVar7 = uVar14;
  *(undefined8 *)(unaff_x20 + 200) = uVar17;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0xd0,auStack_2c0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xd0);
  func_0x000107c61428(puVar11,auStack_2d8,1,0);
  uVar17 = *puVar11;
  *puVar11 = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0xd8,auStack_2f0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xd8);
  func_0x000107c61428(puVar12,auStack_308,1,0);
  uVar17 = *puVar12;
  *puVar12 = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar17);
  *(undefined1 *)(unaff_x20 + 0xe0) = *(undefined1 *)(param_1 + 0xe0);
  func_0x000107c61428(param_1 + 0xe1,auStack_320,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0xe1);
  func_0x000107c61428(unaff_x20 + 0xe1,auStack_338,1,0);
  *(undefined1 *)(unaff_x20 + 0xe1) = uVar3;
  func_0x000107c61428(param_1 + 0xe2,auStack_350,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0xe2);
  func_0x000107c61428(puVar13,auStack_368,1,0);
  *puVar13 = uVar3;
  return;
}



/* Entry: 103a11b24; end: 103a11b4f;  */

void FUN_103a11b24(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_3);
    return;
  }
  return;
}



/* Entry: 103a11b50; end: 103a11d63;  */

void FUN_103a11b50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar7 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar7 = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  puVar8 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar8 = 0;
  *(undefined2 *)(unaff_x20 + 0x28) = 0x201;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar6 = 0;
  puVar5 = (undefined1 *)(unaff_x20 + 0x60);
  *puVar5 = 2;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined1 *)(param_1 + 0x18);
  func_0x000107c61428(puVar7,auStack_98,1,0);
  *puVar7 = uVar9;
  *(undefined1 *)(unaff_x20 + 0x18) = uVar4;
  func_0x000107c61428(param_1 + 0x20,auStack_b0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(puVar8,auStack_c8,1,0);
  *puVar8 = uVar9;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar4;
  func_0x000107c61428(param_1 + 0x29,auStack_e0,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x29);
  func_0x000107c61428(unaff_x20 + 0x29,auStack_f8,1,0);
  *(undefined1 *)(unaff_x20 + 0x29) = uVar4;
  func_0x000107c61428(param_1 + 0x30,auStack_110,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar6,auStack_128,1,0);
  uVar11 = *puVar6;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar6 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar10;
  FUN_103a11b24(uVar9,uVar2,uVar10);
  FUN_103a17d14(uVar11,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0x48,auStack_140,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61428(unaff_x20 + 0x48,auStack_158,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar10;
  FUN_103a11b24(uVar9,uVar2,uVar10);
  FUN_103a17d14(uVar1,uVar3,uVar11);
  func_0x000107c61428(param_1 + 0x60,auStack_170,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x60);
  func_0x000107c61428(puVar5,auStack_188,1,0);
  *puVar5 = uVar4;
  return;
}



/* Entry: 103a11d64; end: 103a11dab;  */

undefined8 FUN_103a11d64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103a11dac; end: 103a123ab;  */

void FUN_103a11dac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38f18;
  func_0x000107c61520(&UNK_10dc38f18,&UNK_1106bded0);
  puRam0000000112fc9a98 = puVar1;
  return;
}



/* Entry: 103a123ac; end: 103a123af;  */

void FUN_103a123ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38d20;
  func_0x000107c61520(&UNK_10dc38d20,&UNK_1106bde58);
  puRam0000000112fc9c08 = puVar1;
  return;
}



/* Entry: 103a123b0; end: 103a123ef;  */

void FUN_103a123b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38d20;
  func_0x000107c61520(&UNK_10dc38d20,&UNK_1106bde58);
  puRam0000000112fc9c08 = puVar1;
  return;
}



/* Entry: 103a123f0; end: 103a12403;  */

void FUN_103a123f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a12404();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103a12444)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a12404; end: 103a12483;  */

void FUN_103a12404(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38d48;
  func_0x000107c61520(&UNK_10dc38d48,&UNK_1106bde58);
  puRam0000000112fc9c10 = puVar1;
  return;
}



/* Entry: 103a12484; end: 103a12487;  */

void FUN_103a12484(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fc9c20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fc9c28;
  func_0x00010002969c(0x112fc9c28,&UNK_10dc38de0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fc9c20 = puVar2;
  return;
}



/* Entry: 103a12488; end: 103a124d7;  */

void FUN_103a12488(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fc9c20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fc9c28;
  func_0x00010002969c(0x112fc9c28,&UNK_10dc38de0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fc9c20 = puVar2;
  return;
}



/* Entry: 103a124d8; end: 103a124fb;  */

void FUN_103a124d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a124fc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a124fc; end: 103a1253b;  */

void FUN_103a124fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38ef0;
  func_0x000107c61520(&UNK_10dc38ef0,&UNK_1106bded0);
  puRam0000000112fc9c30 = puVar1;
  return;
}



/* Entry: 103a1253c; end: 103a1254f;  */

void FUN_103a1253c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a11dac();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a12550();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a12550; end: 103a1258f;  */

void FUN_103a12550(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc38ea8;
  func_0x000107c61520(&DAT_10dc38ea8,&UNK_1106bded0);
  puRam0000000112fc9c38 = puVar1;
  return;
}



/* Entry: 103a12590; end: 103a12593;  */

void FUN_103a12590(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38f58;
  func_0x000107c61520(&UNK_10dc38f58,&UNK_1106bded0);
  puRam0000000112fc9c40 = puVar1;
  return;
}



/* Entry: 103a12594; end: 103a125d3;  */

void FUN_103a12594(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38f58;
  func_0x000107c61520(&UNK_10dc38f58,&UNK_1106bded0);
  puRam0000000112fc9c40 = puVar1;
  return;
}



/* Entry: 103a125d4; end: 103a125f7;  */

void FUN_103a125d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a125f8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a125f8; end: 103a12637;  */

void FUN_103a125f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38fc8;
  func_0x000107c61520(&UNK_10dc38fc8,&UNK_1106bdfe0);
  puRam0000000112fc9c48 = puVar1;
  return;
}



/* Entry: 103a12638; end: 103a1264b;  */

void FUN_103a12638(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103a11dec)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a1264c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a1264c; end: 103a1268b;  */

void FUN_103a1264c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc38f80;
  func_0x000107c61520(&DAT_10dc38f80,&UNK_1106bdfe0);
  puRam0000000112fc9c50 = puVar1;
  return;
}



/* Entry: 103a1268c; end: 103a1268f;  */

void FUN_103a1268c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc39030;
  func_0x000107c61520(&UNK_10dc39030,&UNK_1106bdfe0);
  puRam0000000112fc9c58 = puVar1;
  return;
}



/* Entry: 103a12690; end: 103a126cf;  */

void FUN_103a12690(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc39030;
  func_0x000107c61520(&UNK_10dc39030,&UNK_1106bdfe0);
  puRam0000000112fc9c58 = puVar1;
  return;
}



/* Entry: 103a126d0; end: 103a126f3;  */

void FUN_103a126d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a126f4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a126f4; end: 103a12733;  */

void FUN_103a126f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc390a0;
  func_0x000107c61520(&UNK_10dc390a0,&UNK_1106be080);
  puRam0000000112fc9c60 = puVar1;
  return;
}



/* Entry: 103a12734; end: 103a12747;  */

void FUN_103a12734(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103a11e2c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a12748();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a12748; end: 103a12787;  */

void FUN_103a12748(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc39058;
  func_0x000107c61520(&DAT_10dc39058,&UNK_1106be080);
  puRam0000000112fc9c68 = puVar1;
  return;
}



/* Entry: 103a12788; end: 103a1278b;  */

void FUN_103a12788(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc39108;
  func_0x000107c61520(&UNK_10dc39108,&UNK_1106be080);
  puRam0000000112fc9c70 = puVar1;
  return;
}



/* Entry: 103a1278c; end: 103a127cb;  */

void FUN_103a1278c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc39108;
  func_0x000107c61520(&UNK_10dc39108,&UNK_1106be080);
  puRam0000000112fc9c70 = puVar1;
  return;
}



/* Entry: 103a127cc; end: 103a127ef;  */

void FUN_103a127cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a127f0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a127f0; end: 103a1282f;  */

void FUN_103a127f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc39178;
  func_0x000107c61520(&UNK_10dc39178,&UNK_1106be120);
  puRam0000000112fc9c78 = puVar1;
  return;
}



/* Entry: 103a12830; end: 103a12843;  */

void FUN_103a12830(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103a11e6c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a12844();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a12844; end: 103a12883;  */

void FUN_103a12844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc39130;
  func_0x000107c61520(&DAT_10dc39130,&UNK_1106be120);
  puRam0000000112fc9c80 = puVar1;
  return;
}



/* Entry: 103a12884; end: 103a12887;  */

void FUN_103a12884(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc391e0;
  func_0x000107c61520(&UNK_10dc391e0,&UNK_1106be120);
  puRam0000000112fc9c88 = puVar1;
  return;
}



/* Entry: 103a12888; end: 103a128c7;  */

void FUN_103a12888(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc391e0;
  func_0x000107c61520(&UNK_10dc391e0,&UNK_1106be120);
  puRam0000000112fc9c88 = puVar1;
  return;
}



/* Entry: 103a128c8; end: 103a128eb;  */

void FUN_103a128c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a128ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a128ec; end: 103a1292b;  */

void FUN_103a128ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc39250;
  func_0x000107c61520(&UNK_10dc39250,&UNK_1106be1c0);
  puRam0000000112fc9c90 = puVar1;
  return;
}



/* Entry: 103a1292c; end: 103a1293f;  */

void FUN_103a1292c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103a11eac)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a12940();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a12940; end: 103a1297f;  */

void FUN_103a12940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc39208;
  func_0x000107c61520(&DAT_10dc39208,&UNK_1106be1c0);
  puRam0000000112fc9c98 = puVar1;
  return;
}



/* Entry: 103a12980; end: 103a12983;  */

void FUN_103a12980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc392b8;
  func_0x000107c61520(&UNK_10dc392b8,&UNK_1106be1c0);
  puRam0000000112fc9ca0 = puVar1;
  return;
}



/* Entry: 103a12984; end: 103a129c3;  */

void FUN_103a12984(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc392b8;
  func_0x000107c61520(&UNK_10dc392b8,&UNK_1106be1c0);
  puRam0000000112fc9ca0 = puVar1;
  return;
}



/* Entry: 103a129c4; end: 103a129e7;  */

void FUN_103a129c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a129e8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


