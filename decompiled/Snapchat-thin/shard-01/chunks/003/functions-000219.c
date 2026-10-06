/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100eb6d90; end: 100eb6d97;  */

void FUN_100eb6d90(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100eb6d98; end: 100eb6de7;  */

void FUN_100eb6d98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 auStack_140 [2];
  undefined8 auStack_130 [11];
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
  
  lVar6 = 0;
  func_0x000100eb36a0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = 0;
  func_0x000100eb36a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_140 + lVar6);
  *puVar9 = param_1;
  *(undefined8 *)((long)auStack_140 + lVar6 + 8) = param_2;
  *(undefined1 *)((long)auStack_130 + lVar6) = 2;
  uVar5 = 0;
  FUN_100eb2860(0);
  func_0x000107c6159c(puVar9,uVar5,6);
  puVar1 = (undefined8 *)
           (unaff_x20 + (uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff)) + (long)*(int *)(lVar4 + 0x14)
           );
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  auStack_130[9] = puVar1[1];
  auStack_130[8] = *puVar1;
  uStack_d8 = puVar1[3];
  auStack_130[10] = puVar1[2];
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar4 + 0x14));
  puVar1[1] = 0x3000000000000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  uStack_58 = puVar1[9];
  uStack_60 = puVar1[8];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  func_0x000107c61434(param_2);
  func_0x000100eb6784(auStack_130 + 8,auStack_140,0x112d472c0,&UNK_10d90e810);
  func_0x000100eb6744(&uStack_a0,0x112d472c0,&UNK_10d90e810);
  uVar3 = uStack_b8;
  uVar2 = uStack_c0;
  uVar5 = uStack_d0;
  puVar1[5] = uStack_c8;
  puVar1[4] = uVar5;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  uVar5 = uStack_b0;
  puVar1[9] = uStack_a8;
  puVar1[8] = uVar5;
  uVar3 = uStack_d8;
  uVar2 = auStack_130[10];
  uVar5 = auStack_130[8];
  puVar1[1] = auStack_130[9];
  *puVar1 = uVar5;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  FUN_100eb6df0(puVar9,uVar7);
  return;
}



/* Entry: 100eb6de8; end: 100eb6def;  */

void FUN_100eb6de8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100eb6df0; end: 100eb6f4f;  */

undefined8 FUN_100eb6df0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100eb36a0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100eb6f50; end: 100eb6f53;  */

void FUN_100eb6f50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100eb6f54; end: 100eb6f83;  */

void FUN_100eb6f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100eb6f84; end: 100eb6f87;  */

void FUN_100eb6f84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100eb6f88; end: 100eb6fb7;  */

void FUN_100eb6f88(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100eb6fb8; end: 100eb6fbf;  */

void FUN_100eb6fb8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 100eb6fc0; end: 100eb7037;  */

undefined8 * FUN_100eb6fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 100eb7038; end: 100eb72a7;  */

int FUN_100eb7038(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100eb72a8; end: 100eb75bf;  */

void FUN_100eb72a8(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uStack_170;
  code *pcStack_168;
  undefined1 auStack_160 [80];
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  lVar1 = 0;
  pcVar4 = param_2;
  func_0x000107c5fb10();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar10 = (long)&uStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  func_0x000107c44fd0();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_100eb73b8:
    pcStack_b8 = (code *)0x0;
    lStack_c0 = 4;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,6);
    uStack_70 = 1;
    (*param_2)(&lStack_c0);
    return;
  }
  lVar9 = lVar2;
  func_0x000107c5cb90();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar9;
  func_0x000107c5faec();
  pcStack_168 = param_2;
  func_0x000107c61170(lVar9);
  lStack_c0 = lVar2;
  pcStack_b8 = pcVar4;
  func_0x000107c5fb04(lVar10);
  FUN_100e8b654();
  uVar5 = 0;
  lVar2 = lVar10;
  func_0x000107c60214(lVar10,0,PTR___sSSN_11034da80,lVar9);
  (**(code **)(lVar7 + 8))(lVar10);
  param_2 = pcStack_168;
  func_0x000107c6142c(pcVar4);
  if (0xe < uVar5 >> 0x3c) goto LAB_100eb73b8;
  lVar7 = param_1;
  func_0x000107c4f348();
  func_0x000107c61180();
  lVar10 = lVar1;
  if (lVar7 == 0) {
LAB_100eb7434:
    lVar7 = 0;
    lVar1 = 0;
  }
  else {
    lVar9 = lVar7;
    func_0x000107c44400();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    lVar10 = lVar1;
    if (lVar9 == 0) goto LAB_100eb7434;
    lVar7 = lVar9;
    func_0x000107c5faec();
    lVar10 = lVar1;
    func_0x000107c61170(lVar9);
  }
  lVar9 = param_1;
  func_0x000107c4f348();
  func_0x000107c61180();
  lVar6 = lVar10;
  if (lVar9 != 0) {
    lVar8 = lVar9;
    func_0x000107c42db4();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar6 = lVar10;
    if (lVar8 != 0) {
      lVar9 = lVar8;
      func_0x000107c5faec();
      lVar6 = lVar10;
      func_0x000107c61170(lVar8);
      goto LAB_100eb7494;
    }
  }
  lVar9 = 0;
  lVar10 = 0;
LAB_100eb7494:
  func_0x000107c4f348();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar8 = 0;
    lVar6 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x000107c4248c();
    func_0x000107c61180();
    uStack_170 = uVar5;
    func_0x000107c61170(param_1);
    lVar8 = lVar3;
    func_0x000107c5faec();
    uVar5 = uStack_170;
    func_0x000107c61170(lVar3);
  }
  uStack_f8 = 0xf000000000000000;
  uStack_100 = 0;
  pcStack_b8 = (code *)(uVar5 & 0xcfffffffffffffff | 0x2000000000000000);
  uStack_a8 = 0xf000000000000000;
  uStack_b0 = 0;
  uStack_70 = 0;
  lStack_110 = lVar2;
  uStack_108 = uVar5;
  lStack_f0 = lVar7;
  lStack_e8 = lVar1;
  lStack_e0 = lVar9;
  lStack_d8 = lVar10;
  lStack_d0 = lVar8;
  lStack_c8 = lVar6;
  lStack_c0 = lVar2;
  lStack_a0 = lVar7;
  lStack_98 = lVar1;
  lStack_90 = lVar9;
  lStack_88 = lVar10;
  lStack_80 = lVar8;
  lStack_78 = lVar6;
  FUN_100de78a0(lVar2,uVar5);
  FUN_100eb7800(&lStack_110,auStack_160);
  (*pcStack_168)(&lStack_c0);
  func_0x000100eb7850(&lStack_110);
  func_0x000100eb7850(&lStack_110);
  func_0x0001000b44c0(lVar2,uVar5);
  return;
}



