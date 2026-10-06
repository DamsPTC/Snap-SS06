/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101575f74; end: 101575f87;  */

void FUN_101575f74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5af8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5af8,&UNK_10d961570);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101575f88; end: 1015760bb;  */

void FUN_101575f88(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = *(undefined1 *)(unaff_x20 + 1);
  uStack_58 = unaff_x20[2];
  uStack_50 = unaff_x20[3];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  uStack_48 = unaff_x20[4];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015760bc; end: 101576113;  */

uint FUN_1015760bc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  func_0x0001015794b8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101576114; end: 101576137;  */

void FUN_101576114(void)

{
  func_0x000107c5fb78(0x7463656666452e,0xe700000000000000);
  uRam00000001137ff998 = 0xd00000000000002c;
  uRam00000001137ff9a0 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101576138; end: 10157617f;  */

void FUN_101576138(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961770,0x66,2);
  uRam00000001137ff9b0 = uStack_38;
  uRam00000001137ff9a8 = uStack_40;
  uRam00000001137ff9c0 = uStack_28;
  uRam00000001137ff9b8 = uStack_30;
  uRam00000001137ff9d0 = uStack_18;
  uRam00000001137ff9c8 = uStack_20;
  return;
}



/* Entry: 101576180; end: 10157633b;  */

/* WARNING: Removing unreachable block (ram,0x000101576338) */

void FUN_101576180(undefined8 param_1,long param_2,long param_3)

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
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x00010157b61c();
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10157ca28();
        }
        else {
          if (lVar1 != 3) goto LAB_101576328;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10157cc20();
        }
LAB_101576314:
        (*pcVar4)();
      }
      else {
        if (5 < lVar1) {
          if (lVar1 == 6) {
            pcVar4 = *(code **)(param_3 + 0x198);
            FUN_10157cf14();
          }
          else {
            if (lVar1 != 7) goto LAB_101576328;
            pcVar4 = *(code **)(param_3 + 0x198);
            FUN_10157cb24();
          }
          goto LAB_101576314;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10157cd1c();
          goto LAB_101576314;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10157ce18();
          goto LAB_101576314;
        }
      }
LAB_101576328:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10157633c; end: 101576467;  */

