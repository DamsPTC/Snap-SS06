/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10256b0b4; end: 10256b48f;  */

/* WARNING: Possible PIC construction at 0x00010256b174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b34c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256b43c) */
/* WARNING: Removing unreachable block (ram,0x00010256b3fc) */
/* WARNING: Removing unreachable block (ram,0x00010256b3dc) */
/* WARNING: Removing unreachable block (ram,0x00010256b398) */
/* WARNING: Removing unreachable block (ram,0x00010256b48c) */
/* WARNING: Removing unreachable block (ram,0x00010256b3ac) */
/* WARNING: Removing unreachable block (ram,0x00010256b370) */
/* WARNING: Removing unreachable block (ram,0x00010256b350) */
/* WARNING: Removing unreachable block (ram,0x00010256b300) */
/* WARNING: Removing unreachable block (ram,0x00010256b488) */
/* WARNING: Removing unreachable block (ram,0x00010256b334) */
/* WARNING: Removing unreachable block (ram,0x00010256b2e0) */
/* WARNING: Removing unreachable block (ram,0x00010256b290) */
/* WARNING: Removing unreachable block (ram,0x00010256b484) */
/* WARNING: Removing unreachable block (ram,0x00010256b2c4) */
/* WARNING: Removing unreachable block (ram,0x00010256b270) */
/* WARNING: Removing unreachable block (ram,0x00010256b194) */
/* WARNING: Removing unreachable block (ram,0x00010256b198) */
/* WARNING: Removing unreachable block (ram,0x00010256b480) */
/* WARNING: Removing unreachable block (ram,0x00010256b254) */
/* WARNING: Removing unreachable block (ram,0x00010256b178) */
/* WARNING: Removing unreachable block (ram,0x00010256b44c) */
/* WARNING: Removing unreachable block (ram,0x00010256b454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256b0b4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112ea5f70) == 0) {
    lVar2 = unaff_x20;
    func_0x000107c51a60();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar1 = unaff_x20;
      func_0x000107c44c68();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_112ea5f68);
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          func_0x000107c40edc();
          func_0x000107c61180();
        }
        func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
        func_0x000107c46db4();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 10256b490; end: 10256b4b7; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController viewDidLoad] */

void FUN_10256b490(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10256aee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10256b4b8; end: 10256b4eb; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController loadScrollView] */

void FUN_10256b4b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10256aa64();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10256b4ec; end: 10256b54b; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController initWithNibName:bundle:transitionType:] */

void FUN_10256b4ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.ReportIssuePageViewController",0x45,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256b518);
  (*pcVar1)();
}



/* Entry: 10256b54c; end: 10256b5d3; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010256b568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256b5a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256b58c) */
/* WARNING: Removing unreachable block (ram,0x00010256b56c) */
/* WARNING: Removing unreachable block (ram,0x00010256b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256b54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea5f40));
  return;
}



/* Entry: 10256b5d4; end: 10256b5f3;  */

void FUN_10256b5d4(void)

{
  func_0x000107c61168(&PTR_PTR_11284e210);
  return;
}



/* Entry: 10256b5f4; end: 10256b6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256b5f4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_68 [3];
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  uVar1 = 0;
  FUN_10256c17c(0);
  plVar2 = alStack_68;
  func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)plVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(alStack_68[0] + _DAT_112ea5fa0);
    func_0x000107c61434(uVar4);
    func_0x000107c61170(alStack_68[0]);
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    lVar3 = param_2 + 0x10;
    func_0x000107c61618();
    uVar1 = uVar4;
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + _DAT_112ea5f48);
      *(undefined8 *)(lVar3 + _DAT_112ea5f48) = uVar4;
      func_0x000107c61170();
    }
    func_0x000107c6142c(uVar1);
    func_0x000107c61428(param_2 + 0x10,alStack_68,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar3 = param_2;
      FUN_10256aa64();
      func_0x000107c61170(param_2);
      func_0x000107c4fd7c(lVar3);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 10256b6fc; end: 10256b717; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController themeBackgroundView:didUpdateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256b6fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + _DAT_112ea5f70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112ea5f70),PTR_s_setImage__1126481e8,param_4);
    return;
  }
  return;
}



/* Entry: 10256b718; end: 10256b72b; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10256b718(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + _DAT_112ea5f48) + 0x10);
}



/* Entry: 10256b72c; end: 10256b733; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_10256b72c(void)

{
  return 1;
}



/* Entry: 10256b734; end: 10256b8af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10256b734(ulong param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_100 [96];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  func_0x000107c5eff4();
  if ((long)param_1 < 1) {
    func_0x000107c5efe4();
    lVar1 = _DAT_112ea5f48;
    if ((long)param_1 < *(long *)(*(long *)(unaff_x20 + _DAT_112ea5f48) + 0x10)) {
      func_0x000107c5efe4();
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10256b8a8);
        (*pcVar2)();
      }
      lVar5 = *(long *)(unaff_x20 + lVar1);
      if (param_1 < *(ulong *)(lVar5 + 0x10)) {
        lVar5 = lVar5 + param_1 * 0x60;
        uStack_98 = *(undefined8 *)(lVar5 + 0x28);
        uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
        uStack_88 = *(undefined8 *)(lVar5 + 0x38);
        uStack_90 = *(undefined8 *)(lVar5 + 0x30);
        uStack_78 = *(undefined8 *)(lVar5 + 0x48);
        uStack_80 = *(undefined8 *)(lVar5 + 0x40);
        uStack_68 = *(undefined8 *)(lVar5 + 0x58);
        uStack_70 = *(undefined8 *)(lVar5 + 0x50);
        uStack_60 = *(undefined8 *)(lVar5 + 0x60);
        uStack_4f = *(undefined8 *)(lVar5 + 0x71);
        uStack_50 = (undefined1)((ulong)*(undefined8 *)(lVar5 + 0x69) >> 0x38);
        uStack_58 = (undefined1)*(undefined8 *)(lVar5 + 0x68);
        uStack_57 = (undefined7)((ulong)*(undefined8 *)(lVar5 + 0x68) >> 8);
        puVar3 = (undefined *)0x0;
        func_0x0001025712d8();
        FUN_10255ee54(&uStack_a0,auStack_100);
        FUN_10257af84(puVar3,0x6c6c6543474953,0xe700000000000000,param_2,puVar3);
        FUN_102570c3c(&uStack_a0);
        func_0x000107c61174();
        puVar4 = puVar3;
        func_0x000107c5efe4();
        if (-1 < (long)puVar4) {
          func_0x000107c30a60(1,puVar4,*(undefined8 *)(*(long *)(unaff_x20 + lVar1) + 0x10));
          func_0x000107c59a2c(puVar3);
          FUN_10255ee94(&uStack_a0);
          func_0x000107c61170(puVar3);
          return puVar3;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10256b8b0);
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10256b8ac);
      (*pcVar2)();
    }
  }
  puVar4 = PTR_PTR_1126b2780;
  func_0x000107c610f8(PTR_PTR_1126b2780);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar4;
}



/* Entry: 10256b8b0; end: 10256b977; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController collectionView:cellForItemAtIndexPath:] */

