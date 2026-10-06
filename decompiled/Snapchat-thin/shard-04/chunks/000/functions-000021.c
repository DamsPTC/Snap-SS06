/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f83e50; end: 102f83e87;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f83e50(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f9902c();
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



/* Entry: 102f83e88; end: 102f83ecf;  */

void FUN_102f83e88(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db701e0,0x14,2);
  uRam00000001138060f0 = uStack_38;
  uRam00000001138060e8 = uStack_40;
  uRam0000000113806100 = uStack_28;
  uRam00000001138060f8 = uStack_30;
  uRam0000000113806110 = uStack_18;
  uRam0000000113806108 = uStack_20;
  return;
}



/* Entry: 102f83ed0; end: 102f83f07;  */

undefined1  [16] FUN_102f83ed0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116490;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 102f83f08; end: 102f83f3f;  */

uint FUN_102f83f08(long param_1,long param_2)

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
  func_0x000102fa4b00();
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



/* Entry: 102f83f40; end: 102f83fdf;  */

/* WARNING: Possible PIC construction at 0x000102f83f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f83f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f83f90) */
/* WARNING: Removing unreachable block (ram,0x000102f83fa0) */

void FUN_102f83f40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b890 != -1) {
    func_0x000107c61568(0x112f2b890,FUN_102f83e88);
  }
  uVar5 = uRam0000000113806110;
  uVar4 = uRam0000000113806108;
  uVar3 = uRam0000000113806100;
  uVar2 = uRam00000001138060f8;
  uVar1 = uRam00000001138060f0;
  *param_1 = uRam00000001138060e8;
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



/* Entry: 102f83fe0; end: 102f83ff3;  */

void FUN_102f83fe0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c730;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c730,&UNK_10db6fc48);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f83ff4; end: 102f8402b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f83ff4(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f99128();
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



/* Entry: 102f8402c; end: 102f84073;  */

void FUN_102f8402c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db701a9,10,2);
  uRam0000000113806120 = uStack_38;
  uRam0000000113806118 = uStack_40;
  uRam0000000113806130 = uStack_28;
  uRam0000000113806128 = uStack_30;
  uRam0000000113806140 = uStack_18;
  uRam0000000113806138 = uStack_20;
  return;
}



/* Entry: 102f84074; end: 102f840ab;  */

undefined1  [16] FUN_102f84074(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1164c0;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 102f840ac; end: 102f840e3;  */

uint FUN_102f840ac(long param_1,long param_2)

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
  func_0x000102fa4ac0();
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



/* Entry: 102f840e4; end: 102f84183;  */

/* WARNING: Possible PIC construction at 0x000102f84130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f84140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f84134) */
/* WARNING: Removing unreachable block (ram,0x000102f84144) */

void FUN_102f840e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b8a0 != -1) {
    func_0x000107c61568(0x112f2b8a0,FUN_102f8402c);
  }
  uVar5 = uRam0000000113806140;
  uVar4 = uRam0000000113806138;
  uVar3 = uRam0000000113806130;
  uVar2 = uRam0000000113806128;
  uVar1 = uRam0000000113806120;
  *param_1 = uRam0000000113806118;
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



/* Entry: 102f84184; end: 102f84197;  */

void FUN_102f84184(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c720;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c720,&UNK_10db6fc40);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f84198; end: 102f841cf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f84198(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f99224();
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



/* Entry: 102f841d0; end: 102f84217;  */

void FUN_102f841d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db701c0,0x1f,2);
  uRam0000000113806150 = uStack_38;
  uRam0000000113806148 = uStack_40;
  uRam0000000113806160 = uStack_28;
  uRam0000000113806158 = uStack_30;
  uRam0000000113806170 = uStack_18;
  uRam0000000113806168 = uStack_20;
  return;
}



/* Entry: 102f84218; end: 102f8424f;  */

