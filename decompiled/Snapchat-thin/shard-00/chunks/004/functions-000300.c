/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10066dad0; end: 10066db63;  */

void FUN_10066dad0(undefined1 *param_1)

{
  long *plVar1;
  long lStack_50;
  undefined1 auStack_48 [32];
  char cStack_28;
  
  func_0x00010066dab8(&lStack_50);
  if (cStack_28 == '\x01') {
    func_0x0001005ed13c();
    FUN_10066dc24();
    if (lStack_50 != 0) {
      plVar1 = &lStack_50;
      func_0x000107c29880(plVar1);
      func_0x000107c29ec0(param_1,plVar1);
      goto LAB_10066db40;
    }
  }
  else {
    func_0x0001005ed13c();
    FUN_10066dc24();
  }
  *param_1 = 0;
  param_1[0x20] = 0;
LAB_10066db40:
  FUN_10066dc24(auStack_48);
  return;
}



/* Entry: 10066db64; end: 10066db6f;  */

void FUN_10066db64(void)

{
  return;
}



/* Entry: 10066db70; end: 10066dba3;  */

void FUN_10066db70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_10066db64();
  FUN_10066dba4(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10066dba4; end: 10066dc1b;  */

void FUN_10066dba4(long param_1,long param_2)

{
  char cVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10066db64();
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 == '\0') {
      func_0x000107c298b0();
    }
    else {
      func_0x000107c298b0();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 4) == '\x01') {
      FUN_100100fec();
      *(undefined1 *)(unaff_x19 + 4) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    uStack_38 = unaff_x20[1];
    uStack_40 = *unaff_x20;
    uStack_30 = unaff_x20[2];
    uStack_28 = unaff_x20[3];
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    func_0x00010878af70();
    func_0x00010878b200();
    func_0x00010878af70();
    func_0x000107c27914(&uStack_40);
    return;
  }
  return;
}



/* Entry: 10066dc1c; end: 10066dc23;  */

void FUN_10066dc1c(void)

{
  return;
}



/* Entry: 10066dc24; end: 10066dc43;  */

void FUN_10066dc24(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10066dc44; end: 10066dc6b;  */

void FUN_10066dc44(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        FUN_100100fec();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    func_0x00010878af00();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c334b0();
    func_0x000107c3194c();
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 10066dc6c; end: 10066dc8f;  */

undefined8 FUN_10066dc6c(undefined8 param_1)

{
  FUN_10066dc44();
  return param_1;
}



/* Entry: 10066dc90; end: 10066dcb7;  */

undefined8 * FUN_10066dc90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10066dc6c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10066dcb8; end: 10066dd13;  */

undefined8 * FUN_10066dcb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_10066dc90(param_1 + 1,&uStack_50);
  FUN_10066dc24((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_10066dc24(param_1 + 2);
  return param_1;
}



/* Entry: 10066dd14; end: 10066dd1b;  */

void FUN_10066dd14(void)

{
  return;
}



/* Entry: 10066dd1c; end: 10066dd37;  */

void FUN_10066dd1c(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10066dd38; end: 10066dd4f;  */

void FUN_10066dd38(void)

{
  return;
}



/* Entry: 10066dd50; end: 10066dd7f;  */

void FUN_10066dd50(long param_1)

{
  func_0x00010066dd44();
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_10066dd80();
  return;
}



/* Entry: 10066dd80; end: 10066dd93;  */

void FUN_10066dd80(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_100672480();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 10066dd94; end: 10066ddc3;  */

void FUN_10066dd94(long param_1)

{
  func_0x00010066dd44();
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_10066ddc4();
  return;
}



/* Entry: 10066ddc4; end: 10066dddf;  */

void FUN_10066ddc4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    func_0x000104be11e4();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  return;
}



/* Entry: 10066dde0; end: 10066de07;  */

void FUN_10066dde0(long param_1)

{
  FUN_10061fb20();
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_10066de4c();
  return;
}



/* Entry: 10066de08; end: 10066de4b;  */

long FUN_10066de08(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10066dde0();
  FUN_10066de60(lVar1 + 0x78,param_3);
  *(undefined2 *)(param_1 + 0xd0) = param_4;
  return param_1;
}



/* Entry: 10066de4c; end: 10066de5f;  */

void FUN_10066de4c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_100672164();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 10066de60; end: 10066de87;  */

void FUN_10066de60(long param_1)

{
  FUN_10061fb20();
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_10066de88();
  return;
}



/* Entry: 10066de88; end: 10066dee7;  */

void FUN_10066de88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}



/* Entry: 10066dee8; end: 10066df1b;  */

long FUN_10066dee8(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x000107c28e70();
  }
  else {
    FUN_10066df5c();
  }
  return param_1;
}



/* Entry: 10066df1c; end: 10066df27;  */

void FUN_10066df1c(void)

{
  return;
}



/* Entry: 10066df28; end: 10066df5b;  */

void FUN_10066df28(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10066df1c();
  FUN_10066dde0();
  FUN_10066de60(param_1 + 0x78,unaff_x19 + 0x78);
  *(undefined2 *)(unaff_x20 + 0xd0) = *(undefined2 *)(unaff_x19 + 0xd0);
  return;
}



/* Entry: 10066df5c; end: 10066df77;  */

void FUN_10066df5c(long param_1)

{
  FUN_10066df28();
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



/* Entry: 10066df78; end: 10066df7f;  */

void FUN_10066df78(void)

{
  return;
}



/* Entry: 10066df80; end: 10066df9f;  */

void FUN_10066df80(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000104be1234();
  }
  return;
}



/* Entry: 10066dfa0; end: 10066dfc7;  */

void FUN_10066dfa0(long param_1)

{
  FUN_10066df80(param_1 + 0x78);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_100672210();
  }
  return;
}



/* Entry: 10066dfc8; end: 10066dfe7;  */

void FUN_10066dfc8(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_100672210();
  }
  return;
}



/* Entry: 10066dfe8; end: 10066dfef;  */

long FUN_10066dfe8(void)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  if (*(long *)(unaff_x20 + 0x428) == 0) {
    func_0x000107c29654(auStack_30);
    func_0x000107c29658(unaff_x20 + 0x428,auStack_30);
    func_0x000100555e3c(auStack_30);
  }
  return unaff_x20 + 0x428;
}



/* Entry: 10066dff0; end: 10066e033;  */

long FUN_10066dff0(long param_1)

{
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_1 + 0x2a0) == 0) {
    func_0x000107c29654(auStack_30);
    func_0x000107c29658(param_1 + 0x2a0,auStack_30);
    func_0x000100555e3c(auStack_30);
  }
  return param_1 + 0x2a0;
}



/* Entry: 10066e034; end: 10066e063;  */

