/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e96054; end: 100e9608b;  */

uint FUN_100e96054(long param_1,long param_2)

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
  func_0x000100e9e2bc();
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



/* Entry: 100e9608c; end: 100e9610b;  */

uint FUN_100e9608c(undefined8 *param_1)

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
  FUN_100e9a23c(&uStack_d0,&uStack_70,0x112d458f0,&UNK_10d90b170,0x100e9e690);
  return uVar1 & 1;
}



/* Entry: 100e9610c; end: 100e961ab;  */

/* WARNING: Possible PIC construction at 0x000100e96158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e96168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e9615c) */
/* WARNING: Removing unreachable block (ram,0x000100e9616c) */

void FUN_100e9610c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45bf0 != -1) {
    func_0x000107c61568(0x112d45bf0,FUN_100e95e30);
  }
  uVar5 = uRam00000001137fece8;
  uVar4 = uRam00000001137fece0;
  uVar3 = uRam00000001137fecd8;
  uVar2 = uRam00000001137fecd0;
  uVar1 = uRam00000001137fecc8;
  *param_1 = uRam00000001137fecc0;
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



/* Entry: 100e961ac; end: 100e961bf;  */

void FUN_100e961ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d461c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d461c8,&UNK_10d90cc18);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e961c0; end: 100e961f7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100e961c0(undefined8 *param_1,undefined8 param_2)

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
  FUN_100e9b9a8();
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



/* Entry: 100e961f8; end: 100e962bf;  */

uint FUN_100e961f8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100e9a23c(&uStack_d0,&uStack_70,0x112d458f0,&UNK_10d90b170,0x100e9e690);
  return uVar1 & 1;
}



/* Entry: 100e962c0; end: 100e9635f;  */

/* WARNING: Possible PIC construction at 0x000100e9630c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e9631c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e96310) */
/* WARNING: Removing unreachable block (ram,0x000100e96320) */

void FUN_100e962c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c08 != -1) {
    func_0x000107c61568(0x112d45c08,0x100e96278);
  }
  uVar5 = uRam00000001137fed18;
  uVar4 = uRam00000001137fed10;
  uVar3 = uRam00000001137fed08;
  uVar2 = uRam00000001137fed00;
  uVar1 = uRam00000001137fecf8;
  *param_1 = uRam00000001137fecf0;
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



/* Entry: 100e96360; end: 100e963a7;  */

void FUN_100e96360(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90cd40,0x12,2);
  uRam00000001137fed28 = uStack_38;
  uRam00000001137fed20 = uStack_40;
  uRam00000001137fed38 = uStack_28;
  uRam00000001137fed30 = uStack_30;
  uRam00000001137fed48 = uStack_18;
  uRam00000001137fed40 = uStack_20;
  return;
}



/* Entry: 100e963a8; end: 100e963df;  */

undefined1  [16] FUN_100e963a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef16740;
  auVar1._0_8_ = 0xd000000000000034;
  return auVar1;
}



/* Entry: 100e963e0; end: 100e96417;  */

uint FUN_100e963e0(long param_1,long param_2)

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
  func_0x000100e9e27c();
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



/* Entry: 100e96418; end: 100e964b7;  */

/* WARNING: Possible PIC construction at 0x000100e96464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e96474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e96468) */
/* WARNING: Removing unreachable block (ram,0x000100e96478) */

void FUN_100e96418(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c10 != -1) {
    func_0x000107c61568(0x112d45c10,FUN_100e96360);
  }
  uVar5 = uRam00000001137fed48;
  uVar4 = uRam00000001137fed40;
  uVar3 = uRam00000001137fed38;
  uVar2 = uRam00000001137fed30;
  uVar1 = uRam00000001137fed28;
  *param_1 = uRam00000001137fed20;
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



/* Entry: 100e964b8; end: 100e964cb;  */

void FUN_100e964b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d461b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d461b8,&UNK_10d90cc10);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e964cc; end: 100e96503;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100e964cc(undefined8 *param_1,undefined8 param_2)

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
  FUN_100e9baa4();
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



/* Entry: 100e96504; end: 100e9654b;  */

void FUN_100e96504(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90ce30,0x18,2);
  uRam00000001137fed58 = uStack_38;
  uRam00000001137fed50 = uStack_40;
  uRam00000001137fed68 = uStack_28;
  uRam00000001137fed60 = uStack_30;
  uRam00000001137fed78 = uStack_18;
  uRam00000001137fed70 = uStack_20;
  return;
}



/* Entry: 100e9654c; end: 100e965e3;  */

void FUN_100e9654c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_100e965a0:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000100e965bc;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_100e96588;
code_r0x000100e965bc:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_100e96588:
    (*pcVar3)();
  }
  goto LAB_100e965a0;
}



/* Entry: 100e965e4; end: 100e96687;  */

