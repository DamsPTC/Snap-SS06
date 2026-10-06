/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cec8e4; end: 103cec91b;  */

uint FUN_103cec8e4(long param_1,long param_2)

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
  func_0x000103cf9bfc();
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



/* Entry: 103cec91c; end: 103cec9bb;  */

/* WARNING: Possible PIC construction at 0x000103cec968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cec978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cec96c) */
/* WARNING: Removing unreachable block (ram,0x000103cec97c) */

void FUN_103cec91c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001a08 != -1) {
    func_0x000107c61568(0x113001a08,0x103cec864);
  }
  uVar5 = uRam000000011380efe8;
  uVar4 = uRam000000011380efe0;
  uVar3 = uRam000000011380efd8;
  uVar2 = uRam000000011380efd0;
  uVar1 = uRam000000011380efc8;
  *param_1 = uRam000000011380efc0;
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



/* Entry: 103cec9bc; end: 103cec9cf;  */

void FUN_103cec9bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001ee0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001ee0,&UNK_10dc7a398);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cec9d0; end: 103ceca07;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cec9d0(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cf33b8();
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



/* Entry: 103ceca08; end: 103ceca4f;  */

void FUN_103ceca08(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a520,0x14,2);
  uRam000000011380eff8 = uStack_38;
  uRam000000011380eff0 = uStack_40;
  uRam000000011380f008 = uStack_28;
  uRam000000011380f000 = uStack_30;
  uRam000000011380f018 = uStack_18;
  uRam000000011380f010 = uStack_20;
  return;
}



/* Entry: 103ceca50; end: 103cecae7;  */

void FUN_103ceca50(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103cecaa4:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000103cecac0;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_103ceca8c;
code_r0x000103cecac0:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_103ceca8c:
    (*pcVar3)();
  }
  goto LAB_103cecaa4;
}



/* Entry: 103cecae8; end: 103cecb8b;  */

void FUN_103cecae8(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 103cecb8c; end: 103cecbc3;  */

undefined1  [16] FUN_103cecb8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4ee0;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 103cecbc4; end: 103cecbfb;  */

uint FUN_103cecbc4(long param_1,long param_2)

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
  func_0x000103cf9bbc();
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



/* Entry: 103cecbfc; end: 103cecc9b;  */

/* WARNING: Possible PIC construction at 0x000103cecc48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cecc58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cecc4c) */
/* WARNING: Removing unreachable block (ram,0x000103cecc5c) */

void FUN_103cecbfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001a18 != -1) {
    func_0x000107c61568(0x113001a18,FUN_103ceca08);
  }
  uVar5 = uRam000000011380f018;
  uVar4 = uRam000000011380f010;
  uVar3 = uRam000000011380f008;
  uVar2 = uRam000000011380f000;
  uVar1 = uRam000000011380eff8;
  *param_1 = uRam000000011380eff0;
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



/* Entry: 103cecc9c; end: 103ceccaf;  */

void FUN_103cecc9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001ed0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001ed0,&UNK_10dc7a390);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ceccb0; end: 103cecce3;  */

void FUN_103ceccb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cecce4; end: 103cecdf7;  */

void FUN_103cecce4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103cecdf8; end: 103cece3f;  */

void FUN_103cecdf8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a509,9,2);
  uRam000000011380f028 = uStack_38;
  uRam000000011380f020 = uStack_40;
  uRam000000011380f038 = uStack_28;
  uRam000000011380f030 = uStack_30;
  uRam000000011380f048 = uStack_18;
  uRam000000011380f040 = uStack_20;
  return;
}



/* Entry: 103cece40; end: 103ceceef;  */

void FUN_103cece40(undefined8 param_1,long param_2,long param_3,code *param_4)

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



/* Entry: 103cecef0; end: 103cecf93;  */

void FUN_103cecef0(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
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



/* Entry: 103cecf94; end: 103cecfcb;  */

undefined1  [16] FUN_103cecf94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4f10;
  auVar1._0_8_ = 0xd00000000000002d;
  return auVar1;
}



/* Entry: 103cecfcc; end: 103ced033;  */

void FUN_103cecfcc(void)

{
  FUN_103cece40();
  return;
}



/* Entry: 103ced034; end: 103ced06b;  */

uint FUN_103ced034(long param_1,long param_2)

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
  func_0x000103cf9b7c();
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



/* Entry: 103ced06c; end: 103ced09f;  */

uint FUN_103ced06c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_103cf0ebc(uVar1,*(undefined1 *)(unaff_x20 + 1),unaff_x20[2],unaff_x20[3],*param_1,
                *(undefined1 *)(param_1 + 1),param_1[2],param_1[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 103ced0a0; end: 103ced13f;  */

/* WARNING: Possible PIC construction at 0x000103ced0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ced0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ced0f0) */
/* WARNING: Removing unreachable block (ram,0x000103ced100) */

void FUN_103ced0a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001a28 != -1) {
    func_0x000107c61568(0x113001a28,FUN_103cecdf8);
  }
  uVar5 = uRam000000011380f048;
  uVar4 = uRam000000011380f040;
  uVar3 = uRam000000011380f038;
  uVar2 = uRam000000011380f030;
  uVar1 = uRam000000011380f028;
  *param_1 = uRam000000011380f020;
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



/* Entry: 103ced140; end: 103ced153;  */

void FUN_103ced140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001ec0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001ec0,&UNK_10dc7a388);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ced154; end: 103ced267;  */

void FUN_103ced154(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103ced268; end: 103ced2e3;  */

uint FUN_103ced268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_103cf0ebc(uVar1,*(undefined1 *)(param_1 + 1),param_1[2],param_1[3],*param_2,
                *(undefined1 *)(param_2 + 1),param_2[2],param_2[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 103ced2e4; end: 103ced383;  */

/* WARNING: Possible PIC construction at 0x000103ced330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ced340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ced334) */
/* WARNING: Removing unreachable block (ram,0x000103ced344) */

void FUN_103ced2e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001a40 != -1) {
    func_0x000107c61568(0x113001a40,0x103ced29c);
  }
  uVar5 = uRam000000011380f078;
  uVar4 = uRam000000011380f070;
  uVar3 = uRam000000011380f068;
  uVar2 = uRam000000011380f060;
  uVar1 = uRam000000011380f058;
  *param_1 = uRam000000011380f050;
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



/* Entry: 103ced384; end: 103ced3cb;  */

void FUN_103ced384(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a440,0x9d,2);
  uRam000000011380f088 = uStack_38;
  uRam000000011380f080 = uStack_40;
  uRam000000011380f098 = uStack_28;
  uRam000000011380f090 = uStack_30;
  uRam000000011380f0a8 = uStack_18;
  uRam000000011380f0a0 = uStack_20;
  return;
}



/* Entry: 103ced3cc; end: 103ced53b;  */

/* WARNING: Removing unreachable block (ram,0x000103ced538) */

void FUN_103ced3cc(undefined8 param_1,undefined8 param_2,long param_3)

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
      puVar3 = &UNK_11078f958;
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cdfc00();
        lVar2 = unaff_x20 + 0x38;
        puVar3 = &UNK_110700950;
        goto code_r0x000103ced524;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015efcec();
        lVar2 = unaff_x20 + 0x88;
        goto code_r0x000103ced524;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015efcec();
        lVar2 = unaff_x20 + 0xa8;
code_r0x000103ced524:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        goto LAB_103ced454;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      default:
        goto LAB_103ced454;
      }
      (*pcVar4)();
LAB_103ced454:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103ced53c; end: 103ced777;  */

void FUN_103ced53c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
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
      if (((uVar1 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) &&
         ((unaff_x20[6] == 0 ||
          ((**(code **)(param_3 + 0x20))(unaff_x20[6],4,param_2,param_3), unaff_x21 == 0)))) {
        uVar4 = unaff_x20[7];
        uVar1 = unaff_x20[8];
        uVar2 = uVar4;
        func_0x000103d1d830(uVar4,(char)uVar1);
        uVar3 = 0;
        func_0x000103d1d830(0,1);
        if (uVar2 != uVar3) {
          pcVar5 = *(code **)(param_3 + 0x80);
          uStack_60 = uVar4;
          uStack_58 = (char)uVar1;
          func_0x000103cdfc00();
          (*pcVar5)(&uStack_60,5,&UNK_110700950,uVar3,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar2 = unaff_x20[10];
        uVar1 = unaff_x20[9] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[9],uVar2,6,param_2,param_3), unaff_x21 == 0)) {
          uVar2 = unaff_x20[0xc];
          uVar1 = unaff_x20[0xb] & 0xffffffffffff;
          if ((uVar2 & 0x2000000000000000) != 0) {
            uVar1 = uVar2 >> 0x38 & 0xf;
          }
          if (((uVar1 == 0) ||
              ((**(code **)(param_3 + 0x70))(unaff_x20[0xb],uVar2,7,param_2,param_3), unaff_x21 == 0
              )) && (FUN_103ced778(), unaff_x21 == 0)) {
            FUN_103ced804();
            uVar2 = unaff_x20[0xe];
            uVar1 = unaff_x20[0xd] & 0xffffffffffff;
            if ((uVar2 & 0x2000000000000000) != 0) {
              uVar1 = uVar2 >> 0x38 & 0xf;
            }
            if (uVar1 != 0) {
              (**(code **)(param_3 + 0x70))(unaff_x20[0xd],uVar2,10,param_2,param_3);
            }
            func_0x000100076224(param_1,unaff_x20[0xf],unaff_x20[0x10],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 103ced778; end: 103ced803;  */

void FUN_103ced778(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xa0);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x90);
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar1)(&uStack_60,8,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103ced804; end: 103ced88f;  */

void FUN_103ced804(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xc0);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb0);
    uStack_60 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar1)(&uStack_60,9,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103ced890; end: 103ced8ff;  */

void FUN_103ced890(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0xe000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0xe000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0xe000000000000000;
  param_1[0x10] = 0xc000000000000000;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xf000000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xf000000000000000;
  return;
}



/* Entry: 103ced900; end: 103ced92f;  */

undefined1  [16] FUN_103ced900(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x78);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return auVar1;
}



/* Entry: 103ced930; end: 103ced963;  */

void FUN_103ced930(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  return;
}



/* Entry: 103ced964; end: 103ced977;  */

undefined1  [16] FUN_103ced964(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x78;
  auVar1._0_8_ = 0x103ced974;
  return auVar1;
}



/* Entry: 103ced978; end: 103ced98b;  */

void FUN_103ced978(void)

{
  FUN_103ced3cc();
  return;
}



/* Entry: 103ced98c; end: 103ced9eb;  */

void FUN_103ced98c(void)

{
  FUN_103ced53c();
  return;
}



/* Entry: 103ced9ec; end: 103ced9ef;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ced9ec(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103ced9f0; end: 103ceda27;  */

uint FUN_103ced9f0(long param_1,long param_2)

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
  func_0x000103cf9b3c();
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



/* Entry: 103ceda28; end: 103cedac7;  */

uint FUN_103ceda28(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_30 = param_1[0x18];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_100 = unaff_x20[0x18];
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  FUN_103cf0338(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 103cedac8; end: 103cedb67;  */

/* WARNING: Possible PIC construction at 0x000103cedb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cedb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cedb18) */
/* WARNING: Removing unreachable block (ram,0x000103cedb28) */

void FUN_103cedac8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001a48 != -1) {
    func_0x000107c61568(0x113001a48,FUN_103ced384);
  }
  uVar5 = uRam000000011380f0a8;
  uVar4 = uRam000000011380f0a0;
  uVar3 = uRam000000011380f098;
  uVar2 = uRam000000011380f090;
  uVar1 = uRam000000011380f088;
  *param_1 = uRam000000011380f080;
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



/* Entry: 103cedb68; end: 103cedba3;  */

void FUN_103cedb68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001eb0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001eb0,&UNK_10dc7a380);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cedba4; end: 103cedcff;  */

void FUN_103cedba4(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
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



/* Entry: 103cedd00; end: 103cedd9f;  */

uint FUN_103cedd00(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_103cf0338(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 103cedda0; end: 103cedde7;  */

void FUN_103cedda0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a430,0xd,2);
  uRam000000011380f0b8 = uStack_38;
  uRam000000011380f0b0 = uStack_40;
  uRam000000011380f0c8 = uStack_28;
  uRam000000011380f0c0 = uStack_30;
  uRam000000011380f0d8 = uStack_18;
  uRam000000011380f0d0 = uStack_20;
  return;
}



/* Entry: 103cedde8; end: 103cede6b;  */

void FUN_103cedde8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 103cede6c; end: 103cedef3;  */

void FUN_103cede6c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 103cedef4; end: 103cedf2b;  */

undefined1  [16] FUN_103cedef4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4f80;
  auVar1._0_8_ = 0xd000000000000033;
  return auVar1;
}



/* Entry: 103cedf2c; end: 103cedf63;  */

uint FUN_103cedf2c(long param_1,long param_2)

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
  FUN_103cf9afc();
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



/* Entry: 103cedf64; end: 103cee07b;  */

/* WARNING: Possible PIC construction at 0x000103cedf98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cedf9c) */
/* WARNING: Removing unreachable block (ram,0x000103cedfc4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cedf64(undefined8 *param_1)

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
  
  lVar23 = param_1[2];
  uVar15 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
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



/* Entry: 103cee07c; end: 103cee08f;  */

void FUN_103cee07c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001ea0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001ea0,&UNK_10dc7a378);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cee090; end: 103cee0c3;  */

void FUN_103cee090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cee0c4; end: 103cee23f;  */

void FUN_103cee0c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cee240; end: 103cee71f;  */

