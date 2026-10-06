/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ca836c; end: 103ca839f;  */

void FUN_103ca836c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103ca83a0; end: 103ca84a3;  */

void FUN_103ca83a0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103ca84a4; end: 103ca8523;  */

uint FUN_103ca84a4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cb568c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103ca8524; end: 103ca855b;  */

undefined1  [16] FUN_103ca8524(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b3750;
  auVar1._0_8_ = 0xd000000000000033;
  return auVar1;
}



/* Entry: 103ca855c; end: 103ca8593;  */

uint FUN_103ca855c(long param_1,long param_2)

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
  func_0x000103ccb210();
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



/* Entry: 103ca8594; end: 103ca8633;  */

/* WARNING: Possible PIC construction at 0x000103ca85e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ca85f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ca85e4) */
/* WARNING: Removing unreachable block (ram,0x000103ca85f4) */

void FUN_103ca8594(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff390 != -1) {
    func_0x000107c61568(0x112fff390,0x103ca84ec);
  }
  uVar5 = uRam000000011380e718;
  uVar4 = uRam000000011380e710;
  uVar3 = uRam000000011380e708;
  uVar2 = uRam000000011380e700;
  uVar1 = uRam000000011380e6f8;
  *param_1 = uRam000000011380e6f0;
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



/* Entry: 103ca8634; end: 103ca8647;  */

void FUN_103ca8634(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000240;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000240,&UNK_10dc74f00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ca8648; end: 103ca867f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ca8648(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cbe264();
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



/* Entry: 103ca8680; end: 103ca86c7;  */

void FUN_103ca8680(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc752d0,0x2d,2);
  uRam000000011380e728 = uStack_38;
  uRam000000011380e720 = uStack_40;
  uRam000000011380e738 = uStack_28;
  uRam000000011380e730 = uStack_30;
  uRam000000011380e748 = uStack_18;
  uRam000000011380e740 = uStack_20;
  return;
}



/* Entry: 103ca86c8; end: 103ca87eb;  */

/* WARNING: Removing unreachable block (ram,0x000103ca87dc) */

void FUN_103ca86c8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x150);
LAB_103ca8740:
          (*pcVar5)();
        }
        else if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103cb85fc();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_11072fae8;
LAB_103ca87c8:
          (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x150);
          goto LAB_103ca8740;
        }
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103cb71fc();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_11072f6f8;
          goto LAB_103ca87c8;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103ca87ec; end: 103ca892f;  */

