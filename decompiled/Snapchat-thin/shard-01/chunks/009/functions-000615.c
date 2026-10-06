/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10165af84; end: 10165b03b;  */

undefined8 * FUN_10165af84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[3];
      param_1[3] = param_2[3];
      param_1[4] = uVar3;
      func_0x00010006c090(uVar2);
      uVar2 = param_1[5];
      uVar1 = param_1[6];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      func_0x00010006c090(uVar2,uVar1);
      uVar2 = param_1[7];
      uVar1 = param_1[8];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      func_0x00010006c090(uVar2,uVar1);
      return param_1;
    }
    func_0x0001015412a8(param_1 + 3);
  }
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 10165b03c; end: 10165b0e3;  */

int FUN_10165b03c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10165b0e4; end: 10165b1a3;  */

void FUN_10165b0e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9753f4;
  func_0x000107c61520(&DAT_10d9753f4,&UNK_1103eeaf8);
  puRam0000000112dbce80 = puVar1;
  return;
}



/* Entry: 10165b1a4; end: 10165b1af;  */

long FUN_10165b1a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10165b1b0; end: 10165b1f7;  */

void FUN_10165b1b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975720,0x3e,2);
  uRam0000000113802560 = uStack_38;
  uRam0000000113802558 = uStack_40;
  uRam0000000113802570 = uStack_28;
  uRam0000000113802568 = uStack_30;
  uRam0000000113802580 = uStack_18;
  uRam0000000113802578 = uStack_20;
  return;
}



/* Entry: 10165b1f8; end: 10165b2e7;  */

