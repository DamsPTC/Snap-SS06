/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cd9b60; end: 103cd9c97;  */

/* WARNING: Removing unreachable block (ram,0x000103cd9c94) */

void FUN_103cd9b60(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x150))();
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103cdf884();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1106fab30;
          goto LAB_103cd9be8;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103cdf8c4();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1106fabc0;
        }
        else {
          if (lVar1 != 4) goto LAB_103cd9bfc;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103cdf904();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_1106fac50;
        }
LAB_103cd9be8:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103cd9bfc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103cd9c98; end: 103cd9df3;  */

void FUN_103cd9c98(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar6;
  ulong uStack_50;
  undefined1 uStack_48;
  
  puVar4 = &uStack_50;
  puVar5 = &uStack_50;
  puVar3 = (undefined1 *)*unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = (ulong)puVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(puVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000103cdf884();
      (*pcVar6)(&uStack_50,2,&UNK_1106fab30,puVar3,param_2,param_3);
      puVar3 = (undefined1 *)puVar4;
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (unaff_x20[4] != 0) {
      uStack_48 = (undefined1)unaff_x20[5];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[4];
      func_0x000103cdf8c4();
      (*pcVar6)(&uStack_50,3,&UNK_1106fabc0,puVar3,param_2,param_3);
      puVar3 = (undefined1 *)puVar5;
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (unaff_x20[6] != 0) {
      uStack_48 = (undefined1)unaff_x20[7];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[6];
      func_0x000103cdf904();
      (*pcVar6)(&uStack_50,4,&UNK_1106fac50,puVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  }
  return;
}



/* Entry: 103cd9df4; end: 103cd9e4b;  */

void FUN_103cd9df4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  return;
}



/* Entry: 103cd9e4c; end: 103cd9e7b;  */

undefined1  [16] FUN_103cd9e4c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 103cd9e7c; end: 103cd9eaf;  */

void FUN_103cd9e7c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 103cd9eb0; end: 103cd9ec3;  */

undefined1  [16] FUN_103cd9eb0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x103cd9ec0;
  return auVar1;
}



/* Entry: 103cd9ec4; end: 103cd9eeb;  */

void FUN_103cd9ec4(void)

{
  FUN_103cd9b60();
  return;
}



/* Entry: 103cd9eec; end: 103cd9eef;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cd9eec(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103cd9ef0; end: 103cd9f27;  */

uint FUN_103cd9ef0(long param_1,long param_2)

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
  func_0x000103ce42c8();
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



/* Entry: 103cd9f28; end: 103cd9f7f;  */

uint FUN_103cd9f28(undefined8 *param_1)

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
  FUN_103cdf944(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103cd9f80; end: 103cda01f;  */

/* WARNING: Possible PIC construction at 0x000103cd9fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cd9fdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cd9fd0) */
/* WARNING: Removing unreachable block (ram,0x000103cd9fe0) */

void FUN_103cd9f80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000f80 != -1) {
    func_0x000107c61568(0x113000f80,FUN_103cd9b18);
  }
  uVar5 = uRam000000011380e988;
  uVar4 = uRam000000011380e980;
  uVar3 = uRam000000011380e978;
  uVar2 = uRam000000011380e970;
  uVar1 = uRam000000011380e968;
  *param_1 = uRam000000011380e960;
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



/* Entry: 103cda020; end: 103cda05b;  */

void FUN_103cda020(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001200;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001200,&UNK_10dc77cc8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cda05c; end: 103cda16f;  */

void FUN_103cda05c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103cda170; end: 103cda20f;  */

uint FUN_103cda170(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cdf944(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103cda210; end: 103cda2af;  */

/* WARNING: Possible PIC construction at 0x000103cda25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cda26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cda260) */
/* WARNING: Removing unreachable block (ram,0x000103cda270) */

void FUN_103cda210(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000fa8 != -1) {
    func_0x000107c61568(0x113000fa8,0x103cda1c8);
  }
  uVar5 = uRam000000011380e9b8;
  uVar4 = uRam000000011380e9b0;
  uVar3 = uRam000000011380e9a8;
  uVar2 = uRam000000011380e9a0;
  uVar1 = uRam000000011380e998;
  *param_1 = uRam000000011380e990;
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



/* Entry: 103cda2b0; end: 103cda2f7;  */

void FUN_103cda2b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc77f90,0x46,2);
  uRam000000011380e9c8 = uStack_38;
  uRam000000011380e9c0 = uStack_40;
  uRam000000011380e9d8 = uStack_28;
  uRam000000011380e9d0 = uStack_30;
  uRam000000011380e9e8 = uStack_18;
  uRam000000011380e9e0 = uStack_20;
  return;
}



/* Entry: 103cda2f8; end: 103cda397;  */

/* WARNING: Possible PIC construction at 0x000103cda344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cda354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cda348) */
/* WARNING: Removing unreachable block (ram,0x000103cda358) */

void FUN_103cda2f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000fb0 != -1) {
    func_0x000107c61568(0x113000fb0,FUN_103cda2b0);
  }
  uVar5 = uRam000000011380e9e8;
  uVar4 = uRam000000011380e9e0;
  uVar3 = uRam000000011380e9d8;
  uVar2 = uRam000000011380e9d0;
  uVar1 = uRam000000011380e9c8;
  *param_1 = uRam000000011380e9c0;
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



/* Entry: 103cda398; end: 103cda3df;  */

void FUN_103cda398(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc77e20,0x169,2);
  uRam000000011380e9f8 = uStack_38;
  uRam000000011380e9f0 = uStack_40;
  uRam000000011380ea08 = uStack_28;
  uRam000000011380ea00 = uStack_30;
  uRam000000011380ea18 = uStack_18;
  uRam000000011380ea10 = uStack_20;
  return;
}



/* Entry: 103cda3e0; end: 103cda47f;  */

/* WARNING: Possible PIC construction at 0x000103cda42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cda43c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cda430) */
/* WARNING: Removing unreachable block (ram,0x000103cda440) */

void FUN_103cda3e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000fb8 != -1) {
    func_0x000107c61568(0x113000fb8,FUN_103cda398);
  }
  uVar5 = uRam000000011380ea18;
  uVar4 = uRam000000011380ea10;
  uVar3 = uRam000000011380ea08;
  uVar2 = uRam000000011380ea00;
  uVar1 = uRam000000011380e9f8;
  *param_1 = uRam000000011380e9f0;
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



/* Entry: 103cda480; end: 103cda4c7;  */

void FUN_103cda480(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc77e00,0x1a,2);
  uRam000000011380ea28 = uStack_38;
  uRam000000011380ea20 = uStack_40;
  uRam000000011380ea38 = uStack_28;
  uRam000000011380ea30 = uStack_30;
  uRam000000011380ea48 = uStack_18;
  uRam000000011380ea40 = uStack_20;
  return;
}



/* Entry: 103cda4c8; end: 103cda55f;  */

void FUN_103cda4c8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103cda51c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000103cda538;
  pcVar3 = *(code **)(param_3 + 0x168);
  goto LAB_103cda504;
code_r0x000103cda538:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x168);
LAB_103cda504:
    (*pcVar3)();
  }
  goto LAB_103cda51c;
}



/* Entry: 103cda560; end: 103cda653;  */

void FUN_103cda560(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_103cda5d8;
    }
    else {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
LAB_103cda5b8:
      if (lVar5 == lVar6) goto LAB_103cda5d8;
    }
    (**(code **)(param_3 + 0x78))(lVar1,uVar2,1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
    goto LAB_103cda5b8;
  }
LAB_103cda5d8:
  lVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_103cda610;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_103cda630;
  }
  else {
    if (uVar4 != 2) goto LAB_103cda630;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_103cda610:
    if (lVar5 == lVar6) goto LAB_103cda630;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,2,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_103cda630:
  func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  return;
}



/* Entry: 103cda654; end: 103cda68b;  */

void FUN_103cda654(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 103cda68c; end: 103cda6bb;  */

undefined1  [16] FUN_103cda68c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103cda6bc; end: 103cda6ef;  */

void FUN_103cda6bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103cda6f0; end: 103cda703;  */

undefined1  [16] FUN_103cda6f0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103cda700;
  return auVar1;
}



/* Entry: 103cda704; end: 103cda72b;  */

void FUN_103cda704(void)

{
  FUN_103cda4c8();
  return;
}



/* Entry: 103cda72c; end: 103cda72f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cda72c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103cda730; end: 103cda767;  */

uint FUN_103cda730(long param_1,long param_2)

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
  func_0x000103ce4288();
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



/* Entry: 103cda768; end: 103cda807;  */

/* WARNING: Possible PIC construction at 0x000103cda79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cda7a0) */
/* WARNING: Removing unreachable block (ram,0x000103cda7a4) */
/* WARNING: Removing unreachable block (ram,0x000103cda7e8) */
/* WARNING: Removing unreachable block (ram,0x000103cda7bc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cda768(long *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 uVar24;
  ulong uVar25;
  byte *pbVar26;
  long lVar27;
  byte *pbVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
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
  byte bVar46;
  undefined1 auVar47 [16];
  
  puVar29 = &stack0xfffffffffffffff0;
  lVar23 = *param_1;
  uVar16 = param_1[1];
  pbVar14 = (byte *)param_1[2];
  pbVar12 = (byte *)param_1[3];
  pbVar22 = (byte *)param_1[4];
  pbVar11 = (byte *)*unaff_x20;
  pbVar26 = (byte *)unaff_x20[1];
  pbVar28 = (byte *)unaff_x20[2];
  uVar1 = unaff_x20[3];
  uVar24 = unaff_x20[4];
  uVar25 = unaff_x20[5];
  uVar30 = 0x103cda7a0;
  puVar8 = &stack0xffffffffffffffa0;
  do {
    *(undefined8 *)(puVar8 + -0x50) = uVar1;
    *(byte **)(puVar8 + -0x48) = pbVar28;
    *(byte **)(puVar8 + -0x40) = pbVar12;
    *(byte **)(puVar8 + -0x38) = pbVar14;
    *(ulong *)(puVar8 + -0x30) = uVar25;
    *(undefined8 *)(puVar8 + -0x28) = uVar24;
    *(undefined8 **)(puVar8 + -0x20) = unaff_x20;
    *(byte **)(puVar8 + -0x18) = pbVar22;
    *(undefined1 **)(puVar8 + -0x10) = puVar29;
    *(undefined8 *)(puVar8 + -8) = uVar30;
    *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar26 >> 0x20);
    uVar17 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar6 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar13 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar18,iVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar19 = (ulong)(iVar18 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            puVar8[-0x70] = (char)pbVar11;
            puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar8[-0x68] = (char)pbVar26;
            puVar8[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar8[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar8[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar8[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar8[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar13 = puVar8 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            uVar24 = 0;
            func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
            goto code_r0x000100e262b0;
          }
          pbVar28 = (byte *)(long)iVar9;
          pbVar14 = (byte *)(((long)pbVar11 >> 0x20) - (long)pbVar28);
          if ((long)pbVar11 >> 0x20 < (long)pbVar28) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          pbVar12 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)pbVar28,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + ((long)pbVar28 - (long)pbVar13);
            func_0x000107c5ec38();
            pbVar22 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)pbVar14 <= (long)pbVar13) {
                pbVar13 = pbVar14;
              }
              pbVar13 = pbVar13 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)(puVar8 + -0x6a) = 0;
            *(undefined8 *)(puVar8 + -0x70) = 0;
            pbVar13 = puVar8 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          pbVar12 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar13);
          }
          pbVar14 = pbVar12 + -lVar27;
          if (SBORROW8((long)pbVar12,lVar27)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          pbVar22 = pbVar11;
          pbVar28 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)pbVar14 <= (long)pbVar13) {
              pbVar13 = pbVar14;
            }
            pbVar13 = pbVar13 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar26 & 0x3fffffffffffffff);
        uVar24 = 0;
        func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar13,lVar23,uVar16);
        pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
        uVar25 = uVar16;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar19 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar8 + -0xc0) = pbVar12;
    *(byte **)(puVar8 + -0xb8) = pbVar14;
    *(ulong *)(puVar8 + -0xb0) = uVar25;
    *(undefined8 *)(puVar8 + -0xa8) = uVar24;
    *(undefined8 **)(puVar8 + -0xa0) = unaff_x20;
    *(byte **)(puVar8 + -0x98) = pbVar22;
    *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
    *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar22 = *(byte **)(pbVar10 + 0x18);
    bVar31 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar14 = pbVar11;
    if (bVar31 < 3) {
      if (bVar31 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar24 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar23,uVar24);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar31 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar28 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar24 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar23,uVar24);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar11;
        pbVar14 = pbVar26;
        if ((pbVar11 == pbVar15) && (pbVar26 == pbVar28)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar28 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar11 == pbVar28)) {
          if (((pbVar10[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar23);
          func_0x000107c61174();
          pbVar11 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar23);
          pbVar22 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar22 & 1) == 0) {
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
      )(pbVar12,pbVar14,pbVar15,pbVar28,0);
      return pbVar12;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar31 < 5) {
      if (bVar31 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar28 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar11 == pbVar28)) &&
           (pbVar12 = pbVar26, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar28 = *(byte **)(pbVar13 + 0x18),
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
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
      pbVar28 = *(byte **)(pbVar13 + 0x10);
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar28 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar28 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar11;
        pbVar14 = pbVar26;
        if ((pbVar11 != pbVar15) || (pbVar26 != pbVar28)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar27,*(byte **)(pbVar13 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar31 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar31 = pbVar13[8] | (byte)lVar23;
        bVar32 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar33 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar34 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar35 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar36 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar37 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar38 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar39 = pbVar13[0x10] | (byte)lVar27;
        bVar40 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar41 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar42 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar43 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar44 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar45 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar46 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar47[1] = bVar32;
        auVar47[0] = bVar31;
        auVar47[2] = bVar33;
        auVar47[3] = bVar34;
        auVar47[4] = bVar35;
        auVar47[5] = bVar36;
        auVar47[6] = bVar37;
        auVar47[7] = bVar38;
        auVar47[8] = bVar39;
        auVar47[9] = bVar40;
        auVar47[10] = bVar41;
        auVar47[0xb] = bVar42;
        auVar47[0xc] = bVar43;
        auVar47[0xd] = bVar44;
        auVar47[0xe] = bVar45;
        auVar47[0xf] = bVar46;
        auVar4[1] = bVar32;
        auVar4[0] = bVar31;
        auVar4[2] = bVar33;
        auVar4[3] = bVar34;
        auVar4[4] = bVar35;
        auVar4[5] = bVar36;
        auVar4[6] = bVar37;
        auVar4[7] = bVar38;
        auVar4[8] = bVar39;
        auVar4[9] = bVar40;
        auVar4[10] = bVar41;
        auVar4[0xb] = bVar42;
        auVar4[0xc] = bVar43;
        auVar4[0xd] = bVar44;
        auVar4[0xe] = bVar45;
        auVar4[0xf] = bVar46;
        auVar47 = NEON_ext(auVar47,auVar4,8,1);
        if (CONCAT17(bVar38 | auVar47[7],
                     CONCAT16(bVar37 | auVar47[6],
                              CONCAT15(bVar36 | auVar47[5],
                                       CONCAT14(bVar35 | auVar47[4],
                                                CONCAT13(bVar34 | auVar47[3],
                                                         CONCAT12(bVar33 | auVar47[2],
                                                                  CONCAT11(bVar32 | auVar47[1],
                                                                           bVar31 | auVar47[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar31 = pbVar13[8] | (byte)lVar23;
      bVar32 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar33 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar34 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar35 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar36 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar37 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar38 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar39 = pbVar13[0x10] | (byte)lVar27;
      bVar40 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar41 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar42 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar43 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar44 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar45 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar46 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar2[1] = bVar32;
      auVar2[0] = bVar31;
      auVar2[2] = bVar33;
      auVar2[3] = bVar34;
      auVar2[4] = bVar35;
      auVar2[5] = bVar36;
      auVar2[6] = bVar37;
      auVar2[7] = bVar38;
      auVar2[8] = bVar39;
      auVar2[9] = bVar40;
      auVar2[10] = bVar41;
      auVar2[0xb] = bVar42;
      auVar2[0xc] = bVar43;
      auVar2[0xd] = bVar44;
      auVar2[0xe] = bVar45;
      auVar2[0xf] = bVar46;
      auVar3[1] = bVar32;
      auVar3[0] = bVar31;
      auVar3[2] = bVar33;
      auVar3[3] = bVar34;
      auVar3[4] = bVar35;
      auVar3[5] = bVar36;
      auVar3[6] = bVar37;
      auVar3[7] = bVar38;
      auVar3[8] = bVar39;
      auVar3[9] = bVar40;
      auVar3[10] = bVar41;
      auVar3[0xb] = bVar42;
      auVar3[0xc] = bVar43;
      auVar3[0xd] = bVar44;
      auVar3[0xe] = bVar45;
      auVar3[0xf] = bVar46;
      auVar47 = NEON_ext(auVar2,auVar3,8,1);
      lVar23 = CONCAT17(bVar38 | auVar47[7],
                        CONCAT16(bVar37 | auVar47[6],
                                 CONCAT15(bVar36 | auVar47[5],
                                          CONCAT14(bVar35 | auVar47[4],
                                                   CONCAT13(bVar34 | auVar47[3],
                                                            CONCAT12(bVar33 | auVar47[2],
                                                                     CONCAT11(bVar32 | auVar47[1],
                                                                              bVar31 | auVar47[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar27 = *(long *)pbVar13;
    uVar24 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar27,uVar24);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar29 = *(undefined1 **)(puVar8 + -0x90);
    uVar30 = *(undefined8 *)(puVar8 + -0x88);
    unaff_x20 = *(undefined8 **)(puVar8 + -0xa0);
    pbVar22 = *(byte **)(puVar8 + -0x98);
    uVar25 = *(ulong *)(puVar8 + -0xb0);
    uVar24 = *(undefined8 *)(puVar8 + -0xa8);
    pbVar12 = *(byte **)(puVar8 + -0xc0);
    pbVar14 = *(byte **)(puVar8 + -0xb8);
    puVar8 = puVar8 + -0x80;
  } while( true );
}



/* Entry: 103cda808; end: 103cda8a7;  */

/* WARNING: Possible PIC construction at 0x000103cda854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cda864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cda858) */
/* WARNING: Removing unreachable block (ram,0x000103cda868) */

