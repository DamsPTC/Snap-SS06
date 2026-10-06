/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101048a60; end: 101048aab;  */

void FUN_101048a60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101048aac; end: 101048acb;  */

void FUN_101048aac(void)

{
  FUN_1010486ac();
  return;
}



/* Entry: 101048acc; end: 101048af7;  */

undefined8 FUN_101048acc(void)

{
  return 0;
}



/* Entry: 101048af8; end: 101048b17;  */

void FUN_101048af8(void)

{
  func_0x000107c61168(&PTR_PTR_112d56958);
  return;
}



/* Entry: 101048b18; end: 101048b7b; -[_TtC24DSAStoriesSettingsOptOut32DSAStoriesSettingsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101048b18(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d56a20) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "DSAStoriesSettingsOptOut/DSAStoriesSettingsViewController.swift",0x3f,2,0x2c,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101048b7c);
  (*pcVar1)();
}



/* Entry: 101048b7c; end: 101048cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101048b7c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong *puVar5;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_loadView_112604be0);
  lVar1 = *(long *)(unaff_x20 + _DAT_112d569f0);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      FUN_101048cd4();
      puVar3 = PTR_PTR_1126c56f0;
      func_0x000107c610f8(PTR_PTR_1126c56f0);
      func_0x000107c49520();
      func_0x000107c61170(lVar2);
      puVar5 = *(ulong **)(unaff_x20 + _DAT_112d56a20);
      if (puVar5 != (ulong *)0x0) {
        puVar4 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c61174();
        func_0x000107c4807c(puVar4);
        (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x80))();
        func_0x000107c61170(puVar5);
      }
      func_0x000107c5a568();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar3);
    }
  }
  return;
}



/* Entry: 101048cd4; end: 10104920b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101048cd4(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  undefined8 auStack_f0 [7];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar3 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = (long)(auStack_b0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12;
  lVar3 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12_00;
  puVar4 = PTR_PTR_1126c56f8;
  func_0x000107c610f8(PTR_PTR_1126c56f8);
  func_0x000107c453e4();
  lVar3 = *(long *)(unaff_x20 + _DAT_112d569f8);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar5 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar5 != 0) {
      puVar6 = &UNK_11037a0c0;
      puStack_a8 = auStack_b0 + -extraout_x8;
      func_0x000107c613fc(&UNK_11037a0c0,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar5;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x101049434;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1001de374;
      puStack_88 = &UNK_11037a0d8;
      ppuVar7 = &puStack_a0;
      puStack_78 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_78;
      func_0x000107c61174();
      func_0x000107c61574(puVar6);
      func_0x000107c53c70(puVar4);
      func_0x000107c60bd0(ppuVar7);
      puVar6 = &UNK_11037a110;
      func_0x000107c613fc(&UNK_11037a110,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar5;
      uStack_80 = 0x101049468;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100288f10;
      puStack_88 = &UNK_11037a128;
      ppuVar7 = &puStack_a0;
      puStack_78 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_78;
      func_0x000107c61174(lVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c532f4(puVar4);
      func_0x000107c60bd0(ppuVar7);
      if (*(char *)(unaff_x20 + _DAT_112d56a18) == '\x01') {
        puVar6 = &UNK_11037a1b0;
        func_0x000107c613fc(&UNK_11037a1b0,0x18,7);
        func_0x000107c61614(puVar6 + 0x10);
        uStack_80 = 0x101049480;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_11037a1c8;
        ppuVar7 = &puStack_a0;
        puStack_78 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_78;
      }
      else {
        puVar6 = &UNK_11037a160;
        func_0x000107c613fc(&UNK_11037a160,0x18,7);
        *(long *)(puVar6 + 0x10) = unaff_x20;
        uStack_80 = 0x101049478;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_11037a178;
        ppuVar7 = &puStack_a0;
        puStack_78 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_78;
        func_0x000107c61174();
      }
      func_0x000107c61574(puVar6);
      func_0x000107c56c60(puVar4);
      func_0x000107c60bd0(ppuVar7);
      lVar8 = *(long *)(unaff_x20 + _DAT_112d56a08);
      func_0x000107c3dae4();
      func_0x000107c61180();
      lVar3 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      puVar2 = puStack_a8;
      if (lVar3 != 0) {
        lVar8 = lVar3;
        func_0x000107c4c1e0(lVar3);
        func_0x000107c61180();
        func_0x000107c52604(puVar4);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar8);
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      pcVar15 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
      (*pcVar15)(lVar14,1,1,lVar3);
      (*pcVar15)(lVar12,1,1,lVar3);
      lVar3 = 0;
      func_0x0001046305a8();
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar2,1,1,lVar3);
      *(undefined1 *)(lVar10 + -8) = 0;
      *(undefined8 *)(lVar10 + -0x10) = 0;
      *(undefined8 *)(lVar10 + -0x18) = 0;
      *(undefined8 *)(lVar10 + -0x20) = 0;
      *(undefined8 *)(lVar10 + -0x28) = 0;
      *(undefined8 *)(lVar10 + -0x30) = 0;
      *(undefined8 *)(lVar10 + -0x38) = 0;
      *(undefined1 **)(lVar10 + -0x40) = puVar2;
      func_0x000104638e24(lVar10,0x13,lVar14,0,lVar12,0,0,0,0);
      func_0x000103bda44c(0);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d56a00);
      FUN_100e39298(lVar10,lVar11);
      func_0x000104652fec(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000104651d90(lVar11);
      func_0x000103bda584(uVar13,0,lVar11);
      func_0x000107c5a6a4(puVar4);
      func_0x000107c61170(lVar5);
      func_0x000100e392dc(lVar10);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d56a20);
      *(undefined8 *)(unaff_x20 + _DAT_112d56a20) = uVar13;
      func_0x000107c61170(uVar9);
    }
  }
  return puVar4;
}



/* Entry: 10104920c; end: 10104930f; -[_TtC24DSAStoriesSettingsOptOut32DSAStoriesSettingsViewController loadView] */

