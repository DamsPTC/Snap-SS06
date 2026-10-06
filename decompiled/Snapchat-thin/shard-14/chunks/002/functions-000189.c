/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b097e8c; end: 10b097e9b; -[SCTabBarContainer dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b097e8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c5bc);
}



/* Entry: 10b097e9c; end: 10b097eab; -[SCTabBarContainer navigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b097e9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c5cc);
}



/* Entry: 10b097eac; end: 10b097eeb; -[SCTabBarContainer setNavigationBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278c5cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b097eec; end: 10b097efb; -[SCTabBarContainer tabContainers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b097eec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c5c0);
}



/* Entry: 10b097efc; end: 10b097f6f; -[SIGTabBarItemContainer presentAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278c5d4;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10ee20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b097f70; end: 10b097fcf; -[SIGTabBarItemContainer presentInteractively] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b097f70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11278c5d4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b097fd0; end: 10b09802b; -[SIGTabBarItemContainer canLoadVisibleViewController] */

bool FUN_10b097fd0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar1 = param_1 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b09802c; end: 10b09805f; -[SIGTabBarItemContainer onUIDidDisappear:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09802c(long param_1)

{
  func_0x00010bf6ad40(*(undefined8 *)(param_1 + _DAT_11278c5dc));
                    /* WARNING: Could not recover jumptable at 0x00010c223d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisibleViewController__112666970,0);
  return;
}



/* Entry: 10b098060; end: 10b09806f; -[SIGTabBarItemContainer deflateViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b098060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c5dc),PTR_s_deflateViewController_1125b84f8);
  return;
}



/* Entry: 10b098070; end: 10b09807f; -[SIGTabBarItemContainer apparentElevation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b098070(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c584);
}



/* Entry: 10b098080; end: 10b09810f; -[SIGTabBarItemContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b098080(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278c5d0,0);
  _objc_storeStrong(param_1 + _DAT_11278c5e0,0);
  _objc_storeStrong(param_1 + _DAT_11278c5dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278c5d4);
  return;
}



/* Entry: 10b098110; end: 10b098157; -[SCTabBarContainerDataSource viewControllerAtIndex:] */

void FUN_10b098110(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfed820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b098158; end: 10b09818b; -[SCTabBarContainerDataSource deflateViewControllerAtIndex:] */

void FUN_10b098158(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ad40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b09818c; end: 10b098193; -[SCTabBarContainerDataSource numberOfTabs] */

void FUN_10b09818c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10b098194; end: 10b09819f; -[SCTabBarContainerDataSource .cxx_destruct] */

void FUN_10b098194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0981a0; end: 10b09820f; -[SCTabBarItemContainerDataSource initWithBuilder:preserveStateBlock:purgeBehavior:purgeDelay:tabBarItemContainer:] */

long FUN_10b0981a0(long param_1,undefined8 param_2)

{
  undefined8 in_x5;
  
  func_0x00010bff9980();
  if (param_1 != 0) {
    func_0x00010c1e5d80(param_1,param_2,in_x5);
  }
  return param_1;
}



/* Entry: 10b098210; end: 10b098213; -[SCEmptyPresenter present:usingStyle:] */

void FUN_10b098210(void)

{
  return;
}



/* Entry: 10b098214; end: 10b098217; -[SCEmptyPresenter present:usingStyle:completion:] */

void FUN_10b098214(void)

{
  return;
}



/* Entry: 10b098218; end: 10b09821f; -[SCEmptyPresenter presentInteractively:usingStyle:completion:] */

undefined8 FUN_10b098218(void)

{
  return 0;
}



/* Entry: 10b098220; end: 10b098223; -[SCEmptyPresenter dismissViewControllerWithCompletion:] */

void FUN_10b098220(void)

{
  return;
}



/* Entry: 10b098224; end: 10b09822b; -[SCEmptyPresenter dismissInteractivelyWithCompletion:] */

undefined8 FUN_10b098224(void)

{
  return 0;
}



/* Entry: 10b09822c; end: 10b098233; -[SCEmptyPresenter willHandleTransitionAnimationForVC:] */

undefined8 FUN_10b09822c(void)

{
  return 1;
}



/* Entry: 10b098234; end: 10b09824b; -[SCEmptyPresenter loggingObserver] */

void FUN_10b098234(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09824c; end: 10b098253; -[SCEmptyPresenter useUIKitPresentation] */

undefined1 FUN_10b09824c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b098254; end: 10b09825b; -[SCEmptyPresenter .cxx_destruct] */

void FUN_10b098254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10b09825c; end: 10b09849b; -[SCUIKitRootContainer initWithBaseViewController:initialPage:transitionEventAnnouncer:currentPageTracker:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b09825c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126df620;
  _objc_alloc();
  func_0x00010c055460();
  puVar2 = PTR_PTR_1126df698;
  _objc_opt_new(PTR_PTR_1126df698);
  puVar3 = puVar2;
  func_0x000107c2bd4c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000107c2bd4c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126df628;
  _objc_alloc(PTR_PTR_1126df628);
  puVar6 = PTR_PTR_1126df630;
  _objc_alloc_init(PTR_PTR_1126df630);
  func_0x00010c009840(puVar5);
  puStack_68 = PTR_PTR_1127055a0;
  puVar7 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar7,PTR_s_initWithPresenter_parentContaine_1125415f8,puVar2,0,puVar3,puVar4
                      ,param_4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 != (undefined8 *)0x0) {
    uVar9 = param_3;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar7 + (long)_DAT_11278c5f0);
    *(undefined8 *)((long)puVar7 + (long)_DAT_11278c5f0) = uVar9;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar7 + (long)_DAT_11278c5f4);
    *(undefined **)((long)puVar7 + (long)_DAT_11278c5f4) = puVar3;
    _objc_release(uVar9);
    _objc_storeWeak((long)puVar7 + (long)_DAT_11278c5f8,param_3);
    func_0x00010c21dc20(puVar7);
    func_0x00010be59f00(puVar7);
    puVar3 = PTR_PTR_1126df640;
    _objc_alloc();
    func_0x00010c026440();
    uVar9 = *(undefined8 *)((long)puVar7 + (long)_DAT_11278c5fc);
    *(undefined **)((long)puVar7 + (long)_DAT_11278c5fc) = puVar3;
    _objc_release(uVar9);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b09849c; end: 10b0984af; -[SCUIKitRootContainer initWithBaseViewController:transitionEventAnnouncer:currentPageTracker:circumstanceEngine:] */

void FUN_10b09849c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff72f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithBaseViewController_initi_1125db680,param_3,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 10b0984b0; end: 10b0984b3; -[SCUIKitRootContainer setVisibleViewController:] */

void FUN_10b0984b0(void)

{
  return;
}



/* Entry: 10b0984b4; end: 10b0984d3; -[SCUIKitRootContainer visibleViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0984b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278c5f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0984d4; end: 10b0984d7; -[SCUIKitRootContainer dismissUntilWithAnimated:completion:] */

void FUN_10b0984d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activateWithAnimation_completion_112599978);
  return;
}



/* Entry: 10b0984d8; end: 10b0984eb; -[SCUIKitRootContainer prepareForNoninteractiveBranchChangeTransitionFromContainer:toContainer:readyBlock:] */

void FUN_10b0984d8(void)

{
  long in_x4;
  
  if (in_x4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0984e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x4 + 0x10))(in_x4);
    return;
  }
  return;
}