void FUN_10256b8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_10256b734(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10256b978; end: 10256ba6f; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_10256b978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_7);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  FUN_10256be70(param_5,puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10256ba70; end: 10256baef; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController collectionView:shouldSelectItemAtIndexPath:] */

undefined8 FUN_10256ba70(void)

{
  long lVar1;
  undefined8 in_x3;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),in_x3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return 1;
}



/* Entry: 10256baf0; end: 10256bc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256baf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 0;
  FUN_10256a11c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea5f50);
  lVar2 = 0;
  func_0x000107c5eff8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(lVar5,param_2,lVar2);
  func_0x000107c6159c(lVar5,lVar1,1);
  lVar2 = 0;
  func_0x00010256a09c();
  lVar1 = lVar2;
  func_0x000107c610f8();
  FUN_10256a9fc(lVar5,lVar1 + _DAT_113804738);
  plVar3 = &lStack_50;
  lStack_50 = lVar1;
  lStack_48 = lVar2;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  FUN_10256a38c(lVar5);
  func_0x000107c424b8(uVar4);
  func_0x000107c61170(plVar3);
  func_0x000107c5efd4();
  func_0x000107c41814(param_1);
  func_0x000107c61170(plVar3);
  return;
}



/* Entry: 10256bc20; end: 10256bdfb; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController collectionView:didSelectItemAtIndexPath:] */

void FUN_10256bc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10256baf0(param_3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 10256bdfc; end: 10256be07; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController defaultProjectNameV2] */

void FUN_10256bdfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110e607d8);
  return;
}



/* Entry: 10256be08; end: 10256be13; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController defaultSubProjectName] */

void FUN_10256be08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110da0338);
  return;
}



/* Entry: 10256be14; end: 10256be6f; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController header:didChangeHeight:] */

/* WARNING: Possible PIC construction at 0x00010256be54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256be58) */

void FUN_10256be14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_10256bf9c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10256be70; end: 10256bf9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10256be70(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar3 = param_1;
  func_0x000107c5efe4();
  lVar1 = _DAT_112ea5f48;
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10256bf94);
    (*pcVar2)();
  }
  if (uVar3 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112ea5f48) + 0x10)) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112ea5f48) + uVar3 * 0x60;
    uStack_a8 = *(undefined8 *)(lVar6 + 0x28);
    uStack_b0 = *(undefined8 *)(lVar6 + 0x20);
    uStack_98 = *(undefined8 *)(lVar6 + 0x38);
    uStack_a0 = *(undefined8 *)(lVar6 + 0x30);
    uStack_88 = *(undefined8 *)(lVar6 + 0x48);
    uVar7 = *(undefined8 *)(lVar6 + 0x40);
    uStack_78 = *(undefined8 *)(lVar6 + 0x58);
    uStack_80 = *(undefined8 *)(lVar6 + 0x50);
    uVar8 = *(undefined8 *)(lVar6 + 0x60);
    uStack_5f = *(undefined8 *)(lVar6 + 0x71);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)(lVar6 + 0x69) >> 0x38);
    uStack_68 = (undefined1)*(undefined8 *)(lVar6 + 0x68);
    uStack_67 = (undefined7)((ulong)*(undefined8 *)(lVar6 + 0x68) >> 8);
    uStack_90 = uVar7;
    uStack_70 = uVar8;
    FUN_10255ee54(&uStack_b0,auStack_110);
    func_0x000107c438d4(param_1);
    puVar4 = PTR_PTR_1126b2780;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c5efe4();
    if (-1 < (long)puVar5) {
      func_0x000107c30a60(1,puVar5,*(undefined8 *)(*(long *)(unaff_x20 + lVar1) + 0x10));
      func_0x000107c44da8(puVar4);
      FUN_10255ee94(&uStack_b0);
      auVar9._8_8_ = uVar7;
      auVar9._0_8_ = uVar8;
      return auVar9;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10256bf9c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10256bf98);
  (*pcVar2)();
}



