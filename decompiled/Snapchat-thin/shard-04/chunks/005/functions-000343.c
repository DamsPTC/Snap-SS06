/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035a82dc; end: 1035a82df;  */

void FUN_1035a82dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0d50;
  func_0x000107c61520(&UNK_10dbe0d50,&UNK_110668fc0);
  puRam0000000112f7b048 = puVar1;
  return;
}



/* Entry: 1035a82e0; end: 1035a831f;  */

void FUN_1035a82e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0d50;
  func_0x000107c61520(&UNK_10dbe0d50,&UNK_110668fc0);
  puRam0000000112f7b048 = puVar1;
  return;
}



/* Entry: 1035a8320; end: 1035a83a7;  */

long FUN_1035a8320(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035a83a8; end: 1035a86db;  */

undefined8 * FUN_1035a83a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar4 = param_2[3];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[3] = uVar4;
    param_1[4] = uVar3;
    lVar2 = param_2[6];
  }
  else {
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = param_2[4];
    lVar2 = param_2[6];
  }
  if (lVar2 == 0) {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = lVar2;
    uVar4 = param_2[7];
    uVar1 = param_2[8];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar1);
    param_1[7] = uVar4;
    param_1[8] = uVar1;
  }
  return param_1;
}



/* Entry: 1035a86dc; end: 1035a87ab;  */

int FUN_1035a86dc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035a87ac; end: 1035a87eb;  */

void FUN_1035a87ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe0cbc;
  func_0x000107c61520(&DAT_10dbe0cbc,&UNK_110668fc0);
  puRam0000000112f7b058 = puVar1;
  return;
}



/* Entry: 1035a87ec; end: 1035a8833;  */

undefined8 FUN_1035a87ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035a8834; end: 1035a887b;  */

void FUN_1035a8834(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe0f60,0x24,2);
  uRam0000000113808fa8 = uStack_38;
  uRam0000000113808fa0 = uStack_40;
  uRam0000000113808fb8 = uStack_28;
  uRam0000000113808fb0 = uStack_30;
  uRam0000000113808fc8 = uStack_18;
  uRam0000000113808fc0 = uStack_20;
  return;
}



/* Entry: 1035a887c; end: 1035a895f;  */

void FUN_1035a887c(undefined8 param_1,long param_2,long param_3)

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
        func_0x000103510fbc();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_11066abb0;
LAB_1035a8904:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001035a99e8();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110673ce8;
        goto LAB_1035a8904;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035a8960; end: 1035a89d3;  */

void FUN_1035a8960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035a89d4();
  if (unaff_x21 == 0) {
    FUN_1035a8a54();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035a89d4; end: 1035a8a53;  */

void FUN_1035a89d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x20);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a8a54; end: 1035a8adb;  */

