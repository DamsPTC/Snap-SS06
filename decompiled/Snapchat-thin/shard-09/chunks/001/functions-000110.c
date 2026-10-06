/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a09bac; end: 106a09bbb; -[SCFeatureSettingsService setHideLegacyAutoSavedStories:] */

void FUN_106a09bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e67738,param_3);
  return;
}



/* Entry: 106a09bbc; end: 106a09bc3; -[SCFeatureSettingsService hide_legacy_auto_saved_stories_client_value:] */

undefined * FUN_106a09bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106a09bc4; end: 106a09bcb; -[SCFeatureSettingsService hide_legacy_auto_saved_stories_server_value:] */

void FUN_106a09bc4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a09bcc; end: 106a09bdb; -[SCFeatureSettingsService hideLegacyAutoSavedStories] */

void FUN_106a09bcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e67738,0);
  return;
}



/* Entry: 106a09bdc; end: 106a09dc3; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator initWithMergedDataSource:customStoriesDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_106a09bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f4350;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cfbe0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3b70;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar5 = (undefined1 *)((long)puVar1 + 0x40);
    _objc_loadWeakRetained(puVar5);
    func_0x00010bef9980();
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a09dc4; end: 106a09deb; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator addThumbnailListener:] */

void FUN_106a09dc4(long param_1)

{
  func_0x00010bef9980(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c121e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reannounceDataSourceChange_1126261a0);
  return;
}



/* Entry: 106a09dec; end: 106a09df3; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator removeThumbnailListener:] */

void FUN_106a09dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106a09df4; end: 106a09e1b; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator addListener:] */

void FUN_106a09df4(long param_1)

{
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c121e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reannounceDataSourceChange_1126261a0);
  return;
}



/* Entry: 106a09e1c; end: 106a09e23; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator removeListener:] */

void FUN_106a09e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106a09e24; end: 106a09e7b; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator reannounceDataSourceChange] */

void FUN_106a09e24(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a09e7c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 106a09e7c; end: 106a09e83;  */

void FUN_106a09e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__announceDataSourceChangeToAllLi_1125507b0);
  return;
}



/* Entry: 106a09e84; end: 106a09e87; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator didUpdateCustomStoriesWithPublicationIds:] */

void FUN_106a09e84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c121e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reannounceDataSourceChange_1126261a0);
  return;
}



/* Entry: 106a09e88; end: 106a09e8b; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator didUpdatePostableStories] */

void FUN_106a09e88(void)

{
  return;
}



/* Entry: 106a09e8c; end: 106a09f3b; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator _filteredEntriesWithEntries:] */

void FUN_106a09e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_retain(param_3);
  func_0x00010c0ec420();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a09f3c;
  puStack_40 = &UNK_11085a518;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a09f3c; end: 106a09f93;  */

undefined8 FUN_106a09f3c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99a80();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b5f6bec(param_2);
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106a09f94; end: 106a0a09f; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106a09f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106a0a0a0;
  puStack_70 = &UNK_1108475b0;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a0a0a0; end: 106a0a0b3;  */