/* Entry: 10256bf9c; end: 10256c0df;  */

/* WARNING: Possible PIC construction at 0x00010256bffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c09c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256c088) */
/* WARNING: Removing unreachable block (ram,0x00010256c060) */
/* WARNING: Removing unreachable block (ram,0x00010256c0dc) */
/* WARNING: Removing unreachable block (ram,0x00010256c074) */
/* WARNING: Removing unreachable block (ram,0x00010256c024) */
/* WARNING: Removing unreachable block (ram,0x00010256c038) */
/* WARNING: Removing unreachable block (ram,0x00010256c03c) */
/* WARNING: Removing unreachable block (ram,0x00010256c098) */
/* WARNING: Removing unreachable block (ram,0x00010256c000) */
/* WARNING: Removing unreachable block (ram,0x00010256c044) */
/* WARNING: Removing unreachable block (ram,0x00010256c004) */
/* WARNING: Removing unreachable block (ram,0x00010256c0a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256bf9c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea5f70);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c4c548();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10256c0e0; end: 10256c103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256c0e0(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long alStack_68 [3];
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  uVar1 = 0;
  FUN_10256c17c(0);
  plVar2 = alStack_68;
  func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)plVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(alStack_68[0] + _DAT_112ea5fa0);
    func_0x000107c61434(uVar5);
    func_0x000107c61170(alStack_68[0]);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    uVar1 = uVar5;
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + _DAT_112ea5f48);
      *(undefined8 *)(lVar3 + _DAT_112ea5f48) = uVar5;
      func_0x000107c61170();
    }
    func_0x000107c6142c(uVar1);
    func_0x000107c61428(unaff_x20 + 0x10,alStack_68,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      FUN_10256aa64();
      func_0x000107c61170(lVar3);
      func_0x000107c4fd7c(lVar4);
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 10256c104; end: 10256c107; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256c104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long *plVar5;
  undefined8 uVar6;
  long alStack_50 [2];
  
  lVar2 = 0;
  FUN_10256a11c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  plVar5 = (long *)((long)alStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_1 + _DAT_112ea5f50);
  *plVar5 = param_1;
  func_0x000107c6159c(plVar5);
  lVar3 = 0;
  func_0x00010256a09c();
  lVar2 = lVar3;
  func_0x000107c610f8();
  FUN_10256a9fc(plVar5,lVar2 + _DAT_113804738);
  puVar1 = PTR_s_init_1125d9248;
  alStack_50[0] = lVar2;
  alStack_50[1] = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  plVar4 = alStack_50;
  func_0x000107c61154(plVar4,puVar1);
  FUN_10256a38c(plVar5);
  func_0x000107c424b8(uVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10256c108; end: 10256c10b; -[_TtC39SCLocationSharingSettingsImplementation29ReportIssuePageViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256c108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long *plVar5;
  undefined8 uVar6;
  long alStack_50 [2];
  
  lVar2 = 0;
  FUN_10256a11c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  plVar5 = (long *)((long)alStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_1 + _DAT_112ea5f50);
  *plVar5 = param_1;
  func_0x000107c6159c(plVar5);
  lVar3 = 0;
  func_0x00010256a09c();
  lVar2 = lVar3;
  func_0x000107c610f8();
  FUN_10256a9fc(plVar5,lVar2 + _DAT_113804738);
  puVar1 = PTR_s_init_1125d9248;
  alStack_50[0] = lVar2;
  alStack_50[1] = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  plVar4 = alStack_50;
  func_0x000107c61154(plVar4,puVar1);
  FUN_10256a38c(plVar5);
  func_0x000107c424b8(uVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10256c10c; end: 10256c16b; -[_TtC39SCLocationSharingSettingsImplementation27ReportIssuePageViewModelBox init] */

void FUN_10256c10c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.ReportIssuePageViewModelBox",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256c138);
  (*pcVar1)();
}



/* Entry: 10256c16c; end: 10256c17b; -[_TtC39SCLocationSharingSettingsImplementation27ReportIssuePageViewModelBox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256c16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea5fa0));
  return;
}



/* Entry: 10256c17c; end: 10256c19b;  */

void FUN_10256c17c(void)

{
  func_0x000107c61168(&PTR_PTR_11284e300);
  return;
}



/* Entry: 10256c19c; end: 10256c1ab;  */

undefined1  [16] FUN_10256c19c(void)

{
  return ZEXT816(0x110521138);
}



/* Entry: 10256c1ac; end: 10256c2b7;  */