/* WARNING: Possible PIC construction at 0x000103cee750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cee794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cee7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cee824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cee828) */
/* WARNING: Removing unreachable block (ram,0x000103cee7e0) */
/* WARNING: Removing unreachable block (ram,0x000103cee798) */
/* WARNING: Removing unreachable block (ram,0x000103cee754) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cee240(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  byte **ppbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 *unaff_x26;
  long lVar26;
  undefined1 *puVar27;
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
  code *pcStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  puVar27 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = param_1[2];
  if (lVar26 == param_2[2]) {
    if ((lVar26 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      puVar18 = param_2 + 6;
      unaff_x26 = param_1 + 6;
      do {
        unaff_x23 = (byte *)unaff_x26[-2];
        unaff_x22 = (undefined8 *)unaff_x26[-1];
        unaff_x19 = (byte *)*unaff_x26;
        unaff_x20 = (byte *)puVar18[-2];
        unaff_x25 = (byte *)puVar18[-1];
        unaff_x24 = (byte *)*puVar18;
        func_0x00010006c00c(unaff_x23,unaff_x22);
        func_0x000107c6157c(unaff_x19);
        pbStack_90 = unaff_x20;
        func_0x00010006c00c(unaff_x20,unaff_x25);
        pbVar13 = unaff_x24;
        func_0x000107c6157c();
        param_2 = unaff_x22;
        if (unaff_x19 != unaff_x24) {
          func_0x000107c6157c(unaff_x19);
          func_0x000107c6157c(unaff_x24);
          unaff_x20 = unaff_x19;
          FUN_103ce6cc8(unaff_x19,unaff_x24);
          func_0x000107c61574(unaff_x24);
          pbVar13 = unaff_x19;
          func_0x000107c61574();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_103cee350;
LAB_103cee698:
          func_0x00010006c090(pbStack_90,unaff_x25);
          func_0x000107c61574(unaff_x24);
          func_0x00010006c090(unaff_x23);
          func_0x000107c61574(unaff_x19);
          goto LAB_103cee6c0;
        }
LAB_103cee350:
        pbVar12 = pbStack_90;
        uVar4 = (uint)((ulong)unaff_x22 >> 0x20);
        uVar19 = uVar4 >> 0x1e;
        uVar5 = (uint)((ulong)unaff_x25 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar8 = (int)unaff_x23;
        if ((ulong)unaff_x22 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((unaff_x23 != (byte *)0x0) || (unaff_x22 != (undefined8 *)0xc000000000000000)) ||
              ((ulong)unaff_x25 >> 0x3e < 3)) ||
             ((uVar21 = 0, pbStack_90 != (byte *)0x0 || (unaff_x25 != (byte *)0xc000000000000000))))
          goto joined_r0x000103cee3c8;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(unaff_x24);
          pbVar13 = (byte *)0x0;
          param_2 = (undefined8 *)0xc000000000000000;
LAB_103cee2bc:
          func_0x00010006c090(pbVar13);
          func_0x000107c61574(unaff_x19);
        }
        else {
          if (uVar4 >> 0x1e < 2) {
            if (uVar19 == 0) {
              uVar21 = (ulong)unaff_x22 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)unaff_x23 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103cee708);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000103cee3c8:
            if (uVar5 >> 0x1e < 2) goto LAB_103cee404;
LAB_103cee3cc:
            if (uVar22 == 2) {
              uVar23 = *(long *)(pbStack_90 + 0x18) - *(long *)(pbStack_90 + 0x10);
              if (SBORROW8(*(long *)(pbStack_90 + 0x18),*(long *)(pbStack_90 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103cee700);
                (*pcVar6)();
              }
              goto LAB_103cee424;
            }
            if (uVar21 != 0) goto LAB_103cee698;
LAB_103cee2a0:
            func_0x00010006c090(pbStack_90,unaff_x25);
            func_0x000107c61574(unaff_x24);
            pbVar13 = unaff_x23;
            goto LAB_103cee2bc;
          }
          if (uVar19 == 2) {
            uVar21 = *(long *)(unaff_x23 + 0x18) - *(long *)(unaff_x23 + 0x10);
            if (SBORROW8(*(long *)(unaff_x23 + 0x18),*(long *)(unaff_x23 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103cee70c);
              (*pcVar6)();
            }
            goto joined_r0x000103cee3c8;
          }
          uVar21 = 0;
          if (1 < uVar22) goto LAB_103cee3cc;
LAB_103cee404:
          if (uVar22 == 0) {
            uVar23 = (ulong)unaff_x25 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbStack_90 >> 0x20);
            if (SBORROW4(iVar20,(int)pbStack_90)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103cee704);
              (*pcVar6)();
            }
            uVar23 = (ulong)(iVar20 - (int)pbStack_90);
          }
LAB_103cee424:
          if (uVar21 != uVar23) goto LAB_103cee698;
          if ((long)uVar21 < 1) goto LAB_103cee2a0;
          if (uVar19 < 2) {
            if (uVar19 == 0) {
              abStack_80[0] = (byte)unaff_x23;
              abStack_80[1] = (byte)((ulong)unaff_x23 >> 8);
              abStack_80[2] = (byte)((ulong)unaff_x23 >> 0x10);
              abStack_80[3] = (byte)((ulong)unaff_x23 >> 0x18);
              abStack_80[4] = (byte)((ulong)unaff_x23 >> 0x20);
              abStack_80[5] = (byte)((ulong)unaff_x23 >> 0x28);
              abStack_80[6] = (byte)((ulong)unaff_x23 >> 0x30);
              abStack_80[7] = (byte)((ulong)unaff_x23 >> 0x38);
              abStack_80[8] = (byte)unaff_x22;
              abStack_80[9] = (byte)((ulong)unaff_x22 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x22 >> 0x28);
              pbVar13 = abStack_80 + ((ulong)unaff_x22 >> 0x30 & 0xff);
              goto LAB_103cee5ac;
            }
            lVar25 = (long)iVar8;
            pbStack_a0 = (byte *)(((long)unaff_x23 >> 0x20) - lVar25);
            if ((long)unaff_x23 >> 0x20 < lVar25) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103cee710);
              uStack_98 = unaff_x21;
              (*pcVar6)();
            }
            uStack_98 = unaff_x21;
            func_0x000107c5ec30();
            if (pbVar13 == (byte *)0x0) {
              func_0x000107c5ec38();
              pbVar12 = (byte *)0x0;
              pbVar17 = (byte *)0x0;
            }
            else {
              pbStack_a8 = pbVar13;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103cee71c);
                (*pcVar6)();
              }
              pbVar14 = pbStack_a8 + (lVar25 - (long)pbVar13);
              func_0x000107c5ec38();
              if ((long)pbStack_a0 <= (long)pbVar13) {
                pbVar13 = pbStack_a0;
              }
              pbVar12 = (byte *)0x0;
              if (pbVar14 != (byte *)0x0) {
                pbVar12 = pbVar14;
              }
              pbVar17 = (byte *)0x0;
              if (pbVar14 != (byte *)0x0) {
                pbVar17 = pbVar13 + (long)pbVar14;
              }
            }
LAB_103cee64c:
            unaff_x20 = pbStack_90;
            unaff_x21 = uStack_98;
            func_0x000100e25bdc(abStack_80,pbVar12,pbVar17,pbStack_90,unaff_x25);
            func_0x00010006c090(unaff_x20,unaff_x25);
            func_0x000107c61574(unaff_x24);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            bVar28 = abStack_80[0];
          }
          else {
            if (uVar19 == 2) {
              pbStack_a0 = *(byte **)(unaff_x23 + 0x10);
              pbStack_a8 = *(byte **)(unaff_x23 + 0x18);
              uStack_98 = unaff_x21;
              func_0x000107c5ec30();
              pbStack_b0 = unaff_x23;
              if (pbVar13 == (byte *)0x0) {
                pbVar12 = (byte *)0x0;
              }
              else {
                pbVar17 = pbVar13;
                func_0x000107c5ec3c();
                if (SBORROW8((long)pbStack_a0,(long)pbVar17)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x103cee718);
                  (*pcVar6)();
                }
                pbVar12 = pbVar13 + ((long)pbStack_a0 - (long)pbVar17);
                pbVar13 = pbVar17;
              }
              pbVar17 = pbStack_a8 + -(long)pbStack_a0;
              if (SBORROW8((long)pbStack_a8,(long)pbStack_a0)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103cee714);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x23 = pbStack_b0;
              if (pbVar12 == (byte *)0x0) {
                pbVar17 = (byte *)0x0;
              }
              else {
                if ((long)pbVar17 <= (long)pbVar13) {
                  pbVar13 = pbVar17;
                }
                pbVar17 = pbVar13 + (long)pbVar12;
              }
              goto LAB_103cee64c;
            }
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
            pbVar13 = abStack_80;
LAB_103cee5ac:
            func_0x000100e25bdc(&bStack_81,abStack_80,pbVar13,pbStack_90,unaff_x25);
            func_0x00010006c090(pbVar12,unaff_x25);
            func_0x000107c61574(unaff_x24);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            unaff_x20 = pbVar12;
            bVar28 = bStack_81;
          }
          if ((bVar28 & 1) == 0) goto LAB_103cee6c0;
        }
        puVar18 = puVar18 + 3;
        unaff_x26 = unaff_x26 + 3;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    pbVar13 = (byte *)0x1;
  }
  else {
LAB_103cee6c0:
    pbVar13 = (byte *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar13;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_103cee720;
  pbVar14 = *(byte **)pbVar13;
  pbVar16 = *(byte **)(pbVar13 + 8);
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar14 != pbVar17 || pbVar16 != pbVar12) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar14,pbVar16,pbVar17,pbVar12,0);
    return pbVar14;
  }
  uVar21 = *(ulong *)(pbVar13 + 0x10);
  if ((uVar21 == param_2[2] && *(long *)(pbVar13 + 0x18) == param_2[3]) ||
     (func_0x000107c605b8(), (uVar21 & 1) != 0)) {
    pbVar14 = *(byte **)(pbVar13 + 0x20);
    pbVar16 = *(byte **)(pbVar13 + 0x28);
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar14 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
    uVar21 = *(ulong *)(pbVar13 + 0x30);
    if (((uVar21 == param_2[6]) && (*(long *)(pbVar13 + 0x38) == param_2[7])) ||
       (func_0x000107c605b8(), (uVar21 & 1) != 0)) {
      pbVar14 = *(byte **)(pbVar13 + 0x40);
      pbVar16 = *(byte **)(pbVar13 + 0x48);
      pbVar17 = (byte *)param_2[8];
      pbVar12 = (byte *)param_2[9];
      if ((pbVar14 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
      uVar21 = *(ulong *)(pbVar13 + 0x50);
      if (((uVar21 == param_2[10]) && (*(long *)(pbVar13 + 0x58) == param_2[0xb])) ||
         (func_0x000107c605b8(), (uVar21 & 1) != 0)) {
        pbVar14 = *(byte **)(pbVar13 + 0x60);
        pbVar16 = *(byte **)(pbVar13 + 0x68);
        pbVar17 = (byte *)param_2[0xc];
        pbVar12 = (byte *)param_2[0xd];
        if ((pbVar14 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
        uVar21 = *(ulong *)(pbVar13 + 0x70);
        if (((uVar21 == param_2[0xe]) && (*(long *)(pbVar13 + 0x78) == param_2[0xf])) ||
           (func_0x000107c605b8(), (uVar21 & 1) != 0)) {
          pbVar10 = *(byte **)(pbVar13 + 0x80);
          pbVar13 = *(byte **)(pbVar13 + 0x88);
          lVar26 = param_2[0x10];
          puVar18 = (undefined8 *)param_2[0x11];
          ppbVar7 = &pbStack_b0;
          do {
            *(undefined8 **)((long)ppbVar7 + -0x50) = unaff_x26;
            *(byte **)((long)ppbVar7 + -0x48) = unaff_x25;
            *(byte **)((long)ppbVar7 + -0x40) = unaff_x24;
            *(byte **)((long)ppbVar7 + -0x38) = unaff_x23;
            *(undefined8 **)((long)ppbVar7 + -0x30) = unaff_x22;
            *(undefined8 *)((long)ppbVar7 + -0x28) = unaff_x21;
            *(byte **)((long)ppbVar7 + -0x20) = unaff_x20;
            *(byte **)((long)ppbVar7 + -0x18) = unaff_x19;
            *(undefined1 **)((long)ppbVar7 + -0x10) = puVar27;
            *(code **)((long)ppbVar7 + -8) = pcStack_b8;
            *(undefined8 *)((long)ppbVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
            ;
            uVar4 = (uint)((ulong)pbVar13 >> 0x20);
            uVar19 = uVar4 >> 0x1e;
            uVar5 = (uint)((ulong)puVar18 >> 0x20);
            uVar22 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar15 = pbVar13;
            if ((ulong)pbVar13 >> 0x3e == 3) {
              uVar21 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar13 != (byte *)0xc000000000000000)) ||
                  ((ulong)puVar18 >> 0x3e < 3)) ||
                 ((uVar21 = 0, lVar26 != 0 || (puVar18 != (undefined8 *)0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar19 == 0) {
                uVar21 = (ulong)pbVar13 >> 0x30 & 0xff;
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
              if (uVar22 == 0) {
                uVar23 = (ulong)puVar18 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar20 = (int)((ulong)lVar26 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar26)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar19 == 2) {
                uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
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
                uVar23 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
                if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
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
                    *(char *)((long)ppbVar7 + -0x70) = (char)pbVar10;
                    *(char *)((long)ppbVar7 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                    *(char *)((long)ppbVar7 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                    *(char *)((long)ppbVar7 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                    *(char *)((long)ppbVar7 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                    *(char *)((long)ppbVar7 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                    *(char *)((long)ppbVar7 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                    *(char *)((long)ppbVar7 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                    *(char *)((long)ppbVar7 + -0x68) = (char)pbVar13;
                    *(char *)((long)ppbVar7 + -0x67) = (char)((ulong)pbVar13 >> 8);
                    *(char *)((long)ppbVar7 + -0x66) = (char)((ulong)pbVar13 >> 0x10);
                    *(char *)((long)ppbVar7 + -0x65) = (char)((ulong)pbVar13 >> 0x18);
                    *(char *)((long)ppbVar7 + -100) = (char)((ulong)pbVar13 >> 0x20);
                    *(char *)((long)ppbVar7 + -99) = (char)((ulong)pbVar13 >> 0x28);
                    pbVar15 = (byte *)((long)ppbVar7 + (((ulong)pbVar13 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc((undefined1 *)((long)ppbVar7 + -0x71),
                                        (undefined1 *)((long)ppbVar7 + -0x70));
                    pbVar9 = (byte *)(ulong)*(byte *)((long)ppbVar7 + -0x71);
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
                  unaff_x24 = pbVar13;
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
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar19 != 2) {
                    *(undefined8 *)((long)ppbVar7 + -0x6a) = 0;
                    *(undefined8 *)((long)ppbVar7 + -0x70) = 0;
                    pbVar15 = (byte *)((long)ppbVar7 + -0x70);
                    goto code_r0x000100e26260;
                  }
                  lVar25 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar15 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar25 - (long)pbVar15);
                  }
                  unaff_x23 = unaff_x24 + -lVar25;
                  if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar13;
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
code_r0x000100e262a4:
                unaff_x20 = (byte *)((ulong)pbVar13 & 0x3fffffffffffffff);
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)ppbVar7 + -0x70),pbVar10,pbVar15,lVar26,
                                    puVar18);
                pbVar9 = (byte *)(ulong)*(byte *)((long)ppbVar7 + -0x70);
                unaff_x22 = puVar18;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar21 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppbVar7 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)((long)ppbVar7 + -0xc0) = unaff_x24;
            *(byte **)((long)ppbVar7 + -0xb8) = unaff_x23;
            *(undefined8 **)((long)ppbVar7 + -0xb0) = unaff_x22;
            *(undefined8 *)((long)ppbVar7 + -0xa8) = unaff_x21;
            *(byte **)((long)ppbVar7 + -0xa0) = unaff_x20;
            *(byte **)((long)ppbVar7 + -0x98) = unaff_x19;
            *(undefined1 **)((long)ppbVar7 + -0x90) = (undefined1 *)((long)ppbVar7 + -0x10);
            *(undefined **)((long)ppbVar7 + -0x88) = &UNK_100e26304;
            pbVar14 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar24 = *(byte **)(pbVar9 + 0x18);
            bVar28 = pbVar9[0x28];
            pbVar13 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar16 = pbVar10;
            if (bVar28 < 3) {
              if (bVar28 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar26 = *(long *)pbVar15;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar14,lVar26,uVar11);
                  return (byte *)(ulong)((uint)pbVar14 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar28 == 1) {
                if (pbVar15[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar12 = *(byte **)(pbVar15 + 0x10);
                lVar26 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar14,lVar26,uVar11);
                if (((ulong)pbVar14 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar14 = pbVar10;
                pbVar16 = pbVar13;
                if ((pbVar10 == pbVar17) && (pbVar13 == pbVar12)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                lVar26 = *(long *)(pbVar15 + 0x18);
                if ((pbVar14 == pbVar17) && (pbVar10 == pbVar12)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar24 != (byte *)0x0) {
                    if (lVar26 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar26);
                    func_0x000107c61174();
                    pbVar13 = pbVar24;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar24);
                    func_0x000107c61170(lVar26);
                    pbVar24 = pbVar13;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar26 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar25 = *(long *)(pbVar9 + 0x20);
            if (bVar28 < 5) {
              if (bVar28 != 3) {
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                if (((pbVar14 == pbVar17) && (pbVar10 == pbVar12)) &&
                   (pbVar14 = pbVar13, pbVar16 = pbVar24, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar12 = *(byte **)(pbVar15 + 0x18),
                   pbVar13 == *(byte **)(pbVar15 + 0x10) && pbVar24 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar14 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar26 = *(long *)(pbVar15 + 0x20);
              if (pbVar13 == (byte *)0x0) {
                if (pbVar12 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar12 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar14 = pbVar10;
                pbVar16 = pbVar13;
                if ((pbVar10 != pbVar17) || (pbVar13 != pbVar12)) goto code_r0x000107c605b8;
              }
              if (lVar25 != 0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar24 == *(byte **)(pbVar15 + 0x18)) && (lVar25 == lVar26)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar24,lVar25,*(byte **)(pbVar15 + 0x18),lVar26,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar24 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar28 != 5) {
              if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar14 == (byte *)0x0) &&
                  lVar25 == 0) && pbVar13 == (byte *)0x0) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar25 = *(long *)(pbVar15 + 0x20);
                lVar26 = *(long *)(pbVar15 + 0x18);
                bVar28 = pbVar15[8] | (byte)lVar26;
                bVar29 = pbVar15[9] | (byte)((ulong)lVar26 >> 8);
                bVar30 = pbVar15[10] | (byte)((ulong)lVar26 >> 0x10);
                bVar31 = pbVar15[0xb] | (byte)((ulong)lVar26 >> 0x18);
                bVar32 = pbVar15[0xc] | (byte)((ulong)lVar26 >> 0x20);
                bVar33 = pbVar15[0xd] | (byte)((ulong)lVar26 >> 0x28);
                bVar34 = pbVar15[0xe] | (byte)((ulong)lVar26 >> 0x30);
                bVar35 = pbVar15[0xf] | (byte)((ulong)lVar26 >> 0x38);
                bVar36 = pbVar15[0x10] | (byte)lVar25;
                bVar37 = pbVar15[0x11] | (byte)((ulong)lVar25 >> 8);
                bVar38 = pbVar15[0x12] | (byte)((ulong)lVar25 >> 0x10);
                bVar39 = pbVar15[0x13] | (byte)((ulong)lVar25 >> 0x18);
                bVar40 = pbVar15[0x14] | (byte)((ulong)lVar25 >> 0x20);
                bVar41 = pbVar15[0x15] | (byte)((ulong)lVar25 >> 0x28);
                bVar42 = pbVar15[0x16] | (byte)((ulong)lVar25 >> 0x30);
                bVar43 = pbVar15[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                          CONCAT11(bVar29 | auVar44[
                                                  1],bVar28 | auVar44[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar14 == (byte *)0x1) &&
                 (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                  lVar25 == 0)) {
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
              lVar25 = *(long *)(pbVar15 + 0x20);
              lVar26 = *(long *)(pbVar15 + 0x18);
              bVar28 = pbVar15[8] | (byte)lVar26;
              bVar29 = pbVar15[9] | (byte)((ulong)lVar26 >> 8);
              bVar30 = pbVar15[10] | (byte)((ulong)lVar26 >> 0x10);
              bVar31 = pbVar15[0xb] | (byte)((ulong)lVar26 >> 0x18);
              bVar32 = pbVar15[0xc] | (byte)((ulong)lVar26 >> 0x20);
              bVar33 = pbVar15[0xd] | (byte)((ulong)lVar26 >> 0x28);
              bVar34 = pbVar15[0xe] | (byte)((ulong)lVar26 >> 0x30);
              bVar35 = pbVar15[0xf] | (byte)((ulong)lVar26 >> 0x38);
              bVar36 = pbVar15[0x10] | (byte)lVar25;
              bVar37 = pbVar15[0x11] | (byte)((ulong)lVar25 >> 8);
              bVar38 = pbVar15[0x12] | (byte)((ulong)lVar25 >> 0x10);
              bVar39 = pbVar15[0x13] | (byte)((ulong)lVar25 >> 0x18);
              bVar40 = pbVar15[0x14] | (byte)((ulong)lVar25 >> 0x20);
              bVar41 = pbVar15[0x15] | (byte)((ulong)lVar25 >> 0x28);
              bVar42 = pbVar15[0x16] | (byte)((ulong)lVar25 >> 0x30);
              bVar43 = pbVar15[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
              lVar26 = CONCAT17(bVar35 | auVar44[7],
                                CONCAT16(bVar34 | auVar44[6],
                                         CONCAT15(bVar33 | auVar44[5],
                                                  CONCAT14(bVar32 | auVar44[4],
                                                           CONCAT13(bVar31 | auVar44[3],
                                                                    CONCAT12(bVar30 | auVar44[2],
                                                                             CONCAT11(bVar29 | 
                                                  auVar44[1],bVar28 | auVar44[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 8);
            puVar18 = *(undefined8 **)(pbVar15 + 0x10);
            lVar25 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar14,lVar25,uVar11);
            if (((ulong)pbVar14 & 1) == 0) {
              return (byte *)0x0;
            }
            puVar27 = *(undefined1 **)((long)ppbVar7 + -0x90);
            pcStack_b8 = *(code **)((long)ppbVar7 + -0x88);
            unaff_x20 = *(byte **)((long)ppbVar7 + -0xa0);
            unaff_x19 = *(byte **)((long)ppbVar7 + -0x98);
            unaff_x22 = *(undefined8 **)((long)ppbVar7 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)ppbVar7 + -0xa8);
            unaff_x24 = *(byte **)((long)ppbVar7 + -0xc0);
            unaff_x23 = *(byte **)((long)ppbVar7 + -0xb8);
            ppbVar7 = (byte **)((long)ppbVar7 + -0x80);
          } while( true );
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cee720; end: 103cee873;  */