void FUN_10165b1f8(undefined8 param_1,long param_2,long param_3)

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
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x50;
LAB_10165b26c:
        (*pcVar4)(lVar2,&UNK_110790c80,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x30;
          goto LAB_10165b26c;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_10165b26c;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10165b2e8; end: 10165b373;  */

void FUN_10165b2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10165b374();
  if (unaff_x21 == 0) {
    FUN_10165b3f8();
    FUN_10165b47c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10165b374; end: 10165b3f7;  */

void FUN_10165b374(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x18);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,1,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10165b3f8; end: 10165b47b;  */

void FUN_10165b3f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x38);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10165b47c; end: 10165b4ff;  */

void FUN_10165b47c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10165b500; end: 10165b547;  */

uint FUN_10165b500(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong auStack_190 [4];
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  uVar9 = param_1[4];
  lVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  uVar10 = param_2[4];
  uStack_b0 = uVar6;
  lStack_a8 = lVar8;
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_10165ba00;
    FUN_101627928(&uStack_90,&uStack_170);
    FUN_101627928(&uStack_b0,&uStack_170);
LAB_10165ba44:
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[7];
    uVar5 = param_1[6];
    uVar11 = param_1[9];
    uVar9 = param_1[8];
    lVar8 = param_2[7];
    uVar6 = param_2[6];
    uVar12 = param_2[9];
    uVar10 = param_2[8];
    uStack_f0 = uVar6;
    lStack_e8 = lVar8;
    uStack_e0 = uVar10;
    uStack_d8 = uVar12;
    uStack_d0 = uVar5;
    lStack_c8 = lVar7;
    uStack_c0 = uVar9;
    uStack_b8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_10165bb04;
      FUN_101627928(&uStack_d0,&uStack_170);
      FUN_101627928(&uStack_f0,&uStack_170);
    }
    else {
      if (lVar8 == 0) {
LAB_10165bb04:
        uStack_170 = uVar5;
        lStack_168 = lVar7;
        uStack_160 = uVar9;
        uStack_158 = uVar11;
        uStack_150 = uVar6;
        lStack_148 = lVar8;
        uStack_140 = uVar10;
        uStack_138 = uVar12;
        FUN_101627928(&uStack_d0,&uStack_110);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        goto LAB_10165bc40;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        FUN_101627928(&uStack_d0,&uStack_170);
        puVar3 = &uStack_f0;
        goto LAB_10165bcb8;
      }
      FUN_101627928(&uStack_d0,&uStack_170);
      FUN_101627928(&uStack_f0,&uStack_170);
      uVar2 = uVar9;
      FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
      FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_10165bcd4;
    }
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[0xb];
    uVar5 = param_1[10];
    uVar11 = param_1[0xd];
    uVar9 = param_1[0xc];
    lVar8 = param_2[0xb];
    uVar6 = param_2[10];
    uVar12 = param_2[0xd];
    uVar10 = param_2[0xc];
    uStack_130 = uVar6;
    lStack_128 = lVar8;
    uStack_120 = uVar10;
    uStack_118 = uVar12;
    uStack_110 = uVar5;
    lStack_108 = lVar7;
    uStack_100 = uVar9;
    uStack_f8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_10165bc1c;
      FUN_101627928(&uStack_110,&uStack_170);
      FUN_101627928(&uStack_130,&uStack_170);
    }
    else {
      if (lVar8 == 0) {
LAB_10165bc1c:
        uStack_170 = uVar5;
        lStack_168 = lVar7;
        uStack_160 = uVar9;
        uStack_158 = uVar11;
        uStack_150 = uVar6;
        lStack_148 = lVar8;
        uStack_140 = uVar10;
        uStack_138 = uVar12;
        FUN_101627928(&uStack_110,auStack_190);
        puVar3 = &uStack_130;
        puVar4 = auStack_190;
        goto LAB_10165bc40;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        FUN_101627928(&uStack_110,&uStack_170);
        puVar3 = &uStack_130;
        goto LAB_10165bcb8;
      }
      FUN_101627928(&uStack_110,&uStack_170);
      FUN_101627928(&uStack_130,&uStack_170);
      uVar2 = uVar9;
      FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
      FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_10165bcd4;
    }
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    uVar11 = *param_1;
    FUN_100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar11;
  }
  else {
    if (lVar8 == 0) {
LAB_10165ba00:
      uStack_170 = uVar5;
      lStack_168 = lVar7;
      uStack_160 = uVar9;
      uStack_158 = uVar11;
      uStack_150 = uVar6;
      lStack_148 = lVar8;
      uStack_140 = uVar10;
      uStack_138 = uVar12;
      FUN_101627928(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10165bc40:
      FUN_101627928(puVar3,puVar4);
      FUN_101628968(&uStack_170);
    }
    else {
      if (((uVar5 == uVar6) && (lVar7 == lVar8)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) != 0)) {
        FUN_101627928(&uStack_90,&uStack_170);
        FUN_101627928(&uStack_b0,&uStack_170);
        uVar2 = uVar9;
        FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
        FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_10165ba44;
      }
      else {
        FUN_101627928(&uStack_90,&uStack_170);
        puVar3 = &uStack_b0;
LAB_10165bcb8:
        FUN_101627928(puVar3,&uStack_170);
        FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      }
LAB_10165bcd4:
      FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10165b548; end: 10165b577;  */

undefined1  [16] FUN_10165b548(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10165b578; end: 10165b5ab;  */

void FUN_10165b578(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10165b5ac; end: 10165b5bf;  */

undefined8 FUN_10165b5ac(void)

{
  return 0x10165b5bc;
}



/* Entry: 10165b5c0; end: 10165b5d3;  */

void FUN_10165b5c0(void)

{
  FUN_10165b1f8();
  return;
}



/* Entry: 10165b5d4; end: 10165b61b;  */

void FUN_10165b5d4(void)

{
  FUN_10165b2e8();
  return;
}



/* Entry: 10165b61c; end: 10165b61f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10165b61c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10165b620; end: 10165b657;  */

uint FUN_10165b620(long param_1,long param_2)

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
  FUN_10165c3a0();
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



/* Entry: 10165b658; end: 10165b6bf;  */

uint FUN_10165b658(undefined8 *param_1)

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
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
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
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_10165b92c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10165b6c0; end: 10165b75f;  */

/* WARNING: Possible PIC construction at 0x00010165b70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165b71c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165b710) */
/* WARNING: Removing unreachable block (ram,0x00010165b720) */

void FUN_10165b6c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcea8 != -1) {
    func_0x000107c61568(0x112dbcea8,FUN_10165b1b0);
  }
  uVar5 = uRam0000000113802580;
  uVar4 = uRam0000000113802578;
  uVar3 = uRam0000000113802570;
  uVar2 = uRam0000000113802568;
  uVar1 = uRam0000000113802560;
  *param_1 = uRam0000000113802558;
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



/* Entry: 10165b760; end: 10165b79b;  */

void FUN_10165b760(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcec8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcec8,&UNK_10d975710);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10165b79c; end: 10165b8c7;  */

void FUN_10165b79c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10165b8c8; end: 10165b92b;  */

uint FUN_10165b8c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_10165b92c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10165b92c; end: 10165bd0f;  */

uint FUN_10165b92c(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong auStack_190 [4];
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  uVar9 = param_1[4];
  lVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  uVar10 = param_2[4];
  uStack_b0 = uVar6;
  lStack_a8 = lVar8;
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_10165ba00;
    FUN_101627928(&uStack_90,&uStack_170);
    FUN_101627928(&uStack_b0,&uStack_170);
LAB_10165ba44:
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[7];
    uVar5 = param_1[6];
    uVar11 = param_1[9];
    uVar9 = param_1[8];
    lVar8 = param_2[7];
    uVar6 = param_2[6];
    uVar12 = param_2[9];
    uVar10 = param_2[8];
    uStack_f0 = uVar6;
    lStack_e8 = lVar8;
    uStack_e0 = uVar10;
    uStack_d8 = uVar12;
    uStack_d0 = uVar5;
    lStack_c8 = lVar7;
    uStack_c0 = uVar9;
    uStack_b8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_10165bb04;
      FUN_101627928(&uStack_d0,&uStack_170);
      FUN_101627928(&uStack_f0,&uStack_170);
    }
    else {
      if (lVar8 == 0) {
LAB_10165bb04:
        uStack_170 = uVar5;
        lStack_168 = lVar7;
        uStack_160 = uVar9;
        uStack_158 = uVar11;
        uStack_150 = uVar6;
        lStack_148 = lVar8;
        uStack_140 = uVar10;
        uStack_138 = uVar12;
        FUN_101627928(&uStack_d0,&uStack_110);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        goto LAB_10165bc40;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        FUN_101627928(&uStack_d0,&uStack_170);
        puVar3 = &uStack_f0;
        goto LAB_10165bcb8;
      }
      FUN_101627928(&uStack_d0,&uStack_170);
      FUN_101627928(&uStack_f0,&uStack_170);
      uVar2 = uVar9;
      FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
      FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_10165bcd4;
    }
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[0xb];
    uVar5 = param_1[10];
    uVar11 = param_1[0xd];
    uVar9 = param_1[0xc];
    lVar8 = param_2[0xb];
    uVar6 = param_2[10];
    uVar12 = param_2[0xd];
    uVar10 = param_2[0xc];
    uStack_130 = uVar6;
    lStack_128 = lVar8;
    uStack_120 = uVar10;
    uStack_118 = uVar12;
    uStack_110 = uVar5;
    lStack_108 = lVar7;
    uStack_100 = uVar9;
    uStack_f8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_10165bc1c;
      FUN_101627928(&uStack_110,&uStack_170);
      FUN_101627928(&uStack_130,&uStack_170);
    }
    else {
      if (lVar8 == 0) {
LAB_10165bc1c:
        uStack_170 = uVar5;
        lStack_168 = lVar7;
        uStack_160 = uVar9;
        uStack_158 = uVar11;
        uStack_150 = uVar6;
        lStack_148 = lVar8;
        uStack_140 = uVar10;
        uStack_138 = uVar12;
        FUN_101627928(&uStack_110,auStack_190);
        puVar3 = &uStack_130;
        puVar4 = auStack_190;
        goto LAB_10165bc40;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        FUN_101627928(&uStack_110,&uStack_170);
        puVar3 = &uStack_130;
        goto LAB_10165bcb8;
      }
      FUN_101627928(&uStack_110,&uStack_170);
      FUN_101627928(&uStack_130,&uStack_170);
      uVar2 = uVar9;
      FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
      FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_10165bcd4;
    }
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    uVar11 = *param_1;
    FUN_100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar11;
  }
  else {
    if (lVar8 == 0) {
LAB_10165ba00:
      uStack_170 = uVar5;
      lStack_168 = lVar7;
      uStack_160 = uVar9;
      uStack_158 = uVar11;
      uStack_150 = uVar6;
      lStack_148 = lVar8;
      uStack_140 = uVar10;
      uStack_138 = uVar12;
      FUN_101627928(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10165bc40:
      FUN_101627928(puVar3,puVar4);
      FUN_101628968(&uStack_170);
    }
    else {
      if (((uVar5 == uVar6) && (lVar7 == lVar8)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) != 0)) {
        FUN_101627928(&uStack_90,&uStack_170);
        FUN_101627928(&uStack_b0,&uStack_170);
        uVar2 = uVar9;
        FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
        FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_10165ba44;
      }
      else {
        FUN_101627928(&uStack_90,&uStack_170);
        puVar3 = &uStack_b0;
LAB_10165bcb8:
        FUN_101627928(puVar3,&uStack_170);
        FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      }
LAB_10165bcd4:
      FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10165bd10; end: 10165bd4f;  */

void FUN_10165bd10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbceb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975658;
  func_0x000107c61520(&UNK_10d975658,&UNK_1103eeca8);
  puRam0000000112dbceb0 = puVar1;
  return;
}



/* Entry: 10165bd50; end: 10165bd73;  */

void FUN_10165bd50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165bd74();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10165bd74; end: 10165bdb3;  */

void FUN_10165bd74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbceb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975630;
  func_0x000107c61520(&UNK_10d975630,&UNK_1103eeca8);
  puRam0000000112dbceb8 = puVar1;
  return;
}



/* Entry: 10165bdb4; end: 10165bddf;  */

void FUN_10165bdb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165bd10();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010164acf4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165bde0; end: 10165bde3;  */

void FUN_10165bde0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975698;
  func_0x000107c61520(&UNK_10d975698,&UNK_1103eeca8);
  puRam0000000112dbcec0 = puVar1;
  return;
}