void FUN_10256c1ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c4c548();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x000107c610f8(PTR__OBJC_CLASS___CALayer_1126b1750);
    func_0x000107c453e4();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c52b50(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c562f4();
  }
  func_0x000107c61170();
  puVar2 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x000107c61168(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x000107c3e740();
  func_0x000107c54144(puVar2);
  func_0x000107c4c548();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c54b80(0,0,param_2,param_1);
    func_0x000107c61170(unaff_x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 10256c2b8; end: 10256c423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10256c2b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea5fd0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea5fd0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x00010256c318();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10256c424; end: 10256c507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10256c424(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea5fd8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea5fd8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c50894(0x4012000000000000,0x401e000000000000,0x4000000000000000,puVar2,param_2,
                        puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10256c508; end: 10256c627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10256c508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea5fd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea5fd8) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_10256c2b8();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  puVar2 = puVar1;
  func_0x000107c40510(puVar1);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c61170(puVar1);
  FUN_10256c424();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  FUN_10256c628();
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10256c628; end: 10256c8f7;  */

/* WARNING: Possible PIC construction at 0x00010256c654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256c8a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256c850) */
/* WARNING: Removing unreachable block (ram,0x00010256c7f0) */
/* WARNING: Removing unreachable block (ram,0x00010256c7d0) */
/* WARNING: Removing unreachable block (ram,0x00010256c784) */
/* WARNING: Removing unreachable block (ram,0x00010256c764) */
/* WARNING: Removing unreachable block (ram,0x00010256c718) */
/* WARNING: Removing unreachable block (ram,0x00010256c6f8) */
/* WARNING: Removing unreachable block (ram,0x00010256c670) */
/* WARNING: Removing unreachable block (ram,0x00010256c658) */
/* WARNING: Removing unreachable block (ram,0x00010256c8a4) */

void FUN_10256c628(undefined8 param_1)

{
  FUN_10256c2b8();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10256c8f8; end: 10256c917; -[_TtC39SCLocationSharingSettingsImplementation10FooterCell initWithFrame:] */

void FUN_10256c8f8(void)

{
  FUN_10256c508();
  return;
}



/* Entry: 10256c918; end: 10256c9bb; -[_TtC39SCLocationSharingSettingsImplementation10FooterCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256c918(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea5fd0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea5fd8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/FooterCell.swift",0x38,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256c988);
  (*pcVar1)();
}



/* Entry: 10256c9bc; end: 10256c9f3; -[_TtC39SCLocationSharingSettingsImplementation10FooterCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010256c9d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256c9dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256c9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea5fd0));
  return;
}



/* Entry: 10256c9f4; end: 10256ca13;  */

void FUN_10256c9f4(void)

{
  func_0x000107c61168(&PTR_PTR_11284e3c0);
  return;
}



/* Entry: 10256ca14; end: 10256cb07;  */

undefined * FUN_10256ca14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c55f80();
  func_0x000107c56ba8(puVar1,param_2,3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5a100(puVar1,param_2,0x17);
  func_0x000107c5af88(puVar2,param_2,0xbf);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10256cb08; end: 10256cc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10256cb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112ea6008;
  FUN_10256ca14();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6010) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6018) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c534b0();
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(puVar3);
  func_0x000107c61170(puVar3);
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c3d89c(puVar4);
  func_0x000107c61170(puVar4);
  FUN_10256cc34();
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 10256cc34; end: 10256ce9b;  */

/* WARNING: Possible PIC construction at 0x00010256ccd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256ccfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256cd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256cd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256cdb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256cdd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256ce24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256ce44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256ce28) */
/* WARNING: Removing unreachable block (ram,0x00010256cddc) */
/* WARNING: Removing unreachable block (ram,0x00010256cdbc) */
/* WARNING: Removing unreachable block (ram,0x00010256cd70) */
/* WARNING: Removing unreachable block (ram,0x00010256cd4c) */
/* WARNING: Removing unreachable block (ram,0x00010256cd00) */
/* WARNING: Removing unreachable block (ram,0x00010256ccdc) */
/* WARNING: Removing unreachable block (ram,0x00010256ce48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256cc34(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 9;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  func_0x000107c4acb0(*(undefined8 *)(unaff_x20 + _DAT_112ea6008));
  func_0x000107c61180();
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c4acb0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10256ce9c; end: 10256cebb; -[_TtC39SCLocationSharingSettingsImplementation10HeaderCell initWithFrame:] */

void FUN_10256ce9c(void)

{
  FUN_10256cb08();
  return;
}



/* Entry: 10256cebc; end: 10256cf1f; -[_TtC39SCLocationSharingSettingsImplementation10HeaderCell systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

void FUN_10256cebc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x000107c61154(param_1,0x7fefffffffffffff,0x447a0000,0x42480000,&uStack_40,
                      PTR_s_systemLayoutSizeFittingSize_with_112677640);
  return;
}



/* Entry: 10256cf20; end: 10256cfa7; -[_TtC39SCLocationSharingSettingsImplementation10HeaderCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256cf20(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112ea6008;
  lVar3 = param_1;
  FUN_10256ca14();
  *(long *)(param_1 + lVar1) = lVar3;
  *(undefined8 *)(param_1 + _DAT_112ea6010) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea6018) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/HeaderCell.swift",0x38,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10256cfa8);
  (*pcVar2)();
}



/* Entry: 10256cfa8; end: 10256d043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10256cfa8(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112ea6010;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea6010);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    lVar3 = unaff_x20;
    func_0x000107c40510();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126d5f68;
    func_0x000107c610f8();
    func_0x000107c4610c();
    func_0x000107c61170(lVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 10256d044; end: 10256d077;  */

void FUN_10256d044(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10256d078; end: 10256d0af; -[_TtC39SCLocationSharingSettingsImplementation10HeaderCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010256d094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256d098) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256d078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea6008));
  return;
}



/* Entry: 10256d0b0; end: 10256d0cf;  */

void FUN_10256d0b0(void)

{
  func_0x000107c61168(&PTR_PTR_11284e480);
  return;
}



/* Entry: 10256d0d0; end: 10256d12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256d0d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea6008);
  if (*(char *)(param_1 + 0xb) < -0x70) {
    uVar1 = *param_1;
    func_0x000107c61174(uVar1);
  }
  else {
    uVar1 = 0;
  }
  func_0x000107c529c4(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_sizeToFit_11266cfb0);
  return;
}



/* Entry: 10256d12c; end: 10256d16b;  */

void FUN_10256d12c(undefined8 param_1)

{
  FUN_10256cfa8();
  func_0x000107c59a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10256d16c; end: 10256d17b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256d16c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea6018) = param_1;
  return;
}