void FUN_10104920c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101048b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101049310; end: 10104933b; -[_TtC24DSAStoriesSettingsOptOut32DSAStoriesSettingsViewController initWithNibName:bundle:] */

void FUN_101049310(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DSAStoriesSettingsOptOut.DSAStoriesSettingsViewController",0x39,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10104933c);
  (*pcVar1)();
}



/* Entry: 10104933c; end: 10104939b; -[_TtC24DSAStoriesSettingsOptOut32DSAStoriesSettingsViewController initWithNibName:bundle:transitionType:] */

void FUN_10104933c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DSAStoriesSettingsOptOut.DSAStoriesSettingsViewController",0x39,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101049368);
  (*pcVar1)();
}



/* Entry: 10104939c; end: 101049413; -[_TtC24DSAStoriesSettingsOptOut32DSAStoriesSettingsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001010493b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010493d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010493bc) */
/* WARNING: Removing unreachable block (ram,0x0001010493dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104939c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d569f0));
  return;
}



/* Entry: 101049414; end: 10104944b;  */

void FUN_101049414(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa690);
  return;
}



/* Entry: 10104944c; end: 10104949f;  */

void FUN_10104944c(long param_1,long param_2)

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



/* Entry: 1010494a0; end: 1010494a3; -[_TtC24DSAStoriesSettingsOptOut32DSAStoriesSettingsViewController defaultProjectNameV3] */

void FUN_1010494a0(void)

{
  func_0x000107c5fadc(0x6867696c746f7053,0xe900000000000074);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010494a4; end: 1010494a7; -[_TtC24DSAStoriesSettingsOptOut32DSAStoriesSettingsViewController defaultProjectNameV2] */

void FUN_1010494a4(void)

{
  func_0x000107c5fadc(0x6867696c746f7053,0xe900000000000074);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010494a8; end: 101049573;  */

undefined1  [16] FUN_1010494a8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21940);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef21960);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101049574);
  (*pcVar1)();
}



/* Entry: 101049574; end: 10104957f; -[SCDSAStoriesSettingsOptOutEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101049574(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56a50;
  func_0x000107c61428(param_1 + _DAT_112d56a50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101049580; end: 10104958b; -[SCDSAStoriesSettingsOptOutEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101049580(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56a50;
  func_0x000107c61428(param_1 + _DAT_112d56a50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104958c; end: 101049597; -[SCDSAStoriesSettingsOptOutEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104958c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56a58;
  func_0x000107c61428(param_1 + _DAT_112d56a58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101049598; end: 1010495a3; -[SCDSAStoriesSettingsOptOutEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101049598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56a58;
  func_0x000107c61428(param_1 + _DAT_112d56a58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010495a4; end: 1010495af; -[SCDSAStoriesSettingsOptOutEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010495a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56a60;
  func_0x000107c61428(param_1 + _DAT_112d56a60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010495b0; end: 1010495bb; -[SCDSAStoriesSettingsOptOutEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010495b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56a60;
  func_0x000107c61428(param_1 + _DAT_112d56a60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010495bc; end: 1010495c7; -[SCDSAStoriesSettingsOptOutEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010495bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56a68;
  func_0x000107c61428(param_1 + _DAT_112d56a68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010495c8; end: 1010495d3; -[SCDSAStoriesSettingsOptOutEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010495c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56a68;
  func_0x000107c61428(param_1 + _DAT_112d56a68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010495d4; end: 1010495df; -[SCDSAStoriesSettingsOptOutEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010495d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56a70;
  func_0x000107c61428(param_1 + _DAT_112d56a70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010495e0; end: 101049623;  */

