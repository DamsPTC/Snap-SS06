/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10158e7f8; end: 10158e897;  */

/* WARNING: Possible PIC construction at 0x00010158e844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158e854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158e848) */
/* WARNING: Removing unreachable block (ram,0x00010158e858) */

void FUN_10158e7f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db66a8 != -1) {
    func_0x000107c61568(0x112db66a8,FUN_10158e350);
  }
  uVar5 = uRam0000000113800480;
  uVar4 = uRam0000000113800478;
  uVar3 = uRam0000000113800470;
  uVar2 = uRam0000000113800468;
  uVar1 = uRam0000000113800460;
  *param_1 = uRam0000000113800458;
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



/* Entry: 10158e898; end: 10158e8d3;  */

void FUN_10158e898(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6cc8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6cc8,&UNK_10d964188);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158e8d4; end: 10158ea0f;  */

void FUN_10158e8d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10158ea10; end: 10158ea8f;  */

uint FUN_10158ea10(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_1015929e8(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 10158ea90; end: 10158eabb;  */

void FUN_10158ea90(void)

{
  func_0x000107c5fb78(0x6e6f69747061432e,0xeb00000000617443);
  uRam0000000113800488 = 0xd000000000000029;
  uRam0000000113800490 = 0x800000010efb2fd0;
  return;
}



/* Entry: 10158eabc; end: 10158eb23;  */

void FUN_10158eabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd000000000000029;
  *param_5 = 0x800000010efb2fd0;
  return;
}



/* Entry: 10158eb24; end: 10158eb6b;  */

void FUN_10158eb24(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964250,0x1c,2);
  uRam00000001138004a0 = uStack_38;
  uRam0000000113800498 = uStack_40;
  uRam00000001138004b0 = uStack_28;
  uRam00000001138004a8 = uStack_30;
  uRam00000001138004c0 = uStack_18;
  uRam00000001138004b8 = uStack_20;
  return;
}



/* Entry: 10158eb6c; end: 10158ec4f;  */

void FUN_10158eb6c(undefined8 param_1,long param_2,long param_3)

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
        func_0x00010159f534();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_110670d00;
LAB_10158ebf4:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010159f4f4();
        lVar2 = unaff_x20 + 0x50;
        puVar3 = &UNK_1103e3110;
        goto LAB_10158ebf4;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10158ec50; end: 10158ecc3;  */

void FUN_10158ec50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10158ecc4();
  if (unaff_x21 == 0) {
    FUN_10158ed58();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10158ecc4; end: 10158ed57;  */

void FUN_10158ecc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x48);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f534();
    (*pcVar1)(&uStack_80,1,&UNK_110670d00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158ed58; end: 10158ee2b;  */

void FUN_10158ed58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  
  uStack_68 = *(undefined8 *)(param_1 + 0xb8);
  uStack_70 = *(undefined8 *)(param_1 + 0xb0);
  uStack_58 = *(undefined8 *)(param_1 + 200);
  uStack_60 = *(undefined8 *)(param_1 + 0xc0);
  uStack_48 = *(undefined8 *)(param_1 + 0xd8);
  uStack_50 = *(undefined8 *)(param_1 + 0xd0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x78);
  uStack_b0 = *(undefined8 *)(param_1 + 0x70);
  uStack_98 = *(undefined8 *)(param_1 + 0x88);
  uStack_a0 = *(undefined8 *)(param_1 + 0x80);
  uStack_88 = *(undefined8 *)(param_1 + 0x98);
  uStack_90 = *(undefined8 *)(param_1 + 0x90);
  uStack_78 = *(undefined8 *)(param_1 + 0xa8);
  uStack_80 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0x58);
  uStack_d0 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = &uStack_d0;
  func_0x000100cb5db0();
  if ((int)puVar1 != 1) {
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_e8 = uStack_58;
    uStack_f0 = uStack_60;
    uStack_d8 = uStack_48;
    uStack_e0 = uStack_50;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010159f4f4();
    (*pcVar2)(&uStack_160,2,&UNK_1103e3110,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10158ee2c; end: 10158ee9b;  */

void FUN_10158ee2c(undefined8 *param_1)

{
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
  
  FUN_101591224(&uStack_b0);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  param_1[0x17] = uStack_48;
  param_1[0x16] = uStack_50;
  param_1[0x19] = uStack_38;
  param_1[0x18] = uStack_40;
  param_1[0x1b] = uStack_28;
  param_1[0x1a] = uStack_30;
  param_1[0xf] = uStack_88;
  param_1[0xe] = uStack_90;
  param_1[0x11] = uStack_78;
  param_1[0x10] = uStack_80;
  param_1[0x13] = uStack_68;
  param_1[0x12] = uStack_70;
  param_1[0x15] = uStack_58;
  param_1[0x14] = uStack_60;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[0xd] = uStack_98;
  param_1[0xc] = uStack_a0;
  return;
}



/* Entry: 10158ee9c; end: 10158eec3;  */

undefined1  [16] FUN_10158ee9c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db66b8 != -1) {
    func_0x000107c61568(0x112db66b8,FUN_10158ea90);
  }
  auVar1._8_8_ = uRam0000000113800490;
  auVar1._0_8_ = uRam0000000113800488;
  func_0x000107c61434(uRam0000000113800490);
  return auVar1;
}



/* Entry: 10158eec4; end: 10158eef3;  */

undefined1  [16] FUN_10158eec4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10158eef4; end: 10158ef27;  */

void FUN_10158eef4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10158ef28; end: 10158ef3b;  */

undefined8 FUN_10158ef28(void)

{
  return 0x10158ef38;
}



/* Entry: 10158ef3c; end: 10158ef4f;  */

void FUN_10158ef3c(void)

{
  FUN_10158eb6c();
  return;
}



/* Entry: 10158ef50; end: 10158efaf;  */

void FUN_10158ef50(void)

{
  FUN_10158ec50();
  return;
}



/* Entry: 10158efb0; end: 10158efb3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10158efb0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10158efb4; end: 10158efeb;  */

uint FUN_10158efb4(long param_1,long param_2)

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
  FUN_10159eeb4();
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



/* Entry: 10158efec; end: 10158f08b;  */

uint FUN_10158efec(undefined8 *param_1)

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
  FUN_101592dc0(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 10158f08c; end: 10158f12b;  */

/* WARNING: Possible PIC construction at 0x00010158f0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158f0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158f0dc) */
/* WARNING: Removing unreachable block (ram,0x00010158f0ec) */

void FUN_10158f08c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db66c0 != -1) {
    func_0x000107c61568(0x112db66c0,FUN_10158eb24);
  }
  uVar5 = uRam00000001138004c0;
  uVar4 = uRam00000001138004b8;
  uVar3 = uRam00000001138004b0;
  uVar2 = uRam00000001138004a8;
  uVar1 = uRam00000001138004a0;
  *param_1 = uRam0000000113800498;
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



/* Entry: 10158f12c; end: 10158f167;  */

void FUN_10158f12c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6cb8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6cb8,&UNK_10d964180);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158f168; end: 10158f2c3;  */

void FUN_10158f168(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10158f2c4; end: 10158f363;  */

uint FUN_10158f2c4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101592dc0(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 10158f364; end: 10158f843;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10158f364(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long *plVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  long *unaff_x26;
  long lVar25;
  undefined1 *puVar26;
  code *pcVar27;
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
  byte bVar43;
  undefined1 auVar44 [16];
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  puVar26 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = param_1[2];
  if (lVar25 == param_2[2]) {
    if ((lVar25 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      plVar16 = param_2 + 6;
      unaff_x26 = param_1 + 6;
      do {
        unaff_x23 = (byte *)unaff_x26[-2];
        unaff_x22 = (long *)unaff_x26[-1];
        unaff_x19 = (byte *)*unaff_x26;
        unaff_x20 = (byte *)plVar16[-2];
        unaff_x25 = (byte *)plVar16[-1];
        unaff_x24 = (byte *)*plVar16;
        func_0x00010006c00c(unaff_x23,unaff_x22);
        func_0x000107c6157c(unaff_x19);
        pbStack_90 = unaff_x20;
        func_0x00010006c00c(unaff_x20,unaff_x25);
        pbVar12 = unaff_x24;
        func_0x000107c6157c();
        param_2 = unaff_x22;
        if (unaff_x19 != unaff_x24) {
          func_0x000107c6157c(unaff_x19);
          func_0x000107c6157c(unaff_x24);
          unaff_x20 = unaff_x19;
          FUN_1015844d0(unaff_x19,unaff_x24);
          func_0x000107c61574(unaff_x24);
          pbVar12 = unaff_x19;
          func_0x000107c61574();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10158f474;
LAB_10158f7bc:
          func_0x00010006c090(pbStack_90,unaff_x25);
          func_0x000107c61574(unaff_x24);
          func_0x00010006c090(unaff_x23);
          func_0x000107c61574(unaff_x19);
          goto LAB_10158f7e4;
        }
LAB_10158f474:
        pbVar9 = pbStack_90;
        uVar4 = (uint)((ulong)unaff_x22 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)((ulong)unaff_x25 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar7 = (int)unaff_x23;
        if ((ulong)unaff_x22 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((unaff_x23 != (byte *)0x0) || (unaff_x22 != (long *)0xc000000000000000)) ||
              ((ulong)unaff_x25 >> 0x3e < 3)) ||
             ((uVar20 = 0, pbStack_90 != (byte *)0x0 || (unaff_x25 != (byte *)0xc000000000000000))))
          goto joined_r0x00010158f4ec;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(unaff_x24);
          pbVar12 = (byte *)0x0;
          param_2 = (long *)0xc000000000000000;
LAB_10158f3e0:
          func_0x00010006c090(pbVar12);
          func_0x000107c61574(unaff_x19);
        }
        else {
          if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar20 = (ulong)unaff_x22 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)unaff_x23 >> 0x20);
              if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
                pcVar27 = (code *)SoftwareBreakpoint(1,0x10158f82c);
                (*pcVar27)();
              }
              uVar20 = (ulong)(iVar19 - iVar7);
            }
joined_r0x00010158f4ec:
            if (uVar5 >> 0x1e < 2) goto LAB_10158f528;
LAB_10158f4f0:
            if (uVar22 == 2) {
              uVar23 = *(long *)(pbStack_90 + 0x18) - *(long *)(pbStack_90 + 0x10);
              if (SBORROW8(*(long *)(pbStack_90 + 0x18),*(long *)(pbStack_90 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar27 = (code *)SoftwareBreakpoint(1,0x10158f824);
                (*pcVar27)();
              }
              goto LAB_10158f548;
            }
            if (uVar20 != 0) goto LAB_10158f7bc;
LAB_10158f3c4:
            func_0x00010006c090(pbStack_90,unaff_x25);
            func_0x000107c61574(unaff_x24);
            pbVar12 = unaff_x23;
            goto LAB_10158f3e0;
          }
          if (uVar18 == 2) {
            uVar20 = *(long *)(unaff_x23 + 0x18) - *(long *)(unaff_x23 + 0x10);
            if (SBORROW8(*(long *)(unaff_x23 + 0x18),*(long *)(unaff_x23 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x10158f830);
              (*pcVar27)();
            }
            goto joined_r0x00010158f4ec;
          }
          uVar20 = 0;
          if (1 < uVar22) goto LAB_10158f4f0;
LAB_10158f528:
          if (uVar22 == 0) {
            uVar23 = (ulong)unaff_x25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbStack_90 >> 0x20);
            if (SBORROW4(iVar19,(int)pbStack_90)) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x10158f828);
              (*pcVar27)();
            }
            uVar23 = (ulong)(iVar19 - (int)pbStack_90);
          }
LAB_10158f548:
          if (uVar20 != uVar23) goto LAB_10158f7bc;
          if ((long)uVar20 < 1) goto LAB_10158f3c4;
          if (uVar18 < 2) {
            if (uVar18 == 0) {
              abStack_80[0] = (byte)unaff_x23;
              abStack_80[1] = (byte)((ulong)unaff_x23 >> 8);
              abStack_80[2] = (byte)((ulong)unaff_x23 >> 0x10);
              abStack_80[3] = (byte)((ulong)unaff_x23 >> 0x18);
              abStack_80[4] = (byte)((ulong)unaff_x23 >> 0x20);
              abStack_80[5] = (byte)((ulong)unaff_x23 >> 0x28);
              abStack_80[6] = (byte)((ulong)unaff_x23 >> 0x30);
              abStack_80[7] = (byte)((ulong)unaff_x23 >> 0x38);
              abStack_80[8] = (byte)unaff_x22;
              abStack_80[9] = (byte)((ulong)unaff_x22 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x22 >> 0x28);
              pbVar12 = abStack_80 + ((ulong)unaff_x22 >> 0x30 & 0xff);
              goto LAB_10158f6d0;
            }
            lVar21 = (long)iVar7;
            pbStack_a0 = (byte *)(((long)unaff_x23 >> 0x20) - lVar21);
            if ((long)unaff_x23 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x10158f834);
              uStack_98 = unaff_x21;
              (*pcVar27)();
            }
            uStack_98 = unaff_x21;
            func_0x000107c5ec30();
            if (pbVar12 == (byte *)0x0) {
              func_0x000107c5ec38();
              pbVar9 = (byte *)0x0;
              pbVar13 = (byte *)0x0;
            }
            else {
              pbStack_a8 = pbVar12;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar21,(long)pbVar12)) {
                    /* WARNING: Does not return */
                pcVar27 = (code *)SoftwareBreakpoint(1,0x10158f840);
                (*pcVar27)();
              }
              pbVar8 = pbStack_a8 + (lVar21 - (long)pbVar12);
              func_0x000107c5ec38();
              if ((long)pbStack_a0 <= (long)pbVar12) {
                pbVar12 = pbStack_a0;
              }
              pbVar9 = (byte *)0x0;
              if (pbVar8 != (byte *)0x0) {
                pbVar9 = pbVar8;
              }
              pbVar13 = (byte *)0x0;
              if (pbVar8 != (byte *)0x0) {
                pbVar13 = pbVar12 + (long)pbVar8;
              }
            }
