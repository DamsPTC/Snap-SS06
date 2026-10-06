/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035c4534; end: 1035c46b3;  */

void FUN_1035c4534(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bb10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe258c;
  func_0x000107c61520(&DAT_10dbe258c,&UNK_11066a430);
  puRam0000000112f7bb10 = puVar1;
  return;
}



/* Entry: 1035c46b4; end: 1035c4787;  */

void FUN_1035c46b4(undefined8 *param_1)

{
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x16] = 1;
  return;
}



/* Entry: 1035c4788; end: 1035c47c7;  */

undefined8 FUN_1035c4788(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1035c47c8; end: 1035c4807;  */

int FUN_1035c47c8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x60);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035c4808; end: 1035c4847;  */

undefined8 FUN_1035c4808(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1035c4848; end: 1035c488f;  */

void FUN_1035c4848(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe2d80,0x13,2);
  uRam0000000113809278 = uStack_38;
  uRam0000000113809270 = uStack_40;
  uRam0000000113809288 = uStack_28;
  uRam0000000113809280 = uStack_30;
  uRam0000000113809298 = uStack_18;
  uRam0000000113809290 = uStack_20;
  return;
}



/* Entry: 1035c4890; end: 1035c4943;  */

/* WARNING: Removing unreachable block (ram,0x0001035c4940) */