void FUN_1010495e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101049624; end: 10104962f; -[SCDSAStoriesSettingsOptOutEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101049624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56a70;
  func_0x000107c61428(param_1 + _DAT_112d56a70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101049630; end: 101049683;  */

void FUN_101049630(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101049684; end: 1010496cb; -[SCDSAStoriesSettingsOptOutEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101049684(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56a78;
  func_0x000107c61428(param_1 + _DAT_112d56a78,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1010496cc; end: 10104972f; -[SCDSAStoriesSettingsOptOutEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010496cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56a78;
  func_0x000107c61428(param_1 + _DAT_112d56a78,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101049730; end: 101049963;  */

/* WARNING: Possible PIC construction at 0x000101049860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101049870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101049880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101049928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101049938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101049908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101049918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010498f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104991c) */
/* WARNING: Removing unreachable block (ram,0x00010104990c) */
/* WARNING: Removing unreachable block (ram,0x00010104993c) */
/* WARNING: Removing unreachable block (ram,0x00010104992c) */
/* WARNING: Removing unreachable block (ram,0x000101049884) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101049874) */
/* WARNING: Removing unreachable block (ram,0x000101049864) */
/* WARNING: Removing unreachable block (ram,0x0001010498fc) */

void FUN_101049730(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c42eb0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c40014();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5e1d0();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c3ff88();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_101048af8();
              func_0x000107c613fc();
              *(undefined2 *)(lVar6 + 0x40) = 0x202;
              *(long *)(lVar6 + 0x10) = lVar1;
              *(long *)(lVar6 + 0x18) = lVar2;
              *(long *)(lVar6 + 0x20) = lVar3;
              *(long *)(lVar6 + 0x28) = lVar4;
              *(long *)(lVar6 + 0x30) = lVar5;
              *(long *)(lVar6 + 0x38) = unaff_x20;
              func_0x000107c61174(lVar1);
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(unaff_x20);
              FUN_1010486ac();
              lVar1 = unaff_x20;
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
  return;
}



/* Entry: 101049964; end: 10104998b; -[SCDSAStoriesSettingsOptOutEntryPoint begin] */

void FUN_101049964(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101049730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10104998c; end: 1010499cf; -[SCDSAStoriesSettingsOptOutEntryPoint end] */

void FUN_10104998c(undefined8 param_1)

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



/* Entry: 1010499d0; end: 101049d17;  */

void FUN_1010499d0(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53414();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
             (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c536e0();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e63d0)) ||
               (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53680();
            }
            else {
              if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
                uVar2 = 0xd000000000000017;
                func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "DSAStoriesSettingsOptOut/SCDSAStoriesSettingsOptOutEntryPoint.swift"
                                      ,0x43,2,0x3d,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101049d18);
                  (*pcVar1)();
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a68c();
            }
          }
          goto LAB_101049a5c;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5491c();
    }
  }
LAB_101049a5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101049d18; end: 101049dc3; -[SCDSAStoriesSettingsOptOutEntryPoint setValue:forIvarName:] */

void FUN_101049d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010499d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101049dc4; end: 101049e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101049dc4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d56a50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56a58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56a60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56a68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56a70,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d56a78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d56a80) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101049e80; end: 101049e9f; -[SCDSAStoriesSettingsOptOutEntryPoint init] */

void FUN_101049e80(void)

{
  FUN_101049dc4();
  return;
}



/* Entry: 101049ea0; end: 101049ed3;  */

void FUN_101049ea0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101049ed4; end: 101049f5b; -[SCDSAStoriesSettingsOptOutEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101049ed4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d56a50);
  func_0x000107c61610(param_1 + _DAT_112d56a58);
  func_0x000107c61610(param_1 + _DAT_112d56a60);
  func_0x000107c61610(param_1 + _DAT_112d56a68);
  func_0x000107c61610(param_1 + _DAT_112d56a70);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d56a78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d56a80));
  return;
}



/* Entry: 101049f5c; end: 101049f7b;  */

void FUN_101049f5c(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa780);
  return;
}