byte FUN_10066e034(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    pbVar1 = (byte *)(param_1 + 0xc0);
    FUN_10056337c();
    bVar2 = *pbVar1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 10066e064; end: 10066e06b;  */

uint FUN_10066e064(void)

{
  uint in_w8;
  
  return in_w8 & 1;
}



/* Entry: 10066e06c; end: 10066e09b;  */

byte FUN_10066e06c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x128) == '\x01') {
    pbVar1 = (byte *)(param_1 + 0xf8);
    FUN_10056337c();
    bVar2 = *pbVar1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 10066e09c; end: 10066e1d7; -[CTPBitmojiStickerPresentationModel initWithAvatarId:friendAvatarId:customojiText:imageSize:feature:isReaction:prerenderedContentUrl:renderStyleOverride:autosuggestContext:] */

undefined1 *
FUN_10066e09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_112702408;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined4 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10066e1d8; end: 10066e1ef;  */

void FUN_10066e1d8(void)

{
  return;
}



/* Entry: 10066e1f0; end: 10066e927;  */

void FUN_10066e1f0(undefined1 *param_1,undefined8 param_2,long param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8)

{
  long lVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  ulong extraout_x9_09;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_w10_02;
  undefined4 extraout_w10_03;
  undefined4 extraout_w10_04;
  undefined4 extraout_w10_05;
  undefined4 extraout_w10_06;
  undefined4 extraout_w10_07;
  undefined4 extraout_w10_08;
  undefined4 extraout_w10_09;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  ulong extraout_x11_05;
  ulong extraout_x11_06;
  ulong extraout_x11_07;
  ulong extraout_x11_08;
  ulong extraout_x11_09;
  ulong extraout_x11_10;
  ulong uVar7;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  uint uVar8;
  uint extraout_w12_03;
  uint extraout_w12_04;
  uint extraout_w12_05;
  uint extraout_w12_06;
  uint extraout_w12_07;
  uint extraout_w12_08;
  uint extraout_w12_09;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  uint extraout_w13_02;
  uint extraout_w13_03;
  uint extraout_w13_04;
  uint extraout_w13_05;
  uint extraout_w13_06;
  uint extraout_w13_07;
  uint extraout_w13_08;
  uint extraout_w13_09;
  undefined1 extraout_w14;
  undefined1 extraout_w14_00;
  undefined1 extraout_w14_01;
  undefined1 extraout_w14_02;
  undefined1 extraout_w14_03;
  undefined1 extraout_w14_04;
  undefined1 extraout_w14_05;
  undefined1 extraout_w14_06;
  undefined1 extraout_w14_07;
  undefined1 extraout_w14_08;
  undefined1 extraout_w14_09;
  undefined1 extraout_w15;
  undefined1 extraout_w15_00;
  undefined1 extraout_w15_01;
  undefined1 extraout_w15_02;
  undefined1 extraout_w15_03;
  undefined1 extraout_w15_04;
  undefined1 extraout_w15_05;
  undefined1 extraout_w15_06;
  undefined1 extraout_w15_07;
  undefined1 extraout_w15_08;
  undefined1 extraout_w15_09;
  uint extraout_w16;
  uint extraout_w16_00;
  uint extraout_w16_01;
  uint extraout_w16_02;
  uint extraout_w16_03;
  uint extraout_w16_04;
  uint extraout_w16_05;
  uint extraout_w16_06;
  uint extraout_w16_07;
  uint extraout_w16_08;
  uint extraout_w16_09;
  ulong extraout_x17;
  ulong extraout_x17_00;
  ulong extraout_x17_01;
  ulong extraout_x17_02;
  ulong extraout_x17_03;
  ulong extraout_x17_04;
  ulong extraout_x17_05;
  ulong extraout_x17_06;
  ulong extraout_x17_07;
  ulong extraout_x17_08;
  ulong extraout_x17_09;
  ulong extraout_x17_10;
  ulong uVar9;
  undefined8 unaff_x25;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uStack_5e0;
  byte bStack_5d4;
  uint uStack_5b8;
  undefined4 uStack_5b4;
  undefined5 uStack_5b0;
  undefined3 uStack_5ab;
  undefined5 uStack_5a8;
  undefined4 uStack_5a3;
  undefined4 uStack_59f;
  undefined3 uStack_59b;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined1 *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 uStack_578;
  uint uStack_570;
  undefined1 *puStack_56c;
  long lStack_560;
  undefined8 uStack_558;
  undefined1 uStack_550;
  undefined8 uStack_548;
  undefined4 uStack_540;
  ulong uStack_53c;
  undefined1 auStack_530 [32];
  undefined1 auStack_510 [32];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [280];
  undefined1 auStack_3a8 [24];
  undefined8 uStack_390;
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [32];
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 uStack_348;
  undefined1 auStack_340 [280];
  undefined1 auStack_228 [64];
  uint uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1b8;
  byte bStack_1b0;
  undefined1 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  int iStack_168;
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [224];
  undefined1 auStack_50 [24];
  char cStack_38;
  undefined3 uStack_30;
  undefined5 uStack_2d;
  undefined3 uStack_28;
  undefined3 uStack_20;
  undefined5 uStack_1d;
  undefined3 uStack_18;
  undefined4 uStack_15;
  undefined4 uStack_11;
  
  FUN_10066e1d8();
  uVar5 = (undefined1)param_4;
  cVar2 = param_1[0x204];
  if (cVar2 != '\x01') {
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    unaff_x25 = *(undefined8 *)(param_1 + 0x208);
    bStack_5d4 = param_8 & param_1[0x3c8];
    uVar12 = *(uint *)(param_1 + 0x200) & 0xffffff00;
    uVar10 = *(uint *)(param_1 + 0x200) & 0xff;
  }
  lVar11 = *(long *)(param_1 + 0x28);
  lVar1 = param_3;
  if ((*(int *)(param_1 + 0x344) == 1 & param_4) == 0) {
    lVar1 = 0;
  }
  uVar6 = param_5;
  FUN_10066e928(auStack_3a8,param_1);
  uVar8 = (uint)uVar6;
  uStack_390 = *(undefined8 *)(param_1 + 0x20);
  FUN_10066f1a0(auStack_388,param_1 + 0xb8);
  func_0x0001002a969c(auStack_370,param_1 + 0x48);
  uStack_350 = *(undefined4 *)(param_1 + 0x68);
  uStack_34c = *(undefined4 *)(param_1 + 0x348);
  uStack_348 = param_1[0x34c];
  func_0x0001005fad5c(auStack_4d8,param_1 + 0xd0);
  func_0x0001005fad5c(auStack_4f0,param_1 + 0x1b0);
  FUN_100606fd8(auStack_510,param_1 + 0xe8);
  puVar3 = auStack_530;
  puVar4 = param_1 + 0x238;
  FUN_100606fd8();
  if (param_1[0x3a8] == '\x01') {
    uStack_550 = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_5b8 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_53c = 0x10000000c;
    goto LAB_10066e6a4;
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
  case 6:
    FUN_10066f2c4();
    uVar8 = 0;
    param_3 = *(long *)(param_1 + 0x3b0);
    uVar7 = extraout_x11_02;
    uVar9 = extraout_x17_02;
    goto code_r0x00010066e614;
  case 1:
    FUN_1006a0f68();
    puVar3 = param_1;
    FUN_1006a10e4();
    FUN_10066f2c4();
    uStack_53c = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_550 = 0;
    uVar8 = 0;
    uStack_570 = 0;
    uVar5 = 0;
    uStack_20 = uStack_5ab;
    uStack_2d = (undefined5)CONCAT44(uStack_5b4,uStack_5b8);
    uStack_28 = (undefined3)((uint)uStack_5b4 >> 8);
    uStack_15 = (undefined4)CONCAT41(uStack_59f,uStack_5a3._3_1_);
    uStack_11 = (undefined4)(CONCAT35(uStack_59b,CONCAT41(uStack_59f,uStack_5a3._3_1_)) >> 0x20);
    uStack_1d = uStack_5a8;
    uStack_18 = (undefined3)uStack_5a3;
    uStack_5b8 = uStack_5e0 & 0xffffff00;
    uStack_578 = 1;
    uVar7 = extraout_x11_08;
    uVar9 = extraout_x17_08;
    break;
  case 2:
  case 0x10:
  case 0x1d:
    FUN_10066f2c4();
    uVar8 = *(uint *)(param_1 + 0x38);
    puVar4 = *(undefined1 **)(param_1 + 0x2e8);
    uVar7 = extraout_x11_00;
    uVar9 = extraout_x17_00;
    goto code_r0x00010066e398;
  case 3:
  case 0x13:
    FUN_10066f2c4();
    uStack_548 = 0x100000002;
    uVar7 = extraout_x11_01;
    uVar9 = extraout_x17_01;
    if (extraout_w8 != 0x13) {
      uStack_548 = 2;
    }
    goto code_r0x00010066e43c;
  case 4:
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_550 = 0;
    uVar8 = 0;
    uStack_570 = 0;
    uStack_578 = 0;
    uStack_5e0 = 0;
    uStack_5b8 = 0;
    uStack_53c = *(ulong *)(param_1 + 0x38) & 0xffffff00;
    uVar9 = *(ulong *)(param_1 + 0x38) & 0xff;
    uVar7 = 0x100000000;
    break;
  case 5:
    FUN_1006a0f68();
    puVar3 = param_1;
    FUN_1006a10e4();
    FUN_10066f2c4();
    uStack_53c = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_550 = 0;
    uVar8 = 0;
    uStack_570 = 0;
    uStack_20 = uStack_5ab;
    uStack_2d = (undefined5)CONCAT44(uStack_5b4,uStack_5b8);
    uStack_28 = (undefined3)((uint)uStack_5b4 >> 8);
    uStack_15 = (undefined4)CONCAT41(uStack_59f,uStack_5a3._3_1_);
    uStack_11 = (undefined4)(CONCAT35(uStack_59b,CONCAT41(uStack_59f,uStack_5a3._3_1_)) >> 0x20);
    uStack_1d = uStack_5a8;
    uStack_18 = (undefined3)uStack_5a3;
    uStack_5b8 = uStack_5e0 & 0xffffff00;
    uVar5 = 1;
    uStack_578 = 1;
    uVar7 = extraout_x11_06;
    uVar9 = extraout_x17_06;
    break;
  case 7:
    FUN_10066f2c4();
    param_3 = 0;
    uVar8 = 5;
    uVar7 = extraout_x11_10;
    uVar9 = extraout_x17_10;
    goto code_r0x00010066e614;
  case 8:
    FUN_10066f2c4();
    param_3 = 0;
    uVar8 = 2;
    uVar7 = extraout_x11_05;
    uVar9 = extraout_x17_05;
    goto code_r0x00010066e614;
  case 9:
  case 10:
    FUN_10066f2c4();
    uStack_548 = 0x100000001;
    uVar7 = extraout_x11_03;
    uVar9 = extraout_x17_03;
    if (extraout_w8_00 != 10) {
      uStack_548 = 1;
    }
code_r0x00010066e43c:
    uStack_5b8 = 0;
    uStack_550 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    uVar8 = 0;
    uStack_53c = 0;
    uStack_5e0 = 0;
    uStack_540 = 1;
    break;
  case 0xb:
    FUN_10066f2c4();
    param_3 = 0;
    uVar8 = 3;
    uVar7 = extraout_x11_04;
    uVar9 = extraout_x17_04;
    goto code_r0x00010066e614;
  case 0xc:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 2;
    uStack_548 = extraout_x8_03;
    uStack_53c = extraout_x9_02;
    uStack_5b8 = extraout_w16_02;
    uVar8 = extraout_w12_02;
    uStack_570 = extraout_w13_02;
    uStack_540 = extraout_w10_02;
    uStack_578 = extraout_w14_02;
    uStack_550 = extraout_w15_02;
    break;
  case 0xd:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 3;
    uStack_548 = extraout_x8_01;
    uStack_53c = extraout_x9_00;
    uStack_5b8 = extraout_w16_00;
    uVar8 = extraout_w12_00;
    uStack_570 = extraout_w13_00;
    uStack_540 = extraout_w10_00;
    uStack_578 = extraout_w14_00;
    uStack_550 = extraout_w15_00;
    break;
  case 0xe:
  case 0xf:
  case 0x17:
  case 0x1e:
    FUN_10066f2c4();
    puVar4 = (undefined1 *)0x0;
    uVar8 = *(uint *)(param_1 + 0x38);
    uVar7 = extraout_x11;
    uVar9 = extraout_x17;
code_r0x00010066e398:
    uStack_5b8 = 0;
    uStack_578 = 0;
    uStack_540 = 0;
    uStack_53c = 0;
    uStack_548 = 0;
    uStack_5e0 = 0;
    param_3 = *(long *)(param_1 + 0x3b0);
    uStack_570 = uVar8 & 0xffffff00;
    uStack_550 = 1;
    break;
  case 0x11:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 5;
    uStack_548 = extraout_x8_04;
    uStack_53c = extraout_x9_03;
    uStack_5b8 = extraout_w16_03;
    uVar8 = extraout_w12_03;
    uStack_570 = extraout_w13_03;
    uStack_540 = extraout_w10_03;
    uStack_578 = extraout_w14_03;
    uStack_550 = extraout_w15_03;
    break;
  case 0x12:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 4;
    uStack_548 = extraout_x8_06;
    uStack_53c = extraout_x9_05;
    uStack_5b8 = extraout_w16_05;
    uVar8 = extraout_w12_05;
    uStack_570 = extraout_w13_05;
    uStack_540 = extraout_w10_05;
    uStack_578 = extraout_w14_05;
    uStack_550 = extraout_w15_05;
    break;
  case 0x14:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 6;
    uStack_548 = extraout_x8_07;
    uStack_53c = extraout_x9_06;
    uStack_5b8 = extraout_w16_06;
    uVar8 = extraout_w12_06;
    uStack_570 = extraout_w13_06;
    uStack_540 = extraout_w10_06;
    uStack_578 = extraout_w14_06;
    uStack_550 = extraout_w15_06;
    break;
  case 0x15:
    FUN_10066f2c4();
    param_3 = 0;
    uVar8 = 0x11;
    uVar7 = extraout_x11_07;
    uVar9 = extraout_x17_07;
code_r0x00010066e614:
    uStack_5b8 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_540 = 0;
    uStack_53c = 0;
    uStack_548 = 0;
    uStack_5e0 = 0;
    puVar4 = (undefined1 *)0x0;
    uStack_550 = 1;
    break;
  case 0x16:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 1;
    uStack_548 = extraout_x8_02;
    uStack_53c = extraout_x9_01;
    uStack_5b8 = extraout_w16_01;
    uVar8 = extraout_w12_01;
    uStack_570 = extraout_w13_01;
    uStack_540 = extraout_w10_01;
    uStack_578 = extraout_w14_01;
    uStack_550 = extraout_w15_01;
    break;
  case 0x18:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 8;
    uStack_548 = extraout_x8_10;
    uStack_53c = extraout_x9_09;
    uStack_5b8 = extraout_w16_09;
    uVar8 = extraout_w12_09;
    uStack_570 = extraout_w13_09;
    uStack_540 = extraout_w10_09;
    uStack_578 = extraout_w14_09;
    uStack_550 = extraout_w15_09;
    break;
  case 0x19:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 9;
    uStack_548 = extraout_x8_00;
    uStack_53c = extraout_x9;
    uStack_5b8 = extraout_w16;
    uVar8 = extraout_w12;
    uStack_570 = extraout_w13;
    uStack_540 = extraout_w10;
    uStack_578 = extraout_w14;
    uStack_550 = extraout_w15;
    break;
  case 0x1a:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 10;
    uStack_548 = extraout_x8_08;
    uStack_53c = extraout_x9_07;
    uStack_5b8 = extraout_w16_07;
    uVar8 = extraout_w12_07;
    uStack_570 = extraout_w13_07;
    uStack_540 = extraout_w10_07;
    uStack_578 = extraout_w14_07;
    uStack_550 = extraout_w15_07;
    break;
  case 0x1b:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 0xb;
    uStack_548 = extraout_x8_09;
    uStack_53c = extraout_x9_08;
    uStack_5b8 = extraout_w16_08;
    uVar8 = extraout_w12_08;
    uStack_570 = extraout_w13_08;
    uStack_540 = extraout_w10_08;
    uStack_578 = extraout_w14_08;
    uStack_550 = extraout_w15_08;
    break;
  case 0x1c:
    uStack_5e0 = uVar8;
    func_0x000107c33f8c();
    uVar7 = 0x100000000;
    uVar9 = 0xd;
    uStack_548 = extraout_x8_05;
    uStack_53c = extraout_x9_04;
    uStack_5b8 = extraout_w16_04;
    uVar8 = extraout_w12_04;
    uStack_570 = extraout_w13_04;
    uStack_540 = extraout_w10_04;
    uStack_578 = extraout_w14_04;
    uStack_550 = extraout_w15_04;
    break;
  default:
    FUN_10066f2c4();
    uStack_53c = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_550 = 0;
    uVar8 = 0;
    uStack_570 = 0;
    uStack_578 = 0;
    uStack_5e0 = 0;
    uStack_5b8 = 0;
    uVar7 = extraout_x11_09;
    uVar9 = extraout_x17_09;
  }
  uStack_5ab = uStack_28;
  uStack_5b0 = uStack_2d;
  uStack_5b8 = uStack_5b8 | uStack_5e0 & 0xff;
  uStack_570 = uStack_570 | uVar8 & 0xff;
  uStack_53c = uVar9 | uVar7 | uStack_53c;
  uStack_5b4 = CONCAT31(uStack_30,uVar5);
  uStack_59b = uStack_18;
  uStack_598 = uStack_15;
  uStack_5a3 = (undefined4)CONCAT53(uStack_1d,uStack_20);
  uStack_59f = (undefined4)((uint5)uStack_1d >> 8);
  uStack_594 = uStack_11;
  uStack_580 = 1;
  uStack_588 = 0;
  uStack_558 = 1;
  puStack_590 = puVar3;
  puStack_56c = puVar4;
  lStack_560 = param_3;
LAB_10066e6a4:
  FUN_10066ec1c(auStack_4c0,lVar11 - lVar1,auStack_4d8,auStack_4f0,auStack_510,auStack_530,
                &uStack_5b8,param_1[0x40],param_1[0x230]);
  FUN_10066f2dc(auStack_340,auStack_4c0);
  FUN_10066f3ec(auStack_228,param_2);
  uStack_1e8 = uVar12 | uVar10;
  uStack_1d8 = 0;
  uStack_1b8 = 0;
  bStack_1b0 = bStack_5d4;
  uStack_1a0 = (ulong)*(uint *)(param_1 + 0x228);
  uStack_198 = *(undefined8 *)(param_1 + 0x2f8);
  if (param_1[0x300] == '\0') {
    uStack_198 = 0;
  }
  uStack_190 = *(undefined4 *)(param_1 + 0x22c);
  uStack_188 = (ulong)*(uint *)(param_1 + 0x2f0);
  uStack_180 = *(undefined8 *)(param_1 + 0x308);
  if (param_1[0x310] == '\0') {
    uStack_180 = 0;
  }
  uStack_178 = *(undefined8 *)(param_1 + 0x2b0);
  iStack_168 = *(int *)(param_1 + 0x318);
  uStack_170 = (undefined1)*(undefined8 *)(param_1 + 0x2b8);
  if (2 < iStack_168 - 1U) {
    iStack_168 = 0;
  }
  uStack_1e0 = unaff_x25;
  uStack_1a8 = cVar2 == '\x01';
  func_0x000100620418(auStack_160,param_1 + 800);
  func_0x00010066f44c(auStack_130,param_5);
  FUN_10066f4d0(&uStack_5b8,param_1 + 0x390);
  if (cStack_38 == uStack_5a3._3_1_) {
    if (cStack_38 != '\0') {
      FUN_1006202b4(auStack_50,&uStack_5b8);
    }
  }
  else if (cStack_38 == '\0') {
    func_0x000104be125c(auStack_50,&uStack_5b8);
  }
  else {
    func_0x000107c28e84(auStack_50);
  }
  FUN_10066f550(extraout_x8,auStack_3a8);
  FUN_10066f12c(&uStack_5b8);
  FUN_10066f14c(auStack_4c0);
  FUN_1005fce88(auStack_530);
  FUN_1005fce88(auStack_510);
  func_0x0001005fb56c(auStack_4f0);
  func_0x0001005fb56c(auStack_4d8);
  FUN_10066f6f4(auStack_3a8);
  return;
}



/* Entry: 10066e928; end: 10066eaf3;  */

undefined8 FUN_10066e928(undefined8 param_1)

{
  undefined1 auStack_4c0 [24];
  undefined1 uStack_4a8;
  undefined1 auStack_4a0 [216];
  undefined1 uStack_3c8;
  undefined1 auStack_3c0 [24];
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [64];
  undefined1 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [64];
  undefined1 auStack_2b0 [280];
  undefined1 auStack_198 [280];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  FUN_10054f8dc(auStack_48);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010045fb98(auStack_80,"");
  func_0x000107c60ee4(auStack_2b0,0x118);
  FUN_10066eb30(auStack_2b0);
  FUN_10066ecf8(auStack_198,auStack_2b0);
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  FUN_10066edac(&uStack_330);
  FUN_10066ee48(auStack_2f0,&uStack_330);
  auStack_378[0] = 0;
  uStack_338 = 0;
  uStack_398 = 0;
  uStack_3a0 = 1;
  uStack_390 = 1;
  uStack_380 = 0;
  uStack_388 = 1;
  auStack_3c0[0] = 0;
  uStack_3a8 = 0;
  auStack_4a0[0] = 0;
  uStack_3c8 = 0;
  auStack_4c0[0] = 0;
  uStack_4a8 = 0;
  FUN_10066eee8(param_1,auStack_48,0,&uStack_60,auStack_80,0,0,auStack_198,auStack_2f0,auStack_378,
                &uStack_3a0,0,0,0);
  FUN_10066f12c(auStack_4c0);
  FUN_10066d68c(auStack_4a0);
  FUN_1005fce88(auStack_3c0);
  FUN_10066c37c(auStack_2f0);
  FUN_10066c37c(&uStack_330);
  FUN_10066f14c(auStack_198);
  FUN_10066f14c(auStack_2b0);
  FUN_10066f188();
  func_0x0001005fb56c(&uStack_60);
  FUN_100100fec(auStack_48);
  return param_1;
}



/* Entry: 10066eaf4; end: 10066eb2f;  */

void FUN_10066eaf4(void)

{
  undefined1 auStack_40 [32];
  
  FUN_10029a878(auStack_40,&UNK_10df61de0,&UNK_10df61df0);
  FUN_1005542e8();
  return;
}



/* Entry: 10066eb30; end: 10066ec1b;  */

undefined8 FUN_10066eb30(undefined8 param_1)

{
  undefined1 auStack_138 [64];
  undefined1 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_10066eaf4(&uStack_90);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_60 = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_58 = 1;
  auStack_b0[0] = 0;
  uStack_98 = 0;
  auStack_138[0] = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_10066ec1c(param_1,0,&uStack_38,&uStack_50,&uStack_70,auStack_b0,auStack_138,0,0);
  FUN_10066ecf0();
  FUN_1005fce88(&uStack_70);
  FUN_100100fec(&uStack_90);
  func_0x0001005fb56c(&uStack_50);
  func_0x0001005fb56c(&uStack_38);
  return param_1;
}



/* Entry: 10066ec1c; end: 10066ecef;  */

undefined8 *
FUN_10066ec1c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar1;
  param_1[3] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar1;
  param_1[6] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  FUN_10061fb2c(param_1 + 7,param_5);
  FUN_10061fb2c(param_1 + 0xb,param_6);
  func_0x000107c610b4(param_1 + 0xf,param_7,0x88);
  *(undefined1 *)(param_1 + 0x20) = param_8;
  *(undefined1 *)((long)param_1 + 0x101) = (undefined1)param_9;
  *(undefined1 *)((long)param_1 + 0x102) = param_9._1_1_;
  *(undefined8 *)((long)param_1 + 0x104) = param_11;
  *(undefined8 *)((long)param_1 + 0x10c) = param_12;
  return param_1;
}



