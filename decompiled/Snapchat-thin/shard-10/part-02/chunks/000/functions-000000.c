/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107992f1c; end: 107993003; -[SCDiscoverFeedSectionHeaderActionHandler _logHideSectionForSection:] */

void FUN_107992f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfa4340(param_3);
  _objc_release(param_3);
  uVar3 = 8;
  FUN_107cb4bc4(8,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107993004; end: 1079930f7; -[SCDiscoverFeedSectionHeaderActionHandler _logFeedItemActionWithActionDataModel:actionType:] */

void FUN_107993004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfa4340(param_3);
  _objc_release(param_3);
  FUN_107cb4bc4(param_4,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1079930f8; end: 107993257; -[SCDiscoverFeedSectionHeaderActionHandler _generateAndPresentDebugViewControllerWithDebugInfo:feedType:] */

void FUN_1079930f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0(param_4);
  uVar2 = uVar1;
  func_0x00010c1559e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25c6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107993258;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(0);
  uStack_58 = 0;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(0);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107993258; end: 10799328b;  */

void FUN_107993258(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ae60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10799328c; end: 1079932db; -[SCDiscoverFeedSectionHeaderActionHandler _presentDebugViewController:] */

void FUN_10799328c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079932dc; end: 107993323; -[SCDiscoverFeedSectionHeaderActionHandler dismissCameraScope:] */

void FUN_1079932dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xd8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107993324; end: 10799333b; -[SCDiscoverFeedSectionHeaderActionHandler presentingViewController] */

void FUN_107993324(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799333c; end: 107993343; -[SCDiscoverFeedSectionHeaderActionHandler storyPositionProvider] */

undefined8 FUN_10799333c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 107993344; end: 107993373; -[SCDiscoverFeedSectionHeaderActionHandler setStoryPositionProvider:] */

void FUN_107993344(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107993374; end: 10799338b; -[SCDiscoverFeedSectionHeaderActionHandler operaViewingHandler] */

void FUN_107993374(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799338c; end: 107993397; -[SCDiscoverFeedSectionHeaderActionHandler setOperaViewingHandler:] */

void FUN_10799338c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x180,param_3);
  return;
}



/* Entry: 107993398; end: 10799339f; -[SCDiscoverFeedSectionHeaderActionHandler currentPageSessionId] */

undefined8 FUN_107993398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 1079933a0; end: 1079933a7; -[SCDiscoverFeedSectionHeaderActionHandler setCurrentPageSessionId:] */

void FUN_1079933a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079933a8; end: 1079933bf; -[SCDiscoverFeedSectionHeaderActionHandler delegate] */

void FUN_1079933a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 400);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079933c0; end: 1079933cb; -[SCDiscoverFeedSectionHeaderActionHandler setDelegate:] */

void FUN_1079933c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 400,param_3);
  return;
}



/* Entry: 1079933cc; end: 1079933d3; -[SCDiscoverFeedSectionHeaderActionHandler shouldHandleAction] */

undefined1 FUN_1079933cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x168);
}



/* Entry: 1079933d4; end: 1079933db; -[SCDiscoverFeedSectionHeaderActionHandler setShouldHandleAction:] */

void FUN_1079933d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x168) = param_3;
  return;
}



/* Entry: 1079933dc; end: 1079933e3; -[SCDiscoverFeedSectionHeaderActionHandler pageType] */

undefined8 FUN_1079933dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 1079933e4; end: 1079933eb; -[SCDiscoverFeedSectionHeaderActionHandler setPageType:] */

void FUN_1079933e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



/* Entry: 1079933ec; end: 1079933f3; -[SCDiscoverFeedSectionHeaderActionHandler isExpandedStoryFeedController] */

undefined1 FUN_1079933ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x169);
}



/* Entry: 1079933f4; end: 1079933fb; -[SCDiscoverFeedSectionHeaderActionHandler setIsExpandedStoryFeedController:] */

void FUN_1079933f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x169) = param_3;
  return;
}



/* Entry: 1079933fc; end: 107993413; -[SCDiscoverFeedSectionHeaderActionHandler customStatusBarStyleContextController] */

void FUN_1079933fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107993414; end: 10799341f; -[SCDiscoverFeedSectionHeaderActionHandler setCustomStatusBarStyleContextController:] */

void FUN_107993414(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1a0,param_3);
  return;
}



/* Entry: 107993420; end: 107993427; -[SCDiscoverFeedSectionHeaderActionHandler eventAnnouncer] */

undefined8 FUN_107993420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107993428; end: 107993687; -[SCDiscoverFeedSectionHeaderActionHandler .cxx_destruct] */

void FUN_107993428(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1a0);
  _objc_destroyWeak(param_1 + 400);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_destroyWeak(param_1 + 0x180);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107993688; end: 107993753; -[SCDiscoverFeedStorySuggestionActionHandler initWithDocObjectContext:performer:snapchattersDataMutator:] */

undefined1 *
FUN_107993688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f9018;
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



/* Entry: 107993754; end: 107993823; -[SCDiscoverFeedStorySuggestionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_107993754(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b15c8;
    _objc_opt_class(PTR_PTR_1126b15c8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010be25620(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107993824; end: 1079938ff; -[SCDiscoverFeedStorySuggestionActionHandler _handleAddFriend:] */

