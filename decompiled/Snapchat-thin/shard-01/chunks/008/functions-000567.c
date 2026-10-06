/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10158c1e4; end: 10158c22b;  */

void FUN_10158c1e4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9642b0,0x4d,2);
  uRam00000001138002e0 = uStack_38;
  uRam00000001138002d8 = uStack_40;
  uRam00000001138002f0 = uStack_28;
  uRam00000001138002e8 = uStack_30;
  uRam0000000113800300 = uStack_18;
  uRam00000001138002f8 = uStack_20;
  return;
}



/* Entry: 10158c22c; end: 10158c38b;  */

/* WARNING: Removing unreachable block (ram,0x00010158c34c) */

void FUN_10158c22c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_110734b68;
          goto LAB_10158c2b8;
        }
        if (lVar1 == 2) {
          (**(code **)(param_3 + 0x18))();
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x60;
          puVar3 = &UNK_110790980;
        }
        else if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1015965f4();
          lVar2 = unaff_x20 + 0x78;
          puVar3 = &UNK_1103e1710;
        }
        else {
          if (lVar1 != 5) goto LAB_10158c2cc;
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000101594654();
          lVar2 = unaff_x20 + 8;
          puVar3 = &UNK_110672748;
        }
LAB_10158c2b8:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10158c2cc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10158c38c; end: 10158c493;  */

