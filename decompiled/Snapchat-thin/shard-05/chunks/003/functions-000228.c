/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cfecb0; end: 103cfece7;  */

undefined1  [16] FUN_103cfecb0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b52b0;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 103cfece8; end: 103cfed1f;  */

uint FUN_103cfece8(long param_1,long param_2)

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
  func_0x000103d1c7bc();
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



/* Entry: 103cfed20; end: 103cfedbf;  */

/* WARNING: Possible PIC construction at 0x000103cfed6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfed7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfed70) */
/* WARNING: Removing unreachable block (ram,0x000103cfed80) */

void FUN_103cfed20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002850 != -1) {
    func_0x000107c61568(0x113002850,FUN_103cfec68);
  }
  uVar5 = uRam000000011380f528;
  uVar4 = uRam000000011380f520;
  uVar3 = uRam000000011380f518;
  uVar2 = uRam000000011380f510;
  uVar1 = uRam000000011380f508;
  *param_1 = uRam000000011380f500;
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



/* Entry: 103cfedc0; end: 103cfedd3;  */

void FUN_103cfedc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003500;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003500,&UNK_10dc7e4a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cfedd4; end: 103cfee0b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cfedd4(undefined8 *param_1,undefined8 param_2)

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
  FUN_103d13f14();
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



/* Entry: 103cfee0c; end: 103cfee53;  */

void FUN_103cfee0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7ed40,0x27,2);
  uRam000000011380f538 = uStack_38;
  uRam000000011380f530 = uStack_40;
  uRam000000011380f548 = uStack_28;
  uRam000000011380f540 = uStack_30;
  uRam000000011380f558 = uStack_18;
  uRam000000011380f550 = uStack_20;
  return;
}



/* Entry: 103cfee54; end: 103cfee8b;  */

undefined1  [16] FUN_103cfee54(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b52e0;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103cfee8c; end: 103cfeec3;  */

uint FUN_103cfee8c(long param_1,long param_2)

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
  func_0x000103d1c77c();
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



/* Entry: 103cfeec4; end: 103cfef63;  */

/* WARNING: Possible PIC construction at 0x000103cfef10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfef20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfef14) */
/* WARNING: Removing unreachable block (ram,0x000103cfef24) */

void FUN_103cfeec4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002860 != -1) {
    func_0x000107c61568(0x113002860,FUN_103cfee0c);
  }
  uVar5 = uRam000000011380f558;
  uVar4 = uRam000000011380f550;
  uVar3 = uRam000000011380f548;
  uVar2 = uRam000000011380f540;
  uVar1 = uRam000000011380f538;
  *param_1 = uRam000000011380f530;
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



/* Entry: 103cfef64; end: 103cfef77;  */

void FUN_103cfef64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130034f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130034f0,&UNK_10dc7e4a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cfef78; end: 103cfefaf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cfef78(undefined8 *param_1,undefined8 param_2)

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
  FUN_103d14010();
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



/* Entry: 103cfefb0; end: 103cfeff7;  */

void FUN_103cfefb0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7ed70,0x32,2);
  uRam000000011380f568 = uStack_38;
  uRam000000011380f560 = uStack_40;
  uRam000000011380f578 = uStack_28;
  uRam000000011380f570 = uStack_30;
  uRam000000011380f588 = uStack_18;
  uRam000000011380f580 = uStack_20;
  return;
}



/* Entry: 103cfeff8; end: 103cff0df;  */

/* WARNING: Removing unreachable block (ram,0x000103cff0dc) */

void FUN_103cfeff8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        FUN_103d14d18();
        (*pcVar3)(unaff_x20 + 0x30,&UNK_1107000a8,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 1) goto LAB_103cff084;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_103cff084:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103cff0e0; end: 103cff19b;  */