undefined1  [16] FUN_102f84218(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1164f0;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 102f84250; end: 102f84287;  */

uint FUN_102f84250(long param_1,long param_2)

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
  func_0x000102fa4a80();
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



/* Entry: 102f84288; end: 102f84327;  */

/* WARNING: Possible PIC construction at 0x000102f842d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f842e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f842d8) */
/* WARNING: Removing unreachable block (ram,0x000102f842e8) */

void FUN_102f84288(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b8b0 != -1) {
    func_0x000107c61568(0x112f2b8b0,FUN_102f841d0);
  }
  uVar5 = uRam0000000113806170;
  uVar4 = uRam0000000113806168;
  uVar3 = uRam0000000113806160;
  uVar2 = uRam0000000113806158;
  uVar1 = uRam0000000113806150;
  *param_1 = uRam0000000113806148;
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



/* Entry: 102f84328; end: 102f8433b;  */

void FUN_102f84328(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c710;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c710,&UNK_10db6fc38);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f8433c; end: 102f84373;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f8433c(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f99320();
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



/* Entry: 102f84374; end: 102f843bb;  */

void FUN_102f84374(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db701a9,10,2);
  uRam0000000113806180 = uStack_38;
  uRam0000000113806178 = uStack_40;
  uRam0000000113806190 = uStack_28;
  uRam0000000113806188 = uStack_30;
  uRam00000001138061a0 = uStack_18;
  uRam0000000113806198 = uStack_20;
  return;
}



/* Entry: 102f843bc; end: 102f843f3;  */

undefined1  [16] FUN_102f843bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116520;
  auVar1._0_8_ = 0xd000000000000031;
  return auVar1;
}



/* Entry: 102f843f4; end: 102f8442b;  */

uint FUN_102f843f4(long param_1,long param_2)

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
  func_0x000102fa4a40();
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



/* Entry: 102f8442c; end: 102f844cb;  */

/* WARNING: Possible PIC construction at 0x000102f84478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f84488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f8447c) */
/* WARNING: Removing unreachable block (ram,0x000102f8448c) */

void FUN_102f8442c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b8c0 != -1) {
    func_0x000107c61568(0x112f2b8c0,FUN_102f84374);
  }
  uVar5 = uRam00000001138061a0;
  uVar4 = uRam0000000113806198;
  uVar3 = uRam0000000113806190;
  uVar2 = uRam0000000113806188;
  uVar1 = uRam0000000113806180;
  *param_1 = uRam0000000113806178;
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



/* Entry: 102f844cc; end: 102f844df;  */

void FUN_102f844cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c700;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c700,&UNK_10db6fc30);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f844e0; end: 102f84517;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f844e0(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f9941c();
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



/* Entry: 102f84518; end: 102f8455f;  */

void FUN_102f84518(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70190,0x18,2);
  uRam00000001138061b0 = uStack_38;
  uRam00000001138061a8 = uStack_40;
  uRam00000001138061c0 = uStack_28;
  uRam00000001138061b8 = uStack_30;
  uRam00000001138061d0 = uStack_18;
  uRam00000001138061c8 = uStack_20;
  return;
}



/* Entry: 102f84560; end: 102f84597;  */

undefined1  [16] FUN_102f84560(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116560;
  auVar1._0_8_ = 0xd000000000000035;
  return auVar1;
}



/* Entry: 102f84598; end: 102f845cf;  */

uint FUN_102f84598(long param_1,long param_2)

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
  func_0x000102fa4a00();
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



/* Entry: 102f845d0; end: 102f8466f;  */

/* WARNING: Possible PIC construction at 0x000102f8461c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f8462c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f84620) */
/* WARNING: Removing unreachable block (ram,0x000102f84630) */

void FUN_102f845d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b8d0 != -1) {
    func_0x000107c61568(0x112f2b8d0,FUN_102f84518);
  }
  uVar5 = uRam00000001138061d0;
  uVar4 = uRam00000001138061c8;
  uVar3 = uRam00000001138061c0;
  uVar2 = uRam00000001138061b8;
  uVar1 = uRam00000001138061b0;
  *param_1 = uRam00000001138061a8;
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



/* Entry: 102f84670; end: 102f84683;  */

void FUN_102f84670(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c6f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c6f0,&UNK_10db6fc28);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f84684; end: 102f846bb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f84684(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f99518();
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



/* Entry: 102f846bc; end: 102f84703;  */

void FUN_102f846bc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70177,0xb,2);
  uRam00000001138061e0 = uStack_38;
  uRam00000001138061d8 = uStack_40;
  uRam00000001138061f0 = uStack_28;
  uRam00000001138061e8 = uStack_30;
  uRam0000000113806200 = uStack_18;
  uRam00000001138061f8 = uStack_20;
  return;
}



/* Entry: 102f84704; end: 102f8473b;  */

undefined1  [16] FUN_102f84704(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1165a0;
  auVar1._0_8_ = 0xd000000000000036;
  return auVar1;
}



/* Entry: 102f8473c; end: 102f84773;  */

uint FUN_102f8473c(long param_1,long param_2)

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
  func_0x000102fa49c0();
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



