/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10163ccc8; end: 10163ccfb;  */

void FUN_10163ccc8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  *(undefined8 *)(unaff_x20 + 0x90) = param_1;
  *(undefined8 *)(unaff_x20 + 0x98) = param_2;
  return;
}



/* Entry: 10163ccfc; end: 10163cd0f;  */

undefined1  [16] FUN_10163ccfc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x90;
  auVar1._0_8_ = 0x10163cd0c;
  return auVar1;
}



/* Entry: 10163cd10; end: 10163cd23;  */

void FUN_10163cd10(void)

{
  FUN_10163bdf8();
  return;
}



/* Entry: 10163cd24; end: 10163cd73;  */

void FUN_10163cd24(void)

{
  FUN_10163c874();
  return;
}



/* Entry: 10163cd74; end: 10163cd77;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10163cd74(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10163cd78; end: 10163cdaf;  */

uint FUN_10163cd78(long param_1,long param_2)

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
  func_0x00010164038c();
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



/* Entry: 10163cdb0; end: 10163ce2f;  */

uint FUN_10163cdb0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_28 = param_1[0x13];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_c8 = unaff_x20[0x13];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_10163dbb0(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10163ce30; end: 10163cecf;  */

/* WARNING: Possible PIC construction at 0x00010163ce7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010163ce8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163ce80) */
/* WARNING: Removing unreachable block (ram,0x00010163ce90) */

void FUN_10163ce30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbf70 != -1) {
    func_0x000107c61568(0x112dbbf70,FUN_10163bdb0);
  }
  uVar5 = uRam0000000113802120;
  uVar4 = uRam0000000113802118;
  uVar3 = uRam0000000113802110;
  uVar2 = uRam0000000113802108;
  uVar1 = uRam0000000113802100;
  *param_1 = uRam00000001138020f8;
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



/* Entry: 10163ced0; end: 10163cf0b;  */

void FUN_10163ced0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbc1b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbc1b0,&UNK_10d973168);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10163cf0c; end: 10163d047;  */

void FUN_10163cf0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
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
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_38 = unaff_x20[0x13];
  uStack_40 = unaff_x20[0x12];
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
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10163d048; end: 10163d0c7;  */

uint FUN_10163d048(undefined8 *param_1,undefined8 *param_2)

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
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
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
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
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
  FUN_10163dbb0(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10163d0c8; end: 10163d10f;  */

void FUN_10163d0c8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d973180,0x52,2);
  uRam0000000113802130 = uStack_38;
  uRam0000000113802128 = uStack_40;
  uRam0000000113802140 = uStack_28;
  uRam0000000113802138 = uStack_30;
  uRam0000000113802150 = uStack_18;
  uRam0000000113802148 = uStack_20;
  return;
}



/* Entry: 10163d110; end: 10163d23f;  */

void FUN_10163d110(undefined8 param_1,long param_2,long param_3)

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
        puVar3 = &UNK_110734b68;
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_10163d198;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x48;
          goto LAB_10163d198;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x80;
        }
        else {
          if (lVar1 != 4) goto LAB_10163d1ac;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x98;
        }
        puVar3 = &UNK_110790a00;
LAB_10163d198:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10163d1ac:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10163d240; end: 10163d2e3;  */

void FUN_10163d240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10163d2e4();
  if (unaff_x21 == 0) {
    FUN_10163d380();
    FUN_10163d41c();
    FUN_10163d4a4();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10163d2e4; end: 10163d37f;  */

void FUN_10163d2e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 10163d380; end: 10163d41b;  */

void FUN_10163d380(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x60);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,2,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10163d41c; end: 10163d4a3;  */

void FUN_10163d41c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x90);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10163d4a4; end: 10163d52b;  */

void FUN_10163d4a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,4,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10163d52c; end: 10163d58f;  */

void FUN_10163d52c(undefined8 *param_1)

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
  param_1[0xc] = 0xf000000000000000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xf000000000000000;
  return;
}



/* Entry: 10163d590; end: 10163d5bf;  */

