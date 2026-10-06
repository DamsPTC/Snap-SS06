/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103dbbc2c; end: 103dbbc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbbc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 2;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103dbbc7c; end: 103dbbcdb; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController initWithNibName:bundle:] */

void FUN_103dbbc7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FollowCreatorsFeature.FollowCreatorsViewController",0x32,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbbca8);
  (*pcVar1)();
}



/* Entry: 103dbbcdc; end: 103dbbd93; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103dbbd38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbbd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbbd78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dbbd5c) */
/* WARNING: Removing unreachable block (ram,0x000103dbbd3c) */
/* WARNING: Removing unreachable block (ram,0x000103dbbd7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbbcdc(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_11300aef0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_11300af00));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_11300af08));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_11300af10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300af18));
  return;
}



/* Entry: 103dbbd94; end: 103dbbdb3;  */

void FUN_103dbbd94(void)

{
  func_0x000107c61168(&PTR_PTR_11294b098);
  return;
}



/* Entry: 103dbbdb4; end: 103dbbdc7; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dbbdb4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + _DAT_11300af10) + 0x10);
}



/* Entry: 103dbbdc8; end: 103dbc23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103dbbdc8(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  char *pcVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar6 = 0;
  __s10Foundation9IndexPathVMa();
  lVar17 = *(long *)(lVar6 + -8);
  lVar18 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (undefined *)0x0;
  FUN_103dbd0e4();
  uVar8 = 0x11300af70;
  puStack_90 = puVar7;
  func_0x0001000285a8(0x11300af70,&UNK_10dc93538);
  ppuVar9 = &puStack_90;
  __sSS10describingSSx_tclufC(ppuVar9,uVar8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  func_0x000107c6142c(uVar8);
  __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF();
  puStack_98 = param_1;
  func_0x000107c417dc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(uVar8);
  puVar10 = param_1;
  func_0x000107c61480(param_1,puVar7);
  if (puVar10 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
    puVar10 = PTR_PTR_1126b5a18;
    func_0x000107c610f8(PTR_PTR_1126b5a18);
    func_0x000107c453e4();
  }
  else {
    puVar7 = puVar10;
    __s10Foundation9IndexPathV5UIKitE3rowSivg();
    if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103dbc238);
      (*pcVar5)();
    }
    if (*(undefined **)(*(long *)(unaff_x20 + _DAT_11300af10) + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103dbc23c);
      (*pcVar5)();
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_11300af10) + (long)puVar7 * 0x40;
    uStack_b0 = *(undefined8 *)(lVar1 + 0x28);
    uVar12 = *(undefined8 *)(lVar1 + 0x30);
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    uVar11 = *(undefined8 *)(lVar1 + 0x40);
    uVar13 = *(undefined8 *)(lVar1 + 0x48);
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    uStack_cc = (uint)*(byte *)(lVar1 + 0x58);
    lStack_c0 = lVar18;
    puStack_a8 = auStack_d0 + -(lVar18 + 0xfU & 0xfffffffffffffff0);
    lStack_a0 = lVar6;
    func_0x000107c61434();
    func_0x000107c61434(uVar8);
    func_0x000107c61174();
    uStack_c8 = uVar11;
    func_0x000107c61434(uVar2);
    func_0x000107c61174(param_1);
    puVar7 = puVar10;
    func_0x000107c5d200(puVar10);
    func_0x000107c61180();
    uStack_b8 = uVar8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,uVar8);
    func_0x000107c59e44(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar12);
    puVar7 = puVar10;
    func_0x000107c5d200(puVar10);
    func_0x000107c61180();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar13,uVar2);
    func_0x000107c5405c(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar13);
    puVar7 = puVar10;
    func_0x000107c5d200(puVar10);
    func_0x000107c61180();
    func_0x000107c56c18();
    func_0x000107c61170(puVar7);
    puVar7 = puVar10;
    func_0x000107c5d200(puVar10);
    func_0x000107c61180();
    func_0x000107c52170();
    func_0x000107c61170(puVar7);
    puVar7 = puVar10;
    func_0x000107c5d200(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar3 = uStack_cc;
    func_0x000107c58dd8(puVar7);
    func_0x000107c61170(puVar7);
    FUN_103dbcecc();
    puVar14 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
    func_0x000107c52aec(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar14);
    __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF();
    if (uVar3 == 1) {
      func_0x000107c51c48(puStack_98);
    }
    else {
      func_0x000107c41818(puStack_98);
    }
    lVar18 = lStack_a0;
    puVar4 = puStack_a8;
    lVar6 = lStack_c0;
    func_0x000107c61170(puVar14);
    func_0x000107c61174(param_1);
    __s10Foundation9IndexPathV5UIKitE3rowSivg();
    func_0x000107c59ba8(puVar10);
    func_0x000107c61170(param_1);
    pcVar15 = "tableView(_:cellForRowAt:)";
    func_0x0001000c10c0("tableView(_:cellForRowAt:)");
    func_0x000107c61180();
    (**(code **)(lVar17 + 0x10))(puVar4,param_2,lVar18);
    uVar16 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar19 = uVar16 + 0x18 & (uVar16 ^ 0xffffffffffffffff);
    puVar7 = &UNK_110710af0;
    func_0x000107c613fc(&UNK_110710af0,uVar19 + lVar6,uVar16 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar10;
    (**(code **)(lVar17 + 0x20))(puVar7 + uVar19,puVar4,lVar18);
    pcStack_70 = FUN_103dbc8d0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10134a1dc;
    puStack_78 = &UNK_110710b08;
    ppuVar9 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar9);
    puVar7 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar7);
    uVar8 = uStack_c8;
    func_0x000107c5dc68(uStack_c8);
    func_0x000107c615e8(pcVar15);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar8);
    func_0x000107c6142c(uStack_b8);
    func_0x000107c6142c(uStack_b0);
  }
  return puVar10;
}



/* Entry: 103dbc23c; end: 103dbc2eb;  */

