/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106690cec; end: 106690d57; -[SCLensExplorerSectionFactory _avatarProvider] */

void FUN_106690cec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ccb90;
  _objc_alloc(PTR_PTR_1126ccb90);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c258ae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d2c0(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x80));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106690d58; end: 106690d8b; -[SCLensExplorerSectionFactory mediaCache] */

void FUN_106690d58(void)

{
  _objc_alloc(PTR_PTR_1126ccb98);
  func_0x00010c029300(0x4008000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106690d8c; end: 106690e4b; -[SCLensExplorerSectionFactory .cxx_destruct] */

void FUN_106690d8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 106690e4c; end: 106690f17; -[SCLensExplorerStoryDataSourceFactory initWithDataStoreFactory:queryCoordinatorFactory:queryFactory:] */

undefined1 *
FUN_106690e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f2508;
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



/* Entry: 106690f18; end: 106691013; -[SCLensExplorerStoryDataSourceFactory storyGroupDataSourceWithStoryId:sectionId:] */

void FUN_106690f18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ccba8;
  puVar4 = PTR_PTR_1126ccba0;
  if (param_4 == 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar4);
    func_0x00010c04d760();
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c093d60(uVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0965e0(uVar3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01dd40(puVar1,param_2,param_3,param_4,uVar2,uVar3,*(undefined8 *)(param_1 + 0x18));
    _objc_release(param_3);
    _objc_release(uVar3);
    param_3 = uVar2;
    puVar4 = puVar1;
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106691014; end: 10669104f; -[SCLensExplorerStoryDataSourceFactory .cxx_destruct] */

void FUN_106691014(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106691050; end: 10669129f; -[SCLensExplorerDiffProvider diffOldModels:newModel:] */

void FUN_106691050(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar8 = param_4;
  func_0x00010bf529e0();
  if (uVar8 != 0) {
    uVar8 = 0;
    do {
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1066912a0;
      puStack_80 = &UNK_110932c78;
      _objc_retain();
      uVar4 = param_3;
      uStack_78 = uVar3;
      func_0x00010bfece40(param_3,param_2,&puStack_98);
      if (uVar4 == 0x7fffffffffffffff) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
LAB_1066911dc:
        func_0x00010befa120(puVar6,param_2,puVar5);
        _objc_release(puVar5);
      }
      else if (uVar8 != uVar4) {
        puVar5 = PTR_PTR_1126ccbb0;
        _objc_alloc(PTR_PTR_1126ccbb0);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c016740(puVar5,param_2,puVar6,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = puVar2;
        goto LAB_1066911dc;
      }
      _objc_release(uStack_78);
      _objc_release(uVar3);
      uVar8 = uVar8 + 1;
      uVar3 = param_4;
      func_0x00010bf529e0();
    } while (uVar8 < uVar3);
  }
  func_0x00010be8dfe0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ccbb8;
  _objc_alloc(PTR_PTR_1126ccbb8);
  func_0x00010c01e2e0();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066912a0; end: 10669132b;  */

undefined8 FUN_1066912a0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf7ecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf7ecc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c0720c0();
  *param_4 = (char)uVar2;
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 10669132c; end: 106691483; -[SCLensExplorerDiffProvider _removedIndexesFromOldModels:newModel:] */

void FUN_10669132c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar6 = param_3;
  func_0x00010bf529e0();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = puVar5;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106691484;
      puStack_80 = &UNK_110932ca8;
      _objc_retain();
      uVar3 = param_4;
      uStack_78 = uVar2;
      func_0x00010bf04920(param_4,param_2,&puStack_98);
      if ((uVar3 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
      }
      _objc_release(uStack_78);
      _objc_release(uVar2);
      uVar6 = uVar6 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar6 < uVar2);
  }
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106691484; end: 1066914f3;  */

undefined8 FUN_106691484(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf7ecc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf7ecc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1066914f4; end: 1066915bb; +[SCLensExplorerLensMetadataExtensionsHelper lensExtensionsWithCategoryId:pickedLensSource:] */

undefined1 * FUN_1066914f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126ccbc0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bffd060();
  _objc_release(param_3);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e590d8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_80;
  pcStack_58 = FUN_1066915bc;
  puStack_78 = PTR_PTR_1126f2510;
  puStack_80 = puVar1;
  uStack_70 = param_3;
  puStack_68 = puVar2;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined **)((long)ppuVar3 + 8) = puVar1;
    _objc_release(uVar4);
    *(undefined4 *)((long)ppuVar3 + 0x10) = 0;
  }
  return (undefined1 *)ppuVar3;
}



/* Entry: 1066915bc; end: 106691623; -[SCLensExplorerOperationTracker init] */

undefined1 * FUN_1066915bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2510;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106691624; end: 106691693; -[SCLensExplorerOperationTracker isLiveOperationForKey:] */

undefined8 FUN_106691624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106691694; end: 1066916ef; -[SCLensExplorerOperationTracker startOperationForKey:] */

void FUN_106691694(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066916f0; end: 10669174b; -[SCLensExplorerOperationTracker finishOperationForKey:] */

void FUN_1066916f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10669174c; end: 1066917a7; -[SCLensExplorerOperationTracker finishOperationForKeys:] */

void FUN_10669174c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c0ce860(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066917a8; end: 1066917eb; -[SCLensExplorerOperationTracker finishAllOperations] */

void FUN_1066917a8(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1066917ec; end: 1066917f7; -[SCLensExplorerOperationTracker .cxx_destruct] */

void FUN_1066917ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066917f8; end: 1066918a3; -[SCLensExplorerCreatorAvatarViewModelProvider initWithStoriesReadReceiptCoordinator:studySettingsProvider:generalStyleOverride:] */

undefined1 *
FUN_1066917f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2518;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066918a4; end: 106691a9f; -[SCLensExplorerCreatorAvatarViewModelProvider avatarViewModelObservableForCreator:] */

void FUN_1066918a4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccb90;
  func_0x00010bdd1ee0(PTR_PTR_1126ccb90,param_2,param_3,0,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf5b880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c258b20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106691aa0;
    puStack_70 = &UNK_110932cd8;
    _objc_retain(param_3);
    puVar5 = puVar4;
    lStack_68 = param_3;
    func_0x00010c0b8600(puVar4,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    puStack_b8 = puVar7;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106691bc0;
    puStack_a0 = &UNK_110932d08;
    _objc_retain(param_3);
    puVar4 = puVar5;
    lStack_98 = param_3;
    uStack_90 = uVar8;
    func_0x00010c0b8600(puVar5,param_2,&puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c0e0ec0(puVar3,param_2,puVar6,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(lStack_98);
    _objc_release(puVar5);
    _objc_release(lStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106691aa0; end: 106691b83;  */

void FUN_106691aa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25b220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0bc7a0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106691b84; end: 106691bbf;  */

bool FUN_106691b84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 106691bc0; end: 106691c07;  */

void FUN_106691bc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ccb90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdd1ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s__avatarViewModelForCreator_hasUn_112552158,uVar2,(uint)param_2 ^ 1,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106691c08; end: 106691fbb; +[SCLensExplorerCreatorAvatarViewModelProvider _avatarViewModelForCreator:hasUnviewedStories:styleOverride:] */

void FUN_106691c08(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  uint in_stack_ffffffffffffff60;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c1170a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR_PTR_1126b4860;
  if (puVar1 == (undefined *)0x0) {
    puVar8 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bf5b380(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf5b580(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf5b120(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf5b140(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar8;
    func_0x000108feb5c8(puVar8,puVar2,puVar3,puVar4,puVar5,0,0,puVar6,0x27,1,0,1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126b45f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246860(0,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x000108fec9ec(puVar1,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  else {
    puVar1 = param_3;
    func_0x00010c1170a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar2 = param_3;
    func_0x00010bf5b880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR_PTR_1126b4860;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010c1170a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar2);
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = param_3;
      func_0x00010bf5b880();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c26e020();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010669221c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = puVar1;
    func_0x000108fec800(puVar1,puVar8,0,0,0,0,0,0,in_stack_ffffffffffffff60 & 0xffffff00);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106691fbc; end: 106691feb; -[SCLensExplorerCreatorAvatarViewModelProvider .cxx_destruct] */

void FUN_106691fbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106691fec; end: 10669203b; +[SCLensExplorerMemoriesTemplateHelpers feedIdForSnapsCount:maxSupportedSnapsCount:] */

void FUN_106691fec(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((1 < param_3) && (param_3 <= param_4)) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e59118);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10669203c; end: 1066921cb;  */

void FUN_10669203c(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126cb008;
  _objc_retain();
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c086560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c085300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c28f340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0ed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0880c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bf4cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf4cd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c020be0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066921cc; end: 10669225f;  */

void FUN_1066921cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107d23490();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b4860;
  func_0x00010c258dc0(PTR_PTR_1126b4860,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106692260; end: 1066923b3;  */

void FUN_106692260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bfca8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c111400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c1113e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c6940;
  _objc_alloc(PTR_PTR_1126c6940);
  uVar2 = param_1;
  func_0x00010c1121a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051fe0(puVar4,param_2,uVar3,puVar1,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  uVar2 = param_1;
  func_0x00010c0844e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bffa8e0(puVar5,param_2,uVar2,2,0,puVar4,0);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066923b4; end: 106692427; -[SCLensExplorerSingleStoryDataSource initWithStoryId:] */

undefined1 * FUN_1066923b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2520;
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



/* Entry: 106692428; end: 1066924c7; -[SCLensExplorerSingleStoryDataSource storiesObservable] */

undefined * FUN_106692428(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = PTR_PTR_1126ae6b8;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 1066924c8; end: 1066924cf; -[SCLensExplorerSingleStoryDataSource hasMoreStories] */

undefined8 FUN_1066924c8(void)

{
  return 0;
}



/* Entry: 1066924d0; end: 1066924d3; -[SCLensExplorerSingleStoryDataSource requestMoreStories] */

void FUN_1066924d0(void)

{
  return;
}



/* Entry: 1066924d4; end: 1066924db; -[SCLensExplorerSingleStoryDataSource initialStoryId] */

undefined8 FUN_1066924d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1066924dc; end: 1066924e7; -[SCLensExplorerSingleStoryDataSource .cxx_destruct] */

void FUN_1066924dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066924e8; end: 10669260b; -[SCLensExplorerStoryFeedDataSource initWithInitialStoryId:sectionId:feedDataStore:queryCoordinator:queryFactory:] */

undefined1 *
FUN_1066924e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f2528;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10669260c; end: 10669265b; -[SCLensExplorerStoryFeedDataSource storiesObservable] */

void FUN_10669260c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10669265c; end: 10669266b;  */

void FUN_10669265c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110932d78);
  return;
}



/* Entry: 10669266c; end: 1066926b3;  */

void FUN_10669266c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0ba220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066926b4; end: 1066926f3; -[SCLensExplorerStoryFeedDataSource hasMoreStories] */

undefined8 FUN_1066926b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c12a440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd93c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1066926f4; end: 1066927bf; -[SCLensExplorerStoryFeedDataSource requestMoreStories] */

void FUN_1066926f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ccbc8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  _objc_alloc(puVar1);
  func_0x00010c0430e0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaacc0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1066927c0;
  puStack_40 = &UNK_110849f28;
  uStack_38 = uVar3;
  func_0x00010c13cfe0(*(undefined8 *)(param_1 + 0x18),param_2,uVar2,&puStack_58);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1066927c0; end: 10669283b;  */

void FUN_1066927c0(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10669283c;
  puStack_20 = &UNK_110932d98;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106692840;
  puStack_48 = &UNK_110849810;
  uStack_18 = uStack_40;
  func_0x00010c0c0800(param_2,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 10669283c; end: 106692843;  */

void FUN_10669283c(void)

{
  return;
}



/* Entry: 106692844; end: 10669284b; -[SCLensExplorerStoryFeedDataSource initialStoryId] */

undefined8 FUN_106692844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10669284c; end: 10669289f; -[SCLensExplorerStoryFeedDataSource .cxx_destruct] */

void FUN_10669284c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066928a0; end: 10669296b; -[SCLensExplorerDeepLinkHandlerFactory initWithDeeplinkPresentationHandler:activityCenterPresenter:webBrowsingExposer:] */

undefined1 *
FUN_1066928a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f2530;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10669296c; end: 1066929e7; -[SCLensExplorerDeepLinkHandlerFactory deepLinkHandlerWithInternalRouter:] */

void FUN_10669296c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 8);
  if (puVar3 == (undefined *)0x0) {
    lVar1 = param_1;
    func_0x00010bdf8ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ccbd0;
    _objc_alloc();
    func_0x00010c009ae0();
    _objc_retain();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066929e8; end: 106692b2b; -[SCLensExplorerDeepLinkHandlerFactory _deepLinkHandlingPluginsWithInternalRouter:] */

void FUN_1066929e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_3);
  func_0x00010c1607a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccbd8;
  _objc_alloc(PTR_PTR_1126ccbd8);
  func_0x00010c023d40();
  func_0x00010befa120(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126ccbe0;
  _objc_alloc(PTR_PTR_1126ccbe0);
  uVar4 = param_3;
  func_0x00010c0938e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0564c0(puVar3,param_2,uVar4,*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar4);
  func_0x00010befa120(puVar1,param_2,puVar3);
  puVar5 = PTR_PTR_1126ccbe8;
  _objc_alloc(PTR_PTR_1126ccbe8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = param_3;
  func_0x00010c0938e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c062c80(puVar5,param_2,uVar6,uVar4);
  _objc_release(uVar4);
  func_0x00010befa120(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106692b2c; end: 106692b73; -[SCLensExplorerDeepLinkHandlerFactory .cxx_destruct] */

void FUN_106692b2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106692b74; end: 106692c17; -[SCLensExplorerActivityCenterDeepLinkHandlerPlugin initWithUIContainer:activityCenterPresenter:] */

undefined1 *
FUN_106692b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2538;
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



/* Entry: 106692c18; end: 106692caf; -[SCLensExplorerActivityCenterDeepLinkHandlerPlugin canHandleDeepLinkUrl:] */

undefined8 FUN_106692c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bfe4420(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106692cb0; end: 106692e93; -[SCLensExplorerActivityCenterDeepLinkHandlerPlugin handleDeepLinkUrl:] */

void FUN_106692cb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf2cba0();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(undefined8 *)((long)puVar8 * 8);
        uVar6 = uVar9;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c0720c0();
        _objc_release(uVar6);
        if ((int)uVar5 != 0) {
          func_0x00010c296d80(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(uVar9);
          goto LAB_106692e18;
        }
        puVar8 = puVar8 + 1;
      } while (puVar4 != puVar8);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    }
LAB_106692e18:
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ca00();
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106692e94; end: 106692ec3; -[SCLensExplorerActivityCenterDeepLinkHandlerPlugin .cxx_destruct] */

void FUN_106692e94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106692ec4; end: 106692f5f; -[SCLensExplorerPresentationDeepLinkHandlerPlugin initWithLensExplorerInternalRouter:deeplinkPresentationHandler:] */

undefined1 *
FUN_106692ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106692f60; end: 106692f67; -[SCLensExplorerPresentationDeepLinkHandlerPlugin canHandleDeepLinkUrl:] */

void FUN_106692f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2cbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_canHandleDeepLinkUrl__1125a8c90);
  return;
}



/* Entry: 106692f68; end: 106692fbb; -[SCLensExplorerPresentationDeepLinkHandlerPlugin handleDeepLinkUrl:] */

void FUN_106692f68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c10f7e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10c200();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106692fbc; end: 106692fe7; -[SCLensExplorerPresentationDeepLinkHandlerPlugin .cxx_destruct] */

void FUN_106692fbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106692fe8; end: 10669308b; -[SCLensExplorerWebDeepLinkHandlerPlugin initWithWebBrowsingExposer:uiContainer:] */

undefined1 *
FUN_106692fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2548;
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



/* Entry: 10669308c; end: 10669327f; -[SCLensExplorerWebDeepLinkHandlerPlugin canHandleDeepLinkUrl:] */

ulong FUN_10669308c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar1 = param_3;
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
        if (2 < uVar2) {
          uVar1 = param_3;
          func_0x00010c0f5860();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          _objc_release(uVar1);
          if ((int)uVar3 != 0) goto LAB_106693138;
        }
      }
    }
  }
  else {
    uVar1 = param_3;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (1 < uVar2) {
      uVar1 = param_3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
LAB_106693138:
        uVar1 = param_3;
        func_0x00010c0f5860(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        goto LAB_106693264;
      }
    }
  }
  uVar3 = 0;
LAB_106693264:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106693280; end: 10669333f; -[SCLensExplorerWebDeepLinkHandlerPlugin handleDeepLinkUrl:] */

void FUN_106693280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf2cba0(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be202e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c25cf40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        func_0x00010be489e0(param_1,param_2,puVar3);
      }
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106693340; end: 106693387; -[SCLensExplorerWebDeepLinkHandlerPlugin webBrowserDidDismiss:] */

void FUN_106693340(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106693388; end: 10669342b; -[SCLensExplorerWebDeepLinkHandlerPlugin _getLinkQueryFromUrl:] */

void FUN_106693388(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010c11d4e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c296d80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10669342c; end: 106693473;  */

undefined8 FUN_10669342c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106693474; end: 106693627; -[SCLensExplorerWebDeepLinkHandlerPlugin _launchWebBrowserForUrl:] */

void FUN_106693474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    puVar3 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106693628;
    puStack_50 = &UNK_110842308;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c297260(puVar3,param_2,&puStack_68,0);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    puVar4 = puVar3;
    func_0x00010bf22ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uStack_48);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106693628; end: 10669363f;  */

void FUN_106693628(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 106693640; end: 10669366f; -[SCLensExplorerWebDeepLinkHandlerPlugin .cxx_destruct] */

void FUN_106693640(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106693670; end: 1066936e3; -[SCLensExplorerDeepLinkHandlingAggregator initWithDeepLinkHandlingPlugins:] */

undefined1 * FUN_106693670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2550;
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



/* Entry: 1066936e4; end: 106693797; -[SCLensExplorerDeepLinkHandlingAggregator canHandleDeepLinkUrl:] */

bool FUN_1066936e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106693798;
  puStack_40 = &UNK_110932e08;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0e03a0(lVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 106693798; end: 1066937c3;  */

void FUN_106693798(long param_1,undefined8 param_2,undefined1 *param_3)

{
  func_0x00010bf2cba0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  *param_3 = (char)param_2;
  return;
}



/* Entry: 1066937c4; end: 1066938ef; -[SCLensExplorerDeepLinkHandlingAggregator handleDeepLinkUrl:] */

void FUN_1066937c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
LAB_1066938a8:
      _objc_release(lVar5);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      uVar3 = uVar6;
      func_0x00010bf2cba0();
      if ((int)uVar3 != 0) {
        func_0x00010bfd0c40(uVar6);
        goto LAB_1066938a8;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1066938f0; end: 1066938fb; -[SCLensExplorerDeepLinkHandlingAggregator .cxx_destruct] */

void FUN_1066938f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066938fc; end: 106693993; -[SCLensExplorerDeepLinkProvider deepLinkURLForFeed:] */

void FUN_1066938fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e591d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106693994; end: 106693b17; -[SCLensExplorerActionHandlerFactory initWithLensExplorerFactory:pickerModeActive:spectaclesLensHandler:lensExplorerDeepLinkHandler:loggerProvider:userSettings:selectionTracker:styleOverride:pickedLensSource:] */

undefined1 *
FUN_106693994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f2558;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x58) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106693b18; end: 106693dd7; -[SCLensExplorerActionHandlerFactory lensActionHandlerWithConfiguration:loggingConfiguration:] */

void FUN_106693b18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x58);
    puVar1 = PTR_PTR_1126b60f8;
    _objc_alloc(PTR_PTR_1126b60f8);
    lVar2 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0134e0(puVar1,param_2,param_4,lVar2);
    _objc_release(lVar2);
    puVar12 = *(undefined **)(param_1 + 0x50);
    func_0x00010c0e00e0(puVar12,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c093060(uVar3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c092a80(uVar4,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c155f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010c0f1860(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bee9700(param_1,param_2,lVar2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
      lVar2 = param_3;
      func_0x00010c155f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bee9d40(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar12 = PTR_PTR_1126ccbf0;
      _objc_alloc();
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar8 = lVar2;
      func_0x00010c093520();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar9 = lVar5;
      func_0x00010c0933e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar11 = lVar10;
      func_0x00010c0e8060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061c40(puVar12,param_2,lVar6,lVar7,uVar3,uVar4,lVar8,uVar13,lVar9,lVar11,
                          *(undefined8 *)(param_1 + 0x30));
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar5);
      _objc_release(lVar8);
      _objc_release(lVar2);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,puVar12,puVar1);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106693dd8; end: 106693f97; -[SCLensExplorerActionHandlerFactory _viewLensActionHandlerWithSectionId:categoryId:] */

void FUN_106693dd8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar7 = *(long *)(param_1 + 0x48);
    puVar1 = PTR_PTR_1126ccbf8;
    _objc_alloc(PTR_PTR_1126ccbf8);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c093520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023e60(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + 0x38),param_3,param_4,
                        *(undefined8 *)(param_1 + 0x48),lVar7 == 0x33);
  }
  else {
    puVar1 = PTR_PTR_1126ccc00;
    _objc_alloc(PTR_PTR_1126ccc00);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c093520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023e20(puVar1,param_2,lVar3,param_4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb4a58);
  if (((uVar4 & 1) != 0) ||
     (uVar4 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30958),
     puVar5 = puVar1, (int)uVar4 != 0)) {
    puVar5 = PTR_PTR_1126ccc08;
    _objc_alloc(PTR_PTR_1126ccc08);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c093520();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023e80(puVar5,param_2,lVar3,uVar6,puVar1,*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106693f98; end: 106694027; -[SCLensExplorerActionHandlerFactory _viewStoryActionHandlerWithSectionId:] */

void FUN_106693f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ccc10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c093520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023e40(puVar1,param_2,lVar2,param_3);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106694028; end: 10669408f; -[SCLensExplorerActionHandlerFactory .cxx_destruct] */

void FUN_106694028(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106694090; end: 106694257; -[SCLensExplorerLensActionHandler initWithViewLensActionHandler:viewStoryActionHandler:impressionLogger:actionLogger:lensExplorerRouter:lensExplorerDeepLinkHandler:performanceLogger:onboardingManager:userSettings:] */

undefined1 *
FUN_106694090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f2560;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
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



/* Entry: 106694258; end: 1066945d3; -[SCLensExplorerLensActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_106694258(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ccb30;
  func_0x00010c29d300(PTR_PTR_1126ccb30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ccb30;
    func_0x00010bfad9c0(PTR_PTR_1126ccb30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar3);
    if ((int)uVar2 == 0) {
      uVar3 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126ccb30;
      func_0x00010c0b4cc0(PTR_PTR_1126ccb30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(uVar3);
      if ((int)uVar2 == 0) {
        uVar3 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126ccb30;
        func_0x00010c29cd00(PTR_PTR_1126ccb30);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c0720c0(uVar3,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(uVar3);
        if ((int)uVar2 == 0) {
          uVar3 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126ccb30;
          func_0x00010c29ccc0(PTR_PTR_1126ccb30);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010c0720c0(uVar3,param_2,puVar1);
          _objc_release(puVar1);
          _objc_release(uVar3);
          if ((int)uVar2 == 0) {
            uVar3 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126ccb30;
            func_0x00010c29e340(PTR_PTR_1126ccb30);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar3;
            func_0x00010c0720c0(uVar3,param_2,puVar1);
            _objc_release(puVar1);
            _objc_release(uVar3);
            if ((int)uVar2 == 0) {
              uVar3 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126ccb30;
              func_0x00010c29d320(PTR_PTR_1126ccb30);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar3;
              func_0x00010c0720c0(uVar3,param_2,puVar1);
              _objc_release(puVar1);
              _objc_release(uVar3);
              if ((int)uVar2 == 0) {
                uVar3 = param_4;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126ccb30;
                func_0x00010bf68040(PTR_PTR_1126ccb30);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar3;
                func_0x00010c0720c0(uVar3,param_2,puVar1);
                _objc_release(puVar1);
                _objc_release(uVar3);
                if ((int)uVar2 == 0) {
                  uVar3 = 0;
                  goto LAB_106694598;
                }
                func_0x00010be2a740(param_1,param_2,param_3,param_4);
              }
              else {
                func_0x00010be332e0(param_1,param_2,param_3,param_4);
              }
            }
            else {
              func_0x00010be33320(param_1,param_2,param_3,param_4,param_5);
            }
          }
          else {
            func_0x00010c10cc80(*(undefined8 *)(param_1 + 0x48));
          }
        }
        else {
          func_0x00010be332a0(param_1,param_2,param_3,param_4);
        }
      }
      else {
        func_0x00010be2bd00(param_1,param_2,param_3,param_4);
      }
    }
    else {
      func_0x00010be29d60(param_1,param_2,param_3,param_4);
    }
  }
  else {
    func_0x00010be33300(param_1,param_2,param_3,param_4);
  }
  uVar3 = 1;
LAB_106694598:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1066945d4; end: 106694697; -[SCLensExplorerLensActionHandler _handleViewLensWithSender:actionModel:] */

void FUN_1066945d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4fe8);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ccc18;
    _objc_opt_class(PTR_PTR_1126ccc18);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 != 0) {
      func_0x00010c158d40(param_1);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106694698; end: 10669469f; -[SCLensExplorerLensActionHandler selectLensWithViewModel:] */

void FUN_106694698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_selectLensWithViewModel_autoPick_112633d78,param_3,0);
  return;
}



/* Entry: 1066946a0; end: 106694823; -[SCLensExplorerLensActionHandler selectLensWithViewModel:autoPicked:] */

long FUN_1066946a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07ab40();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010c1274c0(*(undefined8 *)(param_1 + 0x50));
    puVar4 = PTR_PTR_1126ccc20;
    uVar3 = param_3;
    func_0x00010c094be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094c60(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bf7eb60(*(undefined8 *)(param_1 + 8),param_2,puVar4,param_4);
    uVar3 = param_3;
    func_0x00010c094be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126ccc28;
    uVar3 = param_3;
    func_0x00010c094be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bfcd000(uVar5);
    func_0x00010c0b3a00(puVar8,param_2,uVar5,uVar6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010bf772a0(*(undefined8 *)(param_1 + 0x38),param_2,puVar8);
    func_0x00010c0b2340(*(undefined8 *)(param_1 + 0x40),param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 106694824; end: 10669498b; -[SCLensExplorerLensActionHandler _handleFilterByCreatorWithSender:actionModel:] */

void FUN_106694824(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc30;
  _objc_opt_class(PTR_PTR_1126ccc30);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126ccc28;
  uVar3 = uVar1;
  func_0x00010c0b3ae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c092080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0b3ae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd000();
  func_0x00010c0b3a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c0ab8a0(*(undefined8 *)(param_1 + 0x40));
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar3 = uVar1;
  func_0x00010c092080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c10bd60(param_1);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10669498c; end: 106694a13; -[SCLensExplorerLensActionHandler _handleLongPressWithSender:actionModel:] */

void FUN_10669498c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc38;
  _objc_opt_class(PTR_PTR_1126ccc38);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c820();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106694a14; end: 106694b27; -[SCLensExplorerLensActionHandler _handleViewStoryWithSender:actionModel:fromSourceView:] */

void FUN_106694a14(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccc40;
  _objc_opt_class(PTR_PTR_1126ccc40);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar4 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ccc48;
    _objc_opt_class(PTR_PTR_1126ccc48);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar2 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    if (uVar2 != 0) {
      func_0x00010bf7eb80(*(undefined8 *)(param_1 + 0x10));
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf7eb20(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106694b28; end: 106694c57; -[SCLensExplorerLensActionHandler _handleViewLensTopicWithSender:actionModel:] */

void FUN_106694b28(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc48;
  _objc_opt_class(PTR_PTR_1126ccc48);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126ccc28;
  if (uVar1 != 0) {
    uVar3 = param_4;
    func_0x00010c0b3ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0844e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd000();
    func_0x00010c0b3a00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c0ab8a0(*(undefined8 *)(param_1 + 0x40));
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10cd80();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106694c58; end: 106694d97; -[SCLensExplorerLensActionHandler _handleHeroTilePressWithSender:actionModel:] */

void FUN_106694c58(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc50;
  _objc_opt_class(PTR_PTR_1126ccc50);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126ccc28;
  if (uVar1 != 0) {
    uVar3 = param_4;
    func_0x00010c0b3ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0915a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0b3ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd000();
    func_0x00010c0b3a00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c0ab840(*(undefined8 *)(param_1 + 0x40));
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf68340(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0c40(uVar6);
    _objc_release(param_4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106694d98; end: 106694f2b; -[SCLensExplorerLensActionHandler _handleViewFullPageWithSender:actionModel:] */

void FUN_106694d98(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc58;
  _objc_opt_class(PTR_PTR_1126ccc58);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010bfdf5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf68280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  if (uVar4 != 0) {
    puVar2 = PTR_PTR_1126ccc28;
    _objc_alloc(PTR_PTR_1126ccc28);
    puVar5 = PTR_PTR_1126ccc60;
    func_0x00010c156e60(PTR_PTR_1126ccc60);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4ae20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020140(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    func_0x00010c0ab880(*(undefined8 *)(param_1 + 0x40));
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = uVar1;
    func_0x00010bfdf5c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf68280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0c40(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106694f2c; end: 106694fb7; -[SCLensExplorerLensActionHandler .cxx_destruct] */

void FUN_106694f2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106694fb8; end: 106695053; -[SCLensExplorerCameraLensActionHandler initWithLensExplorerRouter:categoryId:] */

undefined1 *
FUN_106694fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2568;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106695054; end: 1066950cb; -[SCLensExplorerCameraLensActionHandler didViewLensFeedItem:autoPicked:] */

void FUN_106695054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1066950cc;
  puStack_20 = &UNK_110932e38;
  uStack_18 = param_1;
  func_0x00010c0be960(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110932e88,
                      &PTR___NSConcreteGlobalBlock_110932ec8,&PTR___NSConcreteGlobalBlock_110932f08,
                      &PTR___NSConcreteGlobalBlock_110932f48);
  return;
}



/* Entry: 1066950cc; end: 106695127;  */

void FUN_1066950cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10ce60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106695128; end: 106695137;  */

void FUN_106695128(void)

{
  return;
}



/* Entry: 106695138; end: 106695163; -[SCLensExplorerCameraLensActionHandler .cxx_destruct] */

void FUN_106695138(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106695164; end: 10669526f; -[SCLensExplorerLensPickerActionHandler initWithLensExplorerRouter:selectionTracker:sectionId:categoryId:pickedLensSource:deselectionSupported:] */

undefined1 *
FUN_106695164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

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
  puStack_58 = PTR_PTR_1126f2570;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined1 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106695270; end: 1066952eb; -[SCLensExplorerLensPickerActionHandler didViewLensFeedItem:autoPicked:] */

void FUN_106695270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1066952ec;
  puStack_28 = &UNK_110932f68;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0be960(param_3,param_2,&puStack_40,&PTR___NSConcreteGlobalBlock_110932f98,
                      &PTR___NSConcreteGlobalBlock_110932fb8,&PTR___NSConcreteGlobalBlock_110932fd8,
                      &PTR___NSConcreteGlobalBlock_110932ff8);
  return;
}



/* Entry: 1066952ec; end: 10669530f;  */

void FUN_1066952ec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2df10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handlePickingLensItem_autoPicke_112569160,
             param_2,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106695310; end: 106695543; -[SCLensExplorerLensPickerActionHandler _handlePickingLensItem:autoPicked:] */

void FUN_106695310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c159940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c2810a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c071ae0(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) goto LAB_1066953d4;
    func_0x00010c1fb280(*(undefined8 *)(param_1 + 0x10),param_2,0);
    puVar8 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar8);
    puVar6 = PTR_PTR_1126ccc68;
    func_0x00010c0db140(PTR_PTR_1126ccc68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1e60(puVar8,param_2,puVar6,0);
  }
  else {
LAB_1066953d4:
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010c159940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c2810a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c071ae0(uVar4,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) goto LAB_10669552c;
    uVar2 = param_3;
    func_0x00010c0ba1c0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2bbd20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    uVar2 = param_3;
    func_0x00010c2810a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb280(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
    _objc_release(uVar2);
    puVar6 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar6);
    puVar7 = PTR_PTR_1126ccc68;
    func_0x00010c094c40(PTR_PTR_1126ccc68,param_2,puVar8,*(undefined8 *)(param_1 + 0x18),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1e60(puVar6,param_2,puVar7,0);
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar8);
LAB_10669552c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106695544; end: 106695587; -[SCLensExplorerLensPickerActionHandler .cxx_destruct] */

void FUN_106695544(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106695588; end: 10669568b; -[SCLensExplorerSpectaclesLensActionHandler initWithLensExplorerRouter:spectaclesLensHandler:defaultActionHandler:generalStyleOverride:] */

undefined1 *
FUN_106695588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = &uStack_50;
  _objc_initWeak(auStack_38,param_3);
  _objc_initWeak(auStack_40,param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2578;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),puVar2);
    _objc_release(puVar2);
    puVar2 = auStack_40;
    _objc_loadWeakRetained();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
  }
  _objc_release(param_5);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return (undefined1 *)puVar1;
}