/* Entry: 10256d17c; end: 10256d207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10256d17c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea6050;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea6050);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d5f68;
    func_0x000107c610f8();
    func_0x000107c4610c();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10256d208; end: 10256d5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10256d208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6050) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6058) = 0;
  uVar2 = 0;
  FUN_10256e858();
  func_0x000107c610f8();
  func_0x000107c469a4(param_1,param_2,param_3,param_4);
  lVar1 = _DAT_112ea6048;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6048) = uVar2;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar2);
  func_0x000107c3fa94(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c534b0(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c534b0();
  func_0x000107c5a050(puVar4);
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  FUN_10256d17c();
  func_0x000107c3d89c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  lVar1 = _DAT_112ea6050;
  uVar8 = *(undefined8 *)(puVar4 + _DAT_112ea6050);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x30) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar6 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x38) = uVar2;
  uVar2 = 0;
  func_0x000100847984(0);
  puVar9 = puVar7;
  func_0x000107c5fc48(puVar7,uVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  return puVar4;
}



/* Entry: 10256d5cc; end: 10256d5eb; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTACell initWithFrame:] */

void FUN_10256d5cc(void)

{
  FUN_10256d208();
  return;
}



/* Entry: 10256d5ec; end: 10256d65b; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTACell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256d5ec(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea6050) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea6058) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/LocationUpdateCTACell.swift",0x43,2,
                      0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256d65c);
  (*pcVar1)();
}



/* Entry: 10256d65c; end: 10256d6af; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTACell systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

undefined1  [16] FUN_10256d65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  FUN_10256d874(param_1,param_2);
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10256d6b0; end: 10256d723; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTACell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256d6b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_prepareForReuse_112620008;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_10256d924();
  func_0x000107c4ff34();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10256d724; end: 10256d757;  */

void FUN_10256d724(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10256d758; end: 10256d78f; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTACell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010256d774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256d778) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256d758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea6048));
  return;
}



/* Entry: 10256d790; end: 10256d7af;  */

void FUN_10256d790(void)

{
  func_0x000107c61168(&PTR_PTR_11284e548);
  return;
}



/* Entry: 10256d7b0; end: 10256d823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256d7b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102568cdc();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c520f4();
  func_0x000107c61170(uVar1);
  FUN_10256da08(param_1);
  return;
}



/* Entry: 10256d824; end: 10256d863;  */

void FUN_10256d824(undefined8 param_1)

{
  FUN_10256d17c();
  func_0x000107c59a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10256d864; end: 10256d873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256d864(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea6058) = param_1;
  return;
}



/* Entry: 10256d874; end: 10256d923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10256d874(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  FUN_10256d17c();
  dVar3 = 1.79769313486232e+308;
  func_0x000107c5c614(param_1,0x7fefffffffffffff,0x447a0000,0x42480000);
  dVar2 = param_1;
  func_0x000107c61170(param_2);
  puVar1 = PTR_PTR_1126b2780;
  func_0x000107c61168(PTR_PTR_1126b2780);
  func_0x000107c5c224(*(undefined8 *)(unaff_x20 + _DAT_112ea6050));
  func_0x000107c44da8(puVar1);
  if (dVar2 < dVar3) {
    dVar2 = dVar3;
  }
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10256d924; end: 10256da07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10256d924(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ea6088;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea6088);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aec40;
    func_0x000107c61168();
    func_0x000107c3ee98();
    func_0x000107c61180();
    func_0x000107c3d8b8();
    func_0x000107c61174();
    func_0x000107c5a050();
    uVar4 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a9d20);
    func_0x000107c520f4(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10256da08; end: 10256dc47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256da08(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_112ea60a8);
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  FUN_10256e878(uVar1,uVar2);
  if (param_1[0x58] < 0x10) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    bVar5 = param_1[0x28];
    bVar6 = *param_1;
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea6098);
    puVar9 = &uStack_c0;
    pbVar7 = param_1;
    if (bVar6 < 3) {
      if (bVar6 < 2) {
        FUN_10255ee54(param_1,puVar9);
        func_0x000102578e0c();
      }
      else {
        FUN_10255ee54(param_1,puVar9);
        func_0x000102578adc();
      }
    }
    else if (bVar6 == 3) {
      FUN_10255ee54(param_1,puVar9);
      func_0x000102578ba8();
    }
    else if (bVar6 == 4) {
      FUN_10255ee54(param_1,puVar9);
      func_0x000102578c74();
    }
    else {
      FUN_10255ee54(param_1,puVar9);
      func_0x000102578d40();
    }
    puVar10 = puVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
    func_0x000107c59c6c(uVar11);
    func_0x000107c61170(pbVar7);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea60a0);
    if (bVar6 < 3) {
      if (bVar6 < 2) {
        func_0x000102578660();
      }
      else {
        func_0x00010257832c();
      }
    }
    else if (bVar6 == 3) {
      func_0x0001025783f8();
    }
    else if (bVar6 == 4) {
      func_0x0001025784c8();
    }
    else {
      func_0x000102578594();
    }
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar10);
    func_0x000107c59c6c(uVar11);
    func_0x000107c61170(pbVar7);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c59c78(uVar11);
    func_0x000107c61170(puVar8);
    bStack_a0 = bVar5 & 1;
    uStack_c0 = uVar1;
    uStack_b8 = uVar3;
    uStack_b0 = uVar2;
    uStack_a8 = uVar4;
    func_0x000107c61434(uVar3);
    func_0x000107c6157c(uVar4);
    FUN_10256e418(&uStack_c0);
    FUN_10255ee94(param_1);
    func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(unaff_x20 + _DAT_112ea6090));
    func_0x000107c61574(uVar4);
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c5b09c(*(undefined8 *)(unaff_x20 + _DAT_112ea6098));
  func_0x000107c5b09c(*(undefined8 *)(unaff_x20 + _DAT_112ea60a0));
  func_0x000107c5b09c(*(undefined8 *)(unaff_x20 + _DAT_112ea6090));
  return;
}



/* Entry: 10256dc48; end: 10256dd3b;  */

