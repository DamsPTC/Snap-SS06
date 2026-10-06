/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101628a60; end: 101628aa7;  */

void FUN_101628a60(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96ef10,0x4c,2);
  uRam0000000113801aa0 = uStack_38;
  uRam0000000113801a98 = uStack_40;
  uRam0000000113801ab0 = uStack_28;
  uRam0000000113801aa8 = uStack_30;
  uRam0000000113801ac0 = uStack_18;
  uRam0000000113801ab8 = uStack_20;
  return;
}



/* Entry: 101628aa8; end: 101628ba3;  */

/* WARNING: Removing unreachable block (ram,0x000101628b60) */
/* WARNING: Removing unreachable block (ram,0x000101628ba0) */

void FUN_101628aa8(undefined8 param_1,long param_2,long param_3)

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
        FUN_1015cabb8();
        lVar2 = unaff_x20 + 0x40;
LAB_101628b88:
        (*pcVar4)(lVar2,&UNK_110679698,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1015cabb8();
          lVar2 = unaff_x20 + 0x18;
          goto LAB_101628b88;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x60))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101628ba4; end: 101628c37;  */

void FUN_101628ba4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_101628c38(), unaff_x21 == 0)) {
    FUN_101628cc0();
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 101628c38; end: 101628cbf;  */

void FUN_101628c38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x28);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,2,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101628cc0; end: 101628d47;  */

void FUN_101628cc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x50);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,3,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101628d48; end: 101628d97;  */

