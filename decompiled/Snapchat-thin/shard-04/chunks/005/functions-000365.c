/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10361daf4; end: 10361db07;  */

void FUN_10361daf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80850;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80850,&UNK_10dbed338);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10361db08; end: 10361db3f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10361db08(undefined8 *param_1,undefined8 param_2)

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
  FUN_103625fb0();
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



/* Entry: 10361db40; end: 10361dbcb;  */

uint FUN_10361db40(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001036206fc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10361dbcc; end: 10361dc6b;  */

/* WARNING: Possible PIC construction at 0x00010361dc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361dc28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361dc1c) */
/* WARNING: Removing unreachable block (ram,0x00010361dc2c) */

void FUN_10361dbcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f5c0 != -1) {
    func_0x000107c61568(0x112f7f5c0,0x10361db84);
  }
  uVar5 = uRam000000011380a5b8;
  uVar4 = uRam000000011380a5b0;
  uVar3 = uRam000000011380a5a8;
  uVar2 = uRam000000011380a5a0;
  uVar1 = uRam000000011380a598;
  *param_1 = uRam000000011380a590;
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



/* Entry: 10361dc6c; end: 10361dcb3;  */

void FUN_10361dc6c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed6a0,0x7e,2);
  uRam000000011380a5c8 = uStack_38;
  uRam000000011380a5c0 = uStack_40;
  uRam000000011380a5d8 = uStack_28;
  uRam000000011380a5d0 = uStack_30;
  uRam000000011380a5e8 = uStack_18;
  uRam000000011380a5e0 = uStack_20;
  return;
}



/* Entry: 10361dcb4; end: 10361dd53;  */

/* WARNING: Possible PIC construction at 0x00010361dd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361dd10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361dd04) */
/* WARNING: Removing unreachable block (ram,0x00010361dd14) */

void FUN_10361dcb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f5c8 != -1) {
    func_0x000107c61568(0x112f7f5c8,FUN_10361dc6c);
  }
  uVar5 = uRam000000011380a5e8;
  uVar4 = uRam000000011380a5e0;
  uVar3 = uRam000000011380a5d8;
  uVar2 = uRam000000011380a5d0;
  uVar1 = uRam000000011380a5c8;
  *param_1 = uRam000000011380a5c0;
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



/* Entry: 10361dd54; end: 10361ddc3;  */

void FUN_10361dd54(void)

{
  func_0x000107c5fb78(0xd000000000000014,0x800000010f1567d0);
  uRam000000011380a5f0 = 0xd000000000000025;
  uRam000000011380a5f8 = 0x800000010f156760;
  return;
}



/* Entry: 10361ddc4; end: 10361de0b;  */

void FUN_10361ddc4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed680,0x1d,2);
  uRam000000011380a608 = uStack_38;
  uRam000000011380a600 = uStack_40;
  uRam000000011380a618 = uStack_28;
  uRam000000011380a610 = uStack_30;
  uRam000000011380a628 = uStack_18;
  uRam000000011380a620 = uStack_20;
  return;
}



/* Entry: 10361de0c; end: 10361de47;  */

undefined1  [16] FUN_10361de0c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f7f5d0 != -1) {
    func_0x000107c61568(0x112f7f5d0,FUN_10361dd54);
  }
  auVar1._8_8_ = uRam000000011380a5f8;
  auVar1._0_8_ = uRam000000011380a5f0;
  func_0x000107c61434(uRam000000011380a5f8);
  return auVar1;
}



/* Entry: 10361de48; end: 10361deaf;  */

void FUN_10361de48(void)

{
  FUN_10361f6a4();
  return;
}



/* Entry: 10361deb0; end: 10361dee7;  */

uint FUN_10361deb0(long param_1,long param_2)

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
  func_0x000103627980();
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



/* Entry: 10361dee8; end: 10361df87;  */

/* WARNING: Possible PIC construction at 0x00010361df34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361df44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361df38) */
/* WARNING: Removing unreachable block (ram,0x00010361df48) */

void FUN_10361dee8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f5d8 != -1) {
    func_0x000107c61568(0x112f7f5d8,FUN_10361ddc4);
  }
  uVar5 = uRam000000011380a628;
  uVar4 = uRam000000011380a620;
  uVar3 = uRam000000011380a618;
  uVar2 = uRam000000011380a610;
  uVar1 = uRam000000011380a608;
  *param_1 = uRam000000011380a600;
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



/* Entry: 10361df88; end: 10361df9b;  */

void FUN_10361df88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80840;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80840,&UNK_10dbed330);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10361df9c; end: 10361dfd3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10361df9c(undefined8 *param_1,undefined8 param_2)

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
  FUN_1036260ac();
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



/* Entry: 10361dfd4; end: 10361e01b;  */

void FUN_10361dfd4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed640,0x3e,2);
  uRam000000011380a638 = uStack_38;
  uRam000000011380a630 = uStack_40;
  uRam000000011380a648 = uStack_28;
  uRam000000011380a640 = uStack_30;
  uRam000000011380a658 = uStack_18;
  uRam000000011380a650 = uStack_20;
  return;
}



/* Entry: 10361e01c; end: 10361e0bb;  */

/* WARNING: Possible PIC construction at 0x00010361e068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361e078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361e06c) */
/* WARNING: Removing unreachable block (ram,0x00010361e07c) */

void FUN_10361e01c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f5f0 != -1) {
    func_0x000107c61568(0x112f7f5f0,FUN_10361dfd4);
  }
  uVar5 = uRam000000011380a658;
  uVar4 = uRam000000011380a650;
  uVar3 = uRam000000011380a648;
  uVar2 = uRam000000011380a640;
  uVar1 = uRam000000011380a638;
  *param_1 = uRam000000011380a630;
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



/* Entry: 10361e0bc; end: 10361e0e7;  */

void FUN_10361e0bc(void)

{
  func_0x000107c5fb78(0x7665526576694c2e,0xeb00000000776569);
  uRam000000011380a660 = 0xd000000000000025;
  uRam000000011380a668 = 0x800000010f156760;
  return;
}



/* Entry: 10361e0e8; end: 10361e12f;  */

void FUN_10361e0e8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed620,0x13,2);
  uRam000000011380a678 = uStack_38;
  uRam000000011380a670 = uStack_40;
  uRam000000011380a688 = uStack_28;
  uRam000000011380a680 = uStack_30;
  uRam000000011380a698 = uStack_18;
  uRam000000011380a690 = uStack_20;
  return;
}



/* Entry: 10361e130; end: 10361e16b;  */

undefined1  [16] FUN_10361e130(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f7f5f8 != -1) {
    func_0x000107c61568(0x112f7f5f8,FUN_10361e0bc);
  }
  auVar1._8_8_ = uRam000000011380a668;
  auVar1._0_8_ = uRam000000011380a660;
  func_0x000107c61434(uRam000000011380a668);
  return auVar1;
}



/* Entry: 10361e16c; end: 10361e1d3;  */

void FUN_10361e16c(void)

{
  FUN_10361f6a4();
  return;
}



/* Entry: 10361e1d4; end: 10361e20b;  */

uint FUN_10361e1d4(long param_1,long param_2)

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
  func_0x000103627940();
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



/* Entry: 10361e20c; end: 10361e2ab;  */

/* WARNING: Possible PIC construction at 0x00010361e258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361e268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361e25c) */
/* WARNING: Removing unreachable block (ram,0x00010361e26c) */

void FUN_10361e20c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f600 != -1) {
    func_0x000107c61568(0x112f7f600,FUN_10361e0e8);
  }
  uVar5 = uRam000000011380a698;
  uVar4 = uRam000000011380a690;
  uVar3 = uRam000000011380a688;
  uVar2 = uRam000000011380a680;
  uVar1 = uRam000000011380a678;
  *param_1 = uRam000000011380a670;
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



/* Entry: 10361e2ac; end: 10361e2bf;  */

