/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d797d4; end: 103d797fb;  */

void FUN_103d797d4(void)

{
  func_0x000107c5fb78(0x7453726f6c6f432e,0xea0000000000706f);
  uRam00000001138118a0 = 0xd000000000000019;
  uRam00000001138118a8 = 0x800000010f1b6d50;
  return;
}



/* Entry: 103d797fc; end: 103d79843;  */

void FUN_103d797fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc8d0a0,0x10,2);
  uRam00000001138118b8 = uStack_38;
  uRam00000001138118b0 = uStack_40;
  uRam00000001138118c8 = uStack_28;
  uRam00000001138118c0 = uStack_30;
  uRam00000001138118d8 = uStack_18;
  uRam00000001138118d0 = uStack_20;
  return;
}



/* Entry: 103d79844; end: 103d79917;  */

/* WARNING: Removing unreachable block (ram,0x000103d79914) */

void FUN_103d79844(undefined8 param_1,long param_2,long param_3)

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
        FUN_103d82320();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_11070b638,lVar1,param_2,param_3);
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



/* Entry: 103d79918; end: 103d79997;  */

void FUN_103d79918(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  FUN_103d79998();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 8))(2,param_2,param_3);
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 2),*(undefined8 *)(unaff_x20 + 4),
                        param_2,param_3);
  }
  return;
}



/* Entry: 103d79998; end: 103d79a33;  */

void FUN_103d79998(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    FUN_103d82320();
    (*pcVar1)(&uStack_80,1,&UNK_11070b638,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d79a34; end: 103d79a83;  */

void FUN_103d79a34(undefined4 *param_1)

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



/* Entry: 103d79a84; end: 103d79ab3;  */

undefined1  [16] FUN_103d79a84(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 103d79ab4; end: 103d79ae7;  */

void FUN_103d79ab4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103d79ae8; end: 103d79afb;  */

undefined1  [16] FUN_103d79ae8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x103d79af8;
  return auVar1;
}



/* Entry: 103d79afc; end: 103d79b0f;  */

void FUN_103d79afc(void)

{
  FUN_103d79844();
  return;
}



/* Entry: 103d79b10; end: 103d79b4f;  */

void FUN_103d79b10(void)

{
  FUN_103d79918();
  return;
}



/* Entry: 103d79b50; end: 103d79b53;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d79b50(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d79b54; end: 103d79b8b;  */

uint FUN_103d79b54(long param_1,long param_2)

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
  func_0x000103d89b1c();
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



/* Entry: 103d79b8c; end: 103d79be3;  */

uint FUN_103d79b8c(undefined8 *param_1)

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
  FUN_103d80bfc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103d79be4; end: 103d79c83;  */

/* WARNING: Possible PIC construction at 0x000103d79c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d79c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d79c34) */
/* WARNING: Removing unreachable block (ram,0x000103d79c44) */

void FUN_103d79be4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113007b00 != -1) {
    func_0x000107c61568(0x113007b00,FUN_103d797fc);
  }
  uVar5 = uRam00000001138118d8;
  uVar4 = uRam00000001138118d0;
  uVar3 = uRam00000001138118c8;
  uVar2 = uRam00000001138118c0;
  uVar1 = uRam00000001138118b8;
  *param_1 = uRam00000001138118b0;
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



/* Entry: 103d79c84; end: 103d79cbf;  */

void FUN_103d79c84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113008320;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113008320,&UNK_10dc8cfc8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d79cc0; end: 103d79dd3;  */

void FUN_103d79cc0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d79dd4; end: 103d79e2b;  */

uint FUN_103d79dd4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d80bfc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103d79e2c; end: 103d79e5b;  */

void FUN_103d79e2c(void)

{
  func_0x000107c5fb78(0x477261656e694c2e,0xef746e6569646172);
  uRam00000001138118e0 = 0xd000000000000019;
  uRam00000001138118e8 = 0x800000010f1b6d50;
  return;
}



/* Entry: 103d79e5c; end: 103d79ea3;  */

void FUN_103d79e5c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc8d080,0x17,2);
  uRam00000001138118f8 = uStack_38;
  uRam00000001138118f0 = uStack_40;
  uRam0000000113811908 = uStack_28;
  uRam0000000113811900 = uStack_30;
  uRam0000000113811918 = uStack_18;
  uRam0000000113811910 = uStack_20;
  return;
}



/* Entry: 103d79ea4; end: 103d79f77;  */

/* WARNING: Removing unreachable block (ram,0x000103d79f74) */

void FUN_103d79ea4(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000103d80ed8();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x18))(unaff_x20 + 8,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d79f78; end: 103d7a043;  */

void FUN_103d79f78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_3 + 0x10) != 0) {
    pcVar2 = *(code **)(param_7 + 0x118);
    uVar1 = param_2;
    func_0x000103d80ed8();
    (*pcVar2)(param_3,1,&UNK_11070b7d8,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((int)param_1 == 0) || ((**(code **)(param_7 + 8))(param_1,2,param_6,param_7), unaff_x21 == 0)
     ) {
    func_0x000100076224(param_2,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 103d7a044; end: 103d7a08b;  */

void FUN_103d7a044(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 103d7a08c; end: 103d7a0bb;  */

undefined1  [16] FUN_103d7a08c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103d7a0bc; end: 103d7a0ef;  */

void FUN_103d7a0bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103d7a0f0; end: 103d7a103;  */

undefined1  [16] FUN_103d7a0f0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103d7a100;
  return auVar1;
}



/* Entry: 103d7a104; end: 103d7a13f;  */

void FUN_103d7a104(void)

{
  FUN_103d79ea4();
  return;
}



/* Entry: 103d7a140; end: 103d7a143;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d7a140(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d7a144; end: 103d7a17b;  */

uint FUN_103d7a144(long param_1,long param_2)

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
  func_0x000103d89adc();
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



/* Entry: 103d7a17c; end: 103d7a1ff;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d7a17c(undefined8 *param_1)

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
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  
  fVar43 = *(float *)(param_1 + 1);
  lVar23 = param_1[2];
  uVar16 = param_1[3];
  uVar12 = *unaff_x20;
  fVar44 = *(float *)(unaff_x20 + 1);
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  FUN_103d7b35c(uVar12,*param_1);
  if (((uVar12 & 1) == 0) || (fVar44 != fVar43)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar12 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar12 = 0, lVar23 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar12 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar12 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar12 == (long)(iVar19 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar12 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar12 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar12 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar12 < 1) goto code_r0x000100e26128;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
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
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
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
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar23,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar12 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar24;
        if ((pbVar9 == pbVar15) && (pbVar24 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar23);
          func_0x000107c61174();
          pbVar9 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar23);
          pbVar22 = pbVar9;
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar24, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar24 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar24 == (byte *)0x0) {
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
        pbVar14 = pbVar24;
        if ((pbVar9 != pbVar15) || (pbVar24 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar26 = pbVar13[8] | (byte)lVar23;
        bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar13[0x10] | (byte)lVar25;
        bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar26 = pbVar13[8] | (byte)lVar23;
      bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar13[0x10] | (byte)lVar25;
      bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103d7a200; end: 103d7a29f;  */

/* WARNING: Possible PIC construction at 0x000103d7a24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d7a25c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d7a250) */
/* WARNING: Removing unreachable block (ram,0x000103d7a260) */

void FUN_103d7a200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113007b18 != -1) {
    func_0x000107c61568(0x113007b18,FUN_103d79e5c);
  }
  uVar5 = uRam0000000113811918;
  uVar4 = uRam0000000113811910;
  uVar3 = uRam0000000113811908;
  uVar2 = uRam0000000113811900;
  uVar1 = uRam00000001138118f8;
  *param_1 = uRam00000001138118f0;
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



/* Entry: 103d7a2a0; end: 103d7a2db;  */

void FUN_103d7a2a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113008310;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113008310,&UNK_10dc8cfc0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d7a2dc; end: 103d7a3ef;  */

void FUN_103d7a2dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = *(undefined4 *)(unaff_x20 + 1);
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d7a3f0; end: 103d7a46f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d7a3f0(ulong *param_1,undefined8 *param_2)

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
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  
  uVar18 = *param_1;
  fVar43 = *(float *)(param_1 + 1);
  pbVar9 = (byte *)param_1[2];
  pbVar24 = (byte *)param_1[3];
  fVar44 = *(float *)(param_2 + 1);
  lVar23 = param_2[2];
  uVar15 = param_2[3];
  FUN_103d7b35c(uVar18,*param_2);
  if (((uVar18 & 1) == 0) || (fVar43 != fVar44)) {
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
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar18 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar18 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar19 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar24 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
      }
    }
code_r0x000100e262b0:
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
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar23);
          func_0x000107c61174();
          pbVar9 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar23);
          pbVar22 = pbVar9;
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
      )(pbVar11,pbVar13,pbVar14,pbVar16,0);
      return pbVar11;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
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



/* Entry: 103d7a470; end: 103d7a49f;  */

void FUN_103d7a470(void)

{
  func_0x000107c5fb78(0x476c61696461522e,0xef746e6569646172);
  uRam0000000113811920 = 0xd000000000000019;
  uRam0000000113811928 = 0x800000010f1b6d50;
  return;
}



/* Entry: 103d7a4a0; end: 103d7a507;  */

void FUN_103d7a4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd000000000000019;
  *param_5 = 0x800000010f1b6d50;
  return;
}



/* Entry: 103d7a508; end: 103d7a54f;  */

void FUN_103d7a508(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc8d069,8,2);
  uRam0000000113811938 = uStack_38;
  uRam0000000113811930 = uStack_40;
  uRam0000000113811948 = uStack_28;
  uRam0000000113811940 = uStack_30;
  uRam0000000113811958 = uStack_18;
  uRam0000000113811950 = uStack_20;
  return;
}



/* Entry: 103d7a550; end: 103d7a603;  */

/* WARNING: Removing unreachable block (ram,0x000103d7a600) */

void FUN_103d7a550(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000103d80ed8();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d7a604; end: 103d7a69f;  */

void FUN_103d7a604(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x000103d80ed8();
    (*pcVar2)(param_2,1,&UNK_11070b7d8,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103d7a6a0; end: 103d7a6db;  */

void FUN_103d7a6a0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 103d7a6dc; end: 103d7a737;  */

undefined1  [16]
FUN_103d7a6dc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    func_0x000107c61568(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  func_0x000107c61434(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 103d7a738; end: 103d7a753;  */

undefined8 FUN_103d7a738(void)

{
  return 1;
}



/* Entry: 103d7a754; end: 103d7a78b;  */

void FUN_103d7a754(void)

{
  FUN_103d7a550();
  return;
}



/* Entry: 103d7a78c; end: 103d7a7c3;  */

uint FUN_103d7a78c(long param_1,long param_2)

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
  func_0x000103d89a9c();
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



/* Entry: 103d7a7c4; end: 103d7a8cb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d7a7c4(undefined8 *param_1)

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
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar23;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar22 = param_1[1];
  uVar25 = param_1[2];
  uVar18 = *unaff_x20;
  pbVar9 = (byte *)unaff_x20[1];
  pbVar23 = (byte *)unaff_x20[2];
  FUN_103d7b35c(uVar18,*param_1);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar25 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar25 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar25 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar17 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar25 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar16 < 2) {
          if (uVar16 == 0) {
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
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
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
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar12);
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
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar25);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar25;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar15 = *(byte **)(pbVar12 + 0x10);
        lVar22 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar22 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
      )(pbVar11,pbVar13,pbVar14,pbVar15,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) &&
           (pbVar11 = pbVar23, pbVar13 = pbVar21, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar23 == *(byte **)(pbVar12 + 0x10) && pbVar21 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar15 = *(byte **)(pbVar12 + 0x10);
      lVar22 = *(long *)(pbVar12 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar12 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar24;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar12 + 0x20);
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar24;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar12 + 8);
    uVar25 = *(ulong *)(pbVar12 + 0x10);
    lVar24 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103d7a8cc; end: 103d7a8df;  */

void FUN_103d7a8cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113008300;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113008300,&UNK_10dc8cfb8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d7a8e0; end: 103d7aa47;  */

void FUN_103d7a8e0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d7aa48; end: 103d7aa8f;  */

void FUN_103d7aa48(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc8d060,8,2);
  uRam0000000113811968 = uStack_38;
  uRam0000000113811960 = uStack_40;
  uRam0000000113811978 = uStack_28;
  uRam0000000113811970 = uStack_30;
  uRam0000000113811988 = uStack_18;
  uRam0000000113811980 = uStack_20;
  return;
}



/* Entry: 103d7aa90; end: 103d7ab13;  */

void FUN_103d7aa90(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x18))();
    }
  }
  return;
}



/* Entry: 103d7ab14; end: 103d7ab87;  */

