/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015d09a0; end: 1015d09b3;  */

undefined1  [16] FUN_1015d09a0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xe0;
  auVar1._0_8_ = 0x1015d09b0;
  return auVar1;
}



/* Entry: 1015d09b4; end: 1015d09c7;  */

void FUN_1015d09b4(void)

{
  FUN_1015cb158();
  return;
}



/* Entry: 1015d09c8; end: 1015d0a2f;  */

void FUN_1015d09c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_190 [336];
  
  func_0x000107c610b4(auStack_190);
  FUN_1015cf29c(param_1,param_2,param_3);
  return;
}



/* Entry: 1015d0a30; end: 1015d0a33;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015d0a30(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d0a34; end: 1015d0a6b;  */

uint FUN_1015d0a34(long param_1,long param_2)

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
  func_0x0001015d50a0();
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



/* Entry: 1015d0a6c; end: 1015d0abb;  */

uint FUN_1015d0a6c(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2c0 [336];
  undefined1 auStack_170 [336];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_170,param_1,0x150);
  func_0x000107c610b4(auStack_2c0);
  FUN_1015d204c(auStack_2c0,auStack_170);
  return uVar1 & 1;
}



/* Entry: 1015d0abc; end: 1015d0b5b;  */

/* WARNING: Possible PIC construction at 0x0001015d0b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d0b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d0b0c) */
/* WARNING: Removing unreachable block (ram,0x0001015d0b1c) */

void FUN_1015d0abc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8100 != -1) {
    func_0x000107c61568(0x112db8100,FUN_1015cb110);
  }
  uVar5 = uRam0000000113800bc0;
  uVar4 = uRam0000000113800bb8;
  uVar3 = uRam0000000113800bb0;
  uVar2 = uRam0000000113800ba8;
  uVar1 = uRam0000000113800ba0;
  *param_1 = uRam0000000113800b98;
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



/* Entry: 1015d0b5c; end: 1015d0b97;  */

void FUN_1015d0b5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8160;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8160,&UNK_10d967450);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015d0b98; end: 1015d0ca3;  */

void FUN_1015d0b98(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [336];
  
  func_0x000107c610b4(auStack_180);
  func_0x000107c6068c(auStack_1c8,0);
  func_0x000107c5fa50(auStack_1c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015d0ca4; end: 1015d0d6b;  */

uint FUN_1015d0ca4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2c0 [336];
  undefined1 auStack_170 [336];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2c0,param_1,0x150);
  func_0x000107c610b4(auStack_170,param_2,0x150);
  FUN_1015d204c(auStack_2c0,auStack_170);
  return uVar1 & 1;
}



/* Entry: 1015d0d6c; end: 1015d0db3;  */

void FUN_1015d0d6c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d967460,0x13,2);
  uRam0000000113800be0 = uStack_38;
  uRam0000000113800bd8 = uStack_40;
  uRam0000000113800bf0 = uStack_28;
  uRam0000000113800be8 = uStack_30;
  uRam0000000113800c00 = uStack_18;
  uRam0000000113800bf8 = uStack_20;
  return;
}



/* Entry: 1015d0db4; end: 1015d0e67;  */

/* WARNING: Removing unreachable block (ram,0x0001015d0e64) */

void FUN_1015d0db4(undefined8 param_1,long param_2,long param_3)

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
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110734b68,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015d0e68; end: 1015d0ec3;  */

void FUN_1015d0e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015d0ec4();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015d0ec4; end: 1015d0f5f;  */

void FUN_1015d0ec4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x28);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,1,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015d0f60; end: 1015d0f83;  */

void FUN_1015d0f60(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 1015d0f84; end: 1015d0fdf;  */

undefined1  [16] FUN_1015d0f84(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db8110 != -1) {
    func_0x000107c61568(0x112db8110,0x1015d0cf8);
  }
  auVar1._8_8_ = uRam0000000113800bd0;
  auVar1._0_8_ = uRam0000000113800bc8;
  func_0x000107c61434(uRam0000000113800bd0);
  return auVar1;
}



/* Entry: 1015d0fe0; end: 1015d0fe7;  */

undefined8 FUN_1015d0fe0(void)

{
  return 1;
}



/* Entry: 1015d0fe8; end: 1015d1017;  */

undefined1  [16] FUN_1015d0fe8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015d1018; end: 1015d104b;  */