void FUN_100e965e4(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 100e96688; end: 100e966db;  */

void FUN_100e96688(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 100e966dc; end: 100e96703;  */

void FUN_100e966dc(void)

{
  FUN_100e9654c();
  return;
}



/* Entry: 100e96704; end: 100e9673b;  */

uint FUN_100e96704(long param_1,long param_2)

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
  func_0x000100e9e23c();
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



/* Entry: 100e9673c; end: 100e96783;  */

uint FUN_100e9673c(undefined8 *param_1)

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
  FUN_100e9a1c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100e96784; end: 100e96823;  */

/* WARNING: Possible PIC construction at 0x000100e967d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e967e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e967d4) */
/* WARNING: Removing unreachable block (ram,0x000100e967e4) */

void FUN_100e96784(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c20 != -1) {
    func_0x000107c61568(0x112d45c20,FUN_100e96504);
  }
  uVar5 = uRam00000001137fed78;
  uVar4 = uRam00000001137fed70;
  uVar3 = uRam00000001137fed68;
  uVar2 = uRam00000001137fed60;
  uVar1 = uRam00000001137fed58;
  *param_1 = uRam00000001137fed50;
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



/* Entry: 100e96824; end: 100e96837;  */

void FUN_100e96824(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d461a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d461a8,&UNK_10d90cc08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e96838; end: 100e9694b;  */

void FUN_100e96838(undefined8 param_1,undefined8 param_2)

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



/* Entry: 100e9694c; end: 100e969d7;  */

uint FUN_100e9694c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100e9a1c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100e969d8; end: 100e96aff;  */

/* WARNING: Removing unreachable block (ram,0x000100e96ac4) */
/* WARNING: Removing unreachable block (ram,0x000100e96afc) */

void FUN_100e969d8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        FUN_100e96cc4();
      }
      else if (lVar1 == 2) {
        FUN_100e96b00();
      }
      else if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000100e9a7fc();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 100e96b00; end: 100e96cc3;  */

/* WARNING: Removing unreachable block (ram,0x000100e96c58) */

void FUN_100e96b00(long param_1,undefined8 param_2,undefined8 param_3,long param_4,code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined1 uVar12;
  long lVar13;
  code *pcVar14;
  long unaff_x21;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  cVar11 = *(char *)(param_1 + 0x40);
  lVar13 = param_1;
  if ((cVar11 != '\x01') && (cVar11 != -1)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    FUN_100e991c0(uVar2,lVar7,uVar1,uVar6,*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38),cVar11);
    lVar13 = 0;
    FUN_100e996a8(0,0,0,0);
    uStack_80 = uVar2;
    lStack_78 = lVar7;
    uStack_70 = uVar1;
    uStack_68 = uVar6;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  FUN_100e9b248();
  (*pcVar14)(&uStack_80,&UNK_11035f190,lVar13,param_3,param_4);
  uVar6 = uStack_68;
  uVar2 = uStack_70;
  lVar13 = lStack_78;
  uVar1 = uStack_80;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (cVar11 == -1) {
      func_0x000107c61434(lStack_78);
      func_0x00010006c00c(uVar2,uVar6);
    }
    else {
      pcVar14 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_78);
      func_0x00010006c00c(uVar2,uVar6);
      (*pcVar14)(param_3,param_4);
    }
    FUN_100e996a8(uStack_80,lStack_78,uStack_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(long *)(param_1 + 0x18) = lVar13;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar12 = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x40) = 0;
    (*param_5)(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar12);
  }
  else {
    FUN_100e996a8(uStack_80,lStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 100e96cc4; end: 100e96f13;  */

/* WARNING: Removing unreachable block (ram,0x000100e96e84) */

void FUN_100e96cc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,code *param_5,
                  code *param_6,undefined8 param_7,code *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined1 uVar14;
  long lVar15;
  long unaff_x21;
  code *pcVar16;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_88 = 0xf000000000000000;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  cVar13 = *(char *)(param_1 + 0x40);
  lVar15 = param_1;
  if (cVar13 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar9 = *(ulong *)(param_1 + 0x18);
    FUN_100e991c0(uVar3,uVar9,uVar2,uVar8,uVar1,uVar7,1);
    lVar15 = 0;
    (*param_5)(0,0xf000000000000000,0,0,0,0);
    uStack_90 = uVar3;
    uStack_88 = uVar9;
    uStack_80 = uVar2;
    uStack_78 = uVar8;
    uStack_70 = uVar1;
    uStack_68 = uVar7;
  }
  pcVar16 = *(code **)(param_4 + 0x198);
  (*param_6)();
  (*pcVar16)(&uStack_90,param_7,lVar15,param_3,param_4);
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar3 = uStack_78;
  uVar2 = uStack_80;
  uVar9 = uStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (uStack_88 >> 0x3c < 0xf)) {
    if (cVar13 == -1) {
      func_0x00010006c00c(uStack_90,uStack_88);
      FUN_100e99188(uVar2,uVar3,uVar7,uVar8);
    }
    else {
      pcVar16 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_90,uStack_88);
      FUN_100e99188(uVar2,uVar3,uVar7,uVar8);
      (*pcVar16)(param_3,param_4);
    }
    (*param_5)(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(ulong *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    uVar14 = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x40) = 1;
    (*param_8)(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar14);
  }
  else {
    (*param_5)(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 100e96f14; end: 100e97017;  */

void FUN_100e96f14(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_70;
  undefined1 uStack_68;
  
  if (*unaff_x20 != 0) {
    uStack_68 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_70 = *unaff_x20;
    (*param_4)();
    (*pcVar2)(&lStack_70,1,param_5,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((char)unaff_x20[8] == '\x01') {
    FUN_100e970a4();
  }
  else {
    if ((char)unaff_x20[8] == -1) goto LAB_100e96fe4;
    FUN_100e97018();
  }
  if (unaff_x21 != 0) {
    return;
  }
LAB_100e96fe4:
  func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
  return;
}



/* Entry: 100e97018; end: 100e970a3;  */

void FUN_100e97018(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(char *)(param_1 + 0x40) != '\x01') && (*(char *)(param_1 + 0x40) != -1)) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_100e9b248();
    (*pcVar1)(&uStack_60,2,&UNK_11035f190,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e970a4);
  (*pcVar1)();
}



/* Entry: 100e970a4; end: 100e97133;  */

void FUN_100e970a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    (*param_5)();
    (*pcVar1)(&uStack_70,3,param_6,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e97134);
  (*pcVar1)();
}



/* Entry: 100e97134; end: 100e9716b;  */

undefined1  [16] FUN_100e97134(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef167b0;
  auVar1._0_8_ = 0xd000000000000030;
  return auVar1;
}



/* Entry: 100e9716c; end: 100e9717f;  */

void FUN_100e9716c(void)

{
  FUN_100e969d8();
  return;
}



/* Entry: 100e97180; end: 100e971e7;  */

void FUN_100e97180(void)

{
  FUN_100e96f14();
  return;
}



/* Entry: 100e971e8; end: 100e9721f;  */

uint FUN_100e971e8(long param_1,long param_2)

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
  func_0x000100e9e1fc();
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



/* Entry: 100e97220; end: 100e9729f;  */

uint FUN_100e97220(undefined8 *param_1)

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
  FUN_100e9a23c(&uStack_d0,&uStack_70,0x112d459b0,&UNK_10d90b188,0x100e9e694);
  return uVar1 & 1;
}



/* Entry: 100e972a0; end: 100e9733f;  */

/* WARNING: Possible PIC construction at 0x000100e972ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e972fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e972f0) */
/* WARNING: Removing unreachable block (ram,0x000100e97300) */

void FUN_100e972a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c30 != -1) {
    func_0x000107c61568(0x112d45c30,0x100e96990);
  }
  uVar5 = uRam00000001137feda8;
  uVar4 = uRam00000001137feda0;
  uVar3 = uRam00000001137fed98;
  uVar2 = uRam00000001137fed90;
  uVar1 = uRam00000001137fed88;
  *param_1 = uRam00000001137fed80;
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



/* Entry: 100e97340; end: 100e97353;  */

void FUN_100e97340(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d46198;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d46198,&UNK_10d90cc00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e97354; end: 100e97387;  */

void FUN_100e97354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 100e97388; end: 100e974ab;  */

void FUN_100e97388(undefined8 param_1,undefined8 param_2)

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



/* Entry: 100e974ac; end: 100e97573;  */

uint FUN_100e974ac(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100e9a23c(&uStack_d0,&uStack_70,0x112d459b0,&UNK_10d90b188,0x100e9e694);
  return uVar1 & 1;
}



/* Entry: 100e97574; end: 100e97613;  */

/* WARNING: Possible PIC construction at 0x000100e975c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e975d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e975c4) */
/* WARNING: Removing unreachable block (ram,0x000100e975d4) */

void FUN_100e97574(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c48 != -1) {
    func_0x000107c61568(0x112d45c48,0x100e9752c);
  }
  uVar5 = uRam00000001137fedd8;
  uVar4 = uRam00000001137fedd0;
  uVar3 = uRam00000001137fedc8;
  uVar2 = uRam00000001137fedc0;
  uVar1 = uRam00000001137fedb8;
  *param_1 = uRam00000001137fedb0;
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



/* Entry: 100e97614; end: 100e9765b;  */

void FUN_100e97614(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90cd40,0x12,2);
  uRam00000001137fede8 = uStack_38;
  uRam00000001137fede0 = uStack_40;
  uRam00000001137fedf8 = uStack_28;
  uRam00000001137fedf0 = uStack_30;
  uRam00000001137fee08 = uStack_18;
  uRam00000001137fee00 = uStack_20;
  return;
}



/* Entry: 100e9765c; end: 100e9770f;  */

/* WARNING: Removing unreachable block (ram,0x000100e9770c) */

void FUN_100e9765c(undefined8 param_1,long param_2,long param_3)

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
        func_0x000100e9a0c0();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_11035f310,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 100e97710; end: 100e9776b;  */

void FUN_100e97710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_100e9776c();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 100e9776c; end: 100e977f7;  */

void FUN_100e9776c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x000100e9a0c0();
    (*pcVar1)(&uStack_60,1,&UNK_11035f310,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 100e977f8; end: 100e9782f;  */

undefined1  [16] FUN_100e977f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef167f0;
  auVar1._0_8_ = 0xd000000000000033;
  return auVar1;
}



/* Entry: 100e97830; end: 100e97867;  */

uint FUN_100e97830(long param_1,long param_2)

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
  func_0x000100e9e1bc();
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



/* Entry: 100e97868; end: 100e97907;  */

/* WARNING: Possible PIC construction at 0x000100e978b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e978c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e978b8) */
/* WARNING: Removing unreachable block (ram,0x000100e978c8) */

void FUN_100e97868(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c50 != -1) {
    func_0x000107c61568(0x112d45c50,FUN_100e97614);
  }
  uVar5 = uRam00000001137fee08;
  uVar4 = uRam00000001137fee00;
  uVar3 = uRam00000001137fedf8;
  uVar2 = uRam00000001137fedf0;
  uVar1 = uRam00000001137fede8;
  *param_1 = uRam00000001137fede0;
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



/* Entry: 100e97908; end: 100e9791b;  */

void FUN_100e97908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d46188;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d46188,&UNK_10d90cbf8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e9791c; end: 100e9794f;  */

void FUN_100e9791c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 100e97950; end: 100e97a53;  */

void FUN_100e97950(undefined8 param_1,undefined8 param_2)

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



/* Entry: 100e97a54; end: 100e97a9b;  */

void FUN_100e97a54(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90cd2b,0xb,2);
  uRam00000001137fee18 = uStack_38;
  uRam00000001137fee10 = uStack_40;
  uRam00000001137fee28 = uStack_28;
  uRam00000001137fee20 = uStack_30;
  uRam00000001137fee38 = uStack_18;
  uRam00000001137fee30 = uStack_20;
  return;
}