/* Entry: 10066ecf0; end: 10066ecf7;  */

void FUN_10066ecf0(void)

{
  char in_stack_000000b8;
  
  if (in_stack_000000b8 == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10066ecf8; end: 10066ed9f;  */

undefined8 * FUN_10066ecf8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001005fad5c(param_1 + 1,param_2 + 1);
  func_0x0001005fad5c(param_1 + 4,param_2 + 4);
  FUN_100606fd8(param_1 + 7,param_2 + 7);
  FUN_100606fd8(param_1 + 0xb,param_2 + 0xb);
  func_0x000107c610b4(param_1 + 0xf,param_2 + 0xf,0x99);
  return param_1;
}



/* Entry: 10066eda0; end: 10066edab;  */

void FUN_10066eda0(void)

{
  return;
}



/* Entry: 10066edac; end: 10066ee0b;  */

long FUN_10066edac(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  lVar1 = param_1;
  FUN_10066c2c0(param_1,auStack_40);
  *(undefined8 *)(lVar1 + 0x20) = 0x100000000;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined1 *)(lVar1 + 0x2c) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  *(undefined4 *)(lVar1 + 0x33) = 0;
  FUN_10066c37c(auStack_40);
  return param_1;
}



/* Entry: 10066ee0c; end: 10066ee1b;  */

