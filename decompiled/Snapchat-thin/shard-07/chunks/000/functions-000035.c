/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050a43d4; end: 1050a43df; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler setPresentingViewController:] */

void FUN_1050a43d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050a43e0; end: 1050a4417; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler .cxx_destruct] */

void FUN_1050a43e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a4418; end: 1050a44e3; -[SCFriendUnifiedProfileLeavePrivateStoryMenuDataProvider initWithCustomStoriesDataFetcher:customStoriesDataSyncer:userId:] */

undefined1 *
FUN_1050a4418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e5f28;
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



/* Entry: 1050a44e4; end: 1050a460f; -[SCFriendUnifiedProfileLeavePrivateStoryMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1050a44e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf624c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1050a4610; end: 1050a46e3;  */

void FUN_1050a4610(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010bec98c0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1050a46e4; end: 1050a4767;  */

void FUN_1050a46e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010be49e60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050a4768; end: 1050a484b; -[SCFriendUnifiedProfileLeavePrivateStoryMenuDataProvider _syncCustomStories:completionBlock:] */

void FUN_1050a4768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110865e98);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bfb4fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050a484c; end: 1050a4853;  */

void FUN_1050a484c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 1050a4854; end: 1050a4897;  */

void FUN_1050a4854(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050a4898; end: 1050a493b; -[SCFriendUnifiedProfileLeavePrivateStoryMenuDataProvider _leavePrivateStoryViewModel:] */

void FUN_1050a4898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110865f08);
  puVar1 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110eb7a78;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eb7a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar1);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050a493c; end: 1050a4943;  */