/* Entry: 10b0984ec; end: 10b0985a7; -[SCUIKitRootContainer _logTransitionEventsForAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0984ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c5f0);
  _objc_retain(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b0985a8;
  puStack_40 = &UNK_110cb6830;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c25ff60(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b0985a8; end: 10b098663;  */

void FUN_10b0985a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c1a00(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b098664; end: 10b09866b;  */

void FUN_10b098664(void)

{
  return;
}



/* Entry: 10b09866c; end: 10b09868b; -[SCUIKitRootContainer delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09866c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278c600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09868c; end: 10b09869f; -[SCUIKitRootContainer setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09868c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278c600,param_3);
  return;
}



/* Entry: 10b0986a0; end: 10b098707; -[SCUIKitRootContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0986a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278c600);
  _objc_destroyWeak(param_1 + _DAT_11278c5f8);
  _objc_storeStrong(param_1 + _DAT_11278c5f0,0);
  _objc_storeStrong(param_1 + _DAT_11278c5fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c5f4,0);
  return;
}



/* Entry: 10b098708; end: 10b09876f;  */

void FUN_10b098708(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f3b80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be03980(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b09876c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b098770; end: 10b09884f; -[SCDeckContainerBranchChangeTransition performInteractivelyWithCompletion:] */

void FUN_10b098770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010c2a6860(uVar1,param_2,uVar1,uVar2,1,1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b098850;
  puStack_50 = &UNK_110866910;
  uStack_48 = uVar1;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010be71f40(param_1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b098850; end: 10b0988a7;  */

void FUN_10b098850(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf78380(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),1,1,param_2);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b098898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10b0988a8; end: 10b098acb; -[SCDeckContainerBranchChangeTransition _performInteractivelyWithCompletion:] */

void FUN_10b0988a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126df5c0;
  _objc_alloc();
  func_0x00010bff2e00();
  func_0x00010bf18fc0(param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b098acc;
  puStack_60 = &UNK_110866910;
  lStack_58 = param_1;
  _objc_retain(puVar1);
  ppuVar2 = &puStack_78;
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x20);
    _objc_opt_respondsToSelector(uVar5,PTR_s_loadVisibleViewController_112604c18);
    if ((uVar5 & 1) != 0) {
      func_0x00010c09c820(*(undefined8 *)(param_1 + 0x20));
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) goto LAB_10b098964;
    }
    (*(code *)ppuVar2[2])(ppuVar2,0);
    uVar7 = 0;
    goto LAB_10b098a90;
  }
LAB_10b098964:
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c10fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c290d00();
    _objc_release(uVar4);
    if ((int)uVar7 == 0) goto LAB_10b0989c0;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c10fa00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf83bc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_10b0989c0:
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a0180(uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar6 = uVar4;
      func_0x000107c2bd4c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10c880(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
    else {
      func_0x00010c10c880(uVar7);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(uVar4);
LAB_10b098a90:
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(puVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10b098acc; end: 10b098b17;  */

void FUN_10b098acc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf95ba0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),1,param_2);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b098b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 10b098b18; end: 10b098bb3; -[SCDeckContainerBranchChangeTransition _shouldRecoverCompletedDismissalAfterIncompleteTransition] */

bool FUN_10b098b18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c10fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c290d00();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x00010c2a0180(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        return lVar3 != 0;
      }
    }
  }
  return false;
}



/* Entry: 10b098bb4; end: 10b098c57; -[SCDeckContainerInactiveBranchChangeTransition initByConnectingChild:to:] */

undefined1 *
FUN_10b098bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127055b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b098c58; end: 10b098c9f; -[SCDeckContainerInactiveBranchChangeTransition performAnimated:withCompletion:] */

void FUN_10b098c58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c17c320(*(undefined8 *)(param_1 + 8));
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b098ca0; end: 10b098cef; -[SCDeckContainerInactiveBranchChangeTransition performInteractivelyWithCompletion:] */

undefined8 FUN_10b098ca0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c17c320(*(undefined8 *)(param_1 + 8));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  _objc_release(param_3);
  return 0;
}



/* Entry: 10b098cf0; end: 10b098d1f; -[SCDeckContainerInactiveBranchChangeTransition .cxx_destruct] */

void FUN_10b098cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b098d20; end: 10b098d37; -[SCDeckContainerNOOPTransition performAnimated:withCompletion:] */

void FUN_10b098d20(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b098d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x3 + 0x10))(in_x3,0);
    return;
  }
  return;
}



