/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035131c4; end: 1035131d7;  */

void FUN_1035131c4(void)

{
  FUN_103512918();
  return;
}



/* Entry: 1035131d8; end: 103513247;  */

void FUN_1035131d8(void)

{
  FUN_103512ad4();
  return;
}



/* Entry: 103513248; end: 10351324b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103513248(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10351324c; end: 103513283;  */

uint FUN_10351324c(long param_1,long param_2)

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
  FUN_103515688();
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



/* Entry: 103513284; end: 103513343;  */

uint FUN_103513284(undefined8 *param_1)

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
  FUN_103513900(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 103513344; end: 1035133e3;  */

/* WARNING: Possible PIC construction at 0x000103513390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035133a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103513394) */
/* WARNING: Removing unreachable block (ram,0x0001035133a4) */

void FUN_103513344(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75bd8 != -1) {
    func_0x000107c61568(0x112f75bd8,FUN_1035128d0);
  }
  uVar5 = uRam0000000113807968;
  uVar4 = uRam0000000113807960;
  uVar3 = uRam0000000113807958;
  uVar2 = uRam0000000113807950;
  uVar1 = uRam0000000113807948;
  *param_1 = uRam0000000113807940;
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



/* Entry: 1035133e4; end: 10351341f;  */

void FUN_1035133e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75c68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75c68,&UNK_10dbd3c58);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103513420; end: 10351359b;  */

void FUN_103513420(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10351359c; end: 10351365b;  */

uint FUN_10351359c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103513900(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10351365c; end: 1035136a3;  */

void FUN_10351365c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd3c90,0x59,2);
  uRam0000000113807978 = uStack_38;
  uRam0000000113807970 = uStack_40;
  uRam0000000113807988 = uStack_28;
  uRam0000000113807980 = uStack_30;
  uRam0000000113807998 = uStack_18;
  uRam0000000113807990 = uStack_20;
  return;
}



/* Entry: 1035136a4; end: 103513743;  */

/* WARNING: Possible PIC construction at 0x0001035136f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103513700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035136f4) */
/* WARNING: Removing unreachable block (ram,0x000103513704) */

void FUN_1035136a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75bf8 != -1) {
    func_0x000107c61568(0x112f75bf8,FUN_10351365c);
  }
  uVar5 = uRam0000000113807998;
  uVar4 = uRam0000000113807990;
  uVar3 = uRam0000000113807988;
  uVar2 = uRam0000000113807980;
  uVar1 = uRam0000000113807978;
  *param_1 = uRam0000000113807970;
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



/* Entry: 103513744; end: 10351378b;  */

void FUN_103513744(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd3c60,0x2b,2);
  uRam00000001138079a8 = uStack_38;
  uRam00000001138079a0 = uStack_40;
  uRam00000001138079b8 = uStack_28;
  uRam00000001138079b0 = uStack_30;
  uRam00000001138079c8 = uStack_18;
  uRam00000001138079c0 = uStack_20;
  return;
}



/* Entry: 10351378c; end: 10351382b;  */

/* WARNING: Possible PIC construction at 0x0001035137d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035137e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035137dc) */
/* WARNING: Removing unreachable block (ram,0x0001035137ec) */

void FUN_10351378c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75c00 != -1) {
    func_0x000107c61568(0x112f75c00,FUN_103513744);
  }
  uVar5 = uRam00000001138079c8;
  uVar4 = uRam00000001138079c0;
  uVar3 = uRam00000001138079b8;
  uVar2 = uRam00000001138079b0;
  uVar1 = uRam00000001138079a8;
  *param_1 = uRam00000001138079a0;
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



/* Entry: 10351382c; end: 103513873;  */

undefined8 FUN_10351382c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103513874; end: 10351387f;  */

void FUN_103513874(void)

{
  return;
}



/* Entry: 103513880; end: 1035138ff;  */

void FUN_103513880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd38c0;
  func_0x000107c61520(&DAT_10dbd38c0,&UNK_11065fe90);
  puRam0000000112f75be0 = puVar1;
  return;
}



/* Entry: 103513900; end: 103514663;  */

