/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015c62e8; end: 1015c6367;  */

void FUN_1015c62e8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  long unaff_x20;
  
  puVar7 = *(undefined **)(unaff_x20 + 0x40);
  bVar8 = puVar7 != (undefined *)0x0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (bVar8) {
    puVar1 = puVar7;
  }
  lVar2 = 0;
  if (bVar8) {
    lVar2 = *(long *)(unaff_x20 + 0x48);
  }
  lVar3 = -0x4000000000000000;
  if (bVar8) {
    lVar3 = *(long *)(unaff_x20 + 0x50);
  }
  lVar4 = 0;
  if (bVar8) {
    lVar4 = *(long *)(unaff_x20 + 0x58);
  }
  lVar5 = 0;
  if (bVar8) {
    lVar5 = *(long *)(unaff_x20 + 0x60);
  }
  lVar6 = -0x1000000000000000;
  if (puVar7 != (undefined *)0x0) {
    lVar6 = *(long *)(unaff_x20 + 0x68);
  }
  FUN_1015c61bc();
  *param_1 = (long)puVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  param_1[4] = lVar5;
  param_1[5] = lVar6;
  return;
}



/* Entry: 1015c6368; end: 1015c6433;  */

bool FUN_1015c6368(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_a0 [48];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  lStack_70 = lVar6;
  uStack_68 = uVar1;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  if (lVar6 == 0) {
    FUN_1015c7d38(&lStack_70,auStack_a0,0x112db7ec8,&UNK_10d966850);
  }
  else {
    FUN_1015c7d38(&lStack_70,auStack_a0,0x112db7ec8,&UNK_10d966850);
    FUN_101571528(lVar6,uVar1,uVar2,uVar3,uVar4,uVar5);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  FUN_101571528(0,uVar1,uVar2,uVar3,uVar4,uVar5);
  return lVar6 != 0;
}



/* Entry: 1015c6434; end: 1015c64d3;  */

bool FUN_1015c6434(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(ulong *)(unaff_x20 + 0x28);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_1015c7d38(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
    FUN_101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_1015c7d38(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
  }
  FUN_101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 1015c64d4; end: 1015c651b;  */

void FUN_1015c64d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966c30,0x39,2);
  uRam0000000113800a80 = uStack_38;
  uRam0000000113800a78 = uStack_40;
  uRam0000000113800a90 = uStack_28;
  uRam0000000113800a88 = uStack_30;
  uRam0000000113800aa0 = uStack_18;
  uRam0000000113800a98 = uStack_20;
  return;
}



/* Entry: 1015c651c; end: 1015c65eb;  */

void FUN_1015c651c(undefined8 param_1,long param_2,long param_3)

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
        FUN_1015c834c();
        lVar2 = unaff_x20 + 0x10;
LAB_1015c6590:
        (*pcVar4)(lVar2,&UNK_1103e3798,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1015c834c();
        lVar2 = unaff_x20 + 0x40;
        goto LAB_1015c6590;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015c65ec; end: 1015c665f;  */

void FUN_1015c65ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015c6660();
  if (unaff_x21 == 0) {
    FUN_1015c66ec();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015c6660; end: 1015c66eb;  */

void FUN_1015c6660(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_70 = *(long *)(param_1 + 0x10);
  if (lStack_70 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015c834c();
    (*pcVar1)(&lStack_70,1,&UNK_1103e3798,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015c66ec; end: 1015c6777;  */

void FUN_1015c66ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_70 = *(long *)(param_1 + 0x40);
  if (lStack_70 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015c834c();
    (*pcVar1)(&lStack_70,2,&UNK_1103e3798,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015c6778; end: 1015c67bf;  */

uint FUN_1015c6778(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_250 [48];
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  uVar6 = param_1[3];
  lVar3 = param_1[2];
  uVar9 = param_1[5];
  uVar8 = param_1[4];
  uVar7 = param_1[7];
  uVar4 = param_1[6];
  uStack_1e8 = param_2[3];
  lStack_1f0 = param_2[2];
  uStack_1d8 = param_2[5];
  uStack_1e0 = param_2[4];
  uStack_1c8 = param_2[7];
  uStack_1d0 = param_2[6];
  lStack_160 = lStack_1f0;
  uStack_158 = uStack_1e8;
  uStack_150 = uStack_1e0;
  uStack_148 = uStack_1d8;
  uStack_140 = uStack_1d0;
  uStack_138 = uStack_1c8;
  lStack_130 = lVar3;
  uStack_128 = uVar6;
  uStack_120 = uVar8;
  uStack_118 = uVar9;
  uStack_110 = uVar4;
  uStack_108 = uVar7;
  if (lVar3 == 0) {
    if (lStack_1f0 != 0) goto LAB_1015c7e8c;
    FUN_1015c7d38(&lStack_130,&lStack_220,0x112db7ec8,&UNK_10d966850);
    FUN_1015c7d38(&lStack_160,&lStack_220,0x112db7ec8,&UNK_10d966850);
    FUN_101571528(0,uVar6,uVar8,uVar9,uVar4,uVar7);
LAB_1015c7f34:
    uVar7 = param_1[9];
    lVar3 = param_1[8];
    uVar13 = param_1[0xb];
    uVar11 = param_1[10];
    uVar8 = param_1[0xd];
    uVar4 = param_1[0xc];
    uVar9 = param_2[9];
    lVar5 = param_2[8];
    uVar14 = param_2[0xb];
    uVar12 = param_2[10];
    uVar10 = param_2[0xd];
    uVar6 = param_2[0xc];
    lStack_1c0 = lVar5;
    uStack_1b8 = uVar9;
    uStack_1b0 = uVar12;
    uStack_1a8 = uVar14;
    uStack_1a0 = uVar6;
    uStack_198 = uVar10;
    lStack_190 = lVar3;
    uStack_188 = uVar7;
    uStack_180 = uVar11;
    uStack_178 = uVar13;
    uStack_170 = uVar4;
    uStack_168 = uVar8;
    if (lVar3 == 0) {
      if (lVar5 != 0) goto LAB_1015c8024;
      FUN_1015c7d38(&lStack_190,&lStack_220,0x112db7ec8,&UNK_10d966850);
      FUN_1015c7d38(&lStack_1c0,&lStack_220,0x112db7ec8,&UNK_10d966850);
      FUN_101571528(0,uVar7,uVar11,uVar13,uVar4,uVar8);
    }
    else {
      if (lVar5 == 0) {
LAB_1015c8024:
        lStack_220 = lVar3;
        uStack_218 = uVar7;
        uStack_210 = uVar11;
        uStack_208 = uVar13;
        uStack_200 = uVar4;
        uStack_1f8 = uVar8;
        lStack_1f0 = lVar5;
        uStack_1e8 = uVar9;
        uStack_1e0 = uVar12;
        uStack_1d8 = uVar14;
        uStack_1d0 = uVar6;
        uStack_1c8 = uVar10;
        FUN_1015c7d38(&lStack_190,&lStack_f8,0x112db7ec8,&UNK_10d966850);
        plVar2 = &lStack_1c0;
        lVar3 = -0xe8;
        goto LAB_1015c8068;
      }
      lStack_220 = lVar5;
      uStack_218 = uVar9;
      uStack_210 = uVar12;
      uStack_208 = uVar14;
      uStack_200 = uVar6;
      uStack_1f8 = uVar10;
      lStack_f8 = lVar3;
      uStack_f0 = uVar7;
      uStack_e8 = uVar11;
      uStack_e0 = uVar13;
      uStack_d8 = uVar4;
      uStack_d0 = uVar8;
      FUN_1015c7d38(&lStack_190,auStack_250,0x112db7ec8,&UNK_10d966850);
      FUN_1015c7d38(&lStack_1c0,auStack_250,0x112db7ec8,&UNK_10d966850);
      plVar2 = &lStack_f8;
      func_0x0001015c7b0c(plVar2,&lStack_220);
      FUN_101571528(lVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
      FUN_101571528(lVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
      if (((ulong)plVar2 & 1) == 0) goto LAB_1015c807c;
    }
    uVar4 = *param_1;
    FUN_100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar4;
  }
  else {
    if (lStack_1f0 == 0) {
LAB_1015c7e8c:
      lStack_220 = lVar3;
      uStack_218 = uVar6;
      uStack_210 = uVar8;
      uStack_208 = uVar9;
      uStack_200 = uVar4;
      uStack_1f8 = uVar7;
      FUN_1015c7d38(&lStack_130,&lStack_98,0x112db7ec8,&UNK_10d966850);
      plVar2 = &lStack_160;
      lVar3 = -0x88;
LAB_1015c8068:
      FUN_1015c7d38(plVar2,&stack0xfffffffffffffff0 + lVar3,0x112db7ec8,&UNK_10d966850);
      FUN_1015c90fc(&lStack_220);
    }
    else {
      lStack_c8 = lVar3;
      uStack_c0 = uVar6;
      uStack_b8 = uVar8;
      uStack_b0 = uVar9;
      uStack_a8 = uVar4;
      uStack_a0 = uVar7;
      lStack_98 = lStack_1f0;
      uStack_90 = uStack_1e8;
      uStack_88 = uStack_1e0;
      uStack_80 = uStack_1d8;
      uStack_78 = uStack_1d0;
      uStack_70 = uStack_1c8;
      FUN_1015c7d38(&lStack_130,&lStack_220,0x112db7ec8,&UNK_10d966850);
      FUN_1015c7d38(&lStack_160,&lStack_220,0x112db7ec8,&UNK_10d966850);
      plVar2 = &lStack_c8;
      func_0x0001015c7b0c(plVar2,&lStack_98);
      FUN_101571528(lStack_1f0,uStack_1e8,uStack_1e0,uStack_1d8,uStack_1d0,uStack_1c8);
      FUN_101571528(lVar3,uVar6,uVar8,uVar9,uVar4,uVar7);
      if (((ulong)plVar2 & 1) != 0) goto LAB_1015c7f34;
    }
LAB_1015c807c:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 1015c67c0; end: 1015c67ef;  */

undefined1  [16] FUN_1015c67c0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015c67f0; end: 1015c6823;  */

void FUN_1015c67f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015c6824; end: 1015c6837;  */

undefined8 FUN_1015c6824(void)

{
  return 0x1015c6834;
}



/* Entry: 1015c6838; end: 1015c684b;  */

void FUN_1015c6838(void)

{
  FUN_1015c651c();
  return;
}



/* Entry: 1015c684c; end: 1015c6893;  */

void FUN_1015c684c(void)

{
  FUN_1015c65ec();
  return;
}



/* Entry: 1015c6894; end: 1015c6897;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015c6894(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015c6898; end: 1015c68cf;  */

uint FUN_1015c6898(long param_1,long param_2)

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
  func_0x0001015c90bc();
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



/* Entry: 1015c68d0; end: 1015c6937;  */

uint FUN_1015c68d0(undefined8 *param_1)

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
  FUN_1015c7d80(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015c6938; end: 1015c69d7;  */

/* WARNING: Possible PIC construction at 0x0001015c6984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015c6994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015c6988) */
/* WARNING: Removing unreachable block (ram,0x0001015c6998) */

void FUN_1015c6938(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7ed0 != -1) {
    func_0x000107c61568(0x112db7ed0,FUN_1015c64d4);
  }
  uVar5 = uRam0000000113800aa0;
  uVar4 = uRam0000000113800a98;
  uVar3 = uRam0000000113800a90;
  uVar2 = uRam0000000113800a88;
  uVar1 = uRam0000000113800a80;
  *param_1 = uRam0000000113800a78;
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



/* Entry: 1015c69d8; end: 1015c6a13;  */

void FUN_1015c69d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7f60;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7f60,&UNK_10d966bd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015c6a14; end: 1015c6b3f;  */

void FUN_1015c6a14(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015c6b40; end: 1015c6beb;  */

uint FUN_1015c6b40(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1015c7d80(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015c6bec; end: 1015c6ccf;  */

void FUN_1015c6bec(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
LAB_1015c6c74:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001015c8158();
        goto LAB_1015c6c74;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015c6cd0; end: 1015c6d7b;  */

void FUN_1015c6cd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  plVar1 = unaff_x20;
  FUN_1015c6d7c();
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001015c8158();
      (*pcVar3)(lVar2,2,&UNK_1103e3820,plVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1015c6d7c; end: 1015c6e03;  */

void FUN_1015c6d7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x28);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015c6e04; end: 1015c6e4f;  */

void FUN_1015c6e04(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  return;
}



/* Entry: 1015c6e50; end: 1015c6e7f;  */

undefined1  [16] FUN_1015c6e50(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1015c6e80; end: 1015c6eb3;  */

void FUN_1015c6e80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1015c6eb4; end: 1015c6ec7;  */

undefined1  [16] FUN_1015c6eb4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1015c6ec4;
  return auVar1;
}



/* Entry: 1015c6ec8; end: 1015c6edb;  */

void FUN_1015c6ec8(void)

{
  FUN_1015c6bec();
  return;
}



/* Entry: 1015c6edc; end: 1015c6f13;  */

void FUN_1015c6edc(void)

{
  FUN_1015c6cd0();
  return;
}



/* Entry: 1015c6f14; end: 1015c6f17;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015c6f14(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015c6f18; end: 1015c6f4f;  */

uint FUN_1015c6f18(long param_1,long param_2)

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
  func_0x0001015c907c();
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



/* Entry: 1015c6f50; end: 1015c6f97;  */

uint FUN_1015c6f50(undefined8 *param_1)

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
  func_0x0001015c7b0c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015c6f98; end: 1015c7037;  */

/* WARNING: Possible PIC construction at 0x0001015c6fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015c6ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015c6fe8) */
/* WARNING: Removing unreachable block (ram,0x0001015c6ff8) */

void FUN_1015c6f98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7ee0 != -1) {
    func_0x000107c61568(0x112db7ee0,0x1015c6ba4);
  }
  uVar5 = uRam0000000113800ad0;
  uVar4 = uRam0000000113800ac8;
  uVar3 = uRam0000000113800ac0;
  uVar2 = uRam0000000113800ab8;
  uVar1 = uRam0000000113800ab0;
  *param_1 = uRam0000000113800aa8;
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



/* Entry: 1015c7038; end: 1015c7073;  */

void FUN_1015c7038(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7f50;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7f50,&UNK_10d966bc8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015c7074; end: 1015c7197;  */

void FUN_1015c7074(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_38 = unaff_x20[5];
  uStack_50 = unaff_x20[2];
  uStack_58 = unaff_x20[1];
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015c7198; end: 1015c7223;  */

uint FUN_1015c7198(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001015c7b0c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015c7224; end: 1015c72bb;  */

void FUN_1015c7224(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1015c7278:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001015c7294;
  pcVar3 = *(code **)(param_3 + 0x18);
  goto LAB_1015c7260;
code_r0x0001015c7294:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x18);
LAB_1015c7260:
    (*pcVar3)();
  }
  goto LAB_1015c7278;
}



/* Entry: 1015c72bc; end: 1015c735f;  */

void FUN_1015c72bc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_1 == 0) || ((**(code **)(param_7 + 8))(1,param_6,param_7), unaff_x21 == 0)) &&
     (((int)param_2 == 0 || ((**(code **)(param_7 + 8))(param_2,2,param_6,param_7), unaff_x21 == 0))
     )) {
    func_0x000100076224(param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 1015c7360; end: 1015c7393;  */

void FUN_1015c7360(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc000000000000000;
  return;
}



/* Entry: 1015c7394; end: 1015c73c3;  */

undefined1  [16] FUN_1015c7394(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1015c73c4; end: 1015c73f7;  */

void FUN_1015c73c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1015c73f8; end: 1015c740b;  */

undefined1  [16] FUN_1015c73f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1015c7408;
  return auVar1;
}



/* Entry: 1015c740c; end: 1015c7443;  */

void FUN_1015c740c(void)

{
  FUN_1015c7224();
  return;
}



/* Entry: 1015c7444; end: 1015c7447;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015c7444(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015c7448; end: 1015c747f;  */

uint FUN_1015c7448(long param_1,long param_2)

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
  FUN_1015c903c();
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



/* Entry: 1015c7480; end: 1015c74ab;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015c7480(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
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
  float *unaff_x20;
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
  
  bVar8 = false;
  if ((*unaff_x20 == *param_1) && (bVar8 = false, !NAN(unaff_x20[1]) && !NAN(param_1[1]))) {
    bVar8 = unaff_x20[1] == param_1[1];
  }
  if (!bVar8) {
    return (byte *)0x0;
  }
  pbVar11 = *(byte **)(unaff_x20 + 2);
  pbVar26 = *(byte **)(unaff_x20 + 4);
  lVar25 = *(long *)(param_1 + 2);
  uVar17 = *(ulong *)(param_1 + 4);
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
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar10 = (byte *)0x0;
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
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
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
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
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
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
LAB_100e262a4:
        unaff_x20 = (float *)((ulong)pbVar26 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar25,uVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(float **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
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
        uVar12 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
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
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
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
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
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
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
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
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
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



/* Entry: 1015c74ac; end: 1015c754b;  */

/* WARNING: Possible PIC construction at 0x0001015c74f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015c7508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015c74fc) */
/* WARNING: Removing unreachable block (ram,0x0001015c750c) */

void FUN_1015c74ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7ef8 != -1) {
    func_0x000107c61568(0x112db7ef8,0x1015c71dc);
  }
  uVar5 = uRam0000000113800b00;
  uVar4 = uRam0000000113800af8;
  uVar3 = uRam0000000113800af0;
  uVar2 = uRam0000000113800ae8;
  uVar1 = uRam0000000113800ae0;
  *param_1 = uRam0000000113800ad8;
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



/* Entry: 1015c754c; end: 1015c7587;  */

void FUN_1015c754c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7f40;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7f40,&UNK_10d966bc0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015c7588; end: 1015c768b;  */

void FUN_1015c7588(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015c768c; end: 1015c76b3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015c768c(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
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
  
  bVar8 = false;
  if ((*param_1 == *param_2) && (bVar8 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar8 = param_1[1] == param_2[1];
  }
  if (!bVar8) {
    return (byte *)0x0;
  }
  lVar25 = *(long *)(param_2 + 2);
  uVar17 = *(ulong *)(param_2 + 4);
  pbVar11 = *(byte **)(param_1 + 2);
  pbVar26 = *(byte **)(param_1 + 4);
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
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar10 = (byte *)0x0;
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
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
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
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
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
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar25,uVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
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
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
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
        uVar12 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
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
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
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
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
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
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
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
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
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



/* Entry: 1015c76b4; end: 1015c7d37;  */

ulong * FUN_1015c76b4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *unaff_x19;
  ulong uVar16;
  byte *unaff_x20;
  undefined8 unaff_x21;
  long lVar17;
  int iVar18;
  ulong unaff_x22;
  ulong uVar19;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  long lVar20;
  ulong *unaff_x27;
  ulong *unaff_x28;
  ulong uVar21;
  ulong uVar22;
  undefined1 auStack_158 [24];
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_98;
  undefined8 uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = param_1[2];
  if (lVar20 == param_2[2]) {
    if ((lVar20 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x27 = param_2 + 6;
      unaff_x28 = param_1 + 6;
      do {
        unaff_x25 = 0xc000000000000000;
        bVar5 = false;
        if ((*(float *)(unaff_x28 + -2) == *(float *)(unaff_x27 + -2)) &&
           (bVar5 = false,
           !NAN(*(float *)((long)unaff_x28 + -0xc)) && !NAN(*(float *)((long)unaff_x27 + -0xc)))) {
          bVar5 = *(float *)((long)unaff_x28 + -0xc) == *(float *)((long)unaff_x27 + -0xc);
        }
        if (!bVar5) goto LAB_1015c7aa4;
        unaff_x22 = unaff_x28[-1];
        unaff_x19 = (undefined8 *)*unaff_x28;
        unaff_x24 = unaff_x27[-1];
        unaff_x23 = *unaff_x27;
        uVar6 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar11 = uVar6 >> 0x1e;
        uVar2 = (uint)(unaff_x23 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        iVar18 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((unaff_x22 != 0 || unaff_x19 != (undefined8 *)0xc000000000000000) ||
                unaff_x23 >> 0x3e < 3) || (unaff_x24 != 0)) || (unaff_x23 != 0xc000000000000000))
          goto joined_r0x0001015c7924;
        }
        else {
          if (uVar6 >> 0x1e < 2) {
            if (uVar11 == 0) {
              uVar15 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar13,iVar18)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1015c7af8);
                (*pcVar4)();
              }
              uVar15 = (ulong)(iVar13 - iVar18);
            }
joined_r0x0001015c7924:
            if (uVar2 >> 0x1e < 2) goto LAB_1015c77c4;
LAB_1015c7790:
            if (uVar12 != 2) {
              if (uVar15 == 0) goto LAB_1015c7718;
              goto LAB_1015c7aa4;
            }
            uVar14 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
            if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1015c7aec);
              (*pcVar4)();
            }
          }
          else {
            if (uVar11 == 2) {
              uVar15 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1015c7af4);
                (*pcVar4)();
              }
              goto joined_r0x0001015c7924;
            }
            uVar15 = 0;
            if (1 < uVar12) goto LAB_1015c7790;
LAB_1015c77c4:
            if (uVar12 == 0) {
              uVar14 = unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)(unaff_x24 >> 0x20);
              if (SBORROW4(iVar13,(int)unaff_x24)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1015c7af0);
                (*pcVar4)();
              }
              uVar14 = (ulong)(iVar13 - (int)unaff_x24);
            }
          }
          if (uVar15 != uVar14) goto LAB_1015c7aa4;
          if (0 < (long)uVar15) {
            param_2 = unaff_x19;
            if (uVar11 < 2) {
              if (uVar11 != 0) {
                lVar17 = (long)iVar18;
                uStack_98 = ((long)unaff_x22 >> 0x20) - lVar17;
                if ((long)unaff_x22 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1015c7afc);
                  uStack_90 = unaff_x21;
                  (*pcVar4)();
                }
                uStack_90 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                uVar15 = unaff_x24;
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000107c5ec30();
                if (uVar15 == 0) {
                  func_0x000107c5ec38();
                  lVar17 = 0;
                  lVar10 = 0;
                }
                else {
                  uVar14 = uVar15;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1015c7b08);
                    (*pcVar4)();
                  }
                  lVar1 = (lVar17 - uVar14) + uVar15;
                  func_0x000107c5ec38();
                  if ((long)uStack_98 <= (long)uVar14) {
                    uVar14 = uStack_98;
                  }
                  lVar17 = 0;
                  if (lVar1 != 0) {
                    lVar17 = lVar1;
                  }
                  lVar10 = 0;
                  if (lVar1 != 0) {
                    lVar10 = uVar14 + lVar1;
                  }
                }
                unaff_x21 = uStack_90;
                unaff_x20 = (byte *)((ulong)unaff_x19 & 0x3fffffffffffffff);
                FUN_100e25bdc(abStack_80,lVar17,lVar10,unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                unaff_x25 = 0xc000000000000000;
                if ((abStack_80[0] & 1) != 0) goto LAB_1015c7718;
                goto LAB_1015c7aa4;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)(unaff_x22 >> 8);
              abStack_80[2] = (byte)(unaff_x22 >> 0x10);
              abStack_80[3] = (byte)(unaff_x22 >> 0x18);
              abStack_80[4] = (byte)(unaff_x22 >> 0x20);
              abStack_80[5] = (byte)(unaff_x22 >> 0x28);
              abStack_80[6] = (byte)(unaff_x22 >> 0x30);
              abStack_80[7] = (byte)(unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              pbVar9 = abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x24,unaff_x23);
              unaff_x20 = pbVar9;
LAB_1015c79e4:
              FUN_100e25bdc(&bStack_81,abStack_80,pbVar9,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar3 = bStack_81;
            }
            else {
              if (uVar11 != 2) {
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
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x00010006c00c(unaff_x24,unaff_x23);
                pbVar9 = abStack_80;
                goto LAB_1015c79e4;
              }
              lVar17 = *(long *)(unaff_x22 + 0x10);
              uStack_98 = *(ulong *)(unaff_x22 + 0x18);
              uStack_90 = unaff_x21;
              func_0x00010006c00c(unaff_x22,unaff_x19);
              unaff_x25 = unaff_x24;
              func_0x00010006c00c(unaff_x24,unaff_x23);
              func_0x000107c5ec30();
              uVar15 = unaff_x25;
              if (unaff_x25 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar17,uVar15)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1015c7b04);
                  (*pcVar4)();
                }
                unaff_x25 = (lVar17 - uVar15) + unaff_x25;
              }
              uVar14 = uStack_98 - lVar17;
              if (SBORROW8(uStack_98,lVar17)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1015c7b00);
                (*pcVar4)();
              }
              unaff_x20 = (byte *)((ulong)unaff_x19 & 0x3fffffffffffffff);
              func_0x000107c5ec38();
              unaff_x21 = uStack_90;
              if (unaff_x25 == 0) {
                lVar17 = 0;
              }
              else {
                if ((long)uVar14 <= (long)uVar15) {
                  uVar15 = uVar14;
                }
                lVar17 = uVar15 + unaff_x25;
              }
              FUN_100e25bdc(abStack_80,unaff_x25,lVar17,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar3 = abStack_80[0];
            }
            if ((bVar3 & 1) == 0) goto LAB_1015c7aa4;
          }
        }
LAB_1015c7718:
        unaff_x25 = 0xc000000000000000;
        unaff_x27 = unaff_x27 + 3;
        unaff_x28 = unaff_x28 + 3;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    puVar7 = (ulong *)0x1;
  }
  else {
LAB_1015c7aa4:
    puVar7 = (ulong *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  func_0x000107c60e78();
  uStack_a8 = 0x1015c7b0c;
  uVar14 = puVar7[4];
  uVar15 = puVar7[3];
  uVar16 = puVar7[5];
  uVar22 = param_2[4];
  uVar21 = param_2[3];
  uVar19 = param_2[5];
  uStack_140 = uVar21;
  uStack_138 = uVar22;
  uStack_130 = uVar19;
  uStack_120 = uVar15;
  uStack_118 = uVar14;
  uStack_110 = uVar16;
  puStack_100 = unaff_x28;
  puStack_f8 = unaff_x27;
  lStack_f0 = lVar20;
  uStack_e8 = unaff_x25;
  uStack_e0 = unaff_x24;
  uStack_d8 = unaff_x23;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  pbStack_c0 = unaff_x20;
  puStack_b8 = unaff_x19;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar19 >> 0x3c) goto LAB_1015c7bbc;
    if ((float)uVar15 == (float)uVar21) {
      FUN_1015c7d38(&uStack_120,auStack_158,0x112db6358,&UNK_10d961e20);
      FUN_1015c7d38(&uStack_140,auStack_158,0x112db6358,&UNK_10d961e20);
      uVar8 = uVar14;
      FUN_100e25fcc(uVar14,uVar16,uVar22,uVar19);
      FUN_101553ccc(uVar21,uVar22,uVar19);
      if ((uVar8 & 1) != 0) goto LAB_1015c7c88;
    }
    else {
      FUN_1015c7d38(&uStack_120,auStack_158,0x112db6358,&UNK_10d961e20);
      FUN_1015c7d38(&uStack_140,auStack_158,0x112db6358,&UNK_10d961e20);
      FUN_101553ccc(uVar21,uVar22,uVar19);
    }
LAB_1015c7d0c:
    FUN_101553ccc(uVar15,uVar14,uVar16);
  }
  else {
    if (uVar19 >> 0x3c < 0xf) {
LAB_1015c7bbc:
      FUN_1015c7d38(&uStack_120,auStack_158,0x112db6358,&UNK_10d961e20);
      FUN_1015c7d38(&uStack_140,auStack_158,0x112db6358,&UNK_10d961e20);
      FUN_101553ccc(uVar15,uVar14,uVar16);
      uVar15 = uVar21;
      uVar14 = uVar22;
      uVar16 = uVar19;
      goto LAB_1015c7d0c;
    }
    FUN_1015c7d38(&uStack_120,auStack_158,0x112db6358,&UNK_10d961e20);
    FUN_1015c7d38(&uStack_140,auStack_158,0x112db6358,&UNK_10d961e20);
LAB_1015c7c88:
    FUN_101553ccc(uVar15,uVar14,uVar16);
    uVar15 = *puVar7;
    FUN_1015c76b4(uVar15,*param_2);
    if ((uVar15 & 1) != 0) {
      uVar15 = puVar7[1];
      FUN_100e25fcc(uVar15,puVar7[2],param_2[1],param_2[2]);
      uVar6 = (uint)uVar15;
      goto LAB_1015c7d14;
    }
  }
  uVar6 = 0;
LAB_1015c7d14:
  return (ulong *)(ulong)(uVar6 & 1);
}



/* Entry: 1015c7d38; end: 1015c7d7f;  */

undefined8 FUN_1015c7d38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015c7d80; end: 1015c8117;  */

uint FUN_1015c7d80(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_250 [48];
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  uVar6 = param_1[3];
  lVar3 = param_1[2];
  uVar9 = param_1[5];
  uVar8 = param_1[4];
  uVar7 = param_1[7];
  uVar4 = param_1[6];
  uStack_1e8 = param_2[3];
  lStack_1f0 = param_2[2];
  uStack_1d8 = param_2[5];
  uStack_1e0 = param_2[4];
  uStack_1c8 = param_2[7];
  uStack_1d0 = param_2[6];
  lStack_160 = lStack_1f0;
  uStack_158 = uStack_1e8;
  uStack_150 = uStack_1e0;
  uStack_148 = uStack_1d8;
  uStack_140 = uStack_1d0;
  uStack_138 = uStack_1c8;
  lStack_130 = lVar3;
  uStack_128 = uVar6;
  uStack_120 = uVar8;
  uStack_118 = uVar9;
  uStack_110 = uVar4;
  uStack_108 = uVar7;
  if (lVar3 == 0) {
    if (lStack_1f0 != 0) goto LAB_1015c7e8c;
    FUN_1015c7d38(&lStack_130,&lStack_220,0x112db7ec8,&UNK_10d966850);
    FUN_1015c7d38(&lStack_160,&lStack_220,0x112db7ec8,&UNK_10d966850);
    FUN_101571528(0,uVar6,uVar8,uVar9,uVar4,uVar7);
LAB_1015c7f34:
    uVar7 = param_1[9];
    lVar3 = param_1[8];
    uVar13 = param_1[0xb];
    uVar11 = param_1[10];
    uVar8 = param_1[0xd];
    uVar4 = param_1[0xc];
    uVar9 = param_2[9];
    lVar5 = param_2[8];
    uVar14 = param_2[0xb];
    uVar12 = param_2[10];
    uVar10 = param_2[0xd];
    uVar6 = param_2[0xc];
    lStack_1c0 = lVar5;
    uStack_1b8 = uVar9;
    uStack_1b0 = uVar12;
    uStack_1a8 = uVar14;
    uStack_1a0 = uVar6;
    uStack_198 = uVar10;
    lStack_190 = lVar3;
    uStack_188 = uVar7;
    uStack_180 = uVar11;
    uStack_178 = uVar13;
    uStack_170 = uVar4;
    uStack_168 = uVar8;
    if (lVar3 == 0) {
      if (lVar5 != 0) goto LAB_1015c8024;
      FUN_1015c7d38(&lStack_190,&lStack_220,0x112db7ec8,&UNK_10d966850);
      FUN_1015c7d38(&lStack_1c0,&lStack_220,0x112db7ec8,&UNK_10d966850);
      FUN_101571528(0,uVar7,uVar11,uVar13,uVar4,uVar8);
    }
    else {
      if (lVar5 == 0) {
LAB_1015c8024:
        lStack_220 = lVar3;
        uStack_218 = uVar7;
        uStack_210 = uVar11;
        uStack_208 = uVar13;
        uStack_200 = uVar4;
        uStack_1f8 = uVar8;
        lStack_1f0 = lVar5;
        uStack_1e8 = uVar9;
        uStack_1e0 = uVar12;
        uStack_1d8 = uVar14;
        uStack_1d0 = uVar6;
        uStack_1c8 = uVar10;
        FUN_1015c7d38(&lStack_190,&lStack_f8,0x112db7ec8,&UNK_10d966850);
        plVar2 = &lStack_1c0;
        lVar3 = -0xe8;
        goto LAB_1015c8068;
      }
      lStack_220 = lVar5;
      uStack_218 = uVar9;
      uStack_210 = uVar12;
      uStack_208 = uVar14;
      uStack_200 = uVar6;
      uStack_1f8 = uVar10;
      lStack_f8 = lVar3;
      uStack_f0 = uVar7;
      uStack_e8 = uVar11;
      uStack_e0 = uVar13;
      uStack_d8 = uVar4;
      uStack_d0 = uVar8;
      FUN_1015c7d38(&lStack_190,auStack_250,0x112db7ec8,&UNK_10d966850);
      FUN_1015c7d38(&lStack_1c0,auStack_250,0x112db7ec8,&UNK_10d966850);
      plVar2 = &lStack_f8;
      func_0x0001015c7b0c(plVar2,&lStack_220);
      FUN_101571528(lVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
      FUN_101571528(lVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
      if (((ulong)plVar2 & 1) == 0) goto LAB_1015c807c;
    }
    uVar4 = *param_1;
    FUN_100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar4;
  }
  else {
    if (lStack_1f0 == 0) {
LAB_1015c7e8c:
      lStack_220 = lVar3;
      uStack_218 = uVar6;
      uStack_210 = uVar8;
      uStack_208 = uVar9;
      uStack_200 = uVar4;
      uStack_1f8 = uVar7;
      FUN_1015c7d38(&lStack_130,&lStack_98,0x112db7ec8,&UNK_10d966850);
      plVar2 = &lStack_160;
      lVar3 = -0x88;
LAB_1015c8068:
      FUN_1015c7d38(plVar2,&stack0xfffffffffffffff0 + lVar3,0x112db7ec8,&UNK_10d966850);
      FUN_1015c90fc(&lStack_220);
    }
    else {
      lStack_c8 = lVar3;
      uStack_c0 = uVar6;
      uStack_b8 = uVar8;
      uStack_b0 = uVar9;
      uStack_a8 = uVar4;
      uStack_a0 = uVar7;
      lStack_98 = lStack_1f0;
      uStack_90 = uStack_1e8;
      uStack_88 = uStack_1e0;
      uStack_80 = uStack_1d8;
      uStack_78 = uStack_1d0;
      uStack_70 = uStack_1c8;
      FUN_1015c7d38(&lStack_130,&lStack_220,0x112db7ec8,&UNK_10d966850);
      FUN_1015c7d38(&lStack_160,&lStack_220,0x112db7ec8,&UNK_10d966850);
      plVar2 = &lStack_c8;
      func_0x0001015c7b0c(plVar2,&lStack_98);
      FUN_101571528(lStack_1f0,uStack_1e8,uStack_1e0,uStack_1d8,uStack_1d0,uStack_1c8);
      FUN_101571528(lVar3,uVar6,uVar8,uVar9,uVar4,uVar7);
      if (((ulong)plVar2 & 1) != 0) goto LAB_1015c7f34;
    }
LAB_1015c807c:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 1015c8118; end: 1015c8217;  */

void FUN_1015c8118(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9668d0;
  func_0x000107c61520(&UNK_10d9668d0,&UNK_1103e3710);
  puRam0000000112db7ed8 = puVar1;
  return;
}



/* Entry: 1015c8218; end: 1015c823b;  */

void FUN_1015c8218(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015c823c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015c823c; end: 1015c827b;  */

void FUN_1015c823c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9668a8;
  func_0x000107c61520(&UNK_10d9668a8,&UNK_1103e3710);
  puRam0000000112db7f08 = puVar1;
  return;
}



/* Entry: 1015c827c; end: 1015c8293;  */

void FUN_1015c827c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015c8118();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157197c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015c8294; end: 1015c82d3;  */

void FUN_1015c8294(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966910;
  func_0x000107c61520(&UNK_10d966910,&UNK_1103e3710);
  puRam0000000112db7f10 = puVar1;
  return;
}



/* Entry: 1015c82d4; end: 1015c82f7;  */

void FUN_1015c82d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015c82f8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015c82f8; end: 1015c8337;  */

void FUN_1015c82f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966980;
  func_0x000107c61520(&UNK_10d966980,&UNK_1103e3798);
  puRam0000000112db7f18 = puVar1;
  return;
}



/* Entry: 1015c8338; end: 1015c834b;  */

void FUN_1015c8338(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015c8198)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015c834c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015c834c; end: 1015c838b;  */

void FUN_1015c834c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d966938;
  func_0x000107c61520(&DAT_10d966938,&UNK_1103e3798);
  puRam0000000112db7f20 = puVar1;
  return;
}



/* Entry: 1015c838c; end: 1015c838f;  */

void FUN_1015c838c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9669e8;
  func_0x000107c61520(&UNK_10d9669e8,&UNK_1103e3798);
  puRam0000000112db7f28 = puVar1;
  return;
}



/* Entry: 1015c8390; end: 1015c83cf;  */

void FUN_1015c8390(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9669e8;
  func_0x000107c61520(&UNK_10d9669e8,&UNK_1103e3798);
  puRam0000000112db7f28 = puVar1;
  return;
}



/* Entry: 1015c83d0; end: 1015c83f3;  */

void FUN_1015c83d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015c83f4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015c83f4; end: 1015c8433;  */

void FUN_1015c83f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966a58;
  func_0x000107c61520(&UNK_10d966a58,&UNK_1103e3820);
  puRam0000000112db7f30 = puVar1;
  return;
}



/* Entry: 1015c8434; end: 1015c8447;  */

void FUN_1015c8434(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015c81d8)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015c8158)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015c8448; end: 1015c8477;  */

void FUN_1015c8448(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015c8478; end: 1015c847b;  */

void FUN_1015c8478(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966ac0;
  func_0x000107c61520(&UNK_10d966ac0,&UNK_1103e3820);
  puRam0000000112db7f38 = puVar1;
  return;
}



/* Entry: 1015c847c; end: 1015c84bb;  */

void FUN_1015c847c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966ac0;
  func_0x000107c61520(&UNK_10d966ac0,&UNK_1103e3820);
  puRam0000000112db7f38 = puVar1;
  return;
}



/* Entry: 1015c84bc; end: 1015c8543;  */

/* WARNING: Possible PIC construction at 0x0001015c84d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015c84e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015c8514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015c84ec) */
/* WARNING: Removing unreachable block (ram,0x0001015c84fc) */
/* WARNING: Removing unreachable block (ram,0x0001015c84d8) */
/* WARNING: Removing unreachable block (ram,0x0001015c8504) */
/* WARNING: Removing unreachable block (ram,0x0001015c850c) */
/* WARNING: Removing unreachable block (ram,0x0001015c84e0) */
/* WARNING: Removing unreachable block (ram,0x0001015c8518) */
/* WARNING: Removing unreachable block (ram,0x0001015c8534) */
/* WARNING: Removing unreachable block (ram,0x0001015c8528) */

void FUN_1015c84bc(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1015c8544; end: 1015c867b;  */

undefined8 * FUN_1015c8544(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar2,uVar4);
  *param_1 = uVar2;
  param_1[1] = uVar4;
  lVar1 = param_2[2];
  if (lVar1 == 0) {
    lVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar2 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = lVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar2;
    uVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
  }
  else {
    param_1[2] = lVar1;
    uVar2 = param_2[3];
    uVar4 = param_2[4];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar4);
    param_1[3] = uVar2;
    param_1[4] = uVar4;
    uVar3 = param_2[7];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar2 = param_2[6];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[6] = uVar2;
      param_1[7] = uVar3;
    }
    else {
      uVar2 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar2;
      param_1[7] = param_2[7];
    }
  }
  lVar1 = param_2[8];
  if (lVar1 == 0) {
    lVar1 = param_2[8];
    uVar4 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = lVar1;
    param_1[0xb] = uVar4;
    param_1[10] = uVar2;
    uVar2 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
  }
  else {
    param_1[8] = lVar1;
    uVar2 = param_2[9];
    uVar4 = param_2[10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar4);
    param_1[9] = uVar2;
    param_1[10] = uVar4;
    uVar3 = param_2[0xd];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
      uVar2 = param_2[0xc];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[0xc] = uVar2;
      param_1[0xd] = uVar3;
    }
    else {
      uVar2 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar2;
      param_1[0xd] = param_2[0xd];
    }
  }
  return param_1;
}



/* Entry: 1015c867c; end: 1015c893b;  */

undefined8 * FUN_1015c867c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *param_2;
  uVar8 = param_2[1];
  func_0x00010006c00c(uVar3,uVar8);
  uVar7 = *param_1;
  uVar9 = param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar8;
  func_0x00010006c090(uVar7,uVar9);
  plVar4 = param_1 + 2;
  lVar5 = *plVar4;
  plVar6 = param_2 + 2;
  lVar1 = *plVar6;
  if (lVar5 == 0) {
    if (lVar1 == 0) {
      uVar3 = param_2[3];
      lVar1 = *plVar6;
      uVar7 = param_2[4];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar7;
      param_1[7] = uVar9;
      param_1[6] = uVar8;
      param_1[3] = uVar3;
      *plVar4 = lVar1;
      goto LAB_1015c87ec;
    }
    param_1[2] = lVar1;
    uVar3 = param_2[3];
    uVar7 = param_2[4];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar7);
    param_1[3] = uVar3;
    param_1[4] = uVar7;
    uVar2 = (ulong)param_2[7] >> 0x3c;
  }
  else {
    if (lVar1 == 0) {
      func_0x000101545290(plVar4);
      uVar9 = param_2[5];
      uVar8 = param_2[4];
      uVar7 = param_2[7];
      uVar3 = param_2[6];
      lVar1 = *plVar6;
      param_1[3] = param_2[3];
      *plVar4 = lVar1;
      param_1[5] = uVar9;
      param_1[4] = uVar8;
      param_1[7] = uVar7;
      param_1[6] = uVar3;
      goto LAB_1015c87ec;
    }
    param_1[2] = lVar1;
    func_0x000107c61434();
    func_0x000107c6142c(lVar5);
    uVar3 = param_2[3];
    uVar8 = param_2[4];
    func_0x00010006c00c(uVar3,uVar8);
    uVar7 = param_1[3];
    uVar9 = param_1[4];
    param_1[3] = uVar3;
    param_1[4] = uVar8;
    func_0x00010006c090(uVar7,uVar9);
    uVar2 = (ulong)param_2[7] >> 0x3c;
    if ((ulong)param_1[7] >> 0x3c < 0xf) {
      if (uVar2 < 0xf) {
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
        uVar3 = param_2[6];
        uVar8 = param_2[7];
        func_0x00010006c00c(uVar3,uVar8);
        uVar7 = param_1[6];
        uVar9 = param_1[7];
        param_1[6] = uVar3;
        param_1[7] = uVar8;
        func_0x00010006c090(uVar7,uVar9);
      }
      else {
        FUN_101599dcc(param_1 + 5);
        uVar3 = param_2[7];
        uVar7 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = uVar7;
        param_1[7] = uVar3;
      }
      goto LAB_1015c87ec;
    }
  }
  if (uVar2 < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar3 = param_2[6];
    uVar7 = param_2[7];
    func_0x00010006c00c(uVar3,uVar7);
    param_1[6] = uVar3;
    param_1[7] = uVar7;
  }
  else {
    uVar7 = param_2[6];
    uVar3 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar7;
    param_1[5] = uVar3;
  }