void FUN_10066ee0c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10066ee1c; end: 10066ee47;  */

void FUN_10066ee1c(void)

{
  FUN_10066ee0c();
  FUN_10066ee74();
  return;
}



/* Entry: 10066ee48; end: 10066ee73;  */

void FUN_10066ee48(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10066ee1c();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x2c) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10066ee74; end: 10066ee87;  */

void FUN_10066ee74(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10069ffd0();
    FUN_1006a07dc();
    return;
  }
  return;
}



/* Entry: 10066ee88; end: 10066eee7;  */

void FUN_10066ee88(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10066df1c();
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10066f050();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  func_0x00010066f06c();
  FUN_10061fb2c(param_1 + 7,param_2 + 7);
  FUN_10061fb2c(unaff_x20 + 0x58,unaff_x19 + 0x58);
  func_0x000107c610b4(unaff_x20 + 0x78,unaff_x19 + 0x78,0x99);
  return;
}



/* Entry: 10066eee8; end: 10066f04f;  */

undefined8 *
FUN_10066eee8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar1;
  param_1[6] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[9] = param_5[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined4 *)(param_1 + 0xb) = param_6;
  *(undefined8 *)((long)param_1 + 0x5c) = param_7;
  FUN_10066ee88(param_1 + 0xd,param_8);
  FUN_10066f088(param_1 + 0x30,param_9);
  func_0x000107c610b4(param_1 + 0x38,param_10,0x48);
  uVar1 = param_11[4];
  uVar4 = *param_11;
  uVar3 = param_11[3];
  uVar2 = param_11[2];
  param_1[0x42] = param_11[1];
  param_1[0x41] = uVar4;
  param_1[0x44] = uVar3;
  param_1[0x43] = uVar2;
  param_1[0x45] = uVar1;
  param_1[0x46] = param_12;
  param_1[0x47] = param_13;
  *(undefined4 *)(param_1 + 0x48) = param_14;
  FUN_10061fb2c(param_1 + 0x49,param_16);
  param_1[0x4d] = param_17;
  param_1[0x4e] = param_18;
  FUN_10066f0b4(param_1 + 0x4f,param_19);
  FUN_10066f0f0(param_1 + 0x6b,param_20);
  return param_1;
}