/* WARNING: Possible PIC construction at 0x000103dbc2d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dbc2d8) */

void FUN_103dbc23c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c5c6a4();
  lVar1 = param_3;
  __s10Foundation9IndexPathV5UIKitE3rowSivg();
  if (param_3 == lVar1) {
    if (param_1 == 0) {
      FUN_103dbcecc();
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
    }
    else {
      func_0x000107c61174(param_1);
      FUN_103dbcecc();
      lVar1 = param_1;
    }
    func_0x000107c52aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103dbc2ec; end: 103dbc3b3; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController tableView:cellForRowAtIndexPath:] */

void FUN_103dbc2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_103dbbdc8(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dbc3b4; end: 103dbc3f7; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController scrollViewForTray:] */

void FUN_103dbc3b4(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &DAT_11300af18;
  func_0x000103dbab38(&DAT_11300af18,0x103dba690);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dbc3f8; end: 103dbc5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbc3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined1 uStack_90;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar6 - extraout_x8_00;
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar6,param_4);
  lVar2 = 0x112d36020;
  func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar4 = param_1;
  __s10Foundation9IndexPathV5UIKitE3rowSivg();
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  lVar3 = lVar2;
  FUN_103dbc7bc();
  func_0x000107c61588(lVar2);
  uStack_90 = 0;
  lStack_98 = lVar3;
  func_0x0001002a64a8(&lStack_98);
  func_0x000107c6142c(lVar3);
  (**(code **)(lVar8 + 0x38))(lVar5,1,1,lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(puVar6,lVar1);
  lVar2 = lVar5;
  (**(code **)(lVar8 + 0x30))(lVar5,1,lVar1);
  uVar4 = 0;
  if ((int)lVar2 != 1) {
    __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF(0);
    (*pcVar7)(lVar5,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 103dbc5c8; end: 103dbc64b; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_103dbc5c8(void)

{
  long lVar1;
  undefined8 in_x3;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),in_x3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return 0x404e000000000000;
}



/* Entry: 103dbc64c; end: 103dbc69f; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbc64c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 3;
  uStack_28 = 2;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103dbc6a0; end: 103dbc7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbc6a0(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_11300af00;
  uVar3 = 0x11300ae40;
  func_0x0001000285a8(0x11300ae40,&UNK_10dc93480);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_11300af08;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined **)(unaff_x20 + _DAT_11300af10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_11300af18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11300af20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11300af28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11300af30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11300af38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11300af40) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "FollowCreatorsFeature/FollowCreatorsViewController.swift",0x38,2,0x76,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103dbc7bc);
  (*pcVar2)();
}



/* Entry: 103dbc7bc; end: 103dbc8cf;  */

undefined * FUN_103dbc7bc(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4f358,&UNK_10d9151b0);
    puVar3 = puVar9;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar11 = (undefined *)0x0;
    uVar12 = ~(-1L << ((ulong)(byte)puVar3[0x20] & 0x3f));
    do {
      lVar10 = *(long *)(param_1 + 0x20 + (long)puVar11 * 8);
      uVar4 = *(ulong *)(puVar3 + 0x28);
      __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar4,lVar10);
      uVar4 = uVar4 & uVar12;
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar3 + 0x30);
      uVar1 = uVar8 & uVar7;
      while (uVar1 != 0) {
        if (*(long *)(lVar5 + uVar4 * 8) == lVar10) goto LAB_103dbc844;
        uVar4 = uVar4 + 1 & uVar12;
        uVar6 = uVar4 >> 6;
        uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
        uVar8 = 1L << (uVar4 & 0x3f);
        uVar1 = uVar8 & uVar7;
      }
      *(ulong *)(puVar3 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(long *)(lVar5 + uVar4 * 8) = lVar10;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103dbc8d0);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_103dbc844:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar3;
}