void FUN_1035a8a54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_70 = *(long *)(param_1 + 0x28);
  if (lStack_70 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035a99e8();
    (*pcVar1)(&lStack_70,2,&UNK_110673ce8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a8adc; end: 1035a8b23;  */

uint FUN_1035a8adc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
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
  undefined1 auStack_190 [48];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar8 = param_1[3];
  uVar6 = param_1[2];
  lVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar7 = param_2[2];
  lVar5 = param_2[4];
  uStack_100 = uVar7;
  uStack_f8 = uVar9;
  lStack_f0 = lVar5;
  uStack_e0 = uVar6;
  uStack_d8 = uVar8;
  lStack_d0 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      FUN_1035a87ec(&uStack_e0,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
      FUN_1035a87ec(&uStack_100,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
      func_0x00010349f458(uVar6,uVar8,0);
LAB_1035a9088:
      uVar9 = param_1[6];
      lVar4 = param_1[5];
      uVar15 = param_1[8];
      uVar13 = param_1[7];
      uVar10 = param_1[10];
      uVar7 = param_1[9];
      uVar11 = param_2[6];
      lVar5 = param_2[5];
      uVar16 = param_2[8];
      uVar14 = param_2[7];
      uVar12 = param_2[10];
      uVar8 = param_2[9];
      lStack_160 = lVar5;
      uStack_158 = uVar11;
      uStack_150 = uVar14;
      uStack_148 = uVar16;
      uStack_140 = uVar8;
      uStack_138 = uVar12;
      lStack_130 = lVar4;
      uStack_128 = uVar9;
      uStack_120 = uVar13;
      uStack_118 = uVar15;
      uStack_110 = uVar7;
      uStack_108 = uVar10;
      if (lVar4 == 0) {
        if (lVar5 != 0) goto LAB_1035a9188;
        FUN_1035a87ec(&lStack_130,&lStack_98,0x112f7b060,&UNK_10dbe0e08);
        FUN_1035a87ec(&lStack_160,&lStack_98,0x112f7b060,&UNK_10dbe0e08);
        FUN_1034c74c8(0,uVar9,uVar13,uVar15,uVar7,uVar10);
      }
      else {
        if (lVar5 == 0) {
LAB_1035a9188:
          FUN_1035a87ec(&lStack_130,&lStack_98,0x112f7b060,&UNK_10dbe0e08);
          FUN_1035a87ec(&lStack_160,&lStack_98,0x112f7b060,&UNK_10dbe0e08);
          FUN_1034c74c8(lVar4,uVar9,uVar13,uVar15,uVar7,uVar10);
          FUN_1034c74c8(lVar5,uVar11,uVar14,uVar16,uVar8,uVar12);
          uVar1 = 0;
          goto LAB_1035a927c;
        }
        lStack_c8 = lVar4;
        uStack_c0 = uVar9;
        uStack_b8 = uVar13;
        uStack_b0 = uVar15;
        uStack_a8 = uVar7;
        uStack_a0 = uVar10;
        lStack_98 = lVar5;
        uStack_90 = uVar11;
        uStack_88 = uVar14;
        uStack_80 = uVar16;
        uStack_78 = uVar8;
        uStack_70 = uVar12;
        FUN_1035a87ec(&lStack_130,auStack_190,0x112f7b060,&UNK_10dbe0e08);
        FUN_1035a87ec(&lStack_160,auStack_190,0x112f7b060,&UNK_10dbe0e08);
        plVar3 = &lStack_c8;
        FUN_10363b3fc(plVar3,&lStack_98);
        FUN_1034c74c8(lVar5,uVar11,uVar14,uVar16,uVar8,uVar12);
        FUN_1034c74c8(lVar4,uVar9,uVar13,uVar15,uVar7,uVar10);
        if (((ulong)plVar3 & 1) == 0) goto LAB_1035a917c;
      }
      uVar7 = *param_1;
      func_0x000100e25fcc(uVar7,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar7;
      goto LAB_1035a927c;
    }
  }
  else if (lVar5 != 0) {
    FUN_1035a87ec(&uStack_e0,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a87ec(&uStack_100,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
    uVar2 = uVar6;
    FUN_1035d8f6c(uVar6,uVar8,lVar4,uVar7,uVar9,lVar5);
    func_0x00010349f458(uVar7,uVar9,lVar5);
    func_0x00010349f458(uVar6,uVar8,lVar4);
    if ((uVar2 & 1) != 0) goto LAB_1035a9088;
LAB_1035a917c:
    uVar1 = 0;
    goto LAB_1035a927c;
  }
  FUN_1035a87ec(&uStack_e0,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
  FUN_1035a87ec(&uStack_100,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
  func_0x00010349f458(uVar6,uVar8,lVar4);
  func_0x00010349f458(uVar7,uVar9,lVar5);
  uVar1 = 0;
LAB_1035a927c:
  return uVar1 & 1;
}



/* Entry: 1035a8b24; end: 1035a8b53;  */

undefined1  [16] FUN_1035a8b24(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035a8b54; end: 1035a8b87;  */

void FUN_1035a8b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035a8b88; end: 1035a8b9b;  */

undefined8 FUN_1035a8b88(void)

{
  return 0x1035a8b98;
}



/* Entry: 1035a8b9c; end: 1035a8baf;  */

void FUN_1035a8b9c(void)

{
  FUN_1035a887c();
  return;
}



/* Entry: 1035a8bb0; end: 1035a8bf7;  */

void FUN_1035a8bb0(void)

{
  FUN_1035a8960();
  return;
}



/* Entry: 1035a8bf8; end: 1035a8bfb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035a8bf8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035a8bfc; end: 1035a8c33;  */

uint FUN_1035a8bfc(long param_1,long param_2)

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
  FUN_1035a99a8();
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



/* Entry: 1035a8c34; end: 1035a8c9b;  */

uint FUN_1035a8c34(undefined8 *param_1)

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
  FUN_1035a8f04(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1035a8c9c; end: 1035a8d3b;  */

/* WARNING: Possible PIC construction at 0x0001035a8ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a8cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a8cec) */
/* WARNING: Removing unreachable block (ram,0x0001035a8cfc) */

void FUN_1035a8c9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b068 != -1) {
    func_0x000107c61568(0x112f7b068,FUN_1035a8834);
  }
  uVar5 = uRam0000000113808fc8;
  uVar4 = uRam0000000113808fc0;
  uVar3 = uRam0000000113808fb8;
  uVar2 = uRam0000000113808fb0;
  uVar1 = uRam0000000113808fa8;
  *param_1 = uRam0000000113808fa0;
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



/* Entry: 1035a8d3c; end: 1035a8d77;  */

void FUN_1035a8d3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7b088;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7b088,&UNK_10dbe0f58);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035a8d78; end: 1035a8e9b;  */

void FUN_1035a8d78(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035a8e9c; end: 1035a8f03;  */

uint FUN_1035a8e9c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035a8f04(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1035a8f04; end: 1035a929f;  */

uint FUN_1035a8f04(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
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
  undefined1 auStack_190 [48];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar8 = param_1[3];
  uVar6 = param_1[2];
  lVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar7 = param_2[2];
  lVar5 = param_2[4];
  uStack_100 = uVar7;
  uStack_f8 = uVar9;
  lStack_f0 = lVar5;
  uStack_e0 = uVar6;
  uStack_d8 = uVar8;
  lStack_d0 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      FUN_1035a87ec(&uStack_e0,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
      FUN_1035a87ec(&uStack_100,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
      func_0x00010349f458(uVar6,uVar8,0);
LAB_1035a9088:
      uVar9 = param_1[6];
      lVar4 = param_1[5];
      uVar15 = param_1[8];
      uVar13 = param_1[7];
      uVar10 = param_1[10];
      uVar7 = param_1[9];
      uVar11 = param_2[6];
      lVar5 = param_2[5];
      uVar16 = param_2[8];
      uVar14 = param_2[7];
      uVar12 = param_2[10];
      uVar8 = param_2[9];
      lStack_160 = lVar5;
      uStack_158 = uVar11;
      uStack_150 = uVar14;
      uStack_148 = uVar16;
      uStack_140 = uVar8;
      uStack_138 = uVar12;
      lStack_130 = lVar4;
      uStack_128 = uVar9;
      uStack_120 = uVar13;
      uStack_118 = uVar15;
      uStack_110 = uVar7;
      uStack_108 = uVar10;
      if (lVar4 == 0) {
        if (lVar5 != 0) goto LAB_1035a9188;
        FUN_1035a87ec(&lStack_130,&lStack_98,0x112f7b060,&UNK_10dbe0e08);
        FUN_1035a87ec(&lStack_160,&lStack_98,0x112f7b060,&UNK_10dbe0e08);
        FUN_1034c74c8(0,uVar9,uVar13,uVar15,uVar7,uVar10);
      }
      else {
        if (lVar5 == 0) {
LAB_1035a9188:
          FUN_1035a87ec(&lStack_130,&lStack_98,0x112f7b060,&UNK_10dbe0e08);
          FUN_1035a87ec(&lStack_160,&lStack_98,0x112f7b060,&UNK_10dbe0e08);
          FUN_1034c74c8(lVar4,uVar9,uVar13,uVar15,uVar7,uVar10);
          FUN_1034c74c8(lVar5,uVar11,uVar14,uVar16,uVar8,uVar12);
          uVar1 = 0;
          goto LAB_1035a927c;
        }
        lStack_c8 = lVar4;
        uStack_c0 = uVar9;
        uStack_b8 = uVar13;
        uStack_b0 = uVar15;
        uStack_a8 = uVar7;
        uStack_a0 = uVar10;
        lStack_98 = lVar5;
        uStack_90 = uVar11;
        uStack_88 = uVar14;
        uStack_80 = uVar16;
        uStack_78 = uVar8;
        uStack_70 = uVar12;
        FUN_1035a87ec(&lStack_130,auStack_190,0x112f7b060,&UNK_10dbe0e08);
        FUN_1035a87ec(&lStack_160,auStack_190,0x112f7b060,&UNK_10dbe0e08);
        plVar3 = &lStack_c8;
        FUN_10363b3fc(plVar3,&lStack_98);
        FUN_1034c74c8(lVar5,uVar11,uVar14,uVar16,uVar8,uVar12);
        FUN_1034c74c8(lVar4,uVar9,uVar13,uVar15,uVar7,uVar10);
        if (((ulong)plVar3 & 1) == 0) goto LAB_1035a917c;
      }
      uVar7 = *param_1;
      func_0x000100e25fcc(uVar7,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar7;
      goto LAB_1035a927c;
    }
  }
  else if (lVar5 != 0) {
    FUN_1035a87ec(&uStack_e0,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a87ec(&uStack_100,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
    uVar2 = uVar6;
    FUN_1035d8f6c(uVar6,uVar8,lVar4,uVar7,uVar9,lVar5);
    func_0x00010349f458(uVar7,uVar9,lVar5);
    func_0x00010349f458(uVar6,uVar8,lVar4);
    if ((uVar2 & 1) != 0) goto LAB_1035a9088;
LAB_1035a917c:
    uVar1 = 0;
    goto LAB_1035a927c;
  }
  FUN_1035a87ec(&uStack_e0,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
  FUN_1035a87ec(&uStack_100,&lStack_98,0x112f759a0,&UNK_10dbd33f0);
  func_0x00010349f458(uVar6,uVar8,lVar4);
  func_0x00010349f458(uVar7,uVar9,lVar5);
  uVar1 = 0;
LAB_1035a927c:
  return uVar1 & 1;
}



/* Entry: 1035a92a0; end: 1035a92df;  */

void FUN_1035a92a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0e80;
  func_0x000107c61520(&UNK_10dbe0e80,&UNK_110669170);
  puRam0000000112f7b070 = puVar1;
  return;
}



/* Entry: 1035a92e0; end: 1035a9303;  */

void FUN_1035a92e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a9304();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035a9304; end: 1035a9343;  */

void FUN_1035a9304(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0e58;
  func_0x000107c61520(&UNK_10dbe0e58,&UNK_110669170);
  puRam0000000112f7b078 = puVar1;
  return;
}



/* Entry: 1035a9344; end: 1035a936f;  */

void FUN_1035a9344(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a92a0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502cd4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035a9370; end: 1035a9373;  */

void FUN_1035a9370(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0ec0;
  func_0x000107c61520(&UNK_10dbe0ec0,&UNK_110669170);
  puRam0000000112f7b080 = puVar1;
  return;
}



/* Entry: 1035a9374; end: 1035a93b3;  */

void FUN_1035a9374(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0ec0;
  func_0x000107c61520(&UNK_10dbe0ec0,&UNK_110669170);
  puRam0000000112f7b080 = puVar1;
  return;
}



/* Entry: 1035a93b4; end: 1035a9453;  */

long FUN_1035a93b4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035a9454; end: 1035a9777;  */

undefined8 * FUN_1035a9454(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar1 = param_2[4];
  if (lVar1 == 0) {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  else {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = lVar1;
    func_0x000107c6157c(lVar1);
  }
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    lVar1 = param_2[5];
    uVar4 = param_2[8];
    uVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[5] = lVar1;
    param_1[8] = uVar4;
    param_1[7] = uVar3;
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
  }
  else {
    param_1[5] = lVar1;
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    uVar2 = param_2[10];
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[9];
      param_1[8] = param_2[8];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[9] = uVar3;
      param_1[10] = uVar2;
    }
    else {
      uVar3 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar3;
      param_1[10] = param_2[10];
    }
  }
  return param_1;
}



/* Entry: 1035a9778; end: 1035a97ab;  */

undefined8 FUN_1035a9778(undefined8 param_1)

{
  FUN_10363c984();
  return param_1;
}



/* Entry: 1035a97ac; end: 1035a98d3;  */

undefined8 * FUN_1035a97ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[4] != 0) {
    lVar5 = param_2[4];
    if (lVar5 != 0) {
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      uVar6 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar6;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[4];
      param_1[4] = lVar5;
      func_0x000107c61574(uVar1);
      goto LAB_1035a9824;
    }
    FUN_103510d9c(param_1 + 2);
  }
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
LAB_1035a9824:
  plVar4 = param_1 + 5;
  if (*plVar4 != 0) {
    if (param_2[5] != 0) {
      param_1[5] = param_2[5];
      func_0x000107c6142c();
      uVar1 = param_1[6];
      uVar2 = param_1[7];
      uVar6 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar6;
      func_0x00010006c090(uVar1,uVar2);
      if ((ulong)param_1[10] >> 0x3c < 0xf) {
        uVar3 = param_2[10];
        if (uVar3 >> 0x3c < 0xf) {
          uVar1 = param_1[9];
          uVar2 = param_2[8];
          param_1[9] = param_2[9];
          param_1[8] = uVar2;
          param_1[10] = uVar3;
          func_0x00010006c090(uVar1);
          return param_1;
        }
        func_0x00010159d670(param_1 + 8);
      }
      uVar1 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar1;
      param_1[10] = param_2[10];
      return param_1;
    }
    FUN_1035a9778(plVar4);
  }
  lVar5 = param_2[5];
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  *plVar4 = lVar5;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  return param_1;
}



/* Entry: 1035a98d4; end: 1035a99a7;  */

int FUN_1035a98d4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x16] != '\0')) {
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



/* Entry: 1035a99a8; end: 1035a9a6f;  */

void FUN_1035a99a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe0e2c;
  func_0x000107c61520(&DAT_10dbe0e2c,&UNK_110669170);
  puRam0000000112f7b090 = puVar1;
  return;
}



/* Entry: 1035a9a70; end: 1035a9b23;  */

/* WARNING: Removing unreachable block (ram,0x0001035a9b20) */

void FUN_1035a9a70(undefined8 param_1,long param_2,long param_3)

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
        func_0x000103510fbc();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_11066abb0,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035a9b24; end: 1035a9b7f;  */

void FUN_1035a9b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035a9b80();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035a9b80; end: 1035a9bff;  */

void FUN_1035a9b80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x20);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a9c00; end: 1035a9c3f;  */

uint FUN_1035a9c00(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  lVar3 = param_1[4];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  lVar4 = param_2[4];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  lStack_70 = lVar3;
  if (lVar3 == 0) {
    if (lVar4 != 0) goto LAB_1035aa070;
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    func_0x00010349f458(uVar5,uVar7,0);
  }
  else {
    if (lVar4 == 0) {
LAB_1035aa070:
      FUN_10355b6d0(&uStack_80,auStack_b8);
      FUN_10355b6d0(&uStack_a0,auStack_b8);
      func_0x00010349f458(uVar5,uVar7,lVar3);
      func_0x00010349f458(uVar6,uVar8,lVar4);
      uVar1 = 0;
      goto LAB_1035aa0e4;
    }
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    uVar2 = uVar5;
    FUN_1035d8f6c(uVar5,uVar7,lVar3,uVar6,uVar8,lVar4);
    func_0x00010349f458(uVar6,uVar8,lVar4);
    func_0x00010349f458(uVar5,uVar7,lVar3);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1035aa0e4;
    }
  }
  uVar6 = *param_1;
  func_0x000100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar6;
LAB_1035aa0e4:
  return uVar1 & 1;
}



/* Entry: 1035a9c40; end: 1035a9c6f;  */

undefined1  [16] FUN_1035a9c40(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035a9c70; end: 1035a9ca3;  */

void FUN_1035a9c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035a9ca4; end: 1035a9cb7;  */

undefined8 FUN_1035a9ca4(void)

{
  return 0x1035a9cb4;
}



/* Entry: 1035a9cb8; end: 1035a9ccb;  */

void FUN_1035a9cb8(void)

{
  FUN_1035a9a70();
  return;
}



/* Entry: 1035a9ccc; end: 1035a9d03;  */

void FUN_1035a9ccc(void)

{
  FUN_1035a9b24();
  return;
}



/* Entry: 1035a9d04; end: 1035a9d07;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035a9d04(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035a9d08; end: 1035a9d3f;  */

uint FUN_1035a9d08(long param_1,long param_2)

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
  FUN_1035aa544();
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



/* Entry: 1035a9d40; end: 1035a9d87;  */

uint FUN_1035a9d40(undefined8 *param_1)

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
  FUN_1035a9fb0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1035a9d88; end: 1035a9e27;  */

/* WARNING: Possible PIC construction at 0x0001035a9dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a9de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a9dd8) */
/* WARNING: Removing unreachable block (ram,0x0001035a9de8) */

void FUN_1035a9d88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b0a0 != -1) {
    func_0x000107c61568(0x112f7b0a0,0x1035a9a28);
  }
  uVar5 = uRam0000000113808ff8;
  uVar4 = uRam0000000113808ff0;
  uVar3 = uRam0000000113808fe8;
  uVar2 = uRam0000000113808fe0;
  uVar1 = uRam0000000113808fd8;
  *param_1 = uRam0000000113808fd0;
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



/* Entry: 1035a9e28; end: 1035a9e63;  */

void FUN_1035a9e28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7b0c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7b0c0,&UNK_10dbe10c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035a9e64; end: 1035a9f67;  */

void FUN_1035a9e64(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035a9f68; end: 1035a9faf;  */

uint FUN_1035a9f68(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035a9fb0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1035a9fb0; end: 1035aa107;  */

uint FUN_1035a9fb0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  lVar3 = param_1[4];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  lVar4 = param_2[4];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  lStack_70 = lVar3;
  if (lVar3 == 0) {
    if (lVar4 != 0) goto LAB_1035aa070;
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    func_0x00010349f458(uVar5,uVar7,0);
  }
  else {
    if (lVar4 == 0) {
LAB_1035aa070:
      FUN_10355b6d0(&uStack_80,auStack_b8);
      FUN_10355b6d0(&uStack_a0,auStack_b8);
      func_0x00010349f458(uVar5,uVar7,lVar3);
      func_0x00010349f458(uVar6,uVar8,lVar4);
      uVar1 = 0;
      goto LAB_1035aa0e4;
    }
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    uVar2 = uVar5;
    FUN_1035d8f6c(uVar5,uVar7,lVar3,uVar6,uVar8,lVar4);
    func_0x00010349f458(uVar6,uVar8,lVar4);
    func_0x00010349f458(uVar5,uVar7,lVar3);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1035aa0e4;
    }
  }
  uVar6 = *param_1;
  func_0x000100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar6;
LAB_1035aa0e4:
  return uVar1 & 1;
}



/* Entry: 1035aa108; end: 1035aa147;  */

void FUN_1035aa108(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b0a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0ff8;
  func_0x000107c61520(&UNK_10dbe0ff8,&UNK_110669320);
  puRam0000000112f7b0a8 = puVar1;
  return;
}



/* Entry: 1035aa148; end: 1035aa16b;  */

void FUN_1035aa148(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035aa16c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035aa16c; end: 1035aa1ab;  */

void FUN_1035aa16c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0fd0;
  func_0x000107c61520(&UNK_10dbe0fd0,&UNK_110669320);
  puRam0000000112f7b0b0 = puVar1;
  return;
}



/* Entry: 1035aa1ac; end: 1035aa1d7;  */

void FUN_1035aa1ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035aa108();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502794();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035aa1d8; end: 1035aa1db;  */

void FUN_1035aa1d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b0b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1038;
  func_0x000107c61520(&UNK_10dbe1038,&UNK_110669320);
  puRam0000000112f7b0b8 = puVar1;
  return;
}



/* Entry: 1035aa1dc; end: 1035aa21b;  */

void FUN_1035aa1dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b0b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1038;
  func_0x000107c61520(&UNK_10dbe1038,&UNK_110669320);
  puRam0000000112f7b0b8 = puVar1;
  return;
}



/* Entry: 1035aa21c; end: 1035aa28f;  */

long FUN_1035aa21c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035aa290; end: 1035aa47b;  */

undefined8 * FUN_1035aa290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  lVar2 = param_2[4];
  if (lVar2 == 0) {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  else {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[2] = uVar3;
    param_1[3] = uVar1;
    param_1[4] = lVar2;
    func_0x000107c6157c(lVar2);
  }
  return param_1;
}



/* Entry: 1035aa47c; end: 1035aa543;  */

int FUN_1035aa47c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
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



/* Entry: 1035aa544; end: 1035aa583;  */

void FUN_1035aa544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe0fa4;
  func_0x000107c61520(&DAT_10dbe0fa4,&UNK_110669320);
  puRam0000000112f7b0c8 = puVar1;
  return;
}



/* Entry: 1035aa584; end: 1035aa63f;  */

void FUN_1035aa584(undefined8 *param_1)

{
  undefined *puVar1;
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
  
  FUN_10355c4a4(&uStack_e0);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = puVar1;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[0x18] = uStack_58;
  param_1[0x17] = uStack_60;
  param_1[0x1a] = uStack_48;
  param_1[0x19] = uStack_50;
  param_1[0x1c] = uStack_38;
  param_1[0x1b] = uStack_40;
  param_1[0x1e] = uStack_28;
  param_1[0x1d] = uStack_30;
  param_1[0x10] = uStack_98;
  param_1[0xf] = uStack_a0;
  param_1[0x12] = uStack_88;
  param_1[0x11] = uStack_90;
  param_1[0x14] = uStack_78;
  param_1[0x13] = uStack_80;
  param_1[0x16] = uStack_68;
  param_1[0x15] = uStack_70;
  param_1[8] = uStack_d8;
  param_1[7] = uStack_e0;
  param_1[10] = uStack_c8;
  param_1[9] = uStack_d0;
  param_1[0xc] = uStack_b8;
  param_1[0xb] = uStack_c0;
  param_1[0xe] = uStack_a8;
  param_1[0xd] = uStack_b0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0xf000000000000000;
  param_1[0x23] = 0xf000000000000000;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  return;
}



/* Entry: 1035aa640; end: 1035aa78b;  */

void FUN_1035aa640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_58,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined8 *)(lVar6 + 0x20);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x10) = param_1;
  *(undefined8 *)(lVar6 + 0x18) = param_2;
  *(undefined8 *)(lVar6 + 0x20) = param_3;
  *(undefined8 *)(lVar6 + 0x28) = param_4;
  func_0x000101597ae4(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 1035aa78c; end: 1035aa81b;  */

void FUN_1035aa78c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(lVar4,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  func_0x000107c61428(lVar4 + 0x48,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar4 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  *(undefined8 *)(lVar4 + 0x48) = param_1;
  *(undefined8 *)(lVar4 + 0x50) = param_2;
  func_0x00010006c090(uVar3,uVar1);
  return;
}



/* Entry: 1035aa81c; end: 1035aab5b;  */

void FUN_1035aa81c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x58,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar1 = *(undefined8 *)(lVar5 + 0x60);
  uVar4 = *(undefined8 *)(lVar5 + 0x68);
  *(undefined8 *)(lVar5 + 0x58) = param_1;
  *(undefined8 *)(lVar5 + 0x60) = param_2;
  *(undefined8 *)(lVar5 + 0x68) = param_3;
  func_0x00010159fa64(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035aab5c; end: 1035aac77;  */

void FUN_1035aab5c(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xd0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0xd0) = param_1;
  *(undefined1 *)(lVar3 + 0xd8) = param_2;
  return;
}



/* Entry: 1035aac78; end: 1035aadbf;  */

void FUN_1035aac78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0xf0,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0xf0);
  uVar1 = *(undefined8 *)(lVar5 + 0xf8);
  uVar4 = *(undefined8 *)(lVar5 + 0x100);
  *(undefined8 *)(lVar5 + 0xf0) = param_1;
  *(undefined8 *)(lVar5 + 0xf8) = param_2;
  *(undefined8 *)(lVar5 + 0x100) = param_3;
  func_0x00010159fa64(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035aadc0; end: 1035aaf6f;  */

void FUN_1035aadc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(lVar4,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  func_0x000107c61428(lVar4 + 0x120,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar4 + 0x120);
  uVar1 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x120) = param_1;
  *(undefined8 *)(lVar4 + 0x128) = param_2;
  func_0x00010006c090(uVar3,uVar1);
  return;
}



/* Entry: 1035aaf70; end: 1035ab73b;  */

void FUN_1035aaf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x150,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x150);
  uVar1 = *(undefined8 *)(lVar5 + 0x158);
  uVar4 = *(undefined8 *)(lVar5 + 0x160);
  *(undefined8 *)(lVar5 + 0x150) = param_1;
  *(undefined8 *)(lVar5 + 0x158) = param_2;
  *(undefined8 *)(lVar5 + 0x160) = param_3;
  func_0x00010159fa64(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035ab73c; end: 1035ab7c7;  */

void FUN_1035ab73c(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x388,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x388) = param_1;
  *(undefined1 *)(lVar3 + 0x390) = param_2;
  return;
}