void FUN_106a0a0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf7ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dataSource_didChangeEntries_fai_11255b958,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106a0a0b4; end: 106a0a1df; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator _dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106a0a0b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1;
  func_0x00010be16520(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x28);
  _objc_retain(&PTR___NSConcreteGlobalBlock_110975aa8);
  func_0x00010b813c80(uVar5,lVar1,&PTR___NSConcreteGlobalBlock_110975aa8);
  _objc_release(&PTR___NSConcreteGlobalBlock_110975aa8);
  uVar4 = uVar5;
  FUN_106d09fe8();
  if ((uVar4 & 1) == 0) {
    _objc_retain(lVar1);
    uVar4 = *(ulong *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      _objc_retain(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar1;
      _objc_release(uVar3);
      func_0x00010be0fca0(param_1);
      goto LAB_106a0a19c;
    }
    uVar4 = uVar5;
    FUN_106d0a09c(uVar5,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x000106d0a220(uVar5,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed36a0(param_1);
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
LAB_106a0a19c:
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a0a1e0; end: 106a0a4e3; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator _announceDataSourceChangeToAllListeners] */

undefined ** FUN_106a0a1e0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  func_0x000106d0e204();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c9e60(*(undefined8 *)(param_1 + 0x10));
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  func_0x00010bf97e80(ppuVar1);
  puVar19 = puVar3;
  func_0x00010bf51e00();
  ppuVar12 = &PTR___NSConcreteGlobalBlock_110953388;
  puVar5 = puVar19;
  func_0x0001006372a4();
  _objc_release(puVar19);
  puVar19 = puVar5;
  func_0x00010bf529e0();
  *(undefined **)(param_1 + 0x58) = puVar19;
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (puVar19 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(puVar7);
      }
      lVar8 = *(long *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf625c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      if (lVar9 != 0) {
        lVar8 = lVar9;
        func_0x00010bf85d80(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(lVar8);
      }
      _objc_release(lVar9);
      puVar17 = puVar17 + 1;
    } while (puVar19 != puVar17);
    puVar19 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  uVar16 = *(undefined8 *)(param_1 + 8);
  puVar19 = puVar6;
  func_0x00010bf51e00();
  func_0x00010c0c86e0(uVar16);
  _objc_release(puVar19);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = ppuVar12;
  _objc_retain(ppuVar12);
  ppuVar10 = ppuVar12;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010b5fab34();
  if ((int)ppuVar11 == 0) {
    ppuVar11 = ppuVar10;
    func_0x00010bf977c0();
    if (((int)ppuVar11 == 3) || (ppuVar11 = ppuVar10, func_0x00010bf977c0(), (int)ppuVar11 - 1U < 2)
       ) {
      ppuVar11 = ppuVar10;
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar11 != (undefined **)0x0) {
        puVar19 = ppuVar1[6];
        ppuVar11 = ppuVar10;
        func_0x00010bf9e140(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppuVar11);
        if (puVar19 == (undefined *)0x0) {
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = ppuVar11;
          func_0x00010c0d3c80();
          puVar19 = ppuVar1[6];
          ppuVar1 = ppuVar10;
          func_0x00010bf9e140(ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar19);
          _objc_release(ppuVar1);
        }
        else {
          ppuVar18 = (undefined **)ppuVar1[6];
          ppuVar11 = ppuVar10;
          func_0x00010bf9e140(ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(ppuVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
        }
        _objc_release(ppuVar18);
        _objc_release(ppuVar11);
      }
    }
  }
  else {
    func_0x00010befa120(ppuVar1[4]);
    func_0x00010befa120(ppuVar1[5]);
  }
  _objc_release(ppuVar10);
  _objc_release(ppuVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  func_0x00010bfbdda0(ppuVar13);
  func_0x00010b5fa33c();
  return (undefined **)(ulong)(ppuVar13 == (undefined **)0x1);
}



/* Entry: 106a0a4e4; end: 106a0a6c3;  */

undefined * FUN_106a0a4e4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010b5fab34();
  if ((int)puVar2 == 0) {
    puVar2 = puVar1;
    func_0x00010bf977c0();
    if (((int)puVar2 == 3) || (puVar2 = puVar1, func_0x00010bf977c0(), (int)puVar2 - 1U < 2)) {
      puVar2 = puVar1;
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 != (undefined *)0x0) {
        lVar8 = *(long *)(param_1 + 0x30);
        puVar2 = puVar1;
        func_0x00010bf9e140(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar2);
        if (lVar8 == 0) {
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010c0d3c80();
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          puVar3 = puVar1;
          func_0x00010bf9e140(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar7);
          _objc_release(puVar3);
        }
        else {
          puVar6 = *(undefined **)(param_1 + 0x30);
          puVar2 = puVar1;
          func_0x00010bf9e140(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
        }
        _objc_release(puVar6);
        _objc_release(puVar2);
      }
    }
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010bfbdda0(puVar4);
  func_0x00010b5fa33c();
  return (undefined *)(ulong)(puVar4 == (undefined *)0x1);
}



/* Entry: 106a0a6c4; end: 106a0a6e7;  */

bool FUN_106a0a6c4(undefined8 param_1,long param_2)

{
  func_0x00010bfbdda0(param_2);
  func_0x00010b5fa33c();
  return param_2 == 1;
}



/* Entry: 106a0a6e8; end: 106a0a71f; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator _updateConsolidatedAutoSavedStoriesDataModels:] */

void FUN_106a0a6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcb850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceDataSourceChangeToAllLi_1125507b0);
  return;
}



/* Entry: 106a0a720; end: 106a0a7ef; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator _updateAutoSavedSnapsForDataModelsWithDeletes:inserts:] */

void FUN_106a0a720(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106a0a7f0;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    lStack_40 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a0a7f0; end: 106a0ad53;  */

/* WARNING: Possible PIC construction at 0x000106a0a92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a0ac18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a0a930) */
/* WARNING: Removing unreachable block (ram,0x000106a0a960) */
/* WARNING: Removing unreachable block (ram,0x000106a0ac1c) */
/* WARNING: Removing unreachable block (ram,0x000106a0a914) */

void FUN_106a0a7f0(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  long lVar17;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  lVar12 = lVar10;
  func_0x00010bf52a60();
  ppuVar1 = ppuRam0000000000000000;
  while (lVar12 != 0) {
    lVar17 = 0;
    do {
      if (ppuRam0000000000000000 != ppuVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar14 = *(undefined8 *)(lVar17 * 8);
      lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
      uVar15 = uVar14;
      func_0x00010bf97200(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_retain(lVar13);
      lVar3 = lVar13;
      func_0x00010bf52a60();
      ppuVar6 = ppuRam0000000000000000;
      if (lVar3 != 0) goto code_r0x00010c241220;
      _objc_release(lVar13);
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
      func_0x00010bf97200(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar15);
      _objc_release(uVar14);
      _objc_release(lVar13);
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar12);
    lVar12 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  lVar10 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar10);
  lVar12 = lVar10;
  func_0x00010bf52a60();
  ppuVar1 = ppuRam0000000000000000;
  do {
    if (lVar12 == 0) {
      _objc_release(lVar10);
      lVar12 = *(long *)(param_1 + 0x28);
      uVar14 = *(undefined8 *)(lVar12 + 0x38);
      func_0x00010bf00d20(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010bf51e00();
      func_0x00010bed5a60(lVar12);
      _objc_release(uVar15);
      _objc_release(uVar14);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return;
      }
      ___stack_chk_fail();
      ppuVar6 = param_2;
code_r0x00010c241220:
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(ppuVar6,PTR_s_snapId_11266deb0);
      return;
    }
    lVar17 = 0;
    do {
      if (ppuRam0000000000000000 != ppuVar1) {
        _objc_enumerationMutation(lVar10);
      }
      ppuVar16 = *(undefined ***)(lVar17 * 8);
      puVar4 = (undefined *)(*(long *)(param_1 + 0x28) + 0x40);
      _objc_loadWeakRetained();
      puVar5 = puVar4;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      lVar3 = *(long *)(param_1 + 0x28) + 0x40;
      _objc_loadWeakRetained();
      lVar13 = lVar3;
      func_0x00010bfa73e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      param_2 = &PTR___NSConcreteGlobalBlock_1109533a8;
      lVar3 = lVar13;
      func_0x000100504554(lVar13,&PTR___NSConcreteGlobalBlock_1109533a8);
      puVar4 = puVar5;
      func_0x00010bf529e0();
      if (puVar4 != (undefined *)0x0) {
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
        ppuVar6 = ppuVar16;
        func_0x00010bf97200(ppuVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(ppuVar6);
      }
      ppuVar6 = ppuVar16;
      func_0x00010bfbdda0();
      func_0x00010b5fad2c();
      if (((ulong)ppuVar6 & 1) == 0) {
        ppuVar6 = ppuVar16;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (ppuVar6 == (undefined **)0x8) goto LAB_106a0ab30;
        puVar4 = puVar5;
        func_0x00010b5f8ce0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
LAB_106a0ab30:
        puVar8 = puVar5;
        func_0x00010bf529e0();
        puVar4 = PTR____NSArray0__struct_11034ab48;
        if (puVar8 != (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_retain(puVar4);
      puVar8 = puVar4;
      func_0x00010bf52a60();
      ppuVar2 = ppuRam0000000000000000;
      while (puVar8 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (ppuRam0000000000000000 != ppuVar2) {
            _objc_enumerationMutation(puVar4);
          }
          ppuVar7 = *(undefined ***)((long)puVar11 * 8);
          param_2 = ppuVar16;
          FUN_106d0e0f4(ppuVar7,ppuVar16,lVar3,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar7;
          func_0x00010c113000();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar6 != (undefined **)0x0) goto code_r0x00010c241220;
          _objc_release(0);
          _objc_release(ppuVar7);
          puVar11 = puVar11 + 1;
        } while (puVar8 != puVar11);
        puVar8 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
      _objc_release(puVar4);
      _objc_release(lVar3);
      _objc_release(lVar13);
      _objc_release(puVar5);
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar12);
    lVar12 = lVar10;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106a0ad54; end: 106a0ad5b;  */

void FUN_106a0ad54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106a0ad5c; end: 106a0ad6b; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator _fetchAutoSavedSnapsForDataModelsWithEntries:] */

void FUN_106a0ad5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed36b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateAutoSavedSnapsForDataMode_112592750,
             PTR____NSArray0__struct_11034ab48,param_3);
  return;
}



/* Entry: 106a0ad6c; end: 106a0ad73; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator legacyMyStoryEntriesCount] */

undefined8 FUN_106a0ad6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106a0ad74; end: 106a0adff; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator .cxx_destruct] */

void FUN_106a0ad74(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a0ae00; end: 106a0b1d7; -[SCMemoriesConsolidatedAutoSavedStoriesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0ae00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112755d18;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar17;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010bdf0040();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112755d0c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar18;
  func_0x00010c0eada0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf22c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar18);
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112755d10;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar18;
  func_0x00010c0c9e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  puVar5 = PTR_PTR_1126cfbe8;
  _objc_alloc();
  lVar18 = param_1;
  FUN_106a0b1d8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar18;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_106a0b1d8();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf63700();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_106a0b1d8();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_106a0b1d8();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c078640();
  lVar12 = param_1;
  FUN_106a0b1d8();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf622a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112755d00;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar16;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
    lVar21 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112755d08;
    _objc_loadWeakRetained();
    lVar21 = param_1 + _DAT_112755d20;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar21;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112755d14;
    _objc_loadWeakRetained();
  }
  func_0x00010c002320(puVar5,param_2,lVar3,lVar2,lVar7,lVar4,lVar1,lVar9,(char)lVar11);
  _objc_release(lVar19);
  _objc_release(lVar15);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar14);
  _objc_release(lVar16);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar18);
  FUN_106a0b1d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a0b1d8; end: 106a0b1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b1d8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112755d04);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a0b1fc; end: 106a0b2df; -[SCMemoriesConsolidatedAutoSavedStoriesEntryPoint _createMemoriesOperaSessionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b1fc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112755d1c;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b2208;
  _objc_alloc(PTR_PTR_1126b2208);
  func_0x000108ec17a8(lVar1,4);
  func_0x00010bff9720(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a0b2e0; end: 106a0b367; -[SCMemoriesConsolidatedAutoSavedStoriesEntryPoint end] */

void FUN_106a0b2e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_106a0b1d8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f4358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a0b368; end: 106a0b3f3; -[SCMemoriesConsolidatedAutoSavedStoriesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b368(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112755d20);
  _objc_destroyWeak(param_1 + _DAT_112755d1c);
  _objc_destroyWeak(param_1 + _DAT_112755d18);
  _objc_destroyWeak(param_1 + _DAT_112755d14);
  _objc_destroyWeak(param_1 + _DAT_112755d10);
  _objc_destroyWeak(param_1 + _DAT_112755d0c);
  _objc_destroyWeak(param_1 + _DAT_112755d08);
  _objc_destroyWeak(param_1 + _DAT_112755d04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112755d00);
  return;
}



/* Entry: 106a0b3f4; end: 106a0b51f; -[SCMemoriesConsolidatedAutoSavedStoriesScope initWithScopeDelegate:uiContainer:isMyStory:customStoryEntryExternalId:storyTitle:dataCoordinator:] */

undefined1 *
FUN_106a0b3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f4360;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a0b520; end: 106a0b537; -[SCMemoriesConsolidatedAutoSavedStoriesScope scopeDelegate] */

void FUN_106a0b520(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a0b538; end: 106a0b53f; -[SCMemoriesConsolidatedAutoSavedStoriesScope uiContainer] */

undefined8 FUN_106a0b538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a0b540; end: 106a0b547; -[SCMemoriesConsolidatedAutoSavedStoriesScope isMyStory] */

undefined1 FUN_106a0b540(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106a0b548; end: 106a0b54f; -[SCMemoriesConsolidatedAutoSavedStoriesScope customStoryEntryExternalId] */

undefined8 FUN_106a0b548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a0b550; end: 106a0b557; -[SCMemoriesConsolidatedAutoSavedStoriesScope storyTitle] */

undefined8 FUN_106a0b550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a0b558; end: 106a0b55f; -[SCMemoriesConsolidatedAutoSavedStoriesScope dataCoordinator] */

undefined8 FUN_106a0b558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106a0b560; end: 106a0b5af; -[SCMemoriesConsolidatedAutoSavedStoriesScope .cxx_destruct] */

void FUN_106a0b560(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106a0b5b0; end: 106a0b6eb; -[SCMemoriesConsolidatedAutoSavedStoriesViewController initWithConsolidatedAutoSavedStoriesScopeDelegate:streamingContentPrefetcher:dataCoordinator:operaPresenter:snapThumbnailGenerator:storyTitle:isMyStory:customStoryEntryExternalId:applicationLifecycleEvents:memoriesSelectionFooterBarControllerFactory:memoriesExperimentService:memoriesMonetizationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106a0b5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f4368;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithWithSubscreenViewControl_11252d020,3,param_4,param_5,
                      param_6,param_7,param_12,param_13,param_14,param_15);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112755d3c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112755d40) = param_9;
    _objc_storeWeak((long)puVar1 + (long)_DAT_112755d44,param_3);
    lVar3 = (long)_DAT_112755d48;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a0b6ec; end: 106a0b71f; -[SCMemoriesConsolidatedAutoSavedStoriesViewController _willDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b6ec(long param_1)

{
  param_1 = param_1 + _DAT_112755d44;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf491e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a0b720; end: 106a0b797; -[SCMemoriesConsolidatedAutoSavedStoriesViewController _didEndDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b720(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + _DAT_112755d44;
  _objc_loadWeakRetained(lVar1);
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + _DAT_112755d40) == '\x01')) {
    bVar2 = *(byte *)(param_1 + _DAT_112755d4c);
  }
  else {
    bVar2 = 1;
  }
  func_0x00010bf491c0(lVar1,param_2,bVar2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a0b798; end: 106a0b807; -[SCMemoriesConsolidatedAutoSavedStoriesViewController _didCreateStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b798(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + _DAT_112755d4c) = 1;
    lVar1 = (long)_DAT_112755d44;
    _objc_retain(param_3);
    param_1 = param_1 + lVar1;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf491a0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a0b808; end: 106a0b837; -[SCMemoriesConsolidatedAutoSavedStoriesViewController _title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b808(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755d3c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a0b838; end: 106a0b867; -[SCMemoriesConsolidatedAutoSavedStoriesViewController _dismiss:] */

void FUN_106a0b838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beeafa0();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_3,0);
  return;
}



/* Entry: 106a0b868; end: 106a0b8cb; -[SCMemoriesConsolidatedAutoSavedStoriesViewController _sectionControllerConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b868(void)

{
  _objc_alloc(PTR_PTR_1126c3b88);
  func_0x00010bfff420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a0b8cc; end: 106a0b90b; -[SCMemoriesConsolidatedAutoSavedStoriesViewController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

void FUN_106a0b8cc(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  if ((param_4 != 0) && (FUN_106d0a3a4(), param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be02290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss__11255e240,1);
    return;
  }
  return;
}



/* Entry: 106a0b90c; end: 106a0b913; -[SCMemoriesConsolidatedAutoSavedStoriesViewController pageViewName] */

undefined8 FUN_106a0b90c(void)

{
  return 0x72;
}



/* Entry: 106a0b914; end: 106a0b95f; -[SCMemoriesConsolidatedAutoSavedStoriesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0b914(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755d48,0);
  _objc_destroyWeak(param_1 + _DAT_112755d44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755d3c,0);
  return;
}



/* Entry: 106a0b960; end: 106a0badb; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinatorListenerAnnouncer description] */

void FUN_106a0b960(long param_1)

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
  
  FUN_106a0badc(&plStack_60,param_1 + 0x48);
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



/* Entry: 106a0badc; end: 106a0bb3b;  */

void FUN_106a0badc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106a0bb3c; end: 106a0bde7; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinatorListenerAnnouncer addListener:] */

undefined8 FUN_106a0bb3c(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_1109533d8;
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
    FUN_106a0bde8(plVar10,auStack_90);
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
    FUN_106a0bf28(puVar8,&plStack_a0);
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
LAB_106a0bcf0:
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
      goto LAB_106a0bd10;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106a0bde8(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106a0bde8(plVar10,auStack_78);
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
    FUN_106a0bf28(puVar8,&plStack_88);
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
      goto LAB_106a0bcf0;
    }
  }
  uVar9 = 1;
LAB_106a0bd10:
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



/* Entry: 106a0bde8; end: 106a0bf27;  */

void FUN_106a0bde8(long *param_1,long *param_2)

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
      FUN_106a0c33c();
LAB_106a0bf24:
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
      if (uVar7 >> 0x3d != 0) goto LAB_106a0bf24;
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



/* Entry: 106a0bf28; end: 106a0bf6f;  */

void FUN_106a0bf28(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106a0bf70; end: 106a0c19f; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinatorListenerAnnouncer removeListener:] */

void FUN_106a0bf70(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_106a0c124;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106a0bfd8;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106a0bf28(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106a0c124;
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
LAB_106a0bfd8:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_1109533d8;
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
          FUN_106a0bde8(plVar9,lVar7);
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
    FUN_106a0bf28(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_106a0c124;
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
LAB_106a0c124:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a0c1a0; end: 106a0c2f3; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinatorListenerAnnouncer memoriesConsolidatedAutoSavedStoriesDataCoordinator:didUpdateMyStoryDataModels:customStoryDataModelsMap:customStoryTitleMap:] */

void FUN_106a0c1a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_106a0badc(&plStack_60,param_1 + 0x48);
  if (plStack_60 != (long *)0x0) {
    lVar2 = plStack_60[1];
    for (lVar6 = *plStack_60; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0c86e0();
      _objc_release(lVar5);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a0c2f4; end: 106a0c31b; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinatorListenerAnnouncer .cxx_destruct] */

void FUN_106a0c2f4(long param_1)

{
  FUN_106a0c350(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106a0c31c; end: 106a0c33b; -[SCMemoriesConsolidatedAutoSavedStoriesDataCoordinatorListenerAnnouncer .cxx_construct] */

void FUN_106a0c31c(long param_1)

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



/* Entry: 106a0c33c; end: 106a0c34f;  */

undefined * FUN_106a0c33c(void)

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



/* Entry: 106a0c350; end: 106a0c3a7;  */

long FUN_106a0c350(long param_1)

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



/* Entry: 106a0c3a8; end: 106a0c3b7;  */

void FUN_106a0c3a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109533d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106a0c3b8; end: 106a0c3d7;  */

void FUN_106a0c3b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109533d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106a0c3d8; end: 106a0c43f;  */

void FUN_106a0c3d8(long param_1)

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



/* Entry: 106a0c440; end: 106a0c443;  */

void FUN_106a0c440(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106a0c444; end: 106a0c44f; -[SCFeatureSettingsService isHasFavoritedMemoriesSnap] */

void FUN_106a0c444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e67778);
  return;
}



/* Entry: 106a0c450; end: 106a0c45b; -[SCFeatureSettingsService hasFavoritedMemoriesSnapServerParam] */

undefined ** FUN_106a0c450(void)

{
  return &PTR____CFConstantStringClassReference_110e67778;
}



/* Entry: 106a0c45c; end: 106a0c46b; -[SCFeatureSettingsService setHasFavoritedMemoriesSnap:] */

void FUN_106a0c45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e67778,param_3);
  return;
}



/* Entry: 106a0c46c; end: 106a0c473; -[SCFeatureSettingsService has_favorited_memories_snap_client_value:] */

undefined * FUN_106a0c46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106a0c474; end: 106a0c47b; -[SCFeatureSettingsService has_favorited_memories_snap_server_value:] */

void FUN_106a0c474(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a0c47c; end: 106a0c48b; -[SCFeatureSettingsService hasFavoritedMemoriesSnap] */

void FUN_106a0c47c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e67778,0);
  return;
}



/* Entry: 106a0c48c; end: 106a0c62f; -[SCMemoriesFavoriteSnapsStoryDataCoordinator initWithFeatureSettingsService:memoriesMergedDataSource:performer:circumstanceEngine:] */

undefined1 *
FUN_106a0c48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4370;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cfbf0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c3b70;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x50) = 1;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a0c630; end: 106a0c717; -[SCMemoriesFavoriteSnapsStoryDataCoordinator initWithFeatureSettingsService:memoriesMergedDataSource:circumstanceEngine:] */

undefined8
FUN_106a0c630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3a7edb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0xc);
  _objc_release(puVar2);
  func_0x00010c011f00(param_1,param_2,param_3,param_4,puVar1,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106a0c718; end: 106a0c76f; -[SCMemoriesFavoriteSnapsStoryDataCoordinator reannounceDataSourceChange] */

void FUN_106a0c718(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a0c770;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 106a0c770; end: 106a0c777;  */

void FUN_106a0c770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__announceDataSourceChangeToAllLi_1125507b0);
  return;
}



/* Entry: 106a0c778; end: 106a0c79f; -[SCMemoriesFavoriteSnapsStoryDataCoordinator addThumbnailListener:] */

void FUN_106a0c778(long param_1)

{
  func_0x00010bef9980(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c121e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reannounceDataSourceChange_1126261a0);
  return;
}



/* Entry: 106a0c7a0; end: 106a0c7a7; -[SCMemoriesFavoriteSnapsStoryDataCoordinator removeThumbnailListener:] */

void FUN_106a0c7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106a0c7a8; end: 106a0c7cf; -[SCMemoriesFavoriteSnapsStoryDataCoordinator addListener:] */

void FUN_106a0c7a8(long param_1)

{
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c121e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reannounceDataSourceChange_1126261a0);
  return;
}



/* Entry: 106a0c7d0; end: 106a0c7d7; -[SCMemoriesFavoriteSnapsStoryDataCoordinator removeListener:] */

void FUN_106a0c7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106a0c7d8; end: 106a0c887; -[SCMemoriesFavoriteSnapsStoryDataCoordinator _filteredEntriesWithEntries:] */

void FUN_106a0c7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_retain(param_3);
  func_0x00010c0ec420();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a0c888;
  puStack_40 = &UNK_11085a518;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a0c888; end: 106a0c893;  */

void FUN_106a0c888(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_evaluateWithEntry__1125c4048,param_2);
  return;
}



/* Entry: 106a0c894; end: 106a0c99f; -[SCMemoriesFavoriteSnapsStoryDataCoordinator dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106a0c894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106a0c9a0;
  puStack_70 = &UNK_1108475b0;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a0c9a0; end: 106a0c9b3;  */

void FUN_106a0c9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf7ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dataSource_didChangeEntries_fai_11255b958,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106a0c9b4; end: 106a0cadf; -[SCMemoriesFavoriteSnapsStoryDataCoordinator _dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106a0c9b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1;
  func_0x00010be16520(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x28);
  _objc_retain(&PTR___NSConcreteGlobalBlock_110975aa8);
  func_0x00010b813c80(uVar5,lVar1,&PTR___NSConcreteGlobalBlock_110975aa8);
  _objc_release(&PTR___NSConcreteGlobalBlock_110975aa8);
  uVar4 = uVar5;
  FUN_106d09fe8();
  if ((uVar4 & 1) == 0) {
    _objc_retain(lVar1);
    uVar4 = *(ulong *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      _objc_retain(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar1;
      _objc_release(uVar3);
      func_0x00010be11140(param_1);
      goto LAB_106a0ca9c;
    }
    uVar4 = uVar5;
    FUN_106d0a09c(uVar5,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x000106d0a220(uVar5,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed7e00(param_1);
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
LAB_106a0ca9c:
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a0cae0; end: 106a0cb4b; -[SCMemoriesFavoriteSnapsStoryDataCoordinator _announceDataSourceChangeToAllListeners] */

void FUN_106a0cae0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5f20();
    _objc_release(uVar2);
  }
  func_0x00010c0c9e60(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c0c8990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_memoriesFavoriteSnapsStoryDataCo_11260fc78,param_1,
             *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x50));
  return;
}



/* Entry: 106a0cb4c; end: 106a0cb83; -[SCMemoriesFavoriteSnapsStoryDataCoordinator _updateFavoritedSnapsStoryDataModels:] */

void FUN_106a0cb4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcb850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceDataSourceChangeToAllLi_1125507b0);
  return;
}



/* Entry: 106a0cb84; end: 106a0cc57; -[SCMemoriesFavoriteSnapsStoryDataCoordinator _updateFavoritedSnapsForDataModelsWithDeletes:inserts:] */

void FUN_106a0cb84(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106a0cc58;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a0cc58; end: 106a0d257;  */

void FUN_106a0cc58(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *unaff_x22;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_4d0 [8];
  undefined1 auStack_4c8 [8];
  undefined *puStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  undefined1 *puStack_4a0;
  code *pcStack_498;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  undefined *puStack_470;
  long lStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined *puStack_450;
  long lStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0d3c80();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puVar4 = *(undefined **)(param_1 + 0x28);
  lStack_448 = lVar2;
  _objc_retain(puVar4);
  puStack_460 = puVar4;
  func_0x00010bf52a60();
  puStack_450 = puVar4;
  if (puVar4 != (undefined *)0x0) {
    lStack_458 = *plStack_330;
    do {
      puVar4 = (undefined *)0x0;
      do {
        if (*plStack_330 != lStack_458) {
          _objc_enumerationMutation(puStack_460);
        }
        uVar7 = *(undefined8 *)(lStack_338 + (long)puVar4 * 8);
        puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x30);
        uVar12 = uVar7;
        func_0x00010bf97200(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        lStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        plStack_370 = (long *)0x0;
        _objc_retain(puVar5);
        puVar6 = puVar5;
        func_0x00010bf52a60();
        if (puVar6 != (undefined *)0x0) {
          lVar2 = *plStack_370;
          do {
            unaff_x22 = (undefined *)0x0;
            do {
              if (*plStack_370 != lVar2) {
                _objc_enumerationMutation(puVar5);
              }
              uVar9 = *(undefined8 *)(lStack_378 + (long)unaff_x22 * 8);
              uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
              uVar12 = uVar9;
              func_0x00010c241220(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar12);
              func_0x00010c12d360(lStack_448);
              uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
              func_0x00010c241220(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(uVar12);
              _objc_release(uVar9);
              _objc_release(uVar11);
              unaff_x22 = unaff_x22 + 1;
            } while (puVar6 != unaff_x22);
            puVar6 = puVar5;
            func_0x00010bf52a60();
          } while (puVar6 != (undefined *)0x0);
        }
        _objc_release(puVar5);
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
        func_0x00010bf97200(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar12);
        _objc_release(uVar7);
        _objc_release(puVar5);
        puVar4 = puVar4 + 1;
      } while (puVar4 != puStack_450);
      puVar4 = puStack_460;
      func_0x00010bf52a60();
      puStack_450 = puVar4;
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puStack_460);
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar2);
  lStack_488 = lVar2;
  func_0x00010bf52a60();
  lStack_478 = lVar2;
  if (lVar2 != 0) {
    lStack_480 = *plStack_3b0;
    do {
      lVar2 = 0;
      do {
        if (*plStack_3b0 != lStack_480) {
          _objc_enumerationMutation(lStack_488);
        }
        puVar6 = *(undefined **)(lStack_3b8 + lVar2 * 8);
        puVar4 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = puVar4;
        func_0x00010bfa73e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puStack_450 = puVar6;
        func_0x00010bfbdda0();
        iVar1 = (int)puVar6;
        func_0x00010b5fad2c();
        puStack_470 = unaff_x22;
        lStack_468 = lVar2;
        if (iVar1 == 0) {
          puVar4 = unaff_x22;
          func_0x00010b5f8ce0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar6 = unaff_x22;
          func_0x00010bf529e0();
          puVar4 = PTR____NSArray0__struct_11034ab48;
          if (puVar6 != (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_1f8 = unaff_x22;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        uStack_3d8 = 0;
        uStack_3e0 = 0;
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        lStack_3f8 = 0;
        uStack_400 = 0;
        uStack_3e8 = 0;
        plStack_3f0 = (long *)0x0;
        _objc_retain(puVar4);
        puVar6 = puVar4;
        func_0x00010bf52a60();
        puStack_460 = puVar4;
        if (puVar6 != (undefined *)0x0) {
          lStack_458 = *plStack_3f0;
          do {
            puVar5 = (undefined *)0x0;
            do {
              if (*plStack_3f0 != lStack_458) {
                _objc_enumerationMutation(puStack_460);
              }
              lVar13 = *(long *)(lStack_3f8 + (long)puVar5 * 8);
              lVar2 = lVar13;
              FUN_106d0e0f4(lVar13,puStack_450,PTR____NSArray0__struct_11034ab48,1);
              _objc_retainAutoreleasedReturnValue();
              lStack_438 = 0;
              uStack_440 = 0;
              uStack_428 = 0;
              plStack_430 = (long *)0x0;
              uStack_418 = 0;
              uStack_420 = 0;
              uStack_408 = 0;
              uStack_410 = 0;
              _objc_retain(lVar13);
              lVar3 = lVar13;
              func_0x00010bf52a60();
              if (lVar3 != 0) {
                lVar8 = *plStack_430;
                do {
                  lVar10 = 0;
                  do {
                    if (*plStack_430 != lVar8) {
                      _objc_enumerationMutation(lVar13);
                    }
                    unaff_x22 = *(undefined **)(lStack_438 + lVar10 * 8);
                    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
                    func_0x00010c241220();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(uVar12);
                    _objc_release(unaff_x22);
                    lVar10 = lVar10 + 1;
                  } while (lVar3 != lVar10);
                  lVar3 = lVar13;
                  func_0x00010bf52a60();
                } while (lVar3 != 0);
              }
              _objc_release(lVar13);
              func_0x00010befa120(lStack_448);
              _objc_release(lVar2);
              puVar4 = puStack_460;
              puVar5 = puVar5 + 1;
            } while (puVar5 != puVar6);
            puVar6 = puStack_460;
            func_0x00010bf52a60();
          } while (puVar6 != (undefined *)0x0);
        }
        _objc_release(puVar4);
        puVar4 = puStack_470;
        puVar6 = puStack_470;
        func_0x00010bf529e0();
        if (puVar6 != (undefined *)0x0) {
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
          unaff_x22 = puStack_450;
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar12);
          _objc_release(unaff_x22);
        }
        _objc_release(puStack_460);
        _objc_release(puVar4);
        lVar2 = lStack_468 + 1;
      } while (lVar2 != lStack_478);
      lVar2 = lStack_488;
      func_0x00010bf52a60();
      lStack_478 = lVar2;
    } while (lVar2 != 0);
  }
  _objc_release(lStack_488);
  lVar2 = lStack_448;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = lStack_448;
  func_0x000106d0e204();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bed7e20(uVar12);
  _objc_release(lVar3);
  lVar13 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_4a8 = lVar2;
    pcStack_498 = FUN_106a0d258;
    puStack_4c0 = unaff_x22;
    lStack_4b8 = lVar3;
    uStack_4b0 = uVar12;
    puStack_4a0 = &stack0xfffffffffffffff0;
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_4c8,lVar13);
      uVar12 = *(undefined8 *)(lVar13 + 0x18);
      _objc_copyWeak(auStack_4d0,auStack_4c8);
      _objc_retain(lVar8);
      func_0x00010c0f7fc0(uVar12);
      _objc_release(lVar8);
      _objc_destroyWeak(auStack_4d0);
      _objc_destroyWeak(auStack_4c8);
    }
    _objc_release(lVar8);
    return;
  }
  return;
}



/* Entry: 106a0d258; end: 106a0d33b; -[SCMemoriesFavoriteSnapsStoryDataCoordinator _fetchFavoritedSnapsForDataModelsWithEntries:] */

void FUN_106a0d258(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a0d33c; end: 106a0d733;  */

void FUN_106a0d33c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar15);
    lVar7 = lVar15;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar15);
        }
        uVar19 = *(undefined8 *)(lVar16 * 8);
        puVar8 = *(undefined **)(lVar5 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bfa73e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = puVar9;
        func_0x00010bf529e0();
        if (puVar8 != (undefined *)0x0) {
          uVar18 = *(undefined8 *)(lVar5 + 0x30);
          uVar13 = uVar19;
          func_0x00010bf97200(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar18);
          _objc_release(uVar13);
        }
        uVar13 = uVar19;
        func_0x00010bfbdda0();
        iVar4 = (int)uVar13;
        func_0x00010b5fad2c();
        if (iVar4 == 0) {
          puVar8 = puVar9;
          func_0x00010b5f8ce0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar10 = puVar9;
          func_0x00010bf529e0();
          puVar8 = PTR____NSArray0__struct_11034ab48;
          if (puVar10 != (undefined *)0x0) {
            puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        _objc_retain(puVar8);
        puVar10 = puVar8;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (puVar10 != (undefined *)0x0) {
          puVar20 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar8);
            }
            lVar21 = *(long *)((long)puVar20 * 8);
            lVar11 = lVar21;
            FUN_106d0e0f4(lVar21,uVar19,PTR____NSArray0__struct_11034ab48,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(lVar21);
            lVar12 = lVar21;
            func_0x00010bf52a60();
            lVar3 = lRam0000000000000000;
            while (lVar12 != 0) {
              lVar17 = 0;
              do {
                if (lRam0000000000000000 != lVar3) {
                  _objc_enumerationMutation(lVar21);
                }
                uVar13 = *(undefined8 *)(lVar17 * 8);
                uVar18 = *(undefined8 *)(lVar5 + 0x38);
                func_0x00010c241220(uVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(uVar18);
                _objc_release(uVar13);
                lVar17 = lVar17 + 1;
              } while (lVar12 != lVar17);
              lVar12 = lVar21;
              func_0x00010bf52a60();
            }
            _objc_release(lVar21);
            func_0x00010befa120(puVar6);
            _objc_release(lVar11);
            puVar20 = puVar20 + 1;
          } while (puVar20 != puVar10);
          puVar10 = puVar8;
          func_0x00010bf52a60();
        }
        _objc_release(puVar8);
        _objc_release(puVar8);
        _objc_release(puVar9);
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar7);
      lVar7 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    *(undefined1 *)(lVar5 + 0x50) = 0;
    puVar9 = puVar6;
    func_0x000106d0e204(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed7e20(lVar5);
    _objc_release(puVar9);
    _objc_release(puVar6);
  }
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar5 + 0x58,0);
  _objc_storeStrong(lVar5 + 0x48,0);
  _objc_storeStrong(lVar5 + 0x40,0);
  _objc_storeStrong(lVar5 + 0x38,0);
  _objc_storeStrong(lVar5 + 0x30,0);
  _objc_storeStrong(lVar5 + 0x28,0);
  _objc_storeStrong(lVar5 + 0x20,0);
  _objc_storeStrong(lVar5 + 0x18,0);
  _objc_storeStrong(lVar5 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar5 + 8,0);
  return;
}



/* Entry: 106a0d734; end: 106a0d7c3; -[SCMemoriesFavoriteSnapsStoryDataCoordinator .cxx_destruct] */

void FUN_106a0d734(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a0d7c4; end: 106a0db43; -[SCMemoriesFavoriteSnapsStoryEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0d7c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112755d9c;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar13;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar13);
  lVar13 = param_1;
  func_0x00010bdf0040();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112755d98;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar14;
  func_0x00010c0eada0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf22c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar14);
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112755d94;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar14;
  func_0x00010c0c9e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  puVar5 = PTR_PTR_1126cfbf8;
  _objc_alloc(PTR_PTR_1126cfbf8);
  lVar14 = param_1;
  FUN_106a0db44();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_106a0db44();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf63700();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112755d88;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar11;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
    lVar12 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112755d90;
    _objc_loadWeakRetained();
    lVar12 = param_1 + _DAT_112755da4;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar12;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112755dac;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar16;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112755da0;
    _objc_loadWeakRetained();
  }
  func_0x00010c0117c0(puVar5,param_2,lVar3,lVar2,lVar7,lVar4,lVar1,lVar8,lVar15,lVar9,lVar10,lVar17)
  ;
  _objc_release(lVar17);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar14);
  FUN_106a0db44(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a0db44; end: 106a0db67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0db44(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112755d8c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a0db68; end: 106a0dc4b; -[SCMemoriesFavoriteSnapsStoryEntryPoint _createMemoriesOperaSessionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0db68(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112755da8;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b2208;
  _objc_alloc(PTR_PTR_1126b2208);
  func_0x000108ec17a8(lVar1,8);
  func_0x00010bff9720(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a0dc4c; end: 106a0dcd3; -[SCMemoriesFavoriteSnapsStoryEntryPoint end] */

void FUN_106a0dc4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_106a0db44();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f4378;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a0dcd4; end: 106a0dd6b; -[SCMemoriesFavoriteSnapsStoryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0dcd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112755dac);
  _objc_destroyWeak(param_1 + _DAT_112755da8);
  _objc_destroyWeak(param_1 + _DAT_112755da4);
  _objc_destroyWeak(param_1 + _DAT_112755da0);
  _objc_destroyWeak(param_1 + _DAT_112755d9c);
  _objc_destroyWeak(param_1 + _DAT_112755d98);
  _objc_destroyWeak(param_1 + _DAT_112755d94);
  _objc_destroyWeak(param_1 + _DAT_112755d90);
  _objc_destroyWeak(param_1 + _DAT_112755d8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112755d88);
  return;
}



/* Entry: 106a0dd6c; end: 106a0de2f; -[SCMemoriesFavoriteSnapsStoryScope initWithScopeDelegate:uiContainer:dataCoordinator:] */

undefined1 *
FUN_106a0dd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4380;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a0de30; end: 106a0de47; -[SCMemoriesFavoriteSnapsStoryScope scopeDelegate] */

void FUN_106a0de30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a0de48; end: 106a0de4f; -[SCMemoriesFavoriteSnapsStoryScope uiContainer] */

undefined8 FUN_106a0de48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