void FUN_107993824(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107993900; end: 107993a03;  */

void FUN_107993900(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee17c0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bdc6e00(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107993a04; end: 107993a67;  */

void FUN_107993a04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee17c0(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107993a68; end: 107993b7b; -[SCDiscoverFeedStorySuggestionActionHandler _addFriendWithSnapchatter:completion:] */

void FUN_107993a68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010befca80(PTR_PTR_1126ae5c0,param_2,param_3,0x1a0e6a1a,0x33,0,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107993b7c;
  puStack_40 = &UNK_11085a1b8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bef8a80(uVar2,param_2,puVar1,uVar3,&puStack_58);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 107993b7c; end: 107993b87;  */

void FUN_107993b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107993b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107993b88; end: 107993c5f; -[SCDiscoverFeedStorySuggestionActionHandler _updateSummaryInfoWithAddingFriendFromStorySuggestion:added:] */

void FUN_107993b88(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107993c60;
  puStack_48 = &UNK_1108cdb18;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar1,param_2,&puStack_60,uVar2,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107993c60; end: 107993c73;  */

undefined *** FUN_107993c60(long param_1,undefined ***param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  long lVar12;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined ***unaff_x25;
  undefined *unaff_x26;
  undefined ***unaff_x27;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [31];
  undefined1 uStack_111;
  undefined **appuStack_110 [9];
  undefined1 auStack_c8 [24];
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined ***pppuStack_60;
  long lStack_58;
  
  pppuVar10 = *(undefined ****)(param_1 + 0x20);
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar11 = pppuVar10;
  _objc_retain();
  _objc_retain(pppuVar10);
  pppuVar3 = pppuVar10;
  func_0x00010c08fa60();
  if (pppuVar3 != (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d5360);
    unaff_x25 = appuStack_110;
    if (param_2 == (undefined ***)0x0) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      ppuStack_a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_a0,param_2);
    }
    puVar4 = &uStack_111;
    func_0x0001009612e4(puVar4);
    unaff_x23 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_60 = pppuVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100961348(auStack_130,unaff_x23);
    func_0x000107c281a0(appuStack_110,0xc,puVar4,auStack_130);
    puStack_148 = (undefined1 *)0x0;
    puStack_140 = (undefined1 *)0x0;
    uStack_138 = 0;
    uStack_14c = 0;
    pppuVar3 = &ppuStack_a0;
    pppuVar11 = appuStack_110;
    func_0x000107c310cc(pppuVar3,pppuVar11,&puStack_148,&uStack_14c);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = pppuVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar3);
    if (puStack_148 != (undefined1 *)0x0) {
      puStack_140 = puStack_148;
      __ZdlPv();
    }
    plVar2 = plStack_a8;
    appuStack_110[0] = &PTR_DAT_110862700;
    plStack_a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puStack_148 = auStack_c8;
    func_0x000107c27dd4(&puStack_148);
    puStack_148 = auStack_130;
    func_0x000107c27dd4(&puStack_148);
    _objc_release(unaff_x23);
    func_0x000107c27da8(&uStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    if (unaff_x22 != (undefined ***)0x0) {
      unaff_x23 = (undefined ***)PTR_PTR_1126d9eb0;
      pppuVar11 = unaff_x22;
      func_0x000100aad504();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 != (undefined ***)0x0) {
        *(undefined1 *)((long)unaff_x23 + 0x15) = uVar1;
      }
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
    }
    _objc_release(unaff_x22);
  }
  _objc_release(pppuVar10);
  pppuVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(pppuVar10);
    _objc_release(param_2);
    pppuVar10 = pppuVar3;
    __Unwind_Resume();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(pppuVar11);
    if (pppuVar11 != (undefined ***)0x0) {
      pppuVar3 = pppuVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = pppuVar10;
      func_0x0001084e6550(pppuVar10,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      unaff_x23 = unaff_x22;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = pppuVar11;
      func_0x00010c15e620();
      _objc_retainAutoreleasedReturnValue();
      pppuVar7 = pppuVar6;
      func_0x00010c08b1c0();
      _objc_release(pppuVar6);
      if (unaff_x23 == (undefined ***)0x0) {
        pppuVar6 = (undefined ***)PTR_PTR_1126d5c20;
        _objc_alloc(PTR_PTR_1126d5c20);
        pppuVar7 = pppuVar11;
        func_0x00010c2923e0(pppuVar11);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = pppuVar11;
        func_0x00010c25b340(pppuVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05bc60(pppuVar6);
        _objc_release(unaff_x27);
        _objc_release(pppuVar7);
        unaff_x25 = (undefined ***)PTR_PTR_1126d67d0;
        func_0x00010851b2c0(PTR_PTR_1126d67d0,pppuVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        unaff_x25 = (undefined ***)PTR_PTR_1126d67d0;
        func_0x00010851b4f8(PTR_PTR_1126d67d0,unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        pppuVar6 = unaff_x23;
        func_0x00010c15e620();
        _objc_retainAutoreleasedReturnValue();
        pppuVar8 = pppuVar6;
        func_0x00010c08b1c0();
        unaff_x27 = unaff_x25;
        if ((long)pppuVar7 <= (long)pppuVar8) {
          pppuVar7 = unaff_x23;
          func_0x00010c15e620(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08b1c0();
          _objc_release(pppuVar7);
        }
      }
      _objc_release(pppuVar6);
      unaff_x26 = PTR_PTR_1126d6790;
      _objc_alloc(PTR_PTR_1126d6790);
      func_0x00010c021a40();
      if (unaff_x25 != (undefined ***)0x0) {
        _objc_setProperty_nonatomic_copy(unaff_x25);
      }
      _objc_release(unaff_x26);
      func_0x00010c25ed40(pppuVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(pppuVar3);
    }
    _objc_release(pppuVar11);
    pppuVar6 = pppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      _objc_release(unaff_x25);
      _objc_release(unaff_x26);
      _objc_release(unaff_x27);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(pppuVar3);
      _objc_release(pppuVar11);
      _objc_release(pppuVar10);
      __Unwind_Resume();
      *pppuVar6 = &PTR_DAT_110a4fff0;
      ppuVar9 = pppuVar6[0xd];
      pppuVar6[0xd] = (undefined **)0x0;
      if (ppuVar9 != (undefined **)0x0) {
        (**(code **)(*ppuVar9 + 8))();
      }
      ppuVar9 = pppuVar6[0xc];
      pppuVar6[0xc] = (undefined **)0x0;
      if (ppuVar9 != (undefined **)0x0) {
        (**(code **)(*ppuVar9 + 8))();
      }
      if (pppuVar6[9] != (undefined **)0x0) {
        pppuVar6[10] = pppuVar6[9];
        __ZdlPv();
      }
      return pppuVar6;
    }
    return pppuVar6;
  }
  return pppuVar3;
}



/* Entry: 107993c74; end: 107993caf; -[SCDiscoverFeedStorySuggestionActionHandler .cxx_destruct] */

void FUN_107993c74(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107993cb0; end: 107993cbb; +[SCDiscoverFeedUnifiedProfileActionHandler announcerIdentifier] */

undefined ** FUN_107993cb0(void)

{
  return &PTR____CFConstantStringClassReference_110ea7818;
}



/* Entry: 107993cbc; end: 107993cc3; -[SCDiscoverFeedUnifiedProfileActionHandler addListener:] */

void FUN_107993cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107993cc4; end: 107993ccb; -[SCDiscoverFeedUnifiedProfileActionHandler removeListener:] */

void FUN_107993cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107993ccc; end: 1079947bb; -[SCDiscoverFeedUnifiedProfileActionHandler initWithUserSession:circumstanceEngine:navigationDelegate:storiesGrapheneMetricsEmitter:impalaProfilePresentHandler:creatorSettingsDataMutator:lazyDiscoverFeedDataMutator:lazyDiscoverFeedInteractionHistoryManager:lazyNotificationOptInRequestManager:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedEventsLogger:lazyBitmojiImageFetcher:lazyBitmojiFriendAvatarProvider:lazyBitmojiAvatarProvider:lazySnapchattersDataFetcher:lazySnapchattersDataMutator:lazySnapchattersDataTracker:lazyAdConfigProvider:adConfigProvider:lazyAdReportPromotedStoryTileEventTrackerProvider:lazyImageDownloader:lazyUserSegmentsProvider:lazyOffPlatformLinkGenerationService:promotedStoryShareScopeExposer:promotedStoryShareScopeServices:promotedStoryReportScopeExposer:promotedStoryReportScopeServices:promotedStoryAdInfoScopeExposer:promotedStoryAdInfoScopeServices:promotedStoryHideScopeExposer:promotedStoryHideScopeServices:shareFriendScopeExposer:safetyReportScopeExposer:deeplinkSendToScopeExposer:adReportScopeExposer:snapTokenProvider:mixerEndpointManager:subscriptionWorkflow:alertPresenterFactory:grapheneRegistry:applicationLifecycleEvents:storiesConfigProvider:networkConnectivityMonitor:dsaExplainerScopeExposer:dsaExplainerScopeServices:contentBlocker:adRenderDataParser:imageFetchingService:customAppThemeProvider:locationProvider:] */

undefined8 *
FUN_107993ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  puStack_70 = PTR_PTR_1126f9020;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
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
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_37;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_42;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_40);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_49;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0x35];
    puVar1[0x35] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_52;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x31];
    puVar1[0x31] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = param_43;
    func_0x00010bf75dc0(param_43);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 1079947bc; end: 1079947ef;  */

void FUN_1079947bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcc9e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079947f0; end: 107994807; -[SCDiscoverFeedUnifiedProfileActionHandler _dismissAnyUnifiedProfilePage] */

void FUN_1079947f0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x18),PTR_s_dismissMenuViewWithAnimation_com_1125be918,0,0);
    return;
  }
  return;
}



/* Entry: 107994808; end: 10799480b; -[SCDiscoverFeedUnifiedProfileActionHandler _appDidEnterBackground] */

void FUN_107994808(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be025f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAnyUnifiedProfilePage_11255e318);
  return;
}