/* WARNING: Possible PIC construction at 0x000103cee750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cee794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cee7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cee824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cee828) */
/* WARNING: Removing unreachable block (ram,0x000103cee7e0) */
/* WARNING: Removing unreachable block (ram,0x000103cee798) */
/* WARNING: Removing unreachable block (ram,0x000103cee754) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cee720(undefined8 *param_1,undefined8 *param_2)

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
  if (pbVar13 != pbVar17 || pbVar16 != pbVar12) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar12,0);
    return pbVar13;
  }
  uVar14 = param_1[2];
  if ((uVar14 == param_2[2] && param_1[3] == param_2[3]) ||
     (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
    uVar14 = param_1[6];
    if (((uVar14 == param_2[6]) && (param_1[7] == param_2[7])) ||
       (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
      pbVar13 = (byte *)param_1[8];
      pbVar16 = (byte *)param_1[9];
      pbVar17 = (byte *)param_2[8];
      pbVar12 = (byte *)param_2[9];
      if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
      uVar14 = param_1[10];
      if (((uVar14 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
         (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
        pbVar13 = (byte *)param_1[0xc];
        pbVar16 = (byte *)param_1[0xd];
        pbVar17 = (byte *)param_2[0xc];
        pbVar12 = (byte *)param_2[0xd];
        if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
        uVar14 = param_1[0xe];
        if (((uVar14 == param_2[0xe]) && (param_1[0xf] == param_2[0xf])) ||
           (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
          pbVar10 = (byte *)param_1[0x10];
          pbVar25 = (byte *)param_1[0x11];
          lVar24 = param_2[0x10];
          uVar14 = param_2[0x11];
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
                  (uVar14 >> 0x3e < 3)) ||
                 ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))
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
                uVar22 = uVar14 >> 0x30 & 0xff;
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
                    pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
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
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
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
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                   (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar12 = *(byte **)(pbVar15 + 0x18),
                   pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
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
                if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) goto code_r0x000107c605b8;
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
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
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar26 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cee874; end: 103cee87f;  */

void FUN_103cee874(void)

{
  return;
}



/* Entry: 103cee880; end: 103cee89f;  */

void FUN_103cee880(void)

{
  func_0x000107c61168(&PTR_PTR_113001e00);
  return;
}



/* Entry: 103cee8a0; end: 103cee8bf;  */