void FUN_103cff0e0(undefined8 param_1,undefined8 param_2,long param_3)

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
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (FUN_103cff19c(), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103cff19c; end: 103cff21f;  */

void FUN_103cff19c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_60 = *(long *)(param_1 + 0x30);
  if (lStack_60 != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d14d18();
    (*pcVar1)(&lStack_60,3,&UNK_1107000a8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103cff220; end: 103cff257;  */

undefined1  [16] FUN_103cff220(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5310;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 103cff258; end: 103cff28f;  */

uint FUN_103cff258(long param_1,long param_2)

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
  func_0x000103d1c73c();
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



/* Entry: 103cff290; end: 103cff32f;  */

/* WARNING: Possible PIC construction at 0x000103cff2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cff2ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cff2e0) */
/* WARNING: Removing unreachable block (ram,0x000103cff2f0) */

void FUN_103cff290(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002870 != -1) {
    func_0x000107c61568(0x113002870,FUN_103cfefb0);
  }
  uVar5 = uRam000000011380f588;
  uVar4 = uRam000000011380f580;
  uVar3 = uRam000000011380f578;
  uVar2 = uRam000000011380f570;
  uVar1 = uRam000000011380f568;
  *param_1 = uRam000000011380f560;
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



/* Entry: 103cff330; end: 103cff343;  */

void FUN_103cff330(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130034e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130034e0,&UNK_10dc7e498);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cff344; end: 103cff377;  */

void FUN_103cff344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cff378; end: 103cff48b;  */

void FUN_103cff378(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103cff48c; end: 103cff4d3;  */

void FUN_103cff48c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7ed40,0x27,2);
  uRam000000011380f598 = uStack_38;
  uRam000000011380f590 = uStack_40;
  uRam000000011380f5a8 = uStack_28;
  uRam000000011380f5a0 = uStack_30;
  uRam000000011380f5b8 = uStack_18;
  uRam000000011380f5b0 = uStack_20;
  return;
}



/* Entry: 103cff4d4; end: 103cff5e3;  */

/* WARNING: Removing unreachable block (ram,0x000103cff59c) */
/* WARNING: Removing unreachable block (ram,0x000103cff5e0) */

void FUN_103cff4d4(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000103d11aa4();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_1106ffd68;
LAB_103cff5cc:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103d0f8b4();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1106feeb0;
          goto LAB_103cff5cc;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x150))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103cff5e4; end: 103cff663;  */

void FUN_103cff5e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x40);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103d11aa4();
    (*pcVar1)(&uStack_60,3,&UNK_1106ffd68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103cff664; end: 103cff69b;  */

undefined1  [16] FUN_103cff664(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5340;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103cff69c; end: 103cff6d3;  */

uint FUN_103cff69c(long param_1,long param_2)

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
  func_0x000103d1c6fc();
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



/* Entry: 103cff6d4; end: 103cff773;  */

/* WARNING: Possible PIC construction at 0x000103cff720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cff730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cff724) */
/* WARNING: Removing unreachable block (ram,0x000103cff734) */

void FUN_103cff6d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002880 != -1) {
    func_0x000107c61568(0x113002880,FUN_103cff48c);
  }
  uVar5 = uRam000000011380f5b8;
  uVar4 = uRam000000011380f5b0;
  uVar3 = uRam000000011380f5a8;
  uVar2 = uRam000000011380f5a0;
  uVar1 = uRam000000011380f598;
  *param_1 = uRam000000011380f590;
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



/* Entry: 103cff774; end: 103cff787;  */

void FUN_103cff774(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130034d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130034d0,&UNK_10dc7e490);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cff788; end: 103cff7bb;  */

void FUN_103cff788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cff7bc; end: 103cff8cf;  */

void FUN_103cff7bc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103cff8d0; end: 103cff917;  */

void FUN_103cff8d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7ecc0,0x1b,2);
  uRam000000011380f5c8 = uStack_38;
  uRam000000011380f5c0 = uStack_40;
  uRam000000011380f5d8 = uStack_28;
  uRam000000011380f5d0 = uStack_30;
  uRam000000011380f5e8 = uStack_18;
  uRam000000011380f5e0 = uStack_20;
  return;
}



/* Entry: 103cff918; end: 103cff94f;  */

undefined1  [16] FUN_103cff918(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5370;
  auVar1._0_8_ = 0xd00000000000003a;
  return auVar1;
}



/* Entry: 103cff950; end: 103cff987;  */

uint FUN_103cff950(long param_1,long param_2)

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
  func_0x000103d1c6bc();
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



/* Entry: 103cff988; end: 103cffa27;  */

/* WARNING: Possible PIC construction at 0x000103cff9d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cff9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cff9d8) */
/* WARNING: Removing unreachable block (ram,0x000103cff9e8) */

