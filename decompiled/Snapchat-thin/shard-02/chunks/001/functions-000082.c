/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101900798; end: 10190085f;  */

void FUN_101900798(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_388 [280];
  undefined1 auStack_270 [280];
  undefined1 auStack_158 [280];
  
  func_0x000107c610b4(auStack_270,param_1,0x118);
  iVar1 = (int)auStack_270;
  func_0x0001018ff71c();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_158,auStack_270,0x118);
    iVar1 = (int)auStack_158;
    func_0x0001018ff734();
    if (iVar1 == 1) {
      puVar2 = auStack_158;
      func_0x000100cbe840(puVar2);
      puVar3 = auStack_388;
      func_0x000107c610b4(puVar3,puVar2,0x118);
      pcVar4 = *(code **)(param_4 + 0x88);
      FUN_10190c1d0();
      (*pcVar4)(auStack_388,2,&UNK_1104111a0,puVar3,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101900860);
  (*pcVar4)();
}



/* Entry: 101900860; end: 101900937;  */

void FUN_101900860(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_270 [280];
  undefined8 auStack_158 [35];
  
  func_0x000107c610b4(auStack_270,param_1,0x118);
  iVar1 = (int)auStack_270;
  func_0x0001018ff71c();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_158,auStack_270,0x118);
    iVar1 = (int)auStack_158;
    func_0x0001018ff734();
    if (iVar1 == 2) {
      puVar2 = auStack_158;
      func_0x000100cbe840();
      uStack_2b8 = puVar2[1];
      uStack_2c0 = *puVar2;
      uStack_2a8 = puVar2[3];
      uStack_2b0 = puVar2[2];
      uStack_298 = puVar2[5];
      uStack_2a0 = puVar2[4];
      uStack_288 = puVar2[7];
      uStack_290 = puVar2[6];
      uStack_280 = puVar2[8];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_10190c8e4();
      (*pcVar3)(&uStack_2c0,3,&UNK_110411690,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101900938);
  (*pcVar3)();
}



/* Entry: 101900938; end: 10190097b;  */

void FUN_101900938(long param_1)

{
  undefined1 auStack_138 [280];
  
  FUN_1018ff6e8(auStack_138);
  func_0x000107c610b4(param_1,auStack_138,0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0xc000000000000000;
  return;
}



/* Entry: 10190097c; end: 10190099f;  */

undefined1  [16] FUN_10190097c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efc0530;
  auVar1._0_8_ = 0xd00000000000002d;
  return auVar1;
}



/* Entry: 1019009a0; end: 1019009cf;  */

undefined1  [16] FUN_1019009a0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x118);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120));
  return auVar1;
}



/* Entry: 1019009d0; end: 101900a03;  */

void FUN_1019009d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120));
  *(undefined8 *)(unaff_x20 + 0x118) = param_1;
  *(undefined8 *)(unaff_x20 + 0x120) = param_2;
  return;
}



/* Entry: 101900a04; end: 101900a17;  */

undefined1  [16] FUN_101900a04(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x118;
  auVar1._0_8_ = 0x101900a14;
  return auVar1;
}



/* Entry: 101900a18; end: 101900a2b;  */

void FUN_101900a18(void)

{
  FUN_1018ffcf8();
  return;
}



/* Entry: 101900a2c; end: 101900a93;  */

void FUN_101900a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_168 [296];
  
  func_0x000107c610b4(auStack_168);
  FUN_1019005e8(param_1,param_2,param_3);
  return;
}



/* Entry: 101900a94; end: 101900a97;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101900a94(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101900a98; end: 101900acf;  */

uint FUN_101900a98(long param_1,long param_2)

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
  func_0x000101911eac();
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



/* Entry: 101900ad0; end: 101900b1f;  */

uint FUN_101900ad0(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_270 [296];
  undefined1 auStack_148 [296];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_148,param_1,0x128);
  func_0x000107c610b4(auStack_270);
  FUN_10190accc(auStack_270,auStack_148);
  return uVar1 & 1;
}



/* Entry: 101900b20; end: 101900bbf;  */

/* WARNING: Possible PIC construction at 0x000101900b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101900b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101900b70) */
/* WARNING: Removing unreachable block (ram,0x000101900b80) */

void FUN_101900b20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2418 != -1) {
    func_0x000107c61568(0x112dd2418,FUN_1018ffcb0);
  }
  uVar5 = uRam00000001138034b0;
  uVar4 = uRam00000001138034a8;
  uVar3 = uRam00000001138034a0;
  uVar2 = uRam0000000113803498;
  uVar1 = uRam0000000113803490;
  *param_1 = uRam0000000113803488;
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



/* Entry: 101900bc0; end: 101900bfb;  */

void FUN_101900bc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd2898;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd2898,&UNK_10d9948c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101900bfc; end: 101900d07;  */

void FUN_101900bfc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1a0 [72];
  undefined1 auStack_158 [296];
  
  func_0x000107c610b4(auStack_158);
  func_0x000107c6068c(auStack_1a0,0);
  func_0x000107c5fa50(auStack_1a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101900d08; end: 101900d5b;  */

uint FUN_101900d08(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_270 [296];
  undefined1 auStack_148 [296];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_270,param_1,0x128);
  func_0x000107c610b4(auStack_148,param_2,0x128);
  FUN_10190accc(auStack_270,auStack_148);
  return uVar1 & 1;
}



/* Entry: 101900d5c; end: 101900d7f;  */

void FUN_101900d5c(void)

{
  func_0x000107c5fb78(0x796669706f68532e,0xe800000000000000);
  uRam00000001138034b8 = 0xd00000000000002d;
  uRam00000001138034c0 = 0x800000010efc0530;
  return;
}



/* Entry: 101900d80; end: 101900dc7;  */

void FUN_101900d80(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d994d90,0x3c,2);
  uRam00000001138034d0 = uStack_38;
  uRam00000001138034c8 = uStack_40;
  uRam00000001138034e0 = uStack_28;
  uRam00000001138034d8 = uStack_30;
  uRam00000001138034f0 = uStack_18;
  uRam00000001138034e8 = uStack_20;
  return;
}



/* Entry: 101900dc8; end: 101900e8f;  */

/* WARNING: Removing unreachable block (ram,0x000101900e60) */

void FUN_101900dc8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 3) {
      FUN_1019011b8();
    }
    else if (lVar1 == 2) {
      FUN_101900ffc();
    }
    else if (lVar1 == 1) {
      FUN_101900e90();
    }
  }
  return;
}



/* Entry: 101900e90; end: 101900ffb;  */

/* WARNING: Removing unreachable block (ram,0x000101900fc4) */

void FUN_101900e90(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x21;
  code *pcVar9;
  long lVar10;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar8 = param_1[3];
  plVar7 = param_1;
  if ((uVar8 & 0x3000000000000000) == 0) {
    lVar1 = param_1[1];
    lVar4 = param_1[2];
    lVar10 = *param_1;
    FUN_1018ff7a4(lVar10,lVar1,lVar4);
    plVar7 = (long *)0x0;
    FUN_101912004(0,0,0);
    lStack_78 = lVar10;
    lStack_70 = lVar1;
    lStack_68 = lVar4;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_10190be20();
  (*pcVar9)(&lStack_78,&UNK_110410e78,plVar7,param_3,param_4);
  lVar10 = lStack_68;
  lVar4 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar8 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar4,lVar10);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar4,lVar10);
      (*pcVar9)(param_3,param_4);
    }
    FUN_101912004(lStack_78,lStack_70,lStack_68);
    lVar2 = *param_1;
    lVar5 = param_1[1];
    lVar3 = param_1[2];
    lVar6 = param_1[3];
    *param_1 = lVar1;
    param_1[1] = lVar4;
    param_1[2] = lVar10;
    param_1[3] = 0;
    FUN_1018ff7f8(lVar2,lVar5,lVar3,lVar6);
  }
  else {
    FUN_101912004(lStack_78,lStack_70,lStack_68);
  }
  return;
}



/* Entry: 101900ffc; end: 1019011b7;  */

/* WARNING: Removing unreachable block (ram,0x000101901144) */