/* Entry: 1035ab7c8; end: 1035ab8cb;  */

void FUN_1035ab7c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_118 [24];
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
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8();
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  puVar1 = (undefined8 *)(lVar3 + 0x398);
  func_0x000107c61428(puVar1,auStack_118,1,0);
  uStack_78 = *(undefined8 *)(lVar3 + 0x3c0);
  uStack_80 = *(undefined8 *)(lVar3 + 0x3b8);
  uStack_68 = *(undefined8 *)(lVar3 + 0x3d0);
  uStack_70 = *(undefined8 *)(lVar3 + 0x3c8);
  uStack_58 = *(undefined8 *)(lVar3 + 0x3e0);
  uStack_60 = *(undefined8 *)(lVar3 + 0x3d8);
  uStack_98 = *(undefined8 *)(lVar3 + 0x3a0);
  uStack_a0 = *puVar1;
  uStack_88 = *(undefined8 *)(lVar3 + 0x3b0);
  uStack_90 = *(undefined8 *)(lVar3 + 0x3a8);
  uStack_50 = *(undefined8 *)(lVar3 + 1000);
  *(undefined8 *)(lVar3 + 0x3c0) = uStack_d8;
  *(undefined8 *)(lVar3 + 0x3b8) = uStack_e0;
  *(undefined8 *)(lVar3 + 0x3d0) = uStack_c8;
  *(undefined8 *)(lVar3 + 0x3c8) = uStack_d0;
  *(undefined8 *)(lVar3 + 0x3e0) = uStack_b8;
  *(undefined8 *)(lVar3 + 0x3d8) = uStack_c0;
  *(undefined8 *)(lVar3 + 1000) = uStack_b0;
  *(undefined8 *)(lVar3 + 0x3a0) = uStack_f8;
  *puVar1 = uStack_100;
  *(undefined8 *)(lVar3 + 0x3b0) = uStack_e8;
  *(undefined8 *)(lVar3 + 0x3a8) = uStack_f0;
  func_0x0001035b3450(&uStack_a0,0x112f73c80,&UNK_10dbcfb80);
  return;
}