void FUN_103cff988(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002890 != -1) {
    func_0x000107c61568(0x113002890,FUN_103cff8d0);
  }
  uVar5 = uRam000000011380f5e8;
  uVar4 = uRam000000011380f5e0;
  uVar3 = uRam000000011380f5d8;
  uVar2 = uRam000000011380f5d0;
  uVar1 = uRam000000011380f5c8;
  *param_1 = uRam000000011380f5c0;
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



/* Entry: 103cffa28; end: 103cffa3b;  */

void FUN_103cffa28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130034c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130034c0,&UNK_10dc7e488);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cffa3c; end: 103cffa73;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cffa3c(undefined8 *param_1,undefined8 param_2)

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
  FUN_103d14304();
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



/* Entry: 103cffa74; end: 103cffabb;  */

void FUN_103cffa74(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7ece0,0x53,2);
  uRam000000011380f5f8 = uStack_38;
  uRam000000011380f5f0 = uStack_40;
  uRam000000011380f608 = uStack_28;
  uRam000000011380f600 = uStack_30;
  uRam000000011380f618 = uStack_18;
  uRam000000011380f610 = uStack_20;
  return;
}



/* Entry: 103cffabc; end: 103cffc23;  */

/* WARNING: Removing unreachable block (ram,0x000103cffc18) */

void FUN_103cffabc(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) {
            if (lVar1 == 3) {
              pcVar4 = *(code **)(param_3 + 0x180);
              func_0x000103d0f8f4();
              lVar2 = unaff_x20 + 0x20;
              puVar3 = &UNK_1106febe0;
              goto LAB_103cffb40;
            }
            goto LAB_103cffb54;
          }
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_103cffc08:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103d0f8b4();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_1106feeb0;
        }
        else {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x150);
            goto LAB_103cffc08;
          }
          if (lVar1 != 6) goto LAB_103cffb54;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103cb73fc();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_1106fee20;
        }
LAB_103cffb40:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103cffb54:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103cffc24; end: 103cffddf;  */

