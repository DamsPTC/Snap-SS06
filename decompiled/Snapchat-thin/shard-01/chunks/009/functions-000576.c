/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015b3b74; end: 1015b3bdb;  */

void FUN_1015b3b74(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  return;
}



/* Entry: 1015b3bdc; end: 1015b3c0b;  */

undefined1  [16] FUN_1015b3bdc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015b3c0c; end: 1015b3c3f;  */

void FUN_1015b3c0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015b3c40; end: 1015b3c53;  */

undefined8 FUN_1015b3c40(void)

{
  return 0x1015b3c50;
}



/* Entry: 1015b3c54; end: 1015b3c67;  */

void FUN_1015b3c54(void)

{
  FUN_1015b36d4();
  return;
}



/* Entry: 1015b3c68; end: 1015b3cbf;  */

void FUN_1015b3c68(void)

{
  FUN_1015b3820();
  return;
}



/* Entry: 1015b3cc0; end: 1015b3cc3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015b3cc0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015b3cc4; end: 1015b3cfb;  */

uint FUN_1015b3cc4(long param_1,long param_2)

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
  func_0x0001015c57fc();
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



/* Entry: 1015b3cfc; end: 1015b3d8b;  */

uint FUN_1015b3cfc(undefined8 *param_1)

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
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
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
  FUN_1015b9fa8(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1015b3d8c; end: 1015b3e2b;  */

/* WARNING: Possible PIC construction at 0x0001015b3dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b3de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b3ddc) */
/* WARNING: Removing unreachable block (ram,0x0001015b3dec) */

void FUN_1015b3d8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7368 != -1) {
    func_0x000107c61568(0x112db7368,FUN_1015b368c);
  }
  uVar5 = uRam00000001138009b0;
  uVar4 = uRam00000001138009a8;
  uVar3 = uRam00000001138009a0;
  uVar2 = uRam0000000113800998;
  uVar1 = uRam0000000113800990;
  *param_1 = uRam0000000113800988;
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



/* Entry: 1015b3e2c; end: 1015b3e67;  */

void FUN_1015b3e2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d48,&UNK_10d965fe8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b3e68; end: 1015b3fb3;  */

