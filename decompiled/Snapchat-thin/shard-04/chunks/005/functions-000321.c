/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10353ad04; end: 10353ad37;  */

void FUN_10353ad04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 10353ad38; end: 10353ad4b;  */

undefined1  [16] FUN_10353ad38(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x10353ad48;
  return auVar1;
}



/* Entry: 10353ad4c; end: 10353ad5f;  */

void FUN_10353ad4c(void)

{
  FUN_10353a8d8();
  return;
}



/* Entry: 10353ad60; end: 10353ada7;  */

void FUN_10353ad60(void)

{
  FUN_10353aa54();
  return;
}



/* Entry: 10353ada8; end: 10353addf;  */

uint FUN_10353ada8(long param_1,long param_2)

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
  func_0x00010354601c();
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



/* Entry: 10353ade0; end: 10353ae47;  */

uint FUN_10353ade0(undefined8 *param_1)

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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
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
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  FUN_1035421bc(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10353ae48; end: 10353aee7;  */

/* WARNING: Possible PIC construction at 0x00010353ae94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353aea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353ae98) */
/* WARNING: Removing unreachable block (ram,0x00010353aea8) */

void FUN_10353ae48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f774a8 != -1) {
    func_0x000107c61568(0x112f774a8,FUN_10353a890);
  }
  uVar5 = uRam0000000113808098;
  uVar4 = uRam0000000113808090;
  uVar3 = uRam0000000113808088;
  uVar2 = uRam0000000113808080;
  uVar1 = uRam0000000113808078;
  *param_1 = uRam0000000113808070;
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



/* Entry: 10353aee8; end: 10353aefb;  */

void FUN_10353aee8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77a08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77a08,&UNK_10dbd97f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10353aefc; end: 10353b027;  */

void FUN_10353aefc(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
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



/* Entry: 10353b028; end: 10353b0d7;  */

uint FUN_10353b028(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
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
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_1035421bc(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10353b0d8; end: 10353b177;  */

/* WARNING: Possible PIC construction at 0x00010353b124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353b134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353b128) */
/* WARNING: Removing unreachable block (ram,0x00010353b138) */

void FUN_10353b0d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f774c8 != -1) {
    func_0x000107c61568(0x112f774c8,0x10353b090);
  }
  uVar5 = uRam00000001138080c8;
  uVar4 = uRam00000001138080c0;
  uVar3 = uRam00000001138080b8;
  uVar2 = uRam00000001138080b0;
  uVar1 = uRam00000001138080a8;
  *param_1 = uRam00000001138080a0;
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



/* Entry: 10353b178; end: 10353b1bf;  */

void FUN_10353b178(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9c00,0xa0,2);
  uRam00000001138080d8 = uStack_38;
  uRam00000001138080d0 = uStack_40;
  uRam00000001138080e8 = uStack_28;
  uRam00000001138080e0 = uStack_30;
  uRam00000001138080f8 = uStack_18;
  uRam00000001138080f0 = uStack_20;
  return;
}



/* Entry: 10353b1c0; end: 10353b3b7;  */

/* WARNING: Removing unreachable block (ram,0x00010353b280) */
/* WARNING: Removing unreachable block (ram,0x00010353b2f0) */
/* WARNING: Removing unreachable block (ram,0x00010353b29c) */
/* WARNING: Removing unreachable block (ram,0x00010353b37c) */
/* WARNING: Removing unreachable block (ram,0x00010353b3b4) */
/* WARNING: Removing unreachable block (ram,0x00010353b398) */
/* WARNING: Removing unreachable block (ram,0x00010353b2d4) */
/* WARNING: Removing unreachable block (ram,0x00010353b328) */
/* WARNING: Removing unreachable block (ram,0x00010353b360) */
/* WARNING: Removing unreachable block (ram,0x00010353b30c) */
/* WARNING: Removing unreachable block (ram,0x00010353b344) */
/* WARNING: Removing unreachable block (ram,0x00010353b2b8) */

void FUN_10353b1c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_10353b3b8();
        break;
      case 2:
        FUN_10353b5a0();
        break;
      case 3:
        FUN_10353b85c();
        break;
      case 4:
        FUN_10353ba74();
        break;
      case 5:
        FUN_10353bc8c();
        break;
      case 6:
        FUN_10353bea4();
        break;
      case 7:
        FUN_10353c0fc();
        break;
      case 8:
        FUN_10353c354();
        break;
      case 9:
        FUN_10353c514();
        break;
      case 10:
        (**(code **)(param_3 + 0x60))(unaff_x20 + 0x50,param_2,param_3);
        break;
      case 0xb:
        FUN_10353c72c();
        break;
      case 0xc:
        FUN_10353c8ec();
        break;
      case 0xd:
        FUN_10353cb04();
      }
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10353b3b8; end: 10353b59f;  */

/* WARNING: Removing unreachable block (ram,0x00010353b4a8) */