void FUN_10361e2ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80830;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80830,&UNK_10dbed328);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10361e2c0; end: 10361e2f7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10361e2c0(undefined8 *param_1,undefined8 param_2)

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
  FUN_1036261a8();
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



/* Entry: 10361e2f8; end: 10361e33f;  */

void FUN_10361e2f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed5d0,0x40,2);
  uRam000000011380a6a8 = uStack_38;
  uRam000000011380a6a0 = uStack_40;
  uRam000000011380a6b8 = uStack_28;
  uRam000000011380a6b0 = uStack_30;
  uRam000000011380a6c8 = uStack_18;
  uRam000000011380a6c0 = uStack_20;
  return;
}



/* Entry: 10361e340; end: 10361e3df;  */

/* WARNING: Possible PIC construction at 0x00010361e38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361e39c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361e390) */
/* WARNING: Removing unreachable block (ram,0x00010361e3a0) */

void FUN_10361e340(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f610 != -1) {
    func_0x000107c61568(0x112f7f610,FUN_10361e2f8);
  }
  uVar5 = uRam000000011380a6c8;
  uVar4 = uRam000000011380a6c0;
  uVar3 = uRam000000011380a6b8;
  uVar2 = uRam000000011380a6b0;
  uVar1 = uRam000000011380a6a8;
  *param_1 = uRam000000011380a6a0;
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



/* Entry: 10361e3e0; end: 10361e44f;  */

void FUN_10361e3e0(void)

{
  func_0x000107c5fb78(0xd000000000000013,0x800000010efb3050);
  uRam000000011380a6d0 = 0xd000000000000025;
  uRam000000011380a6d8 = 0x800000010f156760;
  return;
}



/* Entry: 10361e450; end: 10361e497;  */

void FUN_10361e450(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed5b0,0x19,2);
  uRam000000011380a6e8 = uStack_38;
  uRam000000011380a6e0 = uStack_40;
  uRam000000011380a6f8 = uStack_28;
  uRam000000011380a6f0 = uStack_30;
  uRam000000011380a708 = uStack_18;
  uRam000000011380a700 = uStack_20;
  return;
}



/* Entry: 10361e498; end: 10361e4d3;  */

undefined1  [16] FUN_10361e498(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f7f618 != -1) {
    func_0x000107c61568(0x112f7f618,FUN_10361e3e0);
  }
  auVar1._8_8_ = uRam000000011380a6d8;
  auVar1._0_8_ = uRam000000011380a6d0;
  func_0x000107c61434(uRam000000011380a6d8);
  return auVar1;
}



/* Entry: 10361e4d4; end: 10361e53b;  */

void FUN_10361e4d4(void)

{
  FUN_10361f6a4();
  return;
}



/* Entry: 10361e53c; end: 10361e573;  */

uint FUN_10361e53c(long param_1,long param_2)

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
  func_0x000103627900();
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



/* Entry: 10361e574; end: 10361e613;  */

/* WARNING: Possible PIC construction at 0x00010361e5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361e5d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361e5c4) */
/* WARNING: Removing unreachable block (ram,0x00010361e5d4) */

void FUN_10361e574(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f620 != -1) {
    func_0x000107c61568(0x112f7f620,FUN_10361e450);
  }
  uVar5 = uRam000000011380a708;
  uVar4 = uRam000000011380a700;
  uVar3 = uRam000000011380a6f8;
  uVar2 = uRam000000011380a6f0;
  uVar1 = uRam000000011380a6e8;
  *param_1 = uRam000000011380a6e0;
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



/* Entry: 10361e614; end: 10361e627;  */

void FUN_10361e614(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80820;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80820,&UNK_10dbed320);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10361e628; end: 10361e65f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10361e628(undefined8 *param_1,undefined8 param_2)

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
  FUN_1036262a4();
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



/* Entry: 10361e660; end: 10361e6a7;  */

void FUN_10361e660(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed590,0x1a,2);
  uRam000000011380a718 = uStack_38;
  uRam000000011380a710 = uStack_40;
  uRam000000011380a728 = uStack_28;
  uRam000000011380a720 = uStack_30;
  uRam000000011380a738 = uStack_18;
  uRam000000011380a730 = uStack_20;
  return;
}



/* Entry: 10361e6a8; end: 10361e747;  */

/* WARNING: Possible PIC construction at 0x00010361e6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361e704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361e6f8) */
/* WARNING: Removing unreachable block (ram,0x00010361e708) */

void FUN_10361e6a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f638 != -1) {
    func_0x000107c61568(0x112f7f638,FUN_10361e660);
  }
  uVar5 = uRam000000011380a738;
  uVar4 = uRam000000011380a730;
  uVar3 = uRam000000011380a728;
  uVar2 = uRam000000011380a720;
  uVar1 = uRam000000011380a718;
  *param_1 = uRam000000011380a710;
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



/* Entry: 10361e748; end: 10361e76f;  */

void FUN_10361e748(void)

{
  func_0x000107c5fb78(0x656461654864412e,0xe900000000000072);
  uRam000000011380a740 = 0xd000000000000025;
  uRam000000011380a748 = 0x800000010f156760;
  return;
}



/* Entry: 10361e770; end: 10361e7b7;  */

void FUN_10361e770(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed570,0x10,2);
  uRam000000011380a758 = uStack_38;
  uRam000000011380a750 = uStack_40;
  uRam000000011380a768 = uStack_28;
  uRam000000011380a760 = uStack_30;
  uRam000000011380a778 = uStack_18;
  uRam000000011380a770 = uStack_20;
  return;
}



/* Entry: 10361e7b8; end: 10361e7f3;  */

undefined1  [16] FUN_10361e7b8(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f7f640 != -1) {
    func_0x000107c61568(0x112f7f640,FUN_10361e748);
  }
  auVar1._8_8_ = uRam000000011380a748;
  auVar1._0_8_ = uRam000000011380a740;
  func_0x000107c61434(uRam000000011380a748);
  return auVar1;
}



/* Entry: 10361e7f4; end: 10361e85b;  */

void FUN_10361e7f4(void)

{
  FUN_10361f6a4();
  return;
}



/* Entry: 10361e85c; end: 10361e893;  */

uint FUN_10361e85c(long param_1,long param_2)

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
  func_0x0001036278c0();
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



/* Entry: 10361e894; end: 10361e933;  */

/* WARNING: Possible PIC construction at 0x00010361e8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361e8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361e8e4) */
/* WARNING: Removing unreachable block (ram,0x00010361e8f4) */

void FUN_10361e894(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f648 != -1) {
    func_0x000107c61568(0x112f7f648,FUN_10361e770);
  }
  uVar5 = uRam000000011380a778;
  uVar4 = uRam000000011380a770;
  uVar3 = uRam000000011380a768;
  uVar2 = uRam000000011380a760;
  uVar1 = uRam000000011380a758;
  *param_1 = uRam000000011380a750;
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



/* Entry: 10361e934; end: 10361e947;  */

void FUN_10361e934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80810;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80810,&UNK_10dbed318);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10361e948; end: 10361e97f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10361e948(undefined8 *param_1,undefined8 param_2)

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
  FUN_1036263a0();
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



/* Entry: 10361e980; end: 10361e9c7;  */

void FUN_10361e980(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed530,0x33,2);
  uRam000000011380a788 = uStack_38;
  uRam000000011380a780 = uStack_40;
  uRam000000011380a798 = uStack_28;
  uRam000000011380a790 = uStack_30;
  uRam000000011380a7a8 = uStack_18;
  uRam000000011380a7a0 = uStack_20;
  return;
}



/* Entry: 10361e9c8; end: 10361ea67;  */

/* WARNING: Possible PIC construction at 0x00010361ea14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361ea24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361ea18) */
/* WARNING: Removing unreachable block (ram,0x00010361ea28) */

void FUN_10361e9c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f660 != -1) {
    func_0x000107c61568(0x112f7f660,FUN_10361e980);
  }
  uVar5 = uRam000000011380a7a8;
  uVar4 = uRam000000011380a7a0;
  uVar3 = uRam000000011380a798;
  uVar2 = uRam000000011380a790;
  uVar1 = uRam000000011380a788;
  *param_1 = uRam000000011380a780;
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