undefined * FUN_10256dc48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar1);
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0a9d90);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 10256dd3c; end: 10256df27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10256dd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6088) = 0;
  lVar2 = _DAT_112ea6090;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  puVar4 = puVar3;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea6098;
  FUN_10256dc48();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea60a0;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c61174();
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar3);
  func_0x000107c5a100(puVar3);
  func_0x000107c61170(puVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea60a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c534b0();
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0a9db0);
  func_0x000107c520f4(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  lVar2 = _DAT_112ea6090;
  func_0x000107c3d89c(*(undefined8 *)(puVar5 + _DAT_112ea6090));
  func_0x000107c3d89c(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c3d89c(puVar5);
  FUN_10256df28();
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 10256df28; end: 10256e3cf;  */

/* WARNING: Possible PIC construction at 0x00010256dffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256e368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256e318) */
/* WARNING: Removing unreachable block (ram,0x00010256e2c0) */
/* WARNING: Removing unreachable block (ram,0x00010256e268) */
/* WARNING: Removing unreachable block (ram,0x00010256e214) */
/* WARNING: Removing unreachable block (ram,0x00010256e1bc) */
/* WARNING: Removing unreachable block (ram,0x00010256e168) */
/* WARNING: Removing unreachable block (ram,0x00010256e108) */
/* WARNING: Removing unreachable block (ram,0x00010256e0b4) */
/* WARNING: Removing unreachable block (ram,0x00010256e060) */
/* WARNING: Removing unreachable block (ram,0x00010256e000) */
/* WARNING: Removing unreachable block (ram,0x00010256e36c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256df28(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar1 = 0x112d360b8;
  FUN_10256e888(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x17;
  *(undefined8 *)(lVar1 + 0x10) = 0xb;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea6090);
  func_0x000107c4acb0(uVar2);
  func_0x000107c61180();
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c40284(0x4028000000000000,uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10256e3d0; end: 10256e3ef; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTAView initWithFrame:] */

void FUN_10256e3d0(void)

{
  FUN_10256dd3c();
  return;
}



/* Entry: 10256e3f0; end: 10256e417; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTAView initWithCoder:] */

void FUN_10256e3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10256e9c8();
  return;
}



/* Entry: 10256e418; end: 10256e737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256e418(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [40];
  
  puVar2 = param_1;
  FUN_10256d924();
  puVar3 = puVar2;
  func_0x000107c5c42c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x000107c3d89c();
  }
  else {
    func_0x000107c61170(puVar3);
  }
  lVar1 = _DAT_112ea6088;
  func_0x000107c52124(*(undefined8 *)(unaff_x20 + _DAT_112ea6088));
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar9 = 0x112d360b8;
  FUN_10256e888(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 7;
  *(undefined8 *)(lVar9 + 0x10) = 3;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea6090);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c4acb0(uVar6);
  func_0x000107c61180();
  uVar8 = uVar5;
  func_0x000107c40284(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar9 + 0x20) = uVar8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar8 = uVar5;
  func_0x000107c40284(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar9 + 0x28) = uVar8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar8 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar9 + 0x30) = uVar8;
  uVar8 = 0;
  FUN_10256eaf8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar9;
  func_0x000107c5fc48(lVar9,uVar8);
  func_0x000107c61574(lVar9);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(lVar7);
  lVar9 = param_1[1];
  if (lVar9 != 0) {
    uVar6 = *param_1;
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea60a8);
    uVar8 = *puVar2;
    uVar5 = puVar2[1];
    uVar10 = param_1[3];
    uVar11 = param_1[2];
    puVar2[1] = param_1[3];
    *puVar2 = uVar11;
    FUN_10256e968(param_1,auStack_88);
    func_0x000107c6157c(uVar10);
    FUN_10256e878(uVar8,uVar5);
    func_0x000107c59a2c(*(undefined8 *)(unaff_x20 + lVar1));
    func_0x000107c52dfc(*(undefined8 *)(unaff_x20 + lVar1));
    func_0x000107c544f8(*(undefined8 *)(unaff_x20 + lVar1));
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174(uVar8);
    func_0x000107c5fadc(uVar6,lVar9);
    func_0x000107c59e1c(uVar8);
    func_0x000107c61574(uVar10);
    func_0x000107c6142c(lVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 10256e738; end: 10256e7b7; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTAView buttonTappedWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256e738(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ea60a8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ea60a8))[1];
  func_0x000107c61174();
  FUN_10256e9b8(pcVar1,uVar2);
  (*pcVar1)(0,0,0,0);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10256e7b8; end: 10256e7eb;  */

void FUN_10256e7b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10256e7ec; end: 10256e857; -[_TtC39SCLocationSharingSettingsImplementation21LocationUpdateCTAView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256e7ec(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6088));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6090));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6098));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea60a0));
  if (*(long *)(param_1 + _DAT_112ea60a8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ea60a8))[1]);
    return;
  }
  return;
}