uint FUN_103513900(long *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_280 [32];
  ulong uStack_260;
  long lStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  long lStack_210;
  ulong uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  ulong uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar9 = param_1[7];
  uVar12 = param_1[6];
  lVar5 = param_1[8];
  uVar11 = param_2[7];
  uVar13 = param_2[6];
  lVar6 = param_2[8];
  uStack_a0 = uVar13;
  uStack_98 = uVar11;
  lStack_90 = lVar6;
  uStack_80 = uVar12;
  uStack_78 = uVar9;
  lStack_70 = lVar5;
  if ((uVar12 & 0xff) == 2) {
    if ((uVar13 & 0xff) != 2) {
LAB_1035139f0:
      FUN_10351382c(&uStack_80,&uStack_240,0x112db94f0,&UNK_10d96af00);
      puVar2 = &uStack_a0;
      lVar14 = lVar5;
      uVar3 = uVar9;
      uVar10 = uVar12;
      lVar5 = lVar6;
      uVar9 = uVar11;
      uVar12 = uVar13;
LAB_103513a18:
      FUN_10351382c(puVar2,&uStack_240,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar10,uVar3,lVar14);
      goto LAB_103513ca0;
    }
    FUN_10351382c(&uStack_80,&uStack_240,0x112db94f0,&UNK_10d96af00);
    FUN_10351382c(&uStack_a0,&uStack_240,0x112db94f0,&UNK_10d96af00);
LAB_1035139a8:
    func_0x000101556278(uVar12,uVar9,lVar5);
    lVar5 = *param_1;
    lVar6 = *param_2;
    if ((char)param_2[1] != '\x01') {
      if (lVar5 == lVar6) goto LAB_103513aa4;
      goto LAB_103513ca4;
    }
    if (3 < lVar6) {
      if (lVar6 < 6) {
        if (lVar6 == 4) {
          if (lVar5 == 4) goto LAB_103513aa4;
        }
        else if (lVar5 == 5) goto LAB_103513aa4;
      }
      else if (lVar6 == 6) {
        if (lVar5 == 6) goto LAB_103513aa4;
      }
      else if (lVar5 == 7) goto LAB_103513aa4;
      goto LAB_103513ca4;
    }
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_103513aa4:
          uVar12 = param_1[10];
          lVar5 = param_1[9];
          uVar9 = param_1[0xb];
          uVar13 = param_2[10];
          lVar6 = param_2[9];
          uVar11 = param_2[0xb];
          lStack_e0 = lVar6;
          uStack_d8 = uVar13;
          uStack_d0 = uVar11;
          lStack_c0 = lVar5;
          uStack_b8 = uVar12;
          uStack_b0 = uVar9;
          if (uVar9 >> 0x3c < 0xf) {
            if (0xe < uVar11 >> 0x3c) goto LAB_103513cf0;
            if ((int)lVar5 == (int)lVar6) {
              FUN_10351382c(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              FUN_10351382c(&lStack_e0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              uVar3 = uVar12;
              func_0x000100e25fcc(uVar12,uVar9,uVar13,uVar11);
              func_0x000100d55018(lVar6,uVar13,uVar11);
              if ((uVar3 & 1) != 0) goto LAB_103513b1c;
            }
            else {
              uVar7 = 0x112db80f8;
              puVar8 = &UNK_10d9671e0;
              FUN_10351382c(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              plVar4 = &lStack_e0;
LAB_103513f3c:
              FUN_10351382c(plVar4,&uStack_240,uVar7,puVar8);
              func_0x000100d55018(lVar6,uVar13,uVar11);
            }
          }
          else {
            if (0xe < uVar11 >> 0x3c) {
              FUN_10351382c(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              FUN_10351382c(&lStack_e0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
LAB_103513b1c:
              func_0x000100d55018(lVar5,uVar12,uVar9);
              uVar12 = param_1[0xd];
              lVar5 = param_1[0xc];
              uVar9 = param_1[0xe];
              uVar13 = param_2[0xd];
              lVar6 = param_2[0xc];
              uVar11 = param_2[0xe];
              lStack_120 = lVar6;
              uStack_118 = uVar13;
              uStack_110 = uVar11;
              lStack_100 = lVar5;
              uStack_f8 = uVar12;
              uStack_f0 = uVar9;
              if (uVar9 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103513dbc;
                if ((int)lVar5 != (int)lVar6) {
                  uVar7 = 0x112db80f8;
                  puVar8 = &UNK_10d9671e0;
                  FUN_10351382c(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  plVar4 = &lStack_120;
                  goto LAB_103513f3c;
                }
                FUN_10351382c(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                FUN_10351382c(&lStack_120,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                uVar3 = uVar12;
                func_0x000100e25fcc(uVar12,uVar9,uVar13,uVar11);
                func_0x000100d55018(lVar6,uVar13,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103513f68;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103513dbc:
                  uVar7 = 0x112db80f8;
                  puVar8 = &UNK_10d9671e0;
                  FUN_10351382c(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  plVar4 = &lStack_120;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar14 = lVar5;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  lVar5 = lVar6;
                  goto LAB_103513ee4;
                }
                FUN_10351382c(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                FUN_10351382c(&lStack_120,&uStack_240,0x112db80f8,&UNK_10d9671e0);
              }
              func_0x000100d55018(lVar5,uVar12,uVar9);
              uVar12 = param_1[0x10];
              lVar5 = param_1[0xf];
              uVar9 = param_1[0x11];
              uVar13 = param_2[0x10];
              lVar6 = param_2[0xf];
              uVar11 = param_2[0x11];
              lStack_160 = lVar6;
              uStack_158 = uVar13;
              uStack_150 = uVar11;
              lStack_140 = lVar5;
              uStack_138 = uVar12;
              uStack_130 = uVar9;
              if (uVar9 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103513ebc;
                if ((float)lVar5 != (float)lVar6) {
                  uVar7 = 0x112db6358;
                  puVar8 = &UNK_10d961e20;
                  FUN_10351382c(&lStack_140,&uStack_240,0x112db6358,&UNK_10d961e20);
                  plVar4 = &lStack_160;
                  goto LAB_103513f3c;
                }
                FUN_10351382c(&lStack_140,&uStack_240,0x112db6358,&UNK_10d961e20);
                FUN_10351382c(&lStack_160,&uStack_240,0x112db6358,&UNK_10d961e20);
                uVar3 = uVar12;
                func_0x000100e25fcc(uVar12,uVar9,uVar13,uVar11);
                func_0x000100d55018(lVar6,uVar13,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103513f68;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103513ebc:
                  uVar7 = 0x112db6358;
                  puVar8 = &UNK_10d961e20;
                  FUN_10351382c(&lStack_140,&uStack_240,0x112db6358,&UNK_10d961e20);
                  plVar4 = &lStack_160;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar14 = lVar5;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  lVar5 = lVar6;
                  goto LAB_103513ee4;
                }
                FUN_10351382c(&lStack_140,&uStack_240,0x112db6358,&UNK_10d961e20);
                FUN_10351382c(&lStack_160,&uStack_240,0x112db6358,&UNK_10d961e20);
              }
              func_0x000100d55018(lVar5,uVar12,uVar9);
              uVar9 = param_1[0x13];
              uVar12 = param_1[0x12];
              lVar5 = param_1[0x14];
              uVar11 = param_2[0x13];
              uVar13 = param_2[0x12];
              lVar6 = param_2[0x14];
              uStack_1a0 = uVar13;
              uStack_198 = uVar11;
              lStack_190 = lVar6;
              uStack_180 = uVar12;
              uStack_178 = uVar9;
              lStack_170 = lVar5;
              if ((uVar12 & 0xff) == 2) {
                if ((uVar13 & 0xff) != 2) {
LAB_103514260:
                  FUN_10351382c(&uStack_180,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_1a0;
                  lVar14 = lVar5;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar5 = lVar6;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  goto LAB_103513a18;
                }
                FUN_10351382c(&uStack_180,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_1a0,&uStack_240,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar13 & 0xff) == 2) goto LAB_103514260;
                if ((((uint)uVar13 ^ (uint)uVar12) & 1) != 0) {
                  FUN_10351382c(&uStack_180,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_1a0;
                  goto LAB_103513a78;
                }
                FUN_10351382c(&uStack_180,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_1a0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                uVar3 = uVar9;
                func_0x000100e25fcc(uVar9,lVar5,uVar11,lVar6);
                func_0x000101556278(uVar13,uVar11,lVar6);
                if ((uVar3 & 1) == 0) goto LAB_103513ca0;
              }
              func_0x000101556278(uVar12,uVar9,lVar5);
              uVar9 = param_1[0x16];
              uVar12 = param_1[0x15];
              lVar5 = param_1[0x17];
              uVar11 = param_2[0x16];
              uVar13 = param_2[0x15];
              lVar6 = param_2[0x17];
              uStack_1e0 = uVar13;
              uStack_1d8 = uVar11;
              lStack_1d0 = lVar6;
              uStack_1c0 = uVar12;
              uStack_1b8 = uVar9;
              lStack_1b0 = lVar5;
              if ((uVar12 & 0xff) == 2) {
                if ((uVar13 & 0xff) != 2) {
LAB_1035142f4:
                  FUN_10351382c(&uStack_1c0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_1e0;
                  lVar14 = lVar5;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar5 = lVar6;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  goto LAB_103513a18;
                }
                FUN_10351382c(&uStack_1c0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_1e0,&uStack_240,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar13 & 0xff) == 2) goto LAB_1035142f4;
                if ((((uint)uVar13 ^ (uint)uVar12) & 1) != 0) {
                  FUN_10351382c(&uStack_1c0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_1e0;
                  goto LAB_103513a78;
                }
                FUN_10351382c(&uStack_1c0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_1e0,&uStack_240,0x112db94f0,&UNK_10d96af00);
                uVar3 = uVar9;
                func_0x000100e25fcc(uVar9,lVar5,uVar11,lVar6);
                func_0x000101556278(uVar13,uVar11,lVar6);
                if ((uVar3 & 1) == 0) goto LAB_103513ca0;
              }
              func_0x000101556278(uVar12,uVar9,lVar5);
              uVar9 = param_1[0x19];
              uVar12 = param_1[0x18];
              lVar5 = param_1[0x1a];
              uVar11 = param_2[0x19];
              uVar13 = param_2[0x18];
              lVar6 = param_2[0x1a];
              uStack_220 = uVar13;
              uStack_218 = uVar11;
              lStack_210 = lVar6;
              uStack_200 = uVar12;
              uStack_1f8 = uVar9;
              lStack_1f0 = lVar5;
              if ((uVar12 & 0xff) == 2) {
                if ((uVar13 & 0xff) != 2) {
LAB_1035143c4:
                  FUN_10351382c(&uStack_200,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_220;
                  lVar14 = lVar5;
                  uVar3 = uVar9;
                  uVar10 = uVar12;
                  lVar5 = lVar6;
                  uVar9 = uVar11;
                  uVar12 = uVar13;
                  goto LAB_103513a18;
                }
                FUN_10351382c(&uStack_200,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_220,&uStack_240,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar13 & 0xff) == 2) goto LAB_1035143c4;
                if ((((uint)uVar13 ^ (uint)uVar12) & 1) != 0) {
                  FUN_10351382c(&uStack_200,&uStack_240,0x112db94f0,&UNK_10d96af00);
                  puVar2 = &uStack_220;
                  goto LAB_103513a78;
                }
                FUN_10351382c(&uStack_200,&uStack_240,0x112db94f0,&UNK_10d96af00);
                FUN_10351382c(&uStack_220,&uStack_240,0x112db94f0,&UNK_10d96af00);
                uVar3 = uVar9;
                func_0x000100e25fcc(uVar9,lVar5,uVar11,lVar6);
                func_0x000101556278(uVar13,uVar11,lVar6);
                if ((uVar3 & 1) == 0) goto LAB_103513ca0;
              }
              func_0x000101556278(uVar12,uVar9,lVar5);
              lVar5 = param_1[0x1c];
              uVar9 = param_1[0x1b];
              lVar6 = param_1[0x1e];
              uVar12 = param_1[0x1d];
              lVar14 = param_2[0x1c];
              uVar11 = param_2[0x1b];
              lVar15 = param_2[0x1e];
              uVar13 = param_2[0x1d];
              uStack_260 = uVar11;
              lStack_258 = lVar14;
              uStack_250 = uVar13;
              lStack_248 = lVar15;
              uStack_240 = uVar9;
              lStack_238 = lVar5;
              uStack_230 = uVar12;
              lStack_228 = lVar6;
              if (lVar5 == 0) {
                if (lVar14 == 0) {
                  FUN_10351382c(&uStack_240,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  FUN_10351382c(&uStack_260,auStack_280,0x112db6f40,&UNK_10d9681d0);
LAB_103514594:
                  func_0x000101597ae4(uVar9,lVar5,uVar12,lVar6);
                  lVar5 = param_1[2];
                  lVar6 = param_2[2];
                  if ((char)param_2[3] == '\x01') {
                    if (lVar6 == 0) {
                      if (lVar5 == 0) goto LAB_103514654;
                    }
                    else if (lVar6 == 1) {
                      if (lVar5 == 1) {
LAB_103514654:
                        lVar5 = param_1[4];
                        func_0x000100e25fcc(lVar5,param_1[5],param_2[4],param_2[5]);
                        uVar1 = (uint)lVar5;
                        goto LAB_103513ca8;
                      }
                    }
                    else if (lVar5 == 2) goto LAB_103514654;
                  }
                  else if (lVar5 == lVar6) goto LAB_103514654;
                  goto LAB_103513ca4;
                }
LAB_1035144f8:
                FUN_10351382c(&uStack_240,auStack_280,0x112db6f40,&UNK_10d9681d0);
                FUN_10351382c(&uStack_260,auStack_280,0x112db6f40,&UNK_10d9681d0);
                func_0x000101597ae4(uVar9,lVar5,uVar12,lVar6);
                uVar9 = uVar11;
                lVar5 = lVar14;
                uVar12 = uVar13;
                lVar6 = lVar15;
              }
              else {
                if (lVar14 == 0) goto LAB_1035144f8;
                if (((uVar9 == uVar11) && (lVar5 == lVar14)) ||
                   (uVar3 = uVar9, func_0x000107c605b8(uVar9,lVar5,uVar11,lVar14,0),
                   (uVar3 & 1) != 0)) {
                  FUN_10351382c(&uStack_240,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  FUN_10351382c(&uStack_260,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  uVar3 = uVar12;
                  func_0x000100e25fcc(uVar12,lVar6,uVar13,lVar15);
                  func_0x000101597ae4(uVar11,lVar14,uVar13,lVar15);
                  if ((uVar3 & 1) != 0) goto LAB_103514594;
                }
                else {
                  FUN_10351382c(&uStack_240,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  FUN_10351382c(&uStack_260,auStack_280,0x112db6f40,&UNK_10d9681d0);
                  func_0x000101597ae4(uVar11,lVar14,uVar13,lVar15);
                }
              }
              func_0x000101597ae4(uVar9,lVar5,uVar12,lVar6);
              goto LAB_103513ca4;
            }
LAB_103513cf0:
            uVar7 = 0x112db80f8;
            puVar8 = &UNK_10d9671e0;
            FUN_10351382c(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
            plVar4 = &lStack_e0;
            uVar3 = uVar9;
            uVar10 = uVar12;
            lVar14 = lVar5;
            uVar9 = uVar11;
            uVar12 = uVar13;
            lVar5 = lVar6;
LAB_103513ee4:
            FUN_10351382c(plVar4,&uStack_240,uVar7,puVar8);
            func_0x000100d55018(lVar14,uVar10,uVar3);
          }
LAB_103513f68:
          func_0x000100d55018(lVar5,uVar12,uVar9);
        }
      }
      else if (lVar5 == 1) goto LAB_103513aa4;
    }
    else if (lVar6 == 2) {
      if (lVar5 == 2) goto LAB_103513aa4;
    }
    else if (lVar5 == 3) goto LAB_103513aa4;
  }
  else {
    if ((uVar13 & 0xff) == 2) goto LAB_1035139f0;
    if ((((uint)uVar13 ^ (uint)uVar12) & 1) == 0) {
      FUN_10351382c(&uStack_80,&uStack_240,0x112db94f0,&UNK_10d96af00);
      FUN_10351382c(&uStack_a0,&uStack_240,0x112db94f0,&UNK_10d96af00);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,lVar5,uVar11,lVar6);
      func_0x000101556278(uVar13,uVar11,lVar6);
      if ((uVar3 & 1) != 0) goto LAB_1035139a8;
    }
    else {
      FUN_10351382c(&uStack_80,&uStack_240,0x112db94f0,&UNK_10d96af00);
      puVar2 = &uStack_a0;
LAB_103513a78:
      FUN_10351382c(puVar2,&uStack_240,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar13,uVar11,lVar6);
    }
LAB_103513ca0:
    func_0x000101556278(uVar12,uVar9,lVar5);
  }
LAB_103513ca4:
  uVar1 = 0;
LAB_103513ca8:
  return uVar1 & 1;
}



/* Entry: 103514664; end: 1035146a3;  */

void FUN_103514664(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3b30;
  func_0x000107c61520(&UNK_10dbd3b30,&UNK_11065fdd0);
  puRam0000000112f75bf0 = puVar1;
  return;
}



/* Entry: 1035146a4; end: 1035146b7;  */

void FUN_1035146a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035146b8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035146f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035146b8; end: 103514763;  */

void FUN_1035146b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3958;
  func_0x000107c61520(&UNK_10dbd3958,&UNK_11065fe90);
  puRam0000000112f75c08 = puVar1;
  return;
}



/* Entry: 103514764; end: 103514767;  */

void FUN_103514764(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3998;
  func_0x000107c61520(&UNK_10dbd3998,&UNK_11065fe90);
  puRam0000000112f75c28 = puVar1;
  return;
}



/* Entry: 103514768; end: 1035147a7;  */

void FUN_103514768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3998;
  func_0x000107c61520(&UNK_10dbd3998,&UNK_11065fe90);
  puRam0000000112f75c28 = puVar1;
  return;
}



/* Entry: 1035147a8; end: 1035147bb;  */

void FUN_1035147a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035147bc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035147fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035147bc; end: 103514867;  */

void FUN_1035147bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3a58;
  func_0x000107c61520(&UNK_10dbd3a58,&UNK_11065ff20);
  puRam0000000112f75c30 = puVar1;
  return;
}



/* Entry: 103514868; end: 1035148ab;  */

void FUN_103514868(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1035148ac; end: 1035148af;  */

void FUN_1035148ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3a98;
  func_0x000107c61520(&UNK_10dbd3a98,&UNK_11065ff20);
  puRam0000000112f75c50 = puVar1;
  return;
}



/* Entry: 1035148b0; end: 1035148ef;  */

void FUN_1035148b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3a98;
  func_0x000107c61520(&UNK_10dbd3a98,&UNK_11065ff20);
  puRam0000000112f75c50 = puVar1;
  return;
}



/* Entry: 1035148f0; end: 103514913;  */

void FUN_1035148f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103514914();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103514914; end: 103514953;  */

void FUN_103514914(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3b08;
  func_0x000107c61520(&UNK_10dbd3b08,&UNK_11065fdd0);
  puRam0000000112f75c58 = puVar1;
  return;
}



/* Entry: 103514954; end: 103514967;  */

void FUN_103514954(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103514664();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502dd4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103514968; end: 103514997;  */

void FUN_103514968(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103514998; end: 10351499b;  */

void FUN_103514998(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3b70;
  func_0x000107c61520(&UNK_10dbd3b70,&UNK_11065fdd0);
  puRam0000000112f75c60 = puVar1;
  return;
}



/* Entry: 10351499c; end: 1035149db;  */

void FUN_10351499c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3b70;
  func_0x000107c61520(&UNK_10dbd3b70,&UNK_11065fdd0);
  puRam0000000112f75c60 = puVar1;
  return;
}



/* Entry: 1035149dc; end: 103514ae3;  */

long FUN_1035149dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103514ae4; end: 103515563;  */

undefined8 * FUN_103514ae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  func_0x00010006c00c(uVar5,uVar1);
  param_1[4] = uVar5;
  param_1[5] = uVar1;
  cVar2 = *(char *)(param_2 + 6);
  if (cVar2 == '\x02') {
    uVar5 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[8] = param_2[8];
  }
  else {
    *(char *)(param_1 + 6) = cVar2;
    uVar5 = param_2[7];
    uVar1 = param_2[8];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[7] = uVar5;
    param_1[8] = uVar1;
  }
  uVar4 = param_2[0xb];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar5 = param_2[10];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[10] = uVar5;
    param_1[0xb] = uVar4;
  }
  else {
    uVar5 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    param_1[0xb] = param_2[0xb];
  }
  uVar4 = param_2[0xe];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar5 = param_2[0xd];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar4;
  }
  else {
    uVar5 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar5;
    param_1[0xe] = param_2[0xe];
  }
  uVar4 = param_2[0x11];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar5 = param_2[0x10];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x10] = uVar5;
    param_1[0x11] = uVar4;
  }
  else {
    uVar5 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
    param_1[0x11] = param_2[0x11];
  }
  cVar2 = *(char *)(param_2 + 0x12);
  if (cVar2 == '\x02') {
    uVar5 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x14] = param_2[0x14];
  }
  else {
    *(char *)(param_1 + 0x12) = cVar2;
    uVar5 = param_2[0x13];
    uVar1 = param_2[0x14];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0x13] = uVar5;
    param_1[0x14] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 0x15);
  if (cVar2 == '\x02') {
    uVar5 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar5;
    param_1[0x17] = param_2[0x17];
  }
  else {
    *(char *)(param_1 + 0x15) = cVar2;
    uVar5 = param_2[0x16];
    uVar1 = param_2[0x17];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0x16] = uVar5;
    param_1[0x17] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 0x18);
  if (cVar2 == '\x02') {
    uVar5 = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar5;
    param_1[0x1a] = param_2[0x1a];
    lVar3 = param_2[0x1c];
  }
  else {
    *(char *)(param_1 + 0x18) = cVar2;
    uVar5 = param_2[0x19];
    uVar1 = param_2[0x1a];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0x19] = uVar5;
    param_1[0x1a] = uVar1;
    lVar3 = param_2[0x1c];
  }
  if (lVar3 == 0) {
    uVar5 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar5;
    uVar5 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar5;
  }
  else {
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = lVar3;
    uVar5 = param_2[0x1d];
    uVar1 = param_2[0x1e];
    func_0x000107c61434();
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0x1d] = uVar5;
    param_1[0x1e] = uVar1;
  }
  return param_1;
}



/* Entry: 103515564; end: 103515687;  */

int FUN_103515564(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x3e] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x38);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103515688; end: 1035156c7;  */