/* Entry: 101049f7c; end: 101049f83; -[_TtC34FriendStoriesSDNPrefetchPluginImpl34FriendStoriesSDNPrefetchPluginImpl metadataType] */

undefined8 FUN_101049f7c(void)

{
  return 5;
}



/* Entry: 101049f84; end: 101049fff; -[_TtC34FriendStoriesSDNPrefetchPluginImpl34FriendStoriesSDNPrefetchPluginImpl performPrefetchWithFeatureMetadata:completion:] */

/* WARNING: Possible PIC construction at 0x000101049fe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101049fec) */

void FUN_101049f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10104a08c(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10104a000; end: 10104a05b; -[_TtC34FriendStoriesSDNPrefetchPluginImpl34FriendStoriesSDNPrefetchPluginImpl init] */

void FUN_10104a000(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendStoriesSDNPrefetchPluginImpl.FriendStoriesSDNPrefetchPluginImpl",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10104a02c);
  (*pcVar1)();
}



/* Entry: 10104a05c; end: 10104a06b; -[_TtC34FriendStoriesSDNPrefetchPluginImpl34FriendStoriesSDNPrefetchPluginImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a05c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d56ab0));
  return;
}



/* Entry: 10104a06c; end: 10104a08b;  */

void FUN_10104a06c(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa868);
  return;
}



/* Entry: 10104a08c; end: 10104a1b3;  */

/* WARNING: Possible PIC construction at 0x00010104a160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104a188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104a164) */
/* WARNING: Removing unreachable block (ram,0x00010104a18c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a08c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = &UNK_11037a280;
  func_0x000107c613fc(&UNK_11037a280,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  lVar4 = *(long *)(param_2 + _DAT_112d56ab0);
  func_0x000107c60bc4(param_3);
  func_0x000107c439e8();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar3 = lVar4;
  func_0x000107c6148c(lVar4,puVar2);
  if (lVar3 != 0) {
    func_0x000103abe8a0(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar1);
    func_0x000103abe7c4(param_1,FUN_10104a1b4,puVar1);
    func_0x000107c4d664(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10104a1b4; end: 10104a1c3;  */

void FUN_10104a1b4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010104a1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10104a1c4; end: 10104a213;  */

void FUN_10104a1c4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d56ae0 != 0) {
    return;
  }
  puVar1 = &UNK_11037a2a8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d56ae0 = param_1;
  return;
}



/* Entry: 10104a214; end: 10104a267;  */

undefined8 FUN_10104a214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10104a268(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10104a268; end: 10104a3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a268(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar3 = *(long *)(param_3 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000103b13070();
    lVar4 = lVar3;
    func_0x000107c497fc();
    func_0x000107c615e8(lVar3);
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10104a3b0);
      (*pcVar2)();
    }
    if (lVar4 != 0) {
      lVar4 = 0;
      FUN_10104a06c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      *(undefined8 *)(lVar3 + _DAT_112d56ab0) = param_2;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar3;
      lStack_48 = lVar4;
      func_0x000107c615f0(param_2);
      func_0x000107c61154(&lStack_50,puVar1);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112d69b40);
      func_0x000107c61174(uVar6);
      func_0x000107c61174(plVar5);
      func_0x000107c4fba8(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(plVar5);
      func_0x000107c61170(plVar5);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(param_2);
      return;
    }
  }
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10104a3b0; end: 10104a3cb;  */

void FUN_10104a3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10104a3cc; end: 10104a3eb;  */

void FUN_10104a3cc(void)

{
  func_0x000107c61168(&PTR_PTR_112d56b28);
  return;
}



/* Entry: 10104a3ec; end: 10104a3f7; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a3ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56b80;
  func_0x000107c61428(param_1 + _DAT_112d56b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104a3f8; end: 10104a403; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56b80;
  func_0x000107c61428(param_1 + _DAT_112d56b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104a404; end: 10104a40f; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint contentSDNPublishingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56b88;
  func_0x000107c61428(param_1 + _DAT_112d56b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104a410; end: 10104a41b; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint setContentSDNPublishingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56b88;
  func_0x000107c61428(param_1 + _DAT_112d56b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104a41c; end: 10104a427; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint storiesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a41c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56b90;
  func_0x000107c61428(param_1 + _DAT_112d56b90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104a428; end: 10104a46b;  */