void FUN_10158c38c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  FUN_10158c494();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 8))(2,param_2,param_3);
    }
    FUN_10158c530();
    piVar1 = unaff_x20;
    FUN_10158c5b8();
    if (*(long *)(unaff_x20 + 2) != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *(long *)(unaff_x20 + 2);
      func_0x000101594654();
      (*pcVar2)(&lStack_50,5,&UNK_110672748,piVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10158c494; end: 10158c52f;  */

void FUN_10158c494(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x40);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,1,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158c530; end: 10158c5b7;  */

void FUN_10158c530(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158c5b8; end: 10158c657;  */

void FUN_10158c5b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_80 = *(ulong *)(param_1 + 0x88);
  if (uStack_80 >> 0x3c < 0xf) {
    uStack_88 = *(undefined8 *)(param_1 + 0x80);
    uStack_90 = *(undefined8 *)(param_1 + 0x78);
    uStack_70 = *(undefined8 *)(param_1 + 0x98);
    uStack_78 = *(undefined8 *)(param_1 + 0x90);
    uStack_60 = *(undefined8 *)(param_1 + 0xa8);
    uStack_68 = *(undefined8 *)(param_1 + 0xa0);
    uStack_50 = *(undefined8 *)(param_1 + 0xb8);
    uStack_58 = *(undefined8 *)(param_1 + 0xb0);
    uStack_48 = *(undefined8 *)(param_1 + 0xc0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015965f4();
    (*pcVar1)(&uStack_90,4,&UNK_1103e1710,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158c658; end: 10158c6cf;  */

void FUN_10158c658(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 8) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xf000000000000000;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0xf000000000000000;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0xf000000000000000;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10158c6d0; end: 10158c6ff;  */

undefined1  [16] FUN_10158c6d0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10158c700; end: 10158c733;  */

void FUN_10158c700(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10158c734; end: 10158c747;  */

undefined1  [16] FUN_10158c734(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10158c744;
  return auVar1;
}



/* Entry: 10158c748; end: 10158c75b;  */

void FUN_10158c748(void)

{
  FUN_10158c22c();
  return;
}



/* Entry: 10158c75c; end: 10158c7bb;  */

void FUN_10158c75c(void)

{
  FUN_10158c38c();
  return;
}



/* Entry: 10158c7bc; end: 10158c7bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10158c7bc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10158c7c0; end: 10158c7f7;  */

uint FUN_10158c7c0(long param_1,long param_2)

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
  func_0x00010159f074();
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



/* Entry: 10158c7f8; end: 10158c897;  */

uint FUN_10158c7f8(undefined8 *param_1)

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
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
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
  func_0x0001015908f8(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 10158c898; end: 10158c937;  */

/* WARNING: Possible PIC construction at 0x00010158c8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158c8f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158c8e8) */
/* WARNING: Removing unreachable block (ram,0x00010158c8f8) */

void FUN_10158c898(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6610 != -1) {
    func_0x000107c61568(0x112db6610,FUN_10158c1e4);
  }
  uVar5 = uRam0000000113800300;
  uVar4 = uRam00000001138002f8;
  uVar3 = uRam00000001138002f0;
  uVar2 = uRam00000001138002e8;
  uVar1 = uRam00000001138002e0;
  *param_1 = uRam00000001138002d8;
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



/* Entry: 10158c938; end: 10158c973;  */

void FUN_10158c938(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6d28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6d28,&UNK_10d9641b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158c974; end: 10158cacf;  */

void FUN_10158c974(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
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



/* Entry: 10158cad0; end: 10158cb6f;  */

uint FUN_10158cad0(undefined8 *param_1,undefined8 *param_2)

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
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
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
  func_0x0001015908f8(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 10158cb70; end: 10158cc07;  */

void FUN_10158cb70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db6608 != -1) {
    func_0x000107c61568(0x112db6608,FUN_10158c1c4);
  }
  uVar2 = uRam00000001138002d0;
  uVar1 = uRam00000001138002c8;
  func_0x000107c61438(uRam00000001138002d0,2);
  func_0x000107c5fb78(0x726564726f422e,0xe700000000000000);
  func_0x000107c6142c(uVar2);
  uRam0000000113800308 = uVar1;
  uRam0000000113800310 = uVar2;
  return;
}



/* Entry: 10158cc08; end: 10158cc4f;  */

void FUN_10158cc08(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964290,0x16,2);
  uRam0000000113800320 = uStack_38;
  uRam0000000113800318 = uStack_40;
  uRam0000000113800330 = uStack_28;
  uRam0000000113800328 = uStack_30;
  uRam0000000113800340 = uStack_18;
  uRam0000000113800338 = uStack_20;
  return;
}



/* Entry: 10158cc50; end: 10158cd23;  */

/* WARNING: Removing unreachable block (ram,0x00010158cd20) */

void FUN_10158cc50(undefined8 param_1,long param_2,long param_3)

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
        func_0x00010159f674();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_110734b68,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x18))();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10158cd24; end: 10158cda3;  */

void FUN_10158cd24(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  FUN_10158cda4();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 8))(2,param_2,param_3);
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 2),*(undefined8 *)(unaff_x20 + 4),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10158cda4; end: 10158ce3f;  */

void FUN_10158cda4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x30);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,1,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158ce40; end: 10158ce8f;  */

void FUN_10158ce40(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xf000000000000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 10158ce90; end: 10158cebf;  */

undefined1  [16] FUN_10158ce90(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10158cec0; end: 10158cef3;  */

void FUN_10158cec0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10158cef4; end: 10158cf07;  */

undefined1  [16] FUN_10158cef4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10158cf04;
  return auVar1;
}



/* Entry: 10158cf08; end: 10158cf1b;  */

void FUN_10158cf08(void)

{
  FUN_10158cc50();
  return;
}



/* Entry: 10158cf1c; end: 10158cf5b;  */

void FUN_10158cf1c(void)

{
  FUN_10158cd24();
  return;
}



/* Entry: 10158cf5c; end: 10158cf5f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10158cf5c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10158cf60; end: 10158cf97;  */

uint FUN_10158cf60(long param_1,long param_2)

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
  func_0x00010159f034();
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



/* Entry: 10158cf98; end: 10158cfef;  */

uint FUN_10158cf98(undefined8 *param_1)

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
  FUN_10159065c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10158cff0; end: 10158d08f;  */

/* WARNING: Possible PIC construction at 0x00010158d03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158d04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158d040) */
/* WARNING: Removing unreachable block (ram,0x00010158d050) */

void FUN_10158cff0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6630 != -1) {
    func_0x000107c61568(0x112db6630,FUN_10158cc08);
  }
  uVar5 = uRam0000000113800340;
  uVar4 = uRam0000000113800338;
  uVar3 = uRam0000000113800330;
  uVar2 = uRam0000000113800328;
  uVar1 = uRam0000000113800320;
  *param_1 = uRam0000000113800318;
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



/* Entry: 10158d090; end: 10158d0cb;  */

void FUN_10158d090(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6d18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6d18,&UNK_10d9641b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158d0cc; end: 10158d1df;  */

void FUN_10158d0cc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10158d1e0; end: 10158d237;  */

uint FUN_10158d1e0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10159065c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10158d238; end: 10158d263;  */

void FUN_10158d238(void)

{
  func_0x000107c5fb78(0x736572676f72502e,0xec00000072614273);
  uRam0000000113800348 = 0xd000000000000029;
  uRam0000000113800350 = 0x800000010efb2fd0;
  return;
}



/* Entry: 10158d264; end: 10158d2ab;  */

void FUN_10158d264(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964270,0x14,2);
  uRam0000000113800360 = uStack_38;
  uRam0000000113800358 = uStack_40;
  uRam0000000113800370 = uStack_28;
  uRam0000000113800368 = uStack_30;
  uRam0000000113800380 = uStack_18;
  uRam0000000113800378 = uStack_20;
  return;
}



/* Entry: 10158d2ac; end: 10158d32f;  */

void FUN_10158d2ac(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x160))();
    }
  }
  return;
}



