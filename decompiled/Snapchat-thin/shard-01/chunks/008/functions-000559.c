/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10156d688; end: 10156d71b;  */

void FUN_10156d688(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 800;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157197c();
  (*pcVar2)(param_2 + 800,&UNK_1103e3710,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d71c; end: 10156d7af;  */

void FUN_10156d71c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x390;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x390,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d7b0; end: 10156d843;  */

void FUN_10156d7b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010157187c();
  (*pcVar2)(param_2 + 0x3c8,&UNK_1103e3b28,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d844; end: 10156d8d7;  */

void FUN_10156d844(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_10154521c();
  (*pcVar2)(param_2 + 0x3d8,&UNK_1103ddcf0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d8d8; end: 10156d96b;  */

void FUN_10156d8d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x458;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010157183c();
  (*pcVar2)(param_2 + 0x458,&UNK_1103e6960,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d96c; end: 10156d9d7;  */

void FUN_10156d96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_10156d9d8(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 10156d9d8; end: 10156e34b;  */

/* WARNING: Removing unreachable block (ram,0x00010156de18) */

void FUN_10156d9d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x21;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  long lStack_228;
  undefined1 uStack_220;
  undefined1 auStack_210 [24];
  long lStack_1f8;
  undefined1 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  long lStack_168;
  undefined1 uStack_160;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  long lStack_f0;
  undefined1 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar1 & 0xff000000000000) == 0) goto LAB_10156daa8;
    }
    else {
      lVar4 = (long)(int)lVar9;
      lVar7 = lVar9 >> 0x20;
LAB_10156da58:
      if (lVar4 == lVar7) goto LAB_10156daa8;
    }
    pcVar8 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(lVar9,uVar1);
    (*pcVar8)(lVar9,uVar1,1,param_3,param_4);
    if (unaff_x21 != 0) {
      func_0x00010006c090(lVar9,uVar1);
      return;
    }
    func_0x00010006c090(lVar9,uVar1);
  }
  else if (uVar5 == 2) {
    lVar4 = *(long *)(lVar9 + 0x10);
    lVar7 = *(long *)(lVar9 + 0x18);
    goto LAB_10156da58;
  }
LAB_10156daa8:
  func_0x000107c61428(param_1 + 0x20,auStack_90,0,0);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  lVar9 = lVar7;
  func_0x000103559d2c(lVar7,uVar2);
  lVar4 = 0;
  func_0x000103559d2c(0,1);
  if (lVar9 != lVar4) {
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_a8 = lVar7;
    uStack_a0 = uVar2;
    func_0x000101568cc4();
    (*pcVar8)(&lStack_a8,2,&UNK_110664c98,lVar4,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000107c61428(param_1 + 0x30,&lStack_a8,0,0);
  uVar6 = *(ulong *)(param_1 + 0x30);
  uVar10 = *(ulong *)(param_1 + 0x38);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar10);
    (*pcVar8)(uVar6,uVar10,3,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_10156dbe8;
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c61428(param_1 + 0x40,auStack_c0,0,0);
  uVar6 = *(ulong *)(param_1 + 0x40);
  uVar10 = *(ulong *)(param_1 + 0x48);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar10);
    (*pcVar8)(uVar6,uVar10,4,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_10156dbe8;
    func_0x000107c6142c(uVar10);
  }
  lVar9 = param_1 + 0x50;
  func_0x000107c61428(lVar9,auStack_d8,0,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    uStack_e8 = *(undefined1 *)(param_1 + 0x58);
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_f0 = *(long *)(param_1 + 0x50);
    FUN_10157177c();
    (*pcVar8)(&lStack_f0,5,&UNK_1103dda88,lVar9,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10156e34c(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  FUN_10156e3ec(param_1,param_2,param_3,param_4);
  func_0x000107c61428((char *)(param_1 + 0x1c8),&lStack_f0,0,0);
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
    (**(code **)(param_4 + 0x68))(1,8,param_3,param_4);
  }
  FUN_10156e4b8(param_1,param_2,param_3,param_4);
  FUN_10156e568(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x218,auStack_108,0,0);
  if (*(char *)(param_1 + 0x218) == '\x01') {
    (**(code **)(param_4 + 0x68))(1,0xb,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 0x220,auStack_120,0,0);
  if (*(long *)(param_1 + 0x220) != 0) {
    (**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x220),0xc,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 0x228,auStack_138,0,0);
  lVar9 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar9 + 0x10) != 0) {
    pcVar8 = *(code **)(param_4 + 0x118);
    func_0x0001015717bc();
    func_0x000107c61434(lVar9);
    (*pcVar8)();
    func_0x000107c6142c(lVar9);
  }
  lVar9 = param_1 + 0x230;
  func_0x000107c61428(lVar9,auStack_150,0,0);
  if (*(long *)(param_1 + 0x230) != 0) {
    uStack_160 = *(undefined1 *)(param_1 + 0x238);
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_168 = *(long *)(param_1 + 0x230);
    func_0x0001015718fc();
    (*pcVar8)(&lStack_168,0xe,&UNK_11066ad20,lVar9,param_3,param_4);
  }
  FUN_10156e610(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x280,&lStack_168,0,0);
  uVar6 = *(ulong *)(param_1 + 0x280);
  uVar10 = *(ulong *)(param_1 + 0x288);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar10);
    (*pcVar8)(uVar6,uVar10,0x10,param_3,param_4);
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c61428(param_1 + 0x290,auStack_180,0,0);
  lVar9 = *(long *)(param_1 + 0x290);
  if (*(long *)(lVar9 + 0x10) != 0) {
    pcVar8 = *(code **)(param_4 + 0x118);
    func_0x0001015717fc();
    func_0x000107c61434(lVar9);
    (*pcVar8)();
    func_0x000107c6142c(lVar9);
  }
  lVar9 = param_1 + 0x298;
  func_0x000107c61428(lVar9,auStack_198,0,0);
  if (*(long *)(param_1 + 0x298) != 0) {
    uStack_1a8 = *(undefined1 *)(param_1 + 0x2a0);
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_1b0 = *(long *)(param_1 + 0x298);
    func_0x0001015718bc();
    (*pcVar8)(&lStack_1b0,0x12,&UNK_1103e3998,lVar9,param_3,param_4);
  }
  FUN_10156e6c0(param_1,param_2,param_3,param_4);
  FUN_10156e78c(param_1,param_2,param_3,param_4);
  FUN_10156e85c(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x3a8,&lStack_1b0,0,0);
  uVar6 = *(ulong *)(param_1 + 0x3a8);
  uVar10 = *(ulong *)(param_1 + 0x3b0);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar10);
    (*pcVar8)(uVar6,uVar10,0x16,param_3,param_4);
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c61428(param_1 + 0x3b8,auStack_1c8,0,0);
  uVar6 = *(ulong *)(param_1 + 0x3b8);
  uVar10 = *(ulong *)(param_1 + 0x3c0);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar10);
    (*pcVar8)(uVar6,uVar10,0x17,param_3,param_4);
    func_0x000107c6142c(uVar10);
  }
  lVar9 = param_1 + 0x3c8;
  func_0x000107c61428(lVar9,auStack_1e0,0,0);
  if (*(long *)(param_1 + 0x3c8) != 0) {
    uStack_1f0 = *(undefined1 *)(param_1 + 0x3d0);
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_1f8 = *(long *)(param_1 + 0x3c8);
    func_0x00010157187c();
    (*pcVar8)(&lStack_1f8,0x18,&UNK_1103e3b28,lVar9,param_3,param_4);
  }
  FUN_10156e908(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x450,&lStack_1f8,0,0);
  if (*(char *)(param_1 + 0x450) == '\x01') {
    (**(code **)(param_4 + 0x68))(1,0x1a,param_3,param_4);
  }
  lVar9 = param_1 + 0x458;
  func_0x000107c61428(lVar9,auStack_210,0,0);
  if (*(long *)(param_1 + 0x458) != 0) {
    uStack_220 = *(undefined1 *)(param_1 + 0x460);
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_228 = *(long *)(param_1 + 0x458);
    func_0x00010157183c();
    (*pcVar8)(&lStack_228,0x1b,&UNK_1103e6960,lVar9,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 0x468,&lStack_228,0,0);
  uVar6 = *(ulong *)(param_1 + 0x468);
  uVar10 = *(ulong *)(param_1 + 0x470);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar10);
    (*pcVar8)(uVar6,uVar10,0x1c,param_3,param_4);
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c61428(param_1 + 0x478,auStack_240,0,0);
  uVar6 = *(ulong *)(param_1 + 0x478);
  uVar10 = *(ulong *)(param_1 + 0x480);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar10);
    (*pcVar8)(uVar6,uVar10,0x1d,param_3,param_4);
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c61428(param_1 + 0x488,auStack_258,0,0);
  uVar6 = *(ulong *)(param_1 + 0x488);
  uVar10 = *(ulong *)(param_1 + 0x490);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return;
  }
  pcVar8 = *(code **)(param_4 + 0x70);
  func_0x000107c61434(uVar10);
  (*pcVar8)(uVar6,uVar10,0x1e,param_3,param_4);
LAB_10156dbe8:
  func_0x000107c6142c(uVar10);
  return;
}



/* Entry: 10156e34c; end: 10156e3eb;  */