void FUN_1015d1018(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015d104c; end: 1015d105f;  */

undefined8 FUN_1015d104c(void)

{
  return 0x1015d105c;
}



/* Entry: 1015d1060; end: 1015d1073;  */

void FUN_1015d1060(void)

{
  FUN_1015d0db4();
  return;
}



/* Entry: 1015d1074; end: 1015d10b3;  */

void FUN_1015d1074(void)

{
  FUN_1015d0e68();
  return;
}



/* Entry: 1015d10b4; end: 1015d10b7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015d10b4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d10b8; end: 1015d10ef;  */

uint FUN_1015d10b8(long param_1,long param_2)

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
  FUN_1015d5060();
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



/* Entry: 1015d10f0; end: 1015d1147;  */

uint FUN_1015d10f0(undefined8 *param_1)

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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_1015d1390(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1015d1148; end: 1015d11e7;  */

/* WARNING: Possible PIC construction at 0x0001015d1194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d11a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d1198) */
/* WARNING: Removing unreachable block (ram,0x0001015d11a8) */

void FUN_1015d1148(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8118 != -1) {
    func_0x000107c61568(0x112db8118,FUN_1015d0d6c);
  }
  uVar5 = uRam0000000113800c00;
  uVar4 = uRam0000000113800bf8;
  uVar3 = uRam0000000113800bf0;
  uVar2 = uRam0000000113800be8;
  uVar1 = uRam0000000113800be0;
  *param_1 = uRam0000000113800bd8;
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



/* Entry: 1015d11e8; end: 1015d1223;  */

void FUN_1015d11e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8150;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8150,&UNK_10d967448);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015d1224; end: 1015d1337;  */

void FUN_1015d1224(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
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



/* Entry: 1015d1338; end: 1015d138f;  */

uint FUN_1015d1338(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1015d1390(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1015d1390; end: 1015d2003;  */

uint FUN_1015d1390(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
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
  
  uVar9 = param_1[3];
  uVar5 = param_1[2];
  uVar15 = param_1[5];
  uVar13 = param_1[4];
  uVar10 = param_1[7];
  uVar6 = param_1[6];
  uVar4 = param_1[8];
  uVar11 = param_2[3];
  uVar7 = param_2[2];
  uVar16 = param_2[5];
  uVar14 = param_2[4];
  uVar12 = param_2[7];
  uVar8 = param_2[6];
  uVar3 = param_2[8];
  uStack_160 = uVar7;
  uStack_158 = uVar11;
  uStack_150 = uVar14;
  uStack_148 = uVar16;
  uStack_140 = uVar8;
  uStack_138 = uVar12;
  uStack_130 = uVar3;
  uStack_120 = uVar5;
  uStack_118 = uVar9;
  uStack_110 = uVar13;
  uStack_108 = uVar15;
  uStack_100 = uVar6;
  uStack_f8 = uVar10;
  uStack_f0 = uVar4;
  if (uVar15 >> 0x3c < 0xf) {
    if (0xe < uVar16 >> 0x3c) goto LAB_1015d1494;
    uStack_e0 = uVar5;
    uStack_d8 = uVar9;
    uStack_d0 = uVar13;
    uStack_c8 = uVar15;
    uStack_c0 = uVar6;
    uStack_b8 = uVar10;
    uStack_b0 = uVar4;
    uStack_a8 = uVar7;
    uStack_a0 = uVar11;
    uStack_98 = uVar14;
    uStack_90 = uVar16;
    uStack_88 = uVar8;
    uStack_80 = uVar12;
    uStack_78 = uVar3;
    FUN_1015d2004(&uStack_120,auStack_198,0x112db5e70,&UNK_10d9649a0);
    FUN_1015d2004(&uStack_160,auStack_198,0x112db5e70,&UNK_10d9649a0);
    puVar2 = &uStack_e0;
    func_0x00010400dcec(puVar2,&uStack_a8);
    FUN_101593c1c(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar3);
    FUN_101593c1c(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1015d15e0;
  }
  else {
    if (0xe < uVar16 >> 0x3c) {
      FUN_1015d2004(&uStack_120,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
      FUN_1015d2004(&uStack_160,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
      FUN_101593c1c(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
LAB_1015d15e0:
      uVar3 = *param_1;
      FUN_100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_1015d15ec;
    }
LAB_1015d1494:
    FUN_1015d2004(&uStack_120,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    FUN_1015d2004(&uStack_160,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    FUN_101593c1c(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
    FUN_101593c1c(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar3);
  }
  uVar1 = 0;
LAB_1015d15ec:
  return uVar1 & 1;
}



/* Entry: 1015d2004; end: 1015d204b;  */

undefined8 FUN_1015d2004(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015d204c; end: 1015d2907;  */

uint FUN_1015d204c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_950;
  ulong uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  ulong uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 uStack_888;
  undefined7 uStack_887;
  undefined1 uStack_880;
  undefined8 uStack_87f;
  undefined8 uStack_870;
  ulong uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  ulong uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 uStack_7a8;
  undefined7 uStack_7a7;
  undefined1 uStack_7a0;
  undefined8 uStack_79f;
  undefined1 auStack_788 [72];
  undefined8 uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  ulong uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  undefined7 uStack_627;
  undefined1 uStack_620;
  undefined8 uStack_61f;
  undefined8 uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
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
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined1 uStack_460;
  undefined8 uStack_45f;
  undefined8 uStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
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
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined8 uStack_37f;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
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
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
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
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  uStack_488 = param_1[0x15];
  uStack_490 = param_1[0x14];
  uStack_188 = param_1[0x17];
  uStack_190 = param_1[0x16];
  uStack_498 = param_1[0x13];
  uStack_4a0 = param_1[0x12];
  uStack_198 = param_1[0x15];
  uStack_1a0 = param_1[0x14];
  uStack_478 = param_1[0x17];
  uStack_480 = param_1[0x16];
  uStack_180 = param_1[0x18];
  uStack_178 = (undefined1)param_1[0x19];
  uStack_16f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_177 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_170 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_4c8 = param_1[0xd];
  uStack_4d0 = param_1[0xc];
  uStack_1c8 = param_1[0xf];
  uStack_1d0 = param_1[0xe];
  uStack_4d8 = param_1[0xb];
  uStack_4e0 = param_1[10];
  uStack_1d8 = param_1[0xd];
  uStack_1e0 = param_1[0xc];
  uStack_4b8 = param_1[0xf];
  uStack_4c0 = param_1[0xe];
  uStack_1b8 = param_1[0x11];
  uStack_1c0 = param_1[0x10];
  uStack_4a8 = param_1[0x11];
  uStack_4b0 = param_1[0x10];
  uStack_1a8 = param_1[0x13];
  uStack_1b0 = param_1[0x12];
  uStack_508 = param_1[5];
  uStack_510 = param_1[4];
  uStack_208 = param_1[7];
  uStack_210 = param_1[6];
  uStack_518 = param_1[3];
  uStack_520 = param_1[2];
  uStack_218 = param_1[5];
  uStack_220 = param_1[4];
  uStack_4f8 = param_1[7];
  uStack_500 = param_1[6];
  uStack_1f8 = param_1[9];
  uStack_200 = param_1[8];
  uStack_4e8 = param_1[9];
  uStack_4f0 = param_1[8];
  uStack_1e8 = param_1[0xb];
  uStack_1f0 = param_1[10];
  uStack_238 = param_1[1];
  uStack_240 = *param_1;
  uStack_228 = param_1[3];
  uStack_230 = param_1[2];
  uStack_528 = param_1[1];
  uStack_530 = *param_1;
  uStack_3a8 = param_2[0x15];
  uStack_3b0 = param_2[0x14];
  uStack_268 = param_2[0x17];
  uStack_270 = param_2[0x16];
  uStack_3b8 = param_2[0x13];
  uStack_3c0 = param_2[0x12];
  uStack_278 = param_2[0x15];
  uStack_280 = param_2[0x14];
  uStack_398 = param_2[0x17];
  uStack_3a0 = param_2[0x16];
  uStack_260 = param_2[0x18];
  uStack_258 = (undefined1)param_2[0x19];
  uStack_24f = *(undefined8 *)((long)param_2 + 0xd1);
  uStack_257 = (undefined7)*(undefined8 *)((long)param_2 + 0xc9);
  uStack_250 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xc9) >> 0x38);
  uStack_3e8 = param_2[0xd];
  uStack_3f0 = param_2[0xc];
  uStack_2a8 = param_2[0xf];
  uStack_2b0 = param_2[0xe];
  uStack_3f8 = param_2[0xb];
  uStack_400 = param_2[10];
  uStack_2b8 = param_2[0xd];
  uStack_2c0 = param_2[0xc];
  uStack_3d8 = param_2[0xf];
  uStack_3e0 = param_2[0xe];
  uStack_298 = param_2[0x11];
  uStack_2a0 = param_2[0x10];
  uStack_3c8 = param_2[0x11];
  uStack_3d0 = param_2[0x10];
  uStack_288 = param_2[0x13];
  uStack_290 = param_2[0x12];
  uStack_428 = param_2[5];
  uStack_430 = param_2[4];
  uStack_2e8 = param_2[7];
  uStack_2f0 = param_2[6];
  uStack_438 = param_2[3];
  uStack_440 = param_2[2];
  uStack_2f8 = param_2[5];
  uStack_300 = param_2[4];
  uStack_418 = param_2[7];
  uStack_420 = param_2[6];
  uStack_2d8 = param_2[9];
  uStack_2e0 = param_2[8];
  uStack_408 = param_2[9];
  uStack_410 = param_2[8];
  uStack_2d0 = param_2[10];
  uStack_2c8 = param_2[0xb];
  uStack_318 = param_2[1];
  uStack_320 = *param_2;
  uStack_310 = param_2[2];
  uStack_308 = param_2[3];
  uStack_448 = param_2[1];
  uStack_450 = *param_2;
  uStack_470 = param_1[0x18];
  uStack_468 = (undefined1)param_1[0x19];
  uStack_45f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_467 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_460 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  iVar2 = (int)&uStack_450;
  uStack_37f = *(undefined8 *)((long)param_2 + 0xd1);
  uStack_380 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xc9) >> 0x38);
  uStack_390 = param_2[0x18];
  uStack_388 = (undefined1)param_2[0x19];
  uStack_387 = (undefined7)((ulong)param_2[0x19] >> 8);
  iVar1 = (int)&uStack_530;
  func_0x000101551ac8();
  if (iVar1 == 1) {
    func_0x000101551ac8();
    if (iVar2 == 1) {
      uStack_648 = uStack_488;
      uStack_650 = uStack_490;
      uStack_638 = uStack_478;
      uStack_640 = uStack_480;
      uStack_628 = uStack_468;
      uStack_630 = uStack_470;
      uStack_61f = uStack_45f;
      uStack_627 = uStack_467;
      uStack_620 = uStack_460;
      uStack_688 = uStack_4c8;
      uStack_690 = uStack_4d0;
      uStack_678 = uStack_4b8;
      uStack_680 = uStack_4c0;
      uStack_668 = uStack_4a8;
      uStack_670 = uStack_4b0;
      uStack_658 = uStack_498;
      uStack_660 = uStack_4a0;
      uStack_6c8 = uStack_508;
      uStack_6d0 = uStack_510;
      uStack_6b8 = uStack_4f8;
      uStack_6c0 = uStack_500;
      uStack_6a8 = uStack_4e8;
      uStack_6b0 = uStack_4f0;
      uStack_698 = uStack_4d8;
      uStack_6a0 = uStack_4e0;
      uStack_6e8 = uStack_528;
      uStack_6f0 = uStack_530;
      uStack_6d8 = uStack_518;
      uStack_6e0 = uStack_520;
      FUN_1015d2004(&uStack_240,&uStack_160,0x112db3cf0,&UNK_10d95e250);
      FUN_1015d2004(&uStack_320,&uStack_160,0x112db3cf0,&UNK_10d95e250);
      func_0x0001015d5598(&uStack_6f0,0x112db3cf0,&UNK_10d95e250);
LAB_1015d24c8:
      uStack_518 = param_1[0x21];
      uStack_520 = param_1[0x20];
      uStack_a08 = param_1[0x23];
      uStack_a10 = param_1[0x22];
      uStack_508 = param_1[0x23];
      uStack_510 = param_1[0x22];
      uStack_9f8 = param_1[0x25];
      uStack_a00 = param_1[0x24];
      uStack_a28 = param_1[0x1f];
      uStack_a30 = param_1[0x1e];
      uStack_a18 = param_1[0x21];
      uStack_a20 = param_1[0x20];
      uStack_528 = param_1[0x1f];
      uStack_530 = param_1[0x1e];
      uStack_4d0 = param_2[0x21];
      uStack_4d8 = param_2[0x20];
      uStack_348 = param_2[0x23];
      uStack_350 = param_2[0x22];
      uStack_4c0 = param_2[0x23];
      uStack_4c8 = param_2[0x22];
      uStack_338 = param_2[0x25];
      uStack_340 = param_2[0x24];
      uStack_368 = param_2[0x1f];
      uStack_370 = param_2[0x1e];
      uStack_358 = param_2[0x21];
      uStack_360 = param_2[0x20];
      uStack_4e0 = param_2[0x1f];
      uStack_4e8 = param_2[0x1e];
      uStack_4b0 = param_2[0x25];
      uStack_4b8 = param_2[0x24];
      uStack_9f0 = param_1[0x26];
      uStack_330 = param_2[0x26];
      uStack_4f8 = param_1[0x25];
      uStack_500 = param_1[0x24];
      uStack_4f0 = param_1[0x26];
      uStack_4a8 = param_2[0x26];
      if (uStack_528 >> 0x3c < 0xf) {
        if (0xe < uStack_4e0 >> 0x3c) goto LAB_1015d25d4;
        uStack_848 = param_2[0x23];
        uStack_850 = param_2[0x22];
        uStack_838 = param_2[0x25];
        uStack_840 = param_2[0x24];
        uStack_830 = param_2[0x26];
        uStack_868 = param_2[0x1f];
        uStack_870 = param_2[0x1e];
        uStack_858 = param_2[0x21];
        uStack_860 = param_2[0x20];
        uStack_948 = param_1[0x1f];
        uStack_950 = param_1[0x1e];
        uStack_938 = param_1[0x21];
        uStack_940 = param_1[0x20];
        uStack_928 = param_1[0x23];
        uStack_930 = param_1[0x22];
        uStack_918 = param_1[0x25];
        uStack_920 = param_1[0x24];
        uStack_910 = param_1[0x26];
        uStack_740 = uStack_870;
        uStack_738 = uStack_868;
        uStack_730 = uStack_860;
        uStack_728 = uStack_858;
        uStack_720 = uStack_850;
        uStack_718 = uStack_848;
        uStack_710 = uStack_840;
        uStack_708 = uStack_838;
        uStack_700 = uStack_830;
        FUN_1015d2004(&uStack_a30,auStack_788,0x112db80e8,&UNK_10d9671d0);
        FUN_1015d2004(&uStack_370,auStack_788,0x112db80e8,&UNK_10d9671d0);
        puVar4 = &uStack_950;
        FUN_1015d1390(puVar4,&uStack_870);
        func_0x0001015d5598(&uStack_740,0x112db80e8,&UNK_10d9671d0);
        func_0x0001015d5598(&uStack_530,0x112db80e8,&UNK_10d9671d0);
        if (((ulong)puVar4 & 1) == 0) goto LAB_1015d265c;
      }
      else {
        if (uStack_4e0 >> 0x3c < 0xf) {
LAB_1015d25d4:
          uStack_870 = uStack_530;
          uStack_868 = uStack_528;
          uStack_860 = uStack_520;
          uStack_858 = uStack_518;
          uStack_850 = uStack_510;
          uStack_848 = uStack_508;
          uStack_840 = uStack_500;
          uStack_838 = uStack_4f8;
          uStack_830 = uStack_4f0;
          uStack_828 = uStack_4e8;
          uStack_820 = uStack_4e0;
          uStack_818 = uStack_4d8;
          uStack_810 = uStack_4d0;
          uStack_808 = uStack_4c8;
          uStack_800 = uStack_4c0;
          uStack_7f8 = uStack_4b8;
          uStack_7f0 = uStack_4b0;
          uStack_7e8 = uStack_4a8;
          FUN_1015d2004(&uStack_a30,&uStack_950,0x112db80e8,&UNK_10d9671d0);
          FUN_1015d2004(&uStack_370,&uStack_950,0x112db80e8,&UNK_10d9671d0);
          uVar9 = 0x112db80f0;
          puVar6 = &UNK_10d9671d8;
          puVar4 = &uStack_870;
          goto LAB_1015d2658;
        }
        uStack_848 = param_1[0x23];
        uStack_850 = param_1[0x22];
        uStack_838 = param_1[0x25];
        uStack_840 = param_1[0x24];
        uStack_830 = param_1[0x26];
        uStack_868 = param_1[0x1f];
        uStack_870 = param_1[0x1e];
        uStack_858 = param_1[0x21];
        uStack_860 = param_1[0x20];
        FUN_1015d2004(&uStack_a30,&uStack_950,0x112db80e8,&UNK_10d9671d0);
        FUN_1015d2004(&uStack_370,&uStack_950,0x112db80e8,&UNK_10d9671d0);
        func_0x0001015d5598(&uStack_870,0x112db80e8,&UNK_10d9671d0);
      }
      uVar11 = param_1[0x28];
      uVar9 = param_1[0x27];
      uVar7 = param_1[0x29];
      uVar12 = param_2[0x28];
      uVar10 = param_2[0x27];
      uVar8 = param_2[0x29];
      uStack_740 = uVar10;
      uStack_738 = uVar12;
      uStack_730 = uVar8;
      uStack_530 = uVar9;
      uStack_528 = uVar11;
      uStack_520 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1015d27e4;
        if ((int)uVar9 == (int)uVar10) {
          FUN_1015d2004(&uStack_530,auStack_788,0x112db80f8,&UNK_10d9671e0);
          FUN_1015d2004(&uStack_740,auStack_788,0x112db80f8,&UNK_10d9671e0);
          uVar5 = uVar11;
          FUN_100e25fcc(uVar11,uVar7,uVar12,uVar8);
          func_0x000100cb62e0(uVar10,uVar12,uVar8);
          if ((uVar5 & 1) != 0) goto LAB_1015d27b8;
        }
        else {
          FUN_1015d2004(&uStack_530,auStack_788,0x112db80f8,&UNK_10d9671e0);
          FUN_1015d2004(&uStack_740,auStack_788,0x112db80f8,&UNK_10d9671e0);
          func_0x000100cb62e0(uVar10,uVar12,uVar8);
        }
      }
      else {
        if (0xe < uVar8 >> 0x3c) {
          FUN_1015d2004(&uStack_530,auStack_788,0x112db80f8,&UNK_10d9671e0);
          FUN_1015d2004(&uStack_740,auStack_788,0x112db80f8,&UNK_10d9671e0);
LAB_1015d27b8:
          func_0x000100cb62e0(uVar9,uVar11,uVar7);
          uVar9 = param_1[0x1c];
          FUN_100e25fcc(uVar9,param_1[0x1d],param_2[0x1c],param_2[0x1d]);
          uVar3 = (uint)uVar9;
          goto LAB_1015d2660;
        }
LAB_1015d27e4:
        FUN_1015d2004(&uStack_530,auStack_788,0x112db80f8,&UNK_10d9671e0);
        FUN_1015d2004(&uStack_740,auStack_788,0x112db80f8,&UNK_10d9671e0);
        func_0x000100cb62e0(uVar9,uVar11,uVar7);
        uVar9 = uVar10;
        uVar11 = uVar12;
        uVar7 = uVar8;
      }
      func_0x000100cb62e0(uVar9,uVar11,uVar7);
    }
    else {
LAB_1015d231c:
      func_0x000107c610b4(&uStack_6f0,&uStack_530,0x1b9);
      FUN_1015d2004(&uStack_240,&uStack_160,0x112db3cf0,&UNK_10d95e250);
      FUN_1015d2004(&uStack_320,&uStack_160,0x112db3cf0,&UNK_10d95e250);
      uVar9 = 0x112db3ef0;
      puVar6 = &UNK_10d95e478;
      puVar4 = &uStack_6f0;
LAB_1015d2658:
      func_0x0001015d5598(puVar4,uVar9,puVar6);
    }
  }
  else {
    uStack_7c8 = uStack_488;
    uStack_7d0 = uStack_490;
    uStack_7b8 = uStack_478;
    uStack_7c0 = uStack_480;
    uStack_7a8 = uStack_468;
    uStack_7b0 = uStack_470;
    uStack_79f = uStack_45f;
    uStack_7a7 = uStack_467;
    uStack_7a0 = uStack_460;
    uStack_808 = uStack_4c8;
    uStack_810 = uStack_4d0;
    uStack_7f8 = uStack_4b8;
    uStack_800 = uStack_4c0;
    uStack_7e8 = uStack_4a8;
    uStack_7f0 = uStack_4b0;
    uStack_7d8 = uStack_498;
    uStack_7e0 = uStack_4a0;
    uStack_848 = uStack_508;
    uStack_850 = uStack_510;
    uStack_838 = uStack_4f8;
    uStack_840 = uStack_500;
    uStack_828 = uStack_4e8;
    uStack_830 = uStack_4f0;
    uStack_818 = uStack_4d8;
    uStack_820 = uStack_4e0;
    uStack_868 = uStack_528;
    uStack_870 = uStack_530;
    uStack_858 = uStack_518;
    uStack_860 = uStack_520;
    func_0x000101551ac8();
    if (iVar2 == 1) goto LAB_1015d231c;
    uStack_8a8 = uStack_3a8;
    uStack_8b0 = uStack_3b0;
    uStack_898 = uStack_398;
    uStack_8a0 = uStack_3a0;
    uStack_888 = uStack_388;
    uStack_890 = uStack_390;
    uStack_87f = uStack_37f;
    uStack_887 = uStack_387;
    uStack_880 = uStack_380;
    uStack_8e8 = uStack_3e8;
    uStack_8f0 = uStack_3f0;
    uStack_8d8 = uStack_3d8;
    uStack_8e0 = uStack_3e0;
    uStack_8c8 = uStack_3c8;
    uStack_8d0 = uStack_3d0;
    uStack_8b8 = uStack_3b8;
    uStack_8c0 = uStack_3c0;
    uStack_928 = uStack_428;
    uStack_930 = uStack_430;
    uStack_918 = uStack_418;
    uStack_920 = uStack_420;
    uStack_908 = uStack_408;
    uStack_910 = uStack_410;
    uStack_8f8 = uStack_3f8;
    uStack_900 = uStack_400;
    uStack_948 = uStack_448;
    uStack_950 = uStack_450;
    uStack_938 = uStack_438;
    uStack_940 = uStack_440;
    uStack_648 = uStack_3a8;
    uStack_650 = uStack_3b0;
    uStack_638 = uStack_398;
    uStack_640 = uStack_3a0;
    uStack_628 = uStack_388;
    uStack_630 = uStack_390;
    uStack_61f = uStack_37f;
    uStack_627 = uStack_387;
    uStack_620 = uStack_380;
    uStack_688 = uStack_3e8;
    uStack_690 = uStack_3f0;
    uStack_678 = uStack_3d8;
    uStack_680 = uStack_3e0;
    uStack_668 = uStack_3c8;
    uStack_670 = uStack_3d0;
    uStack_658 = uStack_3b8;
    uStack_660 = uStack_3c0;
    uStack_6c8 = uStack_428;
    uStack_6d0 = uStack_430;
    uStack_6b8 = uStack_418;
    uStack_6c0 = uStack_420;
    uStack_6a8 = uStack_408;
    uStack_6b0 = uStack_410;
    uStack_698 = uStack_3f8;
    uStack_6a0 = uStack_400;
    uStack_6e8 = uStack_448;
    uStack_6f0 = uStack_450;
    uStack_6d8 = uStack_438;
    uStack_6e0 = uStack_440;
    uStack_b8 = uStack_7c8;
    uStack_c0 = uStack_7d0;
    uStack_a8 = uStack_7b8;
    uStack_b0 = uStack_7c0;
    uStack_98 = uStack_7a8;
    uStack_a0 = uStack_7b0;
    uStack_8f = uStack_79f;
    uStack_97 = uStack_7a7;
    uStack_90 = uStack_7a0;
    uStack_f8 = uStack_808;
    uStack_100 = uStack_810;
    uStack_e8 = uStack_7f8;
    uStack_f0 = uStack_800;
    uStack_d8 = uStack_7e8;
    uStack_e0 = uStack_7f0;
    uStack_c8 = uStack_7d8;
    uStack_d0 = uStack_7e0;
    uStack_138 = uStack_848;
    uStack_140 = uStack_850;
    uStack_128 = uStack_838;
    uStack_130 = uStack_840;
    uStack_118 = uStack_828;
    uStack_120 = uStack_830;
    uStack_108 = uStack_818;
    uStack_110 = uStack_820;
    uStack_158 = uStack_868;
    uStack_160 = uStack_870;
    uStack_148 = uStack_858;
    uStack_150 = uStack_860;
    FUN_1015d2004(&uStack_240,&uStack_a30,0x112db3cf0,&UNK_10d95e250);
    FUN_1015d2004(&uStack_320,&uStack_a30,0x112db3cf0,&UNK_10d95e250);
    puVar4 = &uStack_160;
    func_0x0001015d1610(puVar4,&uStack_6f0);
    func_0x0001015d5598(&uStack_950,0x112db3cf0,&UNK_10d95e250);
    func_0x0001015d5598(&uStack_530,0x112db3cf0,&UNK_10d95e250);
    if (((ulong)puVar4 & 1) != 0) goto LAB_1015d24c8;
  }
LAB_1015d265c:
  uVar3 = 0;
LAB_1015d2660:
  return uVar3 & 1;
}



/* Entry: 1015d2908; end: 1015d2987;  */

void FUN_1015d2908(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967288;
  func_0x000107c61520(&UNK_10d967288,&UNK_1103e3f30);
  puRam0000000112db8108 = puVar1;
  return;
}



/* Entry: 1015d2988; end: 1015d29ab;  */

void FUN_1015d2988(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d29ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015d29ac; end: 1015d29eb;  */

void FUN_1015d29ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967260;
  func_0x000107c61520(&UNK_10d967260,&UNK_1103e3f30);
  puRam0000000112db8128 = puVar1;
  return;
}



/* Entry: 1015d29ec; end: 1015d2a03;  */

void FUN_1015d29ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d2908();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10153befc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015d2a04; end: 1015d2a43;  */

void FUN_1015d2a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9672c8;
  func_0x000107c61520(&UNK_10d9672c8,&UNK_1103e3f30);
  puRam0000000112db8130 = puVar1;
  return;
}



/* Entry: 1015d2a44; end: 1015d2a67;  */

void FUN_1015d2a44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d2a68();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015d2a68; end: 1015d2aa7;  */

void FUN_1015d2a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967338;
  func_0x000107c61520(&UNK_10d967338,&UNK_1103e4048);
  puRam0000000112db8138 = puVar1;
  return;
}



/* Entry: 1015d2aa8; end: 1015d2abb;  */

void FUN_1015d2aa8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015d2948)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015d2aec();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015d2abc; end: 1015d2aeb;  */

void FUN_1015d2abc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015d2aec; end: 1015d2b2b;  */

void FUN_1015d2aec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9672f0;
  func_0x000107c61520(&DAT_10d9672f0,&UNK_1103e4048);
  puRam0000000112db8140 = puVar1;
  return;
}



/* Entry: 1015d2b2c; end: 1015d2b2f;  */

void FUN_1015d2b2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9673a0;
  func_0x000107c61520(&UNK_10d9673a0,&UNK_1103e4048);
  puRam0000000112db8148 = puVar1;
  return;
}



/* Entry: 1015d2b30; end: 1015d2b6f;  */

void FUN_1015d2b30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9673a0;
  func_0x000107c61520(&UNK_10d9673a0,&UNK_1103e4048);
  puRam0000000112db8148 = puVar1;
  return;
}