void FUN_103d7ab14(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((param_1 == 0) || ((**(code **)(param_6 + 8))(1,param_5,param_6), unaff_x21 == 0)) {
    func_0x000100076224(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 103d7ab88; end: 103d7abd3;  */

void FUN_103d7ab88(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 103d7abd4; end: 103d7ac0b;  */

void FUN_103d7abd4(void)

{
  FUN_103d7aa90();
  return;
}



/* Entry: 103d7ac0c; end: 103d7ac43;  */

uint FUN_103d7ac0c(long param_1,long param_2)

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
  FUN_103d89a5c();
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



/* Entry: 103d7ac44; end: 103d7ac6b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d7ac44(float *param_1)

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
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  float *unaff_x20;
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
  
  if (*unaff_x20 != *param_1) {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(unaff_x20 + 2);
  pbVar25 = *(byte **)(unaff_x20 + 4);
  lVar24 = *(long *)(param_1 + 2);
  uVar16 = *(ulong *)(param_1 + 4);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(float **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
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
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
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
        unaff_x20 = (float *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
    *(float **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
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
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
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
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(float **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103d7ac6c; end: 103d7ad0b;  */

/* WARNING: Possible PIC construction at 0x000103d7acb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d7acc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d7acbc) */
/* WARNING: Removing unreachable block (ram,0x000103d7accc) */

void FUN_103d7ac6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113007b48 != -1) {
    func_0x000107c61568(0x113007b48,FUN_103d7aa48);
  }
  uVar5 = uRam0000000113811988;
  uVar4 = uRam0000000113811980;
  uVar3 = uRam0000000113811978;
  uVar2 = uRam0000000113811970;
  uVar1 = uRam0000000113811968;
  *param_1 = uRam0000000113811960;
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



/* Entry: 103d7ad0c; end: 103d7ad1f;  */

void FUN_103d7ad0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130082f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130082f0,&UNK_10dc8cfb0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d7ad20; end: 103d7ad53;  */

void FUN_103d7ad20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d7ad54; end: 103d7ae57;  */

void FUN_103d7ad54(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = *(undefined8 *)(unaff_x20 + 4);
  uStack_40 = *(undefined8 *)(unaff_x20 + 2);
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d7ae58; end: 103d7ae7b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d7ae58(float *param_1,float *param_2)

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
  
  if (*param_1 != *param_2) {
    return (byte *)0x0;
  }
  lVar24 = *(long *)(param_2 + 2);
  uVar16 = *(ulong *)(param_2 + 4);
  pbVar10 = *(byte **)(param_1 + 2);
  pbVar25 = *(byte **)(param_1 + 4);
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
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
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
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
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
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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



/* Entry: 103d7ae7c; end: 103d7b35b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_103d7ae7c(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  byte abStack_248 [24];
  byte abStack_230 [80];
  undefined8 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  long lStack_138;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = *(long *)(param_1 + 0x10);
  if (lVar32 == *(long *)(param_2 + 0x10)) {
    if ((lVar32 != 0) && (param_1 != param_2)) {
      puVar31 = (ulong *)(param_2 + 0x30);
      puVar30 = (ulong *)(param_1 + 0x30);
      do {
        uVar7 = puVar30[-2];
        param_2 = puVar30[-1];
        uVar24 = *puVar30;
        uVar23 = puVar31[-2];
        uVar36 = puVar31[-1];
        uVar28 = *puVar31;
        func_0x00010006c00c(uVar7,param_2);
        func_0x000107c6157c(uVar24);
        func_0x00010006c00c(uVar23,uVar36);
        uVar8 = uVar28;
        func_0x000107c6157c();
        if (uVar24 != uVar28) {
          func_0x000107c6157c(uVar24);
          func_0x000107c6157c(uVar28);
          uVar20 = uVar24;
          FUN_103d75b98(uVar24,uVar28);
          func_0x000107c61574(uVar28);
          uVar8 = uVar24;
          func_0x000107c61574();
          if ((uVar20 & 1) != 0) goto LAB_103d7af8c;
LAB_103d7b2d4:
          func_0x00010006c090(uVar23,uVar36);
          func_0x000107c61574(uVar28);
          func_0x00010006c090(uVar7);
          func_0x000107c61574(uVar24);
          goto LAB_103d7b2fc;
        }
LAB_103d7af8c:
        uVar1 = (uint)(param_2 >> 0x20);
        uVar18 = uVar1 >> 0x1e;
        uVar2 = (uint)(uVar36 >> 0x20);
        uVar21 = uVar2 >> 0x1e;
        iVar27 = (int)uVar7;
        if (param_2 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((uVar7 != 0) || (param_2 != 0xc000000000000000)) || (uVar36 >> 0x3e < 3)) ||
             ((uVar20 = 0, uVar23 != 0 || (uVar36 != 0xc000000000000000))))
          goto joined_r0x000103d7b004;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(uVar28);
          uVar7 = 0;
          param_2 = 0xc000000000000000;
LAB_103d7aef8:
          func_0x00010006c090(uVar7);
          func_0x000107c61574(uVar24);
        }
        else {
          if (1 < uVar1 >> 0x1e) {
            if (uVar18 == 2) {
              uVar20 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
              if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7b348);
                (*pcVar6)();
              }
              goto joined_r0x000103d7b004;
            }
            uVar20 = 0;
            if (uVar21 < 2) goto LAB_103d7b040;
LAB_103d7b008:
            if (uVar21 == 2) {
              uVar22 = *(long *)(uVar23 + 0x18) - *(long *)(uVar23 + 0x10);
              if (SBORROW8(*(long *)(uVar23 + 0x18),*(long *)(uVar23 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7b33c);
                (*pcVar6)();
              }
              goto LAB_103d7b060;
            }
            if (uVar20 != 0) goto LAB_103d7b2d4;
LAB_103d7aedc:
            func_0x00010006c090(uVar23,uVar36);
            func_0x000107c61574(uVar28);
            goto LAB_103d7aef8;
          }
          if (uVar18 == 0) {
            uVar20 = param_2 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)(uVar7 >> 0x20);
            if (SBORROW4(iVar19,iVar27)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7b344);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar27);
          }
joined_r0x000103d7b004:
          if (1 < uVar2 >> 0x1e) goto LAB_103d7b008;
LAB_103d7b040:
          if (uVar21 == 0) {
            uVar22 = uVar36 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)(uVar23 >> 0x20);
            if (SBORROW4(iVar19,(int)uVar23)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7b340);
              (*pcVar6)();
            }
            uVar22 = (ulong)(iVar19 - (int)uVar23);
          }
LAB_103d7b060:
          if (uVar20 != uVar22) goto LAB_103d7b2d4;
          if ((long)uVar20 < 1) goto LAB_103d7aedc;
          if (uVar18 < 2) {
            if (uVar18 == 0) {
              abStack_80[0] = (byte)uVar7;
              abStack_80[1] = (byte)(uVar7 >> 8);
              abStack_80[2] = (byte)(uVar7 >> 0x10);
              abStack_80[3] = (byte)(uVar7 >> 0x18);
              abStack_80[4] = (byte)(uVar7 >> 0x20);
              abStack_80[5] = (byte)(uVar7 >> 0x28);
              abStack_80[6] = (byte)(uVar7 >> 0x30);
              abStack_80[7] = (byte)(uVar7 >> 0x38);
              abStack_80[8] = (byte)param_2;
              abStack_80[9] = (byte)(param_2 >> 8);
              abStack_80[10] = (byte)(param_2 >> 0x10);
              abStack_80[0xb] = (byte)(param_2 >> 0x18);
              abStack_80[0xc] = (byte)(param_2 >> 0x20);
              abStack_80[0xd] = (byte)(param_2 >> 0x28);
              pbVar15 = abStack_80 + (param_2 >> 0x30 & 0xff);
              goto LAB_103d7b1e8;
            }
            lVar11 = (long)iVar27;
            uVar20 = ((long)uVar7 >> 0x20) - lVar11;
            if ((long)uVar7 >> 0x20 < lVar11) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7b34c);
              (*pcVar6)();
            }
            func_0x000107c5ec30();
            if (uVar8 == 0) {
              func_0x000107c5ec38();
              lVar17 = 0;
              lVar11 = 0;
            }
            else {
              uVar22 = uVar8;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar11,uVar22)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7b358);
                (*pcVar6)();
              }
              lVar38 = (lVar11 - uVar22) + uVar8;
              func_0x000107c5ec38();
              if ((long)uVar20 <= (long)uVar22) {
                uVar22 = uVar20;
              }
              lVar17 = 0;
              if (lVar38 != 0) {
                lVar17 = lVar38;
              }
              lVar11 = 0;
              if (lVar38 != 0) {
                lVar11 = uVar22 + lVar38;
              }
            }
LAB_103d7b288:
            func_0x000100e25bdc(abStack_80,lVar17,lVar11,uVar23,uVar36);
            func_0x00010006c090(uVar23,uVar36);
            func_0x000107c61574(uVar28);
            func_0x00010006c090(uVar7);
            func_0x000107c61574(uVar24);
            bVar3 = abStack_80[0];
          }
          else {
            if (uVar18 == 2) {
              lVar11 = *(long *)(uVar7 + 0x10);
              lVar38 = *(long *)(uVar7 + 0x18);
              func_0x000107c5ec30();
              if (uVar8 == 0) {
                lVar17 = 0;
              }
              else {
                uVar20 = uVar8;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar11,uVar20)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7b354);
                  (*pcVar6)();
                }
                lVar17 = (lVar11 - uVar20) + uVar8;
                uVar8 = uVar20;
              }
              uVar20 = lVar38 - lVar11;
              if (SBORROW8(lVar38,lVar11)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7b350);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              if (lVar17 == 0) {
                lVar11 = 0;
              }
              else {
                if ((long)uVar20 <= (long)uVar8) {
                  uVar8 = uVar20;
                }
                lVar11 = uVar8 + lVar17;
              }
              goto LAB_103d7b288;
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
            pbVar15 = abStack_80;
LAB_103d7b1e8:
            func_0x000100e25bdc(&bStack_81,abStack_80,pbVar15,uVar23,uVar36);
            func_0x00010006c090(uVar23,uVar36);
            func_0x000107c61574(uVar28);
            func_0x00010006c090(uVar7);
            func_0x000107c61574(uVar24);
            bVar3 = bStack_81;
          }
          if ((bVar3 & 1) == 0) goto LAB_103d7b2fc;
        }
        puVar31 = puVar31 + 3;
        puVar30 = puVar30 + 3;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
    uVar8 = 1;
  }
  else {
LAB_103d7b2fc:
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = *(long *)(uVar8 + 0x10);
  if (lVar32 == *(long *)(param_2 + 0x10)) {
    if ((lVar32 != 0) && (uVar8 != param_2)) {
      puVar29 = (undefined8 *)(uVar8 + 0x20);
      puVar33 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar32 = lVar32 + -1;
        lVar35 = puVar29[5];
        uVar12 = puVar29[4];
        lVar37 = puVar29[7];
        uVar36 = puVar29[6];
        lStack_1d8 = puVar29[1];
        uStack_1e0 = *puVar29;
        lVar11 = puVar29[3];
        uStack_1d0 = puVar29[2];
        lVar26 = puVar33[5];
        uVar34 = puVar33[4];
        lVar38 = puVar33[7];
        uVar7 = puVar33[6];
        lStack_188 = puVar33[1];
        uStack_190 = *puVar33;
        lVar39 = puVar33[3];
        uStack_180 = puVar33[2];
        uVar8 = puVar33[9];
        lVar17 = puVar33[8];
        uVar23 = puVar29[9];
        lVar16 = puVar29[8];
        lStack_1c8 = lVar11;
        uStack_1c0 = uVar12;
        lStack_1b8 = lVar35;
        uStack_1b0 = uVar36;
        lStack_1a8 = lVar37;
        lStack_1a0 = lVar16;
        uStack_198 = uVar23;
        lStack_178 = lVar39;
        uStack_170 = uVar34;
        lStack_168 = lVar26;
        uStack_160 = uVar7;
        lStack_158 = lVar38;
        lStack_150 = lVar17;
        uStack_148 = uVar8;
        if (uVar36 >> 0x3c < 0xf) {
          if (0xe < uVar7 >> 0x3c) goto LAB_103d7c3e4;
          if (((float)lVar11 == (float)lVar39) &&
             ((float)((ulong)lVar11 >> 0x20) == (float)((ulong)lVar39 >> 0x20))) {
            if ((float)uVar12 == (float)uVar34) {
              if (uVar23 >> 0x3c < 0xf) {
                if (0xe < uVar8 >> 0x3c) goto LAB_103d7c59c;
                if ((float)lVar37 != (float)lVar38) {
                  func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                  func_0x000103d8a0c4(&uStack_190,abStack_230);
                  FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                  FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                  FUN_103d7f9ac(lVar37,lVar16,uVar23);
                  FUN_103d7f9ac(lVar38,lVar17,uVar8);
                  FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                  FUN_103d7fa1c(lVar38,lVar17,uVar8);
                  lVar38 = lVar37;
                  lVar17 = lVar16;
                  uVar8 = uVar23;
                  goto LAB_103d7c8ec;
                }
                uVar1 = (uint)(uVar23 >> 0x20);
                uVar18 = uVar1 >> 0x1e;
                uVar2 = (uint)(uVar8 >> 0x20);
                uVar21 = uVar2 >> 0x1e;
                iVar27 = (int)lVar16;
                if (uVar23 >> 0x3e == 3) {
                  uVar24 = 0;
                  if ((((lVar16 != 0) || (uVar23 != 0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
                     ((uVar24 = 0, lVar17 != 0 || (uVar8 != 0xc000000000000000))))
                  goto joined_r0x000103d7b6e0;
                  func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                  func_0x000103d8a0c4(&uStack_190,abStack_230);
                  FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,0,0xc000000000000000);
                  FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,0,0xc000000000000000);
                  FUN_103d7f9ac(lVar37,0,0xc000000000000000);
                  FUN_103d7f9ac(lVar38,0,0xc000000000000000);
                  lVar13 = 0;
                  uVar24 = 0xc000000000000000;
LAB_103d7b968:
                  FUN_103d7fa1c(lVar38,lVar13,uVar24);
                  goto LAB_103d7bc8c;
                }
                if (uVar1 >> 0x1e < 2) {
                  if (uVar18 == 0) {
                    uVar24 = uVar23 >> 0x30 & 0xff;
                  }
                  else {
                    iVar19 = (int)((ulong)lVar16 >> 0x20);
                    if (SBORROW4(iVar19,iVar27)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9a4);
                      (*pcVar6)();
                    }
                    uVar24 = (ulong)(iVar19 - iVar27);
                  }
joined_r0x000103d7b6e0:
                  if (uVar2 >> 0x1e < 2) goto LAB_103d7b740;
LAB_103d7b6e4:
                  if (uVar21 == 2) {
                    uVar28 = *(long *)(lVar17 + 0x18) - *(long *)(lVar17 + 0x10);
                    if (SBORROW8(*(long *)(lVar17 + 0x18),*(long *)(lVar17 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c990);
                      (*pcVar6)();
                    }
                    goto LAB_103d7b764;
                  }
                  if (uVar24 == 0) goto LAB_103d7b8b0;
                  func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                  func_0x000103d8a0c4(&uStack_190,abStack_230);
                  FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                  FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                  FUN_103d7f9ac(lVar37,lVar16,uVar23);
                  FUN_103d7f9ac(lVar38,lVar17,uVar8);
                  FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                }
                else {
                  if (uVar18 == 2) {
                    uVar24 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
                    if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9a0);
                      (*pcVar6)();
                    }
                    goto joined_r0x000103d7b6e0;
                  }
                  uVar24 = 0;
                  if (1 < uVar21) goto LAB_103d7b6e4;
LAB_103d7b740:
                  if (uVar21 == 0) {
                    uVar28 = uVar8 >> 0x30 & 0xff;
                  }
                  else {
                    iVar19 = (int)((ulong)lVar17 >> 0x20);
                    if (SBORROW4(iVar19,(int)lVar17)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c994);
                      (*pcVar6)();
                    }
                    uVar28 = (ulong)(iVar19 - (int)lVar17);
                  }
LAB_103d7b764:
                  if (uVar24 == uVar28) {
                    if ((long)uVar24 < 1) {
LAB_103d7b8b0:
                      func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                      func_0x000103d8a0c4(&uStack_190,abStack_230);
                      FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                      FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                      FUN_103d7f9ac(lVar37,lVar16,uVar23);
                      FUN_103d7f9ac(lVar38,lVar17,uVar8);
                      lVar13 = lVar17;
                      uVar24 = uVar8;
                      goto LAB_103d7b968;
                    }
                    if (uVar18 < 2) {
                      if (uVar18 == 0) {
                        abStack_248[0] = (byte)lVar16;
                        abStack_248[1] = (byte)((ulong)lVar16 >> 8);
                        abStack_248[2] = (byte)((ulong)lVar16 >> 0x10);
                        abStack_248[3] = (byte)((ulong)lVar16 >> 0x18);
                        abStack_248[4] = (byte)((ulong)lVar16 >> 0x20);
                        abStack_248[5] = (byte)((ulong)lVar16 >> 0x28);
                        abStack_248[6] = (byte)((ulong)lVar16 >> 0x30);
                        abStack_248[7] = (byte)((ulong)lVar16 >> 0x38);
                        abStack_248[8] = (byte)uVar23;
                        abStack_248[9] = (byte)(uVar23 >> 8);
                        abStack_248[10] = (byte)(uVar23 >> 0x10);
                        abStack_248[0xb] = (byte)(uVar23 >> 0x18);
                        abStack_248[0xc] = (byte)(uVar23 >> 0x20);
                        abStack_248[0xd] = (byte)(uVar23 >> 0x28);
                        func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                        func_0x000103d8a0c4(&uStack_190,abStack_230);
                        FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                        FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                        FUN_103d7f9ac(lVar37,lVar16,uVar23);
                        FUN_103d7f9ac(lVar38,lVar17,uVar8);
                        func_0x000100e25bdc(abStack_230,abStack_248,
                                            abStack_248 + (uVar23 >> 0x30 & 0xff),lVar17,uVar8);
                      }
                      else {
                        lVar10 = (long)iVar27;
                        lVar25 = (lVar16 >> 0x20) - lVar10;
                        if (lVar16 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9b0);
                          (*pcVar6)();
                        }
                        func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                        func_0x000103d8a0c4(&uStack_190,abStack_230);
                        FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                        FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                        FUN_103d7f9ac(lVar37,lVar16,uVar23);
                        lVar14 = lVar38;
                        FUN_103d7f9ac(lVar38,lVar17,uVar8);
                        func_0x000107c5ec30();
                        if (lVar14 == 0) {
                          func_0x000107c5ec38(uVar23);
                          lVar14 = 0;
                        }
                        else {
                          lVar13 = lVar14;
                          func_0x000107c5ec3c(uVar23);
                          if (SBORROW8(lVar10,lVar13)) {
                    /* WARNING: Does not return */
                            pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9bc);
                            (*pcVar6)();
                          }
                          lVar14 = (lVar10 - lVar13) + lVar14;
                          func_0x000107c5ec38(uVar23);
                          if (lVar14 != 0) {
                            if (lVar25 <= lVar13) {
                              lVar13 = lVar25;
                            }
                            lVar13 = lVar13 + lVar14;
                            goto LAB_103d7bc54;
                          }
                        }
                        lVar13 = 0;
LAB_103d7bc54:
                        func_0x000100e25bdc(abStack_230,lVar14,lVar13,lVar17,uVar8);
                      }
                    }
                    else {
                      if (uVar18 == 2) {
                        lVar25 = *(long *)(lVar16 + 0x10);
                        lVar10 = *(long *)(lVar16 + 0x18);
                        func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                        func_0x000103d8a0c4(&uStack_190,abStack_230);
                        FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                        FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                        FUN_103d7f9ac(lVar37,lVar16,uVar23);
                        lVar13 = lVar38;
                        FUN_103d7f9ac(lVar38,lVar17,uVar8);
                        func_0x000107c5ec30();
                        if (lVar13 == 0) {
                          lVar14 = 0;
                        }
                        else {
                          lVar9 = lVar13;
                          func_0x000107c5ec3c(uVar23);
                          if (SBORROW8(lVar25,lVar9)) {
                    /* WARNING: Does not return */
                            pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9b8);
                            (*pcVar6)();
                          }
                          lVar14 = (lVar25 - lVar9) + lVar13;
                          lVar13 = lVar9;
                        }
                        lVar9 = lVar10 - lVar25;
                        if (SBORROW8(lVar10,lVar25)) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9b4);
                          (*pcVar6)();
                        }
                        func_0x000107c5ec38(uVar23);
                        if (lVar14 == 0) {
                          lVar13 = 0;
                        }
                        else {
                          if (lVar9 <= lVar13) {
                            lVar13 = lVar9;
                          }
                          lVar13 = lVar13 + lVar14;
                        }
                        goto LAB_103d7bc54;
                      }
                      abStack_248[8] = 0;
                      abStack_248[9] = 0;
                      abStack_248[10] = 0;
                      abStack_248[0xb] = 0;
                      abStack_248[0xc] = 0;
                      abStack_248[0xd] = 0;
                      abStack_248[0] = 0;
                      abStack_248[1] = 0;
                      abStack_248[2] = 0;
                      abStack_248[3] = 0;
                      abStack_248[4] = 0;
                      abStack_248[5] = 0;
                      abStack_248[6] = 0;
                      abStack_248[7] = 0;
                      func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                      func_0x000103d8a0c4(&uStack_190,abStack_230);
                      FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                      FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                      FUN_103d7f9ac(lVar37,lVar16,uVar23);
                      FUN_103d7f9ac(lVar38,lVar17,uVar8);
                      func_0x000100e25bdc(abStack_230,abStack_248,abStack_248,lVar17,uVar8);
                    }
                    FUN_103d7fa1c(lVar38,lVar17,uVar8);
                    if ((abStack_230[0] & 1) != 0) goto LAB_103d7bc8c;
                    FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                    lVar38 = lVar37;
                    lVar17 = lVar16;
                    uVar8 = uVar23;
                    goto LAB_103d7c8ec;
                  }
                  func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                  func_0x000103d8a0c4(&uStack_190,abStack_230);
                  FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                  FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                  FUN_103d7f9ac(lVar37,lVar16,uVar23);
                  FUN_103d7f9ac(lVar38,lVar17,uVar8);
                  FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                }
                FUN_103d7fa1c(lVar38,lVar17,uVar8);
                lVar38 = lVar37;
                lVar17 = lVar16;
                uVar8 = uVar23;
              }
              else {
                if (0xe < uVar8 >> 0x3c) {
                  func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                  func_0x000103d8a0c4(&uStack_190,abStack_230);
                  FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                  FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                  FUN_103d7f9ac(lVar37,lVar16,uVar23);
                  FUN_103d7f9ac(lVar38,lVar17,uVar8);
LAB_103d7bc8c:
                  FUN_103d7fa1c(lVar37,lVar16,uVar23);
                  uVar1 = (uint)(uVar36 >> 0x20);
                  uVar18 = uVar1 >> 0x1e;
                  uVar2 = (uint)(uVar7 >> 0x20);
                  uVar21 = uVar2 >> 0x1e;
                  iVar27 = (int)lVar35;
                  if (uVar36 >> 0x3e == 3) {
                    uVar24 = 0;
                    if (((lVar35 != 0) || (uVar36 != 0xc000000000000000)) ||
                       ((uVar7 >> 0x3e < 3 ||
                        ((uVar24 = 0, lVar26 != 0 || (uVar7 != 0xc000000000000000))))))
                    goto joined_r0x000103d7bd44;
                    lVar26 = 0;
                    uVar7 = 0xc000000000000000;
LAB_103d7be54:
                    FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                    goto LAB_103d7c088;
                  }
                  if (uVar1 >> 0x1e < 2) {
                    if (uVar18 == 0) {
                      uVar24 = uVar36 >> 0x30 & 0xff;
                    }
                    else {
                      iVar19 = (int)((ulong)lVar35 >> 0x20);
                      if (SBORROW4(iVar19,iVar27)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c98c);
                        (*pcVar6)();
                      }
                      uVar24 = (ulong)(iVar19 - iVar27);
                    }
                    if (1 < uVar2 >> 0x1e) goto LAB_103d7bd10;
LAB_103d7bd48:
                    if (uVar21 == 0) {
                      uVar28 = uVar7 >> 0x30 & 0xff;
                    }
                    else {
                      iVar19 = (int)((ulong)lVar26 >> 0x20);
                      if (SBORROW4(iVar19,(int)lVar26)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c970);
                        (*pcVar6)();
                      }
                      uVar28 = (ulong)(iVar19 - (int)lVar26);
                    }
                  }
                  else {
                    if (uVar18 == 2) {
                      uVar24 = *(long *)(lVar35 + 0x18) - *(long *)(lVar35 + 0x10);
                      if (SBORROW8(*(long *)(lVar35 + 0x18),*(long *)(lVar35 + 0x10))) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c988);
                        (*pcVar6)();
                      }
                    }
                    else {
                      uVar24 = 0;
                    }