void FUN_103515688(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd3adc;
  func_0x000107c61520(&DAT_10dbd3adc,&UNK_11065fdd0);
  puRam0000000112f75c70 = puVar1;
  return;
}



/* Entry: 1035156c8; end: 10351577f;  */

void FUN_1035156c8(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103515780; end: 10351581f;  */

uint FUN_103515780(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035182d4(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103515820; end: 103515a23;  */

/* WARNING: Removing unreachable block (ram,0x000103515a20) */

void FUN_103515820(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015d5420();
          }
          else {
            if (lVar1 != 4) goto LAB_103515a10;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015d5420();
          }
          goto LAB_1035159fc;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          goto LAB_1035159fc;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          goto LAB_1035159fc;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x180);
            func_0x000103502754();
          }
          else {
            if (lVar1 != 6) goto LAB_103515a10;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015d5420();
          }
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
        }
        else if (lVar1 == 8) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
        }
        else {
          if (lVar1 != 9) goto LAB_103515a10;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          FUN_103518800();
        }
LAB_1035159fc:
        (*pcVar4)();
      }
LAB_103515a10:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103515a24; end: 103515bdf;  */

/* WARNING: Removing unreachable block (ram,0x000103515b1c) */

void FUN_103515a24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lStack_60;
  undefined1 uStack_58;
  
  FUN_103515be0();
  if (unaff_x21 == 0) {
    FUN_103515c68();
    FUN_103515cf0();
    FUN_103515d78();
    lVar5 = *unaff_x20;
    lVar4 = unaff_x20[1];
    lVar1 = lVar5;
    func_0x00010355a214(lVar5,(char)lVar4);
    lVar2 = 0;
    func_0x00010355a214(0,1);
    if (lVar1 != lVar2) {
      pcVar6 = *(code **)(param_3 + 0x80);
      lStack_60 = lVar5;
      uStack_58 = (char)lVar4;
      func_0x000103502754();
      (*pcVar6)(&lStack_60,5,&UNK_110664e28,lVar2,param_2,param_3);
    }
    FUN_103515e00();
    FUN_103515e88();
    plVar3 = unaff_x20;
    FUN_103515f10();
    lVar4 = unaff_x20[2];
    if (*(long *)(lVar4 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      FUN_103518800();
      (*pcVar6)(lVar4,9,&UNK_1106602c8,plVar3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103515be0; end: 103515c67;  */

void FUN_103515be0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103515c68; end: 103515cef;  */

void FUN_103515c68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103515cf0; end: 103515d77;  */

void FUN_103515cf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x68);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,3,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103515d78; end: 103515dff;  */

void FUN_103515d78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x80);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,4,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103515e00; end: 103515e87;  */

void FUN_103515e00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x98);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x90);
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,6,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103515e88; end: 103515f0f;  */