/* Entry: 10799480c; end: 107994c7f; -[SCDiscoverFeedUnifiedProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10799480c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2098;
  _objc_opt_class(PTR_PTR_1126c2098);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar2 == 0) {
    param_1 = 0;
    goto LAB_107994a5c;
  }
  uVar5 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1118;
  _objc_opt_class(PTR_PTR_1126b1118);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010c155f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107bc7108();
  _objc_release(uVar5);
  uVar5 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0720c0();
  if ((int)uVar6 == 0) {
    uVar6 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((int)uVar7 != 0) goto LAB_1079949fc;
    uVar5 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if ((int)uVar6 == 0) {
      uVar5 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      puVar3 = PTR_DAT_1126a4ff0;
      if ((int)uVar6 == 0) {
        uVar5 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        if ((int)uVar6 == 0) {
          param_1 = 0;
        }
        else {
          uVar9 = param_1;
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c22e800();
          _objc_release(uVar9);
          func_0x00010be7ea00(param_1);
        }
        goto LAB_107994a54;
      }
      _objc_retain(param_3);
      uVar6 = param_3;
      func_0x00010010fab4(param_3,puVar3);
      uVar5 = param_3;
      if ((int)uVar6 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_3);
      uVar6 = uVar5;
      func_0x00010c25b560(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar9 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22e800();
      _objc_release(uVar9);
      func_0x00010be7dd20(param_1);
      goto LAB_107994a50;
    }
    uVar9 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22e800();
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126c55c0;
    puVar8 = PTR_PTR_1126c5760;
    func_0x00010c086140(PTR_PTR_1126c5760);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9640(puVar3);
    _objc_release(puVar8);
    func_0x00010be7de80(param_1);
  }
  else {
    _objc_release(uVar5);
LAB_1079949fc:
    uVar9 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22e800();
    _objc_release(uVar9);
    uVar6 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7dee0(param_1);
LAB_107994a50:
    _objc_release(uVar6);
  }
LAB_107994a54:
  _objc_release(uVar4);
LAB_107994a5c:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107994c80; end: 1079959f7; -[SCDiscoverFeedUnifiedProfileActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107994c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  ulong uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar12 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar2);
  uVar14 = uVar12;
  if ((uVar3 & 1) == 0) {
    uVar14 = 0;
  }
  _objc_retain();
  _objc_release(uVar12);
  uVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain();
  _objc_release(uVar4);
  uVar5 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain();
  _objc_release(uVar5);
  uVar6 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1118;
  _objc_opt_class(PTR_PTR_1126b1118);
  uVar10 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar5 = uVar6;
  if ((uVar10 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain();
  _objc_release(uVar6);
  uVar10 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar7 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar2);
  uVar6 = uVar10;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain();
  _objc_release(uVar10);
  _objc_initWeak(auStack_70,param_1);
  uVar15 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar15 != 0) {
    uVar10 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar2);
    uVar12 = uVar10;
    if ((uVar7 & 1) == 0) {
      uVar12 = 0;
    }
    _objc_retain(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar14);
    uVar10 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1118;
    _objc_opt_class(PTR_PTR_1126b1118);
    uVar7 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar2);
    uVar14 = uVar10;
    if ((uVar7 & 1) == 0) {
      uVar14 = 0;
    }
    _objc_retain(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar5);
    uVar10 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar2);
    uVar5 = uVar10;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar10);
    uVar7 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2098;
    _objc_opt_class(PTR_PTR_1126c2098);
    uVar13 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar10 = uVar7;
    if ((uVar13 & 1) == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar7);
    uVar13 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar13;
    _objc_opt_isKindOfClass(uVar13,puVar2);
    uVar7 = uVar13;
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar13);
    if (uVar7 == 0) {
      uVar13 = 0xffffffffffffffff;
    }
    else {
      func_0x00010c067fc0();
    }
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1079959f8;
    puStack_a8 = &UNK_110853740;
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(uVar12);
    uStack_a0 = uVar12;
    _objc_retain(uVar14);
    uStack_98 = uVar14;
    _objc_retain(uVar5);
    uStack_90 = uVar5;
    _objc_retain(uVar10);
    uStack_88 = uVar10;
    uStack_78 = uVar13;
    func_0x00010c0f7fc0(uVar15);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar5);
    uVar5 = uVar14;
    uVar14 = uVar12;
    goto LAB_1079954bc;
  }
  uVar15 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar15 == 0) {
    uVar15 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar15 == 0) {
      uVar15 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar15 != 0) {
        uVar10 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar7 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar2);
        uVar12 = uVar10;
        if ((uVar7 & 1) == 0) {
          uVar12 = 0;
        }
        _objc_retain(uVar12);
        _objc_release(uVar10);
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_168 = 0xc2000000;
        uStack_160 = 0x107995a9c;
        puStack_158 = &UNK_110850cf8;
        _objc_copyWeak(auStack_138,auStack_70);
        _objc_retain(uVar14);
        uStack_150 = uVar14;
        _objc_retain(uVar5);
        uStack_148 = uVar5;
        _objc_retain(uVar12);
        uStack_140 = uVar12;
        func_0x00010c0f7fc0(uVar15);
        _objc_release(uStack_140);
        _objc_release(uStack_148);
        _objc_release(uStack_150);
        _objc_destroyWeak(auStack_138);
        _objc_release(uVar12);
        goto LAB_1079954bc;
      }
      uVar15 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar15 == 0) {
        uVar15 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar15 == 0) {
          uVar15 = param_3;
          func_0x00010c0720c0();
          iVar1 = 0;
          if (uVar14 != 0) {
            iVar1 = (int)uVar15;
          }
          if (iVar1 == 1) {
            uVar11 = *(undefined8 *)(param_1 + 0x68);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c282800(uVar12);
            uVar15 = uVar11;
            func_0x00010c25bac0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            uVar10 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
            _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
            uVar7 = uVar10;
            _objc_opt_isKindOfClass(uVar10,puVar2);
            uVar14 = uVar10;
            if ((uVar7 & 1) == 0) {
              uVar14 = 0;
            }
            _objc_retain(uVar14);
            _objc_release(uVar10);
            func_0x00010bf6b020(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf7d700();
            _objc_release(param_1);
            _objc_release(uVar14);
            _objc_release(uVar15);
            uVar14 = uVar12;
            goto LAB_1079954bc;
          }
          uVar15 = param_3;
          func_0x00010c0720c0();
          if ((int)uVar15 != 0) {
            uVar15 = *(undefined8 *)(param_1 + 0x28);
            puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_228 = 0xc2000000;
            uStack_220 = 0x107995b44;
            puStack_218 = &UNK_110848218;
            ppuVar9 = &puStack_230;
            _objc_copyWeak(auStack_200,auStack_70);
            _objc_retain(uVar14);
            uStack_210 = uVar14;
            _objc_retain(uVar5);
            uStack_208 = uVar5;
            func_0x00010c0f7fc0(uVar15);
            _objc_release(uStack_208);
            uVar12 = uStack_210;
            goto LAB_10799508c;
          }
          uVar15 = param_3;
          func_0x00010c0720c0();
          if ((int)uVar15 == 0) {
            uVar15 = param_3;
            func_0x00010c0720c0();
            if ((int)uVar15 == 0) goto LAB_1079954bc;
            if (uVar14 == 0) {
              uVar12 = 0;
            }
            else {
              uVar10 = *(ulong *)(param_1 + 0x68);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c282800(uVar12);
              uVar12 = uVar10;
              func_0x00010c25bac0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar10);
            }
            uVar15 = *(undefined8 *)(param_1 + 0x28);
            puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_290 = 0xc2000000;
            uStack_288 = 0x107995bac;
            puStack_280 = &UNK_110848218;
            ppuVar9 = &puStack_298;
            _objc_copyWeak(auStack_268,auStack_70);
            _objc_retain(uVar12);
            uStack_278 = uVar12;
            _objc_retain(uVar5);
            uStack_270 = uVar5;
            func_0x00010c0f7fc0(uVar15);
            if (uVar3 != 0) {
              func_0x00010bf6b020(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf72a80();
              _objc_release(param_1);
            }
            _objc_release(uStack_270);
            uVar10 = uStack_278;
            goto LAB_10799549c;
          }
          uVar15 = *(undefined8 *)(param_1 + 0x28);
          puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_258 = 0xc2000000;
          uStack_250 = 0x107995b78;
          puStack_248 = &UNK_110841fb0;
          _objc_copyWeak(&puStack_238,auStack_70);
          _objc_retain(uVar5);
          uStack_240 = uVar5;
          func_0x00010c0f7fc0(uVar15);
          _objc_release(uStack_240);
          ppuVar9 = &puStack_238;
          goto LAB_107995094;
        }
        uVar10 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d50c0;
        _objc_opt_class(PTR_PTR_1126d50c0);
        uVar7 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar2);
        uVar12 = uVar10;
        if ((uVar7 & 1) == 0) {
          uVar12 = 0;
        }
        _objc_retain(uVar12);
        _objc_release(uVar10);
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1f0 = 0xc2000000;
        uStack_1e8 = 0x107995b0c;
        puStack_1e0 = &UNK_11085ae98;
        _objc_copyWeak(&puStack_1b8,auStack_70);
        _objc_retain(uVar14);
        uStack_1d8 = uVar14;
        _objc_retain(uVar5);
        uStack_1d0 = uVar5;
        _objc_retain(uVar6);
        uStack_1c8 = uVar6;
        _objc_retain(uVar12);
        uStack_1c0 = uVar12;
        func_0x00010c0f7fc0(uVar15);
        _objc_release(uStack_1c0);
        _objc_release(uStack_1c8);
        _objc_release(uStack_1d0);
        _objc_release(uStack_1d8);
        ppuVar9 = &puStack_1b8;
      }
      else {
        uVar10 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar7 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar2);
        uVar12 = uVar10;
        if ((uVar7 & 1) == 0) {
          uVar12 = 0;
        }
        _objc_retain(uVar12);
        _objc_release(uVar10);
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a8 = 0xc2000000;
        uStack_1a0 = 0x107995ad4;
        puStack_198 = &UNK_110850cf8;
        _objc_copyWeak(&puStack_178,auStack_70);
        _objc_retain(uVar14);
        uStack_190 = uVar14;
        _objc_retain(uVar5);
        uStack_188 = uVar5;
        _objc_retain(uVar12);
        uStack_180 = uVar12;
        func_0x00010c0f7fc0(uVar15);
        _objc_release(uStack_180);
        _objc_release(uStack_188);
        _objc_release(uStack_190);
        ppuVar9 = &puStack_178;
      }
    }
    else {
      if (uVar14 == 0) {
        uVar12 = 0;
      }
      else {
        uVar10 = *(ulong *)(param_1 + 0x68);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282800(uVar12);
        uVar12 = uVar10;
        func_0x00010c25bac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
      }
      uVar15 = *(undefined8 *)(param_1 + 0x28);
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0xc2000000;
      uStack_120 = 0x107995a68;
      puStack_118 = &UNK_110848218;
      ppuVar9 = &puStack_130;
      _objc_copyWeak(auStack_100,auStack_70);
      _objc_retain(uVar12);
      uStack_110 = uVar12;
      _objc_retain(uVar5);
      uStack_108 = uVar5;
      func_0x00010c0f7fc0(uVar15);
      if (uVar3 != 0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf773e0();
        _objc_release(param_1);
      }
      _objc_release(uStack_108);
      uVar10 = uStack_110;
LAB_10799549c:
      _objc_release(uVar10);
      ppuVar9 = ppuVar9 + 6;
    }
    _objc_destroyWeak(ppuVar9);
    _objc_release(uVar12);
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x107995a34;
    puStack_e0 = &UNK_110848218;
    ppuVar9 = &puStack_f8;
    _objc_copyWeak(auStack_c8,auStack_70);
    _objc_retain(uVar14);
    uStack_d8 = uVar14;
    _objc_retain(uVar5);
    uStack_d0 = uVar5;
    func_0x00010c0f7fc0(uVar15);
    _objc_release(uStack_d0);
    uVar12 = uStack_d8;
LAB_10799508c:
    _objc_release(uVar12);
    ppuVar9 = ppuVar9 + 6;
LAB_107995094:
    _objc_destroyWeak(ppuVar9);
  }
LAB_1079954bc:
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079959f8; end: 107995bdf;  */