/* Entry: 10165bde4; end: 10165be23;  */

void FUN_10165bde4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975698;
  func_0x000107c61520(&UNK_10d975698,&UNK_1103eeca8);
  puRam0000000112dbcec0 = puVar1;
  return;
}



/* Entry: 10165be24; end: 10165bebb;  */

long FUN_10165be24(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10165bebc; end: 10165c2c3;  */

undefined8 * FUN_10165bebc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    lVar1 = param_2[7];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    lVar1 = param_2[7];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    lVar1 = param_2[0xb];
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
    lVar1 = param_2[0xb];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  return param_1;
}



/* Entry: 10165c2c4; end: 10165c39f;  */

int FUN_10165c2c4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10165c3a0; end: 10165c3df;  */

void FUN_10165c3a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbced0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d975604;
  func_0x000107c61520(&DAT_10d975604,&UNK_1103eeca8);
  puRam0000000112dbced0 = puVar1;
  return;
}



/* Entry: 10165c3e0; end: 10165c403;  */

void FUN_10165c3e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 10165c404; end: 10165c44b;  */

void FUN_10165c404(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975890,0x13,2);
  uRam0000000113802590 = uStack_38;
  uRam0000000113802588 = uStack_40;
  uRam00000001138025a0 = uStack_28;
  uRam0000000113802598 = uStack_30;
  uRam00000001138025b0 = uStack_18;
  uRam00000001138025a8 = uStack_20;
  return;
}