undefined1  [16] FUN_10163d590(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10163d5c0; end: 10163d5f3;  */

void FUN_10163d5c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10163d5f4; end: 10163d607;  */

undefined8 FUN_10163d5f4(void)

{
  return 0x10163d604;
}



/* Entry: 10163d608; end: 10163d61b;  */

void FUN_10163d608(void)

{
  FUN_10163d110();
  return;
}



/* Entry: 10163d61c; end: 10163d673;  */

void FUN_10163d61c(void)

{
  FUN_10163d240();
  return;
}



/* Entry: 10163d674; end: 10163d677;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10163d674(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10163d678; end: 10163d6af;  */

uint FUN_10163d678(long param_1,long param_2)

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
  FUN_10164034c();
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



/* Entry: 10163d6b0; end: 10163d73f;  */

uint FUN_10163d6b0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
  uStack_28 = param_1[0x15];
  uStack_30 = param_1[0x14];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_f8 = unaff_x20[0x11];
  uStack_100 = unaff_x20[0x10];
  uStack_e8 = unaff_x20[0x13];
  uStack_f0 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[0x15];
  uStack_e0 = unaff_x20[0x14];
  uStack_138 = unaff_x20[9];
  uStack_140 = unaff_x20[8];
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_118 = unaff_x20[0xd];
  uStack_120 = unaff_x20[0xc];
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  uStack_178 = unaff_x20[1];
  uStack_180 = *unaff_x20;
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_158 = unaff_x20[5];
  uStack_160 = unaff_x20[4];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  FUN_10163df54(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 10163d740; end: 10163d7df;  */

/* WARNING: Possible PIC construction at 0x00010163d78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010163d79c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163d790) */
/* WARNING: Removing unreachable block (ram,0x00010163d7a0) */

void FUN_10163d740(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbf88 != -1) {
    func_0x000107c61568(0x112dbbf88,FUN_10163d0c8);
  }
  uVar5 = uRam0000000113802150;
  uVar4 = uRam0000000113802148;
  uVar3 = uRam0000000113802140;
  uVar2 = uRam0000000113802138;
  uVar1 = uRam0000000113802130;
  *param_1 = uRam0000000113802128;
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



/* Entry: 10163d7e0; end: 10163d81b;  */

void FUN_10163d7e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbc1a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbc1a0,&UNK_10d973160);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10163d81c; end: 10163d967;  */

void FUN_10163d81c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_128 [72];
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
  
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_48 = unaff_x20[0x13];
  uStack_50 = unaff_x20[0x12];
  uStack_38 = unaff_x20[0x15];
  uStack_40 = unaff_x20[0x14];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  func_0x000107c6068c(auStack_128,0);
  func_0x000107c5fa50(auStack_128,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10163d968; end: 10163d9f7;  */

uint FUN_10163d968(undefined8 *param_1,undefined8 *param_2)

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
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_d8 = param_1[0x15];
  uStack_e0 = param_1[0x14];
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
  uStack_28 = param_2[0x15];
  uStack_30 = param_2[0x14];
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
  FUN_10163df54(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 10163d9f8; end: 10163da03;  */

void FUN_10163d9f8(void)

{
  return;
}



/* Entry: 10163da04; end: 10163da23;  */

void FUN_10163da04(void)

{
  func_0x000107c61168(&PTR_PTR_112dbc040);
  return;
}



/* Entry: 10163da24; end: 10163da57;  */

int FUN_10163da24(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x78);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10163da58; end: 10163dbaf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10163da58(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte **ppbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
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
  byte *pbStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pbVar10 = (byte *)*param_1;
  pbVar26 = (byte *)param_1[1];
  uVar16 = param_1[2];
  uVar23 = (uint)(uVar16 >> 0x3c) & 3;
  if (uVar23 < 2) {
    if (uVar23 == 0) {
      uVar19 = param_2[2];
      if ((uVar19 & 0x3000000000000000) == 0) {
        lVar25 = *param_2;
        uVar17 = param_2[1];
        uVar16 = uVar16 & 0xcfffffffffffffff;
        if (uVar16 != uVar19) {
          func_0x000107c6157c(uVar16);
          func_0x000107c6157c(uVar19);
          uVar12 = uVar16;
          func_0x00010358dbd4(uVar16,uVar19);
          func_0x000107c61574(uVar19);
          func_0x000107c61574(uVar16);
          if ((uVar12 & 1) == 0) {
            return (byte *)0x0;
          }
        }
        goto FUN_100e25fcc;
      }
    }
    else {
      uStack_68 = uVar16 & 0xcfffffffffffffff;
      uStack_58 = param_1[4];
      uStack_60 = param_1[3];
      if ((param_2[2] & 0x3000000000000000U) == 0x1000000000000000) {
        uStack_d0 = param_2[2] & 0xcfffffffffffffff;
        lStack_d8 = param_2[1];
        lStack_e0 = *param_2;
        lStack_c0 = param_2[4];
        lStack_c8 = param_2[3];
        lStack_b0 = param_2[6];
        lStack_b8 = param_2[5];
        lStack_a0 = param_2[8];
        lStack_a8 = param_2[7];
        lStack_90 = param_2[10];
        lStack_98 = param_2[9];
        lStack_80 = param_2[0xc];
        lStack_88 = param_2[0xb];
        ppbVar11 = &pbStack_78;
        pbStack_78 = pbVar10;
        pbStack_70 = pbVar26;
        FUN_101640774(ppbVar11,&lStack_e0);
        uVar23 = (uint)ppbVar11;
        goto LAB_10163dba0;
      }
    }
  }
  else if (uVar23 == 2) {
    if ((param_2[2] & 0x3000000000000000U) == 0x2000000000000000) {
      lVar25 = *param_2;
      uVar17 = param_2[1];
      uVar16 = uVar16 & 0xcfffffffffffffff;
      uVar19 = param_2[2] & 0xcfffffffffffffff;
      if (uVar16 != uVar19) {
        func_0x000107c6157c(uVar16);
        func_0x000107c6157c(uVar19);
        uVar12 = uVar16;
        FUN_101647088(uVar16,uVar19);
        func_0x000107c61574(uVar19);
        func_0x000107c61574(uVar16);
        if ((uVar12 & 1) == 0) {
          return (byte *)0x0;
        }
      }
FUN_100e25fcc:
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
        uVar23 = (uint)((ulong)pbVar26 >> 0x20);
        uVar20 = uVar23 >> 0x1e;
        uVar4 = (uint)(uVar17 >> 0x20);
        uVar22 = uVar4 >> 0x1e;
        iVar6 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar16 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar7 = (byte *)0x1;
        }
        else if (uVar23 >> 0x1e < 2) {
          if (uVar20 == 0) {
            uVar16 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar21 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar21,iVar6)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar5)();
            }
            uVar16 = (ulong)(iVar21 - iVar6);
          }
joined_r0x000100e26170:
          if (1 < uVar4 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar22 == 0) {
            uVar19 = uVar17 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar21 = (int)((ulong)lVar25 >> 0x20);
          if (SBORROW4(iVar21,(int)lVar25)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar5)();
          }
          if (uVar16 == (long)(iVar21 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
          pbVar7 = (byte *)0x0;
        }
        else {
          if (uVar20 == 2) {
            uVar16 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar5)();
            }
            goto joined_r0x000100e26170;
          }
          uVar16 = 0;
          if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar22 == 2) {
            uVar19 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
            if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar5)();
            }
LAB_100e2608c:
            if (uVar16 != uVar19) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar16 < 1) goto LAB_100e26128;
            if (uVar20 < 2) {
              if (uVar20 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar26;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar26 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar26 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar26 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar26 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar26 >> 0x28);
                pbVar13 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                              (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar7 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto LAB_100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar6;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar5)();
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
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar5)();
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
              if (uVar20 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar13 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
              }
              lVar27 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar27,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar5)();
                }
                pbVar10 = pbVar10 + (lVar27 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar27;
              if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar5)();
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
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar25,
                          uVar17);
            pbVar7 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar17;
          }
          else {
            pbVar7 = (byte *)(ulong)(uVar16 == 0);
          }
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          return pbVar7;
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
        pbVar9 = *(byte **)pbVar7;
        pbVar10 = *(byte **)(pbVar7 + 8);
        pbVar24 = *(byte **)(pbVar7 + 0x18);
        bVar28 = pbVar7[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar7 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar7 + 0x15) << 0x28 | (ulong)pbVar7[0x10]);
        pbVar14 = pbVar10;
        if (bVar28 < 3) {
          if (bVar28 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar25 = *(long *)pbVar13;
              uVar8 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar9,lVar25,uVar8);
              return (byte *)(ulong)((uint)pbVar9 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar28 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar18 = *(byte **)(pbVar13 + 0x10);
            lVar25 = *(long *)pbVar13;
            uVar8 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar9,lVar25,uVar8);
            if (((ulong)pbVar9 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar9 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar18 = *(byte **)(pbVar13 + 8);
            lVar25 = *(long *)(pbVar13 + 0x18);
            if ((pbVar9 == pbVar15) && (pbVar10 == pbVar18)) {
              if (((pbVar7[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
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
          )(pbVar9,pbVar14,pbVar15,pbVar18,0);
          return pbVar9;
        }
        lVar27 = *(long *)(pbVar7 + 0x20);
        if (bVar28 < 5) {
          if (bVar28 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar18 = *(byte **)(pbVar13 + 8);
            if (((pbVar9 == pbVar15) && (pbVar10 == pbVar18)) &&
               (pbVar9 = pbVar26, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar18 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar9 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar13 + 0x10);
          lVar25 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar9 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar27 != 0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar25)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar13 + 0x18),lVar25,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar28 != 5) {
          if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar9 == (byte *)0x0) &&
              lVar27 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar27 = *(long *)(pbVar13 + 0x20);
            lVar25 = *(long *)(pbVar13 + 0x18);
            bVar28 = pbVar13[8] | (byte)lVar25;
            bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
            bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
            bVar36 = pbVar13[0x10] | (byte)lVar27;
            bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
            bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
            bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
            bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
            bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
            bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
            bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
                                                                               bVar28 | auVar44[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar9 == (byte *)0x1) &&
             (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar27 == 0)) {
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
          lVar27 = *(long *)(pbVar13 + 0x20);
          lVar25 = *(long *)(pbVar13 + 0x18);
          bVar28 = pbVar13[8] | (byte)lVar25;
          bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
          bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
          bVar36 = pbVar13[0x10] | (byte)lVar27;
          bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
          bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
          bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
          bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
          bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
          bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
          bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
                                                                         CONCAT11(bVar29 | auVar44[1
                                                  ],bVar28 | auVar44[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 8);
        uVar17 = *(ulong *)(pbVar13 + 0x10);
        lVar27 = *(long *)pbVar13;
        uVar8 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar9,lVar27,uVar8);
        if (((ulong)pbVar9 & 1) == 0) {
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
  else if (((param_2[2] ^ 0xffffffffffffffffU) & 0x3000000000000000) == 0) {
    lVar25 = *param_2;
    uVar17 = param_2[1];
    uVar16 = uVar16 & 0xcfffffffffffffff;
    uVar19 = param_2[2] & 0xcfffffffffffffff;
    if (uVar16 != uVar19) {
      func_0x000107c6157c(uVar16);
      func_0x000107c6157c(uVar19);
      uVar12 = uVar16;
      func_0x000103586ecc(uVar16,uVar19);
      func_0x000107c61574(uVar19);
      func_0x000107c61574(uVar16);
      if ((uVar12 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    goto FUN_100e25fcc;
  }
  uVar23 = 0;
LAB_10163dba0:
  return (byte *)(ulong)(uVar23 & 1);
}



/* Entry: 10163dbb0; end: 10163df03;  */

uint FUN_10163dbb0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar5;
  long lVar6;
  undefined1 auStack_430 [112];
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
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  char cStack_358;
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
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined8 uStack_2ef;
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
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  char cStack_278;
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
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined8 uStack_20f;
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
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
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
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
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
  undefined8 uVar4;
  
  uStack_2a8 = param_1[7];
  uStack_2b0 = param_1[6];
  uStack_148 = param_1[9];
  uStack_150 = param_1[8];
  uStack_298 = param_1[9];
  uStack_2a0 = param_1[8];
  uStack_140 = param_1[10];
  uStack_138 = (undefined1)param_1[0xb];
  uStack_12f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_188 = param_1[1];
  uStack_190 = *param_1;
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  uStack_168 = param_1[5];
  uStack_170 = param_1[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  uStack_2d8 = param_1[1];
  uStack_2e0 = *param_1;
  uStack_2c8 = param_1[3];
  uStack_2d0 = param_1[2];
  uStack_2b8 = param_1[5];
  uStack_2c0 = param_1[4];
  uStack_1f8 = param_2[1];
  uStack_200 = *param_2;
  uStack_1e8 = param_2[3];
  uStack_1f0 = param_2[2];
  uStack_19f = *(undefined8 *)((long)param_2 + 0x61);
  uStack_1a0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_318 = param_2[7];
  uStack_320 = param_2[6];
  uStack_1b8 = param_2[9];
  uStack_1c0 = param_2[8];
  uStack_308 = param_2[9];
  uStack_310 = param_2[8];
  uStack_1b0 = param_2[10];
  uStack_1a8 = (undefined1)param_2[0xb];
  uStack_1a7 = (undefined7)((ulong)param_2[0xb] >> 8);
  uStack_1d8 = param_2[5];
  uStack_1e0 = param_2[4];
  uStack_1c8 = param_2[7];
  uStack_1d0 = param_2[6];
  uStack_348 = param_2[1];
  uStack_350 = *param_2;
  uStack_338 = param_2[3];
  uStack_340 = param_2[2];
  uStack_328 = param_2[5];
  uStack_330 = param_2[4];
  uStack_290 = param_1[10];
  uStack_288 = (undefined1)param_1[0xb];
  uStack_27f = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
  cStack_278 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
  uStack_287 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_280 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_2ef = *(undefined8 *)((long)param_2 + 0x61);
  uStack_210 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_300 = param_2[10];
  uStack_218 = (undefined1)param_2[0xb];
  uStack_217 = (undefined7)((ulong)param_2[0xb] >> 8);
  uStack_20f._7_1_ = (char)((ulong)uStack_2ef >> 0x38);
  uStack_270 = uStack_350;
  uStack_268 = uStack_348;
  uStack_260 = uStack_340;
  uStack_258 = uStack_338;
  uStack_250 = uStack_330;
  uStack_248 = uStack_328;
  uStack_240 = uStack_320;
  uStack_238 = uStack_318;
  uStack_230 = uStack_310;
  uStack_228 = uStack_308;
  uStack_220 = uStack_300;
  uStack_20f = uStack_2ef;
  if (cStack_278 == '\x01') {
    if (uStack_20f._7_1_ != '\x01') goto LAB_10163dcf0;
    uStack_378 = param_1[9];
    uStack_380 = param_1[8];
    uStack_370 = param_1[10];
    uStack_368 = (undefined1)param_1[0xb];
    uStack_35f = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
    cStack_358 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
    uStack_367 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
    uStack_360 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
    uStack_3b8 = param_1[1];
    uStack_3c0 = *param_1;
    uStack_3a8 = param_1[3];
    uStack_3b0 = param_1[2];
    uStack_398 = param_1[5];
    uStack_3a0 = param_1[4];
    uStack_388 = param_1[7];
    uStack_390 = param_1[6];
    func_0x00010163e7d0(&uStack_190,auStack_430,0x112dbbf50,&UNK_10d972c48);
    func_0x00010163e7d0(&uStack_200,auStack_430,0x112dbbf50,&UNK_10d972c48);
    func_0x000101640438(&uStack_3c0,0x112dbbf50,&UNK_10d972c48);
LAB_10163de60:
    uVar3 = param_1[0xe];
    if (((uVar3 == param_2[0xe]) && (param_1[0xf] == param_2[0xf])) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      lVar5 = param_1[0x10];
      lVar6 = param_2[0x10];
      if (*(char *)(param_2 + 0x11) == '\x01') {
        if (lVar6 < 2) {
          if (lVar6 == 0) {
            if (lVar5 == 0) {
LAB_10163dec4:
              uVar4 = param_1[0x12];
              FUN_100e25fcc(uVar4,param_1[0x13],param_2[0x12],param_2[0x13]);
              uVar1 = (uint)uVar4;
              goto LAB_10163dd84;
            }
          }
          else if (lVar5 == 1) goto LAB_10163dec4;
        }
        else if (lVar6 == 2) {
          if (lVar5 == 2) goto LAB_10163dec4;
        }
        else if (lVar6 == 3) {
          if (lVar5 == 3) goto LAB_10163dec4;
        }
        else if (lVar5 == 4) goto LAB_10163dec4;
      }
      else if (lVar5 == lVar6) goto LAB_10163dec4;
    }
  }
  else {
    if (uStack_20f._7_1_ != '\x01') {
      uStack_378 = param_2[9];
      uStack_380 = param_2[8];
      uStack_58 = param_2[0xb];
      uStack_370 = param_2[10];
      uStack_368 = (undefined1)uStack_58;
      uStack_35f = (undefined7)*(undefined8 *)((long)param_2 + 0x61);
      cStack_358 = (char)((ulong)*(undefined8 *)((long)param_2 + 0x61) >> 0x38);
      uStack_367 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
      uStack_360 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
      uStack_3b8 = param_2[1];
      uStack_3c0 = *param_2;
      uStack_3a8 = param_2[3];
      uStack_3b0 = param_2[2];
      uStack_398 = param_2[5];
      uStack_3a0 = param_2[4];
      uStack_388 = param_2[7];
      uStack_390 = param_2[6];
      uStack_50 = param_2[0xc];
      uStack_d8 = param_1[9];
      uStack_e0 = param_1[8];
      uStack_c8 = param_1[0xb];
      uStack_d0 = param_1[10];
      uStack_c0 = param_1[0xc];
      uStack_118 = param_1[1];
      uStack_120 = *param_1;
      uStack_108 = param_1[3];
      uStack_110 = param_1[2];
      uStack_f8 = param_1[5];
      uStack_100 = param_1[4];
      uStack_e8 = param_1[7];
      uStack_f0 = param_1[6];
      uStack_b0 = uStack_3c0;
      uStack_a8 = uStack_3b8;
      uStack_a0 = uStack_3b0;
      uStack_98 = uStack_3a8;
      uStack_90 = uStack_3a0;
      uStack_88 = uStack_398;
      uStack_80 = uStack_390;
      uStack_78 = uStack_388;
      uStack_70 = uStack_380;
      uStack_68 = uStack_378;
      uStack_60 = uStack_370;
      func_0x00010163e7d0(&uStack_190,auStack_430,0x112dbbf50,&UNK_10d972c48);
      func_0x00010163e7d0(&uStack_200,auStack_430,0x112dbbf50,&UNK_10d972c48);
      puVar2 = &uStack_120;
      FUN_10163da58(puVar2,&uStack_b0);
      func_0x000101640438(&uStack_3c0,0x112dbbf50,&UNK_10d972c48);
      func_0x000101640438(&uStack_2e0,0x112dbbf50,&UNK_10d972c48);
      if (((ulong)puVar2 & 1) != 0) goto LAB_10163de60;
      goto LAB_10163dd80;
    }
LAB_10163dcf0:
    uStack_2f7 = uStack_217;
    uStack_2f0 = uStack_210;
    cStack_358 = cStack_278;
    uStack_360 = uStack_280;
    uStack_35f = uStack_27f;
    uStack_368 = uStack_288;
    uStack_367 = uStack_287;
    uStack_3c0 = uStack_2e0;
    uStack_3b8 = uStack_2d8;
    uStack_3b0 = uStack_2d0;
    uStack_3a8 = uStack_2c8;
    uStack_3a0 = uStack_2c0;
    uStack_398 = uStack_2b8;
    uStack_390 = uStack_2b0;
    uStack_388 = uStack_2a8;
    uStack_380 = uStack_2a0;
    uStack_378 = uStack_298;
    uStack_370 = uStack_290;
    uStack_2f8 = uStack_218;
    func_0x00010163e7d0(&uStack_190,auStack_430,0x112dbbf50,&UNK_10d972c48);
    func_0x00010163e7d0(&uStack_200,auStack_430,0x112dbbf50,&UNK_10d972c48);
    func_0x000101640438(&uStack_3c0,0x112dbc1d0,&UNK_10d973320);
  }
LAB_10163dd80:
  uVar1 = 0;
LAB_10163dd84:
  return uVar1 & 1;
}



/* Entry: 10163df04; end: 10163df53;  */

int FUN_10163df04(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  iVar1 = 0;
  if ((uVar2 >> 0x1c & 3) != 0) {
    iVar1 = 0x10 - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
  }
  return iVar1;
}



/* Entry: 10163df54; end: 10163e79b;  */

uint FUN_10163df54(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long alStack_2f8 [3];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar17 = param_1[3];
  uVar12 = param_1[2];
  uVar8 = param_1[5];
  uVar20 = param_1[4];
  uVar18 = param_1[7];
  uVar13 = param_1[6];
  uVar6 = param_1[8];
  uVar19 = param_2[3];
  uVar14 = param_2[2];
  uVar22 = param_2[5];
  uVar21 = param_2[4];
  uVar25 = param_2[7];
  uVar24 = param_2[6];
  uVar7 = param_2[8];
  uStack_190 = uVar14;
  uStack_188 = uVar19;
  uStack_180 = uVar21;
  uStack_178 = uVar22;
  uStack_170 = uVar24;
  uStack_168 = uVar25;
  uStack_160 = uVar7;
  uStack_150 = uVar12;
  uStack_148 = uVar17;
  uStack_140 = uVar20;
  uStack_138 = uVar8;
  uStack_130 = uVar13;
  uStack_128 = uVar18;
  uStack_120 = uVar6;
  if (uVar8 >> 0x3c < 0xf) {
    if (0xe < uVar22 >> 0x3c) goto LAB_10163e068;
    uStack_d8 = uVar12;
    uStack_d0 = uVar17;
    uStack_c8 = uVar20;
    uStack_c0 = uVar8;
    uStack_b8 = uVar13;
    uStack_b0 = uVar18;
    uStack_a8 = uVar6;
    uStack_a0 = uVar14;
    uStack_98 = uVar19;
    uStack_90 = uVar21;
    uStack_88 = uVar22;
    uStack_80 = uVar24;
    uStack_78 = uVar25;
    uStack_70 = uVar7;
    func_0x00010163e7d0(&uStack_150,&uStack_2e0,0x112db5e70,&UNK_10d9649a0);
    func_0x00010163e7d0(&uStack_190,&uStack_2e0,0x112db5e70,&UNK_10d9649a0);
    puVar2 = &uStack_d8;
    func_0x00010400dcec(puVar2,&uStack_a0);
    FUN_101593c1c(uVar14,uVar19,uVar21,uVar22,uVar24,uVar25,uVar7);
    FUN_101593c1c(uVar12,uVar17,uVar20,uVar8,uVar13,uVar18,uVar6);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10163e16c;
  }
  else if (uVar22 >> 0x3c < 0xf) {
LAB_10163e068:
    uStack_2e0 = uVar12;
    uStack_2d8 = uVar17;
    uStack_2d0 = uVar20;
    uStack_2c8 = uVar8;
    uStack_2c0 = uVar13;
    uStack_2b8 = uVar18;
    uStack_2b0 = uVar6;
    uStack_2a8 = uVar14;
    uStack_2a0 = uVar19;
    uStack_298 = uVar21;
    uStack_290 = uVar22;
    uStack_288 = uVar24;
    uStack_280 = uVar25;
    uStack_278 = uVar7;
    func_0x00010163e7d0(&uStack_150,&uStack_a0,0x112db5e70,&UNK_10d9649a0);
    puVar2 = &uStack_190;
    lVar16 = -0x90;
LAB_10163e29c:
    func_0x00010163e7d0(puVar2,&stack0xfffffffffffffff0 + lVar16,0x112db5e70,&UNK_10d9649a0);
    func_0x000101640438(&uStack_2e0,0x112db7eb8,&UNK_10d96d2a0);
  }
  else {
    func_0x00010163e7d0(&uStack_150,&uStack_2e0,0x112db5e70,&UNK_10d9649a0);
    func_0x00010163e7d0(&uStack_190,&uStack_2e0,0x112db5e70,&UNK_10d9649a0);
    FUN_101593c1c(uVar12,uVar17,uVar20,uVar8,uVar13,uVar18,uVar6);
LAB_10163e16c:
    uVar18 = param_1[10];
    uVar12 = param_1[9];
    uVar8 = param_1[0xc];
    uVar24 = param_1[0xb];
    uVar19 = param_1[0xe];
    uVar13 = param_1[0xd];
    uVar6 = param_1[0xf];
    uVar20 = param_2[10];
    uVar14 = param_2[9];
    uVar22 = param_2[0xc];
    uVar25 = param_2[0xb];
    uVar21 = param_2[0xe];
    uVar17 = param_2[0xd];
    uVar7 = param_2[0xf];
    uStack_210 = uVar14;
    uStack_208 = uVar20;
    uStack_200 = uVar25;
    uStack_1f8 = uVar22;
    uStack_1f0 = uVar17;
    uStack_1e8 = uVar21;
    uStack_1e0 = uVar7;
    uStack_1d0 = uVar12;
    uStack_1c8 = uVar18;
    uStack_1c0 = uVar24;
    uStack_1b8 = uVar8;
    uStack_1b0 = uVar13;
    uStack_1a8 = uVar19;
    uStack_1a0 = uVar6;
    if (uVar8 >> 0x3c < 0xf) {
      if (0xe < uVar22 >> 0x3c) goto LAB_10163e254;
      uStack_2e0 = uVar14;
      uStack_2d8 = uVar20;
      uStack_2d0 = uVar25;
      uStack_2c8 = uVar22;
      uStack_2c0 = uVar17;
      uStack_2b8 = uVar21;
      uStack_2b0 = uVar7;
      uStack_110 = uVar12;
      uStack_108 = uVar18;
      uStack_100 = uVar24;
      uStack_f8 = uVar8;
      uStack_f0 = uVar13;
      uStack_e8 = uVar19;
      uStack_e0 = uVar6;
      func_0x00010163e7d0(&uStack_1d0,&lStack_330,0x112db5e70,&UNK_10d9649a0);
      func_0x00010163e7d0(&uStack_210,&lStack_330,0x112db5e70,&UNK_10d9649a0);
      puVar2 = &uStack_110;
      func_0x00010400dcec(puVar2,&uStack_2e0);
      FUN_101593c1c(uVar14,uVar20,uVar25,uVar22,uVar17,uVar21,uVar7);
      FUN_101593c1c(uVar12,uVar18,uVar24,uVar8,uVar13,uVar19,uVar6);
      if (((ulong)puVar2 & 1) == 0) goto LAB_10163e2c0;
    }
    else {
      if (uVar22 >> 0x3c < 0xf) {
LAB_10163e254:
        uStack_2e0 = uVar12;
        uStack_2d8 = uVar18;
        uStack_2d0 = uVar24;
        uStack_2c8 = uVar8;
        uStack_2c0 = uVar13;
        uStack_2b8 = uVar19;
        uStack_2b0 = uVar6;
        uStack_2a8 = uVar14;
        uStack_2a0 = uVar20;
        uStack_298 = uVar25;
        uStack_290 = uVar22;
        uStack_288 = uVar17;
        uStack_280 = uVar21;
        uStack_278 = uVar7;
        func_0x00010163e7d0(&uStack_1d0,&uStack_110,0x112db5e70,&UNK_10d9649a0);
        puVar2 = &uStack_210;
        lVar16 = -0x100;
        goto LAB_10163e29c;
      }
      func_0x00010163e7d0(&uStack_1d0,&uStack_2e0,0x112db5e70,&UNK_10d9649a0);
      func_0x00010163e7d0(&uStack_210,&uStack_2e0,0x112db5e70,&UNK_10d9649a0);
      FUN_101593c1c(uVar12,uVar18,uVar24,uVar8,uVar13,uVar19,uVar6);
    }
    uVar22 = param_1[0x11];
    lVar15 = param_1[0x10];
    uVar8 = param_1[0x12];
    uVar23 = param_2[0x11];
    lVar16 = param_2[0x10];
    uVar11 = param_2[0x12];
    lStack_330 = lVar15;
    uStack_328 = uVar22;
    uStack_320 = uVar8;
    lStack_230 = lVar16;
    uStack_228 = uVar23;
    uStack_220 = uVar11;
    if (uVar8 >> 0x3c < 0xf) {
      if (0xe < uVar11 >> 0x3c) goto LAB_10163e4cc;
      if (lVar15 == lVar16) {
        func_0x00010163e7d0(&lStack_330,&lStack_250,0x112db6f48,&UNK_10d969b40);
        func_0x00010163e7d0(&lStack_230,&lStack_250,0x112db6f48,&UNK_10d969b40);
        uVar3 = uVar22;
        FUN_100e25fcc(uVar22,uVar8,uVar23,uVar11);
        func_0x000100cb7068(lVar15,uVar23,uVar11);
        if ((uVar3 & 1) != 0) goto LAB_10163e420;
      }
      else {
        func_0x00010163e7d0(&lStack_330,&lStack_250,0x112db6f48,&UNK_10d969b40);
        plVar4 = &lStack_230;
        plVar5 = &lStack_250;
LAB_10163e694:
        func_0x00010163e7d0(plVar4,plVar5,0x112db6f48,&UNK_10d969b40);
        func_0x000100cb7068(lVar16,uVar23,uVar11);
      }
    }
    else {
      if (0xe < uVar11 >> 0x3c) {
        func_0x00010163e7d0(&lStack_330,&lStack_250,0x112db6f48,&UNK_10d969b40);
        func_0x00010163e7d0(&lStack_230,&lStack_250,0x112db6f48,&UNK_10d969b40);
LAB_10163e420:
        func_0x000100cb7068(lVar15,uVar22,uVar8);
        uVar22 = param_1[0x14];
        lVar15 = param_1[0x13];
        uVar8 = param_1[0x15];
        uVar23 = param_2[0x14];
        lVar16 = param_2[0x13];
        uVar11 = param_2[0x15];
        lStack_270 = lVar16;
        uStack_268 = uVar23;
        uStack_260 = uVar11;
        lStack_250 = lVar15;
        uStack_248 = uVar22;
        uStack_240 = uVar8;
        if (uVar8 >> 0x3c < 0xf) {
          if (0xe < uVar11 >> 0x3c) goto LAB_10163e578;
          if (lVar15 != lVar16) {
            func_0x00010163e7d0(&lStack_250,alStack_2f8,0x112db6f48,&UNK_10d969b40);
            plVar4 = &lStack_270;
            plVar5 = alStack_2f8;
            goto LAB_10163e694;
          }
          func_0x00010163e7d0(&lStack_250,alStack_2f8,0x112db6f48,&UNK_10d969b40);
          func_0x00010163e7d0(&lStack_270,alStack_2f8,0x112db6f48,&UNK_10d969b40);
          uVar3 = uVar22;
          FUN_100e25fcc(uVar22,uVar8,uVar23,uVar11);
          func_0x000100cb7068(lVar15,uVar23,uVar11);
          if ((uVar3 & 1) == 0) goto LAB_10163e6bc;
        }
        else {
          if (uVar11 >> 0x3c < 0xf) {
LAB_10163e578:
            func_0x00010163e7d0(&lStack_250,alStack_2f8,0x112db6f48,&UNK_10d969b40);
            plVar4 = &lStack_270;
            plVar5 = alStack_2f8;
            uVar3 = uVar8;
            uVar9 = uVar22;
            lVar10 = lVar15;
            uVar8 = uVar11;
            uVar22 = uVar23;
            goto LAB_10163e5a4;
          }
          func_0x00010163e7d0(&lStack_250,alStack_2f8,0x112db6f48,&UNK_10d969b40);
          func_0x00010163e7d0(&lStack_270,alStack_2f8,0x112db6f48,&UNK_10d969b40);
        }
        func_0x000100cb7068(lVar15,uVar22,uVar8);
        uVar6 = *param_1;
        FUN_100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar6;
        goto LAB_10163e2c4;
      }
LAB_10163e4cc:
      func_0x00010163e7d0(&lStack_330,&lStack_250,0x112db6f48,&UNK_10d969b40);
      plVar4 = &lStack_230;
      plVar5 = &lStack_250;
      uVar3 = uVar8;
      uVar9 = uVar22;
      lVar10 = lVar15;
      uVar8 = uVar11;
      uVar22 = uVar23;
LAB_10163e5a4:
      lVar15 = lVar16;
      func_0x00010163e7d0(plVar4,plVar5,0x112db6f48,&UNK_10d969b40);
      func_0x000100cb7068(lVar10,uVar9,uVar3);
    }
LAB_10163e6bc:
    func_0x000100cb7068(lVar15,uVar22,uVar8);
  }
LAB_10163e2c0:
  uVar1 = 0;
LAB_10163e2c4:
  return uVar1 & 1;
}



/* Entry: 10163e79c; end: 10163e817;  */

undefined8 FUN_10163e79c(undefined8 param_1,undefined8 param_2)

{
  FUN_10163f678(param_2,param_1,&UNK_1103eced0);
  return param_2;
}



/* Entry: 10163e818; end: 10163e917;  */

void FUN_10163e818(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbf68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972df8;
  func_0x000107c61520(&UNK_10d972df8,&UNK_1103ecdb0);
  puRam0000000112dbbf68 = puVar1;
  return;
}



/* Entry: 10163e918; end: 10163e92b;  */

void FUN_10163e918(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10163e92c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10163e96c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10163e92c; end: 10163e9ab;  */

void FUN_10163e92c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbf98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972ce8;
  func_0x000107c61520(&UNK_10d972ce8,&UNK_1103ecd38);
  puRam0000000112dbbf98 = puVar1;
  return;
}



/* Entry: 10163e9ac; end: 10163e9af;  */

void FUN_10163e9ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbbfa8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbbfb0;
  func_0x00010002969c(0x112dbbfb0,&UNK_10d972c70);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbbfa8 = puVar2;
  return;
}



/* Entry: 10163e9b0; end: 10163e9ff;  */

void FUN_10163e9b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbbfa8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbbfb0;
  func_0x00010002969c(0x112dbbfb0,&UNK_10d972c70);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbbfa8 = puVar2;
  return;
}



/* Entry: 10163ea00; end: 10163ea03;  */

void FUN_10163ea00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972d28;
  func_0x000107c61520(&UNK_10d972d28,&UNK_1103ecd38);
  puRam0000000112dbbfb8 = puVar1;
  return;
}



/* Entry: 10163ea04; end: 10163ea43;  */

void FUN_10163ea04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972d28;
  func_0x000107c61520(&UNK_10d972d28,&UNK_1103ecd38);
  puRam0000000112dbbfb8 = puVar1;
  return;
}



/* Entry: 10163ea44; end: 10163ea67;  */

void FUN_10163ea44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10163ea68();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10163ea68; end: 10163eaa7;  */

void FUN_10163ea68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972dd0;
  func_0x000107c61520(&UNK_10d972dd0,&UNK_1103ecdb0);
  puRam0000000112dbbfc0 = puVar1;
  return;
}



/* Entry: 10163eaa8; end: 10163eabf;  */

void FUN_10163eaa8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10163e818();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101568d04)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10163eac0; end: 10163eaff;  */

void FUN_10163eac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972e38;
  func_0x000107c61520(&UNK_10d972e38,&UNK_1103ecdb0);
  puRam0000000112dbbfc8 = puVar1;
  return;
}



/* Entry: 10163eb00; end: 10163eb23;  */

void FUN_10163eb00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10163eb24();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10163eb24; end: 10163eb63;  */

void FUN_10163eb24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972ea8;
  func_0x000107c61520(&UNK_10d972ea8,&UNK_1103ece30);
  puRam0000000112dbbfd0 = puVar1;
  return;
}



/* Entry: 10163eb64; end: 10163eb77;  */

void FUN_10163eb64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10163e898)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10163eb78();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10163eb78; end: 10163ebb7;  */