/* Entry: 10b098d38; end: 10b098d5f; -[SCDeckContainerNOOPTransition performInteractivelyWithCompletion:] */

undefined8 FUN_10b098d38(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  return 0;
}



/* Entry: 10b098d60; end: 10b098dd3; -[SCDeckContainerReactivateCurrentTransition initWithContainer:] */

undefined1 * FUN_10b098d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127055b8;
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



/* Entry: 10b098dd4; end: 10b098ddf; -[SCDeckContainerReactivateCurrentTransition performAnimated:withCompletion:] */

void FUN_10b098dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08e010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_leafAskedToActivateButAlreadyAct_112601210,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b098de0; end: 10b098e03; -[SCDeckContainerReactivateCurrentTransition performInteractivelyWithCompletion:] */

undefined8 FUN_10b098de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c08e000(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 8),param_3);
  return 0;
}



/* Entry: 10b098e04; end: 10b098e0f; -[SCDeckContainerReactivateCurrentTransition .cxx_destruct] */

void FUN_10b098e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b098e10; end: 10b098ef3; -[SCTransitionProperties initWithPresentingTransitionPropertiesWithContainer:presenter:animated:completion:] */

undefined1 *
FUN_10b098e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127055c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b098ef4; end: 10b098efb; -[SCTransitionProperties setCustomChildTransitioner:] */

void FUN_10b098ef4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b098efc; end: 10b098f2b; -[SCTransitionProperties setDeckContainer:] */

void FUN_10b098efc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b098f2c; end: 10b098f5b; -[SCTransitionProperties setPresenter:] */

void FUN_10b098f2c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b098f5c; end: 10b098f8b; -[SCTransitionProperties setStyle:] */

void FUN_10b098f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b098f8c; end: 10b098f93; -[SCTransitionProperties setAnimated:] */