/* Entry: 10165c44c; end: 10165c51f;  */

/* WARNING: Removing unreachable block (ram,0x00010165c51c) */

void FUN_10165c44c(undefined8 param_1,long param_2,long param_3)

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
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_10165c5e4();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1103ef088,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10165c520; end: 10165c5e3;  */

void FUN_10165c520(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      FUN_10165c5e4();
      (*pcVar4)(uVar3,2,&UNK_1103ef088,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 10165c5e4; end: 10165c623;  */

void FUN_10165c5e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d975ac0;
  func_0x000107c61520(&DAT_10d975ac0,&UNK_1103ef088);
  puRam0000000112dbcee0 = puVar1;
  return;
}



/* Entry: 10165c624; end: 10165c66f;  */

uint FUN_10165c624(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_140 [80];
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
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar2 = param_2[2];
    lVar5 = *(long *)(uVar4 + 0x10);
    if (lVar5 == *(long *)(uVar2 + 0x10)) {
      if (lVar5 != 0 && uVar4 != uVar2) {
        puVar6 = (undefined8 *)(uVar4 + 0x20);
        puVar7 = (undefined8 *)(uVar2 + 0x20);
        do {
          uStack_e8 = puVar6[1];
          uStack_f0 = *puVar6;
          uStack_d8 = puVar6[3];
          uStack_e0 = puVar6[2];
          uStack_c8 = puVar6[5];
          uStack_d0 = puVar6[4];
          uStack_b8 = puVar6[7];
          uStack_c0 = puVar6[6];
          uStack_a8 = puVar6[9];
          uStack_b0 = puVar6[8];
          uStack_68 = puVar7[7];
          uStack_70 = puVar7[6];
          uStack_58 = puVar7[9];
          uStack_60 = puVar7[8];
          uStack_88 = puVar7[3];
          uStack_90 = puVar7[2];
          uStack_78 = puVar7[5];
          uStack_80 = puVar7[4];
          uStack_98 = puVar7[1];
          uStack_a0 = *puVar7;
          FUN_10165ce60(&uStack_f0,auStack_140);
          FUN_10165ce60(&uStack_a0,auStack_140);
          puVar3 = &uStack_f0;
          FUN_10165d53c(puVar3,&uStack_a0);
          func_0x00010165ce9c(&uStack_a0);
          func_0x00010165ce9c(&uStack_f0);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10165cac0;
          puVar6 = puVar6 + 10;
          lVar5 = lVar5 + -1;
          puVar7 = puVar7 + 10;
        } while (lVar5 != 0);
      }
      uVar2 = param_1[3];
      FUN_100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar2;
      goto LAB_10165cac4;
    }
  }
LAB_10165cac0:
  uVar1 = 0;
LAB_10165cac4:
  return uVar1 & 1;
}



/* Entry: 10165c670; end: 10165c69f;  */

undefined1  [16] FUN_10165c670(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10165c6a0; end: 10165c6d3;  */

void FUN_10165c6a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10165c6d4; end: 10165c6e7;  */

undefined1  [16] FUN_10165c6d4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10165c6e4;
  return auVar1;
}



/* Entry: 10165c6e8; end: 10165c70f;  */

void FUN_10165c6e8(void)

{
  FUN_10165c44c();
  return;
}



/* Entry: 10165c710; end: 10165c713;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10165c710(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10165c714; end: 10165c74b;  */

uint FUN_10165c714(long param_1,long param_2)

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
  FUN_10165ce20();
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



/* Entry: 10165c74c; end: 10165c793;  */

uint FUN_10165c74c(undefined8 *param_1)

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
  FUN_10165c9c4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10165c794; end: 10165c833;  */

/* WARNING: Possible PIC construction at 0x00010165c7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165c7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165c7e4) */
/* WARNING: Removing unreachable block (ram,0x00010165c7f4) */

void FUN_10165c794(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbced8 != -1) {
    func_0x000107c61568(0x112dbced8,FUN_10165c404);
  }
  uVar5 = uRam00000001138025b0;
  uVar4 = uRam00000001138025a8;
  uVar3 = uRam00000001138025a0;
  uVar2 = uRam0000000113802598;
  uVar1 = uRam0000000113802590;
  *param_1 = uRam0000000113802588;
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



/* Entry: 10165c834; end: 10165c86f;  */

void FUN_10165c834(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcf00;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcf00,&UNK_10d975888);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10165c870; end: 10165c97b;  */