void FUN_10104a428(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10104a46c; end: 10104a477; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint setStoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56b90;
  func_0x000107c61428(param_1 + _DAT_112d56b90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104a478; end: 10104a5b7;  */

void FUN_10104a478(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104a5b8; end: 10104a5df; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint begin] */

void FUN_10104a5b8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010104a4cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10104a5e0; end: 10104a623; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint end] */

void FUN_10104a5e0(undefined8 param_1)

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



/* Entry: 10104a624; end: 10104a827;  */

void FUN_10104a624(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10de5e0)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010ef21a20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10de5c0)) {
          uVar2 = 0xd000000000000019;
          func_0x000107c605b8(0xd000000000000019,0x800000010ef21a40,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "FriendStoriesSDNPrefetchPluginImpl/SCFriendStoriesSDNPrefetchPluginImplEntryPoint.swift"
                                ,0x57,2,0x2e,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10104a828);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59908();
        goto LAB_10104a6b0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53870();
  }
LAB_10104a6b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10104a828; end: 10104a8d3; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint setValue:forIvarName:] */

void FUN_10104a828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10104a624(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10104a8d4; end: 10104a95b; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a8d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d56b80,0);
  func_0x000107c61614(param_1 + _DAT_112d56b88,0);
  func_0x000107c61614(param_1 + _DAT_112d56b90,0);
  *(undefined8 *)(param_1 + _DAT_112d56b98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10104a95c; end: 10104a98f;  */

void FUN_10104a95c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10104a990; end: 10104aa0b; -[SCFriendStoriesSDNPrefetchPluginImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104a990(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d56b80);
  func_0x00010104a9e8(param_1 + _DAT_112d56b88);
  func_0x000107c61610(param_1 + _DAT_112d56b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d56b98));
  return;
}



/* Entry: 10104aa0c; end: 10104aa2b;  */

void FUN_10104aa0c(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa938);
  return;
}



/* Entry: 10104aa2c; end: 10104aa33; -[_TtC37NonfriendStoriesSDNPrefetchPluginImpl37NonfriendStoriesSDNPrefetchPluginImpl metadataType] */

undefined8 FUN_10104aa2c(void)

{
  return 6;
}



/* Entry: 10104aa34; end: 10104aaaf; -[_TtC37NonfriendStoriesSDNPrefetchPluginImpl37NonfriendStoriesSDNPrefetchPluginImpl performPrefetchWithFeatureMetadata:completion:] */

/* WARNING: Possible PIC construction at 0x00010104aa98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104aa9c) */

void FUN_10104aa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10104ab3c(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10104aab0; end: 10104ab0b; -[_TtC37NonfriendStoriesSDNPrefetchPluginImpl37NonfriendStoriesSDNPrefetchPluginImpl init] */

void FUN_10104aab0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NonfriendStoriesSDNPrefetchPluginImpl.NonfriendStoriesSDNPrefetchPluginImpl",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10104aadc);
  (*pcVar1)();
}



/* Entry: 10104ab0c; end: 10104ab1b; -[_TtC37NonfriendStoriesSDNPrefetchPluginImpl37NonfriendStoriesSDNPrefetchPluginImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104ab0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d56bc8));
  return;
}



/* Entry: 10104ab1c; end: 10104ab3b;  */

void FUN_10104ab1c(void)

{
  func_0x000107c61168(&PTR_PTR_1127aaa08);
  return;
}



/* Entry: 10104ab3c; end: 10104ac63;  */

/* WARNING: Possible PIC construction at 0x00010104ac10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104ac38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104ac14) */
/* WARNING: Removing unreachable block (ram,0x00010104ac3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104ab3c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = &UNK_11037a368;
  func_0x000107c613fc(&UNK_11037a368,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  lVar4 = *(long *)(param_2 + _DAT_112d56bc8);
  func_0x000107c60bc4(param_3);
  func_0x000107c4d740();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar3 = lVar4;
  func_0x000107c6148c(lVar4,puVar2);
  if (lVar3 != 0) {
    func_0x000103abe8a0(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar1);
    func_0x000103abe7c4(param_1,FUN_10104ac64,puVar1);
    func_0x000107c4d664(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10104ac64; end: 10104ac73;  */