int FUN_103cee8a0(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 0x120)) {
    iVar1 = (*(byte *)(param_1 + 0x120) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 103cee8c0; end: 103cee8f3;  */

undefined8 FUN_103cee8c0(undefined8 param_1,undefined8 param_2)

{
  func_0x000103cf4b80(param_2,param_1,&UNK_1106fc2e0);
  return param_2;
}



/* Entry: 103cee8f4; end: 103cee8ff;  */

void FUN_103cee8f4(long param_1)

{
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}



/* Entry: 103cee900; end: 103cee95f;  */

undefined8 FUN_103cee900(undefined8 param_1,undefined8 param_2)

{
  FUN_103cf3cf4(param_2,param_1,&UNK_1106fc0a0);
  return param_2;
}



/* Entry: 103cee960; end: 103cee96f;  */

void FUN_103cee960(void)

{
  return;
}



/* Entry: 103cee970; end: 103cee9cf;  */

undefined8 FUN_103cee970(undefined8 param_1,undefined8 param_2)

{
  FUN_103cf6770(param_2,param_1,&UNK_1106fc6a8);
  return param_2;
}



/* Entry: 103cee9d0; end: 103cef67b;  */

uint FUN_103cee9d0(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_610 [144];
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
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
  
  uVar3 = *param_1;
  if ((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0))
  {
    uVar3 = param_1[2];
    uVar5 = param_2[2];
    if ((char)param_2[3] == '\x01') {
      if ((long)uVar5 < 4) {
        if ((long)uVar5 < 2) {
          if (uVar5 == 0) {
            if (uVar3 == 0) goto LAB_103ceea64;
          }
          else if (uVar3 == 1) goto LAB_103ceea64;
        }
        else if (uVar5 == 2) {
          if (uVar3 == 2) goto LAB_103ceea64;
        }
        else if (uVar3 == 3) goto LAB_103ceea64;
      }
      else if ((long)uVar5 < 6) {
        if (uVar5 == 4) {
          if (uVar3 == 4) {
LAB_103ceea64:
            uVar3 = param_1[4];
            if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
               (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
              uVar3 = param_1[6];
              if (((uVar3 == param_2[6]) && (param_1[7] == param_2[7])) ||
                 (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
                uVar3 = param_1[8];
                if (((uVar3 == param_2[8]) && (param_1[9] == param_2[9])) ||
                   (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
                  uStack_2e8 = param_1[0x17];
                  uStack_2f0 = param_1[0x16];
                  uStack_128 = param_1[0x19];
                  uStack_130 = param_1[0x18];
                  uStack_2d8 = param_1[0x19];
                  uStack_2e0 = param_1[0x18];
                  uStack_118 = param_1[0x1b];
                  uStack_120 = param_1[0x1a];
                  uStack_2c8 = param_1[0x1b];
                  uStack_2d0 = param_1[0x1a];
                  uStack_108 = param_1[0x1d];
                  uStack_110 = param_1[0x1c];
                  uStack_328 = param_1[0xf];
                  uStack_330 = param_1[0xe];
                  uStack_168 = param_1[0x11];
                  uStack_170 = param_1[0x10];
                  uStack_318 = param_1[0x11];
                  uStack_320 = param_1[0x10];
                  uStack_158 = param_1[0x13];
                  uStack_160 = param_1[0x12];
                  uStack_308 = param_1[0x13];
                  uStack_310 = param_1[0x12];
                  uStack_148 = param_1[0x15];
                  uStack_150 = param_1[0x14];
                  uStack_2f8 = param_1[0x15];
                  uStack_300 = param_1[0x14];
                  uStack_138 = param_1[0x17];
                  uStack_140 = param_1[0x16];
                  uStack_188 = param_1[0xd];
                  uStack_190 = param_1[0xc];
                  uStack_178 = param_1[0xf];
                  uStack_180 = param_1[0xe];
                  uStack_338 = param_1[0xd];
                  uStack_340 = param_1[0xc];
                  uStack_258 = param_2[0x17];
                  uStack_260 = param_2[0x16];
                  uStack_1b8 = param_2[0x19];
                  uStack_1c0 = param_2[0x18];
                  uStack_248 = param_2[0x19];
                  uStack_250 = param_2[0x18];
                  uStack_1a8 = param_2[0x1b];
                  uStack_1b0 = param_2[0x1a];
                  uStack_238 = param_2[0x1b];
                  uStack_240 = param_2[0x1a];
                  uStack_198 = param_2[0x1d];
                  uStack_1a0 = param_2[0x1c];
                  uStack_298 = param_2[0xf];
                  uStack_2a0 = param_2[0xe];
                  uStack_1f8 = param_2[0x11];
                  uStack_200 = param_2[0x10];
                  uStack_288 = param_2[0x11];
                  uStack_290 = param_2[0x10];
                  uStack_1e8 = param_2[0x13];
                  uStack_1f0 = param_2[0x12];
                  uStack_278 = param_2[0x13];
                  uStack_280 = param_2[0x12];
                  uStack_1d8 = param_2[0x15];
                  uStack_1e0 = param_2[0x14];
                  uStack_268 = param_2[0x15];
                  uStack_270 = param_2[0x14];
                  uStack_1c8 = param_2[0x17];
                  uStack_1d0 = param_2[0x16];
                  uStack_218 = param_2[0xd];
                  uStack_220 = param_2[0xc];
                  uStack_208 = param_2[0xf];
                  uStack_210 = param_2[0xe];
                  uStack_2a8 = param_2[0xd];
                  uStack_2b0 = param_2[0xc];
                  uStack_228 = param_2[0x1d];
                  uStack_230 = param_2[0x1c];
                  uStack_2b8 = param_1[0x1d];
                  uStack_2c0 = param_1[0x1c];
                  iVar1 = (int)&uStack_340;
                  func_0x000100d6be5c();
                  if (iVar1 == 1) {
                    iVar1 = (int)&uStack_2b0;
                    func_0x000100d6be5c();
                    if (iVar1 == 1) {
                      uStack_3f8 = uStack_2d8;
                      uStack_400 = uStack_2e0;
                      uStack_3e8 = uStack_2c8;
                      uStack_3f0 = uStack_2d0;
                      uStack_3d8 = uStack_2b8;
                      uStack_3e0 = uStack_2c0;
                      uStack_438 = uStack_318;
                      uStack_440 = uStack_320;
                      uStack_428 = uStack_308;
                      uStack_430 = uStack_310;
                      uStack_418 = uStack_2f8;
                      uStack_420 = uStack_300;
                      uStack_408 = uStack_2e8;
                      uStack_410 = uStack_2f0;
                      uStack_458 = uStack_338;
                      uStack_460 = uStack_340;
                      uStack_448 = uStack_328;
                      uStack_450 = uStack_330;
                      FUN_103cef74c(&uStack_190,&uStack_100,0x113000f50,&UNK_10dc781c0);
                      FUN_103cef74c(&uStack_220,&uStack_100,0x113000f50,&UNK_10dc781c0);
                      FUN_103cfa0bc(&uStack_460,0x113000f50,&UNK_10dc781c0);
LAB_103ceee18:
                      uVar5 = param_1[0x1f];
                      uVar3 = param_1[0x1e];
                      uVar10 = param_1[0x21];
                      uVar8 = param_1[0x20];
                      uVar7 = param_2[0x1f];
                      uVar6 = param_2[0x1e];
                      uVar11 = param_2[0x21];
                      uVar9 = param_2[0x20];
                      uStack_4f0 = uVar6;
                      uStack_4e8 = uVar7;
                      uStack_4e0 = uVar9;
                      uStack_4d8 = uVar11;
                      uStack_340 = uVar3;
                      uStack_338 = uVar5;
                      uStack_330 = uVar8;
                      uStack_328 = uVar10;
                      if (uVar10 >> 0x3c < 0xf) {
                        if (0xe < uVar11 >> 0x3c) goto LAB_103ceeec0;
                        if (uVar3 == uVar6) {
                          if ((int)uVar5 != (int)uVar7) {
                            FUN_103cef74c(&uStack_340,&uStack_580,0x112db8dc0,&UNK_10d969810);
                            FUN_103cef74c(&uStack_4f0,&uStack_580,0x112db8dc0,&UNK_10d969810);
                            uVar6 = uVar3;
                            goto LAB_103cef014;
                          }
                          FUN_103cef74c(&uStack_340,&uStack_580,0x112db8dc0,&UNK_10d969810);
                          FUN_103cef74c(&uStack_4f0,&uStack_580,0x112db8dc0,&UNK_10d969810);
                          uVar6 = uVar8;
                          func_0x000100e25fcc(uVar8,uVar10,uVar9,uVar11);
                          func_0x0001015d38c8(uVar3,uVar7,uVar9,uVar11);
                          if ((uVar6 & 1) != 0) goto LAB_103ceee90;
                        }
                        else {
                          FUN_103cef74c(&uStack_340,&uStack_580,0x112db8dc0,&UNK_10d969810);
                          FUN_103cef74c(&uStack_4f0,&uStack_580,0x112db8dc0,&UNK_10d969810);
LAB_103cef014:
                          func_0x0001015d38c8(uVar6,uVar7,uVar9,uVar11);
                        }
                      }
                      else {
                        if (0xe < uVar11 >> 0x3c) {
                          FUN_103cef74c(&uStack_340,&uStack_580,0x112db8dc0,&UNK_10d969810);
                          FUN_103cef74c(&uStack_4f0,&uStack_580,0x112db8dc0,&UNK_10d969810);
LAB_103ceee90:
                          func_0x0001015d38c8(uVar3,uVar5,uVar8,uVar10);
                          uVar3 = param_1[10];
                          func_0x000100e25fcc(uVar3,param_1[0xb],param_2[10],param_2[0xb]);
                          uVar2 = (uint)uVar3;
                          goto LAB_103cef040;
                        }
LAB_103ceeec0:
                        FUN_103cef74c(&uStack_340,&uStack_580,0x112db8dc0,&UNK_10d969810);
                        FUN_103cef74c(&uStack_4f0,&uStack_580,0x112db8dc0,&UNK_10d969810);
                        func_0x0001015d38c8(uVar3,uVar5,uVar8,uVar10);
                        uVar3 = uVar6;
                        uVar5 = uVar7;
                        uVar8 = uVar9;
                        uVar10 = uVar11;
                      }
                      func_0x0001015d38c8(uVar3,uVar5,uVar8,uVar10);
                    }
                    else {
LAB_103ceec94:
                      func_0x000107c610b4(&uStack_460,&uStack_340,0x120);
                      FUN_103cef74c(&uStack_190,&uStack_100,0x113000f50,&UNK_10dc781c0);
                      FUN_103cef74c(&uStack_220,&uStack_100,0x113000f50,&UNK_10dc781c0);
                      FUN_103cfa0bc(&uStack_460,0x113000f58,&UNK_10dc76f40);
                    }
                  }
                  else {
                    uStack_488 = uStack_2d8;
                    uStack_490 = uStack_2e0;
                    uStack_478 = uStack_2c8;
                    uStack_480 = uStack_2d0;
                    uStack_468 = uStack_2b8;
                    uStack_470 = uStack_2c0;
                    uStack_4c8 = uStack_318;
                    uStack_4d0 = uStack_320;
                    uStack_4b8 = uStack_308;
                    uStack_4c0 = uStack_310;
                    uStack_4a8 = uStack_2f8;
                    uStack_4b0 = uStack_300;
                    uStack_498 = uStack_2e8;
                    uStack_4a0 = uStack_2f0;
                    uStack_4e8 = uStack_338;
                    uStack_4f0 = uStack_340;
                    uStack_4d8 = uStack_328;
                    uStack_4e0 = uStack_330;
                    iVar1 = (int)&uStack_2b0;
                    func_0x000100d6be5c();
                    if (iVar1 == 1) goto LAB_103ceec94;
                    uStack_518 = uStack_248;
                    uStack_520 = uStack_250;
                    uStack_508 = uStack_238;
                    uStack_510 = uStack_240;
                    uStack_4f8 = uStack_228;
                    uStack_500 = uStack_230;
                    uStack_558 = uStack_288;
                    uStack_560 = uStack_290;
                    uStack_548 = uStack_278;
                    uStack_550 = uStack_280;
                    uStack_538 = uStack_268;
                    uStack_540 = uStack_270;
                    uStack_528 = uStack_258;
                    uStack_530 = uStack_260;
                    uStack_578 = uStack_2a8;
                    uStack_580 = uStack_2b0;
                    uStack_568 = uStack_298;
                    uStack_570 = uStack_2a0;
                    uStack_3f8 = uStack_248;
                    uStack_400 = uStack_250;
                    uStack_3e8 = uStack_238;
                    uStack_3f0 = uStack_240;
                    uStack_3d8 = uStack_228;
                    uStack_3e0 = uStack_230;
                    uStack_438 = uStack_288;
                    uStack_440 = uStack_290;
                    uStack_428 = uStack_278;
                    uStack_430 = uStack_280;
                    uStack_418 = uStack_268;
                    uStack_420 = uStack_270;
                    uStack_408 = uStack_258;
                    uStack_410 = uStack_260;
                    uStack_458 = uStack_2a8;
                    uStack_460 = uStack_2b0;
                    uStack_448 = uStack_298;
                    uStack_450 = uStack_2a0;
                    uStack_98 = uStack_488;
                    uStack_a0 = uStack_490;
                    uStack_88 = uStack_478;
                    uStack_90 = uStack_480;
                    uStack_78 = uStack_468;
                    uStack_80 = uStack_470;
                    uStack_d8 = uStack_4c8;
                    uStack_e0 = uStack_4d0;
                    uStack_c8 = uStack_4b8;
                    uStack_d0 = uStack_4c0;
                    uStack_b8 = uStack_4a8;
                    uStack_c0 = uStack_4b0;
                    uStack_a8 = uStack_498;
                    uStack_b0 = uStack_4a0;
                    uStack_f8 = uStack_4e8;
                    uStack_100 = uStack_4f0;
                    uStack_e8 = uStack_4d8;
                    uStack_f0 = uStack_4e0;
                    FUN_103cef74c(&uStack_190,auStack_610,0x113000f50,&UNK_10dc781c0);
                    FUN_103cef74c(&uStack_220,auStack_610,0x113000f50,&UNK_10dc781c0);
                    puVar4 = &uStack_100;
                    FUN_103cee720(puVar4,&uStack_460);
                    FUN_103cfa0bc(&uStack_580,0x113000f50,&UNK_10dc781c0);
                    FUN_103cfa0bc(&uStack_340,0x113000f50,&UNK_10dc781c0);
                    if (((ulong)puVar4 & 1) != 0) goto LAB_103ceee18;
                  }
                }
              }
            }
          }
        }
        else if (uVar3 == 5) goto LAB_103ceea64;
      }
      else if (uVar5 == 6) {
        if (uVar3 == 6) goto LAB_103ceea64;
      }
      else if (uVar5 == 7) {
        if (uVar3 == 7) goto LAB_103ceea64;
      }
      else if (uVar3 == 8) goto LAB_103ceea64;
    }
    else if (uVar3 == uVar5) goto LAB_103ceea64;
  }
  uVar2 = 0;
LAB_103cef040:
  return uVar2 & 1;
}



/* Entry: 103cef67c; end: 103cef6ff;  */

void FUN_103cef67c(void)

{
  return;
}



/* Entry: 103cef700; end: 103cef74b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cef700(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 103cef74c; end: 103cef793;  */

undefined8 FUN_103cef74c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103cef794; end: 103cef993;  */

void FUN_103cef794(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78ad0;
  func_0x000107c61520(&UNK_10dc78ad0,&UNK_1106fc000);
  puRam0000000113001880 = puVar1;
  return;
}



/* Entry: 103cef994; end: 103cefd87;  */

uint FUN_103cef994(ulong *param_1,ulong *param_2)

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
  if ((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0))
  {
    uVar3 = (ulong)(param_1[2] != 0);
    if ((char)param_1[3] != '\x01') {
      uVar3 = param_1[2];
    }
    if ((char)param_2[3] == '\x01') {
      if (param_2[2] == 0) {
        if (uVar3 == 0) goto LAB_103cefa20;
      }
      else if (uVar3 == 1) {
LAB_103cefa20:
        uVar3 = param_1[4];
        if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
          uVar3 = param_1[6];
          if (((uVar3 == param_2[6]) && (param_1[7] == param_2[7])) ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
            uVar3 = param_1[8];
            if (((uVar3 == param_2[8]) && (param_1[9] == param_2[9])) ||
               (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
              uStack_2b8 = param_1[0x17];
              uStack_2c0 = param_1[0x16];
              uStack_f8 = param_1[0x19];
              uStack_100 = param_1[0x18];
              uStack_2a8 = param_1[0x19];
              uStack_2b0 = param_1[0x18];
              uStack_e8 = param_1[0x1b];
              uStack_f0 = param_1[0x1a];
              uStack_298 = param_1[0x1b];
              uStack_2a0 = param_1[0x1a];
              uStack_d8 = param_1[0x1d];
              uStack_e0 = param_1[0x1c];
              uStack_2f8 = param_1[0xf];
              uStack_300 = param_1[0xe];
              uStack_138 = param_1[0x11];
              uStack_140 = param_1[0x10];
              uStack_2e8 = param_1[0x11];
              uStack_2f0 = param_1[0x10];
              uStack_128 = param_1[0x13];
              uStack_130 = param_1[0x12];
              uStack_2d8 = param_1[0x13];
              uStack_2e0 = param_1[0x12];
              uStack_118 = param_1[0x15];
              uStack_120 = param_1[0x14];
              uStack_2c8 = param_1[0x15];
              uStack_2d0 = param_1[0x14];
              uStack_108 = param_1[0x17];
              uStack_110 = param_1[0x16];
              uStack_158 = param_1[0xd];
              uStack_160 = param_1[0xc];
              uStack_148 = param_1[0xf];
              uStack_150 = param_1[0xe];
              uStack_308 = param_1[0xd];
              uStack_310 = param_1[0xc];
              uStack_228 = param_2[0x17];
              uStack_230 = param_2[0x16];
              uStack_188 = param_2[0x19];
              uStack_190 = param_2[0x18];
              uStack_218 = param_2[0x19];
              uStack_220 = param_2[0x18];
              uStack_178 = param_2[0x1b];
              uStack_180 = param_2[0x1a];
              uStack_208 = param_2[0x1b];
              uStack_210 = param_2[0x1a];
              uStack_168 = param_2[0x1d];
              uStack_170 = param_2[0x1c];
              uStack_268 = param_2[0xf];
              uStack_270 = param_2[0xe];
              uStack_1c8 = param_2[0x11];
              uStack_1d0 = param_2[0x10];
              uStack_258 = param_2[0x11];
              uStack_260 = param_2[0x10];
              uStack_1b8 = param_2[0x13];
              uStack_1c0 = param_2[0x12];
              uStack_248 = param_2[0x13];
              uStack_250 = param_2[0x12];
              uStack_1a8 = param_2[0x15];
              uStack_1b0 = param_2[0x14];
              uStack_238 = param_2[0x15];
              uStack_240 = param_2[0x14];
              uStack_198 = param_2[0x17];
              uStack_1a0 = param_2[0x16];
              uStack_1e8 = param_2[0xd];
              uStack_1f0 = param_2[0xc];
              uStack_1d8 = param_2[0xf];
              uStack_1e0 = param_2[0xe];
              uStack_278 = param_2[0xd];
              uStack_280 = param_2[0xc];
              uStack_1f8 = param_2[0x1d];
              uStack_200 = param_2[0x1c];
              uStack_288 = param_1[0x1d];
              uStack_290 = param_1[0x1c];
              iVar1 = (int)&uStack_310;
              func_0x000100d6be5c();
              if (iVar1 == 1) {
                iVar1 = (int)&uStack_280;
                func_0x000100d6be5c();
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
                  FUN_103cef74c(&uStack_160,&uStack_d0,0x113000f50,&UNK_10dc781c0);
                  FUN_103cef74c(&uStack_1f0,&uStack_d0,0x113000f50,&UNK_10dc781c0);
                  FUN_103cfa0bc(&uStack_430,0x113000f50,&UNK_10dc781c0);
LAB_103cefd78:
                  uVar3 = param_1[10];
                  func_0x000100e25fcc(uVar3,param_1[0xb],param_2[10],param_2[0xb]);
                  uVar2 = (uint)uVar3;
                  goto LAB_103cefc78;
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
                func_0x000100d6be5c();
                if (iVar1 != 1) {
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
                  FUN_103cef74c(&uStack_160,auStack_5e0,0x113000f50,&UNK_10dc781c0);
                  FUN_103cef74c(&uStack_1f0,auStack_5e0,0x113000f50,&UNK_10dc781c0);
                  puVar4 = &uStack_d0;
                  FUN_103cee720(puVar4,&uStack_430);
                  FUN_103cfa0bc(&uStack_550,0x113000f50,&UNK_10dc781c0);
                  FUN_103cfa0bc(&uStack_310,0x113000f50,&UNK_10dc781c0);
                  if (((ulong)puVar4 & 1) != 0) goto LAB_103cefd78;
                  goto LAB_103cefc74;
                }
              }
              func_0x000107c610b4(&uStack_430,&uStack_310,0x120);
              FUN_103cef74c(&uStack_160,&uStack_d0,0x113000f50,&UNK_10dc781c0);
              FUN_103cef74c(&uStack_1f0,&uStack_d0,0x113000f50,&UNK_10dc781c0);
              FUN_103cfa0bc(&uStack_430,0x113000f58,&UNK_10dc76f40);
            }
          }
        }
      }
    }
    else if (uVar3 == param_2[2]) goto LAB_103cefa20;
  }
LAB_103cefc74:
  uVar2 = 0;
LAB_103cefc78:
  return uVar2 & 1;
}



/* Entry: 103cefd88; end: 103cefe07;  */

void FUN_103cefd88(void)

{
  undefined *puVar1;
  
  if (puRam00000001130018f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78f28;
  func_0x000107c61520(&UNK_10dc78f28,&UNK_1106fc468);
  puRam00000001130018f8 = puVar1;
  return;
}



/* Entry: 103cefe08; end: 103cf012f;  */

undefined1 * FUN_103cefe08(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_ae0 [272];
  undefined1 auStack_9d0 [272];
  undefined1 auStack_8c0 [272];
  undefined1 auStack_7b0 [544];
  undefined1 auStack_590 [272];
  undefined1 auStack_480 [272];
  undefined1 auStack_370 [272];
  undefined1 auStack_260 [272];
  undefined1 auStack_150 [272];
  long lVar5;
  
  func_0x000107c610b4(auStack_260,param_1 + 4,0x110);
  func_0x000107c610b4(auStack_370,param_2 + 4,0x110);
  func_0x000107c610b4(auStack_590,param_1 + 4,0x110);
  func_0x000107c610b4(auStack_480,param_2 + 4,0x110);
  iVar1 = (int)auStack_590;
  func_0x000100d6be5c();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_480;
    func_0x000100d6be5c();
    if (iVar1 == 1) {
      func_0x000107c610b4(auStack_7b0,auStack_590,0x110);
      FUN_103cef74c(auStack_260,auStack_150,0x113001560,&UNK_10dc781e8);
      FUN_103cef74c(auStack_370,auStack_150,0x113001560,&UNK_10dc781e8);
      puVar4 = auStack_7b0;
      FUN_103cfa0bc(puVar4,0x113001560,&UNK_10dc781e8);
LAB_103cf0024:
      if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cf004c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10dc781aa)[*param_2] * 4 + 0x103cf0050))();
        return puVar4;
      }
      if (*param_1 == *param_2) {
        lVar5 = param_1[2];
        func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
        uVar2 = (uint)lVar5;
        goto LAB_103ceff6c;
      }
    }
    else {
LAB_103ceff08:
      func_0x000107c610b4(auStack_7b0,auStack_590,0x220);
      FUN_103cef74c(auStack_260,auStack_150,0x113001560,&UNK_10dc781e8);
      FUN_103cef74c(auStack_370,auStack_150,0x113001560,&UNK_10dc781e8);
      FUN_103cfa0bc(auStack_7b0,0x113001568,&UNK_10dc781f0);
    }
  }
  else {
    func_0x000107c610b4(auStack_8c0,auStack_590,0x110);
    iVar1 = (int)auStack_480;
    func_0x000100d6be5c();
    if (iVar1 == 1) goto LAB_103ceff08;
    func_0x000107c610b4(auStack_9d0,auStack_480,0x110);
    func_0x000107c610b4(auStack_7b0,auStack_480,0x110);
    func_0x000107c610b4(auStack_150,auStack_8c0,0x110);
    FUN_103cef74c(auStack_260,auStack_ae0,0x113001560,&UNK_10dc781e8);
    FUN_103cef74c(auStack_370,auStack_ae0,0x113001560,&UNK_10dc781e8);
    puVar3 = auStack_150;
    FUN_103cee9d0(puVar3,auStack_7b0);
    FUN_103cfa0bc(auStack_9d0,0x113001560,&UNK_10dc781e8);
    puVar4 = auStack_590;
    FUN_103cfa0bc(puVar4,0x113001560,&UNK_10dc781e8);
    if (((ulong)puVar3 & 1) != 0) goto LAB_103cf0024;
  }
  uVar2 = 0;