/* Entry: 10066f050; end: 10066f087;  */

void FUN_10066f050(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10066f088; end: 10066f0b3;  */

void FUN_10066f088(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10066c2c0();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x2c) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10066f0b4; end: 10066f0db;  */

void FUN_10066f0b4(long param_1)

{
  FUN_10061fb20();
  *(undefined1 *)(param_1 + 0xd8) = 0;
  FUN_10066f0dc();
  return;
}



/* Entry: 10066f0dc; end: 10066f0ef;  */

void FUN_10066f0dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_10066df28();
    *(undefined1 *)(param_1 + 0xd8) = 1;
    return;
  }
  return;
}



/* Entry: 10066f0f0; end: 10066f117;  */

void FUN_10066f0f0(long param_1)

{
  FUN_10061fb20();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10066f118();
  return;
}



/* Entry: 10066f118; end: 10066f12b;  */

void FUN_10066f118(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 10066f12c; end: 10066f14b;  */

void FUN_10066f12c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10066f14c; end: 10066f187;  */

long FUN_10066f14c(long param_1)

{
  FUN_1005fce88(param_1 + 0x58);
  FUN_1005fce88(param_1 + 0x38);
  func_0x0001005fb56c(param_1 + 0x20);
  func_0x0001005fb56c(param_1 + 8);
  return param_1;
}



/* Entry: 10066f188; end: 10066f19f;  */

void FUN_10066f188(void)

{
  long unaff_x29;
  
  if (*(char *)(unaff_x29 + -0x58) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10066f1a0; end: 10066f1d3;  */

undefined8 * FUN_10066f1a0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x00010066f190(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 10066f1d4; end: 10066f2c3;  */

void FUN_10066f1d4(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_4) {
    FUN_10065ad8c(param_1);
    plVar1 = param_1;
    FUN_100656674(param_1,param_4);
    FUN_100658030(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x18)) {
      FUN_10066f39c(param_2,param_3);
      FUN_10065adc4();
      while (param_1 != unaff_x19) {
        FUN_10065ae00();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10066f39c(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
    param_4 = (param_1[1] - *param_1) / -0x18 + param_4;
  }
  func_0x000100658080(param_1,param_2,param_3,param_4);
  param_1 = param_1 + 2;
  FUN_10065812c();
  unaff_x19[1] = (long)param_1;
  return;
}



/* Entry: 10066f2c4; end: 10066f2db;  */

void FUN_10066f2c4(void)

{
  return;
}



/* Entry: 10066f2dc; end: 10066f39b;  */

void FUN_10066f2dc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010066f2d0();
  *param_1 = *param_2;
  FUN_10066f1a0(param_1 + 1,param_2 + 1);
  func_0x00010066f3d4();
  FUN_10066f1a0();
  func_0x000100620418(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x000100620418(unaff_x20 + 0x58,unaff_x19 + 0x58);
  func_0x00010066f3e0();
  func_0x000107c610b4();
  return;
}



/* Entry: 10066f39c; end: 10066f3c7;  */

void FUN_10066f39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  func_0x00010066f34c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10066f3c8; end: 10066f3eb;  */

void FUN_10066f3c8(void)

{
  return;
}



/* Entry: 10066f3ec; end: 10066f41b;  */

void FUN_10066f3ec(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010066f2d0();
  FUN_10066f41c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x2c);
  *(undefined8 *)(unaff_x20 + 0x34) = *(undefined8 *)(unaff_x19 + 0x34);
  *(undefined8 *)(unaff_x20 + 0x2c) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 10066f41c; end: 10066f473;  */

void FUN_10066f41c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == *(char *)(param_2 + 0x18);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000107c27a08();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    FUN_10069ffd0();
    FUN_1006a07dc();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726d24();
    if (!bVar2) {
      func_0x000108726cf4();
      func_0x00010872571c();
    }
    return;
  }
  return;
}



/* Entry: 10066f474; end: 10066f4b3;  */

void FUN_10066f474(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_1002921c4();
  FUN_10066dd50();
  FUN_10066dd94(param_1 + 0x78,unaff_x20 + 0x78);
  *(undefined2 *)(unaff_x19 + 0xd0) = *(undefined2 *)(unaff_x20 + 0xd0);
  return;
}



/* Entry: 10066f4b4; end: 10066f4cf;  */

void FUN_10066f4b4(long param_1)

{
  FUN_10066f474();
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



/* Entry: 10066f4d0; end: 10066f53b;  */

void FUN_10066f4d0(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 extraout_x8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  bVar1 = (*(byte *)(param_2 + 0x18) & 1) == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_10054f8dc(&uStack_50,param_2);
    func_0x000107c33fe4(uStack_40);
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = extraout_x8;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    func_0x000100699270();
    func_0x000107c33fb8();
  }
  *(bool *)(param_1 + 3) = !bVar1;
  return;
}



/* Entry: 10066f53c; end: 10066f54f;  */

void FUN_10066f53c(void)

{
  return;
}



/* Entry: 10066f550; end: 10066f657;  */

void FUN_10066f550(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010066f544();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10066f658();
  func_0x0001005fad5c();
  func_0x00010066f664();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined1 *)(unaff_x19 + 0x60) = *(undefined1 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  FUN_10066ecf8(unaff_x19 + 0x68,unaff_x20 + 0x68);
  FUN_10066ee48(unaff_x19 + 0x180,unaff_x20 + 0x180);
  func_0x000107c610b4(unaff_x19 + 0x1c0,unaff_x20 + 0x1c0,0x84);
  FUN_100606fd8(unaff_x19 + 0x248,unaff_x20 + 0x248);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x268);
  *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x19 + 0x268) = uVar1;
  FUN_10066f670(unaff_x19 + 0x278,unaff_x20 + 0x278);
  FUN_10066f6b4(unaff_x19 + 0x358,unaff_x20 + 0x358);
  return;
}



/* Entry: 10066f658; end: 10066f66f;  */

undefined1  [16] FUN_10066f658(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = param_1 + 0x20;
  return auVar1;
}



/* Entry: 10066f670; end: 10066f69f;  */

void FUN_10066f670(long param_1)

{
  func_0x00010066dd44();
  *(undefined1 *)(param_1 + 0xd8) = 0;
  FUN_10066f6a0();
  return;
}



/* Entry: 10066f6a0; end: 10066f6b3;  */

void FUN_10066f6a0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_10066f474();
    *(undefined1 *)(param_1 + 0xd8) = 1;
    return;
  }
  return;
}