LAB_10158f770:
            unaff_x20 = pbStack_90;
            unaff_x21 = uStack_98;
            FUN_100e25bdc(abStack_80,pbVar9,pbVar13,pbStack_90,unaff_x25);
            func_0x00010006c090(unaff_x20,unaff_x25);
            func_0x000107c61574(unaff_x24);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            bVar28 = abStack_80[0];
          }
          else {
            if (uVar18 == 2) {
              pbStack_a0 = *(byte **)(unaff_x23 + 0x10);
              pbStack_a8 = *(byte **)(unaff_x23 + 0x18);
              uStack_98 = unaff_x21;
              func_0x000107c5ec30();
              pbStack_b0 = unaff_x23;
              if (pbVar12 == (byte *)0x0) {
                pbVar9 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar12;
                func_0x000107c5ec3c();
                if (SBORROW8((long)pbStack_a0,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar27 = (code *)SoftwareBreakpoint(1,0x10158f83c);
                  (*pcVar27)();
                }
                pbVar9 = pbVar12 + ((long)pbStack_a0 - (long)pbVar13);
                pbVar12 = pbVar13;
              }
              pbVar13 = pbStack_a8 + -(long)pbStack_a0;
              if (SBORROW8((long)pbStack_a8,(long)pbStack_a0)) {
                    /* WARNING: Does not return */
                pcVar27 = (code *)SoftwareBreakpoint(1,0x10158f838);
                (*pcVar27)();
              }
              func_0x000107c5ec38();
              unaff_x23 = pbStack_b0;
              if (pbVar9 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)pbVar13 <= (long)pbVar12) {
                  pbVar12 = pbVar13;
                }
                pbVar13 = pbVar12 + (long)pbVar9;
              }
              goto LAB_10158f770;
            }
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
            pbVar12 = abStack_80;
LAB_10158f6d0:
            FUN_100e25bdc(&bStack_81,abStack_80,pbVar12,pbStack_90,unaff_x25);
            func_0x00010006c090(pbVar9,unaff_x25);
            func_0x000107c61574(unaff_x24);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            unaff_x20 = pbVar9;
            bVar28 = bStack_81;
          }
          if ((bVar28 & 1) == 0) goto LAB_10158f7e4;
        }
        plVar16 = plVar16 + 3;
        unaff_x26 = unaff_x26 + 3;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    pbVar12 = (byte *)0x1;
  }
  else {
LAB_10158f7e4:
    pbVar12 = (byte *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar12;
  }
  pcVar27 = FUN_10158f844;
  func_0x000107c60e78();
  lVar25 = *(long *)pbVar12;
  lVar21 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar21 < 2) {
      if (lVar21 == 0) {
        if (lVar25 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar25 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar21 == 2) {
      if (lVar25 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar25 != 3) {
      return (byte *)0x0;
    }
  }
  else if (lVar25 != lVar21) {
    return (byte *)0x0;
  }
  if (*(float *)(pbVar12 + 0xc) != *(float *)((long)param_2 + 0xc)) {
    return (byte *)0x0;
  }
  pbVar9 = *(byte **)(pbVar12 + 0x10);
  pbVar12 = *(byte **)(pbVar12 + 0x18);
  lVar25 = param_2[2];
  plVar16 = (long *)param_2[3];
  ppbVar6 = &pbStack_b0;
  do {
    *(long **)((long)ppbVar6 + -0x50) = unaff_x26;
    *(byte **)((long)ppbVar6 + -0x48) = unaff_x25;
    *(byte **)((long)ppbVar6 + -0x40) = unaff_x24;
    *(byte **)((long)ppbVar6 + -0x38) = unaff_x23;
    *(long **)((long)ppbVar6 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppbVar6 + -0x28) = unaff_x21;
    *(byte **)((long)ppbVar6 + -0x20) = unaff_x20;
    *(byte **)((long)ppbVar6 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppbVar6 + -0x10) = puVar26;
    *(code **)((long)ppbVar6 + -8) = pcVar27;
    *(undefined8 *)((long)ppbVar6 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar12 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)((ulong)plVar16 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar12;
    if ((ulong)pbVar12 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar9 != (byte *)0x0) || (pbVar12 != (byte *)0xc000000000000000)) ||
         (((ulong)plVar16 >> 0x3e < 3 ||
          ((uVar20 = 0, lVar25 != 0 || (plVar16 != (long *)0xc000000000000000))))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar12 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar27)();
        }
        uVar20 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = (ulong)plVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar27)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar27)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar27)();
        }