/* Entry: 100e97a9c; end: 100e97b4f;  */

/* WARNING: Removing unreachable block (ram,0x000100e97b4c) */

void FUN_100e97a9c(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000100e9994c();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 100e97b50; end: 100e97bf3;  */

void FUN_100e97b50(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

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
    func_0x000100e9994c();
    (*pcVar2)(&lStack_60,1,&UNK_11035eee8,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 100e97bf4; end: 100e97c2b;  */

undefined1  [16] FUN_100e97bf4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef16830;
  auVar1._0_8_ = 0xd000000000000031;
  return auVar1;
}



/* Entry: 100e97c2c; end: 100e97c63;  */

uint FUN_100e97c2c(long param_1,long param_2)

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
  func_0x000100e9e17c();
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



/* Entry: 100e97c64; end: 100e97c97;  */

uint FUN_100e97c64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100e99a4c(uVar1,*(undefined1 *)(unaff_x20 + 1),unaff_x20[2],unaff_x20[3],*param_1,
                *(undefined1 *)(param_1 + 1),param_1[2],param_1[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 100e97c98; end: 100e97d37;  */

/* WARNING: Possible PIC construction at 0x000100e97ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e97cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e97ce8) */
/* WARNING: Removing unreachable block (ram,0x000100e97cf8) */

void FUN_100e97c98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c60 != -1) {
    func_0x000107c61568(0x112d45c60,FUN_100e97a54);
  }
  uVar5 = uRam00000001137fee38;
  uVar4 = uRam00000001137fee30;
  uVar3 = uRam00000001137fee28;
  uVar2 = uRam00000001137fee20;
  uVar1 = uRam00000001137fee18;
  *param_1 = uRam00000001137fee10;
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



/* Entry: 100e97d38; end: 100e97d4b;  */

void FUN_100e97d38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d46178;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d46178,&UNK_10d90cbf0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e97d4c; end: 100e97d7f;  */

void FUN_100e97d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 100e97d80; end: 100e97e93;  */

void FUN_100e97d80(undefined8 param_1,undefined8 param_2)

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



/* Entry: 100e97e94; end: 100e97f0f;  */

uint FUN_100e97e94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_100e99a4c(uVar1,*(undefined1 *)(param_1 + 1),param_1[2],param_1[3],*param_2,
                *(undefined1 *)(param_2 + 1),param_2[2],param_2[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 100e97f10; end: 100e97ff3;  */

void FUN_100e97f10(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000100e9a8fc();
LAB_100e97f98:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_100e9b248();
        goto LAB_100e97f98;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 100e97ff4; end: 100e980a7;  */

void FUN_100e97ff4(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000100e9a8fc();
    (*pcVar2)(&lStack_50,1,&UNK_11035fcb8,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_100e980a8();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 100e980a8; end: 100e9812b;  */

void FUN_100e980a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x28);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_100e9b248();
    (*pcVar1)(&uStack_60,2,&UNK_11035f190,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 100e9812c; end: 100e98173;  */

void FUN_100e9812c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 100e98174; end: 100e981a3;  */

undefined1  [16] FUN_100e98174(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 100e981a4; end: 100e981d7;  */

void FUN_100e981a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100e981d8; end: 100e981eb;  */

undefined1  [16] FUN_100e981d8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x100e981e8;
  return auVar1;
}



/* Entry: 100e981ec; end: 100e981ff;  */

void FUN_100e981ec(void)

{
  FUN_100e97f10();
  return;
}



/* Entry: 100e98200; end: 100e98237;  */

void FUN_100e98200(void)

{
  FUN_100e97ff4();
  return;
}



/* Entry: 100e98238; end: 100e9826f;  */

uint FUN_100e98238(long param_1,long param_2)

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
  FUN_100e9e13c();
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



/* Entry: 100e98270; end: 100e982b7;  */

uint FUN_100e98270(undefined8 *param_1)

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
  FUN_100e99aa4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e982b8; end: 100e98357;  */

/* WARNING: Possible PIC construction at 0x000100e98304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e98314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e98308) */
/* WARNING: Removing unreachable block (ram,0x000100e98318) */

void FUN_100e982b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c70 != -1) {
    func_0x000107c61568(0x112d45c70,0x100e97ec8);
  }
  uVar5 = uRam00000001137fee68;
  uVar4 = uRam00000001137fee60;
  uVar3 = uRam00000001137fee58;
  uVar2 = uRam00000001137fee50;
  uVar1 = uRam00000001137fee48;
  *param_1 = uRam00000001137fee40;
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



/* Entry: 100e98358; end: 100e9836b;  */

void FUN_100e98358(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d46168;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d46168,&UNK_10d90cbe8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100e9836c; end: 100e9839f;  */

void FUN_100e9836c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 100e983a0; end: 100e984a3;  */

void FUN_100e983a0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 100e984a4; end: 100e98533;  */

uint FUN_100e984a4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100e99aa4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e98534; end: 100e985d3;  */

/* WARNING: Possible PIC construction at 0x000100e98580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e98590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e98584) */
/* WARNING: Removing unreachable block (ram,0x000100e98594) */

void FUN_100e98534(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d45c88 != -1) {
    func_0x000107c61568(0x112d45c88,0x100e984ec);
  }
  uVar5 = uRam00000001137fee98;
  uVar4 = uRam00000001137fee90;
  uVar3 = uRam00000001137fee88;
  uVar2 = uRam00000001137fee80;
  uVar1 = uRam00000001137fee78;
  *param_1 = uRam00000001137fee70;
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



/* Entry: 100e985d4; end: 100e98f47;  */

void FUN_100e985d4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x19;
  ulong uVar19;
  byte *unaff_x20;
  undefined8 unaff_x21;
  int iVar20;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar21;
  ulong unaff_x25;
  long lVar22;
  ulong *puVar23;
  ulong *unaff_x27;
  ulong *puVar24;
  ulong *unaff_x28;
  long lVar25;
  byte bStack_121;
  byte abStack_120 [24];
  long lStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_98;
  undefined8 uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    if ((lVar22 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x27 = (ulong *)(param_1 + 0x38);
      unaff_x28 = (ulong *)(param_2 + 0x38);
      do {
        unaff_x25 = 0xc000000000000000;
        uVar13 = unaff_x27[-3];
        unaff_x22 = unaff_x27[-1];
        unaff_x19 = *unaff_x27;
        uVar15 = unaff_x28[-3];
        unaff_x24 = unaff_x28[-1];
        unaff_x23 = *unaff_x28;
        if ((char)unaff_x28[-2] == '\x01') {
          if (uVar15 == 0) {
            if (uVar13 != 0) goto LAB_100e98a00;
          }
          else if (uVar15 == 1) {
            if (uVar13 != 1) goto LAB_100e98a00;
          }
          else if (uVar13 != 2) goto LAB_100e98a00;
        }
        else if (uVar13 != uVar15) goto LAB_100e98a00;
        uVar3 = (uint)(unaff_x19 >> 0x20);
        uVar12 = uVar3 >> 0x1e;
        uVar4 = (uint)(unaff_x23 >> 0x20);
        uVar17 = uVar4 >> 0x1e;
        iVar20 = (int)unaff_x22;
        if (unaff_x19 >> 0x3e == 3) {
          uVar13 = 0;
          if ((((unaff_x22 != 0) || (unaff_x19 != 0xc000000000000000)) || (unaff_x23 >> 0x3e < 3))
             || ((uVar13 = 0, unaff_x24 != 0 || (unaff_x23 != 0xc000000000000000))))
          goto joined_r0x000100e98880;
        }
        else {
          if (uVar3 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar13 = unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar14,iVar20)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98a54);
                (*pcVar6)();
              }
              uVar13 = (ulong)(iVar14 - iVar20);
            }
joined_r0x000100e98880:
            if (uVar4 >> 0x1e < 2) goto LAB_100e98720;
LAB_100e986ec:
            if (uVar17 != 2) {
              if (uVar13 == 0) goto LAB_100e98638;
              goto LAB_100e98a00;
            }
            uVar15 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
            if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98a4c);
              (*pcVar6)();
            }
          }
          else {
            if (uVar12 == 2) {
              uVar13 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98a50);
                (*pcVar6)();
              }
              goto joined_r0x000100e98880;
            }
            uVar13 = 0;
            if (1 < uVar17) goto LAB_100e986ec;
LAB_100e98720:
            if (uVar17 == 0) {
              uVar15 = unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(unaff_x24 >> 0x20);
              if (SBORROW4(iVar14,(int)unaff_x24)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98a48);
                (*pcVar6)();
              }
              uVar15 = (ulong)(iVar14 - (int)unaff_x24);
            }
          }
          if (uVar13 != uVar15) goto LAB_100e98a00;
          if (0 < (long)uVar13) {
            param_2 = unaff_x19;
            if (uVar12 < 2) {
              if (uVar12 != 0) {
                lVar25 = (long)iVar20;
                uStack_98 = ((long)unaff_x22 >> 0x20) - lVar25;
                if ((long)unaff_x22 >> 0x20 < lVar25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98a58);
                  uStack_90 = unaff_x21;
                  (*pcVar6)();
                }
                uStack_90 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                uVar13 = unaff_x24;
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000107c5ec30();
                if (uVar13 == 0) {
                  func_0x000107c5ec38();
                  lVar25 = 0;
                  lVar9 = 0;
                }
                else {
                  uVar15 = uVar13;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar25,uVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98a64);
                    (*pcVar6)();
                  }
                  lVar7 = (lVar25 - uVar15) + uVar13;
                  func_0x000107c5ec38();
                  if ((long)uStack_98 <= (long)uVar15) {
                    uVar15 = uStack_98;
                  }
                  lVar25 = 0;
                  if (lVar7 != 0) {
                    lVar25 = lVar7;
                  }
                  lVar9 = 0;
                  if (lVar7 != 0) {
                    lVar9 = uVar15 + lVar7;
                  }
                }
                unaff_x21 = uStack_90;
                unaff_x20 = (byte *)(unaff_x19 & 0x3fffffffffffffff);
                FUN_100e25bdc(abStack_80,lVar25,lVar9,unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                unaff_x25 = 0xc000000000000000;
                if ((abStack_80[0] & 1) != 0) goto LAB_100e98638;
                goto LAB_100e98a00;
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
              abStack_80[9] = (byte)(unaff_x19 >> 8);
              abStack_80[10] = (byte)(unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)(unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)(unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)(unaff_x19 >> 0x28);
              pbVar11 = abStack_80 + (unaff_x19 >> 0x30 & 0xff);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x24,unaff_x23);
              unaff_x20 = pbVar11;
LAB_100e98940:
              FUN_100e25bdc(&bStack_81,abStack_80,pbVar11,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar5 = bStack_81;
            }
            else {
              if (uVar12 != 2) {
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
                pbVar11 = abStack_80;
                goto LAB_100e98940;
              }
              lVar25 = *(long *)(unaff_x22 + 0x10);
              uStack_98 = *(ulong *)(unaff_x22 + 0x18);
              uStack_90 = unaff_x21;
              func_0x00010006c00c(unaff_x22,unaff_x19);
              unaff_x25 = unaff_x24;
              func_0x00010006c00c(unaff_x24,unaff_x23);
              func_0x000107c5ec30();
              uVar13 = unaff_x25;
              if (unaff_x25 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,uVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98a60);
                  (*pcVar6)();
                }
                unaff_x25 = (lVar25 - uVar13) + unaff_x25;
              }
              uVar15 = uStack_98 - lVar25;
              if (SBORROW8(uStack_98,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98a5c);
                (*pcVar6)();
              }
              unaff_x20 = (byte *)(unaff_x19 & 0x3fffffffffffffff);
              func_0x000107c5ec38();
              unaff_x21 = uStack_90;
              if (unaff_x25 == 0) {
                lVar25 = 0;
              }
              else {
                if ((long)uVar15 <= (long)uVar13) {
                  uVar13 = uVar15;
                }
                lVar25 = uVar13 + unaff_x25;
              }
              FUN_100e25bdc(abStack_80,unaff_x25,lVar25,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar5 = abStack_80[0];
            }
            if ((bVar5 & 1) == 0) goto LAB_100e98a00;
          }
        }