void FUN_103cda808(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000fc0 != -1) {
    func_0x000107c61568(0x113000fc0,FUN_103cda480);
  }
  uVar5 = uRam000000011380ea48;
  uVar4 = uRam000000011380ea40;
  uVar3 = uRam000000011380ea38;
  uVar2 = uRam000000011380ea30;
  uVar1 = uRam000000011380ea28;
  *param_1 = uRam000000011380ea20;
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



/* Entry: 103cda8a8; end: 103cda8e3;  */

void FUN_103cda8a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130011f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130011f0,&UNK_10dc77cc0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cda8e4; end: 103cda9e7;  */

void FUN_103cda8e4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103cda9e8; end: 103cdaa83;  */

/* WARNING: Possible PIC construction at 0x000103cdaa20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cdaa24) */
/* WARNING: Removing unreachable block (ram,0x000103cdaa28) */
/* WARNING: Removing unreachable block (ram,0x000103cdaa68) */
/* WARNING: Removing unreachable block (ram,0x000103cdaa40) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cda9e8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
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
  byte bVar46;
  undefined1 auVar47 [16];
  
  puVar29 = &stack0xfffffffffffffff0;
  pbVar11 = (byte *)*param_1;
  pbVar27 = (byte *)param_1[1];
  pbVar14 = (byte *)param_1[2];
  pbVar12 = (byte *)param_1[3];
  pbVar22 = (byte *)param_1[4];
  uVar23 = param_1[5];
  lVar24 = *param_2;
  uVar16 = param_2[1];
  pbVar28 = (byte *)param_2[2];
  lVar1 = param_2[3];
  lVar25 = param_2[4];
  uVar26 = param_2[5];
  uVar30 = 0x103cdaa24;
  puVar8 = &stack0xffffffffffffffb0;
  do {
    *(long *)(puVar8 + -0x50) = lVar1;
    *(byte **)(puVar8 + -0x48) = pbVar28;
    *(byte **)(puVar8 + -0x40) = pbVar12;
    *(byte **)(puVar8 + -0x38) = pbVar14;
    *(ulong *)(puVar8 + -0x30) = uVar26;
    *(long *)(puVar8 + -0x28) = lVar25;
    *(ulong *)(puVar8 + -0x20) = uVar23;
    *(byte **)(puVar8 + -0x18) = pbVar22;
    *(undefined1 **)(puVar8 + -0x10) = puVar29;
    *(undefined8 *)(puVar8 + -8) = uVar30;
    *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar27 >> 0x20);
    uVar17 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar6 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar13 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar19 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar18,iVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar19 = (ulong)(iVar18 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            puVar8[-0x70] = (char)pbVar11;
            puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar8[-0x68] = (char)pbVar27;
            puVar8[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar8[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar8[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar8[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar8[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar13 = puVar8 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            lVar25 = 0;
            func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
            goto code_r0x000100e262b0;
          }
          pbVar28 = (byte *)(long)iVar9;
          pbVar14 = (byte *)(((long)pbVar11 >> 0x20) - (long)pbVar28);
          if ((long)pbVar11 >> 0x20 < (long)pbVar28) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          pbVar12 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)pbVar28,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + ((long)pbVar28 - (long)pbVar13);
            func_0x000107c5ec38();
            pbVar22 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)pbVar14 <= (long)pbVar13) {
                pbVar13 = pbVar14;
              }
              pbVar13 = pbVar13 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)(puVar8 + -0x6a) = 0;
            *(undefined8 *)(puVar8 + -0x70) = 0;
            pbVar13 = puVar8 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar11 + 0x10);
          pbVar12 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + (lVar25 - (long)pbVar13);
          }
          pbVar14 = pbVar12 + -lVar25;
          if (SBORROW8((long)pbVar12,lVar25)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          pbVar22 = pbVar11;
          pbVar28 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)pbVar14 <= (long)pbVar13) {
              pbVar13 = pbVar14;
            }
            pbVar13 = pbVar13 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        uVar23 = (ulong)pbVar27 & 0x3fffffffffffffff;
        lVar25 = 0;
        func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar13,lVar24,uVar16);
        pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
        uVar26 = uVar16;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar19 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar8 + -0xc0) = pbVar12;
    *(byte **)(puVar8 + -0xb8) = pbVar14;
    *(ulong *)(puVar8 + -0xb0) = uVar26;
    *(long *)(puVar8 + -0xa8) = lVar25;
    *(ulong *)(puVar8 + -0xa0) = uVar23;
    *(byte **)(puVar8 + -0x98) = pbVar22;
    *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
    *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar22 = *(byte **)(pbVar10 + 0x18);
    bVar31 = pbVar10[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar14 = pbVar11;
    if (bVar31 < 3) {
      if (bVar31 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar30 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar30);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar31 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar28 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar30 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar30);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar11;
        pbVar14 = pbVar27;
        if ((pbVar11 == pbVar15) && (pbVar27 == pbVar28)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar28 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar11 == pbVar28)) {
          if (((pbVar10[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar11 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar24);
          pbVar22 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar22 & 1) == 0) {
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
      )(pbVar12,pbVar14,pbVar15,pbVar28,0);
      return pbVar12;
    }
    lVar25 = *(long *)(pbVar10 + 0x20);
    if (bVar31 < 5) {
      if (bVar31 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar28 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar11 == pbVar28)) &&
           (pbVar12 = pbVar27, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar28 = *(byte **)(pbVar13 + 0x18),
           pbVar27 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
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
      pbVar28 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar28 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar28 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar11;
        pbVar14 = pbVar27;
        if ((pbVar11 != pbVar15) || (pbVar27 != pbVar28)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar31 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar25 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar31 = pbVar13[8] | (byte)lVar24;
        bVar32 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar33 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar34 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar35 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar36 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar37 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar38 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar39 = pbVar13[0x10] | (byte)lVar25;
        bVar40 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar41 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar42 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar43 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar44 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar45 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar46 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar47[1] = bVar32;
        auVar47[0] = bVar31;
        auVar47[2] = bVar33;
        auVar47[3] = bVar34;
        auVar47[4] = bVar35;
        auVar47[5] = bVar36;
        auVar47[6] = bVar37;
        auVar47[7] = bVar38;
        auVar47[8] = bVar39;
        auVar47[9] = bVar40;
        auVar47[10] = bVar41;
        auVar47[0xb] = bVar42;
        auVar47[0xc] = bVar43;
        auVar47[0xd] = bVar44;
        auVar47[0xe] = bVar45;
        auVar47[0xf] = bVar46;
        auVar4[1] = bVar32;
        auVar4[0] = bVar31;
        auVar4[2] = bVar33;
        auVar4[3] = bVar34;
        auVar4[4] = bVar35;
        auVar4[5] = bVar36;
        auVar4[6] = bVar37;
        auVar4[7] = bVar38;
        auVar4[8] = bVar39;
        auVar4[9] = bVar40;
        auVar4[10] = bVar41;
        auVar4[0xb] = bVar42;
        auVar4[0xc] = bVar43;
        auVar4[0xd] = bVar44;
        auVar4[0xe] = bVar45;
        auVar4[0xf] = bVar46;
        auVar47 = NEON_ext(auVar47,auVar4,8,1);
        if (CONCAT17(bVar38 | auVar47[7],
                     CONCAT16(bVar37 | auVar47[6],
                              CONCAT15(bVar36 | auVar47[5],
                                       CONCAT14(bVar35 | auVar47[4],
                                                CONCAT13(bVar34 | auVar47[3],
                                                         CONCAT12(bVar33 | auVar47[2],
                                                                  CONCAT11(bVar32 | auVar47[1],
                                                                           bVar31 | auVar47[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar31 = pbVar13[8] | (byte)lVar24;
      bVar32 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar33 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar34 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar35 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar36 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar37 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar38 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar39 = pbVar13[0x10] | (byte)lVar25;
      bVar40 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar41 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar42 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar43 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar44 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar45 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar46 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar2[1] = bVar32;
      auVar2[0] = bVar31;
      auVar2[2] = bVar33;
      auVar2[3] = bVar34;
      auVar2[4] = bVar35;
      auVar2[5] = bVar36;
      auVar2[6] = bVar37;
      auVar2[7] = bVar38;
      auVar2[8] = bVar39;
      auVar2[9] = bVar40;
      auVar2[10] = bVar41;
      auVar2[0xb] = bVar42;
      auVar2[0xc] = bVar43;
      auVar2[0xd] = bVar44;
      auVar2[0xe] = bVar45;
      auVar2[0xf] = bVar46;
      auVar3[1] = bVar32;
      auVar3[0] = bVar31;
      auVar3[2] = bVar33;
      auVar3[3] = bVar34;
      auVar3[4] = bVar35;
      auVar3[5] = bVar36;
      auVar3[6] = bVar37;
      auVar3[7] = bVar38;
      auVar3[8] = bVar39;
      auVar3[9] = bVar40;
      auVar3[10] = bVar41;
      auVar3[0xb] = bVar42;
      auVar3[0xc] = bVar43;
      auVar3[0xd] = bVar44;
      auVar3[0xe] = bVar45;
      auVar3[0xf] = bVar46;
      auVar47 = NEON_ext(auVar2,auVar3,8,1);
      lVar24 = CONCAT17(bVar38 | auVar47[7],
                        CONCAT16(bVar37 | auVar47[6],
                                 CONCAT15(bVar36 | auVar47[5],
                                          CONCAT14(bVar35 | auVar47[4],
                                                   CONCAT13(bVar34 | auVar47[3],
                                                            CONCAT12(bVar33 | auVar47[2],
                                                                     CONCAT11(bVar32 | auVar47[1],
                                                                              bVar31 | auVar47[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar30 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar30);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar29 = *(undefined1 **)(puVar8 + -0x90);
    uVar30 = *(undefined8 *)(puVar8 + -0x88);
    uVar23 = *(ulong *)(puVar8 + -0xa0);
    pbVar22 = *(byte **)(puVar8 + -0x98);
    uVar26 = *(ulong *)(puVar8 + -0xb0);
    lVar25 = *(long *)(puVar8 + -0xa8);
    pbVar12 = *(byte **)(puVar8 + -0xc0);
    pbVar14 = *(byte **)(puVar8 + -0xb8);
    puVar8 = puVar8 + -0x80;
  } while( true );
}



/* Entry: 103cdaa84; end: 103cdaacb;  */

void FUN_103cdaa84(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc77d70,0x8b,2);
  uRam000000011380ea58 = uStack_38;
  uRam000000011380ea50 = uStack_40;
  uRam000000011380ea68 = uStack_28;
  uRam000000011380ea60 = uStack_30;
  uRam000000011380ea78 = uStack_18;
  uRam000000011380ea70 = uStack_20;
  return;
}



/* Entry: 103cdaacc; end: 103cdacb7;  */

/* WARNING: Removing unreachable block (ram,0x000103cdacb4) */
/* WARNING: Removing unreachable block (ram,0x000103cdac2c) */

void FUN_103cdaacc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x60);
        goto code_r0x000103cdaca4;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cdfb00();
        lVar2 = unaff_x20 + 8;
        puVar3 = &UNK_1106fa8f8;
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000103cdfb40();
        lVar2 = unaff_x20 + 0x18;
        puVar3 = &UNK_1106ff058;
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cdfc00();
        lVar2 = unaff_x20 + 0x20;
        puVar3 = &UNK_110700950;
        break;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_103ce44b0();
        lVar2 = unaff_x20 + 0x90;
        puVar3 = &UNK_1106ffde8;
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000103cdfb80();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_1106ffe70;
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cdfbc0();
        lVar2 = unaff_x20 + 0x38;
        puVar3 = &UNK_1106fef40;
        break;
      case 8:
        (**(code **)(param_3 + 0x1b8))
                  (unaff_x20 + 0x48,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,
                   &PTR_DAT_110787dc8,param_2,param_3);
        goto LAB_103cdab6c;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x150);
        goto code_r0x000103cdaca4;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x150);
        goto code_r0x000103cdaca4;
      case 0xb:
        pcVar4 = *(code **)(param_3 + 0x150);
code_r0x000103cdaca4:
        (*pcVar4)();
      default:
        goto LAB_103cdab6c;
      }
      (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
LAB_103cdab6c:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103cdacb8; end: 103cdaf9f;  */

void FUN_103cdacb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  long lStack_60;
  undefined1 uStack_58;
  
  plVar5 = &lStack_60;
  puVar4 = (undefined1 *)*unaff_x20;
  if ((puVar4 == (undefined1 *)0x0) ||
     ((**(code **)(param_3 + 0x20))(puVar4,1,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[1] != 0) {
      uStack_58 = *(undefined1 *)(unaff_x20 + 2);
      pcVar10 = *(code **)(param_3 + 0x80);
      lStack_60 = unaff_x20[1];
      func_0x000103cdfb00();
      (*pcVar10)(&lStack_60,2,&UNK_1106fa8f8,puVar4,param_2,param_3);
      puVar4 = (undefined1 *)plVar5;
      if (unaff_x21 != 0) {
        return;
      }
    }
    lVar8 = unaff_x20[3];
    if (*(long *)(lVar8 + 0x10) != 0) {
      pcVar10 = *(code **)(param_3 + 0x118);
      func_0x000103cdfb40();
      (*pcVar10)(lVar8,3,&UNK_1106ff058,puVar4,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    lVar11 = unaff_x20[4];
    uVar3 = *(undefined1 *)(unaff_x20 + 5);
    lVar8 = lVar11;
    func_0x000103d1d830(lVar11,uVar3);
    lVar6 = 0;
    func_0x000103d1d830(0,1);
    if (lVar8 != lVar6) {
      pcVar10 = *(code **)(param_3 + 0x80);
      lStack_60 = lVar11;
      uStack_58 = uVar3;
      func_0x000103cdfc00();
      (*pcVar10)(&lStack_60,4,&UNK_110700950,lVar6,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    puVar7 = unaff_x20;
    FUN_103cdafa0();
    if (unaff_x21 == 0) {
      puVar9 = (undefined8 *)unaff_x20[6];
      if (puVar9[2] != 0) {
        pcVar10 = *(code **)(param_3 + 0x118);
        func_0x000103cdfb80();
        (*pcVar10)(puVar9,6,&UNK_1106ffe70,puVar7,param_2,param_3);
        puVar7 = puVar9;
      }
      if (unaff_x20[7] != 0) {
        uStack_58 = *(undefined1 *)(unaff_x20 + 8);
        pcVar10 = *(code **)(param_3 + 0x80);
        lStack_60 = unaff_x20[7];
        func_0x000103cdfbc0();
        (*pcVar10)(&lStack_60,7,&UNK_1106fef40,puVar7,param_2,param_3);
      }
      if (*(long *)(unaff_x20[9] + 0x10) != 0) {
        (**(code **)(param_3 + 0x198))
                  (unaff_x20[9],8,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,
                   &PTR_DAT_110787dc8,param_2,param_3);
      }
      uVar2 = unaff_x20[0xb];
      uVar1 = unaff_x20[10] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[10],uVar2,9,param_2,param_3);
      }
      uVar2 = unaff_x20[0xd];
      uVar1 = unaff_x20[0xc] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[0xc],uVar2,10,param_2,param_3);
      }
      uVar2 = unaff_x20[0xf];
      uVar1 = unaff_x20[0xe] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[0xe],uVar2,0xb,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[0x10],unaff_x20[0x11],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103cdafa0; end: 103cdb03b;  */

void FUN_103cdafa0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = *(ulong *)(param_1 + 0xa8);
  if (uStack_88 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x98);
    uStack_a0 = *(undefined8 *)(param_1 + 0x90);
    uStack_90 = *(undefined8 *)(param_1 + 0xa0);
    uStack_78 = *(undefined8 *)(param_1 + 0xb8);
    uStack_80 = *(undefined8 *)(param_1 + 0xb0);
    uStack_68 = *(undefined8 *)(param_1 + 200);
    uStack_70 = *(undefined8 *)(param_1 + 0xc0);
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_60 = *(undefined8 *)(param_1 + 0xd0);
    uStack_48 = *(undefined8 *)(param_1 + 0xe8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103ce44b0();
    (*pcVar1)(&uStack_a0,5,&UNK_1106ffde8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103cdb03c; end: 103cdb0a7;  */

void FUN_103cdb03c(undefined8 *param_1)

{
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000103cdeed0(&uStack_110);
  param_1[0x19] = uStack_48;
  param_1[0x18] = uStack_50;
  param_1[0x1b] = uStack_38;
  param_1[0x1a] = uStack_40;
  param_1[0x1d] = uStack_28;
  param_1[0x1c] = uStack_30;
  param_1[0x11] = uStack_88;
  param_1[0x10] = uStack_90;
  param_1[0x13] = uStack_78;
  param_1[0x12] = uStack_80;
  param_1[0x15] = uStack_68;
  param_1[0x14] = uStack_70;
  param_1[0x17] = uStack_58;
  param_1[0x16] = uStack_60;
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  param_1[0xd] = uStack_a8;
  param_1[0xc] = uStack_b0;
  param_1[0xf] = uStack_98;
  param_1[0xe] = uStack_a0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  return;
}



/* Entry: 103cdb0a8; end: 103cdb0cb;  */

undefined1  [16] FUN_103cdb0a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4ad0;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103cdb0cc; end: 103cdb0fb;  */

undefined1  [16] FUN_103cdb0cc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x80);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88));
  return auVar1;
}



/* Entry: 103cdb0fc; end: 103cdb12f;  */

void FUN_103cdb0fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x80) = param_1;
  *(undefined8 *)(unaff_x20 + 0x88) = param_2;
  return;
}



/* Entry: 103cdb130; end: 103cdb143;  */

undefined1  [16] FUN_103cdb130(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x80;
  auVar1._0_8_ = 0x103cdb140;
  return auVar1;
}



/* Entry: 103cdb144; end: 103cdb157;  */

void FUN_103cdb144(void)

{
  FUN_103cdaacc();
  return;
}



/* Entry: 103cdb158; end: 103cdb1bf;  */

void FUN_103cdb158(void)

{
  FUN_103cdacb8();
  return;
}



/* Entry: 103cdb1c0; end: 103cdb1f7;  */

uint FUN_103cdb1c0(long param_1,long param_2)

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
  func_0x000103ce4248();
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



/* Entry: 103cdb1f8; end: 103cdb2a7;  */

