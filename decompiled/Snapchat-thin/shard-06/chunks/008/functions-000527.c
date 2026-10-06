/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e11954; end: 104e1195f; +[SCUnifiedProfileEmptyCountdownsSectionDataProvider announcerIdentifier] */

undefined ** FUN_104e11954(void)

{
  return &PTR____CFConstantStringClassReference_110db66d8;
}



/* Entry: 104e11960; end: 104e11967; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider addListener:] */

void FUN_104e11960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104e11968; end: 104e1196f; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider removeListener:] */

void FUN_104e11968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104e11970; end: 104e11977; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_104e11970(void)

{
  return 1;
}



/* Entry: 104e11978; end: 104e11983; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider containerCellViewModelsForIndexPaths:] */

undefined * FUN_104e11978(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104e11984; end: 104e1198f; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104e11984(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0c60,PTR_s_contentCellClassesByReuseIdentif_1125b0998);
  return;
}



/* Entry: 104e11990; end: 104e1199b; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider configurationBlocksByReuseIdentifier] */

undefined * FUN_104e11990(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 104e1199c; end: 104e119a3; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_104e1199c(void)

{
  return 0;
}



/* Entry: 104e119a4; end: 104e119bb; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider dataProviderDelegate] */

void FUN_104e119a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e119bc; end: 104e119c7; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider setDataProviderDelegate:] */

void FUN_104e119bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104e119c8; end: 104e119cf; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104e119c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e119d0; end: 104e119ff; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104e119d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e11a00; end: 104e11a07; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider sectionDataModel] */

undefined8 FUN_104e11a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e11a08; end: 104e11a0f; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider setSectionDataModel:] */

void FUN_104e11a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104e11a10; end: 104e11a53; -[SCUnifiedProfileEmptyCountdownsSectionDataProvider .cxx_destruct] */

void FUN_104e11a10(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e11a54; end: 104e11b9b; -[SCUnifiedProfileCountdownsBaseCollectionViewsCell initWithFrame:] */

undefined1 * FUN_104e11a54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e45a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20eaa0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5c20();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e40();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e11b9c; end: 104e11b9f; -[SCUnifiedProfileCountdownsBaseCollectionViewsCell setViewModel:] */

void FUN_104e11b9c(void)

{
  return;
}



/* Entry: 104e11ba0; end: 104e11ba7; -[SCUnifiedProfileCountdownsBaseCollectionViewsCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_104e11ba0(void)

{
  return 0;
}



/* Entry: 104e11ba8; end: 104e11bb3; +[SCUnifiedProfileCountdownsBaseCollectionViewsCell sizeWithViewModel:constrainedToSize:traitCollectionFetcher:] */

void FUN_104e11ba8(void)

{
  return;
}



/* Entry: 104e11bb4; end: 104e11c3f; -[SCUnifiedProfileCountdownsBaseCollectionViewsCell setBadgeActive:] */

void FUN_104e11bb4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6758,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ed60();
  _objc_release(param_1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 104e11c40; end: 104e11c4f; -[SCUnifiedProfileCountdownsBaseCollectionViewsCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e11c40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713aa4);
}



/* Entry: 104e11c50; end: 104e11c5f; -[SCUnifiedProfileCountdownsBaseCollectionViewsCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e11c50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713aa8);
}



/* Entry: 104e11c60; end: 104e11c9f; -[SCUnifiedProfileCountdownsBaseCollectionViewsCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e11c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713aa8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e11ca0; end: 104e11cdf; -[SCUnifiedProfileCountdownsBaseCollectionViewsCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e11ca0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713aa8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713aa4,0);
  return;
}



/* Entry: 104e11ce0; end: 104e11d3b; -[SCUnifiedProfileCountdownsListCollectionViewsCell addAsSubviewAndLayoutContainerView:parentView:] */

void FUN_104e11ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010befbb60(param_4,param_2,param_3);
  func_0x00010c219b60(param_3,param_2,0);
  func_0x00010c14c960(0,0,0,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e11d3c; end: 104e1202f; -[SCUnifiedProfileCountdownsListCollectionViewsCell addAsSubviewAndLayoutButton:parentView:existingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104e11d3c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010befbb60(param_4);
  func_0x00010c219b60(param_3);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (param_5 != 0) {
    puVar1 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_5;
    func_0x00010bf1ff80(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar12);
    _objc_release(puVar1);
  }
  puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  puStack_98 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  puStack_a8 = puVar1;
  puStack_90 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c08de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  puStack_88 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  lStack_b0 = param_5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar6 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  puStack_80 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(puVar2);
  _objc_release(puStack_a8);
  _objc_release(uStack_a0);
  _objc_release(puStack_98);
  _objc_release(lStack_b0);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_100;
  pcStack_c8 = FUN_104e12030;
  puStack_f8 = PTR_PTR_1126e45b0;
  puStack_100 = puVar1;
  puStack_f0 = puVar7;
  puStack_e8 = puVar6;
  uStack_e0 = uVar5;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_100,PTR_s_initWithFrame__1125e2948);
  if (ppuVar10 != (undefined1 **)0x0) {
    puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar12 = (long)_DAT_112713aac;
    uVar11 = *(undefined8 *)((long)ppuVar10 + lVar12);
    *(undefined **)((long)ppuVar10 + lVar12) = puVar9;
    _objc_release(uVar11);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)ppuVar10 + lVar12));
    _objc_release(puVar9);
    puVar1 = (undefined1 *)ppuVar10;
    func_0x00010bf4dce0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6da0(ppuVar10);
    _objc_release(puVar1);
    func_0x00010c1fe760(ppuVar10);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(ppuVar10);
    _objc_release(puVar9);
    func_0x00010c2843e0(ppuVar10);
  }
  return (undefined1 *)ppuVar10;
}