/* Entry: 103dbc8d0; end: 103dbc91f;  */

/* WARNING: Possible PIC construction at 0x000103dbc2d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dbc2d8) */

void FUN_103dbc8d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c6a4(lVar2,param_2,lVar2,unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)))
  ;
  lVar1 = lVar2;
  __s10Foundation9IndexPathV5UIKitE3rowSivg();
  if (lVar2 == lVar1) {
    if (param_1 == 0) {
      FUN_103dbcecc();
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
    }
    else {
      func_0x000107c61174(param_1);
      FUN_103dbcecc();
      lVar1 = param_1;
    }
    func_0x000107c52aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103dbc920; end: 103dbc95b;  */

void FUN_103dbc920(long param_1,long param_2)

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



/* Entry: 103dbc95c; end: 103dbc95f; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController tableView:willDeselectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbc95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined1 uStack_90;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar6 - extraout_x8_00;
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar6,param_4);
  lVar2 = 0x112d36020;
  func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar4 = param_1;
  __s10Foundation9IndexPathV5UIKitE3rowSivg();
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  lVar3 = lVar2;
  FUN_103dbc7bc();
  func_0x000107c61588(lVar2);
  uStack_90 = 0;
  lStack_98 = lVar3;
  func_0x0001002a64a8(&lStack_98);
  func_0x000107c6142c(lVar3);
  (**(code **)(lVar8 + 0x38))(lVar5,1,1,lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(puVar6,lVar1);
  lVar2 = lVar5;
  (**(code **)(lVar8 + 0x30))(lVar5,1,lVar1);
  uVar4 = 0;
  if ((int)lVar2 != 1) {
    __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF(0);
    (*pcVar7)(lVar5,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 103dbc960; end: 103dbc963; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController tableView:willSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbc960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined1 uStack_90;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar6 - extraout_x8_00;
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar6,param_4);
  lVar2 = 0x112d36020;
  func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar4 = param_1;
  __s10Foundation9IndexPathV5UIKitE3rowSivg();
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  lVar3 = lVar2;
  FUN_103dbc7bc();
  func_0x000107c61588(lVar2);
  uStack_90 = 0;
  lStack_98 = lVar3;
  func_0x0001002a64a8(&lStack_98);
  func_0x000107c6142c(lVar3);
  (**(code **)(lVar8 + 0x38))(lVar5,1,1,lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(puVar6,lVar1);
  lVar2 = lVar5;
  (**(code **)(lVar8 + 0x30))(lVar5,1,lVar1);
  uVar4 = 0;
  if ((int)lVar2 != 1) {
    __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF(0);
    (*pcVar7)(lVar5,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 103dbc964; end: 103dbca47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103dbc964(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11300af78;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_11300af78);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c53840();
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    func_0x000107c450a4(0x4030000000000000,0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c55258(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c5a050(puVar3,param_2,0);
    func_0x000107c61170(puVar3);
    func_0x000107c3d89c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103dbca48; end: 103dbca67; -[_TtC21FollowCreatorsFeature23FollowCreatorsCheckView initWithFrame:] */

void FUN_103dbca48(void)

{
  FUN_103dbcbd8();
  return;
}



/* Entry: 103dbca68; end: 103dbcb0b; -[_TtC21FollowCreatorsFeature23FollowCreatorsCheckView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbca68(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_11300af78) = 0;
  *(undefined1 *)(param_1 + _DAT_11300af80) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "FollowCreatorsFeature/FollowCreatorsCheckView.swift",0x33,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbcad8);
  (*pcVar1)();
}



/* Entry: 103dbcb0c; end: 103dbcb1b; -[_TtC21FollowCreatorsFeature23FollowCreatorsCheckView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbcb0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300af78));
  return;
}



/* Entry: 103dbcb1c; end: 103dbcb3b;  */

void FUN_103dbcb1c(void)

{
  func_0x000107c61168(&PTR_PTR_11294b1a8);
  return;
}



/* Entry: 103dbcb3c; end: 103dbcb5f;  */

void FUN_103dbcb3c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x11300afb0;
  plVar5 = (long *)&UNK_10dc93558;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103dbce8c(0,0x112e1f5e8,&PTR_PTR_1126b1940);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103dbcb60; end: 103dbcbd7;  */

void FUN_103dbcb60(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103dbce8c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103dbcbd8; end: 103dbce8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103dbcbd8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11300af78) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11300af80) = 0;
  func_0x000107c61154(0,0,0x4038000000000000,0x4038000000000000,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c52df8(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4028000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  puVar1[_DAT_11300af80] = 0;
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar5 = 0x112d360b8;
  FUN_103dbcb60(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 5;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  lVar6 = lVar5;
  FUN_103dbc964();
  lVar7 = lVar6;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar2 = puVar1;
  func_0x000107c3f75c(puVar1);
  func_0x000107c61180();
  lVar6 = lVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(puVar2);
  *(long *)(lVar5 + 0x20) = lVar6;
  uVar8 = *(undefined8 *)(puVar1 + _DAT_11300af78);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3f764(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar2);
  *(undefined8 *)(lVar5 + 0x28) = uVar9;
  uVar9 = 0;
  FUN_103dbce8c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar6 = lVar5;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar9);
  func_0x000107c61574(lVar5);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar6);
  return puVar1;
}