void FUN_10157633c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x00010157b61c();
    (*pcVar2)(&lStack_50,1,&UNK_1103de9a8,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_101576468();
  if (unaff_x21 == 0) {
    FUN_1015764f4();
    FUN_101576580();
    FUN_10157660c();
    FUN_101576698();
    FUN_101576720();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 101576468; end: 1015764f3;  */

void FUN_101576468(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x38);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157ca28();
    (*pcVar1)(&uStack_60,2,&UNK_1103dee10,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015764f4; end: 10157657f;  */

void FUN_1015764f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x58);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157cc20();
    (*pcVar1)(&uStack_60,3,&UNK_1103def10,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101576580; end: 10157660b;  */

void FUN_101576580(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x88);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157cd1c();
    (*pcVar1)(&uStack_70,4,&UNK_1103def90,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10157660c; end: 101576697;  */

void FUN_10157660c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xb8);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x98);
    uStack_70 = *(undefined8 *)(param_1 + 0x90);
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157ce18();
    (*pcVar1)(&uStack_70,5,&UNK_1103df0a8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101576698; end: 10157671f;  */

void FUN_101576698(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xe0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 200);
    uStack_70 = *(undefined8 *)(param_1 + 0xc0);
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_60 = *(undefined8 *)(param_1 + 0xd0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157cf14();
    (*pcVar1)(&uStack_70,6,&UNK_1103df1c0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101576720; end: 1015767ab;  */

void FUN_101576720(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x100);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    uStack_50 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157cb24();
    (*pcVar1)(&uStack_60,7,&UNK_1103dee90,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015767ac; end: 101576827;  */

void FUN_1015767ac(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf000000000000000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xf000000000000000;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0xf000000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xf000000000000000;
  return;
}



/* Entry: 101576828; end: 101576857;  */

undefined1  [16] FUN_101576828(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101576858; end: 10157688b;  */

void FUN_101576858(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10157688c; end: 10157689f;  */

undefined1  [16] FUN_10157688c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10157689c;
  return auVar1;
}



/* Entry: 1015768a0; end: 1015768b3;  */

void FUN_1015768a0(void)

{
  FUN_101576180();
  return;
}



/* Entry: 1015768b4; end: 10157691b;  */

void FUN_1015768b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_148 [264];
  
  func_0x000107c610b4(auStack_148);
  FUN_10157633c(param_1,param_2,param_3);
  return;
}



/* Entry: 10157691c; end: 10157691f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10157691c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101576920; end: 101576957;  */

uint FUN_101576920(long param_1,long param_2)

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
  func_0x00010157f6f0();
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



/* Entry: 101576958; end: 1015769a7;  */

uint FUN_101576958(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_128,param_1,0x108);
  func_0x000107c610b4(auStack_230);
  FUN_1015799e4(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 1015769a8; end: 101576a47;  */

/* WARNING: Possible PIC construction at 0x0001015769f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101576a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015769f8) */
/* WARNING: Removing unreachable block (ram,0x000101576a08) */

void FUN_1015769a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db56a8 != -1) {
    func_0x000107c61568(0x112db56a8,FUN_101576138);
  }
  uVar5 = uRam00000001137ff9d0;
  uVar4 = uRam00000001137ff9c8;
  uVar3 = uRam00000001137ff9c0;
  uVar2 = uRam00000001137ff9b8;
  uVar1 = uRam00000001137ff9b0;
  *param_1 = uRam00000001137ff9a8;
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



/* Entry: 101576a48; end: 101576a83;  */

void FUN_101576a48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5ae8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5ae8,&UNK_10d961568);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101576a84; end: 101576b8f;  */

void FUN_101576a84(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_180 [72];
  undefined1 auStack_138 [264];
  
  func_0x000107c610b4(auStack_138);
  func_0x000107c6068c(auStack_180,0);
  func_0x000107c5fa50(auStack_180,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101576b90; end: 101576c53;  */

uint FUN_101576b90(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_230,param_1,0x108);
  func_0x000107c610b4(auStack_128,param_2,0x108);
  FUN_1015799e4(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 101576c54; end: 101576c9b;  */

void FUN_101576c54(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961cd8,7,2);
  uRam00000001137ff9f0 = uStack_38;
  uRam00000001137ff9e8 = uStack_40;
  uRam00000001137ffa00 = uStack_28;
  uRam00000001137ff9f8 = uStack_30;
  uRam00000001137ffa10 = uStack_18;
  uRam00000001137ffa08 = uStack_20;
  return;
}



/* Entry: 101576c9c; end: 101576cd7;  */

undefined1  [16] FUN_101576c9c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db56c0 != -1) {
    func_0x000107c61568(0x112db56c0,0x101576be4);
  }
  auVar1._8_8_ = uRam00000001137ff9e0;
  auVar1._0_8_ = uRam00000001137ff9d8;
  func_0x000107c61434(uRam00000001137ff9e0);
  return auVar1;
}



/* Entry: 101576cd8; end: 101576d3f;  */

void FUN_101576cd8(void)

{
  FUN_101577298();
  return;
}



/* Entry: 101576d40; end: 101576d77;  */

uint FUN_101576d40(long param_1,long param_2)

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
  func_0x00010157f6b0();
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



/* Entry: 101576d78; end: 101576d97;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101576d78(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  long *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar18 = *param_1;
  lVar15 = param_1[2];
  uVar13 = param_1[3];
  lVar20 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[2];
  pbVar27 = (byte *)unaff_x20[3];
  if ((char)param_1[1] == '\x01') {
    if (lVar18 == 0) {
      if (lVar20 == 0) goto FUN_100e25fcc;
    }
    else if (lVar18 == 1) {
      if (lVar20 == 1) {
FUN_100e25fcc:
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
        uVar5 = (uint)((ulong)pbVar27 >> 0x20);
        uVar19 = uVar5 >> 0x1e;
        uVar6 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar6 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar29 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar22 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar22 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar21 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar21,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar22 = (ulong)(iVar21 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto LAB_100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar22 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar22 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar22 = 0;
          if (1 < uVar23) goto LAB_100e26050;
LAB_100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
LAB_100e2608c:
            if (uVar22 == uVar24) goto LAB_100e26094;
          }
          else {
            iVar21 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar15)) {
LAB_100e26094:
              if ((long)uVar22 < 1) goto LAB_100e26128;
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
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                  pbVar29 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
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
                unaff_x24 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar29 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                    goto LAB_100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto LAB_100e26260;
                }
                lVar18 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar29 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                }
                unaff_x23 = unaff_x24 + -lVar18;
                if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar7)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar29) {
                    pbVar29 = unaff_x23;
                  }
                  pbVar29 = pbVar29 + (long)pbVar10;
                }
              }
LAB_100e262a4:
              unaff_x20 = (long *)((ulong)pbVar27 & 0x3fffffffffffffff);
              unaff_x21 = 0;
              FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,lVar15,
                            uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto LAB_100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          auVar46._8_8_ = pbVar29;
          auVar46._0_8_ = plVar9;
          return auVar46;
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
        pbVar12 = (byte *)*plVar9;
        pbVar10 = (byte *)plVar9[1];
        pbVar25 = (byte *)plVar9[3];
        bVar30 = *(byte *)(plVar9 + 5);
        pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                          (ulong)*(byte *)(plVar9 + 2));
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar29[0x28] == 0) {
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto LAB_100e266f0;
            }
            goto LAB_100e266ec;
          }
          if (bVar30 != 1) {
            if (pbVar29[0x28] == 2) {
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              pbVar26 = *(byte **)(pbVar29 + 0x18);
              if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
              if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (pbVar26 != (byte *)0x0) {
                  FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(pbVar26);
                  func_0x000107c61174();
                  pbVar10 = pbVar25;
                  pbVar29 = pbVar26;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(pbVar26);
                  pbVar25 = pbVar10;
                  goto joined_r0x000100e266a4;
                }
              }
            }
            goto LAB_100e266ec;
          }
          if (pbVar29[0x28] != 1) goto LAB_100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto LAB_100e266ec;
          pbVar12 = pbVar10;
          pbVar14 = pbVar27;
          if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar16,pbVar17,0);
            auVar48._8_8_ = pbVar14;
            auVar48._0_8_ = pbVar12;
            return auVar48;
          }
        }
        else {
          pbVar28 = (byte *)plVar9[4];
          if (4 < bVar30) {
            if (bVar30 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                if (pbVar29[0x28] == 6) {
                  lVar18 = *(long *)(pbVar29 + 0x20);
                  lVar15 = *(long *)(pbVar29 + 0x18);
                  bVar30 = pbVar29[8] | (byte)lVar15;
                  bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                  bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                  bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                  bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                  bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                  bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                  bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                  bVar38 = pbVar29[0x10] | (byte)lVar18;
                  bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                  bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                  bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                  bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                  bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                  bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                  bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
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
                  auVar46 = NEON_ext(auVar3,auVar4,8,1);
                  if (CONCAT17(bVar37 | auVar46[7],
                               CONCAT16(bVar36 | auVar46[6],
                                        CONCAT15(bVar35 | auVar46[5],
                                                 CONCAT14(bVar34 | auVar46[4],
                                                          CONCAT13(bVar33 | auVar46[3],
                                                                   CONCAT12(bVar32 | auVar46[2],
                                                                            CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                      *(long *)pbVar29 == 0) goto LAB_100e26708;
                }
                goto LAB_100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto LAB_100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto LAB_100e266ec;
              lVar18 = *(long *)(pbVar29 + 0x20);
              lVar15 = *(long *)(pbVar29 + 0x18);
              bVar30 = pbVar29[8] | (byte)lVar15;
              bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
              bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
              bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
              bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
              bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
              bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
              bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
              bVar38 = pbVar29[0x10] | (byte)lVar18;
              bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
              bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
              bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
              bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
              bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
              bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
              bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
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
              pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                         CONCAT16(bVar36 | auVar46[6],
                                                  CONCAT15(bVar35 | auVar46[5],
                                                           CONCAT14(bVar34 | auVar46[4],
                                                                    CONCAT13(bVar33 | auVar46[3],
                                                                             CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
              goto joined_r0x000100e26620;
            }
            if (pbVar29[0x28] != 5) goto LAB_100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto LAB_100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto FUN_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto LAB_100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto LAB_100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto LAB_100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto LAB_100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto LAB_100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto LAB_100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
LAB_100e266ec:
                uVar13 = 0;
LAB_100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto LAB_100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
LAB_100e26708:
        uVar13 = 1;
        goto LAB_100e266f0;
      }
    }
    else if (lVar20 == 2) goto FUN_100e25fcc;
  }
  else if (lVar20 == lVar18) goto FUN_100e25fcc;
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 101576d98; end: 101576e37;  */

/* WARNING: Possible PIC construction at 0x000101576de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101576df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101576de8) */
/* WARNING: Removing unreachable block (ram,0x000101576df8) */

void FUN_101576d98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db56c8 != -1) {
    func_0x000107c61568(0x112db56c8,FUN_101576c54);
  }
  uVar5 = uRam00000001137ffa10;
  uVar4 = uRam00000001137ffa08;
  uVar3 = uRam00000001137ffa00;
  uVar2 = uRam00000001137ff9f8;
  uVar1 = uRam00000001137ff9f0;
  *param_1 = uRam00000001137ff9e8;
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



/* Entry: 101576e38; end: 101576e4b;  */

void FUN_101576e38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5ad8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5ad8,&UNK_10d961560);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101576e4c; end: 101576e83;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101576e4c(undefined8 *param_1,undefined8 param_2)

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
  FUN_10157ca28();
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



/* Entry: 101576e84; end: 101576ea3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101576e84(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar20 = *param_1;
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  lVar18 = *param_2;
  lVar15 = param_2[2];
  uVar13 = param_2[3];
  if ((char)param_2[1] == '\x01') {
    if (lVar18 == 0) {
      if (lVar20 == 0) goto FUN_100e25fcc;
    }
    else if (lVar18 == 1) {
      if (lVar20 == 1) {
FUN_100e25fcc:
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
        uVar5 = (uint)((ulong)pbVar27 >> 0x20);
        uVar19 = uVar5 >> 0x1e;
        uVar6 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar6 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar29 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar22 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar22 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar21 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar21,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar22 = (ulong)(iVar21 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto LAB_100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar22 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar22 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar22 = 0;
          if (1 < uVar23) goto LAB_100e26050;
LAB_100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
LAB_100e2608c:
            if (uVar22 == uVar24) goto LAB_100e26094;
          }
          else {
            iVar21 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar15)) {
LAB_100e26094:
              if ((long)uVar22 < 1) goto LAB_100e26128;
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
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                  pbVar29 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
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
                unaff_x24 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar29 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                    goto LAB_100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto LAB_100e26260;
                }
                lVar18 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar29 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                }
                unaff_x23 = unaff_x24 + -lVar18;
                if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar7)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar29) {
                    pbVar29 = unaff_x23;
                  }
                  pbVar29 = pbVar29 + (long)pbVar10;
                }
              }
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,lVar15,
                            uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto LAB_100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          auVar46._8_8_ = pbVar29;
          auVar46._0_8_ = plVar9;
          return auVar46;
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
        pbVar12 = (byte *)*plVar9;
        pbVar10 = (byte *)plVar9[1];
        pbVar25 = (byte *)plVar9[3];
        bVar30 = *(byte *)(plVar9 + 5);
        pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                          (ulong)*(byte *)(plVar9 + 2));
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar29[0x28] == 0) {
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto LAB_100e266f0;
            }
            goto LAB_100e266ec;
          }
          if (bVar30 != 1) {
            if (pbVar29[0x28] == 2) {
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              pbVar26 = *(byte **)(pbVar29 + 0x18);
              if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
              if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (pbVar26 != (byte *)0x0) {
                  FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(pbVar26);
                  func_0x000107c61174();
                  pbVar10 = pbVar25;
                  pbVar29 = pbVar26;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(pbVar26);
                  pbVar25 = pbVar10;
                  goto joined_r0x000100e266a4;
                }
              }
            }
            goto LAB_100e266ec;
          }
          if (pbVar29[0x28] != 1) goto LAB_100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto LAB_100e266ec;
          pbVar12 = pbVar10;
          pbVar14 = pbVar27;
          if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar16,pbVar17,0);
            auVar48._8_8_ = pbVar14;
            auVar48._0_8_ = pbVar12;
            return auVar48;
          }
        }
        else {
          pbVar28 = (byte *)plVar9[4];
          if (4 < bVar30) {
            if (bVar30 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                if (pbVar29[0x28] == 6) {
                  lVar18 = *(long *)(pbVar29 + 0x20);
                  lVar15 = *(long *)(pbVar29 + 0x18);
                  bVar30 = pbVar29[8] | (byte)lVar15;
                  bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                  bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                  bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                  bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                  bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                  bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                  bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                  bVar38 = pbVar29[0x10] | (byte)lVar18;
                  bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                  bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                  bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                  bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                  bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                  bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                  bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
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
                  auVar46 = NEON_ext(auVar3,auVar4,8,1);
                  if (CONCAT17(bVar37 | auVar46[7],
                               CONCAT16(bVar36 | auVar46[6],
                                        CONCAT15(bVar35 | auVar46[5],
                                                 CONCAT14(bVar34 | auVar46[4],
                                                          CONCAT13(bVar33 | auVar46[3],
                                                                   CONCAT12(bVar32 | auVar46[2],
                                                                            CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                      *(long *)pbVar29 == 0) goto LAB_100e26708;
                }
                goto LAB_100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto LAB_100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto LAB_100e266ec;
              lVar18 = *(long *)(pbVar29 + 0x20);
              lVar15 = *(long *)(pbVar29 + 0x18);
              bVar30 = pbVar29[8] | (byte)lVar15;
              bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
              bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
              bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
              bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
              bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
              bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
              bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
              bVar38 = pbVar29[0x10] | (byte)lVar18;
              bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
              bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
              bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
              bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
              bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
              bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
              bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
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
              pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                         CONCAT16(bVar36 | auVar46[6],
                                                  CONCAT15(bVar35 | auVar46[5],
                                                           CONCAT14(bVar34 | auVar46[4],
                                                                    CONCAT13(bVar33 | auVar46[3],
                                                                             CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
              goto joined_r0x000100e26620;
            }
            if (pbVar29[0x28] != 5) goto LAB_100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto LAB_100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto FUN_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto LAB_100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto LAB_100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto LAB_100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto LAB_100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto LAB_100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto LAB_100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
LAB_100e266ec:
                uVar13 = 0;
LAB_100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto LAB_100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
LAB_100e26708:
        uVar13 = 1;
        goto LAB_100e266f0;
      }
    }
    else if (lVar20 == 2) goto FUN_100e25fcc;
  }
  else if (lVar20 == lVar18) goto FUN_100e25fcc;
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 101576ea4; end: 101576f13;  */

void FUN_101576ea4(void)

{
  func_0x000107c5fb78(0xd00000000000001a,0x800000010efb2f90);
  uRam00000001137ffa18 = 0xd00000000000002c;
  uRam00000001137ffa20 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101576f14; end: 101576f5b;  */

void FUN_101576f14(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961cd8,7,2);
  uRam00000001137ffa30 = uStack_38;
  uRam00000001137ffa28 = uStack_40;
  uRam00000001137ffa40 = uStack_28;
  uRam00000001137ffa38 = uStack_30;
  uRam00000001137ffa50 = uStack_18;
  uRam00000001137ffa48 = uStack_20;
  return;
}



/* Entry: 101576f5c; end: 101576f97;  */

undefined1  [16] FUN_101576f5c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db56e0 != -1) {
    func_0x000107c61568(0x112db56e0,FUN_101576ea4);
  }
  auVar1._8_8_ = uRam00000001137ffa20;
  auVar1._0_8_ = uRam00000001137ffa18;
  func_0x000107c61434(uRam00000001137ffa20);
  return auVar1;
}



/* Entry: 101576f98; end: 101576fff;  */

void FUN_101576f98(void)

{
  FUN_101577298();
  return;
}



/* Entry: 101577000; end: 101577037;  */

uint FUN_101577000(long param_1,long param_2)

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
  func_0x00010157f670();
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



/* Entry: 101577038; end: 10157708f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101577038(ulong *param_1)

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
  ulong uVar14;
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
  ulong *unaff_x20;
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
  
  uVar14 = param_1[2];
  uVar16 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  uVar20 = (ulong)(*unaff_x20 != 0);
  if ((char)unaff_x20[1] != '\x01') {
    uVar20 = *unaff_x20;
  }
  if ((char)param_1[1] == '\x01') {
    if (*param_1 == 0) {
      if (uVar20 == 0) goto FUN_100e25fcc;
    }
    else if (uVar20 == 1) {
FUN_100e25fcc:
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
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar9;
        pbVar12 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar9 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, uVar14 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar9 >> 0x20);
            if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar19 = (int)(uVar14 >> 0x20);
          if (SBORROW4(iVar19,(int)uVar14)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)uVar14)) goto LAB_100e26094;
LAB_100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
            if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
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
            uVar22 = *(long *)(uVar14 + 0x18) - *(long *)(uVar14 + 0x10);
            if (SBORROW8(*(long *)(uVar14 + 0x18),*(long *)(uVar14 + 0x10))) {
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
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
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
              unaff_x24 = pbVar25;
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
                  goto LAB_100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
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
              unaff_x25 = pbVar25;
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
LAB_100e262a4:
            unaff_x20 = (ulong *)((ulong)pbVar25 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,uVar14,
                          uVar16);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar16;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar20 == 0);
          }
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
        pbVar11 = *(byte **)pbVar8;
        pbVar9 = *(byte **)(pbVar8 + 8);
        pbVar23 = *(byte **)(pbVar8 + 0x18);
        bVar27 = pbVar8[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar13 = pbVar9;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar24 = *(long *)pbVar12;
              uVar10 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar11,lVar24,uVar10);
              return (byte *)(ulong)((uint)pbVar11 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar12 + 8);
            pbVar17 = *(byte **)(pbVar12 + 0x10);
            lVar24 = *(long *)pbVar12;
            uVar10 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar24,uVar10);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar11 = pbVar9;
            pbVar13 = pbVar25;
            if ((pbVar9 == pbVar15) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar12;
            pbVar17 = *(byte **)(pbVar12 + 8);
            lVar24 = *(long *)(pbVar12 + 0x18);
            if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar24);
              func_0x000107c61174();
              pbVar9 = pbVar23;
              func_0x000107c60118();
              func_0x000107c61170(pbVar23);
              func_0x000107c61170(lVar24);
              pbVar23 = pbVar9;
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
          )(pbVar11,pbVar13,pbVar15,pbVar17,0);
          return pbVar11;
        }
        lVar26 = *(long *)(pbVar8 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar12;
            pbVar17 = *(byte **)(pbVar12 + 8);
            if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
               (pbVar11 = pbVar25, pbVar13 = pbVar23, pbVar15 = *(byte **)(pbVar12 + 0x10),
               pbVar17 = *(byte **)(pbVar12 + 0x18),
               pbVar25 == *(byte **)(pbVar12 + 0x10) && pbVar23 == *(byte **)(pbVar12 + 0x18))) {
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
          pbVar17 = *(byte **)(pbVar12 + 0x10);
          lVar24 = *(long *)(pbVar12 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar12 + 8);
            pbVar11 = pbVar9;
            pbVar13 = pbVar25;
            if ((pbVar9 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar12 + 0x18),lVar24,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar12 + 0x20);
            lVar24 = *(long *)(pbVar12 + 0x18);
            bVar27 = pbVar12[8] | (byte)lVar24;
            bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar12[0x10] | (byte)lVar26;
            bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar11 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar12 + 0x20);
          lVar24 = *(long *)(pbVar12 + 0x18);
          bVar27 = pbVar12[8] | (byte)lVar24;
          bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar12[0x10] | (byte)lVar26;
          bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        uVar14 = *(ulong *)(pbVar12 + 8);
        uVar16 = *(ulong *)(pbVar12 + 0x10);
        lVar24 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
  }
  else if (uVar20 == *param_1) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 101577090; end: 10157712f;  */

/* WARNING: Possible PIC construction at 0x0001015770dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015770ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015770e0) */
/* WARNING: Removing unreachable block (ram,0x0001015770f0) */

void FUN_101577090(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db56e8 != -1) {
    func_0x000107c61568(0x112db56e8,FUN_101576f14);
  }
  uVar5 = uRam00000001137ffa50;
  uVar4 = uRam00000001137ffa48;
  uVar3 = uRam00000001137ffa40;
  uVar2 = uRam00000001137ffa38;
  uVar1 = uRam00000001137ffa30;
  *param_1 = uRam00000001137ffa28;
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



/* Entry: 101577130; end: 101577143;  */

void FUN_101577130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5ac8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5ac8,&UNK_10d961558);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101577144; end: 10157717b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101577144(undefined8 *param_1,undefined8 param_2)

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
  FUN_10157cb24();
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