/* Entry: 104e12030; end: 104e12143; -[SCUnifiedProfileCountdownsListCollectionViewsCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e12030(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e45b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_112713aac;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6da0(puVar1);
    _objc_release(puVar3);
    func_0x00010c1fe760(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c2843e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e12144; end: 104e122d3; -[SCUnifiedProfileCountdownsListCollectionViewsCell updateCellViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e12144(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_112713ab0;
  if (*(long *)(param_1 + lVar6) == 0) {
    lVar7 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar2;
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(lVar7);
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar3);
  }
  lVar7 = (long)_DAT_112713ab4;
  lVar6 = *(long *)(param_1 + lVar7);
  if (lVar6 == 0) {
    puVar3 = PTR_PTR_1126b0c78;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010befbd60(uVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x000104e13cf8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar4);
    func_0x00010bed5820(param_1);
    lVar6 = *(long *)(param_1 + lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef6d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addAsSubviewAndLayoutButton_pare_11259b508,lVar6,
             *(undefined8 *)(param_1 + _DAT_112713aac),0);
  return;
}



/* Entry: 104e122d4; end: 104e123b3; -[SCUnifiedProfileCountdownsListCollectionViewsCell _updateColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e122d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf414e0(0x3fb999999999999a,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112713ab4;
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf414e0(0x3fc999999999999a,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a88c0(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c19ea60(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e123b4; end: 104e124af; -[SCUnifiedProfileCountdownsListCollectionViewsCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e123b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112713aa4;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_104e12498;
    }
    puVar2 = PTR_PTR_1126b0c50;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar3);
    func_0x00010c2843e0(param_1);
  }
LAB_104e12498:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e124b0; end: 104e124b7; -[SCUnifiedProfileCountdownsListCollectionViewsCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_104e124b0(void)

{
  return 0;
}



/* Entry: 104e124b8; end: 104e124c3; +[SCUnifiedProfileCountdownsListCollectionViewsCell sizeWithViewModel:constrainedToSize:] */

void FUN_104e124b8(void)

{
  return;
}