void FUN_10165c870(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_48 = unaff_x20[2];
  uStack_50 = unaff_x20[1];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10165c97c; end: 10165c9c3;  */

uint FUN_10165c97c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10165c9c4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10165c9c4; end: 10165cae3;  */

uint FUN_10165c9c4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_140 [80];
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
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar2 = param_2[2];
    lVar5 = *(long *)(uVar4 + 0x10);
    if (lVar5 == *(long *)(uVar2 + 0x10)) {
      if (lVar5 != 0 && uVar4 != uVar2) {
        puVar6 = (undefined8 *)(uVar4 + 0x20);
        puVar7 = (undefined8 *)(uVar2 + 0x20);
        do {
          uStack_e8 = puVar6[1];
          uStack_f0 = *puVar6;
          uStack_d8 = puVar6[3];
          uStack_e0 = puVar6[2];
          uStack_c8 = puVar6[5];
          uStack_d0 = puVar6[4];
          uStack_b8 = puVar6[7];
          uStack_c0 = puVar6[6];
          uStack_a8 = puVar6[9];
          uStack_b0 = puVar6[8];
          uStack_68 = puVar7[7];
          uStack_70 = puVar7[6];
          uStack_58 = puVar7[9];
          uStack_60 = puVar7[8];
          uStack_88 = puVar7[3];
          uStack_90 = puVar7[2];
          uStack_78 = puVar7[5];
          uStack_80 = puVar7[4];
          uStack_98 = puVar7[1];
          uStack_a0 = *puVar7;
          FUN_10165ce60(&uStack_f0,auStack_140);
          FUN_10165ce60(&uStack_a0,auStack_140);
          puVar3 = &uStack_f0;
          FUN_10165d53c(puVar3,&uStack_a0);
          func_0x00010165ce9c(&uStack_a0);
          func_0x00010165ce9c(&uStack_f0);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10165cac0;
          puVar6 = puVar6 + 10;
          lVar5 = lVar5 + -1;
          puVar7 = puVar7 + 10;
        } while (lVar5 != 0);
      }
      uVar2 = param_1[3];
      FUN_100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar2;
      goto LAB_10165cac4;
    }
  }
LAB_10165cac0:
  uVar1 = 0;
LAB_10165cac4:
  return uVar1 & 1;
}



/* Entry: 10165cae4; end: 10165cb23;  */

void FUN_10165cae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9757d0;
  func_0x000107c61520(&UNK_10d9757d0,&UNK_1103eee58);
  puRam0000000112dbcee8 = puVar1;
  return;
}



/* Entry: 10165cb24; end: 10165cb47;  */

void FUN_10165cb24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165cb48();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10165cb48; end: 10165cb87;  */

void FUN_10165cb48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9757a8;
  func_0x000107c61520(&UNK_10d9757a8,&UNK_1103eee58);
  puRam0000000112dbcef0 = puVar1;
  return;
}



/* Entry: 10165cb88; end: 10165cbb3;  */

void FUN_10165cb88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165cae4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101618440();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165cbb4; end: 10165cbb7;  */

void FUN_10165cbb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975810;
  func_0x000107c61520(&UNK_10d975810,&UNK_1103eee58);
  puRam0000000112dbcef8 = puVar1;
  return;
}



/* Entry: 10165cbb8; end: 10165cbf7;  */

void FUN_10165cbb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975810;
  func_0x000107c61520(&UNK_10d975810,&UNK_1103eee58);
  puRam0000000112dbcef8 = puVar1;
  return;
}



/* Entry: 10165cbf8; end: 10165cc53;  */

long FUN_10165cbf8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10165cc54; end: 10165cd2b;  */

undefined8 * FUN_10165cc54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  uVar3 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  return param_1;
}



/* Entry: 10165cd2c; end: 10165cd7f;  */

undefined8 * FUN_10165cd2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10165cd80; end: 10165ce1f;  */

int FUN_10165cd80(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10165ce20; end: 10165ce5f;  */

void FUN_10165ce20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcf08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d97577c;
  func_0x000107c61520(&DAT_10d97577c,&UNK_1103eee58);
  puRam0000000112dbcf08 = puVar1;
  return;
}



/* Entry: 10165ce60; end: 10165cecf;  */

undefined8 FUN_10165ce60(undefined8 param_1,undefined8 param_2)

{
  FUN_10165dfac(param_2,param_1);
  return param_2;
}



/* Entry: 10165ced0; end: 10165cf03;  */