LAB_100e98638:
        unaff_x25 = 0xc000000000000000;
        unaff_x27 = unaff_x27 + 4;
        unaff_x28 = unaff_x28 + 4;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    uVar13 = 1;
  }
  else {
LAB_100e98a00:
    uVar13 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  uStack_a8 = 0x100e98a68;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(uVar13 + 0x10);
  puStack_100 = unaff_x28;
  puStack_f8 = unaff_x27;
  lStack_f0 = lVar22;
  uStack_e8 = unaff_x25;
  uStack_e0 = unaff_x24;
  uStack_d8 = unaff_x23;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  pbStack_c0 = unaff_x20;
  uStack_b8 = unaff_x19;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (lVar25 == *(long *)(param_2 + 0x10)) {
    if ((lVar25 != 0) && (uVar13 != param_2)) {
      puVar24 = (ulong *)(param_2 + 0x30);
      puVar23 = (ulong *)(uVar13 + 0x30);
      do {
        uVar15 = puVar23[-2];
        uVar10 = puVar23[-1];
        uVar19 = *puVar23;
        uVar1 = puVar24[-2];
        uVar2 = puVar24[-1];
        uVar21 = *puVar24;
        func_0x00010006c00c(uVar15,uVar10);
        func_0x000107c6157c(uVar19);
        func_0x00010006c00c(uVar1,uVar2);
        uVar13 = uVar21;
        func_0x000107c6157c();
        if (uVar19 != uVar21) {
          func_0x000107c6157c(uVar19);
          func_0x000107c6157c(uVar21);
          uVar16 = uVar19;
          FUN_100e93490(uVar19,uVar21);
          func_0x000107c61574(uVar21);
          uVar13 = uVar19;
          func_0x000107c61574();
          if ((uVar16 & 1) != 0) goto LAB_100e98b78;
LAB_100e98ec0:
          func_0x00010006c090(uVar1,uVar2);
          func_0x000107c61574(uVar21);
          func_0x00010006c090(uVar15,uVar10);
          func_0x000107c61574(uVar19);
          goto LAB_100e98ee8;
        }
LAB_100e98b78:
        uVar3 = (uint)(uVar10 >> 0x20);
        uVar12 = uVar3 >> 0x1e;
        uVar4 = (uint)(uVar2 >> 0x20);
        uVar17 = uVar4 >> 0x1e;
        iVar20 = (int)uVar15;
        if (uVar10 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((uVar15 != 0) || (uVar10 != 0xc000000000000000)) || (uVar2 >> 0x3e < 3)) ||
             ((uVar16 = 0, uVar1 != 0 || (uVar2 != 0xc000000000000000))))
          goto joined_r0x000100e98bf0;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(uVar21);
          uVar15 = 0;
          uVar10 = 0xc000000000000000;
LAB_100e98ae4:
          func_0x00010006c090(uVar15,uVar10);
          func_0x000107c61574(uVar19);
        }
        else {
          if (1 < uVar3 >> 0x1e) {
            if (uVar12 == 2) {
              uVar16 = *(long *)(uVar15 + 0x18) - *(long *)(uVar15 + 0x10);
              if (SBORROW8(*(long *)(uVar15 + 0x18),*(long *)(uVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98f34);
                (*pcVar6)();
              }
              goto joined_r0x000100e98bf0;
            }
            uVar16 = 0;
            if (uVar17 < 2) goto LAB_100e98c2c;
LAB_100e98bf4:
            if (uVar17 == 2) {
              uVar18 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98f28);
                (*pcVar6)();
              }
              goto LAB_100e98c4c;
            }
            if (uVar16 != 0) goto LAB_100e98ec0;
LAB_100e98ac8:
            func_0x00010006c090(uVar1,uVar2);
            func_0x000107c61574(uVar21);
            goto LAB_100e98ae4;
          }
          if (uVar12 == 0) {
            uVar16 = uVar10 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(uVar15 >> 0x20);
            if (SBORROW4(iVar14,iVar20)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98f30);
              (*pcVar6)();
            }
            uVar16 = (ulong)(iVar14 - iVar20);
          }
joined_r0x000100e98bf0:
          if (1 < uVar4 >> 0x1e) goto LAB_100e98bf4;
LAB_100e98c2c:
          if (uVar17 == 0) {
            uVar18 = uVar2 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(uVar1 >> 0x20);
            if (SBORROW4(iVar14,(int)uVar1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98f2c);
              (*pcVar6)();
            }
            uVar18 = (ulong)(iVar14 - (int)uVar1);
          }
LAB_100e98c4c:
          if (uVar16 != uVar18) goto LAB_100e98ec0;
          if ((long)uVar16 < 1) goto LAB_100e98ac8;
          if (uVar12 < 2) {
            if (uVar12 != 0) {
              lVar22 = (long)iVar20;
              uVar16 = ((long)uVar15 >> 0x20) - lVar22;
              if ((long)uVar15 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98f38);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              if (uVar13 == 0) {
                func_0x000107c5ec38();
                lVar7 = 0;
                lVar22 = 0;
              }
              else {
                uVar18 = uVar13;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar22,uVar18)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98f44);
                  (*pcVar6)();
                }
                lVar9 = (lVar22 - uVar18) + uVar13;
                func_0x000107c5ec38();
                if ((long)uVar16 <= (long)uVar18) {
                  uVar18 = uVar16;
                }
                lVar7 = 0;
                if (lVar9 != 0) {
                  lVar7 = lVar9;
                }
                lVar22 = 0;
                if (lVar9 != 0) {
                  lVar22 = uVar18 + lVar9;
                }
              }
              goto LAB_100e98e74;
            }
            abStack_120[0] = (byte)uVar15;
            abStack_120[1] = (byte)(uVar15 >> 8);
            abStack_120[2] = (byte)(uVar15 >> 0x10);
            abStack_120[3] = (byte)(uVar15 >> 0x18);
            abStack_120[4] = (byte)(uVar15 >> 0x20);
            abStack_120[5] = (byte)(uVar15 >> 0x28);
            abStack_120[6] = (byte)(uVar15 >> 0x30);
            abStack_120[7] = (byte)(uVar15 >> 0x38);
            abStack_120[8] = (byte)uVar10;
            abStack_120[9] = (byte)(uVar10 >> 8);
            abStack_120[10] = (byte)(uVar10 >> 0x10);
            abStack_120[0xb] = (byte)(uVar10 >> 0x18);
            abStack_120[0xc] = (byte)(uVar10 >> 0x20);
            abStack_120[0xd] = (byte)(uVar10 >> 0x28);
            pbVar11 = abStack_120 + (uVar10 >> 0x30 & 0xff);