/* Entry: 1035ab8cc; end: 1035ab8db;  */

void FUN_1035ab8cc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1035ab8dc; end: 1035ab90b;  */

void FUN_1035ab8dc(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035b3490();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035ab90c; end: 1035ab913;  */

undefined8 FUN_1035ab90c(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035ab914; end: 1035ab987;  */

void FUN_1035ab914(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7b138;
  func_0x0001000285a8(0x112f7b138,&UNK_10dbe1140);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035ab988; end: 1035ab993;  */

void FUN_1035ab988(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035ab994; end: 1035aba3f;  */

void FUN_1035ab994(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035aba40; end: 1035aba53;  */

bool FUN_1035aba40(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035aba54; end: 1035abaaf;  */

undefined8 FUN_1035aba54(void)

{
  if (lRam0000000112f7b140 != -1) {
    func_0x000107c61568(0x112f7b140,FUN_1035ac4e4);
  }
  func_0x000107c6157c(uRam0000000112f7b148);
  return 0;
}



/* Entry: 1035abab0; end: 1035abaf7;  */

void FUN_1035abab0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe18f0,0x6e,2);
  uRam0000000113809008 = uStack_38;
  uRam0000000113809000 = uStack_40;
  uRam0000000113809018 = uStack_28;
  uRam0000000113809010 = uStack_30;
  uRam0000000113809028 = uStack_18;
  uRam0000000113809020 = uStack_20;
  return;
}



/* Entry: 1035abaf8; end: 1035abc73;  */

/* WARNING: Removing unreachable block (ram,0x0001035abc4c) */

void FUN_1035abaf8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_103578a2c();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_110669bb8;
          goto LAB_1035abb80;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x168);
LAB_1035abc3c:
          (*pcVar5)();
        }
        else if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0xf8;
          puVar3 = &UNK_110790a00;
          goto LAB_1035abb80;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x1a0);
          func_0x0001035029d4();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110669630;
        }
        else {
          if (lVar1 != 5) {
            if (lVar1 != 6) goto LAB_1035abb94;
            pcVar5 = *(code **)(param_3 + 0x150);
            goto LAB_1035abc3c;
          }
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000103509fb0();
          lVar2 = unaff_x20 + 0x110;
          puVar3 = &UNK_11066a6c0;
        }