/* Entry: 10158d330; end: 10158d3a7;  */

void FUN_10158d330(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) == 0) ||
     ((**(code **)(param_6 + 0x100))(param_2,1,param_5,param_6), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 10158d3a8; end: 10158d3e3;  */

undefined1  [16] FUN_10158d3a8(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db6640 != -1) {
    func_0x000107c61568(0x112db6640,FUN_10158d238);
  }
  auVar1._8_8_ = uRam0000000113800350;
  auVar1._0_8_ = uRam0000000113800348;
  func_0x000107c61434(uRam0000000113800350);
  return auVar1;
}



/* Entry: 10158d3e4; end: 10158d41b;  */

void FUN_10158d3e4(void)

{
  FUN_10158d2ac();
  return;
}



/* Entry: 10158d41c; end: 10158d453;  */

uint FUN_10158d41c(long param_1,long param_2)

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
  func_0x00010159eff4();
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



/* Entry: 10158d454; end: 10158d467;  */

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

byte * FUN_10158d454(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  long *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  long lVar27;
  byte *unaff_x24;
  undefined8 *puVar28;
  byte *unaff_x25;
  undefined8 *puVar29;
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
  
  lVar26 = *param_1;
  lVar25 = param_1[1];
  uVar18 = param_1[2];
  lVar1 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  pbVar16 = (byte *)unaff_x20[2];
  lVar27 = *(long *)(lVar1 + 0x10);
  if (lVar27 != *(long *)(lVar26 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar27 != 0 && lVar1 != lVar26) {
    puVar28 = (undefined8 *)(lVar26 + 0x28);
    puVar29 = (undefined8 *)(lVar1 + 0x28);
    do {
      pbVar12 = (byte *)puVar29[-1];
      pbVar14 = (byte *)*puVar29;
      pbVar15 = (byte *)puVar28[-1];
      pbVar17 = (byte *)*puVar28;
      if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
      goto code_r0x000107c605b8;
      puVar28 = puVar28 + 2;
      puVar29 = puVar29 + 2;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar16 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar18 >> 0x20);
    uVar22 = uVar6 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar16;
    if ((ulong)pbVar16 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar16 != (byte *)0xc000000000000000)) ||
          (uVar18 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar18 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar16 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar18 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar16;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar16 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar16 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar16 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar16 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar16 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar16 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar16;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
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
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar16;
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
        unaff_x20 = (long *)((ulong)pbVar16 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar25,uVar18
                     );
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar18;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(long **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar16 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar25 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
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
        lVar25 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar16;
        if ((pbVar10 == pbVar15) && (pbVar16 == pbVar17)) {
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
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 != (byte *)0x0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar25);
            func_0x000107c61174();
            pbVar10 = pbVar24;
            func_0x000107c60118();
            func_0x000107c61170(pbVar24);
            func_0x000107c61170(lVar25);
            pbVar24 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar16, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar16 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      if (pbVar16 == (byte *)0x0) {
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
        pbVar14 = pbVar16;
        if ((pbVar10 != pbVar15) || (pbVar16 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
      }
      if (lVar26 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar13 + 0x18),lVar25,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar24 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar30 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar16 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar25 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar25;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar26;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
        auVar4[1] = bVar31;
        auVar4[0] = bVar30;
        auVar4[2] = bVar32;
        auVar4[3] = bVar33;
        auVar4[4] = bVar34;
        auVar4[5] = bVar35;
        auVar4[6] = bVar36;
        auVar4[7] = bVar37;
        auVar4[8] = bVar38;
        auVar4[9] = bVar39;
        auVar4[10] = bVar40;
        auVar4[0xb] = bVar41;
        auVar4[0xc] = bVar42;
        auVar4[0xd] = bVar43;
        auVar4[0xe] = bVar44;
        auVar4[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar4,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar16 == (byte *)0x0) &&
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
      lVar25 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar25;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar26;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      auVar46 = NEON_ext(auVar2,auVar3,8,1);
      lVar25 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar13 + 8);
    uVar18 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10158d468; end: 10158d507;  */

/* WARNING: Possible PIC construction at 0x00010158d4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158d4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158d4b8) */
/* WARNING: Removing unreachable block (ram,0x00010158d4c8) */

void FUN_10158d468(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6648 != -1) {
    func_0x000107c61568(0x112db6648,FUN_10158d264);
  }
  uVar5 = uRam0000000113800380;
  uVar4 = uRam0000000113800378;
  uVar3 = uRam0000000113800370;
  uVar2 = uRam0000000113800368;
  uVar1 = uRam0000000113800360;
  *param_1 = uRam0000000113800358;
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



/* Entry: 10158d508; end: 10158d51b;  */

void FUN_10158d508(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6d08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6d08,&UNK_10d9641a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158d51c; end: 10158d54f;  */

void FUN_10158d51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10158d550; end: 10158d653;  */

void FUN_10158d550(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10158d654; end: 10158d69b;  */

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

byte * FUN_10158d654(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  long lVar27;
  byte *unaff_x24;
  undefined8 *puVar28;
  byte *unaff_x25;
  undefined8 *puVar29;
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
  
  lVar26 = *param_1;
  pbVar10 = (byte *)param_1[1];
  pbVar16 = (byte *)param_1[2];
  lVar1 = *param_2;
  lVar25 = param_2[1];
  uVar18 = param_2[2];
  lVar27 = *(long *)(lVar26 + 0x10);
  if (lVar27 != *(long *)(lVar1 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar27 != 0 && lVar26 != lVar1) {
    puVar28 = (undefined8 *)(lVar1 + 0x28);
    puVar29 = (undefined8 *)(lVar26 + 0x28);
    do {
      pbVar12 = (byte *)puVar29[-1];
      pbVar14 = (byte *)*puVar29;
      pbVar15 = (byte *)puVar28[-1];
      pbVar17 = (byte *)*puVar28;
      if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
      goto code_r0x000107c605b8;
      puVar28 = puVar28 + 2;
      puVar29 = puVar29 + 2;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
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
    uVar5 = (uint)((ulong)pbVar16 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar18 >> 0x20);
    uVar22 = uVar6 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar16;
    if ((ulong)pbVar16 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar16 != (byte *)0xc000000000000000)) ||
          (uVar18 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar18 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar16 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar18 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar16;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar16 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar16 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar16 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar16 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar16 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar16 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar16;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
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
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar16;
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
        unaff_x20 = (ulong)pbVar16 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar25,uVar18
                     );
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar18;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar16 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar25 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
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
        lVar25 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar16;
        if ((pbVar10 == pbVar15) && (pbVar16 == pbVar17)) {
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
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 != (byte *)0x0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar25);
            func_0x000107c61174();
            pbVar10 = pbVar24;
            func_0x000107c60118();
            func_0x000107c61170(pbVar24);
            func_0x000107c61170(lVar25);
            pbVar24 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar16, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar16 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      if (pbVar16 == (byte *)0x0) {
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
        pbVar14 = pbVar16;
        if ((pbVar10 != pbVar15) || (pbVar16 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
      }
      if (lVar26 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar13 + 0x18),lVar25,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar24 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar30 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar16 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar25 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar25;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar26;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
        auVar4[1] = bVar31;
        auVar4[0] = bVar30;
        auVar4[2] = bVar32;
        auVar4[3] = bVar33;
        auVar4[4] = bVar34;
        auVar4[5] = bVar35;
        auVar4[6] = bVar36;
        auVar4[7] = bVar37;
        auVar4[8] = bVar38;
        auVar4[9] = bVar39;
        auVar4[10] = bVar40;
        auVar4[0xb] = bVar41;
        auVar4[0xc] = bVar42;
        auVar4[0xd] = bVar43;
        auVar4[0xe] = bVar44;
        auVar4[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar4,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar16 == (byte *)0x0) &&
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
      lVar25 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar25;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar26;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      auVar46 = NEON_ext(auVar2,auVar3,8,1);
      lVar25 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar13 + 8);
    uVar18 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 10158d69c; end: 10158d6e7;  */

void FUN_10158d69c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam00000001138003a0 = uStack_38;
  uRam0000000113800398 = uStack_40;
  uRam00000001138003b0 = uStack_28;
  uRam00000001138003a8 = uStack_30;
  uRam00000001138003c0 = uStack_18;
  uRam00000001138003b8 = uStack_20;
  return;
}



/* Entry: 10158d6e8; end: 10158d723;  */

undefined1  [16] FUN_10158d6e8(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db6658 != -1) {
    func_0x000107c61568(0x112db6658,0x10158d670);
  }
  auVar1._8_8_ = uRam0000000113800390;
  auVar1._0_8_ = uRam0000000113800388;
  func_0x000107c61434(uRam0000000113800390);
  return auVar1;
}



/* Entry: 10158d724; end: 10158d75b;  */

uint FUN_10158d724(long param_1,long param_2)

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
  func_0x00010159efb4();
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



/* Entry: 10158d75c; end: 10158d7fb;  */

/* WARNING: Possible PIC construction at 0x00010158d7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158d7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158d7ac) */
/* WARNING: Removing unreachable block (ram,0x00010158d7bc) */

void FUN_10158d75c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6660 != -1) {
    func_0x000107c61568(0x112db6660,FUN_10158d69c);
  }
  uVar5 = uRam00000001138003c0;
  uVar4 = uRam00000001138003b8;
  uVar3 = uRam00000001138003b0;
  uVar2 = uRam00000001138003a8;
  uVar1 = uRam00000001138003a0;
  *param_1 = uRam0000000113800398;
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



/* Entry: 10158d7fc; end: 10158d80f;  */

void FUN_10158d7fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6cf8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6cf8,&UNK_10d9641a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158d810; end: 10158d847;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10158d810(undefined8 *param_1,undefined8 param_2)

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
  FUN_1015967ec();
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



/* Entry: 10158d848; end: 10158d86b;  */

void FUN_10158d848(void)

{
  func_0x000107c5fb78(0x6e6f63497070412e,0xe800000000000000);
  uRam00000001138003c8 = 0xd000000000000029;
  uRam00000001138003d0 = 0x800000010efb2fd0;
  return;
}



/* Entry: 10158d86c; end: 10158d8a3;  */

void FUN_10158d86c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam00000001138003e0 = uStack_38;
  uRam00000001138003d8 = uStack_40;
  uRam00000001138003f0 = uStack_28;
  uRam00000001138003e8 = uStack_30;
  uRam0000000113800400 = uStack_18;
  uRam00000001138003f8 = uStack_20;
  return;
}



/* Entry: 10158d8a4; end: 10158d8ef;  */

void FUN_10158d8a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 10158d8f0; end: 10158d92b;  */

undefined1  [16] FUN_10158d8f0(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db6670 != -1) {
    func_0x000107c61568(0x112db6670,FUN_10158d848);
  }
  auVar1._8_8_ = uRam00000001138003d0;
  auVar1._0_8_ = uRam00000001138003c8;
  func_0x000107c61434(uRam00000001138003d0);
  return auVar1;
}



/* Entry: 10158d92c; end: 10158d963;  */

uint FUN_10158d92c(long param_1,long param_2)

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
  func_0x00010159ef74();
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



/* Entry: 10158d964; end: 10158da03;  */

/* WARNING: Possible PIC construction at 0x00010158d9b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158d9c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158d9b4) */
/* WARNING: Removing unreachable block (ram,0x00010158d9c4) */

void FUN_10158d964(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6678 != -1) {
    func_0x000107c61568(0x112db6678,FUN_10158d86c);
  }
  uVar5 = uRam0000000113800400;
  uVar4 = uRam00000001138003f8;
  uVar3 = uRam00000001138003f0;
  uVar2 = uRam00000001138003e8;
  uVar1 = uRam00000001138003e0;
  *param_1 = uRam00000001138003d8;
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



/* Entry: 10158da04; end: 10158da17;  */

void FUN_10158da04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6ce8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6ce8,&UNK_10d964198);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158da18; end: 10158da4b;  */

void FUN_10158da18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10158da4c; end: 10158db3f;  */

void FUN_10158da4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10158db40; end: 10158db63;  */

void FUN_10158db40(void)

{
  func_0x000107c5fb78(0x617443647261432e,0xe800000000000000);
  uRam0000000113800408 = 0xd000000000000029;
  uRam0000000113800410 = 0x800000010efb2fd0;
  return;
}



/* Entry: 10158db64; end: 10158dbab;  */

void FUN_10158db64(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964250,0x1c,2);
  uRam0000000113800420 = uStack_38;
  uRam0000000113800418 = uStack_40;
  uRam0000000113800430 = uStack_28;
  uRam0000000113800428 = uStack_30;
  uRam0000000113800440 = uStack_18;
  uRam0000000113800438 = uStack_20;
  return;
}



/* Entry: 10158dbac; end: 10158dc8f;  */

void FUN_10158dbac(undefined8 param_1,long param_2,long param_3)

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
        func_0x00010159f634();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_11066fc48;
LAB_10158dc34:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010159f5f4();
        lVar2 = unaff_x20 + 0x60;
        puVar3 = &UNK_1103e2900;
        goto LAB_10158dc34;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10158dc90; end: 10158dd03;  */

void FUN_10158dc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10158dd04();
  if (unaff_x21 == 0) {
    FUN_10158dd98();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10158dd04; end: 10158dd97;  */

void FUN_10158dd04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
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
  
  uStack_48 = *(ulong *)(param_1 + 0x58);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    uStack_88 = *(undefined8 *)(param_1 + 0x18);
    uStack_90 = *(undefined8 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f634();
    (*pcVar1)(&uStack_90,1,&UNK_11066fc48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158dd98; end: 10158de9b;  */

void FUN_10158dd98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0x108);
  uStack_80 = *(undefined8 *)(param_1 + 0x100);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  uStack_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x128);
  uStack_60 = *(undefined8 *)(param_1 + 0x120);
  uStack_50 = *(undefined8 *)(param_1 + 0x130);
  uStack_b8 = *(undefined8 *)(param_1 + 200);
  uStack_c0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_98 = *(undefined8 *)(param_1 + 0xe8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_88 = *(undefined8 *)(param_1 + 0xf8);
  uStack_90 = *(undefined8 *)(param_1 + 0xf0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x88);
  uStack_100 = *(undefined8 *)(param_1 + 0x80);
  uStack_e8 = *(undefined8 *)(param_1 + 0x98);
  uStack_f0 = *(undefined8 *)(param_1 + 0x90);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_118 = *(undefined8 *)(param_1 + 0x68);
  uStack_120 = *(undefined8 *)(param_1 + 0x60);
  uStack_108 = *(undefined8 *)(param_1 + 0x78);
  uStack_110 = *(undefined8 *)(param_1 + 0x70);
  puVar1 = &uStack_120;
  FUN_101593e50();
  if ((int)puVar1 != 1) {
    uStack_158 = uStack_78;
    uStack_160 = uStack_80;
    uStack_148 = uStack_68;
    uStack_150 = uStack_70;
    uStack_138 = uStack_58;
    uStack_140 = uStack_60;
    uStack_130 = uStack_50;
    uStack_198 = uStack_b8;
    uStack_1a0 = uStack_c0;
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    uStack_178 = uStack_98;
    uStack_180 = uStack_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_1d8 = uStack_f8;
    uStack_1e0 = uStack_100;
    uStack_1c8 = uStack_e8;
    uStack_1d0 = uStack_f0;
    uStack_1b8 = uStack_d8;
    uStack_1c0 = uStack_e0;
    uStack_1a8 = uStack_c8;
    uStack_1b0 = uStack_d0;
    uStack_1f8 = uStack_118;
    uStack_200 = uStack_120;
    uStack_1e8 = uStack_108;
    uStack_1f0 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010159f5f4();
    (*pcVar2)(&uStack_200,2,&UNK_1103e2900,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10158de9c; end: 10158df3f;  */

void FUN_10158de9c(undefined8 *param_1)

{
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
  
  func_0x00010159115c(&uStack_f8);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf000000000000000;
  param_1[0x21] = uStack_50;
  param_1[0x20] = uStack_58;
  param_1[0x23] = uStack_40;
  param_1[0x22] = uStack_48;
  param_1[0x25] = uStack_30;
  param_1[0x24] = uStack_38;
  param_1[0x26] = uStack_28;
  param_1[0x19] = uStack_90;
  param_1[0x18] = uStack_98;
  param_1[0x1b] = uStack_80;
  param_1[0x1a] = uStack_88;
  param_1[0x1d] = uStack_70;
  param_1[0x1c] = uStack_78;
  param_1[0x1f] = uStack_60;
  param_1[0x1e] = uStack_68;
  param_1[0x11] = uStack_d0;
  param_1[0x10] = uStack_d8;
  param_1[0x13] = uStack_c0;
  param_1[0x12] = uStack_c8;
  param_1[0x15] = uStack_b0;
  param_1[0x14] = uStack_b8;
  param_1[0x17] = uStack_a0;
  param_1[0x16] = uStack_a8;
  param_1[0xd] = uStack_f0;
  param_1[0xc] = uStack_f8;
  param_1[0xf] = uStack_e0;
  param_1[0xe] = uStack_e8;
  return;
}



/* Entry: 10158df40; end: 10158df67;  */

undefined1  [16] FUN_10158df40(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db6688 != -1) {
    func_0x000107c61568(0x112db6688,FUN_10158db40);
  }
  auVar1._8_8_ = uRam0000000113800410;
  auVar1._0_8_ = uRam0000000113800408;
  func_0x000107c61434(uRam0000000113800410);
  return auVar1;
}



/* Entry: 10158df68; end: 10158df97;  */

undefined1  [16] FUN_10158df68(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10158df98; end: 10158dfcb;  */

void FUN_10158df98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10158dfcc; end: 10158dfdf;  */

undefined8 FUN_10158dfcc(void)

{
  return 0x10158dfdc;
}



/* Entry: 10158dfe0; end: 10158dff3;  */

void FUN_10158dfe0(void)

{
  FUN_10158dbac();
  return;
}



/* Entry: 10158dff4; end: 10158e05b;  */

void FUN_10158dff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_178 [312];
  
  func_0x000107c610b4(auStack_178);
  FUN_10158dc90(param_1,param_2,param_3);
  return;
}



/* Entry: 10158e05c; end: 10158e05f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10158e05c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10158e060; end: 10158e097;  */

uint FUN_10158e060(long param_1,long param_2)

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
  func_0x00010159ef34();
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



/* Entry: 10158e098; end: 10158e0e7;  */

uint FUN_10158e098(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_158,param_1,0x138);
  func_0x000107c610b4(auStack_290);
  FUN_1015923c0(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 10158e0e8; end: 10158e187;  */

/* WARNING: Possible PIC construction at 0x00010158e134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158e144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158e138) */
/* WARNING: Removing unreachable block (ram,0x00010158e148) */

void FUN_10158e0e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6690 != -1) {
    func_0x000107c61568(0x112db6690,FUN_10158db64);
  }
  uVar5 = uRam0000000113800440;
  uVar4 = uRam0000000113800438;
  uVar3 = uRam0000000113800430;
  uVar2 = uRam0000000113800428;
  uVar1 = uRam0000000113800420;
  *param_1 = uRam0000000113800418;
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



/* Entry: 10158e188; end: 10158e1c3;  */

void FUN_10158e188(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6cd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6cd8,&UNK_10d964190);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158e1c4; end: 10158e2cf;  */

void FUN_10158e1c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [312];
  
  func_0x000107c610b4(auStack_168);
  func_0x000107c6068c(auStack_1b0,0);
  func_0x000107c5fa50(auStack_1b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10158e2d0; end: 10158e323;  */

uint FUN_10158e2d0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_290,param_1,0x138);
  func_0x000107c610b4(auStack_158,param_2,0x138);
  FUN_1015923c0(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 10158e324; end: 10158e34f;  */

void FUN_10158e324(void)

{
  func_0x000107c5fb78(0x72656b636974532e,0xeb00000000617443);
  uRam0000000113800448 = 0xd000000000000029;
  uRam0000000113800450 = 0x800000010efb2fd0;
  return;
}



/* Entry: 10158e350; end: 10158e397;  */

void FUN_10158e350(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964250,0x1c,2);
  uRam0000000113800460 = uStack_38;
  uRam0000000113800458 = uStack_40;
  uRam0000000113800470 = uStack_28;
  uRam0000000113800468 = uStack_30;
  uRam0000000113800480 = uStack_18;
  uRam0000000113800478 = uStack_20;
  return;
}



/* Entry: 10158e398; end: 10158e47b;  */

void FUN_10158e398(undefined8 param_1,long param_2,long param_3)

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
        func_0x00010159f5b4();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_11066fa98;
LAB_10158e420:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010159f574();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_1103e2998;
        goto LAB_10158e420;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10158e47c; end: 10158e4ef;  */

void FUN_10158e47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10158e4f0();
  if (unaff_x21 == 0) {
    FUN_10158e58c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10158e4f0; end: 10158e58b;  */

void FUN_10158e4f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
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
  
  uStack_48 = *(ulong *)(param_1 + 0x68);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uStack_98 = *(undefined8 *)(param_1 + 0x18);
    uStack_a0 = *(undefined8 *)(param_1 + 0x10);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    uStack_90 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f5b4();
    (*pcVar1)(&uStack_a0,1,&UNK_11066fa98,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158e58c; end: 10158e60b;  */

void FUN_10158e58c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x80);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f574();
    (*pcVar1)(&uStack_60,2,&UNK_1103e2998,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158e60c; end: 10158e65f;  */

void FUN_10158e60c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
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
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 10158e660; end: 10158e68f;  */

undefined1  [16] FUN_10158e660(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10158e690; end: 10158e6c3;  */

void FUN_10158e690(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10158e6c4; end: 10158e6d7;  */

undefined8 FUN_10158e6c4(void)

{
  return 0x10158e6d4;
}



/* Entry: 10158e6d8; end: 10158e6eb;  */

void FUN_10158e6d8(void)

{
  FUN_10158e398();
  return;
}



/* Entry: 10158e6ec; end: 10158e73b;  */

void FUN_10158e6ec(void)

{
  FUN_10158e47c();
  return;
}



/* Entry: 10158e73c; end: 10158e73f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10158e73c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10158e740; end: 10158e777;  */

uint FUN_10158e740(long param_1,long param_2)

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
  func_0x00010159eef4();
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



/* Entry: 10158e778; end: 10158e7f7;  */

uint FUN_10158e778(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_1015929e8(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}