LAB_100e98dd4:
            FUN_100e25bdc(&bStack_121,abStack_120,pbVar11,uVar1,uVar2);
            func_0x00010006c090(uVar1,uVar2);
            func_0x000107c61574(uVar21);
            func_0x00010006c090(uVar15,uVar10);
            func_0x000107c61574(uVar19);
            bVar5 = bStack_121;
          }
          else {
            if (uVar12 != 2) {
              abStack_120[8] = 0;
              abStack_120[9] = 0;
              abStack_120[10] = 0;
              abStack_120[0xb] = 0;
              abStack_120[0xc] = 0;
              abStack_120[0xd] = 0;
              abStack_120[0] = 0;
              abStack_120[1] = 0;
              abStack_120[2] = 0;
              abStack_120[3] = 0;
              abStack_120[4] = 0;
              abStack_120[5] = 0;
              abStack_120[6] = 0;
              abStack_120[7] = 0;
              pbVar11 = abStack_120;
              goto LAB_100e98dd4;
            }
            lVar22 = *(long *)(uVar15 + 0x10);
            lVar9 = *(long *)(uVar15 + 0x18);
            func_0x000107c5ec30();
            if (uVar13 == 0) {
              lVar7 = 0;
            }
            else {
              uVar16 = uVar13;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar22,uVar16)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98f40);
                (*pcVar6)();
              }
              lVar7 = (lVar22 - uVar16) + uVar13;
              uVar13 = uVar16;
            }
            uVar16 = lVar9 - lVar22;
            if (SBORROW8(lVar9,lVar22)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e98f3c);
              (*pcVar6)();
            }
            func_0x000107c5ec38();
            if (lVar7 == 0) {
              lVar22 = 0;
            }
            else {
              if ((long)uVar16 <= (long)uVar13) {
                uVar13 = uVar16;
              }
              lVar22 = uVar13 + lVar7;
            }