LAB_1035abb80:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1035abb94:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035abc74; end: 1035abde3;  */

void FUN_1035abc74(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  code *pcVar7;
  
  FUN_1035abde4();
  if (unaff_x21 != 0) {
    return;
  }
  lVar6 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar1 & 0xff000000000000) == 0) goto LAB_1035abd14;
    }
    else if ((long)(int)lVar6 == lVar6 >> 0x20) goto LAB_1035abd14;
  }
  else if ((uVar5 != 2) || (*(long *)(lVar6 + 0x10) == *(long *)(lVar6 + 0x18))) goto LAB_1035abd14;
  (**(code **)(param_3 + 0x78))(lVar6,uVar1,2,param_2,param_3);
LAB_1035abd14:
  plVar4 = unaff_x20;
  FUN_1035abee0();
  lVar6 = unaff_x20[2];
  if (*(long *)(lVar6 + 0x10) != 0) {
    pcVar7 = *(code **)(param_3 + 0x118);
    func_0x0001035029d4();
    (*pcVar7)(lVar6,4,&UNK_110669630,plVar4,param_2,param_3);
  }
  FUN_1035abf68();
  uVar2 = unaff_x20[4];
  uVar1 = unaff_x20[3] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,6,param_2,param_3);
  }
  func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  return;
}



/* Entry: 1035abde4; end: 1035abedf;  */

void FUN_1035abde4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  uStack_78 = *(undefined8 *)(param_1 + 0xc0);
  uStack_80 = *(undefined8 *)(param_1 + 0xb8);
  uStack_68 = *(undefined8 *)(param_1 + 0xd0);
  uStack_70 = *(undefined8 *)(param_1 + 200);
  uStack_58 = *(undefined8 *)(param_1 + 0xe0);
  uStack_60 = *(undefined8 *)(param_1 + 0xd8);
  uStack_48 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = *(undefined8 *)(param_1 + 0xe8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x78);
  uStack_a8 = *(undefined8 *)(param_1 + 0x90);
  uStack_b0 = *(undefined8 *)(param_1 + 0x88);
  uStack_98 = *(undefined8 *)(param_1 + 0xa0);
  uStack_a0 = *(undefined8 *)(param_1 + 0x98);
  uStack_88 = *(undefined8 *)(param_1 + 0xb0);
  uStack_90 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x40);
  uStack_100 = *(undefined8 *)(param_1 + 0x38);
  uStack_e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_f0 = *(undefined8 *)(param_1 + 0x48);
  uStack_d8 = *(undefined8 *)(param_1 + 0x60);
  uStack_e0 = *(undefined8 *)(param_1 + 0x58);
  uStack_c8 = *(undefined8 *)(param_1 + 0x70);
  uStack_d0 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = &uStack_100;
  FUN_10355c440();
  if ((int)puVar1 != 1) {
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_108 = uStack_48;
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
    FUN_103578a2c();
    (*pcVar2)(&uStack_1c0,1,&UNK_110669bb8,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035abee0; end: 1035abf67;  */

void FUN_1035abee0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x108);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x100);
    uStack_60 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035abf68; end: 1035abffb;  */

