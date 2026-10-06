/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0921b8; end: 10b09226b; -[SCDeckContainerDataSource deflateViewController] */

void FUN_10b0921b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  if ((*(char *)(param_1 + 0x41) == '\x01') &&
     (*(long *)(param_1 + 0x20) == 4 || *(long *)(param_1 + 0x20) == 2)) {
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b09226c;
    puStack_30 = &UNK_1108d8ce0;
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    lStack_28 = param_1;
    func_0x00010c150360((double)*(long *)(param_1 + 0x28),PTR__OBJC_CLASS___NSTimer_1126af1b0,
                        param_2,0,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10b09226c; end: 10b0922db;  */

void FUN_10b09226c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__preserveStateAndReleaseVCIfRele_11257d828);
  return;
}



/* Entry: 10b0922dc; end: 10b092357; -[SCDeckContainerDataSource _onAppDidBackground] */

void FUN_10b0922dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010be7fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__preserveStateAndReleaseVCIfRele_11257d828);
      return;
    }
  }
  return;
}



/* Entry: 10b092358; end: 10b0923d3; -[SCDeckContainerDataSource _onLowMemoryWarning] */

void FUN_10b092358(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010be7fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__preserveStateAndReleaseVCIfRele_11257d828);
      return;
    }
  }
  return;
}



/* Entry: 10b0923d4; end: 10b092433; -[SCDeckContainerDataSource _preserveStateAndReleaseVCIfReleasable] */

void FUN_10b0923d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x41) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar1;
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10b092434; end: 10b09243b; -[SCDeckContainerDataSource preserveStateBlock] */

undefined8 FUN_10b092434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b09243c; end: 10b092443; -[SCDeckContainerDataSource purgeBehavior] */

undefined8 FUN_10b09243c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b092444; end: 10b09244b; -[SCDeckContainerDataSource purgeDelay] */

undefined8 FUN_10b092444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b09244c; end: 10b092453; -[SCDeckContainerDataSource setPurgeDelay:] */

void FUN_10b09244c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b092454; end: 10b09245b; -[SCDeckContainerDataSource viewControllerReleasable] */

undefined1 FUN_10b092454(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}



/* Entry: 10b09245c; end: 10b0924af; -[SCDeckContainerDataSource .cxx_destruct] */

void FUN_10b09245c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0924b0; end: 10b0924c7; -[SCDeckContainerBlockObserver onUIWillDisappear:appearance:] */

void FUN_10b0924b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0924c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10b0924c8; end: 10b0924df; -[SCDeckContainerBlockObserver onUIDidDisappear:appearance:] */

void FUN_10b0924c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0924d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10b0924e0; end: 10b0924f7; -[SCDeckContainerBlockObserver onUIDidExitHierarchy:appearance:] */

void FUN_10b0924e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0924f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10b0924f8; end: 10b0924ff; -[SCDeckContainerBlockObserver onDidEnterHierarchy] */

undefined8 FUN_10b0924f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b092500; end: 10b092507; -[SCDeckContainerBlockObserver onWillAppear] */

undefined8 FUN_10b092500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b092508; end: 10b09250f; -[SCDeckContainerBlockObserver setOnWillAppear:] */

void FUN_10b092508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b092510; end: 10b092517; -[SCDeckContainerBlockObserver onDidAppear] */

undefined8 FUN_10b092510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b092518; end: 10b09251f; -[SCDeckContainerBlockObserver setOnDidAppear:] */