LAB_100e98e74:
            FUN_100e25bdc(abStack_120,lVar7,lVar22,uVar1,uVar2);
            func_0x00010006c090(uVar1,uVar2);
            func_0x000107c61574(uVar21);
            func_0x00010006c090(uVar15,uVar10);
            func_0x000107c61574(uVar19);
            bVar5 = abStack_120[0];
          }
          if ((bVar5 & 1) == 0) goto LAB_100e98ee8;
        }
        puVar24 = puVar24 + 3;
        puVar23 = puVar23 + 3;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    uVar8 = 1;
  }
  else {
LAB_100e98ee8:
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    func_0x000107c60e78(uVar8);
    func_0x000107c61168(&PTR_PTR_112d45f48);
    return;
  }
  return;
}



/* Entry: 100e98f48; end: 100e98f67;  */

void FUN_100e98f48(void)

{
  func_0x000107c61168(&PTR_PTR_112d45f48);
  return;
}



/* Entry: 100e98f68; end: 100e99017;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_100e98f68(void)

{
  long in_x3;
  ulong in_x4;
  ulong in_x5;
  uint uVar1;
  
  if (in_x3 == 0) {
    return;
  }
  func_0x000107c61434(in_x3);
  uVar1 = (uint)(in_x5 >> 0x3e);
  if (uVar1 == 1) {
    in_x4 = in_x5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x4);
  return;
}



/* Entry: 100e99018; end: 100e99187;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_100e99018(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if ((param_4 >> 0x3d & 1) == 0) {
    func_0x000107c61434(param_2);
    param_2 = param_3;
    param_3 = param_4;
  }
  else {
    func_0x000107c61434();
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



/* Entry: 100e99188; end: 100e991bf;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_100e99188(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 100e991c0; end: 100e9929f;  */

/* WARNING: Possible PIC construction at 0x000100e991ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e991f0) */
/* WARNING: Removing unreachable block (ram,0x000100e99188) */
/* WARNING: Removing unreachable block (ram,0x000100e99198) */
/* WARNING: Removing unreachable block (ram,0x000100e99194) */

void FUN_100e991c0(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_7 == '\x01') {
    unaff_x30 = 0x100e991f0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    param_3 = param_1;
    unaff_x19 = param_4;
    unaff_x20 = param_6;
    unaff_x29 = puVar1;
  }
  else {
    func_0x000107c61434(param_2);
    param_2 = param_4;
  }
  uVar2 = (uint)(param_2 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c6157c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 100e992a0; end: 100e995cf;  */

uint FUN_100e992a0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uVar2;
  
  uVar6 = param_1[3];
  lVar5 = param_1[2];
  uVar10 = param_1[5];
  uVar8 = param_1[4];
  uVar7 = param_2[3];
  lVar4 = param_2[2];
  uVar11 = param_2[5];
  uVar9 = param_2[4];
  lStack_a0 = lVar4;
  uStack_98 = uVar7;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  lStack_80 = lVar5;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar10 >> 0x3c < 0xf) {
    if (0xe < uVar11 >> 0x3c) goto LAB_100e99368;
    if ((uVar7 & 0xff) == 1) {
      if (lVar4 == 0) {
        if (lVar5 != 0) {
          FUN_100e9e5fc(&lStack_80,auStack_c0,0x112d459a8,&UNK_10d90b180);
          FUN_100e9e5fc(&lStack_a0,auStack_c0,0x112d459a8,&UNK_10d90b180);
          lVar4 = 0;
          goto LAB_100e99580;
        }
      }
      else if (lVar4 == 1) {
        if (lVar5 != 1) {
          FUN_100e9e5fc(&lStack_80,auStack_c0,0x112d459a8,&UNK_10d90b180);
          FUN_100e9e5fc(&lStack_a0,auStack_c0,0x112d459a8,&UNK_10d90b180);
          lVar4 = 1;
LAB_100e99580:
          func_0x000100e991a4(lVar4,uVar7,uVar9,uVar11);
          goto LAB_100e995a4;
        }
      }
      else if (lVar5 != 2) {
        FUN_100e9e5fc(&lStack_80,auStack_c0,0x112d459a8,&UNK_10d90b180);
        FUN_100e9e5fc(&lStack_a0,auStack_c0,0x112d459a8,&UNK_10d90b180);
        lVar4 = 2;
        goto LAB_100e99580;
      }
    }
    else if (lVar5 != lVar4) {
      FUN_100e9e5fc(&lStack_80,auStack_c0,0x112d459a8,&UNK_10d90b180);
      FUN_100e9e5fc(&lStack_a0,auStack_c0,0x112d459a8,&UNK_10d90b180);
      goto LAB_100e99580;
    }
    FUN_100e9e5fc(&lStack_80,auStack_c0,0x112d459a8,&UNK_10d90b180);
    FUN_100e9e5fc(&lStack_a0,auStack_c0,0x112d459a8,&UNK_10d90b180);
    uVar3 = uVar8;
    FUN_100e25fcc(uVar8,uVar10,uVar9,uVar11);
    func_0x000100e991a4(lVar4,uVar7,uVar9,uVar11);
    func_0x000100e991a4(lVar5,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_100e9934c;
  }
  else {
    if (0xe < uVar11 >> 0x3c) {
      FUN_100e9e5fc(&lStack_80,auStack_c0,0x112d459a8,&UNK_10d90b180);
      FUN_100e9e5fc(&lStack_a0,auStack_c0,0x112d459a8,&UNK_10d90b180);
      func_0x000100e991a4(lVar5,uVar6,uVar8,uVar10);
LAB_100e9934c:
      uVar2 = *param_1;
      FUN_100e25fcc(uVar2,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar2;
      goto LAB_100e995ac;
    }
LAB_100e99368:
    FUN_100e9e5fc(&lStack_80,auStack_c0,0x112d459a8,&UNK_10d90b180);
    FUN_100e9e5fc(&lStack_a0,auStack_c0,0x112d459a8,&UNK_10d90b180);
    func_0x000100e991a4(lVar5,uVar6,uVar8,uVar10);
    lVar5 = lVar4;
    uVar6 = uVar7;
    uVar8 = uVar9;
    uVar10 = uVar11;
LAB_100e995a4:
    func_0x000100e991a4(lVar5,uVar6,uVar8,uVar10);
  }
  uVar1 = 0;
LAB_100e995ac:
  return uVar1 & 1;
}



/* Entry: 100e995d0; end: 100e996a7;  */

uint FUN_100e995d0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong *puVar5;
  
  uVar4 = *param_1;
  uStack_58 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  if ((char)param_1[6] == '\x01') {
    uStack_38 = param_1[5];
    uStack_40 = param_1[4];
    if ((char)param_2[6] == '\x01') {
      uStack_88 = param_2[1];
      uStack_90 = *param_2;
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_68 = param_2[5];
      uStack_70 = param_2[4];
      puVar5 = &uStack_60;
      uStack_60 = uVar4;
      uStack_50 = uVar6;
      uStack_48 = uVar7;
      FUN_100e992a0(puVar5,&uStack_90);
      uVar3 = (uint)puVar5;
      goto LAB_100e99690;
    }
  }
  else if ((char)param_2[6] != '\x01') {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    if (((uVar4 == *param_2 && uStack_58 == param_2[1]) ||
        (func_0x000107c605b8(uVar4,uStack_58,*param_2,param_2[1],0), (uVar4 & 1) != 0)) &&
       (FUN_100e25fcc(uVar6,uVar7,uVar1,uVar2), (uVar6 & 1) != 0)) {
      uVar3 = 1;
      goto LAB_100e99690;
    }
  }
  uVar3 = 0;
LAB_100e99690:
  return uVar3 & 1;
}