uint FUN_103cdb1f8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_28 = param_1[0x1d];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_118 = unaff_x20[0x1d];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  FUN_103cdfc40(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103cdb2a8; end: 103cdb347;  */

/* WARNING: Possible PIC construction at 0x000103cdb2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cdb304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cdb2f8) */
/* WARNING: Removing unreachable block (ram,0x000103cdb308) */

void FUN_103cdb2a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000fd0 != -1) {
    func_0x000107c61568(0x113000fd0,FUN_103cdaa84);
  }
  uVar5 = uRam000000011380ea78;
  uVar4 = uRam000000011380ea70;
  uVar3 = uRam000000011380ea68;
  uVar2 = uRam000000011380ea60;
  uVar1 = uRam000000011380ea58;
  *param_1 = uRam000000011380ea50;
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



/* Entry: 103cdb348; end: 103cdb35b;  */

void FUN_103cdb348(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130011e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130011e0,&UNK_10dc77cb8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cdb35c; end: 103cdb4c7;  */

void FUN_103cdb35c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_38 = unaff_x20[0x1d];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cdb4c8; end: 103cdb577;  */

uint FUN_103cdb4c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_118 = param_1[0x1d];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_28 = param_2[0x1d];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  FUN_103cdfc40(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103cdb578; end: 103cdb5bf;  */

void FUN_103cdb578(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc77d30,0x33,2);
  uRam000000011380ea88 = uStack_38;
  uRam000000011380ea80 = uStack_40;
  uRam000000011380ea98 = uStack_28;
  uRam000000011380ea90 = uStack_30;
  uRam000000011380eaa8 = uStack_18;
  uRam000000011380eaa0 = uStack_20;
  return;
}



/* Entry: 103cdb5c0; end: 103cdb6e3;  */

/* WARNING: Removing unreachable block (ram,0x000103cdb684) */
/* WARNING: Removing unreachable block (ram,0x000103cdb6e0) */
/* WARNING: Removing unreachable block (ram,0x000103cdb6c4) */

void FUN_103cdb5c0(undefined8 param_1,long param_2,long param_3)

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
          FUN_103cdb6e4(param_1);
        }
        else if (lVar1 == 2) {
          FUN_103cdc104();
        }
      }
      else if (lVar1 == 3) {
        FUN_103cdc730();
      }
      else if (lVar1 == 4) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103ce0150();
        (*pcVar4)(unaff_x20 + 0xd0,&UNK_1106fc370,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103cdb6e4; end: 103cdc103;  */

/* WARNING: Removing unreachable block (ram,0x000103cdbf4c) */

void FUN_103cdb6e4(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  long unaff_x21;
  undefined1 auStack_d80 [208];
  ulong uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  ulong uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  ulong uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  ulong uStack_a40;
  ulong uStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  ulong uStack_a00;
  ulong uStack_9f8;
  ulong uStack_9f0;
  ulong uStack_9e8;
  ulong uStack_9e0;
  ulong uStack_9d8;
  ulong uStack_9d0;
  ulong uStack_9c8;
  ulong uStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
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
  ulong uStack_560;
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
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_3c0,param_3,param_4);
  uVar3 = uStack_3b8;
  uVar2 = uStack_3c0;
  if (unaff_x21 != 0) {
    func_0x000107c6142c(uStack_3b8);
    return;
  }
  if (uStack_3b8 == 0) {
    return;
  }
  func_0x000103cde1a0(&uStack_560);
  uStack_668 = param_2[0x13];
  uStack_670 = param_2[0x12];
  uStack_3e8 = param_2[0x15];
  uStack_3f0 = param_2[0x14];
  uStack_658 = param_2[0x15];
  uStack_660 = param_2[0x14];
  uStack_3d8 = param_2[0x17];
  uStack_3e0 = param_2[0x16];
  uStack_648 = param_2[0x17];
  uStack_650 = param_2[0x16];
  uStack_3c8 = param_2[0x19];
  uStack_3d0 = param_2[0x18];
  uStack_6a8 = param_2[0xb];
  uStack_6b0 = param_2[10];
  uStack_428 = param_2[0xd];
  uStack_430 = param_2[0xc];
  uStack_698 = param_2[0xd];
  uStack_6a0 = param_2[0xc];
  uStack_418 = param_2[0xf];
  uStack_420 = param_2[0xe];
  uStack_688 = param_2[0xf];
  uStack_690 = param_2[0xe];
  uStack_408 = param_2[0x11];
  uStack_410 = param_2[0x10];
  uStack_678 = param_2[0x11];
  uStack_680 = param_2[0x10];
  uStack_3f8 = param_2[0x13];
  uStack_400 = param_2[0x12];
  uStack_6e8 = param_2[3];
  uStack_6f0 = param_2[2];
  uStack_468 = param_2[5];
  uStack_470 = param_2[4];
  uStack_6d8 = param_2[5];
  uStack_6e0 = param_2[4];
  uStack_458 = param_2[7];
  uStack_460 = param_2[6];
  uStack_6c8 = param_2[7];
  uStack_6d0 = param_2[6];
  uStack_448 = param_2[9];
  uStack_450 = param_2[8];
  uStack_6b8 = param_2[9];
  uStack_6c0 = param_2[8];
  uStack_438 = param_2[0xb];
  uStack_440 = param_2[10];
  uStack_488 = param_2[1];
  uStack_490 = *param_2;
  uStack_478 = param_2[3];
  uStack_480 = param_2[2];
  uStack_6f8 = param_2[1];
  uStack_700 = *param_2;
  uStack_598 = uStack_4c8;
  uStack_5a0 = uStack_4d0;
  uStack_588 = uStack_4b8;
  uStack_590 = uStack_4c0;
  uStack_578 = uStack_4a8;
  uStack_580 = uStack_4b0;
  uStack_568 = uStack_498;
  uStack_570 = uStack_4a0;
  uStack_5d8 = uStack_508;
  uStack_5e0 = uStack_510;
  uStack_5c8 = uStack_4f8;
  uStack_5d0 = uStack_500;
  uStack_5b8 = uStack_4e8;
  uStack_5c0 = uStack_4f0;
  uStack_5a8 = uStack_4d8;
  uStack_5b0 = uStack_4e0;
  uStack_618 = uStack_548;
  uStack_620 = uStack_550;
  uStack_608 = uStack_538;
  uStack_610 = uStack_540;
  uStack_5f8 = uStack_528;
  uStack_600 = uStack_530;
  uStack_5e8 = uStack_518;
  uStack_5f0 = uStack_520;
  uStack_638 = param_2[0x19];
  uStack_640 = param_2[0x18];
  uStack_628 = uStack_558;
  uStack_630 = uStack_560;
  iVar4 = (int)&uStack_700;
  FUN_103cdef50();
  if (iVar4 == 1) {
    iVar4 = (int)&uStack_630;
    FUN_103cdef50();
    if (iVar4 == 1) {
      uStack_7f8 = uStack_658;
      uStack_800 = uStack_660;
      uStack_7e8 = uStack_648;
      uStack_7f0 = uStack_650;
      uStack_7d8 = uStack_638;
      uStack_7e0 = uStack_640;
      uStack_838 = uStack_698;
      uStack_840 = uStack_6a0;
      uStack_828 = uStack_688;
      uStack_830 = uStack_690;
      uStack_808 = uStack_668;
      uStack_810 = uStack_670;
      uStack_818 = uStack_678;
      uStack_820 = uStack_680;
      uStack_878 = uStack_6d8;
      uStack_880 = uStack_6e0;
      uStack_868 = uStack_6c8;
      uStack_870 = uStack_6d0;
      uStack_848 = uStack_6a8;
      uStack_850 = uStack_6b0;
      uStack_858 = uStack_6b8;
      uStack_860 = uStack_6c0;
      uStack_888 = uStack_6e8;
      uStack_890 = uStack_6f0;
      uStack_898 = uStack_6f8;
      uStack_8a0 = uStack_700;
      func_0x000103cdf08c(&uStack_490,&uStack_970,0x113000f48,&UNK_10dc76f30);
      FUN_103ce438c(&uStack_8a0,0x113000f48,&UNK_10dc76f30);
      goto LAB_103cdbfc8;
    }
LAB_103cdb9bc:
    func_0x000107c610b4(&uStack_8a0,&uStack_700,0x1a0);
    func_0x000107c61434(uVar3);
    func_0x000103cdf08c(&uStack_490,&uStack_970,0x113000f48,&UNK_10dc76f30);
    FUN_103ce438c(&uStack_8a0,0x113001228,&UNK_10dc77d10);
  }
  else {
    uStack_7f8 = uStack_658;
    uStack_800 = uStack_660;
    uStack_7e8 = uStack_648;
    uStack_7f0 = uStack_650;
    uStack_7d8 = uStack_638;
    uStack_7e0 = uStack_640;
    uStack_838 = uStack_698;
    uStack_840 = uStack_6a0;
    uStack_828 = uStack_688;
    uStack_830 = uStack_690;
    uStack_808 = uStack_668;
    uStack_810 = uStack_670;
    uStack_818 = uStack_678;
    uStack_820 = uStack_680;
    uStack_878 = uStack_6d8;
    uStack_880 = uStack_6e0;
    uStack_868 = uStack_6c8;
    uStack_870 = uStack_6d0;
    uStack_848 = uStack_6a8;
    uStack_850 = uStack_6b0;
    uStack_858 = uStack_6b8;
    uStack_860 = uStack_6c0;
    uStack_888 = uStack_6e8;
    uStack_890 = uStack_6f0;
    uStack_898 = uStack_6f8;
    uStack_8a0 = uStack_700;
    iVar4 = (int)&uStack_630;
    FUN_103cdef50();
    if (iVar4 == 1) goto LAB_103cdb9bc;
    uStack_b38 = uStack_588;
    uStack_b40 = uStack_590;
    uStack_b28 = uStack_578;
    uStack_b30 = uStack_580;
    uStack_b18 = uStack_568;
    uStack_b20 = uStack_570;
    uStack_b78 = uStack_5c8;
    uStack_b80 = uStack_5d0;
    uStack_b68 = uStack_5b8;
    uStack_b70 = uStack_5c0;
    uStack_b58 = uStack_5a8;
    uStack_b60 = uStack_5b0;
    uStack_b48 = uStack_598;
    uStack_b50 = uStack_5a0;
    uStack_bb8 = uStack_608;
    uStack_bc0 = uStack_610;
    uStack_ba8 = uStack_5f8;
    uStack_bb0 = uStack_600;
    uStack_b98 = uStack_5e8;
    uStack_ba0 = uStack_5f0;
    uStack_b88 = uStack_5d8;
    uStack_b90 = uStack_5e0;
    uStack_bd8 = uStack_628;
    uStack_be0 = uStack_630;
    uStack_bc8 = uStack_618;
    uStack_bd0 = uStack_620;
    uStack_a68 = uStack_588;
    uStack_a70 = uStack_590;
    uStack_a58 = uStack_578;
    uStack_a60 = uStack_580;
    uStack_a48 = uStack_568;
    uStack_a50 = uStack_570;
    uStack_aa8 = uStack_5c8;
    uStack_ab0 = uStack_5d0;
    uStack_a98 = uStack_5b8;
    uStack_aa0 = uStack_5c0;
    uStack_a88 = uStack_5a8;
    uStack_a90 = uStack_5b0;
    uStack_a78 = uStack_598;
    uStack_a80 = uStack_5a0;
    uStack_ae8 = uStack_608;
    uStack_af0 = uStack_610;
    uStack_ad8 = uStack_5f8;
    uStack_ae0 = uStack_600;
    uStack_ac8 = uStack_5e8;
    uStack_ad0 = uStack_5f0;
    uStack_ab8 = uStack_5d8;
    uStack_ac0 = uStack_5e0;
    uStack_b08 = uStack_628;
    uStack_b10 = uStack_630;
    uStack_af8 = uStack_618;
    uStack_b00 = uStack_620;
    uStack_998 = uStack_7f8;
    uStack_9a0 = uStack_800;
    uStack_988 = uStack_7e8;
    uStack_990 = uStack_7f0;
    uStack_978 = uStack_7d8;
    uStack_980 = uStack_7e0;
    uStack_9d8 = uStack_838;
    uStack_9e0 = uStack_840;
    uStack_9c8 = uStack_828;
    uStack_9d0 = uStack_830;
    uStack_9b8 = uStack_818;
    uStack_9c0 = uStack_820;
    uStack_9a8 = uStack_808;
    uStack_9b0 = uStack_810;
    uStack_a18 = uStack_878;
    uStack_a20 = uStack_880;
    uStack_a08 = uStack_868;
    uStack_a10 = uStack_870;
    uStack_9f8 = uStack_858;
    uStack_a00 = uStack_860;
    uStack_9e8 = uStack_848;
    uStack_9f0 = uStack_850;
    uStack_a38 = uStack_898;
    uStack_a40 = uStack_8a0;
    uStack_a28 = uStack_888;
    uStack_a30 = uStack_890;
    uStack_8c8 = uStack_7f8;
    uStack_8d0 = uStack_800;
    uStack_8b8 = uStack_7e8;
    uStack_8c0 = uStack_7f0;
    uStack_8a8 = uStack_7d8;
    uStack_8b0 = uStack_7e0;
    uStack_908 = uStack_838;
    uStack_910 = uStack_840;
    uStack_8f8 = uStack_828;
    uStack_900 = uStack_830;
    uStack_8d8 = uStack_808;
    uStack_8e0 = uStack_810;
    uStack_8e8 = uStack_818;
    uStack_8f0 = uStack_820;
    uStack_948 = uStack_878;
    uStack_950 = uStack_880;
    uStack_938 = uStack_868;
    uStack_940 = uStack_870;
    uStack_918 = uStack_848;
    uStack_920 = uStack_850;
    uStack_928 = uStack_858;
    uStack_930 = uStack_860;
    uStack_958 = uStack_888;
    uStack_960 = uStack_890;
    uStack_968 = uStack_898;
    uStack_970 = uStack_8a0;
    iVar4 = (int)&uStack_a40;
    func_0x000103cdef68();
    if (iVar4 == 0) {
      puVar5 = &uStack_970;
      func_0x000100d6b97c();
      uVar6 = *puVar5;
      uVar1 = puVar5[1];
      uStack_c08 = uStack_a68;
      uStack_c10 = uStack_a70;
      uStack_bf8 = uStack_a58;
      uStack_c00 = uStack_a60;
      uStack_be8 = uStack_a48;
      uStack_bf0 = uStack_a50;
      uStack_c48 = uStack_aa8;
      uStack_c50 = uStack_ab0;
      uStack_c38 = uStack_a98;
      uStack_c40 = uStack_aa0;
      uStack_c28 = uStack_a88;
      uStack_c30 = uStack_a90;
      uStack_c18 = uStack_a78;
      uStack_c20 = uStack_a80;
      uStack_c88 = uStack_ae8;
      uStack_c90 = uStack_af0;
      uStack_c78 = uStack_ad8;
      uStack_c80 = uStack_ae0;
      uStack_c68 = uStack_ac8;
      uStack_c70 = uStack_ad0;
      uStack_c58 = uStack_ab8;
      uStack_c60 = uStack_ac0;
      uStack_ca8 = uStack_b08;
      uStack_cb0 = uStack_b10;
      uStack_c98 = uStack_af8;
      uStack_ca0 = uStack_b00;
      iVar4 = (int)&uStack_b10;
      func_0x000103cdef68();
      if (iVar4 != 0) goto LAB_103cdbeb4;
      puVar5 = &uStack_cb0;
      func_0x000100d6b97c();
      if ((uVar6 == *puVar5) && (uVar1 == puVar5[1])) {
        func_0x000107c61434(uVar3);
        func_0x000103cdf08c(&uStack_490,auStack_d80,0x113000f48,&UNK_10dc76f30);
        FUN_103ce438c(&uStack_be0,0x113000f48,&UNK_10dc76f30);
      }
      else {
        func_0x000107c605b8(uVar6,uVar1,*puVar5,puVar5[1],0);
        func_0x000107c61434(uVar3);
        func_0x000103cdf08c(&uStack_490,auStack_d80,0x113000f48,&UNK_10dc76f30);
        FUN_103ce438c(&uStack_be0,0x113000f48,&UNK_10dc76f30);
        if ((uVar6 & 1) == 0) goto LAB_103cdbef0;
      }
LAB_103cdbfa8:
      FUN_103ce438c(&uStack_700,0x113000f48,&UNK_10dc76f30);
      func_0x000107c6142c(uVar3);
      goto LAB_103cdbfc8;
    }
    if (iVar4 == 1) {
      puVar5 = &uStack_970;
      func_0x000100d6b97c();
      uStack_308 = puVar5[0x15];
      uStack_310 = puVar5[0x14];
      uStack_2f8 = puVar5[0x17];
      uStack_300 = puVar5[0x16];
      uStack_2e8 = puVar5[0x19];
      uStack_2f0 = puVar5[0x18];
      uStack_348 = puVar5[0xd];
      uStack_350 = puVar5[0xc];
      uStack_338 = puVar5[0xf];
      uStack_340 = puVar5[0xe];
      uStack_328 = puVar5[0x11];
      uStack_330 = puVar5[0x10];
      uStack_318 = puVar5[0x13];
      uStack_320 = puVar5[0x12];
      uStack_388 = puVar5[5];
      uStack_390 = puVar5[4];
      uStack_378 = puVar5[7];
      uStack_380 = puVar5[6];
      uStack_368 = puVar5[9];
      uStack_370 = puVar5[8];
      uStack_358 = puVar5[0xb];
      uStack_360 = puVar5[10];
      uStack_3a8 = puVar5[1];
      uStack_3b0 = *puVar5;
      uStack_398 = puVar5[3];
      uStack_3a0 = puVar5[2];
      uStack_bf8 = uStack_a58;
      uStack_c00 = uStack_a60;
      uStack_be8 = uStack_a48;
      uStack_bf0 = uStack_a50;
      uStack_c18 = uStack_a78;
      uStack_c20 = uStack_a80;
      uStack_c08 = uStack_a68;
      uStack_c10 = uStack_a70;
      uStack_c38 = uStack_a98;
      uStack_c40 = uStack_aa0;
      uStack_c28 = uStack_a88;
      uStack_c30 = uStack_a90;
      uStack_c58 = uStack_ab8;
      uStack_c60 = uStack_ac0;
      uStack_c48 = uStack_aa8;
      uStack_c50 = uStack_ab0;
      uStack_c78 = uStack_ad8;
      uStack_c80 = uStack_ae0;
      uStack_c68 = uStack_ac8;
      uStack_c70 = uStack_ad0;
      uStack_c98 = uStack_af8;
      uStack_ca0 = uStack_b00;
      uStack_c88 = uStack_ae8;
      uStack_c90 = uStack_af0;
      uStack_ca8 = uStack_b08;
      uStack_cb0 = uStack_b10;
      iVar4 = (int)&uStack_b10;
      func_0x000103cdef68();
      if (iVar4 == 1) {
        puVar5 = &uStack_cb0;
        func_0x000100d6b97c();
        uStack_238 = puVar5[0x15];
        uStack_240 = puVar5[0x14];
        uStack_228 = puVar5[0x17];
        uStack_230 = puVar5[0x16];
        uStack_218 = puVar5[0x19];
        uStack_220 = puVar5[0x18];
        uStack_278 = puVar5[0xd];
        uStack_280 = puVar5[0xc];
        uStack_268 = puVar5[0xf];
        uStack_270 = puVar5[0xe];
        uStack_258 = puVar5[0x11];
        uStack_260 = puVar5[0x10];
        uStack_248 = puVar5[0x13];
        uStack_250 = puVar5[0x12];
        uStack_2b8 = puVar5[5];
        uStack_2c0 = puVar5[4];
        uStack_2a8 = puVar5[7];
        uStack_2b0 = puVar5[6];
        uStack_298 = puVar5[9];
        uStack_2a0 = puVar5[8];
        uStack_288 = puVar5[0xb];
        uStack_290 = puVar5[10];
        uStack_2d8 = puVar5[1];
        uStack_2e0 = *puVar5;
        uStack_2c8 = puVar5[3];
        uStack_2d0 = puVar5[2];
        func_0x000107c61434(uVar3);
        func_0x000103cdf08c(&uStack_490,auStack_d80,0x113000f48,&UNK_10dc76f30);
        puVar5 = &uStack_3b0;
        FUN_103cde220(puVar5,&uStack_2e0);
        FUN_103ce438c(&uStack_be0,0x113000f48,&UNK_10dc76f30);
        if (((ulong)puVar5 & 1) != 0) goto LAB_103cdbfa8;
        FUN_103ce438c(&uStack_700,0x113000f48,&UNK_10dc76f30);
      }
      else {
LAB_103cdbeb4:
        func_0x000107c61434(uVar3);
        func_0x000103cdf08c(&uStack_490,auStack_d80,0x113000f48,&UNK_10dc76f30);
        FUN_103ce438c(&uStack_be0,0x113000f48,&UNK_10dc76f30);
LAB_103cdbef0:
        FUN_103ce438c(&uStack_700,0x113000f48,&UNK_10dc76f30);
      }
    }
    else {
      puVar5 = &uStack_970;
      func_0x000100d6b97c();
      uStack_168 = puVar5[0x15];
      uStack_170 = puVar5[0x14];
      uStack_158 = puVar5[0x17];
      uStack_160 = puVar5[0x16];
      uStack_148 = puVar5[0x19];
      uStack_150 = puVar5[0x18];
      uStack_1a8 = puVar5[0xd];
      uStack_1b0 = puVar5[0xc];
      uStack_198 = puVar5[0xf];
      uStack_1a0 = puVar5[0xe];
      uStack_188 = puVar5[0x11];
      uStack_190 = puVar5[0x10];
      uStack_178 = puVar5[0x13];
      uStack_180 = puVar5[0x12];
      uStack_1e8 = puVar5[5];
      uStack_1f0 = puVar5[4];
      uStack_1d8 = puVar5[7];
      uStack_1e0 = puVar5[6];
      uStack_1c8 = puVar5[9];
      uStack_1d0 = puVar5[8];
      uStack_1b8 = puVar5[0xb];
      uStack_1c0 = puVar5[10];
      uStack_208 = puVar5[1];
      uStack_210 = *puVar5;
      uStack_1f8 = puVar5[3];
      uStack_200 = puVar5[2];
      uStack_bf8 = uStack_a58;
      uStack_c00 = uStack_a60;
      uStack_be8 = uStack_a48;
      uStack_bf0 = uStack_a50;
      uStack_c18 = uStack_a78;
      uStack_c20 = uStack_a80;
      uStack_c08 = uStack_a68;
      uStack_c10 = uStack_a70;
      uStack_c38 = uStack_a98;
      uStack_c40 = uStack_aa0;
      uStack_c28 = uStack_a88;
      uStack_c30 = uStack_a90;
      uStack_c58 = uStack_ab8;
      uStack_c60 = uStack_ac0;
      uStack_c48 = uStack_aa8;
      uStack_c50 = uStack_ab0;
      uStack_c78 = uStack_ad8;
      uStack_c80 = uStack_ae0;
      uStack_c68 = uStack_ac8;
      uStack_c70 = uStack_ad0;
      uStack_c98 = uStack_af8;
      uStack_ca0 = uStack_b00;
      uStack_c88 = uStack_ae8;
      uStack_c90 = uStack_af0;
      uStack_ca8 = uStack_b08;
      uStack_cb0 = uStack_b10;
      iVar4 = (int)&uStack_b10;
      func_0x000103cdef68();
      if (iVar4 != 2) goto LAB_103cdbeb4;
      puVar5 = &uStack_cb0;
      func_0x000100d6b97c();
      uStack_98 = puVar5[0x15];
      uStack_a0 = puVar5[0x14];
      uStack_88 = puVar5[0x17];
      uStack_90 = puVar5[0x16];
      uStack_78 = puVar5[0x19];
      uStack_80 = puVar5[0x18];
      uStack_d8 = puVar5[0xd];
      uStack_e0 = puVar5[0xc];
      uStack_c8 = puVar5[0xf];
      uStack_d0 = puVar5[0xe];
      uStack_b8 = puVar5[0x11];
      uStack_c0 = puVar5[0x10];
      uStack_a8 = puVar5[0x13];
      uStack_b0 = puVar5[0x12];
      uStack_118 = puVar5[5];
      uStack_120 = puVar5[4];
      uStack_108 = puVar5[7];
      uStack_110 = puVar5[6];
      uStack_f8 = puVar5[9];
      uStack_100 = puVar5[8];
      uStack_e8 = puVar5[0xb];
      uStack_f0 = puVar5[10];
      uStack_138 = puVar5[1];
      uStack_140 = *puVar5;
      uStack_128 = puVar5[3];
      uStack_130 = puVar5[2];
      func_0x000107c61434(uVar3);
      func_0x000103cdf08c(&uStack_490,auStack_d80,0x113000f48,&UNK_10dc76f30);
      puVar5 = &uStack_210;
      FUN_103cde220(puVar5,&uStack_140);
      FUN_103ce438c(&uStack_be0,0x113000f48,&UNK_10dc76f30);
      FUN_103ce438c(&uStack_700,0x113000f48,&UNK_10dc76f30);
      if (((ulong)puVar5 & 1) != 0) {
        func_0x000107c6142c(uVar3);
        goto LAB_103cdbfc8;
      }
    }
  }
  (**(code **)(param_4 + 8))(param_3,param_4);
  func_0x000107c6142c(uVar3);
LAB_103cdbfc8:
  uStack_968 = uVar3;
  uStack_970 = uVar2;
  FUN_103cdefa8(&uStack_970);
  uStack_7f8 = uStack_8c8;
  uStack_800 = uStack_8d0;
  uStack_7e8 = uStack_8b8;
  uStack_7f0 = uStack_8c0;
  uStack_7d8 = uStack_8a8;
  uStack_7e0 = uStack_8b0;
  uStack_838 = uStack_908;
  uStack_840 = uStack_910;
  uStack_828 = uStack_8f8;
  uStack_830 = uStack_900;
  uStack_808 = uStack_8d8;
  uStack_810 = uStack_8e0;
  uStack_818 = uStack_8e8;
  uStack_820 = uStack_8f0;
  uStack_878 = uStack_948;
  uStack_880 = uStack_950;
  uStack_868 = uStack_938;
  uStack_870 = uStack_940;
  uStack_848 = uStack_918;
  uStack_850 = uStack_920;
  uStack_858 = uStack_928;
  uStack_860 = uStack_930;
  uStack_888 = uStack_958;
  uStack_890 = uStack_960;
  uStack_898 = uStack_968;
  uStack_8a0 = uStack_970;
  func_0x000103cdefc4(&uStack_8a0);
  uStack_658 = param_2[0x15];
  uStack_660 = param_2[0x14];
  uStack_648 = param_2[0x17];
  uStack_650 = param_2[0x16];
  uStack_638 = param_2[0x19];
  uStack_640 = param_2[0x18];
  uStack_698 = param_2[0xd];
  uStack_6a0 = param_2[0xc];
  uStack_688 = param_2[0xf];
  uStack_690 = param_2[0xe];
  uStack_678 = param_2[0x11];
  uStack_680 = param_2[0x10];
  uStack_668 = param_2[0x13];
  uStack_670 = param_2[0x12];
  uStack_6d8 = param_2[5];
  uStack_6e0 = param_2[4];
  uStack_6c8 = param_2[7];
  uStack_6d0 = param_2[6];
  uStack_6b8 = param_2[9];
  uStack_6c0 = param_2[8];
  uStack_6a8 = param_2[0xb];
  uStack_6b0 = param_2[10];
  uStack_6f8 = param_2[1];
  uStack_700 = *param_2;
  uStack_6e8 = param_2[3];
  uStack_6f0 = param_2[2];
  param_2[0x15] = uStack_7f8;
  param_2[0x14] = uStack_800;
  param_2[0x17] = uStack_7e8;
  param_2[0x16] = uStack_7f0;
  param_2[0x19] = uStack_7d8;
  param_2[0x18] = uStack_7e0;
  param_2[0xd] = uStack_838;
  param_2[0xc] = uStack_840;
  param_2[0xf] = uStack_828;
  param_2[0xe] = uStack_830;
  param_2[0x11] = uStack_818;
  param_2[0x10] = uStack_820;
  param_2[0x13] = uStack_808;
  param_2[0x12] = uStack_810;
  param_2[5] = uStack_878;
  param_2[4] = uStack_880;
  param_2[7] = uStack_868;
  param_2[6] = uStack_870;
  param_2[9] = uStack_858;
  param_2[8] = uStack_860;
  param_2[0xb] = uStack_848;
  param_2[10] = uStack_850;
  param_2[1] = uStack_898;
  *param_2 = uStack_8a0;
  param_2[3] = uStack_888;
  param_2[2] = uStack_890;
  FUN_103ce438c(&uStack_700,0x113000f48,&UNK_10dc76f30);
  return;
}