/* Entry: 102f84774; end: 102f84813;  */

/* WARNING: Possible PIC construction at 0x000102f847c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f847d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f847c4) */
/* WARNING: Removing unreachable block (ram,0x000102f847d4) */

void FUN_102f84774(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b8e0 != -1) {
    func_0x000107c61568(0x112f2b8e0,FUN_102f846bc);
  }
  uVar5 = uRam0000000113806200;
  uVar4 = uRam00000001138061f8;
  uVar3 = uRam00000001138061f0;
  uVar2 = uRam00000001138061e8;
  uVar1 = uRam00000001138061e0;
  *param_1 = uRam00000001138061d8;
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



/* Entry: 102f84814; end: 102f84827;  */

void FUN_102f84814(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c6e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c6e0,&UNK_10db6fc20);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f84828; end: 102f8485f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f84828(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f99614();
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



/* Entry: 102f84860; end: 102f848a7;  */

void FUN_102f84860(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70150,0x1b,2);
  uRam0000000113806210 = uStack_38;
  uRam0000000113806208 = uStack_40;
  uRam0000000113806220 = uStack_28;
  uRam0000000113806218 = uStack_30;
  uRam0000000113806230 = uStack_18;
  uRam0000000113806228 = uStack_20;
  return;
}



/* Entry: 102f848a8; end: 102f848df;  */

undefined1  [16] FUN_102f848a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1165e0;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 102f848e0; end: 102f84917;  */

uint FUN_102f848e0(long param_1,long param_2)

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
  func_0x000102fa4980();
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



/* Entry: 102f84918; end: 102f849b7;  */

/* WARNING: Possible PIC construction at 0x000102f84964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f84974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f84968) */
/* WARNING: Removing unreachable block (ram,0x000102f84978) */

void FUN_102f84918(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b8f0 != -1) {
    func_0x000107c61568(0x112f2b8f0,FUN_102f84860);
  }
  uVar5 = uRam0000000113806230;
  uVar4 = uRam0000000113806228;
  uVar3 = uRam0000000113806220;
  uVar2 = uRam0000000113806218;
  uVar1 = uRam0000000113806210;
  *param_1 = uRam0000000113806208;
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



/* Entry: 102f849b8; end: 102f849cb;  */

void FUN_102f849b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c6d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c6d0,&UNK_10db6fc18);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f849cc; end: 102f84a03;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f849cc(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f99710();
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



/* Entry: 102f84a04; end: 102f84a4b;  */

void FUN_102f84a04(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70177,0xb,2);
  uRam0000000113806240 = uStack_38;
  uRam0000000113806238 = uStack_40;
  uRam0000000113806250 = uStack_28;
  uRam0000000113806248 = uStack_30;
  uRam0000000113806260 = uStack_18;
  uRam0000000113806258 = uStack_20;
  return;
}



/* Entry: 102f84a4c; end: 102f84aff;  */

/* WARNING: Removing unreachable block (ram,0x000102f84afc) */

void FUN_102f84a4c(undefined8 param_1,long param_2,long param_3)

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
        FUN_102f98030();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1105f3088,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102f84b00; end: 102f84b5b;  */

void FUN_102f84b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_102f84b5c();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 102f84b5c; end: 102f84c3f;  */

void FUN_102f84b5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  uStack_78 = *(undefined8 *)(param_1 + 0x98);
  uStack_80 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = *(undefined8 *)(param_1 + 0xa8);
  uStack_70 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = *(undefined8 *)(param_1 + 0xb8);
  uStack_60 = *(undefined8 *)(param_1 + 0xb0);
  uStack_48 = *(undefined8 *)(param_1 + 200);
  uStack_50 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = *(undefined8 *)(param_1 + 0x78);
  uStack_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = *(undefined8 *)(param_1 + 0x88);
  uStack_90 = *(undefined8 *)(param_1 + 0x80);
  uStack_f8 = *(undefined8 *)(param_1 + 0x18);
  uStack_100 = *(undefined8 *)(param_1 + 0x10);
  uStack_e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = &uStack_100;
  FUN_102f54fec();
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
    FUN_102f98030();
    (*pcVar2)(&uStack_1c0,1,&UNK_1105f3088,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 102f84c40; end: 102f84c77;  */

undefined1  [16] FUN_102f84c40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116610;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 102f84c78; end: 102f84caf;  */

uint FUN_102f84c78(long param_1,long param_2)

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
  func_0x000102fa4940();
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



/* Entry: 102f84cb0; end: 102f84d4f;  */

/* WARNING: Possible PIC construction at 0x000102f84cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f84d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f84d00) */
/* WARNING: Removing unreachable block (ram,0x000102f84d10) */

void FUN_102f84cb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b900 != -1) {
    func_0x000107c61568(0x112f2b900,FUN_102f84a04);
  }
  uVar5 = uRam0000000113806260;
  uVar4 = uRam0000000113806258;
  uVar3 = uRam0000000113806250;
  uVar2 = uRam0000000113806248;
  uVar1 = uRam0000000113806240;
  *param_1 = uRam0000000113806238;
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