/* Entry: 103dbce8c; end: 103dbcecb;  */

void FUN_103dbce8c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103dbcecc; end: 103dbd067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103dbcecc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11300afb8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_11300afb8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126e1688;
    func_0x000107c610f8();
    func_0x000107c469a4(0,0,0x4046000000000000,0x4046000000000000);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103dbd068; end: 103dbd09f; -[_TtC21FollowCreatorsFeature27FollowCreatorsTableViewCell initWithReuseIdentifier:] */

void FUN_103dbd068(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  func_0x000103dbcf4c();
  return;
}



/* Entry: 103dbd0a0; end: 103dbd0d3;  */

void FUN_103dbd0a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103dbd0d4; end: 103dbd0e3; -[_TtC21FollowCreatorsFeature27FollowCreatorsTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbd0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300afb8));
  return;
}



/* Entry: 103dbd0e4; end: 103dbd103;  */

void FUN_103dbd0e4(void)

{
  func_0x000107c61168(&PTR_PTR_11294b268);
  return;
}



/* Entry: 103dbd104; end: 103dbd11f;  */

undefined1  [16] FUN_103dbd104(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x7265776f6c6c6f66;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7265776f6c6c6f66,0xe900000000000073);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbd120; end: 103dbd383;  */

undefined1  [16] FUN_103dbd120(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffee;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1b8c70);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbd1ec);
  (*pcVar1)();
}



/* Entry: 103dbd384; end: 103dbd3b7;  */

undefined1  [16] FUN_103dbd384(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x43646e4173747261;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x43646e4173747261,0xee00657275746c75);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbd3b8; end: 103dbd487;  */

undefined1  [16] FUN_103dbd3b8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1b8af0);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbd488);
  (*pcVar1)();
}



/* Entry: 103dbd488; end: 103dbd4d3;  */

undefined1  [16] FUN_103dbd488(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x797475616562;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x797475616562,0xe600000000000000);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbd4d4; end: 103dbd59f;  */

undefined1  [16] FUN_103dbd4d4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1b8b10);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbd5a0);
  (*pcVar1)();
}



/* Entry: 103dbd5a0; end: 103dbd5fb;  */

undefined1  [16] FUN_103dbd5a0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x796c696d6166;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x796c696d6166,0xe600000000000000);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbd5fc; end: 103dbd6cb;  */

undefined1  [16] FUN_103dbd5fc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1b8b30);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbd6cc);
  (*pcVar1)();
}



/* Entry: 103dbd6cc; end: 103dbd703;  */

undefined1  [16] FUN_103dbd6cc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x44646e41646f6f66;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44646e41646f6f66,0xed0000676e696e69);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbd704; end: 103dbdbcb;  */

undefined1  [16] FUN_103dbd704(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1b8b50);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbd7d0);
  (*pcVar1)();
}



/* Entry: 103dbdbcc; end: 103dbdbef;  */

undefined1  [16] FUN_103dbdbcc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x41646e4173746570;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41646e4173746570,0xee00736c616d696e);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbdbf0; end: 103dbdcbb;  */

undefined1  [16] FUN_103dbdbf0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1b8c10);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdcbc);
  (*pcVar1)();
}



/* Entry: 103dbdcbc; end: 103dbdd1b;  */

undefined1  [16] FUN_103dbdcbc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6e6f6974616c6572;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6f6974616c6572,0xed00007370696873);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbdd1c; end: 103dbdde7;  */

undefined1  [16] FUN_103dbdd1c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1b8c30);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdde8);
  (*pcVar1)();
}



/* Entry: 103dbdde8; end: 103dbde2b;  */

undefined1  [16] FUN_103dbdde8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x7374726f7073;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7374726f7073,0xe600000000000000);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbde2c; end: 103dbdef7;  */

undefined1  [16] FUN_103dbde2c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1b8c50);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdef8);
  (*pcVar1)();
}



/* Entry: 103dbdef8; end: 103dbdf1b;  */

undefined1  [16] FUN_103dbdef8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x5f656e6f5f646461;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f656e6f5f646461,0xef726f7461657263);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbdf1c; end: 103dbe163;  */

undefined1  [16] FUN_103dbdf1c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1b8ab0);
  uVar3 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbdfcc);
  (*pcVar1)();
}



