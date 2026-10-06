/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e36d3c; end: 104e36d83;  */

void FUN_104e36d3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e36d84; end: 104e36e6b; -[SCSpotlightManagementProfileActionHandler _saveSnapWithActionSheet:snapDataModel:] */

void FUN_104e36d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf83000(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e36e6c; end: 104e36ee7;  */

void FUN_104e36e6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23f800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be99b00(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e36ee8; end: 104e36fbb; -[SCSpotlightManagementProfileActionHandler _saveSnapForStoryId:snapClientId:] */

void FUN_104e36ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  func_0x00010bfff0a0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e36fbc; end: 104e36fdb; -[SCSpotlightManagementProfileActionHandler didCompleteSaveStoryScope:] */

void FUN_104e36fbc(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104e36fdc; end: 104e370c3; -[SCSpotlightManagementProfileActionHandler _deleteSnapWithActionSheet:snapDataModel:] */

void FUN_104e36fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf83000(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e370c4; end: 104e3715f;  */

void FUN_104e370c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23f800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c243260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa6a0(lVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e37160; end: 104e371f3; -[SCSpotlightManagementProfileActionHandler _deleteSnapForStoryId:snapClientId:serverId:] */

void FUN_104e37160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfa6c0(param_1,param_2,param_3,param_4,param_5,0,lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e371f4; end: 104e37387; -[SCSpotlightManagementProfileActionHandler _deleteSnapForStoryId:snapClientId:serverId:posterGuid:presentingViewController:] */

void FUN_104e371f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126aead8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c038f40();
  _objc_release(param_7);
  puVar2 = PTR_PTR_1126b10b8;
  _objc_alloc();
  func_0x00010bfff000();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf239c0(lVar4,param_2,puVar3,puVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,lVar4);
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(puVar1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(puVar1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e37388; end: 104e373cf; -[SCSpotlightManagementProfileActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_104e37388(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e373d0; end: 104e37417; -[SCSpotlightManagementProfileActionHandler didCancelDeleteStorySnap] */

void FUN_104e373d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e37418; end: 104e3741b; -[SCSpotlightManagementProfileActionHandler didDeleteSnapProStorySnaps:] */

void FUN_104e37418(void)

{
  return;
}



/* Entry: 104e3741c; end: 104e37503; -[SCSpotlightManagementProfileActionHandler _sendSnapWithActionSheet:snapDataModel:] */

void FUN_104e3741c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf83000(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e37504; end: 104e3757f;  */

void FUN_104e37504(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23f800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0300(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e37580; end: 104e37623; -[SCSpotlightManagementProfileActionHandler _sendSnapForStoryId:snapClientId:] */

void FUN_104e37580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf22b60(uVar2,param_2,param_4,param_3,lVar1,0x13a,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e37624; end: 104e3766b; -[SCSpotlightManagementProfileActionHandler didCompleteStoryShareScope] */

void FUN_104e37624(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e3766c; end: 104e37677; -[SCSpotlightManagementProfileActionHandler _closeActionSheet:] */

void FUN_104e3766c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_dismissActionSheetWithCompletion_1125be5a8,0)
  ;
  return;
}



/* Entry: 104e37678; end: 104e3767b; -[SCSpotlightManagementProfileActionHandler actionSheetDidDismiss:] */

void FUN_104e37678(void)

{
  return;
}



/* Entry: 104e3767c; end: 104e37693; -[SCSpotlightManagementProfileActionHandler presentingViewController] */

void FUN_104e3767c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e37694; end: 104e3769f; -[SCSpotlightManagementProfileActionHandler setPresentingViewController:] */

void FUN_104e37694(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 104e376a0; end: 104e37787; -[SCSpotlightManagementProfileActionHandler .cxx_destruct] */

void FUN_104e376a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 104e37788; end: 104e37793; +[SCSpotlightManagementProfileSectionDataProvider announcerIdentifier] */

undefined ** FUN_104e37788(void)

{
  return &PTR____CFConstantStringClassReference_110db6e58;
}



/* Entry: 104e37794; end: 104e3779b; -[SCSpotlightManagementProfileSectionDataProvider addListener:] */

void FUN_104e37794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104e3779c; end: 104e377a3; -[SCSpotlightManagementProfileSectionDataProvider removeListener:] */

void FUN_104e3779c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104e377a4; end: 104e378db; -[SCSpotlightManagementProfileSectionDataProvider initWithDataSource:thumbnailCoordinator:lazyLegacyProfileTooltipsService:layoutDirection:isDeduplicationForDidUpdateViewModelsEnabled:] */

undefined1 *
FUN_104e377a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126e4718;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    *(undefined1 *)((long)puVar1 + 0x61) = param_7;
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e378dc; end: 104e3794f; -[SCSpotlightManagementProfileSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104e378dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e37950; end: 104e37953; -[SCSpotlightManagementProfileSectionDataProvider setUp] */

void FUN_104e37950(void)

{
  return;
}



/* Entry: 104e37954; end: 104e379a7; -[SCSpotlightManagementProfileSectionDataProvider setSectionDataModel:] */

void FUN_104e37954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + 0x62) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x62) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bec7630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToDataSource_11258f730);
  return;
}



/* Entry: 104e379a8; end: 104e37ab7; -[SCSpotlightManagementProfileSectionDataProvider _subscribeToDataSource] */

void FUN_104e379a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c258ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0e60();
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



/* Entry: 104e37ab8; end: 104e37aff;  */

void FUN_104e37ab8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e37b00; end: 104e37f7b; -[SCSpotlightManagementProfileSectionDataProvider _onNextSectionDataModel:] */

void FUN_104e37b00(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfdf440();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = param_3;
  func_0x00010bfdf440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25aa80();
  func_0x000107d19ab4(uVar14,0,1,1,uVar2,1,1,*(undefined8 *)(param_1 + 0x50),0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar14;
  _objc_release(uVar15);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x28) = 1;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = param_3;
  func_0x00010c23fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar16 = uVar2;
  func_0x00010bf529e0();
  uVar1 = uVar16;
  if (4 < uVar16) {
    uVar1 = 5;
  }
  if (uVar16 != 0) {
    uVar16 = 0;
    do {
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c276fe0();
      _objc_release(uVar4);
      if (uVar5 != 0) goto LAB_104e37c78;
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar16);
    func_0x000108f38458(*(undefined8 *)(param_1 + 0x68),1);
LAB_104e37c78:
    uVar16 = 0;
    do {
      uVar4 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar6 = PTR_PTR_1126b10c0;
      _objc_alloc(PTR_PTR_1126b10c0);
      uVar7 = uVar4;
      func_0x00010c259cc0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c23f800(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d7c0(puVar6);
      _objc_release(uVar8);
      _objc_release(uVar7);
      puVar9 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar10 = PTR_PTR_1126b10c0;
      func_0x00010c100440(PTR_PTR_1126b10c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar9);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      ppuVar11 = (undefined **)PTR_PTR_1126b10c8;
      if (uVar5 == 0) {
        ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        uVar7 = uVar4;
        func_0x00010c276fe0(uVar4);
        func_0x00010c22d8e0((double)uVar7,ppuVar11);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar12 = PTR_PTR_1126b10d0;
      _objc_alloc(PTR_PTR_1126b10d0);
      uVar7 = uVar4;
      func_0x00010c258da0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0823e0(uVar4);
      func_0x00010bfd6f60(uVar4);
      func_0x00010c0775e0(uVar4);
      func_0x00010c051f00(puVar12);
      _objc_release(uVar7);
      _objc_release(ppuVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(uVar4);
      func_0x00010befa120(puVar3);
      _objc_release(puVar12);
      _objc_release(uVar4);
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar16);
  }
  *(undefined8 *)(param_1 + 0x28) = 2;
  lVar17 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar17);
  _objc_retain(puVar3);
  if (puVar3 == (undefined *)0x0 && lVar17 == 0) {
    iVar18 = 1;
  }
  else {
    iVar18 = 0;
    if ((puVar3 != (undefined *)0x0) && (lVar17 != 0)) {
      lVar13 = lVar17;
      func_0x00010c071b60();
      iVar18 = (int)lVar13;
    }
  }
  _objc_release(puVar3);
  _objc_release(lVar17);
  puVar6 = puVar3;
  func_0x00010bf51e00();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar6;
  _objc_release(uVar14);
  if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
  }
  else if ((iVar18 == 0) || ((*(byte *)(param_1 + 0x60) & 1) == 0)) {
    lVar17 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar17);
    func_0x00010c155aa0();
    _objc_release(lVar17);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e37f7c; end: 104e37f7f; -[SCSpotlightManagementProfileSectionDataProvider numberOfItemsInSection:] */

void FUN_104e37f7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be655b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__numberOfItemsInSectionV2__112576f08);
  return;
}



/* Entry: 104e37f80; end: 104e37fa3; -[SCSpotlightManagementProfileSectionDataProvider _numberOfItemsInSectionV2:] */

undefined8 FUN_104e37f80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 104e37fa4; end: 104e37ff7; -[SCSpotlightManagementProfileSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104e37fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e37ff8;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e37ff8; end: 104e381bb;  */

void FUN_104e37ff8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c0840e0();
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010bf529e0();
    puVar6 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    if (lVar4 == 0) {
      func_0x00010bffd260(puVar6);
      goto LAB_104e3819c;
    }
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010bf51e00(puVar5);
    func_0x00010bffd260(puVar6);
  }
  else {
    lVar4 = param_2;
    func_0x00010c0840e0();
    if (lVar4 != 1) {
      puVar6 = (undefined *)0x0;
      goto LAB_104e3819c;
    }
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar5 = PTR_PTR_1126b10d8;
    _objc_alloc(PTR_PTR_1126b10d8);
    puVar1 = puVar5;
    func_0x000108f589e4();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053b20(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
  }
  _objc_release(puVar5);
LAB_104e3819c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104e381bc; end: 104e3827f; -[SCSpotlightManagementProfileSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104e381bc(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_a0,puVar1);
    ppuStack_98 = &PTR____CFConstantStringClassReference_110db6ef8;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104e383a0;
    puStack_b0 = &UNK_110852d60;
    puVar4 = auStack_a0;
    _objc_copyWeak(auStack_a8,puVar4);
    ppuVar2 = &puStack_c8;
    _objc_retainBlock();
    ppuStack_90 = ppuVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_a8);
    puVar3 = auStack_a0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      __Unwind_Resume(puVar3);
      _objc_retain(puVar4);
      puVar3 = puVar3 + 0x20;
      _objc_loadWeakRetained(puVar3);
      func_0x00010bde5980();
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e38280; end: 104e3839f; -[SCSpotlightManagementProfileSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104e38280(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db6ef8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e383a0;
  puStack_60 = &UNK_110852d60;
  puVar4 = auStack_50;
  _objc_copyWeak(auStack_58,puVar4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar3 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar3);
  _objc_retain(puVar4);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bde5980();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104e383a0; end: 104e383e7;  */

void FUN_104e383a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e383e8; end: 104e383ef; -[SCSpotlightManagementProfileSectionDataProvider minimumInteritemSpacing] */

undefined8 FUN_104e383e8(void)

{
  return 0x4024000000000000;
}



/* Entry: 104e383f0; end: 104e38417; -[SCSpotlightManagementProfileSectionDataProvider tearDown] */

void FUN_104e383f0(long param_1)

{
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x62) = 0;
  return;
}



/* Entry: 104e38418; end: 104e38427; -[SCSpotlightManagementProfileSectionDataProvider _configureSnapContainerCell:] */

void FUN_104e38418(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_setThumbnailCoordinator__1126629f8,*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104e38428; end: 104e3843f; -[SCSpotlightManagementProfileSectionDataProvider dataProviderDelegate] */

void FUN_104e38428(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e38440; end: 104e3844b; -[SCSpotlightManagementProfileSectionDataProvider setDataProviderDelegate:] */

void FUN_104e38440(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 104e3844c; end: 104e38453; -[SCSpotlightManagementProfileSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104e3844c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104e38454; end: 104e3845b; -[SCSpotlightManagementProfileSectionDataProvider sectionDataModel] */

undefined8 FUN_104e38454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 104e3845c; end: 104e3850b; -[SCSpotlightManagementProfileSectionDataProvider .cxx_destruct] */

void FUN_104e3845c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e3850c; end: 104e387db; -[SCFavouritesManagementProfileSectionCreator initWithSectionExtensionServices:queryCoordinator:discoverFeedActionHandler:discoverFeedDataFetcher:snapchattersSynchronousDataFetcher:imageDownloader:sectionsCoordinator:circumstanceEngine:imageSourceProvider:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:] */

undefined8 *
FUN_104e3850c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e4720;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 104e387dc; end: 104e387e3; -[SCFavouritesManagementProfileSectionCreator order] */

undefined8 FUN_104e387dc(void)

{
  return 0x2c;
}



/* Entry: 104e387e4; end: 104e3897b; -[SCFavouritesManagementProfileSectionCreator section] */

void FUN_104e387e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x70);
  if (lVar6 == 0) {
    lVar6 = param_1;
    func_0x000106029834();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1100;
    _objc_alloc(PTR_PTR_1126b1100);
    func_0x00010c043040();
    puVar3 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110eb4ff8;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110df78d8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b1110;
    _objc_alloc(PTR_PTR_1126b1110);
    func_0x00010c042fc0();
    func_0x00010c1f9240(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_retain(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(lVar6);
  }
  else {
    _objc_retain(lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(lVar6 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3897c; end: 104e38993; -[SCFavouritesManagementProfileSectionCreator lifecycleAnnouncer] */

void FUN_104e3897c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e38994; end: 104e3899f; -[SCFavouritesManagementProfileSectionCreator setLifecycleAnnouncer:] */

void FUN_104e38994(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 104e389a0; end: 104e389a7; -[SCFavouritesManagementProfileSectionCreator actionHandler] */

undefined8 FUN_104e389a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104e389a8; end: 104e38a6f; -[SCFavouritesManagementProfileSectionCreator .cxx_destruct] */

void FUN_104e389a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 104e38a70; end: 104e38acb;  */

ulong FUN_104e38a70(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010bf1f980(param_3);
  dVar2 = param_1;
  func_0x00010bf1f980(param_4);
  _objc_release(param_4);
  uVar1 = (ulong)(param_1 < dVar2);
  if (dVar2 < param_1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 104e38acc; end: 104e38e7f;  */

void FUN_104e38acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1118;
  _objc_alloc(PTR_PTR_1126b1118);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043160(puVar1);
  _objc_release(puVar7);
  lVar2 = param_1;
  func_0x0001079b64c0(param_1,0,0,puVar1,param_2,0,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe8d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar4 = lVar3;
    func_0x00010bf28ba0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) goto LAB_104e38bc4;
    lVar4 = lVar3;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
      goto LAB_104e38cf8;
    }
  }
  else {
LAB_104e38bc4:
    _objc_release();
  }
  lVar4 = lVar3;
  func_0x00010bf28ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR_PTR_1126b1120;
  lVar5 = lVar3;
  if (lVar4 == 0) {
    lVar4 = lVar3;
    func_0x00010bfe8d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_104e38e80;
      uStack_70 = 0x104e38e90;
      lStack_68 = 0;
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b0 = 0x3032000000;
      pcStack_a8 = FUN_104e38e80;
      uStack_a0 = 0x104e38e90;
      uStack_98 = 0;
      lVar4 = lVar3;
      func_0x00010c26e120(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c0cc0();
      _objc_release(lVar4);
      puVar6 = PTR_PTR_1126b1120;
      func_0x00010bf1efa0();
      _objc_retainAutoreleasedReturnValue();
      __Block_object_dispose(&uStack_c0,8);
      _objc_release(uStack_98);
      __Block_object_dispose(&uStack_90,8);
      lVar5 = lStack_68;
    }
    else {
      func_0x00010bfe8d80(lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b1120;
      func_0x00010c0d7ba0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bf28ba0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf28bc0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  if (puVar6 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar4 = param_1;
    func_0x00010848192c(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123160();
    _objc_release(lVar4);
    puVar7 = PTR_PTR_1126b1128;
    _objc_alloc(PTR_PTR_1126b1128);
    lVar4 = lVar3;
    func_0x00010c112fe0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108481ebc(param_1);
    func_0x00010c051f60(puVar7);
    _objc_release(lVar4);
  }
  _objc_release(puVar6);
LAB_104e38cf8:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104e38e80; end: 104e38e97;  */

void FUN_104e38e80(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e38e98; end: 104e38f0b;  */

void FUN_104e38e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e38f0c; end: 104e38f17; +[SCFavouritesManagementProfileSectionDataProvider announcerIdentifier] */

undefined ** FUN_104e38f0c(void)

{
  return &PTR____CFConstantStringClassReference_110db6e78;
}



/* Entry: 104e38f18; end: 104e38f1f; -[SCFavouritesManagementProfileSectionDataProvider addListener:] */

void FUN_104e38f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104e38f20; end: 104e38f27; -[SCFavouritesManagementProfileSectionDataProvider removeListener:] */

void FUN_104e38f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104e38f28; end: 104e39263; -[SCFavouritesManagementProfileSectionDataProvider initWithSectionExtensionServices:queryCoordinator:discoverFeedActionHandler:discoverFeedDataFetcher:imageDownloader:snapchattersSynchronousDataFetcher:sectionsCoordinator:circumstanceEngine:imageSourceProvider:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:] */

undefined8 *
FUN_104e38f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e4728;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[7];
    puVar1[7] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    func_0x00010beaf460(puVar1);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x000108f4a210();
    puVar1[0x15] = uVar2;
  }
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 104e39264; end: 104e3928f; -[SCFavouritesManagementProfileSectionDataProvider setUp] */

void FUN_104e39264(long param_1,undefined8 param_2)

{
  func_0x00010befc780(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be146d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchStories_112562b50);
  return;
}



/* Entry: 104e39290; end: 104e392bf; -[SCFavouritesManagementProfileSectionDataProvider tearDown] */

void FUN_104e39290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12eea0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e392c0; end: 104e39397; -[SCFavouritesManagementProfileSectionDataProvider setSectionDataModel:] */

void FUN_104e392c0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar2;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 200);
  _objc_retain(lVar5);
  _objc_retain(param_3);
  if (lVar5 == param_3) {
    iVar1 = 1;
  }
  else if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = lVar5;
    func_0x00010c071ae0(lVar5,param_2,param_3);
    iVar1 = (int)lVar2;
  }
  _objc_release(param_3);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar5;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b1130;
  func_0x00010c070420(PTR_PTR_1126b1130,param_2,*(undefined8 *)(param_1 + 0x50));
  if ((int)puVar3 == 0) {
    func_0x00010be8ab60(param_1);
  }
  else if ((iVar1 == 0) || ((*(byte *)(param_1 + 0xb0) & 1) == 0)) {
    func_0x00010be8ab60(param_1);
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e39398; end: 104e393ff; -[SCFavouritesManagementProfileSectionDataProvider _reloadSection] */

void FUN_104e39398(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf009e0(uVar1,param_2,0xef);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010847f4e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6a560(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e39400; end: 104e394f7; -[SCFavouritesManagementProfileSectionDataProvider _fetchStories] */

void FUN_104e39400(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b1138;
  _objc_alloc();
  func_0x00010c0127e0();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e394f8; end: 104e39557;  */

void FUN_104e394f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fcc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e39558; end: 104e396df; -[SCFavouritesManagementProfileSectionDataProvider _onNextSectionDataModelUpdate] */

void FUN_104e39558(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf009e0(uVar1,param_2,0xef);
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(param_1 + 0x80) = 1;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104e38e80;
  uStack_40 = 0x104e38e90;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_58 = &uStack_60;
  _objc_opt_new();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e396e0;
  puStack_78 = &UNK_110852e30;
  lStack_70 = param_1;
  puStack_68 = &uStack_60;
  puStack_38 = puVar2;
  func_0x00010847f64c(uVar1,&puStack_90);
  func_0x00010c246ba0(puStack_58[5]);
  lVar5 = puStack_58[5];
  if (lVar5 != 0) {
    func_0x00010bf529e0();
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar5);
  }
  *(undefined8 *)(param_1 + 0x80) = 2;
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e396e0; end: 104e39833;  */

void FUN_104e396e0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar13 = param_2;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(param_2);
        }
        lVar1 = *(long *)(lStack_118 + lVar12 * 8);
        FUN_104e38acc(lVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88));
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != 0) {
          func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
        }
        _objc_release(lVar1);
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = param_2;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  uVar2 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf529e0();
  *(bool *)param_3 = 4 < uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  *(undefined8 *)(param_2 + 0x80) = 1;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar10 = (undefined1 *)puVar7;
  func_0x00010bf529e0();
  if (puVar10 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
    lVar13 = 0;
    do {
      puVar4 = (undefined1 *)puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_104e38acc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar5 == (undefined1 *)0x0) {
        _objc_release(0);
      }
      else {
        func_0x00010befa120(puVar3);
        _objc_release(puVar5);
        if (3 < lVar13) break;
        lVar13 = lVar13 + 1;
      }
      puVar10 = puVar10 + 1;
      puVar4 = (undefined1 *)puVar7;
      func_0x00010bf529e0();
    } while (puVar10 < puVar4);
  }
  *(undefined8 *)(param_2 + 0x80) = 2;
  lVar13 = *(long *)(param_2 + 0xa0);
  _objc_retain(lVar13);
  _objc_retain(puVar3);
  if (puVar3 == (undefined *)0x0 && lVar13 == 0) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    if ((puVar3 != (undefined *)0x0) && (lVar13 != 0)) {
      lVar11 = lVar13;
      func_0x00010c071b60();
      iVar9 = (int)lVar11;
    }
  }
  _objc_release(puVar3);
  _objc_release(lVar13);
  puVar6 = puVar3;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined **)(param_2 + 0xa0) = puVar6;
  _objc_release(uVar8);
  puVar6 = PTR_PTR_1126b1130;
  func_0x00010c070420();
  if ((int)puVar6 == 0) {
    param_2 = param_2 + 0xb8;
    _objc_loadWeakRetained(param_2);
    func_0x00010c155aa0();
    _objc_release(param_2);
  }
  else if ((iVar9 == 0) || ((*(byte *)(param_2 + 0xb0) & 1) == 0)) {
    lVar13 = param_2 + 0xb8;
    _objc_loadWeakRetained(lVar13);
    func_0x00010c155aa0();
    _objc_release(lVar13);
    *(undefined1 *)(param_2 + 0xb0) = 1;
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104e39834; end: 104e399fb; -[SCFavouritesManagementProfileSectionDataProvider _onNextSectionDataModel:] */

void FUN_104e39834(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x80) = 1;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar8 = param_3;
  func_0x00010bf529e0();
  if (uVar8 != 0) {
    uVar8 = 0;
    lVar9 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_104e38acc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        _objc_release(0);
      }
      else {
        func_0x00010befa120(puVar1);
        _objc_release(uVar3);
        if (3 < lVar9) break;
        lVar9 = lVar9 + 1;
      }
      uVar8 = uVar8 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar8 < uVar2);
  }
  *(undefined8 *)(param_1 + 0x80) = 2;
  lVar9 = *(long *)(param_1 + 0xa0);
  _objc_retain(lVar9);
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0 && lVar9 == 0) {
    iVar7 = 1;
  }
  else {
    iVar7 = 0;
    if ((puVar1 != (undefined *)0x0) && (lVar9 != 0)) {
      lVar4 = lVar9;
      func_0x00010c071b60();
      iVar7 = (int)lVar4;
    }
  }
  _objc_release(puVar1);
  _objc_release(lVar9);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126b1130;
  func_0x00010c070420();
  if ((int)puVar5 == 0) {
    param_1 = param_1 + 0xb8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
  }
  else if ((iVar7 == 0) || ((*(byte *)(param_1 + 0xb0) & 1) == 0)) {
    lVar9 = param_1 + 0xb8;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c155aa0();
    _objc_release(lVar9);
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e399fc; end: 104e399ff; -[SCFavouritesManagementProfileSectionDataProvider numberOfItemsInSection:] */

void FUN_104e399fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be655b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__numberOfItemsInSectionV2__112576f08);
  return;
}



/* Entry: 104e39a00; end: 104e39a23; -[SCFavouritesManagementProfileSectionDataProvider _numberOfItemsInSectionV2:] */

undefined8 FUN_104e39a00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  func_0x00010bf529e0();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 104e39a24; end: 104e39a77; -[SCFavouritesManagementProfileSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104e39a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e39a78;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e39a78; end: 104e39bf7;  */

void FUN_104e39a78(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0840e0();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0xa0);
    func_0x00010bf51e00(puVar5);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0840e0();
    if (lVar1 != 1) {
      puVar6 = (undefined *)0x0;
      goto LAB_104e39bd8;
    }
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar5 = PTR_PTR_1126b10d8;
    _objc_alloc(PTR_PTR_1126b10d8);
    puVar2 = puVar5;
    func_0x0001060297ec();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053b20(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
  }
  func_0x00010bffd260();
  _objc_release(puVar5);
LAB_104e39bd8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104e39bf8; end: 104e39c9b; -[SCFavouritesManagementProfileSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104e39bf8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_90,puVar1);
    ppuStack_88 = &PTR____CFConstantStringClassReference_110db6e98;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104e39dbc;
    puStack_a0 = &UNK_110852e60;
    puVar4 = auStack_90;
    _objc_copyWeak(auStack_98,puVar4);
    ppuVar2 = &puStack_b8;
    _objc_retainBlock();
    ppuStack_80 = ppuVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_98);
    puVar3 = auStack_90;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      __Unwind_Resume(puVar3);
      _objc_retain(puVar4);
      puVar3 = puVar3 + 0x20;
      _objc_loadWeakRetained(puVar3);
      func_0x00010bde5980();
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e39c9c; end: 104e39dbb; -[SCFavouritesManagementProfileSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104e39c9c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db6e98;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e39dbc;
  puStack_60 = &UNK_110852e60;
  puVar4 = auStack_50;
  _objc_copyWeak(auStack_58,puVar4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar3 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar3);
  _objc_retain(puVar4);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bde5980();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104e39dbc; end: 104e39e03;  */

void FUN_104e39dbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e39e04; end: 104e39e0b; -[SCFavouritesManagementProfileSectionDataProvider minimumInteritemSpacing] */

undefined8 FUN_104e39e04(void)

{
  return 0x4024000000000000;
}



/* Entry: 104e39e0c; end: 104e39e5b; -[SCFavouritesManagementProfileSectionDataProvider _configureSnapContainerCell:] */

void FUN_104e39e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c1aa200(param_3,param_2,uVar1);
  func_0x00010c1aaa20(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e39e5c; end: 104e39f8f; -[SCFavouritesManagementProfileSectionDataProvider _setupQueryResultController] */

/* WARNING: Possible PIC construction at 0x000104e39e84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e39e88) */

void FUN_104e39e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 104e39f90; end: 104e3a05f; -[SCFavouritesManagementProfileSectionDataProvider _sendQueryWithSource:queryParameters:sectionExtensionServices:] */

void FUN_104e39f90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1f9280(uVar2,param_2,param_5);
  func_0x00010c1f9280(*(undefined8 *)(param_1 + 0x68),param_2,param_5);
  _objc_release(param_5);
  *(undefined1 *)(param_1 + 0x90) = 1;
  puVar1 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c1e6360(*(undefined8 *)(param_1 + 0x70),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e3a060; end: 104e3a137; -[SCFavouritesManagementProfileSectionDataProvider discoverQueryCoordinator:didReceiveServerResponseForQuery:] */

void FUN_104e3a060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e3a138; end: 104e3a163;  */

void FUN_104e3a138(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e3a164; end: 104e3a26b; -[SCFavouritesManagementProfileSectionDataProvider discoverQueryCoordinator:didFailForQuery:error:statusCodeToDisplay:] */

void FUN_104e3a164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e3a26c; end: 104e3a297;  */

void FUN_104e3a26c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e3a298; end: 104e3a29f; -[SCFavouritesManagementProfileSectionDataProvider _didFinishQuery] */

void FUN_104e3a298(long param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 104e3a2a0; end: 104e3a2bb; -[SCFavouritesManagementProfileSectionDataProvider presentingViewControllerForSearchQueryResultController:] */

void FUN_104e3a2a0(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UIViewController_1126af898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3a2bc; end: 104e3a2bf; -[SCFavouritesManagementProfileSectionDataProvider searchQueryResultController:willUpdateResultForQuery:fromQuery:] */

void FUN_104e3a2bc(void)

{
  return;
}



/* Entry: 104e3a2c0; end: 104e3a38f; -[SCFavouritesManagementProfileSectionDataProvider searchQueryResultControllerDidUpdateQueryResult:] */

void FUN_104e3a2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104e3a390; end: 104e3a3bb;  */

void FUN_104e3a390(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e3a3bc; end: 104e3a3bf; -[SCFavouritesManagementProfileSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_104e3a3bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performUpdateStoriesFromDataSto_11257a4e8);
  return;
}



/* Entry: 104e3a3c0; end: 104e3a467; -[SCFavouritesManagementProfileSectionDataProvider _performUpdateStoriesFromDataStore] */

void FUN_104e3a3c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e3a468; end: 104e3a493;  */

void FUN_104e3a468(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ab60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e3a494; end: 104e3a497; -[SCFavouritesManagementProfileSectionDataProvider dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_104e3a494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performUpdateStoriesFromDataSto_11257a4e8);
  return;
}



/* Entry: 104e3a498; end: 104e3a49b; -[SCFavouritesManagementProfileSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_104e3a498(void)

{
  return;
}



/* Entry: 104e3a49c; end: 104e3a4b3; -[SCFavouritesManagementProfileSectionDataProvider dataProviderDelegate] */

void FUN_104e3a49c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e3a4b4; end: 104e3a4bf; -[SCFavouritesManagementProfileSectionDataProvider setDataProviderDelegate:] */

void FUN_104e3a4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 104e3a4c0; end: 104e3a4c7; -[SCFavouritesManagementProfileSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104e3a4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 104e3a4c8; end: 104e3a4f7; -[SCFavouritesManagementProfileSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104e3a4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e3a4f8; end: 104e3a4ff; -[SCFavouritesManagementProfileSectionDataProvider sectionDataModel] */

undefined8 FUN_104e3a4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}