/* Entry: 102f84d50; end: 102f84d63;  */

void FUN_102f84d50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c6c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c6c0,&UNK_10db6fc10);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f84d64; end: 102f84d97;  */

void FUN_102f84d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102f84d98; end: 102f84ef3;  */

void FUN_102f84d98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_148 [72];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_38 = unaff_x20[0x19];
  uStack_40 = unaff_x20[0x18];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000107c6068c(auStack_148,0);
  func_0x000107c5fa50(auStack_148,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f84ef4; end: 102f84f3b;  */

void FUN_102f84ef4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db7016c,10,2);
  uRam0000000113806270 = uStack_38;
  uRam0000000113806268 = uStack_40;
  uRam0000000113806280 = uStack_28;
  uRam0000000113806278 = uStack_30;
  uRam0000000113806290 = uStack_18;
  uRam0000000113806288 = uStack_20;
  return;
}



/* Entry: 102f84f3c; end: 102f84fef;  */

/* WARNING: Removing unreachable block (ram,0x000102f84fec) */

void FUN_102f84f3c(undefined8 param_1,long param_2,long param_3)

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
        FUN_102f97e38();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1105f2ef0,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102f84ff0; end: 102f8504b;  */

void FUN_102f84ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_102f8504c();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 102f8504c; end: 102f850d7;  */

void FUN_102f8504c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x28);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f97e38();
    (*pcVar1)(&uStack_60,1,&UNK_1105f2ef0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f850d8; end: 102f85117;  */

void FUN_102f850d8(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  return;
}



/* Entry: 102f85118; end: 102f85147;  */

undefined1  [16] FUN_102f85118(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102f85148; end: 102f8517b;  */

void FUN_102f85148(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 102f8517c; end: 102f8518f;  */

undefined8 FUN_102f8517c(void)

{
  return 0x102f8518c;
}



/* Entry: 102f85190; end: 102f851a3;  */

void FUN_102f85190(void)

{
  FUN_102f84f3c();
  return;
}



/* Entry: 102f851a4; end: 102f851db;  */

void FUN_102f851a4(void)

{
  FUN_102f84ff0();
  return;
}



/* Entry: 102f851dc; end: 102f85213;  */

uint FUN_102f851dc(long param_1,long param_2)

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
  func_0x000102fa4900();
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



/* Entry: 102f85214; end: 102f8525b;  */

uint FUN_102f85214(undefined8 *param_1)

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
  FUN_102f95198(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f8525c; end: 102f852fb;  */

/* WARNING: Possible PIC construction at 0x000102f852a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f852b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f852ac) */
/* WARNING: Removing unreachable block (ram,0x000102f852bc) */

void FUN_102f8525c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b910 != -1) {
    func_0x000107c61568(0x112f2b910,FUN_102f84ef4);
  }
  uVar5 = uRam0000000113806290;
  uVar4 = uRam0000000113806288;
  uVar3 = uRam0000000113806280;
  uVar2 = uRam0000000113806278;
  uVar1 = uRam0000000113806270;
  *param_1 = uRam0000000113806268;
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



/* Entry: 102f852fc; end: 102f8530f;  */

void FUN_102f852fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c6b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c6b0,&UNK_10db6fc08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f85310; end: 102f85413;  */

void FUN_102f85310(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102f85414; end: 102f8549f;  */

uint FUN_102f85414(undefined8 *param_1,undefined8 *param_2)

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
  FUN_102f95198(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f854a0; end: 102f85573;  */

/* WARNING: Removing unreachable block (ram,0x000102f85570) */

void FUN_102f854a0(undefined8 param_1,long param_2,long param_3)

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
        FUN_102f97e38();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_1105f2ef0,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x60))();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102f85574; end: 102f855ef;  */

void FUN_102f85574(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_102f855f0();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 0x20))(*unaff_x20,2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 102f855f0; end: 102f8567b;  */

void FUN_102f855f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x30);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f97e38();
    (*pcVar1)(&uStack_60,1,&UNK_1105f2ef0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f8567c; end: 102f856b3;  */

undefined1  [16] FUN_102f8567c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116680;
  auVar1._0_8_ = 0xd000000000000035;
  return auVar1;
}



/* Entry: 102f856b4; end: 102f856eb;  */

uint FUN_102f856b4(long param_1,long param_2)

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
  func_0x000102fa48c0();
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



/* Entry: 102f856ec; end: 102f8578b;  */

/* WARNING: Possible PIC construction at 0x000102f85738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f85748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f8573c) */
/* WARNING: Removing unreachable block (ram,0x000102f8574c) */

void FUN_102f856ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b920 != -1) {
    func_0x000107c61568(0x112f2b920,0x102f85458);
  }
  uVar5 = uRam00000001138062c0;
  uVar4 = uRam00000001138062b8;
  uVar3 = uRam00000001138062b0;
  uVar2 = uRam00000001138062a8;
  uVar1 = uRam00000001138062a0;
  *param_1 = uRam0000000113806298;
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



/* Entry: 102f8578c; end: 102f8579f;  */

void FUN_102f8578c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c6a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c6a0,&UNK_10db6fc00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f857a0; end: 102f858b3;  */

void FUN_102f857a0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102f858b4; end: 102f858fb;  */

void FUN_102f858b4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db700e0,0x6d,2);
  uRam00000001138062d0 = uStack_38;
  uRam00000001138062c8 = uStack_40;
  uRam00000001138062e0 = uStack_28;
  uRam00000001138062d8 = uStack_30;
  uRam00000001138062f0 = uStack_18;
  uRam00000001138062e8 = uStack_20;
  return;
}