void FUN_10b098f8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b098f94; end: 10b098f9b; -[SCTransitionProperties setCompletion:] */

void FUN_10b098f94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b098f9c; end: 10b099047; -[SCDeckContainerTransitioner performPresentingTransitionWithContainer:presenter:animated:completion:] */

void FUN_10b098f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df6c0;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038dc0();
  _objc_release(param_4);
  func_0x00010be72c00(param_1,param_2,puVar1,param_3,param_6);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b099048; end: 10b099127; -[SCDeckContainerTransitioner performPresentingTransitionInteractivelyWithContainer:presenter:customDismissalStyle:completion:] */

void FUN_10b099048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + 0x20) = 1;
  func_0x000107c2bcf8(param_3,param_4,*(undefined8 *)(param_1 + 0x18),param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c0f8980(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b099128; end: 10b099137;  */

void FUN_10b099128(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleInteractiveTransitionComp_112568530,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10b099138; end: 10b099217; -[SCDeckContainerTransitioner performCustomChildTransitionInteractivelyWithContainer:presenter:style:completion:] */

void FUN_10b099138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + 0x20) = 1;
  func_0x000107c2bcfc(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c0f8980(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b099218; end: 10b099227;  */

void FUN_10b099218(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleInteractiveTransitionComp_112568530,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10b099228; end: 10b099273;  */

void FUN_10b099228(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf43fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be32440(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b099274; end: 10b0992a7; -[SCDeckContainerTransitioner _handleInteractiveTransitionCompletion:completed:] */

void FUN_10b099274(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,param_4);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b0992a8; end: 10b0992ef; -[SCDeckContainerTransitioner _logMetricIfQueueHasMoreThanOneEntryWithContainer:] */

void FUN_10b0992a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b09ad98(*(undefined8 *)(param_1 + 0x10),param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0992f0; end: 10b099327; -[SCDeckContainerTransitioner isTransitionInProgress] */

byte FUN_10b0992f0(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 0x20);
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 10b099328; end: 10b09932f; -[SCDeckContainerTransitioner clearInteractiveTransitionState] */

void FUN_10b099328(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b099330; end: 10b09936b; -[SCDeckContainerTransitioner .cxx_destruct] */

void FUN_10b099330(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b09936c; end: 10b0993c7; -[SCDeckUIKitModalContainerFactoryImpl modalUIContainerForPresentingVC:animated:] */

void FUN_10b09936c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0993c8; end: 10b099457; -[SCDeckUIKitPresenterFactoryImpl modalPresenterWithPresentingVC:presentationDirection:disableHandlingTranitionAnimation:modalPresentationStyle:] */

void FUN_10b0993c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df6c8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126df6d0;
  _objc_alloc(PTR_PTR_1126df6d0);
  func_0x00010c038e80();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b099458; end: 10b0994e3; -[SCModalPresenter initWithPresentingVC:presentationDirection:disableHandlingTranitionAnimation:modalContainerFactory:modalPresentationStyle:] */

long FUN_10b099458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 0x10,param_3);
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined8 *)(param_1 + 0x28) = param_4;
    *(undefined1 *)(param_1 + 0x30) = param_5;
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x48) = param_7;
  }
  _objc_release(param_6);
  return param_1;
}



/* Entry: 10b0994e4; end: 10b0994eb; -[SCModalPresenter present:usingStyle:] */

void FUN_10b0994e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_present_usingStyle_completion__1126205c0,param_3,param_4,0);
  return;
}



/* Entry: 10b0994ec; end: 10b0996ab; -[SCModalPresenter present:usingStyle:completion:] */

void FUN_10b0994ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 8) == 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      uVar3 = param_1 + 0x10;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c06d1a0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((uVar5 & 1) == 0) goto LAB_10b09953c;
    }
    func_0x00010be3b540(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf8b160(param_4);
    func_0x00010c0cfc60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar7;
    _objc_release(uVar6);
    _objc_release(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_5);
    func_0x00010bf0c9a0(uVar7);
    _objc_release(param_5);
  }
  else {
LAB_10b09953c:
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0996ac; end: 10b0996c3;  */

void FUN_10b0996ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0996bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10b0996c4; end: 10b09986f; -[SCModalPresenter presentInteractively:usingStyle:completion:] */

void FUN_10b0996c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(long *)(param_1 + 8) == 0) &&
     (func_0x00010be3b540(param_1), *(long *)(param_1 + 0x38) != 0)) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf8b160(param_4);
    func_0x00010c038f40();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_5);
    func_0x00010be2ae60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
    param_1 = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b099870; end: 10b0998d3;  */