/* Entry: 104e124c4; end: 104e12577; -[SCUnifiedProfileCountdownsListCollectionViewsCell _handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e124c4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b0c50;
  uVar4 = *(ulong *)(param_1 + _DAT_112713aa4);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112713aa8);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(uVar4 + 8);
    }
    _objc_retain(uVar5);
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e12578; end: 104e125c7; -[SCUnifiedProfileCountdownsListCollectionViewsCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e12578(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713ab4,0);
  _objc_storeStrong(param_1 + _DAT_112713ab0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713aac,0);
  return;
}



/* Entry: 104e125c8; end: 104e126c3; -[SCUnifiedProfileCountdownsProfileViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e125c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112713aa4;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_104e126ac;
    }
    puVar2 = PTR_PTR_1126b0c58;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    func_0x00010bed5060(param_1);
    uVar3 = *(ulong *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar1;
  }
  _objc_release(uVar3);
LAB_104e126ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e126c4; end: 104e1279b; +[SCUnifiedProfileCountdownsProfileViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_104e126c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b0c58;
  _objc_opt_class(PTR_PTR_1126b0c58);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b0c80;
  if (uVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    if (param_5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_5 + 0x40);
    }
    _objc_retain(uVar4);
    func_0x00010c23d700(param_1,param_2,puVar2);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 104e1279c; end: 104e1284f; -[SCUnifiedProfileCountdownsProfileViewCell _handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1279c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b0c58;
  uVar4 = *(ulong *)(param_1 + _DAT_112713aa4);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112713aa8);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(uVar4 + 8);
    }
    _objc_retain(uVar5);
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e12850; end: 104e12a9b; -[SCUnifiedProfileCountdownsProfileViewCell _updateCellViewWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e12850(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_112713ab8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b0c88;
  _objc_alloc(PTR_PTR_1126b0c88);
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0;
    dVar10 = 0.0;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar8);
    dVar10 = (double)*(long *)(param_3 + 0x30);
    uVar9 = *(undefined8 *)(param_3 + 0x10);
  }
  _objc_retain(uVar9);
  func_0x00010c006200(dVar10,puVar2,param_2,uVar6,uVar7,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126b0c90;
  _objc_alloc(PTR_PTR_1126b0c90);
  lVar4 = param_1;
  func_0x00010be1dee0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c061d40(puVar3,param_2,puVar2,lVar4,uVar1);
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0(puVar5);
  func_0x00010c1f5f00();
  func_0x00010c14d9a0(0x4024000000000000,puVar5,param_2,0xffffffffffffffff);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  func_0x00010c219b60(puVar5,param_2,0);
  func_0x00010c14c940(puVar5);
  func_0x00010befbb60(puVar5,param_2,puVar3);
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x00010c14c960(0xc010000000000000,0,0xc010000000000000,0,puVar3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e12a9c; end: 104e12ad3; -[SCUnifiedProfileCountdownsProfileViewCell setComposerPeopleBridgeFriendServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e12a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713abc);
  *(undefined8 *)(param_1 + _DAT_112713abc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e12ad4; end: 104e12c8b; -[SCUnifiedProfileCountdownsProfileViewCell _getComposerCountdownProfileCellViewContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e12ad4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112713abc;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126b0c98;
    _objc_alloc(PTR_PTR_1126b0c98);
    func_0x00010c0368e0();
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010bfb8b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b0ca0;
    _objc_opt_new(PTR_PTR_1126b0ca0);
    lVar2 = lVar4;
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0100(puVar3);
    _objc_release(lVar2);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1d2c00(puVar3);
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x38);
    }
    _objc_retain(uVar5);
    func_0x00010c167be0(puVar3);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_release(lVar4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e12c8c; end: 104e12d1f;  */

void FUN_104e12c8c(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e12d20;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e12d20; end: 104e12d53;  */

void FUN_104e12d20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be31a80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e12d54; end: 104e12d63; -[SCUnifiedProfileCountdownsProfileViewCell valdiRuntimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e12d54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713ab8);
}



/* Entry: 104e12d64; end: 104e12da3; -[SCUnifiedProfileCountdownsProfileViewCell setValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e12d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713ab8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e12da4; end: 104e12db3; -[SCUnifiedProfileCountdownsProfileViewCell composerPeopleBridgeFriendServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e12da4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713abc);
}



/* Entry: 104e12db4; end: 104e12e03; -[SCUnifiedProfileCountdownsProfileViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e12db4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713abc,0);
  _objc_storeStrong(param_1 + _DAT_112713ab8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713ac0,0);
  return;
}



/* Entry: 104e12e04; end: 104e12f3f; -[SCUnifiedProfileCountdownsViewAllButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e12e04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e45b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713ac4);
    *(undefined **)((long)puVar1 + (long)_DAT_112713ac4) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713ac8);
    *(undefined **)((long)puVar1 + (long)_DAT_112713ac8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e12f40; end: 104e12f57; -[SCUnifiedProfileCountdownsViewAllButton intrinsicContentSize] */

undefined1  [16] FUN_104e12f40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4040000000000000;
  return auVar1;
}



/* Entry: 104e12f58; end: 104e12f9b; -[SCUnifiedProfileCountdownsViewAllButton text] */