void FUN_10353b3b8(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar7;
  long unaff_x21;
  code *pcVar8;
  undefined1 auStack_120 [80];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf000000000000000;
  uVar7 = *(ulong *)(param_1 + 0x10);
  bVar4 = (byte)param_1[0x12];
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  puVar6 = param_1;
  if ((!bVar5 || bVar4 != 0xff) &&
      (((uint)(uVar7 >> 0x3c) & 0xfffffc03) == 0 && (bVar4 & 0x3f) == 0)) {
    uStack_d0 = *(undefined8 *)param_1;
    uVar3 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(ulong *)(param_1 + 4);
    uStack_b8 = *(undefined8 *)(param_1 + 6);
    uStack_c0 = *(undefined8 *)(param_1 + 4);
    uStack_a8 = *(undefined8 *)(param_1 + 10);
    uStack_b0 = *(undefined8 *)(param_1 + 8);
    uStack_a0 = *(undefined8 *)(param_1 + 0xc);
    uStack_98 = (undefined1)*(undefined8 *)(param_1 + 0xe);
    uStack_97 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xe) >> 8);
    uStack_90 = (undefined1)uVar7;
    uStack_8f = (undefined7)(uVar7 >> 8);
    uStack_c8 = uVar1;
    bStack_88 = bVar4;
    FUN_10353a420(&uStack_d0,auStack_120);
    puVar6 = (uint *)0x0;
    FUN_10354605c(0,0,0xf000000000000000);
    uStack_80 = (ulong)uVar3;
    uStack_78 = uVar1;
    uStack_70 = uVar2;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_10354387c();
  (*pcVar8)(&uStack_80,&UNK_1106638b8,puVar6,param_3,param_4);
  uVar2 = uStack_70;
  uVar1 = uStack_78;
  uVar7 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_70 >> 0x3c < 0xf)) {
    if (bVar5 && bVar4 == 0xff) {
      func_0x00010006c00c(uStack_78,uStack_70);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_78,uStack_70);
      (*pcVar8)(param_3,param_4);
    }
    FUN_10354605c(uStack_80,uStack_78,uStack_70);
    uStack_a8 = *(undefined8 *)(param_1 + 10);
    uStack_b0 = *(undefined8 *)(param_1 + 8);
    uStack_a0 = *(undefined8 *)(param_1 + 0xc);
    uStack_98 = (undefined1)*(undefined8 *)(param_1 + 0xe);
    uStack_8f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_88 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_c8 = *(undefined8 *)(param_1 + 2);
    uStack_d0 = *(undefined8 *)param_1;
    uStack_b8 = *(undefined8 *)(param_1 + 6);
    uStack_c0 = *(undefined8 *)(param_1 + 4);
    *param_1 = (uint)uVar7;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(ulong *)(param_1 + 4) = uVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    FUN_103546078(&uStack_d0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    FUN_10354605c(uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 10353b5a0; end: 10353b85b;  */

/* WARNING: Removing unreachable block (ram,0x00010353b798) */

void FUN_10353b5a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  uint uVar14;
  long unaff_x21;
  code *pcVar15;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  byte bStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_70 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar13 = param_1[8];
  bVar8 = *(byte *)(param_1 + 9);
  bVar9 = ((uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar14 = (uint)bVar8;
  puVar10 = param_1;
  if ((!bVar9 || uVar14 != 0xff) &&
      ((uint)(uVar13 >> 0x3c) & 0xfffffc03 | (uVar14 & 0x3f) << 2) == 1) {
    uVar11 = *param_1;
    uVar4 = param_1[1];
    uVar1 = param_1[2];
    uVar5 = param_1[3];
    lVar2 = param_1[4];
    uVar6 = param_1[5];
    uVar3 = param_1[6];
    uVar7 = param_1[7];
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = (undefined1)uVar7;
    uStack_117 = (undefined7)((ulong)uVar7 >> 8);
    uStack_110 = (undefined1)uVar13;
    uStack_10f = (undefined7)(uVar13 >> 8);
    uStack_150 = uVar11;
    uStack_148 = uVar4;
    uStack_140 = uVar1;
    uStack_138 = uVar5;
    lStack_130 = lVar2;
    uStack_128 = uVar6;
    uStack_120 = uVar3;
    bStack_108 = bVar8;
    FUN_10353a420(&uStack_150,&uStack_1a0);
    puVar10 = &uStack_100;
    FUN_103546078(puVar10,0x112f77a20,&UNK_10dbd9bf8);
    uStack_b0 = uVar11;
    uStack_a8 = uVar4;
    uStack_a0 = uVar1;
    uStack_98 = uVar5;
    lStack_90 = lVar2;
    uStack_88 = uVar6;
    uStack_80 = uVar3;
    uStack_78 = uVar7;
    uStack_70 = uVar13 & 0xcfffffffffffffff;
  }
  pcVar15 = *(code **)(param_4 + 0x198);
  FUN_103543978();
  (*pcVar15)(&uStack_b0,&UNK_110663938,puVar10,param_3,param_4);
  uVar13 = uStack_70;
  uVar7 = uStack_78;
  uVar6 = uStack_80;
  uVar5 = uStack_88;
  lVar2 = lStack_90;
  uVar4 = uStack_98;
  uVar3 = uStack_a0;
  uVar1 = uStack_a8;
  uVar11 = uStack_b0;
  if (unaff_x21 == 0) {
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_178 = uStack_88;
    lStack_180 = lStack_90;
    uStack_168 = uStack_78;
    uStack_170 = uStack_80;
    uStack_160 = uStack_70;
    if (lStack_90 != 0) {
      uStack_118 = (undefined1)uStack_78;
      uStack_117 = (undefined7)((ulong)uStack_78 >> 8);
      uStack_110 = (undefined1)uStack_70;
      uStack_10f = (undefined7)(uStack_70 >> 8);
      if (bVar9 && uVar14 == 0xff) {
        uStack_128 = uStack_88;
        lStack_130 = lStack_90;
        uStack_120 = uStack_80;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        uStack_138 = uStack_98;
        uStack_140 = uStack_a0;
        func_0x00010353a454(&uStack_150,&uStack_100);
      }
      else {
        pcVar15 = *(code **)(param_4 + 8);
        uStack_128 = uStack_88;
        lStack_130 = lStack_90;
        uStack_120 = uStack_80;
        uStack_148 = uStack_a8;
        uStack_150 = uStack_b0;
        uStack_138 = uStack_98;
        uStack_140 = uStack_a0;
        func_0x00010353a454(&uStack_150,&uStack_100);
        (*pcVar15)(param_3,param_4);
      }
      FUN_103546078(&uStack_b0,0x112f77a20,&UNK_10dbd9bf8);
      uStack_128 = param_1[5];
      lStack_130 = param_1[4];
      uStack_120 = param_1[6];
      uStack_118 = (undefined1)param_1[7];
      uStack_10f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
      bStack_108 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
      uStack_117 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
      uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
      uStack_148 = param_1[1];
      uStack_150 = *param_1;
      uStack_138 = param_1[3];
      uStack_140 = param_1[2];
      param_1[1] = uVar1;
      *param_1 = uVar11;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      param_1[5] = uVar5;
      param_1[4] = lVar2;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      param_1[8] = uVar13 & 0xcfffffffffffffff | 0x1000000000000000;
      *(undefined1 *)(param_1 + 9) = 0;
      uVar11 = 0x112f76ff0;
      puVar12 = &UNK_10dbd7bd0;
      puVar10 = &uStack_150;
      goto LAB_10353b6fc;
    }
  }
  uVar11 = 0x112f77a20;
  puVar12 = &UNK_10dbd9bf8;
  puVar10 = &uStack_b0;
LAB_10353b6fc:
  FUN_103546078(puVar10,uVar11,puVar12);
  return;
}



/* Entry: 10353b85c; end: 10353ba73;  */

/* WARNING: Removing unreachable block (ram,0x00010353b9c0) */

void FUN_10353b85c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined1 auStack_130 [80];
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0xf000000000000000;
  bVar5 = *(byte *)(param_1 + 9);
  bVar6 = ((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)bVar5;
  puVar7 = param_1;
  if ((!bVar6 || uVar8 != 0xff) &&
      ((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 2) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uStack_c0 = param_1[4];
    uStack_c8 = param_1[3];
    uStack_b0 = param_1[6];
    uStack_b8 = param_1[5];
    uStack_a0 = (undefined1)param_1[8];
    uStack_9f = (undefined7)((ulong)param_1[8] >> 8);
    uStack_a8 = (undefined1)param_1[7];
    uStack_a7 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_e0 = uVar1;
    uStack_d8 = uVar3;
    uStack_d0 = uVar2;
    bStack_98 = bVar5;
    FUN_10353a420(&uStack_e0,auStack_130);
    puVar7 = (undefined8 *)0x0;
    func_0x000100d55aec(0,0,0,0xf000000000000000);
    uStack_88 = uVar3 & 0xff;
    uStack_90 = uVar1;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_103543a74();
  (*pcVar9)(&uStack_90,&UNK_110663a60,puVar7,param_3,param_4);
  uVar4 = uStack_78;
  uVar2 = uStack_80;
  uVar3 = uStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar6 && uVar8 == 0xff) {
      func_0x00010006c00c(uStack_80,uStack_78);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_80,uStack_78);
      (*pcVar9)(param_3,param_4);
    }
    func_0x000100d55aec(uStack_90,uStack_88,uStack_80,uStack_78);
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_b0 = param_1[6];
    uStack_a8 = (undefined1)param_1[7];
    uStack_9f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_98 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_d8 = param_1[1];
    uStack_e0 = *param_1;
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar3 & 0xff;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    param_1[8] = 0x2000000000000000;
    *(undefined1 *)(param_1 + 9) = 0;
    FUN_103546078(&uStack_e0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    func_0x000100d55aec(uStack_90,uStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10353ba74; end: 10353bc8b;  */

/* WARNING: Removing unreachable block (ram,0x00010353bbd8) */

void FUN_10353ba74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined1 auStack_130 [80];
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0xf000000000000000;
  bVar5 = *(byte *)(param_1 + 9);
  bVar6 = ((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)bVar5;
  puVar7 = param_1;
  if ((!bVar6 || uVar8 != 0xff) &&
      ((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 3) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uStack_c0 = param_1[4];
    uStack_c8 = param_1[3];
    uStack_b0 = param_1[6];
    uStack_b8 = param_1[5];
    uStack_a0 = (undefined1)param_1[8];
    uStack_9f = (undefined7)((ulong)param_1[8] >> 8);
    uStack_a8 = (undefined1)param_1[7];
    uStack_a7 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_e0 = uVar1;
    uStack_d8 = uVar3;
    uStack_d0 = uVar2;
    bStack_98 = bVar5;
    FUN_10353a420(&uStack_e0,auStack_130);
    puVar7 = (undefined8 *)0x0;
    func_0x000100d55aec(0,0,0,0xf000000000000000);
    uStack_88 = uVar3 & 0xff;
    uStack_90 = uVar1;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_103543b70();
  (*pcVar9)(&uStack_90,&UNK_110663b70,puVar7,param_3,param_4);
  uVar4 = uStack_78;
  uVar2 = uStack_80;
  uVar3 = uStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar6 && uVar8 == 0xff) {
      func_0x00010006c00c(uStack_80,uStack_78);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_80,uStack_78);
      (*pcVar9)(param_3,param_4);
    }
    func_0x000100d55aec(uStack_90,uStack_88,uStack_80,uStack_78);
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_b0 = param_1[6];
    uStack_a8 = (undefined1)param_1[7];
    uStack_9f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_98 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_d8 = param_1[1];
    uStack_e0 = *param_1;
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar3 & 0xff;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    param_1[8] = 0x3000000000000000;
    *(undefined1 *)(param_1 + 9) = 0;
    FUN_103546078(&uStack_e0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    func_0x000100d55aec(uStack_90,uStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10353bc8c; end: 10353bea3;  */

/* WARNING: Removing unreachable block (ram,0x00010353bdf0) */

void FUN_10353bc8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined1 auStack_130 [80];
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0xf000000000000000;
  bVar5 = *(byte *)(param_1 + 9);
  bVar6 = ((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)bVar5;
  puVar7 = param_1;
  if ((!bVar6 || uVar8 != 0xff) &&
      ((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 4) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uStack_c0 = param_1[4];
    uStack_c8 = param_1[3];
    uStack_b0 = param_1[6];
    uStack_b8 = param_1[5];
    uStack_a0 = (undefined1)param_1[8];
    uStack_9f = (undefined7)((ulong)param_1[8] >> 8);
    uStack_a8 = (undefined1)param_1[7];
    uStack_a7 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_e0 = uVar1;
    uStack_d8 = uVar3;
    uStack_d0 = uVar2;
    bStack_98 = bVar5;
    FUN_10353a420(&uStack_e0,auStack_130);
    puVar7 = (undefined8 *)0x0;
    func_0x000100d55aec(0,0,0,0xf000000000000000);
    uStack_88 = uVar3 & 0xff;
    uStack_90 = uVar1;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_103543c6c();
  (*pcVar9)(&uStack_90,&UNK_110663c80,puVar7,param_3,param_4);
  uVar4 = uStack_78;
  uVar2 = uStack_80;
  uVar3 = uStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar6 && uVar8 == 0xff) {
      func_0x00010006c00c(uStack_80,uStack_78);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_80,uStack_78);
      (*pcVar9)(param_3,param_4);
    }
    func_0x000100d55aec(uStack_90,uStack_88,uStack_80,uStack_78);
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_b0 = param_1[6];
    uStack_a8 = (undefined1)param_1[7];
    uStack_9f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_98 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_d8 = param_1[1];
    uStack_e0 = *param_1;
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar3 & 0xff;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_103546078(&uStack_e0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    func_0x000100d55aec(uStack_90,uStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10353bea4; end: 10353c0fb;  */

/* WARNING: Removing unreachable block (ram,0x00010353c028) */

void FUN_10353bea4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint uVar10;
  long unaff_x21;
  code *pcVar11;
  undefined1 auStack_140 [80];
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  byte bStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_78 = 0xf000000000000000;
  bVar7 = *(byte *)(param_1 + 9);
  bVar8 = ((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar10 = (uint)bVar7;
  puVar9 = param_1;
  if ((!bVar8 || uVar10 != 0xff) &&
      ((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (uVar10 & 0x3f) << 2) == 5) {
    uVar1 = *param_1;
    uVar4 = param_1[1];
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    uVar3 = param_1[4];
    uVar6 = param_1[5];
    uStack_c0 = param_1[6];
    uStack_c8 = param_1[5];
    uStack_b0 = (undefined1)param_1[8];
    uStack_af = (undefined7)((ulong)param_1[8] >> 8);
    uStack_b8 = (undefined1)param_1[7];
    uStack_b7 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_f0 = uVar1;
    uStack_e8 = uVar4;
    uStack_e0 = uVar2;
    uStack_d8 = uVar5;
    uStack_d0 = uVar3;
    bStack_a8 = bVar7;
    FUN_10353a420(&uStack_f0,auStack_140);
    puVar9 = (undefined8 *)0x0;
    func_0x000100d55b08(0,0,0,0,0,0xf000000000000000);
    uStack_98 = uVar4 & 0xff;
    uStack_88 = uVar5 & 0xff;
    uStack_a0 = uVar1;
    uStack_90 = uVar2;
    uStack_80 = uVar3;
    uStack_78 = uVar6;
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_103543d68();
  (*pcVar11)(&uStack_a0,&UNK_110663d90,puVar9,param_3,param_4);
  uVar6 = uStack_78;
  uVar3 = uStack_80;
  uVar5 = uStack_88;
  uVar2 = uStack_90;
  uVar4 = uStack_98;
  uVar1 = uStack_a0;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar8 && uVar10 == 0xff) {
      func_0x00010006c00c(uStack_80,uStack_78);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_80,uStack_78);
      (*pcVar11)(param_3,param_4);
    }
    func_0x000100d55b08(uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_c0 = param_1[6];
    uStack_b8 = (undefined1)param_1[7];
    uStack_af = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_a8 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_e8 = param_1[1];
    uStack_f0 = *param_1;
    uStack_d8 = param_1[3];
    uStack_e0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar4 & 0xff;
    param_1[2] = uVar2;
    param_1[3] = uVar5 & 0xff;
    param_1[4] = uVar3;
    param_1[5] = uVar6;
    param_1[8] = 0x1000000000000000;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_103546078(&uStack_f0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    func_0x000100d55b08(uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10353c0fc; end: 10353c353;  */

/* WARNING: Removing unreachable block (ram,0x00010353c280) */

void FUN_10353c0fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint uVar10;
  long unaff_x21;
  code *pcVar11;
  undefined1 auStack_140 [80];
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  byte bStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_78 = 0xf000000000000000;
  bVar7 = *(byte *)(param_1 + 9);
  bVar8 = ((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar10 = (uint)bVar7;
  puVar9 = param_1;
  if ((!bVar8 || uVar10 != 0xff) &&
      ((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (uVar10 & 0x3f) << 2) == 6) {
    uVar1 = *param_1;
    uVar4 = param_1[1];
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    uVar3 = param_1[4];
    uVar6 = param_1[5];
    uStack_c0 = param_1[6];
    uStack_c8 = param_1[5];
    uStack_b0 = (undefined1)param_1[8];
    uStack_af = (undefined7)((ulong)param_1[8] >> 8);
    uStack_b8 = (undefined1)param_1[7];
    uStack_b7 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_f0 = uVar1;
    uStack_e8 = uVar4;
    uStack_e0 = uVar2;
    uStack_d8 = uVar5;
    uStack_d0 = uVar3;
    bStack_a8 = bVar7;
    FUN_10353a420(&uStack_f0,auStack_140);
    puVar9 = (undefined8 *)0x0;
    func_0x000100d55b08(0,0,0,0,0,0xf000000000000000);
    uStack_98 = uVar4 & 0xff;
    uStack_88 = uVar5 & 0xff;
    uStack_a0 = uVar1;
    uStack_90 = uVar2;
    uStack_80 = uVar3;
    uStack_78 = uVar6;
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_103543e64();
  (*pcVar11)(&uStack_a0,&UNK_110663f38,puVar9,param_3,param_4);
  uVar6 = uStack_78;
  uVar3 = uStack_80;
  uVar5 = uStack_88;
  uVar2 = uStack_90;
  uVar4 = uStack_98;
  uVar1 = uStack_a0;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar8 && uVar10 == 0xff) {
      func_0x00010006c00c(uStack_80,uStack_78);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_80,uStack_78);
      (*pcVar11)(param_3,param_4);
    }
    func_0x000100d55b08(uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_c0 = param_1[6];
    uStack_b8 = (undefined1)param_1[7];
    uStack_af = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_a8 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_e8 = param_1[1];
    uStack_f0 = *param_1;
    uStack_d8 = param_1[3];
    uStack_e0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar4 & 0xff;
    param_1[2] = uVar2;
    param_1[3] = uVar5 & 0xff;
    param_1[4] = uVar3;
    param_1[5] = uVar6;
    param_1[8] = 0x2000000000000000;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_103546078(&uStack_f0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    func_0x000100d55b08(uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10353c354; end: 10353c513;  */

/* WARNING: Removing unreachable block (ram,0x00010353c480) */

void FUN_10353c354(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long unaff_x21;
  code *pcVar7;
  undefined1 auStack_120 [80];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  bVar3 = *(byte *)(param_1 + 9);
  bVar4 = ((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar6 = (uint)bVar3;
  puVar5 = param_1;
  if ((!bVar4 || uVar6 != 0xff) &&
      ((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (uVar6 & 0x3f) << 2) == 7) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_c0 = param_1[2];
    uStack_c8 = param_1[1];
    uStack_b0 = param_1[4];
    uStack_b8 = param_1[3];
    uStack_a0 = param_1[6];
    uStack_a8 = param_1[5];
    uStack_90 = (undefined1)param_1[8];
    uStack_8f = (undefined7)((ulong)param_1[8] >> 8);
    uStack_98 = (undefined1)param_1[7];
    uStack_97 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_d0 = uVar1;
    bStack_88 = bVar3;
    FUN_10353a420(&uStack_d0,auStack_120);
    puVar5 = (undefined8 *)0x0;
    func_0x000100d55b24(0,0xf000000000000000);
    uStack_80 = uVar1;
    uStack_78 = uVar2;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_103543f60();
  (*pcVar7)(&uStack_80,&UNK_1106640e0,puVar5,param_3,param_4);
  uVar2 = uStack_78;
  uVar1 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar4 && uVar6 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d55b24(uStack_80,uStack_78);
    uStack_a8 = param_1[5];
    uStack_b0 = param_1[4];
    uStack_a0 = param_1[6];
    uStack_98 = (undefined1)param_1[7];
    uStack_8f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_88 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_c8 = param_1[1];
    uStack_d0 = *param_1;
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[8] = 0x3000000000000000;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_103546078(&uStack_d0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    func_0x000100d55b24(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10353c514; end: 10353c72b;  */

/* WARNING: Removing unreachable block (ram,0x00010353c678) */

void FUN_10353c514(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined1 auStack_130 [80];
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0xf000000000000000;
  bVar5 = *(byte *)(param_1 + 9);
  bVar6 = ((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)bVar5;
  puVar7 = param_1;
  if ((!bVar6 || uVar8 != 0xff) &&
      ((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 8) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uStack_c0 = param_1[4];
    uStack_c8 = param_1[3];
    uStack_b0 = param_1[6];
    uStack_b8 = param_1[5];
    uStack_a0 = (undefined1)param_1[8];
    uStack_9f = (undefined7)((ulong)param_1[8] >> 8);
    uStack_a8 = (undefined1)param_1[7];
    uStack_a7 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_e0 = uVar1;
    uStack_d8 = uVar3;
    uStack_d0 = uVar2;
    bStack_98 = bVar5;
    FUN_10353a420(&uStack_e0,auStack_130);
    puVar7 = (undefined8 *)0x0;
    func_0x000100d55aec(0,0,0,0xf000000000000000);
    uStack_88 = uVar3 & 0xff;
    uStack_90 = uVar1;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_10354405c();
  (*pcVar9)(&uStack_90,&UNK_110664160,puVar7,param_3,param_4);
  uVar4 = uStack_78;
  uVar2 = uStack_80;
  uVar3 = uStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar6 && uVar8 == 0xff) {
      func_0x00010006c00c(uStack_80,uStack_78);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_80,uStack_78);
      (*pcVar9)(param_3,param_4);
    }
    func_0x000100d55aec(uStack_90,uStack_88,uStack_80,uStack_78);
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_b0 = param_1[6];
    uStack_a8 = (undefined1)param_1[7];
    uStack_9f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_98 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_d8 = param_1[1];
    uStack_e0 = *param_1;
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar3 & 0xff;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 2;
    FUN_103546078(&uStack_e0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    func_0x000100d55aec(uStack_90,uStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10353c72c; end: 10353c8eb;  */

/* WARNING: Removing unreachable block (ram,0x00010353c858) */

void FUN_10353c72c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long unaff_x21;
  code *pcVar7;
  undefined1 auStack_120 [80];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  bVar3 = *(byte *)(param_1 + 9);
  bVar4 = ((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar6 = (uint)bVar3;
  puVar5 = param_1;
  if ((!bVar4 || uVar6 != 0xff) &&
      ((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (uVar6 & 0x3f) << 2) == 9) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_c0 = param_1[2];
    uStack_c8 = param_1[1];
    uStack_b0 = param_1[4];
    uStack_b8 = param_1[3];
    uStack_a0 = param_1[6];
    uStack_a8 = param_1[5];
    uStack_90 = (undefined1)param_1[8];
    uStack_8f = (undefined7)((ulong)param_1[8] >> 8);
    uStack_98 = (undefined1)param_1[7];
    uStack_97 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_d0 = uVar1;
    bStack_88 = bVar3;
    FUN_10353a420(&uStack_d0,auStack_120);
    puVar5 = (undefined8 *)0x0;
    func_0x000100d55b24(0,0xf000000000000000);
    uStack_80 = uVar1;
    uStack_78 = uVar2;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_103544158();
  (*pcVar7)(&uStack_80,&UNK_110664270,puVar5,param_3,param_4);
  uVar2 = uStack_78;
  uVar1 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar4 && uVar6 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d55b24(uStack_80,uStack_78);
    uStack_a8 = param_1[5];
    uStack_b0 = param_1[4];
    uStack_a0 = param_1[6];
    uStack_98 = (undefined1)param_1[7];
    uStack_8f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_88 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_c8 = param_1[1];
    uStack_d0 = *param_1;
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[8] = 0x1000000000000000;
    *(undefined1 *)(param_1 + 9) = 2;
    FUN_103546078(&uStack_d0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    func_0x000100d55b24(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10353c8ec; end: 10353cb03;  */

/* WARNING: Removing unreachable block (ram,0x00010353ca54) */

void FUN_10353c8ec(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined1 auStack_120 [80];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 2;
  uVar7 = param_1[8];
  bVar3 = (byte)param_1[9];
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)bVar3;
  puVar6 = param_1;
  if ((!bVar5 || uVar8 != 0xff) && ((uint)(uVar7 >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 10)
  {
    uVar4 = *param_1;
    uStack_d0 = *param_1;
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    uStack_a8 = param_1[5];
    uStack_b0 = param_1[4];
    uStack_a0 = param_1[6];
    uStack_98 = (undefined1)param_1[7];
    uStack_97 = (undefined7)(param_1[7] >> 8);
    uStack_90 = (undefined1)uVar7;
    uStack_8f = (undefined7)(uVar7 >> 8);
    uStack_c8 = uVar1;
    bStack_88 = bVar3;
    FUN_10353a420(&uStack_d0,auStack_120);
    puVar6 = (ulong *)0x2;
    FUN_1035460b8(2,0,0);
    uStack_80 = (ulong)(byte)uVar4 & 1;
    uStack_78 = uVar1;
    uStack_70 = uVar2;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_103544284();
  (*pcVar9)(&uStack_80,&UNK_1106642f0,puVar6,param_3,param_4);
  uVar2 = uStack_70;
  uVar1 = uStack_78;
  uVar7 = uStack_80;
  if ((unaff_x21 == 0) && ((uStack_80 & 0xff) != 2)) {
    if (bVar5 && uVar8 == 0xff) {
      func_0x00010006c00c(uStack_78,uStack_70);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_78,uStack_70);
      (*pcVar9)(param_3,param_4);
    }
    FUN_1035460b8(uStack_80,uStack_78,uStack_70);
    uStack_a8 = param_1[5];
    uStack_b0 = param_1[4];
    uStack_a0 = param_1[6];
    uStack_98 = (undefined1)param_1[7];
    uStack_8f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_88 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_c8 = param_1[1];
    uStack_d0 = *param_1;
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    *param_1 = uVar7 & 1;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[8] = 0x2000000000000000;
    *(byte *)(param_1 + 9) = 2;
    FUN_103546078(&uStack_d0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    FUN_1035460b8(uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 10353cb04; end: 10353cd77;  */

/* WARNING: Removing unreachable block (ram,0x00010353ccc4) */

void FUN_10353cb04(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  long unaff_x21;
  code *pcVar13;
  undefined1 auStack_140 [80];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  byte bStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar11 = *(ulong *)(param_1 + 0x10);
  bVar8 = (byte)param_1[0x12];
  bVar9 = ((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar12 = (uint)bVar8;
  puVar10 = param_1;
  if ((!bVar9 || uVar12 != 0xff) &&
      ((uint)(uVar11 >> 0x3c) & 0xfffffc03 | (uVar12 & 0x3f) << 2) == 0xb) {
    uStack_f0 = *(undefined8 *)param_1;
    uVar7 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    uVar4 = *(ulong *)(param_1 + 4);
    lVar2 = *(long *)(param_1 + 6);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 10);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    uStack_c0 = *(undefined8 *)(param_1 + 0xc);
    uStack_b8 = (undefined1)*(undefined8 *)(param_1 + 0xe);
    uStack_b7 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xe) >> 8);
    uStack_b0 = (undefined1)uVar11;
    uStack_af = (undefined7)(uVar11 >> 8);
    uStack_e8 = uVar1;
    uStack_e0 = uVar4;
    lStack_d8 = lVar2;
    uStack_d0 = uVar5;
    uStack_c8 = uVar3;
    bStack_a8 = bVar8;
    FUN_10353a420(&uStack_f0,auStack_140);
    puVar10 = (uint *)0x0;
    FUN_1035460d4(0,0,0,0,0,0,0);
    uStack_90 = uVar4 & 0xff;
    uStack_a0 = (ulong)uVar7;
    uStack_98 = uVar1;
    lStack_88 = lVar2;
    uStack_80 = uVar5;
    uStack_78 = uVar3;
    uStack_70 = uVar6;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  FUN_103543780();
  (*pcVar13)(&uStack_a0,&UNK_110663798,puVar10,param_3,param_4);
  uVar6 = uStack_70;
  uVar5 = uStack_78;
  uVar3 = uStack_80;
  lVar2 = lStack_88;
  uVar4 = uStack_90;
  uVar1 = uStack_98;
  uVar11 = uStack_a0;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (bVar9 && uVar12 == 0xff) {
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar5,uVar6);
    }
    else {
      pcVar13 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar5,uVar6);
      (*pcVar13)(param_3,param_4);
    }
    FUN_1035460d4(uStack_a0,uStack_98,uStack_90,lStack_88,uStack_80,uStack_78,uStack_70);
    uStack_c8 = *(undefined8 *)(param_1 + 10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_c0 = *(undefined8 *)(param_1 + 0xc);
    uStack_b8 = (undefined1)*(undefined8 *)(param_1 + 0xe);
    uStack_af = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_a8 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_e8 = *(undefined8 *)(param_1 + 2);
    uStack_f0 = *(undefined8 *)param_1;
    lStack_d8 = *(long *)(param_1 + 6);
    uStack_e0 = *(ulong *)(param_1 + 4);
    *param_1 = (uint)uVar11;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(ulong *)(param_1 + 4) = uVar4 & 0xff;
    *(long *)(param_1 + 6) = lVar2;
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 10) = uVar5;
    *(undefined8 *)(param_1 + 0xc) = uVar6;
    param_1[0x10] = 0;
    param_1[0x11] = 0x30000000;
    *(undefined1 *)(param_1 + 0x12) = 2;
    FUN_103546078(&uStack_f0,0x112f76ff0,&UNK_10dbd7bd0);
  }
  else {
    FUN_1035460d4(uStack_a0,uStack_98,uStack_90,lStack_88,uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 10353cd78; end: 10353cfeb;  */

void FUN_10353cd78(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long unaff_x20;
  long unaff_x21;
  uint uVar4;
  
  bVar3 = ((*(ulong *)(unaff_x20 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  uVar4 = (uint)*(byte *)(unaff_x20 + 0x48);
  uVar2 = (uint)(*(ulong *)(unaff_x20 + 0x40) >> 0x20);
  if (bVar3 || uVar4 != 0xff) {
    uVar1 = uVar2 >> 0x1c & 0xfffffc03 | (uVar4 & 0x3f) << 2;
    if (uVar1 < 4) {
      if (uVar1 < 2) {
        if (uVar1 == 0) {
          FUN_10353cfec();
        }
        else {
          if (uVar1 != 1) goto LAB_10353cdc0;
          FUN_10353d098();
        }
      }
      else if (uVar1 == 2) {
        FUN_10353d150();
      }
      else {
        if (uVar1 != 3) goto LAB_10353cdc0;
        FUN_10353d1f8();
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 4) {
        FUN_10353d2a0();
      }
      else {
        if (uVar1 != 5) goto LAB_10353cdc0;
        FUN_10353d348();
      }
    }
    else if (uVar1 == 6) {
      FUN_10353d3f8();
    }
    else if (uVar1 == 7) {
      FUN_10353d4a8();
    }
    else {
      if (uVar1 != 8) goto LAB_10353cdc0;
      FUN_10353d550();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
LAB_10353cdc0:
  if ((*(long *)(unaff_x20 + 0x50) != 0) &&
     ((**(code **)(param_3 + 0x20))(*(long *)(unaff_x20 + 0x50),10,param_2,param_3), unaff_x21 != 0)
     ) {
    return;
  }
  if (bVar3 || uVar4 != 0xff) {
    uVar2 = uVar2 >> 0x1c & 0xfffffc03 | (uVar4 & 0x3f) << 2;
    if (uVar2 == 0xb) {
      FUN_10353d750();
    }
    else if (uVar2 == 10) {
      FUN_10353d6a0();
    }
    else {
      if (uVar2 != 9) goto LAB_10353cde4;
      FUN_10353d5f8();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
LAB_10353cde4:
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      param_2,param_3);
  return;
}



/* Entry: 10353cfec; end: 10353d097;  */

void FUN_10353cfec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03) == 0 && (*(byte *)(param_1 + 9) & 0x3f) == 0)
     ) {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10354387c();
    (*pcVar1)(&uStack_60,1,&UNK_1106638b8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d098);
  (*pcVar1)();
}



/* Entry: 10353d098; end: 10353d14f;  */

void FUN_10353d098(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  if (((((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)(uStack_50 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 1)) {
    uStack_50 = uStack_50 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103543978();
    (*pcVar1)(&uStack_90,2,&UNK_110663938,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d150);
  (*pcVar1)();
}



/* Entry: 10353d150; end: 10353d1f7;  */

void FUN_10353d150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 2))
  {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103543a74();
    (*pcVar1)(&uStack_60,3,&UNK_110663a60,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d1f8);
  (*pcVar1)();
}



/* Entry: 10353d1f8; end: 10353d29f;  */

void FUN_10353d1f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 3))
  {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103543b70();
    (*pcVar1)(&uStack_60,4,&UNK_110663b70,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d2a0);
  (*pcVar1)();
}



/* Entry: 10353d2a0; end: 10353d347;  */

void FUN_10353d2a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 4))
  {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103543c6c();
    (*pcVar1)(&uStack_60,5,&UNK_110663c80,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d348);
  (*pcVar1)();
}



/* Entry: 10353d348; end: 10353d3f7;  */

void FUN_10353d348(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 5))
  {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103543d68();
    (*pcVar1)(&uStack_70,6,&UNK_110663d90,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d3f8);
  (*pcVar1)();
}



/* Entry: 10353d3f8; end: 10353d4a7;  */

void FUN_10353d3f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 6))
  {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103543e64();
    (*pcVar1)(&uStack_70,7,&UNK_110663f38,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d4a8);
  (*pcVar1)();
}



/* Entry: 10353d4a8; end: 10353d54f;  */

void FUN_10353d4a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 7))
  {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103543f60();
    (*pcVar1)(&uStack_50,8,&UNK_1106640e0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d550);
  (*pcVar1)();
}



/* Entry: 10353d550; end: 10353d5f7;  */

void FUN_10353d550(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 8))
  {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10354405c();
    (*pcVar1)(&uStack_60,9,&UNK_110664160,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d5f8);
  (*pcVar1)();
}



/* Entry: 10353d5f8; end: 10353d69f;  */

void FUN_10353d5f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 9))
  {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103544158();
    (*pcVar1)(&uStack_50,0xb,&UNK_110664270,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d6a0);
  (*pcVar1)();
}



/* Entry: 10353d6a0; end: 10353d74f;  */

void FUN_10353d6a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 10)
     ) {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103544284();
    (*pcVar1)(&uStack_60,0xc,&UNK_1106642f0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d750);
  (*pcVar1)();
}



/* Entry: 10353d750; end: 10353d807;  */

void FUN_10353d750(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = param_1[6];
  if (((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 9) != 0xff)) &&
     (((uint)((ulong)param_1[8] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 9) & 0x3f) << 2) == 0xb
     )) {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103543780();
    (*pcVar1)(&uStack_80,0xd,&UNK_110663798,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10353d808);
  (*pcVar1)();
}



/* Entry: 10353d808; end: 10353d857;  */

void FUN_10353d808(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 9) = 0xff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xc000000000000000;
  return;
}



/* Entry: 10353d858; end: 10353d887;  */

undefined1  [16] FUN_10353d858(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 10353d888; end: 10353d8bb;  */

void FUN_10353d888(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 10353d8bc; end: 10353d8cf;  */

undefined1  [16] FUN_10353d8bc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x10353d8cc;
  return auVar1;
}



/* Entry: 10353d8d0; end: 10353d8e3;  */

void FUN_10353d8d0(void)

{
  FUN_10353b1c0();
  return;
}



/* Entry: 10353d8e4; end: 10353d92b;  */

void FUN_10353d8e4(void)

{
  FUN_10353cd78();
  return;
}



/* Entry: 10353d92c; end: 10353d963;  */

uint FUN_10353d92c(long param_1,long param_2)

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
  func_0x000103545fdc();
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



/* Entry: 10353d964; end: 10353d9cb;  */

uint FUN_10353d964(undefined8 *param_1)

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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
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
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  FUN_103541f1c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10353d9cc; end: 10353da6b;  */

/* WARNING: Possible PIC construction at 0x00010353da18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353da28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353da1c) */
/* WARNING: Removing unreachable block (ram,0x00010353da2c) */

void FUN_10353d9cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f774d0 != -1) {
    func_0x000107c61568(0x112f774d0,FUN_10353b178);
  }
  uVar5 = uRam00000001138080f8;
  uVar4 = uRam00000001138080f0;
  uVar3 = uRam00000001138080e8;
  uVar2 = uRam00000001138080e0;
  uVar1 = uRam00000001138080d8;
  *param_1 = uRam00000001138080d0;
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



/* Entry: 10353da6c; end: 10353da7f;  */

void FUN_10353da6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f779f8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f779f8,&UNK_10dbd97f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10353da80; end: 10353dab3;  */

void FUN_10353da80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10353dab4; end: 10353dbdf;  */

void FUN_10353dab4(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
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



/* Entry: 10353dbe0; end: 10353dc8f;  */

uint FUN_10353dbe0(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
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
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_103541f1c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10353dc90; end: 10353dd93;  */

/* WARNING: Removing unreachable block (ram,0x00010353dd68) */

void FUN_10353dc90(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x18);
          goto LAB_10353dcf8;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x0001035424a0();
          (*pcVar4)(unaff_x20 + 8,&UNK_110663840,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x160);
        }
        else {
          if (lVar1 != 4) goto LAB_10353dd08;
          pcVar4 = *(code **)(param_3 + 0x90);
        }
LAB_10353dcf8:
        (*pcVar4)();
      }
LAB_10353dd08:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10353dd94; end: 10353de97;  */

void FUN_10353dd94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar1 = param_1;
  if (*unaff_x20 != 0) {
    uVar1 = 1;
    (**(code **)(param_3 + 8))(1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x20 + 2) != 0) {
    uStack_48 = (undefined1)unaff_x20[4];
    pcVar2 = *(code **)(param_3 + 0x80);
    lStack_50 = *(long *)(unaff_x20 + 2);
    func_0x0001035424a0();
    (*pcVar2)(&lStack_50,2,&UNK_110663840,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((*(long *)(*(long *)(unaff_x20 + 6) + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x100))(*(long *)(unaff_x20 + 6),3,param_2,param_3), unaff_x21 == 0))
     && ((*(long *)(unaff_x20 + 8) == 0 ||
         ((**(code **)(param_3 + 0x30))(*(long *)(unaff_x20 + 8),4,param_2,param_3), unaff_x21 == 0)
         ))) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 10),*(undefined8 *)(unaff_x20 + 0xc),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10353de98; end: 10353dee3;  */

void FUN_10353de98(undefined4 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 6) = puVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xc000000000000000;
  return;
}



/* Entry: 10353dee4; end: 10353df13;  */

undefined1  [16] FUN_10353dee4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 10353df14; end: 10353df47;  */

void FUN_10353df14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 10353df48; end: 10353df5b;  */

undefined1  [16] FUN_10353df48(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x10353df58;
  return auVar1;
}



/* Entry: 10353df5c; end: 10353df83;  */

void FUN_10353df5c(void)

{
  FUN_10353dc90();
  return;
}



/* Entry: 10353df84; end: 10353df87;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10353df84(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10353df88; end: 10353dfbf;  */

uint FUN_10353df88(long param_1,long param_2)

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
  func_0x000103545f9c();
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



/* Entry: 10353dfc0; end: 10353e017;  */

uint FUN_10353dfc0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_103541650(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10353e018; end: 10353e0b7;  */

/* WARNING: Possible PIC construction at 0x00010353e064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353e074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353e068) */
/* WARNING: Removing unreachable block (ram,0x00010353e078) */

void FUN_10353e018(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f774e0 != -1) {
    func_0x000107c61568(0x112f774e0,0x10353dc48);
  }
  uVar5 = uRam0000000113808128;
  uVar4 = uRam0000000113808120;
  uVar3 = uRam0000000113808118;
  uVar2 = uRam0000000113808110;
  uVar1 = uRam0000000113808108;
  *param_1 = uRam0000000113808100;
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



/* Entry: 10353e0b8; end: 10353e0f3;  */

void FUN_10353e0b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f779e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f779e8,&UNK_10dbd97e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10353e0f4; end: 10353e237;  */

void FUN_10353e0f4(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = *(undefined8 *)(unaff_x20 + 2);
  uStack_58 = *(undefined1 *)(unaff_x20 + 4);
  uStack_50 = *(undefined8 *)(unaff_x20 + 6);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0xc);
  uStack_40 = *(undefined8 *)(unaff_x20 + 10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 8);
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10353e238; end: 10353e2d7;  */

uint FUN_10353e238(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103541650(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10353e2d8; end: 10353e377;  */

/* WARNING: Possible PIC construction at 0x00010353e324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353e334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353e328) */
/* WARNING: Removing unreachable block (ram,0x00010353e338) */

void FUN_10353e2d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f774f8 != -1) {
    func_0x000107c61568(0x112f774f8,0x10353e290);
  }
  uVar5 = uRam0000000113808158;
  uVar4 = uRam0000000113808150;
  uVar3 = uRam0000000113808148;
  uVar2 = uRam0000000113808140;
  uVar1 = uRam0000000113808138;
  *param_1 = uRam0000000113808130;
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



/* Entry: 10353e378; end: 10353e3bf;  */

void FUN_10353e378(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9b83,0xd,2);
  uRam0000000113808168 = uStack_38;
  uRam0000000113808160 = uStack_40;
  uRam0000000113808178 = uStack_28;
  uRam0000000113808170 = uStack_30;
  uRam0000000113808188 = uStack_18;
  uRam0000000113808180 = uStack_20;
  return;
}



/* Entry: 10353e3c0; end: 10353e443;  */

void FUN_10353e3c0(undefined8 param_1,long param_2,long param_3)

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



/* Entry: 10353e444; end: 10353e4b7;  */

void FUN_10353e444(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((param_1 == 0) || ((**(code **)(param_6 + 8))(1,param_5,param_6), unaff_x21 == 0)) {
    func_0x000100076224(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 10353e4b8; end: 10353e503;  */

void FUN_10353e4b8(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10353e504; end: 10353e53b;  */

void FUN_10353e504(void)

{
  FUN_10353e3c0();
  return;
}



/* Entry: 10353e53c; end: 10353e573;  */

uint FUN_10353e53c(long param_1,long param_2)

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
  func_0x000103545f5c();
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



/* Entry: 10353e574; end: 10353e59b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10353e574(float *param_1)

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



/* Entry: 10353e59c; end: 10353e63b;  */

/* WARNING: Possible PIC construction at 0x00010353e5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353e5f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353e5ec) */
/* WARNING: Removing unreachable block (ram,0x00010353e5fc) */

void FUN_10353e59c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77500 != -1) {
    func_0x000107c61568(0x112f77500,FUN_10353e378);
  }
  uVar5 = uRam0000000113808188;
  uVar4 = uRam0000000113808180;
  uVar3 = uRam0000000113808178;
  uVar2 = uRam0000000113808170;
  uVar1 = uRam0000000113808168;
  *param_1 = uRam0000000113808160;
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



/* Entry: 10353e63c; end: 10353e64f;  */

void FUN_10353e63c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f779d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f779d8,&UNK_10dbd97e0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10353e650; end: 10353e753;  */

void FUN_10353e650(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10353e754; end: 10353e777;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10353e754(float *param_1,float *param_2)

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



/* Entry: 10353e778; end: 10353e7bf;  */

void FUN_10353e778(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9b10,0x72,2);
  uRam0000000113808198 = uStack_38;
  uRam0000000113808190 = uStack_40;
  uRam00000001138081a8 = uStack_28;
  uRam00000001138081a0 = uStack_30;
  uRam00000001138081b8 = uStack_18;
  uRam00000001138081b0 = uStack_20;
  return;
}



/* Entry: 10353e7c0; end: 10353e8eb;  */

/* WARNING: Removing unreachable block (ram,0x00010353e8dc) */

void FUN_10353e7c0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x138);
          goto LAB_10353e828;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103542560();
          (*pcVar3)(unaff_x20 + 8,&UNK_1106639e8,lVar1,param_2,param_3);
        }
        else if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_10353e828;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x18);
        }
        else {
          if (lVar1 != 6) goto LAB_10353e838;
          pcVar3 = *(code **)(param_3 + 0x160);
        }
LAB_10353e828:
        (*pcVar3)();
      }
LAB_10353e838:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10353e8ec; end: 10353ea47;  */

void FUN_10353e8ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  char cStack_48;
  
  uVar3 = param_1;
  if (*unaff_x20 == '\x01') {
    uVar3 = 1;
    (**(code **)(param_3 + 0x68))(1,1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x20 + 8) != 0) {
    cStack_48 = unaff_x20[0x10];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = *(long *)(unaff_x20 + 8);
    func_0x000103542560();
    (*pcVar4)(&lStack_50,2,&UNK_1106639e8,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(int *)(unaff_x20 + 0x14) == 0) ||
     ((**(code **)(param_3 + 0x18))(*(int *)(unaff_x20 + 0x14),3,param_2,param_3), unaff_x21 == 0))
  {
    uVar2 = *(ulong *)(unaff_x20 + 0x20);
    uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 0x18),uVar2,4,param_2,param_3),
         unaff_x21 == 0)) &&
        ((*(int *)(unaff_x20 + 0x28) == 0 ||
         ((**(code **)(param_3 + 8))(5,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) == 0 ||
        ((**(code **)(param_3 + 0x100))(*(long *)(unaff_x20 + 0x30),6,param_2,param_3),
        unaff_x21 == 0)))) {
      func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x38),
                          *(undefined8 *)(unaff_x20 + 0x40),param_2,param_3);
    }
  }
  return;
}



/* Entry: 10353ea48; end: 10353eaa7;  */

void FUN_10353ea48(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xe000000000000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + 0x40) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10353eaa8; end: 10353ead7;  */

undefined1  [16] FUN_10353eaa8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 10353ead8; end: 10353eb0b;  */

void FUN_10353ead8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 10353eb0c; end: 10353eb1f;  */

undefined1  [16] FUN_10353eb0c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x10353eb1c;
  return auVar1;
}



/* Entry: 10353eb20; end: 10353eb47;  */

void FUN_10353eb20(void)

{
  FUN_10353e7c0();
  return;
}



/* Entry: 10353eb48; end: 10353eb4b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10353eb48(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10353eb4c; end: 10353eb83;  */

uint FUN_10353eb4c(long param_1,long param_2)

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
  func_0x000103545f1c();
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



/* Entry: 10353eb84; end: 10353ebdb;  */

uint FUN_10353eb84(undefined8 *param_1)

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
  FUN_1035414e8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10353ebdc; end: 10353ec7b;  */

/* WARNING: Possible PIC construction at 0x00010353ec28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353ec38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353ec2c) */
/* WARNING: Removing unreachable block (ram,0x00010353ec3c) */

void FUN_10353ebdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77510 != -1) {
    func_0x000107c61568(0x112f77510,FUN_10353e778);
  }
  uVar5 = uRam00000001138081b8;
  uVar4 = uRam00000001138081b0;
  uVar3 = uRam00000001138081a8;
  uVar2 = uRam00000001138081a0;
  uVar1 = uRam0000000113808198;
  *param_1 = uRam0000000113808190;
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



/* Entry: 10353ec7c; end: 10353ecb7;  */

void FUN_10353ec7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f779c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f779c8,&UNK_10dbd97d8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10353ecb8; end: 10353edcb;  */

void FUN_10353ecb8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10353edcc; end: 10353ee6b;  */

uint FUN_10353edcc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035414e8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10353ee6c; end: 10353ef0b;  */

/* WARNING: Possible PIC construction at 0x00010353eeb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353eec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353eebc) */
/* WARNING: Removing unreachable block (ram,0x00010353eecc) */

void FUN_10353ee6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77528 != -1) {
    func_0x000107c61568(0x112f77528,0x10353ee24);
  }
  uVar5 = uRam00000001138081e8;
  uVar4 = uRam00000001138081e0;
  uVar3 = uRam00000001138081d8;
  uVar2 = uRam00000001138081d0;
  uVar1 = uRam00000001138081c8;
  *param_1 = uRam00000001138081c0;
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



/* Entry: 10353ef0c; end: 10353ef53;  */

void FUN_10353ef0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd99d0,9,2);
  uRam00000001138081f8 = uStack_38;
  uRam00000001138081f0 = uStack_40;
  uRam0000000113808208 = uStack_28;
  uRam0000000113808200 = uStack_30;
  uRam0000000113808218 = uStack_18;
  uRam0000000113808210 = uStack_20;
  return;
}



/* Entry: 10353ef54; end: 10353ef8b;  */

undefined1  [16] FUN_10353ef54(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1555b0;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 10353ef8c; end: 10353eff3;  */

void FUN_10353ef8c(void)

{
  FUN_103540590();
  return;
}



/* Entry: 10353eff4; end: 10353f02b;  */

uint FUN_10353eff4(long param_1,long param_2)

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
  func_0x000103545edc();
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



/* Entry: 10353f02c; end: 10353f037;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10353f02c(long *param_1)

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
    goto LAB_103541c8c;
  }
  if (lVar18 < 4) {
    if (lVar18 < 2) {
      if (lVar18 == 0) {
        if (lVar22 == 0) goto SUB_100e25fcc;
      }
      else if (lVar22 == 1) goto SUB_100e25fcc;
    }
    else if (lVar18 == 2) {
      if (lVar22 == 2) goto SUB_100e25fcc;
    }
    else if (lVar22 == 3) goto SUB_100e25fcc;
  }
  else if (lVar18 < 6) {
    if (lVar18 == 4) {
      if (lVar22 == 4) {
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
    else if (lVar22 == 5) goto SUB_100e25fcc;
  }
  else if (lVar18 == 6) {
    if (lVar22 == 6) goto SUB_100e25fcc;
  }
  else if (lVar18 == 7) {
    if (lVar22 == 7) goto SUB_100e25fcc;
  }
  else if (lVar22 == 8) goto SUB_100e25fcc;
LAB_103541c8c:
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 10353f038; end: 10353f0d7;  */

/* WARNING: Possible PIC construction at 0x00010353f084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353f094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353f088) */
/* WARNING: Removing unreachable block (ram,0x00010353f098) */

void FUN_10353f038(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77530 != -1) {
    func_0x000107c61568(0x112f77530,FUN_10353ef0c);
  }
  uVar5 = uRam0000000113808218;
  uVar4 = uRam0000000113808210;
  uVar3 = uRam0000000113808208;
  uVar2 = uRam0000000113808200;
  uVar1 = uRam00000001138081f8;
  *param_1 = uRam00000001138081f0;
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



/* Entry: 10353f0d8; end: 10353f0eb;  */

void FUN_10353f0d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f779b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f779b8,&UNK_10dbd97d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}


