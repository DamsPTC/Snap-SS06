/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10165dddc; end: 10165de1f;  */

void FUN_10165dddc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10165de20; end: 10165de23;  */

void FUN_10165de20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975a98;
  func_0x000107c61520(&UNK_10d975a98,&UNK_1103ef1c0);
  puRam0000000112dbd038 = puVar1;
  return;
}



/* Entry: 10165de24; end: 10165de63;  */

void FUN_10165de24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975a98;
  func_0x000107c61520(&UNK_10d975a98,&UNK_1103ef1c0);
  puRam0000000112dbd038 = puVar1;
  return;
}



/* Entry: 10165de64; end: 10165de87;  */

void FUN_10165de64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165de88();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10165de88; end: 10165dec7;  */

void FUN_10165de88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975b08;
  func_0x000107c61520(&UNK_10d975b08,&UNK_1103ef088);
  puRam0000000112dbd040 = puVar1;
  return;
}



/* Entry: 10165dec8; end: 10165dedb;  */

void FUN_10165dec8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165dbd8();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10165c5e4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165dedc; end: 10165df0b;  */

void FUN_10165dedc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165df0c; end: 10165df0f;  */

void FUN_10165df0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975b70;
  func_0x000107c61520(&UNK_10d975b70,&UNK_1103ef088);
  puRam0000000112dbd048 = puVar1;
  return;
}



/* Entry: 10165df10; end: 10165df4f;  */

void FUN_10165df10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975b70;
  func_0x000107c61520(&UNK_10d975b70,&UNK_1103ef088);
  puRam0000000112dbd048 = puVar1;
  return;
}



/* Entry: 10165df50; end: 10165dfab;  */

long FUN_10165df50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10165dfac; end: 10165e0cf;  */

undefined8 * FUN_10165dfac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  return param_1;
}



/* Entry: 10165e0d0; end: 10165e143;  */

undefined8 * FUN_10165e0d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10165e144; end: 10165e217;  */

int FUN_10165e144(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10165e218; end: 10165e257;  */

void FUN_10165e218(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d975adc;
  func_0x000107c61520(&DAT_10d975adc,&UNK_1103ef088);
  puRam0000000112dbd058 = puVar1;
  return;
}



/* Entry: 10165e258; end: 10165e27f;  */

void FUN_10165e258(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10165e280; end: 10165e2c7;  */

void FUN_10165e280(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975f80,0x2a,2);
  uRam0000000113802650 = uStack_38;
  uRam0000000113802648 = uStack_40;
  uRam0000000113802660 = uStack_28;
  uRam0000000113802658 = uStack_30;
  uRam0000000113802670 = uStack_18;
  uRam0000000113802668 = uStack_20;
  return;
}



/* Entry: 10165e2c8; end: 10165e39b;  */

/* WARNING: Removing unreachable block (ram,0x00010165e398) */

void FUN_10165e2c8(undefined8 param_1,long param_2,long param_3)

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
        FUN_10165f308();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_1103ef4c0,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x138))();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10165e39c; end: 10165e41f;  */