void FUN_10b092518(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b092520; end: 10b092527; -[SCDeckContainerBlockObserver onWillDisappear] */

undefined8 FUN_10b092520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b092528; end: 10b09252f; -[SCDeckContainerBlockObserver setOnWillDisappear:] */

void FUN_10b092528(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b092530; end: 10b092537; -[SCDeckContainerBlockObserver onDidDisappear] */

undefined8 FUN_10b092530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b092538; end: 10b09253f; -[SCDeckContainerBlockObserver setOnDidDisappear:] */

void FUN_10b092538(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b092540; end: 10b092547; -[SCDeckContainerBlockObserver onDidExitHierarchy] */

undefined8 FUN_10b092540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b092548; end: 10b0925a7; -[SCDeckContainerBlockObserver .cxx_destruct] */

void FUN_10b092548(long param_1)

{
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



/* Entry: 10b0925a8; end: 10b092617; -[SCDeckContainerLifecyleEventEmitter onWillAppear:] */

void FUN_10b0925a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df5f8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d44e0();
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010c126960(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b092618; end: 10b092687; -[SCDeckContainerLifecyleEventEmitter onDidAppear:] */

void FUN_10b092618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df5f8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d1f60();
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010c126960(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b092688; end: 10b0926f7; -[SCDeckContainerLifecyleEventEmitter onWillDisappear:] */

void FUN_10b092688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df5f8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d4500();
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010c126960(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0926f8; end: 10b092767; -[SCDeckContainerLifecyleEventEmitter onDidDisappear:] */

void FUN_10b0926f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df5f8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d1f80();
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010c126960(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b092768; end: 10b0927eb; -[SCDeckContainerLifecyleEventEmitter emitDidLeaveHierarchyWithAppearance:] */

void FUN_10b092768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10b0927ec;
  puStack_38 = &UNK_110cb66f0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be71660(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0927ec; end: 10b092847;  */

void FUN_10b0927ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0e7460(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b092848; end: 10b09284f; -[SCDeckContainersSharedService uiKitPresenterFactory] */

undefined8 FUN_10b092848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b092850; end: 10b092857; -[SCDeckContainersSharedService deckTransitionEventAnnouncer] */

undefined8 FUN_10b092850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b092858; end: 10b09285f; -[SCDeckContainersSharedService scPresentationPresenter] */

undefined8 FUN_10b092858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b092860; end: 10b092867; -[SCDeckContainersSharedService circumstanceEngine] */

undefined8 FUN_10b092860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b092868; end: 10b0928bb; -[SCDeckContainersSharedService .cxx_destruct] */

void FUN_10b092868(long param_1)

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



/* Entry: 10b0928bc; end: 10b09299b; -[SCNavigationItemImpl initWithViewController:page:pageInstanceId:deckContainer:] */

long FUN_10b0928bc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_3;
    _objc_retain(param_6);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126df5b8;
    _objc_alloc();
    func_0x00010c0025e0();
    _objc_release(param_6);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar3);
    *(undefined4 *)(param_1 + 8) = param_4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_5;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b09299c; end: 10b092a7b; -[SCNavigationItemImpl initWithLazyViewController:page:pageInstanceId:deckContainer:] */

long FUN_10b09299c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    _objc_retain(param_6);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126df5b8;
    _objc_alloc();
    func_0x00010c0025e0();
    _objc_release(param_6);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar3);
    *(undefined4 *)(param_1 + 8) = param_4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_5;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b092a7c; end: 10b092adf; -[SCNavigationItemImpl viewController] */

void FUN_10b092a7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar1);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b092ae0; end: 10b092b07; -[SCNavigationItemImpl lifecycleEvents] */

void FUN_10b092ae0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b092b08; end: 10b092b2f; -[SCNavigationItemImpl concreteLifecycleEventEmitter] */

void FUN_10b092b08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b092b30; end: 10b092b37; -[SCNavigationItemImpl onUIDidEnterHierarchyWithApperarance:] */

void FUN_10b092b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_emitDidEnterHierarchyWithAppeara_1125c1130);
  return;
}



/* Entry: 10b092b38; end: 10b092b3f; -[SCNavigationItemImpl onUIWillAppearWithAppearance:] */

void FUN_10b092b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_emitWillAppearWithAppearance__1125c1220);
  return;
}



/* Entry: 10b092b40; end: 10b092b47; -[SCNavigationItemImpl onUIDidAppearWithApperarance:] */

void FUN_10b092b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8ddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_emitDidAppearWithAppearance__1125c1120);
  return;
}



/* Entry: 10b092b48; end: 10b092b4f; -[SCNavigationItemImpl onUIWillDisappearWithAppearance:] */

void FUN_10b092b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_emitWillDisappearWithAppearance__1125c1228);
  return;
}



