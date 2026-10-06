/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10515c9a8; end: 10515c9af; -[SCSendToListsAvailable contextual] */

undefined8 FUN_10515c9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10515c9b0; end: 10515c9df; -[SCSendToListsAvailable .cxx_destruct] */

void FUN_10515c9b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515c9e0; end: 10515ca9b; -[SCSendToFindFriendsSectionActionHandler initWithFindFriendsScopeExposer:findFriendsScopeServices:uiContainer:] */

undefined1 *
FUN_10515c9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6790;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515ca9c; end: 10515cb5b; -[SCSendToFindFriendsSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10515ca9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ae600;
  _objc_alloc(PTR_PTR_1126ae600);
  func_0x00010c01fb20();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar2;
  func_0x00010bf23c80(lVar2,param_2,lVar3,puVar1,param_1,8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 10515cb5c; end: 10515cb7b; -[SCSendToFindFriendsSectionActionHandler findFriendsWorkflowCompleted] */

void FUN_10515cb5c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10515cb7c; end: 10515cbaf; -[SCSendToFindFriendsSectionActionHandler .cxx_destruct] */

void FUN_10515cb7c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515cbb0; end: 10515cc53; -[SCSendToContactUpsellSection initWithContactUpsellScopeExposer:contactUpsellScopeServices:] */

undefined1 *
FUN_10515cbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6798;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515cc54; end: 10515cd33; -[SCSendToContactUpsellSection setUp] */

void FUN_10515cc54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126b40c0;
  _objc_alloc_init();
  func_0x00010c219b60();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf24680(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10515cd34; end: 10515cd37; -[SCSendToContactUpsellSection tearDown] */

void FUN_10515cd34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeContactUpsellView_112580870);
  return;
}



/* Entry: 10515cd38; end: 10515cfa7; -[SCSendToContactUpsellSection cellForItemAtIndexInSection:] */

long FUN_10515cd38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010befbb60(lVar3,param_2,*(undefined8 *)(param_1 + 8));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  uStack_88 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c2793a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  uStack_80 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010c274200(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  uStack_78 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010bf1ff80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return lVar3;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 10515cfa8; end: 10515cfaf; -[SCSendToContactUpsellSection numberOfCellsInSection] */

undefined8 FUN_10515cfa8(void)

{
  return 1;
}



/* Entry: 10515cfb0; end: 10515d02f; -[SCSendToContactUpsellSection reuseCellClassesByIdentifiers] */

undefined8 FUN_10515cfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc7898;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010c267060(*(undefined8 *)(puVar2 + 8));
  return param_1;
}



/* Entry: 10515d030; end: 10515d073; -[SCSendToContactUpsellSection sizeForItemAtIndexInSection:withWidth:] */

undefined8 FUN_10515d030(undefined8 param_1,long param_2)

{
  func_0x00010c267060(param_1,*(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8),
                      0x447a0000,0x42480000,*(undefined8 *)(param_2 + 8));
  return param_1;
}



/* Entry: 10515d074; end: 10515d08f; -[SCSendToContactUpsellSection sectionInsets] */

void FUN_10515d074(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
             PTR__OBJC_CLASS___NSValue_1126afdf8,PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 10515d090; end: 10515d0df; -[SCSendToContactUpsellSection _removeContactUpsellView] */

void FUN_10515d090(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10515d0e0; end: 10515d0e7; -[SCSendToContactUpsellSection dataLoadingStatus] */

undefined8 FUN_10515d0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10515d0e8; end: 10515d0ef; -[SCSendToContactUpsellSection setDataLoadingStatus:] */

void FUN_10515d0e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10515d0f0; end: 10515d107; -[SCSendToContactUpsellSection delegate] */

void FUN_10515d0f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515d108; end: 10515d113; -[SCSendToContactUpsellSection setDelegate:] */

void FUN_10515d108(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10515d114; end: 10515d11b; -[SCSendToContactUpsellSection sectionUpdateModel] */

undefined8 FUN_10515d114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10515d11c; end: 10515d123; -[SCSendToContactUpsellSection setSectionUpdateModel:] */

void FUN_10515d11c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10515d124; end: 10515d173; -[SCSendToContactUpsellSection .cxx_destruct] */

void FUN_10515d124(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515d174; end: 10515d33b; -[SCSendToFindFriendsSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515d174(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + _DAT_11271d970;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf4a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c07b940();
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    puVar4 = PTR_PTR_1126b5488;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271d974);
    lVar1 = param_1 + _DAT_11271d978;
    _objc_loadWeakRetained(lVar1);
    lVar8 = (long)_DAT_11271d97c;
    lVar2 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar8);
    lVar6 = lVar8;
    func_0x00010c27ecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11271d980);
    lVar3 = param_1 + _DAT_11271d984;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0133e0(puVar4,param_2,uVar7,lVar1,lVar5,lVar6,uVar9,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11271d988;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10515d33c; end: 10515d3db; -[SCSendToFindFriendsSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515d33c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271d984);
  _objc_storeStrong(param_1 + _DAT_11271d980,0);
  _objc_destroyWeak(param_1 + _DAT_11271d978);
  _objc_storeStrong(param_1 + _DAT_11271d974,0);
  _objc_destroyWeak(param_1 + _DAT_11271d97c);
  _objc_destroyWeak(param_1 + _DAT_11271d994);
  _objc_destroyWeak(param_1 + _DAT_11271d970);
  _objc_destroyWeak(param_1 + _DAT_11271d990);
  _objc_destroyWeak(param_1 + _DAT_11271d988);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271d98c);
  return;
}



/* Entry: 10515d3dc; end: 10515d527; -[SCSendToFindFriendsSectionExtension initWithFindFriendsScopeExposer:findFriendsScopeServices:sendToExperimentConfiguration:sendToUIConfiguration:contactUpsellScopeExposer:contactUpsellScopeServices:] */

undefined1 *
FUN_10515d3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e67a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515d528; end: 10515d597; -[SCSendToFindFriendsSectionExtension sectionIdentifiers] */

void FUN_10515d528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12d58;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b5490;
    _objc_alloc(PTR_PTR_1126b5490);
    uVar4 = *(undefined8 *)(puVar1 + 8);
    puVar3 = puVar1 + 0x10;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c0133c0(puVar2,param_2,uVar4,puVar3,*(undefined8 *)(puVar1 + 0x18),
                        *(undefined8 *)(puVar1 + 0x28),*(undefined8 *)(puVar1 + 0x30));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515d598; end: 10515d603; -[SCSendToFindFriendsSectionExtension sectionCreator] */

void FUN_10515d598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5490;
  _objc_alloc(PTR_PTR_1126b5490);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0133c0(puVar1,param_2,uVar3,lVar2,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10515d604; end: 10515d633; -[SCSendToFindFriendsSectionExtension sectionDescriptor] */

void FUN_10515d604(void)

{
  _objc_alloc(PTR_PTR_1126b5498);
  func_0x00010c0443a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515d634; end: 10515d63b; -[SCSendToFindFriendsSectionExtension sectionLoggingParser] */

undefined8 FUN_10515d634(void)

{
  return 0;
}



/* Entry: 10515d63c; end: 10515d697; -[SCSendToFindFriendsSectionExtension .cxx_destruct] */

void FUN_10515d63c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515d698; end: 10515d7e3; -[SCSendToFindFriendsSectionCreatorImpl initWithFindFriendsScopeExposer:findFriendsScopeServices:uiContainer:sendToExperimentConfiguration:contactUpsellScopeExposer:contactUpsellScopeServices:] */

undefined1 *
FUN_10515d698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e67a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515d7e4; end: 10515d883; -[SCSendToFindFriendsSectionCreatorImpl sectionForDescriptor:] */

void FUN_10515d7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 == 0) {
      func_0x00010bdedc20(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_alloc(PTR_PTR_1126b54a0);
      func_0x00010c002580();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515d884; end: 10515d947; -[SCSendToFindFriendsSectionCreatorImpl _createFindFriendsCollectionView] */

void FUN_10515d884(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b54a8;
  _objc_alloc(PTR_PTR_1126b54a8);
  func_0x00010c044380();
  puVar2 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  puVar3 = PTR_PTR_1126b54b0;
  _objc_alloc(PTR_PTR_1126b54b0);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c013400(puVar3,param_2,uVar5,lVar4,*(undefined8 *)(param_1 + 0x18));
  _objc_release(lVar4);
  func_0x00010c161980(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10515d948; end: 10515d9a3; -[SCSendToFindFriendsSectionCreatorImpl .cxx_destruct] */

void FUN_10515d948(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515d9a4; end: 10515dabf; -[SCSendToFindFriendsSectionCreator initWithFindFriendsScopeExposer:findFriendsScopeServices:sendToExperimentConfiguration:contactUpsellScopeExposer:contactUpsellScopeServices:] */

undefined1 *
FUN_10515d9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e67b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515dac0; end: 10515db4f; -[SCSendToFindFriendsSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_10515dac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b54b8;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c013420(puVar1,param_2,uVar3,lVar2,param_5,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10515db50; end: 10515db9f; -[SCSendToFindFriendsSectionCreator .cxx_destruct] */

void FUN_10515db50(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515dba0; end: 10515dc27; -[SCSendToFindFriendsSectionDataProvider initWithSendToExperimentConfiguration:] */

undefined1 * FUN_10515dba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e67b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = &PTR____CFConstantStringClassReference_110dc7898;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515dc28; end: 10515dc33; +[SCSendToFindFriendsSectionDataProvider announcerIdentifier] */

undefined ** FUN_10515dc28(void)

{
  return &PTR____CFConstantStringClassReference_110dc78b8;
}



/* Entry: 10515dc34; end: 10515dc3b; -[SCSendToFindFriendsSectionDataProvider addListener:] */

void FUN_10515dc34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10515dc3c; end: 10515dc43; -[SCSendToFindFriendsSectionDataProvider removeListener:] */

void FUN_10515dc3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10515dc44; end: 10515dc4b; -[SCSendToFindFriendsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_10515dc44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10515dc4c; end: 10515dc53; -[SCSendToFindFriendsSectionDataProvider numberOfItemsInSection:] */

void FUN_10515dc4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10515dc54; end: 10515dc7b; -[SCSendToFindFriendsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10515dc54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10515dc7c; end: 10515dd2b; -[SCSendToFindFriendsSectionDataProvider _SCSendToFindFriendsCTAViewModel] */

void FUN_10515dc7c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b54c0;
    _objc_alloc(PTR_PTR_1126b54c0);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc78d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc78d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc78f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc78f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053b00(puVar1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10515dd2c; end: 10515dda7; -[SCSendToFindFriendsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10515dd2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b54c8;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&uStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(*(undefined8 *)(puVar2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515dda8; end: 10515ddcf; -[SCSendToFindFriendsSectionDataProvider containerCellViewModels] */

void FUN_10515dda8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10515ddd0; end: 10515defb; -[SCSendToFindFriendsSectionDataProvider setSectionDataModel:] */

void FUN_10515ddd0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 1;
    lVar4 = param_1;
    func_0x00010bde73c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar4);
    *(undefined8 *)(param_1 + 0x18) = 2;
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained();
    func_0x00010c155aa0();
    _objc_release(lVar4);
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar1;
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bdc3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10515defc; end: 10515df67; -[SCSendToFindFriendsSectionDataProvider _containerCellViewModelForFindFriends] */

void FUN_10515defc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdc3ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10515df68; end: 10515e093; -[SCSendToFindFriendsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10515df68(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10515e094;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  uStack_48 = *(undefined8 *)(param_1 + 8);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde50a0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10515e094; end: 10515e0db;  */

void FUN_10515e094(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde50a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515e0dc; end: 10515e16b; -[SCSendToFindFriendsSectionDataProvider _configureFindFriendsCollectionViewCell:] */

void FUN_10515e0dc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b54c8;
  _objc_opt_class(PTR_PTR_1126b54c8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(param_3);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10515e16c; end: 10515e183; -[SCSendToFindFriendsSectionDataProvider dataProviderDelegate] */

void FUN_10515e16c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515e184; end: 10515e18f; -[SCSendToFindFriendsSectionDataProvider setDataProviderDelegate:] */

void FUN_10515e184(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10515e190; end: 10515e197; -[SCSendToFindFriendsSectionDataProvider sectionDataModel] */

undefined8 FUN_10515e190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10515e198; end: 10515e19f; -[SCSendToFindFriendsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10515e198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10515e1a0; end: 10515e1cf; -[SCSendToFindFriendsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10515e1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10515e1d0; end: 10515e237; -[SCSendToFindFriendsSectionDataProvider .cxx_destruct] */

void FUN_10515e1d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515e238; end: 10515e2db; -[SCSendToFindFriendsSectionDescriptor initWithSendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_10515e238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e67c0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10515e2dc; end: 10515e39f; -[SCSendToFindFriendsSectionDescriptor sectionDescriptorForQuery:] */

void FUN_10515e2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x000106c9d38c(0,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106c9c838();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f12d58;
  uVar3 = param_3;
  func_0x00010c11da20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000106c9c378(&PTR____CFConstantStringClassReference_110f12d58,uVar3,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10515e3a0; end: 10515e3cf; -[SCSendToFindFriendsSectionDescriptor .cxx_destruct] */

void FUN_10515e3a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515e3d0; end: 10515e6e3; -[SCSendToFindFriendsSectionView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10515e3d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  puStack_78 = PTR_PTR_1126e67c8;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c20eaa0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar4 = (long)_DAT_11271da04;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar5 = (long)_DAT_11271da08;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11271da0c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar5 = (long)_DAT_11271da10;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11271da14;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar3);
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(uVar3);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10515e6e4; end: 10515e8ab; -[SCSendToFindFriendsSectionView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515e6e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11271da18;
  uVar1 = param_3;
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126aea98;
  if ((uVar1 & 1) == 0) {
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
    uVar3 = uVar1;
    func_0x00010bf4ddc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b54c0;
    _objc_opt_class(PTR_PTR_1126b54c0);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar1;
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271da0c);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c2716a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar2);
    func_0x00010c16b720(uVar6);
    _objc_release(puVar2);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271da14);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf259e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar6);
    _objc_release(uVar5);
    func_0x00010bfcf7e0(uVar1);
    _objc_release(uVar1);
    func_0x00010c20eaa0(param_1);
    func_0x00010bed5ac0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10515e8ac; end: 10515f23f; -[SCSendToFindFriendsSectionView _updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10515e8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = (long)_DAT_11271da1c;
  if (*(long *)(param_5 + lVar23) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11271da04;
  uVar3 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_5;
  func_0x00010c2793a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010bf1ff80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar19);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar25);
  _objc_release(uVar4);
  _objc_release(uVar24);
  _objc_release(lVar26);
  _objc_release(uVar3);
  lVar25 = (long)_DAT_11271da08;
  uVar3 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar3;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010c08de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010c2793a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf493c0(0xc03e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar14;
  func_0x00010bf494e0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar19);
  _objc_release(uVar14);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar26 = (long)_DAT_11271da0c;
  uVar4 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c2793a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar8);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar19);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(uVar4);
  lVar26 = (long)_DAT_11271da10;
  uVar3 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar3;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_5 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar14;
  func_0x00010bf493c0(0xc03e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar24);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar19);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar25 = (long)_DAT_11271da14;
  uVar19 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010bf348e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0x402e000000000000;
  uVar5 = uVar9;
  func_0x00010bf49480(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar24);
  _objc_release(uVar3);
  _objc_release(uVar19);
  uVar24 = *(undefined8 *)(param_5 + lVar23);
  *(undefined **)(param_5 + lVar23) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar24);
  uVar21 = *(ulong *)(param_5 + lVar23);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    auVar28._8_8_ = param_2;
    auVar28._0_8_ = uVar13;
    return auVar28;
  }
  ___stack_chk_fail();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar21);
  puVar2 = PTR_PTR_1126b54c0;
  _objc_opt_class(PTR_PTR_1126b54c0);
  uVar20 = uVar21;
  _objc_opt_isKindOfClass(uVar21,puVar2);
  uVar1 = uVar21;
  if ((uVar20 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar20 = uVar1;
  func_0x00010c2716a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar13;
  func_0x00010bf20ba0(uVar13,param_2,uVar20);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(uVar20);
  _objc_release(uVar21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    auVar29._8_8_ = param_4 + 105.0 + 44.0;
    auVar29._0_8_ = uVar13;
    return auVar29;
  }
  ___stack_chk_fail();
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = uVar24;
  return auVar30;
}



/* Entry: 10515f240; end: 10515f3a3; +[SCSendToFindFriendsSectionView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_10515f240(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b54c0;
  _objc_opt_class(PTR_PTR_1126b54c0);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c2716a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf20ba0(param_1,param_2,uVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    auVar7._8_8_ = param_4 + 105.0 + 44.0;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  ___stack_chk_fail();
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 10515f3a4; end: 10515f3a7; -[SCSendToFindFriendsSectionView setHighlighted:] */

void FUN_10515f3a4(void)

{
  return;
}



/* Entry: 10515f3a8; end: 10515f3cb; -[SCSendToFindFriendsSectionView _findFriendsButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515f3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271da20),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,0,
             *(undefined8 *)(param_1 + _DAT_11271da14));
  return;
}



/* Entry: 10515f3cc; end: 10515f3db; -[SCSendToFindFriendsSectionView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10515f3cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271da18);
}



/* Entry: 10515f3dc; end: 10515f3eb; -[SCSendToFindFriendsSectionView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10515f3dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271da20);
}



/* Entry: 10515f3ec; end: 10515f42b; -[SCSendToFindFriendsSectionView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515f3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271da20;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10515f42c; end: 10515f4cb; -[SCSendToFindFriendsSectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515f42c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271da20,0);
  _objc_storeStrong(param_1 + _DAT_11271da04,0);
  _objc_storeStrong(param_1 + _DAT_11271da10,0);
  _objc_storeStrong(param_1 + _DAT_11271da08,0);
  _objc_storeStrong(param_1 + _DAT_11271da0c,0);
  _objc_storeStrong(param_1 + _DAT_11271da14,0);
  _objc_storeStrong(param_1 + _DAT_11271da18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271da1c,0);
  return;
}



/* Entry: 10515f4cc; end: 10515f57f; -[SCSendToFindFriendsSectionViewModel initWithTitleText:buttonText:groupingStyle:] */

undefined1 *
FUN_10515f4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e67d0;
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



/* Entry: 10515f580; end: 10515f5a3; -[SCSendToFindFriendsSectionViewModel copyWithZone:] */

undefined8 FUN_10515f580(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10515f5a4; end: 10515f61b; -[SCSendToFindFriendsSectionViewModel hash] */

undefined8 * FUN_10515f5a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10515f6ac:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10515f6b8;
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
          goto LAB_10515f6b8;
        }
        goto LAB_10515f6ac;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10515f6b8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10515f61c; end: 10515f6d3; -[SCSendToFindFriendsSectionViewModel isEqual:] */

long FUN_10515f61c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10515f6ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10515f6b8;
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
          goto LAB_10515f6b8;
        }
        goto LAB_10515f6ac;
      }
    }
    lVar3 = 0;
  }
LAB_10515f6b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10515f6d4; end: 10515f6db; -[SCSendToFindFriendsSectionViewModel titleText] */

undefined8 FUN_10515f6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10515f6dc; end: 10515f6e3; -[SCSendToFindFriendsSectionViewModel buttonText] */

undefined8 FUN_10515f6dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10515f6e4; end: 10515f6eb; -[SCSendToFindFriendsSectionViewModel groupingStyle] */

undefined8 FUN_10515f6e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10515f6ec; end: 10515f71b; -[SCSendToFindFriendsSectionViewModel .cxx_destruct] */

void FUN_10515f6ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10515f71c; end: 10515f78f; -[SCGrapheneSendToSpotlightEligibilityMetric2 init] */

undefined1 * FUN_10515f71c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e67d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10515f790; end: 10515f813;  */

void FUN_10515f790(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_11086c670,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10515f814; end: 10515f9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515f814(double param_1,long param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11086c6c0,&uStack_80,(long)(param_1 * 1000.0));
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume();
    param_3 = PTR_PTR_1126b54d0;
    _objc_alloc();
    pcVar2 = pcVar1 + _DAT_11271da34;
    _objc_loadWeakRetained();
    pcVar3 = pcVar2;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar1 + _DAT_11271da38;
    _objc_loadWeakRetained(pcVar5);
    pcVar6 = pcVar1 + _DAT_11271da3c;
    _objc_loadWeakRetained(pcVar6);
    pcVar7 = pcVar6;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar1 + _DAT_11271da44;
    _objc_loadWeakRetained(pcVar8);
    lVar12 = (long)_DAT_11271da48;
    pcVar9 = pcVar1 + lVar12;
    _objc_loadWeakRetained(pcVar9);
    pcVar10 = pcVar9;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05fde0(param_3);
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    _objc_release(pcVar3);
    _objc_release(pcVar2);
    pcVar1 = pcVar1 + lVar12;
    _objc_loadWeakRetained(pcVar1);
    pcVar2 = pcVar1;
    func_0x00010bdc2a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(pcVar2);
    _objc_release(pcVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10515f9a8; end: 10515fb43; -[SCBugsAndSuggestionsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515f9a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  
  puVar1 = PTR_PTR_1126b54d0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271da34;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271da38;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_11271da3c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_11271da40);
  lVar8 = param_1 + _DAT_11271da44;
  _objc_loadWeakRetained(lVar8);
  lVar11 = (long)_DAT_11271da48;
  lVar9 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05fde0(puVar1,param_2,lVar4,lVar5,lVar7,uVar12,lVar8,lVar10,param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar11;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bdc2a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10515fb44; end: 10515fbcf; -[SCBugsAndSuggestionsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fb44(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11271da48;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bdc2a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e67e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515fbd0; end: 10515fc1b; -[SCBugsAndSuggestionsEntryPoint bugsAndSuggestionsViewControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fbd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271da48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21f00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515fc1c; end: 10515fc3b; -[SCBugsAndSuggestionsEntryPoint bugsAndSuggestionsScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fc1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271da48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515fc3c; end: 10515fc4f; -[SCBugsAndSuggestionsEntryPoint setBugsAndSuggestionsScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271da48,param_3);
  return;
}



/* Entry: 10515fc50; end: 10515fc6f; -[SCBugsAndSuggestionsEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fc50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271da34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515fc70; end: 10515fc83; -[SCBugsAndSuggestionsEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fc70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271da34,param_3);
  return;
}



/* Entry: 10515fc84; end: 10515fca3; -[SCBugsAndSuggestionsEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fc84(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271da38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515fca4; end: 10515fcb7; -[SCBugsAndSuggestionsEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fca4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271da38,param_3);
  return;
}



/* Entry: 10515fcb8; end: 10515fcd7; -[SCBugsAndSuggestionsEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fcb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271da3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515fcd8; end: 10515fceb; -[SCBugsAndSuggestionsEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fcd8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271da3c,param_3);
  return;
}



/* Entry: 10515fcec; end: 10515fd0b; -[SCBugsAndSuggestionsEntryPoint inSettingReportScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fcec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271da44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10515fd0c; end: 10515fd1f; -[SCBugsAndSuggestionsEntryPoint setInSettingReportScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fd0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271da44,param_3);
  return;
}



/* Entry: 10515fd20; end: 10515fd2f; -[SCBugsAndSuggestionsEntryPoint inSettingReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10515fd20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271da40);
}



/* Entry: 10515fd30; end: 10515fd6f; -[SCBugsAndSuggestionsEntryPoint setInSettingReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fd30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271da40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10515fd70; end: 10515fddb; -[SCBugsAndSuggestionsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10515fd70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271da40,0);
  _objc_destroyWeak(param_1 + _DAT_11271da44);
  _objc_destroyWeak(param_1 + _DAT_11271da3c);
  _objc_destroyWeak(param_1 + _DAT_11271da38);
  _objc_destroyWeak(param_1 + _DAT_11271da34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271da48);
  return;
}



/* Entry: 10515fddc; end: 10516001b; -[SCBugsAndSuggestionsViewController initWithValdiRuntimeProvider:composerCoreUIServices:blizzardLogger:inSettingReportScopeExposer:inSettingReportScopeServices:navigationController:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10515fddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar3 = (long)_DAT_11271da4c;
  _objc_retain(param_6);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_6;
  _objc_retain(param_3);
  _objc_release(uVar6);
  lVar3 = (long)_DAT_11271da50;
  _objc_retain(param_7);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_7;
  _objc_release(uVar6);
  lVar3 = (long)_DAT_11271da54;
  _objc_retain(param_5);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_5;
  _objc_release(uVar6);
  lVar3 = (long)_DAT_11271da58;
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_4;
  _objc_release(uVar6);
  lVar3 = (long)_DAT_11271da5c;
  _objc_retain(param_8);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_8;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = (long)_DAT_11271da60;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar6;
  _objc_release(uVar1);
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
  }
  lVar3 = param_1;
  func_0x00010bdf5660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11271da64;
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar3;
  _objc_release(uVar6);
  puStack_68 = PTR_PTR_1126e67e8;
  plVar2 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_initWithValdiView__1125f5a88,*(undefined8 *)(param_1 + lVar4));
  if (plVar2 != (long *)0x0) {
    func_0x00010c1c1bc0(puVar5);
    lVar3 = (long)_DAT_11271da68;
    _objc_retain(puVar5);
    uVar6 = *(undefined8 *)((long)plVar2 + lVar3);
    *(undefined **)((long)plVar2 + lVar3) = puVar5;
    _objc_release(uVar6);
    _objc_storeWeak((long)plVar2 + (long)_DAT_11271da6c,param_9);
  }
  _objc_release(puVar5);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return plVar2;
}



/* Entry: 10516001c; end: 10516019b; -[SCBugsAndSuggestionsViewController _createValdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516001c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (*(long *)(param_1 + _DAT_11271da60) != 0) {
    puVar1 = PTR_PTR_1126b54d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271da70);
    *(undefined **)(param_1 + _DAT_11271da70) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126b54e0;
    _objc_alloc();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10516019c;
    puStack_60 = &UNK_110842e18;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x1051601a4;
    puStack_88 = &UNK_110842e18;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1051601ac;
    puStack_b0 = &UNK_110842e18;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1051601b4;
    puStack_d8 = &UNK_110842e18;
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x1051601bc;
    puStack_100 = &UNK_110842e18;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271da54);
    lStack_f8 = param_1;
    lStack_d0 = param_1;
    lStack_a8 = param_1;
    lStack_80 = param_1;
    lStack_58 = param_1;
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0314a0(puVar1,param_2,&puStack_78,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118,
                        uVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271da74);
    *(undefined **)(param_1 + _DAT_11271da74) = puVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_alloc(PTR_PTR_1126b54e8);
    func_0x00010c061d40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