void FUN_103515e88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xb0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,7,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103515f10; end: 103515f97;  */

void FUN_103515f10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xb8);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 200);
    uStack_50 = *(undefined8 *)(param_1 + 0xc0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,8,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103515f98; end: 10351601f;  */

uint FUN_103515f98(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_248 [24];
  ulong uStack_230;
  ulong uStack_228;
  long lStack_220;
  ulong uStack_210;
  ulong uStack_208;
  long lStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
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
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar16 = param_1[6];
  uVar14 = param_1[5];
  uVar6 = param_1[7];
  uVar17 = param_2[6];
  uVar15 = param_2[5];
  uVar7 = param_2[7];
  uStack_b0 = uVar15;
  uStack_a8 = uVar17;
  uStack_a0 = uVar7;
  uStack_90 = uVar14;
  uStack_88 = uVar16;
  uStack_80 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar7 >> 0x3c) goto LAB_103519140;
    if ((float)uVar14 == (float)uVar15) {
      FUN_1035186a0(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_1035186a0(&uStack_b0,&uStack_d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar16;
      func_0x000100e25fcc(uVar16,uVar6,uVar17,uVar7);
      func_0x000100d550c0(uVar15,uVar17,uVar7);
      if ((uVar2 & 1) != 0) goto LAB_1035191e8;
    }
    else {
      uVar8 = 0x112db6358;
      puVar9 = &UNK_10d961e20;
      FUN_1035186a0(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      puVar4 = &uStack_b0;
      puVar5 = &uStack_d0;
LAB_103519864:
      FUN_1035186a0(puVar4,puVar5,uVar8,puVar9);
      func_0x000100d550c0(uVar15,uVar17,uVar7);
    }
LAB_10351988c:
    func_0x000100d550c0(uVar14,uVar16,uVar6);
  }
  else {
    if (uVar7 >> 0x3c < 0xf) {
LAB_103519140:
      uVar8 = 0x112db6358;
      puVar9 = &UNK_10d961e20;
      FUN_1035186a0(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      puVar4 = &uStack_b0;
      puVar5 = &uStack_d0;
      uVar2 = uVar6;
      uVar12 = uVar16;
      uVar13 = uVar14;
      uVar6 = uVar7;
      uVar16 = uVar17;
      uVar14 = uVar15;
LAB_103519768:
      FUN_1035186a0(puVar4,puVar5,uVar8,puVar9);
      func_0x000100d550c0(uVar13,uVar12,uVar2);
      goto LAB_10351988c;
    }
    FUN_1035186a0(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
    FUN_1035186a0(&uStack_b0,&uStack_d0,0x112db6358,&UNK_10d961e20);
LAB_1035191e8:
    func_0x000100d550c0(uVar14,uVar16,uVar6);
    uVar16 = param_1[9];
    uVar14 = param_1[8];
    uVar6 = param_1[10];
    uVar17 = param_2[9];
    uVar15 = param_2[8];
    uVar7 = param_2[10];
    uStack_f0 = uVar15;
    uStack_e8 = uVar17;
    uStack_e0 = uVar7;
    uStack_d0 = uVar14;
    uStack_c8 = uVar16;
    uStack_c0 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar7 >> 0x3c) goto LAB_10351927c;
      if ((float)uVar14 != (float)uVar15) {
        uVar8 = 0x112db6358;
        puVar9 = &UNK_10d961e20;
        FUN_1035186a0(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        puVar4 = &uStack_f0;
        puVar5 = &uStack_110;
        goto LAB_103519864;
      }
      FUN_1035186a0(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
      FUN_1035186a0(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar16;
      func_0x000100e25fcc(uVar16,uVar6,uVar17,uVar7);
      func_0x000100d550c0(uVar15,uVar17,uVar7);
      if ((uVar2 & 1) == 0) goto LAB_10351988c;
    }
    else {
      if (uVar7 >> 0x3c < 0xf) {
LAB_10351927c:
        uVar8 = 0x112db6358;
        puVar9 = &UNK_10d961e20;
        FUN_1035186a0(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        puVar4 = &uStack_f0;
        puVar5 = &uStack_110;
        uVar2 = uVar6;
        uVar12 = uVar16;
        uVar13 = uVar14;
        uVar6 = uVar7;
        uVar16 = uVar17;
        uVar14 = uVar15;
        goto LAB_103519768;
      }
      FUN_1035186a0(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
      FUN_1035186a0(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d550c0(uVar14,uVar16,uVar6);
    uVar16 = param_1[0xc];
    uVar14 = param_1[0xb];
    uVar6 = param_1[0xd];
    uVar17 = param_2[0xc];
    uVar15 = param_2[0xb];
    uVar7 = param_2[0xd];
    uStack_130 = uVar15;
    uStack_128 = uVar17;
    uStack_120 = uVar7;
    uStack_110 = uVar14;
    uStack_108 = uVar16;
    uStack_100 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar7 >> 0x3c) goto LAB_103519660;
      if ((int)uVar14 != (int)uVar15) {
        uVar8 = 0x112db80f8;
        puVar9 = &UNK_10d9671e0;
        FUN_1035186a0(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
        puVar4 = &uStack_130;
        puVar5 = &uStack_150;
        goto LAB_103519864;
      }
      FUN_1035186a0(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
      FUN_1035186a0(&uStack_130,&uStack_150,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar16;
      func_0x000100e25fcc(uVar16,uVar6,uVar17,uVar7);
      func_0x000100d550c0(uVar15,uVar17,uVar7);
      if ((uVar2 & 1) == 0) goto LAB_10351988c;
    }
    else {
      if (uVar7 >> 0x3c < 0xf) {
LAB_103519660:
        uVar8 = 0x112db80f8;
        puVar9 = &UNK_10d9671e0;
        FUN_1035186a0(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
        puVar4 = &uStack_130;
        puVar5 = &uStack_150;
        uVar2 = uVar6;
        uVar12 = uVar16;
        uVar13 = uVar14;
        uVar6 = uVar7;
        uVar16 = uVar17;
        uVar14 = uVar15;
        goto LAB_103519768;
      }
      FUN_1035186a0(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
      FUN_1035186a0(&uStack_130,&uStack_150,0x112db80f8,&UNK_10d9671e0);
    }
    func_0x000100d550c0(uVar14,uVar16,uVar6);
    uVar16 = param_1[0xf];
    uVar14 = param_1[0xe];
    uVar6 = param_1[0x10];
    uVar17 = param_2[0xf];
    uVar15 = param_2[0xe];
    uVar7 = param_2[0x10];
    uStack_170 = uVar15;
    uStack_168 = uVar17;
    uStack_160 = uVar7;
    uStack_150 = uVar14;
    uStack_148 = uVar16;
    uStack_140 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar7 >> 0x3c) goto LAB_10351973c;
      if ((int)uVar14 != (int)uVar15) {
        uVar8 = 0x112db80f8;
        puVar9 = &UNK_10d9671e0;
        FUN_1035186a0(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
        puVar4 = &uStack_170;
        puVar5 = &uStack_190;
        goto LAB_103519864;
      }
      FUN_1035186a0(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
      FUN_1035186a0(&uStack_170,&uStack_190,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar16;
      func_0x000100e25fcc(uVar16,uVar6,uVar17,uVar7);
      func_0x000100d550c0(uVar15,uVar17,uVar7);
      if ((uVar2 & 1) == 0) goto LAB_10351988c;
    }
    else {
      if (uVar7 >> 0x3c < 0xf) {
LAB_10351973c:
        uVar8 = 0x112db80f8;
        puVar9 = &UNK_10d9671e0;
        FUN_1035186a0(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
        puVar4 = &uStack_170;
        puVar5 = &uStack_190;
        uVar2 = uVar6;
        uVar12 = uVar16;
        uVar13 = uVar14;
        uVar6 = uVar7;
        uVar16 = uVar17;
        uVar14 = uVar15;
        goto LAB_103519768;
      }
      FUN_1035186a0(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
      FUN_1035186a0(&uStack_170,&uStack_190,0x112db80f8,&UNK_10d9671e0);
    }
    func_0x000100d550c0(uVar14,uVar16,uVar6);
    lVar3 = *param_1;
    lVar10 = *param_2;
    lVar11 = param_2[1];
    func_0x00010355a214(lVar3,(char)param_1[1]);
    func_0x00010355a214(lVar10,(char)lVar11);
    if (lVar3 == lVar10) {
      uVar16 = param_1[0x12];
      uVar14 = param_1[0x11];
      uVar6 = param_1[0x13];
      uVar17 = param_2[0x12];
      uVar15 = param_2[0x11];
      uVar7 = param_2[0x13];
      uStack_1b0 = uVar15;
      uStack_1a8 = uVar17;
      uStack_1a0 = uVar7;
      uStack_190 = uVar14;
      uStack_188 = uVar16;
      uStack_180 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar7 >> 0x3c) goto LAB_1035198c4;
        if ((int)uVar14 != (int)uVar15) {
          uVar8 = 0x112db80f8;
          puVar9 = &UNK_10d9671e0;
          FUN_1035186a0(&uStack_190,&uStack_1d0,0x112db80f8,&UNK_10d9671e0);
          puVar4 = &uStack_1b0;
          puVar5 = &uStack_1d0;
          goto LAB_103519864;
        }
        FUN_1035186a0(&uStack_190,&uStack_1d0,0x112db80f8,&UNK_10d9671e0);
        FUN_1035186a0(&uStack_1b0,&uStack_1d0,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar16;
        func_0x000100e25fcc(uVar16,uVar6,uVar17,uVar7);
        func_0x000100d550c0(uVar15,uVar17,uVar7);
        if ((uVar2 & 1) == 0) goto LAB_10351988c;
      }
      else {
        if (uVar7 >> 0x3c < 0xf) {
LAB_1035198c4:
          uVar8 = 0x112db80f8;
          puVar9 = &UNK_10d9671e0;
          FUN_1035186a0(&uStack_190,&uStack_1d0,0x112db80f8,&UNK_10d9671e0);
          puVar4 = &uStack_1b0;
          puVar5 = &uStack_1d0;
          uVar2 = uVar6;
          uVar12 = uVar16;
          uVar13 = uVar14;
          uVar6 = uVar7;
          uVar16 = uVar17;
          uVar14 = uVar15;
          goto LAB_103519768;
        }
        FUN_1035186a0(&uStack_190,&uStack_1d0,0x112db80f8,&UNK_10d9671e0);
        FUN_1035186a0(&uStack_1b0,&uStack_1d0,0x112db80f8,&UNK_10d9671e0);
      }
      func_0x000100d550c0(uVar14,uVar16,uVar6);
      uVar16 = param_1[0x15];
      uVar14 = param_1[0x14];
      uVar6 = param_1[0x16];
      uVar17 = param_2[0x15];
      uVar15 = param_2[0x14];
      uVar7 = param_2[0x16];
      uStack_1f0 = uVar15;
      uStack_1e8 = uVar17;
      uStack_1e0 = uVar7;
      uStack_1d0 = uVar14;
      uStack_1c8 = uVar16;
      uStack_1c0 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar7 >> 0x3c) goto LAB_103519970;
        if ((int)uVar14 != (int)uVar15) {
          uVar8 = 0x112db80f8;
          puVar9 = &UNK_10d9671e0;
          FUN_1035186a0(&uStack_1d0,&uStack_210,0x112db80f8,&UNK_10d9671e0);
          puVar4 = &uStack_1f0;
          puVar5 = &uStack_210;
          goto LAB_103519864;
        }
        FUN_1035186a0(&uStack_1d0,&uStack_210,0x112db80f8,&UNK_10d9671e0);
        FUN_1035186a0(&uStack_1f0,&uStack_210,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar16;
        func_0x000100e25fcc(uVar16,uVar6,uVar17,uVar7);
        func_0x000100d550c0(uVar15,uVar17,uVar7);
        if ((uVar2 & 1) == 0) goto LAB_10351988c;
      }
      else {
        if (uVar7 >> 0x3c < 0xf) {
LAB_103519970:
          uVar8 = 0x112db80f8;
          puVar9 = &UNK_10d9671e0;
          FUN_1035186a0(&uStack_1d0,&uStack_210,0x112db80f8,&UNK_10d9671e0);
          puVar4 = &uStack_1f0;
          puVar5 = &uStack_210;
          uVar2 = uVar6;
          uVar12 = uVar16;
          uVar13 = uVar14;
          uVar6 = uVar7;
          uVar16 = uVar17;
          uVar14 = uVar15;
          goto LAB_103519768;
        }
        FUN_1035186a0(&uStack_1d0,&uStack_210,0x112db80f8,&UNK_10d9671e0);
        FUN_1035186a0(&uStack_1f0,&uStack_210,0x112db80f8,&UNK_10d9671e0);
      }
      func_0x000100d550c0(uVar14,uVar16,uVar6);
      uVar16 = param_1[0x18];
      uVar6 = param_1[0x17];
      lVar11 = param_1[0x19];
      uVar7 = param_2[0x18];
      uVar14 = param_2[0x17];
      lVar3 = param_2[0x19];
      uStack_230 = uVar14;
      uStack_228 = uVar7;
      lStack_220 = lVar3;
      uStack_210 = uVar6;
      uStack_208 = uVar16;
      lStack_200 = lVar11;
      if ((uVar6 & 0xff) == 2) {
        if ((uVar14 & 0xff) == 2) {
          FUN_1035186a0(&uStack_210,auStack_248,0x112db94f0,&UNK_10d96af00);
          FUN_1035186a0(&uStack_230,auStack_248,0x112db94f0,&UNK_10d96af00);
LAB_103519628:
          func_0x000101556278(uVar6,uVar16,lVar11);
          uVar6 = param_1[2];
          FUN_103518198(uVar6,param_2[2]);
          if ((uVar6 & 1) != 0) {
            lVar11 = param_1[3];
            func_0x000100e25fcc(lVar11,param_1[4],param_2[3],param_2[4]);
            uVar1 = (uint)lVar11;
            goto LAB_103519894;
          }
          goto LAB_103519890;
        }
LAB_103519a48:
        FUN_1035186a0(&uStack_210,auStack_248,0x112db94f0,&UNK_10d96af00);
        FUN_1035186a0(&uStack_230,auStack_248,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar6,uVar16,lVar11);
        uVar6 = uVar14;
        uVar16 = uVar7;
        lVar11 = lVar3;
      }
      else {
        if ((uVar14 & 0xff) == 2) goto LAB_103519a48;
        if ((((uint)uVar14 ^ (uint)uVar6) & 1) == 0) {
          FUN_1035186a0(&uStack_210,auStack_248,0x112db94f0,&UNK_10d96af00);
          FUN_1035186a0(&uStack_230,auStack_248,0x112db94f0,&UNK_10d96af00);
          uVar17 = uVar16;
          func_0x000100e25fcc(uVar16,lVar11,uVar7,lVar3);
          func_0x000101556278(uVar14,uVar7,lVar3);
          if ((uVar17 & 1) != 0) goto LAB_103519628;
        }
        else {
          FUN_1035186a0(&uStack_210,auStack_248,0x112db94f0,&UNK_10d96af00);
          FUN_1035186a0(&uStack_230,auStack_248,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar14,uVar7,lVar3);
        }
      }
      func_0x000101556278(uVar6,uVar16,lVar11);
    }
  }
LAB_103519890:
  uVar1 = 0;
LAB_103519894:
  return uVar1 & 1;
}



/* Entry: 103516020; end: 10351604f;  */

undefined1  [16] FUN_103516020(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103516050; end: 103516083;  */

void FUN_103516050(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103516084; end: 103516097;  */

undefined1  [16] FUN_103516084(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103516094;
  return auVar1;
}



/* Entry: 103516098; end: 1035160ab;  */

void FUN_103516098(void)

{
  FUN_103515820();
  return;
}



/* Entry: 1035160ac; end: 10351610b;  */

void FUN_1035160ac(void)

{
  FUN_103515a24();
  return;
}



/* Entry: 10351610c; end: 10351610f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10351610c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103516110; end: 103516147;  */

uint FUN_103516110(long param_1,long param_2)

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
  func_0x00010351bfcc();
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



/* Entry: 103516148; end: 1035161e7;  */

uint FUN_103516148(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_28 = param_1[0x19];
  uStack_30 = param_1[0x18];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_f8 = unaff_x20[0x19];
  uStack_100 = unaff_x20[0x18];
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  func_0x000103519088(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1035161e8; end: 103516287;  */

/* WARNING: Possible PIC construction at 0x000103516234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103516244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103516238) */
/* WARNING: Removing unreachable block (ram,0x000103516248) */

void FUN_1035161e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75c80 != -1) {
    func_0x000107c61568(0x112f75c80,0x1035157d8);
  }
  uVar5 = uRam00000001138079f8;
  uVar4 = uRam00000001138079f0;
  uVar3 = uRam00000001138079e8;
  uVar2 = uRam00000001138079e0;
  uVar1 = uRam00000001138079d8;
  *param_1 = uRam00000001138079d0;
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



/* Entry: 103516288; end: 1035162c3;  */

void FUN_103516288(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75d18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75d18,&UNK_10dbd41d8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035162c4; end: 10351641f;  */

void FUN_1035162c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_148 [72];
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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_38 = unaff_x20[0x19];
  uStack_40 = unaff_x20[0x18];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000107c6068c(auStack_148,0);
  func_0x000107c5fa50(auStack_148,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103516420; end: 1035164bf;  */

uint FUN_103516420(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_f8 = param_1[0x19];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_28 = param_2[0x19];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  func_0x000103519088(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1035164c0; end: 103516507;  */

void FUN_1035164c0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd4220,0x5d,2);
  uRam0000000113807a08 = uStack_38;
  uRam0000000113807a00 = uStack_40;
  uRam0000000113807a18 = uStack_28;
  uRam0000000113807a10 = uStack_30;
  uRam0000000113807a28 = uStack_18;
  uRam0000000113807a20 = uStack_20;
  return;
}



/* Entry: 103516508; end: 103516683;  */

/* WARNING: Removing unreachable block (ram,0x000103516680) */

void FUN_103516508(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          goto LAB_10351665c;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          goto LAB_10351665c;
        }
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103502754();
          goto LAB_10351665c;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000101568cc4();
        }
        else if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
        }
        else {
          if (lVar1 != 6) goto LAB_103516670;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_103519e7c();
        }
LAB_10351665c:
        (*pcVar4)();
      }
LAB_103516670:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103516684; end: 103516823;  */

/* WARNING: Removing unreachable block (ram,0x000103516768) */

void FUN_103516684(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lStack_60;
  undefined1 uStack_58;
  
  FUN_103516824();
  if (unaff_x21 == 0) {
    FUN_1035168ac();
    lVar4 = *unaff_x20;
    lVar1 = unaff_x20[1];
    lVar2 = lVar4;
    func_0x00010355a214(lVar4,(char)lVar1);
    lVar3 = 0;
    func_0x00010355a214(0,1);
    if (lVar2 != lVar3) {
      pcVar5 = *(code **)(param_3 + 0x80);
      lStack_60 = lVar4;
      uStack_58 = (char)lVar1;
      func_0x000103502754();
      (*pcVar5)(&lStack_60,3,&UNK_110664e28,lVar3,param_2,param_3);
    }
    lVar4 = unaff_x20[2];
    lVar1 = unaff_x20[3];
    lVar2 = lVar4;
    func_0x000103559d2c(lVar4,(char)lVar1);
    lVar3 = 0;
    func_0x000103559d2c(0,1);
    if (lVar2 != lVar3) {
      pcVar5 = *(code **)(param_3 + 0x80);
      lStack_60 = lVar4;
      uStack_58 = (char)lVar1;
      func_0x000101568cc4();
      (*pcVar5)(&lStack_60,4,&UNK_110664c98,lVar3,param_2,param_3);
    }
    FUN_103516934();
    FUN_1035169bc();
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103516824; end: 1035168ab;  */

void FUN_103516824(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x40);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,1,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035168ac; end: 103516933;  */

void FUN_1035168ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x58);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103516934; end: 1035169bb;  */

void FUN_103516934(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x70);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,5,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035169bc; end: 103516a67;  */

void FUN_1035169bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
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
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xe8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_88 = *(undefined8 *)(param_1 + 0xb0);
    uStack_90 = *(undefined8 *)(param_1 + 0xa8);
    uStack_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_80 = *(undefined8 *)(param_1 + 0xb8);
    uStack_68 = *(undefined8 *)(param_1 + 0xd0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    uStack_58 = *(undefined8 *)(param_1 + 0xe0);
    uStack_60 = *(undefined8 *)(param_1 + 0xd8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x80);
    uStack_c0 = *(undefined8 *)(param_1 + 0x78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x90);
    uStack_b0 = *(undefined8 *)(param_1 + 0x88);
    uStack_98 = *(undefined8 *)(param_1 + 0xa0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103519e7c();
    (*pcVar1)(&uStack_c0,6,&UNK_110660360,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103516a68; end: 103516aeb;  */

void FUN_103516a68(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf000000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf000000000000000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0xf000000000000000;
  return;
}



/* Entry: 103516aec; end: 103516b1b;  */

undefined1  [16] FUN_103516aec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103516b1c; end: 103516b4f;  */

void FUN_103516b1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103516b50; end: 103516b63;  */

undefined1  [16] FUN_103516b50(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103516b60;
  return auVar1;
}



/* Entry: 103516b64; end: 103516b77;  */

void FUN_103516b64(void)

{
  FUN_103516508();
  return;
}



/* Entry: 103516b78; end: 103516bdf;  */

void FUN_103516b78(void)

{
  FUN_103516684();
  return;
}



/* Entry: 103516be0; end: 103516be3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103516be0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103516be4; end: 103516c1b;  */

uint FUN_103516be4(long param_1,long param_2)

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
  func_0x00010351bf8c();
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



/* Entry: 103516c1c; end: 103516ccb;  */

uint FUN_103516c1c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_28 = param_1[0x1d];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_118 = unaff_x20[0x1d];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  FUN_103518840(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103516ccc; end: 103516d6b;  */

/* WARNING: Possible PIC construction at 0x000103516d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103516d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103516d1c) */
/* WARNING: Removing unreachable block (ram,0x000103516d2c) */

void FUN_103516ccc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75c98 != -1) {
    func_0x000107c61568(0x112f75c98,FUN_1035164c0);
  }
  uVar5 = uRam0000000113807a28;
  uVar4 = uRam0000000113807a20;
  uVar3 = uRam0000000113807a18;
  uVar2 = uRam0000000113807a10;
  uVar1 = uRam0000000113807a08;
  *param_1 = uRam0000000113807a00;
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



/* Entry: 103516d6c; end: 103516da7;  */

void FUN_103516d6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75d08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75d08,&UNK_10dbd41d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103516da8; end: 103516f13;  */

void FUN_103516da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
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
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_38 = unaff_x20[0x1d];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103516f14; end: 103516fc3;  */

uint FUN_103516f14(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_118 = param_1[0x1d];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_28 = param_2[0x1d];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  FUN_103518840(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103516fc4; end: 103517037;  */

void FUN_103516fc4(void)

{
  func_0x000107c5fb78(0xd000000000000011,0x800000010f154fc0);
  uRam0000000113807a30 = 0xd00000000000003b;
  uRam0000000113807a38 = 0x800000010f154f80;
  return;
}



/* Entry: 103517038; end: 10351707f;  */

void FUN_103517038(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd41e0,0x35,2);
  uRam0000000113807a48 = uStack_38;
  uRam0000000113807a40 = uStack_40;
  uRam0000000113807a58 = uStack_28;
  uRam0000000113807a50 = uStack_30;
  uRam0000000113807a68 = uStack_18;
  uRam0000000113807a60 = uStack_20;
  return;
}



/* Entry: 103517080; end: 103517173;  */

/* WARNING: Removing unreachable block (ram,0x000103517118) */
/* WARNING: Removing unreachable block (ram,0x000103517144) */

void FUN_103517080(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 < 3) {
      if (lVar1 == 1) {
        FUN_103517174();
      }
      else if (lVar1 == 2) {
        FUN_10351744c();
      }
    }
    else if (lVar1 == 3) {
      FUN_103517618();
    }
    else if (lVar1 == 4) {
      FUN_1035177e4();
    }
  }
  return;
}



/* Entry: 103517174; end: 10351744b;  */

/* WARNING: Removing unreachable block (ram,0x000103517378) */

void FUN_103517174(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long unaff_x21;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  char cStack_1a0;
  undefined1 auStack_190 [96];
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
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
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_c8 = 0;
  lStack_d0 = 0;
  uStack_b8 = 0;
  lStack_c0 = 0;
  uVar17 = param_1[3];
  cVar11 = (char)param_1[0xc];
  plVar12 = param_1;
  if (cVar11 != '\x01' && (uVar17 & 0x3000000000000000) == 0) {
    lVar1 = param_1[10];
    lVar6 = param_1[0xb];
    lVar2 = param_1[8];
    lVar7 = param_1[9];
    lVar3 = param_1[6];
    lVar8 = param_1[7];
    lVar4 = param_1[4];
    lVar9 = param_1[5];
    lVar5 = param_1[1];
    lVar10 = param_1[2];
    lVar15 = *param_1;
    lStack_e8 = 0;
    lStack_f0 = 0;
    lStack_d8 = 0;
    lStack_e0 = 0;
    lStack_108 = 0;
    lStack_110 = 0;
    lStack_f8 = 0;
    lStack_100 = 0;
    lStack_128 = 0;
    lStack_130 = 0;
    uStack_118 = 0;
    lStack_120 = 0;
    lStack_200 = lVar15;
    lStack_1f8 = lVar5;
    lStack_1f0 = lVar10;
    uStack_1e8 = uVar17;
    lStack_1e0 = lVar4;
    lStack_1d8 = lVar9;
    lStack_1d0 = lVar3;
    lStack_1c8 = lVar8;
    lStack_1c0 = lVar2;
    lStack_1b8 = lVar7;
    lStack_1b0 = lVar1;
    lStack_1a8 = lVar6;
    cStack_1a0 = cVar11;
    func_0x0001035186e8(&lStack_200,auStack_190);
    plVar12 = &lStack_130;
    func_0x00010351c038(plVar12,0x112f74d08,&UNK_10dbd0da0);
    lStack_d0 = lVar15;
    lStack_c8 = lVar5;
    lStack_c0 = lVar10;
    uStack_b8 = uVar17;
    lStack_b0 = lVar4;
    lStack_a8 = lVar9;
    lStack_a0 = lVar3;
    lStack_98 = lVar8;
    lStack_90 = lVar2;
    lStack_88 = lVar7;
    lStack_80 = lVar1;
    lStack_78 = lVar6;
  }
  pcVar16 = *(code **)(param_4 + 0x198);
  func_0x000103502ad4();
  (*pcVar16)(&lStack_d0,&UNK_1106606f8,plVar12,param_3,param_4);
  lVar15 = lStack_78;
  lVar10 = lStack_80;
  lVar9 = lStack_88;
  lVar8 = lStack_90;
  lVar7 = lStack_98;
  lVar6 = lStack_a0;
  lVar5 = lStack_a8;
  lVar4 = lStack_b0;
  uVar17 = uStack_b8;
  lVar3 = lStack_c0;
  lVar2 = lStack_c8;
  lVar1 = lStack_d0;
  if (unaff_x21 == 0) {
    lStack_128 = lStack_c8;
    lStack_130 = lStack_d0;
    uStack_118 = uStack_b8;
    lStack_120 = lStack_c0;
    lStack_108 = lStack_a8;
    lStack_110 = lStack_b0;
    lStack_f8 = lStack_98;
    lStack_100 = lStack_a0;
    lStack_e8 = lStack_88;
    lStack_f0 = lStack_90;
    lStack_d8 = lStack_78;
    lStack_e0 = lStack_80;
    if (lStack_d0 != 0) {
      if (cVar11 == '\x01') {
        lStack_1d8 = lStack_a8;
        lStack_1e0 = lStack_b0;
        lStack_1c8 = lStack_98;
        lStack_1d0 = lStack_a0;
        lStack_1b8 = lStack_88;
        lStack_1c0 = lStack_90;
        lStack_1a8 = lStack_78;
        lStack_1b0 = lStack_80;
        lStack_1f8 = lStack_c8;
        lStack_200 = lStack_d0;
        uStack_1e8 = uStack_b8;
        lStack_1f0 = lStack_c0;
        func_0x0001034a5668(&lStack_200,auStack_190);
      }
      else {
        pcVar16 = *(code **)(param_4 + 8);
        lStack_1d8 = lStack_a8;
        lStack_1e0 = lStack_b0;
        lStack_1c8 = lStack_98;
        lStack_1d0 = lStack_a0;
        lStack_1b8 = lStack_88;
        lStack_1c0 = lStack_90;
        lStack_1a8 = lStack_78;
        lStack_1b0 = lStack_80;
        lStack_1f8 = lStack_c8;
        lStack_200 = lStack_d0;
        uStack_1e8 = uStack_b8;
        lStack_1f0 = lStack_c0;
        func_0x0001034a5668(&lStack_200,auStack_190);
        (*pcVar16)(param_3,param_4);
      }
      func_0x00010351c038(&lStack_d0,0x112f74d08,&UNK_10dbd0da0);
      lStack_1b8 = param_1[9];
      lStack_1c0 = param_1[8];
      lStack_1a8 = param_1[0xb];
      lStack_1b0 = param_1[10];
      cStack_1a0 = (char)param_1[0xc];
      lStack_1f8 = param_1[1];
      lStack_200 = *param_1;
      uStack_1e8 = param_1[3];
      lStack_1f0 = param_1[2];
      lStack_1d8 = param_1[5];
      lStack_1e0 = param_1[4];
      lStack_1c8 = param_1[7];
      lStack_1d0 = param_1[6];
      *param_1 = lVar1;
      param_1[1] = lVar2;
      param_1[2] = lVar3;
      param_1[3] = uVar17 & 0xcfffffffffffffff;
      param_1[5] = lVar5;
      param_1[4] = lVar4;
      param_1[7] = lVar7;
      param_1[6] = lVar6;
      param_1[9] = lVar9;
      param_1[8] = lVar8;
      param_1[0xb] = lVar15;
      param_1[10] = lVar10;
      *(undefined1 *)(param_1 + 0xc) = 0;
      uVar13 = 0x112f730f8;
      puVar14 = &UNK_10dbce300;
      plVar12 = &lStack_200;
      goto LAB_1035172c8;
    }
  }
  uVar13 = 0x112f74d08;
  puVar14 = &UNK_10dbd0da0;
  plVar12 = &lStack_d0;
LAB_1035172c8:
  func_0x00010351c038(plVar12,uVar13,puVar14);
  return;
}



/* Entry: 10351744c; end: 103517617;  */

/* WARNING: Removing unreachable block (ram,0x00010351758c) */

void FUN_10351744c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  cVar2 = *(char *)(param_1 + 0xc);
  puVar3 = param_1;
  if (cVar2 != '\x01' && (param_1[3] & 0x3000000000000000) == 0x1000000000000000) {
    uVar1 = param_1[1];
    lVar4 = param_1[2];
    uVar6 = *param_1;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uStack_f0 = uVar6;
    uStack_e8 = uVar1;
    lStack_e0 = lVar4;
    uStack_d8 = param_1[3];
    cStack_90 = cVar2;
    func_0x0001035186e8(&uStack_f0,auStack_150);
    puVar3 = (undefined8 *)0x0;
    FUN_10351c00c(0,0,0);
    uStack_80 = uVar6;
    uStack_78 = uVar1;
    lStack_70 = lVar4;
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x0001035027d4();
  (*pcVar5)(&uStack_80,&UNK_110667f00,puVar3,param_3,param_4);
  lVar4 = lStack_70;
  uVar6 = uStack_78;
  uVar1 = uStack_80;
  if (unaff_x21 == 0) {
    if (lStack_70 != 0) {
      if (cVar2 == '\x01') {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_10351c00c(uStack_80,uStack_78,lStack_70);
      uStack_a8 = param_1[9];
      uStack_b0 = param_1[8];
      uStack_98 = param_1[0xb];
      uStack_a0 = param_1[10];
      cStack_90 = *(char *)(param_1 + 0xc);
      uStack_e8 = param_1[1];
      uStack_f0 = *param_1;
      uStack_d8 = param_1[3];
      lStack_e0 = param_1[2];
      uStack_c8 = param_1[5];
      uStack_d0 = param_1[4];
      uStack_b8 = param_1[7];
      uStack_c0 = param_1[6];
      *param_1 = uVar1;
      param_1[1] = uVar6;
      param_1[2] = lVar4;
      param_1[3] = 0x1000000000000000;
      *(undefined1 *)(param_1 + 0xc) = 0;
      func_0x00010351c038(&uStack_f0,0x112f730f8,&UNK_10dbce300);
      return;
    }
    lVar4 = 0;
  }
  FUN_10351c00c(uStack_80,uStack_78,lVar4);
  return;
}



/* Entry: 103517618; end: 1035177e3;  */

/* WARNING: Removing unreachable block (ram,0x000103517758) */

void FUN_103517618(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  cVar2 = *(char *)(param_1 + 0xc);
  puVar3 = param_1;
  if (cVar2 != '\x01' && (param_1[3] & 0x3000000000000000) == 0x2000000000000000) {
    uVar1 = param_1[1];
    lVar4 = param_1[2];
    uVar6 = *param_1;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uStack_f0 = uVar6;
    uStack_e8 = uVar1;
    lStack_e0 = lVar4;
    uStack_d8 = param_1[3];
    cStack_90 = cVar2;
    func_0x0001035186e8(&uStack_f0,auStack_150);
    puVar3 = (undefined8 *)0x0;
    FUN_10351c00c(0,0,0);
    uStack_80 = uVar6;
    uStack_78 = uVar1;
    lStack_70 = lVar4;
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000103502854();
  (*pcVar5)(&uStack_80,&UNK_11066a9c0,puVar3,param_3,param_4);
  lVar4 = lStack_70;
  uVar6 = uStack_78;
  uVar1 = uStack_80;
  if (unaff_x21 == 0) {
    if (lStack_70 != 0) {
      if (cVar2 == '\x01') {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_10351c00c(uStack_80,uStack_78,lStack_70);
      uStack_a8 = param_1[9];
      uStack_b0 = param_1[8];
      uStack_98 = param_1[0xb];
      uStack_a0 = param_1[10];
      cStack_90 = *(char *)(param_1 + 0xc);
      uStack_e8 = param_1[1];
      uStack_f0 = *param_1;
      uStack_d8 = param_1[3];
      lStack_e0 = param_1[2];
      uStack_c8 = param_1[5];
      uStack_d0 = param_1[4];
      uStack_b8 = param_1[7];
      uStack_c0 = param_1[6];
      *param_1 = uVar1;
      param_1[1] = uVar6;
      param_1[2] = lVar4;
      param_1[3] = 0x2000000000000000;
      *(undefined1 *)(param_1 + 0xc) = 0;
      func_0x00010351c038(&uStack_f0,0x112f730f8,&UNK_10dbce300);
      return;
    }
    lVar4 = 0;
  }
  FUN_10351c00c(uStack_80,uStack_78,lVar4);
  return;
}



/* Entry: 1035177e4; end: 1035179af;  */

/* WARNING: Removing unreachable block (ram,0x000103517924) */

void FUN_1035177e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  cVar2 = *(char *)(param_1 + 0xc);
  puVar3 = param_1;
  if (cVar2 != '\x01' && (param_1[3] & 0x3000000000000000) == 0x3000000000000000) {
    uVar1 = param_1[1];
    lVar4 = param_1[2];
    uVar6 = *param_1;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uStack_f0 = uVar6;
    uStack_e8 = uVar1;
    lStack_e0 = lVar4;
    uStack_d8 = param_1[3];
    cStack_90 = cVar2;
    func_0x0001035186e8(&uStack_f0,auStack_150);
    puVar3 = (undefined8 *)0x0;
    FUN_10351c00c(0,0,0);
    uStack_80 = uVar6;
    uStack_78 = uVar1;
    lStack_70 = lVar4;
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000103502994();
  (*pcVar5)(&uStack_80,&UNK_110666c90,puVar3,param_3,param_4);
  lVar4 = lStack_70;
  uVar6 = uStack_78;
  uVar1 = uStack_80;
  if (unaff_x21 == 0) {
    if (lStack_70 != 0) {
      if (cVar2 == '\x01') {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_10351c00c(uStack_80,uStack_78,lStack_70);
      uStack_a8 = param_1[9];
      uStack_b0 = param_1[8];
      uStack_98 = param_1[0xb];
      uStack_a0 = param_1[10];
      cStack_90 = *(char *)(param_1 + 0xc);
      uStack_e8 = param_1[1];
      uStack_f0 = *param_1;
      uStack_d8 = param_1[3];
      lStack_e0 = param_1[2];
      uStack_c8 = param_1[5];
      uStack_d0 = param_1[4];
      uStack_b8 = param_1[7];
      uStack_c0 = param_1[6];
      *param_1 = uVar1;
      param_1[1] = uVar6;
      param_1[2] = lVar4;
      param_1[3] = 0x3000000000000000;
      *(undefined1 *)(param_1 + 0xc) = 0;
      func_0x00010351c038(&uStack_f0,0x112f730f8,&UNK_10dbce300);
      return;
    }
    lVar4 = 0;
  }
  FUN_10351c00c(uStack_80,uStack_78,lVar4);
  return;
}



/* Entry: 1035179b0; end: 103517a57;  */

void FUN_1035179b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if (*(char *)(unaff_x20 + 0x60) != '\x01') {
    uVar1 = (uint)((ulong)*(undefined8 *)(unaff_x20 + 0x18) >> 0x3c) & 3;
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        FUN_103517a58();
      }
      else {
        FUN_103517b00();
      }
    }
    else if (uVar1 == 2) {
      FUN_103517ba0();
    }
    else {
      FUN_103517c40();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      param_2,param_3);
  return;
}



/* Entry: 103517a58; end: 103517aff;  */

void FUN_103517a58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = param_1[3];
  if (*(char *)(param_1 + 0xc) != '\x01' && (uStack_88 & 0x3000000000000000) == 0) {
    uStack_90 = param_1[2];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_58 = param_1[9];
    uStack_60 = param_1[8];
    uStack_48 = param_1[0xb];
    uStack_50 = param_1[10];
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103502ad4();
    (*pcVar1)(&uStack_a0,1,&UNK_1106606f8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103517b00);
  (*pcVar1)();
}



/* Entry: 103517b00; end: 103517b9f;  */

void FUN_103517b00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(char *)(param_1 + 0xc) != '\x01') &&
     ((param_1[3] & 0x3000000000000000) == 0x1000000000000000)) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_50 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035027d4();
    (*pcVar1)(&uStack_60,2,&UNK_110667f00,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103517ba0);
  (*pcVar1)();
}



/* Entry: 103517ba0; end: 103517c3f;  */

void FUN_103517ba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(char *)(param_1 + 0xc) != '\x01') &&
     ((param_1[3] & 0x3000000000000000) == 0x2000000000000000)) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_50 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103502854();
    (*pcVar1)(&uStack_60,3,&UNK_11066a9c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103517c40);
  (*pcVar1)();
}



/* Entry: 103517c40; end: 103517cdb;  */

void FUN_103517c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(char *)(param_1 + 0xc) != '\x01') &&
     (((param_1[3] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0)) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_50 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103502994();
    (*pcVar1)(&uStack_60,4,&UNK_110666c90,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103517cdc);
  (*pcVar1)();
}



/* Entry: 103517cdc; end: 103517d03;  */

void FUN_103517cdc(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xe] = 0xc000000000000000;
  param_1[0xd] = 0;
  return;
}



/* Entry: 103517d04; end: 103517d5f;  */

undefined1  [16] FUN_103517d04(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f75ca8 != -1) {
    func_0x000107c61568(0x112f75ca8,FUN_103516fc4);
  }
  auVar1._8_8_ = uRam0000000113807a38;
  auVar1._0_8_ = uRam0000000113807a30;
  func_0x000107c61434(uRam0000000113807a38);
  return auVar1;
}



/* Entry: 103517d60; end: 103517d67;  */

undefined8 FUN_103517d60(void)

{
  return 1;
}



/* Entry: 103517d68; end: 103517d97;  */

undefined1  [16] FUN_103517d68(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x68);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return auVar1;
}



/* Entry: 103517d98; end: 103517dcb;  */

void FUN_103517d98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 103517dcc; end: 103517ddf;  */

undefined1  [16] FUN_103517dcc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x103517ddc;
  return auVar1;
}



/* Entry: 103517de0; end: 103517df3;  */

void FUN_103517de0(void)

{
  FUN_103517080();
  return;
}