/* Entry: 10361ea68; end: 10361ea8f;  */

void FUN_10361ea68(void)

{
  func_0x000107c5fb78(0x6c626179616c502e,0xe900000000000065);
  uRam000000011380a7b0 = 0xd000000000000025;
  uRam000000011380a7b8 = 0x800000010f156760;
  return;
}



/* Entry: 10361ea90; end: 10361eaf7;  */

void FUN_10361ea90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd000000000000025;
  *param_5 = 0x800000010f156760;
  return;
}



/* Entry: 10361eaf8; end: 10361eb3f;  */

void FUN_10361eaf8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed510,0x10,2);
  uRam000000011380a7c8 = uStack_38;
  uRam000000011380a7c0 = uStack_40;
  uRam000000011380a7d8 = uStack_28;
  uRam000000011380a7d0 = uStack_30;
  uRam000000011380a7e8 = uStack_18;
  uRam000000011380a7e0 = uStack_20;
  return;
}



/* Entry: 10361eb40; end: 10361eb7b;  */

undefined1  [16] FUN_10361eb40(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f7f668 != -1) {
    func_0x000107c61568(0x112f7f668,FUN_10361ea68);
  }
  auVar1._8_8_ = uRam000000011380a7b8;
  auVar1._0_8_ = uRam000000011380a7b0;
  func_0x000107c61434(uRam000000011380a7b8);
  return auVar1;
}



/* Entry: 10361eb7c; end: 10361ebe3;  */

void FUN_10361eb7c(void)

{
  FUN_10361f6a4();
  return;
}



/* Entry: 10361ebe4; end: 10361ec1b;  */

uint FUN_10361ebe4(long param_1,long param_2)

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
  func_0x000103627880();
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



/* Entry: 10361ec1c; end: 10361ecbb;  */

/* WARNING: Possible PIC construction at 0x00010361ec68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361ec78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361ec6c) */
/* WARNING: Removing unreachable block (ram,0x00010361ec7c) */

void FUN_10361ec1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f670 != -1) {
    func_0x000107c61568(0x112f7f670,FUN_10361eaf8);
  }
  uVar5 = uRam000000011380a7e8;
  uVar4 = uRam000000011380a7e0;
  uVar3 = uRam000000011380a7d8;
  uVar2 = uRam000000011380a7d0;
  uVar1 = uRam000000011380a7c8;
  *param_1 = uRam000000011380a7c0;
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



/* Entry: 10361ecbc; end: 10361eccf;  */

void FUN_10361ecbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80800;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80800,&UNK_10dbed310);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10361ecd0; end: 10361ed07;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10361ecd0(undefined8 *param_1,undefined8 param_2)

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
  FUN_10362649c();
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



/* Entry: 10361ed08; end: 10361ed4f;  */

void FUN_10361ed08(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed4e0,0x24,2);
  uRam000000011380a7f8 = uStack_38;
  uRam000000011380a7f0 = uStack_40;
  uRam000000011380a808 = uStack_28;
  uRam000000011380a800 = uStack_30;
  uRam000000011380a818 = uStack_18;
  uRam000000011380a810 = uStack_20;
  return;
}



/* Entry: 10361ed50; end: 10361edef;  */

/* WARNING: Possible PIC construction at 0x00010361ed9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361edac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361eda0) */
/* WARNING: Removing unreachable block (ram,0x00010361edb0) */

void FUN_10361ed50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f688 != -1) {
    func_0x000107c61568(0x112f7f688,FUN_10361ed08);
  }
  uVar5 = uRam000000011380a818;
  uVar4 = uRam000000011380a810;
  uVar3 = uRam000000011380a808;
  uVar2 = uRam000000011380a800;
  uVar1 = uRam000000011380a7f8;
  *param_1 = uRam000000011380a7f0;
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



/* Entry: 10361edf0; end: 10361ee5f;  */

void FUN_10361edf0(void)

{
  func_0x000107c5fb78(0xd000000000000010,0x800000010f1567b0);
  uRam000000011380a820 = 0xd000000000000025;
  uRam000000011380a828 = 0x800000010f156760;
  return;
}



/* Entry: 10361ee60; end: 10361eea7;  */

void FUN_10361ee60(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed4a0,0x30,2);
  uRam000000011380a838 = uStack_38;
  uRam000000011380a830 = uStack_40;
  uRam000000011380a848 = uStack_28;
  uRam000000011380a840 = uStack_30;
  uRam000000011380a858 = uStack_18;
  uRam000000011380a850 = uStack_20;
  return;
}



/* Entry: 10361eea8; end: 10361ef9f;  */

void FUN_10361eea8(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  code *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        (*param_4)();
LAB_10361ef40:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        (*param_6)();
        goto LAB_10361ef40;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10361efa0; end: 10361f097;  */

void FUN_10361efa0(undefined1 *param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_70;
  undefined1 uStack_68;
  
  plVar2 = &lStack_70;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_68 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_70 = *unaff_x20;
    (*param_4)();
    (*pcVar3)(&lStack_70,1,param_5,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_68 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_70 = unaff_x20[2];
    (*param_6)();
    (*pcVar3)(&lStack_70,2,param_7,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  return;
}



/* Entry: 10361f098; end: 10361f0d3;  */

undefined1  [16] FUN_10361f098(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f7f690 != -1) {
    func_0x000107c61568(0x112f7f690,FUN_10361edf0);
  }
  auVar1._8_8_ = uRam000000011380a828;
  auVar1._0_8_ = uRam000000011380a820;
  func_0x000107c61434(uRam000000011380a828);
  return auVar1;
}



/* Entry: 10361f0d4; end: 10361f13b;  */

void FUN_10361f0d4(void)

{
  FUN_10361eea8();
  return;
}



/* Entry: 10361f13c; end: 10361f173;  */

uint FUN_10361f13c(long param_1,long param_2)

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
  func_0x000103627840();
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



/* Entry: 10361f174; end: 10361f1bb;  */

uint FUN_10361f174(undefined8 *param_1)

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
  func_0x0001036207a4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10361f1bc; end: 10361f25b;  */

/* WARNING: Possible PIC construction at 0x00010361f208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361f218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361f20c) */
/* WARNING: Removing unreachable block (ram,0x00010361f21c) */

void FUN_10361f1bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f698 != -1) {
    func_0x000107c61568(0x112f7f698,FUN_10361ee60);
  }
  uVar5 = uRam000000011380a858;
  uVar4 = uRam000000011380a850;
  uVar3 = uRam000000011380a848;
  uVar2 = uRam000000011380a840;
  uVar1 = uRam000000011380a838;
  *param_1 = uRam000000011380a830;
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



/* Entry: 10361f25c; end: 10361f26f;  */

void FUN_10361f25c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f807f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f807f0,&UNK_10dbed308);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10361f270; end: 10361f2a3;  */

void FUN_10361f270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10361f2a4; end: 10361f3d7;  */

void FUN_10361f2a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined1 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10361f3d8; end: 10361f463;  */

uint FUN_10361f3d8(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001036207a4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10361f464; end: 10361f503;  */

/* WARNING: Possible PIC construction at 0x00010361f4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361f4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361f4b4) */
/* WARNING: Removing unreachable block (ram,0x00010361f4c4) */

void FUN_10361f464(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f6b8 != -1) {
    func_0x000107c61568(0x112f7f6b8,0x10361f41c);
  }
  uVar5 = uRam000000011380a888;
  uVar4 = uRam000000011380a880;
  uVar3 = uRam000000011380a878;
  uVar2 = uRam000000011380a870;
  uVar1 = uRam000000011380a868;
  *param_1 = uRam000000011380a860;
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



/* Entry: 10361f504; end: 10361f54b;  */

void FUN_10361f504(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed410,0x35,2);
  uRam000000011380a898 = uStack_38;
  uRam000000011380a890 = uStack_40;
  uRam000000011380a8a8 = uStack_28;
  uRam000000011380a8a0 = uStack_30;
  uRam000000011380a8b8 = uStack_18;
  uRam000000011380a8b0 = uStack_20;
  return;
}