/* Entry: 1015d2b70; end: 1015d2f8b;  */

/* WARNING: Possible PIC construction at 0x0001015d2ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d2d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d2c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d2bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d2dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d2e58) */
/* WARNING: Removing unreachable block (ram,0x000100cb62c4) */
/* WARNING: Removing unreachable block (ram,0x000100cb62d4) */
/* WARNING: Removing unreachable block (ram,0x000100cb62d0) */
/* WARNING: Removing unreachable block (ram,0x0001015d2bf4) */
/* WARNING: Removing unreachable block (ram,0x0001015d2c4c) */
/* WARNING: Removing unreachable block (ram,0x0001015d3134) */
/* WARNING: Removing unreachable block (ram,0x0001015d3168) */
/* WARNING: Removing unreachable block (ram,0x0001015d3138) */
/* WARNING: Removing unreachable block (ram,0x0001015d2d08) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x0001015d2ee4) */
/* WARNING: Removing unreachable block (ram,0x0001015d2f18) */
/* WARNING: Removing unreachable block (ram,0x0001015d2dc0) */
/* WARNING: Removing unreachable block (ram,0x000101541428) */
/* WARNING: Removing unreachable block (ram,0x00010154145c) */
/* WARNING: Removing unreachable block (ram,0x00010154142c) */