joined_r0x000103d7bd44:
                    if (uVar21 < 2) goto LAB_103d7bd48;
LAB_103d7bd10:
                    if (uVar21 != 2) {
                      if (uVar24 != 0) goto LAB_103d7c67c;
                      goto LAB_103d7be54;
                    }
                    uVar28 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
                    if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c974);
                      (*pcVar6)();
                    }
                  }
                  if (uVar24 != uVar28) goto LAB_103d7c67c;
                  if ((long)uVar24 < 1) goto LAB_103d7be54;
                  if (uVar18 < 2) {
                    if (uVar18 == 0) {
                      abStack_230[0] = (byte)lVar35;
                      abStack_230[1] = (byte)((ulong)lVar35 >> 8);
                      abStack_230[2] = (byte)((ulong)lVar35 >> 0x10);
                      abStack_230[3] = (byte)((ulong)lVar35 >> 0x18);
                      abStack_230[4] = (byte)((ulong)lVar35 >> 0x20);
                      abStack_230[5] = (byte)((ulong)lVar35 >> 0x28);
                      abStack_230[6] = (byte)((ulong)lVar35 >> 0x30);
                      abStack_230[7] = (byte)((ulong)lVar35 >> 0x38);
                      abStack_230[8] = (byte)uVar36;
                      abStack_230[9] = (byte)(uVar36 >> 8);
                      abStack_230[10] = (byte)(uVar36 >> 0x10);
                      abStack_230[0xb] = (byte)(uVar36 >> 0x18);
                      abStack_230[0xc] = (byte)(uVar36 >> 0x20);
                      abStack_230[0xd] = (byte)(uVar36 >> 0x28);
                      func_0x000100e25bdc(abStack_248,abStack_230,
                                          abStack_230 + (uVar36 >> 0x30 & 0xff),lVar26,uVar7);
LAB_103d7bf9c:
                      FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                      bVar3 = abStack_248[0];
                    }
                    else {
                      lVar25 = (long)iVar27;
                      lVar13 = (lVar35 >> 0x20) - lVar25;
                      if (lVar35 >> 0x20 < lVar25) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c998);
                        (*pcVar6)();
                      }
                      lVar10 = lVar39;
                      func_0x000107c5ec30();
                      if (lVar10 == 0) {
                        func_0x000107c5ec38();
                        lVar10 = 0;
LAB_103d7bfd4:
                        lVar14 = 0;
                      }
                      else {
                        lVar14 = lVar10;
                        func_0x000107c5ec3c();
                        if (SBORROW8(lVar25,lVar14)) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9ac);
                          (*pcVar6)();
                        }
                        lVar10 = (lVar25 - lVar14) + lVar10;
                        func_0x000107c5ec38();
                        if (lVar10 == 0) goto LAB_103d7bfd4;
                        if (lVar13 <= lVar14) {
                          lVar14 = lVar13;
                        }
                        lVar14 = lVar14 + lVar10;
                      }
                      func_0x000100e25bdc(abStack_230,lVar10,lVar14,lVar26,uVar7);
                      FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                      bVar3 = abStack_230[0];
                    }
                  }
                  else {
                    if (uVar18 != 2) {
                      abStack_230[8] = 0;
                      abStack_230[9] = 0;
                      abStack_230[10] = 0;
                      abStack_230[0xb] = 0;
                      abStack_230[0xc] = 0;
                      abStack_230[0xd] = 0;
                      abStack_230[0] = 0;
                      abStack_230[1] = 0;
                      abStack_230[2] = 0;
                      abStack_230[3] = 0;
                      abStack_230[4] = 0;
                      abStack_230[5] = 0;
                      abStack_230[6] = 0;
                      abStack_230[7] = 0;
                      func_0x000100e25bdc(abStack_248,abStack_230,abStack_230,lVar26,uVar7);
                      goto LAB_103d7bf9c;
                    }
                    lVar10 = *(long *)(lVar35 + 0x10);
                    lVar14 = *(long *)(lVar35 + 0x18);
                    lVar13 = lVar39;
                    func_0x000107c5ec30();
                    lVar25 = lVar13;
                    if (lVar13 != 0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar10,lVar25)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9a8);
                        (*pcVar6)();
                      }
                      lVar13 = (lVar10 - lVar25) + lVar13;
                    }
                    lVar9 = lVar14 - lVar10;
                    if (SBORROW8(lVar14,lVar10)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c99c);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    if (lVar13 == 0) {
                      lVar25 = 0;
                    }
                    else {
                      if (lVar9 <= lVar25) {
                        lVar25 = lVar9;
                      }
                      lVar25 = lVar25 + lVar13;
                    }
                    func_0x000100e25bdc(abStack_230,lVar13,lVar25,lVar26,uVar7);
                    FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                    bVar3 = abStack_230[0];
                  }
                  if ((bVar3 & 1) != 0) goto LAB_103d7c088;
                  goto LAB_103d7c8f4;
                }
LAB_103d7c59c:
                func_0x000103d8a0c4(&uStack_1e0,abStack_230);
                func_0x000103d8a0c4(&uStack_190,abStack_230);
                FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
                FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                FUN_103d7f9ac(lVar37,lVar16,uVar23);
                FUN_103d7f9ac(lVar38,lVar17,uVar8);
                FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
                FUN_103d7fa1c(lVar37,lVar16,uVar23);
              }
LAB_103d7c8ec:
              FUN_103d7fa1c(lVar38,lVar17,uVar8);
            }
            else {
              func_0x000103d8a0c4(&uStack_1e0,abStack_230);
              func_0x000103d8a0c4(&uStack_190,abStack_230);
              FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
              FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
              FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
            }
          }
          else {
            func_0x000103d8a0c4(&uStack_1e0,abStack_230);
            func_0x000103d8a0c4(&uStack_190,abStack_230);
            FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
            FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
LAB_103d7c67c:
            FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
          }
LAB_103d7c8f4:
          FUN_103d7f9c8(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
LAB_103d7c90c:
          func_0x000103d8a0f8(&uStack_190);
          func_0x000103d8a0f8(&uStack_1e0);
          goto LAB_103d7c91c;
        }
        if (uVar7 >> 0x3c < 0xf) {
LAB_103d7c3e4:
          FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
          FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
          FUN_103d7f9c8(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
          FUN_103d7f9c8(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
          goto LAB_103d7c91c;
        }
        func_0x000103d8a0c4(&uStack_1e0,abStack_230);
        func_0x000103d8a0c4(&uStack_190,abStack_230);
        FUN_103d7f958(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
        FUN_103d7f958(lVar39,uVar34,lVar26,uVar7,lVar38,lVar17,uVar8);
LAB_103d7c088:
        fVar4 = (float)uStack_1e0;
        fVar5 = (float)uStack_190;
        FUN_103d7f9c8(lVar11,uVar12,lVar35,uVar36,lVar37,lVar16,uVar23);
        uVar8 = uStack_180;
        lVar38 = lStack_188;
        if (fVar4 != fVar5) goto LAB_103d7c90c;
        uVar1 = (uint)(uStack_1d0 >> 0x20);
        uVar18 = uVar1 >> 0x1e;
        uVar2 = (uint)(uStack_180 >> 0x20);
        uVar21 = uVar2 >> 0x1e;
        iVar27 = (int)lStack_1d8;
        if (uStack_1d0 >> 0x3e == 3) {
          uVar7 = 0;
          if ((((lStack_1d8 != 0) || (uStack_1d0 != 0xc000000000000000)) || (uStack_180 >> 0x3e < 3)
              ) || ((uVar7 = 0, lStack_188 != 0 || (uStack_180 != 0xc000000000000000))))
          goto joined_r0x000103d7c284;
LAB_103d7c200:
          func_0x000103d8a0f8(&uStack_190);
          func_0x000103d8a0f8(&uStack_1e0);
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar7 = uStack_1d0 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)lStack_1d8 >> 0x20);
              if (SBORROW4(iVar19,iVar27)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c96c);
                (*pcVar6)();
              }
              uVar7 = (ulong)(iVar19 - iVar27);
            }
joined_r0x000103d7c284:
            if (1 < uVar2 >> 0x1e) goto LAB_103d7c10c;
LAB_103d7c140:
            if (uVar21 == 0) {
              uVar23 = uStack_180 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)lStack_188 >> 0x20);
              if (SBORROW4(iVar19,(int)lStack_188)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c960);
                (*pcVar6)();
              }
              uVar23 = (ulong)(iVar19 - (int)lStack_188);
            }
          }
          else {
            if (uVar18 == 2) {
              uVar7 = *(long *)(lStack_1d8 + 0x18) - *(long *)(lStack_1d8 + 0x10);
              if (SBORROW8(*(long *)(lStack_1d8 + 0x18),*(long *)(lStack_1d8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c968);
                (*pcVar6)();
              }
              goto joined_r0x000103d7c284;
            }
            uVar7 = 0;
            if (uVar21 < 2) goto LAB_103d7c140;
LAB_103d7c10c:
            if (uVar21 != 2) {
              if (uVar7 != 0) goto LAB_103d7c90c;
              goto LAB_103d7c200;
            }
            uVar23 = *(long *)(lStack_188 + 0x18) - *(long *)(lStack_188 + 0x10);
            if (SBORROW8(*(long *)(lStack_188 + 0x18),*(long *)(lStack_188 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c964);
              (*pcVar6)();
            }
          }
          if (uVar7 != uVar23) goto LAB_103d7c90c;
          if ((long)uVar7 < 1) goto LAB_103d7c200;
          if (uVar18 < 2) {
            if (uVar18 == 0) {
              abStack_230[0] = (byte)lStack_1d8;
              abStack_230[1] = (byte)((ulong)lStack_1d8 >> 8);
              abStack_230[2] = (byte)((ulong)lStack_1d8 >> 0x10);
              abStack_230[3] = (byte)((ulong)lStack_1d8 >> 0x18);
              abStack_230[4] = (byte)((ulong)lStack_1d8 >> 0x20);
              abStack_230[5] = (byte)((ulong)lStack_1d8 >> 0x28);
              abStack_230[6] = (byte)((ulong)lStack_1d8 >> 0x30);
              abStack_230[7] = (byte)((ulong)lStack_1d8 >> 0x38);
              abStack_230[8] = (byte)uStack_1d0;
              abStack_230[9] = (byte)(uStack_1d0 >> 8);
              abStack_230[10] = (byte)(uStack_1d0 >> 0x10);
              abStack_230[0xb] = (byte)(uStack_1d0 >> 0x18);
              abStack_230[0xc] = (byte)(uStack_1d0 >> 0x20);
              abStack_230[0xd] = (byte)(uStack_1d0 >> 0x28);
              pbVar15 = abStack_230 + (uStack_1d0 >> 0x30 & 0xff);
              goto LAB_103d7c310;
            }
            lVar26 = (long)iVar27;
            lVar17 = (lStack_1d8 >> 0x20) - lVar26;
            if (lStack_1d8 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c978);
              (*pcVar6)();
            }
            func_0x000107c5ec30();
            if (lVar11 == 0) {
              func_0x000107c5ec38();
              lVar11 = 0;
LAB_103d7c35c:
              lVar16 = 0;
            }
            else {
              lVar16 = lVar11;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar26,lVar16)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c984);
                (*pcVar6)();
              }
              lVar11 = (lVar26 - lVar16) + lVar11;
              func_0x000107c5ec38();
              if (lVar11 == 0) goto LAB_103d7c35c;
              if (lVar17 <= lVar16) {
                lVar16 = lVar17;
              }
              lVar16 = lVar16 + lVar11;
            }
            func_0x000100e25bdc(abStack_230,lVar11,lVar16,lVar38,uVar8);
            func_0x000103d8a0f8(&uStack_190);
            func_0x000103d8a0f8(&uStack_1e0);
            bVar3 = abStack_230[0];
          }
          else {
            if (uVar18 == 2) {
              lVar26 = *(long *)(lStack_1d8 + 0x10);
              lVar16 = *(long *)(lStack_1d8 + 0x18);
              func_0x000107c5ec30();
              lVar17 = lVar11;
              if (lVar11 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,lVar17)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c980);
                  (*pcVar6)();
                }
                lVar11 = (lVar26 - lVar17) + lVar11;
              }
              lVar35 = lVar16 - lVar26;
              if (SBORROW8(lVar16,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c97c);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              if (lVar11 == 0) {
                lVar17 = 0;
              }
              else {
                if (lVar35 <= lVar17) {
                  lVar17 = lVar35;
                }
                lVar17 = lVar17 + lVar11;
              }
              func_0x000100e25bdc(abStack_230,lVar11,lVar17,lVar38,uVar8);
              func_0x000103d8a0f8(&uStack_190);
              func_0x000103d8a0f8(&uStack_1e0);
              if ((abStack_230[0] & 1) != 0) goto joined_r0x000103d7c3d8;
              goto LAB_103d7c91c;
            }
            abStack_230[8] = 0;
            abStack_230[9] = 0;
            abStack_230[10] = 0;
            abStack_230[0xb] = 0;
            abStack_230[0xc] = 0;
            abStack_230[0xd] = 0;
            abStack_230[0] = 0;
            abStack_230[1] = 0;
            abStack_230[2] = 0;
            abStack_230[3] = 0;
            abStack_230[4] = 0;
            abStack_230[5] = 0;
            abStack_230[6] = 0;
            abStack_230[7] = 0;
            pbVar15 = abStack_230;