void FUN_1035c4890(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
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
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1035c5c34();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_11066a740,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035c4944; end: 1035c499f;  */

void FUN_1035c4944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035c49a0();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035c49a0; end: 1035c4a33;  */

void FUN_1035c49a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(ulong *)(param_1 + 0x18);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1035c5c34();
    (*pcVar1)(&uStack_80,1,&UNK_11066a740,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c4a34; end: 1035c4a7f;  */

uint FUN_1035c4a34(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_280 [64];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
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
  undefined8 uVar3;
  
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  uStack_168 = param_1[5];
  uStack_170 = param_1[4];
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_1b8 = param_2[3];
  uStack_1c0 = param_2[2];
  uStack_1a8 = param_2[5];
  uStack_1b0 = param_2[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  uStack_148 = param_1[9];
  uStack_150 = param_1[8];
  uStack_198 = param_2[7];
  uStack_1a0 = param_2[6];
  uStack_188 = param_2[9];
  uStack_190 = param_2[8];
  uStack_140 = uStack_1c0;
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1b0;
  uStack_128 = uStack_1a8;
  uStack_120 = uStack_1a0;
  uStack_118 = uStack_198;
  uStack_110 = uStack_190;
  uStack_108 = uStack_188;
  if (uStack_178 >> 0x3c < 0xf) {
    if (0xe < uStack_1b8 >> 0x3c) goto LAB_1035c591c;
    uStack_238 = param_2[3];
    uStack_240 = param_2[2];
    uStack_228 = param_2[5];
    uStack_230 = param_2[4];
    uStack_218 = param_2[7];
    uStack_220 = param_2[6];
    uStack_208 = param_2[9];
    uStack_210 = param_2[8];
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_48 = param_1[9];
    uStack_50 = param_1[8];
    uStack_200 = uStack_240;
    uStack_1f8 = uStack_238;
    uStack_1f0 = uStack_230;
    uStack_1e8 = uStack_228;
    uStack_1e0 = uStack_220;
    uStack_1d8 = uStack_218;
    uStack_1d0 = uStack_210;
    uStack_1c8 = uStack_208;
    FUN_1035c57f0(&uStack_c0,auStack_280,0x112f730a0,&UNK_10dbe2af0);
    FUN_1035c57f0(&uStack_100,auStack_280,0x112f730a0,&UNK_10dbe2af0);
    puVar2 = &uStack_80;
    FUN_1035c5478(puVar2,&uStack_200);
    FUN_1035c4808(&uStack_240,0x112f730a0,&UNK_10dbe2af0);
    FUN_1035c4808(&uStack_180,0x112f730a0,&UNK_10dbe2af0);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1035c5a28;
  }
  else {
    if (0xe < uStack_1b8 >> 0x3c) {
      uStack_1f8 = param_1[3];
      uStack_200 = param_1[2];
      uStack_1e8 = param_1[5];
      uStack_1f0 = param_1[4];
      uStack_1d8 = param_1[7];
      uStack_1e0 = param_1[6];
      uStack_1c8 = param_1[9];
      uStack_1d0 = param_1[8];
      FUN_1035c57f0(&uStack_c0,&uStack_80,0x112f730a0,&UNK_10dbe2af0);
      FUN_1035c57f0(&uStack_100,&uStack_80,0x112f730a0,&UNK_10dbe2af0);
      FUN_1035c4808(&uStack_200,0x112f730a0,&UNK_10dbe2af0);
LAB_1035c5a28:
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_1035c5a34;
    }
LAB_1035c591c:
    uStack_200 = uStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    FUN_1035c57f0(&uStack_c0,&uStack_80,0x112f730a0,&UNK_10dbe2af0);
    FUN_1035c57f0(&uStack_100,&uStack_80,0x112f730a0,&UNK_10dbe2af0);
    FUN_1035c4808(&uStack_200,0x112f7bb88,&UNK_10dbe2af8);
  }
  uVar1 = 0;
LAB_1035c5a34:
  return uVar1 & 1;
}



/* Entry: 1035c4a80; end: 1035c4aaf;  */

undefined1  [16] FUN_1035c4a80(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035c4ab0; end: 1035c4ae3;  */

void FUN_1035c4ab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035c4ae4; end: 1035c4af7;  */

undefined8 FUN_1035c4ae4(void)

{
  return 0x1035c4af4;
}



/* Entry: 1035c4af8; end: 1035c4b0b;  */

void FUN_1035c4af8(void)

{
  FUN_1035c4890();
  return;
}



/* Entry: 1035c4b0c; end: 1035c4b4b;  */

void FUN_1035c4b0c(void)

{
  FUN_1035c4944();
  return;
}



/* Entry: 1035c4b4c; end: 1035c4b4f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035c4b4c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035c4b50; end: 1035c4b87;  */

uint FUN_1035c4b50(long param_1,long param_2)

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
  func_0x0001035c6710();
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



/* Entry: 1035c4b88; end: 1035c4bdf;  */

uint FUN_1035c4b88(undefined8 *param_1)

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
  FUN_1035c5838(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035c4be0; end: 1035c4c7f;  */

/* WARNING: Possible PIC construction at 0x0001035c4c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c4c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c4c30) */
/* WARNING: Removing unreachable block (ram,0x0001035c4c40) */

void FUN_1035c4be0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7bb90 != -1) {
    func_0x000107c61568(0x112f7bb90,FUN_1035c4848);
  }
  uVar5 = uRam0000000113809298;
  uVar4 = uRam0000000113809290;
  uVar3 = uRam0000000113809288;
  uVar2 = uRam0000000113809280;
  uVar1 = uRam0000000113809278;
  *param_1 = uRam0000000113809270;
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



/* Entry: 1035c4c80; end: 1035c4cbb;  */

void FUN_1035c4c80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7bbe8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7bbe8,&UNK_10dbe2d50);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035c4cbc; end: 1035c4dcf;  */

void FUN_1035c4cbc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035c4dd0; end: 1035c4e6f;  */

uint FUN_1035c4dd0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035c5838(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035c4e70; end: 1035c4f3f;  */

void FUN_1035c4e70(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
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
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x10;
LAB_1035c4ee4:
        (*pcVar4)(lVar2,&UNK_110790b00,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x28;
        goto LAB_1035c4ee4;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035c4f40; end: 1035c4fb3;  */

void FUN_1035c4f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035c4fb4();
  if (unaff_x21 == 0) {
    FUN_1035c503c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035c4fb4; end: 1035c503b;  */

void FUN_1035c4fb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,1,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c503c; end: 1035c50c3;  */

void FUN_1035c503c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035c50c4; end: 1035c5107;  */

void FUN_1035c50c4(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  return;
}



/* Entry: 1035c5108; end: 1035c5137;  */

undefined1  [16] FUN_1035c5108(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035c5138; end: 1035c516b;  */

void FUN_1035c5138(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035c516c; end: 1035c517f;  */

undefined8 FUN_1035c516c(void)

{
  return 0x1035c517c;
}



/* Entry: 1035c5180; end: 1035c5193;  */

void FUN_1035c5180(void)

{
  FUN_1035c4e70();
  return;
}



/* Entry: 1035c5194; end: 1035c51cb;  */

void FUN_1035c5194(void)

{
  FUN_1035c4f40();
  return;
}



/* Entry: 1035c51cc; end: 1035c51cf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035c51cc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035c51d0; end: 1035c5207;  */

uint FUN_1035c51d0(long param_1,long param_2)

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
  FUN_1035c66d0();
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



/* Entry: 1035c5208; end: 1035c524f;  */

uint FUN_1035c5208(undefined8 *param_1)

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
  FUN_1035c5478(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035c5250; end: 1035c52ef;  */

/* WARNING: Possible PIC construction at 0x0001035c529c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c52ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c52a0) */
/* WARNING: Removing unreachable block (ram,0x0001035c52b0) */

void FUN_1035c5250(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7bba0 != -1) {
    func_0x000107c61568(0x112f7bba0,0x1035c4e28);
  }
  uVar5 = uRam00000001138092c8;
  uVar4 = uRam00000001138092c0;
  uVar3 = uRam00000001138092b8;
  uVar2 = uRam00000001138092b0;
  uVar1 = uRam00000001138092a8;
  *param_1 = uRam00000001138092a0;
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



/* Entry: 1035c52f0; end: 1035c532b;  */

void FUN_1035c52f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7bbd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7bbd8,&UNK_10dbe2d48);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035c532c; end: 1035c542f;  */

void FUN_1035c532c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035c5430; end: 1035c5477;  */

uint FUN_1035c5430(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035c5478(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035c5478; end: 1035c57ef;  */

uint FUN_1035c5478(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar8;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  uStack_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_1035c55cc;
    if ((int)uVar9 == (int)uVar10) {
      FUN_1035c57f0(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035c57f0(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_1035c5518;
    }
    else {
      FUN_1035c57f0(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
LAB_1035c579c:
      FUN_1035c57f0(puVar3,puVar4,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      FUN_1035c57f0(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035c57f0(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
LAB_1035c5518:
      func_0x0001015dc5d0(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_e0 = uVar10;
      uStack_d8 = uVar12;
      uStack_d0 = uVar8;
      uStack_c0 = uVar9;
      uStack_b8 = uVar11;
      uStack_b0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1035c5678;
        if ((int)uVar9 != (int)uVar10) {
          FUN_1035c57f0(&uStack_c0,auStack_f8,0x112db80f8,&UNK_10d9671e0);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          goto LAB_1035c579c;
        }
        FUN_1035c57f0(&uStack_c0,auStack_f8,0x112db80f8,&UNK_10d9671e0);
        FUN_1035c57f0(&uStack_e0,auStack_f8,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x0001015dc5d0(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1035c57c4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1035c5678:
          FUN_1035c57f0(&uStack_c0,auStack_f8,0x112db80f8,&UNK_10d9671e0);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1035c56a4;
        }
        FUN_1035c57f0(&uStack_c0,auStack_f8,0x112db80f8,&UNK_10d9671e0);
        FUN_1035c57f0(&uStack_e0,auStack_f8,0x112db80f8,&UNK_10d9671e0);
      }
      func_0x0001015dc5d0(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_1035c57cc;
    }
LAB_1035c55cc:
    FUN_1035c57f0(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
    puVar3 = &uStack_a0;
    puVar4 = &uStack_c0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_1035c56a4:
    FUN_1035c57f0(puVar3,puVar4,0x112db80f8,&UNK_10d9671e0);
    func_0x0001015dc5d0(uVar7,uVar6,uVar2);
  }
LAB_1035c57c4:
  func_0x0001015dc5d0(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_1035c57cc:
  return uVar1 & 1;
}



/* Entry: 1035c57f0; end: 1035c5837;  */

undefined8 FUN_1035c57f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035c5838; end: 1035c5a4f;  */

uint FUN_1035c5838(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_280 [64];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
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
  undefined8 uVar3;
  
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  uStack_168 = param_1[5];
  uStack_170 = param_1[4];
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_1b8 = param_2[3];
  uStack_1c0 = param_2[2];
  uStack_1a8 = param_2[5];
  uStack_1b0 = param_2[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  uStack_148 = param_1[9];
  uStack_150 = param_1[8];
  uStack_198 = param_2[7];
  uStack_1a0 = param_2[6];
  uStack_188 = param_2[9];
  uStack_190 = param_2[8];
  uStack_140 = uStack_1c0;
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1b0;
  uStack_128 = uStack_1a8;
  uStack_120 = uStack_1a0;
  uStack_118 = uStack_198;
  uStack_110 = uStack_190;
  uStack_108 = uStack_188;
  if (uStack_178 >> 0x3c < 0xf) {
    if (0xe < uStack_1b8 >> 0x3c) goto LAB_1035c591c;
    uStack_238 = param_2[3];
    uStack_240 = param_2[2];
    uStack_228 = param_2[5];
    uStack_230 = param_2[4];
    uStack_218 = param_2[7];
    uStack_220 = param_2[6];
    uStack_208 = param_2[9];
    uStack_210 = param_2[8];
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_48 = param_1[9];
    uStack_50 = param_1[8];
    uStack_200 = uStack_240;
    uStack_1f8 = uStack_238;
    uStack_1f0 = uStack_230;
    uStack_1e8 = uStack_228;
    uStack_1e0 = uStack_220;
    uStack_1d8 = uStack_218;
    uStack_1d0 = uStack_210;
    uStack_1c8 = uStack_208;
    FUN_1035c57f0(&uStack_c0,auStack_280,0x112f730a0,&UNK_10dbe2af0);
    FUN_1035c57f0(&uStack_100,auStack_280,0x112f730a0,&UNK_10dbe2af0);
    puVar2 = &uStack_80;
    FUN_1035c5478(puVar2,&uStack_200);
    FUN_1035c4808(&uStack_240,0x112f730a0,&UNK_10dbe2af0);
    FUN_1035c4808(&uStack_180,0x112f730a0,&UNK_10dbe2af0);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1035c5a28;
  }
  else {
    if (0xe < uStack_1b8 >> 0x3c) {
      uStack_1f8 = param_1[3];
      uStack_200 = param_1[2];
      uStack_1e8 = param_1[5];
      uStack_1f0 = param_1[4];
      uStack_1d8 = param_1[7];
      uStack_1e0 = param_1[6];
      uStack_1c8 = param_1[9];
      uStack_1d0 = param_1[8];
      FUN_1035c57f0(&uStack_c0,&uStack_80,0x112f730a0,&UNK_10dbe2af0);
      FUN_1035c57f0(&uStack_100,&uStack_80,0x112f730a0,&UNK_10dbe2af0);
      FUN_1035c4808(&uStack_200,0x112f730a0,&UNK_10dbe2af0);
LAB_1035c5a28:
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_1035c5a34;
    }
LAB_1035c591c:
    uStack_200 = uStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    FUN_1035c57f0(&uStack_c0,&uStack_80,0x112f730a0,&UNK_10dbe2af0);
    FUN_1035c57f0(&uStack_100,&uStack_80,0x112f730a0,&UNK_10dbe2af0);
    FUN_1035c4808(&uStack_200,0x112f7bb88,&UNK_10dbe2af8);
  }
  uVar1 = 0;
LAB_1035c5a34:
  return uVar1 & 1;
}



/* Entry: 1035c5a50; end: 1035c5acf;  */

void FUN_1035c5a50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bb98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2b78;
  func_0x000107c61520(&UNK_10dbe2b78,&UNK_11066a6c0);
  puRam0000000112f7bb98 = puVar1;
  return;
}



/* Entry: 1035c5ad0; end: 1035c5af3;  */

void FUN_1035c5ad0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c5af4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035c5af4; end: 1035c5b33;  */

void FUN_1035c5af4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bbb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2b50;
  func_0x000107c61520(&UNK_10dbe2b50,&UNK_11066a6c0);
  puRam0000000112f7bbb0 = puVar1;
  return;
}



/* Entry: 1035c5b34; end: 1035c5b4b;  */

void FUN_1035c5b34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c5a50();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103509fb0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c5b4c; end: 1035c5b8b;  */

void FUN_1035c5b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bbb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2bb8;
  func_0x000107c61520(&UNK_10dbe2bb8,&UNK_11066a6c0);
  puRam0000000112f7bbb8 = puVar1;
  return;
}



/* Entry: 1035c5b8c; end: 1035c5baf;  */

void FUN_1035c5b8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c5bb0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035c5bb0; end: 1035c5bef;  */

void FUN_1035c5bb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bbc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2c28;
  func_0x000107c61520(&UNK_10dbe2c28,&UNK_11066a740);
  puRam0000000112f7bbc0 = puVar1;
  return;
}



/* Entry: 1035c5bf0; end: 1035c5c03;  */

void FUN_1035c5bf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035c5a90)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035c5c34();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c5c04; end: 1035c5c33;  */

void FUN_1035c5c04(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c5c34; end: 1035c5c73;  */

void FUN_1035c5c34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bbc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe2be0;
  func_0x000107c61520(&DAT_10dbe2be0,&UNK_11066a740);
  puRam0000000112f7bbc8 = puVar1;
  return;
}



/* Entry: 1035c5c74; end: 1035c5c77;  */

void FUN_1035c5c74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bbd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2c90;
  func_0x000107c61520(&UNK_10dbe2c90,&UNK_11066a740);
  puRam0000000112f7bbd0 = puVar1;
  return;
}



/* Entry: 1035c5c78; end: 1035c5cb7;  */

void FUN_1035c5c78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bbd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2c90;
  func_0x000107c61520(&UNK_10dbe2c90,&UNK_11066a740);
  puRam0000000112f7bbd0 = puVar1;
  return;
}



/* Entry: 1035c5cb8; end: 1035c5d2f;  */

/* WARNING: Possible PIC construction at 0x0001035c5cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c5d00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c5cd4) */
/* WARNING: Removing unreachable block (ram,0x0001035c5ce4) */
/* WARNING: Removing unreachable block (ram,0x0001035c5d04) */
/* WARNING: Removing unreachable block (ram,0x0001035c5d20) */
/* WARNING: Removing unreachable block (ram,0x0001035c5d14) */
/* WARNING: Removing unreachable block (ram,0x0001035c5cfc) */

void FUN_1035c5cb8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1035c5d30; end: 1035c61b7;  */

undefined8 * FUN_1035c5d30(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar1 = param_2[3];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    uVar1 = param_2[6];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar2 = param_2[5];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[5] = uVar2;
      param_1[6] = uVar1;
    }
    else {
      uVar2 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[6] = param_2[6];
    }
    uVar1 = param_2[9];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      uVar2 = param_2[8];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[8] = uVar2;
      param_1[9] = uVar1;
    }
    else {
      uVar2 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar2;
      param_1[9] = param_2[9];
    }
  }
  else {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 1035c61b8; end: 1035c627f;  */

int FUN_1035c61b8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035c6280; end: 1035c62df;  */

/* WARNING: Possible PIC construction at 0x0001035c6298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c629c) */
/* WARNING: Removing unreachable block (ram,0x0001035c62ac) */
/* WARNING: Removing unreachable block (ram,0x0001035c62b4) */
/* WARNING: Removing unreachable block (ram,0x0001035c62d0) */
/* WARNING: Removing unreachable block (ram,0x0001035c62c4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035c6280(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035c62e0; end: 1035c660b;  */

undefined8 * FUN_1035c62e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_2[3];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
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



/* Entry: 1035c660c; end: 1035c66cf;  */

int FUN_1035c660c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035c66d0; end: 1035c674f;  */

void FUN_1035c66d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bbe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe2bfc;
  func_0x000107c61520(&DAT_10dbe2bfc,&UNK_11066a740);
  puRam0000000112f7bbe0 = puVar1;
  return;
}



/* Entry: 1035c6750; end: 1035c6767;  */

long FUN_1035c6750(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035c6768; end: 1035c6797;  */

void FUN_1035c6768(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035cabc0();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035c6798; end: 1035c679f;  */

undefined8 FUN_1035c6798(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035c67a0; end: 1035c6813;  */

void FUN_1035c67a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7bc80;
  func_0x0001000285a8(0x112f7bc80,&UNK_10dbe2db0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035c6814; end: 1035c681f;  */

void FUN_1035c6814(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035c6820; end: 1035c68cb;  */

void FUN_1035c6820(void)

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



/* Entry: 1035c68cc; end: 1035c68df;  */

bool FUN_1035c68cc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035c68e0; end: 1035c6a13;  */

long FUN_1035c68e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = param_3 + 0x10;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar1 = *(long *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar5 = lVar1;
  if (lVar4 == 0) {
    FUN_1035ced54();
    lVar5 = lVar3;
  }
  FUN_1035cabec(lVar1,uVar2,lVar4);
  return lVar5;
}



/* Entry: 1035c6a14; end: 1035c6ab3;  */

bool FUN_1035c6a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  if (lVar3 == 0) {
    FUN_1035cabec(uVar1,uVar2,0);
  }
  else {
    FUN_1035cabec(uVar1,uVar2,lVar3);
    func_0x0001035cac18(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x0001035cac18(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 1035c6ab4; end: 1035c6c03;  */

void FUN_1035c6ab4(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cabcc(0);
    func_0x000107c613fc();
    FUN_1035c7534(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x28,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  uVar1 = *(undefined8 *)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  *(ulong *)(lVar5 + 0x28) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x30) = param_2;
  *(undefined8 *)(lVar5 + 0x38) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035c6c04; end: 1035c6cab;  */

void FUN_1035c6c04(uint param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cabcc(0);
    func_0x000107c613fc();
    FUN_1035c7534(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x58,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar1 = *(undefined8 *)(lVar5 + 0x60);
  uVar4 = *(undefined8 *)(lVar5 + 0x68);
  *(ulong *)(lVar5 + 0x58) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x60) = param_2;
  *(undefined8 *)(lVar5 + 0x68) = param_3;
  func_0x000100d56250(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035c6cac; end: 1035c6f2f;  */

void FUN_1035c6cac(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cabcc(0);
    func_0x000107c613fc();
    FUN_1035c7534(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x70,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  uVar1 = *(undefined8 *)(lVar5 + 0x78);
  uVar4 = *(undefined8 *)(lVar5 + 0x80);
  *(ulong *)(lVar5 + 0x70) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x78) = param_2;
  *(undefined8 *)(lVar5 + 0x80) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035c6f30; end: 1035c705b;  */

bool FUN_1035c6f30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0xe8,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0xe8);
  uVar2 = *(undefined8 *)(param_3 + 0xf0);
  lVar3 = *(long *)(param_3 + 0xf8);
  if (lVar3 == 0) {
    FUN_1035cabec(uVar1,uVar2,0);
  }
  else {
    FUN_1035cabec(uVar1,uVar2,lVar3);
    func_0x0001035cac18(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x0001035cac18(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 1035c705c; end: 1035c7103;  */

void FUN_1035c705c(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cabcc(0);
    func_0x000107c613fc();
    FUN_1035c7534(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x130,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x130);
  uVar1 = *(undefined8 *)(lVar5 + 0x138);
  uVar4 = *(undefined8 *)(lVar5 + 0x140);
  *(ulong *)(lVar5 + 0x130) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x138) = param_2;
  *(undefined8 *)(lVar5 + 0x140) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035c7104; end: 1035c72ab;  */

void FUN_1035c7104(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cabcc(0);
    func_0x000107c613fc();
    FUN_1035c7534();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_2c0,param_1,0x140);
  func_0x000101618330(auStack_2c0);
  func_0x000107c61428(lVar2 + 0x148,auStack_2d8,1,0);
  func_0x000107c610b4(auStack_180,lVar2 + 0x148,0x140);
  func_0x000107c610b4(lVar2 + 0x148,auStack_2c0,0x140);
  FUN_1035cad0c(auStack_180,0x112dba328,&UNK_10d96ce10);
  return;
}



/* Entry: 1035c72ac; end: 1035c7307;  */

undefined8 FUN_1035c72ac(void)

{
  if (lRam0000000112f7bc98 != -1) {
    func_0x000107c61568(0x112f7bc98,FUN_1035c7438);
  }
  func_0x000107c6157c(uRam0000000112f7bca0);
  return 0;
}



/* Entry: 1035c7308; end: 1035c734f;  */

void FUN_1035c7308(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe3220,0x5e,2);
  uRam00000001138092d8 = uStack_38;
  uRam00000001138092d0 = uStack_40;
  uRam00000001138092e8 = uStack_28;
  uRam00000001138092e0 = uStack_30;
  uRam00000001138092f8 = uStack_18;
  uRam00000001138092f0 = uStack_20;
  return;
}



/* Entry: 1035c7350; end: 1035c73ef;  */

/* WARNING: Possible PIC construction at 0x0001035c739c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c73ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c73a0) */
/* WARNING: Removing unreachable block (ram,0x0001035c73b0) */

void FUN_1035c7350(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7bca8 != -1) {
    func_0x000107c61568(0x112f7bca8,FUN_1035c7308);
  }
  uVar5 = uRam00000001138092f8;
  uVar4 = uRam00000001138092f0;
  uVar3 = uRam00000001138092e8;
  uVar2 = uRam00000001138092e0;
  uVar1 = uRam00000001138092d8;
  *param_1 = uRam00000001138092d0;
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



/* Entry: 1035c73f0; end: 1035c7437;  */

void FUN_1035c73f0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe30e0,0x137,2);
  uRam0000000113809308 = uStack_38;
  uRam0000000113809300 = uStack_40;
  uRam0000000113809318 = uStack_28;
  uRam0000000113809310 = uStack_30;
  uRam0000000113809328 = uStack_18;
  uRam0000000113809320 = uStack_20;
  return;
}



/* Entry: 1035c7438; end: 1035c7473;  */

void FUN_1035c7438(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1035cabcc();
  func_0x000107c613fc();
  FUN_1035c7474();
  uRam0000000112f7bca0 = uVar1;
  return;
}



/* Entry: 1035c7474; end: 1035c7533;  */

void FUN_1035c7474(void)

{
  long unaff_x20;
  undefined1 auStack_280 [320];
  undefined1 auStack_140 [288];
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 2;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 2;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xb8) = 2;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 2;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined1 *)(unaff_x20 + 0x108) = 1;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 2;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  func_0x0001016182b8(auStack_280);
  func_0x000107c610b4(unaff_x20 + 0x148,auStack_280,0x140);
  FUN_1035cacb4(auStack_140);
  func_0x000107c610b4(unaff_x20 + 0x288,auStack_140,0x120);
  return;
}



/* Entry: 1035c7534; end: 1035c7c67;  */

void FUN_1035c7534(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [24];
  undefined1 auStack_a48 [320];
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  undefined1 auStack_8d8 [24];
  undefined1 auStack_8c0 [24];
  undefined1 auStack_8a8 [24];
  undefined1 auStack_890 [24];
  undefined1 auStack_878 [24];
  undefined1 auStack_860 [24];
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [24];
  undefined1 auStack_818 [24];
  undefined1 auStack_800 [24];
  undefined1 auStack_7e8 [24];
  undefined1 auStack_7d0 [24];
  undefined1 auStack_7b8 [24];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [24];
  undefined1 auStack_770 [24];
  undefined1 auStack_758 [24];
  undefined1 auStack_740 [24];
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [320];
  undefined1 auStack_528 [288];
  undefined1 auStack_408 [320];
  undefined1 auStack_2c8 [320];
  undefined1 auStack_188 [296];
  
  puVar17 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar17 = 0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar16 = 2;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar7 = 2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 2;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  puVar10 = (undefined8 *)(unaff_x20 + 0xa0);
  *puVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 2;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 0xd0);
  *puVar11 = 2;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *puVar12 = 0;
  *(undefined1 *)(unaff_x20 + 0x108) = 1;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 2;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  func_0x0001016182b8(auStack_668);
  func_0x000107c610b4(unaff_x20 + 0x148,auStack_668,0x140);
  FUN_1035cacb4(auStack_528);
  func_0x000107c610b4(unaff_x20 + 0x288,auStack_528,0x120);
  func_0x000107c61428(param_1 + 0x10,auStack_680,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar17,auStack_698,1,0);
  uVar15 = *puVar17;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *puVar17 = uVar13;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar14;
  FUN_1035cabec(uVar13,uVar2,uVar14);
  func_0x0001035cac18(uVar15,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0x28,auStack_6b0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar16,auStack_6c8,1,0);
  uVar15 = *puVar16;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar16 = uVar13;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar14;
  func_0x000101541464(uVar13,uVar2,uVar14);
  func_0x000101556278(uVar15,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0x40,auStack_6e0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(puVar7,auStack_6f8,1,0);
  uVar15 = *puVar7;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar7 = uVar13;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar14;
  func_0x000101541464(uVar13,uVar2,uVar14);
  func_0x000101556278(uVar15,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0x58,auStack_710,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar14 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar8,auStack_728,1,0);
  uVar15 = *puVar8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar8 = uVar13;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar14;
  func_0x000100d56234(uVar13,uVar2,uVar14);
  func_0x000100d56250(uVar15,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0x70,auStack_740,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar14 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_758,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar14;
  func_0x000101541464(uVar13,uVar2,uVar14);
  func_0x000101556278(uVar1,uVar3,uVar15);
  func_0x000107c61428(param_1 + 0x88,auStack_770,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar14 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(puVar9,auStack_788,1,0);
  uVar15 = *puVar9;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x98);
  *puVar9 = uVar13;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar14;
  func_0x000100d56234(uVar13,uVar2,uVar14);
  func_0x000100d56250(uVar15,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0xa0,auStack_7a0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar14 = *(undefined8 *)(param_1 + 0xb0);
  func_0x000107c61428(puVar10,auStack_7b8,1,0);
  uVar15 = *puVar10;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
  *puVar10 = uVar13;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar14;
  func_0x000100d56234(uVar13,uVar2,uVar14);
  func_0x000100d56250(uVar15,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0xb8,auStack_7d0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uVar14 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(unaff_x20 + 0xb8,auStack_7e8,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar15 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x20 + 200) = uVar14;
  func_0x000101541464(uVar13,uVar2,uVar14);
  func_0x000101556278(uVar1,uVar3,uVar15);
  func_0x000107c61428(param_1 + 0xd0,auStack_800,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar14 = *(undefined8 *)(param_1 + 0xe0);
  func_0x000107c61428(puVar11,auStack_818,1,0);
  uVar15 = *puVar11;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  *puVar11 = uVar13;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar14;
  func_0x000101541464(uVar13,uVar2,uVar14);
  func_0x000101556278(uVar15,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0xe8,auStack_830,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0xe8);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uVar14 = *(undefined8 *)(param_1 + 0xf8);
  func_0x000107c61428(puVar12,auStack_848,1,0);
  uVar15 = *puVar12;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
  *puVar12 = uVar13;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar14;
  FUN_1035cabec(uVar13,uVar2,uVar14);
  func_0x0001035cac18(uVar15,uVar1,uVar3);
  func_0x000107c61428(param_1 + 0x100,auStack_860,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x100);
  uVar6 = *(undefined1 *)(param_1 + 0x108);
  func_0x000107c61428(unaff_x20 + 0x100,auStack_878,1,0);
  *(undefined8 *)(unaff_x20 + 0x100) = uVar13;
  *(undefined1 *)(unaff_x20 + 0x108) = uVar6;
  func_0x000107c61428(param_1 + 0x110,auStack_890,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x110);
  uVar14 = *(undefined8 *)(param_1 + 0x118);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  uVar15 = *(undefined8 *)(param_1 + 0x128);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_8a8,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar15;
  func_0x000101597350(uVar13,uVar14,uVar1,uVar15);
  func_0x000101597ae4(uVar2,uVar4,uVar3,uVar5);
  func_0x000107c61428(param_1 + 0x130,auStack_8c0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x130);
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  uVar14 = *(undefined8 *)(param_1 + 0x140);
  func_0x000107c61428(unaff_x20 + 0x130,auStack_8d8,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x130) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x140) = uVar14;
  func_0x000101541464(uVar13,uVar2,uVar14);
  func_0x000101556278(uVar1,uVar3,uVar15);
  func_0x000107c61428(param_1 + 0x148,auStack_8f0,0,0);
  func_0x000107c610b4(auStack_408,param_1 + 0x148,0x140);
  func_0x000107c61428(unaff_x20 + 0x148,auStack_908,1,0);
  func_0x000107c610b4(auStack_2c8,unaff_x20 + 0x148,0x140);
  func_0x000107c610b4(unaff_x20 + 0x148,auStack_408,0x140);
  FUN_1035cac6c(auStack_408,auStack_a48,0x112dba328,&UNK_10d96ce10);
  FUN_1035cad0c(auStack_2c8,0x112dba328,&UNK_10d96ce10);
  func_0x000107c61428(param_1 + 0x288,auStack_a60,0,0);
  func_0x000107c610b4(auStack_188,param_1 + 0x288,0x120);
  FUN_1035cac6c(auStack_188,auStack_a48,0x112f7bc88,&UNK_10dbe2db8);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x288,auStack_a78,1,0);
  func_0x000107c610b4(auStack_a48,unaff_x20 + 0x288,0x120);
  func_0x000107c610b4(unaff_x20 + 0x288,auStack_188,0x120);
  FUN_1035cad0c(auStack_a48,0x112f7bc88,&UNK_10dbe2db8);
  return;
}



/* Entry: 1035c7c68; end: 1035c7d57;  */

void FUN_1035c7c68(void)

{
  long unaff_x20;
  
  func_0x0001035cac18(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100d56250(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  func_0x000100d56250(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98));
  func_0x000100d56250(*(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  func_0x0001035cac18(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140));
  FUN_1035cad0c(unaff_x20 + 0x148,0x112dba328,&UNK_10d96ce10);
  FUN_1035cad0c(unaff_x20 + 0x288,0x112f7bc88,&UNK_10dbe2db8);
  return;
}



/* Entry: 1035c7d58; end: 1035c7de7;  */

void FUN_1035c7d58(void)

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
    FUN_1035cabcc(0);
    func_0x000107c613fc();
    FUN_1035c7534(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1035c7de8();
  return;
}



/* Entry: 1035c7de8; end: 1035c8017;  */

/* WARNING: Removing unreachable block (ram,0x0001035c7ea8) */
/* WARNING: Removing unreachable block (ram,0x0001035c7f34) */
/* WARNING: Removing unreachable block (ram,0x0001035c7ee0) */
/* WARNING: Removing unreachable block (ram,0x0001035c7fdc) */
/* WARNING: Removing unreachable block (ram,0x0001035c8014) */
/* WARNING: Removing unreachable block (ram,0x0001035c7ff8) */
/* WARNING: Removing unreachable block (ram,0x0001035c7efc) */
/* WARNING: Removing unreachable block (ram,0x0001035c7ec4) */
/* WARNING: Removing unreachable block (ram,0x0001035c7f18) */
/* WARNING: Removing unreachable block (ram,0x0001035c7f6c) */
/* WARNING: Removing unreachable block (ram,0x0001035c7fa4) */
/* WARNING: Removing unreachable block (ram,0x0001035c7f50) */
/* WARNING: Removing unreachable block (ram,0x0001035c7f88) */
/* WARNING: Removing unreachable block (ram,0x0001035c7fc0) */

void FUN_1035c7de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1035c8018(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_1035c80ac(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_1035c8140(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_1035c81d4(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1035c8268(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_1035c82fc(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_1035c8390(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_1035c8424(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1035c84b8(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_1035c854c(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_1035c85e0(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_1035c8674(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_1035c8708(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_1035c879c(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_1035c8830(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035c8018; end: 1035c80ab;  */

void FUN_1035c8018(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103510fbc();
  (*pcVar2)(param_2 + 0x10,&UNK_11066abb0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c80ac; end: 1035c813f;  */

void FUN_1035c80ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x28,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c8140; end: 1035c81d3;  */

void FUN_1035c8140(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x40,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c81d4; end: 1035c8267;  */

void FUN_1035c81d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x58,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c8268; end: 1035c82fb;  */

void FUN_1035c8268(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x70,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c82fc; end: 1035c838f;  */

void FUN_1035c82fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x88,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c8390; end: 1035c8423;  */

void FUN_1035c8390(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xa0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0xa0,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c8424; end: 1035c84b7;  */

void FUN_1035c8424(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0xb8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c84b8; end: 1035c854b;  */

void FUN_1035c84b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0xd0,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c854c; end: 1035c85df;  */

void FUN_1035c854c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035c4674();
  (*pcVar2)(param_2 + 0xe8,&UNK_110675968,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c85e0; end: 1035c8673;  */

void FUN_1035c85e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x100;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035cb23c();
  (*pcVar2)(param_2 + 0x100,&UNK_11066a948,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c8674; end: 1035c8707;  */

void FUN_1035c8674(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x110,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c8708; end: 1035c879b;  */

void FUN_1035c8708(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x130;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x130,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c879c; end: 1035c882f;  */

void FUN_1035c879c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x148;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101618238();
  (*pcVar2)(param_2 + 0x148,&UNK_110676400,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