void FUN_1015b3e68(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_48 = unaff_x20[0x13];
  uStack_50 = unaff_x20[0x12];
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



/* Entry: 1015b3fb4; end: 1015b4043;  */

uint FUN_1015b3fb4(undefined8 *param_1,undefined8 *param_2)

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
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
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
  FUN_1015b9fa8(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1015b4044; end: 1015b406f;  */

void FUN_1015b4044(void)

{
  func_0x000107c5fb78(0x7665526576694c2e,0xeb00000000776569);
  uRam00000001138009b8 = 0xd00000000000002a;
  uRam00000001138009c0 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b4070; end: 1015b40b7;  */

void FUN_1015b4070(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9660e0,0x3f,2);
  uRam00000001138009d0 = uStack_38;
  uRam00000001138009c8 = uStack_40;
  uRam00000001138009e0 = uStack_28;
  uRam00000001138009d8 = uStack_30;
  uRam00000001138009f0 = uStack_18;
  uRam00000001138009e8 = uStack_20;
  return;
}



/* Entry: 1015b40b8; end: 1015b41a7;  */

void FUN_1015b40b8(undefined8 param_1,long param_2,long param_3)

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
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x40;
LAB_1015b412c:
        (*pcVar4)(lVar2,&UNK_110790a00,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_1015b412c;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_1015b412c;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015b41a8; end: 1015b4233;  */

void FUN_1015b41a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015b4234();
  if (unaff_x21 == 0) {
    FUN_1015b42bc();
    FUN_1015b4344();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b4234; end: 1015b42bb;  */

void FUN_1015b4234(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,1,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b42bc; end: 1015b4343;  */

void FUN_1015b42bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b4344; end: 1015b43cb;  */

void FUN_1015b4344(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b43cc; end: 1015b441b;  */

void FUN_1015b43cc(undefined8 *param_1)

{
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
  return;
}



/* Entry: 1015b441c; end: 1015b444b;  */

undefined1  [16] FUN_1015b441c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015b444c; end: 1015b447f;  */

void FUN_1015b444c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015b4480; end: 1015b4493;  */

undefined8 FUN_1015b4480(void)

{
  return 0x1015b4490;
}



/* Entry: 1015b4494; end: 1015b44a7;  */

void FUN_1015b4494(void)

{
  FUN_1015b40b8();
  return;
}



/* Entry: 1015b44a8; end: 1015b44ef;  */

void FUN_1015b44a8(void)

{
  FUN_1015b41a8();
  return;
}



/* Entry: 1015b44f0; end: 1015b4527;  */

uint FUN_1015b44f0(long param_1,long param_2)

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
  func_0x0001015c57bc();
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



/* Entry: 1015b4528; end: 1015b458f;  */

uint FUN_1015b4528(undefined8 *param_1)

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
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
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
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x0001015ba864(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1015b4590; end: 1015b462f;  */

/* WARNING: Possible PIC construction at 0x0001015b45dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b45ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b45e0) */
/* WARNING: Removing unreachable block (ram,0x0001015b45f0) */

void FUN_1015b4590(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7380 != -1) {
    func_0x000107c61568(0x112db7380,FUN_1015b4070);
  }
  uVar5 = uRam00000001138009f0;
  uVar4 = uRam00000001138009e8;
  uVar3 = uRam00000001138009e0;
  uVar2 = uRam00000001138009d8;
  uVar1 = uRam00000001138009d0;
  *param_1 = uRam00000001138009c8;
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



/* Entry: 1015b4630; end: 1015b4643;  */

void FUN_1015b4630(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d38,&UNK_10d965fe0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b4644; end: 1015b4677;  */

void FUN_1015b4644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1015b4678; end: 1015b479b;  */

void FUN_1015b4678(undefined8 param_1,undefined8 param_2)

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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
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



/* Entry: 1015b479c; end: 1015b4803;  */

uint FUN_1015b479c(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
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
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x0001015ba864(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1015b4804; end: 1015b482b;  */

void FUN_1015b4804(void)

{
  func_0x000107c5fb78(0x6c626179616c502e,0xe900000000000065);
  uRam00000001138009f8 = 0xd00000000000002a;
  uRam0000000113800a00 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b482c; end: 1015b4893;  */

void FUN_1015b482c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd00000000000002a;
  *param_5 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b4894; end: 1015b48db;  */

void FUN_1015b4894(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9660c0,0x15,2);
  uRam0000000113800a10 = uStack_38;
  uRam0000000113800a08 = uStack_40;
  uRam0000000113800a20 = uStack_28;
  uRam0000000113800a18 = uStack_30;
  uRam0000000113800a30 = uStack_18;
  uRam0000000113800a28 = uStack_20;
  return;
}



/* Entry: 1015b48dc; end: 1015b498f;  */

/* WARNING: Removing unreachable block (ram,0x0001015b498c) */

void FUN_1015b48dc(undefined8 param_1,long param_2,long param_3)

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
        FUN_1015bd9cc();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1103e3440,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015b4990; end: 1015b49eb;  */

void FUN_1015b4990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015b49ec();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b49ec; end: 1015b4adf;  */

void FUN_1015b49ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  uStack_78 = *(undefined8 *)(param_1 + 0x98);
  uStack_80 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = *(undefined8 *)(param_1 + 0xa8);
  uStack_70 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = *(undefined8 *)(param_1 + 0xb8);
  uStack_60 = *(undefined8 *)(param_1 + 0xb0);
  uStack_50 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = *(undefined8 *)(param_1 + 0x78);
  uStack_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = *(undefined8 *)(param_1 + 0x88);
  uStack_90 = *(undefined8 *)(param_1 + 0x80);
  uStack_f8 = *(undefined8 *)(param_1 + 0x18);
  uStack_100 = *(undefined8 *)(param_1 + 0x10);
  uStack_e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = *(undefined8 *)(param_1 + 0x40);
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
    FUN_1015bd9cc();
    (*pcVar2)(&uStack_1c0,1,&UNK_1103e3440,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b4ae0; end: 1015b4b5f;  */

void FUN_1015b4ae0(undefined8 *param_1)

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
  param_1[0x15] = uStack_40;
  param_1[0x14] = uStack_48;
  param_1[0x17] = uStack_30;
  param_1[0x16] = uStack_38;
  param_1[0xd] = uStack_80;
  param_1[0xc] = uStack_88;
  param_1[0xf] = uStack_70;
  param_1[0xe] = uStack_78;
  param_1[0x11] = uStack_60;
  param_1[0x10] = uStack_68;
  param_1[0x13] = uStack_50;
  param_1[0x12] = uStack_58;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = uStack_d0;
  param_1[2] = uStack_d8;
  param_1[5] = uStack_c0;
  param_1[4] = uStack_c8;
  param_1[7] = uStack_b0;
  param_1[6] = uStack_b8;
  param_1[0x18] = uStack_28;
  param_1[9] = uStack_a0;
  param_1[8] = uStack_a8;
  param_1[0xb] = uStack_90;
  param_1[10] = uStack_98;
  return;
}



/* Entry: 1015b4b60; end: 1015b4b87;  */

undefined1  [16] FUN_1015b4b60(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db7390 != -1) {
    func_0x000107c61568(0x112db7390,FUN_1015b4804);
  }
  auVar1._8_8_ = uRam0000000113800a00;
  auVar1._0_8_ = uRam00000001138009f8;
  func_0x000107c61434(uRam0000000113800a00);
  return auVar1;
}



/* Entry: 1015b4b88; end: 1015b4bb7;  */

undefined1  [16] FUN_1015b4b88(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015b4bb8; end: 1015b4beb;  */

void FUN_1015b4bb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015b4bec; end: 1015b4bff;  */

undefined8 FUN_1015b4bec(void)

{
  return 0x1015b4bfc;
}



/* Entry: 1015b4c00; end: 1015b4c13;  */

void FUN_1015b4c00(void)

{
  FUN_1015b48dc();
  return;
}



/* Entry: 1015b4c14; end: 1015b4c73;  */

void FUN_1015b4c14(void)

{
  FUN_1015b4990();
  return;
}



/* Entry: 1015b4c74; end: 1015b4c77;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015b4c74(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015b4c78; end: 1015b4caf;  */

uint FUN_1015b4c78(long param_1,long param_2)

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
  func_0x0001015c577c();
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



/* Entry: 1015b4cb0; end: 1015b4d4f;  */

uint FUN_1015b4cb0(undefined8 *param_1)

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
  FUN_1015bb3ec(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1015b4d50; end: 1015b4def;  */

/* WARNING: Possible PIC construction at 0x0001015b4d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b4dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b4da0) */
/* WARNING: Removing unreachable block (ram,0x0001015b4db0) */

void FUN_1015b4d50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7398 != -1) {
    func_0x000107c61568(0x112db7398,FUN_1015b4894);
  }
  uVar5 = uRam0000000113800a30;
  uVar4 = uRam0000000113800a28;
  uVar3 = uRam0000000113800a20;
  uVar2 = uRam0000000113800a18;
  uVar1 = uRam0000000113800a10;
  *param_1 = uRam0000000113800a08;
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



/* Entry: 1015b4df0; end: 1015b4e2b;  */

void FUN_1015b4df0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d28,&UNK_10d965fd8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b4e2c; end: 1015b4f87;  */

void FUN_1015b4e2c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015b4f88; end: 1015b5027;  */

uint FUN_1015b4f88(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1015bb3ec(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1015b5028; end: 1015b50c3;  */

void FUN_1015b5028(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7390 != -1) {
    func_0x000107c61568(0x112db7390,FUN_1015b4804);
  }
  uVar2 = uRam0000000113800a00;
  uVar1 = uRam00000001138009f8;
  func_0x000107c61438(uRam0000000113800a00,2);
  func_0x000107c5fb78(0x6c7974536174432e,0xe900000000000065);
  func_0x000107c6142c(uVar2);
  uRam0000000113800a38 = uVar1;
  uRam0000000113800a40 = uVar2;
  return;
}



/* Entry: 1015b50c4; end: 1015b510b;  */

void FUN_1015b50c4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966090,0x2b,2);
  uRam0000000113800a50 = uStack_38;
  uRam0000000113800a48 = uStack_40;
  uRam0000000113800a60 = uStack_28;
  uRam0000000113800a58 = uStack_30;
  uRam0000000113800a70 = uStack_18;
  uRam0000000113800a68 = uStack_20;
  return;
}



/* Entry: 1015b510c; end: 1015b51fb;  */

void FUN_1015b510c(undefined8 param_1,long param_2,long param_3)

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
        func_0x00010159f674();
        lVar2 = unaff_x20 + 0x80;
LAB_1015b5180:
        (*pcVar4)(lVar2,&UNK_110734b68,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x48;
          goto LAB_1015b5180;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_1015b5180;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015b51fc; end: 1015b5287;  */

void FUN_1015b51fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015b5288();
  if (unaff_x21 == 0) {
    FUN_1015b5324();
    FUN_1015b53c0();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b5288; end: 1015b5323;  */

void FUN_1015b5288(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1015b5324; end: 1015b53bf;  */

void FUN_1015b5324(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1015b53c0; end: 1015b545b;  */

void FUN_1015b53c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x98);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x88);
    uStack_80 = *(undefined8 *)(param_1 + 0x80);
    uStack_70 = *(undefined8 *)(param_1 + 0x90);
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,3,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b545c; end: 1015b54d7;  */

void FUN_1015b545c(undefined8 *param_1)

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
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0xf000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 1015b54d8; end: 1015b54eb;  */

void FUN_1015b54d8(void)

{
  FUN_1015b510c();
  return;
}



/* Entry: 1015b54ec; end: 1015b554b;  */

void FUN_1015b54ec(void)

{
  FUN_1015b51fc();
  return;
}



/* Entry: 1015b554c; end: 1015b5583;  */

uint FUN_1015b554c(long param_1,long param_2)

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
  FUN_1015c573c();
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



/* Entry: 1015b5584; end: 1015b5623;  */

uint FUN_1015b5584(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  FUN_1015bad70(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1015b5624; end: 1015b56c3;  */

/* WARNING: Possible PIC construction at 0x0001015b5670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b5680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b5674) */
/* WARNING: Removing unreachable block (ram,0x0001015b5684) */

void FUN_1015b5624(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db73b0 != -1) {
    func_0x000107c61568(0x112db73b0,FUN_1015b50c4);
  }
  uVar5 = uRam0000000113800a70;
  uVar4 = uRam0000000113800a68;
  uVar3 = uRam0000000113800a60;
  uVar2 = uRam0000000113800a58;
  uVar1 = uRam0000000113800a50;
  *param_1 = uRam0000000113800a48;
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



/* Entry: 1015b56c4; end: 1015b56d7;  */

void FUN_1015b56c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d18,&UNK_10d965fd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b56d8; end: 1015b570b;  */

void FUN_1015b56d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1015b570c; end: 1015b5867;  */

void FUN_1015b570c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015b5868; end: 1015b5907;  */

uint FUN_1015b5868(undefined8 *param_1,undefined8 *param_2)

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
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
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
  FUN_1015bad70(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1015b5908; end: 1015b9f73;  */

undefined8 * FUN_1015b5908(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  byte *unaff_x19;
  undefined8 uVar19;
  byte *unaff_x20;
  undefined *puVar20;
  byte *unaff_x21;
  long lVar21;
  int iVar22;
  long unaff_x22;
  ulong uVar23;
  byte *unaff_x23;
  ulong uVar24;
  long lVar25;
  ulong unaff_x25;
  byte *unaff_x26;
  ulong *unaff_x27;
  byte *unaff_x28;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong auStack_328 [3];
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  long lStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  byte *pbStack_120;
  ulong *puStack_118;
  byte *pbStack_110;
  ulong uStack_108;
  long lStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(param_1 + 0x10);
  pbVar8 = unaff_x21;
  if (lVar25 == *(long *)(param_2 + 0x10)) {
    if ((lVar25 != 0) && (param_1 != param_2)) {
      pbStack_b0 = (byte *)0x0;
      unaff_x27 = (ulong *)(param_2 + 0x48);
      unaff_x28 = param_1 + 0x28;
      do {
        uVar16 = *(ulong *)(unaff_x28 + -8);
        pbVar7 = *(byte **)unaff_x28;
        pbVar5 = *(byte **)(unaff_x28 + 8);
        unaff_x26 = *(byte **)(unaff_x28 + 0x10);
        unaff_x22 = *(long *)(unaff_x28 + 0x18);
        unaff_x19 = *(byte **)(unaff_x28 + 0x20);
        pbVar6 = (byte *)unaff_x27[-4];
        unaff_x23 = (byte *)unaff_x27[-3];
        pbStack_90 = (byte *)unaff_x27[-2];
        unaff_x21 = (byte *)unaff_x27[-1];
        unaff_x25 = *unaff_x27;
        unaff_x20 = pbVar5;
        if ((((uVar16 != unaff_x27[-5]) || (pbVar7 != pbVar6)) &&
            (param_2 = pbVar7, pbStack_a8 = unaff_x28, pbStack_98 = unaff_x21, func_0x000107c605b8()
            , pbVar8 = pbStack_98, unaff_x21 = pbStack_98, unaff_x28 = pbStack_a8, (uVar16 & 1) == 0
            )) || (((pbVar8 = unaff_x21, pbStack_a0 = pbVar6, pbVar5 != unaff_x23 ||
                    (unaff_x26 != pbStack_90)) &&
                   (param_2 = unaff_x26,
                   func_0x000107c605b8(pbVar5,unaff_x26,unaff_x23,pbStack_90,0), unaff_x20 = pbVar7,
                   ((ulong)pbVar5 & 1) == 0)))) goto LAB_1015b5e74;
        uVar4 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar13 = uVar4 >> 0x1e;
        uVar2 = (uint)(unaff_x25 >> 0x20);
        uVar17 = uVar2 >> 0x1e;
        iVar22 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar16 = 0;
          if (((unaff_x22 != 0) || (unaff_x19 != (byte *)0xc000000000000000)) ||
             ((unaff_x25 >> 0x3e < 3 ||
              ((uVar16 = 0, unaff_x21 != (byte *)0x0 || (unaff_x25 != 0xc000000000000000))))))
          goto joined_r0x0001015b5c9c;
        }
        else {
          if (uVar4 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar16 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar15,iVar22)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1015b5ec8);
                (*pcVar3)();
              }
              uVar16 = (ulong)(iVar15 - iVar22);
            }
joined_r0x0001015b5c9c:
            if (uVar2 >> 0x1e < 2) goto LAB_1015b5acc;
LAB_1015b5a98:
            if (uVar17 != 2) {
              if (uVar16 == 0) goto LAB_1015b5968;
              goto LAB_1015b5e74;
            }
            uVar18 = *(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10);
            if (SBORROW8(*(long *)(unaff_x21 + 0x18),*(long *)(unaff_x21 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1015b5ebc);
              (*pcVar3)();
            }
          }
          else {
            if (uVar13 == 2) {
              uVar16 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1015b5ec4);
                (*pcVar3)();
              }
              goto joined_r0x0001015b5c9c;
            }
            uVar16 = 0;
            if (1 < uVar17) goto LAB_1015b5a98;
LAB_1015b5acc:
            if (uVar17 == 0) {
              uVar18 = unaff_x25 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)unaff_x21 >> 0x20);
              if (SBORROW4(iVar15,(int)unaff_x21)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1015b5ec0);
                (*pcVar3)();
              }
              uVar18 = (ulong)(iVar15 - (int)unaff_x21);
            }
          }
          if (uVar16 != uVar18) goto LAB_1015b5e74;
          if (0 < (long)uVar16) {
            param_2 = unaff_x19;
            pbStack_b8 = pbVar7;
            pbStack_98 = unaff_x21;
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar21 = (long)iVar22;
                pbStack_a8 = (byte *)((unaff_x22 >> 0x20) - lVar21);
                if (unaff_x22 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015b5ecc);
                  (*pcVar3)();
                }
                func_0x000107c61434(pbVar7);
                func_0x000107c61434(unaff_x26);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(pbStack_a0);
                func_0x000107c61434(pbStack_90);
                pbVar6 = pbStack_98;
                func_0x00010006c00c(pbStack_98,unaff_x25);
                func_0x000107c5ec30();
                if (pbVar6 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar8 = (byte *)0x0;
                  pbVar5 = (byte *)0x0;
                  pbVar6 = unaff_x23;
                }
                else {
                  pbVar7 = pbVar6;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar7)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1015b5ed8);
                    (*pcVar3)();
                  }
                  pbVar1 = pbVar6 + (lVar21 - (long)pbVar7);
                  func_0x000107c5ec38();
                  if ((long)pbStack_a8 <= (long)pbVar7) {
                    pbVar7 = pbStack_a8;
                  }
                  pbVar8 = (byte *)0x0;
                  if (pbVar1 != (byte *)0x0) {
                    pbVar8 = pbVar1;
                  }
                  pbVar5 = (byte *)0x0;
                  if (pbVar1 != (byte *)0x0) {
                    pbVar5 = pbVar7 + (long)pbVar1;
                  }
                }
LAB_1015b5e1c:
                unaff_x20 = pbStack_98;
                unaff_x21 = pbStack_b0;
                FUN_100e25bdc(abStack_80,pbVar8,pbVar5,pbStack_98,unaff_x25);
                pbStack_b0 = unaff_x21;
                func_0x000107c6142c(pbStack_90);
                func_0x000107c6142c(pbStack_a0);
                func_0x00010006c090(unaff_x20,unaff_x25);
                func_0x000107c6142c(unaff_x26);
                func_0x000107c6142c(pbStack_b8);
                func_0x00010006c090(unaff_x22);
                pbVar8 = unaff_x21;
                unaff_x23 = pbVar6;
                if ((abStack_80[0] & 1) != 0) goto LAB_1015b5968;
                goto LAB_1015b5e74;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)((ulong)unaff_x22 >> 8);
              abStack_80[2] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_80[3] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_80[4] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_80[5] = (byte)((ulong)unaff_x22 >> 0x28);
              abStack_80[6] = (byte)((ulong)unaff_x22 >> 0x30);
              abStack_80[7] = (byte)((ulong)unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              pbStack_a8 = abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff);
              func_0x000107c61434(pbVar7);
              func_0x000107c61434(unaff_x26);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              pbVar5 = pbStack_a0;
              func_0x000107c61434(pbStack_a0);
              unaff_x20 = pbStack_90;
              func_0x000107c61434(pbStack_90);
              func_0x00010006c00c(unaff_x21,unaff_x25);
              pbVar8 = pbStack_b0;
              FUN_100e25bdc(&bStack_81,abStack_80,pbStack_a8,unaff_x21,unaff_x25);
              pbStack_b0 = pbVar8;
              func_0x000107c6142c(unaff_x20);
              unaff_x23 = pbVar5;
            }
            else {
              if (uVar13 == 2) {
                lVar21 = *(long *)(unaff_x22 + 0x10);
                pbStack_a8 = *(byte **)(unaff_x22 + 0x18);
                func_0x000107c61434(pbVar7);
                func_0x000107c61434(unaff_x26);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(pbStack_a0);
                func_0x000107c61434(pbStack_90);
                func_0x00010006c00c(unaff_x21,unaff_x25);
                func_0x000107c5ec30();
                pbVar5 = unaff_x21;
                pbVar8 = unaff_x21;
                if (unaff_x21 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar5)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1015b5ed4);
                    (*pcVar3)();
                  }
                  pbVar8 = unaff_x21 + (lVar21 - (long)pbVar5);
                }
                pbVar7 = pbStack_a8 + -lVar21;
                if (SBORROW8((long)pbStack_a8,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015b5ed0);
                  (*pcVar3)();
                }
                func_0x000107c5ec38();
                pbVar6 = pbVar8;
                if (pbVar8 == (byte *)0x0) {
                  pbVar5 = (byte *)0x0;
                }
                else {
                  if ((long)pbVar7 <= (long)pbVar5) {
                    pbVar5 = pbVar7;
                  }
                  pbVar5 = pbVar5 + (long)pbVar8;
                }
                goto LAB_1015b5e1c;
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
              func_0x000107c61434(pbVar7);
              func_0x000107c61434(unaff_x26);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              pbVar5 = pbStack_a0;
              func_0x000107c61434(pbStack_a0);
              unaff_x23 = pbStack_90;
              func_0x000107c61434(pbStack_90);
              func_0x00010006c00c(unaff_x21,unaff_x25);
              pbVar8 = pbStack_b0;
              FUN_100e25bdc(&bStack_81,abStack_80,abStack_80,unaff_x21,unaff_x25);
              pbStack_b0 = pbVar8;
              func_0x000107c6142c(unaff_x23);
              unaff_x20 = pbVar5;
            }
            func_0x000107c6142c(pbVar5);
            func_0x00010006c090(pbStack_98,unaff_x25);
            func_0x000107c6142c(unaff_x26);
            func_0x000107c6142c(pbStack_b8);
            func_0x00010006c090(unaff_x22);
            unaff_x21 = pbVar8;
            if ((bStack_81 & 1) == 0) goto LAB_1015b5e74;
          }
        }
LAB_1015b5968:
        unaff_x27 = unaff_x27 + 6;
        unaff_x28 = unaff_x28 + 0x30;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    puVar9 = (undefined8 *)0x1;
  }
  else {
LAB_1015b5e74:
    puVar9 = (undefined8 *)0x0;
    unaff_x21 = pbVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar9;
  }
  func_0x000107c60e78();
  uStack_c8 = 0x1015b5edc;
  uVar18 = puVar9[3];
  uVar26 = puVar9[2];
  uVar16 = puVar9[4];
  uVar28 = *(ulong *)(param_2 + 0x18);
  uVar27 = *(ulong *)(param_2 + 0x10);
  uVar14 = *(ulong *)(param_2 + 0x20);
  uStack_170 = uVar27;
  uStack_168 = uVar28;
  uStack_160 = uVar14;
  uStack_150 = uVar26;
  uStack_148 = uVar18;
  uStack_140 = uVar16;
  pbStack_120 = unaff_x28;
  puStack_118 = unaff_x27;
  pbStack_110 = unaff_x26;
  uStack_108 = unaff_x25;
  lStack_100 = lVar25;
  pbStack_f8 = unaff_x23;
  lStack_f0 = unaff_x22;
  pbStack_e8 = unaff_x21;
  pbStack_e0 = unaff_x20;
  pbStack_d8 = unaff_x19;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar14 >> 0x3c) goto LAB_1015b6070;
    if (((float)uVar26 == (float)uVar27) && ((float)(uVar26 >> 0x20) == (float)(uVar27 >> 0x20))) {
      FUN_1015bbdcc(&uStack_150,&uStack_2f0,0x112db5cb0,&UNK_10d964910);
      FUN_1015bbdcc(&uStack_170,&uStack_2f0,0x112db5cb0,&UNK_10d964910);
      uVar10 = uVar18;
      FUN_100e25fcc(uVar18,uVar16,uVar28,uVar14);
      FUN_100cb61c8(uVar27,uVar28,uVar14);
      if ((uVar10 & 1) != 0) goto LAB_1015b5f88;
    }
    else {
      uVar19 = 0x112db5cb0;
      puVar20 = &UNK_10d964910;
      FUN_1015bbdcc(&uStack_150,&uStack_2f0,0x112db5cb0,&UNK_10d964910);
      puVar11 = &uStack_170;
      puVar12 = &uStack_2f0;
LAB_1015b6188:
      FUN_1015bbdcc(puVar11,puVar12,uVar19,puVar20);
      FUN_100cb61c8(uVar27,uVar28,uVar14);
    }