LAB_103d7c310:
            func_0x000100e25bdc(abStack_248,abStack_230,pbVar15,lStack_188,uStack_180);
            func_0x000103d8a0f8(&uStack_190);
            func_0x000103d8a0f8(&uStack_1e0);
            bVar3 = abStack_248[0];
          }
          if ((bVar3 & 1) == 0) goto LAB_103d7c91c;
        }
joined_r0x000103d7c3d8:
        if (lVar32 == 0) break;
        puVar29 = puVar29 + 10;
        puVar33 = puVar33 + 10;
      } while( true );
    }
    uVar12 = 1;
  }
  else {
LAB_103d7c91c:
    uVar12 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  func_0x000107c60e78(uVar12);
  func_0x000107c61168(&PTR_PTR_113007f70);
  return;
}



/* Entry: 103d7b35c; end: 103d7c9bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_103d7b35c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  byte abStack_198 [24];
  byte abStack_180 [80];
  undefined8 uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 == *(long *)(param_2 + 0x10)) {
    if ((lVar18 != 0) && (param_1 != param_2)) {
      puVar27 = (undefined8 *)(param_1 + 0x20);
      puVar28 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar18 = lVar18 + -1;
        lVar30 = puVar27[5];
        uVar10 = puVar27[4];
        lVar33 = puVar27[7];
        uVar32 = puVar27[6];
        lStack_128 = puVar27[1];
        uStack_130 = *puVar27;
        lVar9 = puVar27[3];
        uStack_120 = puVar27[2];
        lVar26 = puVar28[5];
        uVar29 = puVar28[4];
        lVar34 = puVar28[7];
        uVar23 = puVar28[6];
        lStack_d8 = puVar28[1];
        uStack_e0 = *puVar28;
        lVar35 = puVar28[3];
        uStack_d0 = puVar28[2];
        uVar31 = puVar28[9];
        lVar15 = puVar28[8];
        uVar24 = puVar27[9];
        lVar14 = puVar27[8];
        lStack_118 = lVar9;
        uStack_110 = uVar10;
        lStack_108 = lVar30;
        uStack_100 = uVar32;
        lStack_f8 = lVar33;
        lStack_f0 = lVar14;
        uStack_e8 = uVar24;
        lStack_c8 = lVar35;
        uStack_c0 = uVar29;
        lStack_b8 = lVar26;
        uStack_b0 = uVar23;
        lStack_a8 = lVar34;
        lStack_a0 = lVar15;
        uStack_98 = uVar31;
        if (uVar32 >> 0x3c < 0xf) {
          if (0xe < uVar23 >> 0x3c) goto LAB_103d7c3e4;
          if (((float)lVar9 == (float)lVar35) &&
             ((float)((ulong)lVar9 >> 0x20) == (float)((ulong)lVar35 >> 0x20))) {
            if ((float)uVar10 == (float)uVar29) {
              if (uVar24 >> 0x3c < 0xf) {
                if (0xe < uVar31 >> 0x3c) goto LAB_103d7c59c;
                if ((float)lVar33 != (float)lVar34) {
                  func_0x000103d8a0c4(&uStack_130,abStack_180);
                  func_0x000103d8a0c4(&uStack_e0,abStack_180);
                  FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                  FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                  FUN_103d7f9ac(lVar33,lVar14,uVar24);
                  FUN_103d7f9ac(lVar34,lVar15,uVar31);
                  FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                  FUN_103d7fa1c(lVar34,lVar15,uVar31);
                  lVar34 = lVar33;
                  lVar15 = lVar14;
                  uVar31 = uVar24;
                  goto LAB_103d7c8ec;
                }
                uVar1 = (uint)(uVar24 >> 0x20);
                uVar16 = uVar1 >> 0x1e;
                uVar2 = (uint)(uVar31 >> 0x20);
                uVar21 = uVar2 >> 0x1e;
                iVar17 = (int)lVar14;
                if (uVar24 >> 0x3e == 3) {
                  uVar20 = 0;
                  if ((((lVar14 != 0) || (uVar24 != 0xc000000000000000)) || (uVar31 >> 0x3e < 3)) ||
                     ((uVar20 = 0, lVar15 != 0 || (uVar31 != 0xc000000000000000))))
                  goto joined_r0x000103d7b6e0;
                  func_0x000103d8a0c4(&uStack_130,abStack_180);
                  func_0x000103d8a0c4(&uStack_e0,abStack_180);
                  FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,0,0xc000000000000000);
                  FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,0,0xc000000000000000);
                  FUN_103d7f9ac(lVar33,0,0xc000000000000000);
                  FUN_103d7f9ac(lVar34,0,0xc000000000000000);
                  lVar11 = 0;
                  uVar20 = 0xc000000000000000;
LAB_103d7b968:
                  FUN_103d7fa1c(lVar34,lVar11,uVar20);
                  goto LAB_103d7bc8c;
                }
                if (uVar1 >> 0x1e < 2) {
                  if (uVar16 == 0) {
                    uVar20 = uVar24 >> 0x30 & 0xff;
                  }
                  else {
                    iVar19 = (int)((ulong)lVar14 >> 0x20);
                    if (SBORROW4(iVar19,iVar17)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9a4);
                      (*pcVar6)();
                    }
                    uVar20 = (ulong)(iVar19 - iVar17);
                  }
joined_r0x000103d7b6e0:
                  if (uVar2 >> 0x1e < 2) goto LAB_103d7b740;
LAB_103d7b6e4:
                  if (uVar21 == 2) {
                    uVar22 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
                    if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c990);
                      (*pcVar6)();
                    }
                    goto LAB_103d7b764;
                  }
                  if (uVar20 == 0) goto LAB_103d7b8b0;
                  func_0x000103d8a0c4(&uStack_130,abStack_180);
                  func_0x000103d8a0c4(&uStack_e0,abStack_180);
                  FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                  FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                  FUN_103d7f9ac(lVar33,lVar14,uVar24);
                  FUN_103d7f9ac(lVar34,lVar15,uVar31);
                  FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                }
                else {
                  if (uVar16 == 2) {
                    uVar20 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
                    if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9a0);
                      (*pcVar6)();
                    }
                    goto joined_r0x000103d7b6e0;
                  }
                  uVar20 = 0;
                  if (1 < uVar21) goto LAB_103d7b6e4;
LAB_103d7b740:
                  if (uVar21 == 0) {
                    uVar22 = uVar31 >> 0x30 & 0xff;
                  }
                  else {
                    iVar19 = (int)((ulong)lVar15 >> 0x20);
                    if (SBORROW4(iVar19,(int)lVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c994);
                      (*pcVar6)();
                    }
                    uVar22 = (ulong)(iVar19 - (int)lVar15);
                  }
LAB_103d7b764:
                  if (uVar20 == uVar22) {
                    if ((long)uVar20 < 1) {
LAB_103d7b8b0:
                      func_0x000103d8a0c4(&uStack_130,abStack_180);
                      func_0x000103d8a0c4(&uStack_e0,abStack_180);
                      FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                      FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                      FUN_103d7f9ac(lVar33,lVar14,uVar24);
                      FUN_103d7f9ac(lVar34,lVar15,uVar31);
                      lVar11 = lVar15;
                      uVar20 = uVar31;
                      goto LAB_103d7b968;
                    }
                    if (uVar16 < 2) {
                      if (uVar16 == 0) {
                        abStack_198[0] = (byte)lVar14;
                        abStack_198[1] = (byte)((ulong)lVar14 >> 8);
                        abStack_198[2] = (byte)((ulong)lVar14 >> 0x10);
                        abStack_198[3] = (byte)((ulong)lVar14 >> 0x18);
                        abStack_198[4] = (byte)((ulong)lVar14 >> 0x20);
                        abStack_198[5] = (byte)((ulong)lVar14 >> 0x28);
                        abStack_198[6] = (byte)((ulong)lVar14 >> 0x30);
                        abStack_198[7] = (byte)((ulong)lVar14 >> 0x38);
                        abStack_198[8] = (byte)uVar24;
                        abStack_198[9] = (byte)(uVar24 >> 8);
                        abStack_198[10] = (byte)(uVar24 >> 0x10);
                        abStack_198[0xb] = (byte)(uVar24 >> 0x18);
                        abStack_198[0xc] = (byte)(uVar24 >> 0x20);
                        abStack_198[0xd] = (byte)(uVar24 >> 0x28);
                        func_0x000103d8a0c4(&uStack_130,abStack_180);
                        func_0x000103d8a0c4(&uStack_e0,abStack_180);
                        FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                        FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                        FUN_103d7f9ac(lVar33,lVar14,uVar24);
                        FUN_103d7f9ac(lVar34,lVar15,uVar31);
                        func_0x000100e25bdc(abStack_180,abStack_198,
                                            abStack_198 + (uVar24 >> 0x30 & 0xff),lVar15,uVar31);
                      }
                      else {
                        lVar8 = (long)iVar17;
                        lVar25 = (lVar14 >> 0x20) - lVar8;
                        if (lVar14 >> 0x20 < lVar8) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9b0);
                          (*pcVar6)();
                        }
                        func_0x000103d8a0c4(&uStack_130,abStack_180);
                        func_0x000103d8a0c4(&uStack_e0,abStack_180);
                        FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                        FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                        FUN_103d7f9ac(lVar33,lVar14,uVar24);
                        lVar12 = lVar34;
                        FUN_103d7f9ac(lVar34,lVar15,uVar31);
                        func_0x000107c5ec30();
                        if (lVar12 == 0) {
                          func_0x000107c5ec38(uVar24);
                          lVar12 = 0;
                        }
                        else {
                          lVar11 = lVar12;
                          func_0x000107c5ec3c(uVar24);
                          if (SBORROW8(lVar8,lVar11)) {
                    /* WARNING: Does not return */
                            pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9bc);
                            (*pcVar6)();
                          }
                          lVar12 = (lVar8 - lVar11) + lVar12;
                          func_0x000107c5ec38(uVar24);
                          if (lVar12 != 0) {
                            if (lVar25 <= lVar11) {
                              lVar11 = lVar25;
                            }
                            lVar11 = lVar11 + lVar12;
                            goto LAB_103d7bc54;
                          }
                        }
                        lVar11 = 0;
LAB_103d7bc54:
                        func_0x000100e25bdc(abStack_180,lVar12,lVar11,lVar15,uVar31);
                      }
                    }
                    else {
                      if (uVar16 == 2) {
                        lVar25 = *(long *)(lVar14 + 0x10);
                        lVar8 = *(long *)(lVar14 + 0x18);
                        func_0x000103d8a0c4(&uStack_130,abStack_180);
                        func_0x000103d8a0c4(&uStack_e0,abStack_180);
                        FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                        FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                        FUN_103d7f9ac(lVar33,lVar14,uVar24);
                        lVar11 = lVar34;
                        FUN_103d7f9ac(lVar34,lVar15,uVar31);
                        func_0x000107c5ec30();
                        if (lVar11 == 0) {
                          lVar12 = 0;
                        }
                        else {
                          lVar7 = lVar11;
                          func_0x000107c5ec3c(uVar24);
                          if (SBORROW8(lVar25,lVar7)) {
                    /* WARNING: Does not return */
                            pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9b8);
                            (*pcVar6)();
                          }
                          lVar12 = (lVar25 - lVar7) + lVar11;
                          lVar11 = lVar7;
                        }
                        lVar7 = lVar8 - lVar25;
                        if (SBORROW8(lVar8,lVar25)) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9b4);
                          (*pcVar6)();
                        }
                        func_0x000107c5ec38(uVar24);
                        if (lVar12 == 0) {
                          lVar11 = 0;
                        }
                        else {
                          if (lVar7 <= lVar11) {
                            lVar11 = lVar7;
                          }
                          lVar11 = lVar11 + lVar12;
                        }
                        goto LAB_103d7bc54;
                      }
                      abStack_198[8] = 0;
                      abStack_198[9] = 0;
                      abStack_198[10] = 0;
                      abStack_198[0xb] = 0;
                      abStack_198[0xc] = 0;
                      abStack_198[0xd] = 0;
                      abStack_198[0] = 0;
                      abStack_198[1] = 0;
                      abStack_198[2] = 0;
                      abStack_198[3] = 0;
                      abStack_198[4] = 0;
                      abStack_198[5] = 0;
                      abStack_198[6] = 0;
                      abStack_198[7] = 0;
                      func_0x000103d8a0c4(&uStack_130,abStack_180);
                      func_0x000103d8a0c4(&uStack_e0,abStack_180);
                      FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                      FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                      FUN_103d7f9ac(lVar33,lVar14,uVar24);
                      FUN_103d7f9ac(lVar34,lVar15,uVar31);
                      func_0x000100e25bdc(abStack_180,abStack_198,abStack_198,lVar15,uVar31);
                    }
                    FUN_103d7fa1c(lVar34,lVar15,uVar31);
                    if ((abStack_180[0] & 1) != 0) goto LAB_103d7bc8c;
                    FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                    lVar34 = lVar33;
                    lVar15 = lVar14;
                    uVar31 = uVar24;
                    goto LAB_103d7c8ec;
                  }
                  func_0x000103d8a0c4(&uStack_130,abStack_180);
                  func_0x000103d8a0c4(&uStack_e0,abStack_180);
                  FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                  FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                  FUN_103d7f9ac(lVar33,lVar14,uVar24);
                  FUN_103d7f9ac(lVar34,lVar15,uVar31);
                  FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                }
                FUN_103d7fa1c(lVar34,lVar15,uVar31);
                lVar34 = lVar33;
                lVar15 = lVar14;
                uVar31 = uVar24;
              }
              else {
                if (0xe < uVar31 >> 0x3c) {
                  func_0x000103d8a0c4(&uStack_130,abStack_180);
                  func_0x000103d8a0c4(&uStack_e0,abStack_180);
                  FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                  FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                  FUN_103d7f9ac(lVar33,lVar14,uVar24);
                  FUN_103d7f9ac(lVar34,lVar15,uVar31);
LAB_103d7bc8c:
                  FUN_103d7fa1c(lVar33,lVar14,uVar24);
                  uVar1 = (uint)(uVar32 >> 0x20);
                  uVar16 = uVar1 >> 0x1e;
                  uVar2 = (uint)(uVar23 >> 0x20);
                  uVar21 = uVar2 >> 0x1e;
                  iVar17 = (int)lVar30;
                  if (uVar32 >> 0x3e == 3) {
                    uVar20 = 0;
                    if (((lVar30 != 0) || (uVar32 != 0xc000000000000000)) ||
                       ((uVar23 >> 0x3e < 3 ||
                        ((uVar20 = 0, lVar26 != 0 || (uVar23 != 0xc000000000000000))))))
                    goto joined_r0x000103d7bd44;
                    lVar26 = 0;
                    uVar23 = 0xc000000000000000;
LAB_103d7be54:
                    FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                    goto LAB_103d7c088;
                  }
                  if (uVar1 >> 0x1e < 2) {
                    if (uVar16 == 0) {
                      uVar20 = uVar32 >> 0x30 & 0xff;
                    }
                    else {
                      iVar19 = (int)((ulong)lVar30 >> 0x20);
                      if (SBORROW4(iVar19,iVar17)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c98c);
                        (*pcVar6)();
                      }
                      uVar20 = (ulong)(iVar19 - iVar17);
                    }
                    if (1 < uVar2 >> 0x1e) goto LAB_103d7bd10;
LAB_103d7bd48:
                    if (uVar21 == 0) {
                      uVar22 = uVar23 >> 0x30 & 0xff;
                    }
                    else {
                      iVar19 = (int)((ulong)lVar26 >> 0x20);
                      if (SBORROW4(iVar19,(int)lVar26)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c970);
                        (*pcVar6)();
                      }
                      uVar22 = (ulong)(iVar19 - (int)lVar26);
                    }
                  }
                  else {
                    if (uVar16 == 2) {
                      uVar20 = *(long *)(lVar30 + 0x18) - *(long *)(lVar30 + 0x10);
                      if (SBORROW8(*(long *)(lVar30 + 0x18),*(long *)(lVar30 + 0x10))) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c988);
                        (*pcVar6)();
                      }
                    }
                    else {
                      uVar20 = 0;
                    }