void FUN_1015d2b70(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,ulong param_8,ulong param_9,ulong param_10,
                  undefined8 param_11,undefined8 param_12,ulong param_13,undefined8 param_14,
                  undefined8 param_15)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  undefined1 in_stack_00000098;
  undefined1 auStack_110 [64];
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar4 = in_stack_00000060;
  uVar6 = in_stack_00000058;
  uVar3 = param_10;
  uVar2 = param_9;
  puVar1 = &stack0xfffffffffffffff0;
  switch(in_stack_00000098) {
  case 0:
  case 0xc:
    func_0x000107c61434();
    param_5 = param_2;
    param_6 = param_3;
    uVar6 = unaff_x19;
    break;
  case 1:
    unaff_x30 = 0x1015d2dc0;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    param_5 = param_2;
    param_6 = param_3;
    uVar6 = param_13;
    unaff_x20 = param_8;
    unaff_x29 = puVar1;
    break;
  case 2:
  case 3:
  case 4:
  case 9:
    unaff_x30 = 0x1015d2bf4;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    param_5 = param_1;
    param_6 = param_2;
    unaff_x20 = uVar4;
    unaff_x29 = puVar1;
    break;
  case 5:
    uStack_70 = param_13;
    uStack_98 = param_12;
    uStack_78 = param_14;
    uStack_c0 = param_9;
    uStack_a8 = param_11;
    uStack_88 = in_stack_00000078;
    uStack_80 = in_stack_00000080;
    uStack_b0 = param_10;
    uStack_90 = in_stack_00000070;
    uStack_a0 = param_15;
    uStack_c8 = param_7;
    uStack_b8 = param_8;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_3);
    unaff_x30 = 0x1015d2e58;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    unaff_x20 = uVar4;
    unaff_x29 = puVar1;
    break;
  case 6:
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    uVar6 = unaff_x19;
    break;
  case 7:
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    FUN_101554418(param_5,param_6,param_7);
    param_5 = param_8;
    param_6 = uVar2;
    uVar6 = unaff_x19;
    break;
  case 8:
    func_0x000107c61434(param_2);
    param_5 = param_3;
    param_6 = param_4;
    uVar6 = unaff_x19;
    break;
  case 10:
    unaff_x30 = 0x1015d2c4c;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    param_5 = param_1;
    param_6 = param_2;
    uVar6 = param_9;
    unaff_x20 = param_8;
    unaff_x29 = puVar1;
    uStack_78 = param_14;
    uStack_70 = param_13;
    break;
  case 0xb:
    uStack_b8 = in_stack_00000090;
    uStack_c0 = in_stack_00000088;
    uStack_70 = param_13;
    uStack_98 = param_12;
    uStack_78 = param_14;
    uStack_a8 = param_11;
    uStack_88 = in_stack_00000078;
    uStack_80 = in_stack_00000080;
    uStack_b0 = param_10;
    uStack_90 = in_stack_00000070;
    uStack_a0 = param_15;
    uStack_d0 = in_stack_00000048;
    uStack_c8 = in_stack_00000050;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    unaff_x30 = 0x1015d2d08;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    param_5 = param_7;
    param_6 = param_8;
    unaff_x20 = uVar4;
    unaff_x29 = puVar1;
    break;
  case 0xd:
    uStack_78 = param_14;
    uStack_70 = param_13;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    unaff_x30 = 0x1015d2ee4;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    uVar6 = uVar3;
    unaff_x20 = uVar2;
    unaff_x29 = puVar1;
    break;
  default:
    return;
  }
  uVar5 = (uint)(param_6 >> 0x3e);
  if (uVar5 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = uVar6;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 1015d2f8c; end: 1015d2ff3;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015d2f8c(void)

{
  uint uVar1;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  
  if (0xe < in_stack_00000038 >> 0x3c) {
    return;
  }
  FUN_1015d2ff4();
  uVar1 = (uint)(in_stack_00000038 >> 0x3e);
  if (uVar1 == 1) {
    in_stack_00000030 = in_stack_00000038 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_stack_00000030);
  return;
}



/* Entry: 1015d2ff4; end: 1015d3023;  */

/* WARNING: Possible PIC construction at 0x0001015d3070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d3074) */
/* WARNING: Removing unreachable block (ram,0x0001015d3080) */
/* WARNING: Removing unreachable block (ram,0x0001015d30ac) */
/* WARNING: Removing unreachable block (ram,0x0001015d3134) */
/* WARNING: Removing unreachable block (ram,0x0001015d3168) */
/* WARNING: Removing unreachable block (ram,0x0001015d3138) */
/* WARNING: Removing unreachable block (ram,0x0001015d3088) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015d2ff4(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (((param_2 & param_4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1015d3024; end: 1015d3107;  */

/* WARNING: Possible PIC construction at 0x0001015d3070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d3074) */
/* WARNING: Removing unreachable block (ram,0x0001015d3080) */
/* WARNING: Removing unreachable block (ram,0x0001015d30ac) */
/* WARNING: Removing unreachable block (ram,0x0001015d3134) */
/* WARNING: Removing unreachable block (ram,0x0001015d3168) */
/* WARNING: Removing unreachable block (ram,0x0001015d3138) */
/* WARNING: Removing unreachable block (ram,0x0001015d3088) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015d3024(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1015d3108; end: 1015d316b;  */

void FUN_1015d3108(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d316c; end: 1015d3187;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015d316c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 1015d3188; end: 1015d3273;  */

/* WARNING: Possible PIC construction at 0x0001015d31f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d3224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d3228) */
/* WARNING: Removing unreachable block (ram,0x0001015d3238) */
/* WARNING: Removing unreachable block (ram,0x0001015d31f8) */
/* WARNING: Removing unreachable block (ram,0x0001015d3208) */
/* WARNING: Removing unreachable block (ram,0x0001015d3240) */
/* WARNING: Removing unreachable block (ram,0x0001015d3260) */
/* WARNING: Removing unreachable block (ram,0x0001015d3250) */
/* WARNING: Removing unreachable block (ram,0x0001015d3220) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015d3188(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x1b) != -1) {
    FUN_1015d3274(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7]);
  }
  uVar1 = param_1[0x1c];
  uVar2 = (uint)((ulong)param_1[0x1d] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0x1d] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015d3274; end: 1015d3677;  */

/* WARNING: Possible PIC construction at 0x0001015d35cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d33f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d334c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d32f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d3540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d34a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d3544) */
/* WARNING: Removing unreachable block (ram,0x000100cb62e0) */
/* WARNING: Removing unreachable block (ram,0x000100cb62f0) */
/* WARNING: Removing unreachable block (ram,0x000100cb62ec) */
/* WARNING: Removing unreachable block (ram,0x0001015d32f8) */
/* WARNING: Removing unreachable block (ram,0x0001015d3350) */
/* WARNING: Removing unreachable block (ram,0x0001015d33f4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x0001015d35d0) */
/* WARNING: Removing unreachable block (ram,0x0001015d3604) */
/* WARNING: Removing unreachable block (ram,0x0001015d34ac) */
/* WARNING: Removing unreachable block (ram,0x000101553bdc) */
/* WARNING: Removing unreachable block (ram,0x000101553c10) */
/* WARNING: Removing unreachable block (ram,0x000101553be0) */

void FUN_1015d3274(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,ulong param_8,ulong param_9,ulong param_10,
                  undefined8 param_11,undefined8 param_12,ulong param_13,undefined8 param_14,
                  undefined8 param_15)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  undefined1 in_stack_00000098;
  undefined1 auStack_110 [64];
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar4 = in_stack_00000060;
  uVar6 = in_stack_00000058;
  uVar3 = param_10;
  uVar2 = param_9;
  puVar1 = &stack0xfffffffffffffff0;
  switch(in_stack_00000098) {
  case 0:
  case 0xc:
    func_0x000107c6142c();
    param_5 = param_2;
    param_6 = param_3;
    uVar6 = unaff_x19;
    break;
  case 1:
    unaff_x30 = 0x1015d34ac;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    param_5 = param_2;
    param_6 = param_3;
    uVar6 = param_13;
    unaff_x20 = param_8;
    unaff_x29 = puVar1;
    break;
  case 2:
  case 3:
  case 4:
  case 9:
    unaff_x30 = 0x1015d32f8;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    param_5 = param_1;
    param_6 = param_2;
    unaff_x20 = uVar4;
    unaff_x29 = puVar1;
    break;
  case 5:
    uStack_70 = param_13;
    uStack_98 = param_12;
    uStack_78 = param_14;
    uStack_c0 = param_9;
    uStack_a8 = param_11;
    uStack_88 = in_stack_00000078;
    uStack_80 = in_stack_00000080;
    uStack_b0 = param_10;
    uStack_90 = in_stack_00000070;
    uStack_a0 = param_15;
    uStack_c8 = param_7;
    uStack_b8 = param_8;
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_3);
    unaff_x30 = 0x1015d3544;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    unaff_x20 = uVar4;
    unaff_x29 = puVar1;
    break;
  case 6:
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
    uVar6 = unaff_x19;
    break;
  case 7:
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
    FUN_1015d37f8(param_5,param_6,param_7);
    param_5 = param_8;
    param_6 = uVar2;
    uVar6 = unaff_x19;
    break;
  case 8:
    func_0x000107c6142c(param_2);
    param_5 = param_3;
    param_6 = param_4;
    uVar6 = unaff_x19;
    break;
  case 10:
    unaff_x30 = 0x1015d3350;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    param_5 = param_1;
    param_6 = param_2;
    uVar6 = param_9;
    unaff_x20 = param_8;
    unaff_x29 = puVar1;
    uStack_78 = param_14;
    uStack_70 = param_13;
    break;
  case 0xb:
    uStack_b8 = in_stack_00000090;
    uStack_c0 = in_stack_00000088;
    uStack_70 = param_13;
    uStack_98 = param_12;
    uStack_78 = param_14;
    uStack_a8 = param_11;
    uStack_88 = in_stack_00000078;
    uStack_80 = in_stack_00000080;
    uStack_b0 = param_10;
    uStack_90 = in_stack_00000070;
    uStack_a0 = param_15;
    uStack_d0 = in_stack_00000048;
    uStack_c8 = in_stack_00000050;
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(param_6);
    unaff_x30 = 0x1015d33f4;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    param_5 = param_7;
    param_6 = param_8;
    unaff_x20 = uVar4;
    unaff_x29 = puVar1;
    break;
  case 0xd:
    uStack_78 = param_14;
    uStack_70 = param_13;
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
    unaff_x30 = 0x1015d35d0;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    uVar6 = uVar3;
    unaff_x20 = uVar2;
    unaff_x29 = puVar1;
    break;
  default:
    return;
  }
  uVar5 = (uint)(param_6 >> 0x3e);
  if (uVar5 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = uVar6;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 1015d3678; end: 1015d36df;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015d3678(void)

{
  uint uVar1;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  
  if (0xe < in_stack_00000038 >> 0x3c) {
    return;
  }
  FUN_1015d36e0();
  uVar1 = (uint)(in_stack_00000038 >> 0x3e);
  if (uVar1 == 1) {
    in_stack_00000030 = in_stack_00000038 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_stack_00000030);
  return;
}



/* Entry: 1015d36e0; end: 1015d370f;  */

void FUN_1015d36e0(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  uint uVar1;
  
  if (((param_2 & param_4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x00010006c090();
  uVar1 = (uint)(param_4 >> 0x3c) & 3;
  if ((1 < uVar1) && (uVar1 != 2)) {
    func_0x00010006c090(param_3,param_4 & 0xcfffffffffffffff);
    func_0x0001015d550c(param_5,param_6,param_7);
    func_0x0001015d550c(param_8,param_9,param_10);
    func_0x0001015d54d4(param_11,param_12,param_13,param_14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1015d3710; end: 1015d37f7;  */

void FUN_1015d3710(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  uint uVar1;
  
  func_0x00010006c090();
  uVar1 = (uint)(param_4 >> 0x3c) & 3;
  if ((1 < uVar1) && (uVar1 != 2)) {
    func_0x00010006c090(param_3,param_4 & 0xcfffffffffffffff);
    func_0x0001015d550c(param_5,param_6,param_7);
    func_0x0001015d550c(param_8,param_9,param_10);
    func_0x0001015d54d4(param_11,param_12,param_13,param_14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1015d37f8; end: 1015d3813;  */

void FUN_1015d37f8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1015d3814; end: 1015d38c7;  */

void FUN_1015d3814(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,code *param_12,
                  code *UNRECOVERED_JUMPTABLE)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  (*param_12)();
  (*UNRECOVERED_JUMPTABLE)(param_3,param_4,param_5);
  (*UNRECOVERED_JUMPTABLE)(param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x0001015d38c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_9,param_10,param_11);
  return;
}



/* Entry: 1015d38c8; end: 1015d38e3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015d38c8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
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



/* Entry: 1015d38e4; end: 1015d394f;  */

void FUN_1015d38e4(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,code *UNRECOVERED_JUMPTABLE)

{
  if ((((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((param_3 & 0xf000000000000007) == 0x7000000000000007)) {
    return;
  }
  (*param_6)();
                    /* WARNING: Could not recover jumptable at 0x0001015d394c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_4,param_5);
  return;
}



/* Entry: 1015d3950; end: 1015d4263;  */

undefined8 * FUN_1015d3950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char cVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  cVar24 = *(char *)(param_2 + 0x1b);
  if (cVar24 == -1) {
    uVar26 = param_2[0x14];
    uVar29 = param_2[0x17];
    uVar28 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar26;
    param_1[0x17] = uVar29;
    param_1[0x16] = uVar28;
    uVar26 = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar26;
    uVar26 = *(undefined8 *)((long)param_2 + 0xc9);
    *(undefined8 *)((long)param_1 + 0xd1) = *(undefined8 *)((long)param_2 + 0xd1);
    *(undefined8 *)((long)param_1 + 0xc9) = uVar26;
    uVar26 = param_2[0xc];
    uVar29 = param_2[0xf];
    uVar28 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar26;
    param_1[0xf] = uVar29;
    param_1[0xe] = uVar28;
    uVar26 = param_2[0x10];
    uVar29 = param_2[0x13];
    uVar28 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar26;
    param_1[0x13] = uVar29;
    param_1[0x12] = uVar28;
    uVar26 = param_2[4];
    uVar29 = param_2[7];
    uVar28 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar26;
    param_1[7] = uVar29;
    param_1[6] = uVar28;
    uVar26 = param_2[8];
    uVar29 = param_2[0xb];
    uVar28 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar26;
    param_1[0xb] = uVar29;
    param_1[10] = uVar28;
    uVar26 = *param_2;
    uVar29 = param_2[3];
    uVar28 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar26;
    param_1[3] = uVar29;
    param_1[2] = uVar28;
  }
  else {
    uVar26 = *param_2;
    uVar11 = param_2[1];
    uVar28 = param_2[2];
    uVar12 = param_2[3];
    uVar29 = param_2[4];
    uVar13 = param_2[5];
    uVar1 = param_2[6];
    uVar14 = param_2[7];
    uVar2 = param_2[8];
    uVar15 = param_2[9];
    uVar3 = param_2[10];
    uVar16 = param_2[0xb];
    uVar4 = param_2[0xc];
    uVar17 = param_2[0xd];
    uVar5 = param_2[0xe];
    uVar18 = param_2[0xf];
    uVar6 = param_2[0x10];
    uVar19 = param_2[0x11];
    uVar7 = param_2[0x12];
    uVar20 = param_2[0x13];
    uVar8 = param_2[0x14];
    uVar21 = param_2[0x15];
    uVar9 = param_2[0x16];
    uVar22 = param_2[0x17];
    uVar10 = param_2[0x18];
    uVar23 = param_2[0x19];
    uVar25 = param_2[0x1a];
    FUN_1015d2b70(uVar26);
    *param_1 = uVar26;
    param_1[1] = uVar11;
    param_1[2] = uVar28;
    param_1[3] = uVar12;
    param_1[4] = uVar29;
    param_1[5] = uVar13;
    param_1[6] = uVar1;
    param_1[7] = uVar14;
    param_1[8] = uVar2;
    param_1[9] = uVar15;
    param_1[10] = uVar3;
    param_1[0xb] = uVar16;
    param_1[0xc] = uVar4;
    param_1[0xd] = uVar17;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar18;
    param_1[0x10] = uVar6;
    param_1[0x11] = uVar19;
    param_1[0x12] = uVar7;
    param_1[0x13] = uVar20;
    param_1[0x14] = uVar8;
    param_1[0x15] = uVar21;
    param_1[0x16] = uVar9;
    param_1[0x17] = uVar22;
    param_1[0x18] = uVar10;
    param_1[0x19] = uVar23;
    param_1[0x1a] = uVar25;
    *(char *)(param_1 + 0x1b) = cVar24;
  }
  uVar26 = param_2[0x1c];
  uVar28 = param_2[0x1d];
  func_0x00010006c00c(uVar26,uVar28);
  param_1[0x1c] = uVar26;
  param_1[0x1d] = uVar28;
  uVar27 = param_2[0x1f];
  if (uVar27 >> 0x3c < 0xf) {
    uVar26 = param_2[0x1e];
    func_0x00010006c00c(uVar26,uVar27);
    param_1[0x1e] = uVar26;
    param_1[0x1f] = uVar27;
    uVar27 = param_2[0x23];
    if (uVar27 >> 0x3c < 0xf) {
      param_1[0x20] = param_2[0x20];
      *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
      uVar26 = param_2[0x22];
      func_0x00010006c00c(uVar26,uVar27);
      param_1[0x22] = uVar26;
      param_1[0x23] = uVar27;
      uVar27 = param_2[0x26];
      if (uVar27 >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        uVar26 = param_2[0x25];
        func_0x00010006c00c(uVar26,uVar27);
        param_1[0x25] = uVar26;
        param_1[0x26] = uVar27;
        goto LAB_1015d3bb8;
      }
    }
    else {
      uVar26 = param_2[0x20];
      uVar29 = param_2[0x23];
      uVar28 = param_2[0x22];
      param_1[0x21] = param_2[0x21];
      param_1[0x20] = uVar26;
      param_1[0x23] = uVar29;
      param_1[0x22] = uVar28;
    }
    uVar26 = param_2[0x24];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar26;
    param_1[0x26] = param_2[0x26];
  }
  else {
    uVar26 = param_2[0x22];
    uVar29 = param_2[0x25];
    uVar28 = param_2[0x24];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar26;
    param_1[0x25] = uVar29;
    param_1[0x24] = uVar28;
    param_1[0x26] = param_2[0x26];
    uVar29 = param_2[0x1e];
    uVar28 = param_2[0x21];
    uVar26 = param_2[0x20];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar29;
    param_1[0x21] = uVar28;
    param_1[0x20] = uVar26;
  }
LAB_1015d3bb8:
  uVar27 = param_2[0x29];
  if (uVar27 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
    uVar26 = param_2[0x28];
    func_0x00010006c00c(uVar26,uVar27);
    param_1[0x28] = uVar26;
    param_1[0x29] = uVar27;
  }
  else {
    uVar26 = param_2[0x27];
    param_1[0x28] = param_2[0x28];
    param_1[0x27] = uVar26;
    param_1[0x29] = param_2[0x29];
  }
  return param_1;
}



/* Entry: 1015d4264; end: 1015d42c3;  */

undefined8 FUN_1015d4264(undefined8 param_1)

{
  FUN_1015d4650(param_1,&UNK_1103e3fd0);
  return param_1;
}



/* Entry: 1015d42c4; end: 1015d42cb;  */

void FUN_1015d42c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x150);
  return;
}



/* Entry: 1015d42cc; end: 1015d4557;  */

undefined8 * FUN_1015d42cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  cVar6 = *(char *)(param_1 + 0x1b);
  if (cVar6 == -1) {
LAB_1015d4398:
    uVar8 = param_2[0x14];
    uVar13 = param_2[0x17];
    uVar15 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar8;
    param_1[0x17] = uVar13;
    param_1[0x16] = uVar15;
    uVar8 = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar8;
    uVar8 = *(undefined8 *)((long)param_2 + 0xc9);
    *(undefined8 *)((long)param_1 + 0xd1) = *(undefined8 *)((long)param_2 + 0xd1);
    *(undefined8 *)((long)param_1 + 0xc9) = uVar8;
    uVar8 = param_2[0xc];
    uVar13 = param_2[0xf];
    uVar15 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar8;
    param_1[0xf] = uVar13;
    param_1[0xe] = uVar15;
    uVar8 = param_2[0x10];
    uVar13 = param_2[0x13];
    uVar15 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar8;
    param_1[0x13] = uVar13;
    param_1[0x12] = uVar15;
    uVar8 = param_2[4];
    uVar13 = param_2[7];
    uVar15 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar13;
    param_1[6] = uVar15;
    uVar8 = param_2[8];
    uVar13 = param_2[0xb];
    uVar15 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar8;
    param_1[0xb] = uVar13;
    param_1[10] = uVar15;
    uVar8 = *param_2;
    uVar13 = param_2[3];
    uVar15 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[3] = uVar13;
    param_1[2] = uVar15;
  }
  else {
    cVar7 = *(char *)(param_2 + 0x1b);
    if (cVar7 == -1) {
      func_0x0001015d4264(param_1);
      goto LAB_1015d4398;
    }
    uVar10 = param_2[0x1a];
    uVar8 = *param_1;
    uVar2 = param_1[1];
    uVar15 = param_1[2];
    uVar3 = param_1[3];
    uVar13 = param_1[4];
    uVar4 = param_1[5];
    uVar1 = param_1[6];
    uVar5 = param_1[7];
    uVar14 = param_1[9];
    uVar12 = param_1[8];
    uVar17 = param_1[0xb];
    uVar16 = param_1[10];
    uVar19 = param_1[0xd];
    uVar18 = param_1[0xc];
    uVar21 = param_1[0xf];
    uVar20 = param_1[0xe];
    uVar23 = param_1[0x11];
    uVar22 = param_1[0x10];
    uVar25 = param_1[0x13];
    uVar24 = param_1[0x12];
    uVar27 = param_1[0x15];
    uVar26 = param_1[0x14];
    uVar29 = param_1[0x17];
    uVar28 = param_1[0x16];
    uVar31 = param_1[0x19];
    uVar30 = param_1[0x18];
    uVar11 = param_1[0x1a];
    uVar32 = *param_2;
    uVar34 = param_2[3];
    uVar33 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar32;
    param_1[3] = uVar34;
    param_1[2] = uVar33;
    uVar32 = param_2[4];
    uVar34 = param_2[7];
    uVar33 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar32;
    param_1[7] = uVar34;
    param_1[6] = uVar33;
    uVar32 = param_2[8];
    uVar34 = param_2[0xb];
    uVar33 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar32;
    param_1[0xb] = uVar34;
    param_1[10] = uVar33;
    uVar32 = param_2[0xc];
    uVar34 = param_2[0xf];
    uVar33 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar32;
    param_1[0xf] = uVar34;
    param_1[0xe] = uVar33;
    uVar32 = param_2[0x10];
    uVar34 = param_2[0x13];
    uVar33 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar32;
    param_1[0x13] = uVar34;
    param_1[0x12] = uVar33;
    uVar32 = param_2[0x14];
    uVar34 = param_2[0x17];
    uVar33 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar32;
    param_1[0x17] = uVar34;
    param_1[0x16] = uVar33;
    uVar32 = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar32;
    param_1[0x1a] = uVar10;
    *(char *)(param_1 + 0x1b) = cVar7;
    FUN_1015d3274(uVar8,uVar2,uVar15,uVar3,uVar13,uVar4,uVar1,uVar5,uVar12,uVar14,uVar16,uVar17,
                  uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,
                  uVar29,uVar30,uVar31,uVar11,cVar6);
  }
  uVar8 = param_1[0x1c];
  uVar15 = param_1[0x1d];
  uVar13 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar13;
  func_0x00010006c090(uVar8,uVar15);
  if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
    uVar9 = param_2[0x1f];
    if (uVar9 >> 0x3c < 0xf) {
      uVar8 = param_1[0x1e];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1f] = uVar9;
      func_0x00010006c090(uVar8);
      if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
        uVar9 = param_2[0x23];
        if (0xe < uVar9 >> 0x3c) {
          FUN_10155b894(param_1 + 0x20);
          goto LAB_1015d4464;
        }
        param_1[0x20] = param_2[0x20];
        *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
        uVar8 = param_1[0x22];
        param_1[0x22] = param_2[0x22];
        param_1[0x23] = uVar9;
        func_0x00010006c090(uVar8);
        if ((ulong)param_1[0x26] >> 0x3c < 0xf) {
          uVar9 = param_2[0x26];
          if (uVar9 >> 0x3c < 0xf) {
            *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
            uVar8 = param_1[0x25];
            param_1[0x25] = param_2[0x25];
            param_1[0x26] = uVar9;
            func_0x00010006c090(uVar8);
            goto LAB_1015d447c;
          }
          FUN_101599dcc(param_1 + 0x24);
        }
      }
      else {
LAB_1015d4464:
        uVar8 = param_2[0x20];
        uVar13 = param_2[0x23];
        uVar15 = param_2[0x22];
        param_1[0x21] = param_2[0x21];
        param_1[0x20] = uVar8;
        param_1[0x23] = uVar13;
        param_1[0x22] = uVar15;
      }
      uVar8 = param_2[0x24];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar8;
      param_1[0x26] = param_2[0x26];
      goto LAB_1015d447c;
    }
    func_0x0001015cb02c(param_1 + 0x1e);
  }
  uVar8 = param_2[0x22];
  uVar13 = param_2[0x25];
  uVar15 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar8;
  param_1[0x25] = uVar13;
  param_1[0x24] = uVar15;
  param_1[0x26] = param_2[0x26];
  uVar13 = param_2[0x1e];
  uVar15 = param_2[0x21];
  uVar8 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar13;
  param_1[0x21] = uVar15;
  param_1[0x20] = uVar8;
LAB_1015d447c:
  if ((ulong)param_1[0x29] >> 0x3c < 0xf) {
    uVar9 = param_2[0x29];
    if (uVar9 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
      uVar8 = param_1[0x28];
      param_1[0x28] = param_2[0x28];
      param_1[0x29] = uVar9;
      func_0x00010006c090(uVar8);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 0x27);
  }
  uVar8 = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar8;
  param_1[0x29] = param_2[0x29];
  return param_1;
}



/* Entry: 1015d4558; end: 1015d464f;  */

int FUN_1015d4558(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf1 < param_2) && ((char)param_1[0x54] != '\0')) {
    return *param_1 + 0xf2;
  }
  iVar1 = (*(byte *)(param_1 + 0x36) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 0x36) < 0xe) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 1015d4650; end: 1015d46b7;  */

void FUN_1015d4650(undefined8 *param_1)

{
  FUN_1015d3274(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],param_1[0x18],param_1[0x19],
                param_1[0x1a],*(undefined1 *)(param_1 + 0x1b));
  return;
}



/* Entry: 1015d46b8; end: 1015d49db;  */

undefined8 * FUN_1015d46b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 uVar27;
  undefined8 uVar28;
  
  uVar1 = *param_2;
  uVar14 = param_2[1];
  uVar2 = param_2[2];
  uVar15 = param_2[3];
  uVar3 = param_2[4];
  uVar16 = param_2[5];
  uVar4 = param_2[6];
  uVar17 = param_2[7];
  uVar5 = param_2[8];
  uVar18 = param_2[9];
  uVar6 = param_2[10];
  uVar19 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar20 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar21 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar22 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar23 = param_2[0x13];
  uVar11 = param_2[0x14];
  uVar24 = param_2[0x15];
  uVar12 = param_2[0x16];
  uVar25 = param_2[0x17];
  uVar13 = param_2[0x18];
  uVar26 = param_2[0x19];
  uVar28 = param_2[0x1a];
  uVar27 = *(undefined1 *)(param_2 + 0x1b);
  FUN_1015d2b70(uVar1,uVar14);
  *param_1 = uVar1;
  param_1[1] = uVar14;
  param_1[2] = uVar2;
  param_1[3] = uVar15;
  param_1[4] = uVar3;
  param_1[5] = uVar16;
  param_1[6] = uVar4;
  param_1[7] = uVar17;
  param_1[8] = uVar5;
  param_1[9] = uVar18;
  param_1[10] = uVar6;
  param_1[0xb] = uVar19;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar20;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar21;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar22;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar23;
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar24;
  param_1[0x16] = uVar12;
  param_1[0x17] = uVar25;
  param_1[0x18] = uVar13;
  param_1[0x19] = uVar26;
  param_1[0x1a] = uVar28;
  *(undefined1 *)(param_1 + 0x1b) = uVar27;
  return param_1;
}



/* Entry: 1015d49dc; end: 1015d4a1f;  */

void FUN_1015d49dc(undefined8 *param_1,undefined8 *param_2)

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
  uVar5 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  uVar2 = param_2[0x15];
  uVar1 = param_2[0x14];
  uVar4 = param_2[0x17];
  uVar3 = param_2[0x16];
  uVar6 = param_2[0x19];
  uVar5 = param_2[0x18];
  uVar7 = *(undefined8 *)((long)param_2 + 0xc9);
  *(undefined8 *)((long)param_1 + 0xd1) = *(undefined8 *)((long)param_2 + 0xd1);
  *(undefined8 *)((long)param_1 + 0xc9) = uVar7;
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar3;
  param_1[0x19] = uVar6;
  param_1[0x18] = uVar5;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  return;
}



/* Entry: 1015d4a20; end: 1015d4ae3;  */

undefined8 * FUN_1015d4a20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  uVar11 = param_2[0x1a];
  uVar7 = *(undefined1 *)(param_2 + 0x1b);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar18 = param_1[0xd];
  uVar17 = param_1[0xc];
  uVar20 = param_1[0xf];
  uVar19 = param_1[0xe];
  uVar22 = param_1[0x11];
  uVar21 = param_1[0x10];
  uVar24 = param_1[0x13];
  uVar23 = param_1[0x12];
  uVar26 = param_1[0x15];
  uVar25 = param_1[0x14];
  uVar28 = param_1[0x17];
  uVar27 = param_1[0x16];
  uVar30 = param_1[0x19];
  uVar29 = param_1[0x18];
  uVar12 = param_1[0x1a];
  uVar8 = *(undefined1 *)(param_1 + 0x1b);
  uVar31 = *param_2;
  uVar33 = param_2[3];
  uVar32 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar31;
  param_1[3] = uVar33;
  param_1[2] = uVar32;
  uVar31 = param_2[4];
  uVar33 = param_2[7];
  uVar32 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar31;
  param_1[7] = uVar33;
  param_1[6] = uVar32;
  uVar31 = param_2[8];
  uVar33 = param_2[0xb];
  uVar32 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar31;
  param_1[0xb] = uVar33;
  param_1[10] = uVar32;
  uVar31 = param_2[0xc];
  uVar33 = param_2[0xf];
  uVar32 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar31;
  param_1[0xf] = uVar33;
  param_1[0xe] = uVar32;
  uVar31 = param_2[0x10];
  uVar33 = param_2[0x13];
  uVar32 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar31;
  param_1[0x13] = uVar33;
  param_1[0x12] = uVar32;
  uVar31 = param_2[0x14];
  uVar33 = param_2[0x17];
  uVar32 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar31;
  param_1[0x17] = uVar33;
  param_1[0x16] = uVar32;
  uVar31 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar31;
  param_1[0x1a] = uVar11;
  *(undefined1 *)(param_1 + 0x1b) = uVar7;
  FUN_1015d3274(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar13,uVar14,uVar15,uVar16,uVar17,
                uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,
                uVar30,uVar12,uVar8);
  return param_1;
}



/* Entry: 1015d4ae4; end: 1015d4bcb;  */

int FUN_1015d4ae4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf2 < param_2) && (*(char *)((long)param_1 + 0xd9) != '\0')) {
    return *param_1 + 0xf3;
  }
  uVar1 = *(byte *)(param_1 + 0x36) ^ 0xff;
  if (*(byte *)(param_1 + 0x36) < 0xe) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015d4bcc; end: 1015d4c2b;  */

