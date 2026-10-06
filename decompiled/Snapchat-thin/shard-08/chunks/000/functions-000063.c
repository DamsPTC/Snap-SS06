/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cd3400; end: 105cd3407; -[SCMemoriesContentUnderstandingTabController setScrollContentOffset:] */

void FUN_105cd3400(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x98) = param_1;
  return;
}



/* Entry: 105cd3408; end: 105cd340f; -[SCMemoriesContentUnderstandingTabController visible] */

undefined1 FUN_105cd3408(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



/* Entry: 105cd3410; end: 105cd3417; -[SCMemoriesContentUnderstandingTabController setVisible:] */

void FUN_105cd3410(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 105cd3418; end: 105cd341f; -[SCMemoriesContentUnderstandingTabController focused] */

undefined1 FUN_105cd3418(long param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}



/* Entry: 105cd3420; end: 105cd3427; -[SCMemoriesContentUnderstandingTabController setFocused:] */

void FUN_105cd3420(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x91) = param_3;
  return;
}



/* Entry: 105cd3428; end: 105cd342f; -[SCMemoriesContentUnderstandingTabController loading] */

undefined1 FUN_105cd3428(long param_1)

{
  return *(undefined1 *)(param_1 + 0x92);
}



/* Entry: 105cd3430; end: 105cd3437; -[SCMemoriesContentUnderstandingTabController setLoading:] */

void FUN_105cd3430(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x92) = param_3;
  return;
}



/* Entry: 105cd3438; end: 105cd343f; -[SCMemoriesContentUnderstandingTabController selectMode] */

undefined1 FUN_105cd3438(long param_1)

{
  return *(undefined1 *)(param_1 + 0x93);
}



/* Entry: 105cd3440; end: 105cd3447; -[SCMemoriesContentUnderstandingTabController setSelectMode:] */

void FUN_105cd3440(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x93) = param_3;
  return;
}



/* Entry: 105cd3448; end: 105cd345f; -[SCMemoriesContentUnderstandingTabController delegate] */

void FUN_105cd3448(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cd3460; end: 105cd346b; -[SCMemoriesContentUnderstandingTabController setDelegate:] */

void FUN_105cd3460(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 105cd346c; end: 105cd349b; -[SCMemoriesContentUnderstandingTabController setView:] */

void FUN_105cd346c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd349c; end: 105cd3583; -[SCMemoriesContentUnderstandingTabController .cxx_destruct] */

void FUN_105cd349c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105cd3584; end: 105cd36ef; -[SCMemoriesContentUnderstandingTabDataSource initWithMemoriesSearchDatabase:memoriesMergedDataSource:searchIndexer:experimentService:] */

undefined1 *
FUN_105cd3584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ecc58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar3);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x18));
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd36f0; end: 105cd36f3; -[SCMemoriesContentUnderstandingTabDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_105cd36f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateViewModels_112564ac8);
  return;
}



/* Entry: 105cd36f4; end: 105cd36f7; -[SCMemoriesContentUnderstandingTabDataSource searchIndexer:didChangeStatus:] */

void FUN_105cd36f4(void)

{
  return;
}



/* Entry: 105cd36f8; end: 105cd36fb; -[SCMemoriesContentUnderstandingTabDataSource searchIndexerDidUpdateDatabase:] */

void FUN_105cd36f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateViewModels_112564ac8);
  return;
}



/* Entry: 105cd36fc; end: 105cd3753; -[SCMemoriesContentUnderstandingTabDataSource _generateViewModels] */

void FUN_105cd36fc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105cd3754;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105cd3754; end: 105cd3a2f;  */