/* Entry: 102f858fc; end: 102f85acf;  */

/* WARNING: Removing unreachable block (ram,0x000102f85ab0) */

void FUN_102f858fc(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar4 = *(code **)(param_3 + 0x150);
LAB_102f85aa0:
            (*pcVar4)();
          }
          else if (lVar1 == 2) {
            pcVar4 = *(code **)(param_3 + 0x198);
            FUN_102f97f34();
            lVar2 = unaff_x20 + 0x60;
            puVar3 = &UNK_1105f2f78;
            goto LAB_102f85984;
          }
        }
        else {
          if (lVar1 == 3) {
            pcVar4 = *(code **)(param_3 + 0x150);
            goto LAB_102f85aa0;
          }
          if (lVar1 == 4) {
            pcVar4 = *(code **)(param_3 + 0x198);
            FUN_102f98324();
            lVar2 = unaff_x20 + 0x90;
            puVar3 = &UNK_1105f3240;
            goto LAB_102f85984;
          }
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x150);
            goto LAB_102f85aa0;
          }
          if (lVar1 != 6) goto LAB_102f85998;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_102f9851c();
          lVar2 = unaff_x20 + 200;
          puVar3 = &UNK_1105f33d8;
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000102f92b70();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_1105f2bb0;
        }
        else {
          if (lVar1 != 8) {
            if (lVar1 != 9) goto LAB_102f85998;
            pcVar4 = *(code **)(param_3 + 0x150);
            goto LAB_102f85aa0;
          }
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_102f98714();
          lVar2 = unaff_x20 + 0x108;
          puVar3 = &UNK_1105f3570;
        }
LAB_102f85984:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_102f85998:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 102f85ad0; end: 102f85c8f;  */

void FUN_102f85ad0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_102f85c90(), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,3,param_2,param_3);
    }
    FUN_102f85d1c();
    uVar2 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,5,param_2,param_3);
    }
    puVar3 = unaff_x20;
    FUN_102f85dac();
    if (unaff_x20[6] != 0) {
      uStack_48 = (undefined1)unaff_x20[7];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[6];
      func_0x000102f92b70();
      (*pcVar4)(&uStack_50,7,&UNK_1105f2bb0,puVar3,param_2,param_3);
    }
    FUN_102f85e44();
    uVar2 = unaff_x20[9];
    uVar1 = unaff_x20[8] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,9,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
  }
  return;
}



/* Entry: 102f85c90; end: 102f85d1b;  */