void FUN_104e12f58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e12f9c; end: 104e13007; -[SCUnifiedProfileCountdownsViewAllButton setText:] */

void FUN_104e12f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c216260(param_1,param_2,param_3,0);
  func_0x00010c216260(param_1,param_2,param_3,4);
  func_0x00010c216260(param_1,param_2,param_3,1);
  func_0x00010c216260(param_1,param_2,param_3,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e13008; end: 104e13073; -[SCUnifiedProfileCountdownsViewAllButton setForegroundColor:] */

void FUN_104e13008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c216380(param_1,param_2,param_3,0);
  func_0x00010c216380(param_1,param_2,param_3,4);
  func_0x00010c216380(param_1,param_2,param_3,1);
  func_0x00010c216380(param_1,param_2,param_3,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e13074; end: 104e1307b; -[SCUnifiedProfileCountdownsViewAllButton foregroundColor] */

void FUN_104e13074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c271270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_titleColorForState__112679ec0,0);
  return;
}



/* Entry: 104e1307c; end: 104e130f3; -[SCUnifiedProfileCountdownsViewAllButton setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1307c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713ac4);
  *(undefined8 *)(param_1 + _DAT_112713ac4) = uVar1;
  _objc_release(uVar2);
  puStack_28 = PTR_PTR_1126e45b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setBackgroundColor__112639330,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104e130f4; end: 104e1314f; -[SCUnifiedProfileCountdownsViewAllButton setHighlighted:] */

void FUN_104e130f4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long alStack_30 [2];
  long alStack_20 [2];
  
  lVar1 = 4;
  plVar2 = alStack_20;
  if (param_3 == 0) {
    lVar1 = 0;
    plVar2 = alStack_30;
  }
  uVar3 = *(undefined8 *)(param_1 + *(int *)(&DAT_112713ac4 + lVar1));
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126e45b8;
  _objc_msgSendSuper2(plVar2,PTR_s_setBackgroundColor__112639330,uVar3);
  return;
}



/* Entry: 104e13150; end: 104e1315f; -[SCUnifiedProfileCountdownsViewAllButton highlightedColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e13150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713ac8);
}



/* Entry: 104e13160; end: 104e1319f; -[SCUnifiedProfileCountdownsViewAllButton setHighlightedColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e13160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713ac8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e131a0; end: 104e131df; -[SCUnifiedProfileCountdownsViewAllButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e131a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713ac8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713ac4,0);
  return;
}



/* Entry: 104e131e0; end: 104e13283; -[SCUnifiedProfileCreateCountdownCollectionViewCell initWithFrame:] */