/* Entry: 103cdc104; end: 103cdc72f;  */

/* WARNING: Removing unreachable block (ram,0x000103cdc5e0) */

void FUN_103cdc104(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  
  func_0x000100d6ba74(&uStack_2c0);
  uStack_2e8 = uStack_218;
  uStack_2f0 = uStack_220;
  uStack_2d8 = uStack_208;
  uStack_2e0 = uStack_210;
  uStack_2c8 = uStack_1f8;
  uStack_2d0 = uStack_200;
  uStack_328 = uStack_258;
  uStack_330 = uStack_260;
  uStack_318 = uStack_248;
  uStack_320 = uStack_250;
  uStack_2f8 = uStack_228;
  uStack_300 = uStack_230;
  uStack_308 = uStack_238;
  uStack_310 = uStack_240;
  uStack_368 = uStack_298;
  uStack_370 = uStack_2a0;
  uStack_358 = uStack_288;
  uStack_360 = uStack_290;
  uStack_338 = uStack_268;
  uStack_340 = uStack_270;
  uStack_348 = uStack_278;
  uStack_350 = uStack_280;
  uStack_378 = uStack_2a8;
  uStack_380 = uStack_2b0;
  uStack_388 = uStack_2b8;
  uStack_390 = uStack_2c0;
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_148 = param_1[0x15];
  uStack_150 = param_1[0x14];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_138 = param_1[0x17];
  uStack_140 = param_1[0x16];
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_128 = param_1[0x19];
  uStack_130 = param_1[0x18];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_168 = param_1[0x11];
  uStack_170 = param_1[0x10];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_158 = param_1[0x13];
  uStack_160 = param_1[0x12];
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_58 = param_1[0x19];
  uStack_60 = param_1[0x18];
  puVar3 = &uStack_1f0;
  FUN_103cdef50();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    uStack_3b8 = uStack_78;
    uStack_3c0 = uStack_80;
    uStack_3a8 = uStack_68;
    uStack_3b0 = uStack_70;
    uStack_398 = uStack_58;
    uStack_3a0 = uStack_60;
    uStack_3f8 = uStack_b8;
    uStack_400 = uStack_c0;
    uStack_3e8 = uStack_a8;
    uStack_3f0 = uStack_b0;
    uStack_3d8 = uStack_98;
    uStack_3e0 = uStack_a0;
    uStack_3c8 = uStack_88;
    uStack_3d0 = uStack_90;
    uStack_438 = uStack_f8;
    uStack_440 = uStack_100;
    uStack_428 = uStack_e8;
    uStack_430 = uStack_f0;
    uStack_418 = uStack_d8;
    uStack_420 = uStack_e0;
    uStack_408 = uStack_c8;
    uStack_410 = uStack_d0;
    uStack_458 = uStack_118;
    uStack_460 = uStack_120;
    uStack_448 = uStack_108;
    uStack_450 = uStack_110;
    puVar3 = &uStack_120;
    func_0x000103cdef68();
    if ((int)puVar3 == 1) {
      puVar3 = &uStack_460;
      func_0x000100d6b97c();
      uStack_628 = uStack_2e8;
      uStack_630 = uStack_2f0;
      uStack_618 = uStack_2d8;
      uStack_620 = uStack_2e0;
      uStack_608 = uStack_2c8;
      uStack_610 = uStack_2d0;
      uStack_668 = uStack_328;
      uStack_670 = uStack_330;
      uStack_658 = uStack_318;
      uStack_660 = uStack_320;
      uStack_648 = uStack_308;
      uStack_650 = uStack_310;
      uStack_638 = uStack_2f8;
      uStack_640 = uStack_300;
      uStack_6a8 = uStack_368;
      uStack_6b0 = uStack_370;
      uStack_698 = uStack_358;
      uStack_6a0 = uStack_360;
      uStack_688 = uStack_348;
      uStack_690 = uStack_350;
      uStack_678 = uStack_338;
      uStack_680 = uStack_340;
      uStack_6c8 = uStack_388;
      uStack_6d0 = uStack_390;
      uStack_6b8 = uStack_378;
      uStack_6c0 = uStack_380;
      uStack_558 = uStack_148;
      uStack_560 = uStack_150;
      uStack_548 = uStack_138;
      uStack_550 = uStack_140;
      uStack_538 = uStack_128;
      uStack_540 = uStack_130;
      uStack_598 = uStack_188;
      uStack_5a0 = uStack_190;
      uStack_588 = uStack_178;
      uStack_590 = uStack_180;
      uStack_578 = uStack_168;
      uStack_580 = uStack_170;
      uStack_568 = uStack_158;
      uStack_570 = uStack_160;
      uStack_5d8 = uStack_1c8;
      uStack_5e0 = uStack_1d0;
      uStack_5c8 = uStack_1b8;
      uStack_5d0 = uStack_1c0;
      uStack_5b8 = uStack_1a8;
      uStack_5c0 = uStack_1b0;
      uStack_5a8 = uStack_198;
      uStack_5b0 = uStack_1a0;
      uStack_5f8 = uStack_1e8;
      uStack_600 = uStack_1f0;
      uStack_5e8 = uStack_1d8;
      uStack_5f0 = uStack_1e0;
      FUN_103cdef74(&uStack_600,&uStack_530);
      FUN_103ce438c(&uStack_6d0,0x113001230,&UNK_10dc77d18);
      uStack_528 = puVar3[1];
      uStack_530 = *puVar3;
      uStack_4f8 = puVar3[7];
      uStack_500 = puVar3[6];
      uStack_4e8 = puVar3[9];
      uStack_4f0 = puVar3[8];
      uStack_518 = puVar3[3];
      uStack_520 = puVar3[2];
      uStack_508 = puVar3[5];
      uStack_510 = puVar3[4];
      uStack_4b8 = puVar3[0xf];
      uStack_4c0 = puVar3[0xe];
      uStack_4a8 = puVar3[0x11];
      uStack_4b0 = puVar3[0x10];
      uStack_4d8 = puVar3[0xb];
      uStack_4e0 = puVar3[10];
      uStack_4c8 = puVar3[0xd];
      uStack_4d0 = puVar3[0xc];
      uStack_478 = puVar3[0x17];
      uStack_480 = puVar3[0x16];
      uStack_468 = puVar3[0x19];
      uStack_470 = puVar3[0x18];
      uStack_498 = puVar3[0x13];
      uStack_4a0 = puVar3[0x12];
      uStack_488 = puVar3[0x15];
      uStack_490 = puVar3[0x14];
      puVar3 = &uStack_530;
      FUN_103ce4388(puVar3);
      uStack_2e8 = uStack_488;
      uStack_2f0 = uStack_490;
      uStack_2d8 = uStack_478;
      uStack_2e0 = uStack_480;
      uStack_2c8 = uStack_468;
      uStack_2d0 = uStack_470;
      uStack_328 = uStack_4c8;
      uStack_330 = uStack_4d0;
      uStack_318 = uStack_4b8;
      uStack_320 = uStack_4c0;
      uStack_2f8 = uStack_498;
      uStack_300 = uStack_4a0;
      uStack_308 = uStack_4a8;
      uStack_310 = uStack_4b0;
      uStack_368 = uStack_508;
      uStack_370 = uStack_510;
      uStack_358 = uStack_4f8;
      uStack_360 = uStack_500;
      uStack_338 = uStack_4d8;
      uStack_340 = uStack_4e0;
      uStack_348 = uStack_4e8;
      uStack_350 = uStack_4f0;
      uStack_378 = uStack_518;
      uStack_380 = uStack_520;
      uStack_388 = uStack_528;
      uStack_390 = uStack_530;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_103ce0d0c();
  (*pcVar6)(&uStack_390,&UNK_1106faf10,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_488 = uStack_2e8;
    uStack_490 = uStack_2f0;
    uStack_478 = uStack_2d8;
    uStack_480 = uStack_2e0;
    uStack_468 = uStack_2c8;
    uStack_470 = uStack_2d0;
    uStack_4c8 = uStack_328;
    uStack_4d0 = uStack_330;
    uStack_4b8 = uStack_318;
    uStack_4c0 = uStack_320;
    uStack_4a8 = uStack_308;
    uStack_4b0 = uStack_310;
    uStack_498 = uStack_2f8;
    uStack_4a0 = uStack_300;
    uStack_508 = uStack_368;
    uStack_510 = uStack_370;
    uStack_4f8 = uStack_358;
    uStack_500 = uStack_360;
    uStack_4e8 = uStack_348;
    uStack_4f0 = uStack_350;
    uStack_4d8 = uStack_338;
    uStack_4e0 = uStack_340;
    uStack_528 = uStack_388;
    uStack_530 = uStack_390;
    uStack_518 = uStack_378;
    uStack_520 = uStack_380;
    uStack_3b8 = uStack_2e8;
    uStack_3c0 = uStack_2f0;
    uStack_3a8 = uStack_2d8;
    uStack_3b0 = uStack_2e0;
    uStack_398 = uStack_2c8;
    uStack_3a0 = uStack_2d0;
    uStack_3f8 = uStack_328;
    uStack_400 = uStack_330;
    uStack_3e8 = uStack_318;
    uStack_3f0 = uStack_320;
    uStack_3d8 = uStack_308;
    uStack_3e0 = uStack_310;
    uStack_3c8 = uStack_2f8;
    uStack_3d0 = uStack_300;
    uStack_438 = uStack_368;
    uStack_440 = uStack_370;
    uStack_428 = uStack_358;
    uStack_430 = uStack_360;
    uStack_418 = uStack_348;
    uStack_420 = uStack_350;
    uStack_408 = uStack_338;
    uStack_410 = uStack_340;
    uStack_458 = uStack_388;
    uStack_460 = uStack_390;
    uStack_448 = uStack_378;
    uStack_450 = uStack_380;
    iVar2 = (int)&uStack_530;
    func_0x000100d6ba5c();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uStack_558 = uStack_488;
        uStack_560 = uStack_490;
        uStack_548 = uStack_478;
        uStack_550 = uStack_480;
        uStack_538 = uStack_468;
        uStack_540 = uStack_470;
        uStack_598 = uStack_4c8;
        uStack_5a0 = uStack_4d0;
        uStack_588 = uStack_4b8;
        uStack_590 = uStack_4c0;
        uStack_578 = uStack_4a8;
        uStack_580 = uStack_4b0;
        uStack_568 = uStack_498;
        uStack_570 = uStack_4a0;
        uStack_5d8 = uStack_508;
        uStack_5e0 = uStack_510;
        uStack_5c8 = uStack_4f8;
        uStack_5d0 = uStack_500;
        uStack_5b8 = uStack_4e8;
        uStack_5c0 = uStack_4f0;
        uStack_5a8 = uStack_4d8;
        uStack_5b0 = uStack_4e0;
        uStack_5f8 = uStack_528;
        uStack_600 = uStack_530;
        uStack_5e8 = uStack_518;
        uStack_5f0 = uStack_520;
        FUN_103cdf004(&uStack_600,&uStack_6d0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_558 = uStack_488;
        uStack_560 = uStack_490;
        uStack_548 = uStack_478;
        uStack_550 = uStack_480;
        uStack_538 = uStack_468;
        uStack_540 = uStack_470;
        uStack_598 = uStack_4c8;
        uStack_5a0 = uStack_4d0;
        uStack_588 = uStack_4b8;
        uStack_590 = uStack_4c0;
        uStack_578 = uStack_4a8;
        uStack_580 = uStack_4b0;
        uStack_568 = uStack_498;
        uStack_570 = uStack_4a0;
        uStack_5d8 = uStack_508;
        uStack_5e0 = uStack_510;
        uStack_5c8 = uStack_4f8;
        uStack_5d0 = uStack_500;
        uStack_5b8 = uStack_4e8;
        uStack_5c0 = uStack_4f0;
        uStack_5a8 = uStack_4d8;
        uStack_5b0 = uStack_4e0;
        uStack_5f8 = uStack_528;
        uStack_600 = uStack_530;
        uStack_5e8 = uStack_518;
        uStack_5f0 = uStack_520;
        FUN_103cdf004(&uStack_600,&uStack_6d0);
        (*pcVar6)(param_3,param_4);
      }
      FUN_103ce438c(&uStack_390,0x113001230,&UNK_10dc77d18);
      uStack_6f8 = uStack_3b8;
      uStack_700 = uStack_3c0;
      uStack_6e8 = uStack_3a8;
      uStack_6f0 = uStack_3b0;
      uStack_6d8 = uStack_398;
      uStack_6e0 = uStack_3a0;
      uStack_738 = uStack_3f8;
      uStack_740 = uStack_400;
      uStack_728 = uStack_3e8;
      uStack_730 = uStack_3f0;
      uStack_718 = uStack_3d8;
      uStack_720 = uStack_3e0;
      uStack_708 = uStack_3c8;
      uStack_710 = uStack_3d0;
      uStack_778 = uStack_438;
      uStack_780 = uStack_440;
      uStack_768 = uStack_428;
      uStack_770 = uStack_430;
      uStack_758 = uStack_418;
      uStack_760 = uStack_420;
      uStack_748 = uStack_408;
      uStack_750 = uStack_410;
      uStack_798 = uStack_458;
      uStack_7a0 = uStack_460;
      uStack_788 = uStack_448;
      uStack_790 = uStack_450;
      func_0x000103cdefe4(&uStack_7a0);
      uStack_628 = uStack_6f8;
      uStack_630 = uStack_700;
      uStack_618 = uStack_6e8;
      uStack_620 = uStack_6f0;
      uStack_608 = uStack_6d8;
      uStack_610 = uStack_6e0;
      uStack_668 = uStack_738;
      uStack_670 = uStack_740;
      uStack_658 = uStack_728;
      uStack_660 = uStack_730;
      uStack_648 = uStack_718;
      uStack_650 = uStack_720;
      uStack_638 = uStack_708;
      uStack_640 = uStack_710;
      uStack_6a8 = uStack_778;
      uStack_6b0 = uStack_780;
      uStack_698 = uStack_768;
      uStack_6a0 = uStack_770;
      uStack_688 = uStack_758;
      uStack_690 = uStack_760;
      uStack_678 = uStack_748;
      uStack_680 = uStack_750;
      uStack_6c8 = uStack_798;
      uStack_6d0 = uStack_7a0;
      uStack_6b8 = uStack_788;
      uStack_6c0 = uStack_790;
      func_0x000103cdefc4(&uStack_6d0);
      uStack_558 = param_1[0x15];
      uStack_560 = param_1[0x14];
      uStack_548 = param_1[0x17];
      uStack_550 = param_1[0x16];
      uStack_538 = param_1[0x19];
      uStack_540 = param_1[0x18];
      uStack_598 = param_1[0xd];
      uStack_5a0 = param_1[0xc];
      uStack_588 = param_1[0xf];
      uStack_590 = param_1[0xe];
      uStack_578 = param_1[0x11];
      uStack_580 = param_1[0x10];
      uStack_568 = param_1[0x13];
      uStack_570 = param_1[0x12];
      uStack_5d8 = param_1[5];
      uStack_5e0 = param_1[4];
      uStack_5c8 = param_1[7];
      uStack_5d0 = param_1[6];
      uStack_5b8 = param_1[9];
      uStack_5c0 = param_1[8];
      uStack_5a8 = param_1[0xb];
      uStack_5b0 = param_1[10];
      uStack_5f8 = param_1[1];
      uStack_600 = *param_1;
      uStack_5e8 = param_1[3];
      uStack_5f0 = param_1[2];
      param_1[0x15] = uStack_628;
      param_1[0x14] = uStack_630;
      param_1[0x17] = uStack_618;
      param_1[0x16] = uStack_620;
      param_1[0x19] = uStack_608;
      param_1[0x18] = uStack_610;
      param_1[0xd] = uStack_668;
      param_1[0xc] = uStack_670;
      param_1[0xf] = uStack_658;
      param_1[0xe] = uStack_660;
      param_1[0x11] = uStack_648;
      param_1[0x10] = uStack_650;
      param_1[0x13] = uStack_638;
      param_1[0x12] = uStack_640;
      param_1[5] = uStack_6a8;
      param_1[4] = uStack_6b0;
      param_1[7] = uStack_698;
      param_1[6] = uStack_6a0;
      param_1[9] = uStack_688;
      param_1[8] = uStack_690;
      param_1[0xb] = uStack_678;
      param_1[10] = uStack_680;
      param_1[1] = uStack_6c8;
      *param_1 = uStack_6d0;
      param_1[3] = uStack_6b8;
      param_1[2] = uStack_6c0;
      uVar4 = 0x113000f48;
      puVar5 = &UNK_10dc76f30;
      puVar3 = &uStack_600;
      goto LAB_103cdc50c;
    }
  }
  uVar4 = 0x113001230;
  puVar5 = &UNK_10dc77d18;
  puVar3 = &uStack_390;
LAB_103cdc50c:
  FUN_103ce438c(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 103cdc730; end: 103cdcd5b;  */

/* WARNING: Removing unreachable block (ram,0x000103cdcc0c) */

void FUN_103cdc730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  
  func_0x000100d6ba74(&uStack_2c0);
  uStack_2e8 = uStack_218;
  uStack_2f0 = uStack_220;
  uStack_2d8 = uStack_208;
  uStack_2e0 = uStack_210;
  uStack_2c8 = uStack_1f8;
  uStack_2d0 = uStack_200;
  uStack_328 = uStack_258;
  uStack_330 = uStack_260;
  uStack_318 = uStack_248;
  uStack_320 = uStack_250;
  uStack_2f8 = uStack_228;
  uStack_300 = uStack_230;
  uStack_308 = uStack_238;
  uStack_310 = uStack_240;
  uStack_368 = uStack_298;
  uStack_370 = uStack_2a0;
  uStack_358 = uStack_288;
  uStack_360 = uStack_290;
  uStack_338 = uStack_268;
  uStack_340 = uStack_270;
  uStack_348 = uStack_278;
  uStack_350 = uStack_280;
  uStack_378 = uStack_2a8;
  uStack_380 = uStack_2b0;
  uStack_388 = uStack_2b8;
  uStack_390 = uStack_2c0;
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_148 = param_1[0x15];
  uStack_150 = param_1[0x14];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_138 = param_1[0x17];
  uStack_140 = param_1[0x16];
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_128 = param_1[0x19];
  uStack_130 = param_1[0x18];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_168 = param_1[0x11];
  uStack_170 = param_1[0x10];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_158 = param_1[0x13];
  uStack_160 = param_1[0x12];
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_58 = param_1[0x19];
  uStack_60 = param_1[0x18];
  puVar3 = &uStack_1f0;
  FUN_103cdef50();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    uStack_3b8 = uStack_78;
    uStack_3c0 = uStack_80;
    uStack_3a8 = uStack_68;
    uStack_3b0 = uStack_70;
    uStack_398 = uStack_58;
    uStack_3a0 = uStack_60;
    uStack_3f8 = uStack_b8;
    uStack_400 = uStack_c0;
    uStack_3e8 = uStack_a8;
    uStack_3f0 = uStack_b0;
    uStack_3d8 = uStack_98;
    uStack_3e0 = uStack_a0;
    uStack_3c8 = uStack_88;
    uStack_3d0 = uStack_90;
    uStack_438 = uStack_f8;
    uStack_440 = uStack_100;
    uStack_428 = uStack_e8;
    uStack_430 = uStack_f0;
    uStack_418 = uStack_d8;
    uStack_420 = uStack_e0;
    uStack_408 = uStack_c8;
    uStack_410 = uStack_d0;
    uStack_458 = uStack_118;
    uStack_460 = uStack_120;
    uStack_448 = uStack_108;
    uStack_450 = uStack_110;
    puVar3 = &uStack_120;
    func_0x000103cdef68();
    if ((int)puVar3 == 2) {
      puVar3 = &uStack_460;
      func_0x000100d6b97c();
      uStack_628 = uStack_2e8;
      uStack_630 = uStack_2f0;
      uStack_618 = uStack_2d8;
      uStack_620 = uStack_2e0;
      uStack_608 = uStack_2c8;
      uStack_610 = uStack_2d0;
      uStack_668 = uStack_328;
      uStack_670 = uStack_330;
      uStack_658 = uStack_318;
      uStack_660 = uStack_320;
      uStack_648 = uStack_308;
      uStack_650 = uStack_310;
      uStack_638 = uStack_2f8;
      uStack_640 = uStack_300;
      uStack_6a8 = uStack_368;
      uStack_6b0 = uStack_370;
      uStack_698 = uStack_358;
      uStack_6a0 = uStack_360;
      uStack_688 = uStack_348;
      uStack_690 = uStack_350;
      uStack_678 = uStack_338;
      uStack_680 = uStack_340;
      uStack_6c8 = uStack_388;
      uStack_6d0 = uStack_390;
      uStack_6b8 = uStack_378;
      uStack_6c0 = uStack_380;
      uStack_558 = uStack_148;
      uStack_560 = uStack_150;
      uStack_548 = uStack_138;
      uStack_550 = uStack_140;
      uStack_538 = uStack_128;
      uStack_540 = uStack_130;
      uStack_598 = uStack_188;
      uStack_5a0 = uStack_190;
      uStack_588 = uStack_178;
      uStack_590 = uStack_180;
      uStack_578 = uStack_168;
      uStack_580 = uStack_170;
      uStack_568 = uStack_158;
      uStack_570 = uStack_160;
      uStack_5d8 = uStack_1c8;
      uStack_5e0 = uStack_1d0;
      uStack_5c8 = uStack_1b8;
      uStack_5d0 = uStack_1c0;
      uStack_5b8 = uStack_1a8;
      uStack_5c0 = uStack_1b0;
      uStack_5a8 = uStack_198;
      uStack_5b0 = uStack_1a0;
      uStack_5f8 = uStack_1e8;
      uStack_600 = uStack_1f0;
      uStack_5e8 = uStack_1d8;
      uStack_5f0 = uStack_1e0;
      FUN_103cdef74(&uStack_600,&uStack_530);
      FUN_103ce438c(&uStack_6d0,0x113001238,&UNK_10dc77d20);
      uStack_528 = puVar3[1];
      uStack_530 = *puVar3;
      uStack_4f8 = puVar3[7];
      uStack_500 = puVar3[6];
      uStack_4e8 = puVar3[9];
      uStack_4f0 = puVar3[8];
      uStack_518 = puVar3[3];
      uStack_520 = puVar3[2];
      uStack_508 = puVar3[5];
      uStack_510 = puVar3[4];
      uStack_4b8 = puVar3[0xf];
      uStack_4c0 = puVar3[0xe];
      uStack_4a8 = puVar3[0x11];
      uStack_4b0 = puVar3[0x10];
      uStack_4d8 = puVar3[0xb];
      uStack_4e0 = puVar3[10];
      uStack_4c8 = puVar3[0xd];
      uStack_4d0 = puVar3[0xc];
      uStack_478 = puVar3[0x17];
      uStack_480 = puVar3[0x16];
      uStack_468 = puVar3[0x19];
      uStack_470 = puVar3[0x18];
      uStack_498 = puVar3[0x13];
      uStack_4a0 = puVar3[0x12];
      uStack_488 = puVar3[0x15];
      uStack_490 = puVar3[0x14];
      puVar3 = &uStack_530;
      FUN_103ce43cc(puVar3);
      uStack_2e8 = uStack_488;
      uStack_2f0 = uStack_490;
      uStack_2d8 = uStack_478;
      uStack_2e0 = uStack_480;
      uStack_2c8 = uStack_468;
      uStack_2d0 = uStack_470;
      uStack_328 = uStack_4c8;
      uStack_330 = uStack_4d0;
      uStack_318 = uStack_4b8;
      uStack_320 = uStack_4c0;
      uStack_2f8 = uStack_498;
      uStack_300 = uStack_4a0;
      uStack_308 = uStack_4a8;
      uStack_310 = uStack_4b0;
      uStack_368 = uStack_508;
      uStack_370 = uStack_510;
      uStack_358 = uStack_4f8;
      uStack_360 = uStack_500;
      uStack_338 = uStack_4d8;
      uStack_340 = uStack_4e0;
      uStack_348 = uStack_4e8;
      uStack_350 = uStack_4f0;
      uStack_378 = uStack_518;
      uStack_380 = uStack_520;
      uStack_388 = uStack_528;
      uStack_390 = uStack_530;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_103ce0e38();
  (*pcVar6)(&uStack_390,&UNK_1106fafa0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_488 = uStack_2e8;
    uStack_490 = uStack_2f0;
    uStack_478 = uStack_2d8;
    uStack_480 = uStack_2e0;
    uStack_468 = uStack_2c8;
    uStack_470 = uStack_2d0;
    uStack_4c8 = uStack_328;
    uStack_4d0 = uStack_330;
    uStack_4b8 = uStack_318;
    uStack_4c0 = uStack_320;
    uStack_4a8 = uStack_308;
    uStack_4b0 = uStack_310;
    uStack_498 = uStack_2f8;
    uStack_4a0 = uStack_300;
    uStack_508 = uStack_368;
    uStack_510 = uStack_370;
    uStack_4f8 = uStack_358;
    uStack_500 = uStack_360;
    uStack_4e8 = uStack_348;
    uStack_4f0 = uStack_350;
    uStack_4d8 = uStack_338;
    uStack_4e0 = uStack_340;
    uStack_528 = uStack_388;
    uStack_530 = uStack_390;
    uStack_518 = uStack_378;
    uStack_520 = uStack_380;
    uStack_3b8 = uStack_2e8;
    uStack_3c0 = uStack_2f0;
    uStack_3a8 = uStack_2d8;
    uStack_3b0 = uStack_2e0;
    uStack_398 = uStack_2c8;
    uStack_3a0 = uStack_2d0;
    uStack_3f8 = uStack_328;
    uStack_400 = uStack_330;
    uStack_3e8 = uStack_318;
    uStack_3f0 = uStack_320;
    uStack_3d8 = uStack_308;
    uStack_3e0 = uStack_310;
    uStack_3c8 = uStack_2f8;
    uStack_3d0 = uStack_300;
    uStack_438 = uStack_368;
    uStack_440 = uStack_370;
    uStack_428 = uStack_358;
    uStack_430 = uStack_360;
    uStack_418 = uStack_348;
    uStack_420 = uStack_350;
    uStack_408 = uStack_338;
    uStack_410 = uStack_340;
    uStack_458 = uStack_388;
    uStack_460 = uStack_390;
    uStack_448 = uStack_378;
    uStack_450 = uStack_380;
    iVar2 = (int)&uStack_530;
    func_0x000100d6ba5c();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uStack_558 = uStack_488;
        uStack_560 = uStack_490;
        uStack_548 = uStack_478;
        uStack_550 = uStack_480;
        uStack_538 = uStack_468;
        uStack_540 = uStack_470;
        uStack_598 = uStack_4c8;
        uStack_5a0 = uStack_4d0;
        uStack_588 = uStack_4b8;
        uStack_590 = uStack_4c0;
        uStack_578 = uStack_4a8;
        uStack_580 = uStack_4b0;
        uStack_568 = uStack_498;
        uStack_570 = uStack_4a0;
        uStack_5d8 = uStack_508;
        uStack_5e0 = uStack_510;
        uStack_5c8 = uStack_4f8;
        uStack_5d0 = uStack_500;
        uStack_5b8 = uStack_4e8;
        uStack_5c0 = uStack_4f0;
        uStack_5a8 = uStack_4d8;
        uStack_5b0 = uStack_4e0;
        uStack_5f8 = uStack_528;
        uStack_600 = uStack_530;
        uStack_5e8 = uStack_518;
        uStack_5f0 = uStack_520;
        FUN_103cdf058(&uStack_600,&uStack_6d0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_558 = uStack_488;
        uStack_560 = uStack_490;
        uStack_548 = uStack_478;
        uStack_550 = uStack_480;
        uStack_538 = uStack_468;
        uStack_540 = uStack_470;
        uStack_598 = uStack_4c8;
        uStack_5a0 = uStack_4d0;
        uStack_588 = uStack_4b8;
        uStack_590 = uStack_4c0;
        uStack_578 = uStack_4a8;
        uStack_580 = uStack_4b0;
        uStack_568 = uStack_498;
        uStack_570 = uStack_4a0;
        uStack_5d8 = uStack_508;
        uStack_5e0 = uStack_510;
        uStack_5c8 = uStack_4f8;
        uStack_5d0 = uStack_500;
        uStack_5b8 = uStack_4e8;
        uStack_5c0 = uStack_4f0;
        uStack_5a8 = uStack_4d8;
        uStack_5b0 = uStack_4e0;
        uStack_5f8 = uStack_528;
        uStack_600 = uStack_530;
        uStack_5e8 = uStack_518;
        uStack_5f0 = uStack_520;
        FUN_103cdf058(&uStack_600,&uStack_6d0);
        (*pcVar6)(param_3,param_4);
      }
      FUN_103ce438c(&uStack_390,0x113001238,&UNK_10dc77d20);
      uStack_6f8 = uStack_3b8;
      uStack_700 = uStack_3c0;
      uStack_6e8 = uStack_3a8;
      uStack_6f0 = uStack_3b0;
      uStack_6d8 = uStack_398;
      uStack_6e0 = uStack_3a0;
      uStack_738 = uStack_3f8;
      uStack_740 = uStack_400;
      uStack_728 = uStack_3e8;
      uStack_730 = uStack_3f0;
      uStack_718 = uStack_3d8;
      uStack_720 = uStack_3e0;
      uStack_708 = uStack_3c8;
      uStack_710 = uStack_3d0;
      uStack_778 = uStack_438;
      uStack_780 = uStack_440;
      uStack_768 = uStack_428;
      uStack_770 = uStack_430;
      uStack_758 = uStack_418;
      uStack_760 = uStack_420;
      uStack_748 = uStack_408;
      uStack_750 = uStack_410;
      uStack_798 = uStack_458;
      uStack_7a0 = uStack_460;
      uStack_788 = uStack_448;
      uStack_790 = uStack_450;
      FUN_103cdf038(&uStack_7a0);
      uStack_628 = uStack_6f8;
      uStack_630 = uStack_700;
      uStack_618 = uStack_6e8;
      uStack_620 = uStack_6f0;
      uStack_608 = uStack_6d8;
      uStack_610 = uStack_6e0;
      uStack_668 = uStack_738;
      uStack_670 = uStack_740;
      uStack_658 = uStack_728;
      uStack_660 = uStack_730;
      uStack_648 = uStack_718;
      uStack_650 = uStack_720;
      uStack_638 = uStack_708;
      uStack_640 = uStack_710;
      uStack_6a8 = uStack_778;
      uStack_6b0 = uStack_780;
      uStack_698 = uStack_768;
      uStack_6a0 = uStack_770;
      uStack_688 = uStack_758;
      uStack_690 = uStack_760;
      uStack_678 = uStack_748;
      uStack_680 = uStack_750;
      uStack_6c8 = uStack_798;
      uStack_6d0 = uStack_7a0;
      uStack_6b8 = uStack_788;
      uStack_6c0 = uStack_790;
      func_0x000103cdefc4(&uStack_6d0);
      uStack_558 = param_1[0x15];
      uStack_560 = param_1[0x14];
      uStack_548 = param_1[0x17];
      uStack_550 = param_1[0x16];
      uStack_538 = param_1[0x19];
      uStack_540 = param_1[0x18];
      uStack_598 = param_1[0xd];
      uStack_5a0 = param_1[0xc];
      uStack_588 = param_1[0xf];
      uStack_590 = param_1[0xe];
      uStack_578 = param_1[0x11];
      uStack_580 = param_1[0x10];
      uStack_568 = param_1[0x13];
      uStack_570 = param_1[0x12];
      uStack_5d8 = param_1[5];
      uStack_5e0 = param_1[4];
      uStack_5c8 = param_1[7];
      uStack_5d0 = param_1[6];
      uStack_5b8 = param_1[9];
      uStack_5c0 = param_1[8];
      uStack_5a8 = param_1[0xb];
      uStack_5b0 = param_1[10];
      uStack_5f8 = param_1[1];
      uStack_600 = *param_1;
      uStack_5e8 = param_1[3];
      uStack_5f0 = param_1[2];
      param_1[0x15] = uStack_628;
      param_1[0x14] = uStack_630;
      param_1[0x17] = uStack_618;
      param_1[0x16] = uStack_620;
      param_1[0x19] = uStack_608;
      param_1[0x18] = uStack_610;
      param_1[0xd] = uStack_668;
      param_1[0xc] = uStack_670;
      param_1[0xf] = uStack_658;
      param_1[0xe] = uStack_660;
      param_1[0x11] = uStack_648;
      param_1[0x10] = uStack_650;
      param_1[0x13] = uStack_638;
      param_1[0x12] = uStack_640;
      param_1[5] = uStack_6a8;
      param_1[4] = uStack_6b0;
      param_1[7] = uStack_698;
      param_1[6] = uStack_6a0;
      param_1[9] = uStack_688;
      param_1[8] = uStack_690;
      param_1[0xb] = uStack_678;
      param_1[10] = uStack_680;
      param_1[1] = uStack_6c8;
      *param_1 = uStack_6d0;
      param_1[3] = uStack_6b8;
      param_1[2] = uStack_6c0;
      uVar4 = 0x113000f48;
      puVar5 = &UNK_10dc76f30;
      puVar3 = &uStack_600;
      goto LAB_103cdcb38;
    }
  }
  uVar4 = 0x113001238;
  puVar5 = &UNK_10dc77d20;
  puVar3 = &uStack_390;
LAB_103cdcb38:
  FUN_103ce438c(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 103cdcd5c; end: 103cdcedf;  */

void FUN_103cdcd5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_200;
  undefined1 uStack_1f8;
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
  
  uStack_148 = unaff_x20[0x15];
  uStack_150 = unaff_x20[0x14];
  uStack_138 = unaff_x20[0x17];
  uStack_140 = unaff_x20[0x16];
  uStack_128 = unaff_x20[0x19];
  uStack_130 = unaff_x20[0x18];
  uStack_188 = unaff_x20[0xd];
  uStack_190 = unaff_x20[0xc];
  uStack_178 = unaff_x20[0xf];
  uStack_180 = unaff_x20[0xe];
  uStack_168 = unaff_x20[0x11];
  uStack_170 = unaff_x20[0x10];
  uStack_158 = unaff_x20[0x13];
  uStack_160 = unaff_x20[0x12];
  uStack_1c8 = unaff_x20[5];
  uStack_1d0 = unaff_x20[4];
  uStack_1b8 = unaff_x20[7];
  uStack_1c0 = unaff_x20[6];
  uStack_1a8 = unaff_x20[9];
  uStack_1b0 = unaff_x20[8];
  uStack_198 = unaff_x20[0xb];
  uStack_1a0 = unaff_x20[10];
  uStack_1e8 = unaff_x20[1];
  uStack_1f0 = *unaff_x20;
  uStack_1d8 = unaff_x20[3];
  uStack_1e0 = unaff_x20[2];
  puVar2 = &uStack_1f0;
  FUN_103cdef50();
  if ((int)puVar2 != 1) {
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_118 = uStack_1e8;
    uStack_120 = uStack_1f0;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    iVar1 = (int)&uStack_120;
    func_0x000103cdef68();
    func_0x000100d6b97c(&uStack_120);
    puVar2 = unaff_x20;
    if (iVar1 == 0) {
      FUN_103cdcee0();
    }
    else if (iVar1 == 1) {
      FUN_103cdcfd8();
    }
    else {
      FUN_103cdd118();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[0x1a] != 0) {
    uStack_1f8 = *(undefined1 *)(unaff_x20 + 0x1b);
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_200 = unaff_x20[0x1a];
    func_0x000103ce0150();
    (*pcVar3)(&lStack_200,4,&UNK_1106fc370,puVar2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[0x1c],unaff_x20[0x1d],param_2,param_3);
  return;
}



/* Entry: 103cdcee0; end: 103cdcfd7;  */

void FUN_103cdcee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
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
  
  iVar2 = (int)&uStack_1e0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  FUN_103cdef50();
  if (iVar2 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_48 = uStack_118;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar2 = (int)&uStack_110;
    func_0x000103cdef68();
    if (iVar2 == 0) {
      puVar3 = &uStack_110;
      func_0x000100d6b97c();
      (**(code **)(param_4 + 0x70))(*puVar3,puVar3[1],1,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103cdcfd8);
  (*pcVar1)();
}



/* Entry: 103cdcfd8; end: 103cdd117;  */

void FUN_103cdcfd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  iVar1 = (int)&uStack_1e0;
  FUN_103cdef50();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_48 = uStack_118;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103cdef68();
    if (iVar1 == 1) {
      puVar2 = &uStack_110;
      func_0x000100d6b97c();
      uStack_2a8 = puVar2[1];
      uStack_2b0 = *puVar2;
      uStack_298 = puVar2[3];
      uStack_2a0 = puVar2[2];
      uStack_288 = puVar2[5];
      uStack_290 = puVar2[4];
      uStack_278 = puVar2[7];
      uStack_280 = puVar2[6];
      uStack_268 = puVar2[9];
      uStack_270 = puVar2[8];
      uStack_258 = puVar2[0xb];
      uStack_260 = puVar2[10];
      uStack_248 = puVar2[0xd];
      uStack_250 = puVar2[0xc];
      uStack_238 = puVar2[0xf];
      uStack_240 = puVar2[0xe];
      uStack_228 = puVar2[0x11];
      uStack_230 = puVar2[0x10];
      uStack_218 = puVar2[0x13];
      uStack_220 = puVar2[0x12];
      uStack_208 = puVar2[0x15];
      uStack_210 = puVar2[0x14];
      uStack_1f8 = puVar2[0x17];
      uStack_200 = puVar2[0x16];
      uStack_1e8 = puVar2[0x19];
      uStack_1f0 = puVar2[0x18];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_103ce0d0c();
      (*pcVar3)(&uStack_2b0,2,&UNK_1106faf10,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103cdd118);
  (*pcVar3)();
}



/* Entry: 103cdd118; end: 103cdd257;  */

void FUN_103cdd118(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  iVar1 = (int)&uStack_1e0;
  FUN_103cdef50();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_48 = uStack_118;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103cdef68();
    if (iVar1 == 2) {
      puVar2 = &uStack_110;
      func_0x000100d6b97c();
      uStack_2a8 = puVar2[1];
      uStack_2b0 = *puVar2;
      uStack_298 = puVar2[3];
      uStack_2a0 = puVar2[2];
      uStack_288 = puVar2[5];
      uStack_290 = puVar2[4];
      uStack_278 = puVar2[7];
      uStack_280 = puVar2[6];
      uStack_268 = puVar2[9];
      uStack_270 = puVar2[8];
      uStack_258 = puVar2[0xb];
      uStack_260 = puVar2[10];
      uStack_248 = puVar2[0xd];
      uStack_250 = puVar2[0xc];
      uStack_238 = puVar2[0xf];
      uStack_240 = puVar2[0xe];
      uStack_228 = puVar2[0x11];
      uStack_230 = puVar2[0x10];
      uStack_218 = puVar2[0x13];
      uStack_220 = puVar2[0x12];
      uStack_208 = puVar2[0x15];
      uStack_210 = puVar2[0x14];
      uStack_1f8 = puVar2[0x17];
      uStack_200 = puVar2[0x16];
      uStack_1e8 = puVar2[0x19];
      uStack_1f0 = puVar2[0x18];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_103ce0e38();
      (*pcVar3)(&uStack_2b0,3,&UNK_1106fafa0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103cdd258);
  (*pcVar3)();
}



/* Entry: 103cdd258; end: 103cdd2d3;  */

void FUN_103cdd258(undefined8 *param_1)

{
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
  
  func_0x000103cde1a0(&uStack_f0);
  param_1[0x15] = uStack_48;
  param_1[0x14] = uStack_50;
  param_1[0x17] = uStack_38;
  param_1[0x16] = uStack_40;
  param_1[0x19] = uStack_28;
  param_1[0x18] = uStack_30;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  param_1[0xf] = uStack_78;
  param_1[0xe] = uStack_80;
  param_1[0x11] = uStack_68;
  param_1[0x10] = uStack_70;
  param_1[0x13] = uStack_58;
  param_1[0x12] = uStack_60;
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1d] = 0xc000000000000000;
  param_1[0x1c] = 0;
  return;
}



/* Entry: 103cdd2d4; end: 103cdd2f7;  */

undefined1  [16] FUN_103cdd2d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4b00;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 103cdd2f8; end: 103cdd327;  */

undefined1  [16] FUN_103cdd2f8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xe0);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8));
  return auVar1;
}



/* Entry: 103cdd328; end: 103cdd35b;  */

void FUN_103cdd328(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  *(undefined8 *)(unaff_x20 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_2;
  return;
}



/* Entry: 103cdd35c; end: 103cdd36f;  */

undefined1  [16] FUN_103cdd35c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xe0;
  auVar1._0_8_ = 0x103cdd36c;
  return auVar1;
}



/* Entry: 103cdd370; end: 103cdd383;  */

void FUN_103cdd370(void)

{
  FUN_103cdb5c0();
  return;
}



/* Entry: 103cdd384; end: 103cdd3eb;  */

void FUN_103cdd384(void)

{
  FUN_103cdcd5c();
  return;
}



/* Entry: 103cdd3ec; end: 103cdd423;  */

uint FUN_103cdd3ec(long param_1,long param_2)

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
  func_0x000103ce4208();
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



/* Entry: 103cdd424; end: 103cdd4d3;  */

uint FUN_103cdd424(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_28 = param_1[0x1d];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_118 = unaff_x20[0x1d];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  FUN_103cde888(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103cdd4d4; end: 103cdd573;  */

/* WARNING: Possible PIC construction at 0x000103cdd520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cdd530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cdd524) */
/* WARNING: Removing unreachable block (ram,0x000103cdd534) */

void FUN_103cdd4d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001008 != -1) {
    func_0x000107c61568(0x113001008,FUN_103cdb578);
  }
  uVar5 = uRam000000011380eaa8;
  uVar4 = uRam000000011380eaa0;
  uVar3 = uRam000000011380ea98;
  uVar2 = uRam000000011380ea90;
  uVar1 = uRam000000011380ea88;
  *param_1 = uRam000000011380ea80;
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



/* Entry: 103cdd574; end: 103cdd587;  */

void FUN_103cdd574(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130011d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130011d0,&UNK_10dc77cb0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cdd588; end: 103cdd5bb;  */

void FUN_103cdd588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cdd5bc; end: 103cdd727;  */

void FUN_103cdd5bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_38 = unaff_x20[0x1d];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cdd728; end: 103cdd7d7;  */

uint FUN_103cdd728(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_118 = param_1[0x1d];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_28 = param_2[0x1d];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  FUN_103cde888(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103cdd7d8; end: 103cdd81f;  */

void FUN_103cdd7d8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc77ce0,0x2e,2);
  uRam000000011380eab8 = uStack_38;
  uRam000000011380eab0 = uStack_40;
  uRam000000011380eac8 = uStack_28;
  uRam000000011380eac0 = uStack_30;
  uRam000000011380ead8 = uStack_18;
  uRam000000011380ead0 = uStack_20;
  return;
}



/* Entry: 103cdd820; end: 103cdd857;  */

undefined1  [16] FUN_103cdd820(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4b30;
  auVar1._0_8_ = 0xd00000000000001e;
  return auVar1;
}



/* Entry: 103cdd858; end: 103cdd88f;  */

uint FUN_103cdd858(long param_1,long param_2)

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
  func_0x000103ce41c8();
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



/* Entry: 103cdd890; end: 103cdd92f;  */

/* WARNING: Possible PIC construction at 0x000103cdd8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cdd8ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cdd8e0) */
/* WARNING: Removing unreachable block (ram,0x000103cdd8f0) */

void FUN_103cdd890(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001020 != -1) {
    func_0x000107c61568(0x113001020,FUN_103cdd7d8);
  }
  uVar5 = uRam000000011380ead8;
  uVar4 = uRam000000011380ead0;
  uVar3 = uRam000000011380eac8;
  uVar2 = uRam000000011380eac0;
  uVar1 = uRam000000011380eab8;
  *param_1 = uRam000000011380eab0;
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



/* Entry: 103cdd930; end: 103cdd943;  */

void FUN_103cdd930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130011c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130011c0,&UNK_10dc77ca8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cdd944; end: 103cdd97b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cdd944(undefined8 *param_1,undefined8 param_2)

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
  FUN_103ce0d0c();
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



/* Entry: 103cdd97c; end: 103cdd9c3;  */

void FUN_103cdd97c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc77ce0,0x2e,2);
  uRam000000011380eae8 = uStack_38;
  uRam000000011380eae0 = uStack_40;
  uRam000000011380eaf8 = uStack_28;
  uRam000000011380eaf0 = uStack_30;
  uRam000000011380eb08 = uStack_18;
  uRam000000011380eb00 = uStack_20;
  return;
}



/* Entry: 103cdd9c4; end: 103cddae7;  */

/* WARNING: Removing unreachable block (ram,0x000103cddae4) */

void FUN_103cdd9c4(undefined8 param_1,long param_2,long param_3)

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
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_103cdda60;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103ce4348();
          lVar2 = unaff_x20 + 0x40;
          puVar3 = &UNK_1106fc000;
        }
        else {
          if (lVar1 != 4) goto LAB_103cdda60;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103ce01d0();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1106fa988;
        }
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103cdda60:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103cddae8; end: 103cddbfb;  */