/* Entry: 10361f54c; end: 10361f5eb;  */

/* WARNING: Possible PIC construction at 0x00010361f598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361f5a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361f59c) */
/* WARNING: Removing unreachable block (ram,0x00010361f5ac) */

void FUN_10361f54c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f6c0 != -1) {
    func_0x000107c61568(0x112f7f6c0,FUN_10361f504);
  }
  uVar5 = uRam000000011380a8b8;
  uVar4 = uRam000000011380a8b0;
  uVar3 = uRam000000011380a8a8;
  uVar2 = uRam000000011380a8a0;
  uVar1 = uRam000000011380a898;
  *param_1 = uRam000000011380a890;
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



/* Entry: 10361f5ec; end: 10361f65b;  */

void FUN_10361f5ec(void)

{
  func_0x000107c5fb78(0xd000000000000012,0x800000010f156790);
  uRam000000011380a8c0 = 0xd000000000000025;
  uRam000000011380a8c8 = 0x800000010f156760;
  return;
}



/* Entry: 10361f65c; end: 10361f6a3;  */

void FUN_10361f65c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed3f0,0x10,2);
  uRam000000011380a8d8 = uStack_38;
  uRam000000011380a8d0 = uStack_40;
  uRam000000011380a8e8 = uStack_28;
  uRam000000011380a8e0 = uStack_30;
  uRam000000011380a8f8 = uStack_18;
  uRam000000011380a8f0 = uStack_20;
  return;
}



/* Entry: 10361f6a4; end: 10361f753;  */

void FUN_10361f6a4(undefined8 param_1,long param_2,long param_3,code *param_4)

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



/* Entry: 10361f754; end: 10361f7f7;  */

void FUN_10361f754(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
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



/* Entry: 10361f7f8; end: 10361f833;  */

undefined1  [16] FUN_10361f7f8(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f7f6c8 != -1) {
    func_0x000107c61568(0x112f7f6c8,FUN_10361f5ec);
  }
  auVar1._8_8_ = uRam000000011380a8c8;
  auVar1._0_8_ = uRam000000011380a8c0;
  func_0x000107c61434(uRam000000011380a8c8);
  return auVar1;
}



/* Entry: 10361f834; end: 10361f89b;  */

void FUN_10361f834(void)

{
  FUN_10361f6a4();
  return;
}



/* Entry: 10361f89c; end: 10361f8d3;  */

uint FUN_10361f89c(long param_1,long param_2)

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
  FUN_103627800();
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



/* Entry: 10361f8d4; end: 10361f92b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10361f8d4(ulong *param_1)

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
  ulong uVar14;
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
  ulong *unaff_x20;
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
  
  uVar14 = param_1[2];
  uVar16 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  uVar20 = (ulong)(*unaff_x20 != 0);
  if ((char)unaff_x20[1] != '\x01') {
    uVar20 = *unaff_x20;
  }
  if ((char)param_1[1] == '\x01') {
    if (*param_1 == 0) {
      if (uVar20 == 0) goto SUB_100e25fcc;
    }
    else if (uVar20 == 1) {
SUB_100e25fcc:
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
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar9;
        pbVar12 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar9 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, uVar14 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar9 >> 0x20);
            if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)(uVar14 >> 0x20);
          if (SBORROW4(iVar19,(int)uVar14)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)uVar14)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
            if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
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
            uVar22 = *(long *)(uVar14 + 0x18) - *(long *)(uVar14 + 0x10);
            if (SBORROW8(*(long *)(uVar14 + 0x18),*(long *)(uVar14 + 0x10))) {
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
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
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
              unaff_x24 = pbVar25;
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
              if (uVar18 != 2) {
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
              unaff_x25 = pbVar25;
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
            unaff_x20 = (ulong *)((ulong)pbVar25 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,
                                uVar14,uVar16);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar16;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        pbVar23 = *(byte **)(pbVar8 + 0x18);
        bVar27 = pbVar8[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar13 = pbVar9;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar24 = *(long *)pbVar12;
              uVar10 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar11,lVar24,uVar10);
              return (byte *)(ulong)((uint)pbVar11 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar12 + 8);
            pbVar17 = *(byte **)(pbVar12 + 0x10);
            lVar24 = *(long *)pbVar12;
            uVar10 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar24,uVar10);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar11 = pbVar9;
            pbVar13 = pbVar25;
            if ((pbVar9 == pbVar15) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar12;
            pbVar17 = *(byte **)(pbVar12 + 8);
            lVar24 = *(long *)(pbVar12 + 0x18);
            if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar24);
              func_0x000107c61174();
              pbVar9 = pbVar23;
              func_0x000107c60118();
              func_0x000107c61170(pbVar23);
              func_0x000107c61170(lVar24);
              pbVar23 = pbVar9;
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
          )(pbVar11,pbVar13,pbVar15,pbVar17,0);
          return pbVar11;
        }
        lVar26 = *(long *)(pbVar8 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar12;
            pbVar17 = *(byte **)(pbVar12 + 8);
            if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
               (pbVar11 = pbVar25, pbVar13 = pbVar23, pbVar15 = *(byte **)(pbVar12 + 0x10),
               pbVar17 = *(byte **)(pbVar12 + 0x18),
               pbVar25 == *(byte **)(pbVar12 + 0x10) && pbVar23 == *(byte **)(pbVar12 + 0x18))) {
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
          pbVar17 = *(byte **)(pbVar12 + 0x10);
          lVar24 = *(long *)(pbVar12 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar12 + 8);
            pbVar11 = pbVar9;
            pbVar13 = pbVar25;
            if ((pbVar9 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar12 + 0x18),lVar24,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar12 + 0x20);
            lVar24 = *(long *)(pbVar12 + 0x18);
            bVar27 = pbVar12[8] | (byte)lVar24;
            bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar12[0x10] | (byte)lVar26;
            bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar11 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar12 + 0x20);
          lVar24 = *(long *)(pbVar12 + 0x18);
          bVar27 = pbVar12[8] | (byte)lVar24;
          bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar12[0x10] | (byte)lVar26;
          bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        uVar14 = *(ulong *)(pbVar12 + 8);
        uVar16 = *(ulong *)(pbVar12 + 0x10);
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
  }
  else if (uVar20 == *param_1) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 10361f92c; end: 10361f9cb;  */

/* WARNING: Possible PIC construction at 0x00010361f978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361f988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361f97c) */
/* WARNING: Removing unreachable block (ram,0x00010361f98c) */

void FUN_10361f92c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f6d0 != -1) {
    func_0x000107c61568(0x112f7f6d0,FUN_10361f65c);
  }
  uVar5 = uRam000000011380a8f8;
  uVar4 = uRam000000011380a8f0;
  uVar3 = uRam000000011380a8e8;
  uVar2 = uRam000000011380a8e0;
  uVar1 = uRam000000011380a8d8;
  *param_1 = uRam000000011380a8d0;
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



/* Entry: 10361f9cc; end: 10361f9df;  */

void FUN_10361f9cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f807e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f807e0,&UNK_10dbed300);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10361f9e0; end: 10361fa13;  */

void FUN_10361f9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10361fa14; end: 10361fb27;  */