void FUN_10163eb78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d972e60;
  func_0x000107c61520(&DAT_10d972e60,&UNK_1103ece30);
  puRam0000000112dbbfd8 = puVar1;
  return;
}



/* Entry: 10163ebb8; end: 10163ebbb;  */

void FUN_10163ebb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972f10;
  func_0x000107c61520(&UNK_10d972f10,&UNK_1103ece30);
  puRam0000000112dbbfe0 = puVar1;
  return;
}



/* Entry: 10163ebbc; end: 10163ebfb;  */

void FUN_10163ebbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972f10;
  func_0x000107c61520(&UNK_10d972f10,&UNK_1103ece30);
  puRam0000000112dbbfe0 = puVar1;
  return;
}



/* Entry: 10163ebfc; end: 10163ec1f;  */

void FUN_10163ebfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10163ec20();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10163ec20; end: 10163ec5f;  */

void FUN_10163ec20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbfe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972f80;
  func_0x000107c61520(&UNK_10d972f80,&UNK_1103ecf48);
  puRam0000000112dbbfe8 = puVar1;
  return;
}



/* Entry: 10163ec60; end: 10163ec73;  */

void FUN_10163ec60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10163e8d8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10163eca4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10163ec74; end: 10163eca3;  */

void FUN_10163ec74(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10163eca4; end: 10163ece3;  */

void FUN_10163eca4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d972f38;
  func_0x000107c61520(&DAT_10d972f38,&UNK_1103ecf48);
  puRam0000000112dbbff0 = puVar1;
  return;
}