joined_r0x000103d7bd44:
                    if (uVar21 < 2) goto LAB_103d7bd48;
LAB_103d7bd10:
                    if (uVar21 != 2) {
                      if (uVar20 != 0) goto LAB_103d7c67c;
                      goto LAB_103d7be54;
                    }
                    uVar22 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
                    if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c974);
                      (*pcVar6)();
                    }
                  }
                  if (uVar20 != uVar22) goto LAB_103d7c67c;
                  if ((long)uVar20 < 1) goto LAB_103d7be54;
                  if (uVar16 < 2) {
                    if (uVar16 == 0) {
                      abStack_180[0] = (byte)lVar30;
                      abStack_180[1] = (byte)((ulong)lVar30 >> 8);
                      abStack_180[2] = (byte)((ulong)lVar30 >> 0x10);
                      abStack_180[3] = (byte)((ulong)lVar30 >> 0x18);
                      abStack_180[4] = (byte)((ulong)lVar30 >> 0x20);
                      abStack_180[5] = (byte)((ulong)lVar30 >> 0x28);
                      abStack_180[6] = (byte)((ulong)lVar30 >> 0x30);
                      abStack_180[7] = (byte)((ulong)lVar30 >> 0x38);
                      abStack_180[8] = (byte)uVar32;
                      abStack_180[9] = (byte)(uVar32 >> 8);
                      abStack_180[10] = (byte)(uVar32 >> 0x10);
                      abStack_180[0xb] = (byte)(uVar32 >> 0x18);
                      abStack_180[0xc] = (byte)(uVar32 >> 0x20);
                      abStack_180[0xd] = (byte)(uVar32 >> 0x28);
                      func_0x000100e25bdc(abStack_198,abStack_180,
                                          abStack_180 + (uVar32 >> 0x30 & 0xff),lVar26,uVar23);
LAB_103d7bf9c:
                      FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                      bVar3 = abStack_198[0];
                    }
                    else {
                      lVar25 = (long)iVar17;
                      lVar11 = (lVar30 >> 0x20) - lVar25;
                      if (lVar30 >> 0x20 < lVar25) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c998);
                        (*pcVar6)();
                      }
                      lVar8 = lVar35;
                      func_0x000107c5ec30();
                      if (lVar8 == 0) {
                        func_0x000107c5ec38();
                        lVar8 = 0;
LAB_103d7bfd4:
                        lVar12 = 0;
                      }
                      else {
                        lVar12 = lVar8;
                        func_0x000107c5ec3c();
                        if (SBORROW8(lVar25,lVar12)) {
                    /* WARNING: Does not return */
                          pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9ac);
                          (*pcVar6)();
                        }
                        lVar8 = (lVar25 - lVar12) + lVar8;
                        func_0x000107c5ec38();
                        if (lVar8 == 0) goto LAB_103d7bfd4;
                        if (lVar11 <= lVar12) {
                          lVar12 = lVar11;
                        }
                        lVar12 = lVar12 + lVar8;
                      }
                      func_0x000100e25bdc(abStack_180,lVar8,lVar12,lVar26,uVar23);
                      FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                      bVar3 = abStack_180[0];
                    }
                  }
                  else {
                    if (uVar16 != 2) {
                      abStack_180[8] = 0;
                      abStack_180[9] = 0;
                      abStack_180[10] = 0;
                      abStack_180[0xb] = 0;
                      abStack_180[0xc] = 0;
                      abStack_180[0xd] = 0;
                      abStack_180[0] = 0;
                      abStack_180[1] = 0;
                      abStack_180[2] = 0;
                      abStack_180[3] = 0;
                      abStack_180[4] = 0;
                      abStack_180[5] = 0;
                      abStack_180[6] = 0;
                      abStack_180[7] = 0;
                      func_0x000100e25bdc(abStack_198,abStack_180,abStack_180,lVar26,uVar23);
                      goto LAB_103d7bf9c;
                    }
                    lVar8 = *(long *)(lVar30 + 0x10);
                    lVar12 = *(long *)(lVar30 + 0x18);
                    lVar11 = lVar35;
                    func_0x000107c5ec30();
                    lVar25 = lVar11;
                    if (lVar11 != 0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar8,lVar25)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c9a8);
                        (*pcVar6)();
                      }
                      lVar11 = (lVar8 - lVar25) + lVar11;
                    }
                    lVar7 = lVar12 - lVar8;
                    if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c99c);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    if (lVar11 == 0) {
                      lVar25 = 0;
                    }
                    else {
                      if (lVar7 <= lVar25) {
                        lVar25 = lVar7;
                      }
                      lVar25 = lVar25 + lVar11;
                    }
                    func_0x000100e25bdc(abStack_180,lVar11,lVar25,lVar26,uVar23);
                    FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                    bVar3 = abStack_180[0];
                  }
                  if ((bVar3 & 1) != 0) goto LAB_103d7c088;
                  goto LAB_103d7c8f4;
                }
LAB_103d7c59c:
                func_0x000103d8a0c4(&uStack_130,abStack_180);
                func_0x000103d8a0c4(&uStack_e0,abStack_180);
                FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
                FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                FUN_103d7f9ac(lVar33,lVar14,uVar24);
                FUN_103d7f9ac(lVar34,lVar15,uVar31);
                FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
                FUN_103d7fa1c(lVar33,lVar14,uVar24);
              }
LAB_103d7c8ec:
              FUN_103d7fa1c(lVar34,lVar15,uVar31);
            }
            else {
              func_0x000103d8a0c4(&uStack_130,abStack_180);
              func_0x000103d8a0c4(&uStack_e0,abStack_180);
              FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
              FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
              FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
            }
          }
          else {
            func_0x000103d8a0c4(&uStack_130,abStack_180);
            func_0x000103d8a0c4(&uStack_e0,abStack_180);
            FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
            FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
LAB_103d7c67c:
            FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
          }
LAB_103d7c8f4:
          FUN_103d7f9c8(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
LAB_103d7c90c:
          func_0x000103d8a0f8(&uStack_e0);
          func_0x000103d8a0f8(&uStack_130);
          goto LAB_103d7c91c;
        }
        if (uVar23 >> 0x3c < 0xf) {
LAB_103d7c3e4:
          FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
          FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
          FUN_103d7f9c8(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
          FUN_103d7f9c8(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
          goto LAB_103d7c91c;
        }
        func_0x000103d8a0c4(&uStack_130,abStack_180);
        func_0x000103d8a0c4(&uStack_e0,abStack_180);
        FUN_103d7f958(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
        FUN_103d7f958(lVar35,uVar29,lVar26,uVar23,lVar34,lVar15,uVar31);
LAB_103d7c088:
        fVar4 = (float)uStack_130;
        fVar5 = (float)uStack_e0;
        FUN_103d7f9c8(lVar9,uVar10,lVar30,uVar32,lVar33,lVar14,uVar24);
        uVar31 = uStack_d0;
        lVar34 = lStack_d8;
        if (fVar4 != fVar5) goto LAB_103d7c90c;
        uVar1 = (uint)(uStack_120 >> 0x20);
        uVar16 = uVar1 >> 0x1e;
        uVar2 = (uint)(uStack_d0 >> 0x20);
        uVar21 = uVar2 >> 0x1e;
        iVar17 = (int)lStack_128;
        if (uStack_120 >> 0x3e == 3) {
          uVar23 = 0;
          if ((((lStack_128 != 0) || (uStack_120 != 0xc000000000000000)) || (uStack_d0 >> 0x3e < 3))
             || ((uVar23 = 0, lStack_d8 != 0 || (uStack_d0 != 0xc000000000000000))))
          goto joined_r0x000103d7c284;
LAB_103d7c200:
          func_0x000103d8a0f8(&uStack_e0);
          func_0x000103d8a0f8(&uStack_130);
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar16 == 0) {
              uVar23 = uStack_120 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)lStack_128 >> 0x20);
              if (SBORROW4(iVar19,iVar17)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c96c);
                (*pcVar6)();
              }
              uVar23 = (ulong)(iVar19 - iVar17);
            }
joined_r0x000103d7c284:
            if (1 < uVar2 >> 0x1e) goto LAB_103d7c10c;
LAB_103d7c140:
            if (uVar21 == 0) {
              uVar24 = uStack_d0 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)lStack_d8 >> 0x20);
              if (SBORROW4(iVar19,(int)lStack_d8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c960);
                (*pcVar6)();
              }
              uVar24 = (ulong)(iVar19 - (int)lStack_d8);
            }
          }
          else {
            if (uVar16 == 2) {
              uVar23 = *(long *)(lStack_128 + 0x18) - *(long *)(lStack_128 + 0x10);
              if (SBORROW8(*(long *)(lStack_128 + 0x18),*(long *)(lStack_128 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c968);
                (*pcVar6)();
              }
              goto joined_r0x000103d7c284;
            }
            uVar23 = 0;
            if (uVar21 < 2) goto LAB_103d7c140;
LAB_103d7c10c:
            if (uVar21 != 2) {
              if (uVar23 != 0) goto LAB_103d7c90c;
              goto LAB_103d7c200;
            }
            uVar24 = *(long *)(lStack_d8 + 0x18) - *(long *)(lStack_d8 + 0x10);
            if (SBORROW8(*(long *)(lStack_d8 + 0x18),*(long *)(lStack_d8 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c964);
              (*pcVar6)();
            }
          }
          if (uVar23 != uVar24) goto LAB_103d7c90c;
          if ((long)uVar23 < 1) goto LAB_103d7c200;
          if (uVar16 < 2) {
            if (uVar16 == 0) {
              abStack_180[0] = (byte)lStack_128;
              abStack_180[1] = (byte)((ulong)lStack_128 >> 8);
              abStack_180[2] = (byte)((ulong)lStack_128 >> 0x10);
              abStack_180[3] = (byte)((ulong)lStack_128 >> 0x18);
              abStack_180[4] = (byte)((ulong)lStack_128 >> 0x20);
              abStack_180[5] = (byte)((ulong)lStack_128 >> 0x28);
              abStack_180[6] = (byte)((ulong)lStack_128 >> 0x30);
              abStack_180[7] = (byte)((ulong)lStack_128 >> 0x38);
              abStack_180[8] = (byte)uStack_120;
              abStack_180[9] = (byte)(uStack_120 >> 8);
              abStack_180[10] = (byte)(uStack_120 >> 0x10);
              abStack_180[0xb] = (byte)(uStack_120 >> 0x18);
              abStack_180[0xc] = (byte)(uStack_120 >> 0x20);
              abStack_180[0xd] = (byte)(uStack_120 >> 0x28);
              pbVar13 = abStack_180 + (uStack_120 >> 0x30 & 0xff);
              goto LAB_103d7c310;
            }
            lVar26 = (long)iVar17;
            lVar15 = (lStack_128 >> 0x20) - lVar26;
            if (lStack_128 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c978);
              (*pcVar6)();
            }
            func_0x000107c5ec30();
            if (lVar9 == 0) {
              func_0x000107c5ec38();
              lVar9 = 0;
LAB_103d7c35c:
              lVar14 = 0;
            }
            else {
              lVar14 = lVar9;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar26,lVar14)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c984);
                (*pcVar6)();
              }
              lVar9 = (lVar26 - lVar14) + lVar9;
              func_0x000107c5ec38();
              if (lVar9 == 0) goto LAB_103d7c35c;
              if (lVar15 <= lVar14) {
                lVar14 = lVar15;
              }
              lVar14 = lVar14 + lVar9;
            }
            func_0x000100e25bdc(abStack_180,lVar9,lVar14,lVar34,uVar31);
            func_0x000103d8a0f8(&uStack_e0);
            func_0x000103d8a0f8(&uStack_130);
            bVar3 = abStack_180[0];
          }
          else {
            if (uVar16 == 2) {
              lVar26 = *(long *)(lStack_128 + 0x10);
              lVar14 = *(long *)(lStack_128 + 0x18);
              func_0x000107c5ec30();
              lVar15 = lVar9;
              if (lVar9 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,lVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c980);
                  (*pcVar6)();
                }
                lVar9 = (lVar26 - lVar15) + lVar9;
              }
              lVar30 = lVar14 - lVar26;
              if (SBORROW8(lVar14,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d7c97c);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              if (lVar9 == 0) {
                lVar15 = 0;
              }
              else {
                if (lVar30 <= lVar15) {
                  lVar15 = lVar30;
                }
                lVar15 = lVar15 + lVar9;
              }
              func_0x000100e25bdc(abStack_180,lVar9,lVar15,lVar34,uVar31);
              func_0x000103d8a0f8(&uStack_e0);
              func_0x000103d8a0f8(&uStack_130);
              if ((abStack_180[0] & 1) != 0) goto joined_r0x000103d7c3d8;
              goto LAB_103d7c91c;
            }
            abStack_180[8] = 0;
            abStack_180[9] = 0;
            abStack_180[10] = 0;
            abStack_180[0xb] = 0;
            abStack_180[0xc] = 0;
            abStack_180[0xd] = 0;
            abStack_180[0] = 0;
            abStack_180[1] = 0;
            abStack_180[2] = 0;
            abStack_180[3] = 0;
            abStack_180[4] = 0;
            abStack_180[5] = 0;
            abStack_180[6] = 0;
            abStack_180[7] = 0;
            pbVar13 = abStack_180;
LAB_103d7c310:
            func_0x000100e25bdc(abStack_198,abStack_180,pbVar13,lStack_d8,uStack_d0);
            func_0x000103d8a0f8(&uStack_e0);
            func_0x000103d8a0f8(&uStack_130);
            bVar3 = abStack_198[0];
          }
          if ((bVar3 & 1) == 0) goto LAB_103d7c91c;
        }