void FUN_105cd3754(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf85d40();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf45b00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0cf420();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(lVar3);
  lVar5 = lVar3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        uVar11 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
        uVar6 = uVar11;
        func_0x00010c0c1f00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_f8 = uVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7560(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar10;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(puVar7);
        _objc_release(uVar6);
        puVar7 = PTR_PTR_1126c3bd8;
        _objc_alloc(PTR_PTR_1126c3bd8);
        uVar6 = uVar11;
        func_0x00010bf45ac0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2762c0(uVar11);
        func_0x00010c050480(puVar7);
        _objc_release(uVar6);
        func_0x00010befa120(puVar4);
        _objc_release(puVar7);
        _objc_release(uVar8);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar3);
  _objc_initWeak(auStack_148,*(undefined8 *)(param_1 + 0x20));
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_105cd3a30;
  puStack_160 = &UNK_110841fb0;
  _objc_copyWeak(auStack_150,auStack_148);
  _objc_retain(puVar4);
  puStack_158 = puVar4;
  func_0x000100162d98("APPSTORE",&puStack_178);
  _objc_release(puStack_158);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar3 = lVar3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar5 = lVar3 + 0x30;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf4dc00();
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105cd3a30; end: 105cd3a87;  */

void FUN_105cd3a30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4dc00();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cd3a88; end: 105cd3a9f; -[SCMemoriesContentUnderstandingTabDataSource delegate] */

void FUN_105cd3a88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cd3aa0; end: 105cd3aab; -[SCMemoriesContentUnderstandingTabDataSource setDelegate:] */

void FUN_105cd3aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105cd3aac; end: 105cd3b07; -[SCMemoriesContentUnderstandingTabDataSource .cxx_destruct] */

void FUN_105cd3aac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd3b08; end: 105cd3cd7; -[SCMemoriesContentUnderstandingTabService initWithMemoriesSearchDatabase:gallerySearch:memoriesMergedDataSource:memoriesSnapThumbnailGeneratorBuilder:searchIndexer:streamingContentPrefetcher:operaPresenter:applicationLifecycleEvents:memoriesSelectionFooterBarControllerFactory:] */

undefined1 *
FUN_105cd3b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ecc60;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd3cd8; end: 105cd3cdf; -[SCMemoriesContentUnderstandingTabService memoriesSearchDatabase] */

undefined8 FUN_105cd3cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cd3ce0; end: 105cd3ce7; -[SCMemoriesContentUnderstandingTabService gallerySearch] */

undefined8 FUN_105cd3ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105cd3ce8; end: 105cd3cef; -[SCMemoriesContentUnderstandingTabService memoriesMergedDataSource] */

undefined8 FUN_105cd3ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105cd3cf0; end: 105cd3cf7; -[SCMemoriesContentUnderstandingTabService memoriesSnapThumbnailGeneratorBuilder] */

undefined8 FUN_105cd3cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105cd3cf8; end: 105cd3cff; -[SCMemoriesContentUnderstandingTabService searchIndexer] */

undefined8 FUN_105cd3cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105cd3d00; end: 105cd3d07; -[SCMemoriesContentUnderstandingTabService applicationLifecycleEvents] */

undefined8 FUN_105cd3d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105cd3d08; end: 105cd3d0f; -[SCMemoriesContentUnderstandingTabService memoriesSelectionFooterBarControllerFactory] */

undefined8 FUN_105cd3d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105cd3d10; end: 105cd3d17; -[SCMemoriesContentUnderstandingTabService streamingContentPrefetcher] */

undefined8 FUN_105cd3d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105cd3d18; end: 105cd3d1f; -[SCMemoriesContentUnderstandingTabService operaPresenter] */

undefined8 FUN_105cd3d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105cd3d20; end: 105cd3da3; -[SCMemoriesContentUnderstandingTabService .cxx_destruct] */

void FUN_105cd3d20(long param_1)

{
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



/* Entry: 105cd3da4; end: 105cd3e17; -[SCMemoriesContentUnderstandingTabServices initWithMemoriesContentUnderstandingTabService:] */

undefined1 * FUN_105cd3da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecc68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd3e18; end: 105cd3e1f; -[SCMemoriesContentUnderstandingTabServices memoriesContentUnderstandingTabService] */

undefined8 FUN_105cd3e18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cd3e20; end: 105cd3e2b; -[SCMemoriesContentUnderstandingTabServices .cxx_destruct] */

void FUN_105cd3e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd3e2c; end: 105cd3f2b; -[SCMemoriesContentUnderstandingTabServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd3e2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3be0;
  _objc_alloc(PTR_PTR_1126c3be0);
  func_0x00010c02a5a0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112733f84));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cd3f2c; end: 105cd3f6b;  */

void FUN_105cd3f2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105cd3f6c; end: 105cd4273; -[SCMemoriesContentUnderstandingTabServicesEntryPoint _memoriesContentUnderstandingTabService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd3f6c(long param_1,undefined8 param_2)

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
  
  lVar1 = param_1;
  func_0x00010bdf0040();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112733fa8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar13;
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
  _objc_release(lVar13);
  puVar5 = PTR_PTR_1126c3be8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112733f8c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar13;
  func_0x00010c0c9740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_105cd4274();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bfbd5c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112733f94;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar14;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112733f98;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar15;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_105cd4274();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfbd5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112733f9c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar16;
  func_0x00010c0c9e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112733fa0;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar17;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112733fa4;
    _objc_loadWeakRetained();
  }
  func_0x00010c02ac00(puVar5,param_2,lVar2,lVar6,lVar7,lVar8,lVar10,lVar11,lVar4,lVar12,param_1);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar17);
  _objc_release(lVar11);
  _objc_release(lVar16);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105cd4274; end: 105cd4297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd4274(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112733f90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cd4298; end: 105cd430f; -[SCMemoriesContentUnderstandingTabServicesEntryPoint _createMemoriesOperaSessionConfig] */

void FUN_105cd4298(void)

{
  _objc_alloc(PTR_PTR_1126b2208);
  func_0x00010bff9720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cd4310; end: 105cd43ab; -[SCMemoriesContentUnderstandingTabServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cd4310(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733f84,0);
  _objc_destroyWeak(param_1 + _DAT_112733fa8);
  _objc_destroyWeak(param_1 + _DAT_112733fa4);
  _objc_destroyWeak(param_1 + _DAT_112733fa0);
  _objc_destroyWeak(param_1 + _DAT_112733f9c);
  _objc_destroyWeak(param_1 + _DAT_112733f98);
  _objc_destroyWeak(param_1 + _DAT_112733f94);
  _objc_destroyWeak(param_1 + _DAT_112733f90);
  _objc_destroyWeak(param_1 + _DAT_112733f8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112733f88);
  return;
}



/* Entry: 105cd43ac; end: 105cd441f; -[SCMemoriesDiffableContentUnderstandingTabCellViewModel initWithViewModel:] */

undefined1 * FUN_105cd43ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecc70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd4420; end: 105cd44df; -[SCMemoriesDiffableContentUnderstandingTabCellViewModel diffIdentifier] */

void FUN_105cd4420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2682c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245760();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26e2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbc478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105cd44e0; end: 105cd4597; -[SCMemoriesDiffableContentUnderstandingTabCellViewModel isEqualToDiffableObject:] */

ulong FUN_105cd44e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126c3bd0;
    _objc_opt_class(PTR_PTR_1126c3bd0);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      func_0x00010bf7ecc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf7ecc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105cd4598; end: 105cd45a3; -[SCMemoriesDiffableContentUnderstandingTabCellViewModel .cxx_destruct] */

void FUN_105cd4598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd45a4; end: 105cd4657; -[SCMemoriesContentUnderstandingTabCellViewModel initWithTagName:thumbnailSnap:snapsCount:] */

undefined1 *
FUN_105cd45a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecc78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd4658; end: 105cd467b; -[SCMemoriesContentUnderstandingTabCellViewModel copyWithZone:] */

undefined8 FUN_105cd4658(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105cd467c; end: 105cd46fb; -[SCMemoriesContentUnderstandingTabCellViewModel hash] */

undefined8 * FUN_105cd467c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105cd478c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105cd4798;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105cd4798;
        }
        goto LAB_105cd478c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105cd4798:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105cd46fc; end: 105cd47b3; -[SCMemoriesContentUnderstandingTabCellViewModel isEqual:] */

long FUN_105cd46fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105cd478c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105cd4798;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105cd4798;
        }
        goto LAB_105cd478c;
      }
    }
    lVar3 = 0;
  }
LAB_105cd4798:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105cd47b4; end: 105cd47bb; -[SCMemoriesContentUnderstandingTabCellViewModel tagName] */

undefined8 FUN_105cd47b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cd47bc; end: 105cd47c3; -[SCMemoriesContentUnderstandingTabCellViewModel thumbnailSnap] */

undefined8 FUN_105cd47bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105cd47c4; end: 105cd47cb; -[SCMemoriesContentUnderstandingTabCellViewModel snapsCount] */

undefined8 FUN_105cd47c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105cd47cc; end: 105cd47fb; -[SCMemoriesContentUnderstandingTabCellViewModel .cxx_destruct] */

void FUN_105cd47cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd47fc; end: 105cd497b; -[SCMemoriesDreamsDataSource initWithMergedDataSource:genAIDreamsService:] */