/* Entry: 10066f6b4; end: 10066f6df;  */

void FUN_10066f6b4(void)

{
  FUN_10028af74();
  FUN_10066f6e0();
  return;
}



/* Entry: 10066f6e0; end: 10066f6f3;  */

void FUN_10066f6e0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10054f8dc();
    FUN_10028b5dc();
    return;
  }
  return;
}



/* Entry: 10066f6f4; end: 10066f74b;  */

long FUN_10066f6f4(long param_1)

{
  long lStack_28;
  
  FUN_10066f12c(param_1 + 0x358);
  FUN_10066d68c(param_1 + 0x278);
  FUN_1005fce88(param_1 + 0x248);
  FUN_10066c37c(param_1 + 0x180);
  FUN_10066f14c(param_1 + 0x68);
  FUN_1001148fc(param_1 + 0x38);
  func_0x0001005fb56c(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10066f74c; end: 10066f78b;  */

void FUN_10066f74c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10066f78c; end: 10066f7bb;  */

undefined8 * FUN_10066f78c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110cfb5f8;
  param_1[1] = param_2;
  FUN_10066f74c();
  return param_1;
}



/* Entry: 10066f7bc; end: 10066f80f;  */

void FUN_10066f7bc(void)

{
  return;
}



/* Entry: 10066f810; end: 10066f8fb;  */

undefined8 * FUN_10066f810(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined1 *unaff_x19;
  long unaff_x21;
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [64];
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_38;
  
  uVar4 = param_2;
  func_0x00010066f7f8();
  auStack_b0[0] = 0;
  uStack_70 = 0;
  uStack_68 = 0x100671514;
  ppuStack_60 = &PTR_FUN_110a7a118;
  puStack_48 = auStack_b0;
  uStack_58 = param_1;
  uStack_50 = uVar4;
  uStack_38 = extraout_x8;
  FUN_10066f8fc();
  if ((int)param_1 == 0) {
    uVar4 = *(undefined8 *)(unaff_x21 + 8);
    FUN_100671198(uVar4);
    FUN_1006711ec(auStack_f8,param_2,uVar4,*(undefined8 *)(unaff_x21 + 0x58));
    func_0x000100671370();
    func_0x000100671380();
    FUN_100671490();
    func_0x000100671504();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x40] = 0;
  }
  puVar7 = &uStack_68;
  FUN_1005ed4a0();
  FUN_10067181c(uStack_38);
  if ((bool)in_ZR) {
    return puVar7;
  }
  func_0x000107c60e78();
  FUN_1005ed4a0(&uStack_68);
  func_0x000107c33ee8();
  func_0x000104bd46a0();
  lVar8 = puVar7[0xb];
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0xb8) != '\x01')) {
LAB_10066f938:
    lVar8 = puVar7[0xd];
    if (lVar8 != 0) {
      func_0x000107c60d88(lVar8);
      plVar6 = *(long **)(lVar8 + 0x40);
      if (*(long *)(lVar8 + 0x48) != 0) {
        plVar1 = (long *)(*(long *)(lVar8 + 0x48) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000107c60d8c(lVar8);
      if ((plVar6 != (long *)0x0) &&
         ((**(code **)(*plVar6 + 0x10))(plVar6,&UNK_10e53a174,0xc), ((ulong)plVar6 & 1) == 0)) {
        FUN_100671190();
        goto LAB_10066f9b8;
      }
      FUN_100671190();
    }
    lVar8 = puVar7[7];
    puVar7 = (undefined8 *)0x0;
    if (lVar8 != 0) {
      func_0x000107c29758();
      puVar7 = (undefined8 *)(ulong)((((uint)lVar8 ^ 0xffffffff) & 0x101) == 0);
    }
  }
  else {
    pbVar5 = (byte *)(lVar8 + 0x88);
    FUN_10056337c();
    if ((*pbVar5 & 1) == 0) goto LAB_10066f938;
LAB_10066f9b8:
    puVar7 = (undefined8 *)0x1;
  }
  return puVar7;
}



/* Entry: 10066f8fc; end: 10066f9db;  */

bool FUN_10066f8fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x58);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0xb8) != '\x01')) {
LAB_10066f938:
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 != 0) {
      func_0x000107c60d88(lVar6);
      plVar5 = *(long **)(lVar6 + 0x40);
      if (*(long *)(lVar6 + 0x48) != 0) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x48) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000107c60d8c(lVar6);
      if ((plVar5 != (long *)0x0) &&
         ((**(code **)(*plVar5 + 0x10))(plVar5,&UNK_10e53a174,0xc), ((ulong)plVar5 & 1) == 0)) {
        FUN_100671190();
        goto LAB_10066f9b8;
      }
      FUN_100671190();
    }
    lVar6 = *(long *)(param_1 + 0x38);
    bVar3 = false;
    if (lVar6 != 0) {
      func_0x000107c29758();
      bVar3 = (((uint)lVar6 ^ 0xffffffff) & 0x101) == 0;
    }
  }
  else {
    pbVar4 = (byte *)(lVar6 + 0x88);
    FUN_10056337c();
    if ((*pbVar4 & 1) == 0) goto LAB_10066f938;
LAB_10066f9b8:
    bVar3 = true;
  }
  return bVar3;
}