void FUN_10361fa14(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10361fb28; end: 10361fb8b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10361fb28(ulong *param_1,ulong *param_2)

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
  ulong uVar15;
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
  
  pbVar11 = (byte *)param_1[2];
  pbVar13 = (byte *)param_1[3];
  uVar15 = param_2[2];
  uVar17 = param_2[3];
  uVar21 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar21 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar21 == 0) goto SUB_100e25fcc;
    }
    else if (uVar21 == 1) {
SUB_100e25fcc:
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
        uVar4 = (uint)((ulong)pbVar13 >> 0x20);
        uVar19 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar17 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar11;
        pbVar12 = pbVar13;
        if ((ulong)pbVar13 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar11 != (byte *)0x0) || (pbVar13 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar15 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar13 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar11 >> 0x20);
            if (SBORROW4(iVar20,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar22 == 0) {
            uVar23 = uVar17 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)(uVar15 >> 0x20);
          if (SBORROW4(iVar20,(int)uVar15)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)uVar15)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar8 = (byte *)0x0;
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
          if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar22 == 2) {
            uVar23 = *(long *)(uVar15 + 0x18) - *(long *)(uVar15 + 0x10);
            if (SBORROW8(*(long *)(uVar15 + 0x18),*(long *)(uVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar19 < 2) {
              if (uVar19 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar13;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar13 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar13 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar13 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar13 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar13 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar13 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                    (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar13;
              if (pbVar11 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar12 = pbVar11;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar12);
                func_0x000107c5ec38();
                unaff_x19 = pbVar11;
                if (pbVar11 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar12) {
                    pbVar12 = unaff_x23;
                  }
                  pbVar12 = pbVar12 + (long)pbVar11;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar19 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto code_r0x000100e26260;
              }
              lVar25 = *(long *)(pbVar11 + 0x10);
              unaff_x24 = *(byte **)(pbVar11 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + (lVar25 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar11;
              unaff_x25 = pbVar13;
              if (pbVar11 == (byte *)0x0) {
                pbVar12 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar12) {
                  pbVar12 = unaff_x23;
                }
                pbVar12 = pbVar12 + (long)pbVar11;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar13 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar12,
                                uVar15,uVar17);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar17;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        pbVar10 = *(byte **)pbVar8;
        pbVar11 = *(byte **)(pbVar8 + 8);
        pbVar24 = *(byte **)(pbVar8 + 0x18);
        bVar27 = pbVar8[0x28];
        pbVar13 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar14 = pbVar11;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar25 = *(long *)pbVar12;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar25,uVar9);
              return (byte *)(ulong)((uint)pbVar10 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar12 + 8);
            pbVar18 = *(byte **)(pbVar12 + 0x10);
            lVar25 = *(long *)pbVar12;
            uVar9 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar25,uVar9);
            if (((ulong)pbVar10 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 == pbVar16) && (pbVar13 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar12;
            pbVar18 = *(byte **)(pbVar12 + 8);
            lVar25 = *(long *)(pbVar12 + 0x18);
            if ((pbVar10 == pbVar16) && (pbVar11 == pbVar18)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar25 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
          )(pbVar10,pbVar14,pbVar16,pbVar18,0);
          return pbVar10;
        }
        lVar26 = *(long *)(pbVar8 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar12;
            pbVar18 = *(byte **)(pbVar12 + 8);
            if (((pbVar10 == pbVar16) && (pbVar11 == pbVar18)) &&
               (pbVar10 = pbVar13, pbVar14 = pbVar24, pbVar16 = *(byte **)(pbVar12 + 0x10),
               pbVar18 = *(byte **)(pbVar12 + 0x18),
               pbVar13 == *(byte **)(pbVar12 + 0x10) && pbVar24 == *(byte **)(pbVar12 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar12[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar12 != ((uint)pbVar10 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar12 + 0x10);
          lVar25 = *(long *)(pbVar12 + 0x20);
          if (pbVar13 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar12 + 8);
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 != pbVar16) || (pbVar13 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar24 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar25)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar12 + 0x18),lVar25,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
              lVar26 == 0) && pbVar13 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar12 + 0x20);
            lVar25 = *(long *)(pbVar12 + 0x18);
            bVar27 = pbVar12[8] | (byte)lVar25;
            bVar28 = pbVar12[9] | (byte)((ulong)lVar25 >> 8);
            bVar29 = pbVar12[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar30 = pbVar12[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar31 = pbVar12[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar32 = pbVar12[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar33 = pbVar12[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar34 = pbVar12[0xf] | (byte)((ulong)lVar25 >> 0x38);
            bVar35 = pbVar12[0x10] | (byte)lVar26;
            bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar10 == (byte *)0x1) &&
             (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar12 + 0x20);
          lVar25 = *(long *)(pbVar12 + 0x18);
          bVar27 = pbVar12[8] | (byte)lVar25;
          bVar28 = pbVar12[9] | (byte)((ulong)lVar25 >> 8);
          bVar29 = pbVar12[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar30 = pbVar12[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar31 = pbVar12[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar32 = pbVar12[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar33 = pbVar12[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar34 = pbVar12[0xf] | (byte)((ulong)lVar25 >> 0x38);
          bVar35 = pbVar12[0x10] | (byte)lVar26;
          bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
          lVar25 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        uVar15 = *(ulong *)(pbVar12 + 8);
        uVar17 = *(ulong *)(pbVar12 + 0x10);
        lVar25 = *(long *)pbVar12;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar25,uVar9);
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
  }
  else if (uVar21 == *param_2) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 10361fb8c; end: 10361fbd3;  */

void FUN_10361fb8c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbed3c0,0x28,2);
  uRam000000011380a908 = uStack_38;
  uRam000000011380a900 = uStack_40;
  uRam000000011380a918 = uStack_28;
  uRam000000011380a910 = uStack_30;
  uRam000000011380a928 = uStack_18;
  uRam000000011380a920 = uStack_20;
  return;
}



/* Entry: 10361fbd4; end: 10361fc73;  */

/* WARNING: Possible PIC construction at 0x00010361fc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010361fc30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010361fc24) */
/* WARNING: Removing unreachable block (ram,0x00010361fc34) */

void FUN_10361fbd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7f6e8 != -1) {
    func_0x000107c61568(0x112f7f6e8,FUN_10361fb8c);
  }
  uVar5 = uRam000000011380a928;
  uVar4 = uRam000000011380a920;
  uVar3 = uRam000000011380a918;
  uVar2 = uRam000000011380a910;
  uVar1 = uRam000000011380a908;
  *param_1 = uRam000000011380a900;
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



/* Entry: 10361fc74; end: 10361fde7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10361fc74(long *param_1,long *param_2)

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
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 2) {
      if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 3) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  uVar16 = (ulong)(param_1[2] != 0);
  if ((char)param_1[3] != '\x01') {
    uVar16 = param_1[2];
  }
  if ((char)param_2[3] == '\x01') {
    if (param_2[2] == 0) {
      if (uVar16 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar16 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar16 != param_2[2]) {
    return (byte *)0x0;
  }
  lVar19 = param_1[4];
  lVar22 = param_2[4];
  if ((char)param_2[5] == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 2) {
      if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 3) {
      if (lVar19 != 3) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 4) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar19 = param_1[6];
  lVar22 = param_2[6];
  if ((char)param_2[7] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 == 0) goto LAB_10361fdd4;
    }
    else if (lVar22 == 1) {
      if (lVar19 == 1) {
LAB_10361fdd4:
        pbVar10 = (byte *)param_1[8];
        pbVar26 = (byte *)param_1[9];
        lVar19 = param_2[8];
        uVar16 = param_2[9];
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
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
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
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
            if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                unaff_x24 = pbVar26;
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
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
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
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
          pbVar25 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
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
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              lVar19 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar19);
                func_0x000107c61174();
                pbVar10 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar19);
                pbVar25 = pbVar10;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
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
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
            lVar19 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
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
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar19 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar27 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar22 == 0)) {
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
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar19;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
    else if (lVar19 == 2) goto LAB_10361fdd4;
  }
  else if (lVar19 == lVar22) goto LAB_10361fdd4;
  return (byte *)0x0;
}



/* Entry: 10361fde8; end: 10361fe3f;  */

void FUN_10361fde8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10361fe40; end: 1036204ef;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10361fe40(ulong *param_1,ulong *param_2)

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
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
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
  
  uVar18 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar18 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar18 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar18 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar18 != *param_2) {
    return (byte *)0x0;
  }
  uVar18 = param_1[2];
  uVar21 = param_2[2];
  if ((char)param_2[3] == '\x01') {
    if (uVar21 == 0) {
      if (uVar18 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar21 == 1) {
      if (uVar18 != 1) {
        return (byte *)0x0;
      }
    }
    else if (uVar18 != 2) {
      return (byte *)0x0;
    }
  }
  else if (uVar18 != uVar21) {
    return (byte *)0x0;
  }
  uVar18 = (ulong)(param_1[4] != 0);
  if ((char)param_1[5] != '\x01') {
    uVar18 = param_1[4];
  }
  if ((char)param_2[5] == '\x01') {
    if (param_2[4] == 0) {
      if (uVar18 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar18 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar18 != param_2[4]) {
    return (byte *)0x0;
  }
  uVar18 = (ulong)(param_1[6] != 0);
  if ((char)param_1[7] != '\x01') {
    uVar18 = param_1[6];
  }
  if ((char)param_2[7] == '\x01') {
    if (param_2[6] == 0) {
      if (uVar18 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar18 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar18 != param_2[6]) {
    return (byte *)0x0;
  }
  uVar18 = param_1[8];
  uVar21 = param_2[8];
  if ((char)param_2[9] == '\x01') {
    if (uVar21 == 0) {
      if (uVar18 == 0) goto LAB_10361ff94;
    }
    else if (uVar21 == 1) {
      if (uVar18 == 1) {
LAB_10361ff94:
        pbVar10 = (byte *)param_1[10];
        pbVar26 = (byte *)param_1[0xb];
        uVar18 = param_2[10];
        uVar21 = param_2[0xb];
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
          uVar17 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar21 >> 0x20);
          uVar22 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar20 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar21 >> 0x3e < 3)) ||
               ((uVar20 = 0, uVar18 != 0 || (uVar21 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar17 == 0) {
              uVar20 = (ulong)pbVar26 >> 0x30 & 0xff;
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
            if (uVar22 == 0) {
              uVar23 = uVar21 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar19 = (int)(uVar18 >> 0x20);
            if (SBORROW4(iVar19,(int)uVar18)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar20 == (long)(iVar19 - (int)uVar18)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar17 == 2) {
              uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar20 = 0;
            if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar22 == 2) {
              uVar23 = *(long *)(uVar18 + 0x18) - *(long *)(uVar18 + 0x10);
              if (SBORROW8(*(long *)(uVar18 + 0x18),*(long *)(uVar18 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar20 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar20 < 1) goto code_r0x000100e26128;
              if (uVar17 < 2) {
                if (uVar17 == 0) {
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
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                unaff_x24 = pbVar26;
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
                if (uVar17 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar25 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar25 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar25;
                if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar26;
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
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,uVar18,uVar21);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar21;
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
          pbVar24 = *(byte **)(pbVar9 + 0x18);
          bVar28 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar28 < 3) {
            if (bVar28 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar25 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar25,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar28 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar16 = *(byte **)(pbVar13 + 0x10);
              lVar25 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar25,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar16)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar16 = *(byte **)(pbVar13 + 8);
              lVar25 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar25 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar25);
                func_0x000107c61174();
                pbVar10 = pbVar24;
                func_0x000107c60118();
                func_0x000107c61170(pbVar24);
                func_0x000107c61170(lVar25);
                pbVar24 = pbVar10;
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
            )(pbVar12,pbVar14,pbVar15,pbVar16,0);
            return pbVar12;
          }
          lVar27 = *(long *)(pbVar9 + 0x20);
          if (bVar28 < 5) {
            if (bVar28 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar16 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar16 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
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
            pbVar16 = *(byte **)(pbVar13 + 0x10);
            lVar25 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
              if (pbVar16 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar16 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar16)) goto code_r0x000107c605b8;
            }
            if (lVar27 != 0) {
              if (lVar25 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar25)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar13 + 0x18),lVar25,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar25 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar28 != 5) {
            if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar27 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar27 = *(long *)(pbVar13 + 0x20);
              lVar25 = *(long *)(pbVar13 + 0x18);
              bVar28 = pbVar13[8] | (byte)lVar25;
              bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
              bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
              bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
              bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
              bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
              bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
              bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
              bVar36 = pbVar13[0x10] | (byte)lVar27;
              bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
              bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
              bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
              bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
              bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
              bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
              bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
                                                                        CONCAT11(bVar29 | auVar44[1]
                                                                                 ,bVar28 | auVar44[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar27 == 0)) {
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
            lVar27 = *(long *)(pbVar13 + 0x20);
            lVar25 = *(long *)(pbVar13 + 0x18);
            bVar28 = pbVar13[8] | (byte)lVar25;
            bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
            bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
            bVar36 = pbVar13[0x10] | (byte)lVar27;
            bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
            bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
            bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
            bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
            bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
            bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
            bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
                                                                           CONCAT11(bVar29 | auVar44
                                                  [1],bVar28 | auVar44[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          uVar18 = *(ulong *)(pbVar13 + 8);
          uVar21 = *(ulong *)(pbVar13 + 0x10);
          lVar25 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
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
    else if (uVar18 == 2) goto LAB_10361ff94;
  }
  else if (uVar18 == uVar21) goto LAB_10361ff94;
  return (byte *)0x0;
}



/* Entry: 1036204f0; end: 103620577;  */

undefined8 FUN_1036204f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103620578; end: 103620857;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103620578(ulong *param_1,ulong *param_2)

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
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
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
  
  uVar18 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar18 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar18 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar18 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar18 != *param_2) {
    return (byte *)0x0;
  }
  uVar18 = param_1[2];
  uVar21 = param_2[2];
  if ((char)param_2[3] == '\x01') {
    if ((long)uVar21 < 2) {
      if (uVar21 == 0) {
        if (uVar18 != 0) {
          return (byte *)0x0;
        }
      }
      else if (uVar18 != 1) {
        return (byte *)0x0;
      }
    }
    else if (uVar21 == 2) {
      if (uVar18 != 2) {
        return (byte *)0x0;
      }
    }
    else if (uVar18 != 3) {
      return (byte *)0x0;
    }
  }
  else if (uVar18 != uVar21) {
    return (byte *)0x0;
  }
  uVar18 = param_1[4];
  uVar21 = param_2[4];
  if ((char)param_2[5] != '\x01') {
    if (uVar18 != uVar21) {
      return (byte *)0x0;
    }
    goto LAB_103620634;
  }
  if ((long)uVar21 < 2) {
    if (uVar21 == 0) {
      if (uVar18 == 0) {
LAB_103620634:
        pbVar10 = (byte *)param_1[6];
        pbVar26 = (byte *)param_1[7];
        uVar18 = param_2[6];
        uVar21 = param_2[7];
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
          uVar17 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar21 >> 0x20);
          uVar22 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar20 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar21 >> 0x3e < 3)) ||
               ((uVar20 = 0, uVar18 != 0 || (uVar21 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar17 == 0) {
              uVar20 = (ulong)pbVar26 >> 0x30 & 0xff;
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
            if (uVar22 == 0) {
              uVar23 = uVar21 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar19 = (int)(uVar18 >> 0x20);
            if (SBORROW4(iVar19,(int)uVar18)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar20 == (long)(iVar19 - (int)uVar18)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar17 == 2) {
              uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar20 = 0;
            if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar22 == 2) {
              uVar23 = *(long *)(uVar18 + 0x18) - *(long *)(uVar18 + 0x10);
              if (SBORROW8(*(long *)(uVar18 + 0x18),*(long *)(uVar18 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar20 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar20 < 1) goto code_r0x000100e26128;
              if (uVar17 < 2) {
                if (uVar17 == 0) {
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
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                unaff_x24 = pbVar26;
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
                if (uVar17 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar25 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar25 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar25;
                if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar26;
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
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,uVar18,uVar21);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar21;
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
          pbVar24 = *(byte **)(pbVar9 + 0x18);
          bVar28 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar28 < 3) {
            if (bVar28 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar25 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar25,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar28 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar16 = *(byte **)(pbVar13 + 0x10);
              lVar25 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar25,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar16)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar16 = *(byte **)(pbVar13 + 8);
              lVar25 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar25 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar25);
                func_0x000107c61174();
                pbVar10 = pbVar24;
                func_0x000107c60118();
                func_0x000107c61170(pbVar24);
                func_0x000107c61170(lVar25);
                pbVar24 = pbVar10;
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
            )(pbVar12,pbVar14,pbVar15,pbVar16,0);
            return pbVar12;
          }
          lVar27 = *(long *)(pbVar9 + 0x20);
          if (bVar28 < 5) {
            if (bVar28 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar16 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar16 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
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
            pbVar16 = *(byte **)(pbVar13 + 0x10);
            lVar25 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
              if (pbVar16 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar16 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar16)) goto code_r0x000107c605b8;
            }
            if (lVar27 != 0) {
              if (lVar25 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar25)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar13 + 0x18),lVar25,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar25 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar28 != 5) {
            if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar27 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar27 = *(long *)(pbVar13 + 0x20);
              lVar25 = *(long *)(pbVar13 + 0x18);
              bVar28 = pbVar13[8] | (byte)lVar25;
              bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
              bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
              bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
              bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
              bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
              bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
              bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
              bVar36 = pbVar13[0x10] | (byte)lVar27;
              bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
              bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
              bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
              bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
              bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
              bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
              bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
                                                                        CONCAT11(bVar29 | auVar44[1]
                                                                                 ,bVar28 | auVar44[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar27 == 0)) {
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
            lVar27 = *(long *)(pbVar13 + 0x20);
            lVar25 = *(long *)(pbVar13 + 0x18);
            bVar28 = pbVar13[8] | (byte)lVar25;
            bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
            bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
            bVar36 = pbVar13[0x10] | (byte)lVar27;
            bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
            bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
            bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
            bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
            bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
            bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
            bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
                                                                           CONCAT11(bVar29 | auVar44
                                                  [1],bVar28 | auVar44[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          uVar18 = *(ulong *)(pbVar13 + 8);
          uVar21 = *(ulong *)(pbVar13 + 0x10);
          lVar25 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
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
    else if (uVar18 == 1) goto LAB_103620634;
  }
  else if (uVar21 == 2) {
    if (uVar18 == 2) goto LAB_103620634;
  }
  else if (uVar18 == 3) goto LAB_103620634;
  return (byte *)0x0;
}



/* Entry: 103620858; end: 103620877;  */

void FUN_103620858(void)

{
  func_0x000107c61168(&PTR_PTR_112f804a0);
  return;
}



/* Entry: 103620878; end: 103620f07;  */

void FUN_103620878(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
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
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar16 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar16 = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  puVar15 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar15 = 0;
  puVar14 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar14 = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  puVar13 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar13 = 0;
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  puVar12 = (undefined8 *)(unaff_x20 + 0x50);
  *puVar12 = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar11 = 0;
  *(undefined1 *)(unaff_x20 + 0x58) = 1;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar2 = 0;
  *(undefined1 *)(unaff_x20 + 0x78) = 1;
  puVar3 = (undefined8 *)(unaff_x20 + 0x80);
  *puVar3 = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x90);
  *puVar4 = 0;
  *(undefined1 *)(unaff_x20 + 0x88) = 1;
  *(undefined1 *)(unaff_x20 + 0x98) = 1;
  puVar5 = (undefined8 *)(unaff_x20 + 0xa0);
  *puVar5 = 0;
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  puVar6 = (undefined8 *)(unaff_x20 + 0xb0);
  *puVar6 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xc0);
  *puVar7 = 0;
  *(undefined1 *)(unaff_x20 + 0xb8) = 1;
  *(undefined1 *)(unaff_x20 + 200) = 1;
  puVar8 = (undefined8 *)(unaff_x20 + 0xd0);
  *puVar8 = 0;
  *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  puVar9 = (undefined8 *)(unaff_x20 + 0xe0);
  *puVar9 = 0;
  puVar10 = (undefined8 *)(unaff_x20 + 0xf0);
  *puVar10 = 0;
  *(undefined1 *)(unaff_x20 + 0xe8) = 1;
  *(undefined1 *)(unaff_x20 + 0xf8) = 1;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined1 *)(unaff_x20 + 0x108) = 1;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined1 *)(unaff_x20 + 0x118) = 1;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined1 *)(unaff_x20 + 0x128) = 1;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined1 *)(unaff_x20 + 0x138) = 1;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined1 *)(unaff_x20 + 0x148) = 1;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined1 *)(unaff_x20 + 0x158) = 1;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined1 *)(unaff_x20 + 0x168) = 1;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined1 *)(unaff_x20 + 0x178) = 1;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  func_0x000107c61428(puVar16,auStack_98,1,0);
  *puVar16 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x18) = uVar1;
  func_0x000107c61428(param_1 + 0x20,auStack_b0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(puVar15,auStack_c8,1,0);
  *puVar15 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar1;
  func_0x000107c61428(param_1 + 0x30,auStack_e0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  func_0x000107c61428(puVar14,auStack_f8,1,0);
  *puVar14 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
  func_0x000107c61428(param_1 + 0x40,auStack_110,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined1 *)(param_1 + 0x48);
  func_0x000107c61428(puVar13,auStack_128,1,0);
  *puVar13 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x48) = uVar1;
  func_0x000107c61428(param_1 + 0x50,auStack_140,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  func_0x000107c61428(puVar12,auStack_158,1,0);
  *puVar12 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x58) = uVar1;
  func_0x000107c61428(param_1 + 0x60,auStack_170,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined1 *)(param_1 + 0x68);
  func_0x000107c61428(puVar11,auStack_188,1,0);
  *puVar11 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x68) = uVar1;
  func_0x000107c61428(param_1 + 0x70,auStack_1a0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  func_0x000107c61428(puVar2,auStack_1b8,1,0);
  *puVar2 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x78) = uVar1;
  func_0x000107c61428(param_1 + 0x80,auStack_1d0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  func_0x000107c61428(puVar3,auStack_1e8,1,0);
  *puVar3 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x88) = uVar1;
  func_0x000107c61428(param_1 + 0x90,auStack_200,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = *(undefined1 *)(param_1 + 0x98);
  func_0x000107c61428(puVar4,auStack_218,1,0);
  *puVar4 = uVar17;
  *(undefined1 *)(unaff_x20 + 0x98) = uVar1;
  func_0x000107c61428(param_1 + 0xa0,auStack_230,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0xa0);
  uVar1 = *(undefined1 *)(param_1 + 0xa8);
  func_0x000107c61428(puVar5,auStack_248,1,0);
  *puVar5 = uVar17;
  *(undefined1 *)(unaff_x20 + 0xa8) = uVar1;
  func_0x000107c61428(param_1 + 0xb0,auStack_260,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = *(undefined1 *)(param_1 + 0xb8);
  func_0x000107c61428(puVar6,auStack_278,1,0);
  *puVar6 = uVar17;
  *(undefined1 *)(unaff_x20 + 0xb8) = uVar1;
  func_0x000107c61428(param_1 + 0xc0,auStack_290,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0xc0);
  uVar1 = *(undefined1 *)(param_1 + 200);
  func_0x000107c61428(puVar7,auStack_2a8,1,0);
  *puVar7 = uVar17;
  *(undefined1 *)(unaff_x20 + 200) = uVar1;
  func_0x000107c61428(param_1 + 0xd0,auStack_2c0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0xd0);
  uVar1 = *(undefined1 *)(param_1 + 0xd8);
  func_0x000107c61428(puVar8,auStack_2d8,1,0);
  *puVar8 = uVar17;
  *(undefined1 *)(unaff_x20 + 0xd8) = uVar1;
  func_0x000107c61428(param_1 + 0xe0,auStack_2f0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = *(undefined1 *)(param_1 + 0xe8);
  func_0x000107c61428(puVar9,auStack_308,1,0);
  *puVar9 = uVar17;
  *(undefined1 *)(unaff_x20 + 0xe8) = uVar1;
  func_0x000107c61428(param_1 + 0xf0,auStack_320,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0xf0);
  uVar1 = *(undefined1 *)(param_1 + 0xf8);
  func_0x000107c61428(puVar10,auStack_338,1,0);
  *puVar10 = uVar17;
  *(undefined1 *)(unaff_x20 + 0xf8) = uVar1;
  func_0x000107c61428(param_1 + 0x100,auStack_350,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x100);
  uVar1 = *(undefined1 *)(param_1 + 0x108);
  func_0x000107c61428(unaff_x20 + 0x100,auStack_368,1,0);
  *(undefined8 *)(unaff_x20 + 0x100) = uVar17;
  *(undefined1 *)(unaff_x20 + 0x108) = uVar1;
  func_0x000107c61428(param_1 + 0x110,auStack_380,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x110);
  uVar1 = *(undefined1 *)(param_1 + 0x118);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_398,1,0);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar17;
  *(undefined1 *)(unaff_x20 + 0x118) = uVar1;
  func_0x000107c61428(param_1 + 0x120,auStack_3b0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x120);
  uVar1 = *(undefined1 *)(param_1 + 0x128);
  func_0x000107c61428(unaff_x20 + 0x120,auStack_3c8,1,0);
  *(undefined8 *)(unaff_x20 + 0x120) = uVar17;
  *(undefined1 *)(unaff_x20 + 0x128) = uVar1;
  func_0x000107c61428(param_1 + 0x130,auStack_3e0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x130);
  uVar1 = *(undefined1 *)(param_1 + 0x138);
  func_0x000107c61428(unaff_x20 + 0x130,auStack_3f8,1,0);
  *(undefined8 *)(unaff_x20 + 0x130) = uVar17;
  *(undefined1 *)(unaff_x20 + 0x138) = uVar1;
  func_0x000107c61428(param_1 + 0x140,auStack_410,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x140);
  uVar1 = *(undefined1 *)(param_1 + 0x148);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_428,1,0);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar17;
  *(undefined1 *)(unaff_x20 + 0x148) = uVar1;
  func_0x000107c61428(param_1 + 0x150,auStack_440,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x150);
  uVar1 = *(undefined1 *)(param_1 + 0x158);
  func_0x000107c61428(unaff_x20 + 0x150,auStack_458,1,0);
  *(undefined8 *)(unaff_x20 + 0x150) = uVar17;
  *(undefined1 *)(unaff_x20 + 0x158) = uVar1;
  func_0x000107c61428(param_1 + 0x160,auStack_470,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x160);
  uVar1 = *(undefined1 *)(param_1 + 0x168);
  func_0x000107c61428(unaff_x20 + 0x160,auStack_488,1,0);
  *(undefined8 *)(unaff_x20 + 0x160) = uVar17;
  *(undefined1 *)(unaff_x20 + 0x168) = uVar1;
  func_0x000107c61428(param_1 + 0x170,auStack_4a0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x170);
  uVar1 = *(undefined1 *)(param_1 + 0x178);
  func_0x000107c61428(unaff_x20 + 0x170,auStack_4b8,1,0);
  *(undefined8 *)(unaff_x20 + 0x170) = uVar17;
  *(undefined1 *)(unaff_x20 + 0x178) = uVar1;
  return;
}



/* Entry: 103620f08; end: 103620f13;  */

void FUN_103620f08(void)

{
  return;
}



/* Entry: 103620f14; end: 103621693;  */

void FUN_103620f14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7f230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeb478;
  func_0x000107c61520(&UNK_10dbeb478,&UNK_11066f870);
  puRam0000000112f7f230 = puVar1;
  return;
}



/* Entry: 103621694; end: 1036216eb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103621694(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
                    char param_6,long param_7,ulong param_8)

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
  
  if (param_6 == '\x01') {
    if (param_5 == 0) {
      if (param_1 == 0) goto SUB_100e25fcc;
    }
    else if (param_5 == 1) {
      if (param_1 == 1) {
SUB_100e25fcc:
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
          uVar4 = (uint)((ulong)param_4 >> 0x20);
          uVar15 = uVar4 >> 0x1e;
          uVar5 = (uint)(param_8 >> 0x20);
          uVar18 = uVar5 >> 0x1e;
          iVar7 = (int)param_3;
          pbVar11 = param_4;
          if ((ulong)param_4 >> 0x3e == 3) {
            uVar17 = 0;
            if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                (param_8 >> 0x3e < 3)) ||
               ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar8 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = (ulong)param_4 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)((ulong)param_3 >> 0x20);
              if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar16 - iVar7);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar18 == 0) {
              uVar19 = param_8 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar16 = (int)((ulong)param_7 >> 0x20);
            if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar8 = (byte *)0x0;
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
              if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar18 == 2) {
              uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
              if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar17 < 1) goto code_r0x000100e26128;
              if (uVar15 < 2) {
                if (uVar15 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                  pbVar11 = (byte *)((long)register0x00000008 +
                                    (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar7;
                unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = param_4;
                if (param_3 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  param_3 = (byte *)0x0;
                }
                else {
                  pbVar11 = param_3;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  if (param_3 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar11 = (byte *)0x0;
              }
              else {
                if (uVar15 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar21 = *(long *)(param_3 + 0x10);
                unaff_x24 = *(byte **)(param_3 + 0x18);
                func_0x000107c5ec30();
                pbVar11 = param_3;
                if (param_3 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + (lVar21 - (long)pbVar11);
                }
                unaff_x23 = unaff_x24 + -lVar21;
                if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = param_3;
                unaff_x25 = param_4;
                if (param_3 == (byte *)0x0) {
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_3;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,
                                  param_7,param_8);
              pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = param_8;
            }
            else {
              pbVar8 = (byte *)(ulong)(uVar17 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
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
          pbVar10 = *(byte **)pbVar8;
          param_3 = *(byte **)(pbVar8 + 8);
          pbVar20 = *(byte **)(pbVar8 + 0x18);
          bVar23 = pbVar8[0x28];
          param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
          pbVar12 = param_3;
          if (bVar23 < 3) {
            if (bVar23 == 0) {
              if (pbVar11[0x28] == 0) {
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar21,uVar9);
              if (((ulong)pbVar10 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
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
              if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
              if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                 (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                 pbVar14 = *(byte **)(pbVar11 + 0x18),
                 param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
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
            if (param_4 == (byte *)0x0) {
              if (pbVar14 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar14 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
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
            if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                lVar22 == 0) && param_4 == (byte *)0x0) {
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
                                                                        CONCAT11(bVar24 | auVar39[1]
                                                                                 ,bVar23 | auVar39[0
                                                  ]))))))) == 0 && *(long *)pbVar11 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar10 == (byte *)0x1) &&
               (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
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
                                                                           CONCAT11(bVar24 | auVar39
                                                  [1],bVar23 | auVar39[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar11[0x28] != 5) {
            return (byte *)0x0;
          }
          param_7 = *(long *)(pbVar11 + 8);
          param_8 = *(ulong *)(pbVar11 + 0x10);
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
    }
    else if (param_1 == 2) goto SUB_100e25fcc;
  }
  else if (param_1 == param_5) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 1036216ec; end: 103621d6b;  */

void FUN_1036216ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7f4e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbebff0;
  func_0x000107c61520(&UNK_10dbebff0,&UNK_1106711f0);
  puRam0000000112f7f4e8 = puVar1;
  return;
}



/* Entry: 103621d6c; end: 103621d7f;  */

void FUN_103621d6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103621d80();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103621dc0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