void FUN_10104ac64(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010104ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10104ac74; end: 10104acc7;  */

undefined8 FUN_10104ac74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10104acc8(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10104acc8; end: 10104ae0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104acc8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar3 = *(long *)(param_3 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000103b12fe0();
    lVar4 = lVar3;
    func_0x000107c497fc();
    func_0x000107c615e8(lVar3);
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10104ae10);
      (*pcVar2)();
    }
    if (lVar4 != 0) {
      lVar4 = 0;
      FUN_10104ab1c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      *(undefined8 *)(lVar3 + _DAT_112d56bc8) = param_2;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar3;
      lStack_48 = lVar4;
      func_0x000107c615f0(param_2);
      func_0x000107c61154(&lStack_50,puVar1);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112d69b40);
      func_0x000107c61174(uVar6);
      func_0x000107c61174(plVar5);
      func_0x000107c4fba8(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(plVar5);
      func_0x000107c61170(plVar5);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(param_2);
      return;
    }
  }
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10104ae10; end: 10104ae2b;  */

void FUN_10104ae10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10104ae2c; end: 10104ae4b;  */

void FUN_10104ae2c(void)

{
  func_0x000107c61168(&PTR_PTR_112d56c38);
  return;
}



/* Entry: 10104ae4c; end: 10104ae57; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104ae4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56c90;
  func_0x000107c61428(param_1 + _DAT_112d56c90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104ae58; end: 10104ae63; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104ae58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56c90;
  func_0x000107c61428(param_1 + _DAT_112d56c90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104ae64; end: 10104ae6f; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint contentSDNPublishingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104ae64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56c98;
  func_0x000107c61428(param_1 + _DAT_112d56c98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104ae70; end: 10104ae7b; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint setContentSDNPublishingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104ae70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56c98;
  func_0x000107c61428(param_1 + _DAT_112d56c98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104ae7c; end: 10104ae87; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint storiesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104ae7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56ca0;
  func_0x000107c61428(param_1 + _DAT_112d56ca0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104ae88; end: 10104aecb;  */

void FUN_10104ae88(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10104aecc; end: 10104aed7; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint setStoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104aecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56ca0;
  func_0x000107c61428(param_1 + _DAT_112d56ca0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104aed8; end: 10104b017;  */

void FUN_10104aed8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b018; end: 10104b03f; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint begin] */

void FUN_10104b018(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010104af2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10104b040; end: 10104b083; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint end] */

void FUN_10104b040(undefined8 param_1)

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



/* Entry: 10104b084; end: 10104b287;  */

void FUN_10104b084(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10de5e0)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010ef21a20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10de5c0)) {
          uVar2 = 0xd000000000000019;
          func_0x000107c605b8(0xd000000000000019,0x800000010ef21a40,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "NonfriendStoriesSDNPrefetchPluginImpl/SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint.swift"
                                ,0x5d,2,0x2e,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10104b288);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59908();
        goto LAB_10104b110;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53870();
  }
LAB_10104b110:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10104b288; end: 10104b333; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint setValue:forIvarName:] */

void FUN_10104b288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10104b084(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10104b334; end: 10104b3bb; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b334(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d56c90,0);
  func_0x000107c61614(param_1 + _DAT_112d56c98,0);
  func_0x000107c61614(param_1 + _DAT_112d56ca0,0);
  *(undefined8 *)(param_1 + _DAT_112d56ca8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10104b3bc; end: 10104b3ef;  */

void FUN_10104b3bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10104b3f0; end: 10104b447; -[SCNonfriendStoriesSDNPrefetchPluginImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b3f0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d56c90);
  func_0x00010104a9e8(param_1 + _DAT_112d56c98);
  func_0x000107c61610(param_1 + _DAT_112d56ca0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d56ca8));
  return;
}



/* Entry: 10104b448; end: 10104b467;  */

void FUN_10104b448(void)

{
  func_0x000107c61168(&PTR_PTR_1127aaad8);
  return;
}



/* Entry: 10104b468; end: 10104b48b;  */

void FUN_10104b468(void)

{
  long *unaff_x20;
  
  if (*unaff_x20 != 0) {
    FUN_101056f54();
  }
  return;
}



/* Entry: 10104b48c; end: 10104b493;  */

undefined8 FUN_10104b48c(void)

{
  return 0;
}



/* Entry: 10104b494; end: 10104b4bb;  */

/* WARNING: Possible PIC construction at 0x00010104b4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104b4ac) */

void FUN_10104b494(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10104b4bc; end: 10104b517;  */

undefined8 * FUN_10104b4bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10104b518; end: 10104b553;  */

undefined8 * FUN_10104b518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}