void FUN_1050a493c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  _objc_retain();
  func_0x000108f57f04();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(param_2);
  puVar5 = puVar3;
  func_0x000107d4bde8(puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050a4944; end: 1050a495b; -[SCFriendUnifiedProfileLeavePrivateStoryMenuDataProvider delegate] */

void FUN_1050a4944(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a495c; end: 1050a4967; -[SCFriendUnifiedProfileLeavePrivateStoryMenuDataProvider setDelegate:] */

void FUN_1050a495c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050a4968; end: 1050a49ab; -[SCFriendUnifiedProfileLeavePrivateStoryMenuDataProvider .cxx_destruct] */

void FUN_1050a4968(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a49ac; end: 1050a4aaf; -[SCFriendUnifiedProfileManageFriendshipDataProvider initWithFriendUnifiedProfileDataSource:featureSettingsService:circumstanceEngine:sourceSessionId:manageFriendshipActionMenuCleanUpEnabled:] */

undefined1 *
FUN_1050a49ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126e5f30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a4ab0; end: 1050a4b07; -[SCFriendUnifiedProfileManageFriendshipDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1050a4ab0(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010be5c840(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a4b08; end: 1050a4e6b; -[SCFriendUnifiedProfileManageFriendshipDataProvider _manageFriendshipActionMenuViewModel] */

void FUN_1050a4b08(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar5 = uVar3;
  func_0x000100bf0c60(uVar3,0);
  if ((uVar5 & 1) != 0) goto LAB_1050a4c58;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x0001050dd288();
  if (iVar2 != 0) {
    uVar5 = uVar3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1af20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fa60();
    if (uVar7 == 0) {
      _objc_release(uVar6);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x28);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((bVar1 & 1) != 0) goto LAB_1050a4bf0;
      uVar5 = uVar3;
      func_0x000107ce7504(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
    }
    _objc_release(uVar5);
  }
LAB_1050a4bf0:
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  FUN_1050ac23c(uVar8,uVar3);
  if ((int)uVar8 != 0) {
    uVar5 = uVar3;
    func_0x000107ce75a4(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(uVar5);
  }
  uVar5 = uVar3;
  func_0x000107ce744c(uVar3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(uVar5);
LAB_1050a4c58:
  uVar5 = uVar3;
  func_0x00010901c54c();
  if (((uVar5 & 1) == 0) && (uVar5 = uVar3, func_0x000100bec434(), (uVar5 & 1) == 0)) {
    uVar5 = uVar3;
    func_0x000107ce784c(uVar3,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000107ce70e8(uVar3,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf60940(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    uVar5 = uVar3;
    func_0x000107ce7934(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(uVar5);
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar9 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(puVar9);
  }
  ppuVar10 = &PTR____CFConstantStringClassReference_110eb7a78;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eb7a78);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  ppuVar11 = &PTR____CFConstantStringClassReference_110dc4878;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4878,0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c019f60(puVar9);
  _objc_release(puVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(uVar3 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a4e6c; end: 1050a4e83; -[SCFriendUnifiedProfileManageFriendshipDataProvider delegate] */

void FUN_1050a4e6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a4e84; end: 1050a4e8f; -[SCFriendUnifiedProfileManageFriendshipDataProvider setDelegate:] */

void FUN_1050a4e84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1050a4e90; end: 1050a4edf; -[SCFriendUnifiedProfileManageFriendshipDataProvider .cxx_destruct] */

void FUN_1050a4e90(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a4ee0; end: 1050a503b; -[SCFriendUnifiedProfileMenuDataProvider initWithFriendUnifiedProfileDataSource:customStoriesDataFetcher:customStoriesDataSyncer:featureSettingsService:sourcePageType:title:] */

undefined1 *
FUN_1050a4ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e5f38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a503c; end: 1050a513b; -[SCFriendUnifiedProfileMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1050a503c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be200c0(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1050a513c; end: 1050a51b3;  */

void FUN_1050a513c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be61b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a51b4; end: 1050a5343; -[SCFriendUnifiedProfileMenuDataProvider _mutualFriendActionMenuViewModelWithLeavePrivateStoryViewModel:] */

void FUN_1050a51b4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c244280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_3 != 0) {
    func_0x00010befa120(puVar2,param_2,param_3);
  }
  uVar3 = 0;
  uVar7 = uVar1;
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e12b38,param_2,uVar7);
  _objc_release(uVar7);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748,param_2,0x15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar4);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126b4748;
  func_0x00010c101e00(PTR_PTR_1126b4748,param_2,0x17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  ppuVar6 = &PTR____CFConstantStringClassReference_110eb7a78;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eb7a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar4,param_2,0,uVar7,puVar5,ppuVar6);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050a5344; end: 1050a547f; -[SCFriendUnifiedProfileMenuDataProvider _getLeavePrivateStoryViewModel:completion:] */

void FUN_1050a5344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bf624c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050a5480; end: 1050a54d3;  */

void FUN_1050a5480(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a54d4; end: 1050a55b7; -[SCFriendUnifiedProfileMenuDataProvider _syncLatestCustomStories:completion:] */

void FUN_1050a54d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110865f58);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bfb4fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050a55b8; end: 1050a55bf;  */

void FUN_1050a55b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 1050a55c0; end: 1050a56bb;  */

void FUN_1050a55c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 == 1) {
      lVar3 = param_2;
      func_0x00010bf00d20(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar2 = *(long *)(param_1 + 0x20);
      lVar3 = lVar1;
      func_0x000107ce7644(lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
      _objc_release(lVar3);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x20);
      lVar1 = 0;
      func_0x000107ce7644(0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050a56bc; end: 1050a56d3; -[SCFriendUnifiedProfileMenuDataProvider delegate] */

void FUN_1050a56bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a56d4; end: 1050a56df; -[SCFriendUnifiedProfileMenuDataProvider setDelegate:] */

void FUN_1050a56d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1050a56e0; end: 1050a5747; -[SCFriendUnifiedProfileMenuDataProvider .cxx_destruct] */

void FUN_1050a56e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1050a5748; end: 1050a57fb; -[SCFriendUnifiedProfileSectionDescriptorProvider initWithDataSource:showMap:] */

undefined1 *
FUN_1050a5748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5f40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x000100bf119c();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    func_0x00010befc780(param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a57fc; end: 1050a5b5b; -[SCFriendUnifiedProfileSectionDescriptorProvider fetchSectionDescriptors:updateReason:updatingQueue:] */

void FUN_1050a57fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = lVar1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    uVar5 = 0;
    func_0x000106639468(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar4);
    _objc_release(uVar5);
    uVar5 = 0x3a;
    func_0x000106639850(0x3a,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b16f8;
    _objc_alloc(PTR_PTR_1126b16f8);
    func_0x00010c028e00();
    puVar6 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    puVar7 = puVar4;
    func_0x0001066394d0(puVar4,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar4);
    uVar5 = 0x3c;
    func_0x000106639850(0x3c,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar6);
  }
  puVar4 = PTR_PTR_1126b4770;
  _objc_alloc(PTR_PTR_1126b4770);
  func_0x00010c008d60();
  puVar6 = puVar4;
  func_0x00010c155be0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x3d;
  func_0x00010663970c(0x3d,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  lVar3 = lVar1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    uVar5 = 0;
    func_0x000106639468(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar4);
    _objc_release(uVar5);
    uVar5 = 0x40;
    func_0x000106639850(0x40,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1050a5b5c;
  puStack_78 = &UNK_11084aaa8;
  puStack_70 = puVar2;
  uStack_68 = param_3;
  _objc_retain(puVar2);
  _objc_retain(param_3);
  func_0x00010007380c(param_5,&puStack_90);
  _objc_release(puStack_70);
  _objc_release(uStack_68);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1050a5b5c; end: 1050a5b93;  */

void FUN_1050a5b5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050a5b94; end: 1050a5bf3; -[SCFriendUnifiedProfileSectionDescriptorProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1050a5b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7dd8);
  if ((int)param_3 != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050a5bf4; end: 1050a5c0b; -[SCFriendUnifiedProfileSectionDescriptorProvider delegate] */

void FUN_1050a5bf4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a5c0c; end: 1050a5c17; -[SCFriendUnifiedProfileSectionDescriptorProvider setDelegate:] */

void FUN_1050a5c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1050a5c18; end: 1050a5c43; -[SCFriendUnifiedProfileSectionDescriptorProvider .cxx_destruct] */

void FUN_1050a5c18(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050a5c44; end: 1050a5d1b; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider initWithDataSource:announcer:ghostImageService:] */

undefined1 *
FUN_1050a5c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e5f48;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    func_0x00010befc780(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a5d1c; end: 1050a5d27; +[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider announcerIdentifier] */

undefined ** FUN_1050a5d1c(void)

{
  return &PTR____CFConstantStringClassReference_110dc48b8;
}



/* Entry: 1050a5d28; end: 1050a5d2f; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider addListener:] */

void FUN_1050a5d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050a5d30; end: 1050a5d37; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider removeListener:] */

void FUN_1050a5d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050a5d38; end: 1050a5e37; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider setSectionDataModel:] */

void FUN_1050a5d38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010be19a80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 0) {
    ppuVar5 = *(undefined ***)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc48d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc48d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar4;
    _objc_release(uVar1);
  }
  _objc_release(ppuVar5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050a5e38; end: 1050a5e8b; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1050a5e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050a5e8c;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a5e8c; end: 1050a5f37;  */

void FUN_1050a5e8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar3 = PTR_PTR_1126b4778;
  _objc_alloc(PTR_PTR_1126b4778);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf96100(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051380(puVar3,param_2,uVar1,uVar4);
  func_0x00010bffd260(puVar2,param_2,&PTR____CFConstantStringClassReference_110f11c38,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050a5f38; end: 1050a5fbb; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1050a5f38(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1050a60ec;
    puStack_90 = &UNK_110865f78;
    puVar5 = auStack_80;
    _objc_copyWeak(auStack_88,puVar5);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f11c38;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_70 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_88);
    puVar4 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde4d40();
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a5fbc; end: 1050a60eb; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1050a5fbc(undefined8 param_1)

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
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1050a60ec;
  puStack_60 = &UNK_110865f78;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f11c38;
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
  func_0x00010bde4d40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1050a60ec; end: 1050a6133;  */

void FUN_1050a60ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a6134; end: 1050a6173; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider numberOfItemsInSection:] */

ulong FUN_1050a6134(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c244280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100bf119c();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 1050a6174; end: 1050a6303; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider _friendshipCreationTime] */

void FUN_1050a6174(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_1050a6228:
    lVar2 = lVar1;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = lVar1;
    if (lVar2 == 0) {
      lVar2 = lVar1;
      func_0x00010bfebe20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = (undefined *)0x0;
      if (lVar2 == 0) goto LAB_1050a62e4;
      func_0x00010bfebe20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befcae0();
    }
    else {
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef89e0();
    }
    _objc_release(lVar3);
    dVar6 = param_1;
  }
  else {
    lVar3 = lVar1;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_1050a6228;
    lVar2 = lVar1;
    func_0x00010bfb8280(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef89e0();
    dVar6 = param_1;
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bfebe20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befcae0();
    _objc_release(lVar2);
    if (dVar6 <= param_1) {
      dVar6 = param_1;
    }
  }
  if ((long)dVar6 < 1) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)(ulong)(long)dVar6,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
LAB_1050a62e4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050a6304; end: 1050a63b7; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider _configureCell:] */

void FUN_1050a6304(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4780;
  _objc_opt_class(PTR_PTR_1126b4780);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b4330;
  _objc_alloc(PTR_PTR_1126b4330);
  func_0x00010bff3160();
  puVar4 = puVar2;
  func_0x00010c14fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2520(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050a63b8; end: 1050a64a3; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1050a63b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if (((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050a64a4; end: 1050a64d3;  */

void FUN_1050a64a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a64d4; end: 1050a64eb; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider dataProviderDelegate] */

void FUN_1050a64d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a64ec; end: 1050a64f7; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider setDataProviderDelegate:] */

void FUN_1050a64ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050a64f8; end: 1050a64ff; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050a64f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1050a6500; end: 1050a652f; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050a6500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a6530; end: 1050a6537; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider sectionDataModel] */

undefined8 FUN_1050a6530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1050a6538; end: 1050a659f; -[SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider .cxx_destruct] */

void FUN_1050a6538(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a65a0; end: 1050a6643; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler initWithGroupId:groupActionSheetScopeExposer:] */

undefined1 *
FUN_1050a65a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5f50;
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



/* Entry: 1050a6644; end: 1050a66a7; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050a6644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
    func_0x00010be79d40(param_1);
  }
  return uVar1;
}



/* Entry: 1050a66a8; end: 1050a6773; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler _presentActionMenu] */

void FUN_1050a66a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40(puVar1,param_2,lVar3,0);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126b2858;
  _objc_alloc(PTR_PTR_1126b2858);
  func_0x00010c0584e0();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050a6774; end: 1050a6777; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler groupActionSheetOpenProfileForGroupId:] */

void FUN_1050a6774(void)

{
  return;
}



/* Entry: 1050a6778; end: 1050a677b; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler groupActionSheetShowCameraForGroupId:] */

void FUN_1050a6778(void)

{
  return;
}



/* Entry: 1050a677c; end: 1050a67c3; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler groupActionSheetDidDismiss] */

void FUN_1050a677c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050a67c4; end: 1050a67db; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler presentingViewController] */

void FUN_1050a67c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a67dc; end: 1050a67e7; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler setPresentingViewController:] */

void FUN_1050a67dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1050a67e8; end: 1050a681f; -[SCGroupUnifiedProfileActionMenuPresentingActionHandler .cxx_destruct] */

void FUN_1050a67e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a6820; end: 1050a693b; -[SCGroupUnifiedProfileCreateLinkActionHandler initWithGroupId:navigationDelegate:groupExternalShareScopeExposer:groupExternalShareScopeServices:featureSettingsService:] */

undefined1 *
FUN_1050a6820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5f58;
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



/* Entry: 1050a693c; end: 1050a693f; -[SCGroupUnifiedProfileCreateLinkActionHandler groupActionSheetDidDismiss] */

void FUN_1050a693c(void)

{
  return;
}



/* Entry: 1050a6940; end: 1050a6943; -[SCGroupUnifiedProfileCreateLinkActionHandler groupActionSheetOpenProfileForGroupId:] */

void FUN_1050a6940(void)

{
  return;
}



/* Entry: 1050a6944; end: 1050a6947; -[SCGroupUnifiedProfileCreateLinkActionHandler groupActionSheetShowCameraForGroupId:] */

void FUN_1050a6944(void)

{
  return;
}



/* Entry: 1050a6948; end: 1050a6a2f; -[SCGroupUnifiedProfileCreateLinkActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050a6948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 1;
    func_0x000108f71938(1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    if ((int)uVar1 == 0) {
      uVar3 = 0;
      goto LAB_1050a6a10;
    }
    func_0x00010be289a0(param_1,param_2,param_4);
  }
  else {
    func_0x00010be2a620(param_1);
  }
  uVar3 = 1;
LAB_1050a6a10:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 1050a6a30; end: 1050a6ad3; -[SCGroupUnifiedProfileCreateLinkActionHandler _handleGroupLinkCreationUsingOffPlatformGroupScope] */

void FUN_1050a6a30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22f20(uVar4,param_2,param_1,lVar3,*(undefined8 *)(param_1 + 8),0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1050a6ad4; end: 1050a6b77; -[SCGroupUnifiedProfileCreateLinkActionHandler _handleDisplayTooltipWithActionModel:] */

void FUN_1050a6ad4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if ((uVar1 != 0) && (func_0x00010c067fc0(), param_3 == 1)) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a47e0();
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a6b78; end: 1050a6bbf; -[SCGroupUnifiedProfileCreateLinkActionHandler groupExternalShareScopeDidEnd:] */

void FUN_1050a6b78(long param_1)

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



/* Entry: 1050a6bc0; end: 1050a6bc7; -[SCGroupUnifiedProfileCreateLinkActionHandler uiContainer] */

undefined8 FUN_1050a6bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1050a6bc8; end: 1050a6bf7; -[SCGroupUnifiedProfileCreateLinkActionHandler setUiContainer:] */

void FUN_1050a6bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a6bf8; end: 1050a6c53; -[SCGroupUnifiedProfileCreateLinkActionHandler .cxx_destruct] */

void FUN_1050a6bf8(long param_1)

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



/* Entry: 1050a6c54; end: 1050a6d33; -[SCGroupProfileStreakDialogViewController initWithViewModel:valdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1050a6c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e5f60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271b7cc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271b7d0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
    func_0x00010c1c8b80(puVar1);
    func_0x00010c1c8c00(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a6d34; end: 1050a6e97; -[SCGroupProfileStreakDialogViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a6d34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b4788;
  _objc_alloc(PTR_PTR_1126b4788);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c00d1c0(puVar1);
  puVar2 = PTR_PTR_1126b4790;
  _objc_alloc(PTR_PTR_1126b4790);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271b7d0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062020(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c222380(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1050a6e98; end: 1050a6ec3;  */

void FUN_1050a6e98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a6ec4; end: 1050a6f6b; -[SCGroupProfileStreakDialogViewController _dismissViewController] */

void FUN_1050a6ec4(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1050a6f6c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1050a6f6c; end: 1050a6f9f;  */

void FUN_1050a6f6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050a6fa0; end: 1050a6fab; -[SCGroupProfileStreakDialogViewController backgroundExitBehavior] */

void FUN_1050a6fa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_exitImmediately_1125c47b0);
  return;
}



/* Entry: 1050a6fac; end: 1050a6fff; -[SCGroupProfileStreakDialogViewController exit:] */

void FUN_1050a6fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  func_0x00010bf098c0(puVar1);
  func_0x00010bf84b00(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050a7000; end: 1050a703f; -[SCGroupProfileStreakDialogViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a7000(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b7d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b7cc,0);
  return;
}



/* Entry: 1050a7040; end: 1050a70c3; -[SCGroupUnifiedProfileSectionDescriptorProvider initWithDataSource:groupProfileSubType:] */

undefined1 *
FUN_1050a7040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5f68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a70c4; end: 1050a756b; -[SCGroupUnifiedProfileSectionDescriptorProvider fetchSectionDescriptors:updateReason:updatingQueue:] */

void FUN_1050a70c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_5);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  puVar3 = puVar2;
  func_0x00010663944c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055bc0(puVar2);
  _objc_release(puVar3);
  uVar4 = 0;
  func_0x000106639850(0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar2);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar2 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    uVar4 = 0;
    func_0x000106639468(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar2);
    _objc_release(uVar4);
    uVar4 = 0xe;
    func_0x000106639850(0xe,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    uVar4 = 0;
    func_0x000106639468(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar2);
    _objc_release(uVar4);
    uVar4 = 0x3a;
    func_0x000106639850(0x3a,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b16f8;
    _objc_alloc(PTR_PTR_1126b16f8);
    func_0x00010c028e00();
    puVar3 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    puVar5 = puVar2;
    func_0x0001066394d0(puVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
    uVar4 = 0x3c;
    func_0x000106639850(0x3c,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b4798;
    _objc_opt_new(PTR_PTR_1126b4798);
    puVar3 = puVar2;
    func_0x00010c155be0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3d;
    func_0x00010663970c(0x3d,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    uVar4 = 0;
    func_0x000106639468(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar2);
    _objc_release(uVar4);
    uVar4 = 0x40;
    func_0x000106639850(0x40,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  puVar5 = puVar2;
  func_0x0001066394d0(puVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055bc0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  uVar4 = 0x2f;
  func_0x000106639850(0x2f,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1050a756c;
  puStack_78 = &UNK_11084aaa8;
  puStack_70 = puVar1;
  uStack_68 = param_3;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010007380c(param_5,&puStack_90);
  _objc_release(param_5);
  _objc_release(puStack_70);
  _objc_release(uStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1050a756c; end: 1050a75a3;  */

void FUN_1050a756c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050a75a4; end: 1050a75bb; -[SCGroupUnifiedProfileSectionDescriptorProvider delegate] */

void FUN_1050a75a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a75bc; end: 1050a75c7; -[SCGroupUnifiedProfileSectionDescriptorProvider setDelegate:] */

void FUN_1050a75bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1050a75c8; end: 1050a75f3; -[SCGroupUnifiedProfileSectionDescriptorProvider .cxx_destruct] */

void FUN_1050a75c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a75f4; end: 1050a784b; -[SCGroupUnifiedProfileMembersSectionDataProvider initWithDataSource:imageDownloader:labelInfoFetcher:userSession:pinnedConversationsDataCoordinator:maxCellsCanRenderBeforeViewMore:appearAnnouncer:friendmojiPresenter:messagingExperimentService:] */

undefined8 *
FUN_1050a75f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e5f70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    func_0x00010befc780(puVar1[2]);
    uVar3 = param_6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[5];
    puVar1[5] = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar3 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar3);
    puVar1[7] = param_8;
    _objc_retain(param_9);
    uVar3 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_11);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_11);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1050a784c; end: 1050a78a7;  */

void FUN_1050a784c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcf1e0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1050a78a8; end: 1050a78b3; +[SCGroupUnifiedProfileMembersSectionDataProvider announcerIdentifier] */

undefined ** FUN_1050a78a8(void)

{
  return &PTR____CFConstantStringClassReference_110dc4918;
}



/* Entry: 1050a78b4; end: 1050a78bb; -[SCGroupUnifiedProfileMembersSectionDataProvider addListener:] */

void FUN_1050a78b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050a78bc; end: 1050a78c3; -[SCGroupUnifiedProfileMembersSectionDataProvider removeListener:] */

void FUN_1050a78bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050a78c4; end: 1050a79ef; -[SCGroupUnifiedProfileMembersSectionDataProvider setUp] */

void FUN_1050a78c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fc5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}