/* Entry: 100eb75c0; end: 100eb7673;  */

void FUN_100eb75c0(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined1 uStack_60;
  
  uStack_c0 = 0;
  uStack_b8 = 1;
  puStack_a0 = &uStack_c8;
  uStack_c8 = param_1;
  func_0x000107c61174();
  func_0x000104065378(0x100eb77f8,&uStack_b0,0x100eabefc,0,0x100eabf00,0);
  uVar3 = uStack_b8;
  uVar2 = uStack_c0;
  uVar1 = uStack_c8;
  uStack_b0 = uStack_c8;
  uStack_a8 = uStack_c0;
  puStack_a0 = (undefined8 *)CONCAT71(puStack_a0._1_7_,uStack_b8);
  uStack_60 = 1;
  (*param_2)(&uStack_b0);
  FUN_100ea9290(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 100eb7674; end: 100eb76b7;  */

void FUN_100eb7674(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100eb76b8; end: 100eb777b;  */

void FUN_100eb76b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x10);
  puVar1 = &UNK_110362418;
  func_0x000107c613fc(&UNK_110362418,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_40 = FUN_100eb777c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100e8ba8c;
  puStack_48 = &UNK_110362430;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c5afbc(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100eb777c; end: 100eb77cb;  */

void FUN_100eb777c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_30 = uStack_50;
  uStack_28 = uStack_48;
  func_0x000104064d80(param_1,0x100eb77e8,auStack_40,0x100eb77f0,auStack_60);
  return;
}



/* Entry: 100eb77cc; end: 100eb77ff;  */

void FUN_100eb77cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100eb7800; end: 100eb7897;  */

undefined8 FUN_100eb7800(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d47890;
  func_0x0001000285a8(0x112d47890,&UNK_10d90e8c0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100eb7898; end: 100eb7a67;  */

/* WARNING: Possible PIC construction at 0x000100eb78e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb79ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb79d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb7a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb7a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eb7a0c) */
/* WARNING: Removing unreachable block (ram,0x000100eb79d8) */
/* WARNING: Removing unreachable block (ram,0x000100eb79b0) */
/* WARNING: Removing unreachable block (ram,0x000100eb78e4) */
/* WARNING: Removing unreachable block (ram,0x000100eb7a4c) */

void FUN_100eb7898(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100eb7a68; end: 100eb7aef; -[_TtC12OAuthFeature16OAuthLoadingView initWithFrame:] */

undefined1 *
FUN_100eb7a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_100eb7898();
  func_0x000107c61170(puVar2);
  return (undefined1 *)puVar2;
}



/* Entry: 100eb7af0; end: 100eb7b9b; -[_TtC12OAuthFeature16OAuthLoadingView initWithCoder:] */

void FUN_100eb7af0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "OAuthFeature/OAuthLoadingView.swift",0x23,2,0xe,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100eb7b48);
  (*pcVar1)();
}



/* Entry: 100eb7b9c; end: 100eb7ba7; -[SCOAuthFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7b9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d478c0;
  func_0x000107c61428(param_1 + _DAT_112d478c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7ba8; end: 100eb7bb3; -[SCOAuthFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d478c0;
  func_0x000107c61428(param_1 + _DAT_112d478c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7bb4; end: 100eb7bbf; -[SCOAuthFeatureEntryPoint unauthenticatedStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7bb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d478c8;
  func_0x000107c61428(param_1 + _DAT_112d478c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7bc0; end: 100eb7bcb; -[SCOAuthFeatureEntryPoint setUnauthenticatedStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d478c8;
  func_0x000107c61428(param_1 + _DAT_112d478c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7bcc; end: 100eb7bd7; -[SCOAuthFeatureEntryPoint applicationStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7bcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d478d0;
  func_0x000107c61428(param_1 + _DAT_112d478d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7bd8; end: 100eb7be3; -[SCOAuthFeatureEntryPoint setApplicationStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d478d0;
  func_0x000107c61428(param_1 + _DAT_112d478d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7be4; end: 100eb7bef; -[SCOAuthFeatureEntryPoint logInServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7be4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d478d8;
  func_0x000107c61428(param_1 + _DAT_112d478d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7bf0; end: 100eb7bfb; -[SCOAuthFeatureEntryPoint setLogInServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d478d8;
  func_0x000107c61428(param_1 + _DAT_112d478d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7bfc; end: 100eb7c07; -[SCOAuthFeatureEntryPoint logInLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7bfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d478e0;
  func_0x000107c61428(param_1 + _DAT_112d478e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7c08; end: 100eb7c13; -[SCOAuthFeatureEntryPoint setLogInLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d478e0;
  func_0x000107c61428(param_1 + _DAT_112d478e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7c14; end: 100eb7c1f; -[SCOAuthFeatureEntryPoint googleSignInService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7c14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d478e8;
  func_0x000107c61428(param_1 + _DAT_112d478e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7c20; end: 100eb7c2b; -[SCOAuthFeatureEntryPoint setGoogleSignInService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d478e8;
  func_0x000107c61428(param_1 + _DAT_112d478e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7c2c; end: 100eb7c37; -[SCOAuthFeatureEntryPoint authInitialInfoLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7c2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d478f0;
  func_0x000107c61428(param_1 + _DAT_112d478f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7c38; end: 100eb7c43; -[SCOAuthFeatureEntryPoint setAuthInitialInfoLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d478f0;
  func_0x000107c61428(param_1 + _DAT_112d478f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7c44; end: 100eb7c4f; -[SCOAuthFeatureEntryPoint cosServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7c44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d478f8;
  func_0x000107c61428(param_1 + _DAT_112d478f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7c50; end: 100eb7c5b; -[SCOAuthFeatureEntryPoint setCosServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d478f8;
  func_0x000107c61428(param_1 + _DAT_112d478f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7c5c; end: 100eb7c67; -[SCOAuthFeatureEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7c5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47900;
  func_0x000107c61428(param_1 + _DAT_112d47900,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7c68; end: 100eb7cab;  */

void FUN_100eb7c68(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb7cac; end: 100eb7cb7; -[SCOAuthFeatureEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47900;
  func_0x000107c61428(param_1 + _DAT_112d47900,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7cb8; end: 100eb7d0b;  */

void FUN_100eb7cb8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb7d0c; end: 100eb7d53; -[SCOAuthFeatureEntryPoint appealScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7d0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47908;
  func_0x000107c61428(param_1 + _DAT_112d47908,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100eb7d54; end: 100eb7d5f; -[SCOAuthFeatureEntryPoint setAppealScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47908;
  func_0x000107c61428(param_1 + _DAT_112d47908,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100eb7d60; end: 100eb7da7; -[SCOAuthFeatureEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7d60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47910;
  func_0x000107c61428(param_1 + _DAT_112d47910,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100eb7da8; end: 100eb7db3; -[SCOAuthFeatureEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47910;
  func_0x000107c61428(param_1 + _DAT_112d47910,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100eb7db4; end: 100eb7e13;  */

void FUN_100eb7db4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100eb7e14; end: 100eb8df7;  */

/* WARNING: Possible PIC construction at 0x000100eb8240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb84a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb84b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb86f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb87c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb88f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb88b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb88c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb88d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb8804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb87e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb87d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eb87e8) */
/* WARNING: Removing unreachable block (ram,0x000100eb8808) */
/* WARNING: Removing unreachable block (ram,0x000100eb8838) */
/* WARNING: Removing unreachable block (ram,0x000100eb8828) */
/* WARNING: Removing unreachable block (ram,0x000100eb8868) */
/* WARNING: Removing unreachable block (ram,0x000100eb8858) */
/* WARNING: Removing unreachable block (ram,0x000100eb8848) */
/* WARNING: Removing unreachable block (ram,0x000100eb8898) */
/* WARNING: Removing unreachable block (ram,0x000100eb8888) */
/* WARNING: Removing unreachable block (ram,0x000100eb8878) */
/* WARNING: Removing unreachable block (ram,0x000100eb88d8) */
/* WARNING: Removing unreachable block (ram,0x000100eb88c8) */
/* WARNING: Removing unreachable block (ram,0x000100eb88b8) */
/* WARNING: Removing unreachable block (ram,0x000100eb8928) */
/* WARNING: Removing unreachable block (ram,0x000100eb8918) */
/* WARNING: Removing unreachable block (ram,0x000100eb8908) */
/* WARNING: Removing unreachable block (ram,0x000100eb88f8) */
/* WARNING: Removing unreachable block (ram,0x000100eb8978) */
/* WARNING: Removing unreachable block (ram,0x000100eb8968) */
/* WARNING: Removing unreachable block (ram,0x000100eb8958) */
/* WARNING: Removing unreachable block (ram,0x000100eb8948) */
/* WARNING: Removing unreachable block (ram,0x000100eb8938) */
/* WARNING: Removing unreachable block (ram,0x000100eb8b80) */
/* WARNING: Removing unreachable block (ram,0x000100eb8b6c) */
/* WARNING: Removing unreachable block (ram,0x000100eb8b54) */
/* WARNING: Removing unreachable block (ram,0x000100eb8b44) */
/* WARNING: Removing unreachable block (ram,0x000100eb8b30) */
/* WARNING: Removing unreachable block (ram,0x000100eb8a2c) */
/* WARNING: Removing unreachable block (ram,0x000100eb8a1c) */
/* WARNING: Removing unreachable block (ram,0x000100eb8bc0) */
/* WARNING: Removing unreachable block (ram,0x000100eb8bb0) */
/* WARNING: Removing unreachable block (ram,0x000100eb8b9c) */
/* WARNING: Removing unreachable block (ram,0x000100eb8c08) */
/* WARNING: Removing unreachable block (ram,0x000100eb8bf4) */
/* WARNING: Removing unreachable block (ram,0x000100eb8be0) */
/* WARNING: Removing unreachable block (ram,0x000100eb8bc8) */
/* WARNING: Removing unreachable block (ram,0x000100eb8b0c) */
/* WARNING: Removing unreachable block (ram,0x000100eb8bc4) */
/* WARNING: Removing unreachable block (ram,0x000100eb8af8) */
/* WARNING: Removing unreachable block (ram,0x000100eb8ae8) */
/* WARNING: Removing unreachable block (ram,0x000100eb8ad8) */
/* WARNING: Removing unreachable block (ram,0x000100eb8db0) */
/* WARNING: Removing unreachable block (ram,0x000100eb8da0) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d90) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d80) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d70) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d5c) */
/* WARNING: Removing unreachable block (ram,0x000100eb8dc0) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d4c) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d38) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d28) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d18) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d08) */
/* WARNING: Removing unreachable block (ram,0x000100eb8cf8) */
/* WARNING: Removing unreachable block (ram,0x000100eb87c4) */
/* WARNING: Removing unreachable block (ram,0x000100eb8c10) */
/* WARNING: Removing unreachable block (ram,0x000100eb8d68) */
/* WARNING: Removing unreachable block (ram,0x000100eb8c18) */
/* WARNING: Removing unreachable block (ram,0x000100eb8794) */
/* WARNING: Removing unreachable block (ram,0x000100eb8778) */
/* WARNING: Removing unreachable block (ram,0x000100eb8768) */
/* WARNING: Removing unreachable block (ram,0x000100eb874c) */
/* WARNING: Removing unreachable block (ram,0x000100eb8734) */
/* WARNING: Removing unreachable block (ram,0x000100eb8724) */
/* WARNING: Removing unreachable block (ram,0x000100eb8710) */
/* WARNING: Removing unreachable block (ram,0x000100eb86f8) */
/* WARNING: Removing unreachable block (ram,0x000100eb84bc) */
/* WARNING: Removing unreachable block (ram,0x000100eb8df4) */
/* WARNING: Removing unreachable block (ram,0x000100eb8584) */
/* WARNING: Removing unreachable block (ram,0x000100eb84ac) */
/* WARNING: Removing unreachable block (ram,0x000100eb8244) */
/* WARNING: Removing unreachable block (ram,0x000100eb8a34) */
/* WARNING: Removing unreachable block (ram,0x000100eb8b94) */
/* WARNING: Removing unreachable block (ram,0x000100eb8a88) */
/* WARNING: Removing unreachable block (ram,0x000100eb8260) */
/* WARNING: Removing unreachable block (ram,0x000100eb87d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7e14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined1 auStack_170 [16];
  undefined8 *puStack_160;
  long lStack_158;
  undefined1 auStack_140 [16];
  undefined8 *puStack_130;
  long *plStack_118;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  lVar1 = 0;
  func_0x000100eb36a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3ded0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar13 = unaff_x20;
    func_0x000107c5e1d0();
    func_0x000107c61180();
    if (lVar13 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5d1e8();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c3dfc8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4bc0c();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4bc08();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c44458();
              func_0x000107c61180();
              if (lVar7 != 0) {
                lVar8 = unaff_x20;
                func_0x000107c3e430();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c407fc();
                  func_0x000107c61180();
                  if (lVar9 == 0) {
                    func_0x000107c61170(lVar1);
                    lVar1 = lVar2;
                  }
                  else {
                    func_0x000107c3fa0c();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      lVar10 = 0;
                      FUN_100ead620();
                      func_0x000107c613fc();
                      func_0x0001000c6560();
                      func_0x000107c613fc();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      lVar11 = lVar1;
                      func_0x0001000c6580();
                      *(long *)(lVar10 + 0x28) = lVar3;
                      *(long *)(lVar10 + 0x30) = lVar4;
                      *(long *)(lVar10 + 0x38) = lVar5;
                      *(long *)(lVar10 + 0x40) = lVar6;
                      *(long *)(lVar10 + 0x48) = lVar7;
                      *(long *)(lVar10 + 0x50) = lVar11;
                      *(long *)(lVar10 + 0x10) = lVar1;
                      *(long *)(lVar10 + 0x18) = lVar2;
                      *(long *)(lVar10 + 0x20) = lVar13;
                      *(long *)(lVar10 + 0x58) = lVar8;
                      *(long *)(lVar10 + 0x60) = lVar9;
                      *(long *)(lVar10 + 0x68) = unaff_x20;
                      *(undefined8 *)(lVar10 + 0x70) = 0;
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      lVar13 = lVar1;
                      func_0x000100ead440();
                      lVar2 = _DAT_113093560;
                      if (lVar13 == 0) {
                        func_0x000107c61428(lVar1 + _DAT_113093560,auStack_140,0,0);
                        lVar2 = lVar1 + lVar2;
                        func_0x000107c61618();
                        if (lVar2 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar8;
                        }
                        else {
                          uVar12 = *(undefined8 *)(lVar1 + _DAT_113093568);
                          func_0x00010486bd10(0);
                          func_0x000107c61174(uVar12);
                          func_0x00010486bac0();
                          func_0x000107c41bec(lVar2);
                        }
                      }
                      else {
                        uVar12 = *(undefined8 *)(lVar1 + _DAT_113093568);
                        func_0x000107c61174();
                        func_0x000107c4c038();
                        func_0x000107c61180();
                        uVar15 = *(undefined8 *)(lVar8 + _DAT_112d48350);
                        lVar13 = 0;
                        FUN_100ea8d80();
                        lVar2 = lVar13;
                        func_0x000107c613fc();
                        *(undefined8 *)(lVar2 + 0x28) = 0;
                        *(undefined8 *)(lVar2 + 0x30) = 0xe000000000000000;
                        *(undefined8 *)(lVar2 + 0x10) = uVar12;
                        puVar14 = PTR_PTR_1126a5ea8;
                        func_0x000107c610f8();
                        func_0x000107c61174();
                        func_0x000107c453e4();
                        *(undefined **)(lVar2 + 0x18) = puVar14;
                        *(long *)(lVar2 + 0x20) = lVar6;
                        *(undefined8 *)(lVar2 + 0x38) = uVar15;
                        lVar1 = *(long *)(*(long *)(lVar10 + 0x10) + _DAT_113093568);
                        func_0x000107c61174(lVar1);
                        func_0x000107c4ec80();
                        func_0x000107c61180();
                        ppuStack_c8 = &PTR_DAT_110360d08;
                        uStack_b8 = 0;
                        uStack_c0 = 0;
                        uStack_a8 = 0;
                        uStack_b0 = 0;
                        uStack_a0 = 0;
                        puStack_160 = &uStack_c0;
                        plStack_118 = alStack_e8;
                        lStack_158 = lVar10;
                        puStack_130 = puStack_160;
                        alStack_e8[0] = lVar2;
                        lStack_d0 = lVar13;
                        func_0x000107c6157c(lVar2);
                        func_0x00010486ddec(0x100eb96b0,auStack_140,0x100eb96bc,auStack_170);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100eb8df8; end: 100eb8e1f; -[SCOAuthFeatureEntryPoint begin] */

void FUN_100eb8df8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100eb7e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eb8e20; end: 100eb8e63; -[SCOAuthFeatureEntryPoint end] */

void FUN_100eb8e20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb8e64; end: 100eb93b7;  */

void FUN_100eb8e64(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10e8c20)) ||
       (func_0x000107c605b8(0xd00000000000001e,0x800000010ef173e0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a160();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ef1f0)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef10e10,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52858();
      }
      else {
        uVar2 = 0;
        if (((param_2 == 0x7265536e49676f6c) && (param_3 == -0x12ffff8c9a9c968a)) ||
           (func_0x000107c605b8(0x7265536e49676f6c,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c560a8();
        }
        else {
          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e8c00)) {
            uVar2 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010ef17400,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e9b60)) {
                uVar2 = 0xd000000000000013;
                func_0x000107c605b8(0xd000000000000013,0x800000010ef164a0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0xd00000000000001d;
                  if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10e8be0)) ||
                     (func_0x000107c605b8(0xd00000000000001d,0x800000010ef17420,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c52a2c();
                  }
                  else {
                    uVar2 = 0x6976726553736f63;
                    if (((param_2 == 0x6976726553736f63) && (param_3 == -0x14ffffffff8c9a9d)) ||
                       (func_0x000107c605b8(0x6976726553736f63,0xeb00000000736563,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c539ec();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0;
                          if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10e8bc0))
                             || (func_0x000107c605b8(0xd000000000000012,0x800000010ef17440,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c52808();
                          }
                          else {
                            uVar2 = 0xd000000000000017;
                            if (((param_2 != -0x2fffffffffffffe9) ||
                                (param_3 != -0x7ffffffef10ed990)) &&
                               (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,
                                                    param_3,0), (uVar2 & 1) == 0)) {
                              func_0x000107c602fc(0x15);
                              func_0x000107c6142c(0xe000000000000000);
                              func_0x000107c5fb78(param_2,param_3);
                              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                  0x800000010ef0fc20,
                                                  "OAuthFeature/SCOAuthFeatureEntryPoint.swift",0x2b
                                                  ,2,0x57,0);
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x100eb93b8);
                              (*pcVar1)();
                            }
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c5a68c();
                          }
                          goto LAB_100eb8ef0;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c53414();
                    }
                  }
                  goto LAB_100eb8ef0;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c54f0c();
              goto LAB_100eb8ef0;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c560a4();
        }
      }
    }
  }
LAB_100eb8ef0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100eb93b8; end: 100eb9463; -[SCOAuthFeatureEntryPoint setValue:forIvarName:] */

void FUN_100eb93b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100eb8e64(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100eb9768(auStack_50);
  return;
}



/* Entry: 100eb9464; end: 100eb957b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb9464(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d478c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d478c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d478d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d478d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d478e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d478e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d478f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d478f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d47900,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d47908) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d47910) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d47918) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100eb957c; end: 100eb959b; -[SCOAuthFeatureEntryPoint init] */

void FUN_100eb957c(void)

{
  FUN_100eb9464();
  return;
}



/* Entry: 100eb959c; end: 100eb95cf;  */

void FUN_100eb959c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100eb95d0; end: 100eb96a7; -[SCOAuthFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb95d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d478c0);
  func_0x000107c61610(param_1 + _DAT_112d478c8);
  func_0x000107c61610(param_1 + _DAT_112d478d0);
  func_0x000107c61610(param_1 + _DAT_112d478d8);
  func_0x000107c61610(param_1 + _DAT_112d478e0);
  func_0x000107c61610(param_1 + _DAT_112d478e8);
  func_0x000107c61610(param_1 + _DAT_112d478f0);
  func_0x000107c61610(param_1 + _DAT_112d478f8);
  func_0x000107c61610(param_1 + _DAT_112d47900);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d47908));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d47910));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d47918));
  return;
}



/* Entry: 100eb96a8; end: 100eb96c3;  */

void FUN_100eb96a8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100eadacc(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100eb96c4; end: 100eb9747;  */

long FUN_100eb96c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100eb9748; end: 100eb9767;  */

void FUN_100eb9748(void)

{
  func_0x000107c61168(&PTR_PTR_11279d4b8);
  return;
}



/* Entry: 100eb9768; end: 100eb9787;  */

void FUN_100eb9768(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100eb977c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100eb9788; end: 100eb9897;  */

/* WARNING: Possible PIC construction at 0x000100eb97c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb9818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eb987c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eb981c) */
/* WARNING: Removing unreachable block (ram,0x000100eb983c) */
/* WARNING: Removing unreachable block (ram,0x000100eb9850) */
/* WARNING: Removing unreachable block (ram,0x000100eb97c4) */
/* WARNING: Removing unreachable block (ram,0x000100eb9880) */

void FUN_100eb9788(undefined8 param_1)

{
  func_0x00010011df08();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eb9898; end: 100eb98c7; -[_TtC43AuthInitialInfoLoggerServicesImplementation32AuthInitialInfoLoggerServiceImpl logAuthInitialInfoSubmit:] */

void FUN_100eb9898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_100eb9788(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 100eb98c8; end: 100eb9abb;  */

void FUN_100eb98c8(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_1126a5eb0;
  func_0x000107c610f8(PTR_PTR_1126a5eb0);
  func_0x000107c453e4();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar8,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5346c(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c5611c(puVar2);
  func_0x000107c59aa8(puVar2);
  func_0x000107c579b0(puVar2);
  func_0x000107c59860(puVar2);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4bf8c();
    func_0x000107c615e8(lVar3);
  }
  puVar7 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  puVar5 = PTR___ss5Int64VN_11034ee50;
  puVar4 = PTR___ss5Int64VN_11034ee50;
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c();
  func_0x000107c61434(puVar6);
  func_0x000107c5fb78(0x203a20,0xe300000000000000);
  func_0x000107c6142c(puVar6);
  func_0x000107c6057c(puVar5,puVar7);
  func_0x000107c61434(puVar6);
  func_0x000107c5fb78(puVar5,puVar7);
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(puVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5fadc(puVar4,puVar6);
  func_0x000107c6142c(puVar6);
  func_0x000107c311b4(param_1);
  func_0x000107c61180();
  func_0x000104d06f54(uVar8,puVar4,param_1,param_2 & 1,1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100eb9abc; end: 100eb9b17; -[_TtC43AuthInitialInfoLoggerServicesImplementation32AuthInitialInfoLoggerServiceImpl logAuthInitialInfoSubmitResponseWithSource:success:grpcStatusCode:protoStatusCode:] */

void FUN_100eb9abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c6157c();
  FUN_100eb98c8(param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 100eb9b18; end: 100eb9b6b;  */

void FUN_100eb9b18(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100eb9b6c; end: 100eb9b9b;  */

void FUN_100eb9b6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 100eb9b9c; end: 100eb9c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100eb9b9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + _DAT_113083800);
  lVar1 = 0;
  func_0x000100eb9b4c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xe000000000000000;
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  puVar2 = PTR_PTR_1126a5ec0;
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  return lVar1;
}



/* Entry: 100eb9c1c; end: 100eb9c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100eb9c1c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083800);
  lVar1 = 0;
  func_0x000100eb9b4c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xe000000000000000;
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  puVar2 = PTR_PTR_1126a5ec0;
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  return lVar1;
}



/* Entry: 100eb9c24; end: 100eb9c5b;  */

void FUN_100eb9c24(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100eb9c5c; end: 100eb9c7f;  */

void FUN_100eb9c5c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100eb9c80; end: 100eb9d1f;  */

void FUN_100eb9c80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100eb9d20; end: 100eb9dfb;  */

void FUN_100eb9d20(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x100eb9e04;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100eb9c24;
  puStack_58 = &UNK_110362508;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_100ec9c90(0);
  func_0x000107c610f8();
  func_0x000100ec9c00(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 100eb9dfc; end: 100eb9e07;  */

void FUN_100eb9dfc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100eb9e08; end: 100eb9e4f; -[SCAuthInitialInfoLoggerServicesProvider systemBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb9e08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d47ad0;
  func_0x000107c61428(param_1 + _DAT_112d47ad0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eb9e50; end: 100eb9ea7; -[SCAuthInitialInfoLoggerServicesProvider setSystemBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb9e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d47ad0;
  func_0x000107c61428(param_1 + _DAT_112d47ad0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100eb9ea8; end: 100eba193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100eb9ea8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  lVar3 = unaff_x20;
  func_0x000107c5c5ec();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    func_0x000100eb9ca4();
    func_0x000107c613fc();
    *(long *)(lVar4 + 0x10) = lVar3;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d47ad8);
    *(long *)(unaff_x20 + _DAT_112d47ad8) = lVar4;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(uVar7);
    puVar5 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    pcStack_50 = FUN_100eba194;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100eb9c24;
    puStack_58 = &UNK_110362548;
    ppuVar6 = &puStack_70;
    lStack_48 = lVar4;
    func_0x000107c60bc4(ppuVar6);
    lVar1 = lStack_48;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c3e4fc(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    uVar7 = 0;
    FUN_100ec9c90(0);
    func_0x000107c610f8();
    func_0x000100ec9c00(puVar5,uVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(lVar4);
    return puVar5;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AuthInitialInfoLoggerServicesImplementation/SCAuthInitialInfoLoggerServicesProvider.swift"
                      ,0x59,2,0x17,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100eba040);
  (*pcVar2)();
}



/* Entry: 100eba194; end: 100eba1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100eba194(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083800);
  lVar1 = 0;
  func_0x000100eb9b4c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xe000000000000000;
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  puVar2 = PTR_PTR_1126a5ec0;
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  return lVar1;
}



/* Entry: 100eba1b8; end: 100eba1eb; -[SCAuthInitialInfoLoggerServicesProvider provide] */

void FUN_100eba1b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100eb9ea8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100eba1ec; end: 100eba21f; -[SCAuthInitialInfoLoggerServicesProvider __safeProvide] */

void FUN_100eba1ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100eba040();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100eba220; end: 100eba263; -[SCAuthInitialInfoLoggerServicesProvider end] */

void FUN_100eba220(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100eba264; end: 100eba38f;  */

void FUN_100eba264(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef4f0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000016,0x800000010ef10b10,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      func_0x000107c602fc(0x15);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                          "AuthInitialInfoLoggerServicesImplementation/SCAuthInitialInfoLoggerServicesProvider.swift"
                          ,0x59,2,0x2a,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100eba390);
      (*pcVar1)();
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c59b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100eba390; end: 100eba43b; -[SCAuthInitialInfoLoggerServicesProvider setValue:forIvarName:] */

void FUN_100eba390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100eba264(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100eba43c; end: 100eba49b; -[SCAuthInitialInfoLoggerServicesProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eba43c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d47ad0,0);
  *(undefined8 *)(param_1 + _DAT_112d47ad8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100eba49c; end: 100eba4cf;  */

void FUN_100eba49c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100eba4d0; end: 100eba507; -[SCAuthInitialInfoLoggerServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eba4d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d47ad0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d47ad8));
  return;
}



/* Entry: 100eba508; end: 100eba527;  */

void FUN_100eba508(void)

{
  func_0x000107c61168(&PTR_PTR_112d47b20);
  return;
}



/* Entry: 100eba528; end: 100eba533;  */

void FUN_100eba528(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100eba534; end: 100eba607;  */

/* WARNING: Possible PIC construction at 0x000100eba5e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eba5e8) */

void FUN_100eba534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126a5ec8;
  func_0x000107c610f8(PTR_PTR_1126a5ec8);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c571f8(puVar1);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bf8c();
    func_0x000107c615e8(lVar2);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c31120(param_2);
  func_0x000107c61180();
  func_0x000107c3125c(param_1);
  func_0x000107c61180();
  func_0x000104d0723c(uVar3,param_2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100eba608; end: 100eba66b;  */

void FUN_100eba608(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100eba66c; end: 100eba6a7;  */

void FUN_100eba66c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110362628;
  if (lRam0000000112d47c40 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d47c40 = param_1;
  }
  return;
}



/* Entry: 100eba6a8; end: 100eba6eb;  */

void FUN_100eba6a8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100eba6ec; end: 100eba7d7;  */

byte FUN_100eba6ec(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  if (bVar1 == 2) {
    if (uVar3 == 2) {
      return 1;
    }
  }
  else if (bVar1 == 3) {
    if (uVar3 == 3) {
      return 1;
    }
  }
  else if (bVar1 == 4) {
    if (bVar2 == 4) {
      return 1;
    }
  }
  else if (2 < uVar3 - 2) {
    return (bVar2 ^ bVar1 ^ 1) & 1;
  }
  return 0;
}



/* Entry: 100eba7d8; end: 100eba80b;  */

void FUN_100eba7d8(long param_1)

{
  func_0x000103dbf870();
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x30,7);
  return;
}



/* Entry: 100eba80c; end: 100eba8b3;  */

void FUN_100eba80c(undefined8 param_1)

{
  if (lRam0000000112d47c80 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61738c);
  return;
}



/* Entry: 100eba8b4; end: 100ebac27;  */

void FUN_100eba8b4(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar3 = *param_2;
  bVar4 = *(byte *)(param_3 + 1);
  bVar6 = 4;
  bVar1 = bVar4;
  if (bVar3 != 4) {
    bVar6 = 2;
    bVar1 = bVar3;
  }
  bVar2 = bVar4;
  bVar5 = bVar4;
  if (bVar3 != 3) {
    bVar2 = bVar1;
    bVar5 = bVar6;
  }
  bVar1 = 3;
  if (bVar3 != 2) {
    bVar4 = bVar2;
    bVar1 = bVar5;
  }
  *param_1 = bVar1;
  param_1[1] = bVar4 & 1;
  return;
}



/* Entry: 100ebac28; end: 100ebad13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ebac28(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112d47da8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d47da8);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010ef175b0);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c450cc();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c61180();
    func_0x000107c53840();
    func_0x000107c5a050(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar3);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 100ebad14; end: 100ebad27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ebad14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d47db0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d47db0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100ebad28();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100ebad28; end: 100ebadcb;  */

undefined * FUN_100ebad28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1);
  func_0x000107c61174(puVar1);
  puVar2 = puVar1;
  FUN_100ec8468();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1);
  func_0x000107c59c74(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 100ebadcc; end: 100ebaddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ebadcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d47db8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d47db8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100ebae3c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100ebade0; end: 100ebae3b;  */

long FUN_100ebade0(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 100ebae3c; end: 100ebaee7;  */

undefined * FUN_100ebae3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0xbf);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000107c59c74(puVar1,param_2,1);
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}