/* Entry: 10066f9dc; end: 10066fa27;  */

void FUN_10066f9dc(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_10029b2d4(param_1 + 0x58);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x60) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10066fa28; end: 10066fa33;  */

undefined ** FUN_10066fa28(void)

{
  return &PTR_DAT_110cfb638;
}



/* Entry: 10066fa34; end: 10066fa9f;  */

undefined1  [16] FUN_10066fa34(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  func_0x0001004a641c(param_1 + 0x10,param_2 + 0x10);
  func_0x0001004a641c(param_1 + 0x28,param_2 + 0x28);
  func_0x0001004a641c(param_1 + 0x40,param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x60);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x60); puVar2 != (undefined1 *)(param_1 + 0x62);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x62);
  return auVar6;
}



/* Entry: 10066faa0; end: 10066faab;  */

undefined1  [16] FUN_10066faa0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 2;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10066faac; end: 10066fadf;  */

long FUN_10066faac(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_10066fae0(param_1);
  return param_1;
}



/* Entry: 10066fae0; end: 10066fb37;  */

undefined8 FUN_10066fae0(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  FUN_100067de0(param_1 + 0x58);
  FUN_10006805c(param_1 + 0x40);
  FUN_10006805c(param_1 + 0x28);
  func_0x00010006804c(param_1 + 0x10);
  if (in_NG == in_OV) {
    FUN_1002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10066fb38; end: 10066fe1b;  */

void FUN_10066fb38(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x61);
  uVar6 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar6 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar6 + 8);
  }
  if (lVar7 != 0) {
    func_0x000107c60ca4(param_1 + 0x88);
  }
  func_0x000100667cac(param_1 + 8);
  puVar5 = *(undefined4 **)(param_2 + 0x18);
  for (lVar7 = (long)*(int *)(param_2 + 0x10) << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
    uStack_78._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
    uStack_78 = (long *)CONCAT44(uStack_78._4_4_,*puVar5);
    func_0x000100631508(param_1 + 8,&uStack_78);
    puVar5 = puVar5 + 1;
  }
  FUN_1002a97ec(param_1 + 0x30);
  puVar5 = *(undefined4 **)(param_2 + 0x48);
  for (lVar7 = (long)*(int *)(param_2 + 0x40) << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
    uStack_78._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
    uStack_78 = (long *)CONCAT44(uStack_78._4_4_,*puVar5);
    FUN_10066fe34(param_1 + 0x30,&uStack_78);
    puVar5 = puVar5 + 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10066fe58(param_1 + 0x58,*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar9 = *(long *)(param_1 + 0x60);
    for (lVar7 = 0; lVar9 != lVar7; lVar7 = lVar7 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x58) + lVar7 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  piVar13 = *(int **)(param_2 + 0x30);
  piVar2 = piVar13 + *(int *)(param_2 + 0x28);
  plVar1 = (long *)(param_1 + 0x68);
  do {
    if (piVar13 == piVar2) {
      return;
    }
    iVar3 = *piVar13;
    uVar14 = (ulong)iVar3;
    uVar6 = *(ulong *)(param_1 + 0x60);
    if (uVar6 != 0) {
      uVar8 = uVar6 - 1;
      if ((uVar6 & uVar8) == 0) {
        unaff_x27 = uVar8 & uVar14;
      }
      else {
        unaff_x27 = uVar14;
        if (uVar6 <= uVar14) {
          uVar12 = 0;
          if (uVar6 != 0) {
            uVar12 = uVar14 / uVar6;
          }
          unaff_x27 = uVar14 - uVar12 * uVar6;
        }
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x58) + unaff_x27 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_10066fce0;
            uVar12 = plVar10[1];
            if (uVar12 != uVar14) break;
            if (*(int *)(plVar10 + 2) == iVar3) goto LAB_10066fde8;
          }
          if ((uVar6 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar6 <= uVar12) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = uVar12 / uVar6;
            }
            uVar12 = uVar12 - uVar4 * uVar6;
          }
        } while (uVar12 == unaff_x27);
      }
    }