/* Entry: 10163ece4; end: 10163ece7;  */

void FUN_10163ece4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972fe8;
  func_0x000107c61520(&UNK_10d972fe8,&UNK_1103ecf48);
  puRam0000000112dbbff8 = puVar1;
  return;
}



/* Entry: 10163ece8; end: 10163ed27;  */

void FUN_10163ece8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972fe8;
  func_0x000107c61520(&UNK_10d972fe8,&UNK_1103ecf48);
  puRam0000000112dbbff8 = puVar1;
  return;
}



/* Entry: 10163ed28; end: 10163edc7;  */

int FUN_10163ed28(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10163edc8; end: 10163edf3;  */

void FUN_10163edc8(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 10163edf4; end: 10163ee9f;  */

undefined8 * FUN_10163edf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10163eea0; end: 10163eee7;  */

undefined8 * FUN_10163eea0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10163eee8; end: 10163ef7f;  */

int FUN_10163eee8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10163ef80; end: 10163efdb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10163ef80(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_10163efdc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc]);
  }
  func_0x000107c6142c(param_1[0xf]);
  uVar1 = param_1[0x12];
  uVar2 = (uint)((ulong)param_1[0x13] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0x13] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10163efdc; end: 10163f417;  */

/* WARNING: Possible PIC construction at 0x00010163f00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163f010) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

ulong FUN_10163efdc(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
                   undefined8 param_10,long param_11,ulong param_12,ulong param_13)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  uVar6 = param_13;
  uVar5 = param_12;
  lVar4 = param_11;
  uVar3 = param_10;
  uVar2 = param_9;
  puVar1 = &stack0xfffffffffffffff0;
  uVar7 = (uint)(param_3 >> 0x3c) & 3;
  if (uVar7 < 2) {
    if (uVar7 == 0) {
      unaff_x30 = 0x10163f010;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
      uVar5 = param_1;
      uVar6 = param_2;
      unaff_x19 = param_3;
      unaff_x29 = puVar1;
    }
    else {
      func_0x00010006c090(param_2,param_3 & 0xcfffffffffffffff);
      FUN_101553bdc(param_4,param_5,param_6,param_7,param_8);
      if (lVar4 == 0) {
        return uVar2;
      }
      func_0x000107c6142c(lVar4,uVar3);
    }
    uVar7 = (uint)(uVar6 >> 0x3e);
    if (uVar7 == 1) {
      uVar5 = uVar6 & 0x3fffffffffffffff;
    }
    else {
      if (uVar7 != 2) {
        return uVar5;
      }
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    }
  }
  else {
    func_0x00010006c090();
    uVar5 = param_3 & 0xcfffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar5);
  return uVar5;
}



/* Entry: 10163f418; end: 10163f443;  */