void FUN_101900ffc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0xf000000000000000;
  uVar8 = param_1[3];
  uVar11 = uVar8 & 0x3000000000000000;
  puVar7 = param_1;
  if (uVar11 == 0x1000000000000000) {
    uVar1 = param_1[1];
    uVar4 = param_1[2];
    uVar10 = *param_1;
    FUN_1018ff7a4(uVar10,uVar1,uVar4);
    puVar7 = (undefined8 *)0x0;
    func_0x000100cbeb90(0,0,0,0xf000000000000000);
    uStack_78 = uVar1 & 0xff;
    uStack_80 = uVar10;
    uStack_70 = uVar4;
    uStack_68 = uVar8 & 0xcfffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_10190bfd8();
  (*pcVar9)(&uStack_80,&UNK_110410f80,puVar7,param_3,param_4);
  uVar1 = uStack_68;
  uVar10 = uStack_70;
  uVar8 = uStack_78;
  uVar4 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_68 >> 0x3c < 0xf)) {
    if (uVar11 == 0x3000000000000000) {
      func_0x00010006c00c(uStack_70,uStack_68);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_70,uStack_68);
      (*pcVar9)(param_3,param_4);
    }
    func_0x000100cbeb90(uStack_80,uStack_78,uStack_70,uStack_68);
    uVar2 = *param_1;
    uVar5 = param_1[1];
    uVar3 = param_1[2];
    uVar6 = param_1[3];
    *param_1 = uVar4;
    param_1[1] = uVar8 & 0xff;
    param_1[2] = uVar10;
    param_1[3] = uVar1 | 0x1000000000000000;
    FUN_1018ff7f8(uVar2,uVar5,uVar3,uVar6);
  }
  else {
    func_0x000100cbeb90(uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 1019011b8; end: 101901373;  */

/* WARNING: Removing unreachable block (ram,0x000101901300) */

void FUN_1019011b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0xf000000000000000;
  uVar8 = param_1[3];
  uVar11 = uVar8 & 0x3000000000000000;
  puVar7 = param_1;
  if (uVar11 == 0x2000000000000000) {
    uVar1 = param_1[1];
    uVar4 = param_1[2];
    uVar10 = *param_1;
    FUN_1018ff7a4(uVar10,uVar1,uVar4);
    puVar7 = (undefined8 *)0x0;
    func_0x000100cbeb90(0,0,0,0xf000000000000000);
    uStack_78 = uVar1 & 0xff;
    uStack_80 = uVar10;
    uStack_70 = uVar4;
    uStack_68 = uVar8 & 0xcfffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_10190c0d4();
  (*pcVar9)(&uStack_80,&UNK_110411090,puVar7,param_3,param_4);
  uVar1 = uStack_68;
  uVar10 = uStack_70;
  uVar8 = uStack_78;
  uVar4 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_68 >> 0x3c < 0xf)) {
    if (uVar11 == 0x3000000000000000) {
      func_0x00010006c00c(uStack_70,uStack_68);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_70,uStack_68);
      (*pcVar9)(param_3,param_4);
    }
    func_0x000100cbeb90(uStack_80,uStack_78,uStack_70,uStack_68);
    uVar2 = *param_1;
    uVar5 = param_1[1];
    uVar3 = param_1[2];
    uVar6 = param_1[3];
    *param_1 = uVar4;
    param_1[1] = uVar8 & 0xff;
    param_1[2] = uVar10;
    param_1[3] = uVar1 | 0x2000000000000000;
    FUN_1018ff7f8(uVar2,uVar5,uVar3,uVar6);
  }
  else {
    func_0x000100cbeb90(uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 101901374; end: 101901407;  */

void FUN_101901374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if (((*(ulong *)(unaff_x20 + 0x18) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar1 = (uint)(*(ulong *)(unaff_x20 + 0x18) >> 0x3c) & 3;
    if (uVar1 == 0) {
      FUN_101901408();
    }
    else if (uVar1 == 1) {
      FUN_101901494();
    }
    else {
      FUN_10190152c();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      param_2,param_3);
  return;
}



/* Entry: 101901408; end: 101901493;  */

void FUN_101901408(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(byte *)((long)param_1 + 0x1f) & 0x30) == 0) {
    uStack_50 = param_1[2];
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10190be20();
    (*pcVar1)(&uStack_60,1,&UNK_110410e78,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101901494);
  (*pcVar1)();
}



/* Entry: 101901494; end: 10190152b;  */

void FUN_101901494(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((param_1[3] & 0x3000000000000000) == 0x1000000000000000) {
    uStack_50 = param_1[2];
    uStack_48 = param_1[3] & 0xcfffffffffffffff;
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10190bfd8();
    (*pcVar1)(&uStack_60,2,&UNK_110410f80,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10190152c);
  (*pcVar1)();
}



/* Entry: 10190152c; end: 1019015c3;  */

void FUN_10190152c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((param_1[3] & 0x3000000000000000) == 0x2000000000000000) {
    uStack_50 = param_1[2];
    uStack_48 = param_1[3] & 0xcfffffffffffffff;
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10190c0d4();
    (*pcVar1)(&uStack_60,3,&UNK_110411090,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019015c4);
  (*pcVar1)();
}



/* Entry: 1019015c4; end: 10190161f;  */

void FUN_1019015c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0x3000000000000000;
  param_1[5] = 0xc000000000000000;
  return;
}



/* Entry: 101901620; end: 101901633;  */

void FUN_101901620(void)

{
  FUN_101900dc8();
  return;
}



/* Entry: 101901634; end: 10190166b;  */

void FUN_101901634(void)

{
  FUN_101901374();
  return;
}



/* Entry: 10190166c; end: 1019016a3;  */

uint FUN_10190166c(long param_1,long param_2)

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
  func_0x000101911e6c();
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



/* Entry: 1019016a4; end: 1019016eb;  */

uint FUN_1019016a4(undefined8 *param_1)

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
  func_0x00010190a0ec(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1019016ec; end: 10190178b;  */

/* WARNING: Possible PIC construction at 0x000101901738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101901748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010190173c) */
/* WARNING: Removing unreachable block (ram,0x00010190174c) */

void FUN_1019016ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2430 != -1) {
    func_0x000107c61568(0x112dd2430,FUN_101900d80);
  }
  uVar5 = uRam00000001138034f0;
  uVar4 = uRam00000001138034e8;
  uVar3 = uRam00000001138034e0;
  uVar2 = uRam00000001138034d8;
  uVar1 = uRam00000001138034d0;
  *param_1 = uRam00000001138034c8;
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



/* Entry: 10190178c; end: 10190179f;  */

void FUN_10190178c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd2888;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd2888,&UNK_10d9948b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1019017a0; end: 1019018a3;  */

void FUN_1019017a0(undefined8 param_1,undefined8 param_2)

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
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019018a4; end: 1019018e7;  */

uint FUN_1019018a4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010190a0ec(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1019018e8; end: 10190198b;  */

void FUN_1019018e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112dd2428 != -1) {
    func_0x000107c61568(0x112dd2428,FUN_101900d5c);
  }
  uVar2 = uRam00000001138034c0;
  uVar1 = uRam00000001138034b8;
  func_0x000107c61438(uRam00000001138034c0,2);
  func_0x000107c5fb78(0x746544747261432e,0xed00006465746365);
  func_0x000107c6142c(uVar2);
  uRam00000001138034f8 = uVar1;
  uRam0000000113803500 = uVar2;
  return;
}



/* Entry: 10190198c; end: 1019019d3;  */

void FUN_10190198c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d994d85,8,2);
  uRam0000000113803510 = uStack_38;
  uRam0000000113803508 = uStack_40;
  uRam0000000113803520 = uStack_28;
  uRam0000000113803518 = uStack_30;
  uRam0000000113803530 = uStack_18;
  uRam0000000113803528 = uStack_20;
  return;
}



/* Entry: 1019019d4; end: 101901a87;  */

/* WARNING: Removing unreachable block (ram,0x000101901a84) */

void FUN_1019019d4(undefined8 param_1,long param_2,long param_3)

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
        func_0x00010190b1d8();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101901a88; end: 101901b23;  */