/* Entry: 100e996a8; end: 100e996df;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100e996a8(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
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



/* Entry: 100e996e0; end: 100e996eb;  */

void FUN_100e996e0(void)

{
  return;
}



/* Entry: 100e996ec; end: 100e9978b;  */

/* WARNING: Possible PIC construction at 0x000100e9971c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e99760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e99764) */
/* WARNING: Removing unreachable block (ram,0x000100e99720) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_100e996ec(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      pbVar10 = (byte *)param_1[6];
      pbVar25 = (byte *)param_1[7];
      lVar24 = param_2[6];
      uVar14 = param_2[7];
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
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar14 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
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
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar14 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
          if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
LAB_100e2608c:
            if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar20 < 1) goto LAB_100e26128;
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
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar15 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                  goto LAB_100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto LAB_100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
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
                pbVar15 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar15) {
                  pbVar15 = unaff_x23;
                }
                pbVar15 = pbVar15 + (long)pbVar10;
              }
            }
LAB_100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
        pbVar13 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar13 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar15[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)pbVar15;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar24,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            lVar24 = *(long *)(pbVar15 + 0x18);
            if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          break;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
               (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar12 = *(byte **)(pbVar15 + 0x18),
               pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
              return (byte *)0x1;
            }
            break;
          }
          if (pbVar15[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar12 = *(byte **)(pbVar15 + 0x10);
          lVar24 = *(long *)(pbVar15 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar12 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar13 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar15 + 0x20);
          lVar24 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar24;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar26;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar11);
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
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 100e9978c; end: 100e99a4b;  */

void FUN_100e9978c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d45b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90b8c8;
  func_0x000107c61520(&UNK_10d90b8c8,&UNK_11035ef60);
  puRam0000000112d45b20 = puVar1;
  return;
}



/* Entry: 100e99a4c; end: 100e99aa3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_100e99a4c(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
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
      if (param_1 == 0) goto FUN_100e25fcc;
    }
    else if (param_5 == 1) {
      if (param_1 == 1) {
FUN_100e25fcc:
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
LAB_100e26128:
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
            if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
            if (uVar18 == 0) {
              uVar19 = param_8 >> 0x30 & 0xff;
              goto LAB_100e2608c;
            }
            iVar16 = (int)((ulong)param_7 >> 0x20);
            if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar17 == (long)(iVar16 - (int)param_7)) goto LAB_100e26094;
LAB_100e26154:
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
            if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar18 == 2) {
              uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
              if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
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
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto LAB_100e262b0;
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
LAB_100e262a4:
              unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,param_7
                            ,param_8);
              pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = param_8;
            }
            else {
              pbVar8 = (byte *)(ulong)(uVar17 == 0);
            }
          }
LAB_100e262b0:
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
          *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
    }
    else if (param_1 == 2) goto FUN_100e25fcc;
  }
  else if (param_1 == param_5) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 100e99aa4; end: 100e9a07f;  */

uint FUN_100e99aa4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 < 3) {
      if (lVar4 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else if (lVar4 == 1) {
        if (lVar3 != 1) {
          return 0;
        }
      }
      else if (lVar3 != 2) {
        return 0;
      }
    }
    else if (lVar4 < 5) {
      if (lVar4 == 3) {
        if (lVar3 != 3) {
          return 0;
        }
      }
      else if (lVar3 != 4) {
        return 0;
      }
    }
    else if (lVar4 == 5) {
      if (lVar3 != 5) {
        return 0;
      }
    }
    else if (lVar3 != 6) {
      return 0;
    }
  }
  else if (lVar3 != lVar4) {
    return 0;
  }
  lVar3 = param_1[5];
  uVar5 = param_1[4];
  lVar4 = param_1[7];
  uVar8 = param_1[6];
  lVar7 = param_2[5];
  uVar6 = param_2[4];
  lVar10 = param_2[7];
  uVar9 = param_2[6];
  uStack_a0 = uVar6;
  lStack_98 = lVar7;
  uStack_90 = uVar9;
  lStack_88 = lVar10;
  uStack_80 = uVar5;
  lStack_78 = lVar3;
  uStack_70 = uVar8;
  lStack_68 = lVar4;
  if (lVar3 == 0) {
    if (lVar7 == 0) {
      FUN_100e9e5fc(&uStack_80,auStack_c0,0x112d45a68,&UNK_10d90b198);
      FUN_100e9e5fc(&uStack_a0,auStack_c0,0x112d45a68,&UNK_10d90b198);
LAB_100e99cc4:
      FUN_100e996a8(uVar5,lVar3,uVar8,lVar4);
      lVar3 = param_1[2];
      FUN_100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar3;
      goto LAB_100e99d50;
    }
LAB_100e99be4:
    FUN_100e9e5fc(&uStack_80,auStack_c0,0x112d45a68,&UNK_10d90b198);
    FUN_100e9e5fc(&uStack_a0,auStack_c0,0x112d45a68,&UNK_10d90b198);
    FUN_100e996a8(uVar5,lVar3,uVar8,lVar4);
    uVar5 = uVar6;
    lVar3 = lVar7;
    uVar8 = uVar9;
    lVar4 = lVar10;
  }
  else {
    if (lVar7 == 0) goto LAB_100e99be4;
    if (((uVar5 == uVar6) && (lVar3 == lVar7)) ||
       (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar6,lVar7,0), (uVar2 & 1) != 0)) {
      FUN_100e9e5fc(&uStack_80,auStack_c0,0x112d45a68,&UNK_10d90b198);
      FUN_100e9e5fc(&uStack_a0,auStack_c0,0x112d45a68,&UNK_10d90b198);
      uVar2 = uVar8;
      FUN_100e25fcc(uVar8,lVar4,uVar9,lVar10);
      FUN_100e996a8(uVar6,lVar7,uVar9,lVar10);
      if ((uVar2 & 1) != 0) goto LAB_100e99cc4;
    }
    else {
      FUN_100e9e5fc(&uStack_80,auStack_c0,0x112d45a68,&UNK_10d90b198);
      FUN_100e9e5fc(&uStack_a0,auStack_c0,0x112d45a68,&UNK_10d90b198);
      FUN_100e996a8(uVar6,lVar7,uVar9,lVar10);
    }
  }
  FUN_100e996a8(uVar5,lVar3,uVar8,lVar4);
  uVar1 = 0;
LAB_100e99d50:
  return uVar1 & 1;
}



/* Entry: 100e9a080; end: 100e9a1bf;  */

void FUN_100e9a080(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d45bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90bec0;
  func_0x000107c61520(&UNK_10d90bec0,&UNK_11035f410);
  puRam0000000112d45bb8 = puVar1;
  return;
}



/* Entry: 100e9a1c0; end: 100e9a23b;  */