/* WARNING: Possible PIC construction at 0x0001015d4be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d4be8) */
/* WARNING: Removing unreachable block (ram,0x0001015d4bf8) */
/* WARNING: Removing unreachable block (ram,0x0001015d4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001015d4c10) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015d4bcc(ulong *param_1)

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



/* Entry: 1015d4c2c; end: 1015d4f9b;  */

undefined8 * FUN_1015d4c2c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[5];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    uVar2 = param_2[4];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[4] = uVar2;
    param_1[5] = uVar1;
    uVar1 = param_2[8];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      uVar2 = param_2[7];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[7] = uVar2;
      param_1[8] = uVar1;
      return param_1;
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
  }
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[8] = param_2[8];
  return param_1;
}



/* Entry: 1015d4f9c; end: 1015d505f;  */

int FUN_1015d4f9c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015d5060; end: 1015d545f;  */

void FUN_1015d5060(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96730c;
  func_0x000107c61520(&DAT_10d96730c,&UNK_1103e4048);
  puRam0000000112db8158 = puVar1;
  return;
}



/* Entry: 1015d5460; end: 1015d5487;  */

void FUN_1015d5460(undefined8 *param_1)

{
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
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
  return;
}



/* Entry: 1015d5488; end: 1015d54d3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015d5488(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 1015d54d4; end: 1015d5537;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015d54d4(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
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



/* Entry: 1015d5538; end: 1015d5563;  */