void FUN_101901a88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x00010190b1d8();
    (*pcVar2)(param_2,1,&UNK_110410ef8,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 101901b24; end: 101901b43;  */

undefined1  [16] FUN_101901b24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (lRam0000000112dd2440 != -1) {
    func_0x000107c61568(0x112dd2440,FUN_1019018e8);
  }
  uVar2 = uRam0000000113803500;
  uVar1 = uRam00000001138034f8;
  func_0x000107c61434(uRam0000000113803500);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101901b44; end: 101901b9f;  */

undefined1  [16]
FUN_101901b44(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
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



/* Entry: 101901ba0; end: 101901bbb;  */

undefined8 FUN_101901ba0(void)

{
  return 1;
}



/* Entry: 101901bbc; end: 101901bf3;  */

void FUN_101901bbc(void)

{
  FUN_1019019d4();
  return;
}



/* Entry: 101901bf4; end: 101901c2b;  */

uint FUN_101901bf4(long param_1,long param_2)

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
  func_0x000101911e2c();
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



/* Entry: 101901c2c; end: 101901c37;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101901c2c(undefined8 *param_1)

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
  FUN_1019084d4(uVar18,*param_1);
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



/* Entry: 101901c38; end: 101901cd7;  */

/* WARNING: Possible PIC construction at 0x000101901c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101901c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101901c88) */
/* WARNING: Removing unreachable block (ram,0x000101901c98) */

void FUN_101901c38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2448 != -1) {
    func_0x000107c61568(0x112dd2448,FUN_10190198c);
  }
  uVar5 = uRam0000000113803530;
  uVar4 = uRam0000000113803528;
  uVar3 = uRam0000000113803520;
  uVar2 = uRam0000000113803518;
  uVar1 = uRam0000000113803510;
  *param_1 = uRam0000000113803508;
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



/* Entry: 101901cd8; end: 101901ceb;  */

void FUN_101901cd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd2878;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd2878,&UNK_10d9948b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101901cec; end: 101901d23;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101901cec(undefined8 *param_1,undefined8 param_2)

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
  FUN_10190be20();
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



/* Entry: 101901d24; end: 101901d2f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101901d24(ulong *param_1,undefined8 *param_2)

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
  ulong unaff_x20;
  byte *pbVar23;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
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
  
  uVar18 = *param_1;
  pbVar9 = (byte *)param_1[1];
  pbVar23 = (byte *)param_1[2];
  lVar22 = param_2[1];
  uVar24 = param_2[2];
  FUN_1019084d4(uVar18,*param_2);
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
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar24 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar24 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar24 != 0xc000000000000000))))
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
        uVar20 = uVar24 >> 0x30 & 0xff;
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
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar24);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
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
    lVar25 = *(long *)(pbVar8 + 0x20);
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
      if (lVar25 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar25,*(byte **)(pbVar12 + 0x18),lVar22,0);
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
          lVar25 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
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
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
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
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
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
    uVar24 = *(ulong *)(pbVar12 + 0x10);
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



/* Entry: 101901d30; end: 101901dcb;  */

void FUN_101901d30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112dd2440 != -1) {
    func_0x000107c61568(0x112dd2440,FUN_1019018e8);
  }
  uVar2 = uRam0000000113803500;
  uVar1 = uRam00000001138034f8;
  func_0x000107c61438(uRam0000000113803500,2);
  func_0x000107c5fb78(0x657449747261432e,0xe90000000000006d);
  func_0x000107c6142c(uVar2);
  uRam0000000113803538 = uVar1;
  uRam0000000113803540 = uVar2;
  return;
}



/* Entry: 101901dcc; end: 101901e13;  */

void FUN_101901dcc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d994d70,0x14,2);
  uRam0000000113803550 = uStack_38;
  uRam0000000113803548 = uStack_40;
  uRam0000000113803560 = uStack_28;
  uRam0000000113803558 = uStack_30;
  uRam0000000113803570 = uStack_18;
  uRam0000000113803568 = uStack_20;
  return;
}



/* Entry: 101901e14; end: 101901eab;  */

void FUN_101901e14(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_101901e68:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000101901e84;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_101901e50;
code_r0x000101901e84:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x48);
LAB_101901e50:
    (*pcVar3)();
  }
  goto LAB_101901e68;
}



/* Entry: 101901eac; end: 101901f3f;  */

void FUN_101901eac(undefined8 param_1,undefined8 param_2,long param_3)

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
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (((int)unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x18))((int)unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 101901f40; end: 101901f83;  */

void FUN_101901f40(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 101901f84; end: 101901fb3;  */

undefined1  [16] FUN_101901f84(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 101901fb4; end: 101901fe7;  */

void FUN_101901fb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 101901fe8; end: 101901ffb;  */

undefined1  [16] FUN_101901fe8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x101901ff8;
  return auVar1;
}



/* Entry: 101901ffc; end: 101902023;  */

void FUN_101901ffc(void)

{
  FUN_101901e14();
  return;
}



/* Entry: 101902024; end: 101902027;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101902024(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101902028; end: 10190205f;  */

uint FUN_101902028(long param_1,long param_2)

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
  func_0x000101911dec();
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



/* Entry: 101902060; end: 1019020f3;  */

/* WARNING: Possible PIC construction at 0x0001019020a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001019020a4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101902060(undefined8 *param_1)

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
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
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
  
  lVar23 = param_1[3];
  uVar15 = param_1[4];
  pbVar9 = (byte *)unaff_x20[3];
  pbVar24 = (byte *)unaff_x20[4];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  if (*(int *)(unaff_x20 + 2) != *(int *)(param_1 + 2)) {
    return (byte *)0x0;
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
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
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
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
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
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
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
          if (pbVar22 != (byte *)0x0) {
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
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
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
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
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
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1019020f4; end: 101902193;  */

/* WARNING: Possible PIC construction at 0x000101902140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101902150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101902144) */
/* WARNING: Removing unreachable block (ram,0x000101902154) */

void FUN_1019020f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2468 != -1) {
    func_0x000107c61568(0x112dd2468,FUN_101901dcc);
  }
  uVar5 = uRam0000000113803570;
  uVar4 = uRam0000000113803568;
  uVar3 = uRam0000000113803560;
  uVar2 = uRam0000000113803558;
  uVar1 = uRam0000000113803550;
  *param_1 = uRam0000000113803548;
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



/* Entry: 101902194; end: 1019021cf;  */

void FUN_101902194(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd2868;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd2868,&UNK_10d9948a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1019021d0; end: 1019022e3;  */

void FUN_1019021d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = unaff_x20[1];
  uStack_48 = *(undefined4 *)(unaff_x20 + 2);
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019022e4; end: 101902377;  */

/* WARNING: Possible PIC construction at 0x00010190232c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101902330) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1019022e4(undefined8 *param_1,undefined8 *param_2)

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
  int iVar18;
  ulong uVar19;
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
  
  pbVar9 = (byte *)param_1[3];
  pbVar24 = (byte *)param_1[4];
  lVar23 = param_2[3];
  uVar15 = param_2[4];
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  pbVar14 = (byte *)*param_2;
  pbVar16 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  if (*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
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
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
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
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
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
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
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
          if (pbVar22 != (byte *)0x0) {
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
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
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
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
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



/* Entry: 101902378; end: 101902413;  */

void FUN_101902378(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112dd2428 != -1) {
    func_0x000107c61568(0x112dd2428,FUN_101900d5c);
  }
  uVar2 = uRam00000001138034c0;
  uVar1 = uRam00000001138034b8;
  func_0x000107c61438(uRam00000001138034c0,2);
  func_0x000107c5fb78(0xd000000000000010,0x800000010efc05c0);
  func_0x000107c6142c(uVar2);
  uRam0000000113803578 = uVar1;
  uRam0000000113803580 = uVar2;
  return;
}



/* Entry: 101902414; end: 10190245b;  */

void FUN_101902414(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d0a8,7,2);
  uRam0000000113803590 = uStack_38;
  uRam0000000113803588 = uStack_40;
  uRam00000001138035a0 = uStack_28;
  uRam0000000113803598 = uStack_30;
  uRam00000001138035b0 = uStack_18;
  uRam00000001138035a8 = uStack_20;
  return;
}



/* Entry: 10190245c; end: 101902497;  */

undefined1  [16] FUN_10190245c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112dd2478 != -1) {
    func_0x000107c61568(0x112dd2478,FUN_101902378);
  }
  auVar1._8_8_ = uRam0000000113803580;
  auVar1._0_8_ = uRam0000000113803578;
  func_0x000107c61434(uRam0000000113803580);
  return auVar1;
}



/* Entry: 101902498; end: 1019024ff;  */

void FUN_101902498(void)

{
  FUN_101902808();
  return;
}



/* Entry: 101902500; end: 101902537;  */

uint FUN_101902500(long param_1,long param_2)

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
  func_0x000101911dac();
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



/* Entry: 101902538; end: 101902543;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101902538(long *param_1)

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
  int iVar20;
  ulong uVar21;
  long lVar22;
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
  lVar22 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[2];
  pbVar27 = (byte *)unaff_x20[3];
  if ((char)param_1[1] == '\x01') {
    if (lVar18 == 0) {
      if (lVar22 == 0) goto SUB_100e25fcc;
    }
    else if (lVar18 == 1) {
      if (lVar22 == 1) {
SUB_100e25fcc:
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
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto code_r0x000100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar21 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar21 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar20 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
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
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
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
code_r0x000100e262a4:
              unaff_x20 = (long *)((ulong)pbVar27 & 0x3fffffffffffffff);
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                                  lVar15,uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto code_r0x000100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
code_r0x000100e262b0:
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
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
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
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto code_r0x000100e266f0;
            }
            goto code_r0x000100e266ec;
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
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
            goto code_r0x000100e266ec;
          }
          if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
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
                      *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                }
                goto code_r0x000100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
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
            if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto SUB_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto code_r0x000100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto code_r0x000100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                uVar13 = 0;
code_r0x000100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
code_r0x000100e26708:
        uVar13 = 1;
        goto code_r0x000100e266f0;
      }
    }
    else if (lVar22 == 2) goto SUB_100e25fcc;
  }
  else if (lVar22 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 101902544; end: 1019025e3;  */

/* WARNING: Possible PIC construction at 0x000101902590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019025a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101902594) */
/* WARNING: Removing unreachable block (ram,0x0001019025a4) */

void FUN_101902544(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2480 != -1) {
    func_0x000107c61568(0x112dd2480,FUN_101902414);
  }
  uVar5 = uRam00000001138035b0;
  uVar4 = uRam00000001138035a8;
  uVar3 = uRam00000001138035a0;
  uVar2 = uRam0000000113803598;
  uVar1 = uRam0000000113803590;
  *param_1 = uRam0000000113803588;
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