void FUN_103cffc24(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar6;
  ulong uStack_50;
  undefined1 uStack_48;
  
  puVar4 = &uStack_50;
  uVar5 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar1 = uVar5 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar5,1,param_2,param_3), unaff_x21 == 0)) {
    puVar3 = (undefined1 *)unaff_x20[2];
    uVar5 = unaff_x20[3];
    uVar1 = (ulong)puVar3 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(puVar3,uVar5,2,param_2,param_3), unaff_x21 == 0)) {
      if (unaff_x20[4] != 0) {
        uStack_48 = (undefined1)unaff_x20[5];
        pcVar6 = *(code **)(param_3 + 0x80);
        uStack_50 = unaff_x20[4];
        func_0x000103d0f8f4();
        (*pcVar6)(&uStack_50,3,&UNK_1106febe0,puVar3,param_2,param_3);
        puVar3 = (undefined1 *)puVar4;
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (unaff_x20[6] != 0) {
        uStack_48 = (undefined1)unaff_x20[7];
        pcVar6 = *(code **)(param_3 + 0x80);
        uStack_50 = unaff_x20[6];
        func_0x000103d0f8b4();
        (*pcVar6)(&uStack_50,4,&UNK_1106feeb0,puVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      uVar5 = unaff_x20[8];
      uVar2 = unaff_x20[9];
      uVar1 = uVar5 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(uVar5,uVar2,5,param_2,param_3), unaff_x21 == 0)) {
        if (unaff_x20[10] != 0) {
          uStack_48 = (undefined1)unaff_x20[0xb];
          pcVar6 = *(code **)(param_3 + 0x80);
          uStack_50 = unaff_x20[10];
          func_0x000103cb73fc();
          (*pcVar6)(&uStack_50,6,&UNK_1106fee20,uVar5,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103cffde0; end: 103cffe3f;  */

void FUN_103cffde0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  return;
}



/* Entry: 103cffe40; end: 103cffe6f;  */

undefined1  [16] FUN_103cffe40(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 103cffe70; end: 103cffea3;  */

void FUN_103cffe70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 103cffea4; end: 103cffeb7;  */

undefined1  [16] FUN_103cffea4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x103cffeb4;
  return auVar1;
}



/* Entry: 103cffeb8; end: 103cffedf;  */

void FUN_103cffeb8(void)

{
  FUN_103cffabc();
  return;
}



/* Entry: 103cffee0; end: 103cffee3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cffee0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103cffee4; end: 103cfff1b;  */

uint FUN_103cffee4(long param_1,long param_2)

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
  func_0x000103d1c67c();
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



/* Entry: 103cfff1c; end: 103cfff83;  */

uint FUN_103cfff1c(undefined8 *param_1)

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
  FUN_103d11d60(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103cfff84; end: 103d00023;  */

/* WARNING: Possible PIC construction at 0x000103cfffd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfffe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfffd4) */
/* WARNING: Removing unreachable block (ram,0x000103cfffe4) */

void FUN_103cfff84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130028a0 != -1) {
    func_0x000107c61568(0x1130028a0,FUN_103cffa74);
  }
  uVar5 = uRam000000011380f618;
  uVar4 = uRam000000011380f610;
  uVar3 = uRam000000011380f608;
  uVar2 = uRam000000011380f600;
  uVar1 = uRam000000011380f5f8;
  *param_1 = uRam000000011380f5f0;
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



/* Entry: 103d00024; end: 103d0005f;  */

void FUN_103d00024(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130034b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130034b0,&UNK_10dc7e480);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d00060; end: 103d0018b;  */

void FUN_103d00060(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d0018c; end: 103d00237;  */

uint FUN_103d0018c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d11d60(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103d00238; end: 103d002cf;  */

void FUN_103d00238(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103d0028c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000103d002a8;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_103d00274;
code_r0x000103d002a8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_103d00274:
    (*pcVar3)();
  }
  goto LAB_103d0028c;
}



/* Entry: 103d002d0; end: 103d00373;  */

void FUN_103d002d0(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d00374; end: 103d003ab;  */

undefined1  [16] FUN_103d00374(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b53f0;
  auVar1._0_8_ = 0xd00000000000002d;
  return auVar1;
}



/* Entry: 103d003ac; end: 103d003e3;  */

uint FUN_103d003ac(long param_1,long param_2)

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
  func_0x000103d1c63c();
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



/* Entry: 103d003e4; end: 103d00483;  */

/* WARNING: Possible PIC construction at 0x000103d00430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d00440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d00434) */
/* WARNING: Removing unreachable block (ram,0x000103d00444) */

void FUN_103d003e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130028b0 != -1) {
    func_0x000107c61568(0x1130028b0,0x103d001f0);
  }
  uVar5 = uRam000000011380f648;
  uVar4 = uRam000000011380f640;
  uVar3 = uRam000000011380f638;
  uVar2 = uRam000000011380f630;
  uVar1 = uRam000000011380f628;
  *param_1 = uRam000000011380f620;
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



/* Entry: 103d00484; end: 103d00497;  */

void FUN_103d00484(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130034a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130034a0,&UNK_10dc7e478);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d00498; end: 103d005ab;  */

void FUN_103d00498(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d005ac; end: 103d005f3;  */

void FUN_103d005ac(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7ec90,0x27,2);
  uRam000000011380f658 = uStack_38;
  uRam000000011380f650 = uStack_40;
  uRam000000011380f668 = uStack_28;
  uRam000000011380f660 = uStack_30;
  uRam000000011380f678 = uStack_18;
  uRam000000011380f670 = uStack_20;
  return;
}



/* Entry: 103d005f4; end: 103d006f3;  */

/* WARNING: Removing unreachable block (ram,0x000103d00690) */

void FUN_103d005f4(undefined8 param_1,long param_2,long param_3,code *param_4,undefined *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
LAB_103d00644:
  do {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar5)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) {
      pcVar4 = *(code **)(param_3 + 0x1a0);
      (*param_4)();
      lVar2 = unaff_x20 + 0x20;
      puVar3 = param_5;
    }
    else {
      if (lVar1 != 2) {
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x150))();
        }
        goto LAB_103d00644;
      }
      pcVar4 = *(code **)(param_3 + 0x180);
      func_0x000103d0f8b4();
      lVar2 = unaff_x20 + 0x10;
      puVar3 = &UNK_1106feeb0;
    }
    (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
  } while( true );
}



/* Entry: 103d006f4; end: 103d00813;  */

void FUN_103d006f4(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  ulong uStack_70;
  undefined1 uStack_68;
  
  puVar3 = &uStack_70;
  puVar2 = (undefined1 *)*unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = (ulong)puVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) ||
     ((**(code **)(param_3 + 0x70))(puVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[2] != 0) {
      uStack_68 = (undefined1)unaff_x20[3];
      pcVar5 = *(code **)(param_3 + 0x80);
      uStack_70 = unaff_x20[2];
      func_0x000103d0f8b4();
      (*pcVar5)(&uStack_70,2,&UNK_1106feeb0,puVar2,param_2,param_3);
      puVar2 = (undefined1 *)puVar3;
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar4 = unaff_x20[4];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      (*param_4)();
      (*pcVar5)(uVar4,3,param_5,puVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 103d00814; end: 103d0084b;  */

undefined1  [16] FUN_103d00814(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5420;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 103d0084c; end: 103d00893;  */

void FUN_103d0084c(void)

{
  FUN_103d005f4();
  return;
}



/* Entry: 103d00894; end: 103d008cb;  */

uint FUN_103d00894(long param_1,long param_2)

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
  func_0x000103d1c5fc();
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



/* Entry: 103d008cc; end: 103d0092b;  */

uint FUN_103d008cc(undefined8 *param_1)

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
  FUN_103d11198(&uStack_90,&uStack_50,FUN_103d0c8cc);
  return uVar1 & 1;
}



/* Entry: 103d0092c; end: 103d009cb;  */

/* WARNING: Possible PIC construction at 0x000103d00978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d00988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d0097c) */
/* WARNING: Removing unreachable block (ram,0x000103d0098c) */

void FUN_103d0092c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130028c0 != -1) {
    func_0x000107c61568(0x1130028c0,FUN_103d005ac);
  }
  uVar5 = uRam000000011380f678;
  uVar4 = uRam000000011380f670;
  uVar3 = uRam000000011380f668;
  uVar2 = uRam000000011380f660;
  uVar1 = uRam000000011380f658;
  *param_1 = uRam000000011380f650;
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



/* Entry: 103d009cc; end: 103d009df;  */

void FUN_103d009cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003490;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003490,&UNK_10dc7e470);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d009e0; end: 103d00a13;  */

void FUN_103d009e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d00a14; end: 103d00b47;  */

void FUN_103d00a14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = unaff_x20[1];
  uStack_68 = *unaff_x20;
  uStack_58 = unaff_x20[2];
  uStack_50 = *(undefined1 *)(unaff_x20 + 3);
  uStack_48 = unaff_x20[4];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d00b48; end: 103d00bef;  */

uint FUN_103d00b48(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d11198(&uStack_90,&uStack_50,FUN_103d0c8cc);
  return uVar1 & 1;
}



/* Entry: 103d00bf0; end: 103d00c9b;  */

void FUN_103d00bf0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_103d00c2c;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_103d00c2c:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_103d00c2c;
}



/* Entry: 103d00c9c; end: 103d00d6f;  */

void FUN_103d00c9c(undefined8 param_1,undefined8 param_2,long param_3)

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
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103d00d70; end: 103d00dc7;  */

void FUN_103d00d70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 103d00dc8; end: 103d00def;  */

void FUN_103d00dc8(void)

{
  FUN_103d00bf0();
  return;
}



/* Entry: 103d00df0; end: 103d00e27;  */

uint FUN_103d00df0(long param_1,long param_2)

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
  func_0x000103d1c5bc();
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



/* Entry: 103d00e28; end: 103d00e6f;  */

uint FUN_103d00e28(undefined8 *param_1)

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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_103d0fcac(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d00e70; end: 103d00f0f;  */

/* WARNING: Possible PIC construction at 0x000103d00ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d00ecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d00ec0) */
/* WARNING: Removing unreachable block (ram,0x000103d00ed0) */

void FUN_103d00e70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130028d8 != -1) {
    func_0x000107c61568(0x1130028d8,0x103d00ba8);
  }
  uVar5 = uRam000000011380f6a8;
  uVar4 = uRam000000011380f6a0;
  uVar3 = uRam000000011380f698;
  uVar2 = uRam000000011380f690;
  uVar1 = uRam000000011380f688;
  *param_1 = uRam000000011380f680;
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



/* Entry: 103d00f10; end: 103d00f23;  */

void FUN_103d00f10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003480;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003480,&UNK_10dc7e468);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d00f24; end: 103d01027;  */