LAB_100e2608c:
        if (uVar20 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)ppbVar6 + -0x70) = (char)pbVar9;
            *(char *)((long)ppbVar6 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)ppbVar6 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)ppbVar6 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)ppbVar6 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)ppbVar6 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)ppbVar6 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)ppbVar6 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)ppbVar6 + -0x68) = (char)pbVar12;
            *(char *)((long)ppbVar6 + -0x67) = (char)((ulong)pbVar12 >> 8);
            *(char *)((long)ppbVar6 + -0x66) = (char)((ulong)pbVar12 >> 0x10);
            *(char *)((long)ppbVar6 + -0x65) = (char)((ulong)pbVar12 >> 0x18);
            *(char *)((long)ppbVar6 + -100) = (char)((ulong)pbVar12 >> 0x20);
            *(char *)((long)ppbVar6 + -99) = (char)((ulong)pbVar12 >> 0x28);
            pbVar13 = (byte *)((long)ppbVar6 + (((ulong)pbVar12 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)ppbVar6 + -0x71),
                          (undefined1 *)((long)ppbVar6 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)ppbVar6 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar27 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar27)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar12;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar27)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)ppbVar6 + -0x6a) = 0;
            *(undefined8 *)((long)ppbVar6 + -0x70) = 0;
            pbVar13 = (byte *)((long)ppbVar6 + -0x70);
            goto LAB_100e26260;
          }
          lVar21 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar27)();
            }
            pbVar9 = pbVar9 + (lVar21 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar27 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar27)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar12;
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
LAB_100e262a4:
        unaff_x20 = (byte *)((ulong)pbVar12 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)ppbVar6 + -0x70),pbVar9,pbVar13,lVar25,plVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)ppbVar6 + -0x70);
        unaff_x22 = plVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppbVar6 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)ppbVar6 + -0xc0) = unaff_x24;
    *(byte **)((long)ppbVar6 + -0xb8) = unaff_x23;
    *(long **)((long)ppbVar6 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)ppbVar6 + -0xa8) = unaff_x21;
    *(byte **)((long)ppbVar6 + -0xa0) = unaff_x20;
    *(byte **)((long)ppbVar6 + -0x98) = unaff_x19;
    *(undefined1 **)((long)ppbVar6 + -0x90) = (undefined1 *)((long)ppbVar6 + -0x10);
    *(code **)((long)ppbVar6 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar24 = *(byte **)(pbVar8 + 0x18);
    bVar28 = pbVar8[0x28];
    pbVar12 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar25 = *(long *)pbVar13;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar25,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar25 = *(long *)pbVar13;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar25,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar12;
        if ((pbVar9 == pbVar15) && (pbVar12 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar25 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar12 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar12;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
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
    lVar21 = *(long *)(pbVar8 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar12, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar12 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      if (pbVar12 == (byte *)0x0) {
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
        pbVar14 = pbVar12;
        if ((pbVar9 != pbVar15) || (pbVar12 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar21 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar21 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar21,*(byte **)(pbVar13 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar21 == 0) && pbVar12 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar21 = *(long *)(pbVar13 + 0x20);
        lVar25 = *(long *)(pbVar13 + 0x18);
        bVar28 = pbVar13[8] | (byte)lVar25;
        bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar13[0x10] | (byte)lVar21;
        bVar37 = pbVar13[0x11] | (byte)((ulong)lVar21 >> 8);
        bVar38 = pbVar13[0x12] | (byte)((ulong)lVar21 >> 0x10);
        bVar39 = pbVar13[0x13] | (byte)((ulong)lVar21 >> 0x18);
        bVar40 = pbVar13[0x14] | (byte)((ulong)lVar21 >> 0x20);
        bVar41 = pbVar13[0x15] | (byte)((ulong)lVar21 >> 0x28);
        bVar42 = pbVar13[0x16] | (byte)((ulong)lVar21 >> 0x30);
        bVar43 = pbVar13[0x17] | (byte)((ulong)lVar21 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar21 == 0)) {
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
      lVar21 = *(long *)(pbVar13 + 0x20);
      lVar25 = *(long *)(pbVar13 + 0x18);
      bVar28 = pbVar13[8] | (byte)lVar25;
      bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar13[0x10] | (byte)lVar21;
      bVar37 = pbVar13[0x11] | (byte)((ulong)lVar21 >> 8);
      bVar38 = pbVar13[0x12] | (byte)((ulong)lVar21 >> 0x10);
      bVar39 = pbVar13[0x13] | (byte)((ulong)lVar21 >> 0x18);
      bVar40 = pbVar13[0x14] | (byte)((ulong)lVar21 >> 0x20);
      bVar41 = pbVar13[0x15] | (byte)((ulong)lVar21 >> 0x28);
      bVar42 = pbVar13[0x16] | (byte)((ulong)lVar21 >> 0x30);
      bVar43 = pbVar13[0x17] | (byte)((ulong)lVar21 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar13 + 8);
    plVar16 = *(long **)(pbVar13 + 0x10);
    lVar21 = *(long *)pbVar13;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar21,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar26 = *(undefined1 **)((long)ppbVar6 + -0x90);
    pcVar27 = *(code **)((long)ppbVar6 + -0x88);
    unaff_x20 = *(byte **)((long)ppbVar6 + -0xa0);
    unaff_x19 = *(byte **)((long)ppbVar6 + -0x98);
    unaff_x22 = *(long **)((long)ppbVar6 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)ppbVar6 + -0xa8);
    unaff_x24 = *(byte **)((long)ppbVar6 + -0xc0);
    unaff_x23 = *(byte **)((long)ppbVar6 + -0xb8);
    ppbVar6 = (byte **)((long)ppbVar6 + -0x80);
  } while( true );
}



/* Entry: 10158f844; end: 10158f8c7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10158f844(long *param_1,long *param_2)

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
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 2) {
      if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 3) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if (*(float *)((long)param_1 + 0xc) != *(float *)((long)param_2 + 0xc)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[2];
  pbVar26 = (byte *)param_1[3];
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
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
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
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto LAB_100e26260;
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
          unaff_x25 = pbVar26;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar19 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
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
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
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
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar19 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar19);
          func_0x000107c61174();
          pbVar10 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar19);
          pbVar25 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
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
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
      if (pbVar26 == (byte *)0x0) {
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
        pbVar14 = pbVar26;
        if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar19 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar13 + 0x20);
        lVar19 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar19;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar22;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
      bVar27 = pbVar13[8] | (byte)lVar19;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar22;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
      lVar19 = CONCAT17(bVar34 | auVar43[7],
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
    lVar19 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar22 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 10158f8c8; end: 10158f97b;  */

/* WARNING: Possible PIC construction at 0x00010158f944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010158f948) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10158f8c8(long *param_1,long *param_2)

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
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 == 0) goto LAB_10158f910;
    }
    else if (lVar22 == 1) {
      if (lVar19 == 1) {
LAB_10158f910:
        pbVar12 = (byte *)param_1[2];
        pbVar14 = (byte *)param_1[3];
        pbVar15 = (byte *)param_2[2];
        pbVar17 = (byte *)param_2[3];
        if ((byte *)param_1[2] != (byte *)param_2[2] || (byte *)param_1[3] != (byte *)param_2[3]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        pbVar10 = (byte *)param_1[4];
        pbVar26 = (byte *)param_1[5];
        lVar19 = param_2[4];
        uVar16 = param_2[5];
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
          uVar4 = (uint)((ulong)pbVar26 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
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
            if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
              goto LAB_100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
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
            if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
LAB_100e2608c:
              if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
              if ((long)uVar21 < 1) goto LAB_100e26128;
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
                  puVar7[-0x68] = (char)pbVar26;
                  puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto LAB_100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar26;
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
                    goto LAB_100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto LAB_100e26260;
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
                unaff_x25 = pbVar26;
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
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
            }
          }
LAB_100e262b0:
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
          *(code **)(puVar7 + -0x88) = FUN_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar25 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
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
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
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
                if (pbVar25 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar19);
                  pbVar25 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
            if (pbVar26 == (byte *)0x0) {
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
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar27 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
            bVar27 = pbVar13[8] | (byte)lVar19;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
            lVar19 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
    else if (lVar19 == 2) goto LAB_10158f910;
  }
  else if (lVar19 == lVar22) goto LAB_10158f910;
  return (byte *)0x0;
}



/* Entry: 10158f97c; end: 1015905f7;  */

uint FUN_10158f97c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar10 = param_1[3];
  uVar6 = param_1[2];
  lVar18 = param_1[5];
  uVar16 = param_1[4];
  uVar11 = param_1[7];
  uVar7 = param_1[6];
  uVar12 = param_2[3];
  uVar8 = param_2[2];
  lVar19 = param_2[5];
  uVar17 = param_2[4];
  uVar13 = param_2[7];
  uVar9 = param_2[6];
  uStack_130 = uVar8;
  uStack_128 = uVar12;
  uStack_120 = uVar17;
  lStack_118 = lVar19;
  uStack_110 = uVar9;
  uStack_108 = uVar13;
  uStack_100 = uVar6;
  uStack_f8 = uVar10;
  uStack_f0 = uVar16;
  lStack_e8 = lVar18;
  uStack_e0 = uVar7;
  uStack_d8 = uVar11;
  if (lVar18 == 0) {
    if (lVar19 != 0) goto LAB_10158fa9c;
    func_0x000101593ed8(&uStack_100,&uStack_98,0x112db5ca8,&UNK_10d961d90);
    func_0x000101593ed8(&uStack_130,&uStack_98,0x112db5ca8,&UNK_10d961d90);
    func_0x000101593bd8(uVar6,uVar10,uVar16,0,uVar7,uVar11);
LAB_10158fb7c:
    uVar14 = param_1[9];
    uVar6 = param_1[8];
    uVar4 = param_1[10];
    uVar15 = param_2[9];
    uVar7 = param_2[8];
    uVar5 = param_2[10];
    uStack_1a0 = uVar6;
    uStack_198 = uVar14;
    uStack_190 = uVar4;
    uStack_150 = uVar7;
    uStack_148 = uVar15;
    uStack_140 = uVar5;
    if (uVar4 >> 0x3c < 0xf) {
      if (0xe < uVar5 >> 0x3c) goto LAB_10158fc24;
      if (((float)uVar6 == (float)uVar7) &&
         ((float)((ulong)uVar6 >> 0x20) == (float)((ulong)uVar7 >> 0x20))) {
        func_0x000101593ed8(&uStack_1a0,auStack_168,0x112db5cb0,&UNK_10d964910);
        func_0x000101593ed8(&uStack_150,auStack_168,0x112db5cb0,&UNK_10d964910);
        uVar3 = uVar14;
        FUN_100e25fcc(uVar14,uVar4,uVar15,uVar5);
        func_0x000100cb5b9c(uVar7,uVar15,uVar5);
        if ((uVar3 & 1) != 0) goto LAB_10158fbf8;
      }
      else {
        func_0x000101593ed8(&uStack_1a0,auStack_168,0x112db5cb0,&UNK_10d964910);
        func_0x000101593ed8(&uStack_150,auStack_168,0x112db5cb0,&UNK_10d964910);
        func_0x000100cb5b9c(uVar7,uVar15,uVar5);
      }
    }
    else {
      if (0xe < uVar5 >> 0x3c) {
        func_0x000101593ed8(&uStack_1a0,auStack_168,0x112db5cb0,&UNK_10d964910);
        func_0x000101593ed8(&uStack_150,auStack_168,0x112db5cb0,&UNK_10d964910);
LAB_10158fbf8:
        func_0x000100cb5b9c(uVar6,uVar14,uVar4);
        uVar6 = *param_1;
        FUN_100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar6;
        goto LAB_10158fd68;
      }
LAB_10158fc24:
      func_0x000101593ed8(&uStack_1a0,auStack_168,0x112db5cb0,&UNK_10d964910);
      func_0x000101593ed8(&uStack_150,auStack_168,0x112db5cb0,&UNK_10d964910);
      func_0x000100cb5b9c(uVar6,uVar14,uVar4);
      uVar6 = uVar7;
      uVar14 = uVar15;
      uVar4 = uVar5;
    }
    func_0x000100cb5b9c(uVar6,uVar14,uVar4);
  }
  else if (lVar19 == 0) {
LAB_10158fa9c:
    func_0x000101593ed8(&uStack_100,&uStack_98,0x112db5ca8,&UNK_10d961d90);
    func_0x000101593ed8(&uStack_130,&uStack_98,0x112db5ca8,&UNK_10d961d90);
    func_0x000101593bd8(uVar6,uVar10,uVar16,lVar18,uVar7,uVar11);
    func_0x000101593bd8(uVar8,uVar12,uVar17,lVar19,uVar9,uVar13);
  }
  else {
    uStack_90 = (undefined1)uVar12;
    uStack_c0 = (undefined1)uVar10;
    uStack_c8 = uVar6;
    uStack_b8 = uVar16;
    lStack_b0 = lVar18;
    uStack_a8 = uVar7;
    uStack_a0 = uVar11;
    uStack_98 = uVar8;
    uStack_88 = uVar17;
    lStack_80 = lVar19;
    uStack_78 = uVar9;
    uStack_70 = uVar13;
    func_0x000101593ed8(&uStack_100,&uStack_1a0,0x112db5ca8,&UNK_10d961d90);
    func_0x000101593ed8(&uStack_130,&uStack_1a0,0x112db5ca8,&UNK_10d961d90);
    puVar2 = &uStack_c8;
    FUN_10158f8c8(puVar2,&uStack_98);
    func_0x000101593bd8(uVar8,uVar12,uVar17,lVar19,uVar9,uVar13);
    func_0x000101593bd8(uVar6,uVar10,uVar16,lVar18,uVar7,uVar11);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10158fb7c;
  }
  uVar1 = 0;
LAB_10158fd68:
  return uVar1 & 1;
}



/* Entry: 1015905f8; end: 10159065b;  */

int FUN_1015905f8(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  iVar1 = 0;
  if ((uVar2 >> 0x1c & 3) != 0) {
    iVar1 = 0x10 - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
  }
  return iVar1;
}



/* Entry: 10159065c; end: 101590fe3;  */

uint FUN_10159065c(float *param_1,float *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_198 [56];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 6);
  uVar10 = *(ulong *)(param_1 + 0xc);
  uVar6 = *(undefined8 *)(param_1 + 10);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar13 = *(undefined8 *)(param_1 + 0xe);
  uVar4 = *(undefined8 *)(param_1 + 0x12);
  uVar11 = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_2 + 6);
  uVar16 = *(ulong *)(param_2 + 0xc);
  uVar14 = *(undefined8 *)(param_2 + 10);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0xe);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  uStack_160 = uVar7;
  uStack_158 = uVar11;
  uStack_150 = uVar14;
  uStack_148 = uVar16;
  uStack_140 = uVar8;
  uStack_138 = uVar12;
  uStack_130 = uVar3;
  uStack_120 = uVar5;
  uStack_118 = uVar9;
  uStack_110 = uVar6;
  uStack_108 = uVar10;
  uStack_100 = uVar13;
  uStack_f8 = uVar15;
  uStack_f0 = uVar4;
  if (uVar10 >> 0x3c < 0xf) {
    if (0xe < uVar16 >> 0x3c) goto LAB_101590768;
    uStack_e0 = uVar5;
    uStack_d8 = uVar9;
    uStack_d0 = uVar6;
    uStack_c8 = uVar10;
    uStack_c0 = uVar13;
    uStack_b8 = uVar15;
    uStack_b0 = uVar4;
    uStack_a8 = uVar7;
    uStack_a0 = uVar11;
    uStack_98 = uVar14;
    uStack_90 = uVar16;
    uStack_88 = uVar8;
    uStack_80 = uVar12;
    uStack_78 = uVar3;
    func_0x000101593ed8(&uStack_120,auStack_198,0x112db5e70,&UNK_10d9649a0);
    func_0x000101593ed8(&uStack_160,auStack_198,0x112db5e70,&UNK_10d9649a0);
    puVar2 = &uStack_e0;
    func_0x00010400dcec(puVar2,&uStack_a8);
    FUN_101593c1c(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar3);
    FUN_101593c1c(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1015908b0;
  }
  else if (uVar16 >> 0x3c < 0xf) {
LAB_101590768:
    func_0x000101593ed8(&uStack_120,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    func_0x000101593ed8(&uStack_160,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    FUN_101593c1c(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
    FUN_101593c1c(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar3);
  }
  else {
    func_0x000101593ed8(&uStack_120,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    func_0x000101593ed8(&uStack_160,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    FUN_101593c1c(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
LAB_1015908b0:
    if (*param_1 == *param_2) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      FUN_100e25fcc(uVar3,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_2 + 2),
                    *(undefined8 *)(param_2 + 4));
      uVar1 = (uint)uVar3;
      goto LAB_1015908d4;
    }
  }
  uVar1 = 0;
LAB_1015908d4:
  return uVar1 & 1;
}



/* Entry: 101590fe4; end: 101591003;  */

int FUN_101590fe4(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0xc < *(byte *)(param_1 + 0x138)) {
    iVar1 = (*(byte *)(param_1 + 0x138) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 101591004; end: 101591037;  */

undefined8 FUN_101591004(undefined8 param_1,undefined8 param_2)

{
  func_0x000101597c68(param_2,param_1,&UNK_1103e06c8);
  return param_2;
}



/* Entry: 101591038; end: 101591083;  */

void FUN_101591038(long param_1)

{
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}



/* Entry: 101591084; end: 1015910b7;  */

undefined8 FUN_101591084(undefined8 param_1,undefined8 param_2)

{
  FUN_101599810(param_2,param_1,&UNK_1103e0db8);
  return param_2;
}



/* Entry: 1015910b8; end: 1015910c7;  */

void FUN_1015910b8(void)

{
  return;
}



/* Entry: 1015910c8; end: 1015910fb;  */

undefined8 FUN_1015910c8(undefined8 param_1,undefined8 param_2)

{
  FUN_10159a750(param_2,param_1,&UNK_1103e11b0);
  return param_2;
}



/* Entry: 1015910fc; end: 10159111b;  */

void FUN_1015910fc(void)

{
  func_0x000107c61168(&PTR_PTR_112db6c38);
  return;
}



/* Entry: 10159111c; end: 1015911ab;  */

void FUN_10159111c(void)

{
  return;
}



/* Entry: 1015911ac; end: 1015911df;  */

undefined8 FUN_1015911ac(undefined8 param_1,undefined8 param_2)

{
  FUN_10159cac4(param_2,param_1,&UNK_1103e1918);
  return param_2;
}



/* Entry: 1015911e0; end: 1015911ef;  */

void FUN_1015911e0(void)

{
  return;
}



/* Entry: 1015911f0; end: 101591223;  */

undefined8 FUN_1015911f0(undefined8 param_1,undefined8 param_2)

{
  FUN_10159dbac(param_2,param_1,&UNK_1103e19a0);
  return param_2;
}



/* Entry: 101591224; end: 101591257;  */

void FUN_101591224(undefined8 *param_1)

{
  param_1[1] = 0xf000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 101591258; end: 10159128b;  */

undefined8 FUN_101591258(undefined8 param_1,undefined8 param_2)

{
  FUN_10159e234(param_2,param_1,&UNK_1103e1a28);
  return param_2;
}



/* Entry: 10159128c; end: 101591d93;  */

uint FUN_10159128c(float *param_1,float *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auStack_198 [56];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 2);
  lVar4 = *(long *)(param_2 + 2);
  if (*(char *)(param_2 + 4) == '\x01') {
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else if (lVar3 != 1) {
        return 0;
      }
    }
    else if (lVar4 == 2) {
      if (lVar3 != 2) {
        return 0;
      }
    }
    else if (lVar3 != 3) {
      return 0;
    }
  }
  else if (lVar3 != lVar4) {
    return 0;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0xe);
  uVar12 = *(ulong *)(param_1 + 0x14);
  uVar8 = *(undefined8 *)(param_1 + 0x12);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x16);
  uVar5 = *(undefined8 *)(param_1 + 0x1a);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0xe);
  uVar18 = *(ulong *)(param_2 + 0x14);
  uVar16 = *(undefined8 *)(param_2 + 0x12);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x16);
  uVar6 = *(undefined8 *)(param_2 + 0x1a);
  uStack_160 = uVar9;
  uStack_158 = uVar13;
  uStack_150 = uVar16;
  uStack_148 = uVar18;
  uStack_140 = uVar10;
  uStack_138 = uVar14;
  uStack_130 = uVar6;
  uStack_120 = uVar7;
  uStack_118 = uVar11;
  uStack_110 = uVar8;
  uStack_108 = uVar12;
  uStack_100 = uVar15;
  uStack_f8 = uVar17;
  uStack_f0 = uVar5;
  if (uVar12 >> 0x3c < 0xf) {
    if (uVar18 >> 0x3c < 0xf) {
      uStack_e0 = uVar7;
      uStack_d8 = uVar11;
      uStack_d0 = uVar8;
      uStack_c8 = uVar12;
      uStack_c0 = uVar15;
      uStack_b8 = uVar17;
      uStack_b0 = uVar5;
      uStack_a8 = uVar9;
      uStack_a0 = uVar13;
      uStack_98 = uVar16;
      uStack_90 = uVar18;
      uStack_88 = uVar10;
      uStack_80 = uVar14;
      uStack_78 = uVar6;
      func_0x000101593ed8(&uStack_120,auStack_198,0x112db5e70,&UNK_10d9649a0);
      func_0x000101593ed8(&uStack_160,auStack_198,0x112db5e70,&UNK_10d9649a0);
      puVar2 = &uStack_e0;
      func_0x00010400dcec(puVar2,&uStack_a8);
      FUN_101593c1c(uVar9,uVar13,uVar16,uVar18,uVar10,uVar14,uVar6);
      FUN_101593c1c(uVar7,uVar11,uVar8,uVar12,uVar15,uVar17,uVar5);
      if (((ulong)puVar2 & 1) != 0) goto LAB_10159155c;
      goto LAB_1015915a8;
    }
  }
  else if (0xe < uVar18 >> 0x3c) {
    func_0x000101593ed8(&uStack_120,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    func_0x000101593ed8(&uStack_160,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    FUN_101593c1c(uVar7,uVar11,uVar8,uVar12,uVar15,uVar17,uVar5);
LAB_10159155c:
    lVar3 = *(long *)(param_1 + 6);
    lVar4 = *(long *)(param_2 + 6);
    if (*(char *)(param_2 + 8) == '\x01') {
      if (lVar4 == 0) {
        if (lVar3 != 0) goto LAB_1015915a8;
      }
      else if (lVar4 == 1) {
        if (lVar3 != 1) {
LAB_1015915a8:
          uVar1 = 0;
          goto LAB_1015915ac;
        }
      }
      else if (lVar3 != 2) goto LAB_1015915a8;
    }
    else if (lVar3 != lVar4) goto LAB_1015915a8;
    uVar5 = *(undefined8 *)(param_1 + 10);
    FUN_100e25fcc(uVar5,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_2 + 10),
                  *(undefined8 *)(param_2 + 0xc));
    uVar1 = (uint)uVar5;
    goto LAB_1015915ac;
  }
  func_0x000101593ed8(&uStack_120,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
  func_0x000101593ed8(&uStack_160,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
  FUN_101593c1c(uVar7,uVar11,uVar8,uVar12,uVar15,uVar17,uVar5);
  FUN_101593c1c(uVar9,uVar13,uVar16,uVar18,uVar10,uVar14,uVar6);
  uVar1 = 0;
LAB_1015915ac:
  return uVar1 & 1;
}



/* Entry: 101591d94; end: 101591f1f;  */

/* WARNING: Possible PIC construction at 0x000101591ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101591ed8) */

ulong FUN_101591d94(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar9 = param_1[5];
  if ((uVar9 >> 0x3c & 3) == 0) {
    if ((*(byte *)((long)param_2 + 0x2f) & 0x30) != 0) {
      return 0;
    }
    uVar9 = (ulong)(uVar3 != 0);
    if ((uVar5 & 0xff) != 1) {
      uVar9 = uVar3;
    }
    if ((char)param_2[1] == '\x01') {
      if (*param_2 == 0) {
        if (uVar9 != 0) {
          return 0;
        }
      }
      else if (uVar9 != 1) {
        return 0;
      }
    }
    else if (uVar9 != *param_2) {
      return 0;
    }
    FUN_100e25fcc(uVar2,uVar4,param_2[2],param_2[3]);
    uVar8 = uVar2;
joined_r0x000101591f00:
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if (((uint)(uVar9 >> 0x3c) & 3) == 1) {
    if ((param_2[5] & 0x3000000000000000) != 0x1000000000000000) {
      return 0;
    }
    uVar6 = *param_2;
    uVar7 = param_2[1];
    if (uVar3 == uVar6 && uVar5 == uVar7) {
      return 1;
    }
  }
  else {
    if ((param_2[5] & 0x3000000000000000) != 0x2000000000000000) {
      return 0;
    }
    uVar8 = param_1[4];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar1 = (ulong)(uVar3 != 0);
    if ((uVar5 & 0xff) != 1) {
      uVar1 = uVar3;
    }
    if ((char)param_2[1] == '\x01') {
      if (*param_2 == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else if (uVar1 != 1) {
        return 0;
      }
    }
    else if (uVar1 != *param_2) {
      return 0;
    }
    uVar3 = uVar2;
    uVar5 = uVar4;
    if ((uVar2 == uVar6) && (uVar4 == uVar7)) {
      FUN_100e25fcc(uVar8,uVar9 & 0xcfffffffffffffff,param_2[4],param_2[5] & 0xcfffffffffffffff);
      goto joined_r0x000101591f00;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(uVar3,uVar5,uVar6,uVar7,0);
  return uVar3;
}



/* Entry: 101591f20; end: 10159215b;  */

uint FUN_101591f20(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_160 [48];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[1];
  uVar3 = *param_1;
  uVar13 = param_1[3];
  uVar11 = param_1[2];
  uVar8 = param_1[5];
  uVar4 = param_1[4];
  uVar9 = param_2[1];
  uVar5 = *param_2;
  uVar14 = param_2[3];
  uVar12 = param_2[2];
  uVar10 = param_2[5];
  uVar6 = param_2[4];
  uStack_130 = uVar5;
  uStack_128 = uVar9;
  uStack_120 = uVar12;
  uStack_118 = uVar14;
  uStack_110 = uVar6;
  uStack_108 = uVar10;
  uStack_100 = uVar3;
  uStack_f8 = uVar7;
  uStack_f0 = uVar11;
  uStack_e8 = uVar13;
  uStack_e0 = uVar4;
  uStack_d8 = uVar8;
  if (((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar10 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000101593ed8(&uStack_100,&uStack_98,0x112db6300,&UNK_10d961e10);
      func_0x000101593ed8(&uStack_130,&uStack_98,0x112db6300,&UNK_10d961e10);
      FUN_101593cfc(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
LAB_10159212c:
      uVar3 = param_1[6];
      FUN_100e25fcc(uVar3,param_1[7],param_2[6],param_2[7]);
      uVar1 = (uint)uVar3;
      goto LAB_101592138;
    }
LAB_101592000:
    func_0x000101593ed8(&uStack_100,&uStack_98,0x112db6300,&UNK_10d961e10);
    func_0x000101593ed8(&uStack_130,&uStack_98,0x112db6300,&UNK_10d961e10);
    FUN_101593cfc(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
    FUN_101593cfc(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
  }
  else {
    if ((uVar10 & 0x3000000000000000) == 0x3000000000000000) goto LAB_101592000;
    uStack_c8 = uVar3;
    uStack_c0 = uVar7;
    uStack_b8 = uVar11;
    uStack_b0 = uVar13;
    uStack_a8 = uVar4;
    uStack_a0 = uVar8;
    uStack_98 = uVar5;
    uStack_90 = uVar9;
    uStack_88 = uVar12;
    uStack_80 = uVar14;
    uStack_78 = uVar6;
    uStack_70 = uVar10;
    func_0x000101593ed8(&uStack_100,auStack_160,0x112db6300,&UNK_10d961e10);
    func_0x000101593ed8(&uStack_130,auStack_160,0x112db6300,&UNK_10d961e10);
    puVar2 = &uStack_c8;
    FUN_101591d94(puVar2,&uStack_98);
    FUN_101593cfc(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
    FUN_101593cfc(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10159212c;
  }
  uVar1 = 0;
LAB_101592138:
  return uVar1 & 1;
}



/* Entry: 10159215c; end: 1015923bf;  */

uint FUN_10159215c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_280 [64];
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
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
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
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  uStack_d8 = param_2[9];
  uStack_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_1b8 = param_2[5];
  uStack_1c0 = param_2[4];
  uStack_1a8 = param_2[7];
  uStack_1b0 = param_2[6];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_198 = param_2[9];
  uStack_1a0 = param_2[8];
  uStack_188 = param_2[0xb];
  uStack_190 = param_2[10];
  uStack_140 = uStack_1c0;
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1b0;
  uStack_128 = uStack_1a8;
  uStack_120 = uStack_1a0;
  uStack_118 = uStack_198;
  uStack_110 = uStack_190;
  uStack_108 = uStack_188;
  if (uStack_148 >> 0x3c < 0xf) {
    if (uStack_188 >> 0x3c < 0xf) {
      uStack_238 = param_2[5];
      uStack_240 = param_2[4];
      uStack_228 = param_2[7];
      uStack_230 = param_2[6];
      uStack_218 = param_2[9];
      uStack_220 = param_2[8];
      uStack_208 = param_2[0xb];
      uStack_210 = param_2[10];
      uStack_78 = param_1[5];
      uStack_80 = param_1[4];
      uStack_68 = param_1[7];
      uStack_70 = param_1[6];
      uStack_58 = param_1[9];
      uStack_60 = param_1[8];
      uStack_48 = param_1[0xb];
      uStack_50 = param_1[10];
      uStack_200 = uStack_240;
      uStack_1f8 = uStack_238;
      uStack_1f0 = uStack_230;
      uStack_1e8 = uStack_228;
      uStack_1e0 = uStack_220;
      uStack_1d8 = uStack_218;
      uStack_1d0 = uStack_210;
      uStack_1c8 = uStack_208;
      func_0x000101593ed8(&uStack_c0,auStack_280,0x112db5f48,&UNK_10d961df0);
      func_0x000101593ed8(&uStack_100,auStack_280,0x112db5f48,&UNK_10d961df0);
      puVar2 = &uStack_80;
      FUN_101591f20(puVar2,&uStack_200);
      FUN_10159f8ac(&uStack_240,0x112db5f48,&UNK_10d961df0);
      FUN_10159f8ac(&uStack_180,0x112db5f48,&UNK_10d961df0);
      if (((ulong)puVar2 & 1) != 0) goto LAB_10159234c;
      goto LAB_101592380;
    }
  }
  else if (0xe < uStack_188 >> 0x3c) {
    uStack_1f8 = param_1[5];
    uStack_200 = param_1[4];
    uStack_1e8 = param_1[7];
    uStack_1f0 = param_1[6];
    uStack_1d8 = param_1[9];
    uStack_1e0 = param_1[8];
    uStack_1c8 = param_1[0xb];
    uStack_1d0 = param_1[10];
    func_0x000101593ed8(&uStack_c0,&uStack_80,0x112db5f48,&UNK_10d961df0);
    func_0x000101593ed8(&uStack_100,&uStack_80,0x112db5f48,&UNK_10d961df0);
    FUN_10159f8ac(&uStack_200,0x112db5f48,&UNK_10d961df0);
LAB_10159234c:
    uVar3 = (ulong)(*param_1 != 0);
    if ((char)param_1[1] != '\x01') {
      uVar3 = *param_1;
    }
    if ((char)param_2[1] == '\x01') {
      if (*param_2 == 0) {
        if (uVar3 == 0) goto LAB_101592390;
      }
      else if (uVar3 == 1) {
LAB_101592390:
        uVar3 = param_1[2];
        FUN_100e25fcc(uVar3,param_1[3],param_2[2],param_2[3]);
        uVar1 = (uint)uVar3;
        goto LAB_10159239c;
      }
    }
    else if (uVar3 == *param_2) goto LAB_101592390;
LAB_101592380:
    uVar1 = 0;
    goto LAB_10159239c;
  }
  uStack_200 = uStack_180;
  uStack_1f8 = uStack_178;
  uStack_1f0 = uStack_170;
  uStack_1e8 = uStack_168;
  uStack_1e0 = uStack_160;
  uStack_1d8 = uStack_158;
  uStack_1d0 = uStack_150;
  uStack_1c8 = uStack_148;
  func_0x000101593ed8(&uStack_c0,&uStack_80,0x112db5f48,&UNK_10d961df0);
  func_0x000101593ed8(&uStack_100,&uStack_80,0x112db5f48,&UNK_10d961df0);
  FUN_10159f8ac(&uStack_200,0x112db5f50,&UNK_10d961df8);
  uVar1 = 0;
LAB_10159239c:
  return uVar1 & 1;
}



/* Entry: 1015923c0; end: 1015929e7;  */

uint FUN_1015923c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar6;
  undefined1 auStack_a38 [216];
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  ulong uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  ulong uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  ulong uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  ulong uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  ulong uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
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
  undefined8 uStack_568;
  undefined8 uStack_560;
  ulong uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
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
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_480;
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
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
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
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  ulong uStack_68;
  undefined8 uVar5;
  
  uStack_5d8 = param_1[5];
  uStack_5e0 = param_1[4];
  uStack_208 = param_1[7];
  uStack_210 = param_1[6];
  uStack_5e8 = param_1[3];
  uStack_5f0 = param_1[2];
  uStack_218 = param_1[5];
  uStack_220 = param_1[4];
  uStack_5c8 = param_1[7];
  uStack_5d0 = param_1[6];
  uStack_1f8 = param_1[9];
  uStack_200 = param_1[8];
  uStack_5b8 = param_1[9];
  uStack_5c0 = param_1[8];
  uStack_1e8 = param_1[0xb];
  uStack_1f0 = param_1[10];
  uStack_228 = param_1[3];
  uStack_230 = param_1[2];
  uStack_588 = param_2[5];
  uStack_590 = param_2[4];
  uStack_258 = param_2[7];
  uStack_260 = param_2[6];
  uStack_578 = param_2[7];
  uStack_580 = param_2[6];
  uStack_248 = param_2[9];
  uStack_250 = param_2[8];
  uStack_568 = param_2[9];
  uStack_570 = param_2[8];
  uStack_238 = param_2[0xb];
  uStack_240 = param_2[10];
  uStack_278 = param_2[3];
  uStack_280 = param_2[2];
  uStack_268 = param_2[5];
  uStack_270 = param_2[4];
  uStack_598 = param_2[3];
  uStack_5a0 = param_2[2];
  uStack_5a8 = param_1[0xb];
  uStack_5b0 = param_1[10];
  uStack_558 = param_2[0xb];
  uStack_560 = param_2[10];
  if (uStack_5a8 >> 0x3c < 0xf) {
    if (0xe < uStack_558 >> 0x3c) goto LAB_1015924d4;
    uStack_778 = param_2[7];
    uStack_780 = param_2[6];
    uStack_768 = param_2[9];
    uStack_770 = param_2[8];
    uStack_758 = param_2[0xb];
    uStack_760 = param_2[10];
    uStack_798 = param_2[3];
    uStack_7a0 = param_2[2];
    uStack_788 = param_2[5];
    uStack_790 = param_2[4];
    uStack_f8 = param_1[3];
    uStack_100 = param_1[2];
    uStack_e8 = param_1[5];
    uStack_f0 = param_1[4];
    uStack_d8 = param_1[7];
    uStack_e0 = param_1[6];
    uStack_c8 = param_1[9];
    uStack_d0 = param_1[8];
    uStack_b8 = param_1[0xb];
    uStack_c0 = param_1[10];
    uStack_b0 = uStack_7a0;
    uStack_a8 = uStack_798;
    uStack_a0 = uStack_790;
    uStack_98 = uStack_788;
    uStack_90 = uStack_780;
    uStack_88 = uStack_778;
    uStack_80 = uStack_770;
    uStack_78 = uStack_768;
    uStack_70 = uStack_760;
    uStack_68 = uStack_758;
    func_0x000101593ed8(&uStack_230,&uStack_1e0,0x112db6370,&UNK_10d961e38);
    func_0x000101593ed8(&uStack_280,&uStack_1e0,0x112db6370,&UNK_10d961e38);
    puVar4 = &uStack_100;
    func_0x000103616260(puVar4,&uStack_b0);
    FUN_10159f8ac(&uStack_7a0,0x112db6370,&UNK_10d961e38);
    FUN_10159f8ac(&uStack_5f0,0x112db6370,&UNK_10d961e38);
    if (((ulong)puVar4 & 1) != 0) goto LAB_101592600;
  }
  else {
    if (0xe < uStack_558 >> 0x3c) {
      uStack_778 = param_1[7];
      uStack_780 = param_1[6];
      uStack_768 = param_1[9];
      uStack_770 = param_1[8];
      uStack_758 = param_1[0xb];
      uStack_760 = param_1[10];
      uStack_798 = param_1[3];
      uStack_7a0 = param_1[2];
      uStack_788 = param_1[5];
      uStack_790 = param_1[4];
      func_0x000101593ed8(&uStack_230,&uStack_1e0,0x112db6370,&UNK_10d961e38);
      func_0x000101593ed8(&uStack_280,&uStack_1e0,0x112db6370,&UNK_10d961e38);
      FUN_10159f8ac(&uStack_7a0,0x112db6370,&UNK_10d961e38);
LAB_101592600:
      uStack_548 = param_1[0x21];
      uStack_550 = param_1[0x20];
      uStack_2a8 = param_1[0x23];
      uStack_2b0 = param_1[0x22];
      uStack_558 = param_1[0x1f];
      uStack_560 = param_1[0x1e];
      uStack_2b8 = param_1[0x21];
      uStack_2c0 = param_1[0x20];
      uStack_538 = param_1[0x23];
      uStack_540 = param_1[0x22];
      uStack_298 = param_1[0x25];
      uStack_2a0 = param_1[0x24];
      uStack_588 = param_1[0x19];
      uStack_590 = param_1[0x18];
      uStack_2e8 = param_1[0x1b];
      uStack_2f0 = param_1[0x1a];
      uStack_598 = param_1[0x17];
      uStack_5a0 = param_1[0x16];
      uStack_2f8 = param_1[0x19];
      uStack_300 = param_1[0x18];
      uStack_578 = param_1[0x1b];
      uStack_580 = param_1[0x1a];
      uStack_2d8 = param_1[0x1d];
      uStack_2e0 = param_1[0x1c];
      uStack_568 = param_1[0x1d];
      uStack_570 = param_1[0x1c];
      uStack_2c8 = param_1[0x1f];
      uStack_2d0 = param_1[0x1e];
      uStack_5c8 = param_1[0x11];
      uStack_5d0 = param_1[0x10];
      uStack_328 = param_1[0x13];
      uStack_330 = param_1[0x12];
      uStack_5d8 = param_1[0xf];
      uStack_5e0 = param_1[0xe];
      uStack_338 = param_1[0x11];
      uStack_340 = param_1[0x10];
      uStack_5b8 = param_1[0x13];
      uStack_5c0 = param_1[0x12];
      uStack_318 = param_1[0x15];
      uStack_320 = param_1[0x14];
      uStack_5a8 = param_1[0x15];
      uStack_5b0 = param_1[0x14];
      uStack_308 = param_1[0x17];
      uStack_310 = param_1[0x16];
      uStack_358 = param_1[0xd];
      uStack_360 = param_1[0xc];
      uStack_348 = param_1[0xf];
      uStack_350 = param_1[0xe];
      uStack_5e8 = param_1[0xd];
      uStack_5f0 = param_1[0xc];
      uStack_470 = param_2[0x21];
      uStack_478 = param_2[0x20];
      uStack_388 = param_2[0x23];
      uStack_390 = param_2[0x22];
      uStack_480 = param_2[0x1f];
      uStack_488 = param_2[0x1e];
      uStack_398 = param_2[0x21];
      uStack_3a0 = param_2[0x20];
      uStack_460 = param_2[0x23];
      uStack_468 = param_2[0x22];
      uStack_378 = param_2[0x25];
      uStack_380 = param_2[0x24];
      uStack_4b0 = param_2[0x19];
      uStack_4b8 = param_2[0x18];
      uStack_3c8 = param_2[0x1b];
      uStack_3d0 = param_2[0x1a];
      uStack_4c0 = param_2[0x17];
      uStack_4c8 = param_2[0x16];
      uStack_3d8 = param_2[0x19];
      uStack_3e0 = param_2[0x18];
      uStack_4a0 = param_2[0x1b];
      uStack_4a8 = param_2[0x1a];
      uStack_3b8 = param_2[0x1d];
      uStack_3c0 = param_2[0x1c];
      uStack_490 = param_2[0x1d];
      uStack_498 = param_2[0x1c];
      uStack_3a8 = param_2[0x1f];
      uStack_3b0 = param_2[0x1e];
      uStack_4f0 = param_2[0x11];
      uStack_4f8 = param_2[0x10];
      uStack_408 = param_2[0x13];
      uStack_410 = param_2[0x12];
      uStack_500 = param_2[0xf];
      uStack_508 = param_2[0xe];
      uStack_418 = param_2[0x11];
      uStack_420 = param_2[0x10];
      uStack_4e0 = param_2[0x13];
      uStack_4e8 = param_2[0x12];
      uStack_3f8 = param_2[0x15];
      uStack_400 = param_2[0x14];
      uStack_4d0 = param_2[0x15];
      uStack_4d8 = param_2[0x14];
      uStack_3f0 = param_2[0x16];
      uStack_3e8 = param_2[0x17];
      uStack_438 = param_2[0xd];
      uStack_440 = param_2[0xc];
      uStack_430 = param_2[0xe];
      uStack_428 = param_2[0xf];
      uStack_510 = param_2[0xd];
      uStack_518 = param_2[0xc];
      uStack_528 = param_1[0x25];
      uStack_530 = param_1[0x24];
      iVar2 = (int)&uStack_518;
      uStack_450 = param_2[0x25];
      uStack_458 = param_2[0x24];
      uStack_290 = param_1[0x26];
      uStack_370 = param_2[0x26];
      uStack_520 = param_1[0x26];
      uStack_448 = param_2[0x26];
      iVar1 = (int)&uStack_5f0;
      FUN_101593e50();
      if (iVar1 == 1) {
        FUN_101593e50();
        if (iVar2 != 1) {
LAB_10159280c:
          func_0x000107c610b4(&uStack_7a0,&uStack_5f0,0x1b0);
          func_0x000101593ed8(&uStack_360,&uStack_1e0,0x112db6380,&UNK_10d9648a0);
          func_0x000101593ed8(&uStack_440,&uStack_1e0,0x112db6380,&UNK_10d9648a0);
          uVar5 = 0x112db6388;
          puVar6 = &UNK_10d961e50;
          goto LAB_101592864;
        }
        uStack_6f8 = uStack_548;
        uStack_700 = uStack_550;
        uStack_6e8 = uStack_538;
        uStack_6f0 = uStack_540;
        uStack_6d8 = uStack_528;
        uStack_6e0 = uStack_530;
        uStack_6d0 = uStack_520;
        uStack_738 = uStack_588;
        uStack_740 = uStack_590;
        uStack_728 = uStack_578;
        uStack_730 = uStack_580;
        uStack_718 = uStack_568;
        uStack_720 = uStack_570;
        uStack_708 = uStack_558;
        uStack_710 = uStack_560;
        uStack_778 = uStack_5c8;
        uStack_780 = uStack_5d0;
        uStack_768 = uStack_5b8;
        uStack_770 = uStack_5c0;
        uStack_758 = uStack_5a8;
        uStack_760 = uStack_5b0;
        uStack_748 = uStack_598;
        uStack_750 = uStack_5a0;
        uStack_798 = uStack_5e8;
        uStack_7a0 = uStack_5f0;
        uStack_788 = uStack_5d8;
        uStack_790 = uStack_5e0;
        func_0x000101593ed8(&uStack_360,&uStack_1e0,0x112db6380,&UNK_10d9648a0);
        func_0x000101593ed8(&uStack_440,&uStack_1e0,0x112db6380,&UNK_10d9648a0);
        FUN_10159f8ac(&uStack_7a0,0x112db6380,&UNK_10d9648a0);
      }
      else {
        uStack_7d8 = uStack_548;
        uStack_7e0 = uStack_550;
        uStack_7c8 = uStack_538;
        uStack_7d0 = uStack_540;
        uStack_7b8 = uStack_528;
        uStack_7c0 = uStack_530;
        uStack_7b0 = uStack_520;
        uStack_818 = uStack_588;
        uStack_820 = uStack_590;
        uStack_808 = uStack_578;
        uStack_810 = uStack_580;
        uStack_7f8 = uStack_568;
        uStack_800 = uStack_570;
        uStack_7e8 = uStack_558;
        uStack_7f0 = uStack_560;
        uStack_858 = uStack_5c8;
        uStack_860 = uStack_5d0;
        uStack_848 = uStack_5b8;
        uStack_850 = uStack_5c0;
        uStack_838 = uStack_5a8;
        uStack_840 = uStack_5b0;
        uStack_828 = uStack_598;
        uStack_830 = uStack_5a0;
        uStack_878 = uStack_5e8;
        uStack_880 = uStack_5f0;
        uStack_868 = uStack_5d8;
        uStack_870 = uStack_5e0;
        FUN_101593e50();
        if (iVar2 == 1) goto LAB_10159280c;
        uStack_8b8 = uStack_470;
        uStack_8c0 = uStack_478;
        uStack_8a8 = uStack_460;
        uStack_8b0 = uStack_468;
        uStack_898 = uStack_450;
        uStack_8a0 = uStack_458;
        uStack_8f8 = uStack_4b0;
        uStack_900 = uStack_4b8;
        uStack_8e8 = uStack_4a0;
        uStack_8f0 = uStack_4a8;
        uStack_8d8 = uStack_490;
        uStack_8e0 = uStack_498;
        uStack_8c8 = uStack_480;
        uStack_8d0 = uStack_488;
        uStack_938 = uStack_4f0;
        uStack_940 = uStack_4f8;
        uStack_928 = uStack_4e0;
        uStack_930 = uStack_4e8;
        uStack_918 = uStack_4d0;
        uStack_920 = uStack_4d8;
        uStack_908 = uStack_4c0;
        uStack_910 = uStack_4c8;
        uStack_958 = uStack_510;
        uStack_960 = uStack_518;
        uStack_948 = uStack_500;
        uStack_950 = uStack_508;
        uStack_6f8 = uStack_470;
        uStack_700 = uStack_478;
        uStack_6e8 = uStack_460;
        uStack_6f0 = uStack_468;
        uStack_6d8 = uStack_450;
        uStack_6e0 = uStack_458;
        uStack_738 = uStack_4b0;
        uStack_740 = uStack_4b8;
        uStack_728 = uStack_4a0;
        uStack_730 = uStack_4a8;
        uStack_718 = uStack_490;
        uStack_720 = uStack_498;
        uStack_708 = uStack_480;
        uStack_710 = uStack_488;
        uStack_778 = uStack_4f0;
        uStack_780 = uStack_4f8;
        uStack_768 = uStack_4e0;
        uStack_770 = uStack_4e8;
        uStack_758 = uStack_4d0;
        uStack_760 = uStack_4d8;
        uStack_748 = uStack_4c0;
        uStack_750 = uStack_4c8;
        uStack_798 = uStack_510;
        uStack_7a0 = uStack_518;
        uStack_788 = uStack_500;
        uStack_790 = uStack_508;
        uStack_138 = uStack_7d8;
        uStack_140 = uStack_7e0;
        uStack_128 = uStack_7c8;
        uStack_130 = uStack_7d0;
        uStack_118 = uStack_7b8;
        uStack_120 = uStack_7c0;
        uStack_178 = uStack_818;
        uStack_180 = uStack_820;
        uStack_168 = uStack_808;
        uStack_170 = uStack_810;
        uStack_158 = uStack_7f8;
        uStack_160 = uStack_800;
        uStack_148 = uStack_7e8;
        uStack_150 = uStack_7f0;
        uStack_1b8 = uStack_858;
        uStack_1c0 = uStack_860;
        uStack_1a8 = uStack_848;
        uStack_1b0 = uStack_850;
        uStack_198 = uStack_838;
        uStack_1a0 = uStack_840;
        uStack_188 = uStack_828;
        uStack_190 = uStack_830;
        uStack_1d8 = uStack_878;
        uStack_1e0 = uStack_880;
        uStack_890 = uStack_448;
        uStack_6d0 = uStack_448;
        uStack_110 = uStack_7b0;
        uStack_1c8 = uStack_868;
        uStack_1d0 = uStack_870;
        func_0x000101593ed8(&uStack_360,auStack_a38,0x112db6380,&UNK_10d9648a0);
        func_0x000101593ed8(&uStack_440,auStack_a38,0x112db6380,&UNK_10d9648a0);
        puVar4 = &uStack_1e0;
        FUN_1015a5b58(puVar4,&uStack_7a0);
        FUN_10159f8ac(&uStack_960,0x112db6380,&UNK_10d9648a0);
        FUN_10159f8ac(&uStack_5f0,0x112db6380,&UNK_10d9648a0);
        if (((ulong)puVar4 & 1) == 0) goto LAB_10159286c;
      }
      uVar5 = *param_1;
      FUN_100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar3 = (uint)uVar5;
      goto LAB_101592870;
    }
LAB_1015924d4:
    uStack_7a0 = uStack_5f0;
    uStack_798 = uStack_5e8;
    uStack_790 = uStack_5e0;
    uStack_788 = uStack_5d8;
    uStack_780 = uStack_5d0;
    uStack_778 = uStack_5c8;
    uStack_770 = uStack_5c0;
    uStack_768 = uStack_5b8;
    uStack_760 = uStack_5b0;
    uStack_758 = uStack_5a8;
    uStack_750 = uStack_5a0;
    uStack_748 = uStack_598;
    uStack_740 = uStack_590;
    uStack_738 = uStack_588;
    uStack_730 = uStack_580;
    uStack_728 = uStack_578;
    uStack_720 = uStack_570;
    uStack_718 = uStack_568;
    uStack_710 = uStack_560;
    uStack_708 = uStack_558;
    func_0x000101593ed8(&uStack_230,&uStack_1e0,0x112db6370,&UNK_10d961e38);
    func_0x000101593ed8(&uStack_280,&uStack_1e0,0x112db6370,&UNK_10d961e38);
    uVar5 = 0x112db6378;
    puVar6 = &UNK_10d961e40;
LAB_101592864:
    FUN_10159f8ac(&uStack_7a0,uVar5,puVar6);
  }
LAB_10159286c:
  uVar3 = 0;
LAB_101592870:
  return uVar3 & 1;
}



/* Entry: 1015929e8; end: 101592dbf;  */

uint FUN_1015929e8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_3d0 [96];
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
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
  ulong uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  long lStack_240;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
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
  
  uStack_228 = param_1[7];
  uStack_230 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_238 = param_1[5];
  lStack_240 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_218 = param_1[9];
  uStack_220 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_208 = param_1[0xb];
  uStack_210 = param_1[10];
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_248 = param_1[3];
  uStack_250 = param_1[2];
  uStack_188 = param_2[3];
  uStack_190 = param_2[2];
  uStack_178 = param_2[5];
  uStack_180 = param_2[4];
  uStack_2a8 = param_2[3];
  uStack_2b0 = param_2[2];
  uStack_298 = param_2[5];
  uStack_2a0 = param_2[4];
  uStack_278 = param_2[9];
  uStack_280 = param_2[8];
  uStack_148 = param_2[0xb];
  uStack_150 = param_2[10];
  uStack_268 = param_2[0xb];
  uStack_270 = param_2[10];
  uStack_138 = param_2[0xd];
  uStack_140 = param_2[0xc];
  uStack_288 = param_2[7];
  uStack_290 = param_2[6];
  uStack_158 = param_2[9];
  uStack_160 = param_2[8];
  uStack_168 = param_2[7];
  uStack_170 = param_2[6];
  uStack_1f8 = param_1[0xd];
  uStack_200 = param_1[0xc];
  uStack_258 = param_2[0xd];
  uStack_260 = param_2[0xc];
  uStack_1f0 = uStack_2b0;
  uStack_1e8 = uStack_2a8;
  uStack_1e0 = uStack_2a0;
  uStack_1d8 = uStack_298;
  uStack_1d0 = uStack_290;
  uStack_1c8 = uStack_288;
  uStack_1c0 = uStack_280;
  uStack_1b8 = uStack_278;
  uStack_1b0 = uStack_270;
  uStack_1a8 = uStack_268;
  uStack_1a0 = uStack_260;
  uStack_198 = uStack_258;
  if (uStack_1f8 >> 0x3c < 0xf) {
    if (uStack_258 >> 0x3c < 0xf) {
      uStack_348 = param_2[7];
      uStack_350 = param_2[6];
      uStack_338 = param_2[9];
      uStack_340 = param_2[8];
      uStack_328 = param_2[0xb];
      uStack_330 = param_2[10];
      uStack_318 = param_2[0xd];
      uStack_320 = param_2[0xc];
      uStack_368 = param_2[3];
      uStack_370 = param_2[2];
      uStack_358 = param_2[5];
      lStack_360 = param_2[4];
      uStack_a8 = param_1[7];
      uStack_b0 = param_1[6];
      uStack_98 = param_1[9];
      uStack_a0 = param_1[8];
      uStack_88 = param_1[0xb];
      uStack_90 = param_1[10];
      uStack_78 = param_1[0xd];
      uStack_80 = param_1[0xc];
      uStack_c8 = param_1[3];
      uStack_d0 = param_1[2];
      uStack_b8 = param_1[5];
      uStack_c0 = param_1[4];
      uStack_310 = uStack_370;
      uStack_308 = uStack_368;
      uStack_300 = lStack_360;
      uStack_2f8 = uStack_358;
      uStack_2f0 = uStack_350;
      uStack_2e8 = uStack_348;
      uStack_2e0 = uStack_340;
      uStack_2d8 = uStack_338;
      uStack_2d0 = uStack_330;
      uStack_2c8 = uStack_328;
      uStack_2c0 = uStack_320;
      uStack_2b8 = uStack_318;
      func_0x000101593ed8(&uStack_130,auStack_3d0,0x112db6390,&UNK_10d961e58);
      func_0x000101593ed8(&uStack_190,auStack_3d0,0x112db6390,&UNK_10d961e58);
      puVar2 = &uStack_d0;
      func_0x000103615adc(puVar2,&uStack_310);
      FUN_10159f8ac(&uStack_370,0x112db6390,&UNK_10d961e58);
      FUN_10159f8ac(&uStack_250,0x112db6390,&UNK_10d961e58);
      if (((ulong)puVar2 & 1) != 0) goto LAB_101592c34;
LAB_101592d40:
      uVar1 = 0;
      goto LAB_101592d9c;
    }
  }
  else if (0xe < uStack_258 >> 0x3c) {
    uStack_2e8 = param_1[7];
    uStack_2f0 = param_1[6];
    uStack_2d8 = param_1[9];
    uStack_2e0 = param_1[8];
    uStack_2c8 = param_1[0xb];
    uStack_2d0 = param_1[10];
    uStack_2b8 = param_1[0xd];
    uStack_2c0 = param_1[0xc];
    uStack_308 = param_1[3];
    uStack_310 = param_1[2];
    uStack_2f8 = param_1[5];
    uStack_300 = param_1[4];
    func_0x000101593ed8(&uStack_130,&uStack_d0,0x112db6390,&UNK_10d961e58);
    func_0x000101593ed8(&uStack_190,&uStack_d0,0x112db6390,&UNK_10d961e58);
    FUN_10159f8ac(&uStack_310,0x112db6390,&UNK_10d961e58);
LAB_101592c34:
    uVar8 = param_1[0xf];
    uVar6 = param_1[0xe];
    lVar4 = param_1[0x10];
    uVar9 = param_2[0xf];
    uVar7 = param_2[0xe];
    lVar5 = param_2[0x10];
    uStack_370 = uVar7;
    uStack_368 = uVar9;
    lStack_360 = lVar5;
    uStack_250 = uVar6;
    uStack_248 = uVar8;
    lStack_240 = lVar4;
    if (lVar4 == 0) {
      if (lVar5 != 0) goto LAB_101592ce8;
      func_0x000101593ed8(&uStack_250,auStack_3d0,0x112db63a0,&UNK_10d961e68);
      func_0x000101593ed8(&uStack_370,auStack_3d0,0x112db63a0,&UNK_10d961e68);
      FUN_10159f76c(uVar6,uVar8,0);
    }
    else {
      if (lVar5 == 0) {
LAB_101592ce8:
        func_0x000101593ed8(&uStack_250,auStack_3d0,0x112db63a0,&UNK_10d961e68);
        func_0x000101593ed8(&uStack_370,auStack_3d0,0x112db63a0,&UNK_10d961e68);
        FUN_10159f76c(uVar6,uVar8,lVar4);
        FUN_10159f76c(uVar7,uVar9,lVar5);
        goto LAB_101592d40;
      }
      func_0x000101593ed8(&uStack_250,auStack_3d0,0x112db63a0,&UNK_10d961e68);
      func_0x000101593ed8(&uStack_370,auStack_3d0,0x112db63a0,&UNK_10d961e68);
      uVar3 = uVar6;
      FUN_1015a7474(uVar6,uVar8,lVar4,uVar7,uVar9,lVar5);
      FUN_10159f76c(uVar7,uVar9,lVar5);
      FUN_10159f76c(uVar6,uVar8,lVar4);
      if ((uVar3 & 1) == 0) goto LAB_101592d40;
    }
    uVar7 = *param_1;
    FUN_100e25fcc(uVar7,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar7;
    goto LAB_101592d9c;
  }
  uStack_310 = uStack_250;
  uStack_308 = uStack_248;
  uStack_300 = lStack_240;
  uStack_2f8 = uStack_238;
  uStack_2f0 = uStack_230;
  uStack_2e8 = uStack_228;
  uStack_2e0 = uStack_220;
  uStack_2d8 = uStack_218;
  uStack_2d0 = uStack_210;
  uStack_2c8 = uStack_208;
  uStack_2c0 = uStack_200;
  uStack_2b8 = uStack_1f8;
  func_0x000101593ed8(&uStack_130,&uStack_d0,0x112db6390,&UNK_10d961e58);
  func_0x000101593ed8(&uStack_190,&uStack_d0,0x112db6390,&UNK_10d961e58);
  FUN_10159f8ac(&uStack_310,0x112db6398,&UNK_10d961e60);
  uVar1 = 0;
LAB_101592d9c:
  return uVar1 & 1;
}



/* Entry: 101592dc0; end: 1015932bf;  */

uint FUN_101592dc0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar5;
  undefined1 auStack_6e0 [144];
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  ulong uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  ulong uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  ulong uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  ulong uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  ulong uStack_4f8;
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
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  ulong uStack_308;
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
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
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
  ulong uStack_48;
  undefined8 uVar4;
  
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_408 = param_1[3];
  uStack_410 = param_1[2];
  uStack_3f8 = param_1[5];
  uStack_400 = param_1[4];
  uStack_1c8 = param_2[3];
  uStack_1d0 = param_2[2];
  uStack_1b8 = param_2[5];
  uStack_1c0 = param_2[4];
  uStack_1a8 = param_2[7];
  uStack_1b0 = param_2[6];
  uStack_198 = param_2[9];
  uStack_1a0 = param_2[8];
  uStack_3c8 = param_2[3];
  uStack_3d0 = param_2[2];
  uStack_3b8 = param_2[5];
  uStack_3c0 = param_2[4];
  uStack_3e8 = param_1[7];
  uStack_3f0 = param_1[6];
  uStack_3d8 = param_1[9];
  uStack_3e0 = param_1[8];
  uStack_3a8 = param_2[7];
  uStack_3b0 = param_2[6];
  uStack_398 = param_2[9];
  uStack_3a0 = param_2[8];
  if (uStack_3d8 >> 0x3c < 0xf) {
    if (0xe < uStack_398 >> 0x3c) goto LAB_101592eb4;
    uStack_528 = param_2[3];
    uStack_530 = param_2[2];
    uStack_518 = param_2[5];
    uStack_520 = param_2[4];
    uStack_508 = param_2[7];
    uStack_510 = param_2[6];
    uStack_4f8 = param_2[9];
    uStack_500 = param_2[8];
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    uStack_a8 = param_1[5];
    uStack_b0 = param_1[4];
    uStack_98 = param_1[7];
    uStack_a0 = param_1[6];
    uStack_88 = param_1[9];
    uStack_90 = param_1[8];
    uStack_80 = uStack_530;
    uStack_78 = uStack_528;
    uStack_70 = uStack_520;
    uStack_68 = uStack_518;
    uStack_60 = uStack_510;
    uStack_58 = uStack_508;
    uStack_50 = uStack_500;
    uStack_48 = uStack_4f8;
    func_0x000101593ed8(&uStack_190,&uStack_150,0x112db63a8,&UNK_10d961e70);
    func_0x000101593ed8(&uStack_1d0,&uStack_150,0x112db63a8,&UNK_10d961e70);
    puVar3 = &uStack_c0;
    func_0x00010361b87c(puVar3,&uStack_80);
    FUN_10159f8ac(&uStack_530,0x112db63a8,&UNK_10d961e70);
    FUN_10159f8ac(&uStack_410,0x112db63a8,&UNK_10d961e70);
    if (((ulong)puVar3 & 1) != 0) goto LAB_101592fb4;
  }
  else {
    if (0xe < uStack_398 >> 0x3c) {
      uStack_528 = param_1[3];
      uStack_530 = param_1[2];
      uStack_518 = param_1[5];
      uStack_520 = param_1[4];
      uStack_508 = param_1[7];
      uStack_510 = param_1[6];
      uStack_4f8 = param_1[9];
      uStack_500 = param_1[8];
      func_0x000101593ed8(&uStack_190,&uStack_150,0x112db63a8,&UNK_10d961e70);
      func_0x000101593ed8(&uStack_1d0,&uStack_150,0x112db63a8,&UNK_10d961e70);
      FUN_10159f8ac(&uStack_530,0x112db63a8,&UNK_10d961e70);
LAB_101592fb4:
      uStack_3b8 = param_1[0x15];
      uStack_3c0 = param_1[0x14];
      uStack_1f8 = param_1[0x17];
      uStack_200 = param_1[0x16];
      uStack_3a8 = param_1[0x17];
      uStack_3b0 = param_1[0x16];
      uStack_1e8 = param_1[0x19];
      uStack_1f0 = param_1[0x18];
      uStack_398 = param_1[0x19];
      uStack_3a0 = param_1[0x18];
      uStack_1d8 = param_1[0x1b];
      uStack_1e0 = param_1[0x1a];
      uStack_3f8 = param_1[0xd];
      uStack_400 = param_1[0xc];
      uStack_238 = param_1[0xf];
      uStack_240 = param_1[0xe];
      uStack_3e8 = param_1[0xf];
      uStack_3f0 = param_1[0xe];
      uStack_228 = param_1[0x11];
      uStack_230 = param_1[0x10];
      uStack_3d8 = param_1[0x11];
      uStack_3e0 = param_1[0x10];
      uStack_218 = param_1[0x13];
      uStack_220 = param_1[0x12];
      uStack_3c8 = param_1[0x13];
      uStack_3d0 = param_1[0x12];
      uStack_208 = param_1[0x15];
      uStack_210 = param_1[0x14];
      uStack_258 = param_1[0xb];
      uStack_260 = param_1[10];
      uStack_248 = param_1[0xd];
      uStack_250 = param_1[0xc];
      uStack_408 = param_1[0xb];
      uStack_410 = param_1[10];
      uStack_328 = param_2[0x15];
      uStack_330 = param_2[0x14];
      uStack_288 = param_2[0x17];
      uStack_290 = param_2[0x16];
      uStack_318 = param_2[0x17];
      uStack_320 = param_2[0x16];
      uStack_278 = param_2[0x19];
      uStack_280 = param_2[0x18];
      uStack_308 = param_2[0x19];
      uStack_310 = param_2[0x18];
      uStack_268 = param_2[0x1b];
      uStack_270 = param_2[0x1a];
      uStack_368 = param_2[0xd];
      uStack_370 = param_2[0xc];
      uStack_2c8 = param_2[0xf];
      uStack_2d0 = param_2[0xe];
      uStack_358 = param_2[0xf];
      uStack_360 = param_2[0xe];
      uStack_2b8 = param_2[0x11];
      uStack_2c0 = param_2[0x10];
      uStack_348 = param_2[0x11];
      uStack_350 = param_2[0x10];
      uStack_2a8 = param_2[0x13];
      uStack_2b0 = param_2[0x12];
      uStack_338 = param_2[0x13];
      uStack_340 = param_2[0x12];
      uStack_298 = param_2[0x15];
      uStack_2a0 = param_2[0x14];
      uStack_2e8 = param_2[0xb];
      uStack_2f0 = param_2[10];
      uStack_2d8 = param_2[0xd];
      uStack_2e0 = param_2[0xc];
      uStack_378 = param_2[0xb];
      uStack_380 = param_2[10];
      uStack_2f8 = param_2[0x1b];
      uStack_300 = param_2[0x1a];
      uStack_388 = param_1[0x1b];
      uStack_390 = param_1[0x1a];
      iVar1 = (int)&uStack_410;
      func_0x000100cb5db0();
      if (iVar1 == 1) {
        iVar1 = (int)&uStack_380;
        func_0x000100cb5db0();
        if (iVar1 != 1) {
LAB_10159313c:
          func_0x000107c610b4(&uStack_530,&uStack_410,0x120);
          func_0x000101593ed8(&uStack_260,&uStack_150,0x112db63b8,&UNK_10d961e80);
          func_0x000101593ed8(&uStack_2f0,&uStack_150,0x112db63b8,&UNK_10d961e80);
          uVar4 = 0x112db63c0;
          puVar5 = &UNK_10d961e88;
          goto LAB_101593194;
        }
        uStack_4c8 = uStack_3a8;
        uStack_4d0 = uStack_3b0;
        uStack_4b8 = uStack_398;
        uStack_4c0 = uStack_3a0;
        uStack_4a8 = uStack_388;
        uStack_4b0 = uStack_390;
        uStack_508 = uStack_3e8;
        uStack_510 = uStack_3f0;
        uStack_4f8 = uStack_3d8;
        uStack_500 = uStack_3e0;
        uStack_4e8 = uStack_3c8;
        uStack_4f0 = uStack_3d0;
        uStack_4d8 = uStack_3b8;
        uStack_4e0 = uStack_3c0;
        uStack_528 = uStack_408;
        uStack_530 = uStack_410;
        uStack_518 = uStack_3f8;
        uStack_520 = uStack_400;
        func_0x000101593ed8(&uStack_260,&uStack_150,0x112db63b8,&UNK_10d961e80);
        func_0x000101593ed8(&uStack_2f0,&uStack_150,0x112db63b8,&UNK_10d961e80);
        FUN_10159f8ac(&uStack_530,0x112db63b8,&UNK_10d961e80);
      }
      else {
        uStack_558 = uStack_3a8;
        uStack_560 = uStack_3b0;
        uStack_548 = uStack_398;
        uStack_550 = uStack_3a0;
        uStack_538 = uStack_388;
        uStack_540 = uStack_390;
        uStack_598 = uStack_3e8;
        uStack_5a0 = uStack_3f0;
        uStack_588 = uStack_3d8;
        uStack_590 = uStack_3e0;
        uStack_578 = uStack_3c8;
        uStack_580 = uStack_3d0;
        uStack_568 = uStack_3b8;
        uStack_570 = uStack_3c0;
        uStack_5b8 = uStack_408;
        uStack_5c0 = uStack_410;
        uStack_5a8 = uStack_3f8;
        uStack_5b0 = uStack_400;
        iVar1 = (int)&uStack_380;
        func_0x000100cb5db0();
        if (iVar1 == 1) goto LAB_10159313c;
        uStack_5e8 = uStack_318;
        uStack_5f0 = uStack_320;
        uStack_5d8 = uStack_308;
        uStack_5e0 = uStack_310;
        uStack_5c8 = uStack_2f8;
        uStack_5d0 = uStack_300;
        uStack_628 = uStack_358;
        uStack_630 = uStack_360;
        uStack_618 = uStack_348;
        uStack_620 = uStack_350;
        uStack_608 = uStack_338;
        uStack_610 = uStack_340;
        uStack_5f8 = uStack_328;
        uStack_600 = uStack_330;
        uStack_648 = uStack_378;
        uStack_650 = uStack_380;
        uStack_638 = uStack_368;
        uStack_640 = uStack_370;
        uStack_4c8 = uStack_318;
        uStack_4d0 = uStack_320;
        uStack_4b8 = uStack_308;
        uStack_4c0 = uStack_310;
        uStack_4a8 = uStack_2f8;
        uStack_4b0 = uStack_300;
        uStack_508 = uStack_358;
        uStack_510 = uStack_360;
        uStack_4f8 = uStack_348;
        uStack_500 = uStack_350;
        uStack_4e8 = uStack_338;
        uStack_4f0 = uStack_340;
        uStack_4d8 = uStack_328;
        uStack_4e0 = uStack_330;
        uStack_528 = uStack_378;
        uStack_530 = uStack_380;
        uStack_518 = uStack_368;
        uStack_520 = uStack_370;
        uStack_e8 = uStack_558;
        uStack_f0 = uStack_560;
        uStack_d8 = uStack_548;
        uStack_e0 = uStack_550;
        uStack_c8 = uStack_538;
        uStack_d0 = uStack_540;
        uStack_128 = uStack_598;
        uStack_130 = uStack_5a0;
        uStack_118 = uStack_588;
        uStack_120 = uStack_590;
        uStack_f8 = uStack_568;
        uStack_100 = uStack_570;
        uStack_108 = uStack_578;
        uStack_110 = uStack_580;
        uStack_138 = uStack_5a8;
        uStack_140 = uStack_5b0;
        uStack_148 = uStack_5b8;
        uStack_150 = uStack_5c0;
        func_0x000101593ed8(&uStack_260,auStack_6e0,0x112db63b8,&UNK_10d961e80);
        func_0x000101593ed8(&uStack_2f0,auStack_6e0,0x112db63b8,&UNK_10d961e80);
        puVar3 = &uStack_150;
        FUN_1015b25d0(puVar3,&uStack_530);
        FUN_10159f8ac(&uStack_650,0x112db63b8,&UNK_10d961e80);
        FUN_10159f8ac(&uStack_410,0x112db63b8,&UNK_10d961e80);
        if (((ulong)puVar3 & 1) == 0) goto LAB_10159319c;
      }
      uVar4 = *param_1;
      FUN_100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar2 = (uint)uVar4;
      goto LAB_1015931a0;
    }
LAB_101592eb4:
    uStack_530 = uStack_410;
    uStack_528 = uStack_408;
    uStack_520 = uStack_400;
    uStack_518 = uStack_3f8;
    uStack_510 = uStack_3f0;
    uStack_508 = uStack_3e8;
    uStack_500 = uStack_3e0;
    uStack_4f8 = uStack_3d8;
    uStack_4f0 = uStack_3d0;
    uStack_4e8 = uStack_3c8;
    uStack_4e0 = uStack_3c0;
    uStack_4d8 = uStack_3b8;
    uStack_4d0 = uStack_3b0;
    uStack_4c8 = uStack_3a8;
    uStack_4c0 = uStack_3a0;
    uStack_4b8 = uStack_398;
    func_0x000101593ed8(&uStack_190,&uStack_150,0x112db63a8,&UNK_10d961e70);
    func_0x000101593ed8(&uStack_1d0,&uStack_150,0x112db63a8,&UNK_10d961e70);
    uVar4 = 0x112db63b0;
    puVar5 = &UNK_10dbe8060;
LAB_101593194:
    FUN_10159f8ac(&uStack_530,uVar4,puVar5);
  }
LAB_10159319c:
  uVar2 = 0;
LAB_1015931a0:
  return uVar2 & 1;
}



/* Entry: 1015932c0; end: 1015939d3;  */

void FUN_1015932c0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_2f0 [640];
  
  func_0x000107c610b4(auStack_2f0,param_1,0x139);
  puVar1 = auStack_2f0;
  func_0x000101590ff8();
                    /* WARNING: Could not recover jumptable at 0x000101593318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10d961cfe + ((ulong)puVar1 & 0xffffffff) * 2) * 4 + 0x10159331c
            ))();
  return;
}



/* Entry: 1015939d4; end: 101593a83;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015939d4(ulong *param_1,undefined8 *param_2)

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
  
  uVar13 = *param_1;
  FUN_10158f364(uVar13,*param_2);
  if (((uVar13 & 1) != 0) && (*(float *)(param_1 + 1) == *(float *)(param_2 + 1))) {
    uVar13 = param_1[2];
    uVar20 = param_2[2];
    if (*(char *)(param_2 + 3) == '\x01') {
      if ((long)uVar20 < 2) {
        if (uVar20 == 0) {
          if (uVar13 == 0) {
LAB_101593a44:
            pbVar10 = (byte *)param_1[4];
            pbVar25 = (byte *)param_1[5];
            lVar24 = param_2[4];
            uVar13 = param_2[5];
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
              uVar4 = (uint)((ulong)pbVar25 >> 0x20);
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar13 >> 0x20);
              uVar21 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar14 = pbVar25;
              if ((ulong)pbVar25 >> 0x3e == 3) {
                uVar20 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                    (uVar13 >> 0x3e < 3)) ||
                   ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
                goto joined_r0x000100e26170;
LAB_100e26128:
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
                if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
                if (uVar21 == 0) {
                  uVar22 = uVar13 >> 0x30 & 0xff;
                  goto LAB_100e2608c;
                }
                iVar19 = (int)((ulong)lVar24 >> 0x20);
                if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                  (*pcVar6)();
                }
                if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
                if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
                if (uVar21 == 2) {
                  uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
                  if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                    (*pcVar6)();
                  }
LAB_100e2608c:
                  if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
                  if ((long)uVar20 < 1) goto LAB_100e26128;
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
                      puVar7[-0x68] = (char)pbVar25;
                      puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                      puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                      puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                      puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                      puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                      pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
                      unaff_x21 = 0;
                      FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                      pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                      goto LAB_100e262b0;
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
                        goto LAB_100e262a4;
                      }
                    }
                    pbVar14 = (byte *)0x0;
                  }
                  else {
                    if (uVar18 != 2) {
                      *(undefined8 *)(puVar7 + -0x6a) = 0;
                      *(undefined8 *)(puVar7 + -0x70) = 0;
                      pbVar14 = puVar7 + -0x70;
                      goto LAB_100e26260;
                    }
                    lVar26 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar14 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
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
                      pbVar14 = (byte *)0x0;
                    }
                    else {
                      if ((long)unaff_x23 <= (long)pbVar14) {
                        pbVar14 = unaff_x23;
                      }
                      pbVar14 = pbVar14 + (long)pbVar10;
                    }
                  }
LAB_100e262a4:
                  unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar13;
                }
                else {
                  pbVar9 = (byte *)(ulong)(uVar20 == 0);
                }
              }
LAB_100e262b0:
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
              *(code **)(puVar7 + -0x88) = FUN_100e26304;
              pbVar12 = *(byte **)pbVar9;
              pbVar10 = *(byte **)(pbVar9 + 8);
              pbVar23 = *(byte **)(pbVar9 + 0x18);
              bVar27 = pbVar9[0x28];
              pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar15 = pbVar10;
              if (bVar27 < 3) {
                if (bVar27 == 0) {
                  if (pbVar14[0x28] == 0) {
                    lVar24 = *(long *)pbVar14;
                    uVar11 = 0;
                    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar24,uVar11);
                    return (byte *)(ulong)((uint)pbVar12 & 1);
                  }
                  return (byte *)0x0;
                }
                if (bVar27 == 1) {
                  if (pbVar14[0x28] != 1) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)(pbVar14 + 8);
                  pbVar17 = *(byte **)(pbVar14 + 0x10);
                  lVar24 = *(long *)pbVar14;
                  uVar11 = 0;
                  FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar24,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar15 = pbVar25;
                  if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar14[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  lVar24 = *(long *)(pbVar14 + 0x18);
                  if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
                    if (lVar24 == 0) {
                      return (byte *)0x0;
                    }
                    FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar24);
                    func_0x000107c61174();
                    pbVar10 = pbVar23;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar23);
                    func_0x000107c61170(lVar24);
                    pbVar23 = pbVar10;
joined_r0x000100e266a4:
                    if (((ulong)pbVar23 & 1) == 0) {
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
                )(pbVar12,pbVar15,pbVar16,pbVar17,0);
                return pbVar12;
              }
              lVar26 = *(long *)(pbVar9 + 0x20);
              if (bVar27 < 5) {
                if (bVar27 != 3) {
                  if (pbVar14[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
                     pbVar17 = *(byte **)(pbVar14 + 0x18),
                     pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))
                     ) {
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
                lVar24 = *(long *)(pbVar14 + 0x20);
                if (pbVar25 == (byte *)0x0) {
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
                  pbVar15 = pbVar25;
                  if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
                }
                if (lVar26 != 0) {
                  if (lVar24 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar24 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if (bVar27 != 5) {
                if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar26 == 0) && pbVar25 == (byte *)0x0) {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar26 = *(long *)(pbVar14 + 0x20);
                  lVar24 = *(long *)(pbVar14 + 0x18);
                  bVar27 = pbVar14[8] | (byte)lVar24;
                  bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
                  bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
                  bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
                  bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
                  bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
                  bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
                  bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
                  bVar35 = pbVar14[0x10] | (byte)lVar26;
                  bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
                  bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
                  bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
                  bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
                  bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
                  bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
                  bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                            CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                      *(long *)pbVar14 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0)
                    && lVar26 == 0)) {
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
                lVar26 = *(long *)(pbVar14 + 0x20);
                lVar24 = *(long *)(pbVar14 + 0x18);
                bVar27 = pbVar14[8] | (byte)lVar24;
                bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
                bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
                bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
                bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
                bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
                bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
                bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
                bVar35 = pbVar14[0x10] | (byte)lVar26;
                bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
                bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
                bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
                bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
                bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
                bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
                bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar14[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar24 = *(long *)(pbVar14 + 8);
              uVar13 = *(ulong *)(pbVar14 + 0x10);
              lVar26 = *(long *)pbVar14;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar26,uVar11);
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
        else if (uVar13 == 1) goto LAB_101593a44;
      }
      else if (uVar20 == 2) {
        if (uVar13 == 2) goto LAB_101593a44;
      }
      else if (uVar13 == 3) goto LAB_101593a44;
    }
    else if (uVar13 == uVar20) goto LAB_101593a44;
  }
  return (byte *)0x0;
}



/* Entry: 101593a84; end: 101593b47;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101593b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101593b28) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101593a84(long param_1,byte *param_2,byte *param_3,long param_4,long param_5,
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
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar21;
  byte *unaff_x23;
  long lVar22;
  byte *unaff_x24;
  undefined8 *puVar23;
  byte *unaff_x25;
  undefined8 *puVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 != *(long *)(param_4 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar22 != 0 && param_1 != param_4) {
    puVar23 = (undefined8 *)(param_4 + 0x28);
    puVar24 = (undefined8 *)(param_1 + 0x28);
    do {
      pbVar10 = (byte *)puVar24[-1];
      pbVar12 = (byte *)*puVar24;
      pbVar13 = (byte *)puVar23[-1];
      pbVar14 = (byte *)*puVar23;
      if ((byte *)puVar24[-1] != (byte *)puVar23[-1] || (byte *)*puVar24 != (byte *)*puVar23)
      goto code_r0x000107c605b8;
      puVar23 = puVar23 + 2;
      puVar24 = puVar24 + 2;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
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
    uVar4 = (uint)((ulong)param_3 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_6 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_2;
    pbVar11 = param_3;
    if ((ulong)param_3 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_2 != (byte *)0x0) || (param_3 != (byte *)0xc000000000000000)) ||
          (param_6 >> 0x3e < 3)) || ((uVar17 = 0, param_5 != 0 || (param_6 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_2 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar18 == 0) {
        uVar19 = param_6 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar16 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar16,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_5)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
        if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar17 < 1) goto LAB_100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_2 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_2 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_2 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_3;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_3 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_3 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_3 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_3 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_3 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_3 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_2 >> 0x20) - (long)unaff_x25);
          if ((long)param_2 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_3;
          if (param_2 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_2 = (byte *)0x0;
          }
          else {
            pbVar11 = param_2;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_2 = param_2 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_2;
            if (param_2 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_2;
              goto LAB_100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar22 = *(long *)(param_2 + 0x10);
          unaff_x24 = *(byte **)(param_2 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_2;
          if (param_2 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_2 = param_2 + (lVar22 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_2;
          unaff_x25 = param_3;
          if (param_2 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_2;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)param_3 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_2,pbVar11,param_5,
                      param_6);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_6;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_2 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar25 = pbVar8[0x28];
    param_3 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_2;
    if (bVar25 < 3) {
      if (bVar25 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar22 = *(long *)pbVar11;
          uVar9 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar22,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar25 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar22 = *(long *)pbVar11;
        uVar9 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar22,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_2;
        pbVar12 = param_3;
        if ((param_2 == pbVar13) && (param_3 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar22 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_2 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 != (byte *)0x0) {
            if (lVar22 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar22);
            func_0x000107c61174();
            pbVar10 = pbVar20;
            func_0x000107c60118();
            func_0x000107c61170(pbVar20);
            func_0x000107c61170(lVar22);
            pbVar20 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar22 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar21 = *(long *)(pbVar8 + 0x20);
    if (bVar25 < 5) {
      if (bVar25 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_2 == pbVar14)) &&
           (pbVar10 = param_3, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_3 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
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
      lVar22 = *(long *)(pbVar11 + 0x20);
      if (param_3 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_2;
        pbVar12 = param_3;
        if ((param_2 != pbVar13) || (param_3 != pbVar14)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar10,pbVar12,pbVar13,pbVar14,0);
          return pbVar10;
        }
      }
      if (lVar21 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar21 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar21,*(byte **)(pbVar11 + 0x18),lVar22,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar20 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar25 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_2 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar21 == 0) && param_3 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar21 = *(long *)(pbVar11 + 0x20);
        lVar22 = *(long *)(pbVar11 + 0x18);
        bVar25 = pbVar11[8] | (byte)lVar22;
        bVar26 = pbVar11[9] | (byte)((ulong)lVar22 >> 8);
        bVar27 = pbVar11[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar28 = pbVar11[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar29 = pbVar11[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar30 = pbVar11[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar31 = pbVar11[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar32 = pbVar11[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar33 = pbVar11[0x10] | (byte)lVar21;
        bVar34 = pbVar11[0x11] | (byte)((ulong)lVar21 >> 8);
        bVar35 = pbVar11[0x12] | (byte)((ulong)lVar21 >> 0x10);
        bVar36 = pbVar11[0x13] | (byte)((ulong)lVar21 >> 0x18);
        bVar37 = pbVar11[0x14] | (byte)((ulong)lVar21 >> 0x20);
        bVar38 = pbVar11[0x15] | (byte)((ulong)lVar21 >> 0x28);
        bVar39 = pbVar11[0x16] | (byte)((ulong)lVar21 >> 0x30);
        bVar40 = pbVar11[0x17] | (byte)((ulong)lVar21 >> 0x38);
        auVar41[1] = bVar26;
        auVar41[0] = bVar25;
        auVar41[2] = bVar27;
        auVar41[3] = bVar28;
        auVar41[4] = bVar29;
        auVar41[5] = bVar30;
        auVar41[6] = bVar31;
        auVar41[7] = bVar32;
        auVar41[8] = bVar33;
        auVar41[9] = bVar34;
        auVar41[10] = bVar35;
        auVar41[0xb] = bVar36;
        auVar41[0xc] = bVar37;
        auVar41[0xd] = bVar38;
        auVar41[0xe] = bVar39;
        auVar41[0xf] = bVar40;
        auVar3[1] = bVar26;
        auVar3[0] = bVar25;
        auVar3[2] = bVar27;
        auVar3[3] = bVar28;
        auVar3[4] = bVar29;
        auVar3[5] = bVar30;
        auVar3[6] = bVar31;
        auVar3[7] = bVar32;
        auVar3[8] = bVar33;
        auVar3[9] = bVar34;
        auVar3[10] = bVar35;
        auVar3[0xb] = bVar36;
        auVar3[0xc] = bVar37;
        auVar3[0xd] = bVar38;
        auVar3[0xe] = bVar39;
        auVar3[0xf] = bVar40;
        auVar41 = NEON_ext(auVar41,auVar3,8,1);
        if (CONCAT17(bVar32 | auVar41[7],
                     CONCAT16(bVar31 | auVar41[6],
                              CONCAT15(bVar30 | auVar41[5],
                                       CONCAT14(bVar29 | auVar41[4],
                                                CONCAT13(bVar28 | auVar41[3],
                                                         CONCAT12(bVar27 | auVar41[2],
                                                                  CONCAT11(bVar26 | auVar41[1],
                                                                           bVar25 | auVar41[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_2 == (byte *)0x0) && param_3 == (byte *)0x0) &&
          lVar21 == 0)) {
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
      lVar21 = *(long *)(pbVar11 + 0x20);
      lVar22 = *(long *)(pbVar11 + 0x18);
      bVar25 = pbVar11[8] | (byte)lVar22;
      bVar26 = pbVar11[9] | (byte)((ulong)lVar22 >> 8);
      bVar27 = pbVar11[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar28 = pbVar11[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar29 = pbVar11[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar30 = pbVar11[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar31 = pbVar11[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar32 = pbVar11[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar33 = pbVar11[0x10] | (byte)lVar21;
      bVar34 = pbVar11[0x11] | (byte)((ulong)lVar21 >> 8);
      bVar35 = pbVar11[0x12] | (byte)((ulong)lVar21 >> 0x10);
      bVar36 = pbVar11[0x13] | (byte)((ulong)lVar21 >> 0x18);
      bVar37 = pbVar11[0x14] | (byte)((ulong)lVar21 >> 0x20);
      bVar38 = pbVar11[0x15] | (byte)((ulong)lVar21 >> 0x28);
      bVar39 = pbVar11[0x16] | (byte)((ulong)lVar21 >> 0x30);
      bVar40 = pbVar11[0x17] | (byte)((ulong)lVar21 >> 0x38);
      auVar1[1] = bVar26;
      auVar1[0] = bVar25;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33;
      auVar1[9] = bVar34;
      auVar1[10] = bVar35;
      auVar1[0xb] = bVar36;
      auVar1[0xc] = bVar37;
      auVar1[0xd] = bVar38;
      auVar1[0xe] = bVar39;
      auVar1[0xf] = bVar40;
      auVar2[1] = bVar26;
      auVar2[0] = bVar25;
      auVar2[2] = bVar27;
      auVar2[3] = bVar28;
      auVar2[4] = bVar29;
      auVar2[5] = bVar30;
      auVar2[6] = bVar31;
      auVar2[7] = bVar32;
      auVar2[8] = bVar33;
      auVar2[9] = bVar34;
      auVar2[10] = bVar35;
      auVar2[0xb] = bVar36;
      auVar2[0xc] = bVar37;
      auVar2[0xd] = bVar38;
      auVar2[0xe] = bVar39;
      auVar2[0xf] = bVar40;
      auVar41 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar32 | auVar41[7],
                        CONCAT16(bVar31 | auVar41[6],
                                 CONCAT15(bVar30 | auVar41[5],
                                          CONCAT14(bVar29 | auVar41[4],
                                                   CONCAT13(bVar28 | auVar41[3],
                                                            CONCAT12(bVar27 | auVar41[2],
                                                                     CONCAT11(bVar26 | auVar41[1],
                                                                              bVar25 | auVar41[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_5 = *(long *)(pbVar11 + 8);
    param_6 = *(ulong *)(pbVar11 + 0x10);
    lVar22 = *(long *)pbVar11;
    uVar9 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar22,uVar9);
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



/* Entry: 101593b48; end: 101593c0f;  */

undefined8 FUN_101593b48(undefined8 param_1)

{
  FUN_101599084(param_1,&UNK_1103e0a08);
  return param_1;
}



/* Entry: 101593c10; end: 101593c1b;  */

void FUN_101593c10(void)

{
  return;
}



/* Entry: 101593c1c; end: 101593c6f;  */

/* WARNING: Possible PIC construction at 0x000101593c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101593c54) */
/* WARNING: Removing unreachable block (ram,0x000100cb5b9c) */
/* WARNING: Removing unreachable block (ram,0x000100cb5bac) */
/* WARNING: Removing unreachable block (ram,0x000100cb5ba8) */

void FUN_101593c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101593c70; end: 101593cfb;  */

undefined8 FUN_101593c70(undefined8 param_1)

{
  FUN_10159b02c(param_1,&UNK_1103e1460);
  return param_1;
}



/* Entry: 101593cfc; end: 101593d0f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101593cfc(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  
  if (((param_6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  uVar1 = (uint)(param_6 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6142c(param_4);
    param_4 = param_6 & 0xcfffffffffffffff;
    param_3 = param_5;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101593d10; end: 101593e4f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101593d10(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  
  uVar1 = (uint)(param_6 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6142c(param_4);
    param_4 = param_6 & 0xcfffffffffffffff;
    param_3 = param_5;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101593e50; end: 101593e77;  */

int FUN_101593e50(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101593e78; end: 101593f53;  */

undefined8 FUN_101593e78(undefined8 param_1)

{
  FUN_1015bda60();
  return param_1;
}



/* Entry: 101593f54; end: 101594893;  */

void FUN_101593f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db63d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962a50;
  func_0x000107c61520(&UNK_10d962a50,&UNK_1103e0630);
  puRam0000000112db63d0 = puVar1;
  return;
}



/* Entry: 101594894; end: 1015948a7;  */

void FUN_101594894(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015948a8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015948e8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015948a8; end: 101594953;  */

void FUN_1015948a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db66d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d961f50;
  func_0x000107c61520(&UNK_10d961f50,&UNK_1103e0758);
  puRam0000000112db66d0 = puVar1;
  return;
}



/* Entry: 101594954; end: 101594957;  */

void FUN_101594954(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db66f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d961f90;
  func_0x000107c61520(&UNK_10d961f90,&UNK_1103e0758);
  puRam0000000112db66f0 = puVar1;
  return;
}



/* Entry: 101594958; end: 101594997;  */

void FUN_101594958(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db66f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d961f90;
  func_0x000107c61520(&UNK_10d961f90,&UNK_1103e0758);
  puRam0000000112db66f0 = puVar1;
  return;
}



/* Entry: 101594998; end: 1015949ab;  */

void FUN_101594998(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015949ac();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015949ec)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015949ac; end: 101594a57;  */

void FUN_1015949ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db66f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962050;
  func_0x000107c61520(&UNK_10d962050,&UNK_1103e0900);
  puRam0000000112db66f8 = puVar1;
  return;
}



/* Entry: 101594a58; end: 101594a5b;  */

void FUN_101594a58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962090;
  func_0x000107c61520(&UNK_10d962090,&UNK_1103e0900);
  puRam0000000112db6718 = puVar1;
  return;
}



/* Entry: 101594a5c; end: 101594a9b;  */

void FUN_101594a5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962090;
  func_0x000107c61520(&UNK_10d962090,&UNK_1103e0900);
  puRam0000000112db6718 = puVar1;
  return;
}



/* Entry: 101594a9c; end: 101594aaf;  */

void FUN_101594a9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101594ab0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101594af0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101594ab0; end: 101594b5b;  */

void FUN_101594ab0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962150;
  func_0x000107c61520(&UNK_10d962150,&UNK_1103e0b30);
  puRam0000000112db6720 = puVar1;
  return;
}



/* Entry: 101594b5c; end: 101594b5f;  */

void FUN_101594b5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962190;
  func_0x000107c61520(&UNK_10d962190,&UNK_1103e0b30);
  puRam0000000112db6740 = puVar1;
  return;
}



/* Entry: 101594b60; end: 101594b9f;  */

void FUN_101594b60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962190;
  func_0x000107c61520(&UNK_10d962190,&UNK_1103e0b30);
  puRam0000000112db6740 = puVar1;
  return;
}



/* Entry: 101594ba0; end: 101594bb3;  */

void FUN_101594ba0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101594bb4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101594bf4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101594bb4; end: 101594c5f;  */

void FUN_101594bb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962250;
  func_0x000107c61520(&UNK_10d962250,&UNK_1103e0e68);
  puRam0000000112db6748 = puVar1;
  return;
}



/* Entry: 101594c60; end: 101594c63;  */

void FUN_101594c60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962290;
  func_0x000107c61520(&UNK_10d962290,&UNK_1103e0e68);
  puRam0000000112db6768 = puVar1;
  return;
}



/* Entry: 101594c64; end: 101594ca3;  */

void FUN_101594c64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962290;
  func_0x000107c61520(&UNK_10d962290,&UNK_1103e0e68);
  puRam0000000112db6768 = puVar1;
  return;
}



/* Entry: 101594ca4; end: 101594cb7;  */

void FUN_101594ca4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101594cb8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101594cf8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101594cb8; end: 101594d63;  */

void FUN_101594cb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962350;
  func_0x000107c61520(&UNK_10d962350,&UNK_1103e0ef8);
  puRam0000000112db6770 = puVar1;
  return;
}



/* Entry: 101594d64; end: 101594d67;  */

void FUN_101594d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962390;
  func_0x000107c61520(&UNK_10d962390,&UNK_1103e0ef8);
  puRam0000000112db6790 = puVar1;
  return;
}



/* Entry: 101594d68; end: 101594da7;  */

void FUN_101594d68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962390;
  func_0x000107c61520(&UNK_10d962390,&UNK_1103e0ef8);
  puRam0000000112db6790 = puVar1;
  return;
}



/* Entry: 101594da8; end: 101594dbb;  */

void FUN_101594da8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101594dbc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101594dfc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101594dbc; end: 101594e67;  */

void FUN_101594dbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962450;
  func_0x000107c61520(&UNK_10d962450,&UNK_1103e0f88);
  puRam0000000112db6798 = puVar1;
  return;
}