LAB_103ceff6c:
  return (undefined1 *)(ulong)(uVar2 & 1);
}



/* Entry: 103cf0130; end: 103cf01ef;  */

void FUN_103cf0130(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc79010;
  func_0x000107c61520(&UNK_10dc79010,&UNK_1106fc590);
  puRam0000000113001918 = puVar1;
  return;
}



/* Entry: 103cf01f0; end: 103cf0337;  */

/* WARNING: Possible PIC construction at 0x000103cf0228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cf022c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cf01f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
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
  undefined8 uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
  byte *pbVar27;
  ulong unaff_x22;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar19 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar19,0);
    return pbVar13;
  }
  lVar14 = param_1[2];
  lVar26 = param_2[2];
  uVar1 = *(undefined1 *)(param_2 + 3);
  func_0x000103d1d830(lVar14,*(undefined1 *)(param_1 + 3));
  func_0x000103d1d830(lVar26,uVar1);
  if (lVar14 == lVar26) {
    lVar14 = param_1[4];
    lVar26 = param_2[4];
    if (*(char *)(param_2 + 5) == '\x01') {
      if (lVar26 < 4) {
        if (lVar26 < 2) {
          if (lVar26 == 0) {
            if (lVar14 == 0) {
LAB_103cf02a8:
              pbVar11 = (byte *)param_1[6];
              pbVar27 = (byte *)param_1[7];
              lVar14 = param_2[6];
              uVar18 = param_2[7];
              puVar8 = (undefined1 *)register0x00000008;
              do {
                *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
                *(byte **)(puVar8 + -0x48) = unaff_x25;
                *(byte **)(puVar8 + -0x40) = unaff_x24;
                *(byte **)(puVar8 + -0x38) = unaff_x23;
                *(ulong *)(puVar8 + -0x30) = unaff_x22;
                *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
                *(ulong *)(puVar8 + -0x20) = unaff_x20;
                *(byte **)(puVar8 + -0x18) = unaff_x19;
                *(undefined8 *)(puVar8 + -0x10) = unaff_x29;
                *(undefined8 *)(puVar8 + -8) = unaff_x30;
                *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                uVar5 = (uint)((ulong)pbVar27 >> 0x20);
                uVar20 = uVar5 >> 0x1e;
                uVar6 = (uint)(uVar18 >> 0x20);
                uVar23 = uVar6 >> 0x1e;
                iVar9 = (int)pbVar11;
                pbVar15 = pbVar27;
                if ((ulong)pbVar27 >> 0x3e == 3) {
                  uVar22 = 0;
                  if ((((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
                      (uVar18 >> 0x3e < 3)) ||
                     ((uVar22 = 0, lVar14 != 0 || (uVar18 != 0xc000000000000000))))
                  goto joined_r0x000100e26170;
code_r0x000100e26128:
                  pbVar10 = (byte *)0x1;
                }
                else if (uVar5 >> 0x1e < 2) {
                  if (uVar20 == 0) {
                    uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
                  }
                  else {
                    iVar21 = (int)((ulong)pbVar11 >> 0x20);
                    if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                      (*pcVar7)();
                    }
                    uVar22 = (ulong)(iVar21 - iVar9);
                  }
joined_r0x000100e26170:
                  if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                  if (uVar23 == 0) {
                    uVar24 = uVar18 >> 0x30 & 0xff;
                    goto code_r0x000100e2608c;
                  }
                  iVar21 = (int)((ulong)lVar14 >> 0x20);
                  if (SBORROW4(iVar21,(int)lVar14)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                    (*pcVar7)();
                  }
                  if (uVar22 == (long)(iVar21 - (int)lVar14)) goto code_r0x000100e26094;
code_r0x000100e26154:
                  pbVar10 = (byte *)0x0;
                }
                else {
                  if (uVar20 == 2) {
                    uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
                    if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                      (*pcVar7)();
                    }
                    goto joined_r0x000100e26170;
                  }
                  uVar22 = 0;
                  if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                  if (uVar23 == 2) {
                    uVar24 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
                    if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                      (*pcVar7)();
                    }
code_r0x000100e2608c:
                    if (uVar22 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                    if ((long)uVar22 < 1) goto code_r0x000100e26128;
                    if (uVar20 < 2) {
                      if (uVar20 == 0) {
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
                        pbVar15 = puVar8 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                        unaff_x21 = 0;
                        func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
                        pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
                        goto code_r0x000100e262b0;
                      }
                      unaff_x25 = (byte *)(long)iVar9;
                      unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
                      if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                        (*pcVar7)();
                      }
                      func_0x000107c5ec30();
                      unaff_x24 = pbVar27;
                      if (pbVar11 == (byte *)0x0) {
                        func_0x000107c5ec38();
                        pbVar11 = (byte *)0x0;
                      }
                      else {
                        pbVar15 = pbVar11;
                        func_0x000107c5ec3c();
                        if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                          (*pcVar7)();
                        }
                        pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar15);
                        func_0x000107c5ec38();
                        unaff_x19 = pbVar11;
                        if (pbVar11 != (byte *)0x0) {
                          if ((long)unaff_x23 <= (long)pbVar15) {
                            pbVar15 = unaff_x23;
                          }
                          pbVar15 = pbVar15 + (long)pbVar11;
                          goto code_r0x000100e262a4;
                        }
                      }
                      pbVar15 = (byte *)0x0;
                    }
                    else {
                      if (uVar20 != 2) {
                        *(undefined8 *)(puVar8 + -0x6a) = 0;
                        *(undefined8 *)(puVar8 + -0x70) = 0;
                        pbVar15 = puVar8 + -0x70;
                        goto code_r0x000100e26260;
                      }
                      lVar26 = *(long *)(pbVar11 + 0x10);
                      unaff_x24 = *(byte **)(pbVar11 + 0x18);
                      func_0x000107c5ec30();
                      pbVar15 = pbVar11;
                      if (pbVar11 != (byte *)0x0) {
                        func_0x000107c5ec3c();
                        if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                          (*pcVar7)();
                        }
                        pbVar11 = pbVar11 + (lVar26 - (long)pbVar15);
                      }
                      unaff_x23 = unaff_x24 + -lVar26;
                      if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                        (*pcVar7)();
                      }
                      func_0x000107c5ec38();
                      unaff_x19 = pbVar11;
                      unaff_x25 = pbVar27;
                      if (pbVar11 == (byte *)0x0) {
                        pbVar15 = (byte *)0x0;
                      }
                      else {
                        if ((long)unaff_x23 <= (long)pbVar15) {
                          pbVar15 = unaff_x23;
                        }
                        pbVar15 = pbVar15 + (long)pbVar11;
                      }
                    }
code_r0x000100e262a4:
                    unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
                    unaff_x21 = 0;
                    func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar15,lVar14,uVar18);
                    pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
                    unaff_x22 = uVar18;
                  }
                  else {
                    pbVar10 = (byte *)(ulong)(uVar22 == 0);
                  }
                }
code_r0x000100e262b0:
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
                  return pbVar10;
                }
                func_0x000107c60e78();
                *(byte **)(puVar8 + -0xc0) = unaff_x24;
                *(byte **)(puVar8 + -0xb8) = unaff_x23;
                *(ulong *)(puVar8 + -0xb0) = unaff_x22;
                *(undefined8 *)(puVar8 + -0xa8) = unaff_x21;
                *(ulong *)(puVar8 + -0xa0) = unaff_x20;
                *(byte **)(puVar8 + -0x98) = unaff_x19;
                *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
                *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
                pbVar13 = *(byte **)pbVar10;
                pbVar11 = *(byte **)(pbVar10 + 8);
                pbVar25 = *(byte **)(pbVar10 + 0x18);
                bVar28 = pbVar10[0x28];
                pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                                   (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10])
                ;
                pbVar16 = pbVar11;
                if (bVar28 < 3) {
                  if (bVar28 == 0) {
                    if (pbVar15[0x28] == 0) {
                      lVar14 = *(long *)pbVar15;
                      uVar12 = 0;
                      func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                      func_0x000107c60118(pbVar13,lVar14,uVar12);
                      return (byte *)(ulong)((uint)pbVar13 & 1);
                    }
                    return (byte *)0x0;
                  }
                  if (bVar28 == 1) {
                    if (pbVar15[0x28] != 1) {
                      return (byte *)0x0;
                    }
                    pbVar17 = *(byte **)(pbVar15 + 8);
                    pbVar19 = *(byte **)(pbVar15 + 0x10);
                    lVar14 = *(long *)pbVar15;
                    uVar12 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar13,lVar14,uVar12);
                    if (((ulong)pbVar13 & 1) == 0) {
                      return (byte *)0x0;
                    }
                    pbVar13 = pbVar11;
                    pbVar16 = pbVar27;
                    if ((pbVar11 == pbVar17) && (pbVar27 == pbVar19)) {
                      return (byte *)0x1;
                    }
                  }
                  else {
                    if (pbVar15[0x28] != 2) {
                      return (byte *)0x0;
                    }
                    pbVar17 = *(byte **)pbVar15;
                    pbVar19 = *(byte **)(pbVar15 + 8);
                    lVar14 = *(long *)(pbVar15 + 0x18);
                    if ((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) {
                      if (((pbVar10[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                        return (byte *)0x0;
                      }
                      if (pbVar25 != (byte *)0x0) {
                        if (lVar14 == 0) {
                          return (byte *)0x0;
                        }
                        func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                        func_0x000107c61174(lVar14);
                        func_0x000107c61174();
                        pbVar13 = pbVar25;
                        func_0x000107c60118();
                        func_0x000107c61170(pbVar25);
                        func_0x000107c61170(lVar14);
                        pbVar25 = pbVar13;
                        goto joined_r0x000100e266a4;
                      }
joined_r0x000100e26620:
                      if (lVar14 == 0) {
                        return (byte *)0x1;
                      }
                      return (byte *)0x0;
                    }
                  }
                  goto code_r0x000107c605b8;
                }
                lVar26 = *(long *)(pbVar10 + 0x20);
                if (bVar28 < 5) {
                  if (bVar28 != 3) {
                    if (pbVar15[0x28] != 4) {
                      return (byte *)0x0;
                    }
                    pbVar17 = *(byte **)pbVar15;
                    pbVar19 = *(byte **)(pbVar15 + 8);
                    if (((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) &&
                       (pbVar13 = pbVar27, pbVar16 = pbVar25, pbVar17 = *(byte **)(pbVar15 + 0x10),
                       pbVar19 = *(byte **)(pbVar15 + 0x18),
                       pbVar27 == *(byte **)(pbVar15 + 0x10) &&
                       pbVar25 == *(byte **)(pbVar15 + 0x18))) {
                      return (byte *)0x1;
                    }
                    goto code_r0x000107c605b8;
                  }
                  if (pbVar15[0x28] != 3) {
                    return (byte *)0x0;
                  }
                  if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
                    return (byte *)0x0;
                  }
                  pbVar19 = *(byte **)(pbVar15 + 0x10);
                  lVar14 = *(long *)(pbVar15 + 0x20);
                  if (pbVar27 == (byte *)0x0) {
                    if (pbVar19 != (byte *)0x0) {
                      return (byte *)0x0;
                    }
                  }
                  else {
                    if (pbVar19 == (byte *)0x0) {
                      return (byte *)0x0;
                    }
                    pbVar17 = *(byte **)(pbVar15 + 8);
                    pbVar13 = pbVar11;
                    pbVar16 = pbVar27;
                    if ((pbVar11 != pbVar17) || (pbVar27 != pbVar19)) goto code_r0x000107c605b8;
                  }
                  if (lVar26 != 0) {
                    if (lVar14 == 0) {
                      return (byte *)0x0;
                    }
                    if ((pbVar25 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar14)) {
                      return (byte *)0x1;
                    }
                    func_0x000107c605b8(pbVar25,lVar26,*(byte **)(pbVar15 + 0x18),lVar14,0);
joined_r0x000100e266a4:
                    if (((ulong)pbVar25 & 1) == 0) {
                      return (byte *)0x0;
                    }
                    return (byte *)0x1;
                  }
                  goto joined_r0x000100e26620;
                }
                if (bVar28 != 5) {
                  if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0
                       ) && lVar26 == 0) && pbVar27 == (byte *)0x0) {
                    if (pbVar15[0x28] != 6) {
                      return (byte *)0x0;
                    }
                    lVar26 = *(long *)(pbVar15 + 0x20);
                    lVar14 = *(long *)(pbVar15 + 0x18);
                    bVar28 = pbVar15[8] | (byte)lVar14;
                    bVar29 = pbVar15[9] | (byte)((ulong)lVar14 >> 8);
                    bVar30 = pbVar15[10] | (byte)((ulong)lVar14 >> 0x10);
                    bVar31 = pbVar15[0xb] | (byte)((ulong)lVar14 >> 0x18);
                    bVar32 = pbVar15[0xc] | (byte)((ulong)lVar14 >> 0x20);
                    bVar33 = pbVar15[0xd] | (byte)((ulong)lVar14 >> 0x28);
                    bVar34 = pbVar15[0xe] | (byte)((ulong)lVar14 >> 0x30);
                    bVar35 = pbVar15[0xf] | (byte)((ulong)lVar14 >> 0x38);
                    bVar36 = pbVar15[0x10] | (byte)lVar26;
                    bVar37 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
                    bVar38 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
                    bVar39 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
                    bVar40 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
                    bVar41 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
                    bVar42 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
                    bVar43 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    auVar4[1] = bVar29;
                    auVar4[0] = bVar28;
                    auVar4[2] = bVar30;
                    auVar4[3] = bVar31;
                    auVar4[4] = bVar32;
                    auVar4[5] = bVar33;
                    auVar4[6] = bVar34;
                    auVar4[7] = bVar35;
                    auVar4[8] = bVar36;
                    auVar4[9] = bVar37;
                    auVar4[10] = bVar38;
                    auVar4[0xb] = bVar39;
                    auVar4[0xc] = bVar40;
                    auVar4[0xd] = bVar41;
                    auVar4[0xe] = bVar42;
                    auVar4[0xf] = bVar43;
                    auVar44 = NEON_ext(auVar44,auVar4,8,1);
                    if (CONCAT17(bVar35 | auVar44[7],
                                 CONCAT16(bVar34 | auVar44[6],
                                          CONCAT15(bVar33 | auVar44[5],
                                                   CONCAT14(bVar32 | auVar44[4],
                                                            CONCAT13(bVar31 | auVar44[3],
                                                                     CONCAT12(bVar30 | auVar44[2],
                                                                              CONCAT11(bVar29 | 
                                                  auVar44[1],bVar28 | auVar44[0]))))))) == 0 &&
                        *(long *)pbVar15 == 0) {
                      return (byte *)0x1;
                    }
                    return (byte *)0x0;
                  }
                  if ((pbVar13 == (byte *)0x1) &&
                     (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                      && lVar26 == 0)) {
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
                  lVar14 = *(long *)(pbVar15 + 0x18);
                  bVar28 = pbVar15[8] | (byte)lVar14;
                  bVar29 = pbVar15[9] | (byte)((ulong)lVar14 >> 8);
                  bVar30 = pbVar15[10] | (byte)((ulong)lVar14 >> 0x10);
                  bVar31 = pbVar15[0xb] | (byte)((ulong)lVar14 >> 0x18);
                  bVar32 = pbVar15[0xc] | (byte)((ulong)lVar14 >> 0x20);
                  bVar33 = pbVar15[0xd] | (byte)((ulong)lVar14 >> 0x28);
                  bVar34 = pbVar15[0xe] | (byte)((ulong)lVar14 >> 0x30);
                  bVar35 = pbVar15[0xf] | (byte)((ulong)lVar14 >> 0x38);
                  bVar36 = pbVar15[0x10] | (byte)lVar26;
                  bVar37 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
                  bVar38 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
                  bVar39 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
                  bVar40 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
                  bVar41 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
                  bVar42 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
                  bVar43 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                  auVar44 = NEON_ext(auVar2,auVar3,8,1);
                  lVar14 = CONCAT17(bVar35 | auVar44[7],
                                    CONCAT16(bVar34 | auVar44[6],
                                             CONCAT15(bVar33 | auVar44[5],
                                                      CONCAT14(bVar32 | auVar44[4],
                                                               CONCAT13(bVar31 | auVar44[3],
                                                                        CONCAT12(bVar30 | auVar44[2]
                                                                                 ,CONCAT11(bVar29 | 
                                                  auVar44[1],bVar28 | auVar44[0])))))));
                  goto joined_r0x000100e26620;
                }
                if (pbVar15[0x28] != 5) {
                  return (byte *)0x0;
                }
                lVar14 = *(long *)(pbVar15 + 8);
                uVar18 = *(ulong *)(pbVar15 + 0x10);
                lVar26 = *(long *)pbVar15;
                uVar12 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar26,uVar12);
                if (((ulong)pbVar13 & 1) == 0) {
                  return (byte *)0x0;
                }
                unaff_x29 = *(undefined8 *)(puVar8 + -0x90);
                unaff_x30 = *(undefined8 *)(puVar8 + -0x88);
                unaff_x20 = *(ulong *)(puVar8 + -0xa0);
                unaff_x19 = *(byte **)(puVar8 + -0x98);
                unaff_x22 = *(ulong *)(puVar8 + -0xb0);
                unaff_x21 = *(undefined8 *)(puVar8 + -0xa8);
                unaff_x24 = *(byte **)(puVar8 + -0xc0);
                unaff_x23 = *(byte **)(puVar8 + -0xb8);
                puVar8 = puVar8 + -0x80;
              } while( true );
            }
          }
          else if (lVar14 == 1) goto LAB_103cf02a8;
        }
        else if (lVar26 == 2) {
          if (lVar14 == 2) goto LAB_103cf02a8;
        }
        else if (lVar14 == 3) goto LAB_103cf02a8;
      }
      else if (lVar26 < 6) {
        if (lVar26 == 4) {
          if (lVar14 == 4) goto LAB_103cf02a8;
        }
        else if (lVar14 == 5) goto LAB_103cf02a8;
      }
      else if (lVar26 == 6) {
        if (lVar14 == 6) goto LAB_103cf02a8;
      }
      else if (lVar14 == 7) goto LAB_103cf02a8;
    }
    else if (lVar14 == lVar26) goto LAB_103cf02a8;
  }
  return (byte *)0x0;
}



/* Entry: 103cf0338; end: 103cf086b;  */