void FUN_1079959f8(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107995be0; end: 107995eb3; -[SCDiscoverFeedUnifiedProfileActionHandler _presentPromotedStoryActionSheetForStory:sectionKey:triggeringSection:coverImage:] */

bool FUN_107995be0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c25b720();
  if (lVar2 == 5) {
    lVar2 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010afef744();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    if (lVar3 != 0) {
      func_0x00010be025e0(param_1);
      lVar2 = param_1;
      func_0x00010bdea480(param_1,param_2,param_3,param_4,0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar2;
      _objc_release(uVar7);
      puVar4 = PTR_PTR_1126d5998;
      _objc_alloc(PTR_PTR_1126d5998);
      func_0x00010c04d420();
      puVar5 = PTR_PTR_1126b1208;
      _objc_alloc();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x1b0);
      uVar6 = 0x13;
      func_0x00010bc9107c(0x13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b180(puVar5,param_2,puVar4,uVar9,uVar7,uVar8,uVar6);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar5;
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar7);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
      func_0x00010bef9980(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      lVar2 = param_1 + 0x1c0;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c10d0c0(uVar7,param_2,lVar2);
      _objc_release(lVar2);
      func_0x00010c161ba0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x18));
      lVar2 = param_1 + 0x1c0;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x20),param_2,lVar2);
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010be5be00(param_1,param_2,param_3,param_4,
                          &PTR____CFConstantStringClassReference_110eb65d8,param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar7,param_2,&PTR____CFConstantStringClassReference_110f41518,param_1,
                          lVar2);
      _objc_release(param_1);
      _objc_release(uVar7);
      _objc_release(lVar2);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107995eb4; end: 1079960eb; -[SCDiscoverFeedUnifiedProfileActionHandler _presentSpotlightActionSheetForStory:sectionKey:triggeringSection:] */