LAB_1015c87ec:
  plVar4 = param_1 + 8;
  lVar5 = *plVar4;
  plVar6 = param_2 + 8;
  lVar1 = *plVar6;
  if (lVar5 == 0) {
    if (lVar1 == 0) {
      uVar3 = param_2[9];
      lVar1 = *plVar6;
      uVar7 = param_2[10];
      uVar9 = param_2[0xd];
      uVar8 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar7;
      param_1[0xd] = uVar9;
      param_1[0xc] = uVar8;
      param_1[9] = uVar3;
      *plVar4 = lVar1;
      return param_1;
    }
    param_1[8] = lVar1;
    uVar3 = param_2[9];
    uVar7 = param_2[10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar7);
    param_1[9] = uVar3;
    param_1[10] = uVar7;
    uVar2 = (ulong)param_2[0xd] >> 0x3c;
  }
  else {
    if (lVar1 == 0) {
      func_0x000101545290(plVar4);
      uVar9 = param_2[0xb];
      uVar8 = param_2[10];
      uVar7 = param_2[0xd];
      uVar3 = param_2[0xc];
      lVar1 = *plVar6;
      param_1[9] = param_2[9];
      *plVar4 = lVar1;
      param_1[0xb] = uVar9;
      param_1[10] = uVar8;
      param_1[0xd] = uVar7;
      param_1[0xc] = uVar3;
      return param_1;
    }
    param_1[8] = lVar1;
    func_0x000107c61434();
    func_0x000107c6142c(lVar5);
    uVar3 = param_2[9];
    uVar8 = param_2[10];
    func_0x00010006c00c(uVar3,uVar8);
    uVar7 = param_1[9];
    uVar9 = param_1[10];
    param_1[9] = uVar3;
    param_1[10] = uVar8;
    func_0x00010006c090(uVar7,uVar9);
    uVar2 = (ulong)param_2[0xd] >> 0x3c;
    if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
      if (0xe < uVar2) {
        FUN_101599dcc(param_1 + 0xb);
        uVar3 = param_2[0xd];
        uVar7 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = uVar7;
        param_1[0xd] = uVar3;
        return param_1;
      }
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
      uVar3 = param_2[0xc];
      uVar8 = param_2[0xd];
      func_0x00010006c00c(uVar3,uVar8);
      uVar7 = param_1[0xc];
      uVar9 = param_1[0xd];
      param_1[0xc] = uVar3;
      param_1[0xd] = uVar8;
      func_0x00010006c090(uVar7,uVar9);
      return param_1;
    }
  }
  if (uVar2 < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar3 = param_2[0xc];
    uVar7 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar7);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar7;
  }
  else {
    uVar7 = param_2[0xc];
    uVar3 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar7;
    param_1[0xb] = uVar3;
  }
  return param_1;
}