/* Entry: 103dbe164; end: 103dbe193;  */

void FUN_103dbe164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dbe194; end: 103dbe1af;  */

void FUN_103dbe194(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103dbe1b0; end: 103dbe2df;  */

void FUN_103dbe1b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11300b080;
  func_0x0001000285a8(0x11300b080,&UNK_10dc935b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103dbe2e0; end: 103dbe6cb;  */

/* WARNING: Removing unreachable block (ram,0x000103dbe418) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103dbe2e0(void)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long unaff_x20;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_11300b090);
  uVar6 = 0x800000010f1b8d90;
  uVar3 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (lVar8 != 0) {
    lVar4 = lVar8;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c3dd54();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103dbe478);
      (*pcVar2)();
    }
    lVar4 = lVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      func_0x000107c61170(lVar4);
      uVar1 = (uint)(uVar6 >> 0x20);
      uVar7 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar7 == 0) {
          if ((uVar6 & 0xff000000000000) != 0) {
LAB_103dbe3e4:
            func_0x000107c610f8(PTR_PTR_1126daed0);
            lVar4 = lVar5;
            FUN_103dbf0a0(lVar5,uVar6);
            func_0x00010006c090(lVar5,uVar6);
            func_0x000107c615e8(lVar8);
            return lVar4;
          }
        }
        else if ((long)(int)lVar5 != lVar5 >> 0x20) goto LAB_103dbe3e4;
      }
      else if ((uVar7 == 2) && (*(long *)(lVar5 + 0x10) != *(long *)(lVar5 + 0x18)))
      goto LAB_103dbe3e4;
      func_0x00010006c090(lVar5,uVar6);
    }
    func_0x000107c615e8(lVar8);
  }
  return 0;
}



/* Entry: 103dbe6cc; end: 103dbe717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbe6cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11300b090) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dbe718; end: 103dbe753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbe718(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11300b090) = param_1;
  FUN_103dbef3c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dbe754; end: 103dbe7ab; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider initWithCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbe754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_11300b090) = param_3;
  lVar2 = param_1;
  FUN_103dbef3c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103dbe7ac; end: 103dbe883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dbe7ac(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar5 = lRam000000011300b298;
  lVar6 = lRam000000011300b290;
  if (cRam000000011300b2d8 == '\x01') {
    func_0x000107c61434(lRam000000011300b298);
  }
  else {
    if (((bRam0000000113812100 & 1) == 0) && ((param_1 & 1) != 0)) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11300b090);
      uVar2 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1b8cf0);
      func_0x000107c4c270();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (lVar6 != 0) {
        func_0x000107c42c04(lVar6);
        func_0x000107c615e8(lVar6);
      }
      bRam0000000113812100 = 1;
    }
    lVar6 = 0x5f544c5541464544;
    lVar7 = *(long *)(unaff_x20 + _DAT_11300b090);
    lVar4 = -0x7ffffffef0e47310;
    uVar2 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018);
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    lVar5 = -0x10a8b0b7aca0b0b2;
    if (lVar7 != 0) {
      lVar1 = lVar7;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar7);
      lVar7 = lVar1;
      func_0x000107c5c1d4();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar7 != 0) {
        lVar6 = lVar7;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        func_0x000107c61170(lVar7);
        lVar5 = lVar4;
      }
    }
  }
  uVar3 = 0;
  if ((lVar6 == 0x5f544c5541464544 && lVar5 == -0x10a8b0b7aca0b0b2) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5f544c5541464544,0xef574f48535f4f4e,lVar6,lVar5,0), (uVar3 & 1) != 0)) {
    func_0x000107c6142c(lVar5);
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (((lVar6 == 0x495f45524f464542) && (lVar5 == -0x12ffffbaabb6a9b2)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x495f45524f464542,0xed0000455449564e,lVar6,lVar5,0), (uVar3 & 1) != 0)) {
      func_0x000107c6142c(lVar5);
      uVar2 = 1;
    }
    else {
      uVar3 = 0x4e495f5245544641;
      if (((lVar6 == 0x4e495f5245544641) && (lVar5 == -0x13ffffffbaabb6aa)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x4e495f5245544641,0xec00000045544956,lVar6,lVar5,0), (uVar3 & 1) != 0)) {
        func_0x000107c6142c(lVar5);
        uVar2 = 2;
      }
      else {
        uVar3 = 0;
        if (((lVar6 == 0x5f4543414c504552) && (lVar5 == -0x11ffbaabb6a9b1b7)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x5f4543414c504552,0xee00455449564e49,lVar6,lVar5,0), (uVar3 & 1) != 0)) {
          func_0x000107c6142c(lVar5);
          uVar2 = 3;
        }
        else {
          uVar3 = 0x5f4f4e5f4e454857;
          if ((lVar6 == 0x5f4f4e5f4e454857) && (lVar5 == -0x11ffbaabb6a9b1b7)) {
            func_0x000107c6142c(0xee00455449564e49);
            uVar2 = 4;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x5f4f4e5f4e454857,0xee00455449564e49,lVar6,lVar5,0);
            func_0x000107c6142c(lVar5);
            uVar2 = 4;
            if ((uVar3 & 1) == 0) {
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 103dbe884; end: 103dbe8bf; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider followCreatorsFeatureTreatmentWithLogExposure:] */

undefined8 FUN_103dbe884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103dbe7ac(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 103dbe8c0; end: 103dbe95b;  */

undefined1  [16] FUN_103dbe8c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = uRam000000011300b250;
  lVar3 = lRam000000011300b248;
  if (cRam000000011300b2d8 == '\x01') {
    func_0x000107c61434(uRam000000011300b250);
    param_2 = uVar1;
  }
  else {
    FUN_103dbe2e0();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c4042c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar2);
        func_0x000107c61170(lVar2);
        goto LAB_103dbe944;
      }
    }
    lVar3 = 0;
    param_2 = 0;
  }