void FUN_103d00f24(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d01028; end: 103d010b7;  */

uint FUN_103d01028(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_103d0fcac(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d010b8; end: 103d011c7;  */

/* WARNING: Removing unreachable block (ram,0x000103d01180) */
/* WARNING: Removing unreachable block (ram,0x000103d011c4) */

void FUN_103d010b8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000103d11f6c();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_110700358;
LAB_103d011b0:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103d0f8b4();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1106feeb0;
          goto LAB_103d011b0;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x150))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d011c8; end: 103d012ab;  */

void FUN_103d011c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000103d0f8b4();
      (*pcVar4)(&uStack_50,2,&UNK_1106feeb0,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_103d012ac();
    if (unaff_x21 == 0) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103d012ac; end: 103d013af;  */

void FUN_103d012ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0xd8);
  uStack_80 = *(undefined8 *)(param_1 + 0xd0);
  uStack_68 = *(undefined8 *)(param_1 + 0xe8);
  uStack_70 = *(undefined8 *)(param_1 + 0xe0);
  uStack_58 = *(undefined8 *)(param_1 + 0xf8);
  uStack_60 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = *(undefined8 *)(param_1 + 0x100);
  uStack_b8 = *(undefined8 *)(param_1 + 0x98);
  uStack_c0 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_98 = *(undefined8 *)(param_1 + 0xb8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_88 = *(undefined8 *)(param_1 + 200);
  uStack_90 = *(undefined8 *)(param_1 + 0xc0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x58);
  uStack_100 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x68);
  uStack_f0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_d0 = *(undefined8 *)(param_1 + 0x80);
  uStack_118 = *(undefined8 *)(param_1 + 0x38);
  uStack_120 = *(undefined8 *)(param_1 + 0x30);
  uStack_108 = *(undefined8 *)(param_1 + 0x48);
  uStack_110 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = &uStack_120;
  func_0x000100d6cdb4();
  if ((int)puVar1 != 1) {
    uStack_158 = uStack_78;
    uStack_160 = uStack_80;
    uStack_148 = uStack_68;
    uStack_150 = uStack_70;
    uStack_138 = uStack_58;
    uStack_140 = uStack_60;
    uStack_130 = uStack_50;
    uStack_198 = uStack_b8;
    uStack_1a0 = uStack_c0;
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    uStack_178 = uStack_98;
    uStack_180 = uStack_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_1d8 = uStack_f8;
    uStack_1e0 = uStack_100;
    uStack_1c8 = uStack_e8;
    uStack_1d0 = uStack_f0;
    uStack_1b8 = uStack_d8;
    uStack_1c0 = uStack_e0;
    uStack_1a8 = uStack_c8;
    uStack_1b0 = uStack_d0;
    uStack_1f8 = uStack_118;
    uStack_200 = uStack_120;
    uStack_1e8 = uStack_108;
    uStack_1f0 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103d11f6c();
    (*pcVar2)(&uStack_200,3,&UNK_110700358,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d013b0; end: 103d0144f;  */

void FUN_103d013b0(undefined8 *param_1)

{
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100d6cdcc(&uStack_f8);
  param_1[0x1d] = uStack_40;
  param_1[0x1c] = uStack_48;
  param_1[0x1f] = uStack_30;
  param_1[0x1e] = uStack_38;
  param_1[0x15] = uStack_80;
  param_1[0x14] = uStack_88;
  param_1[0x17] = uStack_70;
  param_1[0x16] = uStack_78;
  param_1[0x19] = uStack_60;
  param_1[0x18] = uStack_68;
  param_1[0x1b] = uStack_50;
  param_1[0x1a] = uStack_58;
  param_1[0xd] = uStack_c0;
  param_1[0xc] = uStack_c8;
  param_1[0xf] = uStack_b0;
  param_1[0xe] = uStack_b8;
  param_1[0x11] = uStack_a0;
  param_1[0x10] = uStack_a8;
  param_1[0x13] = uStack_90;
  param_1[0x12] = uStack_98;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = uStack_f0;
  param_1[6] = uStack_f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[0x20] = uStack_28;
  param_1[9] = uStack_e0;
  param_1[8] = uStack_e8;
  param_1[0xb] = uStack_d0;
  param_1[10] = uStack_d8;
  return;
}



/* Entry: 103d01450; end: 103d01487;  */

undefined1  [16] FUN_103d01450(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5480;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 103d01488; end: 103d0149b;  */

void FUN_103d01488(void)

{
  FUN_103d010b8();
  return;
}



/* Entry: 103d0149c; end: 103d01503;  */

void FUN_103d0149c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_148 [264];
  
  func_0x000107c610b4(auStack_148);
  FUN_103d011c8(param_1,param_2,param_3);
  return;
}



/* Entry: 103d01504; end: 103d0153b;  */

uint FUN_103d01504(long param_1,long param_2)

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
  func_0x000103d1c57c();
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



/* Entry: 103d0153c; end: 103d0158b;  */

uint FUN_103d0153c(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_128,param_1,0x108);
  func_0x000107c610b4(auStack_230);
  FUN_103d0fd4c(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 103d0158c; end: 103d0162b;  */

/* WARNING: Possible PIC construction at 0x000103d015d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d015e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d015dc) */
/* WARNING: Removing unreachable block (ram,0x000103d015ec) */

void FUN_103d0158c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130028e8 != -1) {
    func_0x000107c61568(0x1130028e8,0x103d01070);
  }
  uVar5 = uRam000000011380f6d8;
  uVar4 = uRam000000011380f6d0;
  uVar3 = uRam000000011380f6c8;
  uVar2 = uRam000000011380f6c0;
  uVar1 = uRam000000011380f6b8;
  *param_1 = uRam000000011380f6b0;
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



/* Entry: 103d0162c; end: 103d0163f;  */

void FUN_103d0162c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003470;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003470,&UNK_10dc7e460);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d01640; end: 103d01673;  */

void FUN_103d01640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d01674; end: 103d0177f;  */

void FUN_103d01674(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_180 [72];
  undefined1 auStack_138 [264];
  
  func_0x000107c610b4(auStack_138);
  func_0x000107c6068c(auStack_180,0);
  func_0x000107c5fa50(auStack_180,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d01780; end: 103d017d3;  */

uint FUN_103d01780(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_230,param_1,0x108);
  func_0x000107c610b4(auStack_128,param_2,0x108);
  FUN_103d0fd4c(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 103d017d4; end: 103d018af;  */

void FUN_103d017d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7eba0,0x89,2);
  uRam000000011380f6e8 = uStack_38;
  uRam000000011380f6e0 = uStack_40;
  uRam000000011380f6f8 = uStack_28;
  uRam000000011380f6f0 = uStack_30;
  uRam000000011380f708 = uStack_18;
  uRam000000011380f700 = uStack_20;
  return;
}



/* Entry: 103d018b0; end: 103d01d63;  */

void FUN_103d018b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [96];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
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
  
  puVar13 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  puVar19 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar19 = 0;
  puVar18 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar18 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar16 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = (undefined8 *)(unaff_x20 + 0x68);
  *puVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  puVar11 = (undefined8 *)(unaff_x20 + 0x78);
  *puVar11 = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0xd8);
  *puVar8 = 0;
  *(undefined1 *)(unaff_x20 + 0xe0) = 1;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *puVar7 = 0;
  *(undefined **)(unaff_x20 + 0x108) = puVar5;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0xe000000000000000;
  func_0x000107c61428(param_1 + 0x10,auStack_148,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar13,auStack_160,1,0);
  *puVar13 = uVar12;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar14;
  func_0x000107c61428(param_1 + 0x20,auStack_178,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61428(puVar19,auStack_190,1,0);
  *puVar19 = uVar12;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  func_0x000107c61434(uVar14);
  func_0x000107c61434(uVar6);
  func_0x000107c61428(param_1 + 0x30,auStack_1a8,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined1 *)(param_1 + 0x38);
  func_0x000107c61428(puVar18,auStack_1c0,1,0);
  *puVar18 = uVar12;
  *(undefined1 *)(unaff_x20 + 0x38) = uVar4;
  func_0x000107c61428(param_1 + 0x40,auStack_1d8,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61428(puVar16,auStack_1f0,1,0);
  uVar15 = *puVar16;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
  *puVar16 = uVar12;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  func_0x0001015d316c(uVar12,uVar1,uVar14,uVar2);
  func_0x0001015d38c8(uVar15,uVar6,uVar3,uVar17);
  func_0x000107c61428(param_1 + 0x60,auStack_208,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61428(puVar9,auStack_220,1,0);
  uVar14 = *puVar9;
  *puVar9 = uVar12;
  func_0x000107c61434(uVar12);
  func_0x000107c6142c(uVar14);
  func_0x000107c61428(param_1 + 0x68,auStack_238,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined1 *)(param_1 + 0x70);
  func_0x000107c61428(puVar10,auStack_250,1,0);
  *puVar10 = uVar12;
  *(undefined1 *)(unaff_x20 + 0x70) = uVar4;
  func_0x000107c61428(param_1 + 0x78,auStack_268,0,0);
  uStack_108 = *(undefined8 *)(param_1 + 0xa0);
  uStack_110 = *(undefined8 *)(param_1 + 0x98);
  uStack_f8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_100 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_f0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x80);
  uStack_130 = *(undefined8 *)(param_1 + 0x78);
  uStack_118 = *(undefined8 *)(param_1 + 0x90);
  uStack_120 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c61428(puVar11,auStack_280,1,0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_80 = *(undefined8 *)(unaff_x20 + 200);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_d0 = *puVar11;
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 200) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_128;
  *puVar11 = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_120;
  FUN_103d0f578(&uStack_130,auStack_2e0,0x113000f38,&UNK_10dc76f20);
  FUN_103d1ccb8(&uStack_d0,0x113000f38,&UNK_10dc76f20);
  func_0x000107c61428(param_1 + 0xd8,auStack_2e0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = *(undefined1 *)(param_1 + 0xe0);
  func_0x000107c61428(puVar8,auStack_2f8,1,0);
  *puVar8 = uVar12;
  *(undefined1 *)(unaff_x20 + 0xe0) = uVar4;
  func_0x000107c61428(param_1 + 0xe8,auStack_310,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0xe8);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uVar14 = *(undefined8 *)(param_1 + 0xf8);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x000107c61428(puVar7,auStack_328,1,0);
  uVar15 = *puVar7;
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x100);
  *puVar7 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar2;
  FUN_103d0dfe0(uVar12,uVar1,uVar14,uVar2);
  func_0x000103d0e014(uVar15,uVar6,uVar3,uVar17);
  func_0x000107c61428(param_1 + 0x108,auStack_340,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x108);
  func_0x000107c61428(unaff_x20 + 0x108,auStack_358,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x20 + 0x108) = uVar12;
  func_0x000107c61434(uVar12);
  func_0x000107c6142c(uVar14);
  func_0x000107c61428(param_1 + 0x110,auStack_370,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x110);
  uVar14 = *(undefined8 *)(param_1 + 0x118);
  func_0x000107c61434(uVar14);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_388,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar14;
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 103d01d64; end: 103d01dff;  */

void FUN_103d01d64(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001015d38c8(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  FUN_103d1c0f4(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000103d0e014(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x118));
  return;
}



/* Entry: 103d01e00; end: 103d0200b;  */

/* WARNING: Removing unreachable block (ram,0x000103d01f74) */
/* WARNING: Removing unreachable block (ram,0x000103d01fac) */
/* WARNING: Removing unreachable block (ram,0x000103d01f90) */
/* WARNING: Removing unreachable block (ram,0x000103d02008) */
/* WARNING: Removing unreachable block (ram,0x000103d01fc8) */
/* WARNING: Removing unreachable block (ram,0x000103d01f20) */
/* WARNING: Removing unreachable block (ram,0x000103d01f58) */
/* WARNING: Removing unreachable block (ram,0x000103d01f3c) */

void FUN_103d01e00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x10;
        goto code_r0x000103d01e88;
      case 2:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x20;
        goto code_r0x000103d01e88;
      case 3:
        FUN_103d0200c(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_103d020a0(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_103d02134(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_103d021c8(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_103d0225c(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_103d022f0(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_103d02384(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_103d02418(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        func_0x000107c61428(param_1 + 0x110,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x110;
code_r0x000103d01e88:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d0200c; end: 103d0209f;  */

void FUN_103d0200c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x30;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103d1cc5c();
  (*pcVar2)(param_2 + 0x30,&UNK_1106fec70,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d020a0; end: 103d02133;  */

void FUN_103d020a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015efcec();
  (*pcVar2)(param_2 + 0x40,&UNK_11078f958,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