/* Entry: 1015c893c; end: 1015c8ab7;  */

undefined8 * FUN_1015c893c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  func_0x00010006c090(uVar1,uVar2);
  plVar5 = param_1 + 2;
  if (*plVar5 != 0) {
    lVar3 = param_2[2];
    if (lVar3 != 0) {
      param_1[2] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[3];
      uVar2 = param_1[4];
      uVar6 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar6;
      func_0x00010006c090(uVar1,uVar2);
      if ((ulong)param_1[7] >> 0x3c < 0xf) {
        uVar4 = param_2[7];
        if (uVar4 >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
          uVar1 = param_1[6];
          param_1[6] = param_2[6];
          param_1[7] = uVar4;
          func_0x00010006c090(uVar1);
          goto LAB_1015c89ec;
        }
        FUN_101599dcc(param_1 + 5);
      }
      uVar1 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar1;
      param_1[7] = param_2[7];
      goto LAB_1015c89ec;
    }
    func_0x000101545290(plVar5);
  }
  lVar3 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  *plVar5 = lVar3;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
LAB_1015c89ec:
  plVar5 = param_1 + 8;
  if (*plVar5 != 0) {
    if (param_2[8] != 0) {
      param_1[8] = param_2[8];
      func_0x000107c6142c();
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar6 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar6;
      func_0x00010006c090(uVar1,uVar2);
      if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
        uVar4 = param_2[0xd];
        if (uVar4 >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
          uVar1 = param_1[0xc];
          param_1[0xc] = param_2[0xc];
          param_1[0xd] = uVar4;
          func_0x00010006c090(uVar1);
          return param_1;
        }
        FUN_101599dcc(param_1 + 0xb);
      }
      uVar1 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar1;
      param_1[0xd] = param_2[0xd];
      return param_1;
    }
    func_0x000101545290(plVar5);
  }
  lVar3 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  *plVar5 = lVar3;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  return param_1;
}