LAB_103dbe944:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 103dbe95c; end: 103dbe9c3; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider creatorsListURL] */

void FUN_103dbe95c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103dbe8c0();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dbe9c4; end: 103dbea1f;  */

long FUN_103dbe9c4(long param_1)

{
  long lVar1;
  
  lVar1 = lRam000000011300b208;
  if (cRam000000011300b2d8 != '\x01') {
    FUN_103dbe2e0();
    if (param_1 == 0) {
      lVar1 = 0x7fffffff;
    }
    else {
      lVar1 = param_1;
      func_0x000107c4c8b0();
      func_0x000107c61170(param_1);
      lVar1 = (long)(int)lVar1;
    }
  }
  return lVar1;
}



/* Entry: 103dbea20; end: 103dbea9b; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider maximumCreatorsDisplayed] */

long FUN_103dbea20(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (cRam000000011300b2d8 == '\x01') {
    return lRam000000011300b208;
  }
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_103dbe2e0();
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0x7fffffff;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4c8b0();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    lVar2 = (long)(int)lVar1;
  }
  return lVar2;
}



/* Entry: 103dbea9c; end: 103dbeaf3;  */

void FUN_103dbea9c(long param_1)

{
  if ((cRam000000011300b2d8 != '\x01') && (FUN_103dbe2e0(), param_1 != 0)) {
    func_0x000107c4f8dc();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103dbeaf4; end: 103dbeb7b; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider rankingStrategy] */

undefined8 FUN_103dbeaf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103dbea9c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103dbeb7c; end: 103dbebf7; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider preselectedCreators] */

long FUN_103dbeb7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (cRam000000011300b2d8 == '\x01') {
    return lRam000000011300b188;
  }
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000103dbe478();
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4ee54();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    lVar2 = (long)(int)lVar1;
  }
  return lVar2;
}



/* Entry: 103dbebf8; end: 103dbec67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103dbebf8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_11300b090);
  uVar2 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1b8d10);
  func_0x000107c4c0d0();
  func_0x000107c61170(uVar2);
  if (-1 < lVar3) {
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbec68);
  (*pcVar1)();
}



/* Entry: 103dbec68; end: 103dbecef; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider creatorsCacheTTLInMinutes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103dbec68(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_11300b090);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1b8d10);
  func_0x000107c4c0d0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  if (-1 < lVar3) {
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbecf0);
  (*pcVar1)();
}



/* Entry: 103dbecf0; end: 103dbed4b; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider init] */

void FUN_103dbecf0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FollowCreatorsConfigProvider.FollowCreatorsConfigProvider",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbed1c);
  (*pcVar1)();
}



/* Entry: 103dbed4c; end: 103dbed5b; -[_TtC28FollowCreatorsConfigProvider28FollowCreatorsConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbed4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11300b090));
  return;
}



/* Entry: 103dbed5c; end: 103dbef2b;  */

undefined8 FUN_103dbed5c(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x5f544c5541464544 && param_2 == -0x10a8b0b7aca0b0b2) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5f544c5541464544,0xef574f48535f4f4e,param_1,param_2,0), (uVar2 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == 0x495f45524f464542) && (param_2 == -0x12ffffbaabb6a9b2)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x495f45524f464542,0xed0000455449564e,param_1,param_2,0), (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0x4e495f5245544641;
      if (((param_1 == 0x4e495f5245544641) && (param_2 == -0x13ffffffbaabb6aa)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x4e495f5245544641,0xec00000045544956,param_1,param_2,0), (uVar2 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar1 = 2;
      }
      else {
        uVar2 = 0;
        if (((param_1 == 0x5f4543414c504552) && (param_2 == -0x11ffbaabb6a9b1b7)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x5f4543414c504552,0xee00455449564e49,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          func_0x000107c6142c(param_2);
          uVar1 = 3;
        }
        else {
          uVar2 = 0x5f4f4e5f4e454857;
          if ((param_1 == 0x5f4f4e5f4e454857) && (param_2 == -0x11ffbaabb6a9b1b7)) {
            func_0x000107c6142c(0xee00455449564e49);
            uVar1 = 4;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x5f4f4e5f4e454857,0xee00455449564e49,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            uVar1 = 4;
            if ((uVar2 & 1) == 0) {
              uVar1 = 0;
            }
          }
        }
      }
    }
  }
  return uVar1;
}