undefined8 FUN_10163f418(undefined8 param_1)

{
  FUN_10163f638(param_1,&UNK_1103eced0);
  return param_1;
}



/* Entry: 10163f444; end: 10163f46f;  */

void FUN_10163f444(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* Entry: 10163f470; end: 10163f577;  */

undefined8 * FUN_10163f470(undefined8 *param_1,undefined8 *param_2)

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
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_2 + 0xd) == '\0') {
      uVar7 = param_2[0xc];
      uVar9 = *param_1;
      uVar2 = param_1[1];
      uVar6 = param_1[2];
      uVar3 = param_1[3];
      uVar10 = param_1[4];
      uVar4 = param_1[5];
      uVar1 = param_1[6];
      uVar5 = param_1[7];
      uVar12 = param_1[9];
      uVar11 = param_1[8];
      uVar14 = param_1[0xb];
      uVar13 = param_1[10];
      uVar8 = param_1[0xc];
      uVar15 = *param_2;
      uVar17 = param_2[3];
      uVar16 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar15;
      param_1[3] = uVar17;
      param_1[2] = uVar16;
      uVar15 = param_2[4];
      uVar17 = param_2[7];
      uVar16 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar15;
      param_1[7] = uVar17;
      param_1[6] = uVar16;
      uVar15 = param_2[8];
      uVar17 = param_2[0xb];
      uVar16 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar15;
      param_1[0xb] = uVar17;
      param_1[10] = uVar16;
      param_1[0xc] = uVar7;
      FUN_10163efdc(uVar9,uVar2,uVar6,uVar3,uVar10,uVar4,uVar1,uVar5,uVar11,uVar12,uVar13,uVar14,
                    uVar8);
      goto LAB_10163f4ec;
    }
    FUN_10163f418(param_1);
  }
  else if (*(char *)(param_2 + 0xd) == '\0') {
    uVar9 = param_2[8];
    uVar10 = param_2[0xb];
    uVar6 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar9;
    param_1[0xb] = uVar10;
    param_1[10] = uVar6;
    param_1[0xc] = param_2[0xc];
    uVar9 = *param_2;
    uVar10 = param_2[3];
    uVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    param_1[3] = uVar10;
    param_1[2] = uVar6;
    uVar10 = param_2[4];
    uVar6 = param_2[7];
    uVar9 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar10;
    param_1[7] = uVar6;
    param_1[6] = uVar9;
    *(undefined1 *)(param_1 + 0xd) = 0;
    goto LAB_10163f4ec;
  }
  uVar9 = param_2[8];
  uVar10 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar9;
  param_1[0xb] = uVar10;
  param_1[10] = uVar6;
  uVar9 = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x59) = uVar9;
  uVar9 = *param_2;
  uVar10 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar10;
  param_1[2] = uVar6;
  uVar10 = param_2[4];
  uVar6 = param_2[7];
  uVar9 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  param_1[7] = uVar6;
  param_1[6] = uVar9;