uint FUN_101628d48(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_218 [40];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar6 = param_1[4];
  lVar4 = param_1[3];
  lVar7 = param_1[6];
  lVar5 = param_1[5];
  lVar3 = param_1[7];
  lStack_1c0 = param_2[4];
  lStack_1c8 = param_2[3];
  lStack_1b0 = param_2[6];
  lStack_1b8 = param_2[5];
  lStack_1a8 = param_2[7];
  lStack_140 = lStack_1c8;
  lStack_138 = lStack_1c0;
  lStack_130 = lStack_1b8;
  lStack_128 = lStack_1b0;
  lStack_120 = lStack_1a8;
  lStack_110 = lVar4;
  lStack_108 = lVar6;
  lStack_100 = lVar5;
  lStack_f8 = lVar7;
  lStack_f0 = lVar3;
  if (lVar5 == 0) {
    if (lStack_1b8 != 0) goto LAB_101629284;
    FUN_1015c999c(&lStack_110,&lStack_1f0);
    FUN_1015c999c(&lStack_140,&lStack_1f0);
    FUN_101553bdc(lVar4,lVar6,0,lVar7,lVar3);
LAB_1016292e4:
    lVar7 = param_1[9];
    lVar6 = param_1[8];
    lVar11 = param_1[0xb];
    lVar9 = param_1[10];
    lVar8 = param_2[9];
    lVar5 = param_2[8];
    lVar12 = param_2[0xb];
    lVar10 = param_2[10];
    lVar3 = param_1[0xc];
    lVar4 = param_2[0xc];
    lStack_1a0 = lVar5;
    lStack_198 = lVar8;
    lStack_190 = lVar10;
    lStack_188 = lVar12;
    lStack_180 = lVar4;
    lStack_170 = lVar6;
    lStack_168 = lVar7;
    lStack_160 = lVar9;
    lStack_158 = lVar11;
    lStack_150 = lVar3;
    if (lVar9 == 0) {
      if (lVar10 != 0) goto LAB_1016293b4;
      FUN_1015c999c(&lStack_170,&lStack_1f0);
      FUN_1015c999c(&lStack_1a0,&lStack_1f0);
      FUN_101553bdc(lVar6,lVar7,0,lVar11,lVar3);
    }
    else {
      if (lVar10 == 0) {
LAB_1016293b4:
        lStack_1f0 = lVar6;
        lStack_1e8 = lVar7;
        lStack_1e0 = lVar9;
        lStack_1d8 = lVar11;
        lStack_1d0 = lVar3;
        lStack_1c8 = lVar5;
        lStack_1c0 = lVar8;
        lStack_1b8 = lVar10;
        lStack_1b0 = lVar12;
        lStack_1a8 = lVar4;
        FUN_1015c999c(&lStack_170,&lStack_e8);
        plVar2 = &lStack_1a0;
        lVar3 = -0xd8;
        goto LAB_1016293dc;
      }
      lStack_1e8 = CONCAT71(lStack_1e8._1_7_,(char)lVar8);
      uStack_e0 = (undefined1)lVar7;
      lStack_1f0 = lVar5;
      lStack_1e0 = lVar10;
      lStack_1d8 = lVar12;
      lStack_1d0 = lVar4;
      lStack_e8 = lVar6;
      lStack_d8 = lVar9;
      lStack_d0 = lVar11;
      lStack_c8 = lVar3;
      FUN_1015c999c(&lStack_170,auStack_218);
      FUN_1015c999c(&lStack_1a0,auStack_218);
      plVar2 = &lStack_e8;
      func_0x00010368c758(plVar2,&lStack_1f0);
      FUN_101553bdc(lVar5,lVar8,lVar10,lVar12,lVar4);
      FUN_101553bdc(lVar6,lVar7,lVar9,lVar11,lVar3);
      if (((ulong)plVar2 & 1) == 0) goto LAB_1016293e8;
    }
    lVar3 = param_1[1];
    FUN_100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
    uVar1 = (uint)lVar3;
  }
  else {
    if (lStack_1b8 == 0) {
LAB_101629284:
      lStack_1f0 = lVar4;
      lStack_1e8 = lVar6;
      lStack_1e0 = lVar5;
      lStack_1d8 = lVar7;
      lStack_1d0 = lVar3;
      FUN_1015c999c(&lStack_110,&lStack_98);
      plVar2 = &lStack_140;
      lVar3 = -0x88;
LAB_1016293dc:
      FUN_1015c999c(plVar2,&stack0xfffffffffffffff0 + lVar3);
      FUN_1015cab70(&lStack_1f0);
    }
    else {
      uStack_90 = (undefined1)lStack_1c0;
      uStack_b8 = (undefined1)lVar6;
      lStack_c0 = lVar4;
      lStack_b0 = lVar5;
      lStack_a8 = lVar7;
      lStack_a0 = lVar3;
      lStack_98 = lStack_1c8;
      lStack_88 = lStack_1b8;
      lStack_80 = lStack_1b0;
      lStack_78 = lStack_1a8;
      FUN_1015c999c(&lStack_110,&lStack_1f0);
      FUN_1015c999c(&lStack_140,&lStack_1f0);
      plVar2 = &lStack_c0;
      func_0x00010368c758(plVar2,&lStack_98);
      FUN_101553bdc(lStack_1c8,lStack_1c0,lStack_1b8,lStack_1b0,lStack_1a8);
      FUN_101553bdc(lVar4,lVar6,lVar5,lVar7,lVar3);
      if (((ulong)plVar2 & 1) != 0) goto LAB_1016292e4;
    }
LAB_1016293e8:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 101628d98; end: 101628dc7;  */

undefined1  [16] FUN_101628d98(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101628dc8; end: 101628dfb;  */

void FUN_101628dc8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101628dfc; end: 101628e0f;  */

undefined1  [16] FUN_101628dfc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x101628e0c;
  return auVar1;
}



/* Entry: 101628e10; end: 101628e23;  */

void FUN_101628e10(void)

{
  FUN_101628aa8();
  return;
}



/* Entry: 101628e24; end: 101628e6b;  */

void FUN_101628e24(void)

{
  FUN_101628ba4();
  return;
}



/* Entry: 101628e6c; end: 101628e6f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101628e6c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101628e70; end: 101628ea7;  */

uint FUN_101628e70(long param_1,long param_2)

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
  FUN_101629a74();
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



/* Entry: 101628ea8; end: 101628f0f;  */

uint FUN_101628ea8(undefined8 *param_1)

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
  FUN_101629180(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101628f10; end: 101628faf;  */

/* WARNING: Possible PIC construction at 0x000101628f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101628f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101628f60) */
/* WARNING: Removing unreachable block (ram,0x000101628f70) */

void FUN_101628f10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba9b8 != -1) {
    func_0x000107c61568(0x112dba9b8,FUN_101628a60);
  }
  uVar5 = uRam0000000113801ac0;
  uVar4 = uRam0000000113801ab8;
  uVar3 = uRam0000000113801ab0;
  uVar2 = uRam0000000113801aa8;
  uVar1 = uRam0000000113801aa0;
  *param_1 = uRam0000000113801a98;
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



/* Entry: 101628fb0; end: 101628feb;  */

void FUN_101628fb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba9d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba9d8,&UNK_10d96ef08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101628fec; end: 101629117;  */

void FUN_101628fec(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101629118; end: 10162917f;  */

uint FUN_101629118(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101629180(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101629180; end: 101629457;  */

uint FUN_101629180(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_218 [40];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar6 = param_1[4];
  lVar4 = param_1[3];
  lVar7 = param_1[6];
  lVar5 = param_1[5];
  lVar3 = param_1[7];
  lStack_1c0 = param_2[4];
  lStack_1c8 = param_2[3];
  lStack_1b0 = param_2[6];
  lStack_1b8 = param_2[5];
  lStack_1a8 = param_2[7];
  lStack_140 = lStack_1c8;
  lStack_138 = lStack_1c0;
  lStack_130 = lStack_1b8;
  lStack_128 = lStack_1b0;
  lStack_120 = lStack_1a8;
  lStack_110 = lVar4;
  lStack_108 = lVar6;
  lStack_100 = lVar5;
  lStack_f8 = lVar7;
  lStack_f0 = lVar3;
  if (lVar5 == 0) {
    if (lStack_1b8 != 0) goto LAB_101629284;
    FUN_1015c999c(&lStack_110,&lStack_1f0);
    FUN_1015c999c(&lStack_140,&lStack_1f0);
    FUN_101553bdc(lVar4,lVar6,0,lVar7,lVar3);
LAB_1016292e4:
    lVar7 = param_1[9];
    lVar6 = param_1[8];
    lVar11 = param_1[0xb];
    lVar9 = param_1[10];
    lVar8 = param_2[9];
    lVar5 = param_2[8];
    lVar12 = param_2[0xb];
    lVar10 = param_2[10];
    lVar3 = param_1[0xc];
    lVar4 = param_2[0xc];
    lStack_1a0 = lVar5;
    lStack_198 = lVar8;
    lStack_190 = lVar10;
    lStack_188 = lVar12;
    lStack_180 = lVar4;
    lStack_170 = lVar6;
    lStack_168 = lVar7;
    lStack_160 = lVar9;
    lStack_158 = lVar11;
    lStack_150 = lVar3;
    if (lVar9 == 0) {
      if (lVar10 != 0) goto LAB_1016293b4;
      FUN_1015c999c(&lStack_170,&lStack_1f0);
      FUN_1015c999c(&lStack_1a0,&lStack_1f0);
      FUN_101553bdc(lVar6,lVar7,0,lVar11,lVar3);
    }
    else {
      if (lVar10 == 0) {
LAB_1016293b4:
        lStack_1f0 = lVar6;
        lStack_1e8 = lVar7;
        lStack_1e0 = lVar9;
        lStack_1d8 = lVar11;
        lStack_1d0 = lVar3;
        lStack_1c8 = lVar5;
        lStack_1c0 = lVar8;
        lStack_1b8 = lVar10;
        lStack_1b0 = lVar12;
        lStack_1a8 = lVar4;
        FUN_1015c999c(&lStack_170,&lStack_e8);
        plVar2 = &lStack_1a0;
        lVar3 = -0xd8;
        goto LAB_1016293dc;
      }
      lStack_1e8 = CONCAT71(lStack_1e8._1_7_,(char)lVar8);
      uStack_e0 = (undefined1)lVar7;
      lStack_1f0 = lVar5;
      lStack_1e0 = lVar10;
      lStack_1d8 = lVar12;
      lStack_1d0 = lVar4;
      lStack_e8 = lVar6;
      lStack_d8 = lVar9;
      lStack_d0 = lVar11;
      lStack_c8 = lVar3;
      FUN_1015c999c(&lStack_170,auStack_218);
      FUN_1015c999c(&lStack_1a0,auStack_218);
      plVar2 = &lStack_e8;
      func_0x00010368c758(plVar2,&lStack_1f0);
      FUN_101553bdc(lVar5,lVar8,lVar10,lVar12,lVar4);
      FUN_101553bdc(lVar6,lVar7,lVar9,lVar11,lVar3);
      if (((ulong)plVar2 & 1) == 0) goto LAB_1016293e8;
    }
    lVar3 = param_1[1];
    FUN_100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
    uVar1 = (uint)lVar3;
  }
  else {
    if (lStack_1b8 == 0) {
LAB_101629284:
      lStack_1f0 = lVar4;
      lStack_1e8 = lVar6;
      lStack_1e0 = lVar5;
      lStack_1d8 = lVar7;
      lStack_1d0 = lVar3;
      FUN_1015c999c(&lStack_110,&lStack_98);
      plVar2 = &lStack_140;
      lVar3 = -0x88;
LAB_1016293dc:
      FUN_1015c999c(plVar2,&stack0xfffffffffffffff0 + lVar3);
      FUN_1015cab70(&lStack_1f0);
    }
    else {
      uStack_90 = (undefined1)lStack_1c0;
      uStack_b8 = (undefined1)lVar6;
      lStack_c0 = lVar4;
      lStack_b0 = lVar5;
      lStack_a8 = lVar7;
      lStack_a0 = lVar3;
      lStack_98 = lStack_1c8;
      lStack_88 = lStack_1b8;
      lStack_80 = lStack_1b0;
      lStack_78 = lStack_1a8;
      FUN_1015c999c(&lStack_110,&lStack_1f0);
      FUN_1015c999c(&lStack_140,&lStack_1f0);
      plVar2 = &lStack_c0;
      func_0x00010368c758(plVar2,&lStack_98);
      FUN_101553bdc(lStack_1c8,lStack_1c0,lStack_1b8,lStack_1b0,lStack_1a8);
      FUN_101553bdc(lVar4,lVar6,lVar5,lVar7,lVar3);
      if (((ulong)plVar2 & 1) != 0) goto LAB_1016292e4;
    }
LAB_1016293e8:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 101629458; end: 101629497;  */

void FUN_101629458(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ee58;
  func_0x000107c61520(&UNK_10d96ee58,&UNK_1103ea570);
  puRam0000000112dba9c0 = puVar1;
  return;
}



/* Entry: 101629498; end: 1016294bb;  */

void FUN_101629498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016294bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016294bc; end: 1016294fb;  */

void FUN_1016294bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ee30;
  func_0x000107c61520(&UNK_10d96ee30,&UNK_1103ea570);
  puRam0000000112dba9c8 = puVar1;
  return;
}



/* Entry: 1016294fc; end: 101629527;  */

void FUN_1016294fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101629458();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101618480();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101629528; end: 10162952b;  */

void FUN_101629528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ee98;
  func_0x000107c61520(&UNK_10d96ee98,&UNK_1103ea570);
  puRam0000000112dba9d0 = puVar1;
  return;
}



/* Entry: 10162952c; end: 10162956b;  */

void FUN_10162952c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ee98;
  func_0x000107c61520(&UNK_10d96ee98,&UNK_1103ea570);
  puRam0000000112dba9d0 = puVar1;
  return;
}



/* Entry: 10162956c; end: 1016295ef;  */

long FUN_10162956c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1016295f0; end: 1016298a3;  */

undefined8 * FUN_1016295f0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
    lVar1 = param_2[10];
  }
  else {
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    param_1[5] = lVar1;
    uVar3 = param_2[6];
    uVar2 = param_2[7];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
    lVar1 = param_2[10];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar4 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar4;
    param_1[10] = uVar2;
    param_1[0xc] = param_2[0xc];
  }
  else {
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[10] = lVar1;
    uVar3 = param_2[0xb];
    uVar2 = param_2[0xc];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar2;
  }
  return param_1;
}



/* Entry: 1016298a4; end: 10162999b;  */

undefined8 * FUN_1016298a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[2];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[5] != 0) {
    lVar4 = param_2[5];
    if (lVar4 != 0) {
      param_1[3] = param_2[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
      param_1[5] = lVar4;
      func_0x000107c6142c();
      uVar1 = param_1[6];
      uVar2 = param_1[7];
      uVar3 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar1,uVar2);
      lVar4 = param_1[10];
      goto joined_r0x00010162993c;
    }
    func_0x000101553ad0(param_1 + 3);
  }
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  lVar4 = param_1[10];
joined_r0x00010162993c:
  if (lVar4 != 0) {
    lVar4 = param_2[10];
    if (lVar4 != 0) {
      param_1[8] = param_2[8];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[10] = lVar4;
      func_0x000107c6142c();
      uVar1 = param_1[0xb];
      uVar2 = param_1[0xc];
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x000101553ad0(param_1 + 8);
  }
  uVar1 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 10162999c; end: 101629a73;  */

int FUN_10162999c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101629a74; end: 101629ab3;  */

void FUN_101629a74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96ee04;
  func_0x000107c61520(&DAT_10d96ee04,&UNK_1103ea570);
  puRam0000000112dba9e0 = puVar1;
  return;
}



/* Entry: 101629ab4; end: 101629b5f;  */

bool FUN_101629ab4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  lStack_60 = lVar5;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  if (lVar5 == 0) {
    FUN_1015c999c(&uStack_70,auStack_98);
  }
  else {
    FUN_1015c999c(&uStack_70,auStack_98);
    FUN_101553bdc(uVar1,uVar2,lVar5,uVar3,uVar4);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  FUN_101553bdc(uVar1,uVar2,0,uVar3,uVar4);
  return lVar5 != 0;
}



/* Entry: 101629b60; end: 101629ba7;  */

void FUN_101629b60(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96f098,0xe,2);
  uRam0000000113801ad0 = uStack_38;
  uRam0000000113801ac8 = uStack_40;
  uRam0000000113801ae0 = uStack_28;
  uRam0000000113801ad8 = uStack_30;
  uRam0000000113801af0 = uStack_18;
  uRam0000000113801ae8 = uStack_20;
  return;
}