void FUN_10156e34c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x60;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0x70);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101571abc();
    (*pcVar2)(&uStack_70,6,&UNK_1103e8a70,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10156e3ec; end: 10156e4b7;  */

void FUN_10156e3ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_448 [336];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [336];
  undefined1 auStack_190 [336];
  
  func_0x000107c61428(param_1 + 0x78,auStack_2f8,0,0);
  func_0x000107c610b4(auStack_2e0,param_1 + 0x78,0x150);
  func_0x000107c610b4(auStack_190,param_1 + 0x78,0x150);
  iVar1 = (int)auStack_2e0;
  FUN_10156c768();
  if (iVar1 != 1) {
    puVar2 = auStack_448;
    func_0x000107c610b4(puVar2,auStack_190,0x150);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_10153befc();
    (*pcVar3)(auStack_448,7,&UNK_1103e3f30,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10156e4b8; end: 10156e567;  */

void FUN_10156e4b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_78 = *(long *)(param_1 + 0x1d8);
  if (lStack_78 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x1e0);
    uStack_80 = *(undefined8 *)(param_1 + 0x1d0);
    uStack_60 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_68 = *(undefined8 *)(param_1 + 0x1e8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101571a7c();
    (*pcVar2)(&uStack_80,9,&UNK_1103eafe8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10156e568; end: 10156e60f;  */

void FUN_10156e568(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1f8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x200);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_60 = *(undefined8 *)(param_1 + 0x210);
    uStack_68 = *(undefined8 *)(param_1 + 0x208);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101571a3c();
    (*pcVar2)(&uStack_78,10,&UNK_1103e6f98,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10156e610; end: 10156e6bf;  */

void FUN_10156e610(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x240);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 600);
  if (lStack_88 != 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x248);
    uStack_a0 = *puVar1;
    uStack_90 = *(undefined8 *)(param_1 + 0x250);
    uStack_78 = *(undefined8 *)(param_1 + 0x268);
    uStack_80 = *(undefined8 *)(param_1 + 0x260);
    uStack_68 = *(undefined8 *)(param_1 + 0x278);
    uStack_70 = *(undefined8 *)(param_1 + 0x270);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015719fc();
    (*pcVar3)(&uStack_a0,0xf,&UNK_1103e6b28,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10156e6c0; end: 10156e78b;  */

void FUN_10156e6c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
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
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x2a8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_b0 = *(ulong *)(param_1 + 0x2c8);
  if (uStack_b0 >> 0x3c < 0xf) {
    uStack_c8 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_d0 = *puVar1;
    uStack_b8 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_c0 = *(undefined8 *)(param_1 + 0x2b8);
    uStack_a0 = *(undefined8 *)(param_1 + 0x2d8);
    uStack_a8 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_90 = *(undefined8 *)(param_1 + 0x2e8);
    uStack_98 = *(undefined8 *)(param_1 + 0x2e0);
    uStack_80 = *(undefined8 *)(param_1 + 0x2f8);
    uStack_88 = *(undefined8 *)(param_1 + 0x2f0);
    uStack_70 = *(undefined8 *)(param_1 + 0x308);
    uStack_78 = *(undefined8 *)(param_1 + 0x300);
    uStack_60 = *(undefined8 *)(param_1 + 0x318);
    uStack_68 = *(undefined8 *)(param_1 + 0x310);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015719bc();
    (*pcVar3)(&uStack_d0,0x13,&UNK_11065e910,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10156e78c; end: 10156e85b;  */

void FUN_10156e78c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
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
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 800;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_c0 = *(long *)(param_1 + 0x330);
  if (lStack_c0 != 1) {
    uStack_c8 = *(undefined8 *)(param_1 + 0x328);
    uStack_d0 = *(undefined8 *)(param_1 + 800);
    uStack_90 = *(undefined8 *)(param_1 + 0x360);
    uStack_98 = *(undefined8 *)(param_1 + 0x358);
    uStack_80 = *(undefined8 *)(param_1 + 0x370);
    uStack_88 = *(undefined8 *)(param_1 + 0x368);
    uStack_70 = *(undefined8 *)(param_1 + 0x380);
    uStack_78 = *(undefined8 *)(param_1 + 0x378);
    uStack_b0 = *(undefined8 *)(param_1 + 0x340);
    uStack_b8 = *(undefined8 *)(param_1 + 0x338);
    uStack_a0 = *(undefined8 *)(param_1 + 0x350);
    uStack_a8 = *(undefined8 *)(param_1 + 0x348);
    uStack_68 = *(undefined8 *)(param_1 + 0x388);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157197c();
    (*pcVar2)(&uStack_d0,0x14,&UNK_1103e3710,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10156e85c; end: 10156e907;  */

void FUN_10156e85c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x390;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x3a0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x398);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x390);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar2)(auStack_70,0x15,&UNK_110790980,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10156e908; end: 10156e9d7;  */

void FUN_10156e908(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
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
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x3d8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_b0 = *(long *)(param_1 + 0x3f8);
  if (lStack_b0 != 1) {
    uStack_c8 = *(undefined8 *)(param_1 + 0x3e0);
    uStack_d0 = *puVar1;
    uStack_b8 = *(undefined8 *)(param_1 + 0x3f0);
    uStack_c0 = *(undefined8 *)(param_1 + 1000);
    uStack_90 = *(undefined8 *)(param_1 + 0x418);
    uStack_98 = *(undefined8 *)(param_1 + 0x410);
    uStack_80 = *(undefined8 *)(param_1 + 0x428);
    uStack_88 = *(undefined8 *)(param_1 + 0x420);
    uStack_70 = *(undefined8 *)(param_1 + 0x438);
    uStack_78 = *(undefined8 *)(param_1 + 0x430);
    uStack_60 = *(undefined8 *)(param_1 + 0x448);
    uStack_68 = *(undefined8 *)(param_1 + 0x440);
    uStack_a0 = *(undefined8 *)(param_1 + 0x408);
    uStack_a8 = *(undefined8 *)(param_1 + 0x400);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_10154521c();
    (*pcVar3)(&uStack_d0,0x19,&UNK_1103ddcf0,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10156e9d8; end: 10156ea87;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10156e9d8(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

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
    FUN_10156ea88(param_3,param_6);
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



/* Entry: 10156ea88; end: 10157078b;  */

undefined8 FUN_10156ea88(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  undefined8 uStack_17e0;
  long lStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  long lStack_15b0;
  ulong uStack_15a8;
  ulong uStack_15a0;
  long lStack_1598;
  ulong uStack_1590;
  long lStack_1588;
  ulong uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  long lStack_1538;
  long lStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  ulong uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined1 auStack_1458 [120];
  long lStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined1 auStack_1368 [24];
  undefined1 auStack_1350 [24];
  undefined1 auStack_1338 [24];
  undefined1 auStack_1320 [24];
  undefined1 auStack_1308 [24];
  undefined1 auStack_12f0 [24];
  undefined1 auStack_12d8 [24];
  long lStack_12c0;
  ulong uStack_12b8;
  ulong uStack_12b0;
  long lStack_12a8;
  ulong uStack_12a0;
  long lStack_1298;
  ulong uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  long lStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  long lStack_1240;
  long lStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  ulong uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined1 auStack_11c0 [24];
  undefined1 auStack_11a8 [24];
  undefined1 auStack_1190 [24];
  undefined1 auStack_1178 [24];
  undefined1 auStack_1160 [24];
  undefined1 auStack_1148 [24];
  undefined1 auStack_1130 [24];
  undefined1 auStack_1118 [24];
  long lStack_1100;
  ulong uStack_10f8;
  ulong uStack_10f0;
  long lStack_10e8;
  ulong uStack_10e0;
  long lStack_10d8;
  ulong uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  long lStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  long lStack_1088;
  long lStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  ulong uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined1 auStack_1020 [24];
  undefined1 auStack_1008 [24];
  long lStack_ff0;
  ulong uStack_fe8;
  ulong uStack_fe0;
  long lStack_fd8;
  ulong uStack_fd0;
  long lStack_fc8;
  ulong uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  long lStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  long lStack_f70;
  long lStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  ulong uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined1 auStack_ef8 [24];
  undefined1 auStack_ee0 [24];
  undefined1 auStack_ec8 [24];
  undefined1 auStack_eb0 [24];
  undefined1 auStack_e98 [24];
  undefined1 auStack_e80 [24];
  undefined1 auStack_e68 [24];
  long lStack_e50;
  ulong uStack_e48;
  ulong uStack_e40;
  long lStack_e38;
  ulong uStack_e30;
  long lStack_e28;
  ulong uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined1 auStack_dd0 [24];
  undefined1 auStack_db8 [24];
  undefined1 auStack_da0 [24];
  undefined1 auStack_d88 [24];
  undefined1 auStack_d70 [24];
  undefined1 auStack_d58 [24];
  undefined1 auStack_d40 [24];
  undefined1 auStack_d28 [24];
  undefined1 auStack_d10 [24];
  undefined1 auStack_cf8 [24];
  undefined1 auStack_ce0 [24];
  undefined1 auStack_cc8 [24];
  undefined1 auStack_cb0 [24];
  undefined1 auStack_c98 [24];
  undefined1 auStack_c80 [672];
  long lStack_9e0;
  ulong uStack_9d8;
  ulong uStack_9d0;
  long lStack_9c8;
  ulong uStack_9c0;
  long lStack_9b8;
  ulong uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  long lStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  long lStack_968;
  long lStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  ulong uStack_948;
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
  undefined1 auStack_890 [336];
  undefined1 auStack_740 [24];
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [336];
  undefined1 auStack_5c0 [336];
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
  long lStack_380;
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
  long lStack_290;
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
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [352];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_398,0,0);
  uVar11 = *(ulong *)(param_1 + 0x10);
  uVar22 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(param_2 + 0x10,auStack_3b0,0,0);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  uVar21 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010006c00c(uVar11,uVar22);
  func_0x00010006c00c(uVar18,uVar21);
  uVar16 = uVar11;
  FUN_100e25fcc(uVar11,uVar22,uVar18,uVar21);
  func_0x00010006c090(uVar18,uVar21);
  func_0x00010006c090(uVar11,uVar22);
  if ((uVar16 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x20,auStack_3c8,0,0);
  lVar15 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(param_2 + 0x20,auStack_3e0,0,0);
  lVar17 = *(long *)(param_2 + 0x20);
  uVar6 = *(undefined1 *)(param_2 + 0x28);
  func_0x000103559d2c(lVar15,uVar5);
  func_0x000103559d2c(lVar17,uVar6);
  if (lVar15 != lVar17) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x30,auStack_3f8,0,0);
  func_0x000107c61428(param_2 + 0x30,&lStack_9e0,0x20,0);
  uVar11 = *(ulong *)(param_1 + 0x30);
  if ((uVar11 == *(ulong *)(param_2 + 0x30)) &&
     (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) {
    func_0x000107c614a8(&lStack_9e0);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&lStack_9e0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x40,auStack_410,0,0);
  func_0x000107c61428(param_2 + 0x40,&lStack_9e0,0x20,0);
  uVar11 = *(ulong *)(param_1 + 0x40);
  if ((uVar11 == *(ulong *)(param_2 + 0x40)) &&
     (*(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48))) {
    func_0x000107c614a8(&lStack_9e0);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&lStack_9e0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x50,auStack_428,0,0);
  lVar17 = *(long *)(param_1 + 0x50);
  func_0x000107c61428(param_2 + 0x50,auStack_440,0,0);
  lVar15 = *(long *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (lVar15 == 0) {
      if (lVar17 != 0) {
        return 0;
      }
    }
    else if (lVar15 == 1) {
      if (lVar17 != 1) {
        return 0;
      }
    }
    else if (lVar17 != 2) {
      return 0;
    }
  }
  else if (lVar17 != lVar15) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x60,auStack_458,0,0);
  func_0x000107c61428(param_2 + 0x60,auStack_470,0,0);
  uVar11 = *(ulong *)(param_1 + 0x60);
  uVar22 = *(undefined8 *)(param_1 + 0x68);
  lVar15 = *(long *)(param_1 + 0x70);
  uVar18 = *(undefined8 *)(param_2 + 0x60);
  uVar21 = *(undefined8 *)(param_2 + 0x68);
  lVar17 = *(long *)(param_2 + 0x70);
  if (lVar15 == 0) {
    if (lVar17 != 0) goto LAB_10156edac;
    FUN_10156c73c(uVar11,uVar22,0);
    FUN_10156c73c(uVar18,uVar21,0);
    FUN_101571648(uVar11,uVar22,0);
  }
  else {
    if (lVar17 == 0) {
LAB_10156edac:
      FUN_10156c73c(uVar11,uVar22,lVar15);
      FUN_10156c73c(uVar18,uVar21,lVar17);
      FUN_101571648(uVar11,uVar22,lVar15);
      FUN_101571648(uVar18,uVar21,lVar17);
      return 0;
    }
    FUN_10156c73c(uVar11,uVar22,lVar15);
    FUN_10156c73c(uVar18,uVar21,lVar17);
    uVar16 = uVar11;
    FUN_10160e698(uVar11,uVar22,lVar15,uVar18,uVar21,lVar17);
    FUN_101571648(uVar18,uVar21,lVar17);
    FUN_101571648(uVar11,uVar22,lVar15);
    if ((uVar16 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x78,auStack_728,0,0);
  func_0x000107c61428(param_2 + 0x78,auStack_740,0,0);
  func_0x000107c610b4(auStack_710,param_1 + 0x78,0x150);
  func_0x000107c610b4(&lStack_9e0,param_1 + 0x78,0x150);
  func_0x000107c610b4(auStack_5c0,param_2 + 0x78,0x150);
  func_0x000107c610b4(auStack_890,param_2 + 0x78,0x150);
  iVar8 = (int)&lStack_9e0;
  FUN_10156c768();
  if (iVar8 == 1) {
    iVar8 = (int)auStack_890;
    FUN_10156c768();
    if (iVar8 != 1) {
LAB_10156ef48:
      func_0x000107c610b4(auStack_c80,&lStack_9e0,0x2a0);
      FUN_101570e20(auStack_710,auStack_1d0,0x112db4a30,&UNK_10d95f588);
      FUN_101570e20(auStack_5c0,auStack_1d0,0x112db4a30,&UNK_10d95f588);
      func_0x000101570e68(auStack_c80,0x112db4a38,&UNK_10d95f590);
      return 0;
    }
    func_0x000107c610b4(auStack_c80,&lStack_9e0,0x150);
    FUN_101570e20(auStack_710,auStack_1d0,0x112db4a30,&UNK_10d95f588);
    FUN_101570e20(auStack_5c0,auStack_1d0,0x112db4a30,&UNK_10d95f588);
    func_0x000101570e68(auStack_c80,0x112db4a30,&UNK_10d95f588);
  }
  else {
    func_0x000107c610b4(&lStack_15b0,&lStack_9e0,0x150);
    iVar8 = (int)auStack_890;
    FUN_10156c768();
    if (iVar8 == 1) goto LAB_10156ef48;
    func_0x000107c610b4(&lStack_1700,auStack_890,0x150);
    func_0x000107c610b4(auStack_c80,auStack_890,0x150);
    func_0x000107c610b4(auStack_1d0,&lStack_15b0,0x150);
    FUN_101570e20(auStack_710,&lStack_1850,0x112db4a30,&UNK_10d95f588);
    FUN_101570e20(auStack_5c0,&lStack_1850,0x112db4a30,&UNK_10d95f588);
    puVar9 = auStack_1d0;
    FUN_1015d0888(puVar9,auStack_c80);
    func_0x000101570e68(&lStack_1700,0x112db4a30,&UNK_10d95f588);
    func_0x000101570e68(&lStack_9e0,0x112db4a30,&UNK_10d95f588);
    if (((ulong)puVar9 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428((char *)(param_1 + 0x1c8),auStack_c98,0,0);
  cVar7 = *(char *)(param_1 + 0x1c8);
  func_0x000107c61428((char *)(param_2 + 0x1c8),auStack_cb0,0,0);
  if (cVar7 != *(char *)(param_2 + 0x1c8)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x1d0,auStack_cc8,0,0);
  func_0x000107c61428(param_2 + 0x1d0,auStack_ce0,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x1d0);
  lVar15 = *(long *)(param_1 + 0x1d8);
  uVar22 = *(undefined8 *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_1 + 0x1e8);
  uVar14 = *(undefined8 *)(param_1 + 0x1f0);
  uVar21 = *(undefined8 *)(param_2 + 0x1d0);
  lVar17 = *(long *)(param_2 + 0x1d8);
  uVar2 = *(undefined8 *)(param_2 + 0x1e0);
  uVar4 = *(undefined8 *)(param_2 + 0x1e8);
  uVar20 = *(undefined8 *)(param_2 + 0x1f0);
  if (lVar15 == 0) {
    if (lVar17 != 0) goto LAB_10156f1a4;
    FUN_10156c7b8(uVar18,0,uVar22,uVar3,uVar14);
    FUN_10156c7b8(uVar21,0,uVar2,uVar4,uVar20);
    func_0x00010156c804(uVar18,0,uVar22,uVar3,uVar14);
  }
  else {
    if (lVar17 == 0) {
LAB_10156f1a4:
      FUN_10156c7b8(uVar18,lVar15,uVar22,uVar3,uVar14);
      FUN_10156c7b8(uVar21,lVar17,uVar2,uVar4,uVar20);
      func_0x00010156c804(uVar18,lVar15,uVar22,uVar3,uVar14);
      func_0x00010156c804(uVar21,lVar17,uVar2,uVar4,uVar20);
      return 0;
    }
    uStack_220 = uVar18;
    lStack_218 = lVar15;
    uStack_210 = uVar22;
    uStack_208 = uVar3;
    uStack_200 = uVar14;
    uStack_1f8 = uVar21;
    lStack_1f0 = lVar17;
    uStack_1e8 = uVar2;
    uStack_1e0 = uVar4;
    uStack_1d8 = uVar20;
    FUN_10156c7b8(uVar18,lVar15,uVar22,uVar3,uVar14);
    FUN_10156c7b8(uVar21,lVar17,uVar2,uVar4,uVar20);
    puVar10 = &uStack_220;
    FUN_10162ddb8(puVar10,&uStack_1f8);
    func_0x00010156c804(uVar21,lVar17,uVar2,uVar4,uVar20);
    func_0x00010156c804(uVar18,lVar15,uVar22,uVar3,uVar14);
    if (((ulong)puVar10 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x1f8,auStack_cf8,0,0);
  func_0x000107c61428(param_2 + 0x1f8,auStack_d10,0,0);
  uVar11 = *(ulong *)(param_1 + 0x1f8);
  lVar15 = *(long *)(param_1 + 0x200);
  uVar19 = *(ulong *)(param_1 + 0x208);
  uVar18 = *(undefined8 *)(param_1 + 0x210);
  uVar16 = *(ulong *)(param_2 + 0x1f8);
  lVar17 = *(long *)(param_2 + 0x200);
  uVar23 = *(ulong *)(param_2 + 0x208);
  uVar22 = *(undefined8 *)(param_2 + 0x210);
  if (lVar15 == 0) {
    if (lVar17 != 0) {
LAB_10156f338:
      FUN_10156c850(uVar11,lVar15,uVar19,uVar18);
      FUN_10156c850(uVar16,lVar17,uVar23,uVar22);
      func_0x00010156c888(uVar11,lVar15,uVar19,uVar18);
      uVar11 = uVar16;
      lVar15 = lVar17;
      uVar19 = uVar23;
      uVar18 = uVar22;
LAB_10156f53c:
      func_0x00010156c888(uVar11,lVar15,uVar19,uVar18);
      return 0;
    }
    FUN_10156c850(uVar11,0,uVar19,uVar18);
    FUN_10156c850(uVar16,0,uVar23,uVar22);
  }
  else {
    if (lVar17 == 0) goto LAB_10156f338;
    if (((uVar11 != uVar16) || (lVar15 != lVar17)) &&
       (uVar25 = uVar11, func_0x000107c605b8(uVar11,lVar15,uVar16,lVar17,0), (uVar25 & 1) == 0)) {
      FUN_10156c850(uVar11,lVar15,uVar19,uVar18);
      FUN_10156c850(uVar16,lVar17,uVar23,uVar22);
      func_0x00010156c888(uVar16,lVar17,uVar23,uVar22);
      goto LAB_10156f53c;
    }
    FUN_10156c850(uVar11,lVar15,uVar19,uVar18);
    FUN_10156c850(uVar16,lVar17,uVar23,uVar22);
    uVar25 = uVar19;
    FUN_100e25fcc(uVar19,uVar18,uVar23,uVar22);
    func_0x00010156c888(uVar16,lVar17,uVar23,uVar22);
    if ((uVar25 & 1) == 0) goto LAB_10156f53c;
  }
  func_0x00010156c888(uVar11,lVar15,uVar19,uVar18);
  func_0x000107c61428(param_1 + 0x218,auStack_d28,0,0);
  cVar7 = *(char *)(param_1 + 0x218);
  func_0x000107c61428(param_2 + 0x218,auStack_d40,0,0);
  if (cVar7 != *(char *)(param_2 + 0x218)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x220,auStack_d58,0,0);
  lVar15 = *(long *)(param_1 + 0x220);
  func_0x000107c61428(param_2 + 0x220,auStack_d70,0,0);
  if (lVar15 != *(long *)(param_2 + 0x220)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x228,auStack_d88,0,0);
  uVar16 = *(ulong *)(param_1 + 0x228);
  func_0x000107c61428(param_2 + 0x228,auStack_da0,0,0);
  uVar18 = *(undefined8 *)(param_2 + 0x228);
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar18);
  uVar11 = uVar16;
  FUN_101570c2c(uVar16,uVar18);
  func_0x000107c6142c(uVar16);
  func_0x000107c6142c(uVar18);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x230,auStack_db8,0,0);
  lVar17 = *(long *)(param_1 + 0x230);
  func_0x000107c61428(param_2 + 0x230,auStack_dd0,0,0);
  lVar15 = *(long *)(param_2 + 0x230);
  if (*(char *)(param_2 + 0x238) == '\x01') {
    if (lVar15 < 2) {
      if (lVar15 == 0) {
        if (lVar17 != 0) {
          return 0;
        }
      }
      else if (lVar17 != 1) {
        return 0;
      }
    }
    else if (lVar15 == 2) {
      if (lVar17 != 2) {
        return 0;
      }
    }
    else if (lVar17 != 3) {
      return 0;
    }
  }
  else if (lVar17 != lVar15) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x240,auStack_e68,0,0);
  func_0x000107c61428(param_2 + 0x240,auStack_e80,0,0);
  uStack_e48 = *(ulong *)(param_1 + 0x248);
  lVar15 = *(long *)(param_1 + 0x240);
  lVar17 = *(long *)(param_1 + 600);
  uVar11 = *(ulong *)(param_1 + 0x250);
  lVar29 = *(long *)(param_1 + 0x268);
  uVar16 = *(ulong *)(param_1 + 0x260);
  uVar18 = *(undefined8 *)(param_1 + 0x278);
  uVar19 = *(ulong *)(param_1 + 0x270);
  uStack_e08 = *(undefined8 *)(param_2 + 0x248);
  uStack_e10 = *(undefined8 *)(param_2 + 0x240);
  uStack_df8 = *(undefined8 *)(param_2 + 600);
  uStack_e00 = *(undefined8 *)(param_2 + 0x250);
  uStack_1568 = *(undefined8 *)(param_2 + 0x248);
  uStack_1570 = *(undefined8 *)(param_2 + 0x240);
  lStack_1558 = *(long *)(param_2 + 600);
  uStack_1560 = *(undefined8 *)(param_2 + 0x250);
  uStack_1548 = *(undefined8 *)(param_2 + 0x268);
  uStack_1550 = *(undefined8 *)(param_2 + 0x260);
  uStack_dd8 = *(undefined8 *)(param_2 + 0x278);
  uStack_de0 = *(undefined8 *)(param_2 + 0x270);
  uStack_de8 = *(undefined8 *)(param_2 + 0x268);
  uStack_df0 = *(undefined8 *)(param_2 + 0x260);
  lStack_1538 = *(long *)(param_2 + 0x278);
  uStack_1540 = *(undefined8 *)(param_2 + 0x270);
  lStack_e50 = lVar15;
  uStack_e40 = uVar11;
  lStack_e38 = lVar17;
  uStack_e30 = uVar16;
  lStack_e28 = lVar29;
  uStack_e20 = uVar19;
  uStack_e18 = uVar18;
  lStack_9e0 = lVar15;
  uStack_9d8 = uStack_e48;
  uStack_9d0 = uVar11;
  lStack_9c8 = lVar17;
  uStack_9c0 = uVar16;
  lStack_9b8 = lVar29;
  uStack_9b0 = uVar19;
  uStack_9a8 = uVar18;
  uStack_9a0 = uStack_1570;
  uStack_998 = uStack_1568;
  uStack_990 = uStack_1560;
  lStack_988 = lStack_1558;
  uStack_980 = uStack_1550;
  uStack_978 = uStack_1548;
  uStack_970 = uStack_1540;
  lStack_968 = lStack_1538;
  if (lVar17 == 0) {
    if (lStack_1558 != 0) {
LAB_10156f770:
      lStack_15b0 = lVar15;
      uStack_15a8 = uStack_e48;
      uStack_15a0 = uVar11;
      lStack_1598 = lVar17;
      uStack_1590 = uVar16;
      lStack_1588 = lVar29;
      uStack_1580 = uVar19;
      uStack_1578 = uVar18;
      FUN_101570e20(&lStack_e50,&lStack_1700,0x112db4a40,&UNK_10d95f598);
      FUN_101570e20(&uStack_e10,&lStack_1700,0x112db4a40,&UNK_10d95f598);
      uVar18 = 0x112db4a48;
      puVar13 = &UNK_10d95f5a0;
      goto LAB_10156f7e8;
    }
    FUN_101570e20(&lStack_e50,&lStack_15b0,0x112db4a40,&UNK_10d95f598);
    FUN_101570e20(&uStack_e10,&lStack_15b0,0x112db4a40,&UNK_10d95f598);
  }
  else {
    if (lStack_1558 == 0) goto LAB_10156f770;
    uStack_15a8 = *(ulong *)(param_2 + 0x248);
    lVar24 = *(long *)(param_2 + 0x240);
    lVar28 = *(long *)(param_2 + 600);
    uVar27 = *(ulong *)(param_2 + 0x250);
    lVar26 = *(long *)(param_2 + 0x268);
    uVar25 = *(ulong *)(param_2 + 0x260);
    uVar21 = *(undefined8 *)(param_2 + 0x278);
    uVar22 = *(undefined8 *)(param_2 + 0x270);
    uVar23 = uStack_15a8 & 0xff;
    lStack_15b0 = lVar24;
    uStack_15a0 = uVar27;
    lStack_1598 = lVar28;
    uStack_1590 = uVar25;
    lStack_1588 = lVar26;
    uStack_1580 = uVar22;
    uStack_1578 = uVar21;
    FUN_1015f73f8(lVar15,uStack_e48 & 0xff);
    FUN_1015f73f8(lVar24,uVar23);
    if (((lVar15 != lVar24) ||
        (((uVar11 != uVar27 || (lVar28 != lVar17)) &&
         (func_0x000107c605b8(uVar11,lVar17,uVar27,lVar28,0), (uVar11 & 1) == 0)))) ||
       (((uVar16 != uVar25 || (lVar29 != lVar26)) &&
        (func_0x000107c605b8(uVar16,lVar29,uVar25,lVar26,0), (uVar16 & 1) == 0)))) {
      FUN_101570e20(&lStack_e50,&lStack_1700,0x112db4a40,&UNK_10d95f598);
      FUN_101570e20(&uStack_e10,&lStack_1700,0x112db4a40,&UNK_10d95f598);
      func_0x000101570e68(&lStack_15b0,0x112db4a40,&UNK_10d95f598);
      func_0x000101570e68(&lStack_9e0,0x112db4a40,&UNK_10d95f598);
      return 0;
    }
    FUN_101570e20(&lStack_e50,&lStack_1700,0x112db4a40,&UNK_10d95f598);
    FUN_101570e20(&uStack_e10,&lStack_1700,0x112db4a40,&UNK_10d95f598);
    FUN_100e25fcc(uVar19,uVar18,uVar22,uVar21);
    func_0x000101570e68(&lStack_15b0,0x112db4a40,&UNK_10d95f598);
    if ((uVar19 & 1) == 0) {
      func_0x000101570e68(&lStack_9e0,0x112db4a40,&UNK_10d95f598);
      return 0;
    }
  }
  func_0x000101570e68(&lStack_9e0,0x112db4a40,&UNK_10d95f598);
  func_0x000107c61428(param_1 + 0x280,auStack_e98,0,0);
  func_0x000107c61428(param_2 + 0x280,&lStack_9e0,0x20,0);
  uVar11 = *(ulong *)(param_1 + 0x280);
  if ((uVar11 == *(ulong *)(param_2 + 0x280)) &&
     (*(long *)(param_1 + 0x288) == *(long *)(param_2 + 0x288))) {
    func_0x000107c614a8(&lStack_9e0);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&lStack_9e0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x290,auStack_eb0,0,0);
  uVar16 = *(ulong *)(param_1 + 0x290);
  func_0x000107c61428(param_2 + 0x290,auStack_ec8,0,0);
  uVar18 = *(undefined8 *)(param_2 + 0x290);
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar18);
  uVar11 = uVar16;
  func_0x000101570d28(uVar16,uVar18);
  func_0x000107c6142c(uVar16);
  func_0x000107c6142c(uVar18);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x298,auStack_ee0,0,0);
  lVar17 = *(long *)(param_1 + 0x298);
  func_0x000107c61428(param_2 + 0x298,auStack_ef8,0,0);
  lVar15 = *(long *)(param_2 + 0x298);
  if (*(char *)(param_2 + 0x2a0) == '\x01') {
    if (lVar15 == 0) {
      if (lVar17 != 0) {
        return 0;
      }
    }
    else if (lVar15 == 1) {
      if (lVar17 != 1) {
        return 0;
      }
    }
    else if (lVar17 != 2) {
      return 0;
    }
  }
  else if (lVar17 != lVar15) {
    return 0;
  }
  plVar12 = (long *)(param_1 + 0x2a8);
  func_0x000107c61428(plVar12,auStack_1008,0,0);
  plVar1 = (long *)(param_2 + 0x2a8);
  func_0x000107c61428(plVar1,auStack_1020,0,0);
  uStack_fa8 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_fb0 = *(undefined8 *)(param_1 + 0x2e8);
  lStack_f98 = *(long *)(param_1 + 0x300);
  uStack_fa0 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_f88 = *(undefined8 *)(param_1 + 0x310);
  uStack_f90 = *(undefined8 *)(param_1 + 0x308);
  uStack_f80 = *(undefined8 *)(param_1 + 0x318);
  uStack_fe8 = *(ulong *)(param_1 + 0x2b0);
  lStack_ff0 = *plVar12;
  lStack_fd8 = *(long *)(param_1 + 0x2c0);
  uStack_fe0 = *(ulong *)(param_1 + 0x2b8);
  lStack_fc8 = *(long *)(param_1 + 0x2d0);
  uStack_fd0 = *(ulong *)(param_1 + 0x2c8);
  uStack_fb8 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_fc0 = *(ulong *)(param_1 + 0x2d8);
  uStack_1510 = *(undefined8 *)(param_2 + 0x2d0);
  uStack_1518 = *(ulong *)(param_2 + 0x2c8);
  uStack_1500 = *(undefined8 *)(param_2 + 0x2e0);
  uStack_1508 = *(undefined8 *)(param_2 + 0x2d8);
  lStack_1530 = *(long *)(param_2 + 0x2b0);
  lStack_1538 = *plVar1;
  uStack_1520 = *(undefined8 *)(param_2 + 0x2c0);
  uStack_1528 = *(undefined8 *)(param_2 + 0x2b8);
  uStack_f00 = *(undefined8 *)(param_2 + 0x318);
  uStack_14e0 = *(undefined8 *)(param_2 + 0x300);
  uStack_14e8 = *(undefined8 *)(param_2 + 0x2f8);
  uStack_f08 = *(undefined8 *)(param_2 + 0x310);
  uStack_14d8 = *(undefined8 *)(param_2 + 0x308);
  uStack_14f0 = *(undefined8 *)(param_2 + 0x2f0);
  uStack_14f8 = *(undefined8 *)(param_2 + 0x2e8);
  lStack_f70 = lStack_1538;
  lStack_f68 = lStack_1530;
  uStack_f60 = uStack_1528;
  uStack_f58 = uStack_1520;
  uStack_f50 = uStack_1518;
  uStack_f48 = uStack_1510;
  uStack_f40 = uStack_1508;
  uStack_f38 = uStack_1500;
  uStack_f30 = uStack_14f8;
  uStack_f28 = uStack_14f0;
  uStack_f20 = uStack_14e8;
  uStack_f18 = uStack_14e0;
  uStack_f10 = uStack_14d8;
  lStack_9e0 = lStack_ff0;
  uStack_9d8 = uStack_fe8;
  uStack_9d0 = uStack_fe0;
  lStack_9c8 = lStack_fd8;
  uStack_9c0 = uStack_fd0;
  lStack_9b8 = lStack_fc8;
  uStack_9b0 = uStack_fc0;
  uStack_9a8 = uStack_fb8;
  uStack_9a0 = uStack_fb0;
  uStack_998 = uStack_fa8;
  uStack_990 = uStack_fa0;
  lStack_988 = lStack_f98;
  uStack_980 = uStack_f90;
  uStack_978 = uStack_f88;
  uStack_970 = uStack_f80;
  lStack_968 = lStack_1538;
  lStack_960 = lStack_1530;
  uStack_958 = uStack_1528;
  uStack_950 = uStack_1520;
  uStack_948 = uStack_1518;
  uStack_940 = uStack_1510;
  uStack_938 = uStack_1508;
  uStack_930 = uStack_1500;
  uStack_928 = uStack_14f8;
  uStack_920 = uStack_14f0;
  uStack_918 = uStack_14e8;
  uStack_910 = uStack_14e0;
  uStack_908 = uStack_14d8;
  uStack_900 = uStack_f08;
  uStack_8f8 = uStack_f00;
  if (uStack_fd0 >> 0x3c < 0xf) {
    if (0xe < uStack_1518 >> 0x3c) goto LAB_10156fb70;
    uStack_16b8 = *(undefined8 *)(param_2 + 0x2f0);
    uStack_16c0 = *(undefined8 *)(param_2 + 0x2e8);
    uStack_16a8 = *(undefined8 *)(param_2 + 0x300);
    uStack_16b0 = *(undefined8 *)(param_2 + 0x2f8);
    uStack_1698 = *(undefined8 *)(param_2 + 0x310);
    uStack_16a0 = *(undefined8 *)(param_2 + 0x308);
    uStack_1690 = *(undefined8 *)(param_2 + 0x318);
    uStack_16f8 = *(undefined8 *)(param_2 + 0x2b0);
    lStack_1700 = *plVar1;
    uStack_16e8 = *(undefined8 *)(param_2 + 0x2c0);
    uStack_16f0 = *(undefined8 *)(param_2 + 0x2b8);
    uStack_16d8 = *(undefined8 *)(param_2 + 0x2d0);
    uStack_16e0 = *(undefined8 *)(param_2 + 0x2c8);
    uStack_16c8 = *(undefined8 *)(param_2 + 0x2e0);
    uStack_16d0 = *(undefined8 *)(param_2 + 0x2d8);
    uStack_1808 = *(undefined8 *)(param_1 + 0x2f0);
    uStack_1810 = *(undefined8 *)(param_1 + 0x2e8);
    uStack_17f8 = *(undefined8 *)(param_1 + 0x300);
    uStack_1800 = *(undefined8 *)(param_1 + 0x2f8);
    uStack_17e8 = *(undefined8 *)(param_1 + 0x310);
    uStack_17f0 = *(undefined8 *)(param_1 + 0x308);
    uStack_17e0 = *(undefined8 *)(param_1 + 0x318);
    uStack_1848 = *(undefined8 *)(param_1 + 0x2b0);
    lStack_1850 = *plVar12;
    uStack_1838 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_1840 = *(undefined8 *)(param_1 + 0x2b8);
    uStack_1828 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_1830 = *(undefined8 *)(param_1 + 0x2c8);
    uStack_1818 = *(undefined8 *)(param_1 + 0x2e0);
    uStack_1820 = *(undefined8 *)(param_1 + 0x2d8);
    lStack_15b0 = lStack_1700;
    uStack_15a8 = uStack_16f8;
    uStack_15a0 = uStack_16f0;
    lStack_1598 = uStack_16e8;
    uStack_1590 = uStack_16e0;
    lStack_1588 = uStack_16d8;
    uStack_1580 = uStack_16d0;
    uStack_1578 = uStack_16c8;
    uStack_1570 = uStack_16c0;
    uStack_1568 = uStack_16b8;
    uStack_1560 = uStack_16b0;
    lStack_1558 = uStack_16a8;
    uStack_1550 = uStack_16a0;
    uStack_1548 = uStack_1698;
    uStack_1540 = uStack_1690;
    FUN_101570e20(&lStack_ff0,&lStack_380,0x112db4a50,&UNK_10dbcfbd0);
    FUN_101570e20(&lStack_f70,&lStack_380,0x112db4a50,&UNK_10dbcfbd0);
    plVar12 = &lStack_1850;
    func_0x00010350a560(plVar12,&lStack_1700);
    func_0x000101570e68(&lStack_15b0,0x112db4a50,&UNK_10dbcfbd0);
    func_0x000101570e68(&lStack_9e0,0x112db4a50,&UNK_10dbcfbd0);
    if (((ulong)plVar12 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uStack_1518 >> 0x3c < 0xf) {
LAB_10156fb70:
      lStack_15b0 = lStack_ff0;
      uStack_15a8 = uStack_fe8;
      uStack_15a0 = uStack_fe0;
      lStack_1598 = lStack_fd8;
      uStack_1590 = uStack_fd0;
      lStack_1588 = lStack_fc8;
      uStack_1580 = uStack_fc0;
      uStack_1578 = uStack_fb8;
      uStack_1570 = uStack_fb0;
      uStack_1568 = uStack_fa8;
      uStack_1560 = uStack_fa0;
      lStack_1558 = lStack_f98;
      uStack_1550 = uStack_f90;
      uStack_1548 = uStack_f88;
      uStack_1540 = uStack_f80;
      uStack_14d0 = uStack_f08;
      uStack_14c8 = uStack_f00;
      FUN_101570e20(&lStack_ff0,&lStack_1700,0x112db4a50,&UNK_10dbcfbd0);
      FUN_101570e20(&lStack_f70,&lStack_1700,0x112db4a50,&UNK_10dbcfbd0);
      uVar18 = 0x112db4a58;
      puVar13 = &UNK_10d95f5b0;
      goto LAB_10156f7e8;
    }
    uStack_1568 = *(undefined8 *)(param_1 + 0x2f0);
    uStack_1570 = *(undefined8 *)(param_1 + 0x2e8);
    lStack_1558 = *(undefined8 *)(param_1 + 0x300);
    uStack_1560 = *(undefined8 *)(param_1 + 0x2f8);
    uStack_1548 = *(undefined8 *)(param_1 + 0x310);
    uStack_1550 = *(undefined8 *)(param_1 + 0x308);
    uStack_1540 = *(undefined8 *)(param_1 + 0x318);
    uStack_15a8 = *(undefined8 *)(param_1 + 0x2b0);
    lStack_15b0 = *plVar12;
    lStack_1598 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_15a0 = *(undefined8 *)(param_1 + 0x2b8);
    lStack_1588 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_1590 = *(undefined8 *)(param_1 + 0x2c8);
    uStack_1578 = *(undefined8 *)(param_1 + 0x2e0);
    uStack_1580 = *(undefined8 *)(param_1 + 0x2d8);
    FUN_101570e20(&lStack_ff0,&lStack_1700,0x112db4a50,&UNK_10dbcfbd0);
    FUN_101570e20(&lStack_f70,&lStack_1700,0x112db4a50,&UNK_10dbcfbd0);
    func_0x000101570e68(&lStack_15b0,0x112db4a50,&UNK_10dbcfbd0);
  }
  func_0x000107c61428(param_1 + 800,auStack_1118,0,0);
  func_0x000107c61428(param_2 + 800,auStack_1130,0,0);
  uStack_10b8 = *(undefined8 *)(param_1 + 0x368);
  uStack_10c0 = *(undefined8 *)(param_1 + 0x360);
  lStack_10a8 = *(long *)(param_1 + 0x378);
  uStack_10b0 = *(undefined8 *)(param_1 + 0x370);
  uStack_1098 = *(undefined8 *)(param_1 + 0x388);
  uStack_10a0 = *(undefined8 *)(param_1 + 0x380);
  uStack_10f8 = *(ulong *)(param_1 + 0x328);
  lStack_1100 = *(long *)(param_1 + 800);
  lStack_10e8 = *(long *)(param_1 + 0x338);
  uStack_10f0 = *(ulong *)(param_1 + 0x330);
  lStack_10d8 = *(long *)(param_1 + 0x348);
  uStack_10e0 = *(ulong *)(param_1 + 0x340);
  uStack_10c8 = *(undefined8 *)(param_1 + 0x358);
  uStack_10d0 = *(ulong *)(param_1 + 0x350);
  lStack_1538 = *(long *)(param_2 + 0x328);
  uStack_1090 = *(undefined8 *)(param_2 + 800);
  uStack_1528 = *(undefined8 *)(param_2 + 0x338);
  lStack_1530 = *(long *)(param_2 + 0x330);
  uStack_14e8 = *(undefined8 *)(param_2 + 0x378);
  uStack_14f0 = *(undefined8 *)(param_2 + 0x370);
  uStack_14d8 = *(undefined8 *)(param_2 + 0x388);
  uStack_14e0 = *(undefined8 *)(param_2 + 0x380);
  uStack_1508 = *(undefined8 *)(param_2 + 0x358);
  uStack_1510 = *(undefined8 *)(param_2 + 0x350);
  uStack_14f8 = *(undefined8 *)(param_2 + 0x368);
  uStack_1500 = *(undefined8 *)(param_2 + 0x360);
  uStack_1518 = *(ulong *)(param_2 + 0x348);
  uStack_1520 = *(undefined8 *)(param_2 + 0x340);
  lStack_1088 = lStack_1538;
  lStack_1080 = lStack_1530;
  uStack_1078 = uStack_1528;
  uStack_1070 = uStack_1520;
  uStack_1068 = uStack_1518;
  uStack_1060 = uStack_1510;
  uStack_1058 = uStack_1508;
  uStack_1050 = uStack_1500;
  uStack_1048 = uStack_14f8;
  uStack_1040 = uStack_14f0;
  uStack_1038 = uStack_14e8;
  uStack_1030 = uStack_14e0;
  uStack_1028 = uStack_14d8;
  lStack_9e0 = lStack_1100;
  uStack_9d8 = uStack_10f8;
  uStack_9d0 = uStack_10f0;
  lStack_9c8 = lStack_10e8;
  uStack_9c0 = uStack_10e0;
  lStack_9b8 = lStack_10d8;
  uStack_9b0 = uStack_10d0;
  uStack_9a8 = uStack_10c8;
  uStack_9a0 = uStack_10c0;
  uStack_998 = uStack_10b8;
  uStack_990 = uStack_10b0;
  lStack_988 = lStack_10a8;
  uStack_980 = uStack_10a0;
  uStack_978 = uStack_1098;
  uStack_970 = uStack_1090;
  lStack_968 = lStack_1538;
  lStack_960 = lStack_1530;
  uStack_958 = uStack_1528;
  uStack_950 = uStack_1520;
  uStack_948 = uStack_1518;
  uStack_940 = uStack_1510;
  uStack_938 = uStack_1508;
  uStack_930 = uStack_1500;
  uStack_928 = uStack_14f8;
  uStack_920 = uStack_14f0;
  uStack_918 = uStack_14e8;
  uStack_910 = uStack_14e0;
  uStack_908 = uStack_14d8;
  if (uStack_10f0 == 1) {
    if (lStack_1530 != 1) {
LAB_10156fe3c:
      lStack_15b0 = lStack_1100;
      uStack_15a8 = uStack_10f8;
      uStack_15a0 = uStack_10f0;
      lStack_1598 = lStack_10e8;
      uStack_1590 = uStack_10e0;
      lStack_1588 = lStack_10d8;
      uStack_1580 = uStack_10d0;
      uStack_1578 = uStack_10c8;
      uStack_1570 = uStack_10c0;
      uStack_1568 = uStack_10b8;
      uStack_1560 = uStack_10b0;
      lStack_1558 = lStack_10a8;
      uStack_1550 = uStack_10a0;
      uStack_1548 = uStack_1098;
      uStack_1540 = uStack_1090;
      FUN_101570e20(&lStack_1100,&lStack_380,0x112db4a60,&UNK_10d95f5b8);
      FUN_101570e20(&uStack_1090,&lStack_380,0x112db4a60,&UNK_10d95f5b8);
      uVar18 = 0x112db4a68;
      puVar13 = &UNK_10d95f5c0;
      goto LAB_10156f7e8;
    }
    uStack_1568 = *(undefined8 *)(param_1 + 0x368);
    uStack_1570 = *(undefined8 *)(param_1 + 0x360);
    lStack_1558 = *(undefined8 *)(param_1 + 0x378);
    uStack_1560 = *(undefined8 *)(param_1 + 0x370);
    uStack_1548 = *(undefined8 *)(param_1 + 0x388);
    uStack_1550 = *(undefined8 *)(param_1 + 0x380);
    uStack_15a8 = *(undefined8 *)(param_1 + 0x328);
    lStack_15b0 = *(long *)(param_1 + 800);
    lStack_1598 = *(undefined8 *)(param_1 + 0x338);
    uStack_15a0 = *(undefined8 *)(param_1 + 0x330);
    lStack_1588 = *(undefined8 *)(param_1 + 0x348);
    uStack_1590 = *(undefined8 *)(param_1 + 0x340);
    uStack_1578 = *(undefined8 *)(param_1 + 0x358);
    uStack_1580 = *(undefined8 *)(param_1 + 0x350);
    FUN_101570e20(&lStack_1100,&lStack_380,0x112db4a60,&UNK_10d95f5b8);
    FUN_101570e20(&uStack_1090,&lStack_380,0x112db4a60,&UNK_10d95f5b8);
    func_0x000101570e68(&lStack_15b0,0x112db4a60,&UNK_10d95f5b8);
  }
  else {
    if (lStack_1530 == 1) goto LAB_10156fe3c;
    uStack_1568 = *(undefined8 *)(param_2 + 0x368);
    uStack_1570 = *(undefined8 *)(param_2 + 0x360);
    lStack_1558 = *(undefined8 *)(param_2 + 0x378);
    uStack_1560 = *(undefined8 *)(param_2 + 0x370);
    uStack_1548 = *(undefined8 *)(param_2 + 0x388);
    uStack_1550 = *(undefined8 *)(param_2 + 0x380);
    uStack_15a8 = *(undefined8 *)(param_2 + 0x328);
    lStack_15b0 = *(long *)(param_2 + 800);
    lStack_1598 = *(undefined8 *)(param_2 + 0x338);
    uStack_15a0 = *(undefined8 *)(param_2 + 0x330);
    lStack_1588 = *(undefined8 *)(param_2 + 0x348);
    uStack_1590 = *(undefined8 *)(param_2 + 0x340);
    uStack_1578 = *(undefined8 *)(param_2 + 0x358);
    uStack_1580 = *(undefined8 *)(param_2 + 0x350);
    uStack_2b8 = *(undefined8 *)(param_1 + 0x368);
    uStack_2c0 = *(undefined8 *)(param_1 + 0x360);
    uStack_2a8 = *(undefined8 *)(param_1 + 0x378);
    uStack_2b0 = *(undefined8 *)(param_1 + 0x370);
    uStack_298 = *(undefined8 *)(param_1 + 0x388);
    uStack_2a0 = *(undefined8 *)(param_1 + 0x380);
    uStack_2f8 = *(undefined8 *)(param_1 + 0x328);
    uStack_300 = *(undefined8 *)(param_1 + 800);
    uStack_2e8 = *(undefined8 *)(param_1 + 0x338);
    uStack_2f0 = *(undefined8 *)(param_1 + 0x330);
    uStack_2d8 = *(undefined8 *)(param_1 + 0x348);
    uStack_2e0 = *(undefined8 *)(param_1 + 0x340);
    uStack_2c8 = *(undefined8 *)(param_1 + 0x358);
    uStack_2d0 = *(undefined8 *)(param_1 + 0x350);
    lStack_290 = lStack_15b0;
    uStack_288 = uStack_15a8;
    uStack_280 = uStack_15a0;
    uStack_278 = lStack_1598;
    uStack_270 = uStack_1590;
    uStack_268 = lStack_1588;
    uStack_260 = uStack_1580;
    uStack_258 = uStack_1578;
    uStack_250 = uStack_1570;
    uStack_248 = uStack_1568;
    uStack_240 = uStack_1560;
    uStack_238 = lStack_1558;
    uStack_230 = uStack_1550;
    uStack_228 = uStack_1548;
    FUN_101570e20(&lStack_1100,&lStack_380,0x112db4a60,&UNK_10d95f5b8);
    FUN_101570e20(&uStack_1090,&lStack_380,0x112db4a60,&UNK_10d95f5b8);
    puVar10 = &uStack_300;
    FUN_1015c6778(puVar10,&lStack_290);
    func_0x000101570e68(&lStack_15b0,0x112db4a60,&UNK_10d95f5b8);
    func_0x000101570e68(&lStack_9e0,0x112db4a60,&UNK_10d95f5b8);
    if (((ulong)puVar10 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x390,auStack_1148,0,0);
  func_0x000107c61428(param_2 + 0x390,auStack_1160,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x390);
  uVar19 = *(ulong *)(param_1 + 0x398);
  uVar11 = *(ulong *)(param_1 + 0x3a0);
  uVar21 = *(undefined8 *)(param_2 + 0x390);
  uVar22 = *(undefined8 *)(param_2 + 0x398);
  uVar16 = *(ulong *)(param_2 + 0x3a0);
  if (uVar11 >> 0x3c < 0xf) {
    if (0xe < uVar16 >> 0x3c) goto LAB_101570050;
    FUN_101570e04(uVar18,uVar19,uVar11);
    FUN_101570e04(uVar21,uVar22,uVar16);
    if ((float)uVar18 != (float)uVar21) {
      FUN_101553ccc(uVar21,uVar22,uVar16);
LAB_10157023c:
      FUN_101553ccc(uVar18,uVar19,uVar11);
      return 0;
    }
    uVar23 = uVar19;
    FUN_100e25fcc(uVar19,uVar11,uVar22,uVar16);
    FUN_101553ccc(uVar21,uVar22,uVar16);
    if ((uVar23 & 1) == 0) goto LAB_10157023c;
  }
  else {
    if (uVar16 >> 0x3c < 0xf) {
LAB_101570050:
      FUN_101570e04(uVar18,uVar19,uVar11);
      FUN_101570e04(uVar21,uVar22,uVar16);
      FUN_101553ccc(uVar18,uVar19,uVar11);
      FUN_101553ccc(uVar21,uVar22,uVar16);
      return 0;
    }
    FUN_101570e04(uVar18,uVar19,uVar11);
    FUN_101570e04(uVar21,uVar22,uVar16);
  }
  FUN_101553ccc(uVar18,uVar19,uVar11);
  func_0x000107c61428(param_1 + 0x3a8,auStack_1178,0,0);
  func_0x000107c61428(param_2 + 0x3a8,&lStack_9e0,0x20,0);
  uVar11 = *(ulong *)(param_1 + 0x3a8);
  if ((uVar11 == *(ulong *)(param_2 + 0x3a8)) &&
     (*(long *)(param_1 + 0x3b0) == *(long *)(param_2 + 0x3b0))) {
    func_0x000107c614a8(&lStack_9e0);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&lStack_9e0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x3b8,auStack_1190,0,0);
  func_0x000107c61428(param_2 + 0x3b8,&lStack_9e0,0x20,0);
  uVar11 = *(ulong *)(param_1 + 0x3b8);
  if ((uVar11 == *(ulong *)(param_2 + 0x3b8)) &&
     (*(long *)(param_1 + 0x3c0) == *(long *)(param_2 + 0x3c0))) {
    func_0x000107c614a8(&lStack_9e0);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&lStack_9e0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x3c8,auStack_11a8,0,0);
  lVar17 = *(long *)(param_1 + 0x3c8);
  func_0x000107c61428(param_2 + 0x3c8,auStack_11c0,0,0);
  lVar15 = *(long *)(param_2 + 0x3c8);
  if (*(char *)(param_2 + 0x3d0) == '\x01') {
    if (lVar15 == 0) {
      if (lVar17 != 0) {
        return 0;
      }
    }
    else if (lVar15 == 1) {
      if (lVar17 != 1) {
        return 0;
      }
    }
    else if (lVar17 != 2) {
      return 0;
    }
  }
  else if (lVar17 != lVar15) {
    return 0;
  }
  plVar12 = (long *)(param_1 + 0x3d8);
  func_0x000107c61428(plVar12,auStack_12d8,0,0);
  plVar1 = (long *)(param_2 + 0x3d8);
  func_0x000107c61428(plVar1,auStack_12f0,0,0);
  uStack_1278 = *(undefined8 *)(param_1 + 0x420);
  uStack_1280 = *(undefined8 *)(param_1 + 0x418);
  lStack_1268 = *(long *)(param_1 + 0x430);
  uStack_1270 = *(undefined8 *)(param_1 + 0x428);
  uStack_1258 = *(undefined8 *)(param_1 + 0x440);
  uStack_1260 = *(undefined8 *)(param_1 + 0x438);
  uStack_1250 = *(undefined8 *)(param_1 + 0x448);
  uStack_12b8 = *(ulong *)(param_1 + 0x3e0);
  lStack_12c0 = *plVar12;
  lStack_12a8 = *(long *)(param_1 + 0x3f0);
  uStack_12b0 = *(ulong *)(param_1 + 1000);
  lStack_1298 = *(long *)(param_1 + 0x400);
  uStack_12a0 = *(ulong *)(param_1 + 0x3f8);
  uStack_1288 = *(undefined8 *)(param_1 + 0x410);
  uStack_1290 = *(ulong *)(param_1 + 0x408);
  uStack_1510 = *(undefined8 *)(param_2 + 0x400);
  uStack_1518 = *(ulong *)(param_2 + 0x3f8);
  uStack_1500 = *(undefined8 *)(param_2 + 0x410);
  uStack_1508 = *(undefined8 *)(param_2 + 0x408);
  lStack_1530 = *(long *)(param_2 + 0x3e0);
  lStack_1538 = *plVar1;
  uStack_1520 = *(undefined8 *)(param_2 + 0x3f0);
  uStack_1528 = *(undefined8 *)(param_2 + 1000);
  uStack_14e0 = *(undefined8 *)(param_2 + 0x430);
  uStack_14e8 = *(undefined8 *)(param_2 + 0x428);
  uStack_14d0 = *(undefined8 *)(param_2 + 0x440);
  uStack_14d8 = *(undefined8 *)(param_2 + 0x438);
  uStack_14f0 = *(undefined8 *)(param_2 + 0x420);
  uStack_14f8 = *(undefined8 *)(param_2 + 0x418);
  uStack_14c8 = *(undefined8 *)(param_2 + 0x448);
  lStack_1240 = lStack_1538;
  lStack_1238 = lStack_1530;
  uStack_1230 = uStack_1528;
  uStack_1228 = uStack_1520;
  uStack_1220 = uStack_1518;
  uStack_1218 = uStack_1510;
  uStack_1210 = uStack_1508;
  uStack_1208 = uStack_1500;
  uStack_1200 = uStack_14f8;
  uStack_11f8 = uStack_14f0;
  uStack_11f0 = uStack_14e8;
  uStack_11e8 = uStack_14e0;
  uStack_11e0 = uStack_14d8;
  uStack_11d8 = uStack_14d0;
  uStack_11d0 = uStack_14c8;
  lStack_9e0 = lStack_12c0;
  uStack_9d8 = uStack_12b8;
  uStack_9d0 = uStack_12b0;
  lStack_9c8 = lStack_12a8;
  uStack_9c0 = uStack_12a0;
  lStack_9b8 = lStack_1298;
  uStack_9b0 = uStack_1290;
  uStack_9a8 = uStack_1288;
  uStack_9a0 = uStack_1280;
  uStack_998 = uStack_1278;
  uStack_990 = uStack_1270;
  lStack_988 = lStack_1268;
  uStack_980 = uStack_1260;
  uStack_978 = uStack_1258;
  uStack_970 = uStack_1250;
  lStack_968 = lStack_1538;
  lStack_960 = lStack_1530;
  uStack_958 = uStack_1528;
  uStack_950 = uStack_1520;
  uStack_948 = uStack_1518;
  uStack_940 = uStack_1510;
  uStack_938 = uStack_1508;
  uStack_930 = uStack_1500;
  uStack_928 = uStack_14f8;
  uStack_920 = uStack_14f0;
  uStack_918 = uStack_14e8;
  uStack_910 = uStack_14e0;
  uStack_908 = uStack_14d8;
  uStack_900 = uStack_14d0;
  uStack_8f8 = uStack_14c8;
  if (uStack_12a0 == 1) {
    if (uStack_1518 == 1) {
      uStack_1568 = *(undefined8 *)(param_1 + 0x420);
      uStack_1570 = *(undefined8 *)(param_1 + 0x418);
      lStack_1558 = *(undefined8 *)(param_1 + 0x430);
      uStack_1560 = *(undefined8 *)(param_1 + 0x428);
      uStack_1548 = *(undefined8 *)(param_1 + 0x440);
      uStack_1550 = *(undefined8 *)(param_1 + 0x438);
      uStack_1540 = *(undefined8 *)(param_1 + 0x448);
      uStack_15a8 = *(undefined8 *)(param_1 + 0x3e0);
      lStack_15b0 = *plVar12;
      lStack_1598 = *(undefined8 *)(param_1 + 0x3f0);
      uStack_15a0 = *(undefined8 *)(param_1 + 1000);
      lStack_1588 = *(undefined8 *)(param_1 + 0x400);
      uStack_1590 = *(undefined8 *)(param_1 + 0x3f8);
      uStack_1578 = *(undefined8 *)(param_1 + 0x410);
      uStack_1580 = *(undefined8 *)(param_1 + 0x408);
      FUN_101570e20(&lStack_12c0,&lStack_380,0x112db3b88,&UNK_10d95e000);
      FUN_101570e20(&lStack_1240,&lStack_380,0x112db3b88,&UNK_10d95e000);
      func_0x000101570e68(&lStack_15b0,0x112db3b88,&UNK_10d95e000);
LAB_10157057c:
      func_0x000107c61428(param_1 + 0x450,&lStack_9e0,0,0);
      cVar7 = *(char *)(param_1 + 0x450);
      func_0x000107c61428(param_2 + 0x450,&lStack_13e0,0,0);
      if (cVar7 != *(char *)(param_2 + 0x450)) {
        return 0;
      }
      func_0x000107c61428(param_1 + 0x458,auStack_1458,0,0);
      lVar17 = *(long *)(param_1 + 0x458);
      func_0x000107c61428(param_2 + 0x458,auStack_1308,0,0);
      lVar15 = *(long *)(param_2 + 0x458);
      if (*(char *)(param_2 + 0x460) == '\x01') {
        if (lVar15 < 2) {
          if (lVar15 == 0) {
            if (lVar17 != 0) {
              return 0;
            }
          }
          else if (lVar17 != 1) {
            return 0;
          }
        }
        else if (lVar15 == 2) {
          if (lVar17 != 2) {
            return 0;
          }
        }
        else if (lVar17 != 3) {
          return 0;
        }
      }
      else if (lVar17 != lVar15) {
        return 0;
      }
      func_0x000107c61428(param_1 + 0x468,auStack_1320,0,0);
      func_0x000107c61428(param_2 + 0x468,auStack_1338,0x20,0);
      uVar11 = *(ulong *)(param_1 + 0x468);
      if ((uVar11 == *(ulong *)(param_2 + 0x468)) &&
         (*(long *)(param_1 + 0x470) == *(long *)(param_2 + 0x470))) {
        func_0x000107c614a8(auStack_1338);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(auStack_1338);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      func_0x000107c61428(param_1 + 0x478,auStack_1338,0,0);
      func_0x000107c61428(param_2 + 0x478,auStack_1350,0x20,0);
      uVar11 = *(ulong *)(param_1 + 0x478);
      if ((uVar11 == *(ulong *)(param_2 + 0x478)) &&
         (*(long *)(param_1 + 0x480) == *(long *)(param_2 + 0x480))) {
        func_0x000107c614a8(auStack_1350);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(auStack_1350);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      func_0x000107c61428(param_1 + 0x488,auStack_1350,0,0);
      func_0x000107c61428(param_2 + 0x488,auStack_1368,0x20,0);
      uVar11 = *(ulong *)(param_1 + 0x488);
      if ((uVar11 == *(ulong *)(param_2 + 0x488)) &&
         (*(long *)(param_1 + 0x490) == *(long *)(param_2 + 0x490))) {
        func_0x000107c614a8(auStack_1368);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(auStack_1368);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  else if (uStack_1518 != 1) {
    uStack_1568 = *(undefined8 *)(param_2 + 0x420);
    uStack_1570 = *(undefined8 *)(param_2 + 0x418);
    lStack_1558 = *(undefined8 *)(param_2 + 0x430);
    uStack_1560 = *(undefined8 *)(param_2 + 0x428);
    uStack_1548 = *(undefined8 *)(param_2 + 0x440);
    uStack_1550 = *(undefined8 *)(param_2 + 0x438);
    uStack_1540 = *(undefined8 *)(param_2 + 0x448);
    uStack_15a8 = *(undefined8 *)(param_2 + 0x3e0);
    lStack_15b0 = *plVar1;
    lStack_1598 = *(undefined8 *)(param_2 + 0x3f0);
    uStack_15a0 = *(undefined8 *)(param_2 + 1000);
    lStack_1588 = *(undefined8 *)(param_2 + 0x400);
    uStack_1590 = *(undefined8 *)(param_2 + 0x3f8);
    uStack_1578 = *(undefined8 *)(param_2 + 0x410);
    uStack_1580 = *(undefined8 *)(param_2 + 0x408);
    uStack_338 = *(undefined8 *)(param_1 + 0x420);
    uStack_340 = *(undefined8 *)(param_1 + 0x418);
    uStack_328 = *(undefined8 *)(param_1 + 0x430);
    uStack_330 = *(undefined8 *)(param_1 + 0x428);
    uStack_318 = *(undefined8 *)(param_1 + 0x440);
    uStack_320 = *(undefined8 *)(param_1 + 0x438);
    uStack_310 = *(undefined8 *)(param_1 + 0x448);
    uStack_378 = *(undefined8 *)(param_1 + 0x3e0);
    lStack_380 = *plVar12;
    uStack_368 = *(undefined8 *)(param_1 + 0x3f0);
    uStack_370 = *(undefined8 *)(param_1 + 1000);
    uStack_358 = *(undefined8 *)(param_1 + 0x400);
    uStack_360 = *(undefined8 *)(param_1 + 0x3f8);
    uStack_348 = *(undefined8 *)(param_1 + 0x410);
    uStack_350 = *(undefined8 *)(param_1 + 0x408);
    lStack_13e0 = lStack_15b0;
    uStack_13d8 = uStack_15a8;
    uStack_13d0 = uStack_15a0;
    uStack_13c8 = lStack_1598;
    uStack_13c0 = uStack_1590;
    uStack_13b8 = lStack_1588;
    uStack_13b0 = uStack_1580;
    uStack_13a8 = uStack_1578;
    uStack_13a0 = uStack_1570;
    uStack_1398 = uStack_1568;
    uStack_1390 = uStack_1560;
    uStack_1388 = lStack_1558;
    uStack_1380 = uStack_1550;
    uStack_1378 = uStack_1548;
    uStack_1370 = uStack_1540;
    FUN_101570e20(&lStack_12c0,auStack_1458,0x112db3b88,&UNK_10d95e000);
    FUN_101570e20(&lStack_1240,auStack_1458,0x112db3b88,&UNK_10d95e000);
    plVar12 = &lStack_380;
    FUN_101571f7c(plVar12,&lStack_15b0);
    func_0x000101570e68(&lStack_13e0,0x112db3b88,&UNK_10d95e000);
    func_0x000101570e68(&lStack_9e0,0x112db3b88,&UNK_10d95e000);
    if (((ulong)plVar12 & 1) == 0) {
      return 0;
    }
    goto LAB_10157057c;
  }
  lStack_15b0 = lStack_12c0;
  uStack_15a8 = uStack_12b8;
  uStack_15a0 = uStack_12b0;
  lStack_1598 = lStack_12a8;
  uStack_1590 = uStack_12a0;
  lStack_1588 = lStack_1298;
  uStack_1580 = uStack_1290;
  uStack_1578 = uStack_1288;
  uStack_1570 = uStack_1280;
  uStack_1568 = uStack_1278;
  uStack_1560 = uStack_1270;
  lStack_1558 = lStack_1268;
  uStack_1550 = uStack_1260;
  uStack_1548 = uStack_1258;
  uStack_1540 = uStack_1250;
  FUN_101570e20(&lStack_12c0,&lStack_380,0x112db3b88,&UNK_10d95e000);
  FUN_101570e20(&lStack_1240,&lStack_380,0x112db3b88,&UNK_10d95e000);
  uVar18 = 0x112db4a70;
  puVar13 = &UNK_10d95f5d0;
LAB_10156f7e8:
  func_0x000101570e68(&lStack_15b0,uVar18,puVar13);
  return 0;
}



/* Entry: 10157078c; end: 1015707eb;  */

void FUN_10157078c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112db4a78 != -1) {
    func_0x000107c61568(0x112db4a78,FUN_10156b8e0);
  }
  uVar1 = uRam0000000112db4a80;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1015707ec; end: 10157080f;  */

undefined1  [16] FUN_1015707ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb2e80;
  auVar1._0_8_ = 0xd000000000000021;
  return auVar1;
}



/* Entry: 101570810; end: 10157083f;  */

undefined1  [16] FUN_101570810(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101570840; end: 101570873;  */

void FUN_101570840(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 101570874; end: 101570887;  */

undefined8 FUN_101570874(void)

{
  return 0x101570884;
}



/* Entry: 101570888; end: 1015708bf;  */

void FUN_101570888(void)

{
  FUN_10156ca98();
  return;
}



/* Entry: 1015708c0; end: 1015708c3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015708c0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015708c4; end: 1015708fb;  */

uint FUN_1015708c4(long param_1,long param_2)

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
  FUN_1015716cc();
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



/* Entry: 1015708fc; end: 1015709a3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015708fc(long *param_1)

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
  ulong uVar26;
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
    FUN_10156ea88(uVar25,uVar26);
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



/* Entry: 1015709a4; end: 101570a43;  */

/* WARNING: Possible PIC construction at 0x0001015709f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101570a00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015709f4) */
/* WARNING: Removing unreachable block (ram,0x000101570a04) */

void FUN_1015709a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db4a90 != -1) {
    func_0x000107c61568(0x112db4a90,FUN_10156b898);
  }
  uVar5 = uRam00000001137ff740;
  uVar4 = uRam00000001137ff738;
  uVar3 = uRam00000001137ff730;
  uVar2 = uRam00000001137ff728;
  uVar1 = uRam00000001137ff720;
  *param_1 = uRam00000001137ff718;
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



/* Entry: 101570a44; end: 101570a7f;  */

void FUN_101570a44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db4f38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db4f38,&UNK_10d95f938);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101570a80; end: 101570b83;  */

void FUN_101570a80(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101570b84; end: 101570c2b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101570b84(undefined8 *param_1,long *param_2)

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
  ulong uVar26;
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
    FUN_10156ea88(uVar25,uVar26);
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



/* Entry: 101570c2c; end: 101570e03;  */

uint FUN_101570c2c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_190 [112];
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_d8 = puVar4[9];
        uStack_e0 = puVar4[8];
        uStack_c8 = puVar4[0xb];
        uStack_d0 = puVar4[10];
        uStack_b8 = puVar4[0xd];
        uStack_c0 = puVar4[0xc];
        uStack_118 = puVar4[1];
        uStack_120 = *puVar4;
        uStack_108 = puVar4[3];
        uStack_110 = puVar4[2];
        uStack_f8 = puVar4[5];
        uStack_100 = puVar4[4];
        uStack_e8 = puVar4[7];
        uStack_f0 = puVar4[6];
        uStack_a8 = puVar5[1];
        uStack_b0 = *puVar5;
        uStack_98 = puVar5[3];
        uStack_a0 = puVar5[2];
        uStack_88 = puVar5[5];
        uStack_90 = puVar5[4];
        uStack_78 = puVar5[7];
        uStack_80 = puVar5[6];
        uStack_58 = puVar5[0xb];
        uStack_60 = puVar5[10];
        uStack_48 = puVar5[0xd];
        uStack_50 = puVar5[0xc];
        uStack_68 = puVar5[9];
        uStack_70 = puVar5[8];
        FUN_10157170c(&uStack_120,auStack_190);
        FUN_10157170c(&uStack_b0,auStack_190);
        puVar1 = &uStack_120;
        FUN_1015c9d54(puVar1,&uStack_b0);
        uVar3 = (uint)puVar1;
        func_0x000101571748(&uStack_b0);
        func_0x000101571748(&uStack_120);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0xe;
        puVar4 = puVar4 + 0xe;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 101570e04; end: 101570e1f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101570e04(undefined8 param_1,ulong param_2,ulong param_3)

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



/* Entry: 101570e20; end: 101570ea7;  */

undefined8 FUN_101570e20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101570ea8; end: 101570ee7;  */

void FUN_101570ea8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f758;
  func_0x000107c61520(&UNK_10d95f758,&UNK_1103ddb00);
  puRam0000000112db4a98 = puVar1;
  return;
}



/* Entry: 101570ee8; end: 101570efb;  */

void FUN_101570ee8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101570efc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101570f3c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101570efc; end: 101570f7b;  */

void FUN_101570efc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f670;
  func_0x000107c61520(&UNK_10d95f670,&UNK_1103dda88);
  puRam0000000112db4aa0 = puVar1;
  return;
}



/* Entry: 101570f7c; end: 101570f7f;  */

void FUN_101570f7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db4ab0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db4ab8;
  func_0x00010002969c(0x112db4ab8,&UNK_10d95f5f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db4ab0 = puVar2;
  return;
}



/* Entry: 101570f80; end: 101570fcf;  */

void FUN_101570f80(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db4ab0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db4ab8;
  func_0x00010002969c(0x112db4ab8,&UNK_10d95f5f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db4ab0 = puVar2;
  return;
}



/* Entry: 101570fd0; end: 101570fd3;  */

void FUN_101570fd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f6b0;
  func_0x000107c61520(&UNK_10d95f6b0,&UNK_1103dda88);
  puRam0000000112db4ac0 = puVar1;
  return;
}



/* Entry: 101570fd4; end: 101571013;  */

void FUN_101570fd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f6b0;
  func_0x000107c61520(&UNK_10d95f6b0,&UNK_1103dda88);
  puRam0000000112db4ac0 = puVar1;
  return;
}



/* Entry: 101571014; end: 101571037;  */

void FUN_101571014(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101571038();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101571038; end: 101571077;  */

void FUN_101571038(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f730;
  func_0x000107c61520(&UNK_10d95f730,&UNK_1103ddb00);
  puRam0000000112db4ac8 = puVar1;
  return;
}



/* Entry: 101571078; end: 10157108b;  */

void FUN_101571078(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101570ea8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101568bc4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157108c; end: 1015710bb;  */

void FUN_10157108c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015710bc; end: 1015710bf;  */

void FUN_1015710bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f798;
  func_0x000107c61520(&UNK_10d95f798,&UNK_1103ddb00);
  puRam0000000112db4ad0 = puVar1;
  return;
}



/* Entry: 1015710c0; end: 1015710ff;  */

void FUN_1015710c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f798;
  func_0x000107c61520(&UNK_10d95f798,&UNK_1103ddb00);
  puRam0000000112db4ad0 = puVar1;
  return;
}



/* Entry: 101571100; end: 10157119f;  */

int FUN_101571100(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1015711a0; end: 1015711cb;  */

void FUN_1015711a0(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 1015711cc; end: 101571277;  */

undefined8 * FUN_1015711cc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101571278; end: 1015712bf;  */

undefined8 * FUN_101571278(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015712c0; end: 101571357;  */

int FUN_1015712c0(int *param_1,int param_2)

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



/* Entry: 101571358; end: 1015713a3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101571358(void)

{
  long in_x3;
  undefined8 in_x5;
  ulong in_x6;
  ulong in_x7;
  uint uVar1;
  
  if (in_x3 == 0) {
    return;
  }
  func_0x000107c6142c(in_x3);
  func_0x000107c6142c(in_x5);
  uVar1 = (uint)(in_x7 >> 0x3e);
  if (uVar1 == 1) {
    in_x6 = in_x7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x6);
  return;
}



/* Entry: 1015713a4; end: 10157143f;  */

/* WARNING: Possible PIC construction at 0x0001015713f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015713f8) */
/* WARNING: Removing unreachable block (ram,0x00010157145c) */
/* WARNING: Removing unreachable block (ram,0x00010157146c) */
/* WARNING: Removing unreachable block (ram,0x000101571468) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015713a4(void)

{
  ulong in_x3;
  ulong in_x4;
  uint uVar1;
  
  if (0xe < in_x4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(in_x4 >> 0x3e);
  if (uVar1 == 1) {
    in_x3 = in_x4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x3);
  return;
}



/* Entry: 101571440; end: 101571477;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101571440(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101571478; end: 101571527;  */

/* WARNING: Possible PIC construction at 0x0001015714d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101571560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015714d8) */
/* WARNING: Removing unreachable block (ram,0x000101571528) */
/* WARNING: Removing unreachable block (ram,0x000101571584) */
/* WARNING: Removing unreachable block (ram,0x00010157152c) */
/* WARNING: Removing unreachable block (ram,0x000101571564) */
/* WARNING: Removing unreachable block (ram,0x000101553ccc) */
/* WARNING: Removing unreachable block (ram,0x000101553cdc) */
/* WARNING: Removing unreachable block (ram,0x000101553cd8) */

void FUN_101571478(undefined8 param_1,ulong param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 1) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101571528; end: 101571587;  */

/* WARNING: Possible PIC construction at 0x000101571560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101571564) */
/* WARNING: Removing unreachable block (ram,0x000101553ccc) */
/* WARNING: Removing unreachable block (ram,0x000101553cdc) */
/* WARNING: Removing unreachable block (ram,0x000101553cd8) */

void FUN_101571528(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101571588; end: 101571647;  */

/* WARNING: Possible PIC construction at 0x0001015715ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015715f0) */
/* WARNING: Removing unreachable block (ram,0x000101571674) */
/* WARNING: Removing unreachable block (ram,0x0001015716c8) */
/* WARNING: Removing unreachable block (ram,0x000101571678) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101571588(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  
  if (param_5 == 1) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101571648; end: 101571673;  */

void FUN_101571648(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 101571674; end: 1015716cb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101571674(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_5);
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6);
  return;
}



/* Entry: 1015716cc; end: 10157170b;  */

void FUN_1015716cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d95f704;
  func_0x000107c61520(&DAT_10d95f704,&UNK_1103ddb00);
  puRam0000000112db4f40 = puVar1;
  return;
}



/* Entry: 10157170c; end: 10157177b;  */

undefined8 FUN_10157170c(undefined8 param_1,undefined8 param_2)

{
  FUN_1015ca690(param_2,param_1);
  return param_2;
}



/* Entry: 10157177c; end: 101571afb;  */

void FUN_10157177c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d95f5d8;
  func_0x000107c61520(&DAT_10d95f5d8,&UNK_1103dda88);
  puRam0000000112db4f48 = puVar1;
  return;
}



/* Entry: 101571afc; end: 101571b03;  */

undefined8 * FUN_101571afc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101571b04; end: 101571b97;  */

bool FUN_101571b04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar3;
  if (lVar3 == 0) {
    func_0x000101571bc4(&uStack_50,auStack_68,0x112db4fb8,&UNK_10d95fbb0);
  }
  else {
    func_0x000101571bc4(&uStack_50,auStack_68,0x112db4fb8,&UNK_10d95fbb0);
    func_0x000101571b98(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x000101571b98(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 101571b98; end: 101571c0b;  */

void FUN_101571b98(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 101571c0c; end: 101571c53;  */

void FUN_101571c0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d95fd00,0x2f,2);
  uRam00000001137ff750 = uStack_38;
  uRam00000001137ff748 = uStack_40;
  uRam00000001137ff760 = uStack_28;
  uRam00000001137ff758 = uStack_30;
  uRam00000001137ff770 = uStack_18;
  uRam00000001137ff768 = uStack_20;
  return;
}



/* Entry: 101571c54; end: 101571d5f;  */

void FUN_101571c54(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101573190();
        lVar2 = unaff_x20 + 0x40;
        puVar3 = &UNK_1103de7e0;
LAB_101571cdc:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015731d0();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_1103e2880;
          goto LAB_101571cdc;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101573210();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_11066f870;
          goto LAB_101571cdc;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 101571d60; end: 101571deb;  */

void FUN_101571d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_101571dec();
  if (unaff_x21 == 0) {
    FUN_101571e6c();
    FUN_101571eec();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 101571dec; end: 101571e6b;  */

void FUN_101571dec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x000101573210();
    (*pcVar1)(&uStack_60,1,&UNK_11066f870,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101571e6c; end: 101571eeb;  */

void FUN_101571e6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x38);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015731d0();
    (*pcVar1)(&uStack_60,2,&UNK_1103e2880,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101571eec; end: 101571f7b;  */

void FUN_101571eec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_70 = *(long *)(param_1 + 0x50);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101573190();
    (*pcVar1)(&uStack_80,3,&UNK_1103de7e0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101571f7c; end: 101571fc7;  */

uint FUN_101571f7c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_218 [56];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar6 = param_1[3];
  uVar10 = param_1[2];
  lVar7 = param_1[4];
  uVar14 = param_2[3];
  uVar9 = param_2[2];
  lVar8 = param_2[4];
  uStack_120 = uVar9;
  uStack_118 = uVar14;
  lStack_110 = lVar8;
  uStack_100 = uVar10;
  uStack_f8 = uVar6;
  lStack_f0 = lVar7;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_1015724dc;
    func_0x000101571bc4(&uStack_100,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    func_0x000101571bc4(&uStack_120,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    func_0x000101571b98(uVar10,uVar6,0);
LAB_101572550:
    uVar6 = param_1[6];
    uVar10 = param_1[5];
    lVar7 = param_1[7];
    uVar14 = param_2[6];
    uVar9 = param_2[5];
    lVar8 = param_2[7];
    uStack_160 = uVar9;
    uStack_158 = uVar14;
    lStack_150 = lVar8;
    uStack_140 = uVar10;
    uStack_138 = uVar6;
    lStack_130 = lVar7;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_101572608;
      func_0x000101571bc4(&uStack_140,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
      func_0x000101571bc4(&uStack_160,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
      func_0x000101571b98(uVar10,uVar6,0);
    }
    else {
      if (lVar8 == 0) {
LAB_101572608:
        uVar11 = 0x112db4fc0;
        puVar5 = &UNK_10d95fbb8;
        func_0x000101571bc4(&uStack_140,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
        puVar3 = &uStack_160;
        goto LAB_101572630;
      }
      func_0x000101571bc4(&uStack_140,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
      func_0x000101571bc4(&uStack_160,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
      uVar2 = uVar10;
      FUN_1015a2fdc(uVar10,uVar6,lVar7,uVar9,uVar14,lVar8);
      func_0x000101571b98(uVar9,uVar14,lVar8);
      func_0x000101571b98(uVar10,uVar6,lVar7);
      if ((uVar2 & 1) == 0) goto LAB_101572660;
    }
    uVar15 = param_1[9];
    uVar14 = param_1[8];
    uVar19 = param_1[0xb];
    lVar7 = param_1[10];
    uVar16 = param_1[0xd];
    uVar11 = param_1[0xc];
    uVar6 = param_1[0xe];
    uVar17 = param_2[9];
    uVar12 = param_2[8];
    uVar20 = param_2[0xb];
    lVar8 = param_2[10];
    uVar18 = param_2[0xd];
    uVar13 = param_2[0xc];
    uVar9 = param_2[0xe];
    uStack_1e0 = uVar12;
    uStack_1d8 = uVar17;
    lStack_1d0 = lVar8;
    uStack_1c8 = uVar20;
    uStack_1c0 = uVar13;
    uStack_1b8 = uVar18;
    uStack_1b0 = uVar9;
    uStack_1a0 = uVar14;
    uStack_198 = uVar15;
    lStack_190 = lVar7;
    uStack_188 = uVar19;
    uStack_180 = uVar11;
    uStack_178 = uVar16;
    uStack_170 = uVar6;
    if (lVar7 == 0) {
      if (lVar8 == 0) {
        func_0x000101571bc4(&uStack_1a0,auStack_a8,0x112db4fc8,&UNK_10d95fbc0);
        func_0x000101571bc4(&uStack_1e0,auStack_a8,0x112db4fc8,&UNK_10d95fbc0);
        FUN_101571674(uVar14,uVar15,0,uVar19,uVar11,uVar16,uVar6);
LAB_1015728dc:
        uVar6 = *param_1;
        FUN_100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar6;
        goto LAB_101572664;
      }
    }
    else if (lVar8 != 0) {
      auStack_a8[0] = (undefined4)uVar12;
      auStack_e0[0] = (undefined4)uVar14;
      uStack_d8 = uVar15;
      lStack_d0 = lVar7;
      uStack_c8 = uVar19;
      uStack_c0 = uVar11;
      uStack_b8 = uVar16;
      uStack_b0 = uVar6;
      uStack_a0 = uVar17;
      lStack_98 = lVar8;
      uStack_90 = uVar20;
      uStack_88 = uVar13;
      uStack_80 = uVar18;
      uStack_78 = uVar9;
      func_0x000101571bc4(&uStack_1a0,auStack_218,0x112db4fc8,&UNK_10d95fbc0);
      func_0x000101571bc4(&uStack_1e0,auStack_218,0x112db4fc8,&UNK_10d95fbc0);
      puVar4 = auStack_e0;
      FUN_101573c58(puVar4,auStack_a8);
      FUN_101571674(uVar12,uVar17,lVar8,uVar20,uVar13,uVar18,uVar9);
      FUN_101571674(uVar14,uVar15,lVar7,uVar19,uVar11,uVar16,uVar6);
      if (((ulong)puVar4 & 1) != 0) goto LAB_1015728dc;
      goto LAB_101572660;
    }
    func_0x000101571bc4(&uStack_1a0,auStack_a8,0x112db4fc8,&UNK_10d95fbc0);
    func_0x000101571bc4(&uStack_1e0,auStack_a8,0x112db4fc8,&UNK_10d95fbc0);
    FUN_101571674(uVar14,uVar15,lVar7,uVar19,uVar11,uVar16,uVar6);
    FUN_101571674(uVar12,uVar17,lVar8,uVar20,uVar13,uVar18,uVar9);
  }
  else if (lVar8 == 0) {
LAB_1015724dc:
    uVar11 = 0x112db4fb8;
    puVar5 = &UNK_10d95fbb0;
    func_0x000101571bc4(&uStack_100,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    puVar3 = &uStack_120;
LAB_101572630:
    func_0x000101571bc4(puVar3,auStack_a8,uVar11,puVar5);
    func_0x000101571b98(uVar10,uVar6,lVar7);
    func_0x000101571b98(uVar9,uVar14,lVar8);
  }
  else {
    func_0x000101571bc4(&uStack_100,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    func_0x000101571bc4(&uStack_120,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    uVar2 = uVar10;
    func_0x0001036126a0(uVar10,uVar6,lVar7,uVar9,uVar14,lVar8);
    func_0x000101571b98(uVar9,uVar14,lVar8);
    func_0x000101571b98(uVar10,uVar6,lVar7);
    if ((uVar2 & 1) != 0) goto LAB_101572550;
  }
LAB_101572660:
  uVar1 = 0;
LAB_101572664:
  return uVar1 & 1;
}



/* Entry: 101571fc8; end: 101571ff7;  */

undefined1  [16] FUN_101571fc8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101571ff8; end: 10157202b;  */

void FUN_101571ff8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10157202c; end: 10157203f;  */

undefined8 FUN_10157202c(void)

{
  return 0x10157203c;
}



/* Entry: 101572040; end: 101572053;  */

void FUN_101572040(void)

{
  FUN_101571c54();
  return;
}



/* Entry: 101572054; end: 1015720a3;  */

void FUN_101572054(void)

{
  FUN_101571d60();
  return;
}



/* Entry: 1015720a4; end: 1015720a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015720a4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015720a8; end: 1015720df;  */

uint FUN_1015720a8(long param_1,long param_2)

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
  FUN_101573150();
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



/* Entry: 1015720e0; end: 10157215f;  */

uint FUN_1015720e0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  FUN_1015723f8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 101572160; end: 1015721ff;  */

/* WARNING: Possible PIC construction at 0x0001015721ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015721bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015721b0) */
/* WARNING: Removing unreachable block (ram,0x0001015721c0) */

void FUN_101572160(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db4fd0 != -1) {
    func_0x000107c61568(0x112db4fd0,FUN_101571c0c);
  }
  uVar5 = uRam00000001137ff770;
  uVar4 = uRam00000001137ff768;
  uVar3 = uRam00000001137ff760;
  uVar2 = uRam00000001137ff758;
  uVar1 = uRam00000001137ff750;
  *param_1 = uRam00000001137ff748;
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



/* Entry: 101572200; end: 10157223b;  */

void FUN_101572200(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db4ff0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db4ff0,&UNK_10d95fcf0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10157223c; end: 101572377;  */

void FUN_10157223c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  func_0x000107c6068c(auStack_f8,0);
  func_0x000107c5fa50(auStack_f8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101572378; end: 1015723f7;  */

uint FUN_101572378(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_1015723f8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1015723f8; end: 1015728eb;  */

uint FUN_1015723f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_218 [56];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar6 = param_1[3];
  uVar10 = param_1[2];
  lVar7 = param_1[4];
  uVar14 = param_2[3];
  uVar9 = param_2[2];
  lVar8 = param_2[4];
  uStack_120 = uVar9;
  uStack_118 = uVar14;
  lStack_110 = lVar8;
  uStack_100 = uVar10;
  uStack_f8 = uVar6;
  lStack_f0 = lVar7;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_1015724dc;
    func_0x000101571bc4(&uStack_100,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    func_0x000101571bc4(&uStack_120,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    func_0x000101571b98(uVar10,uVar6,0);
LAB_101572550:
    uVar6 = param_1[6];
    uVar10 = param_1[5];
    lVar7 = param_1[7];
    uVar14 = param_2[6];
    uVar9 = param_2[5];
    lVar8 = param_2[7];
    uStack_160 = uVar9;
    uStack_158 = uVar14;
    lStack_150 = lVar8;
    uStack_140 = uVar10;
    uStack_138 = uVar6;
    lStack_130 = lVar7;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_101572608;
      func_0x000101571bc4(&uStack_140,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
      func_0x000101571bc4(&uStack_160,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
      func_0x000101571b98(uVar10,uVar6,0);
    }
    else {
      if (lVar8 == 0) {
LAB_101572608:
        uVar11 = 0x112db4fc0;
        puVar5 = &UNK_10d95fbb8;
        func_0x000101571bc4(&uStack_140,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
        puVar3 = &uStack_160;
        goto LAB_101572630;
      }
      func_0x000101571bc4(&uStack_140,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
      func_0x000101571bc4(&uStack_160,auStack_a8,0x112db4fc0,&UNK_10d95fbb8);
      uVar2 = uVar10;
      FUN_1015a2fdc(uVar10,uVar6,lVar7,uVar9,uVar14,lVar8);
      func_0x000101571b98(uVar9,uVar14,lVar8);
      func_0x000101571b98(uVar10,uVar6,lVar7);
      if ((uVar2 & 1) == 0) goto LAB_101572660;
    }
    uVar15 = param_1[9];
    uVar14 = param_1[8];
    uVar19 = param_1[0xb];
    lVar7 = param_1[10];
    uVar16 = param_1[0xd];
    uVar11 = param_1[0xc];
    uVar6 = param_1[0xe];
    uVar17 = param_2[9];
    uVar12 = param_2[8];
    uVar20 = param_2[0xb];
    lVar8 = param_2[10];
    uVar18 = param_2[0xd];
    uVar13 = param_2[0xc];
    uVar9 = param_2[0xe];
    uStack_1e0 = uVar12;
    uStack_1d8 = uVar17;
    lStack_1d0 = lVar8;
    uStack_1c8 = uVar20;
    uStack_1c0 = uVar13;
    uStack_1b8 = uVar18;
    uStack_1b0 = uVar9;
    uStack_1a0 = uVar14;
    uStack_198 = uVar15;
    lStack_190 = lVar7;
    uStack_188 = uVar19;
    uStack_180 = uVar11;
    uStack_178 = uVar16;
    uStack_170 = uVar6;
    if (lVar7 == 0) {
      if (lVar8 == 0) {
        func_0x000101571bc4(&uStack_1a0,auStack_a8,0x112db4fc8,&UNK_10d95fbc0);
        func_0x000101571bc4(&uStack_1e0,auStack_a8,0x112db4fc8,&UNK_10d95fbc0);
        FUN_101571674(uVar14,uVar15,0,uVar19,uVar11,uVar16,uVar6);
LAB_1015728dc:
        uVar6 = *param_1;
        FUN_100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar6;
        goto LAB_101572664;
      }
    }
    else if (lVar8 != 0) {
      auStack_a8[0] = (undefined4)uVar12;
      auStack_e0[0] = (undefined4)uVar14;
      uStack_d8 = uVar15;
      lStack_d0 = lVar7;
      uStack_c8 = uVar19;
      uStack_c0 = uVar11;
      uStack_b8 = uVar16;
      uStack_b0 = uVar6;
      uStack_a0 = uVar17;
      lStack_98 = lVar8;
      uStack_90 = uVar20;
      uStack_88 = uVar13;
      uStack_80 = uVar18;
      uStack_78 = uVar9;
      func_0x000101571bc4(&uStack_1a0,auStack_218,0x112db4fc8,&UNK_10d95fbc0);
      func_0x000101571bc4(&uStack_1e0,auStack_218,0x112db4fc8,&UNK_10d95fbc0);
      puVar4 = auStack_e0;
      FUN_101573c58(puVar4,auStack_a8);
      FUN_101571674(uVar12,uVar17,lVar8,uVar20,uVar13,uVar18,uVar9);
      FUN_101571674(uVar14,uVar15,lVar7,uVar19,uVar11,uVar16,uVar6);
      if (((ulong)puVar4 & 1) != 0) goto LAB_1015728dc;
      goto LAB_101572660;
    }
    func_0x000101571bc4(&uStack_1a0,auStack_a8,0x112db4fc8,&UNK_10d95fbc0);
    func_0x000101571bc4(&uStack_1e0,auStack_a8,0x112db4fc8,&UNK_10d95fbc0);
    FUN_101571674(uVar14,uVar15,lVar7,uVar19,uVar11,uVar16,uVar6);
    FUN_101571674(uVar12,uVar17,lVar8,uVar20,uVar13,uVar18,uVar9);
  }
  else if (lVar8 == 0) {
LAB_1015724dc:
    uVar11 = 0x112db4fb8;
    puVar5 = &UNK_10d95fbb0;
    func_0x000101571bc4(&uStack_100,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    puVar3 = &uStack_120;
LAB_101572630:
    func_0x000101571bc4(puVar3,auStack_a8,uVar11,puVar5);
    func_0x000101571b98(uVar10,uVar6,lVar7);
    func_0x000101571b98(uVar9,uVar14,lVar8);
  }
  else {
    func_0x000101571bc4(&uStack_100,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    func_0x000101571bc4(&uStack_120,auStack_a8,0x112db4fb8,&UNK_10d95fbb0);
    uVar2 = uVar10;
    func_0x0001036126a0(uVar10,uVar6,lVar7,uVar9,uVar14,lVar8);
    func_0x000101571b98(uVar9,uVar14,lVar8);
    func_0x000101571b98(uVar10,uVar6,lVar7);
    if ((uVar2 & 1) != 0) goto LAB_101572550;
  }
LAB_101572660:
  uVar1 = 0;
LAB_101572664:
  return uVar1 & 1;
}



/* Entry: 1015728ec; end: 10157292b;  */

void FUN_1015728ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95fc38;
  func_0x000107c61520(&UNK_10d95fc38,&UNK_1103ddcf0);
  puRam0000000112db4fd8 = puVar1;
  return;
}



/* Entry: 10157292c; end: 10157294f;  */

void FUN_10157292c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101572950();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101572950; end: 10157298f;  */

void FUN_101572950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95fc10;
  func_0x000107c61520(&UNK_10d95fc10,&UNK_1103ddcf0);
  puRam0000000112db4fe0 = puVar1;
  return;
}



/* Entry: 101572990; end: 1015729bb;  */

void FUN_101572990(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015728ec();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10154521c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015729bc; end: 1015729bf;  */

void FUN_1015729bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95fc78;
  func_0x000107c61520(&UNK_10d95fc78,&UNK_1103ddcf0);
  puRam0000000112db4fe8 = puVar1;
  return;
}



/* Entry: 1015729c0; end: 1015729ff;  */

void FUN_1015729c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95fc78;
  func_0x000107c61520(&UNK_10d95fc78,&UNK_1103ddcf0);
  puRam0000000112db4fe8 = puVar1;
  return;
}



/* Entry: 101572a00; end: 101572aaf;  */

long FUN_101572a00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101572ab0; end: 101572e7b;  */

undefined8 * FUN_101572ab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar2 = param_2[4];
  if (lVar2 == 0) {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
    lVar2 = param_2[7];
  }
  else {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = lVar2;
    func_0x000107c6157c(lVar2);
    lVar2 = param_2[7];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
    lVar2 = param_2[10];
  }
  else {
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[5] = uVar3;
    param_1[6] = uVar4;
    param_1[7] = lVar2;
    func_0x000107c6157c(lVar2);
    lVar2 = param_2[10];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    uVar3 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xe] = param_2[0xe];
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    param_1[9] = param_2[9];
    param_1[10] = lVar2;
    uVar3 = param_2[0xb];
    uVar5 = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar5;
    uVar4 = param_2[0xd];
    uVar1 = param_2[0xe];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar4,uVar1);
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar1;
  }
  return param_1;
}



/* Entry: 101572e7c; end: 101572f17;  */

undefined8 FUN_101572e7c(undefined8 param_1)

{
  (*(code *)&DAT_103628c4c)();
  return param_1;
}



/* Entry: 101572f18; end: 101573073;  */

undefined8 * FUN_101572f18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[4] == 0) {
LAB_101572f88:
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[4] = param_2[4];
    lVar3 = param_1[7];
  }
  else {
    lVar3 = param_2[4];
    if (lVar3 == 0) {
      func_0x000101572e7c(param_1 + 2);
      goto LAB_101572f88;
    }
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    func_0x00010006c090(uVar1,uVar2);
    uVar1 = param_1[4];
    param_1[4] = lVar3;
    func_0x000107c61574(uVar1);
    lVar3 = param_1[7];
  }
  if (lVar3 != 0) {
    lVar3 = param_2[7];
    if (lVar3 != 0) {
      uVar1 = param_1[5];
      uVar2 = param_1[6];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[7];
      param_1[7] = lVar3;
      func_0x000107c61574(uVar1);
      lVar3 = param_1[10];
      goto joined_r0x000101572fc8;
    }
    func_0x000101572eb0(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  lVar3 = param_1[10];
joined_r0x000101572fc8:
  if (lVar3 != 0) {
    lVar3 = param_2[10];
    if (lVar3 != 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      param_1[9] = param_2[9];
      param_1[10] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      func_0x000107c6142c(uVar1);
      uVar1 = param_1[0xc];
      param_1[0xc] = param_2[0xc];
      func_0x000107c6142c(uVar1);
      uVar1 = param_1[0xd];
      uVar2 = param_1[0xe];
      uVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x000101572ee4(param_1 + 8);
  }
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar2;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  return param_1;
}



/* Entry: 101573074; end: 10157314f;  */

int FUN_101573074(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1e] != '\0')) {
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



/* Entry: 101573150; end: 10157324f;  */

void FUN_101573150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d95fbe4;
  func_0x000107c61520(&DAT_10d95fbe4,&UNK_1103ddcf0);
  puRam0000000112db4ff8 = puVar1;
  return;
}



/* Entry: 101573250; end: 101573267;  */

void FUN_101573250(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x1015793c8)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101573268; end: 1015732a7;  */

void FUN_101573268(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db5150;
  func_0x0001000285a8(0x112db5150,&UNK_10d95fd50);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}