/* Entry: 101594e68; end: 101594e6b;  */

void FUN_101594e68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db67b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962490;
  func_0x000107c61520(&UNK_10d962490,&UNK_1103e0f88);
  puRam0000000112db67b8 = puVar1;
  return;
}



/* Entry: 101594e6c; end: 101594eab;  */

void FUN_101594e6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db67b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962490;
  func_0x000107c61520(&UNK_10d962490,&UNK_1103e0f88);
  puRam0000000112db67b8 = puVar1;
  return;
}



/* Entry: 101594eac; end: 101594ebf;  */

void FUN_101594eac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101594ec0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101594f00)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101594ec0; end: 101594f6b;  */

void FUN_101594ec0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db67c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962550;
  func_0x000107c61520(&UNK_10d962550,&UNK_1103e10a8);
  puRam0000000112db67c0 = puVar1;
  return;
}



/* Entry: 101594f6c; end: 101594f6f;  */

void FUN_101594f6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db67e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962590;
  func_0x000107c61520(&UNK_10d962590,&UNK_1103e10a8);
  puRam0000000112db67e0 = puVar1;
  return;
}



/* Entry: 101594f70; end: 101594faf;  */

void FUN_101594f70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db67e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962590;
  func_0x000107c61520(&UNK_10d962590,&UNK_1103e10a8);
  puRam0000000112db67e0 = puVar1;
  return;
}