/* Entry: 10256e858; end: 10256e877;  */

void FUN_10256e858(void)

{
  func_0x000107c61168(&PTR_PTR_11284e610);
  return;
}



/* Entry: 10256e878; end: 10256e887;  */

void FUN_10256e878(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 10256e888; end: 10256e8ff;  */

void FUN_10256e888(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10256eaf8(0,param_1,param_2);
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



/* Entry: 10256e900; end: 10256e967;  */

/* WARNING: Possible PIC construction at 0x00010256e930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256e934) */
/* WARNING: Removing unreachable block (ram,0x00010256e938) */

void FUN_10256e900(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d5b228;
    plVar5 = (long *)&UNK_10d9223b0;
  }
  else {
    puVar3 = (ulong *)0x112d5b0a0;
    plVar5 = (long *)&UNK_10d97aac0;
    unaff_x30 = 0x10256e934;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10256e968; end: 10256e9b7;  */

undefined8 FUN_10256e968(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ea60d8;
  func_0x0001000285a8(0x112ea60d8,&UNK_10dab90b8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10256e9b8; end: 10256e9c7;  */

void FUN_10256e9b8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10256e9c8; end: 10256eaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256e9c8(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea6088) = 0;
  lVar2 = _DAT_112ea6090;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea6098;
  FUN_10256dc48();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112ea60a0;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c61174();
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar4);
  func_0x000107c5a100(puVar4);
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea60a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/LocationUpdateCTAView.swift",0x43,2,
                      0x39,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10256eaf8);
  (*pcVar3)();
}



/* Entry: 10256eaf8; end: 10256eb37;  */

void FUN_10256eaf8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10256eb38; end: 10256ebc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10256eb38(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea60e8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea60e8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d5f68;
    func_0x000107c610f8();
    func_0x000107c4610c();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10256ebc4; end: 10256ef87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10256ebc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea60e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea60f0) = 0;
  uVar2 = 0;
  FUN_102570518();
  func_0x000107c610f8();
  func_0x000107c469a4(param_1,param_2,param_3,param_4);
  lVar1 = _DAT_112ea60e0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea60e0) = uVar2;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar2);
  func_0x000107c3fa94(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c534b0(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c534b0();
  func_0x000107c5a050(puVar4);
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  FUN_10256eb38();
  func_0x000107c3d89c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  lVar1 = _DAT_112ea60e8;
  uVar8 = *(undefined8 *)(puVar4 + _DAT_112ea60e8);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x30) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar6 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x38) = uVar2;
  uVar2 = 0;
  func_0x000100847984(0);
  puVar9 = puVar7;
  func_0x000107c5fc48(puVar7,uVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  return puVar4;
}



/* Entry: 10256ef88; end: 10256efa7; -[_TtC39SCLocationSharingSettingsImplementation18LocationUpsellCell initWithFrame:] */

void FUN_10256ef88(void)

{
  FUN_10256ebc4();
  return;
}



/* Entry: 10256efa8; end: 10256f017; -[_TtC39SCLocationSharingSettingsImplementation18LocationUpsellCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256efa8(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea60e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea60f0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/LocationUpsellCell.swift",0x40,2,0x31
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10256f018);
  (*pcVar1)();
}



/* Entry: 10256f018; end: 10256f06b; -[_TtC39SCLocationSharingSettingsImplementation18LocationUpsellCell systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

undefined1  [16] FUN_10256f018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  FUN_10256f1bc(param_1,param_2);
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10256f06c; end: 10256f09f;  */

void FUN_10256f06c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10256f0a0; end: 10256f0d7; -[_TtC39SCLocationSharingSettingsImplementation18LocationUpsellCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010256f0bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256f0c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256f0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea60e0));
  return;
}



/* Entry: 10256f0d8; end: 10256f0f7;  */

void FUN_10256f0d8(void)

{
  func_0x000107c61168(&PTR_PTR_11284e6e8);
  return;
}



/* Entry: 10256f0f8; end: 10256f16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256f0f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102568cdc();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c520f4();
  func_0x000107c61170(uVar1);
  FUN_10256f26c(param_1);
  return;
}



/* Entry: 10256f16c; end: 10256f1ab;  */

void FUN_10256f16c(undefined8 param_1)

{
  FUN_10256eb38();
  func_0x000107c59a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10256f1ac; end: 10256f1bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256f1ac(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea60f0) = param_1;
  return;
}



/* Entry: 10256f1bc; end: 10256f26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10256f1bc(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  FUN_10256eb38();
  dVar3 = 1.79769313486232e+308;
  func_0x000107c5c614(param_1,0x7fefffffffffffff,0x447a0000,0x42480000);
  dVar2 = param_1;
  func_0x000107c61170(param_2);
  puVar1 = PTR_PTR_1126b2780;
  func_0x000107c61168(PTR_PTR_1126b2780);
  func_0x000107c5c224(*(undefined8 *)(unaff_x20 + _DAT_112ea60e8));
  func_0x000107c44da8(puVar1);
  if (dVar2 < dVar3) {
    dVar2 = dVar3;
  }
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10256f26c; end: 10256f4bb;  */