/* Entry: 1019025e4; end: 1019025f7;  */

void FUN_1019025e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd2858;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd2858,&UNK_10d9948a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1019025f8; end: 10190262f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1019025f8(undefined8 *param_1,undefined8 param_2)

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
  FUN_10190bfd8();
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



/* Entry: 101902630; end: 10190263b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101902630(long *param_1,long *param_2)

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
  int iVar20;
  ulong uVar21;
  long lVar22;
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
  
  lVar22 = *param_1;
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  lVar18 = *param_2;
  lVar15 = param_2[2];
  uVar13 = param_2[3];
  if ((char)param_2[1] == '\x01') {
    if (lVar18 == 0) {
      if (lVar22 == 0) goto SUB_100e25fcc;
    }
    else if (lVar18 == 1) {
      if (lVar22 == 1) {
SUB_100e25fcc:
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
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto code_r0x000100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar21 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar21 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar20 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
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
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
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
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                                  lVar15,uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto code_r0x000100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
code_r0x000100e262b0:
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
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
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
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto code_r0x000100e266f0;
            }
            goto code_r0x000100e266ec;
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
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
            goto code_r0x000100e266ec;
          }
          if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
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
                      *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                }
                goto code_r0x000100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
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
            if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto SUB_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto code_r0x000100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto code_r0x000100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                uVar13 = 0;
code_r0x000100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
code_r0x000100e26708:
        uVar13 = 1;
        goto code_r0x000100e266f0;
      }
    }
    else if (lVar22 == 2) goto SUB_100e25fcc;
  }
  else if (lVar22 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 10190263c; end: 101902683;  */

void FUN_10190263c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d994d40,0x25,2);
  uRam00000001138035c0 = uStack_38;
  uRam00000001138035b8 = uStack_40;
  uRam00000001138035d0 = uStack_28;
  uRam00000001138035c8 = uStack_30;
  uRam00000001138035e0 = uStack_18;
  uRam00000001138035d8 = uStack_20;
  return;
}



/* Entry: 101902684; end: 101902723;  */

/* WARNING: Possible PIC construction at 0x0001019026d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019026e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019026d4) */
/* WARNING: Removing unreachable block (ram,0x0001019026e4) */

void FUN_101902684(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2498 != -1) {
    func_0x000107c61568(0x112dd2498,FUN_10190263c);
  }
  uVar5 = uRam00000001138035e0;
  uVar4 = uRam00000001138035d8;
  uVar3 = uRam00000001138035d0;
  uVar2 = uRam00000001138035c8;
  uVar1 = uRam00000001138035c0;
  *param_1 = uRam00000001138035b8;
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



/* Entry: 101902724; end: 1019027bf;  */

void FUN_101902724(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112dd2428 != -1) {
    func_0x000107c61568(0x112dd2428,FUN_101900d5c);
  }
  uVar2 = uRam00000001138034c0;
  uVar1 = uRam00000001138034b8;
  func_0x000107c61438(uRam00000001138034c0,2);
  func_0x000107c5fb78(0xd000000000000015,0x800000010efc05a0);
  func_0x000107c6142c(uVar2);
  uRam00000001138035e8 = uVar1;
  uRam00000001138035f0 = uVar2;
  return;
}



/* Entry: 1019027c0; end: 101902807;  */

void FUN_1019027c0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d0a8,7,2);
  uRam0000000113803600 = uStack_38;
  uRam00000001138035f8 = uStack_40;
  uRam0000000113803610 = uStack_28;
  uRam0000000113803608 = uStack_30;
  uRam0000000113803620 = uStack_18;
  uRam0000000113803618 = uStack_20;
  return;
}



/* Entry: 101902808; end: 1019028b7;  */

void FUN_101902808(undefined8 param_1,long param_2,long param_3,code *param_4)

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



/* Entry: 1019028b8; end: 10190295b;  */

void FUN_1019028b8(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
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



/* Entry: 10190295c; end: 101902997;  */

undefined1  [16] FUN_10190295c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112dd24a0 != -1) {
    func_0x000107c61568(0x112dd24a0,FUN_101902724);
  }
  auVar1._8_8_ = uRam00000001138035f0;
  auVar1._0_8_ = uRam00000001138035e8;
  func_0x000107c61434(uRam00000001138035f0);
  return auVar1;
}



/* Entry: 101902998; end: 1019029ff;  */

void FUN_101902998(void)

{
  FUN_101902808();
  return;
}



/* Entry: 101902a00; end: 101902a37;  */

uint FUN_101902a00(long param_1,long param_2)

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
  func_0x000101911d6c();
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



/* Entry: 101902a38; end: 101902a67;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101902a38(long *param_1)

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
  int iVar20;
  ulong uVar21;
  long lVar22;
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
  lVar22 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[2];
  pbVar27 = (byte *)unaff_x20[3];
  if ((char)param_1[1] != '\x01') {
    if (lVar22 == lVar18) goto SUB_100e25fcc;
    goto code_r0x00010190a618;
  }
  if (lVar18 < 2) {
    if (lVar18 == 0) {
      if (lVar22 == 0) {
SUB_100e25fcc:
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
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto code_r0x000100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar21 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar21 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar20 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
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
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
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
code_r0x000100e262a4:
              unaff_x20 = (long *)((ulong)pbVar27 & 0x3fffffffffffffff);
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                                  lVar15,uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto code_r0x000100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
code_r0x000100e262b0:
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
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
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
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto code_r0x000100e266f0;
            }
            goto code_r0x000100e266ec;
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
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
            goto code_r0x000100e266ec;
          }
          if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
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
                      *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                }
                goto code_r0x000100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
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
            if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto SUB_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto code_r0x000100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto code_r0x000100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                uVar13 = 0;
code_r0x000100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
code_r0x000100e26708:
        uVar13 = 1;
        goto code_r0x000100e266f0;
      }
    }
    else if (lVar22 == 1) goto SUB_100e25fcc;
  }
  else if (lVar18 == 2) {
    if (lVar22 == 2) goto SUB_100e25fcc;
  }
  else if (lVar22 == 3) goto SUB_100e25fcc;
code_r0x00010190a618:
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 101902a68; end: 101902b07;  */

/* WARNING: Possible PIC construction at 0x000101902ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101902ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101902ab8) */
/* WARNING: Removing unreachable block (ram,0x000101902ac8) */

void FUN_101902a68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd24a8 != -1) {
    func_0x000107c61568(0x112dd24a8,FUN_1019027c0);
  }
  uVar5 = uRam0000000113803620;
  uVar4 = uRam0000000113803618;
  uVar3 = uRam0000000113803610;
  uVar2 = uRam0000000113803608;
  uVar1 = uRam0000000113803600;
  *param_1 = uRam00000001138035f8;
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



/* Entry: 101902b08; end: 101902b1b;  */

void FUN_101902b08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd2848;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd2848,&UNK_10d994898);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101902b1c; end: 101902b4f;  */

void FUN_101902b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 101902b50; end: 101902c63;  */

void FUN_101902b50(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101902c64; end: 101902c93;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101902c64(long *param_1,long *param_2)

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
  int iVar20;
  ulong uVar21;
  long lVar22;
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
  
  lVar22 = *param_1;
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  lVar18 = *param_2;
  lVar15 = param_2[2];
  uVar13 = param_2[3];
  if ((char)param_2[1] != '\x01') {
    if (lVar22 == lVar18) goto SUB_100e25fcc;
    goto code_r0x00010190a618;
  }
  if (lVar18 < 2) {
    if (lVar18 == 0) {
      if (lVar22 == 0) {
SUB_100e25fcc:
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
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto code_r0x000100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar21 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar21 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar20 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
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
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
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
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                                  lVar15,uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto code_r0x000100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
code_r0x000100e262b0:
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
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
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
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto code_r0x000100e266f0;
            }
            goto code_r0x000100e266ec;
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
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
            goto code_r0x000100e266ec;
          }
          if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
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
                      *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                }
                goto code_r0x000100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
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
            if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto SUB_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto code_r0x000100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto code_r0x000100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                uVar13 = 0;
code_r0x000100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
code_r0x000100e26708:
        uVar13 = 1;
        goto code_r0x000100e266f0;
      }
    }
    else if (lVar22 == 1) goto SUB_100e25fcc;
  }
  else if (lVar18 == 2) {
    if (lVar22 == 2) goto SUB_100e25fcc;
  }
  else if (lVar22 == 3) goto SUB_100e25fcc;
code_r0x00010190a618:
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 101902c94; end: 101902cdb;  */

void FUN_101902c94(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d994d00,0x3e,2);
  uRam0000000113803630 = uStack_38;
  uRam0000000113803628 = uStack_40;
  uRam0000000113803640 = uStack_28;
  uRam0000000113803638 = uStack_30;
  uRam0000000113803650 = uStack_18;
  uRam0000000113803648 = uStack_20;
  return;
}



/* Entry: 101902cdc; end: 101902d7b;  */