joined_r0x000103d7c3d8:
        if (lVar18 == 0) break;
        puVar27 = puVar27 + 10;
        puVar28 = puVar28 + 10;
      } while( true );
    }
    uVar10 = 1;
  }
  else {
LAB_103d7c91c:
    uVar10 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  func_0x000107c60e78(uVar10);
  func_0x000107c61168(&PTR_PTR_113007f70);
  return;
}



/* Entry: 103d7c9c0; end: 103d7c9df;  */

void FUN_103d7c9c0(void)

{
  func_0x000107c61168(&PTR_PTR_113007f70);
  return;
}



/* Entry: 103d7c9e0; end: 103d7ca0b;  */

void FUN_103d7c9e0(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d7ca0c; end: 103d7ca47;  */

int FUN_103d7ca0c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d7ca48; end: 103d7e74b;  */

uint FUN_103d7ca48(float *param_1,float *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0xc);
  uVar8 = *(ulong *)(param_2 + 10);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(ulong *)(param_2 + 0xc);
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103d7cb30;
    if ((float)uVar5 == (float)uVar6) {
      func_0x000103d8a124(&uStack_80,auStack_b8,0x113007928,&UNK_10dc8b568);
      func_0x000103d8a124(&uStack_a0,auStack_b8,0x113007928,&UNK_10dc8b568);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      FUN_103d7fa1c(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_103d7cc04;
    }
    else {
      func_0x000103d8a124(&uStack_80,auStack_b8,0x113007928,&UNK_10dc8b568);
      func_0x000103d8a124(&uStack_a0,auStack_b8,0x113007928,&UNK_10dc8b568);
      FUN_103d7fa1c(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      func_0x000103d8a124(&uStack_80,auStack_b8,0x113007928,&UNK_10dc8b568);
      func_0x000103d8a124(&uStack_a0,auStack_b8,0x113007928,&UNK_10dc8b568);
LAB_103d7cc04:
      FUN_103d7fa1c(uVar5,uVar7,uVar3);
      uVar5 = *(undefined8 *)(param_1 + 4);
      func_0x000100e25fcc(uVar5,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_2 + 4),
                          *(undefined8 *)(param_2 + 6));
      uVar1 = (uint)uVar5;
      goto LAB_103d7cc80;
    }
LAB_103d7cb30:
    func_0x000103d8a124(&uStack_80,auStack_b8,0x113007928,&UNK_10dc8b568);
    func_0x000103d8a124(&uStack_a0,auStack_b8,0x113007928,&UNK_10dc8b568);
    FUN_103d7fa1c(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  FUN_103d7fa1c(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_103d7cc80:
  return uVar1 & 1;
}



/* Entry: 103d7e74c; end: 103d7ebb7;  */

uint FUN_103d7e74c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  undefined1 auStack_440 [64];
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
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
  
  uVar4 = 0;
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uStack_2d8 = param_1[0xb];
    uStack_3a0 = param_1[10];
    uStack_128 = param_1[0xd];
    uStack_130 = param_1[0xc];
    uStack_2e8 = param_1[9];
    uStack_2f0 = param_1[8];
    uStack_138 = param_1[0xb];
    uStack_140 = param_1[10];
    uStack_2c8 = param_1[0xd];
    uStack_2d0 = param_1[0xc];
    uStack_118 = param_1[0xf];
    uStack_120 = param_1[0xe];
    uStack_2b8 = param_1[0xf];
    uStack_2c0 = param_1[0xe];
    uStack_108 = param_1[0x11];
    uStack_110 = param_1[0x10];
    uStack_158 = param_1[7];
    uStack_160 = param_1[6];
    uStack_148 = param_1[9];
    uStack_150 = param_1[8];
    uStack_2f8 = param_1[7];
    uStack_300 = param_1[6];
    uStack_278 = param_2[0xb];
    uVar2 = param_2[10];
    uStack_188 = param_2[0xd];
    uStack_190 = param_2[0xc];
    uStack_348 = param_2[9];
    uStack_350 = param_2[8];
    uStack_198 = param_2[0xb];
    uStack_1a0 = param_2[10];
    uStack_268 = param_2[0xd];
    uStack_270 = param_2[0xc];
    uStack_178 = param_2[0xf];
    uStack_180 = param_2[0xe];
    uStack_258 = param_2[0xf];
    uStack_260 = param_2[0xe];
    uStack_168 = param_2[0x11];
    uStack_170 = param_2[0x10];
    uStack_1b8 = param_2[7];
    uStack_1c0 = param_2[6];
    uStack_1a8 = param_2[9];
    uStack_1b0 = param_2[8];
    uStack_358 = param_2[7];
    uStack_360 = param_2[6];
    uStack_2a8 = param_1[0x11];
    uStack_2b0 = param_1[0x10];
    uStack_248 = param_2[0x11];
    uStack_250 = param_2[0x10];
    uStack_2e0._1_1_ = (char)(uStack_3a0 >> 8);
    uStack_280._1_1_ = (char)(uVar2 >> 8);
    uStack_2e0 = uStack_3a0;
    uStack_2a0 = uStack_360;
    uStack_298 = uStack_358;
    uStack_290 = uStack_350;
    uStack_288 = uStack_348;
    uStack_280 = uVar2;
    if (uStack_2e0._1_1_ == '\x03') {
      if (uStack_280._1_1_ == '\x03') {
        uStack_398 = param_1[0xb];
        uStack_3a0 = param_1[10];
        uStack_388 = param_1[0xd];
        uStack_390 = param_1[0xc];
        uStack_378 = param_1[0xf];
        uStack_380 = param_1[0xe];
        uStack_368 = param_1[0x11];
        uStack_370 = param_1[0x10];
        uStack_3b8 = param_1[7];
        uStack_3c0 = param_1[6];
        uStack_3a8 = param_1[9];
        uStack_3b0 = param_1[8];
        func_0x000103d8a124(&uStack_160,&uStack_a0,0x1130078a0,&UNK_10dc8b528);
        func_0x000103d8a124(&uStack_1c0,&uStack_a0,0x1130078a0,&UNK_10dc8b528);
        func_0x000103d8a16c(&uStack_3c0,0x1130078a0,&UNK_10dc8b528);
LAB_103d7e9c8:
        uStack_1f8 = param_1[0x13];
        uStack_200 = param_1[0x12];
        uStack_1e8 = param_1[0x15];
        uStack_1f0 = param_1[0x14];
        uStack_1d8 = param_1[0x17];
        uStack_1e0 = param_1[0x16];
        uStack_1c8 = param_1[0x19];
        uStack_1d0 = param_1[0x18];
        uStack_2f8 = param_1[0x13];
        uStack_300 = param_1[0x12];
        uStack_2e8 = param_1[0x15];
        uStack_2f0 = param_1[0x14];
        uStack_238 = param_2[0x13];
        uStack_240 = param_2[0x12];
        uStack_228 = param_2[0x15];
        uStack_230 = param_2[0x14];
        uStack_218 = param_2[0x17];
        uStack_220 = param_2[0x16];
        uStack_208 = param_2[0x19];
        uStack_210 = param_2[0x18];
        uStack_2b8 = param_2[0x13];
        uStack_2c0 = param_2[0x12];
        uStack_2a8 = param_2[0x15];
        uStack_2b0 = param_2[0x14];
        uStack_2d8 = param_1[0x17];
        uStack_2e0 = param_1[0x16];
        uStack_2c8 = param_1[0x19];
        uStack_2d0 = param_1[0x18];
        uStack_358 = param_2[0x17];
        uStack_360 = param_2[0x16];
        uStack_348 = param_2[0x19];
        uStack_350 = param_2[0x18];
        uStack_2a0 = uStack_360;
        uStack_298 = uStack_358;
        uStack_290 = uStack_350;
        uStack_288 = uStack_348;
        if (uStack_2f0 == 1) {
          if (uStack_2b0 != 1) {
LAB_103d7ea84:
            uStack_3c0 = uStack_300;
            uStack_3b8 = uStack_2f8;
            uStack_3b0 = uStack_2f0;
            uStack_3a8 = uStack_2e8;
            uStack_3a0 = uStack_2e0;
            uStack_398 = uStack_2d8;
            uStack_390 = uStack_2d0;
            uStack_388 = uStack_2c8;
            uStack_380 = uStack_2c0;
            uStack_378 = uStack_2b8;
            uStack_370 = uStack_2b0;
            uStack_368 = uStack_2a8;
            func_0x000103d8a124(&uStack_200,&uStack_4a0,0x1130078b0,&UNK_10dc8b538);
            func_0x000103d8a124(&uStack_240,&uStack_4a0,0x1130078b0,&UNK_10dc8b538);
            uVar5 = 0x1130078b8;
            puVar6 = &UNK_10dc8b540;
            goto LAB_103d7eaec;
          }
          uStack_3b8 = param_1[0x13];
          uStack_3c0 = param_1[0x12];
          uStack_3a8 = param_1[0x15];
          uStack_3b0 = param_1[0x14];
          uStack_398 = param_1[0x17];
          uStack_3a0 = param_1[0x16];
          uStack_388 = param_1[0x19];
          uStack_390 = param_1[0x18];
          func_0x000103d8a124(&uStack_200,&uStack_4a0,0x1130078b0,&UNK_10dc8b538);
          func_0x000103d8a124(&uStack_240,&uStack_4a0,0x1130078b0,&UNK_10dc8b538);
          func_0x000103d8a16c(&uStack_3c0,0x1130078b0,&UNK_10dc8b538);
        }
        else {
          if (uStack_2b0 == 1) goto LAB_103d7ea84;
          uStack_3f8 = param_2[0x13];
          uStack_400 = param_2[0x12];
          uStack_3e8 = param_2[0x15];
          uStack_3f0 = param_2[0x14];
          uStack_3d8 = param_2[0x17];
          uStack_3e0 = param_2[0x16];
          uStack_3c8 = param_2[0x19];
          uStack_3d0 = param_2[0x18];
          uStack_498 = param_1[0x13];
          uStack_4a0 = param_1[0x12];
          uStack_488 = param_1[0x15];
          uStack_490 = param_1[0x14];
          uStack_478 = param_1[0x17];
          uStack_480 = param_1[0x16];
          uStack_468 = param_1[0x19];
          uStack_470 = param_1[0x18];
          uStack_3c0 = uStack_400;
          uStack_3b8 = uStack_3f8;
          uStack_3b0 = uStack_3f0;
          uStack_3a8 = uStack_3e8;
          uStack_3a0 = uStack_3e0;
          uStack_398 = uStack_3d8;
          uStack_390 = uStack_3d0;
          uStack_388 = uStack_3c8;
          func_0x000103d8a124(&uStack_200,auStack_440,0x1130078b0,&UNK_10dc8b538);
          func_0x000103d8a124(&uStack_240,auStack_440,0x1130078b0,&UNK_10dc8b538);
          func_0x000103d7e45c(&uStack_4a0,&uStack_3c0);
          func_0x000103d8a16c(&uStack_400,0x1130078b0,&UNK_10dc8b538);
          func_0x000103d8a16c(&uStack_300,0x1130078b0,&UNK_10dc8b538);
          if ((uVar4 & 1) == 0) goto LAB_103d7eaf4;
        }
        uVar4 = param_1[4];
        func_0x000100e25fcc(uVar4,param_1[5],param_2[4],param_2[5]);
        uVar1 = (uint)uVar4;
        goto LAB_103d7eaf8;
      }
LAB_103d7e8a4:
      uStack_3c0 = uStack_300;
      uStack_3b8 = uStack_2f8;
      uStack_3b0 = uStack_2f0;
      uStack_3a8 = uStack_2e8;
      uStack_398 = uStack_2d8;
      uStack_390 = uStack_2d0;
      uStack_388 = uStack_2c8;
      uStack_380 = uStack_2c0;
      uStack_378 = uStack_2b8;
      uStack_370 = uStack_2b0;
      uStack_368 = uStack_2a8;
      uStack_340 = uVar2;
      uStack_338 = uStack_278;
      uStack_330 = uStack_270;
      uStack_328 = uStack_268;
      uStack_320 = uStack_260;
      uStack_318 = uStack_258;
      uStack_310 = uStack_250;
      uStack_308 = uStack_248;
      func_0x000103d8a124(&uStack_160,&uStack_a0,0x1130078a0,&UNK_10dc8b528);
      func_0x000103d8a124(&uStack_1c0,&uStack_a0,0x1130078a0,&UNK_10dc8b528);
      uVar5 = 0x1130078a8;
      puVar6 = &UNK_10dc8b530;
LAB_103d7eaec:
      func_0x000103d8a16c(&uStack_3c0,uVar5,puVar6);
    }
    else {
      if (uStack_280._1_1_ == '\x03') goto LAB_103d7e8a4;
      uStack_398 = param_2[0xb];
      uStack_3a0 = param_2[10];
      uStack_388 = param_2[0xd];
      uStack_390 = param_2[0xc];
      uStack_378 = param_2[0xf];
      uStack_380 = param_2[0xe];
      uStack_368 = param_2[0x11];
      uStack_370 = param_2[0x10];
      uStack_3b8 = param_2[7];
      uStack_3c0 = param_2[6];
      uStack_3a8 = param_2[9];
      uStack_3b0 = param_2[8];
      uStack_d8 = param_1[0xb];
      uStack_e0 = param_1[10];
      uStack_c8 = param_1[0xd];
      uStack_d0 = param_1[0xc];
      uStack_b8 = param_1[0xf];
      uStack_c0 = param_1[0xe];
      uStack_a8 = param_1[0x11];
      uStack_b0 = param_1[0x10];
      uStack_f8 = param_1[7];
      uStack_100 = param_1[6];
      uStack_e8 = param_1[9];
      uStack_f0 = param_1[8];
      uStack_a0 = uStack_3c0;
      uStack_98 = uStack_3b8;
      uStack_90 = uStack_3b0;
      uStack_88 = uStack_3a8;
      uStack_80 = uStack_3a0;
      uStack_78 = uStack_398;
      uStack_70 = uStack_390;
      uStack_68 = uStack_388;
      uStack_60 = uStack_380;
      uStack_58 = uStack_378;
      uStack_50 = uStack_370;
      uStack_48 = uStack_368;
      func_0x000103d8a124(&uStack_160,&uStack_4a0,0x1130078a0,&UNK_10dc8b528);
      func_0x000103d8a124(&uStack_1c0,&uStack_4a0,0x1130078a0,&UNK_10dc8b528);
      puVar3 = &uStack_100;
      func_0x000103d7e014(puVar3,&uStack_a0);
      func_0x000103d8a16c(&uStack_3c0,0x1130078a0,&UNK_10dc8b528);
      func_0x000103d8a16c(&uStack_300,0x1130078a0,&UNK_10dc8b528);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103d7e9c8;
    }
  }
LAB_103d7eaf4:
  uVar1 = 0;
LAB_103d7eaf8:
  return uVar1 & 1;
}



/* Entry: 103d7ebb8; end: 103d7ec7b;  */

/* WARNING: Possible PIC construction at 0x000103d7ec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d7ec30) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d7ebb8(ulong *param_1,ulong *param_2)

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
  ulong uVar17;
  byte *pbVar18;
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
  
  uVar13 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar13 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar13 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar13 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar13 != *param_2) {
    return (byte *)0x0;
  }
  pbVar12 = (byte *)param_1[2];
  pbVar15 = (byte *)param_1[3];
  pbVar16 = (byte *)param_2[2];
  pbVar18 = (byte *)param_2[3];
  if ((byte *)param_1[2] != (byte *)param_2[2] || (byte *)param_1[3] != (byte *)param_2[3]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar18,0);
    return pbVar12;
  }
  uVar13 = param_1[4];
  if (((uVar13 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[6];
  pbVar26 = (byte *)param_1[7];
  uVar13 = param_2[6];
  uVar17 = param_2[7];
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
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
         ((uVar17 >> 0x3e < 3 || ((uVar21 = 0, uVar13 != 0 || (uVar17 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
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
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)(uVar13 >> 0x20);
      if (SBORROW4(iVar20,(int)uVar13)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)uVar13)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
        if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
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
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
          unaff_x24 = pbVar26;
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
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
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
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,uVar13,uVar17);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
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
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 != (byte *)0x0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar25);
            func_0x000107c61174();
            pbVar12 = pbVar24;
            func_0x000107c60118();
            func_0x000107c61170(pbVar24);
            func_0x000107c61170(lVar25);
            pbVar24 = pbVar12;
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
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
           (pbVar12 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
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
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar24 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
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
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    uVar13 = *(ulong *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar25 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar11);
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



/* Entry: 103d7ec7c; end: 103d7ed0b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d7ec7c(char param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == '\x02') {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103d7ed0c; end: 103d7ed3f;  */

undefined8 FUN_103d7ed0c(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6ee7c(param_2,param_1,&UNK_11070aa78);
  return param_2;
}



/* Entry: 103d7ed40; end: 103d7ed47;  */

void FUN_103d7ed40(void)

{
  return;
}



/* Entry: 103d7ed48; end: 103d7ed7b;  */

undefined8 FUN_103d7ed48(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6ee7c(param_2,param_1,&UNK_11070b318);
  return param_2;
}



/* Entry: 103d7ed7c; end: 103d7f1b7;  */

uint FUN_103d7ed7c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_3d0 [96];
  undefined8 uStack_370;
  ulong uStack_368;
  ulong uStack_360;
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
  ulong uStack_248;
  ulong uStack_240;
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
  uStack_2f0 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_238 = param_1[5];
  uStack_240 = param_1[4];
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
  uStack_230._1_1_ = (char)((ulong)uStack_2f0 >> 8);
  uStack_1d0._1_1_ = (char)((ulong)uStack_290 >> 8);
  uStack_230 = uStack_2f0;
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
  if (uStack_230._1_1_ == '\x03') {
    if (uStack_1d0._1_1_ == '\x03') {
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
      func_0x000103d8a124(&uStack_130,&uStack_d0,0x1130078a0,&UNK_10dc8b528);
      func_0x000103d8a124(&uStack_190,&uStack_d0,0x1130078a0,&UNK_10dc8b528);
      func_0x000103d8a16c(&uStack_310,0x1130078a0,&UNK_10dc8b528);
LAB_103d7efc4:
      uVar8 = param_1[0xf];
      uVar6 = param_1[0xe];
      uVar4 = param_1[0x10];
      uVar9 = param_2[0xf];
      uVar7 = param_2[0xe];
      uVar5 = param_2[0x10];
      uStack_370 = uVar7;
      uStack_368 = uVar9;
      uStack_360 = uVar5;
      uStack_250 = uVar6;
      uStack_248 = uVar8;
      uStack_240 = uVar4;
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar5 >> 0x3c) goto LAB_103d7f04c;
        if ((float)uVar6 == (float)uVar7) {
          func_0x000103d8a124(&uStack_250,auStack_3d0,0x113007928,&UNK_10dc8b568);
          func_0x000103d8a124(&uStack_370,auStack_3d0,0x113007928,&UNK_10dc8b568);
          uVar3 = uVar8;
          func_0x000100e25fcc(uVar8,uVar4,uVar9,uVar5);
          FUN_103d7fa1c(uVar7,uVar9,uVar5);
          if ((uVar3 & 1) != 0) goto LAB_103d7f118;
        }
        else {
          func_0x000103d8a124(&uStack_250,auStack_3d0,0x113007928,&UNK_10dc8b568);
          func_0x000103d8a124(&uStack_370,auStack_3d0,0x113007928,&UNK_10dc8b568);
          FUN_103d7fa1c(uVar7,uVar9,uVar5);
        }
      }
      else {
        if (0xe < uVar5 >> 0x3c) {
          func_0x000103d8a124(&uStack_250,auStack_3d0,0x113007928,&UNK_10dc8b568);
          func_0x000103d8a124(&uStack_370,auStack_3d0,0x113007928,&UNK_10dc8b568);
LAB_103d7f118:
          FUN_103d7fa1c(uVar6,uVar8,uVar4);
          uVar6 = *param_1;
          func_0x000100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
          uVar1 = (uint)uVar6;
          goto LAB_103d7f194;
        }
LAB_103d7f04c:
        func_0x000103d8a124(&uStack_250,auStack_3d0,0x113007928,&UNK_10dc8b568);
        func_0x000103d8a124(&uStack_370,auStack_3d0,0x113007928,&UNK_10dc8b568);
        FUN_103d7fa1c(uVar6,uVar8,uVar4);
        uVar6 = uVar7;
        uVar8 = uVar9;
        uVar4 = uVar5;
      }
      FUN_103d7fa1c(uVar6,uVar8,uVar4);
    }
    else {
LAB_103d7ee98:
      uStack_310 = uStack_250;
      uStack_308 = uStack_248;
      uStack_300 = uStack_240;
      uStack_2f8 = uStack_238;
      uStack_2e8 = uStack_228;
      uStack_2e0 = uStack_220;
      uStack_2d8 = uStack_218;
      uStack_2d0 = uStack_210;
      uStack_2c8 = uStack_208;
      uStack_2c0 = uStack_200;
      uStack_2b8 = uStack_1f8;
      func_0x000103d8a124(&uStack_130,&uStack_d0,0x1130078a0,&UNK_10dc8b528);
      func_0x000103d8a124(&uStack_190,&uStack_d0,0x1130078a0,&UNK_10dc8b528);
      func_0x000103d8a16c(&uStack_310,0x1130078a8,&UNK_10dc8b530);
    }
  }
  else {
    if (uStack_1d0._1_1_ == '\x03') goto LAB_103d7ee98;
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
    uStack_360 = param_2[4];
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
    uStack_300 = uStack_360;
    uStack_2f8 = uStack_358;
    uStack_2f0 = uStack_350;
    uStack_2e8 = uStack_348;
    uStack_2e0 = uStack_340;
    uStack_2d8 = uStack_338;
    uStack_2d0 = uStack_330;
    uStack_2c8 = uStack_328;
    uStack_2c0 = uStack_320;
    uStack_2b8 = uStack_318;
    func_0x000103d8a124(&uStack_130,auStack_3d0,0x1130078a0,&UNK_10dc8b528);
    func_0x000103d8a124(&uStack_190,auStack_3d0,0x1130078a0,&UNK_10dc8b528);
    puVar2 = &uStack_d0;
    func_0x000103d7e014(puVar2,&uStack_310);
    func_0x000103d8a16c(&uStack_370,0x1130078a0,&UNK_10dc8b528);
    func_0x000103d8a16c(&uStack_250,0x1130078a0,&UNK_10dc8b528);
    if (((ulong)puVar2 & 1) != 0) goto LAB_103d7efc4;
  }
  uVar1 = 0;