void FUN_103cddae8(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (puVar3 = unaff_x20, FUN_103cddbfc(), unaff_x21 == 0)) {
      if (unaff_x20[4] != 0) {
        uStack_48 = (undefined1)unaff_x20[5];
        pcVar4 = *(code **)(param_3 + 0x80);
        uStack_50 = unaff_x20[4];
        func_0x000103ce01d0();
        (*pcVar4)(&uStack_50,4,&UNK_1106fa988,puVar3,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103cddbfc; end: 103cddccf;  */

void FUN_103cddbfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  
  uStack_68 = *(undefined8 *)(param_1 + 0xa8);
  uStack_70 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = *(undefined8 *)(param_1 + 0xb8);
  uStack_60 = *(undefined8 *)(param_1 + 0xb0);
  uStack_48 = *(undefined8 *)(param_1 + 200);
  uStack_50 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = *(undefined8 *)(param_1 + 0x78);
  uStack_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = *(undefined8 *)(param_1 + 0x88);
  uStack_90 = *(undefined8 *)(param_1 + 0x80);
  uStack_78 = *(undefined8 *)(param_1 + 0x98);
  uStack_80 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = *(undefined8 *)(param_1 + 0x40);
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  puVar1 = &uStack_d0;
  func_0x000100d6ba5c();
  if ((int)puVar1 != 1) {
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_e8 = uStack_58;
    uStack_f0 = uStack_60;
    uStack_d8 = uStack_48;
    uStack_e0 = uStack_50;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103ce4348();
    (*pcVar2)(&uStack_160,3,&UNK_1106fc000,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103cddcd0; end: 103cddd43;  */

void FUN_103cddcd0(undefined8 *param_1)

{
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
  
  func_0x000103cdefc8(&uStack_b0);
  param_1[0x13] = uStack_58;
  param_1[0x12] = uStack_60;
  param_1[0x15] = uStack_48;
  param_1[0x14] = uStack_50;
  param_1[0x17] = uStack_38;
  param_1[0x16] = uStack_40;
  param_1[0x19] = uStack_28;
  param_1[0x18] = uStack_30;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[0xf] = uStack_78;
  param_1[0xe] = uStack_80;
  param_1[0x11] = uStack_68;
  param_1[0x10] = uStack_70;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  return;
}



/* Entry: 103cddd44; end: 103cddd7b;  */

undefined1  [16] FUN_103cddd44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4b50;
  auVar1._0_8_ = 0xd00000000000001c;
  return auVar1;
}



/* Entry: 103cddd7c; end: 103cdddb3;  */

uint FUN_103cddd7c(long param_1,long param_2)

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
  FUN_103ce4188();
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



/* Entry: 103cdddb4; end: 103cdde53;  */

/* WARNING: Possible PIC construction at 0x000103cdde00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cdde10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cdde04) */
/* WARNING: Removing unreachable block (ram,0x000103cdde14) */

void FUN_103cdddb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001038 != -1) {
    func_0x000107c61568(0x113001038,FUN_103cdd97c);
  }
  uVar5 = uRam000000011380eb08;
  uVar4 = uRam000000011380eb00;
  uVar3 = uRam000000011380eaf8;
  uVar2 = uRam000000011380eaf0;
  uVar1 = uRam000000011380eae8;
  *param_1 = uRam000000011380eae0;
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



/* Entry: 103cdde54; end: 103cdde67;  */

void FUN_103cdde54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130011b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130011b0,&UNK_10dc77ca0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cdde68; end: 103cdde9b;  */

void FUN_103cdde68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cdde9c; end: 103cddff7;  */

void FUN_103cdde9c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103cddff8; end: 103cde0fb;  */

uint FUN_103cddff8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1f0 [144];
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
        uStack_f8 = puVar4[0xd];
        uStack_100 = puVar4[0xc];
        uStack_e8 = puVar4[0xf];
        uStack_f0 = puVar4[0xe];
        uStack_d8 = puVar4[0x11];
        uStack_e0 = puVar4[0x10];
        uStack_138 = puVar4[5];
        uStack_140 = puVar4[4];
        uStack_128 = puVar4[7];
        uStack_130 = puVar4[6];
        uStack_118 = puVar4[9];
        uStack_120 = puVar4[8];
        uStack_108 = puVar4[0xb];
        uStack_110 = puVar4[10];
        uStack_158 = puVar4[1];
        uStack_160 = *puVar4;
        uStack_148 = puVar4[3];
        uStack_150 = puVar4[2];
        uStack_68 = puVar5[0xd];
        uStack_70 = puVar5[0xc];
        uStack_58 = puVar5[0xf];
        uStack_60 = puVar5[0xe];
        uStack_48 = puVar5[0x11];
        uStack_50 = puVar5[0x10];
        uStack_a8 = puVar5[5];
        uStack_b0 = puVar5[4];
        uStack_98 = puVar5[7];
        uStack_a0 = puVar5[6];
        uStack_88 = puVar5[9];
        uStack_90 = puVar5[8];
        uStack_78 = puVar5[0xb];
        uStack_80 = puVar5[10];
        uStack_c8 = puVar5[1];
        uStack_d0 = *puVar5;
        uStack_b8 = puVar5[3];
        uStack_c0 = puVar5[2];
        func_0x000103ce4440(&uStack_160,auStack_1f0);
        func_0x000103ce4440(&uStack_d0,auStack_1f0);
        puVar1 = &uStack_160;
        FUN_103d045bc(puVar1,&uStack_d0);
        uVar3 = (uint)puVar1;
        func_0x000103ce447c(&uStack_d0);
        func_0x000103ce447c(&uStack_160);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar4 = puVar4 + 0x12;
        puVar5 = puVar5 + 0x12;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103cde0fc; end: 103cde107;  */

void FUN_103cde0fc(void)

{
  return;
}



/* Entry: 103cde108; end: 103cde177;  */

void FUN_103cde108(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  (*UNRECOVERED_JUMPTABLE)();
  (*UNRECOVERED_JUMPTABLE)(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x000103cde174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_5,param_6);
  return;
}



/* Entry: 103cde178; end: 103cde1c7;  */

int FUN_103cde178(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(*(ulong *)(param_1 + 0x28) >> 1);
  uVar2 = -uVar3 - 2;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0x80000000 < uVar3) {
    iVar1 = uVar2 + 1;
  }
  return iVar1;
}



/* Entry: 103cde1c8; end: 103cde1f3;  */

undefined8 FUN_103cde1c8(undefined8 param_1)

{
  FUN_103ce2d98(param_1,&UNK_1106fadf8);
  return param_1;
}



/* Entry: 103cde1f4; end: 103cde21f;  */

void FUN_103cde1f4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0x1fffffffc;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  return;
}



/* Entry: 103cde220; end: 103cde5c7;  */

uint FUN_103cde220(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 auStack_5e0 [144];
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
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
  
  uVar3 = *param_1;
  if (((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0))
     && ((uVar3 = param_1[2], uVar3 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar3 & 1) != 0)))) {
    uStack_2b8 = param_1[0x13];
    uStack_2c0 = param_1[0x12];
    uStack_f8 = param_1[0x15];
    uStack_100 = param_1[0x14];
    uStack_2a8 = param_1[0x15];
    uStack_2b0 = param_1[0x14];
    uStack_e8 = param_1[0x17];
    uStack_f0 = param_1[0x16];
    uStack_298 = param_1[0x17];
    uStack_2a0 = param_1[0x16];
    uStack_d8 = param_1[0x19];
    uStack_e0 = param_1[0x18];
    uStack_2f8 = param_1[0xb];
    uStack_300 = param_1[10];
    uStack_138 = param_1[0xd];
    uStack_140 = param_1[0xc];
    uStack_2e8 = param_1[0xd];
    uStack_2f0 = param_1[0xc];
    uStack_128 = param_1[0xf];
    uStack_130 = param_1[0xe];
    uStack_2d8 = param_1[0xf];
    uStack_2e0 = param_1[0xe];
    uStack_118 = param_1[0x11];
    uStack_120 = param_1[0x10];
    uStack_2c8 = param_1[0x11];
    uStack_2d0 = param_1[0x10];
    uStack_108 = param_1[0x13];
    uStack_110 = param_1[0x12];
    uStack_158 = param_1[9];
    uStack_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uStack_308 = param_1[9];
    uStack_310 = param_1[8];
    uStack_228 = param_2[0x13];
    uStack_230 = param_2[0x12];
    uStack_188 = param_2[0x15];
    uStack_190 = param_2[0x14];
    uStack_218 = param_2[0x15];
    uStack_220 = param_2[0x14];
    uStack_178 = param_2[0x17];
    uStack_180 = param_2[0x16];
    uStack_208 = param_2[0x17];
    uStack_210 = param_2[0x16];
    uStack_168 = param_2[0x19];
    uStack_170 = param_2[0x18];
    uStack_268 = param_2[0xb];
    uStack_270 = param_2[10];
    uStack_1c8 = param_2[0xd];
    uStack_1d0 = param_2[0xc];
    uStack_258 = param_2[0xd];
    uStack_260 = param_2[0xc];
    uStack_1b8 = param_2[0xf];
    uStack_1c0 = param_2[0xe];
    uStack_248 = param_2[0xf];
    uStack_250 = param_2[0xe];
    uStack_1a8 = param_2[0x11];
    uStack_1b0 = param_2[0x10];
    uStack_238 = param_2[0x11];
    uStack_240 = param_2[0x10];
    uStack_198 = param_2[0x13];
    uStack_1a0 = param_2[0x12];
    uStack_1e8 = param_2[9];
    uStack_1f0 = param_2[8];
    uStack_1d8 = param_2[0xb];
    uStack_1e0 = param_2[10];
    uStack_278 = param_2[9];
    uStack_280 = param_2[8];
    uStack_1f8 = param_2[0x19];
    uStack_200 = param_2[0x18];
    uStack_288 = param_1[0x19];
    uStack_290 = param_1[0x18];
    iVar1 = (int)&uStack_310;
    func_0x000100d6ba5c();
    if (iVar1 == 1) {
      iVar1 = (int)&uStack_280;
      func_0x000100d6ba5c();
      if (iVar1 == 1) {
        uStack_3c8 = uStack_2a8;
        uStack_3d0 = uStack_2b0;
        uStack_3b8 = uStack_298;
        uStack_3c0 = uStack_2a0;
        uStack_3a8 = uStack_288;
        uStack_3b0 = uStack_290;
        uStack_408 = uStack_2e8;
        uStack_410 = uStack_2f0;
        uStack_3f8 = uStack_2d8;
        uStack_400 = uStack_2e0;
        uStack_3e8 = uStack_2c8;
        uStack_3f0 = uStack_2d0;
        uStack_3d8 = uStack_2b8;
        uStack_3e0 = uStack_2c0;
        uStack_428 = uStack_308;
        uStack_430 = uStack_310;
        uStack_418 = uStack_2f8;
        uStack_420 = uStack_300;
        func_0x000103cdf08c(&uStack_160,&uStack_d0,0x113000f50,&UNK_10dc781c0);
        func_0x000103cdf08c(&uStack_1f0,&uStack_d0,0x113000f50,&UNK_10dc781c0);
        FUN_103ce438c(&uStack_430,0x113000f50,&UNK_10dc781c0);
LAB_103cde570:
        uVar3 = (ulong)(param_1[4] != 0);
        if ((char)param_1[5] != '\x01') {
          uVar3 = param_1[4];
        }
        if ((char)param_2[5] == '\x01') {
          if (param_2[4] == 0) {
            if (uVar3 == 0) goto LAB_103cde5b8;
          }
          else if (uVar3 == 1) {
LAB_103cde5b8:
            uVar3 = param_1[6];
            func_0x000100e25fcc(uVar3,param_1[7],param_2[6],param_2[7]);
            uVar2 = (uint)uVar3;
            goto LAB_103cde470;
          }
        }
        else if (uVar3 == param_2[4]) goto LAB_103cde5b8;
      }
      else {
LAB_103cde40c:
        func_0x000107c610b4(&uStack_430,&uStack_310,0x120);
        func_0x000103cdf08c(&uStack_160,&uStack_d0,0x113000f50,&UNK_10dc781c0);
        func_0x000103cdf08c(&uStack_1f0,&uStack_d0,0x113000f50,&UNK_10dc781c0);
        FUN_103ce438c(&uStack_430,0x113000f58,&UNK_10dc76f40);
      }
    }
    else {
      uStack_458 = uStack_2a8;
      uStack_460 = uStack_2b0;
      uStack_448 = uStack_298;
      uStack_450 = uStack_2a0;
      uStack_438 = uStack_288;
      uStack_440 = uStack_290;
      uStack_498 = uStack_2e8;
      uStack_4a0 = uStack_2f0;
      uStack_488 = uStack_2d8;
      uStack_490 = uStack_2e0;
      uStack_478 = uStack_2c8;
      uStack_480 = uStack_2d0;
      uStack_468 = uStack_2b8;
      uStack_470 = uStack_2c0;
      uStack_4b8 = uStack_308;
      uStack_4c0 = uStack_310;
      uStack_4a8 = uStack_2f8;
      uStack_4b0 = uStack_300;
      iVar1 = (int)&uStack_280;
      func_0x000100d6ba5c();
      if (iVar1 == 1) goto LAB_103cde40c;
      uStack_4e8 = uStack_218;
      uStack_4f0 = uStack_220;
      uStack_4d8 = uStack_208;
      uStack_4e0 = uStack_210;
      uStack_4c8 = uStack_1f8;
      uStack_4d0 = uStack_200;
      uStack_528 = uStack_258;
      uStack_530 = uStack_260;
      uStack_518 = uStack_248;
      uStack_520 = uStack_250;
      uStack_508 = uStack_238;
      uStack_510 = uStack_240;
      uStack_4f8 = uStack_228;
      uStack_500 = uStack_230;
      uStack_548 = uStack_278;
      uStack_550 = uStack_280;
      uStack_538 = uStack_268;
      uStack_540 = uStack_270;
      uStack_3c8 = uStack_218;
      uStack_3d0 = uStack_220;
      uStack_3b8 = uStack_208;
      uStack_3c0 = uStack_210;
      uStack_3a8 = uStack_1f8;
      uStack_3b0 = uStack_200;
      uStack_408 = uStack_258;
      uStack_410 = uStack_260;
      uStack_3f8 = uStack_248;
      uStack_400 = uStack_250;
      uStack_3e8 = uStack_238;
      uStack_3f0 = uStack_240;
      uStack_3d8 = uStack_228;
      uStack_3e0 = uStack_230;
      uStack_428 = uStack_278;
      uStack_430 = uStack_280;
      uStack_418 = uStack_268;
      uStack_420 = uStack_270;
      uStack_68 = uStack_458;
      uStack_70 = uStack_460;
      uStack_58 = uStack_448;
      uStack_60 = uStack_450;
      uStack_48 = uStack_438;
      uStack_50 = uStack_440;
      uStack_a8 = uStack_498;
      uStack_b0 = uStack_4a0;
      uStack_98 = uStack_488;
      uStack_a0 = uStack_490;
      uStack_88 = uStack_478;
      uStack_90 = uStack_480;
      uStack_78 = uStack_468;
      uStack_80 = uStack_470;
      uStack_c8 = uStack_4b8;
      uStack_d0 = uStack_4c0;
      uStack_b8 = uStack_4a8;
      uStack_c0 = uStack_4b0;
      func_0x000103cdf08c(&uStack_160,auStack_5e0,0x113000f50,&UNK_10dc781c0);
      func_0x000103cdf08c(&uStack_1f0,auStack_5e0,0x113000f50,&UNK_10dc781c0);
      puVar4 = &uStack_d0;
      FUN_103ce50a8(puVar4,&uStack_430);
      FUN_103ce438c(&uStack_550,0x113000f50,&UNK_10dc781c0);
      FUN_103ce438c(&uStack_310,0x113000f50,&UNK_10dc781c0);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103cde570;
    }
  }
  uVar2 = 0;