void FUN_1035abf68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = *(ulong *)(param_1 + 0x118);
  if (uStack_88 >> 0x3c < 0xf) {
    uStack_90 = *(undefined8 *)(param_1 + 0x110);
    uStack_78 = *(undefined8 *)(param_1 + 0x128);
    uStack_80 = *(undefined8 *)(param_1 + 0x120);
    uStack_68 = *(undefined8 *)(param_1 + 0x138);
    uStack_70 = *(undefined8 *)(param_1 + 0x130);
    uStack_58 = *(undefined8 *)(param_1 + 0x148);
    uStack_60 = *(undefined8 *)(param_1 + 0x140);
    uStack_48 = *(undefined8 *)(param_1 + 0x158);
    uStack_50 = *(undefined8 *)(param_1 + 0x150);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103509fb0();
    (*pcVar1)(&uStack_90,5,&UNK_11066a6c0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035abffc; end: 1035abfff;  */

uint FUN_1035abffc(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  undefined1 auStack_6d0 [80];
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
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
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
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
  
  uStack_158 = param_1[0x18];
  uStack_160 = param_1[0x17];
  uStack_148 = param_1[0x1a];
  uStack_150 = param_1[0x19];
  uStack_138 = param_1[0x1c];
  uStack_140 = param_1[0x1b];
  uStack_128 = param_1[0x1e];
  uStack_130 = param_1[0x1d];
  uStack_198 = param_1[0x10];
  uStack_1a0 = param_1[0xf];
  uStack_188 = param_1[0x12];
  uStack_190 = param_1[0x11];
  uStack_178 = param_1[0x14];
  uStack_180 = param_1[0x13];
  uStack_168 = param_1[0x16];
  uStack_170 = param_1[0x15];
  uStack_1d8 = param_1[8];
  uStack_1e0 = param_1[7];
  uStack_1c8 = param_1[10];
  uStack_1d0 = param_1[9];
  uStack_1b8 = param_1[0xc];
  uStack_1c0 = param_1[0xb];
  uStack_1a8 = param_1[0xe];
  uStack_1b0 = param_1[0xd];
  uStack_218 = param_2[0x18];
  uStack_220 = param_2[0x17];
  uStack_208 = param_2[0x1a];
  uStack_210 = param_2[0x19];
  uStack_1f8 = param_2[0x1c];
  uStack_200 = param_2[0x1b];
  uStack_1e8 = param_2[0x1e];
  uStack_1f0 = param_2[0x1d];
  uStack_258 = param_2[0x10];
  uStack_260 = param_2[0xf];
  uStack_248 = param_2[0x12];
  uStack_250 = param_2[0x11];
  uStack_238 = param_2[0x14];
  uStack_240 = param_2[0x13];
  uStack_228 = param_2[0x16];
  uStack_230 = param_2[0x15];
  uStack_298 = param_2[8];
  uStack_2a0 = param_2[7];
  uStack_288 = param_2[10];
  uStack_290 = param_2[9];
  uStack_278 = param_2[0xc];
  uStack_280 = param_2[0xb];
  uStack_268 = param_2[0xe];
  uStack_270 = param_2[0xd];
  uStack_428 = param_1[0x18];
  uStack_430 = param_1[0x17];
  uStack_418 = param_1[0x1a];
  uStack_420 = param_1[0x19];
  uStack_408 = param_1[0x1c];
  uStack_410 = param_1[0x1b];
  uStack_3f8 = param_1[0x1e];
  uStack_400 = param_1[0x1d];
  uStack_468 = param_1[0x10];
  uStack_470 = param_1[0xf];
  uStack_458 = param_1[0x12];
  uStack_460 = param_1[0x11];
  uStack_448 = param_1[0x14];
  uStack_450 = param_1[0x13];
  uStack_438 = param_1[0x16];
  uStack_440 = param_1[0x15];
  uStack_4a8 = param_1[8];
  uStack_4b0 = param_1[7];
  uStack_498 = param_1[10];
  uStack_4a0 = param_1[9];
  uStack_488 = param_1[0xc];
  uStack_490 = param_1[0xb];
  uStack_478 = param_1[0xe];
  uStack_480 = param_1[0xd];
  uStack_368 = param_2[0x18];
  uStack_370 = param_2[0x17];
  uStack_358 = param_2[0x1a];
  uStack_360 = param_2[0x19];
  uStack_348 = param_2[0x1c];
  uStack_350 = param_2[0x1b];
  uStack_338 = param_2[0x1e];
  uStack_340 = param_2[0x1d];
  uStack_3a8 = param_2[0x10];
  uStack_3b0 = param_2[0xf];
  uStack_398 = param_2[0x12];
  uStack_3a0 = param_2[0x11];
  uStack_388 = param_2[0x14];
  uStack_390 = param_2[0x13];
  uStack_378 = param_2[0x16];
  uStack_380 = param_2[0x15];
  uStack_3e8 = param_2[8];
  uStack_3f0 = param_2[7];
  uStack_3d8 = param_2[10];
  uStack_3e0 = param_2[9];
  uStack_3c8 = param_2[0xc];
  uStack_3d0 = param_2[0xb];
  uStack_3b8 = param_2[0xe];
  uStack_3c0 = param_2[0xd];
  iVar1 = (int)&uStack_4b0;
  FUN_10355c440();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_3f0;
    FUN_10355c440();
    if (iVar1 != 1) goto LAB_1035b3754;
    uStack_5a8 = uStack_428;
    uStack_5b0 = uStack_430;
    uStack_598 = uStack_418;
    uStack_5a0 = uStack_420;
    uStack_588 = uStack_408;
    uStack_590 = uStack_410;
    uStack_578 = uStack_3f8;
    uStack_580 = uStack_400;
    uStack_5e8 = uStack_468;
    uStack_5f0 = uStack_470;
    uStack_5d8 = uStack_458;
    uStack_5e0 = uStack_460;
    uStack_5c8 = uStack_448;
    uStack_5d0 = uStack_450;
    uStack_5b8 = uStack_438;
    uStack_5c0 = uStack_440;
    uStack_628 = uStack_4a8;
    uStack_630 = uStack_4b0;
    uStack_618 = uStack_498;
    uStack_620 = uStack_4a0;
    uStack_608 = uStack_488;
    uStack_610 = uStack_490;
    uStack_5f8 = uStack_478;
    uStack_600 = uStack_480;
    FUN_1035b3408(&uStack_1e0,&uStack_120,0x112f730b0,&UNK_10dbce2c0);
    FUN_1035b3408(&uStack_2a0,&uStack_120,0x112f730b0,&UNK_10dbce2c0);
    func_0x0001035b3450(&uStack_630,0x112f730b0,&UNK_10dbce2c0);
LAB_1035b38d0:
    uVar4 = *param_1;
    func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
    if ((uVar4 & 1) == 0) goto LAB_1035b3ba8;
    uVar10 = param_1[0x20];
    uVar4 = param_1[0x1f];
    uVar7 = param_1[0x21];
    uVar11 = param_2[0x20];
    uVar9 = param_2[0x1f];
    uVar8 = param_2[0x21];
    uStack_2e0 = uVar9;
    uStack_2d8 = uVar11;
    uStack_2d0 = uVar8;
    uStack_2c0 = uVar4;
    uStack_2b8 = uVar10;
    uStack_2b0 = uVar7;
    if (uVar7 >> 0x3c < 0xf) {
      if (uVar8 >> 0x3c < 0xf) {
        if (uVar4 == uVar9) {
          FUN_1035b3408(&uStack_2c0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
          FUN_1035b3408(&uStack_2e0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
          uVar9 = uVar10;
          func_0x000100e25fcc(uVar10,uVar7,uVar11,uVar8);
          func_0x00010159fa64(uVar4,uVar11,uVar8);
          if ((uVar9 & 1) != 0) goto LAB_1035b3960;
        }
        else {
          FUN_1035b3408(&uStack_2c0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
          FUN_1035b3408(&uStack_2e0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
          func_0x00010159fa64(uVar9,uVar11,uVar8);
        }
      }
      else {
LAB_1035b3a88:
        FUN_1035b3408(&uStack_2c0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
        FUN_1035b3408(&uStack_2e0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(uVar4,uVar10,uVar7);
        uVar4 = uVar9;
        uVar10 = uVar11;
        uVar7 = uVar8;
      }
      func_0x00010159fa64(uVar4,uVar10,uVar7);
      goto LAB_1035b3ba8;
    }
    if (uVar8 >> 0x3c < 0xf) goto LAB_1035b3a88;
    FUN_1035b3408(&uStack_2c0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
    FUN_1035b3408(&uStack_2e0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
LAB_1035b3960:
    func_0x00010159fa64(uVar4,uVar10,uVar7);
    uVar4 = param_1[2];
    FUN_1035b2f08(uVar4,param_2[2]);
    if ((uVar4 & 1) != 0) {
      uStack_498 = param_1[0x25];
      uStack_4a0 = param_1[0x24];
      uStack_8e8 = param_1[0x27];
      uStack_8f0 = param_1[0x26];
      uStack_488 = param_1[0x27];
      uStack_490 = param_1[0x26];
      uStack_8d8 = param_1[0x29];
      uStack_8e0 = param_1[0x28];
      uStack_478 = param_1[0x29];
      uStack_480 = param_1[0x28];
      uStack_8c8 = param_1[0x2b];
      uStack_8d0 = param_1[0x2a];
      uStack_908 = param_1[0x23];
      uStack_910 = param_1[0x22];
      uStack_8f8 = param_1[0x25];
      uStack_900 = param_1[0x24];
      uStack_4a8 = param_1[0x23];
      uStack_4b0 = param_1[0x22];
      uStack_448 = param_2[0x25];
      uStack_450 = param_2[0x24];
      uStack_308 = param_2[0x27];
      uStack_310 = param_2[0x26];
      uStack_438 = param_2[0x27];
      uStack_440 = param_2[0x26];
      uStack_2f8 = param_2[0x29];
      uStack_300 = param_2[0x28];
      uStack_428 = param_2[0x29];
      uStack_430 = param_2[0x28];
      uStack_2e8 = param_2[0x2b];
      uStack_2f0 = param_2[0x2a];
      uStack_328 = param_2[0x23];
      uStack_330 = param_2[0x22];
      uStack_318 = param_2[0x25];
      uStack_320 = param_2[0x24];
      uStack_458 = param_2[0x23];
      uStack_460 = param_2[0x22];
      uStack_468 = param_1[0x2b];
      uStack_470 = param_1[0x2a];
      uStack_418 = param_2[0x2b];
      uStack_420 = param_2[0x2a];
      if (uStack_4a8 >> 0x3c < 0xf) {
        if (0xe < uStack_458 >> 0x3c) goto LAB_1035b3bd8;
        uStack_768 = param_2[0x27];
        uStack_770 = param_2[0x26];
        uStack_758 = param_2[0x29];
        uStack_760 = param_2[0x28];
        uStack_748 = param_2[0x2b];
        uStack_750 = param_2[0x2a];
        uStack_788 = param_2[0x23];
        uStack_790 = param_2[0x22];
        uStack_778 = param_2[0x25];
        uStack_780 = param_2[0x24];
        uStack_848 = param_1[0x23];
        uStack_850 = param_1[0x22];
        uStack_838 = param_1[0x25];
        uStack_840 = param_1[0x24];
        uStack_828 = param_1[0x27];
        uStack_830 = param_1[0x26];
        uStack_818 = param_1[0x29];
        uStack_820 = param_1[0x28];
        uStack_808 = param_1[0x2b];
        uStack_810 = param_1[0x2a];
        uStack_680 = uStack_790;
        uStack_678 = uStack_788;
        uStack_670 = uStack_780;
        uStack_668 = uStack_778;
        uStack_660 = uStack_770;
        uStack_658 = uStack_768;
        uStack_650 = uStack_760;
        uStack_648 = uStack_758;
        uStack_640 = uStack_750;
        uStack_638 = uStack_748;
        FUN_1035b3408(&uStack_910,auStack_6d0,0x112f730a8,&UNK_10dbd1870);
        FUN_1035b3408(&uStack_330,auStack_6d0,0x112f730a8,&UNK_10dbd1870);
        puVar3 = &uStack_850;
        FUN_1035c4a34(puVar3,&uStack_790);
        func_0x0001035b3450(&uStack_680,0x112f730a8,&UNK_10dbd1870);
        func_0x0001035b3450(&uStack_4b0,0x112f730a8,&UNK_10dbd1870);
        if (((ulong)puVar3 & 1) != 0) goto LAB_1035b3d0c;
        goto LAB_1035b3ba8;
      }
      if (0xe < uStack_458 >> 0x3c) {
        uStack_768 = param_1[0x27];
        uStack_770 = param_1[0x26];
        uStack_758 = param_1[0x29];
        uStack_760 = param_1[0x28];
        uStack_748 = param_1[0x2b];
        uStack_750 = param_1[0x2a];
        uStack_788 = param_1[0x23];
        uStack_790 = param_1[0x22];
        uStack_778 = param_1[0x25];
        uStack_780 = param_1[0x24];
        FUN_1035b3408(&uStack_910,&uStack_850,0x112f730a8,&UNK_10dbd1870);
        FUN_1035b3408(&uStack_330,&uStack_850,0x112f730a8,&UNK_10dbd1870);
        func_0x0001035b3450(&uStack_790,0x112f730a8,&UNK_10dbd1870);
LAB_1035b3d0c:
        uVar4 = param_1[3];
        if (((uVar4 == param_2[3]) && (param_1[4] == param_2[4])) ||
           (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
          uVar4 = param_1[5];
          func_0x000100e25fcc(uVar4,param_1[6],param_2[5],param_2[6]);
          uVar2 = (uint)uVar4;
          goto LAB_1035b3bac;
        }
        goto LAB_1035b3ba8;
      }
LAB_1035b3bd8:
      uStack_790 = uStack_4b0;
      uStack_788 = uStack_4a8;
      uStack_780 = uStack_4a0;
      uStack_778 = uStack_498;
      uStack_770 = uStack_490;
      uStack_768 = uStack_488;
      uStack_760 = uStack_480;
      uStack_758 = uStack_478;
      uStack_750 = uStack_470;
      uStack_748 = uStack_468;
      uStack_740 = uStack_460;
      uStack_738 = uStack_458;
      uStack_730 = uStack_450;
      uStack_728 = uStack_448;
      uStack_720 = uStack_440;
      uStack_718 = uStack_438;
      uStack_710 = uStack_430;
      uStack_708 = uStack_428;
      uStack_700 = uStack_420;
      uStack_6f8 = uStack_418;
      FUN_1035b3408(&uStack_910,&uStack_850,0x112f730a8,&UNK_10dbd1870);
      FUN_1035b3408(&uStack_330,&uStack_850,0x112f730a8,&UNK_10dbd1870);
      uVar5 = 0x112f74f28;
      puVar6 = &UNK_10dbdb200;
      puVar3 = &uStack_790;
      goto LAB_1035b37b0;
    }
  }
  else {
    uStack_708 = uStack_428;
    uStack_710 = uStack_430;
    uStack_6f8 = uStack_418;
    uStack_700 = uStack_420;
    uStack_6e8 = uStack_408;
    uStack_6f0 = uStack_410;
    uStack_6d8 = uStack_3f8;
    uStack_6e0 = uStack_400;
    uStack_748 = uStack_468;
    uStack_750 = uStack_470;
    uStack_738 = uStack_458;
    uStack_740 = uStack_460;
    uStack_728 = uStack_448;
    uStack_730 = uStack_450;
    uStack_718 = uStack_438;
    uStack_720 = uStack_440;
    uStack_788 = uStack_4a8;
    uStack_790 = uStack_4b0;
    uStack_778 = uStack_498;
    uStack_780 = uStack_4a0;
    uStack_768 = uStack_488;
    uStack_770 = uStack_490;
    uStack_758 = uStack_478;
    uStack_760 = uStack_480;
    iVar1 = (int)&uStack_3f0;
    FUN_10355c440();
    if (iVar1 != 1) {
      uStack_7c8 = uStack_368;
      uStack_7d0 = uStack_370;
      uStack_7b8 = uStack_358;
      uStack_7c0 = uStack_360;
      uStack_7a8 = uStack_348;
      uStack_7b0 = uStack_350;
      uStack_798 = uStack_338;
      uStack_7a0 = uStack_340;
      uStack_808 = uStack_3a8;
      uStack_810 = uStack_3b0;
      uStack_7f8 = uStack_398;
      uStack_800 = uStack_3a0;
      uStack_7e8 = uStack_388;
      uStack_7f0 = uStack_390;
      uStack_7d8 = uStack_378;
      uStack_7e0 = uStack_380;
      uStack_848 = uStack_3e8;
      uStack_850 = uStack_3f0;
      uStack_838 = uStack_3d8;
      uStack_840 = uStack_3e0;
      uStack_828 = uStack_3c8;
      uStack_830 = uStack_3d0;
      uStack_818 = uStack_3b8;
      uStack_820 = uStack_3c0;
      uStack_5a8 = uStack_368;
      uStack_5b0 = uStack_370;
      uStack_598 = uStack_358;
      uStack_5a0 = uStack_360;
      uStack_588 = uStack_348;
      uStack_590 = uStack_350;
      uStack_578 = uStack_338;
      uStack_580 = uStack_340;
      uStack_5e8 = uStack_3a8;
      uStack_5f0 = uStack_3b0;
      uStack_5d8 = uStack_398;
      uStack_5e0 = uStack_3a0;
      uStack_5c8 = uStack_388;
      uStack_5d0 = uStack_390;
      uStack_5b8 = uStack_378;
      uStack_5c0 = uStack_380;
      uStack_628 = uStack_3e8;
      uStack_630 = uStack_3f0;
      uStack_618 = uStack_3d8;
      uStack_620 = uStack_3e0;
      uStack_608 = uStack_3c8;
      uStack_610 = uStack_3d0;
      uStack_5f8 = uStack_3b8;
      uStack_600 = uStack_3c0;
      uStack_98 = uStack_708;
      uStack_a0 = uStack_710;
      uStack_88 = uStack_6f8;
      uStack_90 = uStack_700;
      uStack_78 = uStack_6e8;
      uStack_80 = uStack_6f0;
      uStack_68 = uStack_6d8;
      uStack_70 = uStack_6e0;
      uStack_d8 = uStack_748;
      uStack_e0 = uStack_750;
      uStack_c8 = uStack_738;
      uStack_d0 = uStack_740;
      uStack_b8 = uStack_728;
      uStack_c0 = uStack_730;
      uStack_a8 = uStack_718;
      uStack_b0 = uStack_720;
      uStack_118 = uStack_788;
      uStack_120 = uStack_790;
      uStack_108 = uStack_778;
      uStack_110 = uStack_780;
      uStack_f8 = uStack_768;
      uStack_100 = uStack_770;
      uStack_e8 = uStack_758;
      uStack_f0 = uStack_760;
      FUN_1035b3408(&uStack_1e0,&uStack_910,0x112f730b0,&UNK_10dbce2c0);
      FUN_1035b3408(&uStack_2a0,&uStack_910,0x112f730b0,&UNK_10dbce2c0);
      puVar3 = &uStack_120;
      FUN_1035b77e8(puVar3,&uStack_630);
      func_0x0001035b3450(&uStack_850,0x112f730b0,&UNK_10dbce2c0);
      func_0x0001035b3450(&uStack_4b0,0x112f730b0,&UNK_10dbce2c0);
      if (((ulong)puVar3 & 1) != 0) goto LAB_1035b38d0;
      goto LAB_1035b3ba8;
    }
LAB_1035b3754:
    func_0x000107c610b4(&uStack_630,&uStack_4b0,0x180);
    FUN_1035b3408(&uStack_1e0,&uStack_120,0x112f730b0,&UNK_10dbce2c0);
    FUN_1035b3408(&uStack_2a0,&uStack_120,0x112f730b0,&UNK_10dbce2c0);
    uVar5 = 0x112f78258;
    puVar6 = &UNK_10dbdb1f0;
    puVar3 = &uStack_630;
LAB_1035b37b0:
    func_0x0001035b3450(puVar3,uVar5,puVar6);
  }
LAB_1035b3ba8:
  uVar2 = 0;
LAB_1035b3bac:
  return uVar2 & 1;
}



/* Entry: 1035ac000; end: 1035ac0bb;  */

void FUN_1035ac000(undefined8 *param_1)

{
  undefined *puVar1;
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
  
  FUN_10355c4a4(&uStack_e0);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = puVar1;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[0x18] = uStack_58;
  param_1[0x17] = uStack_60;
  param_1[0x1a] = uStack_48;
  param_1[0x19] = uStack_50;
  param_1[0x1c] = uStack_38;
  param_1[0x1b] = uStack_40;
  param_1[0x1e] = uStack_28;
  param_1[0x1d] = uStack_30;
  param_1[0x10] = uStack_98;
  param_1[0xf] = uStack_a0;
  param_1[0x12] = uStack_88;
  param_1[0x11] = uStack_90;
  param_1[0x14] = uStack_78;
  param_1[0x13] = uStack_80;
  param_1[0x16] = uStack_68;
  param_1[0x15] = uStack_70;
  param_1[8] = uStack_d8;
  param_1[7] = uStack_e0;
  param_1[10] = uStack_c8;
  param_1[9] = uStack_d0;
  param_1[0xc] = uStack_b8;
  param_1[0xb] = uStack_c0;
  param_1[0xe] = uStack_a8;
  param_1[0xd] = uStack_b0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0xf000000000000000;
  param_1[0x23] = 0xf000000000000000;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  return;
}



/* Entry: 1035ac0bc; end: 1035ac0df;  */

undefined1  [16] FUN_1035ac0bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156090;
  auVar1._0_8_ = 0xd000000000000039;
  return auVar1;
}



/* Entry: 1035ac0e0; end: 1035ac10f;  */

undefined1  [16] FUN_1035ac0e0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1035ac110; end: 1035ac143;  */

void FUN_1035ac110(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1035ac144; end: 1035ac157;  */

undefined1  [16] FUN_1035ac144(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1035ac154;
  return auVar1;
}



/* Entry: 1035ac158; end: 1035ac16b;  */

void FUN_1035ac158(void)

{
  FUN_1035abaf8();
  return;
}



/* Entry: 1035ac16c; end: 1035ac1d3;  */

void FUN_1035ac16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1a0 [352];
  
  func_0x000107c610b4(auStack_1a0);
  FUN_1035abc74(param_1,param_2,param_3);
  return;
}



/* Entry: 1035ac1d4; end: 1035ac1d7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035ac1d4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035ac1d8; end: 1035ac20f;  */

uint FUN_1035ac1d8(long param_1,long param_2)

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
  func_0x0001035b57dc();
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



/* Entry: 1035ac210; end: 1035ac25f;  */

uint FUN_1035ac210(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2e0 [352];
  undefined1 auStack_180 [352];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_180,param_1,0x160);
  func_0x000107c610b4(auStack_2e0);
  FUN_1035b349c(auStack_2e0,auStack_180);
  return uVar1 & 1;
}


