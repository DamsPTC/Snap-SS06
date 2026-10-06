/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a0de50; end: 106a0de57; -[SCMemoriesFavoriteSnapsStoryScope dataCoordinator] */

undefined8 FUN_106a0de50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a0de58; end: 106a0de8f; -[SCMemoriesFavoriteSnapsStoryScope .cxx_destruct] */

void FUN_106a0de58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a0de90; end: 106a0df8b; -[SCMemoriesFavoriteSnapsStoryViewController initWithFavoriteSnapsStoryScopeDelegate:streamingContentPrefetcher:dataCoordinator:operaPresenter:snapThumbnailGenerator:applicationLifecycleEvents:memoriesSelectionFooterBarControllerFactory:currentPageTracker:memoriesExperimentService:memoriesMonetizationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106a0de90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f4388;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithWithSubscreenViewControl_11252d020,2,param_4,param_5,
                      param_6,param_7,param_8,param_9,param_11,param_12);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112755dbc,param_3);
    lVar3 = (long)_DAT_112755dc0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a0df8c; end: 106a0dfbf; -[SCMemoriesFavoriteSnapsStoryViewController _willDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0df8c(long param_1)

{
  param_1 = param_1 + _DAT_112755dbc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa1160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a0dfc0; end: 106a0dfc3; -[SCMemoriesFavoriteSnapsStoryViewController _didEndDismissing:] */

void FUN_106a0dfc0(void)

{
  return;
}



/* Entry: 106a0dfc4; end: 106a0e023; -[SCMemoriesFavoriteSnapsStoryViewController _didCreateStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0dfc4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = (long)_DAT_112755dbc;
    _objc_retain(param_3);
    param_1 = param_1 + lVar1;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa1140();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a0e024; end: 106a0e027; -[SCMemoriesFavoriteSnapsStoryViewController _title] */

void FUN_106a0e024(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef9d58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ef9d58,
                      &PTR____CFConstantStringClassReference_110ef91d8,0);
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



/* Entry: 106a0e028; end: 106a0e37f; -[SCMemoriesFavoriteSnapsStoryViewController _setUpEmptyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0e028(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_112755dc4;
  if (*(long *)(param_1 + lVar21) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    lVar18 = param_1;
    func_0x00010c25fc80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c013de0();
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    *(undefined **)(param_1 + lVar21) = puVar1;
    _objc_release(uVar19);
    _objc_release(lVar18);
    lVar20 = (long)_DAT_112755dc8;
    lVar18 = *(long *)(param_1 + lVar20);
    if (lVar18 == 0) {
      puVar1 = PTR_PTR_1126c3a20;
      _objc_alloc();
      func_0x00010c062200();
      uVar19 = *(undefined8 *)(param_1 + lVar20);
      *(undefined **)(param_1 + lVar20) = puVar1;
      _objc_release(uVar19);
      lVar18 = *(long *)(param_1 + lVar20);
    }
    func_0x00010bef76e0(param_1,param_2,lVar18,*(undefined8 *)(param_1 + lVar21));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar19;
    func_0x00010bf493a0(uVar19,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar20);
    uStack_88 = uVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar20);
    uStack_80 = uVar8;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0(uVar10,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar20);
    uStack_78 = uVar12;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf1ff80(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493a0(uVar14,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar17);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar19);
    _objc_release(uVar2);
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = (long)_DAT_112755dc4;
  if (*(long *)(param_1 + lVar21) != 0) {
    lVar18 = (long)_DAT_112755dc8;
    func_0x00010c12b760();
    uVar19 = *(undefined8 *)(param_1 + lVar18);
    *(undefined8 *)(param_1 + lVar18) = 0;
    _objc_release(uVar19);
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar21));
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    *(undefined8 *)(param_1 + lVar21) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar19);
    return;
  }
  return;
}



/* Entry: 106a0e380; end: 106a0e3ef; -[SCMemoriesFavoriteSnapsStoryViewController _cleanUpEmptyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0e380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112755dc4;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar3 = (long)_DAT_112755dc8;
    func_0x00010c12b760(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a0e3f0; end: 106a0e433; -[SCMemoriesFavoriteSnapsStoryViewController _sectionControllerConfiguration] */

void FUN_106a0e3f0(void)

{
  _objc_alloc(PTR_PTR_1126c3b88);
  func_0x00010bfff420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a0e434; end: 106a0e56f; -[SCMemoriesFavoriteSnapsStoryViewController memoriesCollectionViewSelectionHelperDidTapOverSelectionLimit:] */

void FUN_106a0e434(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000108dfd59c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 106a0e570; end: 106a0e57f;  */

void FUN_106a0e570(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106a0e580; end: 106a0e5d7; -[SCMemoriesFavoriteSnapsStoryViewController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0e580(long param_1,undefined8 param_2,int param_3)

{
  FUN_106d0a3a4();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea9330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpEmptyView_112587e70);
    return;
  }
  if (*(long *)(param_1 + _DAT_112755dc4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bddf110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpEmptyView_1125555e0);
    return;
  }
  return;
}



/* Entry: 106a0e5d8; end: 106a0e5df; -[SCMemoriesFavoriteSnapsStoryViewController pageViewName] */

undefined8 FUN_106a0e5d8(void)

{
  return 0x75;
}



/* Entry: 106a0e5e0; end: 106a0e63b; -[SCMemoriesFavoriteSnapsStoryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0e5e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755dc0,0);
  _objc_storeStrong(param_1 + _DAT_112755dc4,0);
  _objc_storeStrong(param_1 + _DAT_112755dc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112755dbc);
  return;
}



/* Entry: 106a0e63c; end: 106a0e7b7; -[SCMemoriesFavoriteSnapsStoryDataCoordinatorListenerAnnouncer description] */

void FUN_106a0e63c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_106a0e7b8(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a0e7b8; end: 106a0e817;  */

void FUN_106a0e7b8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 106a0e818; end: 106a0eac3; -[SCMemoriesFavoriteSnapsStoryDataCoordinatorListenerAnnouncer addListener:] */

undefined8 FUN_106a0e818(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110953448;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_106a0eac4(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_106a0ec04(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_106a0e9cc:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_106a0e9ec;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106a0eac4(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106a0eac4(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_106a0ec04(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_106a0e9cc;
    }
  }
  uVar9 = 1;
LAB_106a0e9ec:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 106a0eac4; end: 106a0ec03;  */

void FUN_106a0eac4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_106a0efd8();
LAB_106a0ec00:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_106a0ec00;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 106a0ec04; end: 106a0ec4b;  */

void FUN_106a0ec04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 106a0ec4c; end: 106a0ee7b; -[SCMemoriesFavoriteSnapsStoryDataCoordinatorListenerAnnouncer removeListener:] */

void FUN_106a0ec4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_106a0ee00;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106a0ecb4;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106a0ec04(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106a0ee00;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_106a0ecb4:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110953448;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_106a0eac4(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_106a0ec04(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_106a0ee00;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_106a0ee00:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a0ee7c; end: 106a0ef8f; -[SCMemoriesFavoriteSnapsStoryDataCoordinatorListenerAnnouncer memoriesFavoriteSnapsStoryDataCoordinator:didUpdateDataModels:isLoadingInitialDataModel:] */

void FUN_106a0ee7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106a0e7b8(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0c8980();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a0ef90; end: 106a0efb7; -[SCMemoriesFavoriteSnapsStoryDataCoordinatorListenerAnnouncer .cxx_destruct] */

void FUN_106a0ef90(long param_1)

{
  FUN_106a0efec(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106a0efb8; end: 106a0efd7; -[SCMemoriesFavoriteSnapsStoryDataCoordinatorListenerAnnouncer .cxx_construct] */

void FUN_106a0efb8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 106a0efd8; end: 106a0efeb;  */

undefined * FUN_106a0efd8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 106a0efec; end: 106a0f043;  */

long FUN_106a0efec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106a0f044; end: 106a0f053;  */

void FUN_106a0f044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110953448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106a0f054; end: 106a0f073;  */

void FUN_106a0f054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110953448;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106a0f074; end: 106a0f0db;  */

void FUN_106a0f074(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 106a0f0dc; end: 106a0f0df;  */

void FUN_106a0f0dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106a0f0e0; end: 106a0f27f; -[SCMemoriesStoryEditorDataProvider initWithPerformer:entry:storyEditorType:memoriesHighlightContentDataSource:memoriesFeaturedStoryDataMutator:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:memoriesSnapThumbnailGeneratorBuilder:memoriesExperimentService:memoriesMonetizationServices:] */

undefined8 *
FUN_106a0f0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f4390;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126cfc00;
    _objc_alloc();
    func_0x00010c0633a0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a0f280; end: 106a0f30f; -[SCMemoriesStoryEditorDataProvider createEntryThumbnailGeneratorWithEntry:generationContext:] */

void FUN_106a0f280(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_106e3f2ac(9);
    func_0x00010bf23120(uVar2,param_2,param_3,0,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a0f310; end: 106a0f317; -[SCMemoriesStoryEditorDataProvider dataSource] */

undefined8 FUN_106a0f310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a0f318; end: 106a0f31f; -[SCMemoriesStoryEditorDataProvider snapThumbnailGenerator] */

undefined8 FUN_106a0f318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a0f320; end: 106a0f367; -[SCMemoriesStoryEditorDataProvider .cxx_destruct] */

void FUN_106a0f320(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a0f368; end: 106a0f587; -[SCMemoriesStoryEditorDataSource initWithWithPerformer:originalEntry:storyEditorType:memoriesHighlightContentDataSource:memoriesFeaturedStoryDataMutator:memoriesMergedDataSource:memoriesExperimentService:memoriesMonetizationServices:] */

undefined1 *
FUN_106a0f368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f4398;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cfc08;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x90) = param_5;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    if (*(ulong *)((long)puVar1 + 0x90) < 3) {
      *(char *)((long)puVar1 + 0x71) =
           (char)(0x10100 >> (ulong)((uint)(*(ulong *)((long)puVar1 + 0x90) << 3) & 0x18));
    }
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a0f588; end: 106a0f5b7;  */

void FUN_106a0f588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c234580(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 106a0f5b8; end: 106a0f63f; -[SCMemoriesStoryEditorDataSource dealloc] */

void FUN_106a0f5b8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f4398;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a0f640; end: 106a0f6e7; -[SCMemoriesStoryEditorDataSource markNewStoryFromSeletingSnapsSaved] */

void FUN_106a0f640(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a0f6e8; end: 106a0f70b;  */

void FUN_106a0f6e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106a0f70c; end: 106a0f7b3; -[SCMemoriesStoryEditorDataSource resetUpdateStates] */

void FUN_106a0f70c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a0f7b4; end: 106a0f84f;  */

void FUN_106a0f7b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x70) = 0x100;
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000106a1bfd8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a0f850; end: 106a0f8a7; -[SCMemoriesStoryEditorDataSource cleanUp] */

void FUN_106a0f850(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a0f8a8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 106a0f8a8; end: 106a0f8cf;  */

void FUN_106a0f8a8(long param_1)

{
  func_0x00010bed1ae0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bed1b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__unobserveOriginalEntry_112592070);
  return;
}



/* Entry: 106a0f8d0; end: 106a0f8f7; -[SCMemoriesStoryEditorDataSource addListener:] */

void FUN_106a0f8d0(long param_1)

{
  func_0x00010bef9980(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bde9b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__copyOriginalEntryAndObserveBoth_112558078);
  return;
}



/* Entry: 106a0f8f8; end: 106a0f8ff; -[SCMemoriesStoryEditorDataSource removeListener:] */

void FUN_106a0f8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106a0f900; end: 106a0f947; -[SCMemoriesStoryEditorDataSource isFailedEntry] */

undefined8 FUN_106a0f900(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0742e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106a0f948; end: 106a0f9ff; -[SCMemoriesStoryEditorDataSource headerViewModel] */

void FUN_106a0f948(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x000107e75140(uVar4);
  }
  else {
    uVar4 = 0;
  }
  puVar1 = PTR_PTR_1126cfc10;
  _objc_alloc(PTR_PTR_1126cfc10);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010b5f6c38(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be43760(param_1);
  func_0x00010c0536a0(puVar1,param_2,uVar2,uVar3,uVar4,param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a0fa00; end: 106a0faa7; -[SCMemoriesStoryEditorDataSource _copyOriginalEntryAndObserveBothEntries] */

void FUN_106a0fa00(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a0faa8; end: 106a0fbef;  */

void FUN_106a0faa8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be443a0();
    if ((int)lVar2 == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x50);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ed4e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_48,param_1 + 0x20);
      func_0x00010bf59660(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_48);
    }
    else {
      FUN_106a1be5c();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar1 + 0x78);
      *(long *)(lVar1 + 0x78) = lVar2;
      _objc_release(uVar4);
      func_0x00010bee39e0(lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106a0fbf0; end: 106a0fce7;  */

void FUN_106a0fbf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000106a1bfd8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf00d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed7920(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a0fce8; end: 106a0fd7f; -[SCMemoriesStoryEditorDataSource _updateEntryWithTempEntry:snaps:updateType:] */

void FUN_106a0fce8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (lVar2 = param_4, func_0x00010bf529e0(), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = param_3;
    _objc_release(uVar1);
    func_0x00010be667c0(param_1);
    func_0x00010be660e0(param_1);
    lVar2 = param_4;
  }
  func_0x00010bee39e0(param_1,param_2,lVar2,param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a0fd80; end: 106a0fdc7; -[SCMemoriesStoryEditorDataSource _isSavingFeaturedStory] */

undefined8 FUN_106a0fd80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d260();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106a0fdc8; end: 106a0fe03; -[SCMemoriesStoryEditorDataSource _unobserveOriginalEntry] */

void FUN_106a0fdc8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c281a60();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a0fe04; end: 106a0ff1f; -[SCMemoriesStoryEditorDataSource _observeOriginalEntry] */

void FUN_106a0fe04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bed1b20();
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar1;
  func_0x00010c0e0800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106a0ff20; end: 106a0ff77;  */

void FUN_106a0ff20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a0ff78; end: 106a0ffb3; -[SCMemoriesStoryEditorDataSource _unobserveEntry] */

void FUN_106a0ff78(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c281a60();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a0ffb4; end: 106a100cf; -[SCMemoriesStoryEditorDataSource _observeEntry] */

void FUN_106a0ffb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bed1ae0();
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar1;
  func_0x00010c0e0800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106a100d0; end: 106a10247;  */

void FUN_106a100d0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010c0c9da0(*(undefined8 *)(param_1 + 8));
    }
    else {
      func_0x00010bf4b900(param_3);
      func_0x00010bf4b900();
      func_0x00010bf4b900();
      lVar1 = param_2;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000106a1bfd8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar1 == 0 && *(long *)(param_1 + 0x20) == 0) {
        bVar5 = 0;
      }
      else {
        lVar2 = lVar1;
        func_0x00010c0720c0();
        bVar5 = (byte)lVar2 ^ 1;
      }
      bVar4 = 0;
      if (lVar3 != 0 || *(long *)(param_1 + 0x28) != 0) {
        lVar2 = lVar3;
        func_0x00010c071b60();
        bVar4 = (byte)lVar2 ^ 1;
      }
      *(byte *)(param_1 + 0x70) = (bVar5 | bVar4) & 1;
      func_0x00010bed7860(param_1);
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a10248; end: 106a103bf; -[SCMemoriesStoryEditorDataSource _updateEntry:updateType:] */

void FUN_106a10248(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010bed1ae0(param_1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = param_3;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x78);
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bee39e0(param_1);
    }
    else {
      func_0x00010be660e0(param_1);
      _objc_initWeak(auStack_48,param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,auStack_48);
      lStack_50 = param_4;
      func_0x00010bfa7360(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a103c0; end: 106a1041b;  */

void FUN_106a103c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee39e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a1041c; end: 106a10b1b; -[SCMemoriesStoryEditorDataSource _updateViewModelWithSnaps:updateType:] */

void FUN_106a1041c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  long lStack_250;
  undefined **ppuStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar17 = param_3;
  func_0x00010b5f8ce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_250 = lVar17;
  func_0x00010bf52a60();
  if (lStack_250 != 0) {
    lVar15 = *plStack_1c0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_1c0 != lVar15) {
          _objc_enumerationMutation(lVar17);
        }
        uVar20 = *(ulong *)(lStack_1c8 + lVar16 * 8);
        uVar2 = uVar20;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010b5fa088();
        if (uVar3 < 0xd && (1L << (uVar3 & 0x3f) & 0x1566U) != 0) {
          func_0x00010c124d20(uVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(uVar20);
          ppuStack_248 = (undefined **)PTR_PTR_1126b6600;
          func_0x00010bfb6060();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuStack_248 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        uVar4 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c2572e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c07e5c0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((int)uVar13 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(uVar5);
        }
        puVar6 = *(undefined **)(param_1 + 0x68);
        func_0x00010c2572e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c11eb40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar9 = PTR_PTR_1126cfb58;
          func_0x00010c27f660();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(puVar8);
          puVar9 = puVar8;
        }
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar8 = PTR_PTR_1126cfb60;
        _objc_alloc(PTR_PTR_1126cfb60);
        uVar20 = uVar2;
        func_0x00010c241220(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126af4c0;
        uVar18 = *(ulong *)(param_1 + 0x78);
        _objc_retain(uVar18);
        _objc_opt_class(puVar7);
        uVar10 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar7);
        uVar3 = uVar18;
        if ((uVar10 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar18);
        func_0x00010b5fc690(uVar2);
        func_0x00010c00c720(puVar8);
        _objc_release(uVar3);
        _objc_release(uVar20);
        func_0x00010befa120(puVar1);
        _objc_release(puVar8);
        _objc_release(puVar9);
        _objc_release(ppuStack_248);
        _objc_release(uVar2);
        lVar16 = lVar16 + 1;
      } while (lStack_250 != lVar16);
      lStack_250 = lVar17;
      func_0x00010bf52a60();
    } while (lStack_250 != 0);
  }
  _objc_release(lVar17);
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar8 = puVar1;
  func_0x00010bf529e0();
  puVar6 = puVar7;
  if (puVar8 != (undefined *)0x0) {
    lVar15 = *(long *)(param_1 + 0x78);
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar15;
    func_0x00010bf529e0();
    _objc_release(lVar15);
    if (lVar17 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c245800(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      FUN_106e39170(puVar1,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar5);
    }
  }
  puVar7 = PTR_PTR_1126cfc18;
  _objc_alloc(PTR_PTR_1126cfc18);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar9;
  func_0x00010c2bb380(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6460(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar19);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126cfc20;
  _objc_alloc();
  func_0x00010bff23e0();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar9);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  _objc_retain(puVar11);
  puVar9 = puVar11;
  func_0x00010bf52a60();
  if (puVar9 != (undefined *)0x0) {
    lVar17 = *plStack_200;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_200 != lVar17) {
          _objc_enumerationMutation(puVar11);
        }
        puVar12 = PTR_PTR_1126cfc28;
        func_0x00010c23f7a0(PTR_PTR_1126cfc28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar12);
        puVar19 = puVar19 + 1;
      } while (puVar9 != puVar19);
      puVar9 = puVar11;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar11);
  puVar9 = PTR_PTR_1126cfc30;
  _objc_alloc();
  uVar13 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010c052dc0();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar9;
  _objc_release(uVar4);
  _objc_release(uVar13);
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  dVar21 = 1.60807493534087e-314;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_106a10b88;
  puStack_228 = &UNK_110848c48;
  ppuVar14 = &puStack_240;
  lStack_220 = param_1;
  uStack_218 = param_4;
  func_0x000100162d98("APPSTORE",ppuVar14);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(uVar5);
  func_0x00010bf885a0(ppuVar14);
  dVar22 = dVar21;
  func_0x00010bf8b160(uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar21 + (double)SUB84(dVar22,0),puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 106a10b1c; end: 106a10b87;  */

void FUN_106a10b1c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010bf885a0(param_3);
  dVar2 = param_1;
  func_0x00010bf8b160(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + (double)SUB84(dVar2,0),puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 106a10b88; end: 106a10b97;  */

void FUN_106a10b88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c0c9d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 8),PTR_s_memoriesStoryEditorDataSource_di_112610178,lVar1,
             *(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a10b98; end: 106a10ba7; -[SCMemoriesStoryEditorDataSource _isStoriesTabEmptyStateFlow] */

bool FUN_106a10b98(long param_1)

{
  return *(long *)(param_1 + 0x80) == 0;
}



/* Entry: 106a10ba8; end: 106a10bab; -[SCMemoriesStoryEditorDataSource isSavingFeaturedStory:] */

void FUN_106a10ba8(void)

{
  return;
}



/* Entry: 106a10bac; end: 106a10cb3; -[SCMemoriesStoryEditorDataSource didSaveFeaturedStory:savedStory:] */

void FUN_106a10bac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) &&
     (lVar1 = param_3, func_0x00010c080ca0(), (int)lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x31) = 1;
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a10cb4; end: 106a10d03;  */

void FUN_106a10cb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = uVar3;
    _objc_release(uVar2);
    func_0x00010be667c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a10d04; end: 106a10ddb; -[SCMemoriesStoryEditorDataSource didUpdateTitleForPlaceholderEntry:] */

void FUN_106a10d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a10ddc; end: 106a10e1b;  */

void FUN_106a10ddc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bed7860(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a10e1c; end: 106a10f07; -[SCMemoriesStoryEditorDataSource didCreateStoryForPlaceholderEntry:newEntry:] */

void FUN_106a10e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a10f08; end: 106a10fbf;  */

void FUN_106a10f08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined2 *)(lVar1 + 0x70) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000106a1bfd8();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010bed7860(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a10fc0; end: 106a10fc7; -[SCMemoriesStoryEditorDataSource entry] */

undefined8 FUN_106a10fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106a10fc8; end: 106a10fcf; -[SCMemoriesStoryEditorDataSource originalEntry] */

undefined8 FUN_106a10fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106a10fd0; end: 106a10fd7; -[SCMemoriesStoryEditorDataSource viewModel] */

undefined8 FUN_106a10fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106a10fd8; end: 106a10fdf; -[SCMemoriesStoryEditorDataSource hasUnsavedEdits] */

undefined1 FUN_106a10fd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 106a10fe0; end: 106a10fe7; -[SCMemoriesStoryEditorDataSource isNewStoryFromSeletingSnapsSaved] */

undefined1 FUN_106a10fe0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 106a10fe8; end: 106a10fef; -[SCMemoriesStoryEditorDataSource storyEditorType] */

undefined8 FUN_106a10fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106a10ff0; end: 106a110bb; -[SCMemoriesStoryEditorDataSource .cxx_destruct] */

void FUN_106a10ff0(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106a110bc; end: 106a11173; -[SCMemoriesStoryEditorLogger initWithLogger:performer:] */

undefined1 *
FUN_106a110bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f43a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)((long)puVar1 + 0x10);
    _objc_storeWeak(puVar3,param_4);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a11174; end: 106a112ff; -[SCMemoriesStoryEditorLogger logBlizzardStoryOperationEventForEntryId:count:operationType:] */

void FUN_106a11174(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106a11238;
    puStack_68 = &UNK_110844fe0;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    uStack_50 = param_5;
    uStack_48 = param_4;
    func_0x00010c0f7fc0(lVar1,param_2,&puStack_80);
    _objc_release(lVar1);
    _objc_release(lStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a11300; end: 106a11337; -[SCMemoriesStoryEditorLogger .cxx_destruct] */

void FUN_106a11300(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a11338; end: 106a11467; -[SCMemoriesDummySnapCellViewModel initWithAddSnapsViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106a11338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = PTR_PTR_1126af4c0;
  _objc_opt_new(PTR_PTR_1126af4c0);
  puVar3 = PTR_PTR_1126af4d0;
  _objc_opt_new(PTR_PTR_1126af4d0);
  puVar4 = PTR_PTR_1126cfb58;
  func_0x00010c27f660();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f43a8;
  puVar5 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithDiffId_snaps_entry_prima_1125e0b98,
                      &PTR____CFConstantStringClassReference_110e677d8,puVar1,puVar2,puVar3,1,0,
                      &PTR____CFConstantStringClassReference_110daafd8,0x100);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar5 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_112755e40;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar7);
    *(undefined8 *)((long)puVar5 + lVar7) = param_3;
    _objc_release(uVar6);
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 106a11468; end: 106a11477; -[SCMemoriesDummySnapCellViewModel addSnapsCellViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a11468(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755e40);
}



/* Entry: 106a11478; end: 106a1148b; -[SCMemoriesDummySnapCellViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a11478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755e40,0);
  return;
}



/* Entry: 106a1148c; end: 106a11b33; -[SCMemoriesStoryEditorAddSnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106a1148c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_1126f43b0;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar28 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar28,uVar29,uVar30,uVar31);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(puVar2);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_a8 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    puStack_a0 = puVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar16 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar28,uVar29,uVar30,uVar31);
    lVar27 = (long)_DAT_112755e48;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar27);
    *(undefined **)((long)puVar1 + lVar27) = puVar16;
    _objc_release(uVar24);
    func_0x000108dfd614();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar27));
    _objc_release(uVar24);
    puVar16 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar27));
    _objc_release(puVar16);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010c167520(*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010befbb60(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar27));
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar24;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c08de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c2793a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar10);
    _objc_release(uVar21);
    _objc_release(puVar7);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(puVar6);
    _objc_release(uVar18);
    _objc_release(uVar24);
    _objc_release(puVar4);
    _objc_release(uVar17);
    puVar16 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar28,uVar29,uVar30,uVar31);
    lVar25 = (long)_DAT_112755e4c;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar16;
    _objc_release(uVar24);
    func_0x00010befbb60(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar25));
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar21;
    uVar28 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar24;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar3;
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar3);
    _objc_release(uVar24);
    _objc_release(puVar4);
    _objc_release(uVar28);
    _objc_release(uVar21);
    _objc_release(puVar6);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar25 = (long)_DAT_112755e50;
  uVar22 = *(ulong *)(puVar2 + lVar25);
  func_0x00010c071ae0();
  if ((uVar22 & 1) == 0) {
    _objc_retain(param_3);
    uVar24 = *(undefined8 *)(puVar2 + lVar25);
    *(undefined8 **)(puVar2 + lVar25) = param_3;
    _objc_release(uVar24);
    puVar16 = PTR_PTR_1126cfc18;
    uVar26 = *(ulong *)(puVar2 + lVar25);
    _objc_retain(uVar26);
    _objc_opt_class(puVar16);
    uVar23 = uVar26;
    _objc_opt_isKindOfClass(uVar26,puVar16);
    uVar22 = uVar26;
    if ((uVar23 & 1) == 0) {
      uVar22 = 0;
    }
    _objc_retain(uVar22);
    _objc_release(uVar26);
    if (uVar22 != 0) {
      uVar23 = uVar26;
      func_0x00010bf13d40(uVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar2;
      func_0x00010bf4dce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(puVar16);
      _objc_release(uVar23);
      uVar23 = uVar26;
      func_0x00010c271240(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(puVar2 + _DAT_112755e48));
      _objc_release(uVar23);
      func_0x00010bfe5680(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(puVar2 + _DAT_112755e4c));
      _objc_release(uVar26);
    }
    _objc_release(uVar22);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 106a11b34; end: 106a11c87; -[SCMemoriesStoryEditorAddSnapCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a11b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112755e50;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cfc18;
    uVar6 = *(ulong *)(param_1 + lVar5);
    _objc_retain(uVar6);
    _objc_opt_class(puVar3);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar1 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    if (uVar1 != 0) {
      uVar4 = uVar6;
      func_0x00010bf13d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(lVar5);
      _objc_release(uVar4);
      uVar4 = uVar6;
      func_0x00010c271240(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112755e48));
      _objc_release(uVar4);
      func_0x00010bfe5680(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112755e4c));
      _objc_release(uVar6);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a11c88; end: 106a11c8b; -[SCMemoriesStoryEditorAddSnapCell setSelected:selectOverlayImage:snapIds:] */

void FUN_106a11c88(void)

{
  return;
}



/* Entry: 106a11c8c; end: 106a11c8f; -[SCMemoriesStoryEditorAddSnapCell setSelectMode:] */

void FUN_106a11c8c(void)

{
  return;
}



/* Entry: 106a11c90; end: 106a11c93; -[SCMemoriesStoryEditorAddSnapCell setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_106a11c90(void)

{
  return;
}



/* Entry: 106a11c94; end: 106a11d53; -[SCMemoriesStoryEditorAddSnapCell animateLongTapForTouchLocation:reverse:] */

void FUN_106a11c94(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bf03400(0x3fc999999999999a,puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a11d54; end: 106a11dff;  */

void FUN_106a11d54(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else {
      _CGAffineTransformMakeScale(&uStack_50,0x3fee147ae147ae14,0x3fee147ae147ae14);
    }
    lVar2 = lVar1;
    func_0x00010bf4dce0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106a11e00; end: 106a11e07; -[SCMemoriesStoryEditorAddSnapCell interactionMode] */

undefined8 FUN_106a11e00(void)

{
  return 1;
}



/* Entry: 106a11e08; end: 106a11e17; -[SCMemoriesStoryEditorAddSnapCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106a11e08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112755e44);
}



/* Entry: 106a11e18; end: 106a11e27; -[SCMemoriesStoryEditorAddSnapCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a11e18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112755e44) = param_3;
  return;
}



/* Entry: 106a11e28; end: 106a11e37; -[SCMemoriesStoryEditorAddSnapCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a11e28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755e50);
}



/* Entry: 106a11e38; end: 106a11e87; -[SCMemoriesStoryEditorAddSnapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a11e38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755e50,0);
  _objc_storeStrong(param_1 + _DAT_112755e4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755e48,0);
  return;
}



/* Entry: 106a11e88; end: 106a11ffb; -[SCMemoriesStoryEditorHeaderTextField intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_106a11e88(undefined *param_1)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 **ppuStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 ***pppuStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 **ppuStack_248;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  undefined8 **ppuStack_230;
  undefined8 ***pppuStack_228;
  undefined8 **ppuStack_220;
  undefined8 ***pppuStack_218;
  undefined8 **ppuStack_210;
  undefined8 ***pppuStack_208;
  undefined8 **ppuStack_200;
  undefined8 ***pppuStack_1f8;
  undefined *puStack_1f0;
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
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  long lStack_110;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puStack_60 = PTR_PTR_1126f43b8;
    puStack_68 = param_1;
    _objc_msgSendSuper2(&puStack_68,PTR_s_intrinsicContentSize_1125f8080);
  }
  else {
    puVar1 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d660();
    _objc_release(puVar1);
    func_0x00010c140de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar2;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_106a11ffc;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1f0 = PTR_PTR_1126f43c0;
  ppppuVar4 = &pppuStack_1f8;
  pppuStack_1f8 = ppppuVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppppuVar4,PTR_s_initWithFrame__1125e2948);
  pppuVar5 = (undefined8 ***)0x0;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    func_0x00010c20eaa0(ppppuVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar4;
    func_0x00010bf4dce0(ppppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(ppppuVar2);
    _objc_release(puVar1);
    pppuVar5 = (undefined8 ***)PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar24 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    ppppuVar2 = ppppuVar4;
    func_0x00010c27f7a0(ppppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppppuVar2);
    func_0x00010c219b60(pppuVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppuVar5);
    _objc_release(puVar1);
    puStack_238 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    pppuVar6 = pppuVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar4;
    ppuStack_210 = pppuVar6;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_208 = ppppuVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_218 = ppppuVar2;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar5;
    ppuStack_220 = pppuVar6;
    ppuStack_130 = pppuVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar4;
    ppuStack_230 = pppuVar7;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_228 = ppppuVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_240 = ppppuVar2;
    func_0x00010bf493c0(0xc032000000000000);
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    ppuStack_248 = pppuVar7;
    ppuStack_200 = pppuVar5;
    ppuStack_128 = pppuVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar4;
    func_0x00010c27f7a0(ppppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = ppppuVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar6;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = pppuVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = ppppuVar4;
    func_0x00010c27f7a0(ppppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar10 = ppppuVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar11 = pppuVar5;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_118 = pppuVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_238);
    _objc_release(puVar1);
    _objc_release(pppuVar11);
    _objc_release(ppppuVar10);
    _objc_release(ppppuVar9);
    _objc_release(pppuVar5);
    _objc_release(pppuVar7);
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar2);
    _objc_release(pppuVar6);
    _objc_release(ppuStack_248);
    _objc_release(pppuStack_240);
    _objc_release(pppuStack_228);
    _objc_release(ppuStack_230);
    _objc_release(ppuStack_220);
    _objc_release(pppuStack_218);
    _objc_release(pppuStack_208);
    _objc_release(ppuStack_210);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x404e000000000000,0x404e000000000000);
    lVar22 = (long)_DAT_112755e58;
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    *(undefined **)((long)ppppuVar4 + lVar22) = puVar1;
    _objc_release(uVar21);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)ppppuVar4 + lVar22));
    _objc_release(puVar1);
    func_0x00010c182220(*(undefined8 *)((long)ppppuVar4 + lVar22));
    func_0x00010c17d4c0(*(undefined8 *)((long)ppppuVar4 + lVar22));
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c08c0e0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x403e000000000000);
    _objc_release(uVar21);
    pppuVar5 = (undefined8 ***)ppuStack_200;
    func_0x00010befbb60(ppuStack_200);
    func_0x00010c219b60(*(undefined8 *)((long)ppppuVar4 + lVar22));
    ppuStack_220 = (undefined8 **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    pppuStack_208 = (undefined8 ***)uVar21;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_210 = pppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar21;
    uVar12 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    pppuStack_218 = (undefined8 ***)uVar21;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar21;
    uVar13 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar13;
    func_0x00010bf49420(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar20;
    uVar14 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar14;
    func_0x00010bf49420(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_138 = uVar19;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_220);
    _objc_release(puVar1);
    _objc_release(uVar19);
    _objc_release(uVar14);
    _objc_release(uVar20);
    _objc_release(uVar13);
    _objc_release(uVar21);
    _objc_release(pppuVar5);
    _objc_release(uVar12);
    _objc_release(pppuStack_218);
    _objc_release(ppuStack_210);
    _objc_release(pppuStack_208);
    puVar15 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    pppuVar5 = (undefined8 ***)ppuStack_200;
    func_0x00010befbb60(ppuStack_200);
    func_0x00010c219b60(puVar15);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar16 = puVar15;
    pppuStack_208 = (undefined8 ***)puVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_158 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(pppuVar5);
    _objc_release(puVar15);
    _objc_release(puVar3);
    _objc_release(uVar21);
    _objc_release(puVar16);
    puVar1 = PTR_PTR_1126cfc40;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    lVar23 = (long)_DAT_112755e5c;
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar23);
    *(undefined **)((long)ppppuVar4 + lVar23) = puVar1;
    _objc_release(uVar21);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)ppppuVar4 + lVar23));
    _objc_release(puVar1);
    func_0x00010c1edbe0(*(undefined8 *)((long)ppppuVar4 + lVar23));
    func_0x00010c16d0a0(*(undefined8 *)((long)ppppuVar4 + lVar23));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)ppppuVar4 + lVar23));
    _objc_release(puVar1);
    puVar16 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar17 = puVar16;
    func_0x000107e90aa4();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ed60(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_170 = puVar1;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_168 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    func_0x00010c16b680(*(undefined8 *)((long)ppppuVar4 + lVar23));
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar17);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    func_0x00010c1ee2a0(*(undefined8 *)((long)ppppuVar4 + lVar23));
    _objc_release(puVar1);
    _objc_release(puVar3);
    func_0x00010c1ee2c0(*(undefined8 *)((long)ppppuVar4 + lVar23));
    func_0x00010c18b5e0(*(undefined8 *)((long)ppppuVar4 + lVar23));
    func_0x00010c1a8c60(0xc024000000000000,0xc024000000000000,0xc024000000000000,0xc024000000000000,
                        *(undefined8 *)((long)ppppuVar4 + lVar23));
    func_0x00010befbd60(*(undefined8 *)((long)ppppuVar4 + lVar23));
    pppuVar5 = pppuStack_208;
    func_0x00010befbb60(pppuStack_208);
    func_0x00010c219b60(*(undefined8 *)((long)ppppuVar4 + lVar23));
    ppuStack_230 = (undefined8 **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    ppuStack_210 = (undefined8 **)uVar21;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_218 = pppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uVar21;
    uVar19 = *(undefined8 *)((long)ppppuVar4 + lVar23);
    ppuStack_220 = (undefined8 **)uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    pppuStack_228 = (undefined8 ***)uVar19;
    func_0x00010c2793a0(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = uVar19;
    uVar12 = *(undefined8 *)((long)ppppuVar4 + lVar23);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar12;
    func_0x00010bf49420(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar20;
    uVar13 = *(undefined8 *)((long)ppppuVar4 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_188 = uVar21;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_230);
    _objc_release(puVar1);
    _objc_release(uVar21);
    _objc_release(pppuVar5);
    _objc_release(uVar13);
    _objc_release(uVar20);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(pppuVar6);
    _objc_release(pppuStack_228);
    _objc_release(ppuStack_220);
    _objc_release(pppuStack_218);
    _objc_release(ppuStack_210);
    func_0x00010c2132a0(*(undefined8 *)((long)ppppuVar4 + lVar23));
    func_0x00010c160fc0(*(undefined8 *)((long)ppppuVar4 + lVar23));
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    lVar22 = (long)_DAT_112755e60;
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    *(undefined **)((long)ppppuVar4 + lVar22) = puVar1;
    _objc_release(uVar21);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)ppppuVar4 + lVar22));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)ppppuVar4 + lVar22));
    _objc_release(puVar1);
    func_0x00010c1cfce0(*(undefined8 *)((long)ppppuVar4 + lVar22));
    pppuVar5 = pppuStack_208;
    func_0x00010befbb60(pppuStack_208);
    func_0x00010c219b60(*(undefined8 *)((long)ppppuVar4 + lVar22));
    puStack_238 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    ppuStack_210 = (undefined8 **)uVar21;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_218 = pppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c0 = uVar21;
    uVar19 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    ppuStack_220 = (undefined8 **)uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    pppuStack_228 = (undefined8 ***)uVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_230 = pppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = uVar19;
    uVar12 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)ppppuVar4 + lVar23);
    func_0x00010bf1ff80(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b0 = uVar21;
    uVar14 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1a8 = uVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_238);
    _objc_release(puVar1);
    _objc_release(uVar20);
    _objc_release(pppuVar5);
    _objc_release(uVar14);
    _objc_release(uVar21);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(ppuStack_230);
    _objc_release(pppuStack_228);
    _objc_release(ppuStack_220);
    _objc_release(pppuStack_218);
    _objc_release(ppuStack_210);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    lVar22 = (long)_DAT_112755e64;
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    *(undefined **)((long)ppppuVar4 + lVar22) = puVar1;
    _objc_release(uVar21);
    pppuVar5 = (undefined8 ***)ppuStack_200;
    func_0x00010befbb60(ppuStack_200);
    func_0x00010c219b60(*(undefined8 *)((long)ppppuVar4 + lVar22));
    uVar20 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    lVar23 = (long)_DAT_112755e68;
    uVar19 = *(undefined8 *)((long)ppppuVar4 + lVar23);
    *(undefined8 *)((long)ppppuVar4 + lVar23) = uVar21;
    _objc_release(uVar19);
    _objc_release(uVar20);
    func_0x00010c1a8c60(0xc024000000000000,0xc024000000000000,0xc024000000000000,0xc024000000000000,
                        *(undefined8 *)((long)ppppuVar4 + lVar22));
    puStack_238 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar21 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuStack_208;
    ppuStack_210 = (undefined8 **)uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_218 = pppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1e8 = uVar21;
    uVar19 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    ppuStack_220 = (undefined8 **)uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    pppuStack_228 = (undefined8 ***)uVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_230 = pppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1e0 = uVar19;
    uVar12 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d8 = uVar21;
    uVar13 = *(undefined8 *)((long)ppppuVar4 + lVar22);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = uVar20;
    uStack_1c8 = *(undefined8 *)((long)ppppuVar4 + lVar23);
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_238);
    _objc_release(param_1);
    _objc_release(uVar20);
    _objc_release(pppuVar5);
    _objc_release(uVar13);
    _objc_release(uVar21);
    _objc_release(pppuVar6);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(ppuStack_230);
    _objc_release(pppuStack_228);
    _objc_release(ppuStack_220);
    _objc_release(pppuStack_218);
    _objc_release(ppuStack_210);
    _objc_release(pppuStack_208);
    pppuVar5 = (undefined8 ***)ppuStack_200;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  ppppuVar2 = (undefined8 ****)&ppuStack_280;
  pcStack_258 = FUN_106a13040;
  puStack_270 = param_1;
  pppuStack_268 = ppppuVar4;
  ppuStack_260 = &puStack_80;
  func_0x00010c256060(*(undefined8 *)((long)pppuVar5 + (long)_DAT_112755e6c));
  puStack_278 = PTR_PTR_1126f43c0;
  ppuStack_280 = pppuVar5;
  _objc_msgSendSuper2(&ppuStack_280,PTR_s_dealloc_112525b20);
  return ppppuVar2;
}



/* Entry: 106a11ffc; end: 106a1303f; -[SCMemoriesStoryEditorHeaderCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106a11ffc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined *unaff_x20;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
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
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = PTR_PTR_1126f43c0;
  puVar1 = &uStack_188;
  uStack_188 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20eaa0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar22 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    puVar3 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(puVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar4);
    puStack_1c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_1a0 = puVar4;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar3;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_1b0 = puVar4;
    puStack_c0 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_1c0 = puVar5;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puVar3;
    func_0x00010bf493c0(0xc032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    puStack_1d8 = puVar5;
    puStack_190 = puVar2;
    puStack_b8 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puStack_1d8);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_198);
    _objc_release(puStack_1a0);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x404e000000000000,0x404e000000000000);
    lVar20 = (long)_DAT_112755e58;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar2;
    _objc_release(uVar19);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar20));
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar20));
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x403e000000000000);
    _objc_release(uVar19);
    puVar2 = puStack_190;
    func_0x00010befbb60(puStack_190);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    puStack_1b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    puStack_198 = (undefined8 *)uVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar19;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar20);
    puStack_1a8 = (undefined8 *)uVar19;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar19;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010bf49420(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar17;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar13;
    func_0x00010bf49420(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b0);
    _objc_release(puVar4);
    _objc_release(uVar16);
    _objc_release(uVar13);
    _objc_release(uVar17);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(puVar2);
    _objc_release(uVar11);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    _objc_release(puStack_198);
    puVar15 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    puVar4 = puStack_190;
    func_0x00010befbb60(puStack_190);
    func_0x00010c219b60(puVar15);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar14 = puVar15;
    puStack_198 = (undefined8 *)puVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e8 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar15);
    _objc_release(puVar5);
    _objc_release(uVar19);
    _objc_release(puVar14);
    puVar2 = PTR_PTR_1126cfc40;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar21 = (long)_DAT_112755e5c;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar19);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar2);
    func_0x00010c1edbe0(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c16d0a0(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar4 = puVar2;
    func_0x000107e90aa4();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ed60(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_100 = puVar5;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar9;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2);
    func_0x00010c16b680(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    func_0x00010c1ee2a0(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1ee2c0(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1a8c60(0xc024000000000000,0xc024000000000000,0xc024000000000000,0xc024000000000000,
                        *(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar3 = puStack_198;
    func_0x00010befbb60(puStack_198);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    puStack_1c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puStack_1a0 = (undefined *)uVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar19;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar21);
    puStack_1b0 = (undefined *)uVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puStack_1b8 = (undefined8 *)uVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar16;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf49420(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar19;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_118 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c0);
    _objc_release(puVar2);
    _objc_release(uVar17);
    _objc_release(puVar3);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(uVar11);
    _objc_release(uVar16);
    _objc_release(puVar6);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    func_0x00010c2132a0(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar21));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar20 = (long)_DAT_112755e60;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar2;
    _objc_release(uVar19);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar20));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar20));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar20));
    puVar3 = puStack_198;
    func_0x00010befbb60(puStack_198);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    puStack_1c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puStack_1a0 = (undefined *)uVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar19;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar20);
    puStack_1b0 = (undefined *)uVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puStack_1b8 = (undefined8 *)uVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = (undefined *)puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar16;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf1ff80(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar19;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_138 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c8);
    _objc_release(puVar2);
    _objc_release(uVar17);
    _objc_release(puVar3);
    _objc_release(uVar13);
    _objc_release(uVar19);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar16);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar20 = (long)_DAT_112755e64;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar2;
    _objc_release(uVar19);
    puVar2 = puStack_190;
    func_0x00010befbb60(puStack_190);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    uVar17 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_112755e68;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined8 *)((long)puVar1 + lVar21) = uVar19;
    _objc_release(uVar16);
    _objc_release(uVar17);
    func_0x00010c1a8c60(0xc024000000000000,0xc024000000000000,0xc024000000000000,0xc024000000000000,
                        *(undefined8 *)((long)puVar1 + lVar20));
    puStack_1c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_198;
    puStack_1a0 = (undefined *)uVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = uVar19;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar20);
    puStack_1b0 = (undefined *)uVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    puStack_1b8 = (undefined8 *)uVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = uVar16;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c274200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uVar19;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uVar17;
    uStack_158 = *(undefined8 *)((long)puVar1 + lVar21);
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c8);
    _objc_release(unaff_x20);
    _objc_release(uVar17);
    _objc_release(puVar2);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(puVar4);
    _objc_release(uVar11);
    _objc_release(uVar16);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    _objc_release(puStack_198);
    puVar2 = puStack_190;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar18 = &puStack_210;
  pcStack_1e8 = FUN_106a13040;
  puStack_200 = unaff_x20;
  puStack_1f8 = puVar1;
  puStack_1f0 = &stack0xfffffffffffffff0;
  func_0x00010c256060(*(undefined8 *)(puVar2 + _DAT_112755e6c));
  puStack_208 = PTR_PTR_1126f43c0;
  puStack_210 = puVar2;
  _objc_msgSendSuper2(&puStack_210,PTR_s_dealloc_112525b20);
  return ppuVar18;
}



/* Entry: 106a13040; end: 106a1308f; -[SCMemoriesStoryEditorHeaderCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13040(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256060(*(undefined8 *)(param_1 + _DAT_112755e6c));
  puStack_28 = PTR_PTR_1126f43c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}