/* Entry: 10b092b50; end: 10b092b57; -[SCNavigationItemImpl onUIDidDisappearWithAppearance:] */

void FUN_10b092b50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_emitDidDisappearWithAppearance__1125c1128);
  return;
}



/* Entry: 10b092b58; end: 10b092b5f; -[SCNavigationItemImpl onUIDidExitHierarchyWithAppearance:] */

void FUN_10b092b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_emitDidLeaveHierarchyWithAppeara_1125c1138);
  return;
}



/* Entry: 10b092b60; end: 10b092b8f; -[SCNavigationItemImpl setViewController:] */

void FUN_10b092b60(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b092b90; end: 10b092b97; -[SCNavigationItemImpl page] */

undefined4 FUN_10b092b90(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b092b98; end: 10b092b9f; -[SCNavigationItemImpl pageInstanceId] */

undefined8 FUN_10b092b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b092ba0; end: 10b092bf3; -[SCNavigationItemImpl .cxx_destruct] */

void FUN_10b092ba0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b092bf4; end: 10b092cc7; -[SCNavigationItemsTracker initWithNavigationContainer:deckTransitionEventAnnouncer:] */

undefined1 *
FUN_10b092bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705548;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)((long)puVar1 + 8);
    _objc_loadWeakRetained(puVar4);
    func_0x00010c126960();
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b092cc8; end: 10b092ccf; -[SCNavigationItemsTracker setEmitEdgeTransitions:] */

void FUN_10b092cc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b092cd0; end: 10b092cf7; -[SCNavigationItemsTracker items] */

void FUN_10b092cd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b092cf8; end: 10b092ef3; -[SCNavigationItemsTracker onPushStartedWithItem:animated:] */

void FUN_10b092cf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if ((lVar2 == 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar11 = lVar2;
    func_0x00010c0f3b80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      lVar3 = lVar11;
      func_0x00010c08dfe0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0f0be0();
      _objc_release(lVar3);
      *(int *)(param_1 + 0x24) = (int)lVar4;
      if ((int)lVar4 != 0) {
        puVar5 = PTR_PTR_1126df5c0;
        _objc_alloc(PTR_PTR_1126df5c0);
        func_0x00010bff2e00();
        puVar9 = PTR_PTR_1126df5d0;
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        puVar6 = PTR_PTR_1126df5d8;
        _objc_alloc(PTR_PTR_1126df5d8);
        uVar1 = *(undefined4 *)(param_1 + 0x24);
        uVar7 = param_3;
        func_0x00010c0f0be0(param_3);
        uVar8 = param_3;
        func_0x00010c0f1360(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c039600(puVar6,param_2,uVar1,uVar7,0,puVar5,2,uVar8);
        func_0x00010c2a7020(puVar9,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar10,param_2,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(uVar8);
        _objc_release(puVar5);
      }
    }
    _objc_release(lVar11);
    _objc_release(lVar2);
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 != 1) {
    lVar11 = *(long *)(param_1 + 0x18);
    lVar2 = lVar11;
    func_0x00010bf529e0(lVar11);
    func_0x00010c0dfd40(lVar11,param_2,lVar2 + -2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeb440(param_1,param_2,lVar11,param_3,param_4,0,2);
    _objc_release(lVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b092ef4; end: 10b093173; -[SCNavigationItemsTracker onPushCompletedWithItem:animated:completed:] */

void FUN_10b092ef4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  puVar11 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 == 1) {
    if (((ulong)param_5 & 1) == 0) {
      func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x18));
      param_4 = puVar5;
      if (*(char *)(param_1 + 0x20) == '\x01') {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
    else {
      param_4 = puVar5;
      if ((*(char *)(param_1 + 0x20) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
        puVar10 = PTR_PTR_1126df5c0;
        _objc_alloc();
        func_0x00010bff2e00();
        puVar5 = PTR_PTR_1126df5d0;
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        puVar3 = PTR_PTR_1126df5d8;
        _objc_alloc();
        uVar1 = *(undefined4 *)(param_1 + 0x24);
        puVar11 = param_3;
        func_0x00010c0f0be0();
        puVar4 = param_3;
        func_0x00010c0f1360();
        _objc_retainAutoreleasedReturnValue();
        param_4 = (undefined *)0x0;
        func_0x00010c039600(puVar3,param_2,uVar1,puVar11,0,puVar10,2,puVar4);
        func_0x00010bf7dac0(puVar5,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0d9840(uVar9);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar4);
        goto LAB_10b093094;
      }
    }
  }
  else if (((ulong)param_5 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)(param_1 + 0x18);
    puVar11 = puVar10;
    func_0x00010bf529e0(puVar10);
    func_0x00010c0dfd40(puVar10,param_2,puVar11 + -2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    puVar11 = puVar10;
    func_0x00010be01400(param_1,param_2,puVar5,puVar10,param_4,1,2);
    _objc_release(puVar10);
    _objc_release(puVar5);
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    puVar10 = *(undefined **)(param_1 + 0x18);
    puVar11 = puVar10;
    func_0x00010bf529e0(puVar10);
    func_0x00010c0dfd40(puVar10,param_2,puVar11 + -2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    puVar11 = param_3;
    func_0x00010be01400(param_1,param_2,puVar5,param_3,param_4,0,2);
    _objc_release(puVar5);
LAB_10b093094:
    _objc_release(puVar10);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(param_3 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    return;
  }
  puVar5 = *(undefined **)(param_3 + 0x18);
  func_0x00010bf529e0();
  if (puVar5 != puVar7) {
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c089820(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)(param_3 + 0x18);
    puVar5 = puVar10;
    func_0x00010bf529e0(puVar10);
    func_0x00010c0dfd40(puVar10,param_2,puVar5 + ~(ulong)puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeb440(param_3,param_2,uVar9,puVar10,puVar11,1,param_4);
    goto LAB_10b0932fc;
  }
  if (param_3[0x20] != '\x01') {
    return;
  }
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c089820(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = (undefined *)(ulong)*(uint *)(param_3 + 0x24);
  if (*(uint *)(param_3 + 0x24) == 0) {
    puVar7 = param_3 + 8;
    _objc_loadWeakRetained();
    puVar5 = puVar7;
    func_0x00010c0f3b80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar10 = puVar5;
      func_0x00010c08dfe0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c0f0be0();
      _objc_release(puVar10);
      puVar3 = puVar5;
      func_0x00010c08dfe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c0f1360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar7);
      if ((int)puVar11 == 0) goto LAB_10b0932fc;
      goto LAB_10b0931e8;
    }
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = (undefined *)0x0;
LAB_10b0931e8:
    puVar7 = PTR_PTR_1126df5c0;
    _objc_alloc(PTR_PTR_1126df5c0);
    func_0x00010bff2e00();
    puVar5 = PTR_PTR_1126df5d0;
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    puVar3 = PTR_PTR_1126df5d8;
    _objc_alloc(PTR_PTR_1126df5d8);
    uVar6 = uVar9;
    func_0x00010c0f0be0(uVar9);
    func_0x00010c039600(puVar3,param_2,uVar6,puVar11,1,puVar7,param_4,puVar10);
    func_0x00010c2a7020(puVar5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar8,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
LAB_10b0932fc:
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 10b093174; end: 10b0933af; -[SCNavigationItemsTracker onPopStartedWithNumberOfItem:animated:interactionType:] */

void FUN_10b093174(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (uVar2 != param_3) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c089820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(param_1 + 0x18);
    puVar10 = puVar9;
    func_0x00010bf529e0(puVar9);
    func_0x00010c0dfd40(puVar9,param_2,puVar10 + ~param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeb440(param_1,param_2,uVar3,puVar9,param_4,1,param_5);
    goto LAB_10b0932fc;
  }
  if (*(char *)(param_1 + 0x20) != '\x01') {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c089820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)(ulong)*(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x24) == 0) {
    puVar5 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained();
    puVar6 = puVar5;
    func_0x00010c0f3b80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar9 = puVar6;
      func_0x00010c08dfe0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0f0be0();
      _objc_release(puVar9);
      puVar7 = puVar6;
      func_0x00010c08dfe0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c0f1360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      if ((int)puVar10 == 0) goto LAB_10b0932fc;
      goto LAB_10b0931e8;
    }
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)0x0;
LAB_10b0931e8:
    puVar5 = PTR_PTR_1126df5c0;
    _objc_alloc(PTR_PTR_1126df5c0);
    func_0x00010bff2e00();
    puVar6 = PTR_PTR_1126df5d0;
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    puVar7 = PTR_PTR_1126df5d8;
    _objc_alloc(PTR_PTR_1126df5d8);
    uVar4 = uVar3;
    func_0x00010c0f0be0(uVar3);
    func_0x00010c039600(puVar7,param_2,uVar4,puVar10,1,puVar5,param_5,puVar9);
    func_0x00010c2a7020(puVar6,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar8,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
LAB_10b0932fc:
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b0933b0; end: 10b09374f; -[SCNavigationItemsTracker onPopCompletedWithNumberOfItem:animated:interactionType:completed:] */

void FUN_10b0933b0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  puVar10 = param_3;
  func_0x00010bf529e0();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (puVar2 == param_3) {
      if (param_6 != 0) {
        if (*(char *)(param_1 + 0x20) == '\x01') {
          iVar8 = *(int *)(param_1 + 0x24);
          if (iVar8 == 0) {
            lVar1 = param_1 + 8;
            _objc_loadWeakRetained();
            lVar9 = lVar1;
            func_0x00010c0f3b80();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 == 0) {
              lVar7 = 0;
              iVar8 = 0;
            }
            else {
              lVar7 = lVar9;
              func_0x00010c08dfe0();
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar7;
              func_0x00010c0f0be0();
              iVar8 = (int)lVar3;
              _objc_release(lVar7);
              lVar3 = lVar9;
              func_0x00010c08dfe0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar3;
              func_0x00010c0f1360();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
            }
            _objc_release(lVar9);
            _objc_release(lVar1);
          }
          else {
            lVar7 = 0;
          }
          lVar1 = *(long *)(param_1 + 0x18);
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          if ((iVar8 != 0) && (lVar1 != 0)) {
            puVar4 = PTR_PTR_1126df5c0;
            _objc_alloc(PTR_PTR_1126df5c0);
            func_0x00010bff2e00();
            puVar2 = PTR_PTR_1126df5d0;
            uVar12 = *(undefined8 *)(param_1 + 0x10);
            puVar5 = PTR_PTR_1126df5d8;
            _objc_alloc();
            func_0x00010c0f0be0(lVar1);
            func_0x00010c039600();
            func_0x00010bf7dac0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar2;
            func_0x00010c0d9840(uVar12);
            _objc_release(puVar2);
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
          *(undefined4 *)(param_1 + 0x24) = 0;
          _objc_release(lVar1);
          _objc_release(lVar7);
        }
        puVar2 = *(undefined **)(param_1 + 0x18);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_removeAllObjects_112628590);
          return;
        }
        goto LAB_10b09374c;
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0x18);
      lVar1 = lVar9;
      func_0x00010bf529e0(lVar9);
      if ((param_6 & 1) != 0) {
        puVar10 = (undefined *)(lVar1 - (long)param_3);
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c25e980(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bf529e0(uVar11);
        func_0x00010c0dfd40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be01400(param_1);
        _objc_release(uVar11);
        puVar2 = *(undefined **)(param_1 + 0x18);
        func_0x00010c12d520();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(uVar12);
          return;
        }
        goto LAB_10b09374c;
      }
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c089820(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010be01400(param_1);
      _objc_release(uVar12);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
LAB_10b09374c:
  ___stack_chk_fail();
  lVar1 = *(long *)(puVar2 + 0x18);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_onPopStartedWithNumberOfItem_ani_1126170b8,lVar1 + -1,puVar10,2);
  return;
}



/* Entry: 10b093750; end: 10b093787; -[SCNavigationItemsTracker onPopToRootStartedWithAnimated:] */

void FUN_10b093750(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_onPopStartedWithNumberOfItem_ani_1126170b8,lVar1 + -1,param_3,2);
  return;
}



/* Entry: 10b093788; end: 10b0937cf; -[SCNavigationItemsTracker onPopToRootCompletedWithAnimated:completed:] */

void FUN_10b093788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e5a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_onPopCompletedWithNumberOfItem_a_1126170b0,lVar1 + -1,param_3,2,param_4);
  return;
}



/* Entry: 10b0937d0; end: 10b093977; -[SCNavigationItemsTracker _willTransitionFromItem:toItem:animated:eventType:interactionType:] */

void FUN_10b0937d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126df5c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff2e00();
  if (param_6 == 0) {
    uVar2 = param_4;
    func_0x00010bf45b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8de20();
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010bf45b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e200();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf45b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e1e0();
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126df5d0;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = PTR_PTR_1126df5d8;
  _objc_alloc(PTR_PTR_1126df5d8);
  uVar2 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_release(param_3);
  uVar4 = param_4;
  func_0x00010c0f0be0(param_4);
  uVar5 = param_4;
  func_0x00010c0f1360(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c039600(puVar3,param_2,uVar2,uVar4,param_6,puVar1,param_7,uVar5);
  func_0x00010c2a7020(puVar6,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b093978; end: 10b093c2f; -[SCNavigationItemsTracker _didTransitionFromItem:toItem:animated:eventType:interactionType:] */

void FUN_10b093978(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126df5c0;
  _objc_alloc();
  func_0x00010bff2e00();
  puVar2 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf45b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de00();
  _objc_release(puVar3);
  puVar4 = param_4;
  func_0x00010bf45b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dde0();
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126df5d0;
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  puVar5 = PTR_PTR_1126df5d8;
  _objc_alloc();
  puStack_138 = puVar2;
  func_0x00010c0f0be0();
  puVar4 = param_4;
  func_0x00010c0f0be0();
  puVar6 = param_4;
  func_0x00010c0f1360();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c039600(puVar5,param_2,puVar2,puVar4,param_6,puVar1,uStack_140,puVar6);
  func_0x00010bf7dac0(puVar3,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar12,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (param_6 == (undefined *)0x1) {
    puVar7 = param_3;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    param_6 = puVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_6);
    puVar4 = auStack_f0;
    puVar3 = param_6;
    func_0x00010bf52a60(param_6,param_2,&uStack_130,puVar4,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar13 = *plStack_120;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(param_6);
          }
          puVar7 = *(undefined **)(lStack_128 + (long)puVar14 * 8);
          func_0x00010bf45b60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8de40();
          _objc_release(puVar7);
          puVar14 = puVar14 + 1;
        } while (puVar3 != puVar14);
        puVar4 = auStack_f0;
        puVar3 = param_6;
        func_0x00010bf52a60(param_6,param_2,&uStack_130,puVar4,0x10);
        puVar6 = (undefined1 *)0x0;
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(param_6);
    _objc_release(param_6);
  }
  _objc_release(puStack_138);
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b093c30;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = puVar2;
  puStack_188 = puVar5;
  puStack_180 = puVar6;
  puStack_178 = param_6;
  puStack_170 = param_3;
  puStack_168 = puVar1;
  puStack_160 = param_4;
  puStack_158 = puVar7;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar9 = *(long *)(puVar3 + 0x18);
  _objc_retain(lVar9);
  puVar6 = auStack_218;
  lVar13 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_260,puVar6,0x10);
  if (lVar13 != 0) {
    lVar10 = *plStack_250;
    do {
      lVar11 = 0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        uVar12 = *(undefined8 *)(lStack_258 + lVar11 * 8);
        func_0x00010bf45b60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8de20();
        _objc_release(uVar12);
        lVar11 = lVar11 + 1;
      } while (lVar13 != lVar11);
      puVar6 = auStack_218;
      lVar13 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_260,puVar6,0x10);
    } while (lVar13 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar13 = *(long *)(puVar4 + 0x18);
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    uVar8 = *(undefined8 *)(puVar4 + 0x18);
    func_0x00010c089820(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf45b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e1e0();
    _objc_release(uVar12);
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10b093c30; end: 10b093d5b; -[SCNavigationItemsTracker onUIDidEnterHierarchy:appearance:] */

void FUN_10b093c30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar5);
  puVar4 = auStack_d8;
  lVar2 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_120,puVar4,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x00010bf45b60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8de20();
        _objc_release(uVar1);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar4 = auStack_d8;
      lVar2 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_120,puVar4,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar2 = *(long *)(param_4 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x18);
    func_0x00010c089820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf45b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e1e0();
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b093d5c; end: 10b093dd7; -[SCNavigationItemsTracker onUIWillAppear:appearance:] */

void FUN_10b093d5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf45b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e1e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b093dd8; end: 10b093e53; -[SCNavigationItemsTracker onUIDidAppear:appearance:] */

void FUN_10b093dd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf45b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dde0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b093e54; end: 10b093ecf; -[SCNavigationItemsTracker onUIWillDisappear:appearance:] */

void FUN_10b093e54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf45b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e200();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b093ed0; end: 10b093f4b; -[SCNavigationItemsTracker onUIDidDisappear:appearance:] */

void FUN_10b093ed0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf45b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8de00();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b093f4c; end: 10b0940a7; -[SCNavigationItemsTracker onUIDidExitHierarchy:appearance:] */

ulong FUN_10b093f4c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00010bf45b60(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8de40();
        _objc_release(uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_4;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(param_4 + 0x20);
}



/* Entry: 10b0940a8; end: 10b0940af; -[SCNavigationItemsTracker emitEdgeTransitions] */

undefined1 FUN_10b0940a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10b0940b0; end: 10b0940e7; -[SCNavigationItemsTracker .cxx_destruct] */

void FUN_10b0940b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b0940e8; end: 10b09419f; +[SCOperaDeckContainerImpl operaDeckContainerWithConfig:presenter:parentContainer:] */

void FUN_10b0940e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126df600;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf21f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0f0be0(uVar2);
  func_0x00010c038b40(puVar1,param_2,param_4,param_5,uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0941a0; end: 10b0942b7; -[SCOperaDeckContainerImpl initWithPresenter:parentContainer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0941a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = 0;
  func_0x00010b0a43e0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x00010b0a43e0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf66900(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_112705550;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPresenter_parentContaine_1125415f8,param_3,param_4,
                      uVar1,uVar2,param_5,uVar4);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11278c508;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 10b0942b8; end: 10b0942c7; -[SCOperaDeckContainerImpl startAnimatedPresentationWithViewController:completion:] */

void FUN_10b0942b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_activateWithViewController_anima_1125999e0,param_3,1,param_4,0);
  return;
}



/* Entry: 10b0942c8; end: 10b0942d7; -[SCOperaDeckContainerImpl cancelAnimatedPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0942c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c508),PTR_s_cancelAnimatedPresentation_1125a9118);
  return;
}



/* Entry: 10b0942d8; end: 10b0942e7; -[SCOperaDeckContainerImpl completeAnimatedPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0942d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf437f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c508),PTR_s_completeAnimatedPresentation_1125ae7a0)
  ;
  return;
}



/* Entry: 10b0942e8; end: 10b0943f3; -[SCOperaDeckContainerImpl startAnimatedDismissalWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0942e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c2a6500(*(undefined8 *)(param_1 + _DAT_11278c508));
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f3b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010beeff40(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0943f4; end: 10b094457;  */

void FUN_10b0943f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be8a5c0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b094444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10b094458; end: 10b094467; -[SCOperaDeckContainerImpl cancelAnimatedDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b094458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c508),PTR_s_cancelAnimatedDismissal_1125a9110);
  return;
}



/* Entry: 10b094468; end: 10b094477; -[SCOperaDeckContainerImpl completeAnimatedDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b094468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf437d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c508),PTR_s_completeAnimatedDismissal_1125ae798);
  return;
}



/* Entry: 10b094478; end: 10b09447f; -[SCOperaDeckContainerImpl _releaseVisibleViewController] */

void FUN_10b094478(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisibleViewController__112666970,0);
  return;
}



/* Entry: 10b094480; end: 10b094493; -[SCOperaDeckContainerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b094480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c508,0);
  return;
}



/* Entry: 10b094494; end: 10b0944cb; -[SCOperaDeckPresenter initWithPresentingVC:] */

long FUN_10b094494(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 8,param_3);
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  return param_1;
}



/* Entry: 10b0944cc; end: 10b09450f; -[SCOperaDeckPresenter cancelAnimatedPresentation] */

void FUN_10b0944cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10b094510; end: 10b094553; -[SCOperaDeckPresenter completeAnimatedPresentation] */

void FUN_10b094510(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10b094554; end: 10b0945a3; -[SCOperaDeckPresenter cancelAnimatedDismissal] */

void FUN_10b094554(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b0945a4; end: 10b0945f3; -[SCOperaDeckPresenter completeAnimatedDismissal] */

void FUN_10b0945a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b0945f4; end: 10b0945f7; -[SCOperaDeckPresenter present:usingStyle:] */

void FUN_10b0945f4(void)

{
  return;
}



/* Entry: 10b0945f8; end: 10b094653; -[SCOperaDeckPresenter present:usingStyle:completion:] */

void FUN_10b0945f8(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_retain(in_x4);
  _objc_release(uVar2);
  uVar2 = in_x4;
  func_0x00010bf51e00();
  _objc_release(in_x4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b094654; end: 10b09467b; -[SCOperaDeckPresenter presentInteractively:usingStyle:completion:] */

undefined8 FUN_10b094654(void)

{
  long in_x4;
  
  if (in_x4 != 0) {
    (**(code **)(in_x4 + 0x10))(in_x4,0);
  }
  return 0;
}



/* Entry: 10b09467c; end: 10b094707; -[SCOperaDeckPresenter dismissViewControllerWithCompletion:] */

void FUN_10b09467c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_retain(param_3);
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010bf51e00();
    _objc_release(param_3);
    param_3 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
  }
  else {
    pcVar2 = *(code **)(param_3 + 0x10);
    _objc_retain(param_3);
    (*pcVar2)(param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b094708; end: 10b09472f; -[SCOperaDeckPresenter dismissInteractivelyWithCompletion:] */

undefined8 FUN_10b094708(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  return 0;
}



/* Entry: 10b094730; end: 10b094737; -[SCOperaDeckPresenter willHandleTransitionAnimationForVC:] */

undefined8 FUN_10b094730(void)

{
  return 1;
}



/* Entry: 10b094738; end: 10b094743; -[SCOperaDeckPresenter willExplicitlyDismiss] */

void FUN_10b094738(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b094744; end: 10b09475b; -[SCOperaDeckPresenter loggingObserver] */

void FUN_10b094744(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09475c; end: 10b094763; -[SCOperaDeckPresenter useUIKitPresentation] */

undefined1 FUN_10b09475c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10b094764; end: 10b0947a3; -[SCOperaDeckPresenter .cxx_destruct] */

void FUN_10b094764(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b0947a4; end: 10b09483b;  */

void FUN_10b0947a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df608;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  func_0x00010c038aa0(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b09483c; end: 10b094883;  */

void FUN_10b09483c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df618;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c038ce0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b094884; end: 10b094887; -[SCRootContainer dismissUntilWithAnimated:completion:] */

void FUN_10b094884(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activateWithAnimation_completion_112599978);
  return;
}



/* Entry: 10b094888; end: 10b094913; -[SCRootContainer onUIWillAppear:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b094888(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112705558;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_onUIWillAppear_appearance__112617738);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278c52c);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}