LAB_103cde470:
  return uVar2 & 1;
}



/* Entry: 103cde5c8; end: 103cde887;  */

uint FUN_103cde5c8(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
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
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  int iVar3;
  
  iVar2 = (int)&lStack_370;
  iVar3 = (int)&lStack_370;
  plVar7 = &lStack_370;
  lStack_128 = param_1[0x15];
  lStack_130 = param_1[0x14];
  lStack_118 = param_1[0x17];
  lStack_120 = param_1[0x16];
  lStack_108 = param_1[0x19];
  lStack_110 = param_1[0x18];
  lStack_168 = param_1[0xd];
  lStack_170 = param_1[0xc];
  lStack_158 = param_1[0xf];
  lStack_160 = param_1[0xe];
  lStack_148 = param_1[0x11];
  lStack_150 = param_1[0x10];
  lStack_138 = param_1[0x13];
  lStack_140 = param_1[0x12];
  lStack_1a8 = param_1[5];
  lStack_1b0 = param_1[4];
  lStack_198 = param_1[7];
  lStack_1a0 = param_1[6];
  lStack_188 = param_1[9];
  lStack_190 = param_1[8];
  lStack_178 = param_1[0xb];
  lStack_180 = param_1[10];
  lStack_1c8 = param_1[1];
  lStack_1d0 = *param_1;
  lStack_1b8 = param_1[3];
  lStack_1c0 = param_1[2];
  iVar4 = (int)&lStack_1d0;
  func_0x000103cdef68();
  plVar6 = &lStack_1d0;
  func_0x000100d6b97c();
  if (iVar4 == 0) {
    lVar8 = *plVar6;
    lVar1 = plVar6[1];
    lStack_58 = param_2[0x15];
    lStack_60 = param_2[0x14];
    lStack_48 = param_2[0x17];
    lStack_50 = param_2[0x16];
    lStack_38 = param_2[0x19];
    lStack_40 = param_2[0x18];
    lStack_98 = param_2[0xd];
    lStack_a0 = param_2[0xc];
    lStack_88 = param_2[0xf];
    lStack_90 = param_2[0xe];
    lStack_78 = param_2[0x11];
    lStack_80 = param_2[0x10];
    lStack_68 = param_2[0x13];
    lStack_70 = param_2[0x12];
    lStack_d8 = param_2[5];
    lStack_e0 = param_2[4];
    lStack_c8 = param_2[7];
    lStack_d0 = param_2[6];
    lStack_b8 = param_2[9];
    lStack_c0 = param_2[8];
    lStack_a8 = param_2[0xb];
    lStack_b0 = param_2[10];
    lStack_f8 = param_2[1];
    lStack_100 = *param_2;
    lStack_e8 = param_2[3];
    lStack_f0 = param_2[2];
    iVar4 = (int)&lStack_100;
    func_0x000103cdef68();
    if (iVar4 == 0) {
      plVar6 = &lStack_100;
      func_0x000100d6b97c();
      if ((lVar8 == *plVar6) && (lVar1 == plVar6[1])) {
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8(lVar8,lVar1,*plVar6,plVar6[1],0);
        uVar5 = (uint)lVar8;
      }
      goto LAB_103cde85c;
    }
  }
  else if (iVar4 == 1) {
    lStack_68 = plVar6[0x13];
    lStack_70 = plVar6[0x12];
    lStack_58 = plVar6[0x15];
    lStack_60 = plVar6[0x14];
    lStack_48 = plVar6[0x17];
    lStack_50 = plVar6[0x16];
    lStack_38 = plVar6[0x19];
    lStack_40 = plVar6[0x18];
    lStack_a8 = plVar6[0xb];
    lStack_b0 = plVar6[10];
    lStack_98 = plVar6[0xd];
    lStack_a0 = plVar6[0xc];
    lStack_88 = plVar6[0xf];
    lStack_90 = plVar6[0xe];
    lStack_78 = plVar6[0x11];
    lStack_80 = plVar6[0x10];
    lStack_e8 = plVar6[3];
    lStack_f0 = plVar6[2];
    lStack_d8 = plVar6[5];
    lStack_e0 = plVar6[4];
    lStack_c8 = plVar6[7];
    lStack_d0 = plVar6[6];
    lStack_b8 = plVar6[9];
    lStack_c0 = plVar6[8];
    lStack_f8 = plVar6[1];
    lStack_100 = *plVar6;
    lStack_348 = param_2[5];
    lStack_350 = param_2[4];
    lStack_338 = param_2[7];
    lStack_340 = param_2[6];
    lStack_368 = param_2[1];
    lStack_370 = *param_2;
    lStack_358 = param_2[3];
    lStack_360 = param_2[2];
    lStack_308 = param_2[0xd];
    lStack_310 = param_2[0xc];
    lStack_2f8 = param_2[0xf];
    lStack_300 = param_2[0xe];
    lStack_328 = param_2[9];
    lStack_330 = param_2[8];
    lStack_318 = param_2[0xb];
    lStack_320 = param_2[10];
    lStack_2b8 = param_2[0x17];
    lStack_2c0 = param_2[0x16];
    lStack_2a8 = param_2[0x19];
    lStack_2b0 = param_2[0x18];
    lStack_2d8 = param_2[0x13];
    lStack_2e0 = param_2[0x12];
    lStack_2c8 = param_2[0x15];
    lStack_2d0 = param_2[0x14];
    lStack_2e8 = param_2[0x11];
    lStack_2f0 = param_2[0x10];
    func_0x000103cdef68();
    if (iVar2 == 1) {
LAB_103cde808:
      func_0x000100d6b97c();
      uStack_1f8 = plVar7[0x15];
      uStack_200 = plVar7[0x14];
      uStack_1e8 = plVar7[0x17];
      uStack_1f0 = plVar7[0x16];
      uStack_1d8 = plVar7[0x19];
      uStack_1e0 = plVar7[0x18];
      uStack_238 = plVar7[0xd];
      uStack_240 = plVar7[0xc];
      uStack_228 = plVar7[0xf];
      uStack_230 = plVar7[0xe];
      uStack_218 = plVar7[0x11];
      uStack_220 = plVar7[0x10];
      uStack_208 = plVar7[0x13];
      uStack_210 = plVar7[0x12];
      uStack_278 = plVar7[5];
      uStack_280 = plVar7[4];
      uStack_268 = plVar7[7];
      uStack_270 = plVar7[6];
      uStack_258 = plVar7[9];
      uStack_260 = plVar7[8];
      uStack_248 = plVar7[0xb];
      uStack_250 = plVar7[10];
      uStack_298 = plVar7[1];
      uStack_2a0 = *plVar7;
      uStack_288 = plVar7[3];
      uStack_290 = plVar7[2];
      plVar6 = &lStack_100;
      FUN_103cde220(plVar6,&uStack_2a0);
      uVar5 = (uint)plVar6;
      goto LAB_103cde85c;
    }
  }
  else {
    lStack_68 = plVar6[0x13];
    lStack_70 = plVar6[0x12];
    lStack_58 = plVar6[0x15];
    lStack_60 = plVar6[0x14];
    lStack_48 = plVar6[0x17];
    lStack_50 = plVar6[0x16];
    lStack_38 = plVar6[0x19];
    lStack_40 = plVar6[0x18];
    lStack_a8 = plVar6[0xb];
    lStack_b0 = plVar6[10];
    lStack_98 = plVar6[0xd];
    lStack_a0 = plVar6[0xc];
    lStack_88 = plVar6[0xf];
    lStack_90 = plVar6[0xe];
    lStack_78 = plVar6[0x11];
    lStack_80 = plVar6[0x10];
    lStack_e8 = plVar6[3];
    lStack_f0 = plVar6[2];
    lStack_d8 = plVar6[5];
    lStack_e0 = plVar6[4];
    lStack_c8 = plVar6[7];
    lStack_d0 = plVar6[6];
    lStack_b8 = plVar6[9];
    lStack_c0 = plVar6[8];
    lStack_f8 = plVar6[1];
    lStack_100 = *plVar6;
    lStack_348 = param_2[5];
    lStack_350 = param_2[4];
    lStack_338 = param_2[7];
    lStack_340 = param_2[6];
    lStack_368 = param_2[1];
    lStack_370 = *param_2;
    lStack_358 = param_2[3];
    lStack_360 = param_2[2];
    lStack_308 = param_2[0xd];
    lStack_310 = param_2[0xc];
    lStack_2f8 = param_2[0xf];
    lStack_300 = param_2[0xe];
    lStack_328 = param_2[9];
    lStack_330 = param_2[8];
    lStack_318 = param_2[0xb];
    lStack_320 = param_2[10];
    lStack_2b8 = param_2[0x17];
    lStack_2c0 = param_2[0x16];
    lStack_2a8 = param_2[0x19];
    lStack_2b0 = param_2[0x18];
    lStack_2d8 = param_2[0x13];
    lStack_2e0 = param_2[0x12];
    lStack_2c8 = param_2[0x15];
    lStack_2d0 = param_2[0x14];
    lStack_2e8 = param_2[0x11];
    lStack_2f0 = param_2[0x10];
    func_0x000103cdef68();
    if (iVar3 == 2) goto LAB_103cde808;
  }
  uVar5 = 0;
LAB_103cde85c:
  return uVar5 & 1;
}