undefined1 *
FUN_105cd47fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecc80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd497c; end: 105cd49ab; -[SCMemoriesDreamsDataSource prepareForUnpack:] */

void FUN_105cd497c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd49ac; end: 105cd49d3; -[SCMemoriesDreamsDataSource nextGenerationDreamsPackObservable] */

void FUN_105cd49ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cd49d4; end: 105cd49fb; -[SCMemoriesDreamsDataSource nextGenerationGallerySnapsObservable] */

void FUN_105cd49d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cd49fc; end: 105cd4baf; -[SCMemoriesDreamsDataSource selectedGalleryItems:] */

void FUN_105cd49fc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined *puStack_390;
  undefined8 uStack_388;
  code *pcStack_380;
  undefined *puStack_378;
  long lStack_370;
  ulong uStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_1b0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar16 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar20 = param_3;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar21 = *plStack_120;
    do {
      lVar23 = 0;
      do {
        if (*plStack_120 != lVar21) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar23 * 8);
        uVar18 = *(ulong *)(param_1 + 0x30);
        func_0x00010c241220(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar4 = PTR_PTR_1126af4c0;
        _objc_retain(uVar18);
        _objc_opt_class(puVar4);
        uVar5 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar4);
        uVar1 = uVar18;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar18);
        if (uVar1 != 0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(uVar1);
        _objc_release(uVar18);
        lVar23 = lVar23 + 1;
      } while (lVar20 != lVar23);
      lVar20 = param_3;
      puVar16 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lVar21 = *(long *)(param_3 + 0x48);
  func_0x00010bfc0840();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar21;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar23 = *plStack_2e0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_2e0 != lVar23) {
          _objc_enumerationMutation(lVar21);
        }
        uVar3 = *(undefined8 *)(lStack_2e8 + lVar19 * 8);
        func_0x00010bf8a400();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        _objc_release(uVar3);
        lVar19 = lVar19 + 1;
      } while (lVar20 != lVar19);
      lVar20 = lVar21;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
  }
  _objc_release(lVar21);
  uVar3 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  _objc_retain(puVar16);
  puVar12 = (undefined1 *)puVar16;
  func_0x00010bf52a60();
  if (puVar12 != (undefined1 *)0x0) {
    lVar20 = *plStack_320;
    do {
      puVar22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar20) {
          _objc_enumerationMutation(puVar16);
        }
        uVar18 = *(ulong *)(lStack_328 + (long)puVar22 * 8);
        uVar13 = *(undefined8 *)(param_3 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar13;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        puStack_390 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_388 = 0xc2000000;
        pcStack_380 = FUN_105cd50c8;
        puStack_378 = &UNK_1108e47f0;
        lStack_370 = param_3;
        uStack_368 = uVar18;
        _objc_retain(puVar11);
        puStack_360 = puVar11;
        _objc_retain(puVar6);
        puStack_358 = puVar6;
        _objc_retain(puVar9);
        puStack_350 = puVar9;
        _objc_retain(puVar10);
        puStack_348 = puVar10;
        _objc_retain(puVar8);
        puStack_340 = puVar8;
        _objc_retain(puVar4);
        uVar13 = uVar17;
        puStack_338 = puVar4;
        func_0x000100504554(uVar17,&puStack_390);
        func_0x00010befa160(puVar2);
        puVar14 = PTR_PTR_1126af4c0;
        _objc_retain(uVar18);
        _objc_opt_class(puVar14);
        uVar5 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar14);
        uVar1 = uVar18;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar18);
        if (uVar1 != 0) {
          func_0x00010befa120(puVar7);
        }
        _objc_release(uVar1);
        _objc_release(uVar13);
        _objc_release(puStack_338);
        _objc_release(puStack_340);
        _objc_release(puStack_348);
        _objc_release(puStack_350);
        _objc_release(puStack_358);
        _objc_release(puStack_360);
        _objc_release(uVar17);
        puVar22 = puVar22 + 1;
      } while (puVar12 != puVar22);
      puVar12 = (undefined1 *)puVar16;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined1 *)0x0);
  }
  _objc_release(puVar16);
  puVar14 = puVar9;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_3 + 0x30);
  *(undefined **)(param_3 + 0x30) = puVar14;
  _objc_release(uVar17);
  puVar14 = puVar10;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_3 + 0x38);
  *(undefined **)(param_3 + 0x38) = puVar14;
  _objc_release(uVar17);
  puVar14 = puVar7;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_3 + 0x50);
  *(undefined **)(param_3 + 0x50) = puVar14;
  _objc_release(uVar17);
  puVar14 = PTR_PTR_1126ae820;
  uVar18 = *(ulong *)(param_3 + 0x60);
  _objc_retain(uVar18);
  _objc_opt_class(puVar14);
  uVar5 = uVar18;
  _objc_opt_isKindOfClass(uVar18,puVar14);
  uVar1 = uVar18;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar18);
  func_0x00010c0d9840(uVar1);
  puVar15 = puVar6;
  func_0x00010bf529e0();
  if ((puVar15 != (undefined *)0x0) && (*(long *)(param_3 + 0x48) != 0)) {
    puVar15 = PTR_PTR_1126c3bf0;
    _objc_alloc(PTR_PTR_1126c3bf0);
    uVar17 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010c0f0a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032c80(puVar15);
    _objc_release(uVar17);
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x20));
    _objc_release(puVar15);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x28));
  uVar17 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_3 + 0x48) = 0;
  _objc_release(uVar17);
  _objc_release(uVar1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  puVar2 = *(undefined **)((long)puVar16 + 0x20);
  func_0x00010be0da80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = *(undefined **)((long)puVar16 + 0x20);
    func_0x00010be0db40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010befa120(*(undefined8 *)((long)puVar16 + 0x58));
      uVar3 = *(undefined8 *)((long)puVar16 + 0x40);
      puVar6 = puVar14;
      func_0x00010c241220(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(puVar6);
      uVar3 = *(undefined8 *)((long)puVar16 + 0x48);
      puVar6 = puVar14;
      func_0x00010c241220(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(puVar6);
      goto LAB_105cd539c;
    }
  }
  else {
    uVar17 = *(undefined8 *)((long)puVar16 + 0x40);
    puVar4 = puVar14;
    func_0x00010c241220(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar17);
    _objc_release(puVar4);
    uVar17 = *(undefined8 *)((long)puVar16 + 0x48);
    puVar4 = puVar14;
    func_0x00010c241220(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar17);
    _objc_release(puVar4);
    func_0x00010befa120(*(undefined8 *)((long)puVar16 + 0x50));
    puVar4 = PTR_PTR_1126c3bf8;
    _objc_retain(puVar2);
    _objc_alloc(puVar4);
    puVar6 = puVar2;
    func_0x00010bf97200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c241220(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c26e4e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf59920(puVar2);
    uVar17 = uVar3;
    func_0x00010c0830a0(puVar2);
    func_0x00010bf8b340(puVar2);
    func_0x00010c010320(uVar3,uVar17,puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010bf8a6c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c191d40(puVar4);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010c0f0a00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7da0(puVar4);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010bfc0980(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2840(puVar4);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010bf8a6c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar7 = puVar6;
    func_0x00010c094540(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010befa120(*(undefined8 *)((long)puVar16 + 0x58));
LAB_105cd539c:
    uVar3 = *(undefined8 *)(*(long *)((long)puVar16 + 0x20) + 0x40);
    puVar6 = puVar14;
    func_0x00010c241220(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    uVar3 = *(undefined8 *)(*(long *)((long)puVar16 + 0x20) + 0x40);
    puVar6 = puVar14;
    func_0x00010c241220(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar14);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105cd4bb0; end: 105cd50c7; -[SCMemoriesDreamsDataSource _updateDreamsSnaps:] */

void FUN_105cd4bb0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  long lStack_240;
  ulong uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar10 = *(long *)(param_1 + 0x48);
  func_0x00010bfc0840();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar19 = *plStack_1b0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_1b0 != lVar19) {
          _objc_enumerationMutation(lVar10);
        }
        uVar12 = *(undefined8 *)(lStack_1b8 + lVar20 * 8);
        func_0x00010bf8a400();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(uVar12);
        lVar20 = lVar20 + 1;
      } while (lVar11 != lVar20);
      lVar11 = lVar10;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar10);
  uVar12 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(param_3);
  lVar11 = param_3;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar10 = *plStack_1f0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_1f0 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar18 = *(ulong *)(lStack_1f8 + lVar19 * 8);
        uVar13 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar13;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_258 = 0xc2000000;
        pcStack_250 = FUN_105cd50c8;
        puStack_248 = &UNK_1108e47f0;
        lStack_240 = param_1;
        uStack_238 = uVar18;
        _objc_retain(puVar9);
        puStack_230 = puVar9;
        _objc_retain(puVar4);
        puStack_228 = puVar4;
        _objc_retain(puVar7);
        puStack_220 = puVar7;
        _objc_retain(puVar8);
        puStack_218 = puVar8;
        _objc_retain(puVar6);
        puStack_210 = puVar6;
        _objc_retain(puVar3);
        uVar13 = uVar17;
        puStack_208 = puVar3;
        func_0x000100504554(uVar17,&puStack_260);
        func_0x00010befa160(puVar2);
        puVar14 = PTR_PTR_1126af4c0;
        _objc_retain(uVar18);
        _objc_opt_class(puVar14);
        uVar15 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar14);
        uVar1 = uVar18;
        if ((uVar15 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar18);
        if (uVar1 != 0) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(uVar1);
        _objc_release(uVar13);
        _objc_release(puStack_208);
        _objc_release(puStack_210);
        _objc_release(puStack_218);
        _objc_release(puStack_220);
        _objc_release(puStack_228);
        _objc_release(puStack_230);
        _objc_release(uVar17);
        lVar19 = lVar19 + 1;
      } while (lVar11 != lVar19);
      lVar11 = param_3;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_3);
  puVar14 = puVar7;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar14;
  _objc_release(uVar17);
  puVar14 = puVar8;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar14;
  _objc_release(uVar17);
  puVar14 = puVar5;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar14;
  _objc_release(uVar17);
  puVar14 = PTR_PTR_1126ae820;
  uVar18 = *(ulong *)(param_1 + 0x60);
  _objc_retain(uVar18);
  _objc_opt_class(puVar14);
  uVar15 = uVar18;
  _objc_opt_isKindOfClass(uVar18,puVar14);
  uVar1 = uVar18;
  if ((uVar15 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar18);
  func_0x00010c0d9840(uVar1);
  puVar16 = puVar4;
  func_0x00010bf529e0();
  if ((puVar16 != (undefined *)0x0) && (*(long *)(param_1 + 0x48) != 0)) {
    puVar16 = PTR_PTR_1126c3bf0;
    _objc_alloc(PTR_PTR_1126c3bf0);
    uVar17 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0f0a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032c80(puVar16);
    _objc_release(uVar17);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar16);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar17);
  _objc_release(uVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  lVar11 = *(long *)(param_3 + 0x20);
  func_0x00010be0da80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    puVar2 = *(undefined **)(param_3 + 0x20);
    func_0x00010be0db40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) goto LAB_105cd540c;
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x58));
    uVar12 = *(undefined8 *)(param_3 + 0x40);
    puVar3 = puVar14;
    func_0x00010c241220(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar12);
    _objc_release(puVar3);
    uVar12 = *(undefined8 *)(param_3 + 0x48);
    puVar3 = puVar14;
    func_0x00010c241220(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar12);
    _objc_release(puVar3);
  }
  else {
    uVar17 = *(undefined8 *)(param_3 + 0x40);
    puVar2 = puVar14;
    func_0x00010c241220(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar17);
    _objc_release(puVar2);
    uVar17 = *(undefined8 *)(param_3 + 0x48);
    puVar2 = puVar14;
    func_0x00010c241220(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar17);
    _objc_release(puVar2);
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x50));
    puVar2 = PTR_PTR_1126c3bf8;
    _objc_retain(lVar11);
    _objc_alloc(puVar2);
    lVar10 = lVar11;
    func_0x00010bf97200(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar11;
    func_0x00010c241220(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar11;
    func_0x00010c26e4e0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf59920(lVar11);
    uVar17 = uVar12;
    func_0x00010c0830a0(lVar11);
    func_0x00010bf8b340(lVar11);
    func_0x00010c010320(uVar12,uVar17,puVar2);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar10);
    lVar10 = lVar11;
    func_0x00010bf8a6c0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c191d40(puVar2);
    _objc_release(lVar10);
    lVar10 = lVar11;
    func_0x00010c0f0a00(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7da0(puVar2);
    _objc_release(lVar10);
    lVar10 = lVar11;
    func_0x00010bfc0980(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2840(puVar2);
    _objc_release(lVar10);
    lVar10 = lVar11;
    func_0x00010bf8a6c0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar19 = lVar10;
    func_0x00010c094540(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar2);
    _objc_release(lVar19);
    _objc_release(lVar10);
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x58));
  }
  uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x40);
  puVar3 = puVar14;
  func_0x00010c241220(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x40);
  puVar3 = puVar14;
  func_0x00010c241220(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar12);
  _objc_release(puVar3);
