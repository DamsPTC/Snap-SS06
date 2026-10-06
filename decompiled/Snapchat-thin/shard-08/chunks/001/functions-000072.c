/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cf926c; end: 105cf92c3; -[SCSearchAttachmentsConfirmationSectionDataProvider attachmentDataDidUpdate:] */

void FUN_105cf926c(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 8);
  FUN_105cf8fd8();
  if (*(byte *)(param_1 + 0x20) == uVar1) {
    return;
  }
  *(char *)(param_1 + 0x20) = (char)uVar1;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf92c4; end: 105cf92db; -[SCSearchAttachmentsConfirmationSectionDataProvider dataProviderDelegate] */

void FUN_105cf92c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf92dc; end: 105cf92e7; -[SCSearchAttachmentsConfirmationSectionDataProvider setDataProviderDelegate:] */

void FUN_105cf92dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105cf92e8; end: 105cf92ef; -[SCSearchAttachmentsConfirmationSectionDataProvider sectionDataModel] */

undefined8 FUN_105cf92e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105cf92f0; end: 105cf92f7; -[SCSearchAttachmentsConfirmationSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105cf92f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105cf92f8; end: 105cf9327; -[SCSearchAttachmentsConfirmationSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105cf92f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf9328; end: 105cf9383; -[SCSearchAttachmentsConfirmationSectionDataProvider .cxx_destruct] */

void FUN_105cf9328(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cf9384; end: 105cf938f; +[SCSearchAttachmentsQueryCoordinator announcerIdentifier] */

undefined ** FUN_105cf9384(void)

{
  return &PTR____CFConstantStringClassReference_110e285b8;
}



/* Entry: 105cf9390; end: 105cf9397; -[SCSearchAttachmentsQueryCoordinator addListener:] */

void FUN_105cf9390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105cf9398; end: 105cf939f; -[SCSearchAttachmentsQueryCoordinator removeListener:] */

void FUN_105cf9398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105cf93a0; end: 105cf93a7; -[SCSearchAttachmentsQueryCoordinator didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105cf93a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 105cf93a8; end: 105cf94e7; -[SCSearchAttachmentsQueryCoordinator initWithUserSession:dataProvider:actionHandler:safeBrowsingAPI:circumstanceEngine:] */

undefined1 *
FUN_105cf93a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ecda0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf94e8; end: 105cf94ef; -[SCSearchAttachmentsQueryCoordinator canPerformQuery:] */

undefined8 FUN_105cf94e8(void)

{
  return 1;
}



/* Entry: 105cf94f0; end: 105cf977f; -[SCSearchAttachmentsQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_105cf94f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    if ((int)lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 == 0) goto LAB_105cf973c;
    }
    else {
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010c11da20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar4 = PTR_PTR_1126b16f0;
      _objc_alloc(PTR_PTR_1126b16f0);
      lVar1 = param_1;
      func_0x00010be9cd00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c042a40(puVar4);
      (**(code **)(param_4 + 0x10))(param_4,puVar4,0);
      _objc_release(puVar4);
      _objc_release(lVar1);
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_3;
      func_0x00010c11da20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7f5e0(param_1);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    uVar18 = *(undefined8 *)(param_1 + 8);
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar18);
    _objc_release(param_1);
    _objc_release(puVar4);
  }
LAB_105cf973c:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126b16f8;
  _objc_alloc();
  func_0x00010c028e00();
  puVar5 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar6 = PTR_PTR_1126c3f10;
  _objc_alloc();
  func_0x00010c01f060();
  func_0x00010c055bc0();
  puVar7 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar8 = PTR_PTR_1126b1700;
  _objc_alloc();
  puVar9 = PTR_PTR_1126c3ec8;
  _objc_alloc();
  ppuVar10 = &PTR____CFConstantStringClassReference_110e283f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e283f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d660();
  func_0x00010c043020(0);
  func_0x00010c055bc0();
  puVar11 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar12 = PTR_PTR_1126c3f10;
  _objc_alloc();
  func_0x00010c01f060();
  func_0x00010c055bc0();
  puVar13 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar14 = PTR_PTR_1126c3f10;
  _objc_alloc();
  func_0x00010c01f060();
  func_0x00010c055bc0();
  uVar18 = 4;
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(ppuVar10);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126c3e18;
  _objc_retain(uVar18);
  _objc_alloc(puVar5);
  uVar16 = *(undefined8 *)(puVar4 + 0x18);
  func_0x00010bf0cb40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3e20;
  func_0x00010c11da40(PTR_PTR_1126c3e20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  func_0x00010c05cf80(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar16);
  func_0x00010c161980(puVar5);
  func_0x00010c219b20(puVar5);
  func_0x00010bef9980(puVar5);
  func_0x00010c201040(puVar5);
  puVar4 = puVar4 + 0x48;
  _objc_loadWeakRetained(puVar4);
  puVar6 = PTR_PTR_1126c3e10;
  _objc_alloc(PTR_PTR_1126c3e10);
  func_0x00010c061a60();
  func_0x00010c10f100(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105cf9780; end: 105cf9a4b; -[SCSearchAttachmentsQueryCoordinator _sectionDescriptors] */

void FUN_105cf9780(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b16f8;
  _objc_alloc();
  func_0x00010c028e00();
  puVar2 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar3 = PTR_PTR_1126c3f10;
  _objc_alloc();
  func_0x00010c01f060();
  func_0x00010c055bc0();
  puVar4 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar5 = PTR_PTR_1126b1700;
  _objc_alloc();
  puVar6 = PTR_PTR_1126c3ec8;
  _objc_alloc();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e283f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e283f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d660();
  func_0x00010c043020(0);
  func_0x00010c055bc0();
  puVar8 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar9 = PTR_PTR_1126c3f10;
  _objc_alloc();
  func_0x00010c01f060();
  func_0x00010c055bc0();
  puVar10 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar11 = PTR_PTR_1126c3f10;
  _objc_alloc();
  func_0x00010c01f060();
  func_0x00010c055bc0();
  uVar14 = 4;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c3e18;
  _objc_retain(uVar14);
  _objc_alloc(puVar2);
  uVar13 = *(undefined8 *)(puVar1 + 0x18);
  func_0x00010bf0cb40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3e20;
  func_0x00010c11da40(PTR_PTR_1126c3e20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  func_0x00010c05cf80(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar13);
  func_0x00010c161980(puVar2);
  func_0x00010c219b20(puVar2);
  func_0x00010bef9980(puVar2);
  func_0x00010c201040(puVar2);
  puVar1 = puVar1 + 0x48;
  _objc_loadWeakRetained(puVar1);
  puVar3 = PTR_PTR_1126c3e10;
  _objc_alloc(PTR_PTR_1126c3e10);
  func_0x00010c061a60();
  func_0x00010c10f100(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105cf9a4c; end: 105cf9b8f; -[SCSearchAttachmentsQueryCoordinator _presentWebViewControllerWithLaunchSource:queryText:] */

void FUN_105cf9a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126c3e18;
  _objc_retain(param_4);
  _objc_alloc(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf0cb40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3e20;
  func_0x00010c11da40(PTR_PTR_1126c3e20,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c05cf80(puVar2,param_2,uVar1,uVar3,puVar4,param_3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010c161980(puVar2,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c219b20(puVar2,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bef9980(puVar2,param_2,param_1);
  func_0x00010c201040(puVar2,param_2,1);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  puVar4 = PTR_PTR_1126c3e10;
  _objc_alloc(PTR_PTR_1126c3e10);
  func_0x00010c061a60();
  func_0x00010c10f100(param_1,param_2,puVar4,1,0);
  _objc_release(puVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105cf9b90; end: 105cf9b97; -[SCSearchAttachmentsQueryCoordinator isLoading] */

undefined1 FUN_105cf9b90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 105cf9b98; end: 105cf9b9f; -[SCSearchAttachmentsQueryCoordinator currentQuery] */

undefined8 FUN_105cf9b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105cf9ba0; end: 105cf9ba7; -[SCSearchAttachmentsQueryCoordinator setCurrentQuery:] */

void FUN_105cf9ba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105cf9ba8; end: 105cf9bbf; -[SCSearchAttachmentsQueryCoordinator navigationCoordinator] */

void FUN_105cf9ba8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf9bc0; end: 105cf9bcb; -[SCSearchAttachmentsQueryCoordinator setNavigationCoordinator:] */

void FUN_105cf9bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105cf9bcc; end: 105cf9cdb; -[SCSearchAttachmentsQueryCoordinator .cxx_destruct] */

void FUN_105cf9bcc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105cf9cdc; end: 105cf9dff; -[SCSearchAttachmentsClipboardProvider initWithFeatureSettingsService:] */

undefined1 * FUN_105cf9cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ecda8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c3f18;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    func_0x00010bed54e0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf9e00; end: 105cf9eb7; -[SCSearchAttachmentsClipboardProvider _updateClipboardResult] */

void FUN_105cf9e00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 2;
  func_0x0001000819a8(2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105cf9eb8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105cf9eb8; end: 105cf9ee3;  */

void FUN_105cf9eb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be105e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf9ee4; end: 105cfa28f; -[SCSearchAttachmentsClipboardProvider _fetchClipboardResult] */

void FUN_105cf9ee4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x18] = 0;
  puVar1 = param_1;
  func_0x00010bf3d8a0();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x2) goto LAB_105cfa214;
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdcd60();
  _objc_release();
  if ((int)puVar3 == 0) goto LAB_105cfa214;
  puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  FUN_105cf7024();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
LAB_105cfa1f4:
    param_3 = (undefined *)0x0;
LAB_105cfa1fc:
    func_0x00010bed5500(param_1);
  }
  else {
    puVar4 = puVar3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) goto LAB_105cfa1f4;
    puVar5 = puVar3;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    puVar7 = PTR_PTR_1126b4960;
    if (puVar5 == (undefined *)0x0) goto LAB_105cfa1f4;
    param_3 = puVar3;
    if (puVar1 == (undefined *)0x0) goto LAB_105cfa1fc;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e285d8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e285d8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b19f8;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
    _objc_release(puVar4);
    _objc_initWeak(auStack_78,param_1);
    puVar4 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 2;
    func_0x0001000819a8(2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 2;
    func_0x0001000819a8(2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105cfa290;
    puStack_90 = &UNK_1108e53d0;
    unaff_x25 = &puStack_a8;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(puVar3);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105cfa30c;
    puStack_b8 = &UNK_1108e5400;
    unaff_x26 = &puStack_d0;
    puStack_88 = puVar3;
    _objc_copyWeak(auStack_b0,auStack_78);
    param_3 = puVar7;
    func_0x00010c25f5a0(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar7);
  }
  _objc_release(puVar3);
  _objc_release();
LAB_105cfa214:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_3);
  puVar2 = puVar2 + 0x28;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c252ee0();
    func_0x00010bed5500(puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cfa290; end: 105cfa30b;  */

void FUN_105cfa290(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c252ee0();
    if (lVar2 != 200) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    func_0x00010bed5500(lVar1,param_2,uVar3,lVar2 == 200);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cfa30c; end: 105cfa33f;  */

void FUN_105cfa30c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfa340; end: 105cfa347; -[SCSearchAttachmentsClipboardProvider addListener:] */

void FUN_105cfa340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105cfa348; end: 105cfa34f; -[SCSearchAttachmentsClipboardProvider removeListener:] */

void FUN_105cfa348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105cfa350; end: 105cfa413; -[SCSearchAttachmentsClipboardProvider setClipboardState:] */

void FUN_105cfa350(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000105cf9c40();
  _objc_release(lVar1);
  if (lVar2 != param_3) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105cf9c94(param_3,uVar3);
    _objc_release(uVar3);
    if (param_3 == 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf0ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_attachmentFromClipboardDidUpdate_1125a0d38,
                 param_1);
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be105f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchClipboardResult_112561b18);
      return;
    }
  }
  return;
}



/* Entry: 105cfa414; end: 105cfa453; -[SCSearchAttachmentsClipboardProvider clipboardState] */

undefined8 FUN_105cfa414(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000105cf9c40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105cfa454; end: 105cfa52f; -[SCSearchAttachmentsClipboardProvider _updateClipboardURL:isValid:] */

void FUN_105cfa454(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  bVar1 = *(byte *)(param_1 + 0x18);
  if (bVar1 != param_4) {
    *(char *)(param_1 + 0x18) = (char)param_4;
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
LAB_105cfa4e4:
    if (bVar1 == param_4) goto LAB_105cfa518;
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar2 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar2 & 1) != 0) goto LAB_105cfa4e4;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar4;
    _objc_release(uVar3);
  }
  func_0x00010bf0ce40(*(undefined8 *)(param_1 + 8),param_2,param_1);
LAB_105cfa518:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cfa530; end: 105cfa537; -[SCSearchAttachmentsClipboardProvider clipboardIsValidURL] */

undefined1 FUN_105cfa530(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 105cfa538; end: 105cfa53f; -[SCSearchAttachmentsClipboardProvider clipboardAttachmentURL] */

undefined8 FUN_105cfa538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105cfa540; end: 105cfa57b; -[SCSearchAttachmentsClipboardProvider .cxx_destruct] */

void FUN_105cfa540(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cfa57c; end: 105cfa587; +[SCSearchAttachmentsDataProvider announcerIdentifier] */

undefined ** FUN_105cfa57c(void)

{
  return &PTR____CFConstantStringClassReference_110e28638;
}



/* Entry: 105cfa588; end: 105cfa58f; -[SCSearchAttachmentsDataProvider addListener:] */

void FUN_105cfa588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105cfa590; end: 105cfa597; -[SCSearchAttachmentsDataProvider removeListener:] */

void FUN_105cfa590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105cfa598; end: 105cfa6f3; -[SCSearchAttachmentsDataProvider initWithUserPreferences:urlPreviewProvider:featureSettingsService:] */

undefined1 *
FUN_105cfa598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ecdb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3f20;
    _objc_alloc();
    func_0x00010c011c80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x10));
    puVar3 = PTR_PTR_1126c3f28;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cfa6f4; end: 105cfa6fb; -[SCSearchAttachmentsDataProvider addAttachmentsListener:] */

void FUN_105cfa6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105cfa6fc; end: 105cfa703; -[SCSearchAttachmentsDataProvider removeAttachmentsListener:] */

void FUN_105cfa6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105cfa704; end: 105cfa74f; -[SCSearchAttachmentsDataProvider dealloc] */

void FUN_105cfa704(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  puStack_28 = PTR_PTR_1126ecdb0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105cfa750; end: 105cfa767; -[SCSearchAttachmentsDataProvider attachmentFromClipboard] */

void FUN_105cfa750(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cfa768; end: 105cfa76f; -[SCSearchAttachmentsDataProvider setClipboardState:] */

void FUN_105cfa768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setClipboardState__11263cf40);
  return;
}



/* Entry: 105cfa770; end: 105cfa777; -[SCSearchAttachmentsDataProvider clipboardState] */

void FUN_105cfa770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_clipboardState_1125acfd0);
  return;
}



/* Entry: 105cfa778; end: 105cfa77f; -[SCSearchAttachmentsDataProvider featureSettingsService] */

void FUN_105cfa778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_target_112678178);
  return;
}



/* Entry: 105cfa780; end: 105cfa8cf; -[SCSearchAttachmentsDataProvider recentAddedAttachments] */

void FUN_105cfa780(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105cfa85c;
  puStack_40 = &UNK_1108e5430;
  uVar2 = uVar1;
  lStack_38 = param_1;
  func_0x0001006372a4(uVar1,&puStack_58);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105cfa8d0; end: 105cfa9bb; -[SCSearchAttachmentsDataProvider setRecentAttachedURL:] */

void FUN_105cfa8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105cfa9bc;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cfa9bc; end: 105cfa9ef;  */

void FUN_105cfa9bc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfa9f0; end: 105cfaa6f; -[SCSearchAttachmentsDataProvider removedClipboardURL] */

void FUN_105cfa9f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cfaa70; end: 105cfab5b; -[SCSearchAttachmentsDataProvider removeURL:] */

void FUN_105cfaa70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105cfab5c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cfab5c; end: 105cfab8f;  */

void FUN_105cfab5c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8dc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfab90; end: 105cfae6b; -[SCSearchAttachmentsDataProvider attachmentFromClipboardDidUpdate:] */

void FUN_105cfab90(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf3d840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar5 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  uVar2 = uVar9;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar9);
  if (((uVar3 == 0) || (uVar9 = uVar3, FUN_105cffa7c(uVar3,uVar2), (uVar9 & 1) != 0)) ||
     (lVar6 = param_3, func_0x00010bf3d8a0(), lVar6 == 2)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (uVar2 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar7);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0d660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    FUN_105cffa7c();
    if ((int)uVar7 == 0) {
      _objc_release(uVar8);
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c081d20();
      lVar6 = param_3;
      func_0x00010bf3d880();
      _objc_release(uVar8);
      if (iVar1 == (int)lVar6) goto LAB_105cfac90;
    }
    uVar9 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf3d880();
    if ((uVar9 & 1) != 0) {
      _objc_initWeak(auStack_58,param_1);
      lVar6 = param_3;
      func_0x00010bf3d840(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(uVar3);
      func_0x00010be062e0(param_1);
      _objc_release(lVar6);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_105cfac90;
    }
    puVar4 = PTR_PTR_1126c3f30;
    _objc_alloc();
    func_0x00010c052ce0();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar4;
  }
  _objc_release(uVar7);
  func_0x00010bf0cc40(*(undefined8 *)(param_1 + 0x18));
LAB_105cfac90:
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 105cfae6c; end: 105cfaebf;  */

void FUN_105cfae6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfaec0; end: 105cfb1db; -[SCSearchAttachmentsDataProvider _removeURL:] */

undefined ** FUN_105cfaec0(long param_1,undefined8 param_2,undefined **param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105cfb1dc;
  puStack_98 = &UNK_1108e5430;
  _objc_retain(param_3);
  uVar2 = uVar1;
  ppuStack_90 = param_3;
  func_0x0001006372a4(uVar1,&puStack_b0);
  uVar4 = uVar2;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0d660(uVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_3;
  uVar5 = uVar6;
  FUN_105cffa7c(param_3,uVar6);
  _objc_release(uVar6);
  if ((int)ppuVar7 == 0) {
    ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3760;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3790;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar6);
    ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3748;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3778;
  }
  _objc_release(uVar2);
  _objc_release(ppuStack_90);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010bf0cc40(*(undefined8 *)(param_1 + 0x18));
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ed7818;
  ppuVar7 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_70 = ppuVar7;
  }
  ppuStack_80 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ed7778;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar6);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  func_0x00010bf0d660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_105cffa7c();
  _objc_release(uVar5);
  return (undefined **)(ulong)((uint)uVar6 ^ 1);
}



/* Entry: 105cfb1dc; end: 105cfb223;  */

uint FUN_105cfb1dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf0d660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_105cffa7c();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105cfb224; end: 105cfb32b; -[SCSearchAttachmentsDataProvider _setRecentAttachedURL:] */

void FUN_105cfb224(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    FUN_105cffd48(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bede5a0(param_1);
    _objc_release(lVar1);
    _objc_initWeak(auStack_38,param_1);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010be062e0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105cfb32c; end: 105cfb393;  */

void FUN_105cfb32c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((*(long *)(param_1 + 0x20) != 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bede5a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cfb394; end: 105cfb4e7; -[SCSearchAttachmentsDataProvider _downloadTitleForURL:completionBlock:] */

void FUN_105cfb394(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar2 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bfa9620(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105cfb4e8; end: 105cfb59f;  */

void FUN_105cfb4e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cfb5a0; end: 105cfb90f; -[SCSearchAttachmentsDataProvider _updateRecentAttachedURL:withTitle:] */

void FUN_105cfb5a0(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_140;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_3;
  ppuVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar10 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar10;
  func_0x00010c08fa60();
  _objc_release(ppuVar10);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    puVar3 = param_1[1];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar4 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar3);
    puVar3 = puVar8;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar8);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar3);
    puVar8 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    ppuVar10 = (undefined **)0x0;
    while (puVar8 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        ppuVar11 = *(undefined ***)((long)puVar9 * 8);
        ppuVar5 = ppuVar11;
        func_0x00010bf0d660();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar5;
        FUN_105cffa7c();
        _objc_release(ppuVar5);
        if ((int)ppuVar2 == 0) {
          func_0x00010befa120(puVar4);
        }
        else {
          func_0x00010bf51e00();
          _objc_release(ppuVar10);
          ppuVar10 = ppuVar11;
        }
        puVar9 = puVar9 + 1;
      } while (puVar8 != puVar9);
      puVar8 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar8 = PTR_PTR_1126c3f30;
    _objc_alloc(PTR_PTR_1126c3f30);
    ppuVar5 = param_4;
    if (param_4 == (undefined **)0x0) {
      ppuVar5 = ppuVar10;
      func_0x00010c2711a0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c052ce0(puVar8);
    if (param_4 == (undefined **)0x0) {
      _objc_release(ppuVar5);
    }
    func_0x00010c066b00(puVar4);
    while (puVar9 = puVar4, func_0x00010bf529e0(), (undefined *)0xa < puVar9) {
      func_0x00010c12cd60(puVar4);
    }
    puVar9 = puVar4;
    func_0x00010bf51e00(puVar4);
    puVar6 = param_1[1];
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e285f8;
    func_0x00010c1d0640();
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar10);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    ppuVar11 = param_1;
    func_0x00010bf0cc40(param_1[3]);
    ppuStack_140 = param_1;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(ppuStack_140);
  __Unwind_Resume();
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar5);
  puVar3 = PTR_PTR_1126c3f30;
  _objc_alloc();
  ppuVar10 = ppuVar5;
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar10 = ppuVar11;
    FUN_105cffd48(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c052ce0();
  puVar8 = param_3[4];
  param_3[4] = puVar3;
  _objc_release(puVar8);
  if (ppuVar5 == (undefined **)0x0) {
    _objc_release(ppuVar10);
  }
  func_0x00010bf0cc40(param_3[3]);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 105cfb910; end: 105cfb9cb; -[SCSearchAttachmentsDataProvider _updateClipboardURL:withTitle:] */

void FUN_105cfb910(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3f30;
  _objc_alloc();
  lVar2 = param_4;
  if (param_4 == 0) {
    lVar2 = param_3;
    FUN_105cffd48(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c052ce0(puVar1,param_2,lVar2,param_3,1,0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar3);
  if (param_4 == 0) {
    _objc_release(lVar2);
  }
  func_0x00010bf0cc40(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cfb9cc; end: 105cfb9d3; -[SCSearchAttachmentsDataProvider attachedURL] */

undefined8 FUN_105cfb9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105cfb9d4; end: 105cfba03; -[SCSearchAttachmentsDataProvider setAttachedURL:] */

void FUN_105cfb9d4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105cfba04; end: 105cfba0b; -[SCSearchAttachmentsDataProvider snapImage] */

undefined8 FUN_105cfba04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105cfba0c; end: 105cfba3b; -[SCSearchAttachmentsDataProvider setSnapImage:] */

void FUN_105cfba0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cfba3c; end: 105cfbb43; -[SCSearchAttachmentsDataProvider .cxx_destruct] */

void FUN_105cfba3c(long param_1)

{
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



/* Entry: 105cfbb44; end: 105cfbca3;  */

void FUN_105cfbb44(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
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
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  iVar5 = (int)puVar6;
  uVar7 = 0;
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010bf62b60();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126c3e50;
        _objc_opt_class(PTR_PTR_1126c3e50);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        _objc_release(uVar2);
        iVar5 = (int)puVar6;
        if ((uVar4 & 1) != 0) {
          func_0x00010bf62b60(uVar7);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105cfbc54;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      iVar5 = (int)puVar6;
    } while (lVar1 != 0);
    uVar7 = 0;
  }
LAB_105cfbc54:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe2090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c237d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105cfbca4; end: 105cfbcaf; -[SCAttachmentsBackButton setHidden:] */

void FUN_105cfbca4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe2090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideImmediately_1125d61e0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c237d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showImmediately_11266b978);
  return;
}



/* Entry: 105cfbcb0; end: 105cfbcf7; -[SCAttachmentsBackButton showImmediately] */

void FUN_105cfbcb0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bdda700();
  puStack_28 = PTR_PTR_1126ecdb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 105cfbcf8; end: 105cfbd3f; -[SCAttachmentsBackButton hideImmediately] */

void FUN_105cfbcf8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bdda700();
  puStack_28 = PTR_PTR_1126ecdb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 105cfbd40; end: 105cfbe0b; -[SCAttachmentsBackButton hideWithDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfbd40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bdda700();
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105cfbe0c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112734604);
  *(undefined8 *)(param_1 + _DAT_112734604) = uVar1;
  _objc_release(uVar2);
  _dispatch_time(0,300000000);
  func_0x00010058c530();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cfbe0c; end: 105cfbe3f;  */

void FUN_105cfbe0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfe2080(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfbe40; end: 105cfbe57; -[SCAttachmentsBackButton isHidingWithDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105cfbe40(long param_1)

{
  return *(long *)(param_1 + _DAT_112734604) != 0;
}



/* Entry: 105cfbe58; end: 105cfbe6f; -[SCAttachmentsBackButton gestureRecognizer:shouldReceiveTouch:] */

uint FUN_105cfbe58(uint param_1)

{
  func_0x00010c074c80();
  return param_1 ^ 1;
}



/* Entry: 105cfbe70; end: 105cfbeb3; -[SCAttachmentsBackButton _cancelDelayedHideBlockIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfbe70(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112734604;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105cfbeb4; end: 105cfbec7; -[SCAttachmentsBackButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfbeb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734604,0);
  return;
}



/* Entry: 105cfbec8; end: 105cfc16f; -[SCSearchAttachmentsWebView initWithSafeBrowsingWarningView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105cfbec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = &uStack_80;
  _objc_retain(param_3);
  puVar5 = PTR__CGRectZero_110347608;
  puStack_78 = PTR_PTR_1126ecdc0;
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_80 = param_1;
  _objc_msgSendSuper2(uVar8,uVar9,uVar10,uVar11,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
    _objc_alloc_init(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
    puVar4 = PTR_PTR_1126b4f58;
    func_0x00010bdc3620(uVar8,uVar9,uVar10,uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11273460c;
    uVar8 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar4;
    _objc_release(uVar8);
    func_0x00010c1cb840(*(undefined8 *)((long)puVar2 + lVar7));
    uVar8 = *(undefined8 *)((long)puVar2 + lVar7);
    func_0x00010c152980(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar8);
    func_0x00010c167620(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010c167480(*(undefined8 *)((long)puVar2 + lVar7));
    uVar8 = *(undefined8 *)((long)puVar2 + lVar7);
    func_0x00010c152980(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6de0();
    _objc_release(uVar8);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112734610);
    uVar8 = *(undefined8 *)puVar5;
    uVar10 = *(undefined8 *)(puVar5 + 0x18);
    uVar9 = *(undefined8 *)(puVar5 + 0x10);
    puVar1[1] = *(undefined8 *)(puVar5 + 8);
    *puVar1 = uVar8;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    func_0x00010befbb60(puVar2);
    puVar5 = PTR_PTR_1126b56f8;
    _objc_opt_new();
    lVar7 = (long)_DAT_112734614;
    uVar8 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar5;
    _objc_release(uVar8);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010c16af20(puVar2);
    puVar6 = (undefined1 *)puVar2;
    func_0x00010befbb60();
    func_0x000105cfbacc();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112734618;
    uVar8 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined1 **)((long)puVar2 + lVar7) = puVar6;
    _objc_release(uVar8);
    func_0x00010befbd40(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010befbb60(puVar2);
    lVar7 = (long)_DAT_11273461c;
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_3;
    _objc_release(uVar8);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010befbb60(puVar2);
    puVar5 = PTR_PTR_1126c3f40;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_112734620);
    *(undefined **)((long)puVar2 + (long)_DAT_112734620) = puVar5;
    _objc_release(uVar8);
    func_0x00010befbb60(puVar2);
    func_0x00010c161020(puVar2);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112734624) = 0;
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 105cfc170; end: 105cfc1db; -[SCSearchAttachmentsWebView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc170(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273460c);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ecdc0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105cfc1dc; end: 105cfc333; -[SCSearchAttachmentsWebView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc1dc(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ecdc0;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  pdVar1 = (double *)(param_5 + _DAT_112734628);
  param_1 = param_1 + pdVar1[1];
  param_2 = param_2 + *pdVar1;
  param_3 = param_3 - (pdVar1[1] + pdVar1[3]);
  param_4 = param_4 - (*pdVar1 + pdVar1[2]);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11273462c);
  dVar3 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010c19f0e0(0,uVar4,dVar3,0x4010000000000000,*(undefined8 *)(param_5 + _DAT_112734620));
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  lVar2 = (long)_DAT_11273460c;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11273461c));
  func_0x00010be48f00(param_1,param_2,param_3,param_4,param_5);
  func_0x000108fe9e04(0,0x3ff0000000000000,0x4000000000000000,0x3fc3333333333333,
                      *(undefined8 *)(param_5 + _DAT_112734614));
  func_0x00010bedec80(param_5);
  return;
}



/* Entry: 105cfc334; end: 105cfc423; -[SCSearchAttachmentsWebView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc334(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c3e98;
  _objc_opt_class(PTR_PTR_1126c3e98);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273460c);
    uVar3 = param_3;
    func_0x00010bf4db80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137160(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar3);
    func_0x00010c1f5120(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cfc424; end: 105cfc44b; -[SCSearchAttachmentsWebView setAttachButtonOriginOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc424(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  
  pdVar1 = (double *)(param_3 + _DAT_112734634);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 105cfc44c; end: 105cfc47b; -[SCSearchAttachmentsWebView setAttachButtonViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc44c(long param_1)

{
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112734614));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105cfc47c; end: 105cfc503; -[SCSearchAttachmentsWebView setSafeBrowsingViewStateForUrlType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc47c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_3 == *(long *)(param_1 + _DAT_112734624)) {
    return;
  }
  *(long *)(param_1 + _DAT_112734624) = param_3;
  lVar2 = (long)_DAT_11273461c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  if (param_3 == 0) {
    func_0x00010c074c20();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  else {
    func_0x00010c28c320(uVar1,param_2,param_3);
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,param_3 == 0);
  return;
}



/* Entry: 105cfc504; end: 105cfc54f; -[SCSearchAttachmentsWebView setLayoutInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc504(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  ushort uVar2;
  
  pdVar1 = (double *)(param_5 + _DAT_112734628);
  uVar2 = NEON_uminv(CONCAT26(-(ushort)(param_4 == pdVar1[3]),
                              CONCAT24(-(ushort)(param_3 == pdVar1[2]),
                                       CONCAT22(-(ushort)(param_2 == pdVar1[1]),
                                                -(ushort)(param_1 == *pdVar1)))),2);
  if ((uVar2 & 1) == 0) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 105cfc550; end: 105cfc5af; -[SCSearchAttachmentsWebView setBackButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc550(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112734618;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c074c20();
  if (param_3 != iVar1) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 105cfc5b0; end: 105cfc5bf; -[SCSearchAttachmentsWebView isBackButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112734618),PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 105cfc5c0; end: 105cfc6ff; -[SCSearchAttachmentsWebView setAttachButtonHidden:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc5c0(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010bdd0220();
  if (param_3 != (uint)lVar1) {
    uStack_60 = 0x4030000000000000;
    if ((param_3 & 1) == 0) {
      func_0x00010c1af000(*(undefined8 *)(param_1 + _DAT_112734614));
      uStack_60 = 0;
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_112734634);
    _objc_initWeak(auStack_58,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105cfc700;
    puStack_80 = &UNK_1108e54a8;
    _objc_copyWeak(auStack_78,auStack_58);
    ppuVar2 = &puStack_98;
    dStack_70 = (double)(param_3 ^ 1);
    uStack_68 = uVar3;
    _objc_retainBlock();
    if (param_4 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    else {
      func_0x00010bf03420(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105cfc700; end: 105cfc767;  */

void FUN_105cfc700(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea1f80(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1cbe20();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfc768; end: 105cfc777; -[SCSearchAttachmentsWebView isAttachButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112734614),PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 105cfc778; end: 105cfc7cf; -[SCSearchAttachmentsWebView contentOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105cfc778(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11273460c);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 105cfc7d0; end: 105cfc7e3; -[SCSearchAttachmentsWebView targetOffsetY] */

void FUN_105cfc7d0(void)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetHeight_110347570)();
  return;
}



/* Entry: 105cfc7e4; end: 105cfc827; -[SCSearchAttachmentsWebView setScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc7e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273460c);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cfc828; end: 105cfc857; -[SCSearchAttachmentsWebView applyTranslation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc828(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + _DAT_112734630) = param_2;
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 105cfc858; end: 105cfc88b; -[SCSearchAttachmentsWebView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc858(long param_1)

{
  param_1 = param_1 + _DAT_112734638;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0d740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfc88c; end: 105cfc8ab; -[SCSearchAttachmentsWebView _setAttachButtonDestinationAlpha:offset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112734634;
  *(undefined8 *)(param_4 + lVar1) = param_2;
  ((undefined8 *)(param_4 + lVar1))[1] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + _DAT_112734614),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105cfc8ac; end: 105cfc8d3; -[SCSearchAttachmentsWebView _attachButtonIsHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105cfc8ac(double param_1,long param_2)

{
  func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_112734614));
  return param_1 == 0.0;
}



/* Entry: 105cfc8d4; end: 105cfcb07; -[SCSearchAttachmentsWebView _layoutButtonsWithEffectiveBounds:] */

/* WARNING: Possible PIC construction at 0x000105cfcac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cfcac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfc8d4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar5 = param_1;
  _CGRectGetHeight();
  if (dVar5 == 0.0) {
    return;
  }
  dVar9 = *(double *)(param_5 + _DAT_112734630);
  dVar5 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar11 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  puVar1 = PTR_PTR_1126b56f8;
  dVar11 = dVar11 + (dVar9 / dVar5 + -1.0) * 64.0;
  lVar4 = (long)_DAT_112734614;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = param_3;
  func_0x00010c23d6e0(param_3,0x4048000000000000,puVar1);
  _objc_release(uVar2);
  dVar9 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  lVar3 = (long)_DAT_112734634;
  dVar10 = (dVar9 - dVar5) * 0.5 + *(double *)(param_5 + lVar3);
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar9 = dVar10;
  _CGRectGetMinX(dVar10,dVar11,dVar5,0x4048000000000000);
  dVar6 = dVar10;
  _CGRectGetMinY(dVar10,dVar11,dVar5,0x4048000000000000);
  dVar8 = ((double *)(param_5 + lVar3))[1];
  dVar7 = dVar10;
  _CGRectGetWidth(dVar10,dVar11,dVar5,0x4048000000000000);
  _CGRectGetHeight(dVar10,dVar11,dVar5,0x4048000000000000);
  func_0x00010b816528(dVar9,dVar6 + dVar8,dVar7,dVar10);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_5 + lVar4),PTR_s_setFrame__112645658)
  ;
  return;
}



/* Entry: 105cfcb08; end: 105cfcc53; -[SCSearchAttachmentsWebView _handleButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfcb08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b56f8;
  _objc_opt_class(PTR_PTR_1126b56f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((uVar5 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010beeecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar5 == 0) goto LAB_105cfcc34;
  }
  param_1 = param_1 + _DAT_112734638;
  _objc_loadWeakRetained(param_1);
  uVar3 = uVar1;
  func_0x00010beeecc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0d860(param_1);
  _objc_release(uVar3);
  _objc_release(param_1);
LAB_105cfcc34:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