/* WARNING: Possible PIC construction at 0x000101902d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101902d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101902d2c) */
/* WARNING: Removing unreachable block (ram,0x000101902d3c) */

void FUN_101902cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd24c0 != -1) {
    func_0x000107c61568(0x112dd24c0,FUN_101902c94);
  }
  uVar5 = uRam0000000113803650;
  uVar4 = uRam0000000113803648;
  uVar3 = uRam0000000113803640;
  uVar2 = uRam0000000113803638;
  uVar1 = uRam0000000113803630;
  *param_1 = uRam0000000113803628;
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



/* Entry: 101902d7c; end: 101902da3;  */

void FUN_101902d7c(void)

{
  func_0x000107c5fb78(0x6c69666f7475412e,0xe90000000000006c);
  uRam0000000113803658 = 0xd00000000000002d;
  uRam0000000113803660 = 0x800000010efc0530;
  return;
}



/* Entry: 101902da4; end: 101902e0b;  */

void FUN_101902da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd00000000000002d;
  *param_5 = 0x800000010efc0530;
  return;
}



/* Entry: 101902e0c; end: 101902e53;  */

void FUN_101902e0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d994cb0,0x42,2);
  uRam0000000113803670 = uStack_38;
  uRam0000000113803668 = uStack_40;
  uRam0000000113803680 = uStack_28;
  uRam0000000113803678 = uStack_30;
  uRam0000000113803690 = uStack_18;
  uRam0000000113803688 = uStack_20;
  return;
}



/* Entry: 101902e54; end: 101902f6b;  */

/* WARNING: Removing unreachable block (ram,0x000101902f3c) */
/* WARNING: Removing unreachable block (ram,0x000101902ef4) */
/* WARNING: Removing unreachable block (ram,0x000101902f20) */

void FUN_101902e54(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 < 3) {
      if (lVar1 == 1) {
        FUN_101902f6c();
      }
      else if (lVar1 == 2) {
        FUN_101903194();
      }
    }
    else if (lVar1 == 3) {
      FUN_10190347c();
    }
    else if (lVar1 == 4) {
      FUN_101903a14();
    }
    else if (lVar1 == 5) {
      FUN_101903f34();
    }
  }
  return;
}



/* Entry: 101902f6c; end: 101903193;  */

/* WARNING: Removing unreachable block (ram,0x000101903108) */

void FUN_101902f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  undefined1 auStack_4a0 [264];
  long alStack_398 [33];
  long lStack_290;
  long lStack_288;
  long lStack_280;
  undefined1 auStack_278 [264];
  undefined1 auStack_170 [272];
  
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_280 = 0;
  func_0x000107c610b4(auStack_278,param_1,0x101);
  func_0x000107c610b4(auStack_170,param_1,0x101);
  puVar3 = auStack_278;
  func_0x00010190a668();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(alStack_398,auStack_170,0x101);
    puVar3 = auStack_170;
    func_0x00010190a67c();
    if ((int)puVar3 == 0) {
      plVar2 = alStack_398;
      func_0x00010190a684();
      lVar7 = plVar2[1];
      lVar6 = *plVar2;
      lVar4 = plVar2[2];
      func_0x000107c610b4(auStack_4a0,auStack_278,0x101);
      FUN_10190a688(auStack_4a0,&lStack_5a8);
      puVar3 = (undefined1 *)0x0;
      FUN_101912004(0,0,0);
      lStack_290 = lVar6;
      lStack_288 = lVar7;
      lStack_280 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_10190c3c8();
  (*pcVar5)(&lStack_290,&UNK_1104113f0,puVar3,param_3,param_4);
  lVar7 = lStack_280;
  lVar6 = lStack_288;
  lVar4 = lStack_290;
  if ((unaff_x21 == 0) && (lStack_290 != 0)) {
    if (iVar1 == 1) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar6,lVar7);
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar6,lVar7);
      (*pcVar5)(param_3,param_4);
    }
    FUN_101912004(lStack_290,lStack_288,lStack_280);
    lStack_5a8 = lVar4;
    lStack_5a0 = lVar6;
    lStack_598 = lVar7;
    FUN_10190a6bc(&lStack_5a8);
    func_0x000107c610b4(auStack_4a0,&lStack_5a8,0x101);
    func_0x00010190a6c4(auStack_4a0);
    func_0x000107c610b4(alStack_398,param_1,0x101);
    func_0x000107c610b4(param_1,auStack_4a0,0x101);
    FUN_1019120c0(alStack_398,0x112dd2170,&UNK_10d993510);
  }
  else {
    FUN_101912004(lStack_290,lStack_288,lStack_280);
  }
  return;
}



/* Entry: 101903194; end: 10190347b;  */

/* WARNING: Removing unreachable block (ram,0x0001019033a0) */