LAB_105cd540c:
  _objc_release(puVar2);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 105cd50c8; end: 105cd543b;  */

void FUN_105cd50c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010be0da80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = *(undefined **)(param_2 + 0x20);
    func_0x00010be0db40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_105cd540c;
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x58));
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    uVar6 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    uVar6 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(uVar6);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    uVar6 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    uVar6 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(uVar6);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x50));
    puVar5 = PTR_PTR_1126c3bf8;
    _objc_retain(lVar1);
    _objc_alloc(puVar5);
    lVar2 = lVar1;
    func_0x00010bf97200(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c241220(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c26e4e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf59920(lVar1);
    uVar6 = param_1;
    func_0x00010c0830a0(lVar1);
    func_0x00010bf8b340(lVar1);
    func_0x00010c010320(param_1,uVar6,puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf8a6c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c191d40(puVar5);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0f0a00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7da0(puVar5);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bfc0980(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2840(puVar5);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf8a6c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar3 = lVar2;
    func_0x00010c094540(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x58));
  }
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40);
  uVar6 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40);
  uVar6 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7);
  _objc_release(uVar6);
LAB_105cd540c:
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105cd543c; end: 105cd59eb; -[SCMemoriesDreamsDataSource _extractGenAISnapFromGallerySnap:inGalleryEntry:] */