undefined1 * FUN_104e131e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e45c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161a60();
    _objc_release(puVar2);
    func_0x00010bee3f20(puVar1);
    func_0x00010bedfc80(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e13284; end: 104e133ff; -[SCUnifiedProfileCreateCountdownCollectionViewCell _updateViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e13284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_5;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ca8;
  _objc_alloc();
  lVar3 = lVar1;
  func_0x00010bf20c00(lVar1);
  func_0x000108f7491c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013fe0(param_1,param_2,param_3,param_4,0x4024000000000000,0x4004000000000000,0,
                      0x3ff0000000000000,puVar2,param_6,lVar3,0xf,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010c262ca0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960(lVar1);
  func_0x00010befbb60(lVar3,param_6,puVar2);
  func_0x00010c219b60(puVar2,param_6,0);
  func_0x00010c14c940(puVar2);
  func_0x00010befbb60(lVar3,param_6,lVar1);
  func_0x00010c219b60(lVar1,param_6,0);
  func_0x00010c14c940(lVar1);
  uVar5 = *(undefined8 *)(param_5 + _DAT_112713acc);
  *(undefined **)(param_5 + _DAT_112713acc) = puVar2;
  _objc_release(uVar5);
  func_0x00010bedfc80(param_5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e13400; end: 104e134b3; -[SCUnifiedProfileCreateCountdownCollectionViewCell _updateShadowColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e13400(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (lRam00000001138466f0 < 3) {
    puVar1 = param_1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c292b20();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x2) {
      func_0x000108f7495c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e13488;
    }
    uVar3 = 0xd4;
  }
  else {
    uVar3 = 0xd6;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_104e13488:
  func_0x00010c1fe740(*(undefined8 *)(param_1 + _DAT_112713acc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e134b4; end: 104e136cb; -[SCUnifiedProfileCreateCountdownCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e134b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112713aa4;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_104e1365c;
    }
    puVar2 = PTR_PTR_1126b0c48;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    if (uVar4 == 0) {
      _objc_retain(0);
      lVar3 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216540();
      _objc_release(lVar3);
      _objc_release(0);
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      _objc_retain(uVar5);
      lVar3 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216540();
      _objc_release(lVar3);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
    }
    _objc_retain(uVar5);
    lVar3 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0();
    _objc_release(lVar3);
    _objc_release(uVar5);
    if (param_3 == 0) {
      func_0x00010c16eb20(param_1);
    }
    else {
      func_0x00010c16eb20(param_1);
    }
    func_0x00010c1b2240(*(undefined8 *)(param_1 + _DAT_112713acc));
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar5);
    if (param_3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(param_3 + 0x28);
    }
    _objc_retain(lVar6);
    _objc_release(lVar6);
    if (lVar6 != 0) {
      func_0x00010bea6ee0(param_1);
    }
  }
  _objc_release(uVar4);
LAB_104e1365c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e136cc; end: 104e137a3; +[SCUnifiedProfileCreateCountdownCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_104e136cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b0c48;
  _objc_opt_class(PTR_PTR_1126b0c48);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b0c80;
  if (uVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    if (param_5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_5 + 0x30);
    }
    _objc_retain(uVar4);
    func_0x00010c23d700(param_1,param_2,puVar2);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 104e137a4; end: 104e13847; -[SCUnifiedProfileCreateCountdownCollectionViewCell _setSIGLeadingIcon:] */

void FUN_104e137a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x28);
  }
  _objc_retain(uVar1);
  func_0x00010be5bd40(param_1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e13848; end: 104e138e3; -[SCUnifiedProfileCreateCountdownCollectionViewCell _makeLeadingIcon:viewModel:] */

void FUN_104e13848(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if (param_3 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104e138e4;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104e138e4; end: 104e13b53;  */

void FUN_104e138e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 0x28);
  _objc_release();
  if (lVar1 != lVar13) goto LAB_104e13b10;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_104e13b4c;
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  while( true ) {
    _objc_retain(uVar12);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c1739e0(0,0,0x4040000000000000,0x4038000000000000);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010c219b60(puVar3,param_2,0);
    func_0x00010befbb60(puVar2,param_2,puVar3);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0(puVar5,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_78 = puVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf34860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0(puVar8,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    param_1 = *(long *)(param_1 + 0x20);
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar12);
LAB_104e13b10:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) break;
    ___stack_chk_fail();
LAB_104e13b4c:
    uVar12 = 0;
  }
  return;
}



/* Entry: 104e13b54; end: 104e13c07; -[SCUnifiedProfileCreateCountdownCollectionViewCell _handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e13b54(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b0c48;
  uVar4 = *(ulong *)(param_1 + _DAT_112713aa4);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112713aa8);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(uVar4 + 0x20);
    }
    _objc_retain(uVar5);
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e13c08; end: 104e13c17; -[SCUnifiedProfileCreateCountdownCollectionViewCell downloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e13c08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713ad0);
}



/* Entry: 104e13c18; end: 104e13c57; -[SCUnifiedProfileCreateCountdownCollectionViewCell setDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e13c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713ad0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e13c58; end: 104e13c97; -[SCUnifiedProfileCreateCountdownCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e13c58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713ad0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713acc,0);
  return;
}



/* Entry: 104e13c98; end: 104e13d27;  */

void FUN_104e13c98(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6798;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db6798,
                      &PTR____CFConstantStringClassReference_110db67b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104e13d28; end: 104e13e7b;  */

undefined1 *
FUN_104e13d28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126e45c8;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_5;
      *(undefined1 *)((long)plVar1 + 9) = param_6;
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 104e13e7c; end: 104e13e9f; -[SCCreateCountdownCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_104e13e7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e13ea0; end: 104e13f43; -[SCCreateCountdownCollectionViewCellViewModel hash] */

undefined8 * FUN_104e13ea0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104e14044:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104e14050;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar4 = *(long *)((long)puVar3 + 0x10);
      if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)((long)puVar3 + 0x18);
        if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)((long)puVar3 + 0x20);
          if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)((long)puVar3 + 0x28);
            if ((lVar4 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              puVar5 = *(undefined1 **)(param_3 + 0x30);
              if (puVar6 != puVar5) {
                _objc_retainBlock();
                func_0x00010c071ae0(puVar6);
                _objc_release(puVar5);
                goto LAB_104e14050;
              }
              goto LAB_104e14044;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104e14050:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104e13f44; end: 104e1406b; -[SCCreateCountdownCollectionViewCellViewModel isEqual:] */

long FUN_104e13f44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e14044:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e14050;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar4 = *(long *)(param_1 + 0x10);
      if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)(param_1 + 0x18);
        if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x20);
          if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x28);
            if ((lVar4 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x30);
              lVar3 = *(long *)(param_3 + 0x30);
              if (lVar4 != lVar3) {
                _objc_retainBlock();
                func_0x00010c071ae0(lVar4);
                _objc_release(lVar3);
                goto LAB_104e14050;
              }
              goto LAB_104e14044;
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_104e14050:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 104e1406c; end: 104e140bf; -[SCCreateCountdownCollectionViewCellViewModel .cxx_destruct] */

void FUN_104e1406c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e140c0; end: 104e1416f;  */

undefined1 * FUN_104e140c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126e45d0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 104e14170; end: 104e14193; -[SCCountdownsListCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_104e14170(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e14194; end: 104e14207; -[SCCountdownsListCollectionViewCellViewModel hash] */

undefined8 * FUN_104e14194(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar5 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar5,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_104e142a0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104e142ac;
    puVar6 = puVar5;
    _objc_opt_class(puVar5);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar3 & 1) != 0) {
      lVar4 = puVar5[1];
      if ((lVar4 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar6 = (undefined8 *)puVar5[2];
        puVar5 = (undefined8 *)param_3[2];
        if (puVar6 != puVar5) {
          _objc_retainBlock();
          func_0x00010c071ae0(puVar6);
          _objc_release(puVar5);
          goto LAB_104e142ac;
        }
        goto LAB_104e142a0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104e142ac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104e14208; end: 104e142c7; -[SCCountdownsListCollectionViewCellViewModel isEqual:] */

long FUN_104e14208(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e142a0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e142ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)(param_1 + 0x10);
        lVar3 = *(long *)(param_3 + 0x10);
        if (lVar4 != lVar3) {
          _objc_retainBlock();
          func_0x00010c071ae0(lVar4);
          _objc_release(lVar3);
          goto LAB_104e142ac;
        }
        goto LAB_104e142a0;
      }
    }
    lVar4 = 0;
  }
LAB_104e142ac:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 104e142c8; end: 104e142f7; -[SCCountdownsListCollectionViewCellViewModel .cxx_destruct] */

void FUN_104e142c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e142f8; end: 104e144a3;  */

undefined1 *
FUN_104e142f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126e45d8;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 104e144a4; end: 104e144c7; -[SCCountdownsProfileViewCellViewModel copyWithZone:] */

undefined8 FUN_104e144a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e144c8; end: 104e14583; -[SCCountdownsProfileViewCellViewModel hash] */

undefined8 * FUN_104e144c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  puVar5 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000100505190(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_104e146a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104e146b0;
    puVar6 = puVar5;
    _objc_opt_class(puVar5);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar3 & 1) != 0) && (puVar5[6] == param_3[6])) {
      lVar4 = puVar5[1];
      if ((lVar4 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar5[2];
        if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = puVar5[3];
          if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = puVar5[4];
            if ((lVar4 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = puVar5[5];
              if ((lVar4 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
                lVar4 = puVar5[7];
                if ((lVar4 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
                  puVar6 = (undefined8 *)puVar5[8];
                  puVar5 = (undefined8 *)param_3[8];
                  if (puVar6 != puVar5) {
                    _objc_retainBlock();
                    func_0x00010c071ae0(puVar6);
                    _objc_release(puVar5);
                    goto LAB_104e146b0;
                  }
                  goto LAB_104e146a4;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104e146b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104e14584; end: 104e146cb; -[SCCountdownsProfileViewCellViewModel isEqual:] */

long FUN_104e14584(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e146a4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e146b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar4 = *(long *)(param_1 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)(param_1 + 0x10);
        if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x18);
          if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x20);
            if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x28);
              if ((lVar4 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar4 != 0))
              {
                lVar4 = *(long *)(param_1 + 0x38);
                if ((lVar4 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar4 != 0)
                   ) {
                  lVar4 = *(long *)(param_1 + 0x40);
                  lVar3 = *(long *)(param_3 + 0x40);
                  if (lVar4 != lVar3) {
                    _objc_retainBlock();
                    func_0x00010c071ae0(lVar4);
                    _objc_release(lVar3);
                    goto LAB_104e146b0;
                  }
                  goto LAB_104e146a4;
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_104e146b0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 104e146cc; end: 104e14737; -[SCCountdownsProfileViewCellViewModel .cxx_destruct] */

void FUN_104e146cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e14738; end: 104e147c7; +[SCCountdownsParticipantInfo friendWithCurrentUser:profileUser:] */

void FUN_104e14738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0bd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e147c8; end: 104e1485f; +[SCCountdownsParticipantInfo groupWithCurrentUser:groupId:] */

void FUN_104e147c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0bd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e14860; end: 104e14883; -[SCCountdownsParticipantInfo copyWithZone:] */

undefined8 FUN_104e14860(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e14884; end: 104e14913; -[SCCountdownsParticipantInfo hash] */

void FUN_104e14884(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e45e0;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e14914; end: 104e14957; -[SCCountdownsParticipantInfo internalInit] */

void FUN_104e14914(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e45e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e14958; end: 104e14a3f; -[SCCountdownsParticipantInfo isEqual:] */

long FUN_104e14958(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e14a18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e14a24;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_104e14a24;
            }
            goto LAB_104e14a18;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104e14a24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104e14a40; end: 104e14acf; -[SCCountdownsParticipantInfo matchFriend:group:] */

void FUN_104e14a40(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_104e14ab4;
    lVar2 = 0x28;
    lVar3 = 0x20;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_104e14ab4;
    lVar2 = 0x18;
    lVar3 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + lVar2));
LAB_104e14ab4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e14ad0; end: 104e14b17; -[SCCountdownsParticipantInfo .cxx_destruct] */

void FUN_104e14ad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e14b18; end: 104e14bcf;  */

undefined1 * FUN_104e14b18(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126e45e8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 104e14bd0; end: 104e14bf3; -[SCCountdownsDetailsCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_104e14bd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e14bf4; end: 104e14c6b; -[SCCountdownsDetailsCollectionViewCellViewModel hash] */

undefined8 * FUN_104e14bf4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104e14cfc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104e14d08;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104e14d08;
        }
        goto LAB_104e14cfc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104e14d08:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104e14c6c; end: 104e14d23; -[SCCountdownsDetailsCollectionViewCellViewModel isEqual:] */

long FUN_104e14c6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e14cfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e14d08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104e14d08;
        }
        goto LAB_104e14cfc;
      }
    }
    lVar3 = 0;
  }
LAB_104e14d08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104e14d24; end: 104e14d53; -[SCCountdownsDetailsCollectionViewCellViewModel .cxx_destruct] */

void FUN_104e14d24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e14d54; end: 104e15053; -[SCCTPCustomStickerMessagePresendUploadPlugin uploadMediaReference:] */

void FUN_104e14d54(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126b0cb0;
    _objc_alloc(PTR_PTR_1126b0cb0);
    func_0x00010c0559c0();
    lVar3 = param_3;
    func_0x000107d6b14c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar10 & 1) == 0) {
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_104e15054;
      uStack_88 = 0x104e15064;
      uStack_80 = 0;
      _objc_initWeak(auStack_b0,param_1);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e05c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_104e1506c;
      puStack_c0 = &UNK_110851af0;
      _objc_retain(lVar4);
      uVar7 = uVar6;
      lStack_b8 = lVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = puVar10;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_104e15174;
      puStack_f8 = &UNK_110851b20;
      _objc_copyWeak(auStack_e0,auStack_b0);
      _objc_retain(puVar1);
      puStack_e8 = &uStack_a8;
      puStack_f0 = puVar1;
      _objc_copyWeak(auStack_118,auStack_b0);
      _objc_retain(puVar1);
      uVar8 = uVar7;
      func_0x00010c25ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puStack_a0[5];
      puStack_a0[5] = uVar8;
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      puVar10 = puVar1;
      func_0x00010bfbc3e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_118);
      _objc_release(puStack_f0);
      _objc_destroyWeak(auStack_e0);
      _objc_release(lStack_b8);
      _objc_destroyWeak(auStack_b0);
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(uStack_80);
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 104e15054; end: 104e1506b;  */

void FUN_104e15054(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