void FUN_10b099870(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bddf3e0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0998c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10b0998d4; end: 10b0999f3; -[SCModalPresenter dismissInteractivelyWithCompletion:] */

void FUN_10b0998d4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    param_1 = 0;
  }
  else {
    func_0x00010be3b520(param_1);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010be2ae60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0999f4; end: 10b099a57;  */

void FUN_10b0999f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bddf3e0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b099a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10b099a58; end: 10b099b3f; -[SCModalPresenter dismissViewControllerWithCompletion:] */

void FUN_10b099a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf3b5c0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010be3b520(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b099b40; end: 10b099b8f;  */

void FUN_10b099b40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bddf3e0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b099b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10b099b90; end: 10b099baf; -[SCModalPresenter willHandleTransitionAnimationForVC:] */

bool FUN_10b099b90(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return false;
  }
  return *(long *)(param_1 + 0x48) == 0;
}



/* Entry: 10b099bb0; end: 10b099bb7; -[SCModalPresenter setHorizontalFlowDirection:] */

void FUN_10b099bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setHorizontalFlowDirection__112647e70);
  return;
}



/* Entry: 10b099bb8; end: 10b099bbf; -[SCModalPresenter clearInteractiveTransitionState] */

void FUN_10b099bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_clearInteractiveTransitionState_1125ac718);
  return;
}



/* Entry: 10b099bc0; end: 10b099bf7; -[SCModalPresenter interactiveTransitionEndedWithDidComplete:] */

void FUN_10b099bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b099bf8; end: 10b099c53; -[SCModalPresenter _initializeForPresentationWithVC:] */

void FUN_10b099bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_3);
  func_0x00010be5e260(param_1);
  func_0x00010bea5b20(param_1);
  func_0x00010be5df60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b099c54; end: 10b099c8b; -[SCModalPresenter _initializeForDismissal] */

void FUN_10b099c54(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5e240(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b099c8c; end: 10b099ccf; -[SCModalPresenter _cleanup] */

void FUN_10b099c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be5e200(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b099cd0; end: 10b099d3b; -[SCModalPresenter _maybeCreateTransitionDelegateForVC:] */

void FUN_10b099cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c2a65e0(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126df6d8;
    _objc_alloc();
    func_0x00010c038920();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b20(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b099d3c; end: 10b099ea3; -[SCModalPresenter _handleInteractiveTransitionWithIsPresenting:vcToPresent:uiContainer:completion:] */

void FUN_10b099d3c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar1;
  _objc_release(uVar6);
  func_0x00010c0e4a20(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
  if (param_3 == 0) {
    func_0x00010bf6f440(param_5);
  }
  else {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      uVar3 = param_1 + 0x10;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c06d1a0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((uVar5 & 1) == 0) {
        if (param_6 != 0) {
          (**(code **)(param_6 + 0x10))(param_6,0);
        }
        uVar6 = 0;
        goto LAB_10b099e6c;
      }
    }
    func_0x00010bf0c9a0(param_5);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
LAB_10b099e6c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10b099ea4; end: 10b099eb3; -[SCModalPresenter _setModalPresentationStyleForFullScreenVC:] */

void FUN_10b099ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c8b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_setModalPresentationStyle__11264fd08,*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10b099eb4; end: 10b099ef7; -[SCModalPresenter _maybeSetDeckPresentedForVC:] */

void FUN_10b099eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2a65e0(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    func_0x00010c18a260(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b099ef8; end: 10b099f3b; -[SCModalPresenter _maybeSetDeckDismissalForVC:] */

void FUN_10b099ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2a65e0(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    func_0x00010c18a220(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b099f3c; end: 10b099f7f; -[SCModalPresenter _maybeResetDeckPresentationPropsForVC:] */

void FUN_10b099f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2a65e0(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    func_0x00010c138840(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b099f80; end: 10b099f97; -[SCModalPresenter loggingObserver] */

void FUN_10b099f80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b099f98; end: 10b099f9f; -[SCModalPresenter useUIKitPresentation] */

undefined1 FUN_10b099f98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 10b099fa0; end: 10b099fff; -[SCModalPresenter .cxx_destruct] */

void FUN_10b099fa0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b09a000; end: 10b09a07f; -[SCNavigationPresenter initWithPresentingVC:modalPresenter:deckContainer:] */

long FUN_10b09a000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x21) = 1;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_4;
    _objc_retain(param_5);
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x18,param_5);
    _objc_release(param_5);
  }
  _objc_release(param_4);
  return param_1;
}