/* Entry: 101629ba8; end: 101629c5b;  */

/* WARNING: Removing unreachable block (ram,0x000101629c58) */

void FUN_101629ba8(undefined8 param_1,long param_2,long param_3)

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
        FUN_1015cabb8();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110679698,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101629c5c; end: 101629cb7;  */

void FUN_101629c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_101629cb8();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 101629cb8; end: 101629d3f;  */

void FUN_101629cb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x20);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,1,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101629d40; end: 101629d83;  */

uint FUN_101629d40(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  lVar9 = param_1[4];
  uVar3 = param_1[6];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  lVar10 = param_2[4];
  uVar4 = param_2[6];
  uStack_110 = uVar6;
  uStack_108 = uVar8;
  lStack_100 = lVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar4;
  uStack_e0 = uVar5;
  uStack_d8 = uVar7;
  lStack_d0 = lVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar3;
  if (lVar9 == 0) {
    if (lVar10 != 0) goto LAB_10162a218;
    FUN_1015c999c(&uStack_e0,&uStack_90);
    FUN_1015c999c(&uStack_110,&uStack_90);
    FUN_101553bdc(uVar5,uVar7,0,uVar11,uVar3);
  }
  else {
    if (lVar10 == 0) {
LAB_10162a218:
      FUN_1015c999c(&uStack_e0,&uStack_90);
      FUN_1015c999c(&uStack_110,&uStack_90);
      FUN_101553bdc(uVar5,uVar7,lVar9,uVar11,uVar3);
      FUN_101553bdc(uVar6,uVar8,lVar10,uVar12,uVar4);
      uVar1 = 0;
      goto LAB_10162a2b4;
    }
    uStack_88 = (undefined1)uVar8;
    uStack_b0 = (undefined1)uVar7;
    uStack_b8 = uVar5;
    lStack_a8 = lVar9;
    uStack_a0 = uVar11;
    uStack_98 = uVar3;
    uStack_90 = uVar6;
    lStack_80 = lVar10;
    uStack_78 = uVar12;
    uStack_70 = uVar4;
    FUN_1015c999c(&uStack_e0,auStack_138);
    FUN_1015c999c(&uStack_110,auStack_138);
    puVar2 = &uStack_b8;
    func_0x00010368c758(puVar2,&uStack_90);
    FUN_101553bdc(uVar6,uVar8,lVar10,uVar12,uVar4);
    FUN_101553bdc(uVar5,uVar7,lVar9,uVar11,uVar3);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_10162a2b4;
    }
  }
  uVar3 = *param_1;
  FUN_100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_10162a2b4:
  return uVar1 & 1;
}



/* Entry: 101629d84; end: 101629db3;  */

undefined1  [16] FUN_101629d84(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101629db4; end: 101629de7;  */

void FUN_101629db4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 101629de8; end: 101629dfb;  */

undefined8 FUN_101629de8(void)

{
  return 0x101629df8;
}



/* Entry: 101629dfc; end: 101629e0f;  */

void FUN_101629dfc(void)

{
  FUN_101629ba8();
  return;
}



/* Entry: 101629e10; end: 101629e4f;  */

void FUN_101629e10(void)

{
  FUN_101629c5c();
  return;
}



/* Entry: 101629e50; end: 101629e53;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101629e50(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101629e54; end: 101629e8b;  */

uint FUN_101629e54(long param_1,long param_2)

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
  FUN_10162a748();
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



/* Entry: 101629e8c; end: 101629ee3;  */

uint FUN_101629e8c(undefined8 *param_1)

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
  FUN_10162a12c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101629ee4; end: 101629f83;  */

/* WARNING: Possible PIC construction at 0x000101629f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101629f40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101629f34) */
/* WARNING: Removing unreachable block (ram,0x000101629f44) */

void FUN_101629ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba9e8 != -1) {
    func_0x000107c61568(0x112dba9e8,FUN_101629b60);
  }
  uVar5 = uRam0000000113801af0;
  uVar4 = uRam0000000113801ae8;
  uVar3 = uRam0000000113801ae0;
  uVar2 = uRam0000000113801ad8;
  uVar1 = uRam0000000113801ad0;
  *param_1 = uRam0000000113801ac8;
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