void FUN_10165ced0(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10165cf04; end: 10165cf43;  */

void FUN_10165cf04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbcf58;
  func_0x0001000285a8(0x112dbcf58,&UNK_10d9758b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10165cf44; end: 10165cf7f;  */

void FUN_10165cf44(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10165cf80; end: 10165d05f;  */

void FUN_10165cf80(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10165d060; end: 10165d0bb;  */

bool FUN_10165d060(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 10165d0bc; end: 10165d0fb;  */

void FUN_10165d0bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbcfb8;
  func_0x0001000285a8(0x112dbcfb8,&UNK_10d9758b8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10165d0fc; end: 10165d123;  */

void FUN_10165d0fc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10165d124; end: 10165d1cf;  */

void FUN_10165d124(void)

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



/* Entry: 10165d1d0; end: 10165d1e3;  */

bool FUN_10165d1d0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10165d1e4; end: 10165d22b;  */

void FUN_10165d1e4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975c80,0x4a,2);
  uRam00000001138025c0 = uStack_38;
  uRam00000001138025b8 = uStack_40;
  uRam00000001138025d0 = uStack_28;
  uRam00000001138025c8 = uStack_30;
  uRam00000001138025e0 = uStack_18;
  uRam00000001138025d8 = uStack_20;
  return;
}



/* Entry: 10165d22c; end: 10165d34f;  */

/* WARNING: Removing unreachable block (ram,0x00010165d34c) */

void FUN_10165d22c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_10165d2c8;
          pcVar4 = *(code **)(param_3 + 0x168);
        }
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x00010165d4bc();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1103ef130;
        }
        else {
          if (lVar1 != 4) goto LAB_10165d2c8;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x00010165d4fc();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_1103ef1c0;
        }
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10165d2c8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10165d350; end: 10165d4bb;  */

void FUN_10165d350(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar9;
  ulong uStack_50;
  undefined1 uStack_48;
  
  puVar5 = &uStack_50;
  uVar1 = unaff_x20[1];
  uVar2 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar2 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar2 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  puVar4 = (undefined1 *)unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar7 = (long)(int)puVar4;
      lVar8 = (long)puVar4 >> 0x20;
      goto LAB_10165d3e0;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_10165d400;
  }
  else {
    if (uVar6 != 2) goto LAB_10165d400;
    lVar7 = *(long *)(puVar4 + 0x10);
    lVar8 = *(long *)(puVar4 + 0x18);
LAB_10165d3e0:
    if (lVar7 == lVar8) goto LAB_10165d400;
  }
  (**(code **)(param_3 + 0x78))(puVar4,uVar2,2,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10165d400:
  if (unaff_x20[4] != 0) {
    uStack_48 = (undefined1)unaff_x20[5];
    pcVar9 = *(code **)(param_3 + 0x80);
    uStack_50 = unaff_x20[4];
    FUN_10165d4bc();
    (*pcVar9)(&uStack_50,3,&UNK_1103ef130,puVar4,param_2,param_3);
    puVar4 = (undefined1 *)puVar5;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[6] != 0) {
    uStack_48 = (undefined1)unaff_x20[7];
    pcVar9 = *(code **)(param_3 + 0x80);
    uStack_50 = unaff_x20[6];
    func_0x00010165d4fc();
    (*pcVar9)(&uStack_50,4,&UNK_1103ef1c0,puVar4,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  return;
}



/* Entry: 10165d4bc; end: 10165d53b;  */

void FUN_10165d4bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9758c0;
  func_0x000107c61520(&DAT_10d9758c0,&UNK_1103ef130);
  puRam0000000112dbcfc8 = puVar1;
  return;
}



/* Entry: 10165d53c; end: 10165d593;  */

/* WARNING: Possible PIC construction at 0x00010165db10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010165db14) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10165d53c(undefined8 *param_1,undefined8 *param_2)

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
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  FUN_100e25fcc(uVar13,param_1[3],param_2[2],param_2[3]);
  if ((uVar13 & 1) != 0) {
    uVar13 = (ulong)(param_1[4] != 0);
    if (*(char *)(param_1 + 5) != '\x01') {
      uVar13 = param_1[4];
    }
    if (*(char *)(param_2 + 5) == '\x01') {
      if (param_2[4] == 0) {
        if (uVar13 != 0) {
          return (byte *)0x0;
        }
      }
      else if (uVar13 != 1) {
        return (byte *)0x0;
      }
    }
    else if (uVar13 != param_2[4]) {
      return (byte *)0x0;
    }
    lVar19 = param_1[6];
    lVar22 = param_2[6];
    if (*(char *)(param_2 + 7) == '\x01') {
      if (lVar22 == 0) {
        if (lVar19 == 0) goto LAB_10165dba4;
      }
      else if (lVar22 == 1) {
        if (lVar19 == 1) {
LAB_10165dba4:
          pbVar10 = (byte *)param_1[8];
          pbVar26 = (byte *)param_1[9];
          lVar19 = param_2[8];
          uVar13 = param_2[9];
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
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar13 >> 0x20);
            uVar23 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar14 = pbVar26;
            if ((ulong)pbVar26 >> 0x3e == 3) {
              uVar21 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                  (uVar13 >> 0x3e < 3)) ||
                 ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
LAB_100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
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
              if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
              if (uVar23 == 0) {
                uVar24 = uVar13 >> 0x30 & 0xff;
                goto LAB_100e2608c;
              }
              iVar20 = (int)((ulong)lVar19 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar21 = 0;
              if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
              if (uVar23 == 2) {
                uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
LAB_100e2608c:
                if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
                if ((long)uVar21 < 1) goto LAB_100e26128;
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
                    puVar7[-0x68] = (char)pbVar26;
                    puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                    pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                  lVar22 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar14 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
                  }
                  unaff_x23 = unaff_x24 + -lVar22;
                  if (SBORROW8((long)unaff_x24,lVar22)) {
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
LAB_100e262a4:
                unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar13;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
            pbVar25 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar15 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar14[0x28] == 0) {
                  lVar19 = *(long *)pbVar14;
                  uVar11 = 0;
                  FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
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
                lVar19 = *(long *)pbVar14;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar15 = pbVar26;
                if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar14[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar17 = *(byte **)(pbVar14 + 8);
                lVar19 = *(long *)(pbVar14 + 0x18);
                if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                  if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar25 != (byte *)0x0) {
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar12 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar19 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar22 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar14[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar17 = *(byte **)(pbVar14 + 8);
                if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                   (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
                   pbVar17 = *(byte **)(pbVar14 + 0x18),
                   pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18)))
                {
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
              lVar19 = *(long *)(pbVar14 + 0x20);
              if (pbVar26 == (byte *)0x0) {
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
                pbVar15 = pbVar26;
                if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (lVar22 != 0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  lVar22 == 0) && pbVar26 == (byte *)0x0) {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar14 + 0x20);
                lVar19 = *(long *)(pbVar14 + 0x18);
                bVar27 = pbVar14[8] | (byte)lVar19;
                bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar14[0x10] | (byte)lVar22;
                bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar14 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                  lVar22 == 0)) {
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
              lVar22 = *(long *)(pbVar14 + 0x20);
              lVar19 = *(long *)(pbVar14 + 0x18);
              bVar27 = pbVar14[8] | (byte)lVar19;
              bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar14[0x10] | (byte)lVar22;
              bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
              lVar19 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar14[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar14 + 8);
            uVar13 = *(ulong *)(pbVar14 + 0x10);
            lVar22 = *(long *)pbVar14;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar22,uVar11);
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
      }
      else if (lVar19 == 2) goto LAB_10165dba4;
    }
    else if (lVar19 == lVar22) goto LAB_10165dba4;
  }
  return (byte *)0x0;
}



/* Entry: 10165d594; end: 10165d5c3;  */

undefined1  [16] FUN_10165d594(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 10165d5c4; end: 10165d5f7;  */

void FUN_10165d5c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 10165d5f8; end: 10165d60b;  */

undefined1  [16] FUN_10165d5f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x10165d608;
  return auVar1;
}



/* Entry: 10165d60c; end: 10165d633;  */

void FUN_10165d60c(void)

{
  FUN_10165d22c();
  return;
}



/* Entry: 10165d634; end: 10165d637;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10165d634(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10165d638; end: 10165d66f;  */

uint FUN_10165d638(long param_1,long param_2)

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
  FUN_10165e218();
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



/* Entry: 10165d670; end: 10165d6c7;  */

uint FUN_10165d670(undefined8 *param_1)

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
  FUN_10165dae0(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10165d6c8; end: 10165d767;  */

/* WARNING: Possible PIC construction at 0x00010165d714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165d724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165d718) */
/* WARNING: Removing unreachable block (ram,0x00010165d728) */

void FUN_10165d6c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcfc0 != -1) {
    func_0x000107c61568(0x112dbcfc0,FUN_10165d1e4);
  }
  uVar5 = uRam00000001138025e0;
  uVar4 = uRam00000001138025d8;
  uVar3 = uRam00000001138025d0;
  uVar2 = uRam00000001138025c8;
  uVar1 = uRam00000001138025c0;
  *param_1 = uRam00000001138025b8;
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



/* Entry: 10165d768; end: 10165d7a3;  */

void FUN_10165d768(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd050;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd050,&UNK_10d975c38);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10165d7a4; end: 10165d8b7;  */

void FUN_10165d7a4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10165d8b8; end: 10165d957;  */

uint FUN_10165d8b8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10165dae0(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10165d958; end: 10165d9f7;  */

/* WARNING: Possible PIC construction at 0x00010165d9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165d9b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165d9a8) */
/* WARNING: Removing unreachable block (ram,0x00010165d9b8) */

void FUN_10165d958(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcfe0 != -1) {
    func_0x000107c61568(0x112dbcfe0,0x10165d910);
  }
  uVar5 = uRam0000000113802610;
  uVar4 = uRam0000000113802608;
  uVar3 = uRam0000000113802600;
  uVar2 = uRam00000001138025f8;
  uVar1 = uRam00000001138025f0;
  *param_1 = uRam00000001138025e8;
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



/* Entry: 10165d9f8; end: 10165da3f;  */

void FUN_10165d9f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975c40,0x18,2);
  uRam0000000113802620 = uStack_38;
  uRam0000000113802618 = uStack_40;
  uRam0000000113802630 = uStack_28;
  uRam0000000113802628 = uStack_30;
  uRam0000000113802640 = uStack_18;
  uRam0000000113802638 = uStack_20;
  return;
}



/* Entry: 10165da40; end: 10165dadf;  */

/* WARNING: Possible PIC construction at 0x00010165da8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165da9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165da90) */
/* WARNING: Removing unreachable block (ram,0x00010165daa0) */

void FUN_10165da40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcfe8 != -1) {
    func_0x000107c61568(0x112dbcfe8,FUN_10165d9f8);
  }
  uVar5 = uRam0000000113802640;
  uVar4 = uRam0000000113802638;
  uVar3 = uRam0000000113802630;
  uVar2 = uRam0000000113802628;
  uVar1 = uRam0000000113802620;
  *param_1 = uRam0000000113802618;
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



/* Entry: 10165dae0; end: 10165dbd7;  */

/* WARNING: Possible PIC construction at 0x00010165db10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010165db14) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10165dae0(undefined8 *param_1,undefined8 *param_2)

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
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  FUN_100e25fcc(uVar13,param_1[3],param_2[2],param_2[3]);
  if ((uVar13 & 1) != 0) {
    uVar13 = (ulong)(param_1[4] != 0);
    if (*(char *)(param_1 + 5) != '\x01') {
      uVar13 = param_1[4];
    }
    if (*(char *)(param_2 + 5) == '\x01') {
      if (param_2[4] == 0) {
        if (uVar13 != 0) {
          return (byte *)0x0;
        }
      }
      else if (uVar13 != 1) {
        return (byte *)0x0;
      }
    }
    else if (uVar13 != param_2[4]) {
      return (byte *)0x0;
    }
    lVar19 = param_1[6];
    lVar22 = param_2[6];
    if (*(char *)(param_2 + 7) == '\x01') {
      if (lVar22 == 0) {
        if (lVar19 == 0) goto LAB_10165dba4;
      }
      else if (lVar22 == 1) {
        if (lVar19 == 1) {
LAB_10165dba4:
          pbVar10 = (byte *)param_1[8];
          pbVar26 = (byte *)param_1[9];
          lVar19 = param_2[8];
          uVar13 = param_2[9];
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
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar13 >> 0x20);
            uVar23 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar14 = pbVar26;
            if ((ulong)pbVar26 >> 0x3e == 3) {
              uVar21 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                  (uVar13 >> 0x3e < 3)) ||
                 ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
LAB_100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
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
              if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
              if (uVar23 == 0) {
                uVar24 = uVar13 >> 0x30 & 0xff;
                goto LAB_100e2608c;
              }
              iVar20 = (int)((ulong)lVar19 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar21 = 0;
              if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
              if (uVar23 == 2) {
                uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
LAB_100e2608c:
                if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
                if ((long)uVar21 < 1) goto LAB_100e26128;
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
                    puVar7[-0x68] = (char)pbVar26;
                    puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                    pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                  lVar22 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar14 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
                  }
                  unaff_x23 = unaff_x24 + -lVar22;
                  if (SBORROW8((long)unaff_x24,lVar22)) {
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
LAB_100e262a4:
                unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar13;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
            pbVar25 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar15 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar14[0x28] == 0) {
                  lVar19 = *(long *)pbVar14;
                  uVar11 = 0;
                  FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
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
                lVar19 = *(long *)pbVar14;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar15 = pbVar26;
                if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar14[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar17 = *(byte **)(pbVar14 + 8);
                lVar19 = *(long *)(pbVar14 + 0x18);
                if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                  if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar25 != (byte *)0x0) {
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar12 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar19 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar22 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar14[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar17 = *(byte **)(pbVar14 + 8);
                if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                   (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
                   pbVar17 = *(byte **)(pbVar14 + 0x18),
                   pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18)))
                {
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
              lVar19 = *(long *)(pbVar14 + 0x20);
              if (pbVar26 == (byte *)0x0) {
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
                pbVar15 = pbVar26;
                if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (lVar22 != 0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  lVar22 == 0) && pbVar26 == (byte *)0x0) {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar14 + 0x20);
                lVar19 = *(long *)(pbVar14 + 0x18);
                bVar27 = pbVar14[8] | (byte)lVar19;
                bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar14[0x10] | (byte)lVar22;
                bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar14 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                  lVar22 == 0)) {
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
              lVar22 = *(long *)(pbVar14 + 0x20);
              lVar19 = *(long *)(pbVar14 + 0x18);
              bVar27 = pbVar14[8] | (byte)lVar19;
              bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar14[0x10] | (byte)lVar22;
              bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
              lVar19 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar14[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar14 + 8);
            uVar13 = *(ulong *)(pbVar14 + 0x10);
            lVar22 = *(long *)pbVar14;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar22,uVar11);
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
      }
      else if (lVar19 == 2) goto LAB_10165dba4;
    }
    else if (lVar19 == lVar22) goto LAB_10165dba4;
  }
  return (byte *)0x0;
}



/* Entry: 10165dbd8; end: 10165dc17;  */

void FUN_10165dbd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcfd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975b30;
  func_0x000107c61520(&UNK_10d975b30,&UNK_1103ef088);
  puRam0000000112dbcfd8 = puVar1;
  return;
}



/* Entry: 10165dc18; end: 10165dc2b;  */

void FUN_10165dc18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165dc2c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10165dc6c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165dc2c; end: 10165dcd7;  */

void FUN_10165dc2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975958;
  func_0x000107c61520(&UNK_10d975958,&UNK_1103ef130);
  puRam0000000112dbcff0 = puVar1;
  return;
}



/* Entry: 10165dcd8; end: 10165dcdb;  */

void FUN_10165dcd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975998;
  func_0x000107c61520(&UNK_10d975998,&UNK_1103ef130);
  puRam0000000112dbd010 = puVar1;
  return;
}



/* Entry: 10165dcdc; end: 10165dd1b;  */

void FUN_10165dcdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975998;
  func_0x000107c61520(&UNK_10d975998,&UNK_1103ef130);
  puRam0000000112dbd010 = puVar1;
  return;
}



/* Entry: 10165dd1c; end: 10165dd2f;  */

void FUN_10165dd1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165dd30();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10165dd70)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165dd30; end: 10165dddb;  */

void FUN_10165dd30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975a58;
  func_0x000107c61520(&UNK_10d975a58,&UNK_1103ef1c0);
  puRam0000000112dbd018 = puVar1;
  return;
}