/* Entry: 101594fb0; end: 101594fc3;  */

void FUN_101594fb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101594fc4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101595004)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101594fc4; end: 10159506f;  */

void FUN_101594fc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db67e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962650;
  func_0x000107c61520(&UNK_10d962650,&UNK_1103e1138);
  puRam0000000112db67e8 = puVar1;
  return;
}



/* Entry: 101595070; end: 101595073;  */

void FUN_101595070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962690;
  func_0x000107c61520(&UNK_10d962690,&UNK_1103e1138);
  puRam0000000112db6808 = puVar1;
  return;
}



/* Entry: 101595074; end: 1015950b3;  */

void FUN_101595074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962690;
  func_0x000107c61520(&UNK_10d962690,&UNK_1103e1138);
  puRam0000000112db6808 = puVar1;
  return;
}



/* Entry: 1015950b4; end: 1015950c7;  */

void FUN_1015950b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015950c8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101595108)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015950c8; end: 101595173;  */

void FUN_1015950c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962750;
  func_0x000107c61520(&UNK_10d962750,&UNK_1103e1250);
  puRam0000000112db6810 = puVar1;
  return;
}



/* Entry: 101595174; end: 101595177;  */

void FUN_101595174(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962790;
  func_0x000107c61520(&UNK_10d962790,&UNK_1103e1250);
  puRam0000000112db6830 = puVar1;
  return;
}



/* Entry: 101595178; end: 1015951b7;  */

void FUN_101595178(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d962790;
  func_0x000107c61520(&UNK_10d962790,&UNK_1103e1250);
  puRam0000000112db6830 = puVar1;
  return;
}



/* Entry: 1015951b8; end: 1015951cb;  */

void FUN_1015951b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015951cc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10159520c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