/* Entry: 1015c8ab8; end: 1015c8b93;  */

int FUN_1015c8ab8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015c8b94; end: 1015c8bdf;  */

/* WARNING: Possible PIC construction at 0x0001015c8bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015c8bb4) */
/* WARNING: Removing unreachable block (ram,0x0001015c8bd0) */
/* WARNING: Removing unreachable block (ram,0x0001015c8bc4) */

void FUN_1015c8b94(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1015c8be0; end: 1015c8d67;  */

undefined8 * FUN_1015c8be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar3 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar3);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  uVar2 = param_2[5];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    uVar1 = param_2[4];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[4] = uVar1;
    param_1[5] = uVar2;
  }
  else {
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    param_1[5] = param_2[5];
  }
  return param_1;
}



/* Entry: 1015c8d68; end: 1015c8dff;  */

undefined8 * FUN_1015c8d68(undefined8 *param_1,undefined8 *param_2)

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
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
      uVar2 = param_1[4];
      param_1[4] = param_2[4];
      param_1[5] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_101599dcc(param_1 + 3);
  }
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1015c8e00; end: 1015c8eaf;  */

int FUN_1015c8e00(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015c8eb0; end: 1015c8f47;  */

undefined8 * FUN_1015c8eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 1015c8f48; end: 1015c8f87;  */

undefined8 * FUN_1015c8f48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1015c8f88; end: 1015c903b;  */

int FUN_1015c8f88(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015c903c; end: 1015c90fb;  */

void FUN_1015c903c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d966a2c;
  func_0x000107c61520(&DAT_10d966a2c,&UNK_1103e3820);
  puRam0000000112db7f48 = puVar1;
  return;
}



/* Entry: 1015c90fc; end: 1015c9143;  */

undefined8 FUN_1015c90fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112db7f70;
  func_0x0001000285a8(0x112db7f70,&UNK_10d966c20);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1015c9144; end: 1015c9183;  */

long FUN_1015c9144(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015c9184; end: 1015c91c3;  */

void FUN_1015c9184(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db7fd0;
  func_0x0001000285a8(0x112db7fd0,&UNK_10d966c80);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015c91c4; end: 1015c91eb;  */

void FUN_1015c91c4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1015c91ec; end: 1015c9297;  */

void FUN_1015c91ec(void)

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



/* Entry: 1015c9298; end: 1015c92ab;  */

bool FUN_1015c9298(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1015c92ac; end: 1015c92f3;  */

void FUN_1015c92ac(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966e00,0x2a,2);
  uRam0000000113800b10 = uStack_38;
  uRam0000000113800b08 = uStack_40;
  uRam0000000113800b20 = uStack_28;
  uRam0000000113800b18 = uStack_30;
  uRam0000000113800b30 = uStack_18;
  uRam0000000113800b28 = uStack_20;
  return;
}



/* Entry: 1015c92f4; end: 1015c931f;  */

void FUN_1015c92f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015c9320();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015c9360();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015c9320; end: 1015c939f;  */

void FUN_1015c9320(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db7fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966d20;
  func_0x000107c61520(&UNK_10d966d20,&UNK_1103e3998);
  puRam0000000112db7fe0 = puVar1;
  return;
}



/* Entry: 1015c93a0; end: 1015c93a3;  */

void FUN_1015c93a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db7ff0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db7ff8;
  func_0x00010002969c(0x112db7ff8,&UNK_10d966ca8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db7ff0 = puVar2;
  return;
}



/* Entry: 1015c93a4; end: 1015c93f3;  */

void FUN_1015c93a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db7ff0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db7ff8;
  func_0x00010002969c(0x112db7ff8,&UNK_10d966ca8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db7ff0 = puVar2;
  return;
}



/* Entry: 1015c93f4; end: 1015c93f7;  */

void FUN_1015c93f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966d60;
  func_0x000107c61520(&UNK_10d966d60,&UNK_1103e3998);
  puRam0000000112db8000 = puVar1;
  return;
}



/* Entry: 1015c93f8; end: 1015c9437;  */

void FUN_1015c93f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966d60;
  func_0x000107c61520(&UNK_10d966d60,&UNK_1103e3998);
  puRam0000000112db8000 = puVar1;
  return;
}



/* Entry: 1015c9438; end: 1015c94d7;  */

/* WARNING: Possible PIC construction at 0x0001015c9484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015c9494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015c9488) */
/* WARNING: Removing unreachable block (ram,0x0001015c9498) */

void FUN_1015c9438(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7fd8 != -1) {
    func_0x000107c61568(0x112db7fd8,FUN_1015c92ac);
  }
  uVar5 = uRam0000000113800b30;
  uVar4 = uRam0000000113800b28;
  uVar3 = uRam0000000113800b20;
  uVar2 = uRam0000000113800b18;
  uVar1 = uRam0000000113800b10;
  *param_1 = uRam0000000113800b08;
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



/* Entry: 1015c94d8; end: 1015c95a7;  */

int FUN_1015c94d8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1015c95a8; end: 1015c95e7;  */

void FUN_1015c95a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db8060;
  func_0x0001000285a8(0x112db8060,&UNK_10d966e30);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}