/* WARNING: Possible PIC construction at 0x00010256f490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256f494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10256f26c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte bStack_68;
  
  uVar5 = param_1[1];
  uVar7 = param_1[3];
  uVar8 = param_1[5];
  uVar4 = param_1[8];
  uVar6 = param_1[10];
  puVar2 = param_1;
  FUN_10256f4bc();
  func_0x000107c4ff34();
  func_0x000107c61170(puVar2);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea6150);
  uVar10 = *puVar2;
  uVar9 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_10256e878(uVar10,uVar9);
  if ((*(byte *)(param_1 + 0xb) & 0xf0) == 0x70) {
    uVar12 = *param_1;
    uStack_78 = param_1[9];
    uStack_88 = param_1[7];
    cVar1 = *(char *)(param_1 + 4);
    uVar9 = param_1[2];
    bStack_68 = *(byte *)(param_1 + 0xb) & 1;
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea6140);
    uStack_80 = uVar4;
    uStack_70 = uVar6;
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar7);
    func_0x000107c61174();
    func_0x000107c61434(uVar4);
    func_0x000107c6157c(uVar6);
    uVar10 = uVar7;
    func_0x000107c5fadc(uVar9,uVar7);
    func_0x000107c59c6c(uVar11);
    func_0x000107c61170(uVar9);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea6148);
    if (cVar1 == '\0') {
      func_0x0001025780c8();
    }
    else if (cVar1 == '\x01') {
      func_0x000102578194();
    }
    else {
      func_0x000102578260();
    }
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar10);
    func_0x000107c59c6c(uVar11);
    func_0x000107c61170(uVar9);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c59c78(uVar11);
    func_0x000107c61170(puVar3);
    FUN_10257001c(uVar8);
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea6158);
    uVar10 = puVar2[1];
    *puVar2 = uVar12;
    puVar2[1] = uVar5;
    func_0x000107c61434(uVar5);
    func_0x000107c6142c(uVar10);
    *(char *)(unaff_x20 + _DAT_112ea6160) = cVar1;
    FUN_1025700a0(&uStack_88);
    func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(unaff_x20 + _DAT_112ea6128));
    func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(unaff_x20 + _DAT_112ea6138));
    func_0x000107c61170(uVar8);
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c6142c(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112ea6140),PTR_s_sizeToFit_11266cfb0);
  return;
}



/* Entry: 10256f4bc; end: 10256f5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10256f4bc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ea6120;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea6120);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aec40;
    func_0x000107c61168();
    func_0x000107c3ee98();
    func_0x000107c61180();
    func_0x000107c3d8b8();
    func_0x000107c61174();
    func_0x000107c5a050();
    uVar4 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f0a9e20);
    func_0x000107c520f4(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10256f600; end: 10256f7d3;  */

undefined * FUN_10256f600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(0,0,0x404c000000000000,0x404c000000000000);
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  func_0x000107c53840(puVar1,param_2,1);
  func_0x000107c52ab4(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x403c000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 10256f7d4; end: 10256fa2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10256f7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6120) = 0;
  lVar2 = _DAT_112ea6128;
  puVar3 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6130) = 0;
  lVar2 = _DAT_112ea6138;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  puVar4 = puVar3;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea6140;
  func_0x00010256f6e0();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea6148;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c61174();
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar3);
  func_0x000107c5a100(puVar3);
  func_0x000107c61170(puVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6150);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6158);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea6160) = 3;
  *(undefined1 *)(unaff_x20 + _DAT_112ea6168) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c534b0();
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a9ec0);
  func_0x000107c520f4(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x00010256f5a0();
  func_0x000107c3d89c(puVar5);
  func_0x000107c61170(uVar6);
  lVar2 = _DAT_112ea6138;
  func_0x000107c3d89c(*(undefined8 *)(puVar5 + _DAT_112ea6138));
  func_0x000107c3d89c(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c3d89c(puVar5);
  FUN_10256fa30();
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 10256fa30; end: 10256ffd3;  */

/* WARNING: Possible PIC construction at 0x00010256faa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fb3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fcbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fdc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fe1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fe7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256fed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256ff24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010256ff78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010256ff28) */
/* WARNING: Removing unreachable block (ram,0x00010256fed4) */
/* WARNING: Removing unreachable block (ram,0x00010256fe80) */
/* WARNING: Removing unreachable block (ram,0x00010256fe20) */
/* WARNING: Removing unreachable block (ram,0x00010256fdcc) */
/* WARNING: Removing unreachable block (ram,0x00010256fd78) */
/* WARNING: Removing unreachable block (ram,0x00010256fd18) */
/* WARNING: Removing unreachable block (ram,0x00010256fcc0) */
/* WARNING: Removing unreachable block (ram,0x00010256fc68) */
/* WARNING: Removing unreachable block (ram,0x00010256fc14) */
/* WARNING: Removing unreachable block (ram,0x00010256fbb8) */
/* WARNING: Removing unreachable block (ram,0x00010256fb84) */
/* WARNING: Removing unreachable block (ram,0x00010256fb40) */
/* WARNING: Removing unreachable block (ram,0x00010256fae4) */
/* WARNING: Removing unreachable block (ram,0x00010256faac) */
/* WARNING: Removing unreachable block (ram,0x00010256ff7c) */

void FUN_10256fa30(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 0x1f;
  *(undefined8 *)(puVar1 + 0x10) = 0xf;
  func_0x00010256f5a0();
  func_0x000107c4acb0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10256ffd4; end: 10256fff3; -[_TtC39SCLocationSharingSettingsImplementation18LocationUpsellView initWithFrame:] */

void FUN_10256ffd4(void)

{
  FUN_10256f7d4();
  return;
}