void FUN_103ca87ec(undefined8 param_1,undefined8 param_2,long param_3)

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
      func_0x000103cb85fc();
      (*pcVar4)(&uStack_50,2,&UNK_11072fae8,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar3 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar3,uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      if (unaff_x20[6] != 0) {
        uStack_48 = (undefined1)unaff_x20[7];
        pcVar4 = *(code **)(param_3 + 0x80);
        uStack_50 = unaff_x20[6];
        func_0x000103cb71fc();
        (*pcVar4)(&uStack_50,4,&UNK_11072f6f8,uVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103ca8930; end: 103ca8997;  */

void FUN_103ca8930(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  return;
}



/* Entry: 103ca8998; end: 103ca89bf;  */

void FUN_103ca8998(void)

{
  FUN_103ca86c8();
  return;
}



/* Entry: 103ca89c0; end: 103ca89f7;  */

uint FUN_103ca89c0(long param_1,long param_2)

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
  func_0x000103ccb1d0();
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



/* Entry: 103ca89f8; end: 103ca8a4f;  */

uint FUN_103ca89f8(undefined8 *param_1)

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
  FUN_103cb4e30(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103ca8a50; end: 103ca8aef;  */

/* WARNING: Possible PIC construction at 0x000103ca8a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ca8aac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ca8aa0) */
/* WARNING: Removing unreachable block (ram,0x000103ca8ab0) */

void FUN_103ca8a50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff3a0 != -1) {
    func_0x000107c61568(0x112fff3a0,FUN_103ca8680);
  }
  uVar5 = uRam000000011380e748;
  uVar4 = uRam000000011380e740;
  uVar3 = uRam000000011380e738;
  uVar2 = uRam000000011380e730;
  uVar1 = uRam000000011380e728;
  *param_1 = uRam000000011380e720;
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



/* Entry: 103ca8af0; end: 103ca8b03;  */

void FUN_103ca8af0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000230;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000230,&UNK_10dc74ef8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ca8b04; end: 103ca8b37;  */

void FUN_103ca8b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103ca8b38; end: 103ca8c4b;  */

void FUN_103ca8b38(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103ca8c4c; end: 103ca8cdb;  */

uint FUN_103ca8c4c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cb4e30(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103ca8cdc; end: 103ca8d27;  */

void FUN_103ca8cdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 103ca8d28; end: 103ca8d5f;  */

undefined1  [16] FUN_103ca8d28(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b37d0;
  auVar1._0_8_ = 0xd000000000000039;
  return auVar1;
}



/* Entry: 103ca8d60; end: 103ca8d97;  */

uint FUN_103ca8d60(long param_1,long param_2)

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
  func_0x000103ccb190();
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



/* Entry: 103ca8d98; end: 103ca8e37;  */

/* WARNING: Possible PIC construction at 0x000103ca8de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ca8df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ca8de8) */
/* WARNING: Removing unreachable block (ram,0x000103ca8df8) */

void FUN_103ca8d98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff3b8 != -1) {
    func_0x000107c61568(0x112fff3b8,0x103ca8ca4);
  }
  uVar5 = uRam000000011380e778;
  uVar4 = uRam000000011380e770;
  uVar3 = uRam000000011380e768;
  uVar2 = uRam000000011380e760;
  uVar1 = uRam000000011380e758;
  *param_1 = uRam000000011380e750;
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



/* Entry: 103ca8e38; end: 103ca8e4b;  */

void FUN_103ca8e38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000220;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000220,&UNK_10dc74ef0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ca8e4c; end: 103ca8e7f;  */

void FUN_103ca8e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103ca8e80; end: 103ca8f73;  */

void FUN_103ca8e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ca8f74; end: 103ca8fbb;  */

void FUN_103ca8f74(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc752b0,0x18,2);
  uRam000000011380e788 = uStack_38;
  uRam000000011380e780 = uStack_40;
  uRam000000011380e798 = uStack_28;
  uRam000000011380e790 = uStack_30;
  uRam000000011380e7a8 = uStack_18;
  uRam000000011380e7a0 = uStack_20;
  return;
}



/* Entry: 103ca8fbc; end: 103ca908b;  */

void FUN_103ca8fbc(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
    else if (lVar1 == 2) {
      pcVar4 = *(code **)(param_3 + 0x180);
      (*param_4)();
      (*pcVar4)(unaff_x20 + 0x10,param_5,lVar1,param_2,param_3);
    }
  }
  return;
}



/* Entry: 103ca908c; end: 103ca9163;  */

void FUN_103ca908c(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (unaff_x20[2] != 0) {
      uStack_58 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[2];
      (*param_4)();
      (*pcVar4)(&uStack_60,2,param_5,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103ca9164; end: 103ca919b;  */

undefined1  [16] FUN_103ca9164(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b3810;
  auVar1._0_8_ = 0xd000000000000028;
  return auVar1;
}



/* Entry: 103ca919c; end: 103ca91e3;  */

void FUN_103ca919c(void)

{
  FUN_103ca8fbc();
  return;
}



/* Entry: 103ca91e4; end: 103ca921b;  */

uint FUN_103ca91e4(long param_1,long param_2)

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
  func_0x000103ccb150();
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



/* Entry: 103ca921c; end: 103ca92bb;  */

/* WARNING: Possible PIC construction at 0x000103ca9268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ca9278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ca926c) */
/* WARNING: Removing unreachable block (ram,0x000103ca927c) */

void FUN_103ca921c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff3c8 != -1) {
    func_0x000107c61568(0x112fff3c8,FUN_103ca8f74);
  }
  uVar5 = uRam000000011380e7a8;
  uVar4 = uRam000000011380e7a0;
  uVar3 = uRam000000011380e798;
  uVar2 = uRam000000011380e790;
  uVar1 = uRam000000011380e788;
  *param_1 = uRam000000011380e780;
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



/* Entry: 103ca92bc; end: 103ca92cf;  */

void FUN_103ca92bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000210;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000210,&UNK_10dc74ee8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ca92d0; end: 103ca9303;  */

void FUN_103ca92d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103ca9304; end: 103ca9427;  */

void FUN_103ca9304(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ca9428; end: 103ca946f;  */

void FUN_103ca9428(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75280,0x2a,2);
  uRam000000011380e7b8 = uStack_38;
  uRam000000011380e7b0 = uStack_40;
  uRam000000011380e7c8 = uStack_28;
  uRam000000011380e7c0 = uStack_30;
  uRam000000011380e7d8 = uStack_18;
  uRam000000011380e7d0 = uStack_20;
  return;
}



/* Entry: 103ca9470; end: 103ca9593;  */

/* WARNING: Removing unreachable block (ram,0x000103ca9548) */
/* WARNING: Removing unreachable block (ram,0x000103ca9590) */
/* WARNING: Removing unreachable block (ram,0x000103ca9574) */

void FUN_103ca9470(undefined8 param_1,long param_2,long param_3)

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
          FUN_103ca9594();
        }
        else if (lVar1 == 2) {
          FUN_103ca96fc();
        }
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cb873c();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_1106fa028,lVar1,param_2,param_3);
      }
      else if (lVar1 == 4) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 0x28,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103ca9594; end: 103ca96fb;  */

/* WARNING: Removing unreachable block (ram,0x000103ca96c4) */

void FUN_103ca9594(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x21;
  code *pcVar8;
  ulong uVar9;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar9 = param_1[2];
  plVar6 = param_1;
  if ((uVar9 >> 0x3d & 1) == 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_103cb0e68(lVar1,lVar3,uVar9);
    plVar6 = (long *)0x0;
    FUN_103ccc598(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar9;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_103ccc518();
  (*pcVar8)(&lStack_78,&UNK_11070cff8,plVar6,param_3,param_4);
  uVar5 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar9 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
      (*pcVar8)(param_3,param_4);
    }
    FUN_103ccc598(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar7 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar5;
    FUN_103cb0e94(lVar2,lVar4,lVar7);
  }
  else {
    FUN_103ccc598(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 103ca96fc; end: 103ca9877;  */

/* WARNING: Removing unreachable block (ram,0x000103ca983c) */

void FUN_103ca96fc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x21;
  code *pcVar9;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar7 = param_1[2];
  plVar6 = param_1;
  if ((uVar7 & 0x3000000000000000) != 0x3000000000000000 && (uVar7 & 0x2000000000000000) != 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_103cb0e68(lVar1,lVar3);
    plVar6 = (long *)0x0;
    FUN_103ccc598(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar7 & 0xdfffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x000103ccc558();
  (*pcVar9)(&lStack_78,&UNK_11070cee0,plVar6,param_3,param_4);
  uVar5 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar7 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
      (*pcVar9)(param_3,param_4);
    }
    FUN_103ccc598(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar8 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar5 | 0x2000000000000000;
    FUN_103cb0e94(lVar2,lVar4,lVar8);
  }
  else {
    FUN_103ccc598(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 103ca9878; end: 103ca997f;  */

void FUN_103ca9878(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar3 = param_1;
  if (((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    lVar3 = unaff_x20;
    if ((*(ulong *)(unaff_x20 + 0x10) >> 0x3d & 1) == 0) {
      FUN_103ca9980();
    }
    else {
      FUN_103ca9a04();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    uStack_48 = *(undefined1 *)(unaff_x20 + 0x20);
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = *(long *)(unaff_x20 + 0x18);
    func_0x000103cb873c();
    (*pcVar4)(&lStack_50,3,&UNK_1106fa028,lVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  uVar1 = *(ulong *)(unaff_x20 + 0x28) & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 0x28),uVar2,4,param_2,param_3),
     unaff_x21 == 0)) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                        param_2,param_3);
  }
  return;
}



/* Entry: 103ca9980; end: 103ca9a03;  */

void FUN_103ca9980(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[2];
  if ((uStack_50 >> 0x3d & 1) == 0) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103ccc518();
    (*pcVar1)(&uStack_60,1,&UNK_11070cff8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ca9a04);
  (*pcVar1)();
}



/* Entry: 103ca9a04; end: 103ca9a9f;  */

void FUN_103ca9a04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[2];
  if (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_50 & 0x2000000000000000) != 0) {
    uStack_50 = uStack_50 & 0xdfffffffffffffff;
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103ccc558();
    (*pcVar1)(&uStack_60,2,&UNK_11070cee0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ca9aa0);
  (*pcVar1)();
}



/* Entry: 103ca9aa0; end: 103ca9af3;  */

void FUN_103ca9aa0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  return;
}



/* Entry: 103ca9af4; end: 103ca9b23;  */

undefined1  [16] FUN_103ca9af4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 103ca9b24; end: 103ca9b57;  */

void FUN_103ca9b24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 103ca9b58; end: 103ca9b6b;  */

undefined1  [16] FUN_103ca9b58(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x103ca9b68;
  return auVar1;
}



/* Entry: 103ca9b6c; end: 103ca9b7f;  */

void FUN_103ca9b6c(void)

{
  FUN_103ca9470();
  return;
}



/* Entry: 103ca9b80; end: 103ca9bbf;  */

void FUN_103ca9b80(void)

{
  FUN_103ca9878();
  return;
}



/* Entry: 103ca9bc0; end: 103ca9bf7;  */

uint FUN_103ca9bc0(long param_1,long param_2)

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
  func_0x000103ccb110();
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



/* Entry: 103ca9bf8; end: 103ca9c4f;  */

uint FUN_103ca9bf8(undefined8 *param_1)

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
  FUN_103cb2fe4(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103ca9c50; end: 103ca9cef;  */

/* WARNING: Possible PIC construction at 0x000103ca9c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ca9cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ca9ca0) */
/* WARNING: Removing unreachable block (ram,0x000103ca9cb0) */

void FUN_103ca9c50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff3e0 != -1) {
    func_0x000107c61568(0x112fff3e0,FUN_103ca9428);
  }
  uVar5 = uRam000000011380e7d8;
  uVar4 = uRam000000011380e7d0;
  uVar3 = uRam000000011380e7c8;
  uVar2 = uRam000000011380e7c0;
  uVar1 = uRam000000011380e7b8;
  *param_1 = uRam000000011380e7b0;
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



/* Entry: 103ca9cf0; end: 103ca9d03;  */

void FUN_103ca9cf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000200;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000200,&UNK_10dc74ee0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ca9d04; end: 103ca9d37;  */

void FUN_103ca9d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103ca9d38; end: 103ca9e4b;  */

void FUN_103ca9d38(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103ca9e4c; end: 103ca9eeb;  */

uint FUN_103ca9e4c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cb2fe4(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103ca9eec; end: 103ca9f8b;  */

/* WARNING: Possible PIC construction at 0x000103ca9f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ca9f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ca9f3c) */
/* WARNING: Removing unreachable block (ram,0x000103ca9f4c) */

void FUN_103ca9eec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff3f8 != -1) {
    func_0x000107c61568(0x112fff3f8,0x103ca9ea4);
  }
  uVar5 = uRam000000011380e808;
  uVar4 = uRam000000011380e800;
  uVar3 = uRam000000011380e7f8;
  uVar2 = uRam000000011380e7f0;
  uVar1 = uRam000000011380e7e8;
  *param_1 = uRam000000011380e7e0;
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



/* Entry: 103ca9f8c; end: 103ca9fd3;  */

void FUN_103ca9f8c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc751d0,0x4e,2);
  uRam000000011380e818 = uStack_38;
  uRam000000011380e810 = uStack_40;
  uRam000000011380e828 = uStack_28;
  uRam000000011380e820 = uStack_30;
  uRam000000011380e838 = uStack_18;
  uRam000000011380e830 = uStack_20;
  return;
}



/* Entry: 103ca9fd4; end: 103caa0d7;  */

/* WARNING: Removing unreachable block (ram,0x000103caa0d4) */

void FUN_103ca9fd4(undefined8 param_1,long param_2,long param_3)

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
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_103cbb230();
          (*pcVar3)(unaff_x20 + 0x38,&UNK_1106f7ac8,lVar1,param_2,param_3);
        }
        else if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103caa03c;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 5) goto LAB_103caa04c;
          pcVar3 = *(code **)(param_3 + 0x60);
        }
LAB_103caa03c:
        (*pcVar3)();
      }