void FUN_101903194(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long unaff_x21;
  code *pcVar11;
  undefined8 uStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 uStack_5b8;
  byte bStack_5b7;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined1 auStack_4d0 [264];
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_280 [264];
  undefined1 auStack_178 [280];
  
  uStack_290 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  func_0x000107c610b4(auStack_280,param_1,0x101);
  func_0x000107c610b4(auStack_178,param_1,0x101);
  puVar10 = auStack_280;
  func_0x00010190a668();
  iVar8 = (int)puVar10;
  if (iVar8 != 1) {
    func_0x000107c610b4(&uStack_3c8,auStack_178,0x101);
    puVar10 = auStack_178;
    func_0x00010190a67c();
    if ((int)puVar10 == 1) {
      puVar9 = &uStack_3c8;
      func_0x00010190a6c8();
      func_0x000107c610b4(auStack_4d0,auStack_280,0x101);
      FUN_10190a688(auStack_4d0,&uStack_5d8);
      puVar10 = (undefined1 *)0x0;
      FUN_101911eec(0,0,0,0,0,0,0);
      uStack_290 = puVar9[6];
      lStack_2b8 = puVar9[1];
      uStack_2c0 = *puVar9;
      uStack_2a8 = puVar9[3];
      uStack_2b0 = puVar9[2];
      uStack_298 = puVar9[5];
      uStack_2a0 = puVar9[4];
    }
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_10190c4c4();
  (*pcVar11)(&uStack_2c0,&UNK_110411470,puVar10,param_3,param_4);
  uVar7 = uStack_290;
  uVar6 = uStack_298;
  uVar5 = uStack_2a0;
  uVar4 = uStack_2a8;
  uVar3 = uStack_2b0;
  lVar2 = lStack_2b8;
  uVar1 = uStack_2c0;
  if ((unaff_x21 == 0) && (lStack_2b8 != 0)) {
    if (iVar8 == 1) {
      uStack_3c8 = uStack_2c0;
      lStack_3c0 = lStack_2b8;
      uStack_3b8 = uStack_2b0;
      uStack_3b0 = uStack_2a8;
      uStack_3a8 = uStack_2a0;
      uStack_3a0 = uStack_298;
      uStack_398 = uStack_290;
      FUN_10190a6d8(&uStack_3c8,auStack_4d0);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      uStack_3c8 = uStack_2c0;
      lStack_3c0 = lStack_2b8;
      uStack_3b8 = uStack_2b0;
      uStack_3b0 = uStack_2a8;
      uStack_3a8 = uStack_2a0;
      uStack_3a0 = uStack_298;
      uStack_398 = uStack_290;
      FUN_10190a6d8(&uStack_3c8,auStack_4d0);
      (*pcVar11)(param_3,param_4);
    }
    FUN_101911eec(uStack_2c0,lStack_2b8,uStack_2b0,uStack_2a8,uStack_2a0,uStack_298,uStack_290);
    uStack_5d8 = uVar1;
    lStack_5d0 = lVar2;
    uStack_5c8 = uVar3;
    uStack_5c0 = uVar4;
    uStack_5b8 = (undefined1)uVar5;
    uStack_5b0 = uVar6;
    uStack_5a8 = uVar7;
    bStack_5b7 = (byte)((ulong)uVar5 >> 8) & 1;
    func_0x00010190a6cc(&uStack_5d8);
    func_0x000107c610b4(auStack_4d0,&uStack_5d8,0x101);
    func_0x00010190a6c4(auStack_4d0);
    func_0x000107c610b4(&uStack_3c8,param_1,0x101);
    func_0x000107c610b4(param_1,auStack_4d0,0x101);
    FUN_1019120c0(&uStack_3c8,0x112dd2170,&UNK_10d993510);
  }
  else {
    FUN_101911eec(uStack_2c0,lStack_2b8,uStack_2b0,uStack_2a8,uStack_2a0,uStack_298,uStack_290);
  }
  return;
}



/* Entry: 10190347c; end: 101903a13;  */

/* WARNING: Removing unreachable block (ram,0x000101903914) */

void FUN_10190347c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x21;
  code *pcVar8;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
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
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined1 auStack_878 [264];
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
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
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
  undefined8 uStack_418;
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
  undefined1 auStack_260 [264];
  undefined1 auStack_158 [264];
  
  puVar5 = &uStack_980;
  FUN_101911f38(&uStack_360);
  uStack_398 = uStack_298;
  uStack_3a0 = uStack_2a0;
  uStack_388 = uStack_288;
  uStack_390 = uStack_290;
  uStack_378 = uStack_278;
  uStack_380 = uStack_280;
  uStack_368 = uStack_268;
  uStack_370 = uStack_270;
  uStack_3d8 = uStack_2d8;
  uStack_3e0 = uStack_2e0;
  uStack_3c8 = uStack_2c8;
  uStack_3d0 = uStack_2d0;
  uStack_3b8 = uStack_2b8;
  uStack_3c0 = uStack_2c0;
  uStack_3a8 = uStack_2a8;
  uStack_3b0 = uStack_2b0;
  uStack_418 = uStack_318;
  uStack_420 = uStack_320;
  uStack_408 = uStack_308;
  uStack_410 = uStack_310;
  uStack_3f8 = uStack_2f8;
  uStack_400 = uStack_300;
  uStack_3e8 = uStack_2e8;
  uStack_3f0 = uStack_2f0;
  uStack_458 = uStack_358;
  uStack_460 = uStack_360;
  uStack_448 = uStack_348;
  uStack_450 = uStack_350;
  uStack_438 = uStack_338;
  uStack_440 = uStack_340;
  uStack_428 = uStack_328;
  uStack_430 = uStack_330;
  func_0x000107c610b4(auStack_260,param_1,0x101);
  func_0x000107c610b4(auStack_158,param_1,0x101);
  puVar2 = auStack_260;
  func_0x00010190a668();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    func_0x000107c610b4(&uStack_770,auStack_158,0x101);
    puVar3 = auStack_158;
    func_0x00010190a67c();
    if ((int)puVar3 == 2) {
      puVar4 = &uStack_770;
      func_0x00010190a730();
      uStack_498 = uStack_398;
      uStack_4a0 = uStack_3a0;
      uStack_488 = uStack_388;
      uStack_490 = uStack_390;
      uStack_478 = uStack_378;
      uStack_480 = uStack_380;
      uStack_468 = uStack_368;
      uStack_470 = uStack_370;
      uStack_4d8 = uStack_3d8;
      uStack_4e0 = uStack_3e0;
      uStack_4c8 = uStack_3c8;
      uStack_4d0 = uStack_3d0;
      uStack_4b8 = uStack_3b8;
      uStack_4c0 = uStack_3c0;
      uStack_4a8 = uStack_3a8;
      uStack_4b0 = uStack_3b0;
      uStack_518 = uStack_418;
      uStack_520 = uStack_420;
      uStack_508 = uStack_408;
      uStack_510 = uStack_410;
      uStack_4f8 = uStack_3f8;
      uStack_500 = uStack_400;
      uStack_4e8 = uStack_3e8;
      uStack_4f0 = uStack_3f0;
      uStack_558 = uStack_458;
      uStack_560 = uStack_460;
      uStack_548 = uStack_448;
      uStack_550 = uStack_450;
      uStack_538 = uStack_438;
      uStack_540 = uStack_440;
      uStack_528 = uStack_428;
      uStack_530 = uStack_430;
      func_0x000107c610b4(auStack_878,auStack_260,0x101);
      FUN_10190a688(auStack_878,&uStack_980);
      FUN_1019120c0(&uStack_560,0x112dd28a8,&UNK_10d994c98);
      uStack_958 = puVar4[5];
      uStack_960 = puVar4[4];
      uStack_948 = puVar4[7];
      uStack_950 = puVar4[6];
      uStack_978 = puVar4[1];
      uStack_980 = *puVar4;
      uStack_968 = puVar4[3];
      uStack_970 = puVar4[2];
      uStack_918 = puVar4[0xd];
      uStack_920 = puVar4[0xc];
      uStack_908 = puVar4[0xf];
      uStack_910 = puVar4[0xe];
      uStack_938 = puVar4[9];
      uStack_940 = puVar4[8];
      uStack_928 = puVar4[0xb];
      uStack_930 = puVar4[10];
      uStack_8d8 = puVar4[0x15];
      uStack_8e0 = puVar4[0x14];
      uStack_8c8 = puVar4[0x17];
      uStack_8d0 = puVar4[0x16];
      uStack_8f8 = puVar4[0x11];
      uStack_900 = puVar4[0x10];
      uStack_8e8 = puVar4[0x13];
      uStack_8f0 = puVar4[0x12];
      uStack_898 = puVar4[0x1d];
      uStack_8a0 = puVar4[0x1c];
      uStack_888 = puVar4[0x1f];
      uStack_890 = puVar4[0x1e];
      uStack_8b8 = puVar4[0x19];
      uStack_8c0 = puVar4[0x18];
      uStack_8a8 = puVar4[0x1b];
      uStack_8b0 = puVar4[0x1a];
      func_0x000101911f60(&uStack_980);
      uStack_398 = uStack_8b8;
      uStack_3a0 = uStack_8c0;
      uStack_388 = uStack_8a8;
      uStack_390 = uStack_8b0;
      uStack_378 = uStack_898;
      uStack_380 = uStack_8a0;
      uStack_368 = uStack_888;
      uStack_370 = uStack_890;
      uStack_3d8 = uStack_8f8;
      uStack_3e0 = uStack_900;
      uStack_3c8 = uStack_8e8;
      uStack_3d0 = uStack_8f0;
      uStack_3b8 = uStack_8d8;
      uStack_3c0 = uStack_8e0;
      uStack_3a8 = uStack_8c8;
      uStack_3b0 = uStack_8d0;
      uStack_418 = uStack_938;
      uStack_420 = uStack_940;
      uStack_408 = uStack_928;
      uStack_410 = uStack_930;
      uStack_3f8 = uStack_918;
      uStack_400 = uStack_920;
      uStack_3e8 = uStack_908;
      uStack_3f0 = uStack_910;
      uStack_458 = uStack_978;
      uStack_460 = uStack_980;
      uStack_448 = uStack_968;
      uStack_450 = uStack_970;
      uStack_438 = uStack_958;
      uStack_440 = uStack_960;
      uStack_428 = uStack_948;
      uStack_430 = uStack_950;
      puVar3 = (undefined1 *)puVar5;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_10190c5c0();
  (*pcVar8)(&uStack_460,&UNK_110411500,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_598 = uStack_398;
    uStack_5a0 = uStack_3a0;
    uStack_588 = uStack_388;
    uStack_590 = uStack_390;
    uStack_578 = uStack_378;
    uStack_580 = uStack_380;
    uStack_568 = uStack_368;
    uStack_570 = uStack_370;
    uStack_5d8 = uStack_3d8;
    uStack_5e0 = uStack_3e0;
    uStack_5c8 = uStack_3c8;
    uStack_5d0 = uStack_3d0;
    uStack_5b8 = uStack_3b8;
    uStack_5c0 = uStack_3c0;
    uStack_5a8 = uStack_3a8;
    uStack_5b0 = uStack_3b0;
    uStack_618 = uStack_418;
    uStack_620 = uStack_420;
    uStack_608 = uStack_408;
    uStack_610 = uStack_410;
    uStack_5f8 = uStack_3f8;
    uStack_600 = uStack_400;
    uStack_5e8 = uStack_3e8;
    uStack_5f0 = uStack_3f0;
    uStack_658 = uStack_458;
    uStack_660 = uStack_460;
    uStack_648 = uStack_448;
    uStack_650 = uStack_450;
    uStack_638 = uStack_438;
    uStack_640 = uStack_440;
    uStack_628 = uStack_428;
    uStack_630 = uStack_430;
    uStack_498 = uStack_398;
    uStack_4a0 = uStack_3a0;
    uStack_488 = uStack_388;
    uStack_490 = uStack_390;
    uStack_478 = uStack_378;
    uStack_480 = uStack_380;
    uStack_468 = uStack_368;
    uStack_470 = uStack_370;
    uStack_4d8 = uStack_3d8;
    uStack_4e0 = uStack_3e0;
    uStack_4c8 = uStack_3c8;
    uStack_4d0 = uStack_3d0;
    uStack_4b8 = uStack_3b8;
    uStack_4c0 = uStack_3c0;
    uStack_4a8 = uStack_3a8;
    uStack_4b0 = uStack_3b0;
    uStack_518 = uStack_418;
    uStack_520 = uStack_420;
    uStack_508 = uStack_408;
    uStack_510 = uStack_410;
    uStack_4f8 = uStack_3f8;
    uStack_500 = uStack_400;
    uStack_4e8 = uStack_3e8;
    uStack_4f0 = uStack_3f0;
    uStack_558 = uStack_458;
    uStack_560 = uStack_460;
    uStack_548 = uStack_448;
    uStack_550 = uStack_450;
    uStack_538 = uStack_438;
    uStack_540 = uStack_440;
    uStack_528 = uStack_428;
    uStack_530 = uStack_430;
    iVar1 = (int)&uStack_660;
    func_0x000100cbea38();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_6a8 = uStack_598;
        uStack_6b0 = uStack_5a0;
        uStack_698 = uStack_588;
        uStack_6a0 = uStack_590;
        uStack_688 = uStack_578;
        uStack_690 = uStack_580;
        uStack_678 = uStack_568;
        uStack_680 = uStack_570;
        uStack_6e8 = uStack_5d8;
        uStack_6f0 = uStack_5e0;
        uStack_6d8 = uStack_5c8;
        uStack_6e0 = uStack_5d0;
        uStack_6c8 = uStack_5b8;
        uStack_6d0 = uStack_5c0;
        uStack_6b8 = uStack_5a8;
        uStack_6c0 = uStack_5b0;
        uStack_728 = uStack_618;
        uStack_730 = uStack_620;
        uStack_718 = uStack_608;
        uStack_720 = uStack_610;
        uStack_708 = uStack_5f8;
        uStack_710 = uStack_600;
        uStack_6f8 = uStack_5e8;
        uStack_700 = uStack_5f0;
        uStack_768 = uStack_658;
        uStack_770 = uStack_660;
        uStack_758 = uStack_648;
        uStack_760 = uStack_650;
        uStack_748 = uStack_638;
        uStack_750 = uStack_640;
        uStack_738 = uStack_628;
        uStack_740 = uStack_630;
        FUN_10190a740(&uStack_770,auStack_878);
      }
      else {
        pcVar8 = *(code **)(param_4 + 8);
        uStack_6a8 = uStack_598;
        uStack_6b0 = uStack_5a0;
        uStack_698 = uStack_588;
        uStack_6a0 = uStack_590;
        uStack_688 = uStack_578;
        uStack_690 = uStack_580;
        uStack_678 = uStack_568;
        uStack_680 = uStack_570;
        uStack_6e8 = uStack_5d8;
        uStack_6f0 = uStack_5e0;
        uStack_6d8 = uStack_5c8;
        uStack_6e0 = uStack_5d0;
        uStack_6c8 = uStack_5b8;
        uStack_6d0 = uStack_5c0;
        uStack_6b8 = uStack_5a8;
        uStack_6c0 = uStack_5b0;
        uStack_728 = uStack_618;
        uStack_730 = uStack_620;
        uStack_718 = uStack_608;
        uStack_720 = uStack_610;
        uStack_708 = uStack_5f8;
        uStack_710 = uStack_600;
        uStack_6f8 = uStack_5e8;
        uStack_700 = uStack_5f0;
        uStack_768 = uStack_658;
        uStack_770 = uStack_660;
        uStack_758 = uStack_648;
        uStack_760 = uStack_650;
        uStack_748 = uStack_638;
        uStack_750 = uStack_640;
        uStack_738 = uStack_628;
        uStack_740 = uStack_630;
        FUN_10190a740(&uStack_770,auStack_878);
        (*pcVar8)(param_3,param_4);
      }
      FUN_1019120c0(&uStack_460,0x112dd28a8,&UNK_10d994c98);
      uStack_8b8 = uStack_498;
      uStack_8c0 = uStack_4a0;
      uStack_8a8 = uStack_488;
      uStack_8b0 = uStack_490;
      uStack_898 = uStack_478;
      uStack_8a0 = uStack_480;
      uStack_888 = uStack_468;
      uStack_890 = uStack_470;
      uStack_8f8 = uStack_4d8;
      uStack_900 = uStack_4e0;
      uStack_8e8 = uStack_4c8;
      uStack_8f0 = uStack_4d0;
      uStack_8d8 = uStack_4b8;
      uStack_8e0 = uStack_4c0;
      uStack_8c8 = uStack_4a8;
      uStack_8d0 = uStack_4b0;
      uStack_938 = uStack_518;
      uStack_940 = uStack_520;
      uStack_928 = uStack_508;
      uStack_930 = uStack_510;
      uStack_918 = uStack_4f8;
      uStack_920 = uStack_500;
      uStack_908 = uStack_4e8;
      uStack_910 = uStack_4f0;
      uStack_978 = uStack_558;
      uStack_980 = uStack_560;
      uStack_968 = uStack_548;
      uStack_970 = uStack_550;
      uStack_958 = uStack_538;
      uStack_960 = uStack_540;
      uStack_948 = uStack_528;
      uStack_950 = uStack_530;
      func_0x00010190a734(&uStack_980);
      func_0x000107c610b4(auStack_878,&uStack_980,0x101);
      func_0x00010190a6c4(auStack_878);
      func_0x000107c610b4(&uStack_770,param_1,0x101);
      func_0x000107c610b4(param_1,auStack_878,0x101);
      uVar6 = 0x112dd2170;
      puVar7 = &UNK_10d993510;
      puVar5 = &uStack_770;
      goto LAB_101903828;
    }
  }
  uVar6 = 0x112dd28a8;
  puVar7 = &UNK_10d994c98;
  puVar5 = &uStack_460;