uint FUN_103cf0338(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_150 [4];
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
  
  puVar5 = auStack_150;
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    if ((((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
        (func_0x000107c605b8(), (uVar2 & 1) != 0)) && (param_1[6] == param_2[6])) {
      uVar3 = param_1[7];
      uVar6 = param_2[7];
      uVar2 = param_2[8];
      func_0x000103d1d830(uVar3,(char)param_1[8]);
      func_0x000103d1d830(uVar6,(char)uVar2);
      if (uVar3 == uVar6) {
        uVar2 = param_1[9];
        if (((uVar2 == param_2[9]) && (param_1[10] == param_2[10])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[0xb];
          if (((uVar2 == param_2[0xb]) && (param_1[0xc] == param_2[0xc])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar8 = param_1[0x12];
            uVar7 = param_1[0x11];
            uVar3 = param_1[0x14];
            uVar6 = param_1[0x13];
            uVar9 = param_2[0x12];
            uVar2 = param_2[0x11];
            uVar11 = param_2[0x14];
            uVar10 = param_2[0x13];
            uStack_b0 = uVar2;
            uStack_a8 = uVar9;
            uStack_a0 = uVar10;
            uStack_98 = uVar11;
            uStack_90 = uVar7;
            uStack_88 = uVar8;
            uStack_80 = uVar6;
            uStack_78 = uVar3;
            if (uVar3 >> 0x3c < 0xf) {
              if (0xe < uVar11 >> 0x3c) goto LAB_103cf05a4;
              if (uVar7 == uVar2) {
                if ((int)uVar8 != (int)uVar9) {
                  FUN_103cef74c(&uStack_90,&uStack_130,0x112db8dc0,&UNK_10d969810);
                  puVar5 = &uStack_b0;
LAB_103cf0808:
                  FUN_103cef74c(puVar5,&uStack_130,0x112db8dc0,&UNK_10d969810);
                  uVar2 = uVar7;
                  goto LAB_103cf081c;
                }
                FUN_103cef74c(&uStack_90,&uStack_130,0x112db8dc0,&UNK_10d969810);
                FUN_103cef74c(&uStack_b0,&uStack_130,0x112db8dc0,&UNK_10d969810);
                uVar2 = uVar6;
                func_0x000100e25fcc(uVar6,uVar3,uVar10,uVar11);
                func_0x0001015d38c8(uVar7,uVar9,uVar10,uVar11);
                if ((uVar2 & 1) != 0) goto LAB_103cf04c4;
              }
              else {
                FUN_103cef74c(&uStack_90,&uStack_130,0x112db8dc0,&UNK_10d969810);
                puVar5 = &uStack_b0;
LAB_103cf07cc:
                FUN_103cef74c(puVar5,&uStack_130,0x112db8dc0,&UNK_10d969810);
LAB_103cf081c:
                func_0x0001015d38c8(uVar2,uVar9,uVar10,uVar11);
              }
LAB_103cf0830:
              func_0x0001015d38c8(uVar7,uVar8,uVar6,uVar3);
            }
            else if (uVar11 >> 0x3c < 0xf) {
LAB_103cf05a4:
              uStack_130 = uVar7;
              uStack_128 = uVar8;
              uStack_120 = uVar6;
              uStack_118 = uVar3;
              uStack_110 = uVar2;
              uStack_108 = uVar9;
              uStack_100 = uVar10;
              uStack_f8 = uVar11;
              FUN_103cef74c(&uStack_90,&uStack_d0,0x112db8dc0,&UNK_10d969810);
              puVar4 = &uStack_b0;
              puVar5 = &uStack_d0;
LAB_103cf06a8:
              FUN_103cef74c(puVar4,puVar5,0x112db8dc0,&UNK_10d969810);
              FUN_103cfa0bc(&uStack_130,0x112fca6d0,&UNK_10dc3ab60);
            }
            else {
              FUN_103cef74c(&uStack_90,&uStack_130,0x112db8dc0,&UNK_10d969810);
              FUN_103cef74c(&uStack_b0,&uStack_130,0x112db8dc0,&UNK_10d969810);
LAB_103cf04c4:
              func_0x0001015d38c8(uVar7,uVar8,uVar6,uVar3);
              uVar8 = param_1[0x16];
              uVar7 = param_1[0x15];
              uVar3 = param_1[0x18];
              uVar6 = param_1[0x17];
              uVar9 = param_2[0x16];
              uVar2 = param_2[0x15];
              uVar11 = param_2[0x18];
              uVar10 = param_2[0x17];
              uStack_f0 = uVar2;
              uStack_e8 = uVar9;
              uStack_e0 = uVar10;
              uStack_d8 = uVar11;
              uStack_d0 = uVar7;
              uStack_c8 = uVar8;
              uStack_c0 = uVar6;
              uStack_b8 = uVar3;
              if (uVar3 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103cf066c;
                if (uVar7 != uVar2) {
                  FUN_103cef74c(&uStack_d0,&uStack_130,0x112db8dc0,&UNK_10d969810);
                  puVar5 = &uStack_f0;
                  goto LAB_103cf07cc;
                }
                if ((int)uVar8 != (int)uVar9) {
                  FUN_103cef74c(&uStack_d0,&uStack_130,0x112db8dc0,&UNK_10d969810);
                  puVar5 = &uStack_f0;
                  goto LAB_103cf0808;
                }
                FUN_103cef74c(&uStack_d0,&uStack_130,0x112db8dc0,&UNK_10d969810);
                FUN_103cef74c(&uStack_f0,&uStack_130,0x112db8dc0,&UNK_10d969810);
                uVar2 = uVar6;
                func_0x000100e25fcc(uVar6,uVar3,uVar10,uVar11);
                func_0x0001015d38c8(uVar7,uVar9,uVar10,uVar11);
                if ((uVar2 & 1) == 0) goto LAB_103cf0830;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103cf066c:
                  uStack_130 = uVar7;
                  uStack_128 = uVar8;
                  uStack_120 = uVar6;
                  uStack_118 = uVar3;
                  uStack_110 = uVar2;
                  uStack_108 = uVar9;
                  uStack_100 = uVar10;
                  uStack_f8 = uVar11;
                  FUN_103cef74c(&uStack_d0,auStack_150,0x112db8dc0,&UNK_10d969810);
                  puVar4 = &uStack_f0;
                  goto LAB_103cf06a8;
                }
                FUN_103cef74c(&uStack_d0,&uStack_130,0x112db8dc0,&UNK_10d969810);
                FUN_103cef74c(&uStack_f0,&uStack_130,0x112db8dc0,&UNK_10d969810);
              }
              func_0x0001015d38c8(uVar7,uVar8,uVar6,uVar3);
              uVar2 = param_1[0xd];
              if (((uVar2 == param_2[0xd]) && (param_1[0xe] == param_2[0xe])) ||
                 (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                uVar2 = param_1[0xf];
                func_0x000100e25fcc(uVar2,param_1[0x10],param_2[0xf],param_2[0x10]);
                uVar1 = (uint)uVar2;
                goto LAB_103cf0848;
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_103cf0848:
  return uVar1 & 1;
}



/* Entry: 103cf086c; end: 103cf090b;  */

/* WARNING: Possible PIC construction at 0x000103cf089c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cf08e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cf08e4) */
/* WARNING: Removing unreachable block (ram,0x000103cf08a0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cf086c(undefined8 *param_1,undefined8 *param_2)

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
            uVar22 = uVar14 >> 0x30 & 0xff;
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
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
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
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
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
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 103cf090c; end: 103cf0c7f;  */

uint FUN_103cf090c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_100 [48];
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
  
  uVar2 = *param_1;
  if (uVar2 != *param_2 || param_1[1] != param_2[1]) {
    func_0x000107c605b8();
    uVar1 = 0;
    if ((uVar2 & 1) == 0) goto LAB_103cf0c5c;
  }
  uVar7 = param_1[5];
  uVar2 = param_1[4];
  uVar13 = param_1[7];
  uVar11 = param_1[6];
  uVar8 = param_1[9];
  uVar4 = param_1[8];
  uVar9 = param_2[5];
  uVar5 = param_2[4];
  uVar14 = param_2[7];
  uVar12 = param_2[6];
  uVar10 = param_2[9];
  uVar6 = param_2[8];
  uStack_d0 = uVar5;
  uStack_c8 = uVar9;
  uStack_c0 = uVar12;
  uStack_b8 = uVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar2;
  uStack_98 = uVar7;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (uVar7 == 0) {
    if (uVar9 == 0) {
      FUN_103cef74c(&uStack_a0,auStack_100,0x113001800,&UNK_10dc78228);
      FUN_103cef74c(&uStack_d0,auStack_100,0x113001800,&UNK_10dc78228);
LAB_103cf0b80:
      FUN_103cef700(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
      uVar2 = param_1[2];
      func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_103cf0c5c;
    }
LAB_103cf0acc:
    FUN_103cef74c(&uStack_a0,auStack_100,0x113001800,&UNK_10dc78228);
    FUN_103cef74c(&uStack_d0,auStack_100,0x113001800,&UNK_10dc78228);
    FUN_103cef700(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
    uVar2 = uVar5;
    uVar7 = uVar9;
    uVar11 = uVar12;
    uVar13 = uVar14;
    uVar4 = uVar6;
    uVar8 = uVar10;
  }
  else {
    if (uVar9 == 0) goto LAB_103cf0acc;
    if (((uVar2 == uVar5) && (uVar7 == uVar9)) ||
       (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar7,uVar5,uVar9,0), (uVar3 & 1) != 0)) {
      if (((uVar11 != uVar12) || (uVar13 != uVar14)) &&
         (uVar3 = uVar11, func_0x000107c605b8(uVar11,uVar13,uVar12,uVar14,0), (uVar3 & 1) == 0)) {
        FUN_103cef74c(&uStack_a0,auStack_100,0x113001800,&UNK_10dc78228);
        FUN_103cef74c(&uStack_d0,auStack_100,0x113001800,&UNK_10dc78228);
        goto LAB_103cf0c28;
      }
      FUN_103cef74c(&uStack_a0,auStack_100,0x113001800,&UNK_10dc78228);
      FUN_103cef74c(&uStack_d0,auStack_100,0x113001800,&UNK_10dc78228);
      uVar3 = uVar4;
      func_0x000100e25fcc(uVar4,uVar8,uVar6,uVar10);
      FUN_103cef700(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
      if ((uVar3 & 1) != 0) goto LAB_103cf0b80;
    }
    else {
      FUN_103cef74c(&uStack_a0,auStack_100,0x113001800,&UNK_10dc78228);
      FUN_103cef74c(&uStack_d0,auStack_100,0x113001800,&UNK_10dc78228);
LAB_103cf0c28:
      FUN_103cef700(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
    }
  }
  FUN_103cef700(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
  uVar1 = 0;
LAB_103cf0c5c:
  return uVar1 & 1;
}



/* Entry: 103cf0c80; end: 103cf0ebb;  */

/* WARNING: Possible PIC construction at 0x000103cf0cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cf0cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cf0d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cf0dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cf0dc8) */
/* WARNING: Removing unreachable block (ram,0x000103cf0d80) */
/* WARNING: Removing unreachable block (ram,0x000103cf0cf8) */
/* WARNING: Removing unreachable block (ram,0x000103cf0cb4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cf0c80(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 != pbVar17 || pbVar16 != pbVar12) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar12,0);
    return pbVar13;
  }
  uVar14 = param_1[2];
  if ((uVar14 == param_2[2] && param_1[3] == param_2[3]) ||
     (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
    uVar14 = param_1[6];
    if (((uVar14 == param_2[6]) && (param_1[7] == param_2[7])) ||
       (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
      lVar19 = param_1[8];
      lVar22 = param_2[8];
      if (*(char *)(param_2 + 9) == '\x01') {
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
      pbVar13 = (byte *)param_1[10];
      pbVar16 = (byte *)param_1[0xb];
      pbVar17 = (byte *)param_2[10];
      pbVar12 = (byte *)param_2[0xb];
      if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
      uVar14 = param_1[0xc];
      if (((uVar14 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
         (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
        pbVar13 = (byte *)param_1[0xe];
        pbVar16 = (byte *)param_1[0xf];
        pbVar17 = (byte *)param_2[0xe];
        pbVar12 = (byte *)param_2[0xf];
        if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
        uVar14 = param_1[0x10];
        if (((uVar14 == param_2[0x10]) && (param_1[0x11] == param_2[0x11])) ||
           (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
          pbVar10 = (byte *)param_1[0x12];
          pbVar26 = (byte *)param_1[0x13];
          lVar19 = param_2[0x12];
          uVar14 = param_2[0x13];
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
            uVar5 = (uint)(uVar14 >> 0x20);
            uVar23 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar15 = pbVar26;
            if ((ulong)pbVar26 >> 0x3e == 3) {
              uVar21 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                  (uVar14 >> 0x3e < 3)) ||
                 ((uVar21 = 0, lVar19 != 0 || (uVar14 != 0xc000000000000000))))
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
                uVar24 = uVar14 >> 0x30 & 0xff;
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
                    pbVar15 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar22 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar15 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar22,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar22 - (long)pbVar15);
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
                    pbVar15 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar19,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
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
            pbVar13 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar25 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar16 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar19 = *(long *)pbVar15;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar13,lVar19,uVar11);
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
                lVar19 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar19,uVar11);
                if (((ulong)pbVar13 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar13 = pbVar10;
                pbVar16 = pbVar26;
                if ((pbVar10 == pbVar17) && (pbVar26 == pbVar12)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                lVar19 = *(long *)(pbVar15 + 0x18);
                if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar25 != (byte *)0x0) {
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar12 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar19 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar22 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                   (pbVar13 = pbVar26, pbVar16 = pbVar25, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar12 = *(byte **)(pbVar15 + 0x18),
                   pbVar26 == *(byte **)(pbVar15 + 0x10) && pbVar25 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar19 = *(long *)(pbVar15 + 0x20);
              if (pbVar26 == (byte *)0x0) {
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
                pbVar16 = pbVar26;
                if ((pbVar10 != pbVar17) || (pbVar26 != pbVar12)) goto code_r0x000107c605b8;
              }
              if (lVar22 != 0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar25 == *(byte **)(pbVar15 + 0x18)) && (lVar22 == lVar19)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar15 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                  lVar22 == 0) && pbVar26 == (byte *)0x0) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar15 + 0x20);
                lVar19 = *(long *)(pbVar15 + 0x18);
                bVar27 = pbVar15[8] | (byte)lVar19;
                bVar28 = pbVar15[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar15[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar15[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar15[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar15[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar15[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar15[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar15[0x10] | (byte)lVar22;
                bVar36 = pbVar15[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar15[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar15[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar15[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar15[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar15[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar15[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar13 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                  lVar22 == 0)) {
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
              lVar22 = *(long *)(pbVar15 + 0x20);
              lVar19 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar19;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar22;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar22 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar22,uVar11);
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
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cf0ebc; end: 103cf0f27;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cf0ebc(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
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
  
  if (param_6 != '\x01') {
    if (param_1 != param_5) {
      return (byte *)0x0;
    }
    goto SUB_100e25fcc;
  }
  if (param_5 < 2) {
    if (param_5 == 0) {
      if (param_1 == 0) {
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
    else if (param_1 == 1) goto SUB_100e25fcc;
  }
  else if (param_5 == 2) {
    if (param_1 == 2) goto SUB_100e25fcc;
  }
  else if (param_1 == 3) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103cf0f28; end: 103cf12f7;  */

uint FUN_103cf0f28(ulong *param_1,ulong *param_2)

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
  if ((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0))
  {
    uVar3 = (ulong)(param_1[2] != 0);
    if ((char)param_1[3] != '\x01') {
      uVar3 = param_1[2];
    }
    if ((char)param_2[3] == '\x01') {
      if (param_2[2] == 0) {
        if (uVar3 == 0) goto LAB_103cf0fb4;
      }
      else if (uVar3 == 1) {
LAB_103cf0fb4:
        uVar3 = param_1[4];
        if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
          uVar3 = param_1[6];
          if (((uVar3 == param_2[6]) && (param_1[7] == param_2[7])) ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
            uStack_2b8 = param_1[0x15];
            uStack_2c0 = param_1[0x14];
            uStack_f8 = param_1[0x17];
            uStack_100 = param_1[0x16];
            uStack_2a8 = param_1[0x17];
            uStack_2b0 = param_1[0x16];
            uStack_e8 = param_1[0x19];
            uStack_f0 = param_1[0x18];
            uStack_298 = param_1[0x19];
            uStack_2a0 = param_1[0x18];
            uStack_d8 = param_1[0x1b];
            uStack_e0 = param_1[0x1a];
            uStack_2f8 = param_1[0xd];
            uStack_300 = param_1[0xc];
            uStack_138 = param_1[0xf];
            uStack_140 = param_1[0xe];
            uStack_2e8 = param_1[0xf];
            uStack_2f0 = param_1[0xe];
            uStack_128 = param_1[0x11];
            uStack_130 = param_1[0x10];
            uStack_2d8 = param_1[0x11];
            uStack_2e0 = param_1[0x10];
            uStack_118 = param_1[0x13];
            uStack_120 = param_1[0x12];
            uStack_2c8 = param_1[0x13];
            uStack_2d0 = param_1[0x12];
            uStack_108 = param_1[0x15];
            uStack_110 = param_1[0x14];
            uStack_158 = param_1[0xb];
            uStack_160 = param_1[10];
            uStack_148 = param_1[0xd];
            uStack_150 = param_1[0xc];
            uStack_308 = param_1[0xb];
            uStack_310 = param_1[10];
            uStack_228 = param_2[0x15];
            uStack_230 = param_2[0x14];
            uStack_188 = param_2[0x17];
            uStack_190 = param_2[0x16];
            uStack_218 = param_2[0x17];
            uStack_220 = param_2[0x16];
            uStack_178 = param_2[0x19];
            uStack_180 = param_2[0x18];
            uStack_208 = param_2[0x19];
            uStack_210 = param_2[0x18];
            uStack_168 = param_2[0x1b];
            uStack_170 = param_2[0x1a];
            uStack_268 = param_2[0xd];
            uStack_270 = param_2[0xc];
            uStack_1c8 = param_2[0xf];
            uStack_1d0 = param_2[0xe];
            uStack_258 = param_2[0xf];
            uStack_260 = param_2[0xe];
            uStack_1b8 = param_2[0x11];
            uStack_1c0 = param_2[0x10];
            uStack_248 = param_2[0x11];
            uStack_250 = param_2[0x10];
            uStack_1a8 = param_2[0x13];
            uStack_1b0 = param_2[0x12];
            uStack_238 = param_2[0x13];
            uStack_240 = param_2[0x12];
            uStack_198 = param_2[0x15];
            uStack_1a0 = param_2[0x14];
            uStack_1e8 = param_2[0xb];
            uStack_1f0 = param_2[10];
            uStack_1d8 = param_2[0xd];
            uStack_1e0 = param_2[0xc];
            uStack_278 = param_2[0xb];
            uStack_280 = param_2[10];
            uStack_1f8 = param_2[0x1b];
            uStack_200 = param_2[0x1a];
            uStack_288 = param_1[0x1b];
            uStack_290 = param_1[0x1a];
            iVar1 = (int)&uStack_310;
            func_0x000100d6be5c();
            if (iVar1 == 1) {
              iVar1 = (int)&uStack_280;
              func_0x000100d6be5c();
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
                FUN_103cef74c(&uStack_160,&uStack_d0,0x113000f50,&UNK_10dc781c0);
                FUN_103cef74c(&uStack_1f0,&uStack_d0,0x113000f50,&UNK_10dc781c0);
                FUN_103cfa0bc(&uStack_430,0x113000f50,&UNK_10dc781c0);
LAB_103cf12e8:
                uVar3 = param_1[8];
                func_0x000100e25fcc(uVar3,param_1[9],param_2[8],param_2[9]);
                uVar2 = (uint)uVar3;
                goto LAB_103cf11e8;
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
              func_0x000100d6be5c();
              if (iVar1 != 1) {
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
                FUN_103cef74c(&uStack_160,auStack_5e0,0x113000f50,&UNK_10dc781c0);
                FUN_103cef74c(&uStack_1f0,auStack_5e0,0x113000f50,&UNK_10dc781c0);
                puVar4 = &uStack_d0;
                FUN_103cee720(puVar4,&uStack_430);
                FUN_103cfa0bc(&uStack_550,0x113000f50,&UNK_10dc781c0);
                FUN_103cfa0bc(&uStack_310,0x113000f50,&UNK_10dc781c0);
                if (((ulong)puVar4 & 1) != 0) goto LAB_103cf12e8;
                goto LAB_103cf11e4;
              }
            }
            func_0x000107c610b4(&uStack_430,&uStack_310,0x120);
            FUN_103cef74c(&uStack_160,&uStack_d0,0x113000f50,&UNK_10dc781c0);
            FUN_103cef74c(&uStack_1f0,&uStack_d0,0x113000f50,&UNK_10dc781c0);
            FUN_103cfa0bc(&uStack_430,0x113000f58,&UNK_10dc76f40);
          }
        }
      }
    }
    else if (uVar3 == param_2[2]) goto LAB_103cf0fb4;
  }
LAB_103cf11e4:
  uVar2 = 0;
LAB_103cf11e8:
  return uVar2 & 1;
}



/* Entry: 103cf12f8; end: 103cf1337;  */

void FUN_103cf12f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc791d0;
  func_0x000107c61520(&UNK_10dc791d0,&UNK_1106fc748);
  puRam0000000113001948 = puVar1;
  return;
}



/* Entry: 103cf1338; end: 103cf1563;  */

uint FUN_103cf1338(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_b80 [288];
  undefined1 auStack_a60 [288];
  undefined1 auStack_940 [288];
  undefined1 auStack_820 [576];
  undefined1 auStack_5e0 [288];
  undefined1 auStack_4c0 [288];
  undefined1 auStack_3a0 [288];
  undefined1 auStack_280 [288];
  undefined1 auStack_160 [288];
  undefined8 uVar4;
  
  func_0x000107c610b4(auStack_280,param_1 + 2,0x120);
  func_0x000107c610b4(auStack_3a0,param_2 + 2,0x120);
  func_0x000107c610b4(auStack_5e0,param_1 + 2,0x120);
  func_0x000107c610b4(auStack_4c0,param_2 + 2,0x120);
  iVar1 = (int)auStack_5e0;
  func_0x000100d6be5c();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_4c0;
    func_0x000100d6be5c();
    if (iVar1 == 1) {
      func_0x000107c610b4(auStack_820,auStack_5e0,0x120);
      FUN_103cef74c(auStack_280,auStack_160,0x113001700,&UNK_10dc78208);
      FUN_103cef74c(auStack_3a0,auStack_160,0x113001700,&UNK_10dc78208);
      FUN_103cfa0bc(auStack_820,0x113001700,&UNK_10dc78208);
LAB_103cf153c:
      uVar4 = *param_1;
      func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar2 = (uint)uVar4;
      goto LAB_103cf1548;
    }
LAB_103cf1438:
    func_0x000107c610b4(auStack_820,auStack_5e0,0x240);
    FUN_103cef74c(auStack_280,auStack_160,0x113001700,&UNK_10dc78208);
    FUN_103cef74c(auStack_3a0,auStack_160,0x113001700,&UNK_10dc78208);
    FUN_103cfa0bc(auStack_820,0x113001708,&UNK_10dc78210);
  }
  else {
    func_0x000107c610b4(auStack_940,auStack_5e0,0x120);
    iVar1 = (int)auStack_4c0;
    func_0x000100d6be5c();
    if (iVar1 == 1) goto LAB_103cf1438;
    func_0x000107c610b4(auStack_a60,auStack_4c0,0x120);
    func_0x000107c610b4(auStack_820,auStack_4c0,0x120);
    func_0x000107c610b4(auStack_160,auStack_940,0x120);
    FUN_103cef74c(auStack_280,auStack_b80,0x113001700,&UNK_10dc78208);
    FUN_103cef74c(auStack_3a0,auStack_b80,0x113001700,&UNK_10dc78208);
    puVar3 = auStack_160;
    func_0x000103cef064(puVar3,auStack_820);
    FUN_103cfa0bc(auStack_a60,0x113001700,&UNK_10dc78208);
    FUN_103cfa0bc(auStack_5e0,0x113001700,&UNK_10dc78208);
    if (((ulong)puVar3 & 1) != 0) goto LAB_103cf153c;
  }
  uVar2 = 0;
LAB_103cf1548:
  return uVar2 & 1;
}



/* Entry: 103cf1564; end: 103cf19a3;  */

void FUN_103cf1564(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc792b8;
  func_0x000107c61520(&UNK_10dc792b8,&UNK_1106fc868);
  puRam0000000113001960 = puVar1;
  return;
}



/* Entry: 103cf19a4; end: 103cf19b7;  */

void FUN_103cf19a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cf19b8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cf19f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cf19b8; end: 103cf1a63;  */

void FUN_103cf19b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001a68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc782d0;
  func_0x000107c61520(&UNK_10dc782d0,&UNK_1106fc150);
  puRam0000000113001a68 = puVar1;
  return;
}



/* Entry: 103cf1a64; end: 103cf1a67;  */

void FUN_103cf1a64(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78310;
  func_0x000107c61520(&UNK_10dc78310,&UNK_1106fc150);
  puRam0000000113001a88 = puVar1;
  return;
}



/* Entry: 103cf1a68; end: 103cf1aa7;  */

void FUN_103cf1a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78310;
  func_0x000107c61520(&UNK_10dc78310,&UNK_1106fc150);
  puRam0000000113001a88 = puVar1;
  return;
}



/* Entry: 103cf1aa8; end: 103cf1abb;  */

void FUN_103cf1aa8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cf1abc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cf1afc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cf1abc; end: 103cf1b67;  */

void FUN_103cf1abc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc783f8;
  func_0x000107c61520(&UNK_10dc783f8,&UNK_1106fc370);
  puRam0000000113001a90 = puVar1;
  return;
}



/* Entry: 103cf1b68; end: 103cf1b6b;  */

void FUN_103cf1b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78438;
  func_0x000107c61520(&UNK_10dc78438,&UNK_1106fc370);
  puRam0000000113001ab0 = puVar1;
  return;
}



/* Entry: 103cf1b6c; end: 103cf1bab;  */

void FUN_103cf1b6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78438;
  func_0x000107c61520(&UNK_10dc78438,&UNK_1106fc370);
  puRam0000000113001ab0 = puVar1;
  return;
}



/* Entry: 103cf1bac; end: 103cf1bbf;  */

void FUN_103cf1bac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cf1bc0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cf1c00)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cf1bc0; end: 103cf1c6b;  */

void FUN_103cf1bc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc784f8;
  func_0x000107c61520(&UNK_10dc784f8,&UNK_1106fc518);
  puRam0000000113001ab8 = puVar1;
  return;
}



/* Entry: 103cf1c6c; end: 103cf1c6f;  */

void FUN_103cf1c6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78538;
  func_0x000107c61520(&UNK_10dc78538,&UNK_1106fc518);
  puRam0000000113001ad8 = puVar1;
  return;
}



/* Entry: 103cf1c70; end: 103cf1caf;  */

void FUN_103cf1c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78538;
  func_0x000107c61520(&UNK_10dc78538,&UNK_1106fc518);
  puRam0000000113001ad8 = puVar1;
  return;
}