void FUN_105cd543c(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  float fVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar20 = param_5;
  func_0x00010bf977c0();
  uVar2 = param_5;
  func_0x00010bf977c0();
  uVar3 = param_5;
  func_0x00010bf977c0();
  uVar1 = (int)uVar3 - 0x39;
  if ((((0x15 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) == 0)) && ((int)uVar20 != 0x4e))
     && ((int)uVar2 != 0x4d)) {
    puVar17 = (undefined *)0x0;
    goto LAB_105cd59b0;
  }
  func_0x00010bf8b160(param_4);
  dVar19 = (double)param_1;
  dVar21 = 0.0;
  uVar20 = 0x3fb999999999999a;
  if (((0.1 < dVar19) && (uVar4 = param_4, func_0x00010b5fa088(), uVar4 < 0xd)) &&
     ((1L << (uVar4 & 0x3f) & 0x1566U) != 0)) {
    func_0x00010bf8b160(param_4);
    uVar20 = 0x447a0000;
    fVar18 = SUB84(dVar19,0) * 1000.0;
    dVar19 = (double)(ulong)(uint)fVar18;
    dVar21 = (double)fVar18;
  }
  FUN_105cd6624();
  uVar4 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000106d7a74c(dVar19,uVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar17 = PTR_PTR_1126c3bf8;
  _objc_alloc(PTR_PTR_1126c3bf8);
  uVar20 = param_5;
  func_0x00010bf97200(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010beec820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar7 = param_4;
  func_0x00010bf59960(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar8);
  func_0x00010c010320((double)(long)puVar8,dVar21,puVar17);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar20);
  uVar4 = param_4;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR_PTR_1126b25c0;
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c23ff80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (puVar8 != (undefined *)0x0) {
      puVar9 = puVar8;
      func_0x000107e63da0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c08fa60();
      if (puVar10 != (undefined *)0x0) {
        func_0x00010c1bbd60(puVar17);
      }
      puVar10 = puVar8;
      func_0x000107e64684();
      _objc_retainAutoreleasedReturnValue();
      if (puVar10 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126c3c00;
        _objc_alloc(PTR_PTR_1126c3c00);
        puVar12 = puVar10;
        func_0x00010c26afc0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010c0f0a00(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar10;
        func_0x00010c2948c0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00e5e0(puVar11);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        func_0x00010c191d40(puVar17);
        puVar12 = puVar10;
        func_0x00010bfc0980();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bfe2ee0();
        if (puVar13 == (undefined *)0x0) {
          puVar13 = puVar10;
          func_0x00010bfc0980();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0b5940();
          _objc_release(puVar13);
          _objc_release(puVar12);
          if (puVar14 != (undefined *)0x0) goto LAB_105cd57d8;
        }
        else {
          _objc_release(puVar12);
LAB_105cd57d8:
          puVar12 = puVar10;
          func_0x00010bfc0980(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bfe2ee0();
          puVar14 = puVar12;
          func_0x00010c0b5940(puVar12);
          func_0x000100c4a928(puVar13,puVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          func_0x00010c1a2840(puVar17);
          _objc_release(puVar14);
          _objc_release(puVar12);
        }
        _objc_release(puVar11);
      }
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
  }
  uVar4 = param_4;
  func_0x00010bf9e420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010b5f7abc();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      puVar8 = PTR_PTR_1126c3c00;
      _objc_alloc(PTR_PTR_1126c3c00);
      uVar6 = uVar4;
      func_0x00010bf8a400(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bf8a7e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar4;
      func_0x00010bfe6080(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar4;
      func_0x00010c292720(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e5e0(puVar8);
      func_0x00010c191d40(puVar17);
      _objc_release(puVar8);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar6 = uVar4;
      func_0x00010bfc0980(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a2840(puVar17);
      _objc_release(uVar6);
      uVar6 = uVar4;
      func_0x00010c094540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(puVar17);
      _objc_release(uVar6);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar5);
LAB_105cd59b0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105cd59ec; end: 105cd5e8f; -[SCMemoriesDreamsDataSource _extractDreamsSnapFromGallerySnap:inGalleryEntry:nextGenerationDreamIds:newGenerationDreams:] */

void FUN_105cd59ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010bf977c0();
  if ((int)uVar1 == 0x39) {
    puVar2 = param_5;
    func_0x00010bf9e420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_5;
      func_0x00010b5f7abc();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf8a7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010c08fa60();
      if (puVar14 == (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
LAB_105cd5e38:
        _objc_release(puVar3);
      }
      else {
        puVar14 = puVar2;
        func_0x00010bf8a400();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar14;
        func_0x00010c08fa60();
        _objc_release(puVar14);
        _objc_release(puVar3);
        if (puVar4 != (undefined *)0x0) {
          puVar3 = PTR_PTR_1126c3c00;
          _objc_alloc();
          puVar14 = puVar2;
          func_0x00010bf8a400(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010bf8a7e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          func_0x00010bfe6080(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010c292720(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c00e5e0(puVar3,param_4,puVar14,puVar4,puVar5,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar14);
          puVar14 = puVar2;
          func_0x00010c094540(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60(puVar3,param_4,puVar14);
          _objc_release(puVar14);
          FUN_105cd6624();
          puVar14 = param_5;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar14;
          func_0x000106d7a74c(param_1,param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          puVar14 = PTR_PTR_1126c3c08;
          _objc_alloc();
          uVar1 = param_6;
          func_0x00010bf97200(param_6);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_5;
          func_0x00010c241220(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010bf8a420(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar5;
          func_0x00010beec820(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
          puVar9 = param_5;
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f260(puVar4,param_4,puVar9);
          puVar10 = param_5;
          func_0x00010c26e480(param_5);
          func_0x00010c0102e0((double)(long)puVar4,0,puVar14,param_4,uVar1,puVar6,puVar7,puVar8,
                              puVar10,0,0,0,0);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(uVar1);
          func_0x00010c191d40(puVar14,param_4,puVar3);
          puVar4 = puVar2;
          func_0x00010bfc0980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a2840(puVar14,param_4,puVar4);
          _objc_release(puVar4);
          puVar4 = puVar3;
          func_0x00010bf8a400(puVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_7;
          func_0x00010bf4b900(param_7,param_4,puVar4);
          _objc_release(puVar4);
          if ((int)uVar1 != 0) {
            lVar11 = *(long *)(param_3 + 0x48);
            func_0x00010c292720();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010bf529e0();
            if (lVar12 == 0) {
              _objc_release(lVar11);
            }
            else {
              puVar4 = puVar3;
              func_0x00010c292720();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar4;
              func_0x00010bf529e0();
              _objc_release(puVar4);
              _objc_release(lVar11);
              if (puVar6 != (undefined *)0x0) {
                uVar13 = *(undefined8 *)(param_3 + 0x48);
                func_0x00010c292720();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar3;
                func_0x00010c292720(puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar4;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                uVar1 = uVar13;
                func_0x00010bf4b900(uVar13,param_4,puVar6);
                _objc_release(puVar6);
                _objc_release(puVar4);
                _objc_release(uVar13);
                if ((int)uVar1 == 0) goto LAB_105cd5e2c;
              }
            }
            func_0x00010befa120(param_8,param_4,puVar14);
          }
LAB_105cd5e2c:
          _objc_release(puVar5);
          goto LAB_105cd5e38;
        }
        puVar14 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      goto LAB_105cd5e48;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_105cd5e48:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105cd5e90; end: 105cd5fd7; -[SCMemoriesDreamsDataSource gallerySnapsForSnapIds:] */

void FUN_105cd5e90(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *unaff_x25;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar13 = *plStack_110;
    do {
      unaff_x25 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(param_1 + 0x38);
        func_0x00010c0e00e0(lVar3,param_2,*(undefined8 *)(lStack_118 + (long)unaff_x25 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar3);
        }
        _objc_release(lVar3);
        unaff_x25 = unaff_x25 + 1;
      } while (puVar2 != unaff_x25);
      puVar2 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar11 = &uStack_240;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain(puVar4);
    puVar2 = (undefined1 *)puVar4;
    func_0x00010bf52a60(puVar4,param_2,&uStack_240,auStack_1f8,0x10);
    if (puVar2 != (undefined1 *)0x0) {
      lVar13 = *plStack_230;
      do {
        unaff_x25 = (undefined1 *)0x0;
        do {
          if (*plStack_230 != lVar13) {
            _objc_enumerationMutation(puVar4);
          }
          lVar3 = *(long *)(param_3 + 0x30);
          func_0x00010c0e00e0(lVar3,param_2,*(undefined8 *)(lStack_238 + (long)unaff_x25 * 8));
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            func_0x00010befa120(puVar1,param_2,lVar3);
          }
          _objc_release(lVar3);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar2 != unaff_x25);
        puVar2 = (undefined1 *)puVar4;
        puVar11 = &uStack_240;
        func_0x00010bf52a60(puVar4,param_2,&uStack_240,auStack_1f8,0x10);
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      puVar12 = *(undefined1 **)((long)puVar4 + 0x40);
      _objc_retain(puVar11);
      func_0x00010c0e00e0(puVar12,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar4 + 0x30);
      func_0x00010c0e00e0(uVar5,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar1 = PTR_PTR_1126c3c10;
      _objc_alloc(PTR_PTR_1126c3c10);
      puVar2 = puVar12;
      func_0x00010bf8a6c0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c292720();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      puVar8 = puVar12;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      if (puVar8 == (undefined1 *)0x0) {
        unaff_x25 = puVar12;
        func_0x00010bf8a6c0(puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = unaff_x25;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar10 = uVar5;
      func_0x00010bf977c0(uVar5);
      func_0x00010c01ebc0(puVar1,param_2,puVar7 != (undefined1 *)0x0,puVar9,(long)(int)uVar10);
      if (puVar8 == (undefined1 *)0x0) {
        _objc_release(puVar9);
        _objc_release(unaff_x25);
      }
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(uVar5);
      _objc_release(puVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cd5fd8; end: 105cd611f; -[SCMemoriesDreamsDataSource galleryEntriesForSnapIds:] */

void FUN_105cd5fd8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x25;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_110;
    do {
      unaff_x25 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(param_1 + 0x30);
        func_0x00010c0e00e0(lVar3,param_2,*(undefined8 *)(lStack_118 + unaff_x25 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar3);
        }
        _objc_release(lVar3);
        unaff_x25 = unaff_x25 + 1;
      } while (lVar2 != unaff_x25);
      lVar2 = param_3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar9 = *(long *)(param_3 + 0x40);
    _objc_retain(puVar8);
    func_0x00010c0e00e0(lVar9,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0e00e0(uVar4,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar1 = PTR_PTR_1126c3c10;
    _objc_alloc(PTR_PTR_1126c3c10);
    lVar2 = lVar9;
    func_0x00010bf8a6c0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c292720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010bf529e0();
    lVar5 = lVar9;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    if (lVar5 == 0) {
      unaff_x25 = lVar9;
      func_0x00010bf8a6c0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = unaff_x25;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = uVar4;
    func_0x00010bf977c0(uVar4);
    func_0x00010c01ebc0(puVar1,param_2,lVar3 != 0,lVar6,(long)(int)uVar7);
    if (lVar5 == 0) {
      _objc_release(lVar6);
      _objc_release(unaff_x25);
    }
    _objc_release(lVar5);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cd6120; end: 105cd6287; -[SCMemoriesDreamsDataSource genAISnapAnalyticsDataForSnapId:] */

void FUN_105cd6120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x25;
  
  lVar9 = *(long *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0e00e0(lVar9,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c3c10;
  _objc_alloc(PTR_PTR_1126c3c10);
  lVar3 = lVar9;
  func_0x00010bf8a6c0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  lVar6 = lVar9;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  if (lVar6 == 0) {
    unaff_x25 = lVar9;
    func_0x00010bf8a6c0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x25;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar8 = uVar1;
  func_0x00010bf977c0(uVar1);
  func_0x00010c01ebc0(puVar2,param_2,lVar5 != 0,lVar7,(long)(int)uVar8);
  if (lVar6 == 0) {
    _objc_release(lVar7);
    _objc_release(unaff_x25);
  }
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105cd6288; end: 105cd63a3; -[SCMemoriesDreamsDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_105cd6288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105cd63a4; end: 105cd6563;  */

long FUN_105cd63a4(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar6 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar6);
    lVar4 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar4 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar6);
          }
          uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
          uVar5 = uVar7;
          func_0x00010c07b240();
          if (((uVar5 & 1) == 0) &&
             ((((uVar5 = uVar7, func_0x00010bf977c0(), (int)uVar5 == 0x39 ||
                (uVar5 = uVar7, func_0x00010bf977c0(), (int)uVar5 == 0x4e)) ||
               (uVar5 = uVar7, func_0x00010bf977c0(), (int)uVar5 == 0x4d)) ||
              ((uVar5 = uVar7, func_0x00010bfbdda0(), (int)uVar5 != 5 &&
               (uVar5 = uVar7, func_0x00010bf977c0(), uVar1 = (int)uVar5 - 0x39,
               uVar1 < 0x16 && (1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0)))))) {
            func_0x00010befa120(puVar3,param_2,uVar7);
          }
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar6);
    func_0x00010bed7300(lVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + 0x50);
}



/* Entry: 105cd6564; end: 105cd656b; -[SCMemoriesDreamsDataSource myDreamsGalleryItems] */

undefined8 FUN_105cd6564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105cd656c; end: 105cd6573; -[SCMemoriesDreamsDataSource myDreamsSubject] */

undefined8 FUN_105cd656c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105cd6574; end: 105cd657b; -[SCMemoriesDreamsDataSource genAISnapsSubject] */

undefined8 FUN_105cd6574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105cd657c; end: 105cd6623; -[SCMemoriesDreamsDataSource .cxx_destruct] */

void FUN_105cd657c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105cd6624; end: 105cd66bb;  */

undefined1  [16] FUN_105cd6624(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  if (lRam00000001136c2240 != -1) {
    func_0x00010002a2fc(0x1136c2240,&PTR___NSConcreteGlobalBlock_1108e4820);
  }
  dVar2 = (double)(long)((param_3 + -3.0) * 0.25);
  auVar3._0_8_ = dVar2 + dVar2;
  auVar3._8_8_ = dVar2 * dRam00000001136c2238 + dVar2 * dRam00000001136c2238;
  return auVar3;
}



/* Entry: 105cd66bc; end: 105cd6777;  */

void FUN_105cd66bc(double param_1,double param_2,double param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar2 = param_1;
  dVar3 = param_2;
  dVar4 = param_3;
  dVar5 = param_4;
  _objc_release(puVar1);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  param_1 = param_1 + dVar3;
  param_3 = param_3 - (dVar3 + dVar5);
  param_4 = param_4 - (dVar2 + dVar4);
  dVar3 = param_1;
  _CGRectGetHeight(param_1,param_2 + dVar2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2 + dVar2,param_3,param_4);
  dRam00000001136c2238 = dVar3 / param_1;
  return;
}



/* Entry: 105cd6778; end: 105cd6a77; -[SCMemoriesDreamsTabController initWithContainerViewController:delegate:dreamsScopeExposer:genAIDreamsScopeServices:generativeAiOnboardingScopeExposer:mergedDatasource:applicationLifecycleEvents:dreamsSessionService:memoriesBackupManager:featureSettingsService:isPlusEarlyAccess:genAIDreamsService:genAIDreamsBadgeService:] */

undefined8 *
FUN_105cd6778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126ecc88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_storeWeak(puVar1 + 0x15,param_4);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3c18;
    _objc_alloc();
    func_0x00010c02b240();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x12) = param_13;
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x91) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    func_0x00010bddd1c0(puVar1);
    func_0x00010bec6920(puVar1);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105cd6a78; end: 105cd6ba3; -[SCMemoriesDreamsTabController openDreamsTabWithSnapIds:generationIds:notificationId:notificationType:dreamsPackId:] */

void FUN_105cd6a78(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c3c20;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  func_0x00010c02fe40();
  _objc_release(param_6);
  func_0x00010c1d7dc0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78),param_2,puVar1);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if ((lVar2 != 0) && (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
    puVar3 = PTR_PTR_1126c3c28;
    _objc_alloc(PTR_PTR_1126c3c28);
    func_0x00010c048000();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x80),param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cd6ba4; end: 105cd6c8b; -[SCMemoriesDreamsTabController _checkAISnapTabBadge] */

void FUN_105cd6ba4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf8a8a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2336a0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cd6c8c; end: 105cd6d57;  */

void FUN_105cd6c8c(long param_1,uint param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x91) != param_2)) {
    uStack_28 = (undefined1)param_2;
    *(undefined1 *)(param_1 + 0x91) = uStack_28;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x105cd6d1c;
    puStack_38 = &UNK_110845ce0;
    lStack_30 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_50);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105cd6d58; end: 105cd6e63; -[SCMemoriesDreamsTabController _subscribeAISnapsTabBadgeUpdates] */

void FUN_105cd6d58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8a4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105cd6e64; end: 105cd6e97;  */

void FUN_105cd6e64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddd1c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cd6e98; end: 105cd7123; -[SCMemoriesDreamsTabController _createContainerView] */

void FUN_105cd6e98(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [16];
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b40c0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar16);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x30));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0xb8));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  func_0x00010c267b00();
  uVar13 = uVar7;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar16);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = lVar2 + 0x10;
  _objc_loadWeakRetained();
  lVar4 = lVar9;
  func_0x00010010fab4();
  _objc_release(lVar9);
  if ((lVar9 != 0) && ((int)lVar4 != 0)) {
    puVar12 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar9 = lVar2 + 0x10;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c038f40();
    _objc_release(lVar9);
    _objc_initWeak(auStack_130,lVar2);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar9 = lVar2 + 0x10;
    _objc_loadWeakRetained(lVar9);
    _objc_retain();
    uVar16 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c0d4680();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar2 + 8);
    func_0x00010bfbe9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_105cd7458;
    puStack_140 = &UNK_1108e4840;
    _objc_copyWeak(auStack_138,auStack_130);
    uVar14 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c0d9aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c0d9ac0();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar1;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x105cd74b0;
    puStack_168 = &UNK_110849200;
    _objc_copyWeak(auStack_160,auStack_130);
    puStack_1a8 = puVar1;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x105cd74ec;
    puStack_190 = &UNK_110842c58;
    _objc_copyWeak(auStack_188,auStack_130);
    _objc_copyWeak(auStack_1b0,auStack_130);
    func_0x00010bf230a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar16);
    _objc_release(lVar9);
    _objc_release(lVar9);
    func_0x00010bf9d620(*(undefined8 *)(lVar2 + 0x18));
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_1b0);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_130);
    _objc_release(puVar12);
  }
  return;
}



/* Entry: 105cd7124; end: 105cd7457; -[SCMemoriesDreamsTabController _createDreamsTab] */

void FUN_105cd7124(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010010fab4();
  _objc_release(lVar2);
  if ((lVar2 != 0) && ((int)lVar3 != 0)) {
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40();
    _objc_release(lVar2);
    _objc_initWeak(auStack_80,param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    _objc_retain();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d4680();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfbe9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105cd7458;
    puStack_90 = &UNK_1108e4840;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d9aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d9ac0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x105cd74b0;
    puStack_b8 = &UNK_110849200;
    _objc_copyWeak(auStack_b0,auStack_80);
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x105cd74ec;
    puStack_e0 = &UNK_110842c58;
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_copyWeak(auStack_100,auStack_80);
    func_0x00010bf230a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 105cd7458; end: 105cd756f;  */

void FUN_105cd7458(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c109880(*(undefined8 *)(param_1 + 8));
    func_0x00010becfc80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cd7570; end: 105cd76ef; -[SCMemoriesDreamsTabController _setupAppLifecycleCallback] */

void FUN_105cd7570(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2a6420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105cd76f0;
  puStack_68 = &UNK_110846510;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf75dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105cd76f0; end: 105cd7757;  */

void FUN_105cd76f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcd920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cd7758; end: 105cd775b; -[SCMemoriesDreamsTabController _applicationDidEnterBackground] */

void FUN_105cd7758(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endSession_1125600e8);
  return;
}



/* Entry: 105cd775c; end: 105cd776f; -[SCMemoriesDreamsTabController _applicationWillEnterForeground] */

void FUN_105cd775c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bec1810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startSession_11258dfa8);
    return;
  }
  return;
}



/* Entry: 105cd7770; end: 105cd77ff; -[SCMemoriesDreamsTabController _startSession] */

void FUN_105cd7770(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf8a8a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250840();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf8a4a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd7800; end: 105cd784b; -[SCMemoriesDreamsTabController _endSession] */

void FUN_105cd7800(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf8a8a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf953c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd784c; end: 105cd78a7; -[SCMemoriesDreamsTabController _triggerMemoriesSync] */

void FUN_105cd784c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1da0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd78a8; end: 105cd7afb; -[SCMemoriesDreamsTabController _getUnselectedDreams:] */

undefined8 FUN_105cd78a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar8 = *plStack_1a0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_1a8 + lVar6 * 8);
        func_0x00010c241220(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar4);
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x70);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_1f0,auStack_170,0x10);
  if (lVar3 != 0) {
    lVar6 = *plStack_1e0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1e0 != lVar6) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(undefined8 *)(lStack_1e8 + lVar7 * 8);
        uVar4 = uVar9;
        func_0x00010c241220(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010bf4b900(puVar2,param_2,uVar4);
        _objc_release(uVar4);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010befa120(puVar1,param_2,uVar9);
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar8);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c159740(uVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  ___stack_chk_fail();
  return 0xe;
}



/* Entry: 105cd7afc; end: 105cd7b03; -[SCMemoriesDreamsTabController tabType] */

undefined8 FUN_105cd7afc(void)

{
  return 0xe;
}



/* Entry: 105cd7b04; end: 105cd7b0b; -[SCMemoriesDreamsTabController shouldDisplay] */

undefined8 FUN_105cd7b04(void)

{
  return 1;
}



/* Entry: 105cd7b0c; end: 105cd7b13; -[SCMemoriesDreamsTabController isPrivate] */

undefined8 FUN_105cd7b0c(void)

{
  return 0;
}



/* Entry: 105cd7b14; end: 105cd7b23; -[SCMemoriesDreamsTabController isViewLoaded] */

bool FUN_105cd7b14(long param_1)

{
  return *(long *)(param_1 + 0xb8) != 0;
}



/* Entry: 105cd7b24; end: 105cd7bcf; -[SCMemoriesDreamsTabController loadViewIfNeeded] */

void FUN_105cd7b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_5;
  func_0x00010c0834c0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(0,0,param_3,param_4);
  uVar3 = *(undefined8 *)(param_5 + 0xb8);
  *(undefined **)(param_5 + 0xb8) = puVar2;
  _objc_release(uVar3);
  func_0x00010bdec5e0(param_5);
  func_0x00010bded460(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010beaa8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__setupAppLifecycleCallback_1125883d0);
  return;
}



/* Entry: 105cd7bd0; end: 105cd7bf7; -[SCMemoriesDreamsTabController view] */

void FUN_105cd7bd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cd7bf8; end: 105cd7bff; -[SCMemoriesDreamsTabController collectionView] */

undefined8 FUN_105cd7bf8(void)

{
  return 0;
}



/* Entry: 105cd7c00; end: 105cd7c07; -[SCMemoriesDreamsTabController allItems] */

void FUN_105cd7c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_myDreamsGalleryItems_112612bb0);
  return;
}