LAB_103d7f194:
  return uVar1 & 1;
}



/* Entry: 103d7f1b8; end: 103d7f8c3;  */

uint FUN_103d7f1b8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar5;
  undefined1 auStack_7e8 [136];
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
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
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
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
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
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
  undefined8 uVar4;
  
  uStack_2a8 = param_1[0xb];
  uStack_2b0 = param_1[10];
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_298 = param_1[0xd];
  uStack_2a0 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_2e8 = param_1[3];
  uStack_2f0 = param_1[2];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_2d8 = param_1[5];
  uStack_2e0 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_2c8 = param_1[7];
  uStack_2d0 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_2b8 = param_1[9];
  uStack_2c0 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_2f8 = param_1[1];
  uStack_300 = *param_1;
  uStack_220 = param_2[0xb];
  uStack_228 = param_2[10];
  uStack_188 = param_2[0xd];
  uStack_190 = param_2[0xc];
  uStack_210 = param_2[0xd];
  uStack_218 = param_2[0xc];
  uStack_178 = param_2[0xf];
  uStack_180 = param_2[0xe];
  uStack_260 = param_2[3];
  uStack_268 = param_2[2];
  uStack_1c8 = param_2[5];
  uStack_1d0 = param_2[4];
  uStack_250 = param_2[5];
  uStack_258 = param_2[4];
  uStack_1b8 = param_2[7];
  uStack_1c0 = param_2[6];
  uStack_240 = param_2[7];
  uStack_248 = param_2[6];
  uStack_1a8 = param_2[9];
  uStack_1b0 = param_2[8];
  uStack_230 = param_2[9];
  uStack_238 = param_2[8];
  uStack_198 = param_2[0xb];
  uStack_1a0 = param_2[10];
  uStack_1e8 = param_2[1];
  uStack_1f0 = *param_2;
  uStack_1d8 = param_2[3];
  uStack_1e0 = param_2[2];
  uStack_270 = param_2[1];
  uStack_278 = *param_2;
  uStack_288 = param_1[0xf];
  uStack_290 = param_1[0xe];
  uStack_200 = param_2[0xf];
  uStack_208 = param_2[0xe];
  uStack_e0 = param_1[0x10];
  uStack_170 = param_2[0x10];
  uStack_280 = param_1[0x10];
  uStack_1f8 = param_2[0x10];
  iVar1 = (int)&uStack_300;
  FUN_103d8a010();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_278;
    FUN_103d8a010();
    if (iVar1 == 1) {
      func_0x000103d8a124(&uStack_160,&uStack_410,0x113007920,&UNK_10dc8b560);
      func_0x000103d8a124(&uStack_1f0,&uStack_410,0x113007920,&UNK_10dc8b560);
LAB_103d7f530:
      func_0x000103d8a16c(&uStack_300,0x113007920,&UNK_10dc8b560);
      uVar4 = param_1[0x11];
      func_0x000100e25fcc(uVar4,param_1[0x12],param_2[0x11],param_2[0x12]);
      uVar2 = (uint)uVar4;
      goto LAB_103d7f554;
    }
LAB_103d7f33c:
    func_0x000107c610b4(&uStack_410,&uStack_300,0x110);
    func_0x000103d8a124(&uStack_160,&uStack_d0,0x113007920,&UNK_10dc8b560);
    func_0x000103d8a124(&uStack_1f0,&uStack_d0,0x113007920,&UNK_10dc8b560);
    uVar4 = 0x113008470;
    puVar5 = &UNK_10dc8d998;
    puVar3 = &uStack_410;
  }
  else {
    uStack_438 = uStack_298;
    uStack_440 = uStack_2a0;
    uStack_428 = uStack_288;
    uStack_430 = uStack_290;
    uStack_420 = uStack_280;
    uStack_478 = uStack_2d8;
    uStack_480 = uStack_2e0;
    uStack_468 = uStack_2c8;
    uStack_470 = uStack_2d0;
    uStack_458 = uStack_2b8;
    uStack_460 = uStack_2c0;
    uStack_448 = uStack_2a8;
    uStack_450 = uStack_2b0;
    uStack_498 = uStack_2f8;
    uStack_4a0 = uStack_300;
    uStack_488 = uStack_2e8;
    uStack_490 = uStack_2f0;
    iVar1 = (int)&uStack_278;
    FUN_103d8a010();
    if (iVar1 == 1) goto LAB_103d7f33c;
    uStack_6f8 = uStack_210;
    uStack_700 = uStack_218;
    uStack_6e8 = uStack_200;
    uStack_6f0 = uStack_208;
    uStack_6e0 = uStack_1f8;
    uStack_738 = uStack_250;
    uStack_740 = uStack_258;
    uStack_728 = uStack_240;
    uStack_730 = uStack_248;
    uStack_718 = uStack_230;
    uStack_720 = uStack_238;
    uStack_708 = uStack_220;
    uStack_710 = uStack_228;
    uStack_758 = uStack_270;
    uStack_760 = uStack_278;
    uStack_748 = uStack_260;
    uStack_750 = uStack_268;
    uStack_668 = uStack_210;
    uStack_670 = uStack_218;
    uStack_658 = uStack_200;
    uStack_660 = uStack_208;
    uStack_650 = uStack_1f8;
    uStack_6a8 = uStack_250;
    uStack_6b0 = uStack_258;
    uStack_698 = uStack_240;
    uStack_6a0 = uStack_248;
    uStack_688 = uStack_230;
    uStack_690 = uStack_238;
    uStack_678 = uStack_220;
    uStack_680 = uStack_228;
    uStack_6c8 = uStack_270;
    uStack_6d0 = uStack_278;
    uStack_6b8 = uStack_260;
    uStack_6c0 = uStack_268;
    uStack_5d8 = uStack_438;
    uStack_5e0 = uStack_440;
    uStack_5c8 = uStack_428;
    uStack_5d0 = uStack_430;
    uStack_5c0 = uStack_420;
    uStack_618 = uStack_478;
    uStack_620 = uStack_480;
    uStack_608 = uStack_468;
    uStack_610 = uStack_470;
    uStack_5f8 = uStack_458;
    uStack_600 = uStack_460;
    uStack_5e8 = uStack_448;
    uStack_5f0 = uStack_450;
    uStack_638 = uStack_498;
    uStack_640 = uStack_4a0;
    uStack_628 = uStack_488;
    uStack_630 = uStack_490;
    func_0x000103d80440(&uStack_640,&uStack_5b0);
    uStack_68 = uStack_548;
    uStack_70 = uStack_550;
    uStack_58 = uStack_538;
    uStack_60 = uStack_540;
    uStack_50 = uStack_530;
    uStack_a8 = uStack_588;
    uStack_b0 = uStack_590;
    uStack_98 = uStack_578;
    uStack_a0 = uStack_580;
    uStack_88 = uStack_568;
    uStack_90 = uStack_570;
    uStack_78 = uStack_558;
    uStack_80 = uStack_560;
    uStack_c8 = uStack_5a8;
    uStack_d0 = uStack_5b0;
    uStack_b8 = uStack_598;
    uStack_c0 = uStack_5a0;
    func_0x000103d80440(&uStack_6d0,&uStack_528);
    uStack_3a8 = uStack_4c0;
    uStack_3b0 = uStack_4c8;
    uStack_398 = uStack_4b0;
    uStack_3a0 = uStack_4b8;
    uStack_390 = uStack_4a8;
    uStack_3e8 = uStack_500;
    uStack_3f0 = uStack_508;
    uStack_3d8 = uStack_4f0;
    uStack_3e0 = uStack_4f8;
    uStack_3c8 = uStack_4e0;
    uStack_3d0 = uStack_4e8;
    uStack_3b8 = uStack_4d0;
    uStack_3c0 = uStack_4d8;
    uStack_408 = uStack_520;
    uStack_410 = uStack_528;
    uStack_3f8 = uStack_510;
    uStack_400 = uStack_518;
    func_0x000103d8a124(&uStack_160,auStack_7e8,0x113007920,&UNK_10dc8b560);
    func_0x000103d8a124(&uStack_1f0,auStack_7e8,0x113007920,&UNK_10dc8b560);
    puVar3 = &uStack_d0;
    FUN_103d7ed7c(puVar3,&uStack_410);
    func_0x000103d8a16c(&uStack_760,0x113007920,&UNK_10dc8b560);
    if (((ulong)puVar3 & 1) != 0) goto LAB_103d7f530;
    uVar4 = 0x113007920;
    puVar5 = &UNK_10dc8b560;
    puVar3 = &uStack_300;
  }
  func_0x000103d8a16c(puVar3,uVar4,puVar5);
  uVar2 = 0;
LAB_103d7f554:
  return uVar2 & 1;
}



/* Entry: 103d7f8c4; end: 103d7f90b;  */

void FUN_103d7f8c4(void)

{
  return;
}



/* Entry: 103d7f90c; end: 103d7f957;  */

void FUN_103d7f90c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,code *UNRECOVERED_JUMPTABLE)