void FUN_102f85c90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x88);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f97f34();
    (*pcVar1)(&uStack_70,2,&UNK_1105f2f78,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f85d1c; end: 102f85dab;  */

void FUN_102f85d1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xc0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x98);
    uStack_80 = *(undefined8 *)(param_1 + 0x90);
    uStack_68 = *(undefined8 *)(param_1 + 0xa8);
    uStack_70 = *(undefined8 *)(param_1 + 0xa0);
    uStack_58 = *(undefined8 *)(param_1 + 0xb8);
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f98324();
    (*pcVar1)(&uStack_80,4,&UNK_1105f3240,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f85dac; end: 102f85e43;  */

void FUN_102f85dac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x100);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0xd0);
    uStack_80 = *(undefined8 *)(param_1 + 200);
    uStack_68 = *(undefined8 *)(param_1 + 0xe0);
    uStack_70 = *(undefined8 *)(param_1 + 0xd8);
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    uStack_50 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f9851c();
    (*pcVar1)(&uStack_80,6,&UNK_1105f33d8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f85e44; end: 102f85ecb;  */

void FUN_102f85e44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x110);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x108);
    uStack_58 = *(undefined8 *)(param_1 + 0x120);
    uStack_60 = *(undefined8 *)(param_1 + 0x118);
    uStack_48 = *(undefined8 *)(param_1 + 0x130);
    uStack_50 = *(undefined8 *)(param_1 + 0x128);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f98714();
    (*pcVar1)(&uStack_70,8,&UNK_1105f3570,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f85ecc; end: 102f85f57;  */

void FUN_102f85ecc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0xf000000000000000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xf000000000000000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  return;
}



/* Entry: 102f85f58; end: 102f85f87;  */

undefined1  [16] FUN_102f85f58(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 102f85f88; end: 102f85fbb;  */

void FUN_102f85f88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 102f85fbc; end: 102f85fcf;  */

undefined1  [16] FUN_102f85fbc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x102f85fcc;
  return auVar1;
}



/* Entry: 102f85fd0; end: 102f85fe3;  */

void FUN_102f85fd0(void)

{
  FUN_102f858fc();
  return;
}



/* Entry: 102f85fe4; end: 102f8604b;  */

void FUN_102f85fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_178 [312];
  
  func_0x000107c610b4(auStack_178);
  FUN_102f85ad0(param_1,param_2,param_3);
  return;
}



/* Entry: 102f8604c; end: 102f8604f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f8604c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102f86050; end: 102f86087;  */

uint FUN_102f86050(long param_1,long param_2)

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
  func_0x000102fa4880();
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



/* Entry: 102f86088; end: 102f860d7;  */

uint FUN_102f86088(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_158,param_1,0x138);
  func_0x000107c610b4(auStack_290);
  FUN_102f934d8(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 102f860d8; end: 102f86177;  */

/* WARNING: Possible PIC construction at 0x000102f86124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f86134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f86128) */
/* WARNING: Removing unreachable block (ram,0x000102f86138) */

void FUN_102f860d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b930 != -1) {
    func_0x000107c61568(0x112f2b930,FUN_102f858b4);
  }
  uVar5 = uRam00000001138062f0;
  uVar4 = uRam00000001138062e8;
  uVar3 = uRam00000001138062e0;
  uVar2 = uRam00000001138062d8;
  uVar1 = uRam00000001138062d0;
  *param_1 = uRam00000001138062c8;
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



/* Entry: 102f86178; end: 102f861b3;  */

void FUN_102f86178(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c690;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c690,&UNK_10db6fbf8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f861b4; end: 102f862bf;  */

void FUN_102f861b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [312];
  
  func_0x000107c610b4(auStack_168);
  func_0x000107c6068c(auStack_1b0,0);
  func_0x000107c5fa50(auStack_1b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f862c0; end: 102f86313;  */

uint FUN_102f862c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_290,param_1,0x138);
  func_0x000107c610b4(auStack_158,param_2,0x138);
  FUN_102f934d8(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 102f86314; end: 102f8635b;  */

void FUN_102f86314(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6fea0,8,2);
  uRam0000000113806300 = uStack_38;
  uRam00000001138062f8 = uStack_40;
  uRam0000000113806310 = uStack_28;
  uRam0000000113806308 = uStack_30;
  uRam0000000113806320 = uStack_18;
  uRam0000000113806318 = uStack_20;
  return;
}



/* Entry: 102f8635c; end: 102f86393;  */

undefined1  [16] FUN_102f8635c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1166f0;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 102f86394; end: 102f863cb;  */

uint FUN_102f86394(long param_1,long param_2)

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
  func_0x000102fa4840();
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