void FUN_10165e39c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *unaff_x20;
  long unaff_x21;
  
  FUN_10165e420();
  if (unaff_x21 == 0) {
    if (*unaff_x20 == '\x01') {
      (**(code **)(param_3 + 0x68))(1,2,param_2,param_3);
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10165e420; end: 10165e4a7;  */

void FUN_10165e420(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x20);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x18);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10165f308();
    (*pcVar1)(&uStack_70,1,&UNK_1103ef4c0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10165e4a8; end: 10165e4f3;  */

uint FUN_10165e4a8(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_100 [48];
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar13 = *(long *)(param_1 + 0x30);
  uVar11 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(ulong *)(param_1 + 0x38);
  lVar9 = *(long *)(param_2 + 0x20);
  uVar5 = *(ulong *)(param_2 + 0x18);
  lVar14 = *(long *)(param_2 + 0x30);
  uVar12 = *(ulong *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(ulong *)(param_2 + 0x38);
  uStack_d0 = uVar5;
  lStack_c8 = lVar9;
  uStack_c0 = uVar12;
  lStack_b8 = lVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar3;
  lStack_98 = lVar7;
  uStack_90 = uVar11;
  lStack_88 = lVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (lVar7 == 0) {
    if (lVar9 != 0) goto LAB_10165ef64;
    FUN_10165ea20(&uStack_a0,auStack_100);
    FUN_10165ea20(&uStack_d0,auStack_100);
LAB_10165efdc:
    FUN_10164a9d0(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
    if (((*param_1 ^ *param_2) & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      FUN_100e25fcc(uVar8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                    *(undefined8 *)(param_2 + 0x10));
      uVar1 = (uint)uVar8;
      goto LAB_10165f084;
    }
  }
  else {
    if (lVar9 == 0) {
LAB_10165ef64:
      FUN_10165ea20(&uStack_a0,auStack_100);
      FUN_10165ea20(&uStack_d0,auStack_100);
      FUN_10164a9d0(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
      uVar3 = uVar5;
      lVar7 = lVar9;
      uVar11 = uVar12;
      lVar13 = lVar14;
      uVar4 = uVar6;
      uVar8 = uVar10;
    }
    else {
      if (((uVar3 == uVar5) && (lVar7 == lVar9)) ||
         (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar7,uVar5,lVar9,0), (uVar2 & 1) != 0)) {
        if (((uVar11 == uVar12) && (lVar13 == lVar14)) ||
           (uVar2 = uVar11, func_0x000107c605b8(uVar11,lVar13,uVar12,lVar14,0), (uVar2 & 1) != 0)) {
          FUN_10165ea20(&uStack_a0,auStack_100);
          FUN_10165ea20(&uStack_d0,auStack_100);
          uVar2 = uVar4;
          FUN_100e25fcc(uVar4,uVar8,uVar6,uVar10);
          FUN_10164a9d0(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
          if ((uVar2 & 1) != 0) goto LAB_10165efdc;
          goto LAB_10165f07c;
        }
        FUN_10165ea20(&uStack_a0,auStack_100);
        FUN_10165ea20(&uStack_d0,auStack_100);
      }
      else {
        FUN_10165ea20(&uStack_a0,auStack_100);
        FUN_10165ea20(&uStack_d0,auStack_100);
      }
      FUN_10164a9d0(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
    }
LAB_10165f07c:
    FUN_10164a9d0(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
  }
  uVar1 = 0;
LAB_10165f084:
  return uVar1 & 1;
}



/* Entry: 10165e4f4; end: 10165e523;  */

undefined1  [16] FUN_10165e4f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10165e524; end: 10165e557;  */

void FUN_10165e524(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10165e558; end: 10165e56b;  */

undefined1  [16] FUN_10165e558(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10165e568;
  return auVar1;
}



/* Entry: 10165e56c; end: 10165e57f;  */

void FUN_10165e56c(void)

{
  FUN_10165e2c8();
  return;
}



/* Entry: 10165e580; end: 10165e5bf;  */

void FUN_10165e580(void)

{
  FUN_10165e39c();
  return;
}



/* Entry: 10165e5c0; end: 10165e5c3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10165e5c0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10165e5c4; end: 10165e5fb;  */

uint FUN_10165e5c4(long param_1,long param_2)

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
  func_0x00010165f998();
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



/* Entry: 10165e5fc; end: 10165e653;  */

uint FUN_10165e5fc(undefined8 *param_1)

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
  FUN_10165ee08(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10165e654; end: 10165e6f3;  */

/* WARNING: Possible PIC construction at 0x00010165e6a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165e6b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165e6a4) */
/* WARNING: Removing unreachable block (ram,0x00010165e6b4) */

void FUN_10165e654(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd068 != -1) {
    func_0x000107c61568(0x112dbd068,FUN_10165e280);
  }
  uVar5 = uRam0000000113802670;
  uVar4 = uRam0000000113802668;
  uVar3 = uRam0000000113802660;
  uVar2 = uRam0000000113802658;
  uVar1 = uRam0000000113802650;
  *param_1 = uRam0000000113802648;
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



/* Entry: 10165e6f4; end: 10165e72f;  */

void FUN_10165e6f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd0c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd0c0,&UNK_10d975f40);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10165e730; end: 10165e843;  */

void FUN_10165e730(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10165e844; end: 10165e8e3;  */

uint FUN_10165e844(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10165ee08(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10165e8e4; end: 10165e97b;  */

void FUN_10165e8e4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10165e938:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010165e954;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_10165e920;
code_r0x00010165e954:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_10165e920:
    (*pcVar3)();
  }
  goto LAB_10165e938;
}



/* Entry: 10165e97c; end: 10165ea1f;  */

void FUN_10165e97c(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10165ea20; end: 10165ea6f;  */

undefined8 FUN_10165ea20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dbd060;
  func_0x0001000285a8(0x112dbd060,&UNK_10d975cd0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10165ea70; end: 10165eaaf;  */

void FUN_10165ea70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10165eab0; end: 10165eadf;  */

undefined1  [16] FUN_10165eab0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 10165eae0; end: 10165eb13;  */

void FUN_10165eae0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 10165eb14; end: 10165eb27;  */

undefined1  [16] FUN_10165eb14(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x10165eb24;
  return auVar1;
}



/* Entry: 10165eb28; end: 10165eb4f;  */

void FUN_10165eb28(void)

{
  FUN_10165e8e4();
  return;
}



/* Entry: 10165eb50; end: 10165eb53;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10165eb50(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10165eb54; end: 10165eb8b;  */

uint FUN_10165eb54(long param_1,long param_2)

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
  FUN_10165f958();
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



/* Entry: 10165eb8c; end: 10165ebd3;  */

uint FUN_10165eb8c(undefined8 *param_1)

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
  FUN_10165f0e8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10165ebd4; end: 10165ec73;  */

/* WARNING: Possible PIC construction at 0x00010165ec20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165ec30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165ec24) */
/* WARNING: Removing unreachable block (ram,0x00010165ec34) */

void FUN_10165ebd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd078 != -1) {
    func_0x000107c61568(0x112dbd078,0x10165e89c);
  }
  uVar5 = uRam00000001138026a0;
  uVar4 = uRam0000000113802698;
  uVar3 = uRam0000000113802690;
  uVar2 = uRam0000000113802688;
  uVar1 = uRam0000000113802680;
  *param_1 = uRam0000000113802678;
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



/* Entry: 10165ec74; end: 10165ecaf;  */

void FUN_10165ec74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd0b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd0b0,&UNK_10d975f38);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10165ecb0; end: 10165edc3;  */

void FUN_10165ecb0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10165edc4; end: 10165ee07;  */

uint FUN_10165edc4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10165f0e8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10165ee08; end: 10165f0a7;  */

uint FUN_10165ee08(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_100 [48];
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar13 = *(long *)(param_1 + 0x30);
  uVar11 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(ulong *)(param_1 + 0x38);
  lVar9 = *(long *)(param_2 + 0x20);
  uVar5 = *(ulong *)(param_2 + 0x18);
  lVar14 = *(long *)(param_2 + 0x30);
  uVar12 = *(ulong *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(ulong *)(param_2 + 0x38);
  uStack_d0 = uVar5;
  lStack_c8 = lVar9;
  uStack_c0 = uVar12;
  lStack_b8 = lVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar3;
  lStack_98 = lVar7;
  uStack_90 = uVar11;
  lStack_88 = lVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (lVar7 == 0) {
    if (lVar9 != 0) goto LAB_10165ef64;
    FUN_10165ea20(&uStack_a0,auStack_100);
    FUN_10165ea20(&uStack_d0,auStack_100);
LAB_10165efdc:
    FUN_10164a9d0(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
    if (((*param_1 ^ *param_2) & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      FUN_100e25fcc(uVar8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                    *(undefined8 *)(param_2 + 0x10));
      uVar1 = (uint)uVar8;
      goto LAB_10165f084;
    }
  }
  else {
    if (lVar9 == 0) {
LAB_10165ef64:
      FUN_10165ea20(&uStack_a0,auStack_100);
      FUN_10165ea20(&uStack_d0,auStack_100);
      FUN_10164a9d0(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
      uVar3 = uVar5;
      lVar7 = lVar9;
      uVar11 = uVar12;
      lVar13 = lVar14;
      uVar4 = uVar6;
      uVar8 = uVar10;
    }
    else {
      if (((uVar3 == uVar5) && (lVar7 == lVar9)) ||
         (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar7,uVar5,lVar9,0), (uVar2 & 1) != 0)) {
        if (((uVar11 == uVar12) && (lVar13 == lVar14)) ||
           (uVar2 = uVar11, func_0x000107c605b8(uVar11,lVar13,uVar12,lVar14,0), (uVar2 & 1) != 0)) {
          FUN_10165ea20(&uStack_a0,auStack_100);
          FUN_10165ea20(&uStack_d0,auStack_100);
          uVar2 = uVar4;
          FUN_100e25fcc(uVar4,uVar8,uVar6,uVar10);
          FUN_10164a9d0(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
          if ((uVar2 & 1) != 0) goto LAB_10165efdc;
          goto LAB_10165f07c;
        }
        FUN_10165ea20(&uStack_a0,auStack_100);
        FUN_10165ea20(&uStack_d0,auStack_100);
      }
      else {
        FUN_10165ea20(&uStack_a0,auStack_100);
        FUN_10165ea20(&uStack_d0,auStack_100);
      }
      FUN_10164a9d0(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
    }
LAB_10165f07c:
    FUN_10164a9d0(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
  }
  uVar1 = 0;
LAB_10165f084:
  return uVar1 & 1;
}



/* Entry: 10165f0a8; end: 10165f0e7;  */

void FUN_10165f0a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975d48;
  func_0x000107c61520(&UNK_10d975d48,&UNK_1103ef438);
  puRam0000000112dbd070 = puVar1;
  return;
}



/* Entry: 10165f0e8; end: 10165f163;  */

/* WARNING: Possible PIC construction at 0x00010165f118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010165f11c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10165f0e8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10165f164; end: 10165f1a3;  */

void FUN_10165f164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975e20;
  func_0x000107c61520(&UNK_10d975e20,&UNK_1103ef4c0);
  puRam0000000112dbd080 = puVar1;
  return;
}



/* Entry: 10165f1a4; end: 10165f1c7;  */

void FUN_10165f1a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165f1c8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10165f1c8; end: 10165f207;  */

void FUN_10165f1c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975d20;
  func_0x000107c61520(&UNK_10d975d20,&UNK_1103ef438);
  puRam0000000112dbd088 = puVar1;
  return;
}



/* Entry: 10165f208; end: 10165f21f;  */

void FUN_10165f208(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165f0a8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10164ae34)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165f220; end: 10165f25f;  */

void FUN_10165f220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975d88;
  func_0x000107c61520(&UNK_10d975d88,&UNK_1103ef438);
  puRam0000000112dbd090 = puVar1;
  return;
}



/* Entry: 10165f260; end: 10165f283;  */

void FUN_10165f260(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165f284();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10165f284; end: 10165f2c3;  */

void FUN_10165f284(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975df8;
  func_0x000107c61520(&UNK_10d975df8,&UNK_1103ef4c0);
  puRam0000000112dbd098 = puVar1;
  return;
}



/* Entry: 10165f2c4; end: 10165f2d7;  */

void FUN_10165f2c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165f164();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10165f308();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165f2d8; end: 10165f307;  */

void FUN_10165f2d8(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165f308; end: 10165f347;  */

void FUN_10165f308(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d975db0;
  func_0x000107c61520(&DAT_10d975db0,&UNK_1103ef4c0);
  puRam0000000112dbd0a0 = puVar1;
  return;
}



/* Entry: 10165f348; end: 10165f34b;  */

void FUN_10165f348(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975e60;
  func_0x000107c61520(&UNK_10d975e60,&UNK_1103ef4c0);
  puRam0000000112dbd0a8 = puVar1;
  return;
}



/* Entry: 10165f34c; end: 10165f38b;  */

void FUN_10165f34c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975e60;
  func_0x000107c61520(&UNK_10d975e60,&UNK_1103ef4c0);
  puRam0000000112dbd0a8 = puVar1;
  return;
}



/* Entry: 10165f38c; end: 10165f3d7;  */

/* WARNING: Possible PIC construction at 0x00010165f3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165f3a8) */
/* WARNING: Removing unreachable block (ram,0x00010165f3cc) */
/* WARNING: Removing unreachable block (ram,0x00010165f3b0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10165f38c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x10) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x10) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10165f3d8; end: 10165f5b3;  */

undefined1 * FUN_10165f3d8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010006c00c(uVar4,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_1 + 0x20) = lVar3;
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x00010006c00c(uVar4,uVar2);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  return param_1;
}



/* Entry: 10165f5b4; end: 10165f67f;  */

undefined8 FUN_10165f5b4(undefined8 param_1)

{
  FUN_10165f750(param_1,&UNK_1103ef4c0);
  return param_1;
}



/* Entry: 10165f680; end: 10165f74f;  */

int FUN_10165f680(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10165f750; end: 10165f77f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10165f750(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10165f780; end: 10165f85f;  */

undefined8 * FUN_10165f780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 10165f860; end: 10165f8b3;  */

undefined8 * FUN_10165f860(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10165f8b4; end: 10165f957;  */

int FUN_10165f8b4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10165f958; end: 10165f9d7;  */

void FUN_10165f958(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d975dcc;
  func_0x000107c61520(&DAT_10d975dcc,&UNK_1103ef4c0);
  puRam0000000112dbd0b8 = puVar1;
  return;
}



/* Entry: 10165f9d8; end: 10165f9df;  */

long FUN_10165f9d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10165f9e0; end: 10165fd03;  */

bool FUN_10165f9e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_50 = uVar1;
  lStack_48 = lVar4;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x000101661140(&uStack_50,auStack_70,0x112db6f40,&UNK_10d9681d0);
  }
  else {
    func_0x000101661140(&uStack_50,auStack_70,0x112db6f40,&UNK_10d9681d0);
    func_0x000101661108(uVar1,lVar4,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x000101661108(uVar1,0,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 10165fd04; end: 10165fd73;  */

void FUN_10165fd04(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[5] = puVar1;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[9] = 0xc000000000000000;
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
  param_1[0x16] = 2;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 2;
  param_1[0x1f] = 0xf000000000000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return;
}



/* Entry: 10165fd74; end: 10165fdbb;  */

void FUN_10165fd74(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d976100,0x134,2);
  uRam00000001138026b0 = uStack_38;
  uRam00000001138026a8 = uStack_40;
  uRam00000001138026c0 = uStack_28;
  uRam00000001138026b8 = uStack_30;
  uRam00000001138026d0 = uStack_18;
  uRam00000001138026c8 = uStack_20;
  return;
}



/* Entry: 10165fdbc; end: 10165ffdf;  */

/* WARNING: Removing unreachable block (ram,0x00010165ffc4) */

void FUN_10165fdbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790c00;
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x150);
        goto code_r0x00010165ffb4;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x150);
        goto code_r0x00010165ffb4;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x20;
        goto code_r0x00010165fe40;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x50;
        goto code_r0x00010165fe40;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x70;
        goto code_r0x00010165fe40;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_101661188();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_1103ef850;
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001016630d4();
        lVar2 = unaff_x20 + 0x90;
        puVar3 = &UNK_1103efa00;
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0xb0;
        puVar3 = &UNK_110790c00;
        break;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 200;
code_r0x00010165fe40:
        puVar3 = &UNK_110790c80;
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0xe8;
        puVar3 = &UNK_110790a00;
        break;
      case 0xb:
        pcVar4 = *(code **)(param_3 + 0x150);
code_r0x00010165ffb4:
        (*pcVar4)();
        goto LAB_10165fe5c;
      case 0xc:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x100;
        puVar3 = &UNK_110790c00;
        break;
      case 0xd:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x118;
        break;
      case 0xe:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x130;
        break;
      default:
        goto LAB_10165fe5c;
      }
      (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
LAB_10165fe5c:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10165ffe0; end: 10166021f;  */

void FUN_10165ffe0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  
  uVar2 = unaff_x20[1];
  uVar4 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar4 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[2];
    uVar1 = unaff_x20[3];
    uVar4 = uVar2 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar4 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar4 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar2,uVar1,2,param_2,param_3), unaff_x21 == 0)) {
      uVar4 = unaff_x20[4];
      if (*(long *)(uVar4 + 0x10) != 0) {
        pcVar5 = *(code **)(param_3 + 0x118);
        func_0x000101568c04();
        (*pcVar5)(uVar4,3,&UNK_110790c80,uVar2,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      FUN_101660220();
      if (unaff_x21 == 0) {
        puVar3 = unaff_x20;
        FUN_1016602a4();
        uVar4 = unaff_x20[5];
        if (*(long *)(uVar4 + 0x10) != 0) {
          pcVar5 = *(code **)(param_3 + 0x118);
          FUN_101661188();
          (*pcVar5)(uVar4,6,&UNK_1103ef850,puVar3,param_2,param_3);
        }
        FUN_101660328();
        FUN_1016603ac();
        FUN_101660434();
        FUN_1016604b8();
        uVar2 = unaff_x20[7];
        uVar4 = unaff_x20[6] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar4 = uVar2 >> 0x38 & 0xf;
        }
        if (uVar4 != 0) {
          (**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,0xb,param_2,param_3);
        }
        FUN_101660540();
        FUN_1016605cc();
        FUN_101660654();
        func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 101660220; end: 1016602a3;  */

void FUN_101660220(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x58);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,4,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1016602a4; end: 101660327;  */

void FUN_1016602a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x78);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,5,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101660328; end: 1016603ab;  */

void FUN_101660328(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x98);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_48 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001016630d4();
    (*pcVar1)(&uStack_60,7,&UNK_1103efa00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1016603ac; end: 101660433;  */

void FUN_1016603ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xb0);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xc0);
    uStack_50 = *(undefined8 *)(param_1 + 0xb8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,8,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101660434; end: 1016604b7;  */

void FUN_101660434(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0xd0);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 200);
    uStack_48 = *(undefined8 *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,9,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1016604b8; end: 10166053f;  */

void FUN_1016604b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xf8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,10,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101660540; end: 1016605cb;  */

void FUN_101660540(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x100);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x110);
    uStack_50 = *(undefined8 *)(param_1 + 0x108);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xc,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1016605cc; end: 101660653;  */

void FUN_1016605cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x118);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x128);
    uStack_50 = *(undefined8 *)(param_1 + 0x120);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xd,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101660654; end: 1016606df;  */

void FUN_101660654(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x130);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x140);
    uStack_50 = *(undefined8 *)(param_1 + 0x138);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xe,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1016606e0; end: 101660777;  */

uint FUN_1016606e0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_2e8 [3];
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
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
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
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
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    func_0x000101565c24(uVar2,param_2[4]);
    if ((uVar2 & 1) != 0) {
      uVar12 = param_1[0xb];
      uVar2 = param_1[10];
      uVar9 = param_1[0xd];
      uVar8 = param_1[0xc];
      uVar13 = param_2[0xb];
      uVar10 = param_2[10];
      uVar14 = param_2[0xd];
      uVar11 = param_2[0xc];
      uStack_b0 = uVar10;
      uStack_a8 = uVar13;
      uStack_a0 = uVar11;
      uStack_98 = uVar14;
      uStack_90 = uVar2;
      uStack_88 = uVar12;
      uStack_80 = uVar8;
      uStack_78 = uVar9;
      if (uVar12 == 0) {
        if (uVar13 != 0) goto LAB_101661314;
        func_0x000101661140(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
        func_0x000101661140(&uStack_b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
LAB_101661390:
        func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
        uVar12 = param_1[0xf];
        uVar2 = param_1[0xe];
        uVar9 = param_1[0x11];
        uVar8 = param_1[0x10];
        uVar13 = param_2[0xf];
        uVar10 = param_2[0xe];
        uVar14 = param_2[0x11];
        uVar11 = param_2[0x10];
        uStack_f0 = uVar10;
        uStack_e8 = uVar13;
        uStack_e0 = uVar11;
        uStack_d8 = uVar14;
        uStack_d0 = uVar2;
        uStack_c8 = uVar12;
        uStack_c0 = uVar8;
        uStack_b8 = uVar9;
        if (uVar12 == 0) {
          if (uVar13 != 0) goto LAB_101661484;
          func_0x000101661140(&uStack_d0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          func_0x000101661140(&uStack_f0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
        }
        else {
          if (uVar13 == 0) {
LAB_101661484:
            uStack_2b0 = uVar2;
            uStack_2a8 = uVar12;
            uStack_2a0 = uVar8;
            uStack_298 = uVar9;
            uStack_290 = uVar10;
            uStack_288 = uVar13;
            uStack_280 = uVar11;
            uStack_278 = uVar14;
            func_0x000101661140(&uStack_d0,&uStack_110,0x112db6f40,&UNK_10d9681d0);
            puVar4 = &uStack_f0;
            puVar5 = &uStack_110;
            goto LAB_1016614c0;
          }
          if (((uVar2 != uVar10) || (uVar12 != uVar13)) &&
             (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar12,uVar10,uVar13,0), (uVar3 & 1) == 0)) {
            uVar6 = 0x112db6f40;
            puVar7 = &UNK_10d9681d0;
            func_0x000101661140(&uStack_d0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
            puVar4 = &uStack_f0;
            goto LAB_101661658;
          }
          func_0x000101661140(&uStack_d0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          func_0x000101661140(&uStack_f0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          uVar3 = uVar8;
          FUN_100e25fcc(uVar8,uVar9,uVar11,uVar14);
          func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
          if ((uVar3 & 1) == 0) goto LAB_10166168c;
        }
        func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
        uVar2 = param_1[5];
        FUN_101660b34(uVar2,param_2[5]);
        if ((uVar2 & 1) != 0) {
          uVar12 = param_1[0x13];
          uVar2 = param_1[0x12];
          uVar9 = param_1[0x15];
          uVar8 = param_1[0x14];
          uVar13 = param_2[0x13];
          uVar10 = param_2[0x12];
          uVar14 = param_2[0x15];
          uVar11 = param_2[0x14];
          uStack_130 = uVar10;
          uStack_128 = uVar13;
          uStack_120 = uVar11;
          uStack_118 = uVar14;
          uStack_110 = uVar2;
          uStack_108 = uVar12;
          uStack_100 = uVar8;
          uStack_f8 = uVar9;
          if (uVar12 == 0) {
            if (uVar13 != 0) {
LAB_1016616bc:
              func_0x000101661140(&uStack_110,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
              func_0x000101661140(&uStack_130,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
              func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
              uVar2 = uVar10;
              uVar12 = uVar13;
              uVar8 = uVar11;
              uVar9 = uVar14;
              goto LAB_10166168c;
            }
            func_0x000101661140(&uStack_110,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
            func_0x000101661140(&uStack_130,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
          }
          else {
            if (uVar13 == 0) goto LAB_1016616bc;
            if (((uVar2 != uVar10) || (uVar12 != uVar13)) &&
               (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar12,uVar10,uVar13,0), (uVar3 & 1) == 0))
            {
              uVar6 = 0x112dbd0d0;
              puVar7 = &UNK_10d975fc8;
              func_0x000101661140(&uStack_110,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
              puVar4 = &uStack_130;
              goto LAB_101661658;
            }
            func_0x000101661140(&uStack_110,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
            func_0x000101661140(&uStack_130,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
            uVar3 = uVar8;
            FUN_100e25fcc(uVar8,uVar9,uVar11,uVar14);
            func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
            if ((uVar3 & 1) == 0) goto LAB_10166168c;
          }
          func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
          uVar12 = param_1[0x17];
          uVar8 = param_1[0x16];
          uVar2 = param_1[0x18];
          uVar14 = param_2[0x17];
          uVar11 = param_2[0x16];
          uVar9 = param_2[0x18];
          uStack_170 = uVar11;
          uStack_168 = uVar14;
          uStack_160 = uVar9;
          uStack_150 = uVar8;
          uStack_148 = uVar12;
          uStack_140 = uVar2;
          if ((uVar8 & 0xff) == 2) {
            if ((uVar11 & 0xff) == 2) {
              func_0x000101661140(&uStack_150,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              func_0x000101661140(&uStack_170,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
LAB_1016617e8:
              func_0x000101556278(uVar8,uVar12,uVar2);
              uVar12 = param_1[0x1a];
              uVar2 = param_1[0x19];
              uVar9 = param_1[0x1c];
              uVar8 = param_1[0x1b];
              uVar13 = param_2[0x1a];
              uVar10 = param_2[0x19];
              uVar14 = param_2[0x1c];
              uVar11 = param_2[0x1b];
              uStack_1b0 = uVar10;
              uStack_1a8 = uVar13;
              uStack_1a0 = uVar11;
              uStack_198 = uVar14;
              uStack_190 = uVar2;
              uStack_188 = uVar12;
              uStack_180 = uVar8;
              uStack_178 = uVar9;
              if (uVar12 == 0) {
                if (uVar13 != 0) goto LAB_101661a28;
                func_0x000101661140(&uStack_190,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
                func_0x000101661140(&uStack_1b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
              }
              else {
                if (uVar13 == 0) {
LAB_101661a28:
                  uStack_2b0 = uVar2;
                  uStack_2a8 = uVar12;
                  uStack_2a0 = uVar8;
                  uStack_298 = uVar9;
                  uStack_290 = uVar10;
                  uStack_288 = uVar13;
                  uStack_280 = uVar11;
                  uStack_278 = uVar14;
                  func_0x000101661140(&uStack_190,&uStack_2d0,0x112db6f40,&UNK_10d9681d0);
                  puVar4 = &uStack_1b0;
                  puVar5 = &uStack_2d0;
                  goto LAB_1016614c0;
                }
                if (((uVar2 != uVar10) || (uVar12 != uVar13)) &&
                   (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar12,uVar10,uVar13,0),
                   (uVar3 & 1) == 0)) {
                  uVar6 = 0x112db6f40;
                  puVar7 = &UNK_10d9681d0;
                  func_0x000101661140(&uStack_190,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
                  puVar4 = &uStack_1b0;
                  goto LAB_101661658;
                }
                func_0x000101661140(&uStack_190,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
                func_0x000101661140(&uStack_1b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
                uVar3 = uVar8;
                FUN_100e25fcc(uVar8,uVar9,uVar11,uVar14);
                func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
                if ((uVar3 & 1) == 0) goto LAB_10166168c;
              }
              func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
              uVar12 = param_1[0x1e];
              uVar2 = param_1[0x1d];
              uVar8 = param_1[0x1f];
              uVar11 = param_2[0x1e];
              uVar14 = param_2[0x1d];
              uVar9 = param_2[0x1f];
              uStack_2d0 = uVar14;
              uStack_2c8 = uVar11;
              uStack_2c0 = uVar9;
              uStack_2b0 = uVar2;
              uStack_2a8 = uVar12;
              uStack_2a0 = uVar8;
              if (uVar8 >> 0x3c < 0xf) {
                if (0xe < uVar9 >> 0x3c) goto LAB_101661d2c;
                if (uVar2 == uVar14) {
                  func_0x000101661140(&uStack_2b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  func_0x000101661140(&uStack_2d0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  uVar14 = uVar12;
                  FUN_100e25fcc(uVar12,uVar8,uVar11,uVar9);
                  func_0x00010159fa64(uVar2,uVar11,uVar9);
                  if ((uVar14 & 1) != 0) goto LAB_101661b30;
                }
                else {
                  func_0x000101661140(&uStack_2b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  func_0x000101661140(&uStack_2d0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  func_0x00010159fa64(uVar14,uVar11,uVar9);
                }
              }
              else {
                if (0xe < uVar9 >> 0x3c) {
                  func_0x000101661140(&uStack_2b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  func_0x000101661140(&uStack_2d0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
LAB_101661b30:
                  func_0x00010159fa64(uVar2,uVar12,uVar8);
                  uVar2 = param_1[6];
                  if (((uVar2 != param_2[6]) || (param_1[7] != param_2[7])) &&
                     (func_0x000107c605b8(), (uVar2 & 1) == 0)) goto LAB_101661690;
                  uVar12 = param_1[0x21];
                  uVar8 = param_1[0x20];
                  uVar2 = param_1[0x22];
                  uVar14 = param_2[0x21];
                  uVar11 = param_2[0x20];
                  uVar9 = param_2[0x22];
                  uStack_1f0 = uVar11;
                  uStack_1e8 = uVar14;
                  uStack_1e0 = uVar9;
                  uStack_1d0 = uVar8;
                  uStack_1c8 = uVar12;
                  uStack_1c0 = uVar2;
                  if ((uVar8 & 0xff) == 2) {
                    if ((uVar11 & 0xff) != 2) {
LAB_101661e84:
                      func_0x000101661140(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_1f0;
                      puVar5 = &uStack_210;
                      uVar13 = uVar2;
                      uVar10 = uVar12;
                      uVar3 = uVar8;
                      uVar2 = uVar9;
                      uVar12 = uVar14;
                      uVar8 = uVar11;
                      goto LAB_101661900;
                    }
                    func_0x000101661140(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_1f0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                  }
                  else {
                    if ((uVar11 & 0xff) == 2) goto LAB_101661e84;
                    if ((((uint)uVar11 ^ (uint)uVar8) & 1) != 0) {
                      func_0x000101661140(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_1f0;
                      puVar5 = &uStack_210;
                      goto LAB_10166198c;
                    }
                    func_0x000101661140(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_1f0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                    uVar13 = uVar12;
                    FUN_100e25fcc(uVar12,uVar2,uVar14,uVar9);
                    func_0x000101556278(uVar11,uVar14,uVar9);
                    if ((uVar13 & 1) == 0) goto LAB_101661a1c;
                  }
                  func_0x000101556278(uVar8,uVar12,uVar2);
                  uVar12 = param_1[0x24];
                  uVar8 = param_1[0x23];
                  uVar2 = param_1[0x25];
                  uVar14 = param_2[0x24];
                  uVar11 = param_2[0x23];
                  uVar9 = param_2[0x25];
                  uStack_230 = uVar11;
                  uStack_228 = uVar14;
                  uStack_220 = uVar9;
                  uStack_210 = uVar8;
                  uStack_208 = uVar12;
                  uStack_200 = uVar2;
                  if ((uVar8 & 0xff) == 2) {
                    if ((uVar11 & 0xff) != 2) {
LAB_101661ef4:
                      func_0x000101661140(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_230;
                      puVar5 = &uStack_250;
                      uVar13 = uVar2;
                      uVar10 = uVar12;
                      uVar3 = uVar8;
                      uVar2 = uVar9;
                      uVar12 = uVar14;
                      uVar8 = uVar11;
                      goto LAB_101661900;
                    }
                    func_0x000101661140(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_230,&uStack_250,0x112db94f0,&UNK_10d96af00);
                  }
                  else {
                    if ((uVar11 & 0xff) == 2) goto LAB_101661ef4;
                    if ((((uint)uVar11 ^ (uint)uVar8) & 1) != 0) {
                      func_0x000101661140(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_230;
                      puVar5 = &uStack_250;
                      goto LAB_10166198c;
                    }
                    func_0x000101661140(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_230,&uStack_250,0x112db94f0,&UNK_10d96af00);
                    uVar13 = uVar12;
                    FUN_100e25fcc(uVar12,uVar2,uVar14,uVar9);
                    func_0x000101556278(uVar11,uVar14,uVar9);
                    if ((uVar13 & 1) == 0) goto LAB_101661a1c;
                  }
                  func_0x000101556278(uVar8,uVar12,uVar2);
                  uVar12 = param_1[0x27];
                  uVar8 = param_1[0x26];
                  uVar2 = param_1[0x28];
                  uVar14 = param_2[0x27];
                  uVar11 = param_2[0x26];
                  uVar9 = param_2[0x28];
                  uStack_270 = uVar11;
                  uStack_268 = uVar14;
                  uStack_260 = uVar9;
                  uStack_250 = uVar8;
                  uStack_248 = uVar12;
                  uStack_240 = uVar2;
                  if ((uVar8 & 0xff) == 2) {
                    if ((uVar11 & 0xff) != 2) {
LAB_101661fcc:
                      func_0x000101661140(&uStack_250,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_270;
                      puVar5 = auStack_2e8;
                      uVar13 = uVar2;
                      uVar10 = uVar12;
                      uVar3 = uVar8;
                      uVar2 = uVar9;
                      uVar12 = uVar14;
                      uVar8 = uVar11;
                      goto LAB_101661900;
                    }
                    func_0x000101661140(&uStack_250,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_270,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                  }
                  else {
                    if ((uVar11 & 0xff) == 2) goto LAB_101661fcc;
                    if ((((uint)uVar11 ^ (uint)uVar8) & 1) != 0) {
                      func_0x000101661140(&uStack_250,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_270;
                      puVar5 = auStack_2e8;
                      goto LAB_10166198c;
                    }
                    func_0x000101661140(&uStack_250,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_270,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                    uVar13 = uVar12;
                    FUN_100e25fcc(uVar12,uVar2,uVar14,uVar9);
                    func_0x000101556278(uVar11,uVar14,uVar9);
                    if ((uVar13 & 1) == 0) goto LAB_101661a1c;
                  }
                  func_0x000101556278(uVar8,uVar12,uVar2);
                  uVar2 = param_1[8];
                  FUN_100e25fcc(uVar2,param_1[9],param_2[8],param_2[9]);
                  uVar1 = (uint)uVar2;
                  goto LAB_101661694;
                }
LAB_101661d2c:
                func_0x000101661140(&uStack_2b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                func_0x000101661140(&uStack_2d0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                func_0x00010159fa64(uVar2,uVar12,uVar8);
                uVar2 = uVar14;
                uVar12 = uVar11;
                uVar8 = uVar9;
              }
              func_0x00010159fa64(uVar2,uVar12,uVar8);
              goto LAB_101661690;
            }
LAB_1016618d4:
            func_0x000101661140(&uStack_150,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
            puVar4 = &uStack_170;
            puVar5 = &uStack_2b0;
            uVar13 = uVar2;
            uVar10 = uVar12;
            uVar3 = uVar8;
            uVar2 = uVar9;
            uVar12 = uVar14;
            uVar8 = uVar11;
LAB_101661900:
            func_0x000101661140(puVar4,puVar5,0x112db94f0,&UNK_10d96af00);
            func_0x000101556278(uVar3,uVar10,uVar13);
          }
          else {
            if ((uVar11 & 0xff) == 2) goto LAB_1016618d4;
            if ((((uint)uVar11 ^ (uint)uVar8) & 1) == 0) {
              func_0x000101661140(&uStack_150,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              func_0x000101661140(&uStack_170,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              uVar13 = uVar12;
              FUN_100e25fcc(uVar12,uVar2,uVar14,uVar9);
              func_0x000101556278(uVar11,uVar14,uVar9);
              if ((uVar13 & 1) != 0) goto LAB_1016617e8;
            }
            else {
              func_0x000101661140(&uStack_150,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              puVar4 = &uStack_170;
              puVar5 = &uStack_2b0;
LAB_10166198c:
              func_0x000101661140(puVar4,puVar5,0x112db94f0,&UNK_10d96af00);
              func_0x000101556278(uVar11,uVar14,uVar9);
            }
          }
LAB_101661a1c:
          func_0x000101556278(uVar8,uVar12,uVar2);
        }
      }
      else if (uVar13 == 0) {
LAB_101661314:
        uStack_2b0 = uVar2;
        uStack_2a8 = uVar12;
        uStack_2a0 = uVar8;
        uStack_298 = uVar9;
        uStack_290 = uVar10;
        uStack_288 = uVar13;
        uStack_280 = uVar11;
        uStack_278 = uVar14;
        func_0x000101661140(&uStack_90,&uStack_d0,0x112db6f40,&UNK_10d9681d0);
        puVar4 = &uStack_b0;
        puVar5 = &uStack_d0;
LAB_1016614c0:
        func_0x000101661140(puVar4,puVar5,0x112db6f40,&UNK_10d9681d0);
        FUN_101628968(&uStack_2b0);
      }
      else {
        if (((uVar2 == uVar10) && (uVar12 == uVar13)) ||
           (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar12,uVar10,uVar13,0), (uVar3 & 1) != 0)) {
          func_0x000101661140(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          func_0x000101661140(&uStack_b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          uVar3 = uVar8;
          FUN_100e25fcc(uVar8,uVar9,uVar11,uVar14);
          func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
          if ((uVar3 & 1) != 0) goto LAB_101661390;
        }
        else {
          uVar6 = 0x112db6f40;
          puVar7 = &UNK_10d9681d0;
          func_0x000101661140(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          puVar4 = &uStack_b0;
LAB_101661658:
          func_0x000101661140(puVar4,&uStack_2b0,uVar6,puVar7);
          func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
        }
LAB_10166168c:
        func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
      }
    }
  }
LAB_101661690:
  uVar1 = 0;
LAB_101661694:
  return uVar1 & 1;
}



/* Entry: 101660778; end: 1016607a7;  */

undefined1  [16] FUN_101660778(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1016607a8; end: 1016607db;  */

void FUN_1016607a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 1016607dc; end: 1016607ef;  */

undefined1  [16] FUN_1016607dc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1016607ec;
  return auVar1;
}



/* Entry: 1016607f0; end: 101660803;  */

void FUN_1016607f0(void)

{
  FUN_10165fdbc();
  return;
}



/* Entry: 101660804; end: 10166086b;  */

void FUN_101660804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_188 [328];
  
  func_0x000107c610b4(auStack_188);
  FUN_10165ffe0(param_1,param_2,param_3);
  return;
}



/* Entry: 10166086c; end: 10166086f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10166086c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101660870; end: 1016608a7;  */

uint FUN_101660870(long param_1,long param_2)

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
  FUN_101663094();
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



/* Entry: 1016608a8; end: 1016608f7;  */

uint FUN_1016608a8(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2b0 [328];
  undefined1 auStack_168 [328];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_168,param_1,0x148);
  func_0x000107c610b4(auStack_2b0);
  FUN_1016611c8(auStack_2b0,auStack_168);
  return uVar1 & 1;
}



/* Entry: 1016608f8; end: 101660997;  */

/* WARNING: Possible PIC construction at 0x000101660944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101660954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101660948) */
/* WARNING: Removing unreachable block (ram,0x000101660958) */

void FUN_1016608f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd0d8 != -1) {
    func_0x000107c61568(0x112dbd0d8,FUN_10165fd74);
  }
  uVar5 = uRam00000001138026d0;
  uVar4 = uRam00000001138026c8;
  uVar3 = uRam00000001138026c0;
  uVar2 = uRam00000001138026b8;
  uVar1 = uRam00000001138026b0;
  *param_1 = uRam00000001138026a8;
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



/* Entry: 101660998; end: 1016609d3;  */

void FUN_101660998(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd100;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd100,&UNK_10d9760f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016609d4; end: 101660adf;  */

void FUN_1016609d4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1c0 [72];
  undefined1 auStack_178 [328];
  
  func_0x000107c610b4(auStack_178);
  func_0x000107c6068c(auStack_1c0,0);
  func_0x000107c5fa50(auStack_1c0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101660ae0; end: 101660b33;  */

uint FUN_101660ae0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2b0 [328];
  undefined1 auStack_168 [328];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2b0,param_1,0x148);
  func_0x000107c610b4(auStack_168,param_2,0x148);
  FUN_1016611c8(auStack_2b0,auStack_168);
  return uVar1 & 1;
}



/* Entry: 101660b34; end: 101661107;  */

/* WARNING: Possible PIC construction at 0x000101660ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101661014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101661078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101661094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010166107c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101661018) */
/* WARNING: Removing unreachable block (ram,0x000101661020) */
/* WARNING: Removing unreachable block (ram,0x000101660ffc) */
/* WARNING: Removing unreachable block (ram,0x000101661098) */

void FUN_101660b34(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined1 uStack_81;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_1 + 0x10);
  if (lVar21 == *(long *)(param_2 + 0x10)) {
    if ((lVar21 != 0) && (param_1 != param_2)) {
      puVar22 = (ulong *)(param_2 + 0x48);
      puVar23 = (ulong *)(param_1 + 0x28);
      do {
        uVar17 = puVar23[-1];
        uVar1 = *puVar23;
        uVar19 = puVar23[1];
        uVar2 = puVar23[2];
        uVar10 = puVar23[3];
        uVar3 = puVar23[4];
        param_3 = puVar22[-5];
        uVar4 = puVar22[-4];
        uVar13 = puVar22[-3];
        uVar5 = puVar22[-2];
        uVar9 = puVar22[-1];
        uVar12 = *puVar22;
        param_4 = uVar4;
        if ((((uVar17 != param_3) || (uVar1 != uVar4)) &&
            (param_2 = uVar1, func_0x000107c605b8(), (uVar17 & 1) == 0)) ||
           (((uVar19 != uVar13 || (uVar2 != uVar5)) &&
            (param_2 = uVar2, param_4 = uVar5, func_0x000107c605b8(uVar19,uVar2,uVar13,uVar5,0),
            param_3 = uVar13, (uVar19 & 1) == 0)))) goto LAB_1016610a0;
        uVar14 = (uint)(uVar3 >> 0x20);
        uVar15 = uVar14 >> 0x1e;
        uVar7 = (uint)(uVar12 >> 0x20);
        uVar18 = uVar7 >> 0x1e;
        iVar20 = (int)uVar10;
        if (uVar3 >> 0x3e == 3) {
          uVar17 = 0;
          if (((uVar10 != 0) || (uVar3 != 0xc000000000000000)) ||
             ((uVar12 >> 0x3e < 3 || ((uVar17 = 0, uVar9 != 0 || (uVar12 != 0xc000000000000000))))))
          goto joined_r0x000101660ec8;
        }
        else {
          if (uVar14 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = uVar3 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar10 >> 0x20);
              if (SBORROW4(iVar16,iVar20)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1016610f4);
                (*pcVar8)();
              }
              uVar17 = (ulong)(iVar16 - iVar20);
            }
joined_r0x000101660ec8:
            if (1 < uVar7 >> 0x1e) goto LAB_101660cc4;
LAB_101660cf8:
            if (uVar18 == 0) {
              uVar19 = uVar12 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar9 >> 0x20);
              if (SBORROW4(iVar16,(int)uVar9)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1016610ec);
                (*pcVar8)();
              }
              uVar19 = (ulong)(iVar16 - (int)uVar9);
            }
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(uVar10 + 0x18) - *(long *)(uVar10 + 0x10);
              if (SBORROW8(*(long *)(uVar10 + 0x18),*(long *)(uVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1016610f0);
                (*pcVar8)();
              }
              goto joined_r0x000101660ec8;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto LAB_101660cf8;
LAB_101660cc4:
            if (uVar18 != 2) {
              if (uVar17 == 0) goto LAB_101660b94;
              goto LAB_1016610a0;
            }
            uVar19 = *(long *)(uVar9 + 0x18) - *(long *)(uVar9 + 0x10);
            if (SBORROW8(*(long *)(uVar9 + 0x18),*(long *)(uVar9 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1016610e8);
              (*pcVar8)();
            }
          }
          if (uVar17 != uVar19) goto LAB_1016610a0;
          if (0 < (long)uVar17) {
            if (uVar15 < 2) {
              if (uVar15 != 0) {
                lVar21 = (long)iVar20;
                uVar17 = ((long)uVar10 >> 0x20) - lVar21;
                if ((long)uVar10 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x1016610f8);
                  (*pcVar8)();
                }
                func_0x000107c61434(uVar1);
                func_0x000107c61434(uVar2);
                func_0x00010006c00c(uVar10,uVar3);
                func_0x000107c61434(uVar4);
                func_0x000107c61434(uVar5);
                uVar19 = uVar9;
                func_0x00010006c00c(uVar9,uVar12);
                func_0x000107c5ec30();
                if (uVar19 == 0) {
                  func_0x000107c5ec38();
                  uVar17 = 0;
                  lVar21 = 0;
                }
                else {
                  uVar10 = uVar19;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,uVar10)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x101661104);
                    (*pcVar8)();
                  }
                  uVar19 = (lVar21 - uVar10) + uVar19;
                  func_0x000107c5ec38();
                  if ((long)uVar17 <= (long)uVar10) {
                    uVar10 = uVar17;
                  }
                  uVar17 = 0;
                  if (uVar19 != 0) {
                    uVar17 = uVar19;
                  }
                  lVar21 = 0;
                  if (uVar19 != 0) {
                    lVar21 = uVar10 + uVar19;
                  }
                }
LAB_101661048:
                FUN_100e25bdc(auStack_80,uVar17,lVar21,uVar9,uVar12);
                func_0x000107c6142c(uVar5);
                func_0x000107c6142c(uVar4);
                goto code_r0x00010006c090;
              }
              auStack_80[0] = (undefined1)uVar10;
              auStack_80[1] = (undefined1)(uVar10 >> 8);
              auStack_80[2] = (undefined1)(uVar10 >> 0x10);
              auStack_80[3] = (undefined1)(uVar10 >> 0x18);
              auStack_80[4] = (undefined1)(uVar10 >> 0x20);
              auStack_80[5] = (undefined1)(uVar10 >> 0x28);
              auStack_80[6] = (undefined1)(uVar10 >> 0x30);
              auStack_80[7] = (undefined1)(uVar10 >> 0x38);
              auStack_80[8] = (undefined1)uVar3;
              auStack_80[9] = (undefined1)(uVar3 >> 8);
              auStack_80[10] = (undefined1)(uVar3 >> 0x10);
              auStack_80[0xb] = (undefined1)(uVar3 >> 0x18);
              auStack_80[0xc] = (undefined1)(uVar3 >> 0x20);
              auStack_80[0xd] = (undefined1)(uVar3 >> 0x28);
              func_0x000107c61434(uVar1);
              func_0x000107c61434(uVar2);
              func_0x00010006c00c(uVar10,uVar3);
              func_0x000107c61434(uVar4);
              func_0x000107c61434(uVar5);
              func_0x00010006c00c(uVar9,uVar12);
              FUN_100e25bdc(&uStack_81,auStack_80,auStack_80 + (uVar3 >> 0x30 & 0xff),uVar9,uVar12);
              func_0x000107c6142c(uVar5);
            }
            else {
              if (uVar15 == 2) {
                lVar21 = *(long *)(uVar10 + 0x10);
                lVar6 = *(long *)(uVar10 + 0x18);
                func_0x000107c61434(uVar1);
                func_0x000107c61434(uVar2);
                func_0x00010006c00c(uVar10,uVar3);
                func_0x000107c61434(uVar4);
                func_0x000107c61434(uVar5);
                uVar17 = uVar9;
                func_0x00010006c00c(uVar9,uVar12);
                func_0x000107c5ec30();
                uVar19 = uVar17;
                if (uVar17 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,uVar19)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x101661100);
                    (*pcVar8)();
                  }
                  uVar17 = (lVar21 - uVar19) + uVar17;
                }
                uVar10 = lVar6 - lVar21;
                if (SBORROW8(lVar6,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x1016610fc);
                  (*pcVar8)();
                }
                func_0x000107c5ec38();
                if (uVar17 == 0) {
                  lVar21 = 0;
                }
                else {
                  if ((long)uVar10 <= (long)uVar19) {
                    uVar19 = uVar10;
                  }
                  lVar21 = uVar19 + uVar17;
                }
                goto LAB_101661048;
              }
              auStack_80[8] = 0;
              auStack_80[9] = 0;
              auStack_80[10] = 0;
              auStack_80[0xb] = 0;
              auStack_80[0xc] = 0;
              auStack_80[0xd] = 0;
              auStack_80[0] = 0;
              auStack_80[1] = 0;
              auStack_80[2] = 0;
              auStack_80[3] = 0;
              auStack_80[4] = 0;
              auStack_80[5] = 0;
              auStack_80[6] = 0;
              auStack_80[7] = 0;
              func_0x000107c61434(uVar1);
              func_0x000107c61434(uVar2);
              func_0x00010006c00c(uVar10,uVar3);
              func_0x000107c61434(uVar4);
              func_0x000107c61434(uVar5);
              func_0x00010006c00c(uVar9,uVar12);
              FUN_100e25bdc(&uStack_81,auStack_80,auStack_80,uVar9,uVar12);
              func_0x000107c6142c(uVar5);
            }
            func_0x000107c6142c(uVar4);
            goto code_r0x00010006c090;
          }
        }
LAB_101660b94:
        puVar22 = puVar22 + 6;
        puVar23 = puVar23 + 6;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    uVar11 = 1;
    uVar9 = param_3;
    uVar12 = param_4;
  }
  else {
LAB_1016610a0:
    uVar11 = 0;
    uVar9 = param_3;
    uVar12 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(uVar11);
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
code_r0x00010006c090:
  uVar14 = (uint)(uVar12 >> 0x3e);
  if (uVar14 == 1) {
    uVar9 = uVar12 & 0x3fffffffffffffff;
  }
  else if (uVar14 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar9);
  return;
}