/* Entry: 103cf1cb0; end: 103cf1cc3;  */

void FUN_103cf1cb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cf1cc4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cf1d04)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cf1cc4; end: 103cf1d6f;  */

void FUN_103cf1cc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc785f8;
  func_0x000107c61520(&UNK_10dc785f8,&UNK_1106fc630);
  puRam0000000113001ae0 = puVar1;
  return;
}



/* Entry: 103cf1d70; end: 103cf1d73;  */

void FUN_103cf1d70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78638;
  func_0x000107c61520(&UNK_10dc78638,&UNK_1106fc630);
  puRam0000000113001b00 = puVar1;
  return;
}



/* Entry: 103cf1d74; end: 103cf1db3;  */

void FUN_103cf1d74(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78638;
  func_0x000107c61520(&UNK_10dc78638,&UNK_1106fc630);
  puRam0000000113001b00 = puVar1;
  return;
}



/* Entry: 103cf1db4; end: 103cf1dc7;  */

void FUN_103cf1db4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cf1dc8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cf1e08)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cf1dc8; end: 103cf1e73;  */

void FUN_103cf1dc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc786f8;
  func_0x000107c61520(&UNK_10dc786f8,&UNK_1106fc7f0);
  puRam0000000113001b08 = puVar1;
  return;
}



/* Entry: 103cf1e74; end: 103cf1e77;  */

void FUN_103cf1e74(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc78738;
  func_0x000107c61520(&UNK_10dc78738,&UNK_1106fc7f0);
  puRam0000000113001b28 = puVar1;
  return;
}