LAB_1015b61b0:
    FUN_100cb61c8(uVar26,uVar18,uVar16);
  }
  else {
    if (uVar14 >> 0x3c < 0xf) {
LAB_1015b6070:
      uVar19 = 0x112db5cb0;
      puVar20 = &UNK_10d964910;
      FUN_1015bbdcc(&uStack_150,&uStack_2f0,0x112db5cb0,&UNK_10d964910);
      puVar11 = &uStack_170;
      puVar12 = &uStack_2f0;
      uVar10 = uVar16;
      uVar23 = uVar18;
      uVar24 = uVar26;
      uVar16 = uVar14;
      uVar18 = uVar28;
      uVar26 = uVar27;
LAB_1015b609c:
      FUN_1015bbdcc(puVar11,puVar12,uVar19,puVar20);
      FUN_100cb61c8(uVar24,uVar23,uVar10);
      goto LAB_1015b61b0;
    }
    FUN_1015bbdcc(&uStack_150,&uStack_2f0,0x112db5cb0,&UNK_10d964910);
    FUN_1015bbdcc(&uStack_170,&uStack_2f0,0x112db5cb0,&UNK_10d964910);
LAB_1015b5f88:
    FUN_100cb61c8(uVar26,uVar18,uVar16);
    lVar25 = puVar9[6];
    uVar16 = puVar9[5];
    uVar19 = puVar9[8];
    uVar18 = puVar9[7];
    lVar21 = *(long *)(param_2 + 0x30);
    uVar26 = *(ulong *)(param_2 + 0x28);
    uVar30 = *(undefined8 *)(param_2 + 0x40);
    uVar29 = *(undefined8 *)(param_2 + 0x38);
    uStack_1b0 = uVar26;
    lStack_1a8 = lVar21;
    uStack_1a0 = uVar29;
    uStack_198 = uVar30;
    uStack_190 = uVar16;
    lStack_188 = lVar25;
    uStack_180 = uVar18;
    uStack_178 = uVar19;
    if (lVar25 == 0) {
      if (lVar21 != 0) goto LAB_1015b61bc;
      FUN_1015bbdcc(&uStack_190,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
      FUN_1015bbdcc(&uStack_1b0,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
LAB_1015b6238:
      FUN_101597ae4(uVar16,lVar25,uVar18,uVar19);
      lVar25 = puVar9[10];
      uVar16 = puVar9[9];
      uVar19 = puVar9[0xc];
      uVar18 = puVar9[0xb];
      lVar21 = *(long *)(param_2 + 0x50);
      uVar26 = *(ulong *)(param_2 + 0x48);
      uVar30 = *(undefined8 *)(param_2 + 0x60);
      uVar29 = *(undefined8 *)(param_2 + 0x58);
      uStack_1f0 = uVar26;
      lStack_1e8 = lVar21;
      uStack_1e0 = uVar29;
      uStack_1d8 = uVar30;
      uStack_1d0 = uVar16;
      lStack_1c8 = lVar25;
      uStack_1c0 = uVar18;
      uStack_1b8 = uVar19;
      if (lVar25 == 0) {
        if (lVar21 != 0) goto LAB_1015b6324;
        FUN_1015bbdcc(&uStack_1d0,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_1f0,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
      }
      else {
        if (lVar21 == 0) {
LAB_1015b6324:
          uStack_2f0 = uVar16;
          uStack_2e8 = lVar25;
          uStack_2e0 = uVar18;
          uStack_2d8 = uVar19;
          uStack_2d0 = uVar26;
          lStack_2c8 = lVar21;
          uStack_2c0 = uVar29;
          uStack_2b8 = uVar30;
          FUN_1015bbdcc(&uStack_1d0,&uStack_210,0x112db6f40,&UNK_10d9681d0);
          puVar11 = &uStack_1f0;
          puVar12 = &uStack_210;
          goto LAB_1015b6698;
        }
        if (((uVar16 != uVar26) || (lVar25 != lVar21)) &&
           (uVar14 = uVar16, func_0x000107c605b8(uVar16,lVar25,uVar26,lVar21,0), (uVar14 & 1) == 0))
        {
          FUN_1015bbdcc(&uStack_1d0,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
          puVar11 = &uStack_1f0;
          goto LAB_1015b6820;
        }
        FUN_1015bbdcc(&uStack_1d0,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_1f0,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        uVar14 = uVar18;
        FUN_100e25fcc(uVar18,uVar19,uVar29,uVar30);
        FUN_101597ae4(uVar26,lVar21,uVar29,uVar30);
        if ((uVar14 & 1) == 0) goto LAB_1015b6854;
      }
      FUN_101597ae4(uVar16,lVar25,uVar18,uVar19);
      lVar25 = puVar9[0xe];
      uVar16 = puVar9[0xd];
      uVar19 = puVar9[0x10];
      uVar18 = puVar9[0xf];
      lVar21 = *(long *)(param_2 + 0x70);
      uVar26 = *(ulong *)(param_2 + 0x68);
      uVar30 = *(undefined8 *)(param_2 + 0x80);
      uVar29 = *(undefined8 *)(param_2 + 0x78);
      uStack_230 = uVar26;
      lStack_228 = lVar21;
      uStack_220 = uVar29;
      uStack_218 = uVar30;
      uStack_210 = uVar16;
      lStack_208 = lVar25;
      uStack_200 = uVar18;
      uStack_1f8 = uVar19;
      if (lVar25 == 0) {
        if (lVar21 != 0) goto LAB_1015b64b8;
        FUN_1015bbdcc(&uStack_210,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_230,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
      }
      else {
        if (lVar21 == 0) {
LAB_1015b64b8:
          uStack_2f0 = uVar16;
          uStack_2e8 = lVar25;
          uStack_2e0 = uVar18;
          uStack_2d8 = uVar19;
          uStack_2d0 = uVar26;
          lStack_2c8 = lVar21;
          uStack_2c0 = uVar29;
          uStack_2b8 = uVar30;
          FUN_1015bbdcc(&uStack_210,&uStack_250,0x112db6f40,&UNK_10d9681d0);
          puVar11 = &uStack_230;
          puVar12 = &uStack_250;
          goto LAB_1015b6698;
        }
        if (((uVar16 != uVar26) || (lVar25 != lVar21)) &&
           (uVar14 = uVar16, func_0x000107c605b8(uVar16,lVar25,uVar26,lVar21,0), (uVar14 & 1) == 0))
        {
          FUN_1015bbdcc(&uStack_210,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
          puVar11 = &uStack_230;
          goto LAB_1015b6820;
        }
        FUN_1015bbdcc(&uStack_210,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_230,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        uVar14 = uVar18;
        FUN_100e25fcc(uVar18,uVar19,uVar29,uVar30);
        FUN_101597ae4(uVar26,lVar21,uVar29,uVar30);
        if ((uVar14 & 1) == 0) goto LAB_1015b6854;
      }
      FUN_101597ae4(uVar16,lVar25,uVar18,uVar19);
      lVar25 = puVar9[0x12];
      uVar16 = puVar9[0x11];
      uVar19 = puVar9[0x14];
      uVar18 = puVar9[0x13];
      lVar21 = *(long *)(param_2 + 0x90);
      uVar26 = *(ulong *)(param_2 + 0x88);
      uVar30 = *(undefined8 *)(param_2 + 0xa0);
      uVar29 = *(undefined8 *)(param_2 + 0x98);
      uStack_270 = uVar26;
      lStack_268 = lVar21;
      uStack_260 = uVar29;
      uStack_258 = uVar30;
      uStack_250 = uVar16;
      lStack_248 = lVar25;
      uStack_240 = uVar18;
      uStack_238 = uVar19;
      if (lVar25 == 0) {
        if (lVar21 != 0) goto LAB_1015b665c;
        FUN_1015bbdcc(&uStack_250,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_270,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
      }
      else {
        if (lVar21 == 0) {
LAB_1015b665c:
          uStack_2f0 = uVar16;
          uStack_2e8 = lVar25;
          uStack_2e0 = uVar18;
          uStack_2d8 = uVar19;
          uStack_2d0 = uVar26;
          lStack_2c8 = lVar21;
          uStack_2c0 = uVar29;
          uStack_2b8 = uVar30;
          FUN_1015bbdcc(&uStack_250,&uStack_310,0x112db6f40,&UNK_10d9681d0);
          puVar11 = &uStack_270;
          puVar12 = &uStack_310;
          goto LAB_1015b6698;
        }
        if (((uVar16 != uVar26) || (lVar25 != lVar21)) &&
           (uVar14 = uVar16, func_0x000107c605b8(uVar16,lVar25,uVar26,lVar21,0), (uVar14 & 1) == 0))
        {
          FUN_1015bbdcc(&uStack_250,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
          puVar11 = &uStack_270;
          goto LAB_1015b6820;
        }
        FUN_1015bbdcc(&uStack_250,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_270,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        uVar14 = uVar18;
        FUN_100e25fcc(uVar18,uVar19,uVar29,uVar30);
        FUN_101597ae4(uVar26,lVar21,uVar29,uVar30);
        if ((uVar14 & 1) == 0) goto LAB_1015b6854;
      }
      FUN_101597ae4(uVar16,lVar25,uVar18,uVar19);
      uVar18 = puVar9[0x16];
      uVar26 = puVar9[0x15];
      uVar16 = puVar9[0x17];
      uVar28 = *(ulong *)(param_2 + 0xb0);
      uVar27 = *(ulong *)(param_2 + 0xa8);
      uVar14 = *(ulong *)(param_2 + 0xb8);
      uStack_310 = uVar27;
      uStack_308 = uVar28;
      uStack_300 = uVar14;
      uStack_2f0 = uVar26;
      uStack_2e8 = uVar18;
      uStack_2e0 = uVar16;
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar14 >> 0x3c) {
LAB_1015b67c8:
          uVar19 = 0x112db6358;
          puVar20 = &UNK_10d961e20;
          FUN_1015bbdcc(&uStack_2f0,&uStack_290,0x112db6358,&UNK_10d961e20);
          puVar11 = &uStack_310;
          puVar12 = &uStack_290;
          uVar10 = uVar16;
          uVar23 = uVar18;
          uVar24 = uVar26;
          uVar16 = uVar14;
          uVar18 = uVar28;
          uVar26 = uVar27;
          goto LAB_1015b609c;
        }
        if ((float)uVar26 != (float)uVar27) {
          uVar19 = 0x112db6358;
          puVar20 = &UNK_10d961e20;
          FUN_1015bbdcc(&uStack_2f0,&uStack_290,0x112db6358,&UNK_10d961e20);
          puVar11 = &uStack_310;
          puVar12 = &uStack_290;
          goto LAB_1015b6188;
        }
        FUN_1015bbdcc(&uStack_2f0,&uStack_290,0x112db6358,&UNK_10d961e20);
        FUN_1015bbdcc(&uStack_310,&uStack_290,0x112db6358,&UNK_10d961e20);
        uVar10 = uVar18;
        FUN_100e25fcc(uVar18,uVar16,uVar28,uVar14);
        FUN_100cb61c8(uVar27,uVar28,uVar14);
        if ((uVar10 & 1) == 0) goto LAB_1015b61b0;
      }
      else {
        if (uVar14 >> 0x3c < 0xf) goto LAB_1015b67c8;
        FUN_1015bbdcc(&uStack_2f0,&uStack_290,0x112db6358,&UNK_10d961e20);
        FUN_1015bbdcc(&uStack_310,&uStack_290,0x112db6358,&UNK_10d961e20);
      }
      FUN_100cb61c8(uVar26,uVar18,uVar16);
      uVar18 = puVar9[0x19];
      uVar26 = puVar9[0x18];
      uVar16 = puVar9[0x1a];
      uVar28 = *(ulong *)(param_2 + 200);
      uVar27 = *(ulong *)(param_2 + 0xc0);
      uVar14 = *(ulong *)(param_2 + 0xd0);
      uStack_2b0 = uVar27;
      uStack_2a8 = uVar28;
      uStack_2a0 = uVar14;
      uStack_290 = uVar26;
      uStack_288 = uVar18;
      uStack_280 = uVar16;
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar14 >> 0x3c) goto LAB_1015b69ac;
        if (uVar26 != uVar27) {
          uVar19 = 0x112db6f48;
          puVar20 = &UNK_10d969b40;
          FUN_1015bbdcc(&uStack_290,auStack_328,0x112db6f48,&UNK_10d969b40);
          puVar11 = &uStack_2b0;
          puVar12 = auStack_328;
          goto LAB_1015b6188;
        }
        FUN_1015bbdcc(&uStack_290,auStack_328,0x112db6f48,&UNK_10d969b40);
        FUN_1015bbdcc(&uStack_2b0,auStack_328,0x112db6f48,&UNK_10d969b40);
        uVar27 = uVar18;
        FUN_100e25fcc(uVar18,uVar16,uVar28,uVar14);
        FUN_100cb61c8(uVar26,uVar28,uVar14);
        if ((uVar27 & 1) == 0) goto LAB_1015b61b0;
      }
      else {
        if (uVar14 >> 0x3c < 0xf) {
LAB_1015b69ac:
          uVar19 = 0x112db6f48;
          puVar20 = &UNK_10d969b40;
          FUN_1015bbdcc(&uStack_290,auStack_328,0x112db6f48,&UNK_10d969b40);
          puVar11 = &uStack_2b0;
          puVar12 = auStack_328;
          uVar10 = uVar16;
          uVar23 = uVar18;
          uVar24 = uVar26;
          uVar16 = uVar14;
          uVar18 = uVar28;
          uVar26 = uVar27;
          goto LAB_1015b609c;
        }
        FUN_1015bbdcc(&uStack_290,auStack_328,0x112db6f48,&UNK_10d969b40);
        FUN_1015bbdcc(&uStack_2b0,auStack_328,0x112db6f48,&UNK_10d969b40);
      }
      FUN_100cb61c8(uVar26,uVar18,uVar16);
      uVar19 = *puVar9;
      FUN_100e25fcc(uVar19,puVar9[1],*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
      uVar4 = (uint)uVar19;
      goto LAB_1015b685c;
    }
    if (lVar21 == 0) {
LAB_1015b61bc:
      uStack_2f0 = uVar16;
      uStack_2e8 = lVar25;
      uStack_2e0 = uVar18;
      uStack_2d8 = uVar19;
      uStack_2d0 = uVar26;
      lStack_2c8 = lVar21;
      uStack_2c0 = uVar29;
      uStack_2b8 = uVar30;
      FUN_1015bbdcc(&uStack_190,&uStack_1d0,0x112db6f40,&UNK_10d9681d0);
      puVar11 = &uStack_1b0;
      puVar12 = &uStack_1d0;
LAB_1015b6698:
      FUN_1015bbdcc(puVar11,puVar12,0x112db6f40,&UNK_10d9681d0);
      FUN_1015c5e7c(&uStack_2f0,0x112db7ec0,&UNK_10d966840);
    }
    else {
      if (((uVar16 == uVar26) && (lVar25 == lVar21)) ||
         (uVar14 = uVar16, func_0x000107c605b8(uVar16,lVar25,uVar26,lVar21,0), (uVar14 & 1) != 0)) {
        FUN_1015bbdcc(&uStack_190,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_1b0,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        uVar14 = uVar18;
        FUN_100e25fcc(uVar18,uVar19,uVar29,uVar30);
        FUN_101597ae4(uVar26,lVar21,uVar29,uVar30);
        if ((uVar14 & 1) != 0) goto LAB_1015b6238;
      }
      else {
        FUN_1015bbdcc(&uStack_190,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        puVar11 = &uStack_1b0;
LAB_1015b6820:
        FUN_1015bbdcc(puVar11,&uStack_2f0,0x112db6f40,&UNK_10d9681d0);
        FUN_101597ae4(uVar26,lVar21,uVar29,uVar30);
      }
LAB_1015b6854:
      FUN_101597ae4(uVar16,lVar25,uVar18,uVar19);
    }
  }
  uVar4 = 0;
LAB_1015b685c:
  return (undefined8 *)(ulong)(uVar4 & 1);
}



/* Entry: 1015b9f74; end: 1015b9fa7;  */

void FUN_1015b9f74(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 1;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  return;
}



/* Entry: 1015b9fa8; end: 1015bad43;  */

uint FUN_1015b9fa8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong auStack_200 [4];
  ulong uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  puVar4 = auStack_200;
  uVar9 = param_1[3];
  lVar7 = param_1[2];
  uVar5 = param_1[4];
  uVar10 = param_2[3];
  lVar8 = param_2[2];
  uVar6 = param_2[4];
  lStack_a0 = lVar8;
  uStack_98 = uVar10;
  uStack_90 = uVar6;
  lStack_80 = lVar7;
  uStack_78 = uVar9;
  uStack_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_1015ba130;
    if (lVar7 == lVar8) {
      FUN_1015bbdcc(&lStack_80,&uStack_1e0,0x112db6f48,&UNK_10d969b40);
      FUN_1015bbdcc(&lStack_a0,&uStack_1e0,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar9;
      FUN_100e25fcc(uVar9,uVar5,uVar10,uVar6);
      FUN_100cb61c8(lVar7,uVar10,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_1015ba048;
    }
    else {
      FUN_1015bbdcc(&lStack_80,&uStack_1e0,0x112db6f48,&UNK_10d969b40);
      FUN_1015bbdcc(&lStack_a0,&uStack_1e0,0x112db6f48,&UNK_10d969b40);
      FUN_100cb61c8(lVar8,uVar10,uVar6);
    }
LAB_1015ba24c:
    FUN_100cb61c8(lVar7,uVar9,uVar5);
  }
  else {
    if (uVar6 >> 0x3c < 0xf) {
LAB_1015ba130:
      FUN_1015bbdcc(&lStack_80,&uStack_1e0,0x112db6f48,&UNK_10d969b40);
      FUN_1015bbdcc(&lStack_a0,&uStack_1e0,0x112db6f48,&UNK_10d969b40);
      FUN_100cb61c8(lVar7,uVar9,uVar5);
      lVar7 = lVar8;
      uVar9 = uVar10;
      uVar5 = uVar6;
      goto LAB_1015ba24c;
    }
    FUN_1015bbdcc(&lStack_80,&uStack_1e0,0x112db6f48,&UNK_10d969b40);
    FUN_1015bbdcc(&lStack_a0,&uStack_1e0,0x112db6f48,&UNK_10d969b40);
LAB_1015ba048:
    FUN_100cb61c8(lVar7,uVar9,uVar5);
    lVar7 = param_1[6];
    uVar9 = param_1[5];
    uVar12 = param_1[8];
    uVar5 = param_1[7];
    lVar8 = param_2[6];
    uVar6 = param_2[5];
    uVar13 = param_2[8];
    uVar11 = param_2[7];
    uStack_e0 = uVar6;
    lStack_d8 = lVar8;
    uStack_d0 = uVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar9;
    lStack_b8 = lVar7;
    uStack_b0 = uVar5;
    uStack_a8 = uVar12;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1015ba258;
      FUN_1015bbdcc(&uStack_c0,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
      FUN_1015bbdcc(&uStack_e0,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
LAB_1015ba2d4:
      FUN_101597ae4(uVar9,lVar7,uVar5,uVar12);
      lVar7 = param_1[10];
      uVar9 = param_1[9];
      uVar12 = param_1[0xc];
      uVar5 = param_1[0xb];
      lVar8 = param_2[10];
      uVar6 = param_2[9];
      uVar13 = param_2[0xc];
      uVar11 = param_2[0xb];
      uStack_120 = uVar6;
      lStack_118 = lVar8;
      uStack_110 = uVar11;
      uStack_108 = uVar13;
      uStack_100 = uVar9;
      lStack_f8 = lVar7;
      uStack_f0 = uVar5;
      uStack_e8 = uVar12;
      if (lVar7 == 0) {
        if (lVar8 != 0) goto LAB_1015ba3bc;
        FUN_1015bbdcc(&uStack_100,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_120,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
      }
      else {
        if (lVar8 == 0) {
LAB_1015ba3bc:
          uStack_1e0 = uVar9;
          lStack_1d8 = lVar7;
          uStack_1d0 = uVar5;
          uStack_1c8 = uVar12;
          uStack_1c0 = uVar6;
          lStack_1b8 = lVar8;
          uStack_1b0 = uVar11;
          uStack_1a8 = uVar13;
          FUN_1015bbdcc(&uStack_100,&uStack_140,0x112db6f40,&UNK_10d9681d0);
          puVar3 = &uStack_120;
          puVar4 = &uStack_140;
          goto LAB_1015ba728;
        }
        if (((uVar9 != uVar6) || (lVar7 != lVar8)) &&
           (uVar10 = uVar9, func_0x000107c605b8(uVar9,lVar7,uVar6,lVar8,0), (uVar10 & 1) == 0)) {
          FUN_1015bbdcc(&uStack_100,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
          puVar4 = &uStack_120;
          goto LAB_1015ba804;
        }
        FUN_1015bbdcc(&uStack_100,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_120,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        uVar10 = uVar5;
        FUN_100e25fcc(uVar5,uVar12,uVar11,uVar13);
        FUN_101597ae4(uVar6,lVar8,uVar11,uVar13);
        if ((uVar10 & 1) == 0) goto LAB_1015ba838;
      }
      FUN_101597ae4(uVar9,lVar7,uVar5,uVar12);
      lVar7 = param_1[0xe];
      uVar9 = param_1[0xd];
      uVar12 = param_1[0x10];
      uVar5 = param_1[0xf];
      lVar8 = param_2[0xe];
      uVar6 = param_2[0xd];
      uVar13 = param_2[0x10];
      uVar11 = param_2[0xf];
      uStack_160 = uVar6;
      lStack_158 = lVar8;
      uStack_150 = uVar11;
      uStack_148 = uVar13;
      uStack_140 = uVar9;
      lStack_138 = lVar7;
      uStack_130 = uVar5;
      uStack_128 = uVar12;
      if (lVar7 == 0) {
        if (lVar8 != 0) goto LAB_1015ba54c;
        FUN_1015bbdcc(&uStack_140,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_160,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
      }
      else {
        if (lVar8 == 0) {
LAB_1015ba54c:
          uStack_1e0 = uVar9;
          lStack_1d8 = lVar7;
          uStack_1d0 = uVar5;
          uStack_1c8 = uVar12;
          uStack_1c0 = uVar6;
          lStack_1b8 = lVar8;
          uStack_1b0 = uVar11;
          uStack_1a8 = uVar13;
          FUN_1015bbdcc(&uStack_140,&uStack_180,0x112db6f40,&UNK_10d9681d0);
          puVar3 = &uStack_160;
          puVar4 = &uStack_180;
          goto LAB_1015ba728;
        }
        if (((uVar9 != uVar6) || (lVar7 != lVar8)) &&
           (uVar10 = uVar9, func_0x000107c605b8(uVar9,lVar7,uVar6,lVar8,0), (uVar10 & 1) == 0)) {
          FUN_1015bbdcc(&uStack_140,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
          puVar4 = &uStack_160;
          goto LAB_1015ba804;
        }
        FUN_1015bbdcc(&uStack_140,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_160,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        uVar10 = uVar5;
        FUN_100e25fcc(uVar5,uVar12,uVar11,uVar13);
        FUN_101597ae4(uVar6,lVar8,uVar11,uVar13);
        if ((uVar10 & 1) == 0) goto LAB_1015ba838;
      }
      FUN_101597ae4(uVar9,lVar7,uVar5,uVar12);
      lVar7 = param_1[0x12];
      uVar9 = param_1[0x11];
      uVar12 = param_1[0x14];
      uVar5 = param_1[0x13];
      lVar8 = param_2[0x12];
      uVar6 = param_2[0x11];
      uVar13 = param_2[0x14];
      uVar11 = param_2[0x13];
      uStack_1a0 = uVar6;
      lStack_198 = lVar8;
      uStack_190 = uVar11;
      uStack_188 = uVar13;
      uStack_180 = uVar9;
      lStack_178 = lVar7;
      uStack_170 = uVar5;
      uStack_168 = uVar12;
      if (lVar7 == 0) {
        if (lVar8 != 0) goto LAB_1015ba6ec;
        FUN_1015bbdcc(&uStack_180,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_1a0,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
      }
      else {
        if (lVar8 == 0) {
LAB_1015ba6ec:
          uStack_1e0 = uVar9;
          lStack_1d8 = lVar7;
          uStack_1d0 = uVar5;
          uStack_1c8 = uVar12;
          uStack_1c0 = uVar6;
          lStack_1b8 = lVar8;
          uStack_1b0 = uVar11;
          uStack_1a8 = uVar13;
          FUN_1015bbdcc(&uStack_180,auStack_200,0x112db6f40,&UNK_10d9681d0);
          puVar3 = &uStack_1a0;
          goto LAB_1015ba728;
        }
        if (((uVar9 != uVar6) || (lVar7 != lVar8)) &&
           (uVar10 = uVar9, func_0x000107c605b8(uVar9,lVar7,uVar6,lVar8,0), (uVar10 & 1) == 0)) {
          FUN_1015bbdcc(&uStack_180,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
          puVar4 = &uStack_1a0;
          goto LAB_1015ba804;
        }
        FUN_1015bbdcc(&uStack_180,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_1a0,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        uVar10 = uVar5;
        FUN_100e25fcc(uVar5,uVar12,uVar11,uVar13);
        FUN_101597ae4(uVar6,lVar8,uVar11,uVar13);
        if ((uVar10 & 1) == 0) goto LAB_1015ba838;
      }
      FUN_101597ae4(uVar9,lVar7,uVar5,uVar12);
      uVar12 = *param_1;
      FUN_100e25fcc(uVar12,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar12;
      goto LAB_1015ba840;
    }
    if (lVar8 == 0) {
LAB_1015ba258:
      uStack_1e0 = uVar9;
      lStack_1d8 = lVar7;
      uStack_1d0 = uVar5;
      uStack_1c8 = uVar12;
      uStack_1c0 = uVar6;
      lStack_1b8 = lVar8;
      uStack_1b0 = uVar11;
      uStack_1a8 = uVar13;
      FUN_1015bbdcc(&uStack_c0,&uStack_100,0x112db6f40,&UNK_10d9681d0);
      puVar3 = &uStack_e0;
      puVar4 = &uStack_100;
LAB_1015ba728:
      FUN_1015bbdcc(puVar3,puVar4,0x112db6f40,&UNK_10d9681d0);
      FUN_1015c5e7c(&uStack_1e0,0x112db7ec0,&UNK_10d966840);
    }
    else {
      if (((uVar9 == uVar6) && (lVar7 == lVar8)) ||
         (uVar10 = uVar9, func_0x000107c605b8(uVar9,lVar7,uVar6,lVar8,0), (uVar10 & 1) != 0)) {
        FUN_1015bbdcc(&uStack_c0,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        FUN_1015bbdcc(&uStack_e0,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        uVar10 = uVar5;
        FUN_100e25fcc(uVar5,uVar12,uVar11,uVar13);
        FUN_101597ae4(uVar6,lVar8,uVar11,uVar13);
        if ((uVar10 & 1) != 0) goto LAB_1015ba2d4;
      }
      else {
        FUN_1015bbdcc(&uStack_c0,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        puVar4 = &uStack_e0;
LAB_1015ba804:
        FUN_1015bbdcc(puVar4,&uStack_1e0,0x112db6f40,&UNK_10d9681d0);
        FUN_101597ae4(uVar6,lVar8,uVar11,uVar13);
      }
LAB_1015ba838:
      FUN_101597ae4(uVar9,lVar7,uVar5,uVar12);
    }
  }
  uVar1 = 0;
LAB_1015ba840:
  return uVar1 & 1;
}



/* Entry: 1015bad44; end: 1015bad6f;  */

void FUN_1015bad44(undefined8 *param_1)

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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1015bad70; end: 1015bb3eb;  */

uint FUN_1015bad70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_3a8 [56];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
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
  
  uVar10 = param_1[3];
  uVar6 = param_1[2];
  uVar16 = param_1[5];
  uVar14 = param_1[4];
  uVar11 = param_1[7];
  uVar7 = param_1[6];
  uVar4 = param_1[8];
  uVar12 = param_2[3];
  uVar8 = param_2[2];
  uVar17 = param_2[5];
  uVar15 = param_2[4];
  uVar13 = param_2[7];
  uVar9 = param_2[6];
  uVar5 = param_2[8];
  uStack_200 = uVar8;
  uStack_1f8 = uVar12;
  uStack_1f0 = uVar15;
  uStack_1e8 = uVar17;
  uStack_1e0 = uVar9;
  uStack_1d8 = uVar13;
  uStack_1d0 = uVar5;
  uStack_1c0 = uVar6;
  uStack_1b8 = uVar10;
  uStack_1b0 = uVar14;
  uStack_1a8 = uVar16;
  uStack_1a0 = uVar7;
  uStack_198 = uVar11;
  uStack_190 = uVar4;
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_1015bae88;
    uStack_e0 = uVar6;
    uStack_d8 = uVar10;
    uStack_d0 = uVar14;
    uStack_c8 = uVar16;
    uStack_c0 = uVar7;
    uStack_b8 = uVar11;
    uStack_b0 = uVar4;
    uStack_a8 = uVar8;
    uStack_a0 = uVar12;
    uStack_98 = uVar15;
    uStack_90 = uVar17;
    uStack_88 = uVar9;
    uStack_80 = uVar13;
    uStack_78 = uVar5;
    FUN_1015bbdcc(&uStack_1c0,&uStack_370,0x112db5e70,&UNK_10d9649a0);
    FUN_1015bbdcc(&uStack_200,&uStack_370,0x112db5e70,&UNK_10d9649a0);
    puVar2 = &uStack_e0;
    func_0x00010400dcec(puVar2,&uStack_a8);
    FUN_101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
    FUN_101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1015baf8c;
  }
  else {
    if (0xe < uVar17 >> 0x3c) {
      FUN_1015bbdcc(&uStack_1c0,&uStack_370,0x112db5e70,&UNK_10d9649a0);
      FUN_1015bbdcc(&uStack_200,&uStack_370,0x112db5e70,&UNK_10d9649a0);
      FUN_101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
LAB_1015baf8c:
      uVar10 = param_1[10];
      uVar6 = param_1[9];
      uVar16 = param_1[0xc];
      uVar14 = param_1[0xb];
      uVar11 = param_1[0xe];
      uVar7 = param_1[0xd];
      uVar4 = param_1[0xf];
      uVar12 = param_2[10];
      uVar8 = param_2[9];
      uVar17 = param_2[0xc];
      uVar15 = param_2[0xb];
      uVar13 = param_2[0xe];
      uVar9 = param_2[0xd];
      uVar5 = param_2[0xf];
      uStack_280 = uVar8;
      uStack_278 = uVar12;
      uStack_270 = uVar15;
      uStack_268 = uVar17;
      uStack_260 = uVar9;
      uStack_258 = uVar13;
      uStack_250 = uVar5;
      uStack_240 = uVar6;
      uStack_238 = uVar10;
      uStack_230 = uVar14;
      uStack_228 = uVar16;
      uStack_220 = uVar7;
      uStack_218 = uVar11;
      uStack_210 = uVar4;
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar17 >> 0x3c) goto LAB_1015bb078;
        uStack_150 = uVar6;
        uStack_148 = uVar10;
        uStack_140 = uVar14;
        uStack_138 = uVar16;
        uStack_130 = uVar7;
        uStack_128 = uVar11;
        uStack_120 = uVar4;
        uStack_118 = uVar8;
        uStack_110 = uVar12;
        uStack_108 = uVar15;
        uStack_100 = uVar17;
        uStack_f8 = uVar9;
        uStack_f0 = uVar13;
        uStack_e8 = uVar5;
        FUN_1015bbdcc(&uStack_240,&uStack_370,0x112db5e70,&UNK_10d9649a0);
        FUN_1015bbdcc(&uStack_280,&uStack_370,0x112db5e70,&UNK_10d9649a0);
        puVar2 = &uStack_150;
        func_0x00010400dcec(puVar2,&uStack_118);
        FUN_101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
        FUN_101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1015bb2e8;
      }
      else {
        if (uVar17 >> 0x3c < 0xf) {
LAB_1015bb078:
          uStack_370 = uVar6;
          uStack_368 = uVar10;
          uStack_360 = uVar14;
          uStack_358 = uVar16;
          uStack_350 = uVar7;
          uStack_348 = uVar11;
          uStack_340 = uVar4;
          uStack_338 = uVar8;
          uStack_330 = uVar12;
          uStack_328 = uVar15;
          uStack_320 = uVar17;
          uStack_318 = uVar9;
          uStack_310 = uVar13;
          uStack_308 = uVar5;
          FUN_1015bbdcc(&uStack_240,&uStack_118,0x112db5e70,&UNK_10d9649a0);
          puVar2 = &uStack_280;
          puVar3 = &uStack_118;
          goto LAB_1015bb2c4;
        }
        FUN_1015bbdcc(&uStack_240,&uStack_370,0x112db5e70,&UNK_10d9649a0);
        FUN_1015bbdcc(&uStack_280,&uStack_370,0x112db5e70,&UNK_10d9649a0);
        FUN_101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
      }
      uVar10 = param_1[0x11];
      uVar6 = param_1[0x10];
      uVar16 = param_1[0x13];
      uVar14 = param_1[0x12];
      uVar11 = param_1[0x15];
      uVar7 = param_1[0x14];
      uVar4 = param_1[0x16];
      uVar12 = param_2[0x11];
      uVar8 = param_2[0x10];
      uVar17 = param_2[0x13];
      uVar15 = param_2[0x12];
      uVar13 = param_2[0x15];
      uVar9 = param_2[0x14];
      uVar5 = param_2[0x16];
      uStack_300 = uVar8;
      uStack_2f8 = uVar12;
      uStack_2f0 = uVar15;
      uStack_2e8 = uVar17;
      uStack_2e0 = uVar9;
      uStack_2d8 = uVar13;
      uStack_2d0 = uVar5;
      uStack_2c0 = uVar6;
      uStack_2b8 = uVar10;
      uStack_2b0 = uVar14;
      uStack_2a8 = uVar16;
      uStack_2a0 = uVar7;
      uStack_298 = uVar11;
      uStack_290 = uVar4;
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar17 >> 0x3c) goto LAB_1015bb27c;
        uStack_370 = uVar8;
        uStack_368 = uVar12;
        uStack_360 = uVar15;
        uStack_358 = uVar17;
        uStack_350 = uVar9;
        uStack_348 = uVar13;
        uStack_340 = uVar5;
        uStack_188 = uVar6;
        uStack_180 = uVar10;
        uStack_178 = uVar14;
        uStack_170 = uVar16;
        uStack_168 = uVar7;
        uStack_160 = uVar11;
        uStack_158 = uVar4;
        FUN_1015bbdcc(&uStack_2c0,auStack_3a8,0x112db5e70,&UNK_10d9649a0);
        FUN_1015bbdcc(&uStack_300,auStack_3a8,0x112db5e70,&UNK_10d9649a0);
        puVar2 = &uStack_188;
        func_0x00010400dcec(puVar2,&uStack_370);
        FUN_101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
        FUN_101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1015bb2e8;
      }
      else {
        if (uVar17 >> 0x3c < 0xf) {
LAB_1015bb27c:
          uStack_370 = uVar6;
          uStack_368 = uVar10;
          uStack_360 = uVar14;
          uStack_358 = uVar16;
          uStack_350 = uVar7;
          uStack_348 = uVar11;
          uStack_340 = uVar4;
          uStack_338 = uVar8;
          uStack_330 = uVar12;
          uStack_328 = uVar15;
          uStack_320 = uVar17;
          uStack_318 = uVar9;
          uStack_310 = uVar13;
          uStack_308 = uVar5;
          FUN_1015bbdcc(&uStack_2c0,&uStack_188,0x112db5e70,&UNK_10d9649a0);
          puVar2 = &uStack_300;
          puVar3 = &uStack_188;
          goto LAB_1015bb2c4;
        }
        FUN_1015bbdcc(&uStack_2c0,&uStack_370,0x112db5e70,&UNK_10d9649a0);
        FUN_1015bbdcc(&uStack_300,&uStack_370,0x112db5e70,&UNK_10d9649a0);
        FUN_101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
      }
      uVar4 = *param_1;
      FUN_100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar4;
      goto LAB_1015bb2ec;
    }
LAB_1015bae88:
    uStack_370 = uVar6;
    uStack_368 = uVar10;
    uStack_360 = uVar14;
    uStack_358 = uVar16;
    uStack_350 = uVar7;
    uStack_348 = uVar11;
    uStack_340 = uVar4;
    uStack_338 = uVar8;
    uStack_330 = uVar12;
    uStack_328 = uVar15;
    uStack_320 = uVar17;
    uStack_318 = uVar9;
    uStack_310 = uVar13;
    uStack_308 = uVar5;
    FUN_1015bbdcc(&uStack_1c0,&uStack_a8,0x112db5e70,&UNK_10d9649a0);
    puVar2 = &uStack_200;
    puVar3 = &uStack_a8;
LAB_1015bb2c4:
    FUN_1015bbdcc(puVar2,puVar3,0x112db5e70,&UNK_10d9649a0);
    FUN_1015c5e7c(&uStack_370,0x112db7eb8,&UNK_10d96d2a0);
  }
LAB_1015bb2e8:
  uVar1 = 0;
LAB_1015bb2ec:
  return uVar1 & 1;
}



/* Entry: 1015bb3ec; end: 1015bb78f;  */

uint FUN_1015bb3ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auStack_798 [184];
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
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
  undefined8 uStack_630;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
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
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
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
  undefined8 uVar5;
  
  uStack_368 = param_1[0x13];
  uStack_370 = param_1[0x12];
  uStack_128 = param_1[0x15];
  uStack_130 = param_1[0x14];
  uStack_378 = param_1[0x11];
  uStack_380 = param_1[0x10];
  uStack_138 = param_1[0x13];
  uStack_140 = param_1[0x12];
  uStack_358 = param_1[0x15];
  uStack_360 = param_1[0x14];
  uStack_118 = param_1[0x17];
  uStack_120 = param_1[0x16];
  uStack_3a8 = param_1[0xb];
  uStack_3b0 = param_1[10];
  uStack_168 = param_1[0xd];
  uStack_170 = param_1[0xc];
  uStack_3b8 = param_1[9];
  uStack_3c0 = param_1[8];
  uStack_178 = param_1[0xb];
  uStack_180 = param_1[10];
  uStack_398 = param_1[0xd];
  uStack_3a0 = param_1[0xc];
  uStack_158 = param_1[0xf];
  uStack_160 = param_1[0xe];
  uStack_388 = param_1[0xf];
  uStack_390 = param_1[0xe];
  uStack_148 = param_1[0x11];
  uStack_150 = param_1[0x10];
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_188 = param_1[9];
  uStack_190 = param_1[8];
  uStack_3e8 = param_1[3];
  uStack_3f0 = param_1[2];
  uStack_3d8 = param_1[5];
  uStack_3e0 = param_1[4];
  uStack_3c8 = param_1[7];
  uStack_3d0 = param_1[6];
  uStack_2b0 = param_2[0x13];
  uStack_2b8 = param_2[0x12];
  uStack_1e8 = param_2[0x15];
  uStack_1f0 = param_2[0x14];
  uStack_2c0 = param_2[0x11];
  uStack_2c8 = param_2[0x10];
  uStack_1f8 = param_2[0x13];
  uStack_200 = param_2[0x12];
  uStack_2a0 = param_2[0x15];
  uStack_2a8 = param_2[0x14];
  uStack_1d8 = param_2[0x17];
  uStack_1e0 = param_2[0x16];
  uStack_2f0 = param_2[0xb];
  uStack_2f8 = param_2[10];
  uStack_228 = param_2[0xd];
  uStack_230 = param_2[0xc];
  uStack_300 = param_2[9];
  uStack_308 = param_2[8];
  uStack_238 = param_2[0xb];
  uStack_240 = param_2[10];
  uStack_2e0 = param_2[0xd];
  uStack_2e8 = param_2[0xc];
  uStack_218 = param_2[0xf];
  uStack_220 = param_2[0xe];
  uStack_2d0 = param_2[0xf];
  uStack_2d8 = param_2[0xe];
  uStack_208 = param_2[0x11];
  uStack_210 = param_2[0x10];
  uStack_278 = param_2[3];
  uStack_280 = param_2[2];
  uStack_268 = param_2[5];
  uStack_270 = param_2[4];
  uStack_258 = param_2[7];
  uStack_260 = param_2[6];
  uStack_248 = param_2[9];
  uStack_250 = param_2[8];
  uStack_330 = param_2[3];
  uStack_338 = param_2[2];
  uStack_320 = param_2[5];
  uStack_328 = param_2[4];
  uStack_310 = param_2[7];
  uStack_318 = param_2[6];
  uStack_348 = param_1[0x17];
  uStack_350 = param_1[0x16];
  iVar2 = (int)&uStack_338;
  uStack_290 = param_2[0x17];
  uStack_298 = param_2[0x16];
  uStack_110 = param_1[0x18];
  uStack_1d0 = param_2[0x18];
  uStack_340 = param_1[0x18];
  uStack_288 = param_2[0x18];
  iVar1 = (int)&uStack_3f0;
  func_0x000100cb60ec();
  if (iVar1 == 1) {
    func_0x000100cb60ec();
    if (iVar2 == 1) {
      uStack_4d8 = uStack_368;
      uStack_4e0 = uStack_370;
      uStack_4c8 = uStack_358;
      uStack_4d0 = uStack_360;
      uStack_4b8 = uStack_348;
      uStack_4c0 = uStack_350;
      uStack_4b0 = uStack_340;
      uStack_518 = uStack_3a8;
      uStack_520 = uStack_3b0;
      uStack_508 = uStack_398;
      uStack_510 = uStack_3a0;
      uStack_4f8 = uStack_388;
      uStack_500 = uStack_390;
      uStack_4e8 = uStack_378;
      uStack_4f0 = uStack_380;
      uStack_558 = uStack_3e8;
      uStack_560 = uStack_3f0;
      uStack_548 = uStack_3d8;
      uStack_550 = uStack_3e0;
      uStack_538 = uStack_3c8;
      uStack_540 = uStack_3d0;
      uStack_528 = uStack_3b8;
      uStack_530 = uStack_3c0;
      FUN_1015bbdcc(&uStack_1c0,&uStack_100,0x112db7170,&UNK_10d9649b8);
      FUN_1015bbdcc(&uStack_280,&uStack_100,0x112db7170,&UNK_10d9649b8);
      FUN_1015c5e7c(&uStack_560,0x112db7170,&UNK_10d9649b8);
LAB_1015bb768:
      uVar5 = *param_1;
      FUN_100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar3 = (uint)uVar5;
      goto LAB_1015bb774;
    }
LAB_1015bb5ec:
    func_0x000107c610b4(&uStack_560,&uStack_3f0,0x170);
    FUN_1015bbdcc(&uStack_1c0,&uStack_100,0x112db7170,&UNK_10d9649b8);
    FUN_1015bbdcc(&uStack_280,&uStack_100,0x112db7170,&UNK_10d9649b8);
    FUN_1015c5e7c(&uStack_560,0x112db7178,&UNK_10d9649c0);
  }
  else {
    uStack_598 = uStack_368;
    uStack_5a0 = uStack_370;
    uStack_588 = uStack_358;
    uStack_590 = uStack_360;
    uStack_578 = uStack_348;
    uStack_580 = uStack_350;
    uStack_570 = uStack_340;
    uStack_5d8 = uStack_3a8;
    uStack_5e0 = uStack_3b0;
    uStack_5c8 = uStack_398;
    uStack_5d0 = uStack_3a0;
    uStack_5b8 = uStack_388;
    uStack_5c0 = uStack_390;
    uStack_5a8 = uStack_378;
    uStack_5b0 = uStack_380;
    uStack_618 = uStack_3e8;
    uStack_620 = uStack_3f0;
    uStack_608 = uStack_3d8;
    uStack_610 = uStack_3e0;
    uStack_5f8 = uStack_3c8;
    uStack_600 = uStack_3d0;
    uStack_5e8 = uStack_3b8;
    uStack_5f0 = uStack_3c0;
    func_0x000100cb60ec();
    if (iVar2 == 1) goto LAB_1015bb5ec;
    uStack_658 = uStack_2b0;
    uStack_660 = uStack_2b8;
    uStack_648 = uStack_2a0;
    uStack_650 = uStack_2a8;
    uStack_638 = uStack_290;
    uStack_640 = uStack_298;
    uStack_698 = uStack_2f0;
    uStack_6a0 = uStack_2f8;
    uStack_688 = uStack_2e0;
    uStack_690 = uStack_2e8;
    uStack_678 = uStack_2d0;
    uStack_680 = uStack_2d8;
    uStack_668 = uStack_2c0;
    uStack_670 = uStack_2c8;
    uStack_6d8 = uStack_330;
    uStack_6e0 = uStack_338;
    uStack_6c8 = uStack_320;
    uStack_6d0 = uStack_328;
    uStack_6b8 = uStack_310;
    uStack_6c0 = uStack_318;
    uStack_6a8 = uStack_300;
    uStack_6b0 = uStack_308;
    uStack_4d8 = uStack_2b0;
    uStack_4e0 = uStack_2b8;
    uStack_4c8 = uStack_2a0;
    uStack_4d0 = uStack_2a8;
    uStack_4b8 = uStack_290;
    uStack_4c0 = uStack_298;
    uStack_518 = uStack_2f0;
    uStack_520 = uStack_2f8;
    uStack_508 = uStack_2e0;
    uStack_510 = uStack_2e8;
    uStack_4f8 = uStack_2d0;
    uStack_500 = uStack_2d8;
    uStack_4e8 = uStack_2c0;
    uStack_4f0 = uStack_2c8;
    uStack_558 = uStack_330;
    uStack_560 = uStack_338;
    uStack_548 = uStack_320;
    uStack_550 = uStack_328;
    uStack_630 = uStack_288;
    uStack_4b0 = uStack_288;
    uStack_538 = uStack_310;
    uStack_540 = uStack_318;
    uStack_528 = uStack_300;
    uStack_530 = uStack_308;
    uStack_78 = uStack_598;
    uStack_80 = uStack_5a0;
    uStack_68 = uStack_588;
    uStack_70 = uStack_590;
    uStack_58 = uStack_578;
    uStack_60 = uStack_580;
    uStack_50 = uStack_570;
    uStack_b8 = uStack_5d8;
    uStack_c0 = uStack_5e0;
    uStack_a8 = uStack_5c8;
    uStack_b0 = uStack_5d0;
    uStack_98 = uStack_5b8;
    uStack_a0 = uStack_5c0;
    uStack_88 = uStack_5a8;
    uStack_90 = uStack_5b0;
    uStack_f8 = uStack_618;
    uStack_100 = uStack_620;
    uStack_e8 = uStack_608;
    uStack_f0 = uStack_610;
    uStack_d8 = uStack_5f8;
    uStack_e0 = uStack_600;
    uStack_c8 = uStack_5e8;
    uStack_d0 = uStack_5f0;
    FUN_1015bbdcc(&uStack_1c0,auStack_798,0x112db7170,&UNK_10d9649b8);
    FUN_1015bbdcc(&uStack_280,auStack_798,0x112db7170,&UNK_10d9649b8);
    puVar4 = &uStack_100;
    FUN_1015bad70(puVar4,&uStack_560);
    FUN_1015c5e7c(&uStack_6e0,0x112db7170,&UNK_10d9649b8);
    FUN_1015c5e7c(&uStack_3f0,0x112db7170,&UNK_10d9649b8);
    if (((ulong)puVar4 & 1) != 0) goto LAB_1015bb768;
  }
  uVar3 = 0;
LAB_1015bb774:
  return uVar3 & 1;
}



/* Entry: 1015bb790; end: 1015bbb07;  */

uint FUN_1015bb790(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long alStack_f8 [3];
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uVar2;
  
  uVar12 = param_1[3];
  lVar10 = param_1[2];
  uVar6 = param_1[4];
  uVar13 = param_2[3];
  lVar11 = param_2[2];
  uVar9 = param_2[4];
  lStack_a0 = lVar11;
  uStack_98 = uVar13;
  uStack_90 = uVar9;
  lStack_80 = lVar10;
  uStack_78 = uVar12;
  uStack_70 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) goto LAB_1015bb8e4;
    if (lVar10 == lVar11) {
      FUN_1015bbdcc(&lStack_80,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      FUN_1015bbdcc(&lStack_a0,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      uVar3 = uVar12;
      FUN_100e25fcc(uVar12,uVar6,uVar13,uVar9);
      FUN_100cb61c8(lVar10,uVar13,uVar9);
      if ((uVar3 & 1) != 0) goto LAB_1015bb830;
    }
    else {
      FUN_1015bbdcc(&lStack_80,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      plVar4 = &lStack_a0;
      plVar5 = &lStack_c0;
LAB_1015bbab4:
      FUN_1015bbdcc(plVar4,plVar5,0x112db6f48,&UNK_10d969b40);
      FUN_100cb61c8(lVar11,uVar13,uVar9);
    }
  }
  else {
    if (0xe < uVar9 >> 0x3c) {
      FUN_1015bbdcc(&lStack_80,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      FUN_1015bbdcc(&lStack_a0,&lStack_c0,0x112db6f48,&UNK_10d969b40);
LAB_1015bb830:
      FUN_100cb61c8(lVar10,uVar12,uVar6);
      uVar12 = param_1[6];
      lVar10 = param_1[5];
      uVar6 = param_1[7];
      uVar13 = param_2[6];
      lVar11 = param_2[5];
      uVar9 = param_2[7];
      lStack_e0 = lVar11;
      uStack_d8 = uVar13;
      uStack_d0 = uVar9;
      lStack_c0 = lVar10;
      uStack_b8 = uVar12;
      uStack_b0 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar9 >> 0x3c) goto LAB_1015bb990;
        if (lVar10 != lVar11) {
          FUN_1015bbdcc(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          goto LAB_1015bbab4;
        }
        FUN_1015bbdcc(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_1015bbdcc(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        uVar3 = uVar12;
        FUN_100e25fcc(uVar12,uVar6,uVar13,uVar9);
        FUN_100cb61c8(lVar10,uVar13,uVar9);
        if ((uVar3 & 1) == 0) goto LAB_1015bbadc;
      }
      else {
        if (uVar9 >> 0x3c < 0xf) {
LAB_1015bb990:
          FUN_1015bbdcc(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          uVar3 = uVar6;
          uVar7 = uVar12;
          lVar8 = lVar10;
          uVar6 = uVar9;
          uVar12 = uVar13;
          lVar10 = lVar11;
          goto LAB_1015bb9bc;
        }
        FUN_1015bbdcc(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_1015bbdcc(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
      }
      FUN_100cb61c8(lVar10,uVar12,uVar6);
      uVar2 = *param_1;
      FUN_100e25fcc(uVar2,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar2;
      goto LAB_1015bbae4;
    }
LAB_1015bb8e4:
    FUN_1015bbdcc(&lStack_80,&lStack_c0,0x112db6f48,&UNK_10d969b40);
    plVar4 = &lStack_a0;
    plVar5 = &lStack_c0;
    uVar3 = uVar6;
    uVar7 = uVar12;
    lVar8 = lVar10;
    uVar6 = uVar9;
    uVar12 = uVar13;
    lVar10 = lVar11;
LAB_1015bb9bc:
    FUN_1015bbdcc(plVar4,plVar5,0x112db6f48,&UNK_10d969b40);
    FUN_100cb61c8(lVar8,uVar7,uVar3);
  }
LAB_1015bbadc:
  FUN_100cb61c8(lVar10,uVar12,uVar6);
  uVar1 = 0;
LAB_1015bbae4:
  return uVar1 & 1;
}



/* Entry: 1015bbb08; end: 1015bbb27;  */

void FUN_1015bbb08(void)

{
  func_0x000107c61168(&PTR_PTR_112db7818);
  return;
}



/* Entry: 1015bbb28; end: 1015bbb5f;  */

void FUN_1015bbb28(undefined8 *param_1)

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
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  return;
}



/* Entry: 1015bbb60; end: 1015bbbf3;  */

undefined8 FUN_1015bbb60(undefined8 param_1,undefined8 param_2)

{
  FUN_1015bff44(param_2,param_1,&UNK_1103e2cb0);
  return param_2;
}



/* Entry: 1015bbbf4; end: 1015bbc33;  */

void FUN_1015bbbf4(void)

{
  func_0x000107c61168(&PTR_PTR_112db79d8);
  return;
}



/* Entry: 1015bbc34; end: 1015bbc8b;  */

void FUN_1015bbc34(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015bbc8c; end: 1015bbd4b;  */

/* WARNING: Possible PIC construction at 0x0001015bbcc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015bbcc8) */
/* WARNING: Removing unreachable block (ram,0x000100cb6160) */
/* WARNING: Removing unreachable block (ram,0x000100cb6170) */
/* WARNING: Removing unreachable block (ram,0x000100cb616c) */

void FUN_1015bbc8c(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6157c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1015bbd4c; end: 1015bbd7f;  */

int FUN_1015bbd4c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015bbd80; end: 1015bbdcb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015bbd80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1015bbdcc; end: 1015bbe3f;  */

undefined8 FUN_1015bbdcc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015bbe40; end: 1015bc1bf;  */

void FUN_1015bbe40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d964a38;
  func_0x000107c61520(&UNK_10d964a38,&UNK_1103e2880);
  puRam0000000112db7198 = puVar1;
  return;
}



/* Entry: 1015bc1c0; end: 1015bc23b;  */

/* WARNING: Possible PIC construction at 0x0001015bc1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015bc1f4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015bc1c0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015bc23c; end: 1015bc4fb;  */

void FUN_1015bc23c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db72c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d965458;
  func_0x000107c61520(&UNK_10d965458,&UNK_1103e2ee0);
  puRam0000000112db72c8 = puVar1;
  return;
}



/* Entry: 1015bc4fc; end: 1015bc51f;  */

void FUN_1015bc4fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015bc520();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015bc520; end: 1015bc55f;  */

void FUN_1015bc520(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db73c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d964a10;
  func_0x000107c61520(&UNK_10d964a10,&UNK_1103e2880);
  puRam0000000112db73c0 = puVar1;
  return;
}



/* Entry: 1015bc560; end: 1015bc577;  */

void FUN_1015bc560(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015bbe40();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015731d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015bc578; end: 1015bc5b7;  */

void FUN_1015bc578(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db73c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d964a78;
  func_0x000107c61520(&UNK_10d964a78,&UNK_1103e2880);
  puRam0000000112db73c8 = puVar1;
  return;
}



/* Entry: 1015bc5b8; end: 1015bc5db;  */

void FUN_1015bc5b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015bc5dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015bc5dc; end: 1015bc61b;  */

void FUN_1015bc5dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db73d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d964ae8;
  func_0x000107c61520(&UNK_10d964ae8,&UNK_1103e2900);
  puRam0000000112db73d0 = puVar1;
  return;
}



/* Entry: 1015bc61c; end: 1015bc633;  */

void FUN_1015bc61c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015bbe80)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10159f5f4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015bc634; end: 1015bc673;  */

void FUN_1015bc634(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db73d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d964b50;
  func_0x000107c61520(&UNK_10d964b50,&UNK_1103e2900);
  puRam0000000112db73d8 = puVar1;
  return;
}



/* Entry: 1015bc674; end: 1015bc697;  */

void FUN_1015bc674(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015bc698();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015bc698; end: 1015bc6d7;  */

void FUN_1015bc698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db73e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d964bc0;
  func_0x000107c61520(&UNK_10d964bc0,&UNK_1103e2998);
  puRam0000000112db73e0 = puVar1;
  return;
}



/* Entry: 1015bc6d8; end: 1015bc6ef;  */

void FUN_1015bc6d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015bbec0)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10159f574)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


