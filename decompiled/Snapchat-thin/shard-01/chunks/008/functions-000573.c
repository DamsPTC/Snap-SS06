/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015a88e4; end: 1015a89d7;  */

void FUN_1015a88e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined8 *)(param_1 + 0xf0);
  uStack_68 = *(undefined8 *)(param_1 + 0x108);
  uStack_70 = *(undefined8 *)(param_1 + 0x100);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  uStack_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_50 = *(undefined8 *)(param_1 + 0x120);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_a8 = *(undefined8 *)(param_1 + 200);
  uStack_b0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_88 = *(undefined8 *)(param_1 + 0xe8);
  uStack_90 = *(undefined8 *)(param_1 + 0xe0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x78);
  uStack_100 = *(undefined8 *)(param_1 + 0x70);
  uStack_e8 = *(undefined8 *)(param_1 + 0x88);
  uStack_f0 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = *(undefined8 *)(param_1 + 0x98);
  uStack_e0 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
  puVar1 = &uStack_100;
  func_0x000100cb60ec();
  if ((int)puVar1 != 1) {
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_110 = uStack_50;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_1a8 = uStack_e8;
    uStack_1b0 = uStack_f0;
    uStack_198 = uStack_d8;
    uStack_1a0 = uStack_e0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5dfc();
    (*pcVar2)(&uStack_1c0,5,&UNK_110672b10,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015a89d8; end: 1015a8a77;  */

void FUN_1015a89d8(undefined8 *param_1)

{
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
  
  FUN_100cb60bc(&uStack_d8);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  param_1[0x13] = uStack_b0;
  param_1[0x12] = uStack_b8;
  param_1[0x15] = uStack_a0;
  param_1[0x14] = uStack_a8;
  param_1[0xf] = uStack_d0;
  param_1[0xe] = uStack_d8;
  param_1[0x11] = uStack_c0;
  param_1[0x10] = uStack_c8;
  param_1[0x1b] = uStack_70;
  param_1[0x1a] = uStack_78;
  param_1[0x1d] = uStack_60;
  param_1[0x1c] = uStack_68;
  param_1[0x17] = uStack_90;
  param_1[0x16] = uStack_98;
  param_1[0x19] = uStack_80;
  param_1[0x18] = uStack_88;
  param_1[0x24] = uStack_28;
  param_1[0x21] = uStack_40;
  param_1[0x20] = uStack_48;
  param_1[0x23] = uStack_30;
  param_1[0x22] = uStack_38;
  param_1[0x1f] = uStack_50;
  param_1[0x1e] = uStack_58;
  return;
}



/* Entry: 1015a8a78; end: 1015a8a9f;  */

undefined1  [16] FUN_1015a8a78(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db71d0 != -1) {
    func_0x000107c61568(0x112db71d0,FUN_1015a83cc);
  }
  auVar1._8_8_ = uRam0000000113800580;
  auVar1._0_8_ = uRam0000000113800578;
  func_0x000107c61434(uRam0000000113800580);
  return auVar1;
}



/* Entry: 1015a8aa0; end: 1015a8acf;  */

undefined1  [16] FUN_1015a8aa0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015a8ad0; end: 1015a8b03;  */

void FUN_1015a8ad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015a8b04; end: 1015a8b17;  */

undefined8 FUN_1015a8b04(void)

{
  return 0x1015a8b14;
}



/* Entry: 1015a8b18; end: 1015a8b2b;  */

void FUN_1015a8b18(void)

{
  FUN_1015a84b0();
  return;
}



/* Entry: 1015a8b2c; end: 1015a8b93;  */

void FUN_1015a8b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_168 [296];
  
  func_0x000107c610b4(auStack_168);
  FUN_1015a8608(param_1,param_2,param_3);
  return;
}



/* Entry: 1015a8b94; end: 1015a8b97;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015a8b94(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015a8b98; end: 1015a8bcf;  */

uint FUN_1015a8b98(long param_1,long param_2)

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
  func_0x0001015c5bfc();
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



/* Entry: 1015a8bd0; end: 1015a8c1f;  */

uint FUN_1015a8bd0(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_270 [296];
  undefined1 auStack_148 [296];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_148,param_1,0x128);
  func_0x000107c610b4(auStack_270);
  func_0x0001015b7b00(auStack_270,auStack_148);
  return uVar1 & 1;
}



/* Entry: 1015a8c20; end: 1015a8cbf;  */

/* WARNING: Possible PIC construction at 0x0001015a8c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015a8c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015a8c70) */
/* WARNING: Removing unreachable block (ram,0x0001015a8c80) */

void FUN_1015a8c20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db71d8 != -1) {
    func_0x000107c61568(0x112db71d8,FUN_1015a8468);
  }
  uVar5 = uRam00000001138005b0;
  uVar4 = uRam00000001138005a8;
  uVar3 = uRam00000001138005a0;
  uVar2 = uRam0000000113800598;
  uVar1 = uRam0000000113800590;
  *param_1 = uRam0000000113800588;
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



/* Entry: 1015a8cc0; end: 1015a8cfb;  */

void FUN_1015a8cc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7e48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7e48,&UNK_10d966068);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015a8cfc; end: 1015a8e07;  */

void FUN_1015a8cfc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1a0 [72];
  undefined1 auStack_158 [296];
  
  func_0x000107c610b4(auStack_158);
  func_0x000107c6068c(auStack_1a0,0);
  func_0x000107c5fa50(auStack_1a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015a8e08; end: 1015a8e5b;  */

uint FUN_1015a8e08(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_270 [296];
  undefined1 auStack_148 [296];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_270,param_1,0x128);
  func_0x000107c610b4(auStack_148,param_2,0x128);
  func_0x0001015b7b00(auStack_270,auStack_148);
  return uVar1 & 1;
}



/* Entry: 1015a8e5c; end: 1015a8e87;  */

void FUN_1015a8e5c(void)

{
  func_0x000107c5fb78(0x6c6f6f547061542e,0xeb00000000706974);
  uRam00000001138005b8 = 0xd00000000000002a;
  uRam00000001138005c0 = 0x800000010efb3020;
  return;
}



/* Entry: 1015a8e88; end: 1015a8ecf;  */

void FUN_1015a8e88(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9665f0,0x12,2);
  uRam00000001138005d0 = uStack_38;
  uRam00000001138005c8 = uStack_40;
  uRam00000001138005e0 = uStack_28;
  uRam00000001138005d8 = uStack_30;
  uRam00000001138005f0 = uStack_18;
  uRam00000001138005e8 = uStack_20;
  return;
}



/* Entry: 1015a8ed0; end: 1015a8f57;  */

void FUN_1015a8ed0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015a8f58; end: 1015a8f93;  */

undefined1  [16] FUN_1015a8f58(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db71e8 != -1) {
    func_0x000107c61568(0x112db71e8,FUN_1015a8e5c);
  }
  auVar1._8_8_ = uRam00000001138005c0;
  auVar1._0_8_ = uRam00000001138005b8;
  func_0x000107c61434(uRam00000001138005c0);
  return auVar1;
}



/* Entry: 1015a8f94; end: 1015a8fb7;  */

void FUN_1015a8f94(void)

{
  FUN_1015b2ad0();
  return;
}



/* Entry: 1015a8fb8; end: 1015a8ff7;  */

void FUN_1015a8fb8(void)

{
  FUN_1015b2b80();
  return;
}



/* Entry: 1015a8ff8; end: 1015a902f;  */

uint FUN_1015a8ff8(long param_1,long param_2)

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
  func_0x0001015c5bbc();
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



/* Entry: 1015a9030; end: 1015a9077;  */

uint FUN_1015a9030(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  func_0x0001015b97b4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015a9078; end: 1015a9117;  */

/* WARNING: Possible PIC construction at 0x0001015a90c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015a90d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015a90c8) */
/* WARNING: Removing unreachable block (ram,0x0001015a90d8) */

void FUN_1015a9078(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db71f0 != -1) {
    func_0x000107c61568(0x112db71f0,FUN_1015a8e88);
  }
  uVar5 = uRam00000001138005f0;
  uVar4 = uRam00000001138005e8;
  uVar3 = uRam00000001138005e0;
  uVar2 = uRam00000001138005d8;
  uVar1 = uRam00000001138005d0;
  *param_1 = uRam00000001138005c8;
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



/* Entry: 1015a9118; end: 1015a912b;  */

void FUN_1015a9118(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7e38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7e38,&UNK_10d966060);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015a912c; end: 1015a9163;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015a912c(undefined8 *param_1,undefined8 param_2)

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
  FUN_1015bc8a4();
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



/* Entry: 1015a9164; end: 1015a91ab;  */

uint FUN_1015a9164(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001015b97b4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015a91ac; end: 1015a91cf;  */

void FUN_1015a91ac(void)

{
  func_0x000107c5fb78(0x64726143646e452e,0xe800000000000000);
  uRam00000001138005f8 = 0xd00000000000002a;
  uRam0000000113800600 = 0x800000010efb3020;
  return;
}



/* Entry: 1015a91d0; end: 1015a9217;  */

void FUN_1015a91d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9664c0,0x121,2);
  uRam0000000113800610 = uStack_38;
  uRam0000000113800608 = uStack_40;
  uRam0000000113800620 = uStack_28;
  uRam0000000113800618 = uStack_30;
  uRam0000000113800630 = uStack_18;
  uRam0000000113800628 = uStack_20;
  return;
}



/* Entry: 1015a9218; end: 1015a9237;  */

void FUN_1015a9218(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1015bbbf4();
  func_0x000107c613fc();
  FUN_1015a9284();
  uRam0000000112db6ec8 = uVar1;
  return;
}



/* Entry: 1015a9238; end: 1015a9283;  */

void FUN_1015a9238(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_2)();
  func_0x000107c613fc();
  (*param_4)();
  *param_5 = uVar1;
  return;
}



/* Entry: 1015a9284; end: 1015a9363;  */

void FUN_1015a9284(void)

{
  long unaff_x20;
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
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0xf000000000000000;
  func_0x0001015bbd64(&uStack_a8);
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_40;
  *(undefined8 *)(unaff_x20 + 400) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_30;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_38;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_28;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  return;
}



/* Entry: 1015a9364; end: 1015a9b6b;  */

void FUN_1015a9364(long param_1)

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
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
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
  
  puVar18 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar18 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xf000000000000000;
  puVar12 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  puVar14 = (undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *puVar14 = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0xf000000000000000;
  func_0x0001015bbd64(&uStack_338);
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 400) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0xf000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + 0x1e8);
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_350,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar18,auStack_368,1,0);
  uVar15 = *puVar18;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar18 = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar16;
  FUN_10155b840(uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar16);
  FUN_101593c1c(uVar15,uVar5,uVar9,uVar17,uVar10,uVar19,uVar11);
  func_0x000107c61428(param_1 + 0x48,auStack_380,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar17 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61428(unaff_x20 + 0x48,auStack_398,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar17;
  FUN_100cb6160(uVar2,uVar4,uVar17);
  FUN_100cb61c8(uVar3,uVar5,uVar19);
  func_0x000107c61428(param_1 + 0x60,auStack_3b0,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61428(puVar12,auStack_3c8,1,0);
  uVar19 = *puVar12;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  *puVar12 = uVar2;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar17;
  FUN_100cb6160(uVar2,uVar4,uVar17);
  FUN_100cb61c8(uVar19,uVar3,uVar5);
  func_0x000107c61428(param_1 + 0x78,auStack_3e0,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c61428(puVar13,auStack_3f8,1,0);
  uVar19 = *puVar13;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
  *puVar13 = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar17;
  FUN_1015bbc34(uVar2,uVar4,uVar17);
  func_0x0001015bbc60(uVar19,uVar3,uVar5);
  func_0x000107c61428(param_1 + 0x90,auStack_410,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  func_0x000107c61428(unaff_x20 + 0x90,auStack_428,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar7;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar8;
  FUN_1015bbc8c(uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
  func_0x0001015bbcec(uVar5,uVar9,uVar17,uVar10,uVar19,uVar11);
  func_0x000107c61428(param_1 + 0xc0,auStack_440,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 200);
  uVar17 = *(undefined8 *)(param_1 + 0xd0);
  func_0x000107c61428(unaff_x20 + 0xc0,auStack_458,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x20 + 200);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x20 + 200) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar17;
  FUN_100cb6160(uVar2,uVar4,uVar17);
  FUN_100cb61c8(uVar3,uVar5,uVar19);
  func_0x000107c61428(param_1 + 0xd8,auStack_470,0,0);
  uStack_2a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_2b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_298 = *(undefined8 *)(param_1 + 0xf0);
  uStack_2a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_288 = *(undefined8 *)(param_1 + 0x100);
  uStack_290 = *(undefined8 *)(param_1 + 0xf8);
  uStack_278 = *(undefined8 *)(param_1 + 0x110);
  uStack_280 = *(undefined8 *)(param_1 + 0x108);
  func_0x000107c61428(puVar14,auStack_488,1,0);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_270 = *puVar14;
  uStack_258 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_2a8;
  *puVar14 = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_280;
  FUN_1015bbdcc(&uStack_2b0,&uStack_1a0,0x112db7118,&UNK_10d964958);
  FUN_1015c5e7c(&uStack_270,0x112db7118,&UNK_10d964958);
  func_0x000107c61428(param_1 + 0x118,auStack_4a0,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  uVar17 = *(undefined8 *)(param_1 + 0x128);
  func_0x000107c61428(unaff_x20 + 0x118,auStack_4b8,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x118) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar17;
  FUN_100cb6160(uVar2,uVar4,uVar17);
  FUN_100cb61c8(uVar3,uVar5,uVar19);
  func_0x000107c61428(param_1 + 0x130,auStack_4d0,0,0);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x198);
  uStack_1d0 = *(undefined8 *)(param_1 + 400);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_208 = *(undefined8 *)(param_1 + 0x158);
  uStack_210 = *(undefined8 *)(param_1 + 0x150);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x168);
  uStack_200 = *(undefined8 *)(param_1 + 0x160);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x178);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x170);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x188);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x180);
  uStack_228 = *(undefined8 *)(param_1 + 0x138);
  uStack_230 = *(undefined8 *)(param_1 + 0x130);
  uStack_218 = *(undefined8 *)(param_1 + 0x148);
  uStack_220 = *(undefined8 *)(param_1 + 0x140);
  func_0x000107c61428(unaff_x20 + 0x130,auStack_4e8,1,0);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_140 = *(undefined8 *)(unaff_x20 + 400);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_188 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_190 = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 400) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_220;
  FUN_1015bbdcc(&uStack_230,&uStack_570,0x112db7128,&UNK_10d964968);
  FUN_1015c5e7c(&uStack_1a0,0x112db7128,&UNK_10d964968);
  func_0x000107c61428(param_1 + 0x1b8,auStack_588,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  uVar17 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x000107c61428(unaff_x20 + 0x1b8,auStack_5a0,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar17;
  FUN_100cb6160(uVar2,uVar4,uVar17);
  FUN_100cb61c8(uVar3,uVar5,uVar19);
  func_0x000107c61428(param_1 + 0x1d0,auStack_5b8,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x1d0);
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  uVar17 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x000107c61428(unaff_x20 + 0x1d0,auStack_5d0,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1e0);
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar17;
  FUN_100cb6160(uVar2,uVar4,uVar17);
  FUN_100cb61c8(uVar3,uVar5,uVar19);
  func_0x000107c61428((undefined8 *)(param_1 + 0x1e8),auStack_5e8,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x210);
  uStack_f0 = *(undefined8 *)(param_1 + 0x208);
  uStack_d8 = *(undefined8 *)(param_1 + 0x220);
  uStack_e0 = *(undefined8 *)(param_1 + 0x218);
  uStack_c8 = *(undefined8 *)(param_1 + 0x230);
  uStack_d0 = *(undefined8 *)(param_1 + 0x228);
  uStack_c0 = *(undefined8 *)(param_1 + 0x238);
  uStack_108 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_110 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x200);
  uStack_100 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x000107c61428(puVar1,auStack_600,1,0);
  uStack_548 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_550 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_538 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_540 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_528 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_530 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_520 = *(undefined8 *)(unaff_x20 + 0x238);
  uStack_568 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_570 = *puVar1;
  uStack_558 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_560 = *(undefined8 *)(unaff_x20 + 0x1f8);
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_108;
  *puVar1 = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_100;
  FUN_1015bbdcc(&uStack_110,&uStack_660,0x112db7138,&UNK_10d964978);
  FUN_1015c5e7c(&uStack_570,0x112db7138,&UNK_10d964978);
  func_0x000107c61428(param_1 + 0x240,auStack_678,0,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x248);
  uStack_b0 = *(undefined8 *)(param_1 + 0x240);
  uStack_98 = *(undefined8 *)(param_1 + 600);
  uStack_a0 = *(undefined8 *)(param_1 + 0x250);
  uStack_88 = *(undefined8 *)(param_1 + 0x268);
  uStack_90 = *(undefined8 *)(param_1 + 0x260);
  uStack_78 = *(undefined8 *)(param_1 + 0x278);
  uStack_80 = *(undefined8 *)(param_1 + 0x270);
  FUN_1015bbdcc(&uStack_b0,&uStack_660,0x112db7148,&UNK_10d964988);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x240,auStack_690,1,0);
  uStack_658 = *(undefined8 *)(unaff_x20 + 0x248);
  uStack_660 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_648 = *(undefined8 *)(unaff_x20 + 600);
  uStack_650 = *(undefined8 *)(unaff_x20 + 0x250);
  uStack_638 = *(undefined8 *)(unaff_x20 + 0x268);
  uStack_640 = *(undefined8 *)(unaff_x20 + 0x260);
  uStack_628 = *(undefined8 *)(unaff_x20 + 0x278);
  uStack_630 = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 600) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x268) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x260) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x278) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x270) = uStack_80;
  FUN_1015c5e7c(&uStack_660,0x112db7148,&UNK_10d964988);
  return;
}