LAB_103caa04c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103caa0d8; end: 103caa1b7;  */

void FUN_103caa0d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_103caa1b8();
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,3,param_2,param_3);
    }
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,4,param_2,param_3);
    }
    if (unaff_x20[4] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[4],5,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 103caa1b8; end: 103caa253;  */

void FUN_103caa1b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_88 = *(long *)(param_1 + 0x50);
  if (lStack_88 != 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x48);
    uStack_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103cbb230();
    (*pcVar1)(&uStack_a0,1,&UNK_1106f7ac8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103caa254; end: 103caa2af;  */

void FUN_103caa254(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xc000000000000000;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 103caa2b0; end: 103caa2df;  */

undefined1  [16] FUN_103caa2b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 103caa2e0; end: 103caa313;  */

void FUN_103caa2e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 103caa314; end: 103caa327;  */

undefined1  [16] FUN_103caa314(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x103caa324;
  return auVar1;
}



/* Entry: 103caa328; end: 103caa33b;  */

void FUN_103caa328(void)

{
  FUN_103ca9fd4();
  return;
}



/* Entry: 103caa33c; end: 103caa393;  */

void FUN_103caa33c(void)

{
  FUN_103caa0d8();
  return;
}



/* Entry: 103caa394; end: 103caa3cb;  */

uint FUN_103caa394(long param_1,long param_2)

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
  func_0x000103ccb0d0();
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



/* Entry: 103caa3cc; end: 103caa45b;  */

uint FUN_103caa3cc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_103cb0f34(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103caa45c; end: 103caa4fb;  */

/* WARNING: Possible PIC construction at 0x000103caa4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103caa4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103caa4ac) */
/* WARNING: Removing unreachable block (ram,0x000103caa4bc) */

void FUN_103caa45c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff400 != -1) {
    func_0x000107c61568(0x112fff400,FUN_103ca9f8c);
  }
  uVar5 = uRam000000011380e838;
  uVar4 = uRam000000011380e830;
  uVar3 = uRam000000011380e828;
  uVar2 = uRam000000011380e820;
  uVar1 = uRam000000011380e818;
  *param_1 = uRam000000011380e810;
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



/* Entry: 103caa4fc; end: 103caa50f;  */

void FUN_103caa4fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130001f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130001f0,&UNK_10dc74ed8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103caa510; end: 103caa543;  */

void FUN_103caa510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103caa544; end: 103caa68f;  */

void FUN_103caa544(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
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
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103caa690; end: 103caa71f;  */

uint FUN_103caa690(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_103cb0f34(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103caa720; end: 103caa767;  */

void FUN_103caa720(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc751a0,0x2d,2);
  uRam000000011380e848 = uStack_38;
  uRam000000011380e840 = uStack_40;
  uRam000000011380e858 = uStack_28;
  uRam000000011380e850 = uStack_30;
  uRam000000011380e868 = uStack_18;
  uRam000000011380e860 = uStack_20;
  return;
}



/* Entry: 103caa768; end: 103caa88b;  */

/* WARNING: Removing unreachable block (ram,0x000103caa86c) */

void FUN_103caa768(undefined8 param_1,long param_2,long param_3)

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
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103ccc490();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_110708400;
LAB_103caa7f0:
          (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x150);
LAB_103caa85c:
          (*pcVar4)();
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_103cbe750();
          lVar2 = unaff_x20 + 0x70;
          puVar3 = &UNK_1106fa0a0;
          goto LAB_103caa7f0;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_103caa85c;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103caa88c; end: 103caa963;  */

void FUN_103caa88c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_103caa964();
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3);
    }
    FUN_103caa9f0();
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,4,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103caa964; end: 103caa9ef;  */

void FUN_103caa964(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_78 = *(long *)(param_1 + 0x38);
  if (lStack_78 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103ccc490();
    (*pcVar1)(&uStack_80,1,&UNK_110708400,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103caa9f0; end: 103caaad3;  */

void FUN_103caa9f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  uStack_d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_d0 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = &uStack_e0;
  func_0x000100d6b3c0();
  if ((int)puVar1 != 1) {
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_f0 = uStack_50;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103cbe750();
    (*pcVar2)(&uStack_180,3,&UNK_1106fa0a0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103caaad4; end: 103caab5f;  */

void FUN_103caaad4(undefined8 *param_1)

{
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
  
  func_0x000100d6b3f0(&uStack_b8);
  param_1[0x1d] = uStack_40;
  param_1[0x1c] = uStack_48;
  param_1[0x1f] = uStack_30;
  param_1[0x1e] = uStack_38;
  param_1[0x15] = uStack_80;
  param_1[0x14] = uStack_88;
  param_1[0x17] = uStack_70;
  param_1[0x16] = uStack_78;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x19] = uStack_60;
  param_1[0x18] = uStack_68;
  param_1[0x1b] = uStack_50;
  param_1[0x1a] = uStack_58;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = uStack_b0;
  param_1[0xe] = uStack_b8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[0x20] = uStack_28;
  param_1[0x11] = uStack_a0;
  param_1[0x10] = uStack_a8;
  param_1[0x13] = uStack_90;
  param_1[0x12] = uStack_98;
  return;
}



/* Entry: 103caab60; end: 103caab83;  */

undefined1  [16] FUN_103caab60(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b3890;
  auVar1._0_8_ = 0xd000000000000028;
  return auVar1;
}



/* Entry: 103caab84; end: 103caabb3;  */

undefined1  [16] FUN_103caab84(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103caabb4; end: 103caabe7;  */

void FUN_103caabb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103caabe8; end: 103caabfb;  */

undefined1  [16] FUN_103caabe8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103caabf8;
  return auVar1;
}



/* Entry: 103caabfc; end: 103caac0f;  */

void FUN_103caabfc(void)

{
  FUN_103caa768();
  return;
}



/* Entry: 103caac10; end: 103caac77;  */

void FUN_103caac10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_148 [264];
  
  func_0x000107c610b4(auStack_148);
  FUN_103caa88c(param_1,param_2,param_3);
  return;
}



/* Entry: 103caac78; end: 103caacaf;  */

uint FUN_103caac78(long param_1,long param_2)

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
  func_0x000103ccb090();
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



/* Entry: 103caacb0; end: 103caacff;  */

uint FUN_103caacb0(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_128,param_1,0x108);
  func_0x000107c610b4(auStack_230);
  FUN_103cb2a80(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 103caad00; end: 103caad9f;  */

/* WARNING: Possible PIC construction at 0x000103caad4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103caad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103caad50) */
/* WARNING: Removing unreachable block (ram,0x000103caad60) */

void FUN_103caad00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff410 != -1) {
    func_0x000107c61568(0x112fff410,FUN_103caa720);
  }
  uVar5 = uRam000000011380e868;
  uVar4 = uRam000000011380e860;
  uVar3 = uRam000000011380e858;
  uVar2 = uRam000000011380e850;
  uVar1 = uRam000000011380e848;
  *param_1 = uRam000000011380e840;
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



/* Entry: 103caada0; end: 103caadb3;  */

void FUN_103caada0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130001e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130001e0,&UNK_10dc74ed0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103caadb4; end: 103caade7;  */

void FUN_103caadb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103caade8; end: 103caaef3;  */

void FUN_103caade8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_180 [72];
  undefined1 auStack_138 [264];
  
  func_0x000107c610b4(auStack_138);
  func_0x000107c6068c(auStack_180,0);
  func_0x000107c5fa50(auStack_180,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103caaef4; end: 103caaf47;  */

uint FUN_103caaef4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_230,param_1,0x108);
  func_0x000107c610b4(auStack_128,param_2,0x108);
  FUN_103cb2a80(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 103caaf48; end: 103caaf8f;  */

void FUN_103caaf48(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75193,9,2);
  uRam000000011380e878 = uStack_38;
  uRam000000011380e870 = uStack_40;
  uRam000000011380e888 = uStack_28;
  uRam000000011380e880 = uStack_30;
  uRam000000011380e898 = uStack_18;
  uRam000000011380e890 = uStack_20;
  return;
}



/* Entry: 103caaf90; end: 103cab03f;  */

void FUN_103caaf90(undefined8 param_1,long param_2,long param_3,code *param_4)

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



/* Entry: 103cab040; end: 103cab0eb;  */

void FUN_103cab040(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,code *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  long lStack_70;
  undefined1 uStack_68;
  
  if (param_2 != 0) {
    pcVar2 = *(code **)(param_7 + 0x80);
    uVar1 = param_1;
    lStack_70 = param_2;
    uStack_68 = param_3;
    (*param_8)();
    (*pcVar2)(&lStack_70,param_9,param_10,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 103cab0ec; end: 103cab123;  */

undefined1  [16] FUN_103cab0ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b38c0;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 103cab124; end: 103cab18f;  */

void FUN_103cab124(void)

{
  FUN_103caaf90();
  return;
}



/* Entry: 103cab190; end: 103cab1c7;  */

uint FUN_103cab190(long param_1,long param_2)

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
  FUN_103ccb050();
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