/* Entry: 10157717c; end: 1015771df;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10157717c(ulong *param_1,ulong *param_2)

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
  ulong uVar15;
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
  
  pbVar11 = (byte *)param_1[2];
  pbVar13 = (byte *)param_1[3];
  uVar15 = param_2[2];
  uVar17 = param_2[3];
  uVar21 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar21 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar21 == 0) goto FUN_100e25fcc;
    }
    else if (uVar21 == 1) {
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
        uVar4 = (uint)((ulong)pbVar13 >> 0x20);
        uVar19 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar17 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar11;
        pbVar12 = pbVar13;
        if ((ulong)pbVar13 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar11 != (byte *)0x0) || (pbVar13 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar15 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar13 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar11 >> 0x20);
            if (SBORROW4(iVar20,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar22 == 0) {
            uVar23 = uVar17 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar20 = (int)(uVar15 >> 0x20);
          if (SBORROW4(iVar20,(int)uVar15)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)uVar15)) goto LAB_100e26094;
LAB_100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
            if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar22 == 2) {
            uVar23 = *(long *)(uVar15 + 0x18) - *(long *)(uVar15 + 0x10);
            if (SBORROW8(*(long *)(uVar15 + 0x18),*(long *)(uVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
LAB_100e2608c:
            if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar21 < 1) goto LAB_100e26128;
            if (uVar19 < 2) {
              if (uVar19 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar13;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar13 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar13 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar13 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar13 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar13 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar13 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                              (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto LAB_100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar13;
              if (pbVar11 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar12 = pbVar11;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar12);
                func_0x000107c5ec38();
                unaff_x19 = pbVar11;
                if (pbVar11 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar12) {
                    pbVar12 = unaff_x23;
                  }
                  pbVar12 = pbVar12 + (long)pbVar11;
                  goto LAB_100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar19 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
              }
              lVar25 = *(long *)(pbVar11 + 0x10);
              unaff_x24 = *(byte **)(pbVar11 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + (lVar25 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar11;
              unaff_x25 = pbVar13;
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
LAB_100e262a4:
            unaff_x20 = (ulong)pbVar13 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar12,uVar15,
                          uVar17);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar17;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar21 == 0);
          }
        }
LAB_100e262b0:
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
        *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
        pbVar10 = *(byte **)pbVar8;
        pbVar11 = *(byte **)(pbVar8 + 8);
        pbVar24 = *(byte **)(pbVar8 + 0x18);
        bVar27 = pbVar8[0x28];
        pbVar13 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar14 = pbVar11;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar25 = *(long *)pbVar12;
              uVar9 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar25,uVar9);
              return (byte *)(ulong)((uint)pbVar10 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar12 + 8);
            pbVar18 = *(byte **)(pbVar12 + 0x10);
            lVar25 = *(long *)pbVar12;
            uVar9 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar25,uVar9);
            if (((ulong)pbVar10 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 == pbVar16) && (pbVar13 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar12;
            pbVar18 = *(byte **)(pbVar12 + 8);
            lVar25 = *(long *)(pbVar12 + 0x18);
            if ((pbVar10 == pbVar16) && (pbVar11 == pbVar18)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar25 == 0) {
                return (byte *)0x0;
              }
              FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar25);
              func_0x000107c61174();
              pbVar11 = pbVar24;
              func_0x000107c60118();
              func_0x000107c61170(pbVar24);
              func_0x000107c61170(lVar25);
              pbVar24 = pbVar11;
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
          )(pbVar10,pbVar14,pbVar16,pbVar18,0);
          return pbVar10;
        }
        lVar26 = *(long *)(pbVar8 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar12;
            pbVar18 = *(byte **)(pbVar12 + 8);
            if (((pbVar10 == pbVar16) && (pbVar11 == pbVar18)) &&
               (pbVar10 = pbVar13, pbVar14 = pbVar24, pbVar16 = *(byte **)(pbVar12 + 0x10),
               pbVar18 = *(byte **)(pbVar12 + 0x18),
               pbVar13 == *(byte **)(pbVar12 + 0x10) && pbVar24 == *(byte **)(pbVar12 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar12[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar12 != ((uint)pbVar10 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar12 + 0x10);
          lVar25 = *(long *)(pbVar12 + 0x20);
          if (pbVar13 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar12 + 8);
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 != pbVar16) || (pbVar13 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar24 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar25)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar12 + 0x18),lVar25,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
              lVar26 == 0) && pbVar13 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar12 + 0x20);
            lVar25 = *(long *)(pbVar12 + 0x18);
            bVar27 = pbVar12[8] | (byte)lVar25;
            bVar28 = pbVar12[9] | (byte)((ulong)lVar25 >> 8);
            bVar29 = pbVar12[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar30 = pbVar12[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar31 = pbVar12[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar32 = pbVar12[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar33 = pbVar12[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar34 = pbVar12[0xf] | (byte)((ulong)lVar25 >> 0x38);
            bVar35 = pbVar12[0x10] | (byte)lVar26;
            bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar10 == (byte *)0x1) &&
             (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar12 + 0x20);
          lVar25 = *(long *)(pbVar12 + 0x18);
          bVar27 = pbVar12[8] | (byte)lVar25;
          bVar28 = pbVar12[9] | (byte)((ulong)lVar25 >> 8);
          bVar29 = pbVar12[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar30 = pbVar12[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar31 = pbVar12[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar32 = pbVar12[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar33 = pbVar12[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar34 = pbVar12[0xf] | (byte)((ulong)lVar25 >> 0x38);
          bVar35 = pbVar12[0x10] | (byte)lVar26;
          bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
          lVar25 = CONCAT17(bVar34 | auVar43[7],
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
        uVar15 = *(ulong *)(pbVar12 + 8);
        uVar17 = *(ulong *)(pbVar12 + 0x10);
        lVar25 = *(long *)pbVar12;
        uVar9 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar25,uVar9);
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
  else if (uVar21 == *param_2) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 1015771e0; end: 10157724f;  */