/* Entry: 1015a9b6c; end: 1015a9ca7;  */

void FUN_1015a9b6c(void)

{
  long unaff_x20;
  
  FUN_101593c1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  FUN_100cb61c8(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58));
  FUN_100cb61c8(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  func_0x0001015bbc60(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88));
  func_0x0001015bbcec(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  FUN_100cb61c8(*(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0));
  FUN_1015c5484(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110));
  FUN_100cb61c8(*(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                *(undefined8 *)(unaff_x20 + 0x128));
  FUN_1015c5e7c(unaff_x20 + 0x130,0x112db7128,&UNK_10d964968);
  FUN_100cb61c8(*(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                *(undefined8 *)(unaff_x20 + 0x1c8));
  FUN_100cb61c8(*(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0));
  FUN_1015c54f0(*(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                *(undefined8 *)(unaff_x20 + 0x238));
  FUN_1015c56b8(*(undefined8 *)(unaff_x20 + 0x240),*(undefined8 *)(unaff_x20 + 0x248),
                *(undefined8 *)(unaff_x20 + 0x250),*(undefined8 *)(unaff_x20 + 600),
                *(undefined8 *)(unaff_x20 + 0x260),*(undefined8 *)(unaff_x20 + 0x268),
                *(undefined8 *)(unaff_x20 + 0x270),*(undefined8 *)(unaff_x20 + 0x278),0x10159fa64);
  return;
}



/* Entry: 1015a9ca8; end: 1015a9ef3;  */

/* WARNING: Removing unreachable block (ram,0x0001015a9d9c) */
/* WARNING: Removing unreachable block (ram,0x0001015a9e14) */
/* WARNING: Removing unreachable block (ram,0x0001015a9db8) */
/* WARNING: Removing unreachable block (ram,0x0001015a9eb0) */
/* WARNING: Removing unreachable block (ram,0x0001015a9ef0) */
/* WARNING: Removing unreachable block (ram,0x0001015a9ed4) */
/* WARNING: Removing unreachable block (ram,0x0001015a9df0) */
/* WARNING: Removing unreachable block (ram,0x0001015a9e54) */
/* WARNING: Removing unreachable block (ram,0x0001015a9e94) */
/* WARNING: Removing unreachable block (ram,0x0001015a9e30) */
/* WARNING: Removing unreachable block (ram,0x0001015a9e78) */
/* WARNING: Removing unreachable block (ram,0x0001015a9dd4) */

void FUN_1015a9ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
        FUN_1015acecc(param_2,param_1,param_3,param_4,0x10159f674,&UNK_110734b68);
        break;
      case 2:
        FUN_1015acf6c(param_2,param_1,param_3,param_4,0x1015c5cfc,&UNK_110790a00);
        break;
      case 3:
        FUN_1015ad00c(param_2,param_1,param_3,param_4,0x1015c5cfc,&UNK_110790a00);
        break;
      case 4:
        FUN_1015a9ef4(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1015a9f88(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_1015aa01c(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_1015aa0b0(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_1015aa144(param_2,param_1,param_3,param_4,0x1015c5cfc,&UNK_110790a00);
        break;
      case 9:
        FUN_1015aa1e4(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_1015aa278(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_1015aa30c(param_2,param_1,param_3,param_4,0x1015c5cfc,&UNK_110790a00);
        break;
      case 0xc:
        FUN_1015aa3ac(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_1015aa440(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015a9ef4; end: 1015a9f87;  */

void FUN_1015a9ef4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015bca9c();
  (*pcVar2)(param_2 + 0x78,&UNK_1103e2ba8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015a9f88; end: 1015aa01b;  */

void FUN_1015a9f88(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x90;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015bcb98();
  (*pcVar2)(param_2 + 0x90,&UNK_1103e2c28,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015aa01c; end: 1015aa0af;  */

void FUN_1015aa01c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xc0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xc0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015aa0b0; end: 1015aa143;  */

void FUN_1015aa0b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015bce4c();
  (*pcVar2)(param_2 + 0xd8,&UNK_1103e2dd0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015aa144; end: 1015aa1e3;  */

void FUN_1015aa144(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x118;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x118,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1015aa1e4; end: 1015aa277;  */

void FUN_1015aa1e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x130;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015bcd50();
  (*pcVar2)(param_2 + 0x130,&UNK_1103e2d40,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015aa278; end: 1015aa30b;  */

void FUN_1015aa278(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1b8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x1b8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015aa30c; end: 1015aa3ab;  */

void FUN_1015aa30c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x1d0,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1015aa3ac; end: 1015aa43f;  */

void FUN_1015aa3ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1e8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015bcf48();
  (*pcVar2)(param_2 + 0x1e8,&UNK_1103e2e58,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015aa440; end: 1015aa4d3;  */

void FUN_1015aa440(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015bd100();
  (*pcVar2)(param_2 + 0x240,&UNK_1103e2f68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015aa4d4; end: 1015aa627;  */

void FUN_1015aa4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_1015ad2d4();
  if (unaff_x21 == 0) {
    FUN_1015aa628(param_1,param_2,param_3,param_4);
    FUN_1015aa6d0(param_1,param_2,param_3,param_4);
    FUN_1015aa778(param_1,param_2,param_3,param_4);
    FUN_1015aa818(param_1,param_2,param_3,param_4);
    FUN_1015aa8c4(param_1,param_2,param_3,param_4);
    FUN_1015aa96c(param_1,param_2,param_3,param_4);
    FUN_1015aaa1c(param_1,param_2,param_3,param_4);
    FUN_1015aaac8(param_1,param_2,param_3,param_4);
    FUN_1015aabe0(param_1,param_2,param_3,param_4);
    FUN_1015aac8c(param_1,param_2,param_3,param_4);
    FUN_1015aad34(param_1,param_2,param_3,param_4);
    FUN_1015aadec(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1015aa628; end: 1015aa6cf;  */

void FUN_1015aa628(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x48;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x58);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,2,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aa6d0; end: 1015aa777;  */

void FUN_1015aa6d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x60;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x70);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,3,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aa778; end: 1015aa817;  */

void FUN_1015aa778(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0x88);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x80);
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015bca9c();
    (*pcVar2)(&uStack_70,4,&UNK_1103e2ba8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aa818; end: 1015aa8c3;  */

void FUN_1015aa818(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x90;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x90);
  if (lStack_88 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    uStack_78 = *(undefined8 *)(param_1 + 0xa0);
    uStack_80 = *(undefined8 *)(param_1 + 0x98);
    uStack_68 = *(undefined8 *)(param_1 + 0xb0);
    uStack_70 = *(undefined8 *)(param_1 + 0xa8);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015bcb98();
    (*pcVar2)(&lStack_88,5,&UNK_1103e2c28,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aa8c4; end: 1015aa96b;  */

void FUN_1015aa8c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xc0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0xd0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 200);
    uStack_70 = *(undefined8 *)(param_1 + 0xc0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,6,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aa96c; end: 1015aaa1b;  */

void FUN_1015aa96c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_98 = *(long *)(param_1 + 0xd8);
  if (lStack_98 != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0xe8);
    uStack_90 = *(undefined8 *)(param_1 + 0xe0);
    uStack_78 = *(undefined8 *)(param_1 + 0xf8);
    uStack_80 = *(undefined8 *)(param_1 + 0xf0);
    uStack_68 = *(undefined8 *)(param_1 + 0x108);
    uStack_70 = *(undefined8 *)(param_1 + 0x100);
    uStack_60 = *(undefined8 *)(param_1 + 0x110);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015bce4c();
    (*pcVar2)(&lStack_98,7,&UNK_1103e2dd0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aaa1c; end: 1015aaac7;  */

void FUN_1015aaa1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x118);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x128);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,8,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1015aaac8; end: 1015aabdf;  */

void FUN_1015aaac8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  undefined1 auStack_178 [24];
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
  
  func_0x000107c61428(param_1 + 0x130,auStack_178,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x188);
  uStack_80 = *(undefined8 *)(param_1 + 0x180);
  uStack_f8 = *(undefined8 *)(param_1 + 0x198);
  uStack_100 = *(undefined8 *)(param_1 + 400);
  uStack_68 = *(undefined8 *)(param_1 + 0x198);
  uStack_70 = *(undefined8 *)(param_1 + 400);
  uStack_e8 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_f0 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x148);
  uStack_c0 = *(undefined8 *)(param_1 + 0x140);
  uStack_138 = *(undefined8 *)(param_1 + 0x158);
  uStack_140 = *(undefined8 *)(param_1 + 0x150);
  uStack_a8 = *(undefined8 *)(param_1 + 0x158);
  uStack_b0 = *(undefined8 *)(param_1 + 0x150);
  uStack_128 = *(undefined8 *)(param_1 + 0x168);
  uStack_130 = *(undefined8 *)(param_1 + 0x160);
  uStack_98 = *(undefined8 *)(param_1 + 0x168);
  uStack_a0 = *(undefined8 *)(param_1 + 0x160);
  uStack_118 = *(undefined8 *)(param_1 + 0x178);
  uStack_120 = *(undefined8 *)(param_1 + 0x170);
  uStack_88 = *(undefined8 *)(param_1 + 0x178);
  uStack_90 = *(undefined8 *)(param_1 + 0x170);
  uStack_108 = *(undefined8 *)(param_1 + 0x188);
  uStack_110 = *(undefined8 *)(param_1 + 0x180);
  uStack_158 = *(undefined8 *)(param_1 + 0x138);
  uStack_160 = *(undefined8 *)(param_1 + 0x130);
  uStack_148 = *(undefined8 *)(param_1 + 0x148);
  uStack_150 = *(undefined8 *)(param_1 + 0x140);
  uStack_c8 = *(undefined8 *)(param_1 + 0x138);
  uStack_d0 = *(undefined8 *)(param_1 + 0x130);
  uStack_58 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_60 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_50 = *(undefined8 *)(param_1 + 0x1b0);
  puVar1 = &uStack_160;
  FUN_1015bbd4c();
  if ((int)puVar1 != 1) {
    uStack_198 = uStack_68;
    uStack_1a0 = uStack_70;
    uStack_188 = uStack_58;
    uStack_190 = uStack_60;
    uStack_180 = uStack_50;
    uStack_1d8 = uStack_a8;
    uStack_1e0 = uStack_b0;
    uStack_1c8 = uStack_98;
    uStack_1d0 = uStack_a0;
    uStack_1b8 = uStack_88;
    uStack_1c0 = uStack_90;
    uStack_1a8 = uStack_78;
    uStack_1b0 = uStack_80;
    uStack_1f8 = uStack_c8;
    uStack_200 = uStack_d0;
    uStack_1e8 = uStack_b8;
    uStack_1f0 = uStack_c0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015bcd50();
    (*pcVar2)(&uStack_200,9,&UNK_1103e2d40,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aabe0; end: 1015aac8b;  */

void FUN_1015aabe0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x1b8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1c8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,10,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1015aac8c; end: 1015aad33;  */

void FUN_1015aac8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1e0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1d8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1d0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0xb,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aad34; end: 1015aadeb;  */

void FUN_1015aad34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1e8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_a8 = *(long *)(param_1 + 0x1f0);
  if (lStack_a8 != 0) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_78 = *(undefined8 *)(param_1 + 0x220);
    uStack_80 = *(undefined8 *)(param_1 + 0x218);
    uStack_68 = *(undefined8 *)(param_1 + 0x230);
    uStack_70 = *(undefined8 *)(param_1 + 0x228);
    uStack_60 = *(undefined8 *)(param_1 + 0x238);
    uStack_98 = *(undefined8 *)(param_1 + 0x200);
    uStack_a0 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_88 = *(undefined8 *)(param_1 + 0x210);
    uStack_90 = *(undefined8 *)(param_1 + 0x208);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015bcf48();
    (*pcVar2)(&uStack_b0,0xc,&UNK_1103e2e58,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aadec; end: 1015aaea3;  */

void FUN_1015aadec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_90 = *(ulong *)(param_1 + 0x248);
  if (uStack_90 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x240);
    uStack_80 = *(undefined8 *)(param_1 + 600);
    uStack_88 = *(undefined8 *)(param_1 + 0x250);
    uStack_70 = *(undefined8 *)(param_1 + 0x268);
    uStack_78 = *(undefined8 *)(param_1 + 0x260);
    uStack_60 = *(undefined8 *)(param_1 + 0x278);
    uStack_68 = *(undefined8 *)(param_1 + 0x270);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015bd100();
    (*pcVar2)(&uStack_98,0xd,&UNK_1103e2f68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015aaea4; end: 1015ac57b;  */

undefined8 FUN_1015aaea4(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  long lStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined1 auStack_ad0 [64];
  long lStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined1 auStack_a50 [24];
  undefined1 auStack_a38 [24];
  long lStack_a20;
  ulong uStack_a18;
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
  undefined1 auStack_9a0 [24];
  undefined1 auStack_988 [24];
  long lStack_970;
  ulong uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  long lStack_930;
  ulong uStack_928;
  undefined8 uStack_920;
  long lStack_910;
  long lStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  long lStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined1 auStack_8b0 [24];
  undefined1 auStack_898 [24];
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  long lStack_850;
  ulong uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_810;
  ulong uStack_808;
  undefined8 uStack_800;
  long lStack_7f8;
  long lStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  long lStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_740;
  ulong uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long lStack_700;
  ulong uStack_6f8;
  undefined8 uStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
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
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [24];
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
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
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
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [24];
  long lStack_480;
  ulong uStack_478;
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
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  long lStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_250;
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
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_2f8,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_310,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar16 = *(ulong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar26 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar24 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(ulong *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar25 = *(undefined8 *)(param_2 + 0x38);
  uVar18 = *(undefined8 *)(param_2 + 0x40);
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_1015aafb4;
    uStack_e0 = uVar15;
    uStack_d8 = uVar6;
    uStack_d0 = uVar14;
    uStack_c8 = uVar16;
    uStack_c0 = uVar2;
    uStack_b8 = uVar7;
    uStack_b0 = uVar26;
    uStack_a8 = uVar3;
    uStack_a0 = uVar24;
    uStack_98 = uVar4;
    uStack_90 = uVar10;
    uStack_88 = uVar5;
    uStack_80 = uVar25;
    uStack_78 = uVar18;
    FUN_10155b840(uVar15,uVar6,uVar14,uVar16,uVar2,uVar7,uVar26);
    FUN_10155b840(uVar3,uVar24,uVar4,uVar10,uVar5,uVar25,uVar18);
    puVar9 = &uStack_e0;
    func_0x00010400dcec(puVar9,&uStack_a8);
    FUN_101593c1c(uVar3,uVar24,uVar4,uVar10,uVar5,uVar25,uVar18);
    FUN_101593c1c(uVar15,uVar6,uVar14,uVar16,uVar2,uVar7,uVar26);
    if (((ulong)puVar9 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_1015aafb4:
      FUN_10155b840(uVar15,uVar6,uVar14,uVar16,uVar2,uVar7,uVar26);
      FUN_10155b840(uVar3,uVar24,uVar4,uVar10,uVar5,uVar25,uVar18);
      FUN_101593c1c(uVar15,uVar6,uVar14,uVar16,uVar2,uVar7,uVar26);
      FUN_101593c1c(uVar3,uVar24,uVar4,uVar10,uVar5,uVar25,uVar18);
      return 0;
    }
    FUN_10155b840(uVar15,uVar6,uVar14,uVar16,uVar2,uVar7,uVar26);
    FUN_10155b840(uVar3,uVar24,uVar4,uVar10,uVar5,uVar25,uVar18);
    FUN_101593c1c(uVar15,uVar6,uVar14,uVar16,uVar2,uVar7,uVar26);
  }
  func_0x000107c61428(param_1 + 0x48,auStack_328,0,0);
  func_0x000107c61428(param_2 + 0x48,auStack_340,0,0);
  lVar13 = *(long *)(param_1 + 0x48);
  uVar16 = *(ulong *)(param_1 + 0x50);
  uVar19 = *(ulong *)(param_1 + 0x58);
  lVar23 = *(long *)(param_2 + 0x48);
  uVar10 = *(ulong *)(param_2 + 0x50);
  uVar22 = *(ulong *)(param_2 + 0x58);
  uVar20 = uVar19;
  uVar11 = uVar16;
  lVar21 = lVar13;
  if (uVar19 >> 0x3c < 0xf) {
    if (uVar22 >> 0x3c < 0xf) {
      FUN_100cb6160(lVar13,uVar16,uVar19);
      if (lVar13 == lVar23) {
        FUN_100cb6160(lVar13,uVar10,uVar22);
        uVar20 = uVar16;
        FUN_100e25fcc(uVar16,uVar19,uVar10,uVar22);
        FUN_100cb61c8(lVar13,uVar10,uVar22);
        if ((uVar20 & 1) == 0) goto LAB_1015ac1fc;
        goto LAB_1015ab19c;
      }
LAB_1015ac1d0:
      FUN_100cb6160(lVar23,uVar10,uVar22);
      FUN_100cb61c8(lVar23,uVar10,uVar22);
      goto LAB_1015ac1fc;
    }
  }
  else if (0xe < uVar22 >> 0x3c) {
    FUN_100cb6160(lVar13,uVar16,uVar19);
    FUN_100cb6160(lVar23,uVar10,uVar22);
LAB_1015ab19c:
    FUN_100cb61c8(lVar13,uVar16,uVar19);
    func_0x000107c61428(param_1 + 0x60,auStack_358,0,0);
    func_0x000107c61428(param_2 + 0x60,auStack_370,0,0);
    lVar13 = *(long *)(param_1 + 0x60);
    uVar16 = *(ulong *)(param_1 + 0x68);
    uVar19 = *(ulong *)(param_1 + 0x70);
    lVar23 = *(long *)(param_2 + 0x60);
    uVar10 = *(ulong *)(param_2 + 0x68);
    uVar22 = *(ulong *)(param_2 + 0x70);
    uVar20 = uVar19;
    uVar11 = uVar16;
    lVar21 = lVar13;
    if (uVar19 >> 0x3c < 0xf) {
      if (uVar22 >> 0x3c < 0xf) {
        FUN_100cb6160(lVar13,uVar16,uVar19);
        if (lVar13 != lVar23) goto LAB_1015ac1d0;
        FUN_100cb6160(lVar13,uVar10,uVar22);
        uVar20 = uVar16;
        FUN_100e25fcc(uVar16,uVar19,uVar10,uVar22);
        FUN_100cb61c8(lVar13,uVar10,uVar22);
        if ((uVar20 & 1) == 0) goto LAB_1015ac1fc;
        goto LAB_1015ab21c;
      }
    }
    else if (0xe < uVar22 >> 0x3c) {
      FUN_100cb6160(lVar13,uVar16,uVar19);
      FUN_100cb6160(lVar23,uVar10,uVar22);
LAB_1015ab21c:
      FUN_100cb61c8(lVar13,uVar16,uVar19);
      func_0x000107c61428(param_1 + 0x78,auStack_388,0,0);
      func_0x000107c61428(param_2 + 0x78,auStack_3a0,0,0);
      uVar16 = *(ulong *)(param_1 + 0x78);
      uVar15 = *(undefined8 *)(param_1 + 0x80);
      uVar20 = *(ulong *)(param_1 + 0x88);
      uVar10 = *(ulong *)(param_2 + 0x78);
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar22 = *(ulong *)(param_2 + 0x88);
      if (uVar20 == 0) {
        if (uVar22 != 0) goto LAB_1015ab39c;
        FUN_1015bbc34(uVar16,uVar15,0);
        FUN_1015bbc34(uVar10,uVar14,0);
        func_0x0001015bbc60(uVar16,uVar15,0);
      }
      else {
        if (uVar22 == 0) {
LAB_1015ab39c:
          FUN_1015bbc34(uVar16,uVar15,uVar20);
          FUN_1015bbc34(uVar10,uVar14,uVar22);
          func_0x0001015bbc60(uVar16,uVar15,uVar20);
LAB_1015ab3d8:
          func_0x0001015bbc60(uVar10,uVar14,uVar22);
          return 0;
        }
        if (uVar20 == uVar22) {
          FUN_1015bbc34(uVar16,uVar15,uVar20);
          FUN_1015bbc34(uVar10,uVar14,uVar20);
        }
        else {
          FUN_1015bbc34(uVar16,uVar15,uVar20);
          FUN_1015bbc34(uVar10,uVar14,uVar22);
          func_0x000107c6157c(uVar20);
          func_0x000107c6157c(uVar22);
          uVar11 = uVar20;
          FUN_1015ad7c4(uVar20,uVar22);
          func_0x000107c61574(uVar22);
          func_0x000107c61574(uVar20);
          if ((uVar11 & 1) == 0) {
            func_0x0001015bbc60(uVar10,uVar14,uVar22);
            uVar10 = uVar16;
            uVar14 = uVar15;
            uVar22 = uVar20;
            goto LAB_1015ab3d8;
          }
        }
        uVar11 = uVar16;
        FUN_100e25fcc(uVar16,uVar15,uVar10,uVar14);
        func_0x0001015bbc60(uVar10,uVar14,uVar22);
        func_0x0001015bbc60(uVar16,uVar15,uVar20);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      func_0x000107c61428(param_1 + 0x90,auStack_3b8,0,0);
      func_0x000107c61428(param_2 + 0x90,auStack_3d0,0,0);
      lVar13 = *(long *)(param_1 + 0x90);
      uVar3 = *(undefined8 *)(param_1 + 0x98);
      uVar15 = *(undefined8 *)(param_1 + 0xa0);
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      uVar14 = *(undefined8 *)(param_1 + 0xb0);
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      lVar23 = *(long *)(param_2 + 0x90);
      uVar6 = *(undefined8 *)(param_2 + 0x98);
      uVar2 = *(undefined8 *)(param_2 + 0xa0);
      uVar7 = *(undefined8 *)(param_2 + 0xa8);
      uVar25 = *(undefined8 *)(param_2 + 0xb0);
      uVar24 = *(undefined8 *)(param_2 + 0xb8);
      if (lVar13 == 0) {
        if (lVar23 != 0) goto LAB_1015ab5b8;
        FUN_1015bbc8c(0,uVar3,uVar15,uVar4,uVar14,uVar5);
        FUN_1015bbc8c(0,uVar6,uVar2,uVar7,uVar25,uVar24);
        func_0x0001015bbcec(0,uVar3,uVar15,uVar4,uVar14,uVar5);
      }
      else {
        if (lVar23 == 0) {
LAB_1015ab5b8:
          FUN_1015bbc8c(lVar13,uVar3,uVar15,uVar4,uVar14,uVar5);
          FUN_1015bbc8c(lVar23,uVar6,uVar2,uVar7,uVar25,uVar24);
          func_0x0001015bbcec(lVar13,uVar3,uVar15,uVar4,uVar14,uVar5);
          func_0x0001015bbcec(lVar23,uVar6,uVar2,uVar7,uVar25,uVar24);
          return 0;
        }
        lStack_140 = lVar13;
        uStack_138 = uVar3;
        uStack_130 = uVar15;
        uStack_128 = uVar4;
        uStack_120 = uVar14;
        uStack_118 = uVar5;
        lStack_110 = lVar23;
        uStack_108 = uVar6;
        uStack_100 = uVar2;
        uStack_f8 = uVar7;
        uStack_f0 = uVar25;
        uStack_e8 = uVar24;
        FUN_1015bbc8c(lVar13,uVar3,uVar15,uVar4,uVar14,uVar5);
        FUN_1015bbc8c(lVar23,uVar6,uVar2,uVar7,uVar25,uVar24);
        plVar12 = &lStack_140;
        func_0x0001015b6ef8(plVar12,&lStack_110);
        func_0x0001015bbcec(lVar23,uVar6,uVar2,uVar7,uVar25,uVar24);
        func_0x0001015bbcec(lVar13,uVar3,uVar15,uVar4,uVar14,uVar5);
        if (((ulong)plVar12 & 1) == 0) {
          return 0;
        }
      }
      func_0x000107c61428(param_1 + 0xc0,auStack_3e8,0,0);
      func_0x000107c61428(param_2 + 0xc0,auStack_400,0,0);
      lVar13 = *(long *)(param_1 + 0xc0);
      uVar16 = *(ulong *)(param_1 + 200);
      uVar19 = *(ulong *)(param_1 + 0xd0);
      lVar23 = *(long *)(param_2 + 0xc0);
      uVar10 = *(ulong *)(param_2 + 200);
      uVar22 = *(ulong *)(param_2 + 0xd0);
      uVar20 = uVar19;
      uVar11 = uVar16;
      lVar21 = lVar13;
      if (uVar19 >> 0x3c < 0xf) {
        if (uVar22 >> 0x3c < 0xf) {
          FUN_100cb6160(lVar13,uVar16,uVar19);
          if (lVar13 != lVar23) goto LAB_1015ac1d0;
          FUN_100cb6160(lVar13,uVar10,uVar22);
          uVar20 = uVar16;
          FUN_100e25fcc(uVar16,uVar19,uVar10,uVar22);
          FUN_100cb61c8(lVar13,uVar10,uVar22);
          if ((uVar20 & 1) == 0) goto LAB_1015ac1fc;
          goto LAB_1015ab720;
        }
      }
      else if (0xe < uVar22 >> 0x3c) {
        FUN_100cb6160(lVar13,uVar16,uVar19);
        FUN_100cb6160(lVar23,uVar10,uVar22);
LAB_1015ab720:
        FUN_100cb61c8(lVar13,uVar16,uVar19);
        plVar12 = (long *)(param_1 + 0xd8);
        func_0x000107c61428(plVar12,auStack_498,0,0);
        func_0x000107c61428((long *)(param_2 + 0xd8),auStack_4b0,0,0);
        uStack_738 = *(ulong *)(param_1 + 0xe0);
        lStack_740 = *(long *)(param_1 + 0xd8);
        uStack_728 = *(undefined8 *)(param_1 + 0xf0);
        uStack_730 = *(undefined8 *)(param_1 + 0xe8);
        uStack_718 = *(undefined8 *)(param_1 + 0x100);
        uStack_720 = *(undefined8 *)(param_1 + 0xf8);
        uStack_708 = *(undefined8 *)(param_1 + 0x110);
        uStack_710 = *(undefined8 *)(param_1 + 0x108);
        uStack_438 = *(undefined8 *)(param_2 + 0xe0);
        uStack_440 = *(undefined8 *)(param_2 + 0xd8);
        uStack_428 = *(undefined8 *)(param_2 + 0xf0);
        uStack_430 = *(undefined8 *)(param_2 + 0xe8);
        uStack_418 = *(undefined8 *)(param_2 + 0x100);
        uStack_420 = *(undefined8 *)(param_2 + 0xf8);
        uStack_408 = *(undefined8 *)(param_2 + 0x110);
        uStack_410 = *(undefined8 *)(param_2 + 0x108);
        uStack_6f8 = *(ulong *)(param_2 + 0xe0);
        lStack_700 = *(long *)(param_2 + 0xd8);
        uStack_6c8 = *(undefined8 *)(param_2 + 0x110);
        uStack_6d0 = *(undefined8 *)(param_2 + 0x108);
        uStack_6d8 = *(undefined8 *)(param_2 + 0x100);
        lStack_6e0 = *(long *)(param_2 + 0xf8);
        lStack_6e8 = *(long *)(param_2 + 0xf0);
        uStack_6f0 = *(undefined8 *)(param_2 + 0xe8);
        lStack_480 = lStack_740;
        uStack_478 = uStack_738;
        uStack_470 = uStack_730;
        uStack_468 = uStack_728;
        uStack_460 = uStack_720;
        uStack_458 = uStack_718;
        uStack_450 = uStack_710;
        uStack_448 = uStack_708;
        if (lStack_740 == 0) {
          if (lStack_700 != 0) {
LAB_1015ab8f4:
            lStack_850 = lStack_740;
            uStack_848 = uStack_738;
            uStack_840 = uStack_730;
            uStack_838 = uStack_728;
            uStack_830 = uStack_720;
            uStack_828 = uStack_718;
            uStack_820 = uStack_710;
            uStack_818 = uStack_708;
            lStack_810 = lStack_700;
            uStack_808 = uStack_6f8;
            uStack_800 = uStack_6f0;
            lStack_7f8 = lStack_6e8;
            lStack_7f0 = lStack_6e0;
            uStack_7e8 = uStack_6d8;
            uStack_7e0 = uStack_6d0;
            uStack_7d8 = uStack_6c8;
            FUN_1015bbdcc(&lStack_480,&lStack_250,0x112db7118,&UNK_10d964958);
            FUN_1015bbdcc(&uStack_440,&lStack_250,0x112db7118,&UNK_10d964958);
            uVar15 = 0x112db7120;
            puVar17 = &UNK_10d964960;
            goto LAB_1015ab97c;
          }
          uStack_848 = *(ulong *)(param_1 + 0xe0);
          lStack_850 = *plVar12;
          uStack_838 = *(undefined8 *)(param_1 + 0xf0);
          uStack_840 = *(undefined8 *)(param_1 + 0xe8);
          uStack_828 = *(undefined8 *)(param_1 + 0x100);
          uStack_830 = *(undefined8 *)(param_1 + 0xf8);
          uStack_818 = *(undefined8 *)(param_1 + 0x110);
          uStack_820 = *(undefined8 *)(param_1 + 0x108);
          FUN_1015bbdcc(&lStack_480,&lStack_250,0x112db7118,&UNK_10d964958);
          FUN_1015bbdcc(&uStack_440,&lStack_250,0x112db7118,&UNK_10d964958);
          FUN_1015c5e7c(&lStack_850,0x112db7118,&UNK_10d964958);
        }
        else {
          if (lStack_700 == 0) goto LAB_1015ab8f4;
          uStack_848 = *(ulong *)(param_2 + 0xe0);
          lStack_850 = *(long *)(param_2 + 0xd8);
          uStack_838 = *(undefined8 *)(param_2 + 0xf0);
          uStack_840 = *(undefined8 *)(param_2 + 0xe8);
          uStack_828 = *(undefined8 *)(param_2 + 0x100);
          uStack_830 = *(undefined8 *)(param_2 + 0xf8);
          uStack_818 = *(undefined8 *)(param_2 + 0x110);
          uStack_820 = *(undefined8 *)(param_2 + 0x108);
          uStack_1b8 = *(undefined8 *)(param_1 + 0xe0);
          lStack_1c0 = *plVar12;
          uStack_1a8 = *(undefined8 *)(param_1 + 0xf0);
          uStack_1b0 = *(undefined8 *)(param_1 + 0xe8);
          uStack_198 = *(undefined8 *)(param_1 + 0x100);
          uStack_1a0 = *(undefined8 *)(param_1 + 0xf8);
          uStack_188 = *(undefined8 *)(param_1 + 0x110);
          uStack_190 = *(undefined8 *)(param_1 + 0x108);
          lStack_180 = lStack_850;
          uStack_178 = uStack_848;
          uStack_170 = uStack_840;
          uStack_168 = uStack_838;
          uStack_160 = uStack_830;
          uStack_158 = uStack_828;
          uStack_150 = uStack_820;
          uStack_148 = uStack_818;
          FUN_1015bbdcc(&lStack_480,&lStack_250,0x112db7118,&UNK_10d964958);
          FUN_1015bbdcc(&uStack_440,&lStack_250,0x112db7118,&UNK_10d964958);
          plVar12 = &lStack_1c0;
          func_0x0001015b71d8(plVar12,&lStack_180);
          FUN_1015c5e7c(&lStack_850,0x112db7118,&UNK_10d964958);
          FUN_1015c5e7c(&lStack_740,0x112db7118,&UNK_10d964958);
          if (((ulong)plVar12 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x118,auStack_4c8,0,0);
        func_0x000107c61428(param_2 + 0x118,auStack_4e0,0,0);
        lVar13 = *(long *)(param_1 + 0x118);
        uVar16 = *(ulong *)(param_1 + 0x120);
        uVar19 = *(ulong *)(param_1 + 0x128);
        lVar23 = *(long *)(param_2 + 0x118);
        uVar10 = *(ulong *)(param_2 + 0x120);
        uVar22 = *(ulong *)(param_2 + 0x128);
        uVar20 = uVar19;
        uVar11 = uVar16;
        lVar21 = lVar13;
        if (uVar19 >> 0x3c < 0xf) {
          if (uVar22 >> 0x3c < 0xf) {
            FUN_100cb6160(lVar13,uVar16,uVar19);
            if (lVar13 != lVar23) goto LAB_1015ac1d0;
            FUN_100cb6160(lVar13,uVar10,uVar22);
            uVar20 = uVar16;
            FUN_100e25fcc(uVar16,uVar19,uVar10,uVar22);
            FUN_100cb61c8(lVar13,uVar10,uVar22);
            if ((uVar20 & 1) == 0) goto LAB_1015ac1fc;
            goto LAB_1015aba58;
          }
        }
        else if (0xe < uVar22 >> 0x3c) {
          FUN_100cb6160(lVar13,uVar16,uVar19);
          FUN_100cb6160(lVar23,uVar10,uVar22);
LAB_1015aba58:
          FUN_100cb61c8(lVar13,uVar16,uVar19);
          func_0x000107c61428(param_1 + 0x130,auStack_618,0,0);
          func_0x000107c61428(param_2 + 0x130,auStack_630,0,0);
          lStack_6e8 = *(long *)(param_1 + 0x188);
          uStack_6f0 = *(undefined8 *)(param_1 + 0x180);
          uStack_598 = *(undefined8 *)(param_1 + 0x198);
          uStack_5a0 = *(undefined8 *)(param_1 + 400);
          uStack_6d8 = *(undefined8 *)(param_1 + 0x198);
          lStack_6e0 = *(long *)(param_1 + 400);
          uStack_588 = *(undefined8 *)(param_1 + 0x1a8);
          uStack_590 = *(undefined8 *)(param_1 + 0x1a0);
          uStack_728 = *(undefined8 *)(param_1 + 0x148);
          uStack_730 = *(undefined8 *)(param_1 + 0x140);
          uStack_5d8 = *(undefined8 *)(param_1 + 0x158);
          uStack_5e0 = *(undefined8 *)(param_1 + 0x150);
          uStack_718 = *(undefined8 *)(param_1 + 0x158);
          uStack_720 = *(undefined8 *)(param_1 + 0x150);
          uStack_5c8 = *(undefined8 *)(param_1 + 0x168);
          uStack_5d0 = *(undefined8 *)(param_1 + 0x160);
          uStack_708 = *(undefined8 *)(param_1 + 0x168);
          uStack_710 = *(undefined8 *)(param_1 + 0x160);
          uStack_5b8 = *(undefined8 *)(param_1 + 0x178);
          uStack_5c0 = *(undefined8 *)(param_1 + 0x170);
          uStack_6f8 = *(ulong *)(param_1 + 0x178);
          lStack_700 = *(long *)(param_1 + 0x170);
          uStack_5a8 = *(undefined8 *)(param_1 + 0x188);
          uStack_5b0 = *(undefined8 *)(param_1 + 0x180);
          uStack_5f8 = *(undefined8 *)(param_1 + 0x138);
          uStack_600 = *(undefined8 *)(param_1 + 0x130);
          uStack_5e8 = *(undefined8 *)(param_1 + 0x148);
          uStack_5f0 = *(undefined8 *)(param_1 + 0x140);
          uStack_738 = *(ulong *)(param_1 + 0x138);
          lStack_740 = *(long *)(param_1 + 0x130);
          uStack_6c8 = *(undefined8 *)(param_1 + 0x1a8);
          uStack_6d0 = *(undefined8 *)(param_1 + 0x1a0);
          uStack_660 = *(undefined8 *)(param_2 + 0x188);
          uStack_668 = *(undefined8 *)(param_2 + 0x180);
          uStack_508 = *(undefined8 *)(param_2 + 0x198);
          uStack_510 = *(undefined8 *)(param_2 + 400);
          uStack_650 = *(undefined8 *)(param_2 + 0x198);
          uStack_658 = *(undefined8 *)(param_2 + 400);
          uStack_4f8 = *(undefined8 *)(param_2 + 0x1a8);
          uStack_500 = *(undefined8 *)(param_2 + 0x1a0);
          uStack_6a0 = *(undefined8 *)(param_2 + 0x148);
          uStack_6a8 = *(undefined8 *)(param_2 + 0x140);
          uStack_548 = *(undefined8 *)(param_2 + 0x158);
          uStack_550 = *(undefined8 *)(param_2 + 0x150);
          uStack_690 = *(undefined8 *)(param_2 + 0x158);
          uStack_698 = *(undefined8 *)(param_2 + 0x150);
          uStack_538 = *(undefined8 *)(param_2 + 0x168);
          uStack_540 = *(undefined8 *)(param_2 + 0x160);
          uStack_680 = *(undefined8 *)(param_2 + 0x168);
          uStack_688 = *(undefined8 *)(param_2 + 0x160);
          uStack_528 = *(undefined8 *)(param_2 + 0x178);
          uStack_530 = *(undefined8 *)(param_2 + 0x170);
          uStack_670 = *(undefined8 *)(param_2 + 0x178);
          uStack_678 = *(undefined8 *)(param_2 + 0x170);
          uStack_518 = *(undefined8 *)(param_2 + 0x188);
          uStack_520 = *(undefined8 *)(param_2 + 0x180);
          uStack_568 = *(undefined8 *)(param_2 + 0x138);
          uStack_570 = *(undefined8 *)(param_2 + 0x130);
          uStack_558 = *(undefined8 *)(param_2 + 0x148);
          uStack_560 = *(undefined8 *)(param_2 + 0x140);
          uStack_6b0 = *(undefined8 *)(param_2 + 0x138);
          lStack_6b8 = *(long *)(param_2 + 0x130);
          uStack_640 = *(undefined8 *)(param_2 + 0x1a8);
          uStack_648 = *(undefined8 *)(param_2 + 0x1a0);
          uStack_580 = *(undefined8 *)(param_1 + 0x1b0);
          uStack_6c0 = *(undefined8 *)(param_1 + 0x1b0);
          uStack_4f0 = *(undefined8 *)(param_2 + 0x1b0);
          uStack_638 = *(undefined8 *)(param_2 + 0x1b0);
          iVar8 = (int)&lStack_740;
          FUN_1015bbd4c();
          if (iVar8 == 1) {
            iVar8 = (int)&lStack_6b8;
            FUN_1015bbd4c();
            if (iVar8 != 1) {
LAB_1015abcec:
              func_0x000107c610b4(&lStack_850,&lStack_740,0x110);
              FUN_1015bbdcc(&uStack_600,&lStack_250,0x112db7128,&UNK_10d964968);
              FUN_1015bbdcc(&uStack_570,&lStack_250,0x112db7128,&UNK_10d964968);
              uVar15 = 0x112db7130;
              puVar17 = &UNK_10d964970;
              goto LAB_1015ab97c;
            }
            uStack_7e8 = uStack_6d8;
            lStack_7f0 = lStack_6e0;
            uStack_7d8 = uStack_6c8;
            uStack_7e0 = uStack_6d0;
            uStack_7d0 = uStack_6c0;
            uStack_828 = uStack_718;
            uStack_830 = uStack_720;
            uStack_818 = uStack_708;
            uStack_820 = uStack_710;
            lStack_7f8 = lStack_6e8;
            uStack_800 = uStack_6f0;
            uStack_808 = uStack_6f8;
            lStack_810 = lStack_700;
            uStack_838 = uStack_728;
            uStack_840 = uStack_730;
            uStack_848 = uStack_738;
            lStack_850 = lStack_740;
            FUN_1015bbdcc(&uStack_600,&lStack_250,0x112db7128,&UNK_10d964968);
            FUN_1015bbdcc(&uStack_570,&lStack_250,0x112db7128,&UNK_10d964968);
            FUN_1015c5e7c(&lStack_850,0x112db7128,&UNK_10d964968);
          }
          else {
            uStack_7e8 = uStack_6d8;
            lStack_7f0 = lStack_6e0;
            uStack_7d8 = uStack_6c8;
            uStack_7e0 = uStack_6d0;
            uStack_7d0 = uStack_6c0;
            uStack_828 = uStack_718;
            uStack_830 = uStack_720;
            uStack_818 = uStack_708;
            uStack_820 = uStack_710;
            lStack_7f8 = lStack_6e8;
            uStack_800 = uStack_6f0;
            uStack_808 = uStack_6f8;
            lStack_810 = lStack_700;
            uStack_838 = uStack_728;
            uStack_840 = uStack_730;
            uStack_848 = uStack_738;
            lStack_850 = lStack_740;
            iVar8 = (int)&lStack_6b8;
            FUN_1015bbd4c();
            if (iVar8 == 1) goto LAB_1015abcec;
            uStack_b58 = uStack_650;
            uStack_b60 = uStack_658;
            uStack_b48 = uStack_640;
            uStack_b50 = uStack_648;
            uStack_b40 = uStack_638;
            uStack_b98 = uStack_690;
            uStack_ba0 = uStack_698;
            uStack_b88 = uStack_680;
            uStack_b90 = uStack_688;
            uStack_b78 = uStack_670;
            uStack_b80 = uStack_678;
            uStack_b68 = uStack_660;
            uStack_b70 = uStack_668;
            uStack_bb8 = uStack_6b0;
            lStack_bc0 = lStack_6b8;
            uStack_ba8 = uStack_6a0;
            uStack_bb0 = uStack_6a8;
            uStack_1e8 = uStack_650;
            uStack_1f0 = uStack_658;
            uStack_1d8 = uStack_640;
            uStack_1e0 = uStack_648;
            uStack_1d0 = uStack_638;
            uStack_228 = uStack_690;
            uStack_230 = uStack_698;
            uStack_218 = uStack_680;
            uStack_220 = uStack_688;
            uStack_1f8 = uStack_660;
            uStack_200 = uStack_668;
            uStack_208 = uStack_670;
            uStack_210 = uStack_678;
            uStack_238 = uStack_6a0;
            uStack_240 = uStack_6a8;
            uStack_248 = uStack_6b0;
            lStack_250 = lStack_6b8;
            uStack_278 = uStack_7e8;
            lStack_280 = lStack_7f0;
            uStack_268 = uStack_7d8;
            uStack_270 = uStack_7e0;
            uStack_260 = uStack_7d0;
            uStack_2b8 = uStack_828;
            uStack_2c0 = uStack_830;
            uStack_2a8 = uStack_818;
            uStack_2b0 = uStack_820;
            lStack_288 = lStack_7f8;
            uStack_290 = uStack_800;
            uStack_298 = uStack_808;
            lStack_2a0 = lStack_810;
            uStack_2c8 = uStack_838;
            uStack_2d0 = uStack_840;
            uStack_2d8 = uStack_848;
            lStack_2e0 = lStack_850;
            FUN_1015bbdcc(&uStack_600,&lStack_c50,0x112db7128,&UNK_10d964968);
            FUN_1015bbdcc(&uStack_570,&lStack_c50,0x112db7128,&UNK_10d964968);
            plVar12 = &lStack_2e0;
            func_0x0001015b7470(plVar12,&lStack_250);
            FUN_1015c5e7c(&lStack_bc0,0x112db7128,&UNK_10d964968);
            FUN_1015c5e7c(&lStack_740,0x112db7128,&UNK_10d964968);
            if (((ulong)plVar12 & 1) == 0) {
              return 0;
            }
          }
          func_0x000107c61428(param_1 + 0x1b8,auStack_868,0,0);
          func_0x000107c61428(param_2 + 0x1b8,auStack_880,0,0);
          lVar13 = *(long *)(param_1 + 0x1b8);
          uVar16 = *(ulong *)(param_1 + 0x1c0);
          uVar19 = *(ulong *)(param_1 + 0x1c8);
          lVar23 = *(long *)(param_2 + 0x1b8);
          uVar10 = *(ulong *)(param_2 + 0x1c0);
          uVar22 = *(ulong *)(param_2 + 0x1c8);
          uVar20 = uVar19;
          uVar11 = uVar16;
          lVar21 = lVar13;
          if (uVar19 >> 0x3c < 0xf) {
            if (uVar22 >> 0x3c < 0xf) {
              FUN_100cb6160(lVar13,uVar16,uVar19);
              if (lVar13 != lVar23) goto LAB_1015ac1d0;
              FUN_100cb6160(lVar13,uVar10,uVar22);
              uVar20 = uVar16;
              FUN_100e25fcc(uVar16,uVar19,uVar10,uVar22);
              FUN_100cb61c8(lVar13,uVar10,uVar22);
              if ((uVar20 & 1) == 0) goto LAB_1015ac1fc;
              goto LAB_1015abef4;
            }
          }
          else if (0xe < uVar22 >> 0x3c) {
            FUN_100cb6160(lVar13,uVar16,uVar19);
            FUN_100cb6160(lVar23,uVar10,uVar22);
LAB_1015abef4:
            FUN_100cb61c8(lVar13,uVar16,uVar19);
            func_0x000107c61428(param_1 + 0x1d0,auStack_898,0,0);
            func_0x000107c61428(param_2 + 0x1d0,auStack_8b0,0,0);
            lVar13 = *(long *)(param_1 + 0x1d0);
            uVar16 = *(ulong *)(param_1 + 0x1d8);
            uVar19 = *(ulong *)(param_1 + 0x1e0);
            lVar23 = *(long *)(param_2 + 0x1d0);
            uVar10 = *(ulong *)(param_2 + 0x1d8);
            uVar22 = *(ulong *)(param_2 + 0x1e0);
            uVar20 = uVar19;
            uVar11 = uVar16;
            lVar21 = lVar13;
            if (uVar19 >> 0x3c < 0xf) {
              if (uVar22 >> 0x3c < 0xf) {
                FUN_100cb6160(lVar13,uVar16,uVar19);
                if (lVar13 != lVar23) goto LAB_1015ac1d0;
                FUN_100cb6160(lVar13,uVar10,uVar22);
                uVar20 = uVar16;
                FUN_100e25fcc(uVar16,uVar19,uVar10,uVar22);
                FUN_100cb61c8(lVar13,uVar10,uVar22);
                if ((uVar20 & 1) == 0) goto LAB_1015ac1fc;
                goto LAB_1015abf7c;
              }
            }
            else if (0xe < uVar22 >> 0x3c) {
              FUN_100cb6160(lVar13,uVar16,uVar19);
              FUN_100cb6160(lVar23,uVar10,uVar22);
LAB_1015abf7c:
              FUN_100cb61c8(lVar13,uVar16,uVar19);
              plVar12 = (long *)(param_1 + 0x1e8);
              func_0x000107c61428(plVar12,auStack_988,0,0);
              plVar1 = (long *)(param_2 + 0x1e8);
              func_0x000107c61428(plVar1,auStack_9a0,0,0);
              uStack_948 = *(undefined8 *)(param_1 + 0x210);
              uStack_950 = *(undefined8 *)(param_1 + 0x208);
              uStack_938 = *(undefined8 *)(param_1 + 0x220);
              uStack_940 = *(undefined8 *)(param_1 + 0x218);
              uStack_928 = *(ulong *)(param_1 + 0x230);
              lStack_930 = *(long *)(param_1 + 0x228);
              uStack_920 = *(undefined8 *)(param_1 + 0x238);
              uStack_968 = *(ulong *)(param_1 + 0x1f0);
              lStack_970 = *plVar12;
              uStack_958 = *(undefined8 *)(param_1 + 0x200);
              uStack_960 = *(undefined8 *)(param_1 + 0x1f8);
              uStack_8c0 = *(undefined8 *)(param_2 + 0x238);
              uStack_8d8 = *(undefined8 *)(param_2 + 0x220);
              lStack_8e0 = *(long *)(param_2 + 0x218);
              uStack_8c8 = *(undefined8 *)(param_2 + 0x230);
              uStack_8d0 = *(undefined8 *)(param_2 + 0x228);
              uStack_8f8 = *(undefined8 *)(param_2 + 0x200);
              uStack_900 = *(undefined8 *)(param_2 + 0x1f8);
              uStack_8e8 = *(undefined8 *)(param_2 + 0x210);
              uStack_8f0 = *(undefined8 *)(param_2 + 0x208);
              lStack_908 = *(long *)(param_2 + 0x1f0);
              lStack_910 = *plVar1;
              lStack_740 = lStack_970;
              uStack_738 = uStack_968;
              uStack_730 = uStack_960;
              uStack_728 = uStack_958;
              uStack_720 = uStack_950;
              uStack_718 = uStack_948;
              uStack_710 = uStack_940;
              uStack_708 = uStack_938;
              lStack_700 = lStack_930;
              uStack_6f8 = uStack_928;
              uStack_6f0 = uStack_920;
              lStack_6e8 = lStack_910;
              lStack_6e0 = lStack_908;
              uStack_6d8 = uStack_900;
              uStack_6d0 = uStack_8f8;
              uStack_6c8 = uStack_8f0;
              uStack_6c0 = uStack_8e8;
              lStack_6b8 = lStack_8e0;
              uStack_6b0 = uStack_8d8;
              uStack_6a8 = uStack_8d0;
              uStack_6a0 = uStack_8c8;
              uStack_698 = uStack_8c0;
              if (uStack_968 == 0) {
                if (lStack_908 != 0) goto LAB_1015ac228;
                uStack_828 = *(undefined8 *)(param_1 + 0x210);
                uStack_830 = *(undefined8 *)(param_1 + 0x208);
                uStack_818 = *(undefined8 *)(param_1 + 0x220);
                uStack_820 = *(undefined8 *)(param_1 + 0x218);
                uStack_808 = *(undefined8 *)(param_1 + 0x230);
                lStack_810 = *(undefined8 *)(param_1 + 0x228);
                uStack_800 = *(undefined8 *)(param_1 + 0x238);
                uStack_848 = *(undefined8 *)(param_1 + 0x1f0);
                lStack_850 = *plVar12;
                uStack_838 = *(undefined8 *)(param_1 + 0x200);
                uStack_840 = *(undefined8 *)(param_1 + 0x1f8);
                FUN_1015bbdcc(&lStack_970,&lStack_bc0,0x112db7138,&UNK_10d964978);
                FUN_1015bbdcc(&lStack_910,&lStack_bc0,0x112db7138,&UNK_10d964978);
                FUN_1015c5e7c(&lStack_850,0x112db7138,&UNK_10d964978);
              }
              else {
                if (lStack_908 == 0) {
LAB_1015ac228:
                  lStack_850 = lStack_970;
                  uStack_848 = uStack_968;
                  uStack_840 = uStack_960;
                  uStack_838 = uStack_958;
                  uStack_830 = uStack_950;
                  uStack_828 = uStack_948;
                  uStack_820 = uStack_940;
                  uStack_818 = uStack_938;
                  lStack_810 = lStack_930;
                  uStack_808 = uStack_928;
                  uStack_800 = uStack_920;
                  lStack_7f8 = lStack_910;
                  lStack_7f0 = lStack_908;
                  uStack_7e8 = uStack_900;
                  uStack_7e0 = uStack_8f8;
                  uStack_7d8 = uStack_8f0;
                  uStack_7d0 = uStack_8e8;
                  lStack_7c8 = lStack_8e0;
                  uStack_7c0 = uStack_8d8;
                  uStack_7b8 = uStack_8d0;
                  uStack_7b0 = uStack_8c8;
                  uStack_7a8 = uStack_8c0;
                  FUN_1015bbdcc(&lStack_970,&lStack_bc0,0x112db7138,&UNK_10d964978);
                  FUN_1015bbdcc(&lStack_910,&lStack_bc0,0x112db7138,&UNK_10d964978);
                  uVar15 = 0x112db7140;
                  puVar17 = &UNK_10d964980;
                  goto LAB_1015ab97c;
                }
                uStack_b98 = *(undefined8 *)(param_2 + 0x210);
                uStack_ba0 = *(undefined8 *)(param_2 + 0x208);
                uStack_b88 = *(undefined8 *)(param_2 + 0x220);
                uStack_b90 = *(undefined8 *)(param_2 + 0x218);
                uStack_b78 = *(undefined8 *)(param_2 + 0x230);
                uStack_b80 = *(undefined8 *)(param_2 + 0x228);
                uStack_b70 = *(undefined8 *)(param_2 + 0x238);
                uStack_bb8 = *(undefined8 *)(param_2 + 0x1f0);
                lStack_bc0 = *plVar1;
                uStack_ba8 = *(undefined8 *)(param_2 + 0x200);
                uStack_bb0 = *(undefined8 *)(param_2 + 0x1f8);
                uStack_c28 = *(undefined8 *)(param_1 + 0x210);
                uStack_c30 = *(undefined8 *)(param_1 + 0x208);
                uStack_c18 = *(undefined8 *)(param_1 + 0x220);
                uStack_c20 = *(undefined8 *)(param_1 + 0x218);
                uStack_c08 = *(undefined8 *)(param_1 + 0x230);
                uStack_c10 = *(undefined8 *)(param_1 + 0x228);
                uStack_c00 = *(undefined8 *)(param_1 + 0x238);
                uStack_c48 = *(undefined8 *)(param_1 + 0x1f0);
                lStack_c50 = *plVar12;
                uStack_c38 = *(undefined8 *)(param_1 + 0x200);
                uStack_c40 = *(undefined8 *)(param_1 + 0x1f8);
                lStack_850 = lStack_bc0;
                uStack_848 = uStack_bb8;
                uStack_840 = uStack_bb0;
                uStack_838 = uStack_ba8;
                uStack_830 = uStack_ba0;
                uStack_828 = uStack_b98;
                uStack_820 = uStack_b90;
                uStack_818 = uStack_b88;
                lStack_810 = uStack_b80;
                uStack_808 = uStack_b78;
                uStack_800 = uStack_b70;
                FUN_1015bbdcc(&lStack_970,&uStack_b30,0x112db7138,&UNK_10d964978);
                FUN_1015bbdcc(&lStack_910,&uStack_b30,0x112db7138,&UNK_10d964978);
                plVar12 = &lStack_c50;
                func_0x0001015b777c(plVar12,&lStack_bc0);
                FUN_1015c5e7c(&lStack_850,0x112db7138,&UNK_10d964978);
                FUN_1015c5e7c(&lStack_740,0x112db7138,&UNK_10d964978);
                if (((ulong)plVar12 & 1) == 0) {
                  return 0;
                }
              }
              func_0x000107c61428(param_1 + 0x240,auStack_a38,0,0);
              func_0x000107c61428(param_2 + 0x240,auStack_a50,0,0);
              uStack_a18 = *(ulong *)(param_1 + 0x248);
              lStack_a20 = *(long *)(param_1 + 0x240);
              uStack_a08 = *(undefined8 *)(param_1 + 600);
              uStack_a10 = *(undefined8 *)(param_1 + 0x250);
              uStack_9f8 = *(undefined8 *)(param_1 + 0x268);
              uStack_a00 = *(undefined8 *)(param_1 + 0x260);
              uStack_9e8 = *(undefined8 *)(param_1 + 0x278);
              uStack_9f0 = *(undefined8 *)(param_1 + 0x270);
              uStack_9d8 = *(undefined8 *)(param_2 + 0x248);
              uStack_9e0 = *(undefined8 *)(param_2 + 0x240);
              uStack_9c8 = *(undefined8 *)(param_2 + 600);
              uStack_9d0 = *(undefined8 *)(param_2 + 0x250);
              uStack_6f8 = *(ulong *)(param_2 + 0x248);
              lStack_700 = *(long *)(param_2 + 0x240);
              lStack_6e8 = *(long *)(param_2 + 600);
              uStack_6f0 = *(undefined8 *)(param_2 + 0x250);
              uStack_6d8 = *(undefined8 *)(param_2 + 0x268);
              lStack_6e0 = *(long *)(param_2 + 0x260);
              uStack_9a8 = *(undefined8 *)(param_2 + 0x278);
              uStack_9b0 = *(undefined8 *)(param_2 + 0x270);
              uStack_9b8 = *(undefined8 *)(param_2 + 0x268);
              uStack_9c0 = *(undefined8 *)(param_2 + 0x260);
              uStack_6c8 = *(undefined8 *)(param_2 + 0x278);
              uStack_6d0 = *(undefined8 *)(param_2 + 0x270);
              lStack_740 = lStack_a20;
              uStack_738 = uStack_a18;
              uStack_730 = uStack_a10;
              uStack_728 = uStack_a08;
              uStack_720 = uStack_a00;
              uStack_718 = uStack_9f8;
              uStack_710 = uStack_9f0;
              uStack_708 = uStack_9e8;
              if (uStack_a18 >> 0x3c < 0xf) {
                if (uStack_6f8 >> 0x3c < 0xf) {
                  uStack_a88 = *(undefined8 *)(param_2 + 0x248);
                  lStack_a90 = *(long *)(param_2 + 0x240);
                  uStack_a78 = *(undefined8 *)(param_2 + 600);
                  uStack_a80 = *(undefined8 *)(param_2 + 0x250);
                  uStack_a68 = *(undefined8 *)(param_2 + 0x268);
                  uStack_a70 = *(undefined8 *)(param_2 + 0x260);
                  uStack_a58 = *(undefined8 *)(param_2 + 0x278);
                  uStack_a60 = *(undefined8 *)(param_2 + 0x270);
                  uStack_b28 = *(undefined8 *)(param_1 + 0x248);
                  uStack_b30 = *(undefined8 *)(param_1 + 0x240);
                  uStack_b18 = *(undefined8 *)(param_1 + 600);
                  uStack_b20 = *(undefined8 *)(param_1 + 0x250);
                  uStack_b08 = *(undefined8 *)(param_1 + 0x268);
                  uStack_b10 = *(undefined8 *)(param_1 + 0x260);
                  uStack_af8 = *(undefined8 *)(param_1 + 0x278);
                  uStack_b00 = *(undefined8 *)(param_1 + 0x270);
                  lStack_850 = lStack_a90;
                  uStack_848 = uStack_a88;
                  uStack_840 = uStack_a80;
                  uStack_838 = uStack_a78;
                  uStack_830 = uStack_a70;
                  uStack_828 = uStack_a68;
                  uStack_820 = uStack_a60;
                  uStack_818 = uStack_a58;
                  FUN_1015bbdcc(&lStack_a20,auStack_ad0,0x112db7148,&UNK_10d964988);
                  FUN_1015bbdcc(&uStack_9e0,auStack_ad0,0x112db7148,&UNK_10d964988);
                  puVar9 = &uStack_b30;
                  FUN_1015bb790(puVar9,&lStack_850);
                  FUN_1015c5e7c(&lStack_a90,0x112db7148,&UNK_10d964988);
                  FUN_1015c5e7c(&lStack_740,0x112db7148,&UNK_10d964988);
                  if (((ulong)puVar9 & 1) == 0) {
                    return 0;
                  }
                  return 1;
                }
              }
              else if (0xe < uStack_6f8 >> 0x3c) {
                uStack_848 = *(undefined8 *)(param_1 + 0x248);
                lStack_850 = *(long *)(param_1 + 0x240);
                uStack_838 = *(undefined8 *)(param_1 + 600);
                uStack_840 = *(undefined8 *)(param_1 + 0x250);
                uStack_828 = *(undefined8 *)(param_1 + 0x268);
                uStack_830 = *(undefined8 *)(param_1 + 0x260);
                uStack_818 = *(undefined8 *)(param_1 + 0x278);
                uStack_820 = *(undefined8 *)(param_1 + 0x270);
                FUN_1015bbdcc(&lStack_a20,&uStack_b30,0x112db7148,&UNK_10d964988);
                FUN_1015bbdcc(&uStack_9e0,&uStack_b30,0x112db7148,&UNK_10d964988);
                FUN_1015c5e7c(&lStack_850,0x112db7148,&UNK_10d964988);
                return 1;
              }
              lStack_850 = lStack_a20;
              uStack_848 = uStack_a18;
              uStack_840 = uStack_a10;
              uStack_838 = uStack_a08;
              uStack_830 = uStack_a00;
              uStack_828 = uStack_9f8;
              uStack_820 = uStack_9f0;
              uStack_818 = uStack_9e8;
              lStack_810 = lStack_700;
              uStack_808 = uStack_6f8;
              uStack_800 = uStack_6f0;
              lStack_7f8 = lStack_6e8;
              lStack_7f0 = lStack_6e0;
              uStack_7e8 = uStack_6d8;
              uStack_7e0 = uStack_6d0;
              uStack_7d8 = uStack_6c8;
              FUN_1015bbdcc(&lStack_a20,&uStack_b30,0x112db7148,&UNK_10d964988);
              FUN_1015bbdcc(&uStack_9e0,&uStack_b30,0x112db7148,&UNK_10d964988);
              uVar15 = 0x112db7150;
              puVar17 = &UNK_10d964990;
LAB_1015ab97c:
              FUN_1015c5e7c(&lStack_850,uVar15,puVar17);
              return 0;
            }
          }
        }
      }
    }
  }
  lVar13 = lVar23;
  uVar16 = uVar10;
  uVar19 = uVar22;
  FUN_100cb6160(lVar21,uVar11,uVar20);
  FUN_100cb6160(lVar13,uVar16,uVar19);
  FUN_100cb61c8(lVar21,uVar11,uVar20);
LAB_1015ac1fc:
  FUN_100cb61c8(lVar13,uVar16,uVar19);
  return 0;
}



/* Entry: 1015ac57c; end: 1015ac5d3;  */

void FUN_1015ac57c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112db6ec0 != -1) {
    func_0x000107c61568(0x112db6ec0,FUN_1015a9218);
  }
  uVar1 = uRam0000000112db6ec8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1015ac5d4; end: 1015ac62f;  */

void FUN_1015ac5d4(void)

{
  FUN_1015accac();
  return;
}



/* Entry: 1015ac630; end: 1015ac667;  */

uint FUN_1015ac630(long param_1,long param_2)

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
  func_0x0001015c5b7c();
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



/* Entry: 1015ac668; end: 1015ac673;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015ac668(long *param_1)

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
  byte *unaff_x25;
  ulong uVar26;
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
    FUN_1015aaea4(uVar25,uVar26);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015ac674; end: 1015ac713;  */

/* WARNING: Possible PIC construction at 0x0001015ac6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015ac6d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015ac6c4) */
/* WARNING: Removing unreachable block (ram,0x0001015ac6d4) */

void FUN_1015ac674(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7208 != -1) {
    func_0x000107c61568(0x112db7208,FUN_1015a91d0);
  }
  uVar5 = uRam0000000113800630;
  uVar4 = uRam0000000113800628;
  uVar3 = uRam0000000113800620;
  uVar2 = uRam0000000113800618;
  uVar1 = uRam0000000113800610;
  *param_1 = uRam0000000113800608;
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



/* Entry: 1015ac714; end: 1015ac727;  */

void FUN_1015ac714(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7e28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7e28,&UNK_10d966058);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015ac728; end: 1015ac75f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015ac728(undefined8 *param_1,undefined8 param_2)

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
  FUN_1015bc9a0();
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



/* Entry: 1015ac760; end: 1015ac793;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015ac760(undefined8 *param_1,long *param_2)

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
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1015aaea4(uVar25,uVar26);
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
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 1015ac794; end: 1015ac7db;  */

void FUN_1015ac794(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966470,0x48,2);
  uRam0000000113800650 = uStack_38;
  uRam0000000113800648 = uStack_40;
  uRam0000000113800660 = uStack_28;
  uRam0000000113800658 = uStack_30;
  uRam0000000113800670 = uStack_18;
  uRam0000000113800668 = uStack_20;
  return;
}



/* Entry: 1015ac7dc; end: 1015acc2f;  */

void FUN_1015ac7dc(long param_1)

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
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
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
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar14 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar14 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar11 = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  FUN_100cb60bc(&uStack_2a8);
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_278;
  func_0x000107c61428(param_1 + 0x10,auStack_2c0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar14,auStack_2d8,1,0);
  uVar12 = *puVar14;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar14 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar13;
  FUN_10155b840(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar13);
  FUN_101593c1c(uVar12,uVar4,uVar8,uVar15,uVar9,uVar16,uVar10);
  func_0x000107c61428(param_1 + 0x48,auStack_2f0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61428(unaff_x20 + 0x48,auStack_308,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar15;
  FUN_100cb6160(uVar1,uVar3,uVar15);
  FUN_100cb61c8(uVar2,uVar4,uVar16);
  func_0x000107c61428(param_1 + 0x60,auStack_320,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uVar12 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(puVar11,auStack_338,1,0);
  uVar13 = *puVar11;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x90);
  *puVar11 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar12;
  FUN_10155b840(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12);
  FUN_101593c1c(uVar13,uVar4,uVar8,uVar15,uVar9,uVar16,uVar10);
  func_0x000107c61428(param_1 + 0x98,auStack_350,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  uVar13 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(unaff_x20 + 0x98,auStack_368,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar5;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar7;
  *(undefined8 *)(unaff_x20 + 200) = uVar13;
  FUN_10155b840(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar13);
  FUN_101593c1c(uVar4,uVar8,uVar15,uVar9,uVar16,uVar10,uVar12);
  func_0x000107c61428(param_1 + 0xd0,auStack_380,0,0);
  uStack_168 = *(undefined8 *)(param_1 + 0x158);
  uStack_170 = *(undefined8 *)(param_1 + 0x150);
  uStack_158 = *(undefined8 *)(param_1 + 0x168);
  uStack_160 = *(undefined8 *)(param_1 + 0x160);
  uStack_148 = *(undefined8 *)(param_1 + 0x178);
  uStack_150 = *(undefined8 *)(param_1 + 0x170);
  uStack_140 = *(undefined8 *)(param_1 + 0x180);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x118);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x110);
  uStack_198 = *(undefined8 *)(param_1 + 0x128);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x120);
  uStack_188 = *(undefined8 *)(param_1 + 0x138);
  uStack_190 = *(undefined8 *)(param_1 + 0x130);
  uStack_178 = *(undefined8 *)(param_1 + 0x148);
  uStack_180 = *(undefined8 *)(param_1 + 0x140);
  uStack_1e8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x108);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x100);
  FUN_1015bbdcc(&uStack_1f0,&uStack_130,0x112db6f78,&UNK_10d964948);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0xd0,auStack_398,1,0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_1c0;
  FUN_1015c5e7c(&uStack_130,0x112db6f78,&UNK_10d964948);
  return;
}



/* Entry: 1015acc30; end: 1015accab;  */

void FUN_1015acc30(void)

{
  long unaff_x20;
  
  FUN_101593c1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  FUN_100cb61c8(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58));
  FUN_101593c1c(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  FUN_101593c1c(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                *(undefined8 *)(unaff_x20 + 200));
  FUN_1015c5e7c(unaff_x20 + 0xd0,0x112db6f78,&UNK_10d964948);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1015accac; end: 1015acd5f;  */

void FUN_1015accac(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *in_x3;
  code *in_x5;
  code *in_x6;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    (*in_x3)(0);
    func_0x000107c613fc();
    (*in_x5)(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  (*in_x6)();
  return;
}



/* Entry: 1015acd60; end: 1015acecb;  */

/* WARNING: Removing unreachable block (ram,0x0001015ace54) */
/* WARNING: Removing unreachable block (ram,0x0001015ace88) */
/* WARNING: Removing unreachable block (ram,0x0001015acea4) */
/* WARNING: Removing unreachable block (ram,0x0001015acec8) */

void FUN_1015acd60(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          FUN_1015acecc(param_2,param_1,param_3,param_4,0x10159f674,&UNK_110734b68);
        }
        else if (lVar1 == 2) {
          FUN_1015acf6c(param_2,param_1,param_3,param_4,0x1015c5e3c,&UNK_110672a88);
        }
      }
      else if (lVar1 == 3) {
        FUN_1015ad00c(param_2,param_1,param_3,param_4,0x10159f674,&UNK_110734b68);
      }
      else if (lVar1 == 4) {
        FUN_1015ad0ac(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 5) {
        FUN_1015ad140(param_2,param_1,param_3,param_4);
      }
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015acecc; end: 1015acf6b;  */

void FUN_1015acecc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x10,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1015acf6c; end: 1015ad00b;  */

void FUN_1015acf6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x48;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x48,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1015ad00c; end: 1015ad0ab;  */

void FUN_1015ad00c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x60;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x60,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1015ad0ac; end: 1015ad13f;  */

void FUN_1015ad0ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010159f674();
  (*pcVar2)(param_2 + 0x98,&UNK_110734b68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015ad140; end: 1015ad1d3;  */

void FUN_1015ad140(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5dfc();
  (*pcVar2)(param_2 + 0xd0,&UNK_110672b10,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015ad1d4; end: 1015ad23f;  */

void FUN_1015ad1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long unaff_x21;
  
  (*param_7)(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1015ad240; end: 1015ad2d3;  */

void FUN_1015ad240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_1015ad2d4();
  if (unaff_x21 == 0) {
    FUN_1015ad398(param_1,param_2,param_3,param_4);
    FUN_1015ad444(param_1,param_2,param_3,param_4);
    FUN_1015ad508(param_1,param_2,param_3,param_4);
    FUN_1015ad5cc(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1015ad2d4; end: 1015ad397;  */

void FUN_1015ad2d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_78 = *(ulong *)(param_1 + 0x28);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_90 = (undefined4)*(undefined8 *)(param_1 + 0x10);
    uStack_8c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    uStack_88 = (undefined4)*(undefined8 *)(param_1 + 0x18);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar2)(&uStack_90,1,&UNK_110734b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015ad398; end: 1015ad443;  */

void FUN_1015ad398(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x48;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x58);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x48);
    uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5e3c();
    (*pcVar2)(&uStack_70,2,&UNK_110672a88,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015ad444; end: 1015ad507;  */

void FUN_1015ad444(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x60;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_78 = *(ulong *)(param_1 + 0x78);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_80 = *(undefined8 *)(param_1 + 0x70);
    uStack_90 = (undefined4)*(undefined8 *)(param_1 + 0x60);
    uStack_8c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    uStack_88 = (undefined4)*(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    uStack_70 = *(undefined8 *)(param_1 + 0x80);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar2)(&uStack_90,3,&UNK_110734b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015ad508; end: 1015ad5cb;  */

void FUN_1015ad508(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_78 = *(ulong *)(param_1 + 0xb0);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_60 = *(undefined8 *)(param_1 + 200);
    uStack_80 = *(undefined8 *)(param_1 + 0xa8);
    uStack_90 = (undefined4)*(undefined8 *)(param_1 + 0x98);
    uStack_8c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    uStack_88 = (undefined4)*(undefined8 *)(param_1 + 0xa0);
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar2)(&uStack_90,4,&UNK_110734b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015ad5cc; end: 1015ad70f;  */

void FUN_1015ad5cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c61428(param_1 + 0xd0,auStack_1d8,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x158);
  uStack_80 = *(undefined8 *)(param_1 + 0x150);
  uStack_128 = *(undefined8 *)(param_1 + 0x168);
  uStack_130 = *(undefined8 *)(param_1 + 0x160);
  uStack_88 = *(undefined8 *)(param_1 + 0x148);
  uStack_90 = *(undefined8 *)(param_1 + 0x140);
  uStack_138 = *(undefined8 *)(param_1 + 0x158);
  uStack_140 = *(undefined8 *)(param_1 + 0x150);
  uStack_68 = *(undefined8 *)(param_1 + 0x168);
  uStack_70 = *(undefined8 *)(param_1 + 0x160);
  uStack_118 = *(undefined8 *)(param_1 + 0x178);
  uStack_120 = *(undefined8 *)(param_1 + 0x170);
  uStack_b8 = *(undefined8 *)(param_1 + 0x118);
  uStack_c0 = *(undefined8 *)(param_1 + 0x110);
  uStack_168 = *(undefined8 *)(param_1 + 0x128);
  uStack_170 = *(undefined8 *)(param_1 + 0x120);
  uStack_c8 = *(undefined8 *)(param_1 + 0x108);
  uStack_d0 = *(undefined8 *)(param_1 + 0x100);
  uStack_178 = *(undefined8 *)(param_1 + 0x118);
  uStack_180 = *(undefined8 *)(param_1 + 0x110);
  uStack_a8 = *(undefined8 *)(param_1 + 0x128);
  uStack_b0 = *(undefined8 *)(param_1 + 0x120);
  uStack_158 = *(undefined8 *)(param_1 + 0x138);
  uStack_160 = *(undefined8 *)(param_1 + 0x130);
  uStack_98 = *(undefined8 *)(param_1 + 0x138);
  uStack_a0 = *(undefined8 *)(param_1 + 0x130);
  uStack_148 = *(undefined8 *)(param_1 + 0x148);
  uStack_150 = *(undefined8 *)(param_1 + 0x140);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_198 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_188 = *(undefined8 *)(param_1 + 0x108);
  uStack_190 = *(undefined8 *)(param_1 + 0x100);
  uStack_f8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_100 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_d8 = *(undefined8 *)(param_1 + 0xf8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_58 = *(undefined8 *)(param_1 + 0x178);
  uStack_60 = *(undefined8 *)(param_1 + 0x170);
  uStack_110 = *(undefined8 *)(param_1 + 0x180);
  uStack_50 = *(undefined8 *)(param_1 + 0x180);
  puVar1 = &uStack_1c0;
  func_0x000100cb60ec();
  if ((int)puVar1 != 1) {
    uStack_208 = uStack_78;
    uStack_210 = uStack_80;
    uStack_1f8 = uStack_68;
    uStack_200 = uStack_70;
    uStack_1e8 = uStack_58;
    uStack_1f0 = uStack_60;
    uStack_1e0 = uStack_50;
    uStack_248 = uStack_b8;
    uStack_250 = uStack_c0;
    uStack_238 = uStack_a8;
    uStack_240 = uStack_b0;
    uStack_228 = uStack_98;
    uStack_230 = uStack_a0;
    uStack_218 = uStack_88;
    uStack_220 = uStack_90;
    uStack_288 = uStack_f8;
    uStack_290 = uStack_100;
    uStack_278 = uStack_e8;
    uStack_280 = uStack_f0;
    uStack_268 = uStack_d8;
    uStack_270 = uStack_e0;
    uStack_258 = uStack_c8;
    uStack_260 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5dfc();
    (*pcVar2)(&uStack_290,5,&UNK_110672b10,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015ad710; end: 1015ad7c3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015ad710(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6,code *param_7)

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
    (*param_7)(param_3,param_6);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
LAB_100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4,
                      param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015ad7c4; end: 1015ae2af;  */

undefined8 FUN_1015ad7c4(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined1 auStack_a08 [184];
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
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
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  ulong uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  ulong uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  ulong uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  ulong uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  ulong uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  ulong uStack_610;
  undefined8 uStack_608;
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
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
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
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
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
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
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
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_298,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_2b0,0,0);
  uStack_660 = *(undefined8 *)(param_1 + 0x10);
  uStack_658 = *(undefined8 *)(param_1 + 0x18);
  uStack_650 = *(undefined8 *)(param_1 + 0x20);
  uStack_648 = *(ulong *)(param_1 + 0x28);
  uStack_640 = *(undefined8 *)(param_1 + 0x30);
  uStack_638 = *(undefined8 *)(param_1 + 0x38);
  uStack_630 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(ulong *)(param_2 + 0x28);
  uVar15 = *(undefined8 *)(param_2 + 0x30);
  uVar17 = *(undefined8 *)(param_2 + 0x38);
  uVar21 = *(undefined8 *)(param_2 + 0x40);
  if (0xe < uStack_648 >> 0x3c) {
    if (0xe < uVar7 >> 0x3c) {
      FUN_10155b840(uStack_660);
      FUN_10155b840(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
      FUN_101593c1c(uStack_660,uStack_658,uStack_650,uStack_648,uStack_640,uStack_638,uStack_630);
      goto LAB_1015ad9dc;
    }
LAB_1015ad8b8:
    uStack_628 = uVar4;
    uStack_620 = uVar9;
    uStack_618 = uVar12;
    uStack_610 = uVar7;
    uStack_608 = uVar15;
    uStack_600 = uVar17;
    uStack_5f8 = uVar21;
    FUN_10155b840(uStack_660);
LAB_1015ad914:
    FUN_10155b840(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
    uVar4 = 0x112db7eb8;
    puVar13 = &UNK_10d96d2a0;
    puVar5 = &uStack_660;
LAB_1015ad92c:
    FUN_1015c5e7c(puVar5,uVar4,puVar13);
    return 0;
  }
  if (0xe < uVar7 >> 0x3c) goto LAB_1015ad8b8;
  uStack_e0 = uStack_660;
  uStack_d8 = uStack_658;
  uStack_d0 = uStack_650;
  uStack_c8 = uStack_648;
  uStack_c0 = uStack_640;
  uStack_b8 = uStack_638;
  uStack_b0 = uStack_630;
  uStack_a8 = uVar4;
  uStack_a0 = uVar9;
  uStack_98 = uVar12;
  uStack_90 = uVar7;
  uStack_88 = uVar15;
  uStack_80 = uVar17;
  uStack_78 = uVar21;
  FUN_10155b840(uStack_660);
  FUN_10155b840(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
  puVar5 = &uStack_e0;
  func_0x00010400dcec(puVar5,&uStack_a8);
  FUN_101593c1c(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
  FUN_101593c1c(uStack_660,uStack_658,uStack_650,uStack_648,uStack_640,uStack_638,uStack_630);
  if (((ulong)puVar5 & 1) == 0) {
    return 0;
  }
LAB_1015ad9dc:
  func_0x000107c61428(param_1 + 0x48,auStack_2c8,0,0);
  func_0x000107c61428(param_2 + 0x48,auStack_2e0,0,0);
  uVar7 = *(ulong *)(param_1 + 0x48);
  uVar10 = *(ulong *)(param_1 + 0x50);
  uVar20 = *(ulong *)(param_1 + 0x58);
  uVar14 = *(ulong *)(param_2 + 0x48);
  uVar1 = *(ulong *)(param_2 + 0x50);
  uVar22 = *(ulong *)(param_2 + 0x58);
  if (uVar20 >> 0x3c < 0xf) {
    if (uVar22 >> 0x3c < 0xf) {
      if ((int)uVar7 == (int)uVar14) {
        FUN_100cb6160(uVar7,uVar10,uVar20);
        FUN_100cb6160(uVar14,uVar1,uVar22);
        if ((uVar14 ^ uVar7) >> 0x20 == 0) {
          uVar6 = uVar10;
          FUN_100e25fcc(uVar10,uVar20,uVar1,uVar22);
          FUN_100cb61c8(uVar14,uVar1,uVar22);
          if ((uVar6 & 1) == 0) goto LAB_1015addb0;
          goto LAB_1015ada50;
        }
      }
      else {
        FUN_100cb6160(uVar7,uVar10,uVar20);
        FUN_100cb6160(uVar14,uVar1,uVar22);
      }
      FUN_100cb61c8(uVar14,uVar1,uVar22);
      goto LAB_1015addb0;
    }
  }
  else if (0xe < uVar22 >> 0x3c) {
    FUN_100cb6160(uVar7,uVar10,uVar20);
    FUN_100cb6160(uVar14,uVar1,uVar22);
LAB_1015ada50:
    FUN_100cb61c8(uVar7,uVar10,uVar20);
    func_0x000107c61428(param_1 + 0x60,auStack_2f8,0,0);
    func_0x000107c61428(param_2 + 0x60,auStack_310,0,0);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    uVar23 = *(undefined8 *)(param_1 + 0x70);
    uVar14 = *(ulong *)(param_1 + 0x78);
    uVar16 = *(undefined8 *)(param_1 + 0x80);
    uVar18 = *(undefined8 *)(param_1 + 0x88);
    uVar19 = *(undefined8 *)(param_1 + 0x90);
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    uVar9 = *(undefined8 *)(param_2 + 0x68);
    uVar12 = *(undefined8 *)(param_2 + 0x70);
    uVar7 = *(ulong *)(param_2 + 0x78);
    uVar15 = *(undefined8 *)(param_2 + 0x80);
    uVar17 = *(undefined8 *)(param_2 + 0x88);
    uVar21 = *(undefined8 *)(param_2 + 0x90);
    if (uVar14 >> 0x3c < 0xf) {
      if (uVar7 >> 0x3c < 0xf) {
        uStack_150 = uVar8;
        uStack_148 = uVar11;
        uStack_140 = uVar23;
        uStack_138 = uVar14;
        uStack_130 = uVar16;
        uStack_128 = uVar18;
        uStack_120 = uVar19;
        uStack_118 = uVar4;
        uStack_110 = uVar9;
        uStack_108 = uVar12;
        uStack_100 = uVar7;
        uStack_f8 = uVar15;
        uStack_f0 = uVar17;
        uStack_e8 = uVar21;
        FUN_10155b840(uVar8,uVar11,uVar23);
        FUN_10155b840(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
        puVar5 = &uStack_150;
        func_0x00010400dcec(puVar5,&uStack_118);
        FUN_101593c1c(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
        FUN_101593c1c(uVar8,uVar11,uVar23,uVar14,uVar16,uVar18,uVar19);
        if (((ulong)puVar5 & 1) == 0) {
          return 0;
        }
        goto LAB_1015adcb0;
      }
    }
    else if (0xe < uVar7 >> 0x3c) {
      FUN_10155b840(uVar8,uVar11,uVar23);
      FUN_10155b840(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
      FUN_101593c1c(uVar8,uVar11,uVar23,uVar14,uVar16,uVar18,uVar19);
LAB_1015adcb0:
      func_0x000107c61428(param_1 + 0x98,auStack_328,0,0);
      func_0x000107c61428(param_2 + 0x98,auStack_340,0,0);
      uVar8 = *(undefined8 *)(param_1 + 0x98);
      uVar11 = *(undefined8 *)(param_1 + 0xa0);
      uVar23 = *(undefined8 *)(param_1 + 0xa8);
      uVar14 = *(ulong *)(param_1 + 0xb0);
      uVar16 = *(undefined8 *)(param_1 + 0xb8);
      uVar18 = *(undefined8 *)(param_1 + 0xc0);
      uVar19 = *(undefined8 *)(param_1 + 200);
      uVar4 = *(undefined8 *)(param_2 + 0x98);
      uVar9 = *(undefined8 *)(param_2 + 0xa0);
      uVar12 = *(undefined8 *)(param_2 + 0xa8);
      uVar7 = *(ulong *)(param_2 + 0xb0);
      uVar15 = *(undefined8 *)(param_2 + 0xb8);
      uVar17 = *(undefined8 *)(param_2 + 0xc0);
      uVar21 = *(undefined8 *)(param_2 + 200);
      if (uVar14 >> 0x3c < 0xf) {
        if (0xe < uVar7 >> 0x3c) goto LAB_1015adde4;
        uStack_1c0 = uVar8;
        uStack_1b8 = uVar11;
        uStack_1b0 = uVar23;
        uStack_1a8 = uVar14;
        uStack_1a0 = uVar16;
        uStack_198 = uVar18;
        uStack_190 = uVar19;
        uStack_188 = uVar4;
        uStack_180 = uVar9;
        uStack_178 = uVar12;
        uStack_170 = uVar7;
        uStack_168 = uVar15;
        uStack_160 = uVar17;
        uStack_158 = uVar21;
        FUN_10155b840(uVar8,uVar11,uVar23);
        FUN_10155b840(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
        puVar5 = &uStack_1c0;
        func_0x00010400dcec(puVar5,&uStack_188);
        FUN_101593c1c(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
        FUN_101593c1c(uVar8,uVar11,uVar23,uVar14,uVar16,uVar18,uVar19);
        if (((ulong)puVar5 & 1) == 0) {
          return 0;
        }
      }
      else {
        if (uVar7 >> 0x3c < 0xf) goto LAB_1015adde4;
        FUN_10155b840(uVar8,uVar11,uVar23);
        FUN_10155b840(uVar4,uVar9,uVar12,uVar7,uVar15,uVar17,uVar21);
        FUN_101593c1c(uVar8,uVar11,uVar23,uVar14,uVar16,uVar18,uVar19);
      }
      func_0x000107c61428(param_1 + 0xd0,auStack_4d8,0,0);
      func_0x000107c61428(param_2 + 0xd0,auStack_4f0,0,0);
      iVar3 = (int)&uStack_5a8;
      uStack_5d8 = *(undefined8 *)(param_1 + 0x158);
      uStack_5e0 = *(undefined8 *)(param_1 + 0x150);
      uStack_428 = *(undefined8 *)(param_1 + 0x168);
      uStack_430 = *(undefined8 *)(param_1 + 0x160);
      uStack_5e8 = *(undefined8 *)(param_1 + 0x148);
      uStack_5f0 = *(undefined8 *)(param_1 + 0x140);
      uStack_438 = *(undefined8 *)(param_1 + 0x158);
      uStack_440 = *(undefined8 *)(param_1 + 0x150);
      uStack_5c8 = *(undefined8 *)(param_1 + 0x168);
      uStack_5d0 = *(undefined8 *)(param_1 + 0x160);
      uStack_418 = *(undefined8 *)(param_1 + 0x178);
      uStack_420 = *(undefined8 *)(param_1 + 0x170);
      uStack_618 = *(undefined8 *)(param_1 + 0x118);
      uStack_620 = *(undefined8 *)(param_1 + 0x110);
      uStack_468 = *(undefined8 *)(param_1 + 0x128);
      uStack_470 = *(undefined8 *)(param_1 + 0x120);
      uStack_628 = *(undefined8 *)(param_1 + 0x108);
      uStack_630 = *(undefined8 *)(param_1 + 0x100);
      uStack_478 = *(undefined8 *)(param_1 + 0x118);
      uStack_480 = *(undefined8 *)(param_1 + 0x110);
      uStack_608 = *(undefined8 *)(param_1 + 0x128);
      uStack_610 = *(ulong *)(param_1 + 0x120);
      uStack_458 = *(undefined8 *)(param_1 + 0x138);
      uStack_460 = *(undefined8 *)(param_1 + 0x130);
      uStack_5f8 = *(undefined8 *)(param_1 + 0x138);
      uStack_600 = *(undefined8 *)(param_1 + 0x130);
      uStack_448 = *(undefined8 *)(param_1 + 0x148);
      uStack_450 = *(undefined8 *)(param_1 + 0x140);
      uStack_4b8 = *(undefined8 *)(param_1 + 0xd8);
      uStack_4c0 = *(undefined8 *)(param_1 + 0xd0);
      uStack_4a8 = *(undefined8 *)(param_1 + 0xe8);
      uStack_4b0 = *(undefined8 *)(param_1 + 0xe0);
      uStack_498 = *(undefined8 *)(param_1 + 0xf8);
      uStack_4a0 = *(undefined8 *)(param_1 + 0xf0);
      uStack_488 = *(undefined8 *)(param_1 + 0x108);
      uStack_490 = *(undefined8 *)(param_1 + 0x100);
      uStack_658 = *(undefined8 *)(param_1 + 0xd8);
      uStack_660 = *(undefined8 *)(param_1 + 0xd0);
      uStack_648 = *(ulong *)(param_1 + 0xe8);
      uStack_650 = *(undefined8 *)(param_1 + 0xe0);
      uStack_638 = *(undefined8 *)(param_1 + 0xf8);
      uStack_640 = *(undefined8 *)(param_1 + 0xf0);
      uStack_5b8 = *(undefined8 *)(param_1 + 0x178);
      uStack_5c0 = *(undefined8 *)(param_1 + 0x170);
      uStack_520 = *(undefined8 *)(param_2 + 0x158);
      uStack_528 = *(undefined8 *)(param_2 + 0x150);
      uStack_368 = *(undefined8 *)(param_2 + 0x168);
      uStack_370 = *(undefined8 *)(param_2 + 0x160);
      uStack_530 = *(undefined8 *)(param_2 + 0x148);
      uStack_538 = *(undefined8 *)(param_2 + 0x140);
      uStack_378 = *(undefined8 *)(param_2 + 0x158);
      uStack_380 = *(undefined8 *)(param_2 + 0x150);
      uStack_510 = *(undefined8 *)(param_2 + 0x168);
      uStack_518 = *(undefined8 *)(param_2 + 0x160);
      uStack_358 = *(undefined8 *)(param_2 + 0x178);
      uStack_360 = *(undefined8 *)(param_2 + 0x170);
      uStack_560 = *(undefined8 *)(param_2 + 0x118);
      uStack_568 = *(undefined8 *)(param_2 + 0x110);
      uStack_3a8 = *(undefined8 *)(param_2 + 0x128);
      uStack_3b0 = *(undefined8 *)(param_2 + 0x120);
      uStack_570 = *(undefined8 *)(param_2 + 0x108);
      uStack_578 = *(undefined8 *)(param_2 + 0x100);
      uStack_3b8 = *(undefined8 *)(param_2 + 0x118);
      uStack_3c0 = *(undefined8 *)(param_2 + 0x110);
      uStack_550 = *(undefined8 *)(param_2 + 0x128);
      uStack_558 = *(undefined8 *)(param_2 + 0x120);
      uStack_398 = *(undefined8 *)(param_2 + 0x138);
      uStack_3a0 = *(undefined8 *)(param_2 + 0x130);
      uStack_540 = *(undefined8 *)(param_2 + 0x138);
      uStack_548 = *(undefined8 *)(param_2 + 0x130);
      uStack_388 = *(undefined8 *)(param_2 + 0x148);
      uStack_390 = *(undefined8 *)(param_2 + 0x140);
      uStack_3f8 = *(undefined8 *)(param_2 + 0xd8);
      uStack_400 = *(undefined8 *)(param_2 + 0xd0);
      uStack_3e8 = *(undefined8 *)(param_2 + 0xe8);
      uStack_3f0 = *(undefined8 *)(param_2 + 0xe0);
      uStack_3d8 = *(undefined8 *)(param_2 + 0xf8);
      uStack_3e0 = *(undefined8 *)(param_2 + 0xf0);
      uStack_3c8 = *(undefined8 *)(param_2 + 0x108);
      uStack_3d0 = *(undefined8 *)(param_2 + 0x100);
      uStack_5a0 = *(undefined8 *)(param_2 + 0xd8);
      uStack_5a8 = *(undefined8 *)(param_2 + 0xd0);
      uStack_590 = *(undefined8 *)(param_2 + 0xe8);
      uStack_598 = *(undefined8 *)(param_2 + 0xe0);
      uStack_580 = *(undefined8 *)(param_2 + 0xf8);
      uStack_588 = *(undefined8 *)(param_2 + 0xf0);
      uStack_500 = *(undefined8 *)(param_2 + 0x178);
      uStack_508 = *(undefined8 *)(param_2 + 0x170);
      uStack_410 = *(undefined8 *)(param_1 + 0x180);
      uStack_5b0 = *(undefined8 *)(param_1 + 0x180);
      uStack_350 = *(undefined8 *)(param_2 + 0x180);
      uStack_4f8 = *(undefined8 *)(param_2 + 0x180);
      iVar2 = (int)&uStack_660;
      func_0x000100cb60ec();
      if (iVar2 == 1) {
        func_0x000100cb60ec();
        if (iVar3 == 1) {
          uStack_748 = uStack_5d8;
          uStack_750 = uStack_5e0;
          uStack_738 = uStack_5c8;
          uStack_740 = uStack_5d0;
          uStack_728 = uStack_5b8;
          uStack_730 = uStack_5c0;
          uStack_720 = uStack_5b0;
          uStack_788 = uStack_618;
          uStack_790 = uStack_620;
          uStack_778 = uStack_608;
          uStack_780 = uStack_610;
          uStack_768 = uStack_5f8;
          uStack_770 = uStack_600;
          uStack_758 = uStack_5e8;
          uStack_760 = uStack_5f0;
          uStack_7c8 = uStack_658;
          uStack_7d0 = uStack_660;
          uStack_7b8 = uStack_648;
          uStack_7c0 = uStack_650;
          uStack_7a8 = uStack_638;
          uStack_7b0 = uStack_640;
          uStack_798 = uStack_628;
          uStack_7a0 = uStack_630;
          FUN_1015bbdcc(&uStack_4c0,&uStack_280,0x112db6f78,&UNK_10d964948);
          FUN_1015bbdcc(&uStack_400,&uStack_280,0x112db6f78,&UNK_10d964948);
          FUN_1015c5e7c(&uStack_7d0,0x112db6f78,&UNK_10d964948);
          return 1;
        }
      }
      else {
        uStack_808 = uStack_5d8;
        uStack_810 = uStack_5e0;
        uStack_7f8 = uStack_5c8;
        uStack_800 = uStack_5d0;
        uStack_7e8 = uStack_5b8;
        uStack_7f0 = uStack_5c0;
        uStack_7e0 = uStack_5b0;
        uStack_848 = uStack_618;
        uStack_850 = uStack_620;
        uStack_838 = uStack_608;
        uStack_840 = uStack_610;
        uStack_828 = uStack_5f8;
        uStack_830 = uStack_600;
        uStack_818 = uStack_5e8;
        uStack_820 = uStack_5f0;
        uStack_888 = uStack_658;
        uStack_890 = uStack_660;
        uStack_878 = uStack_648;
        uStack_880 = uStack_650;
        uStack_868 = uStack_638;
        uStack_870 = uStack_640;
        uStack_858 = uStack_628;
        uStack_860 = uStack_630;
        func_0x000100cb60ec();
        if (iVar3 != 1) {
          uStack_8c8 = uStack_520;
          uStack_8d0 = uStack_528;
          uStack_8b8 = uStack_510;
          uStack_8c0 = uStack_518;
          uStack_8a8 = uStack_500;
          uStack_8b0 = uStack_508;
          uStack_908 = uStack_560;
          uStack_910 = uStack_568;
          uStack_8f8 = uStack_550;
          uStack_900 = uStack_558;
          uStack_8e8 = uStack_540;
          uStack_8f0 = uStack_548;
          uStack_8d8 = uStack_530;
          uStack_8e0 = uStack_538;
          uStack_948 = uStack_5a0;
          uStack_950 = uStack_5a8;
          uStack_938 = uStack_590;
          uStack_940 = uStack_598;
          uStack_928 = uStack_580;
          uStack_930 = uStack_588;
          uStack_918 = uStack_570;
          uStack_920 = uStack_578;
          uStack_748 = uStack_520;
          uStack_750 = uStack_528;
          uStack_738 = uStack_510;
          uStack_740 = uStack_518;
          uStack_728 = uStack_500;
          uStack_730 = uStack_508;
          uStack_788 = uStack_560;
          uStack_790 = uStack_568;
          uStack_778 = uStack_550;
          uStack_780 = uStack_558;
          uStack_768 = uStack_540;
          uStack_770 = uStack_548;
          uStack_758 = uStack_530;
          uStack_760 = uStack_538;
          uStack_7c8 = uStack_5a0;
          uStack_7d0 = uStack_5a8;
          uStack_7b8 = uStack_590;
          uStack_7c0 = uStack_598;
          uStack_7a8 = uStack_580;
          uStack_7b0 = uStack_588;
          uStack_798 = uStack_570;
          uStack_7a0 = uStack_578;
          uStack_1f8 = uStack_808;
          uStack_200 = uStack_810;
          uStack_1e8 = uStack_7f8;
          uStack_1f0 = uStack_800;
          uStack_1d8 = uStack_7e8;
          uStack_1e0 = uStack_7f0;
          uStack_238 = uStack_848;
          uStack_240 = uStack_850;
          uStack_228 = uStack_838;
          uStack_230 = uStack_840;
          uStack_218 = uStack_828;
          uStack_220 = uStack_830;
          uStack_208 = uStack_818;
          uStack_210 = uStack_820;
          uStack_278 = uStack_888;
          uStack_280 = uStack_890;
          uStack_268 = uStack_878;
          uStack_270 = uStack_880;
          uStack_258 = uStack_868;
          uStack_260 = uStack_870;
          uStack_8a0 = uStack_4f8;
          uStack_720 = uStack_4f8;
          uStack_1d0 = uStack_7e0;
          uStack_248 = uStack_858;
          uStack_250 = uStack_860;
          FUN_1015bbdcc(&uStack_4c0,auStack_a08,0x112db6f78,&UNK_10d964948);
          FUN_1015bbdcc(&uStack_400,auStack_a08,0x112db6f78,&UNK_10d964948);
          puVar5 = &uStack_280;
          func_0x00010362ab90(puVar5,&uStack_7d0);
          FUN_1015c5e7c(&uStack_950,0x112db6f78,&UNK_10d964948);
          FUN_1015c5e7c(&uStack_660,0x112db6f78,&UNK_10d964948);
          if (((ulong)puVar5 & 1) != 0) {
            return 1;
          }
          return 0;
        }
      }
      func_0x000107c610b4(&uStack_7d0,&uStack_660,0x170);
      FUN_1015bbdcc(&uStack_4c0,&uStack_280,0x112db6f78,&UNK_10d964948);
      FUN_1015bbdcc(&uStack_400,&uStack_280,0x112db6f78,&UNK_10d964948);
      uVar4 = 0x112db6f80;
      puVar13 = &UNK_10d964950;
      puVar5 = &uStack_7d0;
      goto LAB_1015ad92c;
    }
LAB_1015adde4:
    uStack_660 = uVar8;
    uStack_658 = uVar11;
    uStack_650 = uVar23;
    uStack_648 = uVar14;
    uStack_640 = uVar16;
    uStack_638 = uVar18;
    uStack_630 = uVar19;
    uStack_628 = uVar4;
    uStack_620 = uVar9;
    uStack_618 = uVar12;
    uStack_610 = uVar7;
    uStack_608 = uVar15;
    uStack_600 = uVar17;
    uStack_5f8 = uVar21;
    FUN_10155b840(uVar8,uVar11,uVar23);
    goto LAB_1015ad914;
  }
  FUN_100cb6160(uVar7,uVar10,uVar20);
  FUN_100cb6160(uVar14,uVar1,uVar22);
  FUN_100cb61c8(uVar7,uVar10,uVar20);
  uVar7 = uVar14;
  uVar10 = uVar1;
  uVar20 = uVar22;
LAB_1015addb0:
  FUN_100cb61c8(uVar7,uVar10,uVar20);
  return 0;
}



/* Entry: 1015ae2b0; end: 1015ae2ef;  */

void FUN_1015ae2b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001015bbc14();
  func_0x000107c61538();
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1015ae2f0; end: 1015ae32b;  */

undefined1  [16] FUN_1015ae2f0(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db7218 != -1) {
    func_0x000107c61568(0x112db7218,0x1015ac76c);
  }
  auVar1._8_8_ = uRam0000000113800640;
  auVar1._0_8_ = uRam0000000113800638;
  func_0x000107c61434(uRam0000000113800640);
  return auVar1;
}



/* Entry: 1015ae32c; end: 1015ae387;  */

void FUN_1015ae32c(void)

{
  FUN_1015accac();
  return;
}



/* Entry: 1015ae388; end: 1015ae3bf;  */

uint FUN_1015ae388(long param_1,long param_2)

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
  func_0x0001015c5b3c();
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



/* Entry: 1015ae3c0; end: 1015ae3cb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015ae3c0(long *param_1)

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
  byte *unaff_x25;
  ulong uVar26;
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
    FUN_1015ad7c4(uVar25,uVar26);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015ae3cc; end: 1015ae477;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015ae3cc(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
  byte *unaff_x25;
  ulong uVar26;
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
    (*param_4)(uVar25,uVar26);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015ae478; end: 1015ae517;  */

/* WARNING: Possible PIC construction at 0x0001015ae4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015ae4d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015ae4c8) */
/* WARNING: Removing unreachable block (ram,0x0001015ae4d8) */

void FUN_1015ae478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7220 != -1) {
    func_0x000107c61568(0x112db7220,FUN_1015ac794);
  }
  uVar5 = uRam0000000113800670;
  uVar4 = uRam0000000113800668;
  uVar3 = uRam0000000113800660;
  uVar2 = uRam0000000113800658;
  uVar1 = uRam0000000113800650;
  *param_1 = uRam0000000113800648;
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



/* Entry: 1015ae518; end: 1015ae52b;  */

void FUN_1015ae518(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7e18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7e18,&UNK_10d966050);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015ae52c; end: 1015ae55f;  */

void FUN_1015ae52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1015ae560; end: 1015ae663;  */

void FUN_1015ae560(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015ae664; end: 1015ae66f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015ae664(undefined8 *param_1,long *param_2)

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
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1015ad7c4(uVar25,uVar26);
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
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 1015ae670; end: 1015ae71b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015ae670(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    code *param_5)

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
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    (*param_5)(uVar25,uVar26);
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
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 1015ae71c; end: 1015ae747;  */

void FUN_1015ae71c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7200 != -1) {
    func_0x000107c61568(0x112db7200,FUN_1015a91ac);
  }
  uVar2 = uRam0000000113800600;
  uVar1 = uRam00000001138005f8;
  func_0x000107c61438(uRam0000000113800600,2);
  func_0x000107c5fb78(0x437765697665522e,0xeb00000000647261);
  func_0x000107c6142c(uVar2);
  uRam0000000113800678 = uVar1;
  uRam0000000113800680 = uVar2;
  return;
}



/* Entry: 1015ae748; end: 1015ae78f;  */

void FUN_1015ae748(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966450,0x1b,2);
  uRam0000000113800690 = uStack_38;
  uRam0000000113800688 = uStack_40;
  uRam00000001138006a0 = uStack_28;
  uRam0000000113800698 = uStack_30;
  uRam00000001138006b0 = uStack_18;
  uRam00000001138006a8 = uStack_20;
  return;
}