/* Entry: 101629f84; end: 101629fbf;  */

void FUN_101629f84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbaa08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbaa08,&UNK_10d96f090);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101629fc0; end: 10162a0d3;  */

void FUN_101629fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[6];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10162a0d4; end: 10162a12b;  */

uint FUN_10162a0d4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10162a12c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10162a12c; end: 10162a2d7;  */

uint FUN_10162a12c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  lVar9 = param_1[4];
  uVar3 = param_1[6];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  lVar10 = param_2[4];
  uVar4 = param_2[6];
  uStack_110 = uVar6;
  uStack_108 = uVar8;
  lStack_100 = lVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar4;
  uStack_e0 = uVar5;
  uStack_d8 = uVar7;
  lStack_d0 = lVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar3;
  if (lVar9 == 0) {
    if (lVar10 != 0) goto LAB_10162a218;
    FUN_1015c999c(&uStack_e0,&uStack_90);
    FUN_1015c999c(&uStack_110,&uStack_90);
    FUN_101553bdc(uVar5,uVar7,0,uVar11,uVar3);
  }
  else {
    if (lVar10 == 0) {
LAB_10162a218:
      FUN_1015c999c(&uStack_e0,&uStack_90);
      FUN_1015c999c(&uStack_110,&uStack_90);
      FUN_101553bdc(uVar5,uVar7,lVar9,uVar11,uVar3);
      FUN_101553bdc(uVar6,uVar8,lVar10,uVar12,uVar4);
      uVar1 = 0;
      goto LAB_10162a2b4;
    }
    uStack_88 = (undefined1)uVar8;
    uStack_b0 = (undefined1)uVar7;
    uStack_b8 = uVar5;
    lStack_a8 = lVar9;
    uStack_a0 = uVar11;
    uStack_98 = uVar3;
    uStack_90 = uVar6;
    lStack_80 = lVar10;
    uStack_78 = uVar12;
    uStack_70 = uVar4;
    FUN_1015c999c(&uStack_e0,auStack_138);
    FUN_1015c999c(&uStack_110,auStack_138);
    puVar2 = &uStack_b8;
    func_0x00010368c758(puVar2,&uStack_90);
    FUN_101553bdc(uVar6,uVar8,lVar10,uVar12,uVar4);
    FUN_101553bdc(uVar5,uVar7,lVar9,uVar11,uVar3);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_10162a2b4;
    }
  }
  uVar3 = *param_1;
  FUN_100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_10162a2b4:
  return uVar1 & 1;
}



/* Entry: 10162a2d8; end: 10162a317;  */

void FUN_10162a2d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96efd8;
  func_0x000107c61520(&UNK_10d96efd8,&UNK_1103ea720);
  puRam0000000112dba9f0 = puVar1;
  return;
}



/* Entry: 10162a318; end: 10162a33b;  */

void FUN_10162a318(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162a33c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10162a33c; end: 10162a37b;  */

void FUN_10162a33c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96efb0;
  func_0x000107c61520(&UNK_10d96efb0,&UNK_1103ea720);
  puRam0000000112dba9f8 = puVar1;
  return;
}



/* Entry: 10162a37c; end: 10162a3a7;  */

void FUN_10162a37c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162a2d8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101618500();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162a3a8; end: 10162a3ab;  */

void FUN_10162a3a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaa00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f018;
  func_0x000107c61520(&UNK_10d96f018,&UNK_1103ea720);
  puRam0000000112dbaa00 = puVar1;
  return;
}



/* Entry: 10162a3ac; end: 10162a3eb;  */

void FUN_10162a3ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaa00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f018;
  func_0x000107c61520(&UNK_10d96f018,&UNK_1103ea720);
  puRam0000000112dbaa00 = puVar1;
  return;
}



/* Entry: 10162a3ec; end: 10162a45b;  */

long FUN_10162a3ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10162a45c; end: 10162a67b;  */

undefined8 * FUN_10162a45c(undefined8 *param_1,undefined8 *param_2)

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
  lVar1 = param_2[4];
  if (lVar1 == 0) {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
  }
  else {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = lVar1;
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  return param_1;
}



/* Entry: 10162a67c; end: 10162a747;  */

int FUN_10162a67c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
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



/* Entry: 10162a748; end: 10162a787;  */

void FUN_10162a748(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaa10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96ef84;
  func_0x000107c61520(&DAT_10d96ef84,&UNK_1103ea720);
  puRam0000000112dbaa10 = puVar1;
  return;
}



/* Entry: 10162a788; end: 10162a80f;  */