/* WARNING: Possible PIC construction at 0x000100e9a1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e9a1f4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_100e9a1c0(undefined8 *param_1,undefined8 *param_2)

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
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
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
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
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
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
          unaff_x24 = pbVar25;
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
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
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
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
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
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
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
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
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
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
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
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 100e9a23c; end: 100e9a73b;  */

uint FUN_100e9a23c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_188 [56];
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  char cStack_120;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  char cStack_e0;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar6 = *param_1;
  lVar7 = *param_2;
  if ((char)param_2[1] != '\x01') {
    if (lVar6 == lVar7) goto LAB_100e9a298;
    goto LAB_100e9a5e8;
  }
  if (3 < lVar7) {
    if (lVar7 < 6) {
      if (lVar7 == 4) {
        if (lVar6 == 4) goto LAB_100e9a298;
      }
      else if (lVar6 == 5) goto LAB_100e9a298;
    }
    else if (lVar7 == 6) {
      if (lVar6 == 6) goto LAB_100e9a298;
    }
    else if (lVar6 == 7) goto LAB_100e9a298;
    goto LAB_100e9a5e8;
  }
  if (lVar7 < 2) {
    if (lVar7 == 0) {
      if (lVar6 == 0) {
LAB_100e9a298:
        lVar6 = param_1[3];
        uVar8 = param_1[2];
        lVar7 = param_1[5];
        uVar15 = param_1[4];
        lVar12 = param_1[7];
        lVar9 = param_1[6];
        cVar5 = (char)param_1[8];
        lVar13 = param_2[3];
        uVar10 = param_2[2];
        lVar17 = param_2[5];
        uVar16 = param_2[4];
        lVar14 = param_2[7];
        lVar11 = param_2[6];
        cVar4 = (char)param_2[8];
        uStack_150 = uVar10;
        lStack_148 = lVar13;
        uStack_140 = uVar16;
        lStack_138 = lVar17;
        lStack_130 = lVar11;
        lStack_128 = lVar14;
        cStack_120 = cVar4;
        uStack_110 = uVar8;
        lStack_108 = lVar6;
        uStack_100 = uVar15;
        lStack_f8 = lVar7;
        lStack_f0 = lVar9;
        lStack_e8 = lVar12;
        cStack_e0 = cVar5;
        if (cVar5 == -1) {
          if (cVar4 == -1) {
            FUN_100e9e5fc(&uStack_110,auStack_188);
            FUN_100e9e5fc(&uStack_150,auStack_188,param_3,param_4);
            cVar5 = -1;
LAB_100e9a6ec:
            (*param_5)(uVar8,lVar6,uVar15,lVar7,lVar9,lVar12,cVar5);
LAB_100e9a70c:
            lVar6 = param_1[9];
            FUN_100e25fcc(lVar6,param_1[10],param_2[9],param_2[10]);
            uVar1 = (uint)lVar6;
            goto LAB_100e9a5ec;
          }
LAB_100e9a3d0:
          FUN_100e9e5fc(&uStack_110,auStack_188);
          FUN_100e9e5fc(&uStack_150,auStack_188,param_3,param_4);
          (*param_5)(uVar8,lVar6,uVar15,lVar7,lVar9,lVar12,cVar5);
          uVar8 = uVar10;
          lVar6 = lVar13;
          uVar15 = uVar16;
          lVar7 = lVar17;
          lVar9 = lVar11;
          lVar12 = lVar14;
          cVar5 = cVar4;
        }
        else {
          if (cVar4 == -1) goto LAB_100e9a3d0;
          if (cVar5 == '\x01') {
            uStack_d0 = uVar8;
            lStack_c8 = lVar6;
            uStack_c0 = uVar15;
            lStack_b8 = lVar7;
            lStack_b0 = lVar9;
            lStack_a8 = lVar12;
            if (cVar4 == '\x01') {
              uStack_a0 = uVar10;
              lStack_98 = lVar13;
              uStack_90 = uVar16;
              lStack_88 = lVar17;
              lStack_80 = lVar11;
              lStack_78 = lVar14;
              FUN_100e9e5fc(&uStack_110,auStack_188);
              FUN_100e9e5fc(&uStack_150,auStack_188,param_3,param_4);
              puVar2 = &uStack_d0;
              FUN_100e992a0(puVar2,&uStack_a0);
              (*param_5)(uVar10,lVar13,uVar16,lVar17,lVar11,lVar14,1);
              (*param_5)(uVar8,lVar6,uVar15,lVar7,lVar9,lVar12,1);
              if (((ulong)puVar2 & 1) != 0) goto LAB_100e9a70c;
              goto LAB_100e9a5e8;
            }
            FUN_100e9e5fc(&uStack_110,auStack_188);
LAB_100e9a5a8:
            FUN_100e9e5fc(&uStack_150,auStack_188,param_3,param_4);
LAB_100e9a5b0:
            (*param_5)(uVar10,lVar13,uVar16,lVar17,lVar11,lVar14,cVar4);
          }
          else {
            if (cVar4 == '\x01') {
              FUN_100e9e5fc(&uStack_110,auStack_188);
              FUN_100e9e5fc(&uStack_150,auStack_188,param_3,param_4);
              cVar4 = '\x01';
              goto LAB_100e9a5b0;
            }
            if (((uVar8 != uVar10) || (lVar6 != lVar13)) &&
               (uVar3 = uVar8, func_0x000107c605b8(uVar8,lVar6,uVar10,lVar13,0), (uVar3 & 1) == 0))
            {
              FUN_100e9e5fc(&uStack_110,auStack_188,param_3,param_4);
              goto LAB_100e9a5a8;
            }
            FUN_100e9e5fc(&uStack_110,auStack_188,param_3,param_4);
            FUN_100e9e5fc(&uStack_150,auStack_188,param_3,param_4);
            uVar3 = uVar15;
            FUN_100e25fcc(uVar15,lVar7,uVar16,lVar17);
            (*param_5)(uVar10,lVar13,uVar16,lVar17,lVar11,lVar14,cVar4);
            if ((uVar3 & 1) != 0) goto LAB_100e9a6ec;
          }
        }
        (*param_5)(uVar8,lVar6,uVar15,lVar7,lVar9,lVar12,cVar5);
      }
    }
    else if (lVar6 == 1) goto LAB_100e9a298;
  }
  else if (lVar7 == 2) {
    if (lVar6 == 2) goto LAB_100e9a298;
  }
  else if (lVar6 == 3) goto LAB_100e9a298;
LAB_100e9a5e8:
  uVar1 = 0;
LAB_100e9a5ec:
  return uVar1 & 1;
}



/* Entry: 100e9a73c; end: 100e9a97b;  */

void FUN_100e9a73c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d45c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90c158;
  func_0x000107c61520(&UNK_10d90c158,&UNK_11035f6c0);
  puRam0000000112d45c00 = puVar1;
  return;
}



/* Entry: 100e9a97c; end: 100e9a98f;  */

void FUN_100e9a97c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e9a990();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100e9a9d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e9a990; end: 100e9aa3b;  */

void FUN_100e9a990(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d45c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90b240;
  func_0x000107c61520(&UNK_10d90b240,&UNK_11035eee8);
  puRam0000000112d45c90 = puVar1;
  return;
}



/* Entry: 100e9aa3c; end: 100e9aa3f;  */

void FUN_100e9aa3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d45cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90b280;
  func_0x000107c61520(&UNK_10d90b280,&UNK_11035eee8);
  puRam0000000112d45cb0 = puVar1;
  return;
}