LAB_10163f4ec:
  uVar9 = param_2[0xf];
  uVar6 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar9;
  func_0x000107c6142c(uVar6);
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar9 = param_1[0x12];
  uVar6 = param_1[0x13];
  uVar10 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar10;
  func_0x00010006c090(uVar9,uVar6);
  return param_1;
}



/* Entry: 10163f578; end: 10163f637;  */

int FUN_10163f578(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x1e);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10163f638; end: 10163f677;  */

void FUN_10163f638(undefined8 *param_1)

{
  FUN_10163efdc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc]);
  return;
}



/* Entry: 10163f678; end: 10163f81b;  */

undefined8 * FUN_10163f678(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  uVar4 = param_2[6];
  uVar10 = param_2[7];
  uVar5 = param_2[8];
  uVar11 = param_2[9];
  uVar6 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xc];
  func_0x00010163e6c4(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,
                      uVar13);
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  param_1[6] = uVar4;
  param_1[7] = uVar10;
  param_1[8] = uVar5;
  param_1[9] = uVar11;
  param_1[10] = uVar6;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  return param_1;
}



/* Entry: 10163f81c; end: 10163f88f;  */

undefined8 * FUN_10163f81c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar9 = param_2[0xc];
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar10 = param_1[0xc];
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[0xb] = uVar17;
  param_1[10] = uVar16;
  param_1[0xc] = uVar9;
  FUN_10163efdc(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar11,uVar12,uVar13,uVar14,uVar10);
  return param_1;
}