LAB_101903828:
  FUN_1019120c0(puVar5,uVar6,puVar7);
  return;
}



/* Entry: 101903a14; end: 101903f33;  */

/* WARNING: Removing unreachable block (ram,0x000101903e40) */

void FUN_101903a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x21;
  code *pcVar8;
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
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_7f8 [264];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
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
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
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
  undefined8 uStack_418;
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
  undefined1 auStack_260 [264];
  undefined1 auStack_158 [264];
  
  puVar5 = &uStack_900;
  func_0x000101911f64(&uStack_340);
  uStack_378 = uStack_298;
  uStack_380 = uStack_2a0;
  uStack_368 = uStack_288;
  uStack_370 = uStack_290;
  uStack_358 = uStack_278;
  uStack_360 = uStack_280;
  uStack_348 = uStack_268;
  uStack_350 = uStack_270;
  uStack_3b8 = uStack_2d8;
  uStack_3c0 = uStack_2e0;
  uStack_3a8 = uStack_2c8;
  uStack_3b0 = uStack_2d0;
  uStack_398 = uStack_2b8;
  uStack_3a0 = uStack_2c0;
  uStack_388 = uStack_2a8;
  uStack_390 = uStack_2b0;
  uStack_3f8 = uStack_318;
  uStack_400 = uStack_320;
  uStack_3e8 = uStack_308;
  uStack_3f0 = uStack_310;
  uStack_3d8 = uStack_2f8;
  uStack_3e0 = uStack_300;
  uStack_3c8 = uStack_2e8;
  uStack_3d0 = uStack_2f0;
  uStack_418 = uStack_338;
  uStack_420 = uStack_340;
  uStack_408 = uStack_328;
  uStack_410 = uStack_330;
  func_0x000107c610b4(auStack_260,param_1,0x101);
  func_0x000107c610b4(auStack_158,param_1,0x101);
  puVar2 = auStack_260;
  func_0x00010190a668();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    func_0x000107c610b4(&uStack_6f0,auStack_158,0x101);
    puVar3 = auStack_158;
    func_0x00010190a67c();
    if ((int)puVar3 == 3) {
      puVar4 = &uStack_6f0;
      FUN_10190a774();
      uStack_458 = uStack_378;
      uStack_460 = uStack_380;
      uStack_448 = uStack_368;
      uStack_450 = uStack_370;
      uStack_438 = uStack_358;
      uStack_440 = uStack_360;
      uStack_428 = uStack_348;
      uStack_430 = uStack_350;
      uStack_498 = uStack_3b8;
      uStack_4a0 = uStack_3c0;
      uStack_488 = uStack_3a8;
      uStack_490 = uStack_3b0;
      uStack_478 = uStack_398;
      uStack_480 = uStack_3a0;
      uStack_468 = uStack_388;
      uStack_470 = uStack_390;
      uStack_4d8 = uStack_3f8;
      uStack_4e0 = uStack_400;
      uStack_4c8 = uStack_3e8;
      uStack_4d0 = uStack_3f0;
      uStack_4b8 = uStack_3d8;
      uStack_4c0 = uStack_3e0;
      uStack_4a8 = uStack_3c8;
      uStack_4b0 = uStack_3d0;
      uStack_4f8 = uStack_418;
      uStack_500 = uStack_420;
      uStack_4e8 = uStack_408;
      uStack_4f0 = uStack_410;
      func_0x000107c610b4(auStack_7f8,auStack_260,0x101);
      FUN_10190a688(auStack_7f8,&uStack_900);
      FUN_1019120c0(&uStack_500,0x112dd28b0,&UNK_10d994ca0);
      uStack_8f8 = puVar4[1];
      uStack_900 = *puVar4;
      uStack_8e8 = puVar4[3];
      uStack_8f0 = puVar4[2];
      uStack_8b8 = puVar4[9];
      uStack_8c0 = puVar4[8];
      uStack_8a8 = puVar4[0xb];
      uStack_8b0 = puVar4[10];
      uStack_8d8 = puVar4[5];
      uStack_8e0 = puVar4[4];
      uStack_8c8 = puVar4[7];
      uStack_8d0 = puVar4[6];
      uStack_878 = puVar4[0x11];
      uStack_880 = puVar4[0x10];
      uStack_868 = puVar4[0x13];
      uStack_870 = puVar4[0x12];
      uStack_898 = puVar4[0xd];
      uStack_8a0 = puVar4[0xc];
      uStack_888 = puVar4[0xf];
      uStack_890 = puVar4[0xe];
      uStack_838 = puVar4[0x19];
      uStack_840 = puVar4[0x18];
      uStack_828 = puVar4[0x1b];
      uStack_830 = puVar4[0x1a];
      uStack_858 = puVar4[0x15];
      uStack_860 = puVar4[0x14];
      uStack_848 = puVar4[0x17];
      uStack_850 = puVar4[0x16];
      func_0x000101911fb4(&uStack_900);
      uStack_378 = uStack_858;
      uStack_380 = uStack_860;
      uStack_368 = uStack_848;
      uStack_370 = uStack_850;
      uStack_358 = uStack_838;
      uStack_360 = uStack_840;
      uStack_348 = uStack_828;
      uStack_350 = uStack_830;
      uStack_3b8 = uStack_898;
      uStack_3c0 = uStack_8a0;
      uStack_3a8 = uStack_888;
      uStack_3b0 = uStack_890;
      uStack_398 = uStack_878;
      uStack_3a0 = uStack_880;
      uStack_388 = uStack_868;
      uStack_390 = uStack_870;
      uStack_3f8 = uStack_8d8;
      uStack_400 = uStack_8e0;
      uStack_3e8 = uStack_8c8;
      uStack_3f0 = uStack_8d0;
      uStack_3d8 = uStack_8b8;
      uStack_3e0 = uStack_8c0;
      uStack_3c8 = uStack_8a8;
      uStack_3d0 = uStack_8b0;
      uStack_418 = uStack_8f8;
      uStack_420 = uStack_900;
      uStack_408 = uStack_8e8;
      uStack_410 = uStack_8f0;
      puVar3 = (undefined1 *)puVar5;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_10190c6bc();
  (*pcVar8)(&uStack_420,&UNK_110411588,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_538 = uStack_378;
    uStack_540 = uStack_380;
    uStack_528 = uStack_368;
    uStack_530 = uStack_370;
    uStack_518 = uStack_358;
    uStack_520 = uStack_360;
    uStack_508 = uStack_348;
    uStack_510 = uStack_350;
    uStack_578 = uStack_3b8;
    uStack_580 = uStack_3c0;
    uStack_568 = uStack_3a8;
    uStack_570 = uStack_3b0;
    uStack_558 = uStack_398;
    uStack_560 = uStack_3a0;
    uStack_548 = uStack_388;
    uStack_550 = uStack_390;
    uStack_5b8 = uStack_3f8;
    uStack_5c0 = uStack_400;
    uStack_5a8 = uStack_3e8;
    uStack_5b0 = uStack_3f0;
    uStack_598 = uStack_3d8;
    uStack_5a0 = uStack_3e0;
    uStack_588 = uStack_3c8;
    uStack_590 = uStack_3d0;
    uStack_5d8 = uStack_418;
    uStack_5e0 = uStack_420;
    uStack_5c8 = uStack_408;
    uStack_5d0 = uStack_410;
    uStack_458 = uStack_378;
    uStack_460 = uStack_380;
    uStack_448 = uStack_368;
    uStack_450 = uStack_370;
    uStack_438 = uStack_358;
    uStack_440 = uStack_360;
    uStack_428 = uStack_348;
    uStack_430 = uStack_350;
    uStack_498 = uStack_3b8;
    uStack_4a0 = uStack_3c0;
    uStack_488 = uStack_3a8;
    uStack_490 = uStack_3b0;
    uStack_478 = uStack_398;
    uStack_480 = uStack_3a0;
    uStack_468 = uStack_388;
    uStack_470 = uStack_390;
    uStack_4d8 = uStack_3f8;
    uStack_4e0 = uStack_400;
    uStack_4c8 = uStack_3e8;
    uStack_4d0 = uStack_3f0;
    uStack_4b8 = uStack_3d8;
    uStack_4c0 = uStack_3e0;
    uStack_4a8 = uStack_3c8;
    uStack_4b0 = uStack_3d0;
    uStack_4f8 = uStack_418;
    uStack_500 = uStack_420;
    uStack_4e8 = uStack_408;
    uStack_4f0 = uStack_410;
    iVar1 = (int)&uStack_5e0;
    func_0x000101911f90();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_648 = uStack_538;
        uStack_650 = uStack_540;
        uStack_638 = uStack_528;
        uStack_640 = uStack_530;
        uStack_628 = uStack_518;
        uStack_630 = uStack_520;
        uStack_618 = uStack_508;
        uStack_620 = uStack_510;
        uStack_688 = uStack_578;
        uStack_690 = uStack_580;
        uStack_678 = uStack_568;
        uStack_680 = uStack_570;
        uStack_668 = uStack_558;
        uStack_670 = uStack_560;
        uStack_658 = uStack_548;
        uStack_660 = uStack_550;
        uStack_6c8 = uStack_5b8;
        uStack_6d0 = uStack_5c0;
        uStack_6b8 = uStack_5a8;
        uStack_6c0 = uStack_5b0;
        uStack_6a8 = uStack_598;
        uStack_6b0 = uStack_5a0;
        uStack_698 = uStack_588;
        uStack_6a0 = uStack_590;
        uStack_6e8 = uStack_5d8;
        uStack_6f0 = uStack_5e0;
        uStack_6d8 = uStack_5c8;
        uStack_6e0 = uStack_5d0;
        FUN_10190a784(&uStack_6f0,auStack_7f8);
      }
      else {
        pcVar8 = *(code **)(param_4 + 8);
        uStack_648 = uStack_538;
        uStack_650 = uStack_540;
        uStack_638 = uStack_528;
        uStack_640 = uStack_530;
        uStack_628 = uStack_518;
        uStack_630 = uStack_520;
        uStack_618 = uStack_508;
        uStack_620 = uStack_510;
        uStack_688 = uStack_578;
        uStack_690 = uStack_580;
        uStack_678 = uStack_568;
        uStack_680 = uStack_570;
        uStack_668 = uStack_558;
        uStack_670 = uStack_560;
        uStack_658 = uStack_548;
        uStack_660 = uStack_550;
        uStack_6c8 = uStack_5b8;
        uStack_6d0 = uStack_5c0;
        uStack_6b8 = uStack_5a8;
        uStack_6c0 = uStack_5b0;
        uStack_6a8 = uStack_598;
        uStack_6b0 = uStack_5a0;
        uStack_698 = uStack_588;
        uStack_6a0 = uStack_590;
        uStack_6e8 = uStack_5d8;
        uStack_6f0 = uStack_5e0;
        uStack_6d8 = uStack_5c8;
        uStack_6e0 = uStack_5d0;
        FUN_10190a784(&uStack_6f0,auStack_7f8);
        (*pcVar8)(param_3,param_4);
      }
      FUN_1019120c0(&uStack_420,0x112dd28b0,&UNK_10d994ca0);
      uStack_858 = uStack_458;
      uStack_860 = uStack_460;
      uStack_848 = uStack_448;
      uStack_850 = uStack_450;
      uStack_838 = uStack_438;
      uStack_840 = uStack_440;
      uStack_828 = uStack_428;
      uStack_830 = uStack_430;
      uStack_898 = uStack_498;
      uStack_8a0 = uStack_4a0;
      uStack_888 = uStack_488;
      uStack_890 = uStack_490;
      uStack_878 = uStack_478;
      uStack_880 = uStack_480;
      uStack_868 = uStack_468;
      uStack_870 = uStack_470;
      uStack_8d8 = uStack_4d8;
      uStack_8e0 = uStack_4e0;
      uStack_8c8 = uStack_4c8;
      uStack_8d0 = uStack_4d0;
      uStack_8b8 = uStack_4b8;
      uStack_8c0 = uStack_4c0;
      uStack_8a8 = uStack_4a8;
      uStack_8b0 = uStack_4b0;
      uStack_8f8 = uStack_4f8;
      uStack_900 = uStack_500;
      uStack_8e8 = uStack_4e8;
      uStack_8f0 = uStack_4f0;
      FUN_10190a774(&uStack_900);
      func_0x000107c610b4(auStack_7f8,&uStack_900,0x101);
      func_0x00010190a6c4(auStack_7f8);
      func_0x000107c610b4(&uStack_6f0,param_1,0x101);
      func_0x000107c610b4(param_1,auStack_7f8,0x101);
      uVar6 = 0x112dd2170;
      puVar7 = &UNK_10d993510;
      puVar5 = &uStack_6f0;
      goto LAB_101903d6c;
    }
  }
  uVar6 = 0x112dd28b0;
  puVar7 = &UNK_10d994ca0;
  puVar5 = &uStack_420;
LAB_101903d6c:
  FUN_1019120c0(puVar5,uVar6,puVar7);
  return;
}