undefined8
FUN_107995eb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be025e0(param_1);
  lVar1 = param_1;
  func_0x00010bdea480(param_1,param_2,param_3,param_4,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126d59a0;
  _objc_alloc(PTR_PTR_1126d59a0);
  func_0x00010c04d4a0();
  puVar3 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x1b0);
  uVar4 = 0x13;
  func_0x00010bc9107c(0x13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180(puVar3,param_2,puVar2,uVar6,uVar5,uVar7,uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar3;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = param_1 + 0x1c0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10d0c0(uVar5,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c161ba0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x18));
  lVar1 = param_1 + 0x1c0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be5be00(param_1,param_2,param_3,param_4,
                      &PTR____CFConstantStringClassReference_110eb6618,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f41518,param_1,lVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(puVar2);
  return 1;
}



/* Entry: 1079960ec; end: 10799684f; -[SCDiscoverFeedUnifiedProfileActionHandler _presentPublisherActionSheetForStory:sectionKey:triggeringSection:presentActionIdentifier:] */

undefined8 FUN_1079960ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c25b720();
  if ((lVar1 != 2) && (lVar1 = param_3, func_0x00010c25b720(), lVar1 != 0xb)) {
    uVar3 = 0;
    goto LAB_10799681c;
  }
  func_0x00010be025e0(param_1);
  puVar2 = PTR_PTR_1126d5950;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cd20();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c064b00(param_1);
  func_0x00010bef9980(puVar2);
  func_0x00010be64440(param_1);
  puVar6 = PTR_PTR_1126d59a8;
  _objc_alloc();
  func_0x00010c259740(param_3);
  func_0x00010c030280();
  func_0x00010bef9980();
  lVar1 = param_1;
  func_0x00010bdea480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
  _objc_release(uVar3);
  lVar1 = param_3;
  func_0x00010c25b720();
  lVar7 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  if (lVar1 == 0xb) {
    func_0x00010afefbe8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    if (lVar8 != 0) {
      lVar7 = lVar8;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c2a2900(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar7;
      func_0x00010847dea8(lVar7,lVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar7);
      lVar7 = lVar1;
      func_0x00010bf28ba0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        uStack_a0 = lVar1;
        func_0x00010bfe8f00(lVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar9 = lVar1;
        func_0x00010bf28ba0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        uStack_a0 = lVar9;
        func_0x00010c252ba0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
      }
      _objc_release(lVar7);
      uStack_80 = PTR_PTR_1126d59b0;
      _objc_alloc();
      lVar7 = lVar8;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c259740();
      uStack_88 = lVar1;
      func_0x00010c26ebe0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010bfe0440(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8c980();
      func_0x00010c11b6a0();
      lVar10 = lVar8;
      func_0x00010c2387e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03c040();
      goto LAB_107996650;
    }
LAB_107996424:
    uVar3 = 0;
  }
  else {
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    if (lVar8 == 0) goto LAB_107996424;
    func_0x00010c07dbe0();
    lVar1 = lVar8;
    func_0x00010847bdd8();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf28ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      uStack_a0 = lVar10;
      func_0x00010bfe8f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar11 = lVar10;
      func_0x00010bf28ba0();
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = lVar11;
      func_0x00010c252ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
    }
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar7);
    uStack_80 = PTR_PTR_1126d59b0;
    _objc_alloc();
    lVar7 = lVar8;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    uStack_88 = lVar1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = uStack_88;
    func_0x00010c26ebe0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c26e920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bfe0440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8c980(lVar8);
    func_0x00010c11b6a0();
    lVar12 = lVar8;
    func_0x00010c2387e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c040();
    _objc_release(lVar12);
    _objc_release(lVar11);
LAB_107996650:
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uStack_88);
    _objc_release(lVar7);
    _objc_release(uStack_a0);
    _objc_release(lVar1);
    _objc_release(lVar8);
    puVar13 = PTR_PTR_1126b1208;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x13;
    func_0x00010bc9107c(0x13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b180();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar13;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_1 + 0x1c0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c10d0c0(uVar3);
    _objc_release(lVar1);
    func_0x00010c161ba0(*(undefined8 *)(param_1 + 0x20));
    lVar1 = param_1 + 0x1c0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be5be00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar3);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uStack_80);
    uVar3 = 1;
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
LAB_10799681c:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107996850; end: 107996ff7; -[SCDiscoverFeedUnifiedProfileActionHandler _presentPublicUserActionSheetForStory:sectionKey:triggeringSection:] */

bool FUN_107996850(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined *puStack_88;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010c25b720();
  if ((uVar2 == 3) || (uVar2 = param_4, func_0x00010c25b720(), uVar2 == 0xe)) {
    uVar2 = param_4;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010afefd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    bVar1 = uVar3 != 0 || uVar4 != 0;
    if (uVar3 != 0 || uVar4 != 0) {
      func_0x00010be025e0(param_2);
      puVar5 = PTR_PTR_1126d5950;
      _objc_alloc();
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x50);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_2 + 0x58);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00cd20(puVar5,param_3,uVar6,uVar7,uVar8,*(undefined8 *)(param_2 + 0x38),param_5,
                          0xffffffffffffffff,*(undefined8 *)(param_2 + 0x98),
                          *(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0xa0),
                          *(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x170),
                          *(undefined8 *)(param_2 + 0x168));
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      func_0x00010c064b00(param_2,param_3,puVar5,param_4);
      func_0x00010bef9980(puVar5,param_3,param_2);
      lVar9 = param_2;
      func_0x00010be64440(param_2,param_3,param_4);
      puVar10 = PTR_PTR_1126d59a8;
      _objc_alloc();
      uVar2 = param_4;
      func_0x00010c259740(param_4);
      func_0x00010c030280(puVar10,param_3,lVar9,uVar2,param_5);
      func_0x00010bef9980();
      lVar9 = param_2;
      func_0x00010bdea480(param_2,param_3,param_4,param_5,puVar5,puVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_2 + 0x20) = lVar9;
      _objc_release(uVar6);
      puStack_88 = PTR_PTR_1126d59c8;
      if (uVar3 == 0) {
        _objc_retain(uVar4);
        _objc_alloc();
        uVar2 = uVar4;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar4;
        func_0x00010c291e80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar4;
        func_0x00010c291e80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar4;
        func_0x00010c078f60(uVar4);
        uVar20 = uVar4;
        func_0x00010c0e1a60();
        uVar21 = uVar4;
        func_0x00010c073320();
        uVar22 = uVar4;
        func_0x00010bf24ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010c05b160(puStack_88,param_3,uVar2,uVar18,uVar25,0,0,uVar19,uVar20,uVar21 & 0xff,0
                            ,0,uVar22,0,0,0);
        _objc_release(uVar22);
        _objc_release(uVar25);
        _objc_release(uVar18);
        _objc_release(uVar2);
        uVar2 = uVar4;
        func_0x00010bfe8d80();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar4;
        func_0x00010c26e300();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar4;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = 0xe;
        param_1 = 0x7ff8000000000000;
      }
      else {
        _objc_retain(uVar3);
        _objc_alloc();
        uVar2 = uVar3;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar3;
        func_0x00010c292e20();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar3;
        func_0x00010bf8e2c0();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar3;
        func_0x00010c07a6a0();
        uVar21 = uVar3;
        func_0x00010c078f60();
        uVar22 = uVar3;
        func_0x00010c0e1a60();
        uVar11 = uVar3;
        func_0x00010c073320();
        uVar12 = uVar3;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar3;
        func_0x00010bf1ade0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar3;
        func_0x00010bf24ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar3;
        func_0x00010bf24fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar3;
        func_0x00010bf24e60();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar3;
        func_0x00010c11a980();
        _objc_release(uVar3);
        func_0x00010c05b160(puStack_88,param_3,uVar2,uVar18,uVar25,uVar19,uVar20 & 0xffffffff,
                            uVar21 & 0xffffffff,uVar22,uVar11 & 0xff,uVar12,uVar13,uVar14,uVar15,
                            uVar16,(char)uVar17);
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar19);
        _objc_release(uVar25);
        _objc_release(uVar18);
        _objc_release(uVar2);
        func_0x00010bf866c0(uVar3);
        uVar2 = uVar3;
        func_0x00010bfe8d80();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar3;
        func_0x00010c26e300();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = 0;
        uVar6 = 3;
      }
      puVar23 = PTR_PTR_1126d59b8;
      _objc_alloc(PTR_PTR_1126d59b8);
      uVar19 = param_4;
      func_0x00010c259740(param_4);
      func_0x00010c03bde0(param_1,puVar23,param_3,puStack_88,uVar19,puVar5,puVar10,
                          *(undefined8 *)(param_2 + 0x90),uVar6,uVar25,uVar18,uVar2,
                          *(undefined8 *)(param_2 + 0x168));
      puVar24 = PTR_PTR_1126b1208;
      _objc_alloc();
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      uVar6 = *(undefined8 *)(param_2 + 0xc0);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(param_2 + 0x1b0);
      uVar7 = 0x13;
      func_0x00010bc9107c(0x13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b180(puVar24,param_3,puVar23,uVar8,uVar6,uVar26,uVar7);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      *(undefined **)(param_2 + 0x18) = puVar24;
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x18),param_3,param_2);
      func_0x00010bef9980(*(undefined8 *)(param_2 + 0x20),param_3,param_2);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      lVar9 = param_2 + 0x1c0;
      _objc_loadWeakRetained(lVar9);
      func_0x00010c10d0c0(uVar6,param_3,lVar9);
      _objc_release(lVar9);
      func_0x00010c161ba0(*(undefined8 *)(param_2 + 0x20),param_3,*(undefined8 *)(param_2 + 0x18));
      lVar9 = param_2 + 0x1c0;
      _objc_loadWeakRetained(lVar9);
      func_0x00010c1e1580(*(undefined8 *)(param_2 + 0x20),param_3,lVar9);
      _objc_release(lVar9);
      lVar9 = param_2;
      func_0x00010be5be00(param_2,param_3,param_4,param_5,
                          &PTR____CFConstantStringClassReference_110eb6598,param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 0x70);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_2);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar6,param_3,&PTR____CFConstantStringClassReference_110f41518,param_2,
                          lVar9);
      _objc_release(param_2);
      _objc_release(uVar6);
      _objc_release(lVar9);
      _objc_release(puVar23);
      _objc_release(uVar25);
      _objc_release(uVar18);
      _objc_release(uVar2);
      _objc_release(puStack_88);
      _objc_release(puVar10);
      _objc_release(puVar5);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107996ff8; end: 10799704f; -[SCDiscoverFeedUnifiedProfileActionHandler _subscribeStateWithDiscoverFeedStory:] */