LAB_10066fce0:
    plVar10 = (long *)0x18;
    func_0x000107c60e20();
    uStack_68 = 1;
    *plVar10 = 0;
    plVar10[1] = uVar14;
    *(int *)(plVar10 + 2) = iVar3;
    plStack_70 = plVar1;
    if ((uVar6 == 0) ||
       (*(float *)(param_1 + 0x78) * (float)uVar6 < (float)(*(long *)(param_1 + 0x70) + 1))) {
      uStack_78 = plVar10;
      func_0x00010066d298(uVar6 << 1);
      FUN_10066d2b0(param_1 + 0x58);
      uVar6 = *(ulong *)(param_1 + 0x60);
      if ((uVar6 & uVar6 - 1) == 0) {
        unaff_x27 = uVar6 - 1 & uVar14;
      }
      else {
        unaff_x27 = uVar14;
        if (uVar6 <= uVar14) {
          uVar8 = 0;
          if (uVar6 != 0) {
            uVar8 = uVar14 / uVar6;
          }
          unaff_x27 = uVar14 - uVar8 * uVar6;
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x58);
    plVar11 = *(long **)(lVar7 + unaff_x27 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar10 = *plVar1;
      *plVar1 = (long)plVar10;
      *(long **)(lVar7 + unaff_x27 * 8) = plVar1;
      if (*plVar10 != 0) {
        uVar14 = *(ulong *)(*plVar10 + 8);
        if ((uVar6 & uVar6 - 1) == 0) {
          uVar14 = uVar14 & uVar6 - 1;
        }
        else if (uVar6 <= uVar14) {
          uVar8 = 0;
          if (uVar6 != 0) {
            uVar8 = uVar14 / uVar6;
          }
          uVar14 = uVar14 - uVar8 * uVar6;
        }
        *(long **)(lVar7 + uVar14 * 8) = plVar10;
      }
    }
    else {
      *plVar10 = *plVar11;
      *plVar11 = (long)plVar10;
    }
    uStack_78 = (long *)0x0;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
    func_0x00010066d474();
LAB_10066fde8:
    piVar13 = piVar13 + 1;
  } while( true );
}



/* Entry: 10066fe1c; end: 10066fe33;  */

void FUN_10066fe1c(void)

{
  return;
}



/* Entry: 10066fe34; end: 10066fe4b;  */

void FUN_10066fe34(void)

{
  func_0x0001001cef98();
  return;
}



/* Entry: 10066fe4c; end: 10066fe57;  */

undefined1 * FUN_10066fe4c(void)

{
  undefined1 *puVar1;
  long unaff_x19;
  long unaff_x24;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = unaff_x19 + 0x20;
  if (*(byte *)(unaff_x24 + 0x10) == *(byte *)(unaff_x19 + 0x30)) {
    lStack_28 = unaff_x19 + 0x32;
    puVar1 = &stack0xffffffffffffffe0;
    func_0x000100671f50(puVar1,&lStack_30);
    return puVar1;
  }
  return (undefined1 *)(ulong)(*(byte *)(unaff_x24 + 0x10) < *(byte *)(unaff_x19 + 0x30));
}



/* Entry: 10066fe58; end: 10066fe87;  */

void FUN_10066fe58(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 10066fe88; end: 10066fea7;  */

void FUN_10066fe88(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_10066faac();
  }
  return;
}



/* Entry: 10066fea8; end: 10066ff1b;  */

void FUN_10066fea8(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [168];
  
  puVar1 = (undefined8 *)0x140;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110cedab0;
  FUN_10066ff8c(auStack_d8,param_2);
  FUN_100670068(puVar1 + 3,auStack_d8);
  FUN_1006700ac(auStack_d8);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10066ff1c; end: 10066ff8b;  */

void FUN_10066ff1c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10066ff8c; end: 10066fff7;  */

undefined2 * FUN_10066ff8c(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_10066ff1c(param_1 + 4,param_2 + 4);
  FUN_10028aa7c(param_1 + 0x18,param_2 + 0x18);
  FUN_10066fff8(param_1 + 0x2c,param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  return param_1;
}