void FUN_1015771e0(void)

{
  func_0x000107c5fb78(0xd000000000000011,0x800000010efb2f70);
  uRam00000001137ffa58 = 0xd00000000000002c;
  uRam00000001137ffa60 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101577250; end: 101577297;  */

void FUN_101577250(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961762,0xd,2);
  uRam00000001137ffa70 = uStack_38;
  uRam00000001137ffa68 = uStack_40;
  uRam00000001137ffa80 = uStack_28;
  uRam00000001137ffa78 = uStack_30;
  uRam00000001137ffa90 = uStack_18;
  uRam00000001137ffa88 = uStack_20;
  return;
}



/* Entry: 101577298; end: 101577347;  */

void FUN_101577298(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      pcVar4 = *(code **)(param_3 + 0x180);
      (*param_4)();
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101577348; end: 1015773eb;  */

void FUN_101577348(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,code *param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  long lStack_60;
  undefined1 uStack_58;
  
  if (param_2 != 0) {
    pcVar2 = *(code **)(param_7 + 0x80);
    uVar1 = param_1;
    lStack_60 = param_2;
    uStack_58 = param_3;
    (*param_8)();
    (*pcVar2)(&lStack_60,1,param_9,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1015773ec; end: 101577427;  */

undefined1  [16] FUN_1015773ec(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db5700 != -1) {
    func_0x000107c61568(0x112db5700,FUN_1015771e0);
  }
  auVar1._8_8_ = uRam00000001137ffa60;
  auVar1._0_8_ = uRam00000001137ffa58;
  func_0x000107c61434(uRam00000001137ffa60);
  return auVar1;
}



/* Entry: 101577428; end: 10157748f;  */

void FUN_101577428(void)

{
  FUN_101577298();
  return;
}



/* Entry: 101577490; end: 1015774c7;  */

uint FUN_101577490(long param_1,long param_2)

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
  func_0x00010157f630();
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



/* Entry: 1015774c8; end: 10157751f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015774c8(ulong *param_1)

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
  ulong uVar14;
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
  ulong *unaff_x20;
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
  
  uVar14 = param_1[2];
  uVar16 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  uVar20 = (ulong)(*unaff_x20 != 0);
  if ((char)unaff_x20[1] != '\x01') {
    uVar20 = *unaff_x20;
  }
  if ((char)param_1[1] == '\x01') {
    if (*param_1 == 0) {
      if (uVar20 == 0) goto FUN_100e25fcc;
    }
    else if (uVar20 == 1) {
FUN_100e25fcc:
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
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar9;
        pbVar12 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar9 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, uVar14 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar9 >> 0x20);
            if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar19 = (int)(uVar14 >> 0x20);
          if (SBORROW4(iVar19,(int)uVar14)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)uVar14)) goto LAB_100e26094;
LAB_100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
            if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
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
            uVar22 = *(long *)(uVar14 + 0x18) - *(long *)(uVar14 + 0x10);
            if (SBORROW8(*(long *)(uVar14 + 0x18),*(long *)(uVar14 + 0x10))) {
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
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
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
              unaff_x24 = pbVar25;
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
                  goto LAB_100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
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
              unaff_x25 = pbVar25;
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
LAB_100e262a4:
            unaff_x20 = (ulong *)((ulong)pbVar25 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,uVar14,
                          uVar16);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar16;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar20 == 0);
          }
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
        pbVar11 = *(byte **)pbVar8;
        pbVar9 = *(byte **)(pbVar8 + 8);
        pbVar23 = *(byte **)(pbVar8 + 0x18);
        bVar27 = pbVar8[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar13 = pbVar9;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar24 = *(long *)pbVar12;
              uVar10 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar11,lVar24,uVar10);
              return (byte *)(ulong)((uint)pbVar11 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar12 + 8);
            pbVar17 = *(byte **)(pbVar12 + 0x10);
            lVar24 = *(long *)pbVar12;
            uVar10 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar24,uVar10);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar11 = pbVar9;
            pbVar13 = pbVar25;
            if ((pbVar9 == pbVar15) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar12;
            pbVar17 = *(byte **)(pbVar12 + 8);
            lVar24 = *(long *)(pbVar12 + 0x18);
            if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar24);
              func_0x000107c61174();
              pbVar9 = pbVar23;
              func_0x000107c60118();
              func_0x000107c61170(pbVar23);
              func_0x000107c61170(lVar24);
              pbVar23 = pbVar9;
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
          )(pbVar11,pbVar13,pbVar15,pbVar17,0);
          return pbVar11;
        }
        lVar26 = *(long *)(pbVar8 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar12;
            pbVar17 = *(byte **)(pbVar12 + 8);
            if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
               (pbVar11 = pbVar25, pbVar13 = pbVar23, pbVar15 = *(byte **)(pbVar12 + 0x10),
               pbVar17 = *(byte **)(pbVar12 + 0x18),
               pbVar25 == *(byte **)(pbVar12 + 0x10) && pbVar23 == *(byte **)(pbVar12 + 0x18))) {
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
          pbVar17 = *(byte **)(pbVar12 + 0x10);
          lVar24 = *(long *)(pbVar12 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar12 + 8);
            pbVar11 = pbVar9;
            pbVar13 = pbVar25;
            if ((pbVar9 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar12 + 0x18),lVar24,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar12 + 0x20);
            lVar24 = *(long *)(pbVar12 + 0x18);
            bVar27 = pbVar12[8] | (byte)lVar24;
            bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar12[0x10] | (byte)lVar26;
            bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar11 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar12 + 0x20);
          lVar24 = *(long *)(pbVar12 + 0x18);
          bVar27 = pbVar12[8] | (byte)lVar24;
          bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar12[0x10] | (byte)lVar26;
          bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        uVar14 = *(ulong *)(pbVar12 + 8);
        uVar16 = *(ulong *)(pbVar12 + 0x10);
        lVar24 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
  }
  else if (uVar20 == *param_1) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 101577520; end: 1015775bf;  */

/* WARNING: Possible PIC construction at 0x00010157756c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010157757c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101577570) */
/* WARNING: Removing unreachable block (ram,0x000101577580) */

void FUN_101577520(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5708 != -1) {
    func_0x000107c61568(0x112db5708,FUN_101577250);
  }
  uVar5 = uRam00000001137ffa90;
  uVar4 = uRam00000001137ffa88;
  uVar3 = uRam00000001137ffa80;
  uVar2 = uRam00000001137ffa78;
  uVar1 = uRam00000001137ffa70;
  *param_1 = uRam00000001137ffa68;
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



/* Entry: 1015775c0; end: 1015775d3;  */

void FUN_1015775c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5ab8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5ab8,&UNK_10d961550);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015775d4; end: 101577607;  */

void FUN_1015775d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 101577608; end: 10157771b;  */

void FUN_101577608(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = *(undefined1 *)(unaff_x20 + 1);
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10157771c; end: 10157777f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10157771c(ulong *param_1,ulong *param_2)

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
  ulong uVar15;
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
  
  pbVar11 = (byte *)param_1[2];
  pbVar13 = (byte *)param_1[3];
  uVar15 = param_2[2];
  uVar17 = param_2[3];
  uVar21 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar21 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar21 == 0) goto FUN_100e25fcc;
    }
    else if (uVar21 == 1) {
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
        uVar4 = (uint)((ulong)pbVar13 >> 0x20);
        uVar19 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar17 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar11;
        pbVar12 = pbVar13;
        if ((ulong)pbVar13 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar11 != (byte *)0x0) || (pbVar13 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar15 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar13 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar11 >> 0x20);
            if (SBORROW4(iVar20,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar22 == 0) {
            uVar23 = uVar17 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar20 = (int)(uVar15 >> 0x20);
          if (SBORROW4(iVar20,(int)uVar15)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)uVar15)) goto LAB_100e26094;
LAB_100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
            if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar22 == 2) {
            uVar23 = *(long *)(uVar15 + 0x18) - *(long *)(uVar15 + 0x10);
            if (SBORROW8(*(long *)(uVar15 + 0x18),*(long *)(uVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
LAB_100e2608c:
            if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar21 < 1) goto LAB_100e26128;
            if (uVar19 < 2) {
              if (uVar19 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar13;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar13 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar13 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar13 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar13 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar13 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar13 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                              (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto LAB_100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar13;
              if (pbVar11 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar12 = pbVar11;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar12);
                func_0x000107c5ec38();
                unaff_x19 = pbVar11;
                if (pbVar11 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar12) {
                    pbVar12 = unaff_x23;
                  }
                  pbVar12 = pbVar12 + (long)pbVar11;
                  goto LAB_100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar19 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
              }
              lVar25 = *(long *)(pbVar11 + 0x10);
              unaff_x24 = *(byte **)(pbVar11 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + (lVar25 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar11;
              unaff_x25 = pbVar13;
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
LAB_100e262a4:
            unaff_x20 = (ulong)pbVar13 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar12,uVar15,
                          uVar17);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar17;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar21 == 0);
          }
        }
LAB_100e262b0:
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
        *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
        pbVar10 = *(byte **)pbVar8;
        pbVar11 = *(byte **)(pbVar8 + 8);
        pbVar24 = *(byte **)(pbVar8 + 0x18);
        bVar27 = pbVar8[0x28];
        pbVar13 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar14 = pbVar11;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar25 = *(long *)pbVar12;
              uVar9 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar25,uVar9);
              return (byte *)(ulong)((uint)pbVar10 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar12 + 8);
            pbVar18 = *(byte **)(pbVar12 + 0x10);
            lVar25 = *(long *)pbVar12;
            uVar9 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar25,uVar9);
            if (((ulong)pbVar10 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 == pbVar16) && (pbVar13 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar12;
            pbVar18 = *(byte **)(pbVar12 + 8);
            lVar25 = *(long *)(pbVar12 + 0x18);
            if ((pbVar10 == pbVar16) && (pbVar11 == pbVar18)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar25 == 0) {
                return (byte *)0x0;
              }
              FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar25);
              func_0x000107c61174();
              pbVar11 = pbVar24;
              func_0x000107c60118();
              func_0x000107c61170(pbVar24);
              func_0x000107c61170(lVar25);
              pbVar24 = pbVar11;
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
          )(pbVar10,pbVar14,pbVar16,pbVar18,0);
          return pbVar10;
        }
        lVar26 = *(long *)(pbVar8 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar12;
            pbVar18 = *(byte **)(pbVar12 + 8);
            if (((pbVar10 == pbVar16) && (pbVar11 == pbVar18)) &&
               (pbVar10 = pbVar13, pbVar14 = pbVar24, pbVar16 = *(byte **)(pbVar12 + 0x10),
               pbVar18 = *(byte **)(pbVar12 + 0x18),
               pbVar13 == *(byte **)(pbVar12 + 0x10) && pbVar24 == *(byte **)(pbVar12 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar12[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar12 != ((uint)pbVar10 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar12 + 0x10);
          lVar25 = *(long *)(pbVar12 + 0x20);
          if (pbVar13 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar12 + 8);
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 != pbVar16) || (pbVar13 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar24 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar25)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar12 + 0x18),lVar25,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
              lVar26 == 0) && pbVar13 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar12 + 0x20);
            lVar25 = *(long *)(pbVar12 + 0x18);
            bVar27 = pbVar12[8] | (byte)lVar25;
            bVar28 = pbVar12[9] | (byte)((ulong)lVar25 >> 8);
            bVar29 = pbVar12[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar30 = pbVar12[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar31 = pbVar12[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar32 = pbVar12[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar33 = pbVar12[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar34 = pbVar12[0xf] | (byte)((ulong)lVar25 >> 0x38);
            bVar35 = pbVar12[0x10] | (byte)lVar26;
            bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar10 == (byte *)0x1) &&
             (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar12 + 0x20);
          lVar25 = *(long *)(pbVar12 + 0x18);
          bVar27 = pbVar12[8] | (byte)lVar25;
          bVar28 = pbVar12[9] | (byte)((ulong)lVar25 >> 8);
          bVar29 = pbVar12[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar30 = pbVar12[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar31 = pbVar12[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar32 = pbVar12[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar33 = pbVar12[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar34 = pbVar12[0xf] | (byte)((ulong)lVar25 >> 0x38);
          bVar35 = pbVar12[0x10] | (byte)lVar26;
          bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
          lVar25 = CONCAT17(bVar34 | auVar43[7],
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
        uVar15 = *(ulong *)(pbVar12 + 8);
        uVar17 = *(ulong *)(pbVar12 + 0x10);
        lVar25 = *(long *)pbVar12;
        uVar9 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar25,uVar9);
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
  else if (uVar21 == *param_2) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 101577780; end: 1015777ef;  */

void FUN_101577780(void)

{
  func_0x000107c5fb78(0xd000000000000014,0x800000010efb2f50);
  uRam00000001137ffa98 = 0xd00000000000002c;
  uRam00000001137ffaa0 = 0x800000010efb2ee0;
  return;
}



/* Entry: 1015777f0; end: 101577837;  */

void FUN_1015777f0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961750,0x11,2);
  uRam00000001137ffab0 = uStack_38;
  uRam00000001137ffaa8 = uStack_40;
  uRam00000001137ffac0 = uStack_28;
  uRam00000001137ffab8 = uStack_30;
  uRam00000001137ffad0 = uStack_18;
  uRam00000001137ffac8 = uStack_20;
  return;
}



/* Entry: 101577838; end: 101577873;  */

undefined1  [16] FUN_101577838(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db5720 != -1) {
    func_0x000107c61568(0x112db5720,FUN_101577780);
  }
  auVar1._8_8_ = uRam00000001137ffaa0;
  auVar1._0_8_ = uRam00000001137ffa98;
  func_0x000107c61434(uRam00000001137ffaa0);
  return auVar1;
}



/* Entry: 101577874; end: 1015778cb;  */

void FUN_101577874(void)

{
  FUN_101577c1c();
  return;
}



/* Entry: 1015778cc; end: 101577903;  */

uint FUN_1015778cc(long param_1,long param_2)

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
  func_0x00010157f5f0();
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



/* Entry: 101577904; end: 10157794b;  */

uint FUN_101577904(undefined8 *param_1)

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
  func_0x000101579714(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10157794c; end: 1015779eb;  */

/* WARNING: Possible PIC construction at 0x000101577998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015779a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010157799c) */
/* WARNING: Removing unreachable block (ram,0x0001015779ac) */

void FUN_10157794c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5728 != -1) {
    func_0x000107c61568(0x112db5728,FUN_1015777f0);
  }
  uVar5 = uRam00000001137ffad0;
  uVar4 = uRam00000001137ffac8;
  uVar3 = uRam00000001137ffac0;
  uVar2 = uRam00000001137ffab8;
  uVar1 = uRam00000001137ffab0;
  *param_1 = uRam00000001137ffaa8;
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



/* Entry: 1015779ec; end: 1015779ff;  */

void FUN_1015779ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5aa8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5aa8,&UNK_10d961548);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101577a00; end: 101577a37;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101577a00(undefined8 *param_1,undefined8 param_2)

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
  FUN_10157cd1c();
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



/* Entry: 101577a38; end: 101577ac3;  */

uint FUN_101577a38(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000101579714(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101577ac4; end: 101577b63;  */

/* WARNING: Possible PIC construction at 0x000101577b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101577b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101577b14) */
/* WARNING: Removing unreachable block (ram,0x000101577b24) */

void FUN_101577ac4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5740 != -1) {
    func_0x000107c61568(0x112db5740,0x101577a7c);
  }
  uVar5 = uRam00000001137ffb00;
  uVar4 = uRam00000001137ffaf8;
  uVar3 = uRam00000001137ffaf0;
  uVar2 = uRam00000001137ffae8;
  uVar1 = uRam00000001137ffae0;
  *param_1 = uRam00000001137ffad8;
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



/* Entry: 101577b64; end: 101577bd3;  */

void FUN_101577b64(void)

{
  func_0x000107c5fb78(0xd000000000000011,0x800000010efb2f30);
  uRam00000001137ffb08 = 0xd00000000000002c;
  uRam00000001137ffb10 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101577bd4; end: 101577c1b;  */

void FUN_101577bd4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961700,0x13,2);
  uRam00000001137ffb20 = uStack_38;
  uRam00000001137ffb18 = uStack_40;
  uRam00000001137ffb30 = uStack_28;
  uRam00000001137ffb28 = uStack_30;
  uRam00000001137ffb40 = uStack_18;
  uRam00000001137ffb38 = uStack_20;
  return;
}



/* Entry: 101577c1c; end: 101577d13;  */

void FUN_101577c1c(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  code *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        (*param_4)();
LAB_101577cb4:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        (*param_6)();
        goto LAB_101577cb4;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101577d14; end: 101577e0b;  */

void FUN_101577d14(undefined1 *param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_70;
  undefined1 uStack_68;
  
  plVar2 = &lStack_70;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_68 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_70 = *unaff_x20;
    (*param_4)();
    (*pcVar3)(&lStack_70,1,param_5,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_68 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_70 = unaff_x20[2];
    (*param_6)();
    (*pcVar3)(&lStack_70,2,param_7,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  return;
}



/* Entry: 101577e0c; end: 101577e47;  */

undefined1  [16] FUN_101577e0c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db5748 != -1) {
    func_0x000107c61568(0x112db5748,FUN_101577b64);
  }
  auVar1._8_8_ = uRam00000001137ffb10;
  auVar1._0_8_ = uRam00000001137ffb08;
  func_0x000107c61434(uRam00000001137ffb10);
  return auVar1;
}



/* Entry: 101577e48; end: 101577eaf;  */

void FUN_101577e48(void)

{
  FUN_101577c1c();
  return;
}



/* Entry: 101577eb0; end: 101577ee7;  */

uint FUN_101577eb0(long param_1,long param_2)

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
  func_0x00010157f5b0();
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



/* Entry: 101577ee8; end: 101577f2f;  */

uint FUN_101577ee8(undefined8 *param_1)

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
  func_0x0001015797bc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101577f30; end: 101577fcf;  */

/* WARNING: Possible PIC construction at 0x000101577f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101577f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101577f80) */
/* WARNING: Removing unreachable block (ram,0x000101577f90) */

void FUN_101577f30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5750 != -1) {
    func_0x000107c61568(0x112db5750,FUN_101577bd4);
  }
  uVar5 = uRam00000001137ffb40;
  uVar4 = uRam00000001137ffb38;
  uVar3 = uRam00000001137ffb30;
  uVar2 = uRam00000001137ffb28;
  uVar1 = uRam00000001137ffb20;
  *param_1 = uRam00000001137ffb18;
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



/* Entry: 101577fd0; end: 101577fe3;  */

void FUN_101577fd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5a98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5a98,&UNK_10d961540);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101577fe4; end: 101578017;  */

void FUN_101577fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 101578018; end: 10157814b;  */

void FUN_101578018(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined1 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10157814c; end: 1015781d7;  */

uint FUN_10157814c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001015797bc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015781d8; end: 101578277;  */

/* WARNING: Possible PIC construction at 0x000101578224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101578234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101578228) */
/* WARNING: Removing unreachable block (ram,0x000101578238) */

void FUN_1015781d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5768 != -1) {
    func_0x000107c61568(0x112db5768,0x101578190);
  }
  uVar5 = uRam00000001137ffb70;
  uVar4 = uRam00000001137ffb68;
  uVar3 = uRam00000001137ffb60;
  uVar2 = uRam00000001137ffb58;
  uVar1 = uRam00000001137ffb50;
  *param_1 = uRam00000001137ffb48;
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



/* Entry: 101578278; end: 1015782e7;  */

void FUN_101578278(void)

{
  func_0x000107c5fb78(0xd000000000000014,0x800000010efb2f10);
  uRam00000001137ffb78 = 0xd00000000000002c;
  uRam00000001137ffb80 = 0x800000010efb2ee0;
  return;
}



/* Entry: 1015782e8; end: 10157832f;  */

void FUN_1015782e8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961650,0x16,2);
  uRam00000001137ffb90 = uStack_38;
  uRam00000001137ffb88 = uStack_40;
  uRam00000001137ffba0 = uStack_28;
  uRam00000001137ffb98 = uStack_30;
  uRam00000001137ffbb0 = uStack_18;
  uRam00000001137ffba8 = uStack_20;
  return;
}



/* Entry: 101578330; end: 101578403;  */

/* WARNING: Removing unreachable block (ram,0x000101578400) */

void FUN_101578330(undefined8 param_1,long param_2,long param_3)

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
        (**(code **)(param_3 + 0x48))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x00010157b91c();
        (*pcVar4)(unaff_x20 + 8,&UNK_1103df260,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101578404; end: 1015784bf;  */

void FUN_101578404(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar1 = (ulong)*unaff_x20;
  if ((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x18))(uVar1,1,param_2,param_3), unaff_x21 == 0))
  {
    if (*(long *)(unaff_x20 + 2) != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *(long *)(unaff_x20 + 2);
      func_0x00010157b91c();
      (*pcVar2)(&lStack_50,2,&UNK_1103df260,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),
                        param_2,param_3);
  }
  return;
}



/* Entry: 1015784c0; end: 10157851b;  */

void FUN_1015784c0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 8) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 10157851c; end: 101578543;  */

void FUN_10157851c(void)

{
  FUN_101578330();
  return;
}



/* Entry: 101578544; end: 10157857b;  */

uint FUN_101578544(long param_1,long param_2)

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
  func_0x00010157f570();
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



/* Entry: 10157857c; end: 1015785c3;  */

uint FUN_10157857c(undefined8 *param_1)

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
  func_0x00010157ae40(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015785c4; end: 101578663;  */

/* WARNING: Possible PIC construction at 0x000101578610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101578620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101578614) */
/* WARNING: Removing unreachable block (ram,0x000101578624) */

void FUN_1015785c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5778 != -1) {
    func_0x000107c61568(0x112db5778,FUN_1015782e8);
  }
  uVar5 = uRam00000001137ffbb0;
  uVar4 = uRam00000001137ffba8;
  uVar3 = uRam00000001137ffba0;
  uVar2 = uRam00000001137ffb98;
  uVar1 = uRam00000001137ffb90;
  *param_1 = uRam00000001137ffb88;
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



/* Entry: 101578664; end: 101578677;  */

void FUN_101578664(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5a88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5a88,&UNK_10d961538);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101578678; end: 1015786ab;  */

void FUN_101578678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1015786ac; end: 1015787cf;  */

void FUN_1015786ac(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = *(undefined8 *)(unaff_x20 + 2);
  uStack_48 = *(undefined1 *)(unaff_x20 + 4);
  uStack_38 = *(undefined8 *)(unaff_x20 + 8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 6);
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015787d0; end: 10157885f;  */

uint FUN_1015787d0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010157ae40(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101578860; end: 1015788ff;  */

/* WARNING: Possible PIC construction at 0x0001015788ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015788bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015788b0) */
/* WARNING: Removing unreachable block (ram,0x0001015788c0) */

void FUN_101578860(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5790 != -1) {
    func_0x000107c61568(0x112db5790,0x101578818);
  }
  uVar5 = uRam00000001137ffbe0;
  uVar4 = uRam00000001137ffbd8;
  uVar3 = uRam00000001137ffbd0;
  uVar2 = uRam00000001137ffbc8;
  uVar1 = uRam00000001137ffbc0;
  *param_1 = uRam00000001137ffbb8;
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



/* Entry: 101578900; end: 10157892f;  */

void FUN_101578900(void)

{
  func_0x000107c5fb78(0x6974616d696e412e,0xee00636570536e6f);
  uRam00000001137ffbe8 = 0xd00000000000002c;
  uRam00000001137ffbf0 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101578930; end: 101578997;  */

void FUN_101578930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd00000000000002c;
  *param_5 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101578998; end: 1015789df;  */

void FUN_101578998(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961610,0x1b,2);
  uRam00000001137ffc00 = uStack_38;
  uRam00000001137ffbf8 = uStack_40;
  uRam00000001137ffc10 = uStack_28;
  uRam00000001137ffc08 = uStack_30;
  uRam00000001137ffc20 = uStack_18;
  uRam00000001137ffc18 = uStack_20;
  return;
}