{
  if ((param_3 & 0xff00) == 0x200) {
    return;
  }
  (*param_6)();
                    /* WARNING: Could not recover jumptable at 0x000103d7f954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_4,param_5);
  return;
}



/* Entry: 103d7f958; end: 103d7f9ab;  */

/* WARNING: Possible PIC construction at 0x000103d7f98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d7f990) */
/* WARNING: Removing unreachable block (ram,0x000103d7f9ac) */
/* WARNING: Removing unreachable block (ram,0x000103d7f9bc) */
/* WARNING: Removing unreachable block (ram,0x000103d7f9b8) */

void FUN_103d7f958(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
    func_0x000107c6157c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103d7f9ac; end: 103d7f9c7;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d7f9ac(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (0xe < param_3 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103d7f9c8; end: 103d7fa1b;  */

/* WARNING: Possible PIC construction at 0x000103d7f9fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d7fa00) */
/* WARNING: Removing unreachable block (ram,0x000103d7fa1c) */
/* WARNING: Removing unreachable block (ram,0x000103d7fa2c) */
/* WARNING: Removing unreachable block (ram,0x000103d7fa28) */

void FUN_103d7f9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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



/* Entry: 103d7fa1c; end: 103d7fa37;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d7fa1c(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (0xe < param_3 >> 0x3c) {
    return;
  }
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



/* Entry: 103d7fa38; end: 103d7fa63;  */

undefined8 FUN_103d7fa38(undefined8 param_1)

{
  FUN_103d88674(param_1,&UNK_11070b638);
  return param_1;
}



/* Entry: 103d7fa64; end: 103d7faab;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d7fa64(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  func_0x000107c61434();
  if ((param_4 >> 0x3d & 1) == 0) {
    param_2 = param_3;
    param_3 = param_4;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103d7faac; end: 103d7fae7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d7faac(void)

{
  ulong in_x4;
  ulong in_x5;
  uint uVar1;
  
  if (0xe < in_x5 >> 0x3c) {
    return;
  }
  FUN_103d7fae8();
  uVar1 = (uint)(in_x5 >> 0x3e);
  if (uVar1 == 1) {
    in_x4 = in_x5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x4);
  return;
}



/* Entry: 103d7fae8; end: 103d7fafb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d7fae8(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (((param_4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x000107c6142c();
  if ((param_4 >> 0x3d & 1) == 0) {
    param_2 = param_3;
    param_3 = param_4;
  }
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



/* Entry: 103d7fafc; end: 103d7fb43;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d7fafc(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  func_0x000107c6142c();
  if ((param_4 >> 0x3d & 1) == 0) {
    param_2 = param_3;
    param_3 = param_4;
  }
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



/* Entry: 103d7fb44; end: 103d7fb77;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d7fb44(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 103d7fb78; end: 103d7fb9f;  */

int FUN_103d7fb78(long param_1)

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



/* Entry: 103d7fba0; end: 103d7fc23;  */

undefined8 FUN_103d7fba0(undefined8 param_1)

{
  FUN_103d83ca8(param_1,&UNK_11070af58);
  return param_1;
}



/* Entry: 103d7fc24; end: 103d7fc43;  */

void FUN_103d7fc24(void)

{
  func_0x000107c61168(&PTR_PTR_1130080d0);
  return;
}



/* Entry: 103d7fc44; end: 103d803c3;  */

void FUN_103d7fc44(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_768 [24];
  undefined1 auStack_750 [24];
  undefined1 auStack_738 [24];
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [24];
  undefined1 auStack_6f0 [96];
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
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
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
  
  puVar15 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar15 = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  puVar6 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  puVar12 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  puVar11 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar11 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xe000000000000000;
  puVar3 = (undefined8 *)(unaff_x20 + 0x50);
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xe000000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xfe;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0x300;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0xf000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  func_0x000103d80410(&uStack_3e8);
  *(undefined8 *)(unaff_x20 + 400) = uStack_380;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_388;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_370;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_378;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_360;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_368;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_358;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_3c0;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_3c8;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_3b0;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_3b8;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_3a0;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_3a8;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_390;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_398;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_3e0;
  *puVar1 = uStack_3e8;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_3d0;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_3d8;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0x300;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x240) = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + 0x248) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_400,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  func_0x000107c61428(puVar15,auStack_418,1,0);
  *puVar15 = uVar9;
  *(undefined1 *)(unaff_x20 + 0x18) = uVar2;
  func_0x000107c61428(param_1 + 0x20,auStack_430,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61428(puVar6,auStack_448,1,0);
  *puVar6 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar8;
  func_0x000107c61428(param_1 + 0x30,auStack_460,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar12,auStack_478,1,0);
  *puVar12 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar13;
  func_0x000107c61428(param_1 + 0x40,auStack_490,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61428(puVar11,auStack_4a8,1,0);
  *puVar11 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar10;
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar10);
  func_0x000107c61428(param_1 + 0x50,auStack_4c0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61428(puVar3,auStack_4d8,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  *puVar3 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c6142c(uVar13);
  func_0x000107c61428(param_1 + 0x60,auStack_4f0,0,0);
  uStack_348 = *(undefined8 *)(param_1 + 0x68);
  uStack_350 = *(undefined8 *)(param_1 + 0x60);
  uStack_338 = *(undefined8 *)(param_1 + 0x78);
  uStack_340 = *(undefined8 *)(param_1 + 0x70);
  uStack_328 = *(undefined8 *)(param_1 + 0x88);
  uStack_330 = *(undefined8 *)(param_1 + 0x80);
  uStack_318 = *(undefined8 *)(param_1 + 0x98);
  uStack_320 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(puVar4,auStack_508,1,0);
  uStack_308 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_310 = *puVar4;
  uStack_2f8 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_300 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_2e8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_2f0 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_2d8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_2e0 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_348;
  *puVar4 = uStack_350;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_320;
  func_0x000103d8a124(&uStack_350,&uStack_170,0x113007890,&UNK_10dc8b518);
  func_0x000103d8a16c(&uStack_310,0x113007890,&UNK_10dc8b518);
  func_0x000107c61428(param_1 + 0xa0,auStack_520,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0xa0);
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(unaff_x20 + 0xa0,auStack_538,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar9;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c6142c(uVar13);
  func_0x000107c61428(param_1 + 0xb0,auStack_550,0,0);
  uStack_2a8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_2b0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_298 = *(undefined8 *)(param_1 + 0xe8);
  uStack_2a0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_288 = *(undefined8 *)(param_1 + 0xf8);
  uStack_290 = *(undefined8 *)(param_1 + 0xf0);
  uStack_278 = *(undefined8 *)(param_1 + 0x108);
  uStack_280 = *(undefined8 *)(param_1 + 0x100);
  uStack_2c8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_2d0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_2b8 = *(undefined8 *)(param_1 + 200);
  uStack_2c0 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c61428(puVar5,auStack_568,1,0);
  uStack_258 = *(undefined8 *)(unaff_x20 + 200);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_270 = *puVar5;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_2c8;
  *puVar5 = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_2b0;
  func_0x000103d8a124(&uStack_2d0,&uStack_170,0x1130078a0,&UNK_10dc8b528);
  func_0x000103d8a16c(&uStack_270,0x1130078a0,&UNK_10dc8b528);
  func_0x000107c61428(param_1 + 0x110,auStack_580,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x110);
  uVar13 = *(undefined8 *)(param_1 + 0x118);
  uVar14 = *(undefined8 *)(param_1 + 0x120);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_598,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar14;
  FUN_103d7f9ac(uVar9,uVar13,uVar14);
  FUN_103d7fa1c(uVar8,uVar10,uVar7);
  func_0x000107c61428((undefined8 *)(param_1 + 0x128),auStack_5b0,0,0);
  uStack_1a8 = *(undefined8 *)(param_1 + 400);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x188);
  uStack_198 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x198);
  uStack_188 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_190 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x150);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x148);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x160);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x158);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x170);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x168);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x180);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x178);
  uStack_208 = *(undefined8 *)(param_1 + 0x130);
  uStack_210 = *(undefined8 *)(param_1 + 0x128);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x140);
  uStack_200 = *(undefined8 *)(param_1 + 0x138);
  uStack_180 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x000107c61428(puVar1,auStack_5c8,1,0);
  uStack_108 = *(undefined8 *)(unaff_x20 + 400);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_170 = *puVar1;
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 400) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_208;
  *puVar1 = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_200;
  func_0x000103d8a124(&uStack_210,&uStack_660,0x113007910,&UNK_10dc8b550);
  func_0x000103d8a16c(&uStack_170,0x113007910,&UNK_10dc8b550);
  func_0x000107c61428(param_1 + 0x1c0,auStack_678,0,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_b0 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_98 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_a0 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_88 = *(undefined8 *)(param_1 + 0x208);
  uStack_90 = *(undefined8 *)(param_1 + 0x200);
  uStack_78 = *(undefined8 *)(param_1 + 0x218);
  uStack_80 = *(undefined8 *)(param_1 + 0x210);
  uStack_c8 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_d0 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_c0 = *(undefined8 *)(param_1 + 0x1d0);
  func_0x000107c61428(unaff_x20 + 0x1c0,auStack_690,1,0);
  uStack_638 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uStack_640 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_628 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_630 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_618 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_620 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_608 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_610 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_658 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uStack_660 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uStack_648 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uStack_650 = *(undefined8 *)(unaff_x20 + 0x1d0);
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_c0;
  func_0x000103d8a124(&uStack_d0,auStack_6f0,0x1130078a0,&UNK_10dc8b528);
  func_0x000103d8a16c(&uStack_660,0x1130078a0,&UNK_10dc8b528);
  func_0x000107c61428(param_1 + 0x220,auStack_6f0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x220);
  uVar8 = *(undefined8 *)(param_1 + 0x228);
  uVar13 = *(undefined8 *)(param_1 + 0x230);
  func_0x000107c61428(unaff_x20 + 0x220,auStack_708,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x220);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x228);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x230);
  *(undefined8 *)(unaff_x20 + 0x220) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x228) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x230) = uVar13;
  FUN_103d7f9ac(uVar9,uVar8,uVar13);
  FUN_103d7fa1c(uVar10,uVar7,uVar14);
  func_0x000107c61428(param_1 + 0x238,auStack_720,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x238);
  uVar9 = *(undefined8 *)(param_1 + 0x240);
  func_0x000107c61428(unaff_x20 + 0x238,auStack_738,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x240);
  *(undefined8 *)(unaff_x20 + 0x238) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x240) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar8);
  func_0x000107c61428(param_1 + 0x248,auStack_750,0,0);
  uVar2 = *(undefined1 *)(param_1 + 0x248);
  func_0x000107c61428(unaff_x20 + 0x248,auStack_768,1,0);
  *(undefined1 *)(unaff_x20 + 0x248) = uVar2;
  return;
}



/* Entry: 103d803c4; end: 103d80477;  */

int FUN_103d803c4(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(param_1 + 0x31);
  if (bVar4 < 2) {
    return 0;
  }
  uVar1 = (bVar4 & 0xfe) + 0x7ffffffe;
  uVar2 = uVar1 & 0x7ffffffe | bVar4 & 1;
  if (uVar2 < 3) {
    uVar2 = 2;
  }
  iVar3 = 0;
  if ((uVar1 & 0x7ffffffe) != 0) {
    iVar3 = uVar2 - 2;
  }
  return iVar3;
}



/* Entry: 103d80478; end: 103d804ab;  */

undefined8 FUN_103d80478(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6ee94(param_2,param_1,&UNK_11070b4b8);
  return param_2;
}



/* Entry: 103d804ac; end: 103d804b3;  */

void FUN_103d804ac(void)

{
  return;
}



/* Entry: 103d804b4; end: 103d804e7;  */

undefined8 FUN_103d804b4(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6ee94(param_2,param_1,&UNK_11070b530);
  return param_2;
}



/* Entry: 103d804e8; end: 103d806fb;  */

uint FUN_103d804e8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[1];
  uVar5 = *param_1;
  uVar3 = param_1[2];
  uVar8 = param_2[1];
  uVar6 = *param_2;
  uVar4 = param_2[2];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 == 0) {
    if (uVar4 != 0) goto LAB_103d80588;
    func_0x000103d8a124(&uStack_80,auStack_b8,0x113008468,&UNK_10dc8d980);
    func_0x000103d8a124(&uStack_a0,auStack_b8,0x113008468,&UNK_10dc8d980);
LAB_103d80694:
    func_0x000103d8a098(uVar5,uVar7,uVar3);
    uVar5 = param_1[3];
    func_0x000100e25fcc(uVar5,param_1[4],param_2[3],param_2[4]);
    uVar1 = (uint)uVar5;
  }
  else {
    if (uVar4 == 0) {
LAB_103d80588:
      func_0x000103d8a124(&uStack_80,auStack_b8,0x113008468,&UNK_10dc8d980);
      func_0x000103d8a124(&uStack_a0,auStack_b8,0x113008468,&UNK_10dc8d980);
      func_0x000103d8a098(uVar5,uVar7,uVar3);
      uVar5 = uVar6;
      uVar7 = uVar8;
      uVar3 = uVar4;
    }
    else {
      if (uVar3 == uVar4) {
        func_0x000103d8a124(&uStack_80,auStack_b8,0x113008468,&UNK_10dc8d980);
        func_0x000103d8a124(&uStack_a0,auStack_b8,0x113008468,&UNK_10dc8d980);
      }
      else {
        func_0x000103d8a124(&uStack_80,auStack_b8,0x113008468,&UNK_10dc8d980);
        func_0x000103d8a124(&uStack_a0,auStack_b8,0x113008468,&UNK_10dc8d980);
        func_0x000107c6157c(uVar3);
        func_0x000107c6157c(uVar4);
        uVar2 = uVar3;
        FUN_103d6cddc(uVar3,uVar4);
        func_0x000107c61574(uVar4);
        func_0x000107c61574(uVar3);
        if ((uVar2 & 1) == 0) {
          func_0x000103d8a098(uVar6,uVar8,uVar4);
          goto LAB_103d806d0;
        }
      }
      uVar2 = uVar5;
      func_0x000100e25fcc(uVar5,uVar7,uVar6,uVar8);
      func_0x000103d8a098(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_103d80694;
    }
LAB_103d806d0:
    func_0x000103d8a098(uVar5,uVar7,uVar3);
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 103d806fc; end: 103d80bfb;  */

void FUN_103d806fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113007948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8b9f8;
  func_0x000107c61520(&UNK_10dc8b9f8,&UNK_11070a8d0);
  puRam0000000113007948 = puVar1;
  return;
}



/* Entry: 103d80bfc; end: 103d80e97;  */

uint FUN_103d80bfc(float *param_1,float *param_2)

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
    if (0xe < uVar16 >> 0x3c) goto LAB_103d80d08;
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
    func_0x000103d8a124(&uStack_120,auStack_198,0x113007858,&UNK_10dc8b4e0);
    func_0x000103d8a124(&uStack_160,auStack_198,0x113007858,&UNK_10dc8b4e0);
    puVar2 = &uStack_e0;
    FUN_103d7ca48(puVar2,&uStack_a8);
    FUN_103d7f9c8(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar3);
    FUN_103d7f9c8(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_103d80e50;
  }
  else if (uVar16 >> 0x3c < 0xf) {
LAB_103d80d08:
    func_0x000103d8a124(&uStack_120,&uStack_a8,0x113007858,&UNK_10dc8b4e0);
    func_0x000103d8a124(&uStack_160,&uStack_a8,0x113007858,&UNK_10dc8b4e0);
    FUN_103d7f9c8(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
    FUN_103d7f9c8(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar3);
  }
  else {
    func_0x000103d8a124(&uStack_120,&uStack_a8,0x113007858,&UNK_10dc8b4e0);
    func_0x000103d8a124(&uStack_160,&uStack_a8,0x113007858,&UNK_10dc8b4e0);
    FUN_103d7f9c8(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
LAB_103d80e50:
    if (*param_1 == *param_2) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      func_0x000100e25fcc(uVar3,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_2 + 2),
                          *(undefined8 *)(param_2 + 4));
      uVar1 = (uint)uVar3;
      goto LAB_103d80e74;
    }
  }
  uVar1 = 0;
LAB_103d80e74:
  return uVar1 & 1;
}



/* Entry: 103d80e98; end: 103d80fd7;  */

void FUN_103d80e98(void)

{
  undefined *puVar1;
  
  if (puRam0000000113007b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8c958;
  func_0x000107c61520(&UNK_10dc8c958,&UNK_11070b7d8);
  puRam0000000113007b08 = puVar1;
  return;
}



/* Entry: 103d80fd8; end: 103d80feb;  */

void FUN_103d80fd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d80fec();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d8102c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d80fec; end: 103d81097;  */

void FUN_103d80fec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113007b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8b658;
  func_0x000107c61520(&UNK_10dc8b658,&UNK_11070ab08);
  puRam0000000113007b58 = puVar1;
  return;
}



/* Entry: 103d81098; end: 103d8109b;  */

void FUN_103d81098(void)

{
  undefined *puVar1;
  
  if (puRam0000000113007b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8b698;
  func_0x000107c61520(&UNK_10dc8b698,&UNK_11070ab08);
  puRam0000000113007b78 = puVar1;
  return;
}