undefined8 FUN_10162a788(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10162a810; end: 10162a81f;  */

void FUN_10162a810(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10162a820; end: 10162a84f;  */

void FUN_10162a820(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10162b3b0();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10162a850; end: 10162a857;  */

undefined8 FUN_10162a850(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10162a858; end: 10162a8cb;  */

void FUN_10162a858(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbaab8;
  func_0x0001000285a8(0x112dbaab8,&UNK_10d96f0b8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10162a8cc; end: 10162a8d7;  */

void FUN_10162a8cc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10162a8d8; end: 10162a983;  */

void FUN_10162a8d8(void)

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



/* Entry: 10162a984; end: 10162a997;  */

bool FUN_10162a984(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10162a998; end: 10162a9df;  */

void FUN_10162a998(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96f3b0,0x69,2);
  uRam0000000113801b00 = uStack_38;
  uRam0000000113801af8 = uStack_40;
  uRam0000000113801b10 = uStack_28;
  uRam0000000113801b08 = uStack_30;
  uRam0000000113801b20 = uStack_18;
  uRam0000000113801b18 = uStack_20;
  return;
}



/* Entry: 10162a9e0; end: 10162ab17;  */

void FUN_10162a9e0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_10162b3bc();
          goto LAB_10162aa68;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x00010162c948();
          goto LAB_10162aa68;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
        }
        else {
          if (lVar1 != 4) goto LAB_10162aa7c;
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x00010162c948();
        }
LAB_10162aa68:
        (*pcVar3)();
      }
LAB_10162aa7c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10162ab18; end: 10162abfb;  */

void FUN_10162ab18(undefined8 param_1,undefined8 param_2,long param_3)

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
    FUN_10162b3bc();
    (*pcVar2)(&lStack_50,1,&UNK_1103ea9b0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10162abfc();
  if (unaff_x21 == 0) {
    FUN_10162ac90();
    FUN_10162ad18();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 10162abfc; end: 10162ac8f;  */

void FUN_10162abfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(ulong *)(param_1 + 0x28);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010162c948();
    (*pcVar1)(&uStack_80,2,&UNK_1106769a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10162ac90; end: 10162ad17;  */

void FUN_10162ac90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x60);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,3,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10162ad18; end: 10162adaf;  */

void FUN_10162ad18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(ulong *)(param_1 + 0x80);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_80 = *(undefined8 *)(param_1 + 0x78);
    uStack_68 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    uStack_48 = *(undefined8 *)(param_1 + 0xb0);
    uStack_50 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010162c948();
    (*pcVar1)(&uStack_80,4,&UNK_1106769a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10162adb0; end: 10162ae27;  */

uint FUN_10162adb0(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_3f0 [64];
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  ulong uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 3) {
      if (lVar6 == 0) {
        if (lVar5 != 0) {
          return 0;
        }
      }
      else if (lVar6 == 1) {
        if (lVar5 != 1) {
          return 0;
        }
      }
      else if (lVar5 != 2) {
        return 0;
      }
    }
    else if (lVar6 < 5) {
      if (lVar6 == 3) {
        if (lVar5 != 3) {
          return 0;
        }
      }
      else if (lVar5 != 4) {
        return 0;
      }
    }
    else if (lVar6 == 5) {
      if (lVar5 != 5) {
        return 0;
      }
    }
    else if (lVar5 != 6) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  lStack_168 = param_1[5];
  lStack_170 = param_1[4];
  lStack_158 = param_1[7];
  lStack_160 = param_1[6];
  lStack_148 = param_1[9];
  lStack_150 = param_1[8];
  lStack_138 = param_1[0xb];
  lStack_140 = param_1[10];
  uStack_2e8 = param_1[5];
  lStack_2f0 = param_1[4];
  lStack_2d8 = param_1[7];
  lStack_2e0 = param_1[6];
  lStack_1a8 = param_2[5];
  lStack_1b0 = param_2[4];
  lStack_198 = param_2[7];
  lStack_1a0 = param_2[6];
  lStack_188 = param_2[9];
  lStack_190 = param_2[8];
  lStack_178 = param_2[0xb];
  lStack_180 = param_2[10];
  uStack_328 = param_2[5];
  lStack_330 = param_2[4];
  lStack_318 = param_2[7];
  lStack_320 = param_2[6];
  lStack_2c8 = param_1[9];
  lStack_2d0 = param_1[8];
  lStack_2b8 = param_1[0xb];
  lStack_2c0 = param_1[10];
  lStack_308 = param_2[9];
  lStack_310 = param_2[8];
  lStack_2f8 = param_2[0xb];
  lStack_300 = param_2[10];
  lStack_2b0 = lStack_330;
  uStack_2a8 = uStack_328;
  lStack_2a0 = lStack_320;
  lStack_298 = lStack_318;
  lStack_290 = lStack_310;
  lStack_288 = lStack_308;
  lStack_280 = lStack_300;
  lStack_278 = lStack_2f8;
  if (uStack_2e8 >> 0x3c < 0xf) {
    if (0xe < uStack_328 >> 0x3c) goto LAB_10162b528;
    uStack_368 = param_2[5];
    lStack_370 = param_2[4];
    lStack_358 = param_2[7];
    lStack_360 = param_2[6];
    lStack_348 = param_2[9];
    lStack_350 = param_2[8];
    lStack_338 = param_2[0xb];
    lStack_340 = param_2[10];
    lStack_e8 = param_1[5];
    lStack_f0 = param_1[4];
    lStack_d8 = param_1[7];
    lStack_e0 = param_1[6];
    lStack_c8 = param_1[9];
    lStack_d0 = param_1[8];
    lStack_b8 = param_1[0xb];
    lStack_c0 = param_1[10];
    lStack_b0 = lStack_370;
    lStack_a8 = uStack_368;
    lStack_a0 = lStack_360;
    lStack_98 = lStack_358;
    lStack_90 = lStack_350;
    lStack_88 = lStack_348;
    lStack_80 = lStack_340;
    lStack_78 = lStack_338;
    func_0x00010162a7c8(&lStack_170,&lStack_130,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a7c8(&lStack_1b0,&lStack_130,0x112db40e0,&UNK_10d95e630);
    plVar2 = &lStack_f0;
    func_0x000103672ea0(plVar2,&lStack_b0);
    func_0x00010162a788(&lStack_370,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a788(&lStack_2f0,0x112db40e0,&UNK_10d95e630);
    if (((ulong)plVar2 & 1) != 0) goto LAB_10162b664;
  }
  else if (uStack_328 >> 0x3c < 0xf) {
LAB_10162b528:
    lStack_370 = lStack_2f0;
    uStack_368 = uStack_2e8;
    lStack_360 = lStack_2e0;
    lStack_358 = lStack_2d8;
    lStack_350 = lStack_2d0;
    lStack_348 = lStack_2c8;
    lStack_340 = lStack_2c0;
    lStack_338 = lStack_2b8;
    func_0x00010162a7c8(&lStack_170,&lStack_b0,0x112db40e0,&UNK_10d95e630);
    plVar2 = &lStack_1b0;
    plVar4 = &lStack_b0;
LAB_10162b574:
    func_0x00010162a7c8(plVar2,plVar4,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a788(&lStack_370,0x112dbaa18,&UNK_10d96f0a8);
  }
  else {
    uStack_368 = param_1[5];
    lStack_370 = param_1[4];
    lStack_358 = param_1[7];
    lStack_360 = param_1[6];
    lStack_348 = param_1[9];
    lStack_350 = param_1[8];
    lStack_338 = param_1[0xb];
    lStack_340 = param_1[10];
    func_0x00010162a7c8(&lStack_170,&lStack_b0,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a7c8(&lStack_1b0,&lStack_b0,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a788(&lStack_370,0x112db40e0,&UNK_10d95e630);
LAB_10162b664:
    uVar9 = param_1[0xd];
    uVar7 = param_1[0xc];
    lVar5 = param_1[0xe];
    uVar10 = param_2[0xd];
    uVar8 = param_2[0xc];
    lVar6 = param_2[0xe];
    uStack_1f0 = uVar8;
    uStack_1e8 = uVar10;
    lStack_1e0 = lVar6;
    uStack_1d0 = uVar7;
    uStack_1c8 = uVar9;
    lStack_1c0 = lVar5;
    if ((uVar7 & 0xff) == 2) {
      if ((uVar8 & 0xff) == 2) {
        func_0x00010162a7c8(&uStack_1d0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        func_0x00010162a7c8(&uStack_1f0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
LAB_10162b6ec:
        func_0x000101556278(uVar7,uVar9,lVar5);
        lStack_228 = param_1[0x10];
        lStack_230 = param_1[0xf];
        lStack_218 = param_1[0x12];
        lStack_220 = param_1[0x11];
        lStack_208 = param_1[0x14];
        lStack_210 = param_1[0x13];
        lStack_1f8 = param_1[0x16];
        lStack_200 = param_1[0x15];
        lStack_268 = param_2[0x10];
        lStack_270 = param_2[0xf];
        lStack_258 = param_2[0x12];
        lStack_260 = param_2[0x11];
        lStack_248 = param_2[0x14];
        lStack_250 = param_2[0x13];
        lStack_238 = param_2[0x16];
        lStack_240 = param_2[0x15];
        uStack_2e8 = param_1[0x10];
        lStack_2f0 = param_1[0xf];
        lStack_2d8 = param_1[0x12];
        lStack_2e0 = param_1[0x11];
        lStack_2c8 = param_1[0x14];
        lStack_2d0 = param_1[0x13];
        lStack_2b8 = param_1[0x16];
        lStack_2c0 = param_1[0x15];
        uStack_328 = param_2[0x10];
        lStack_330 = param_2[0xf];
        lStack_318 = param_2[0x12];
        lStack_320 = param_2[0x11];
        lStack_308 = param_2[0x14];
        lStack_310 = param_2[0x13];
        lStack_2f8 = param_2[0x16];
        lStack_300 = param_2[0x15];
        lStack_2b0 = lStack_330;
        uStack_2a8 = uStack_328;
        lStack_2a0 = lStack_320;
        lStack_298 = lStack_318;
        lStack_290 = lStack_310;
        lStack_288 = lStack_308;
        lStack_280 = lStack_300;
        lStack_278 = lStack_2f8;
        if (uStack_2e8 >> 0x3c < 0xf) {
          if (0xe < uStack_328 >> 0x3c) goto LAB_10162b8d8;
          lStack_3a8 = param_2[0x10];
          lStack_3b0 = param_2[0xf];
          lStack_398 = param_2[0x12];
          lStack_3a0 = param_2[0x11];
          lStack_388 = param_2[0x14];
          lStack_390 = param_2[0x13];
          lStack_378 = param_2[0x16];
          lStack_380 = param_2[0x15];
          lStack_128 = param_1[0x10];
          lStack_130 = param_1[0xf];
          lStack_118 = param_1[0x12];
          lStack_120 = param_1[0x11];
          lStack_108 = param_1[0x14];
          lStack_110 = param_1[0x13];
          lStack_f8 = param_1[0x16];
          lStack_100 = param_1[0x15];
          lStack_370 = lStack_3b0;
          uStack_368 = lStack_3a8;
          lStack_360 = lStack_3a0;
          lStack_358 = lStack_398;
          lStack_350 = lStack_390;
          lStack_348 = lStack_388;
          lStack_340 = lStack_380;
          lStack_338 = lStack_378;
          func_0x00010162a7c8(&lStack_230,auStack_3f0,0x112db40e0,&UNK_10d95e630);
          func_0x00010162a7c8(&lStack_270,auStack_3f0,0x112db40e0,&UNK_10d95e630);
          plVar2 = &lStack_130;
          func_0x000103672ea0(plVar2,&lStack_370);
          func_0x00010162a788(&lStack_3b0,0x112db40e0,&UNK_10d95e630);
          func_0x00010162a788(&lStack_2f0,0x112db40e0,&UNK_10d95e630);
          if (((ulong)plVar2 & 1) == 0) goto LAB_10162b97c;
        }
        else {
          if (uStack_328 >> 0x3c < 0xf) {
LAB_10162b8d8:
            lStack_370 = lStack_2f0;
            uStack_368 = uStack_2e8;
            lStack_360 = lStack_2e0;
            lStack_358 = lStack_2d8;
            lStack_350 = lStack_2d0;
            lStack_348 = lStack_2c8;
            lStack_340 = lStack_2c0;
            lStack_338 = lStack_2b8;
            func_0x00010162a7c8(&lStack_230,&lStack_130,0x112db40e0,&UNK_10d95e630);
            plVar2 = &lStack_270;
            plVar4 = &lStack_130;
            goto LAB_10162b574;
          }
          uStack_368 = param_1[0x10];
          lStack_370 = param_1[0xf];
          lStack_358 = param_1[0x12];
          lStack_360 = param_1[0x11];
          lStack_348 = param_1[0x14];
          lStack_350 = param_1[0x13];
          lStack_338 = param_1[0x16];
          lStack_340 = param_1[0x15];
          func_0x00010162a7c8(&lStack_230,&lStack_130,0x112db40e0,&UNK_10d95e630);
          func_0x00010162a7c8(&lStack_270,&lStack_130,0x112db40e0,&UNK_10d95e630);
          func_0x00010162a788(&lStack_370,0x112db40e0,&UNK_10d95e630);
        }
        lVar5 = param_1[2];
        FUN_100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
        uVar1 = (uint)lVar5;
        goto LAB_10162b980;
      }
LAB_10162b7f4:
      func_0x00010162a7c8(&uStack_1d0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
      func_0x00010162a7c8(&uStack_1f0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar7,uVar9,lVar5);
      uVar7 = uVar8;
      uVar9 = uVar10;
      lVar5 = lVar6;
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_10162b7f4;
      if ((((uint)uVar8 ^ (uint)uVar7) & 1) == 0) {
        func_0x00010162a7c8(&uStack_1d0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        func_0x00010162a7c8(&uStack_1f0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        uVar3 = uVar9;
        FUN_100e25fcc(uVar9,lVar5,uVar10,lVar6);
        func_0x000101556278(uVar8,uVar10,lVar6);
        if ((uVar3 & 1) != 0) goto LAB_10162b6ec;
      }
      else {
        func_0x00010162a7c8(&uStack_1d0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        func_0x00010162a7c8(&uStack_1f0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar10,lVar6);
      }
    }
    func_0x000101556278(uVar7,uVar9,lVar5);
  }
LAB_10162b97c:
  uVar1 = 0;
LAB_10162b980:
  return uVar1 & 1;
}



/* Entry: 10162ae28; end: 10162ae57;  */

undefined1  [16] FUN_10162ae28(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10162ae58; end: 10162ae8b;  */

void FUN_10162ae58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10162ae8c; end: 10162ae9f;  */

undefined1  [16] FUN_10162ae8c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10162ae9c;
  return auVar1;
}



/* Entry: 10162aea0; end: 10162aeb3;  */

void FUN_10162aea0(void)

{
  FUN_10162a9e0();
  return;
}



/* Entry: 10162aeb4; end: 10162af13;  */

void FUN_10162aeb4(void)

{
  FUN_10162ab18();
  return;
}



/* Entry: 10162af14; end: 10162af17;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10162af14(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10162af18; end: 10162af4f;  */

uint FUN_10162af18(long param_1,long param_2)

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
  FUN_10162c908();
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



/* Entry: 10162af50; end: 10162afef;  */

uint FUN_10162af50(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  FUN_10162b3fc(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 10162aff0; end: 10162b08f;  */

/* WARNING: Possible PIC construction at 0x00010162b03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162b04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162b040) */
/* WARNING: Removing unreachable block (ram,0x00010162b050) */

void FUN_10162aff0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbaac0 != -1) {
    func_0x000107c61568(0x112dbaac0,FUN_10162a998);
  }
  uVar5 = uRam0000000113801b20;
  uVar4 = uRam0000000113801b18;
  uVar3 = uRam0000000113801b10;
  uVar2 = uRam0000000113801b08;
  uVar1 = uRam0000000113801b00;
  *param_1 = uRam0000000113801af8;
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



/* Entry: 10162b090; end: 10162b0cb;  */

void FUN_10162b090(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbab18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbab18,&UNK_10d96f318);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10162b0cc; end: 10162b227;  */

void FUN_10162b0cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10162b228; end: 10162b2c7;  */

uint FUN_10162b228(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_10162b3fc(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 10162b2c8; end: 10162b30f;  */

void FUN_10162b2c8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96f320,0x8a,2);
  uRam0000000113801b30 = uStack_38;
  uRam0000000113801b28 = uStack_40;
  uRam0000000113801b40 = uStack_28;
  uRam0000000113801b38 = uStack_30;
  uRam0000000113801b50 = uStack_18;
  uRam0000000113801b48 = uStack_20;
  return;
}



/* Entry: 10162b310; end: 10162b3af;  */

/* WARNING: Possible PIC construction at 0x00010162b35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162b36c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162b360) */
/* WARNING: Removing unreachable block (ram,0x00010162b370) */

void FUN_10162b310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbaad8 != -1) {
    func_0x000107c61568(0x112dbaad8,FUN_10162b2c8);
  }
  uVar5 = uRam0000000113801b50;
  uVar4 = uRam0000000113801b48;
  uVar3 = uRam0000000113801b40;
  uVar2 = uRam0000000113801b38;
  uVar1 = uRam0000000113801b30;
  *param_1 = uRam0000000113801b28;
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



/* Entry: 10162b3b0; end: 10162b3bb;  */

void FUN_10162b3b0(void)

{
  return;
}



/* Entry: 10162b3bc; end: 10162b3fb;  */

void FUN_10162b3bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96f0c0;
  func_0x000107c61520(&DAT_10d96f0c0,&UNK_1103ea9b0);
  puRam0000000112dbaac8 = puVar1;
  return;
}



/* Entry: 10162b3fc; end: 10162ba5f;  */

uint FUN_10162b3fc(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_3f0 [64];
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  ulong uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 3) {
      if (lVar6 == 0) {
        if (lVar5 != 0) {
          return 0;
        }
      }
      else if (lVar6 == 1) {
        if (lVar5 != 1) {
          return 0;
        }
      }
      else if (lVar5 != 2) {
        return 0;
      }
    }
    else if (lVar6 < 5) {
      if (lVar6 == 3) {
        if (lVar5 != 3) {
          return 0;
        }
      }
      else if (lVar5 != 4) {
        return 0;
      }
    }
    else if (lVar6 == 5) {
      if (lVar5 != 5) {
        return 0;
      }
    }
    else if (lVar5 != 6) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  lStack_168 = param_1[5];
  lStack_170 = param_1[4];
  lStack_158 = param_1[7];
  lStack_160 = param_1[6];
  lStack_148 = param_1[9];
  lStack_150 = param_1[8];
  lStack_138 = param_1[0xb];
  lStack_140 = param_1[10];
  uStack_2e8 = param_1[5];
  lStack_2f0 = param_1[4];
  lStack_2d8 = param_1[7];
  lStack_2e0 = param_1[6];
  lStack_1a8 = param_2[5];
  lStack_1b0 = param_2[4];
  lStack_198 = param_2[7];
  lStack_1a0 = param_2[6];
  lStack_188 = param_2[9];
  lStack_190 = param_2[8];
  lStack_178 = param_2[0xb];
  lStack_180 = param_2[10];
  uStack_328 = param_2[5];
  lStack_330 = param_2[4];
  lStack_318 = param_2[7];
  lStack_320 = param_2[6];
  lStack_2c8 = param_1[9];
  lStack_2d0 = param_1[8];
  lStack_2b8 = param_1[0xb];
  lStack_2c0 = param_1[10];
  lStack_308 = param_2[9];
  lStack_310 = param_2[8];
  lStack_2f8 = param_2[0xb];
  lStack_300 = param_2[10];
  lStack_2b0 = lStack_330;
  uStack_2a8 = uStack_328;
  lStack_2a0 = lStack_320;
  lStack_298 = lStack_318;
  lStack_290 = lStack_310;
  lStack_288 = lStack_308;
  lStack_280 = lStack_300;
  lStack_278 = lStack_2f8;
  if (uStack_2e8 >> 0x3c < 0xf) {
    if (0xe < uStack_328 >> 0x3c) goto LAB_10162b528;
    uStack_368 = param_2[5];
    lStack_370 = param_2[4];
    lStack_358 = param_2[7];
    lStack_360 = param_2[6];
    lStack_348 = param_2[9];
    lStack_350 = param_2[8];
    lStack_338 = param_2[0xb];
    lStack_340 = param_2[10];
    lStack_e8 = param_1[5];
    lStack_f0 = param_1[4];
    lStack_d8 = param_1[7];
    lStack_e0 = param_1[6];
    lStack_c8 = param_1[9];
    lStack_d0 = param_1[8];
    lStack_b8 = param_1[0xb];
    lStack_c0 = param_1[10];
    lStack_b0 = lStack_370;
    lStack_a8 = uStack_368;
    lStack_a0 = lStack_360;
    lStack_98 = lStack_358;
    lStack_90 = lStack_350;
    lStack_88 = lStack_348;
    lStack_80 = lStack_340;
    lStack_78 = lStack_338;
    func_0x00010162a7c8(&lStack_170,&lStack_130,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a7c8(&lStack_1b0,&lStack_130,0x112db40e0,&UNK_10d95e630);
    plVar2 = &lStack_f0;
    func_0x000103672ea0(plVar2,&lStack_b0);
    func_0x00010162a788(&lStack_370,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a788(&lStack_2f0,0x112db40e0,&UNK_10d95e630);
    if (((ulong)plVar2 & 1) != 0) goto LAB_10162b664;
  }
  else if (uStack_328 >> 0x3c < 0xf) {
LAB_10162b528:
    lStack_370 = lStack_2f0;
    uStack_368 = uStack_2e8;
    lStack_360 = lStack_2e0;
    lStack_358 = lStack_2d8;
    lStack_350 = lStack_2d0;
    lStack_348 = lStack_2c8;
    lStack_340 = lStack_2c0;
    lStack_338 = lStack_2b8;
    func_0x00010162a7c8(&lStack_170,&lStack_b0,0x112db40e0,&UNK_10d95e630);
    plVar2 = &lStack_1b0;
    plVar4 = &lStack_b0;
LAB_10162b574:
    func_0x00010162a7c8(plVar2,plVar4,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a788(&lStack_370,0x112dbaa18,&UNK_10d96f0a8);
  }
  else {
    uStack_368 = param_1[5];
    lStack_370 = param_1[4];
    lStack_358 = param_1[7];
    lStack_360 = param_1[6];
    lStack_348 = param_1[9];
    lStack_350 = param_1[8];
    lStack_338 = param_1[0xb];
    lStack_340 = param_1[10];
    func_0x00010162a7c8(&lStack_170,&lStack_b0,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a7c8(&lStack_1b0,&lStack_b0,0x112db40e0,&UNK_10d95e630);
    func_0x00010162a788(&lStack_370,0x112db40e0,&UNK_10d95e630);
LAB_10162b664:
    uVar9 = param_1[0xd];
    uVar7 = param_1[0xc];
    lVar5 = param_1[0xe];
    uVar10 = param_2[0xd];
    uVar8 = param_2[0xc];
    lVar6 = param_2[0xe];
    uStack_1f0 = uVar8;
    uStack_1e8 = uVar10;
    lStack_1e0 = lVar6;
    uStack_1d0 = uVar7;
    uStack_1c8 = uVar9;
    lStack_1c0 = lVar5;
    if ((uVar7 & 0xff) == 2) {
      if ((uVar8 & 0xff) == 2) {
        func_0x00010162a7c8(&uStack_1d0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        func_0x00010162a7c8(&uStack_1f0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
LAB_10162b6ec:
        func_0x000101556278(uVar7,uVar9,lVar5);
        lStack_228 = param_1[0x10];
        lStack_230 = param_1[0xf];
        lStack_218 = param_1[0x12];
        lStack_220 = param_1[0x11];
        lStack_208 = param_1[0x14];
        lStack_210 = param_1[0x13];
        lStack_1f8 = param_1[0x16];
        lStack_200 = param_1[0x15];
        lStack_268 = param_2[0x10];
        lStack_270 = param_2[0xf];
        lStack_258 = param_2[0x12];
        lStack_260 = param_2[0x11];
        lStack_248 = param_2[0x14];
        lStack_250 = param_2[0x13];
        lStack_238 = param_2[0x16];
        lStack_240 = param_2[0x15];
        uStack_2e8 = param_1[0x10];
        lStack_2f0 = param_1[0xf];
        lStack_2d8 = param_1[0x12];
        lStack_2e0 = param_1[0x11];
        lStack_2c8 = param_1[0x14];
        lStack_2d0 = param_1[0x13];
        lStack_2b8 = param_1[0x16];
        lStack_2c0 = param_1[0x15];
        uStack_328 = param_2[0x10];
        lStack_330 = param_2[0xf];
        lStack_318 = param_2[0x12];
        lStack_320 = param_2[0x11];
        lStack_308 = param_2[0x14];
        lStack_310 = param_2[0x13];
        lStack_2f8 = param_2[0x16];
        lStack_300 = param_2[0x15];
        lStack_2b0 = lStack_330;
        uStack_2a8 = uStack_328;
        lStack_2a0 = lStack_320;
        lStack_298 = lStack_318;
        lStack_290 = lStack_310;
        lStack_288 = lStack_308;
        lStack_280 = lStack_300;
        lStack_278 = lStack_2f8;
        if (uStack_2e8 >> 0x3c < 0xf) {
          if (0xe < uStack_328 >> 0x3c) goto LAB_10162b8d8;
          lStack_3a8 = param_2[0x10];
          lStack_3b0 = param_2[0xf];
          lStack_398 = param_2[0x12];
          lStack_3a0 = param_2[0x11];
          lStack_388 = param_2[0x14];
          lStack_390 = param_2[0x13];
          lStack_378 = param_2[0x16];
          lStack_380 = param_2[0x15];
          lStack_128 = param_1[0x10];
          lStack_130 = param_1[0xf];
          lStack_118 = param_1[0x12];
          lStack_120 = param_1[0x11];
          lStack_108 = param_1[0x14];
          lStack_110 = param_1[0x13];
          lStack_f8 = param_1[0x16];
          lStack_100 = param_1[0x15];
          lStack_370 = lStack_3b0;
          uStack_368 = lStack_3a8;
          lStack_360 = lStack_3a0;
          lStack_358 = lStack_398;
          lStack_350 = lStack_390;
          lStack_348 = lStack_388;
          lStack_340 = lStack_380;
          lStack_338 = lStack_378;
          func_0x00010162a7c8(&lStack_230,auStack_3f0,0x112db40e0,&UNK_10d95e630);
          func_0x00010162a7c8(&lStack_270,auStack_3f0,0x112db40e0,&UNK_10d95e630);
          plVar2 = &lStack_130;
          func_0x000103672ea0(plVar2,&lStack_370);
          func_0x00010162a788(&lStack_3b0,0x112db40e0,&UNK_10d95e630);
          func_0x00010162a788(&lStack_2f0,0x112db40e0,&UNK_10d95e630);
          if (((ulong)plVar2 & 1) == 0) goto LAB_10162b97c;
        }
        else {
          if (uStack_328 >> 0x3c < 0xf) {
LAB_10162b8d8:
            lStack_370 = lStack_2f0;
            uStack_368 = uStack_2e8;
            lStack_360 = lStack_2e0;
            lStack_358 = lStack_2d8;
            lStack_350 = lStack_2d0;
            lStack_348 = lStack_2c8;
            lStack_340 = lStack_2c0;
            lStack_338 = lStack_2b8;
            func_0x00010162a7c8(&lStack_230,&lStack_130,0x112db40e0,&UNK_10d95e630);
            plVar2 = &lStack_270;
            plVar4 = &lStack_130;
            goto LAB_10162b574;
          }
          uStack_368 = param_1[0x10];
          lStack_370 = param_1[0xf];
          lStack_358 = param_1[0x12];
          lStack_360 = param_1[0x11];
          lStack_348 = param_1[0x14];
          lStack_350 = param_1[0x13];
          lStack_338 = param_1[0x16];
          lStack_340 = param_1[0x15];
          func_0x00010162a7c8(&lStack_230,&lStack_130,0x112db40e0,&UNK_10d95e630);
          func_0x00010162a7c8(&lStack_270,&lStack_130,0x112db40e0,&UNK_10d95e630);
          func_0x00010162a788(&lStack_370,0x112db40e0,&UNK_10d95e630);
        }
        lVar5 = param_1[2];
        FUN_100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
        uVar1 = (uint)lVar5;
        goto LAB_10162b980;
      }
LAB_10162b7f4:
      func_0x00010162a7c8(&uStack_1d0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
      func_0x00010162a7c8(&uStack_1f0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar7,uVar9,lVar5);
      uVar7 = uVar8;
      uVar9 = uVar10;
      lVar5 = lVar6;
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_10162b7f4;
      if ((((uint)uVar8 ^ (uint)uVar7) & 1) == 0) {
        func_0x00010162a7c8(&uStack_1d0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        func_0x00010162a7c8(&uStack_1f0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        uVar3 = uVar9;
        FUN_100e25fcc(uVar9,lVar5,uVar10,lVar6);
        func_0x000101556278(uVar8,uVar10,lVar6);
        if ((uVar3 & 1) != 0) goto LAB_10162b6ec;
      }
      else {
        func_0x00010162a7c8(&uStack_1d0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        func_0x00010162a7c8(&uStack_1f0,&lStack_2f0,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar10,lVar6);
      }
    }
    func_0x000101556278(uVar7,uVar9,lVar5);
  }
LAB_10162b97c:
  uVar1 = 0;
LAB_10162b980:
  return uVar1 & 1;
}



/* Entry: 10162ba60; end: 10162ba9f;  */

void FUN_10162ba60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f230;
  func_0x000107c61520(&UNK_10d96f230,&UNK_1103ea908);
  puRam0000000112dbaad0 = puVar1;
  return;
}



/* Entry: 10162baa0; end: 10162bab3;  */

void FUN_10162baa0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162bab4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10162baf4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162bab4; end: 10162bb33;  */

void FUN_10162bab4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f158;
  func_0x000107c61520(&UNK_10d96f158,&UNK_1103ea9b0);
  puRam0000000112dbaae0 = puVar1;
  return;
}



/* Entry: 10162bb34; end: 10162bb37;  */

void FUN_10162bb34(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbaaf0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbaaf8;
  func_0x00010002969c(0x112dbaaf8,&UNK_10d96f0e0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbaaf0 = puVar2;
  return;
}



/* Entry: 10162bb38; end: 10162bb87;  */

void FUN_10162bb38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbaaf0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbaaf8;
  func_0x00010002969c(0x112dbaaf8,&UNK_10d96f0e0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbaaf0 = puVar2;
  return;
}



/* Entry: 10162bb88; end: 10162bb8b;  */

void FUN_10162bb88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbab00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f198;
  func_0x000107c61520(&UNK_10d96f198,&UNK_1103ea9b0);
  puRam0000000112dbab00 = puVar1;
  return;
}



/* Entry: 10162bb8c; end: 10162bbcb;  */

void FUN_10162bb8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbab00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f198;
  func_0x000107c61520(&UNK_10d96f198,&UNK_1103ea9b0);
  puRam0000000112dbab00 = puVar1;
  return;
}



/* Entry: 10162bbcc; end: 10162bbef;  */

void FUN_10162bbcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162bbf0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10162bbf0; end: 10162bc2f;  */

void FUN_10162bbf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbab08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f208;
  func_0x000107c61520(&UNK_10d96f208,&UNK_1103ea908);
  puRam0000000112dbab08 = puVar1;
  return;
}