/* Entry: 103dbef2c; end: 103dbef3b;  */

undefined1  [16] FUN_103dbef2c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103dbef3c; end: 103dbef5b;  */

void FUN_103dbef3c(void)

{
  func_0x000107c61168(&PTR_PTR_11294b328);
  return;
}



/* Entry: 103dbef5c; end: 103dbef5f;  */

void FUN_103dbef5c(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc935c0;
  func_0x000107c61520(&UNK_10dc935c0,&UNK_110710be8);
  puRam000000011300b098 = puVar1;
  return;
}



/* Entry: 103dbef60; end: 103dbefcb;  */

void FUN_103dbef60(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc935c0;
  func_0x000107c61520(&UNK_10dc935c0,&UNK_110710be8);
  puRam000000011300b098 = puVar1;
  return;
}



/* Entry: 103dbefcc; end: 103dbefcf;  */

void FUN_103dbefcc(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc936a0;
  func_0x000107c61520(&UNK_10dc936a0,&UNK_110710c08);
  puRam000000011300b0b0 = puVar1;
  return;
}



/* Entry: 103dbefd0; end: 103dbf03b;  */

void FUN_103dbefd0(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc936a0;
  func_0x000107c61520(&UNK_10dc936a0,&UNK_110710c08);
  puRam000000011300b0b0 = puVar1;
  return;
}



/* Entry: 103dbf03c; end: 103dbf07f;  */

void FUN_103dbf03c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103dbf080; end: 103dbf09f;  */

undefined1  [16] FUN_103dbf080(void)

{
  return ZEXT816(0x110710be8);
}



/* Entry: 103dbf0a0; end: 103dbf15f;  */

ulong FUN_103dbf0a0(undefined8 param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  ulong unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  piVar1 = (int *)0x0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(0);
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  return (ulong)(*piVar1 == *param_2);
}



/* Entry: 103dbf160; end: 103dbf187;  */

bool FUN_103dbf160(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103dbf188; end: 103dbf1f7;  */

undefined1  [16] FUN_103dbf188(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 1) {
    uVar3 = 0xe600000000000000;
    uVar2 = 0x6d6f646e6172;
  }
  else {
    if (lStack_18 != 0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103dbf1f8);
      (*pcVar1)();
    }
    uVar3 = 0xe900000000000064;
    uVar2 = 0x65676e6168636e75;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 103dbf1f8; end: 103dbf223;  */

void FUN_103dbf1f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103dbf224();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103dbf264();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103dbf224; end: 103dbf2a3;  */

void FUN_103dbf224(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93668;
  func_0x000107c61520(&UNK_10dc93668,&UNK_110710be8);
  puRam000000011300b178 = puVar1;
  return;
}



/* Entry: 103dbf2a4; end: 103dbf353;  */

void FUN_103dbf2a4(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  long *unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(extraout_x12 + 0x60);
  func_0x000107c61428((long)unaff_x20 + lVar1,auStack_58,0,0);
  (**(code **)(lVar4 + 0x10))(puVar3,(long)unaff_x20 + lVar1,lVar2);
  func_0x000100087c34(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 103dbf354; end: 103dbf3ef;  */

void FUN_103dbf354(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x60);
  func_0x000107c61428((long)unaff_x20 + lVar2,auStack_48,0,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2);
  return;
}



/* Entry: 103dbf3f0; end: 103dbf463;  */

undefined1  [16] FUN_103dbf3f0(long param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  *(long **)(param_1 + 0x18) = unaff_x20;
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  func_0x000107c61428((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103dbf434;
  return auVar2;
}



/* Entry: 103dbf464; end: 103dbf47b;  */

undefined8 FUN_103dbf464(void)

{
  return 0;
}



/* Entry: 103dbf47c; end: 103dbf523;  */

undefined8 FUN_103dbf47c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103dbf9f0(param_1);
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x50) + -8) + 8))(param_1);
  return uVar1;
}



/* Entry: 103dbf524; end: 103dbf603;  */