void FUN_1015d5538(undefined8 *param_1)

{
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
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
  return;
}



/* Entry: 1015d5564; end: 1015d55d7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015d5564(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 1015d55d8; end: 1015d55eb;  */

void FUN_1015d55d8(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((param_3 & 0xf000000000000007) == 0xf000000000000007)) {
    return;
  }
  func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1015d55ec; end: 1015d5633;  */

void FUN_1015d55ec(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9676c0,0x23,2);
  uRam0000000113800c10 = uStack_38;
  uRam0000000113800c08 = uStack_40;
  uRam0000000113800c20 = uStack_28;
  uRam0000000113800c18 = uStack_30;
  uRam0000000113800c30 = uStack_18;
  uRam0000000113800c28 = uStack_20;
  return;
}



/* Entry: 1015d5634; end: 1015d56cb;  */

void FUN_1015d5634(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1015d5688:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001015d56a4;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1015d5670;
code_r0x0001015d56a4:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_1015d5670:
    (*pcVar3)();
  }
  goto LAB_1015d5688;
}



/* Entry: 1015d56cc; end: 1015d576f;  */

void FUN_1015d56cc(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1015d5770; end: 1015d57af;  */

void FUN_1015d5770(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 1015d57b0; end: 1015d57df;  */

undefined1  [16] FUN_1015d57b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1015d57e0; end: 1015d5813;  */

void FUN_1015d57e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1015d5814; end: 1015d5827;  */

undefined1  [16] FUN_1015d5814(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1015d5824;
  return auVar1;
}



/* Entry: 1015d5828; end: 1015d584f;  */

void FUN_1015d5828(void)

{
  FUN_1015d5634();
  return;
}



/* Entry: 1015d5850; end: 1015d5853;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015d5850(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d5854; end: 1015d588b;  */

uint FUN_1015d5854(long param_1,long param_2)

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
  FUN_1015d5ecc();
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



/* Entry: 1015d588c; end: 1015d58d3;  */

uint FUN_1015d588c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_1015d5b08(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015d58d4; end: 1015d5973;  */

/* WARNING: Possible PIC construction at 0x0001015d5920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d5930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d5924) */
/* WARNING: Removing unreachable block (ram,0x0001015d5934) */

void FUN_1015d58d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8210 != -1) {
    func_0x000107c61568(0x112db8210,FUN_1015d55ec);
  }
  uVar5 = uRam0000000113800c30;
  uVar4 = uRam0000000113800c28;
  uVar3 = uRam0000000113800c20;
  uVar2 = uRam0000000113800c18;
  uVar1 = uRam0000000113800c10;
  *param_1 = uRam0000000113800c08;
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



/* Entry: 1015d5974; end: 1015d59af;  */

void FUN_1015d5974(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8230;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8230,&UNK_10d9676b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015d59b0; end: 1015d5ac3;  */

void FUN_1015d59b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015d5ac4; end: 1015d5b07;  */

uint FUN_1015d5ac4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_1015d5b08(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015d5b08; end: 1015d5b83;  */

/* WARNING: Possible PIC construction at 0x0001015d5b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015d5b3c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015d5b08(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
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
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
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
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
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
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
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
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
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



/* Entry: 1015d5b84; end: 1015d5bc3;  */

void FUN_1015d5b84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967600;
  func_0x000107c61520(&UNK_10d967600,&UNK_1103e41f0);
  puRam0000000112db8218 = puVar1;
  return;
}



/* Entry: 1015d5bc4; end: 1015d5be7;  */

void FUN_1015d5bc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d5be8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015d5be8; end: 1015d5c27;  */

void FUN_1015d5be8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9675d8;
  func_0x000107c61520(&UNK_10d9675d8,&UNK_1103e41f0);
  puRam0000000112db8220 = puVar1;
  return;
}



/* Entry: 1015d5c28; end: 1015d5c53;  */

void FUN_1015d5c28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d5b84();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015d5260();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015d5c54; end: 1015d5c57;  */

void FUN_1015d5c54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967640;
  func_0x000107c61520(&UNK_10d967640,&UNK_1103e41f0);
  puRam0000000112db8228 = puVar1;
  return;
}