/* Entry: 103cde888; end: 103cded77;  */

uint FUN_103cde888(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar5;
  long lVar6;
  undefined1 auStack_870 [208];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uVar4;
  
  uStack_3c8 = param_1[0x13];
  uStack_3d0 = param_1[0x12];
  uStack_148 = param_1[0x15];
  uStack_150 = param_1[0x14];
  uStack_3b8 = param_1[0x15];
  uStack_3c0 = param_1[0x14];
  uStack_138 = param_1[0x17];
  uStack_140 = param_1[0x16];
  uStack_3a8 = param_1[0x17];
  uStack_3b0 = param_1[0x16];
  uStack_128 = param_1[0x19];
  uStack_130 = param_1[0x18];
  uStack_408 = param_1[0xb];
  uStack_410 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_3f8 = param_1[0xd];
  uStack_400 = param_1[0xc];
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_3e8 = param_1[0xf];
  uStack_3f0 = param_1[0xe];
  uStack_168 = param_1[0x11];
  uStack_170 = param_1[0x10];
  uStack_3d8 = param_1[0x11];
  uStack_3e0 = param_1[0x10];
  uStack_158 = param_1[0x13];
  uStack_160 = param_1[0x12];
  uStack_448 = param_1[3];
  uStack_450 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_438 = param_1[5];
  uStack_440 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_428 = param_1[7];
  uStack_430 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_418 = param_1[9];
  uStack_420 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_458 = param_1[1];
  uStack_460 = *param_1;
  uStack_2f8 = param_2[0x13];
  uStack_300 = param_2[0x12];
  uStack_218 = param_2[0x15];
  uStack_220 = param_2[0x14];
  uStack_2e8 = param_2[0x15];
  uStack_2f0 = param_2[0x14];
  uStack_208 = param_2[0x17];
  uStack_210 = param_2[0x16];
  uStack_2d8 = param_2[0x17];
  uStack_2e0 = param_2[0x16];
  uStack_1f8 = param_2[0x19];
  uStack_200 = param_2[0x18];
  uStack_338 = param_2[0xb];
  uStack_340 = param_2[10];
  uStack_258 = param_2[0xd];
  uStack_260 = param_2[0xc];
  uStack_328 = param_2[0xd];
  uStack_330 = param_2[0xc];
  uStack_248 = param_2[0xf];
  uStack_250 = param_2[0xe];
  uStack_318 = param_2[0xf];
  uStack_320 = param_2[0xe];
  uStack_238 = param_2[0x11];
  uStack_240 = param_2[0x10];
  uStack_308 = param_2[0x11];
  uStack_310 = param_2[0x10];
  uStack_228 = param_2[0x13];
  uStack_230 = param_2[0x12];
  uStack_378 = param_2[3];
  uStack_380 = param_2[2];
  uStack_298 = param_2[5];
  uStack_2a0 = param_2[4];
  uStack_368 = param_2[5];
  uStack_370 = param_2[4];
  uStack_288 = param_2[7];
  uStack_290 = param_2[6];
  uStack_358 = param_2[7];
  uStack_360 = param_2[6];
  uStack_278 = param_2[9];
  uStack_280 = param_2[8];
  uStack_348 = param_2[9];
  uStack_350 = param_2[8];
  uStack_270 = param_2[10];
  uStack_268 = param_2[0xb];
  uStack_2b8 = param_2[1];
  uStack_2c0 = *param_2;
  uStack_2b0 = param_2[2];
  uStack_2a8 = param_2[3];
  uStack_388 = param_2[1];
  uStack_390 = *param_2;
  uStack_2c8 = param_2[0x19];
  uStack_2d0 = param_2[0x18];
  uStack_398 = param_1[0x19];
  uStack_3a0 = param_1[0x18];
  iVar1 = (int)&uStack_460;
  FUN_103cdef50();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_390;
    FUN_103cdef50();
    if (iVar1 != 1) goto LAB_103cdeb0c;
    uStack_558 = uStack_3b8;
    uStack_560 = uStack_3c0;
    uStack_548 = uStack_3a8;
    uStack_550 = uStack_3b0;
    uStack_538 = uStack_398;
    uStack_540 = uStack_3a0;
    uStack_598 = uStack_3f8;
    uStack_5a0 = uStack_400;
    uStack_588 = uStack_3e8;
    uStack_590 = uStack_3f0;
    uStack_578 = uStack_3d8;
    uStack_580 = uStack_3e0;
    uStack_568 = uStack_3c8;
    uStack_570 = uStack_3d0;
    uStack_5d8 = uStack_438;
    uStack_5e0 = uStack_440;
    uStack_5c8 = uStack_428;
    uStack_5d0 = uStack_430;
    uStack_5b8 = uStack_418;
    uStack_5c0 = uStack_420;
    uStack_5a8 = uStack_408;
    uStack_5b0 = uStack_410;
    uStack_5f8 = uStack_458;
    uStack_600 = uStack_460;
    uStack_5e8 = uStack_448;
    uStack_5f0 = uStack_450;
    func_0x000103cdf08c(&uStack_1f0,&uStack_120,0x113000f48,&UNK_10dc76f30);
    func_0x000103cdf08c(&uStack_2c0,&uStack_120,0x113000f48,&UNK_10dc76f30);
    FUN_103ce438c(&uStack_600,0x113000f48,&UNK_10dc76f30);
LAB_103cdecbc:
    lVar5 = param_1[0x1a];
    lVar6 = param_2[0x1a];
    if (*(char *)(param_2 + 0x1b) != '\x01') {
      if (lVar5 == lVar6) goto LAB_103cdecf4;
      goto LAB_103cdeb6c;
    }
    if (3 < lVar6) {
      if (lVar6 < 6) {
        if (lVar6 == 4) {
          if (lVar5 == 4) goto LAB_103cdecf4;
        }
        else if (lVar5 == 5) goto LAB_103cdecf4;
      }
      else if (lVar6 == 6) {
        if (lVar5 == 6) goto LAB_103cdecf4;
      }
      else if (lVar5 == 7) goto LAB_103cdecf4;
      goto LAB_103cdeb6c;
    }
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_103cdecf4:
          uVar4 = param_1[0x1c];
          func_0x000100e25fcc(uVar4,param_1[0x1d],param_2[0x1c],param_2[0x1d]);
          uVar2 = (uint)uVar4;
          goto LAB_103cdeb70;
        }
      }
      else if (lVar5 == 1) goto LAB_103cdecf4;
    }
    else if (lVar6 == 2) {
      if (lVar5 == 2) goto LAB_103cdecf4;
    }
    else if (lVar5 == 3) goto LAB_103cdecf4;
  }
  else {
    uStack_628 = uStack_3b8;
    uStack_630 = uStack_3c0;
    uStack_618 = uStack_3a8;
    uStack_620 = uStack_3b0;
    uStack_608 = uStack_398;
    uStack_610 = uStack_3a0;
    uStack_668 = uStack_3f8;
    uStack_670 = uStack_400;
    uStack_658 = uStack_3e8;
    uStack_660 = uStack_3f0;
    uStack_648 = uStack_3d8;
    uStack_650 = uStack_3e0;
    uStack_638 = uStack_3c8;
    uStack_640 = uStack_3d0;
    uStack_6a8 = uStack_438;
    uStack_6b0 = uStack_440;
    uStack_698 = uStack_428;
    uStack_6a0 = uStack_430;
    uStack_688 = uStack_418;
    uStack_690 = uStack_420;
    uStack_678 = uStack_408;
    uStack_680 = uStack_410;
    uStack_6c8 = uStack_458;
    uStack_6d0 = uStack_460;
    uStack_6b8 = uStack_448;
    uStack_6c0 = uStack_450;
    iVar1 = (int)&uStack_390;
    FUN_103cdef50();
    if (iVar1 != 1) {
      uStack_6f8 = uStack_2e8;
      uStack_700 = uStack_2f0;
      uStack_6e8 = uStack_2d8;
      uStack_6f0 = uStack_2e0;
      uStack_6d8 = uStack_2c8;
      uStack_6e0 = uStack_2d0;
      uStack_738 = uStack_328;
      uStack_740 = uStack_330;
      uStack_728 = uStack_318;
      uStack_730 = uStack_320;
      uStack_718 = uStack_308;
      uStack_720 = uStack_310;
      uStack_708 = uStack_2f8;
      uStack_710 = uStack_300;
      uStack_778 = uStack_368;
      uStack_780 = uStack_370;
      uStack_768 = uStack_358;
      uStack_770 = uStack_360;
      uStack_758 = uStack_348;
      uStack_760 = uStack_350;
      uStack_748 = uStack_338;
      uStack_750 = uStack_340;
      uStack_798 = uStack_388;
      uStack_7a0 = uStack_390;
      uStack_788 = uStack_378;
      uStack_790 = uStack_380;
      uStack_558 = uStack_2e8;
      uStack_560 = uStack_2f0;
      uStack_548 = uStack_2d8;
      uStack_550 = uStack_2e0;
      uStack_538 = uStack_2c8;
      uStack_540 = uStack_2d0;
      uStack_598 = uStack_328;
      uStack_5a0 = uStack_330;
      uStack_588 = uStack_318;
      uStack_590 = uStack_320;
      uStack_578 = uStack_308;
      uStack_580 = uStack_310;
      uStack_568 = uStack_2f8;
      uStack_570 = uStack_300;
      uStack_5d8 = uStack_368;
      uStack_5e0 = uStack_370;
      uStack_5c8 = uStack_358;
      uStack_5d0 = uStack_360;
      uStack_5b8 = uStack_348;
      uStack_5c0 = uStack_350;
      uStack_5a8 = uStack_338;
      uStack_5b0 = uStack_340;
      uStack_5f8 = uStack_388;
      uStack_600 = uStack_390;
      uStack_5e8 = uStack_378;
      uStack_5f0 = uStack_380;
      uStack_78 = uStack_628;
      uStack_80 = uStack_630;
      uStack_68 = uStack_618;
      uStack_70 = uStack_620;
      uStack_58 = uStack_608;
      uStack_60 = uStack_610;
      uStack_b8 = uStack_668;
      uStack_c0 = uStack_670;
      uStack_a8 = uStack_658;
      uStack_b0 = uStack_660;
      uStack_88 = uStack_638;
      uStack_90 = uStack_640;
      uStack_98 = uStack_648;
      uStack_a0 = uStack_650;
      uStack_f8 = uStack_6a8;
      uStack_100 = uStack_6b0;
      uStack_e8 = uStack_698;
      uStack_f0 = uStack_6a0;
      uStack_c8 = uStack_678;
      uStack_d0 = uStack_680;
      uStack_d8 = uStack_688;
      uStack_e0 = uStack_690;
      uStack_108 = uStack_6b8;
      uStack_110 = uStack_6c0;
      uStack_118 = uStack_6c8;
      uStack_120 = uStack_6d0;
      func_0x000103cdf08c(&uStack_1f0,auStack_870,0x113000f48,&UNK_10dc76f30);
      func_0x000103cdf08c(&uStack_2c0,auStack_870,0x113000f48,&UNK_10dc76f30);
      puVar3 = &uStack_120;
      FUN_103cde5c8(puVar3,&uStack_600);
      FUN_103ce438c(&uStack_7a0,0x113000f48,&UNK_10dc76f30);
      FUN_103ce438c(&uStack_460,0x113000f48,&UNK_10dc76f30);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103cdecbc;
      goto LAB_103cdeb6c;
    }
LAB_103cdeb0c:
    func_0x000107c610b4(&uStack_600,&uStack_460,0x1a0);
    func_0x000103cdf08c(&uStack_1f0,&uStack_120,0x113000f48,&UNK_10dc76f30);
    func_0x000103cdf08c(&uStack_2c0,&uStack_120,0x113000f48,&UNK_10dc76f30);
    FUN_103ce438c(&uStack_600,0x113001228,&UNK_10dc77d10);
  }
LAB_103cdeb6c:
  uVar2 = 0;
LAB_103cdeb70:
  return uVar2 & 1;
}