/* Entry: 10163f890; end: 10163f933;  */

int FUN_10163f890(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10163f934; end: 10163f9f3;  */

/* WARNING: Possible PIC construction at 0x00010163f94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010163f97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010163f9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163f950) */
/* WARNING: Removing unreachable block (ram,0x00010163f960) */
/* WARNING: Removing unreachable block (ram,0x00010163f980) */
/* WARNING: Removing unreachable block (ram,0x00010163f990) */
/* WARNING: Removing unreachable block (ram,0x00010163f9b0) */
/* WARNING: Removing unreachable block (ram,0x00010163f9c0) */
/* WARNING: Removing unreachable block (ram,0x00010163f9c8) */
/* WARNING: Removing unreachable block (ram,0x00010163f9e4) */
/* WARNING: Removing unreachable block (ram,0x00010163f9d8) */
/* WARNING: Removing unreachable block (ram,0x00010163f9a8) */
/* WARNING: Removing unreachable block (ram,0x00010163f978) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10163f934(ulong *param_1)

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



/* Entry: 10163f9f4; end: 10164026b;  */

undefined8 * FUN_10163f9f4(undefined8 *param_1,undefined8 *param_2)

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
    if (0xe < uVar1 >> 0x3c) goto LAB_10163fa70;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar2 = param_2[7];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[7] = uVar2;
    param_1[8] = uVar1;
  }
  else {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
LAB_10163fa70:
    uVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[8] = param_2[8];
  }
  uVar1 = param_2[0xc];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[9] = param_2[9];
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar1;
    uVar1 = param_2[0xf];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      uVar2 = param_2[0xe];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xe] = uVar2;
      param_1[0xf] = uVar1;
      goto LAB_10163fb28;
    }
  }
  else {
    uVar2 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
  }
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xf] = param_2[0xf];
LAB_10163fb28:
  uVar1 = param_2[0x12];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar1;
  }
  else {
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x12] = param_2[0x12];
  }
  uVar1 = param_2[0x15];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar1;
  }
  else {
    uVar2 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
    param_1[0x15] = param_2[0x15];
  }
  return param_1;
}



/* Entry: 10164026c; end: 10164034b;  */

int FUN_10164026c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x2c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10164034c; end: 10164040b;  */

void FUN_10164034c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d972f54;
  func_0x000107c61520(&DAT_10d972f54,&UNK_1103ecf48);
  puRam0000000112dbc1a8 = puVar1;
  return;
}



/* Entry: 10164040c; end: 101640477;  */

void FUN_10164040c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 101640478; end: 10164048b;  */

long FUN_101640478(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10164048c; end: 1016404d3;  */

void FUN_10164048c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d973460,0x4b,2);
  uRam0000000113802160 = uStack_38;
  uRam0000000113802158 = uStack_40;
  uRam0000000113802170 = uStack_28;
  uRam0000000113802168 = uStack_30;
  uRam0000000113802180 = uStack_18;
  uRam0000000113802178 = uStack_20;
  return;
}



/* Entry: 1016404d4; end: 1016405cf;  */

/* WARNING: Removing unreachable block (ram,0x00010164058c) */
/* WARNING: Removing unreachable block (ram,0x0001016405cc) */

void FUN_1016404d4(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1015cabb8();
        lVar2 = unaff_x20 + 0x40;
LAB_1016405b4:
        (*pcVar4)(lVar2,&UNK_110679698,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1015cabb8();
          lVar2 = unaff_x20 + 0x18;
          goto LAB_1016405b4;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x60))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1016405d0; end: 101640663;  */