undefined8 FUN_107996ff8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c080120();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0800e0();
    uVar2 = 0;
    if ((int)uVar1 == 0) {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 3;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107997050; end: 107997073; -[SCDiscoverFeedUnifiedProfileActionHandler _notificationStateWithDiscoverFeedStory:] */

undefined8 FUN_107997050(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0794a0();
  uVar1 = 3;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107997074; end: 10799727b; -[SCDiscoverFeedUnifiedProfileActionHandler _handleSubscribeEventForStoryDedupeFp:sectionKey:subscribeStateNum:story:pageType:] */

void FUN_107997074(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = param_3;
  func_0x00010c282800();
  if ((param_5 != 0) && (lVar3 != 0)) {
    lVar3 = param_5;
    func_0x00010c067fc0();
    if (lVar3 == 1) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
      _objc_retain(uVar5);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x78);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uVar1 = *(undefined8 *)(param_1 + 0x1a8);
      uVar2 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10799727c;
      puStack_98 = &UNK_110868f80;
      uStack_90 = uVar5;
      _objc_retain(param_6);
      lStack_88 = param_6;
      uStack_80 = uVar6;
      uStack_78 = uVar2;
      uStack_70 = uVar7;
      uStack_68 = uVar1;
      _objc_retain(uVar2);
      _objc_retain(uVar1);
      _objc_retain(uVar7);
      func_0x0001000d76cc("APPSTORE",&puStack_b0);
      _objc_release(lStack_88);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_retain(param_6);
    lVar3 = param_6;
    if ((param_3 != 0) && (param_6 == 0)) {
      lVar4 = *(long *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800(param_3);
      lVar3 = lVar4;
      func_0x00010c25bac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    if (lVar3 != 0) {
      func_0x00010be59540(param_1);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10799727c; end: 107997303;  */

void FUN_10799727c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107997304;
  puStack_60 = &UNK_1108475b0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar2;
  func_0x00010bf83dc0(uVar1,param_2,1,&puStack_78);
  _objc_release(uStack_58);
  return;
}



/* Entry: 107997304; end: 107997317;  */

void FUN_107997304(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uStack_ac;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain();
  _objc_retain(uVar3);
  _objc_retain(lVar2);
  _objc_retain(uVar4);
  _objc_retain(uVar12);
  if (lVar2 == 0) {
    FUN_107aff838(uVar1,uVar3,uVar4,uVar12);
    goto LAB_107b00050;
  }
  uVar5 = uVar1;
  func_0x00010c25b720();
  uVar8 = uVar1;
  if (uVar5 == 2) {
    func_0x00010c259560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
LAB_107affda8:
    _objc_release(uVar8);
    uVar8 = uVar5;
    func_0x00010c11af80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c11b1e0();
    uVar10 = uVar8;
    func_0x00010bfb57e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bfad760(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf012c0(uVar8);
    FUN_107affab4(uVar9,uVar10,uVar11,uVar7,uVar3,uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
  }
  else {
    uVar5 = uVar1;
    func_0x00010c25b720();
    if (uVar5 == 0xb) {
      func_0x00010c259560(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107affda8;
    }
    uVar5 = uVar1;
    func_0x00010c25b720();
    if (uVar5 == 3) {
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uVar10 = uVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010c07a6a0();
      if ((uVar9 & 1) == 0) {
        uVar9 = uVar5;
        func_0x00010c078f60();
        uStack_ac = (undefined4)uVar9;
      }
      else {
        uStack_ac = 1;
      }
      uVar9 = uVar5;
      func_0x00010bf1ade0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010bf1acc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf24fc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_107b0025c(uVar10,uVar8,uStack_ac,uVar9,uVar11,uVar7,lVar2,uVar6,uVar12);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    else {
      uVar5 = uVar1;
      func_0x00010c25b720();
      if (uVar5 == 0xe) {
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar8;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        uVar10 = uVar5;
        func_0x00010c2923e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010c291e80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010c078f60();
        uVar11 = uVar5;
        func_0x00010bf24fc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        FUN_107b0025c(uVar10,uVar8,uVar9 & 0xffffffff,0,0,uVar11,lVar2,uVar6,uVar12);
        _objc_release(uVar6);
        _objc_release(uVar11);
        _objc_release(uVar8);
      }
      else {
        uVar5 = uVar1;
        func_0x00010c25b720();
        if (uVar5 != 0xd) goto LAB_107b00050;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar8;
        func_0x00010afef86c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        uVar8 = uVar5;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf5b480();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar8);
        uVar8 = uVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c08fa60();
        _objc_release(uVar8);
        if (uVar9 != 0) {
          uVar8 = uVar5;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          if (uVar8 == 0) {
            uVar9 = uVar10;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(uVar8);
            uVar9 = uVar8;
          }
          _objc_release(uVar8);
          uVar8 = uVar5;
          func_0x00010bf24fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar8;
          func_0x00010c08fa60();
          if (uVar11 == 0) {
            uVar11 = uVar10;
            func_0x00010c2923e0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            FUN_107b004f8();
          }
          else {
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0xc2000000;
            pcStack_88 = FUN_107b00498;
            puStack_80 = &UNK_1108497e0;
            _objc_retain(uVar10);
            uStack_78 = uVar10;
            _objc_retain(uVar9);
            uStack_70 = uVar9;
            _objc_retain(uVar12);
            uStack_68 = uVar12;
            FUN_107afce44(uVar8,lVar2,&puStack_98);
            _objc_release(uStack_68);
            _objc_release(uStack_70);
            uVar11 = uStack_78;
          }
          _objc_release(uVar11);
          _objc_release(uVar8);
          _objc_release(uVar9);
        }
      }
    }
    _objc_release(uVar10);
  }
  _objc_release(uVar5);
LAB_107b00050:
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 107997318; end: 107997327; -[SCDiscoverFeedUnifiedProfileActionHandler unifiedActionMenuPresenterDidDismiss:] */

void FUN_107997318(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107997328; end: 107997823; -[SCDiscoverFeedUnifiedProfileActionHandler _logSubscribeForStory:sectionKey:subscribeState:pageType:] */

void FUN_107997328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 0) {
    uVar3 = 7;
  }
  else {
    if (param_5 != 3) goto LAB_107997428;
    uVar3 = 6;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010799744c(uVar3,param_3,param_4,param_6 == 0x57,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
LAB_107997428:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107997824; end: 107997947; -[SCDiscoverFeedUnifiedProfileActionHandler _logSendForStoryDedupeFp:sectionKey:] */

void FUN_107997824(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800(param_3);
    _objc_release(param_3);
    uVar1 = uVar3;
    func_0x00010c25bac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 2;
  FUN_107cb5478(2,uVar1,param_4,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107997948; end: 107997a23; -[SCDiscoverFeedUnifiedProfileActionHandler _logHideWithStory:sectionKey:] */

void FUN_107997948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 8;
  FUN_107cb57e8(8,param_3,param_4,2,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf7dbc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107997a24; end: 107997cbf; -[SCDiscoverFeedUnifiedProfileActionHandler _logReportForStoryDedupeFp:sectionKey:reasonId:] */

void FUN_107997a24(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0720c0();
  lVar4 = 0xf;
  if (param_5 != 0) {
    lVar4 = 0x10;
  }
  if (param_3 == 0) {
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuVar1 = *(undefined ***)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800(param_3);
    ppuVar15 = ppuVar1;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f41518;
  lVar3 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb5478(lVar4,ppuVar15,param_4,2);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  lVar13 = lVar4;
  func_0x00010bf7dbc0(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  if (ppuVar15 != (undefined **)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar15;
    func_0x000107bfa524();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar15;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c90c8;
    func_0x00010c132440();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bfa4340(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = 8;
    lVar13 = 0;
    ppuVar1 = ppuVar6;
    func_0x00010c285ba0(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(uVar5);
  }
  _objc_release(ppuVar15);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar1);
  _objc_retain(lVar12);
  _objc_retain(lVar13);
  if (lVar13 == 0) goto LAB_107997df8;
  lVar4 = lVar13;
  func_0x00010c067fc0();
  if (lVar4 == 3) {
    uVar2 = 0x1c;
    if (ppuVar1 != (undefined **)0x0) goto LAB_107997d20;
LAB_107997d68:
    uVar5 = 0;
  }
  else {
    if (lVar4 != 0) goto LAB_107997df8;
    uVar2 = 0x1d;
    if (ppuVar1 == (undefined **)0x0) goto LAB_107997d68;
LAB_107997d20:
    uVar11 = *(undefined8 *)(param_3 + 0x68);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800(ppuVar1);
    uVar5 = uVar11;
    func_0x00010c25bac0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
  }
  uVar11 = *(undefined8 *)(param_3 + 0x70);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_3);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb5478(uVar2,uVar5,lVar12,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar11);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uVar11);
  _objc_release(uVar5);
LAB_107997df8:
  _objc_release(lVar13);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107997cc0; end: 107997e23; -[SCDiscoverFeedUnifiedProfileActionHandler _logNotificationForStoryDedupeFp:sectionKey:notificationStateNum:] */

void FUN_107997cc0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) goto LAB_107997df8;
  lVar1 = param_5;
  func_0x00010c067fc0();
  if (lVar1 == 3) {
    uVar3 = 0x1c;
    if (param_3 != 0) goto LAB_107997d20;
LAB_107997d68:
    uVar4 = 0;
  }
  else {
    if (lVar1 != 0) goto LAB_107997df8;
    uVar3 = 0x1d;
    if (param_3 == 0) goto LAB_107997d68;
LAB_107997d20:
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800(param_3);
    uVar4 = uVar2;
    func_0x00010c25bac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb5478(uVar3,uVar4,param_4,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar4);
LAB_107997df8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107997e24; end: 10799822b; -[SCDiscoverFeedUnifiedProfileActionHandler _logViewProfileForStoryDedupeFp:sectionKey:baseView:storyLoggingInfo:] */

void FUN_107997e24(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126d59c0;
  _objc_opt_class(PTR_PTR_1126d59c0);
  lVar8 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = (uint)(param_5 != 0) & (uint)lVar8;
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800(param_3);
    lVar8 = lVar3;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  uVar4 = 0x34;
  func_0x00010799744c(0x34,lVar8,param_4,uVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  if (uVar1 != 0) {
    lVar3 = param_6;
    func_0x00010c084900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(uVar5);
    }
    _objc_release(lVar3);
    lVar3 = param_6;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(uVar5);
    }
    _objc_release(lVar3);
    lVar3 = param_6;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c25c580();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    lVar3 = param_6;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bfe48a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(uVar5);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar4);
  if (lVar8 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x000107bfa524(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar8;
    func_0x00010bf454e0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bfa4340(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(uVar7);
    _objc_release(uVar4);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(uVar7);
  }
  _objc_release(uVar5);
  _objc_release(lVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10799822c; end: 107998533; -[SCDiscoverFeedUnifiedProfileActionHandler _logRecommendedAccountsDedupeFp:sectionKey:] */

void FUN_10799822c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar7 = 0;
  if (param_3 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800(param_3);
    _objc_release(param_3);
    uVar7 = uVar8;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x28;
  func_0x00010799744c(0x28,uVar7,param_4,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar8);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 5;
  func_0x000107cb3d20(5,0x13,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar8);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110f41458;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  func_0x00010bf7dbc0(uVar8);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_4 + 0x70);
  _objc_retain(ppuVar9);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_4);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x73;
  FUN_107cb5478(0x73,0,ppuVar9,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  func_0x00010bf7dbc0(uVar7);
  _objc_release(uVar8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 107998534; end: 1079985f7; -[SCDiscoverFeedUnifiedProfileActionHandler _logDSAExplainerTapActionWithSectionKey:] */

void FUN_107998534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x73;
  FUN_107cb5478(0x73,0,param_3,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf7dbc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079985f8; end: 1079986cf; -[SCDiscoverFeedUnifiedProfileActionHandler _logBlockUserEventWithStory:sectionKey:] */

void FUN_1079985f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x77;
  FUN_107cb5478(0x77,param_3,param_4,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf7dbc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079986d0; end: 1079988c7; -[SCDiscoverFeedUnifiedProfileActionHandler _createActionSheetActionHandlerWithStory:sectionKey:subscribeStatusManager:notificationStatusManager:] */

void FUN_1079986d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d5960;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  func_0x00010c05e920(puVar1,*(undefined8 *)(param_1 + 0x130),uVar3,param_3,lVar2,param_5,param_6,
                      *(undefined8 *)(param_1 + 0x168),param_4,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                      *(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130),
                      *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0xf8),
                      *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x150),
                      *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x170),
                      *(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0xd8),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x180),
                      *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                      *(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160),
                      *(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1a0),
                      *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x1b8));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c188840(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079988e0; end: 107998953; -[SCDiscoverFeedUnifiedProfileActionHandler initializeSubscriptionStatusManager:withStory:] */

void FUN_1079988e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bec7140(param_1,param_2,param_4);
  uVar1 = param_4;
  func_0x00010c259740(param_4);
  _objc_release(param_4);
  func_0x00010c064ae0(param_3,param_2,uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107998954; end: 10799896b; -[SCDiscoverFeedUnifiedProfileActionHandler presentingViewController] */

void FUN_107998954(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799896c; end: 107998977; -[SCDiscoverFeedUnifiedProfileActionHandler setPresentingViewController:] */

void FUN_10799896c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1c0,param_3);
  return;
}



/* Entry: 107998978; end: 10799898f; -[SCDiscoverFeedUnifiedProfileActionHandler delegate] */

void FUN_107998978(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107998990; end: 10799899b; -[SCDiscoverFeedUnifiedProfileActionHandler setDelegate:] */

void FUN_107998990(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1c8,param_3);
  return;
}



/* Entry: 10799899c; end: 1079989b3; -[SCDiscoverFeedUnifiedProfileActionHandler customStatusBarStyleContextController] */

void FUN_10799899c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079989b4; end: 1079989bf; -[SCDiscoverFeedUnifiedProfileActionHandler setCustomStatusBarStyleContextController:] */

void FUN_1079989b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1d0,param_3);
  return;
}



/* Entry: 1079989c0; end: 107998c7f; -[SCDiscoverFeedUnifiedProfileActionHandler .cxx_destruct] */

void FUN_1079989c0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1d0);
  _objc_destroyWeak(param_1 + 0x1c8);
  _objc_destroyWeak(param_1 + 0x1c0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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



/* Entry: 107998c80; end: 107998d6b; -[SCDiscoverOpenAddFriendsActionHandler initWithPresentingController:addFriendsScopeExposer:addFriendsScopeServices:customStatusBarStyleContextController:] */

undefined1 *
FUN_107998c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f9028;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107998d6c; end: 107998f2f; -[SCDiscoverOpenAddFriendsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined ** FUN_107998d6c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  ppuVar8 = &PTR____CFConstantStringClassReference_110eb9a98;
  uVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)ppuVar8 != 0) {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d59d0;
    _objc_opt_class(PTR_PTR_1126d59d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94800();
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c038f40(puVar3);
    _objc_release(lVar5);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    puVar7 = PTR_PTR_1126af668;
    _objc_alloc(PTR_PTR_1126af668);
    func_0x00010c033380();
    func_0x00010c0fdba0(uVar1);
    _objc_release(uVar1);
    func_0x00010bf22980(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar9);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  return ppuVar8;
}



/* Entry: 107998f30; end: 107998f33; -[SCDiscoverOpenAddFriendsActionHandler addFriendsWorkflowSkipped:] */

void FUN_107998f30(void)

{
  return;
}



/* Entry: 107998f34; end: 107998f73; -[SCDiscoverOpenAddFriendsActionHandler addFriendsWorkflowCompleted:] */

void FUN_107998f34(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107998f74; end: 107998f8b; -[SCDiscoverOpenAddFriendsActionHandler presentingViewController] */

void FUN_107998f74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107998f8c; end: 107998f97; -[SCDiscoverOpenAddFriendsActionHandler setPresentingViewController:] */

void FUN_107998f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107998f98; end: 107998fd7; -[SCDiscoverOpenAddFriendsActionHandler .cxx_destruct] */

void FUN_107998f98(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107998fd8; end: 107998fe3; +[SCImpalaDiscoverShowProfileActionHandler announcerIdentifier] */

undefined ** FUN_107998fd8(void)

{
  return &PTR____CFConstantStringClassReference_110ea7858;
}



/* Entry: 107998fe4; end: 107998feb; -[SCImpalaDiscoverShowProfileActionHandler addListener:] */

void FUN_107998fe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107998fec; end: 107998ff3; -[SCImpalaDiscoverShowProfileActionHandler removeListener:] */

void FUN_107998fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107998ff4; end: 1079990eb; -[SCImpalaDiscoverShowProfileActionHandler initWithSourcePageType:impalaProfilePresentHandler:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:] */

undefined1 *
FUN_107998ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9030;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079990ec; end: 107999517; -[SCImpalaDiscoverShowProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_1079990ec(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = 0x10e1cad8;
  func_0x00010c0720c0();
  if (iVar2 == 0) {
    iVar2 = 0x10ed76b8;
    uVar4 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (iVar2 == 0) {
      bVar1 = false;
      goto LAB_1079994b4;
    }
  }
  else {
    _objc_release(uVar3);
  }
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (uVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar6 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar5);
    uVar4 = uVar3;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  puVar5 = PTR_PTR_1126b64b8;
  _objc_opt_class(PTR_PTR_1126b64b8);
  uVar6 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar5);
  uVar4 = uVar3;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar3);
  bVar1 = uVar4 != 0;
  if (uVar4 != 0) {
    uVar6 = uVar3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar6;
    _objc_release(uVar9);
    puVar5 = PTR_PTR_1126b0f10;
    _objc_alloc();
    func_0x00010c033440();
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107999518;
    puStack_88 = &UNK_110848218;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar3);
    uStack_80 = uVar4;
    _objc_retain(puVar5);
    puStack_78 = puVar5;
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    uVar6 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar8 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    uVar3 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x34;
    FUN_107cb507c(0x34,uVar6,uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(puStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar5);
  }
  _objc_release(uVar4);
LAB_1079994b4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107999518; end: 107999623;  */

void FUN_107999518(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf24ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c10fd00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    func_0x00010bfea000(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107999624; end: 10799964f;  */

void FUN_107999624(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107999650; end: 1079998b3; -[SCImpalaDiscoverShowProfileActionHandler _publicProfileDidFinishDismissing] */

void FUN_107999650(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c2604a0();
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (iVar1 == 0) {
    if ((uVar2 == 0) || (func_0x00010c2604a0(), (uVar2 & 1) != 0)) goto LAB_107999868;
    uVar5 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf009c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    FUN_107afb858(uVar5,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    if ((uVar6 != 0) && (uVar2 = uVar6, func_0x00010c080120(), (int)uVar2 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10a660(uVar4);
      goto LAB_107999850;
    }
  }
  else {
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf009c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    FUN_107afb858(uVar2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar6 != 0) && (uVar2 = uVar6, func_0x00010c080120(), (uVar2 & 1) == 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e620(uVar4);
LAB_107999850:
      _objc_release(puVar7);
      _objc_release(uVar4);
    }
  }
  _objc_release(uVar6);
LAB_107999868:
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf767a0();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079998b4; end: 1079998cb; -[SCImpalaDiscoverShowProfileActionHandler presentingViewController] */

void FUN_1079998b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079998cc; end: 1079998d7; -[SCImpalaDiscoverShowProfileActionHandler setPresentingViewController:] */

void FUN_1079998cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1079998d8; end: 1079998ef; -[SCImpalaDiscoverShowProfileActionHandler delegate] */

void FUN_1079998d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079998f0; end: 1079998fb; -[SCImpalaDiscoverShowProfileActionHandler setDelegate:] */

void FUN_1079998f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1079998fc; end: 10799995f; -[SCImpalaDiscoverShowProfileActionHandler .cxx_destruct] */

void FUN_1079998fc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107999960; end: 10799996b; +[SCImpalaPublisherProfileActionHandler announcerIdentifier] */

undefined ** FUN_107999960(void)

{
  return &PTR____CFConstantStringClassReference_110ea7898;
}



/* Entry: 10799996c; end: 107999973; -[SCImpalaPublisherProfileActionHandler addListener:] */

void FUN_10799996c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107999974; end: 10799997b; -[SCImpalaPublisherProfileActionHandler removeListener:] */

void FUN_107999974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10799997c; end: 107999a73; -[SCImpalaPublisherProfileActionHandler initWithSourcePageType:impalaProfilePresentHandler:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:] */

undefined1 *
FUN_10799997c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9038;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107999a74; end: 107999e7f; -[SCImpalaPublisherProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_107999a74(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  iVar3 = 0x10e1caf8;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if (iVar3 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_4);
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar4 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar4 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    if (uVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar7 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar6);
      uVar5 = uVar4;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    puVar6 = PTR_PTR_1126b64a0;
    _objc_opt_class(PTR_PTR_1126b64a0);
    uVar7 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar6);
    uVar5 = uVar4;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar4);
    bVar1 = uVar5 != 0;
    if (uVar5 != 0) {
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = uVar4;
      _objc_release(uVar11);
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar4 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar7);
      uVar8 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar9 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar6);
      uVar7 = uVar8;
      if ((uVar9 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar8);
      func_0x00010bf1f3c0(uVar7);
      _objc_release(uVar7);
      func_0x00010be7dcc0(param_1);
      uVar8 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar9 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar6);
      uVar7 = uVar8;
      if ((uVar9 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar8);
      if (uVar7 == 0) {
        bVar2 = false;
      }
      else {
        func_0x00010c067fc0();
        bVar2 = uVar8 == 0x13;
      }
      uVar8 = uVar4;
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0x34;
      if (bVar2) {
        FUN_107cb5478();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0d3c80();
        func_0x00010c1d0640();
        uVar10 = uVar12;
        func_0x00010bf51e00(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar12);
        uVar11 = uVar10;
      }
      else {
        FUN_107cb507c(0x34,uVar8,uVar9);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      _objc_opt_class();
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar12);
      _objc_release(param_1);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar4);
    }
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107999e80; end: 107999f5f; -[SCImpalaPublisherProfileActionHandler _presentProfileWithLaunchInfo:isPublicUserProfile:] */

void FUN_107999e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107999f60;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107999f60; end: 10799a097;  */

void FUN_107999f60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    func_0x00010c033440();
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf25140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c10fd00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    func_0x00010bfea000(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}