void FUN_103dbf524(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *unaff_x20;
  puVar1 = &UNK_110710d48;
  func_0x000107c613fc(&UNK_110710d48,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110710d70;
  func_0x000107c613fc(&UNK_110710d70,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(lVar5 + 0x58);
  *(undefined **)(puVar2 + 0x20) = puVar1;
  pcVar6 = *(code **)(*param_1 + 0x60);
  func_0x000107c6157c(puVar1);
  pcVar3 = FUN_103dbfb3c;
  puVar4 = puVar2;
  (*pcVar6)(FUN_103dbfb3c);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  pcVar6 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar4 + 0x10))
            (*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)),pcVar6,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 103dbf604; end: 103dbf65f;  */

void FUN_103dbf604(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103dbf6dc(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103dbf660; end: 103dbf6b7;  */

void FUN_103dbf660(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = 0;
  func_0x000100087438(0,*(undefined8 *)(*unaff_x20 + 0x58));
  func_0x000100854cb0(param_1,uVar1);
  FUN_103dbf524();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103dbf6b8; end: 103dbf6db;  */

void FUN_103dbf6b8(undefined8 param_1)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103dbf6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x10))(param_1);
  return;
}



/* Entry: 103dbf6dc; end: 103dbf86f;  */

void FUN_103dbf6dc(long param_1)

{
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar4 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar3 - extraout_x13_00;
  lVar7 = *(long *)(extraout_x12 + 0x60);
  func_0x000107c61428((long)unaff_x20 + lVar7,auStack_90,0,0);
  (**(code **)(lVar5 + 0x10))(lVar2,(long)unaff_x20 + lVar7,lVar1);
  lVar7 = *unaff_x20;
  lVar8 = *(long *)(lVar7 + 0x60);
  func_0x000107c61428((long)unaff_x20 + lVar8,auStack_78,0,0);
  (**(code **)(*(long *)(*(long *)(lVar7 + 0x50) + -8) + 0x10))(puVar4,(long)unaff_x20 + lVar8);
  (**(code **)(*unaff_x20 + 0xb8))(lVar3,param_1,puVar4);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(puVar4,lVar1);
  FUN_103dbf984(lVar3);
  (*pcVar6)(lVar3,lVar1);
  (**(code **)(*unaff_x20 + 200))(param_1,lVar2);
  (**(code **)(*unaff_x20 + 0xc0))(param_1,lVar2);
  if (param_1 != 0) {
    FUN_103dbf524();
    func_0x000107c61574(param_1);
  }
  (*pcVar6)(lVar2,lVar1);
  return;
}



/* Entry: 103dbf870; end: 103dbf8e3;  */

void FUN_103dbf870(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)));
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  return;
}



/* Entry: 103dbf8e4; end: 103dbf983;  */

void FUN_103dbf8e4(void)

{
  undefined8 *unaff_x20;
  
  (**(code **)(*(long *)*unaff_x20 + 0xb8))();
  return;
}



/* Entry: 103dbf984; end: 103dbf9ef;  */

void FUN_103dbf984(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x60);
  func_0x000107c61428((long)unaff_x20 + lVar2,auStack_48,0x21,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 0x18))((long)unaff_x20 + lVar2,param_1);
  func_0x000107c614a8(auStack_48);
  FUN_103dbf2a4();
  return;
}



/* Entry: 103dbf9f0; end: 103dbfb3b;  */

void FUN_103dbf9f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(extraout_x12 + 0x68);
  func_0x000100087384(0,lVar3);
  uVar1 = 1;
  func_0x000104887274();
  *(undefined8 *)((long)unaff_x20 + lVar5) = uVar1;
  lVar5 = *(long *)(*unaff_x20 + 0x70);
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)((long)unaff_x20 + lVar5) = uVar1;
  lVar5 = *(long *)(*unaff_x20 + 0x60);
  pcVar6 = *(code **)(lVar4 + 0x10);
  (*pcVar6)((long)unaff_x20 + lVar5,param_1,lVar3);
  func_0x000107c61428((long)unaff_x20 + lVar5,auStack_68,0,0);
  (*pcVar6)(puVar2,(long)unaff_x20 + lVar5,lVar3);
  func_0x000100087c34(puVar2);
  (**(code **)(lVar4 + 8))(puVar2,lVar3);
  (**(code **)(*unaff_x20 + 0x90))();
  if (puVar2 != (undefined1 *)0x0) {
    FUN_103dbf524();
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 103dbfb3c; end: 103dbfb47;  */

void FUN_103dbfb3c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103dbf6dc(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103dbfb48; end: 103dbfb9f;  */

void FUN_103dbfb48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10dc93830;
  func_0x000107c61520();
  *(undefined **)(param_1 + 8) = puVar1;
  puVar1 = &DAT_10dc93814;
  func_0x000107c61520(&DAT_10dc93814,param_2);
  *(undefined **)(param_1 + 0x10) = puVar1;
  puVar1 = &DAT_10dc9384c;
  func_0x000107c61520(&DAT_10dc9384c,param_2);
  *(undefined **)(param_1 + 0x18) = puVar1;
  return;
}