void FUN_1016405d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_101640664(), unaff_x21 == 0)) {
    FUN_1016406ec();
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 101640664; end: 1016406eb;  */

void FUN_101640664(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x28);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,2,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1016406ec; end: 101640773;  */

void FUN_1016406ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x50);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,3,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101640774; end: 1016407c3;  */

uint FUN_101640774(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_218 [40];
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
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar6 = param_1[4];
  lVar4 = param_1[3];
  lVar7 = param_1[6];
  lVar5 = param_1[5];
  lVar3 = param_1[7];
  lStack_1c0 = param_2[4];
  lStack_1c8 = param_2[3];
  lStack_1b0 = param_2[6];
  lStack_1b8 = param_2[5];
  lStack_1a8 = param_2[7];
  lStack_140 = lStack_1c8;
  lStack_138 = lStack_1c0;
  lStack_130 = lStack_1b8;
  lStack_128 = lStack_1b0;
  lStack_120 = lStack_1a8;
  lStack_110 = lVar4;
  lStack_108 = lVar6;
  lStack_100 = lVar5;
  lStack_f8 = lVar7;
  lStack_f0 = lVar3;
  if (lVar5 == 0) {
    if (lStack_1b8 != 0) goto LAB_101640cb0;
    FUN_1015c999c(&lStack_110,&lStack_1f0);
    FUN_1015c999c(&lStack_140,&lStack_1f0);
    FUN_101553bdc(lVar4,lVar6,0,lVar7,lVar3);
LAB_101640d10:
    lVar7 = param_1[9];
    lVar6 = param_1[8];
    lVar11 = param_1[0xb];
    lVar9 = param_1[10];
    lVar8 = param_2[9];
    lVar5 = param_2[8];
    lVar12 = param_2[0xb];
    lVar10 = param_2[10];
    lVar3 = param_1[0xc];
    lVar4 = param_2[0xc];
    lStack_1a0 = lVar5;
    lStack_198 = lVar8;
    lStack_190 = lVar10;
    lStack_188 = lVar12;
    lStack_180 = lVar4;
    lStack_170 = lVar6;
    lStack_168 = lVar7;
    lStack_160 = lVar9;
    lStack_158 = lVar11;
    lStack_150 = lVar3;
    if (lVar9 == 0) {
      if (lVar10 != 0) goto LAB_101640de0;
      FUN_1015c999c(&lStack_170,&lStack_1f0);
      FUN_1015c999c(&lStack_1a0,&lStack_1f0);
      FUN_101553bdc(lVar6,lVar7,0,lVar11,lVar3);
    }
    else {
      if (lVar10 == 0) {
LAB_101640de0:
        lStack_1f0 = lVar6;
        lStack_1e8 = lVar7;
        lStack_1e0 = lVar9;
        lStack_1d8 = lVar11;
        lStack_1d0 = lVar3;
        lStack_1c8 = lVar5;
        lStack_1c0 = lVar8;
        lStack_1b8 = lVar10;
        lStack_1b0 = lVar12;
        lStack_1a8 = lVar4;
        FUN_1015c999c(&lStack_170,&lStack_e8);
        plVar2 = &lStack_1a0;
        lVar3 = -0xd8;
        goto LAB_101640e08;
      }
      lStack_1e8 = CONCAT71(lStack_1e8._1_7_,(char)lVar8);
      uStack_e0 = (undefined1)lVar7;
      lStack_1f0 = lVar5;
      lStack_1e0 = lVar10;
      lStack_1d8 = lVar12;
      lStack_1d0 = lVar4;
      lStack_e8 = lVar6;
      lStack_d8 = lVar9;
      lStack_d0 = lVar11;
      lStack_c8 = lVar3;
      FUN_1015c999c(&lStack_170,auStack_218);
      FUN_1015c999c(&lStack_1a0,auStack_218);
      plVar2 = &lStack_e8;
      func_0x00010368c758(plVar2,&lStack_1f0);
      FUN_101553bdc(lVar5,lVar8,lVar10,lVar12,lVar4);
      FUN_101553bdc(lVar6,lVar7,lVar9,lVar11,lVar3);
      if (((ulong)plVar2 & 1) == 0) goto LAB_101640e14;
    }
    lVar3 = param_1[1];
    FUN_100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
    uVar1 = (uint)lVar3;
  }
  else {
    if (lStack_1b8 == 0) {
LAB_101640cb0:
      lStack_1f0 = lVar4;
      lStack_1e8 = lVar6;
      lStack_1e0 = lVar5;
      lStack_1d8 = lVar7;
      lStack_1d0 = lVar3;
      FUN_1015c999c(&lStack_110,&lStack_98);
      plVar2 = &lStack_140;
      lVar3 = -0x88;
LAB_101640e08:
      FUN_1015c999c(plVar2,&stack0xfffffffffffffff0 + lVar3);
      FUN_1015cab70(&lStack_1f0);
    }
    else {
      uStack_90 = (undefined1)lStack_1c0;
      uStack_b8 = (undefined1)lVar6;
      lStack_c0 = lVar4;
      lStack_b0 = lVar5;
      lStack_a8 = lVar7;
      lStack_a0 = lVar3;
      lStack_98 = lStack_1c8;
      lStack_88 = lStack_1b8;
      lStack_80 = lStack_1b0;
      lStack_78 = lStack_1a8;
      FUN_1015c999c(&lStack_110,&lStack_1f0);
      FUN_1015c999c(&lStack_140,&lStack_1f0);
      plVar2 = &lStack_c0;
      func_0x00010368c758(plVar2,&lStack_98);
      FUN_101553bdc(lStack_1c8,lStack_1c0,lStack_1b8,lStack_1b0,lStack_1a8);
      FUN_101553bdc(lVar4,lVar6,lVar5,lVar7,lVar3);
      if (((ulong)plVar2 & 1) != 0) goto LAB_101640d10;
    }
LAB_101640e14:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 1016407c4; end: 1016407f3;  */

undefined1  [16] FUN_1016407c4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1016407f4; end: 101640827;  */

void FUN_1016407f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101640828; end: 10164083b;  */

undefined1  [16] FUN_101640828(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x101640838;
  return auVar1;
}



/* Entry: 10164083c; end: 10164084f;  */

void FUN_10164083c(void)

{
  FUN_1016404d4();
  return;
}



/* Entry: 101640850; end: 101640897;  */

void FUN_101640850(void)

{
  FUN_1016405d0();
  return;
}



/* Entry: 101640898; end: 10164089b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101640898(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10164089c; end: 1016408d3;  */

uint FUN_10164089c(long param_1,long param_2)

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
  FUN_1016414a0();
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



/* Entry: 1016408d4; end: 10164093b;  */

uint FUN_1016408d4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  FUN_101640bac(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10164093c; end: 1016409db;  */

/* WARNING: Possible PIC construction at 0x000101640988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101640998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010164098c) */
/* WARNING: Removing unreachable block (ram,0x00010164099c) */

void FUN_10164093c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbc1d8 != -1) {
    func_0x000107c61568(0x112dbc1d8,FUN_10164048c);
  }
  uVar5 = uRam0000000113802180;
  uVar4 = uRam0000000113802178;
  uVar3 = uRam0000000113802170;
  uVar2 = uRam0000000113802168;
  uVar1 = uRam0000000113802160;
  *param_1 = uRam0000000113802158;
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



/* Entry: 1016409dc; end: 101640a17;  */

void FUN_1016409dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbc1f8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbc1f8,&UNK_10d973450);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}


