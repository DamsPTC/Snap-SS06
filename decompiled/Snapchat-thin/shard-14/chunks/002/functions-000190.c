/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b09a080; end: 10b09a087; -[SCNavigationPresenter present:usingStyle:] */

void FUN_10b09a080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_present_usingStyle_completion__1126205c0,param_3,param_4,0);
  return;
}



/* Entry: 10b09a088; end: 10b09a233; -[SCNavigationPresenter present:usingStyle:completion:] */

void FUN_10b09a088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_initWeak(auStack_48,param_1);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    func_0x00010bea90a0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b09a234;
    puStack_60 = &UNK_110849380;
    puVar2 = auStack_50;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c10ae80(uVar1);
    uVar1 = uStack_58;
  }
  else {
    puVar2 = auStack_80;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_5);
    func_0x00010c10ae80(lVar3);
    uVar1 = param_5;
  }
  _objc_release(uVar1);
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b09a234; end: 10b09a2bb;  */

void FUN_10b09a234(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b09a2bc; end: 10b09a483; -[SCNavigationPresenter presentInteractively:usingStyle:completion:] */

void FUN_10b09a2bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_initWeak(auStack_48,param_1);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    func_0x00010bea90a0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b09a484;
    puStack_60 = &UNK_110849380;
    puVar2 = auStack_50;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c10c880(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_58;
  }
  else {
    puVar2 = auStack_80;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_5);
    func_0x00010c10c880(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
  }
  _objc_release(uVar1);
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b09a484; end: 10b09a50b;  */

void FUN_10b09a484(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b09a50c; end: 10b09a5fb; -[SCNavigationPresenter dismissInteractivelyWithCompletion:] */

void FUN_10b09a50c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf83bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09a5fc; end: 10b09a63f;  */

void FUN_10b09a5fc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b09a640; end: 10b09a71f; -[SCNavigationPresenter dismissViewControllerWithCompletion:] */

void FUN_10b09a640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf84ba0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b09a720; end: 10b09a763;  */

void FUN_10b09a720(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b09a764; end: 10b09a76b; -[SCNavigationPresenter willHandleTransitionAnimationForVC:] */

void FUN_10b09a764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a65f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_willHandleTransitionAnimationFor_1126873a0);
  return;
}



/* Entry: 10b09a76c; end: 10b09a773; -[SCNavigationPresenter setHorizontalFlowDirection:] */

void FUN_10b09a76c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setHorizontalFlowDirection__112647e70);
  return;
}



/* Entry: 10b09a774; end: 10b09a77f; -[SCNavigationPresenter clearInteractiveTransitionState] */

void FUN_10b09a774(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf3b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clearInteractiveTransitionState_1125ac718);
  return;
}



/* Entry: 10b09a780; end: 10b09a79b; -[SCNavigationPresenter _handleTransitionCompletion:completed:] */

void FUN_10b09a780(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b09a794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,param_4);
    return;
  }
  return;
}



/* Entry: 10b09a79c; end: 10b09a8bb; -[SCNavigationPresenter _setUpContainerViewControllerWithVC:] */

void FUN_10b09a79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ce4d0;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f3b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dba0(uVar4,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c2bd4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ae80(uVar4,param_2,param_3,puVar1,0);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b09a8bc; end: 10b09a8c3; -[SCNavigationPresenter isTransitionInProgress] */

undefined1 FUN_10b09a8bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10b09a8c4; end: 10b09a8db; -[SCNavigationPresenter loggingObserver] */

void FUN_10b09a8c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09a8dc; end: 10b09a8e3; -[SCNavigationPresenter useUIKitPresentation] */

undefined1 FUN_10b09a8dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10b09a8e4; end: 10b09a923; -[SCNavigationPresenter .cxx_destruct] */

void FUN_10b09a8e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b09a924; end: 10b09a96b; -[SCUIKitTransitionAnimationController initWithPresentationDirection:] */

void FUN_10b09a924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127055d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b09a96c; end: 10b09a99f; -[SCUIKitTransitionAnimationController onInteractiveTransitionStart] */

void FUN_10b09a96c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b09a9a0; end: 10b09a9a7; -[SCUIKitTransitionAnimationController setHorizontalFlowDirection:] */

void FUN_10b09a9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b09a9a8; end: 10b09a9b7; -[SCUIKitTransitionAnimationController clearInteractiveTransitionState] */

void FUN_10b09a9a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b09a9b8; end: 10b09a9bf; -[SCUIKitTransitionAnimationController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10b09a9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentationTransitionFromDirec_11257d7c8,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b09a9c0; end: 10b09a9c7; -[SCUIKitTransitionAnimationController animationControllerForDismissedController:] */

void FUN_10b09a9c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be038b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissTransitionFromDirection__11255e7c8,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b09a9c8; end: 10b09a9ef; -[SCUIKitTransitionAnimationController interactionControllerForPresentation:] */

void FUN_10b09a9c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09a9f0; end: 10b09aa17; -[SCUIKitTransitionAnimationController interactionControllerForDismissal:] */

void FUN_10b09a9f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09aa18; end: 10b09aa1f; -[SCUIKitTransitionAnimationController updateInteractiveTransition:] */

void FUN_10b09aa18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c286a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_updateInteractiveTransition__11267f4a8);
  return;
}



/* Entry: 10b09aa20; end: 10b09aacf; -[SCUIKitTransitionAnimationController completeTransition:animated:] */

void FUN_10b09aa20(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c17fc20(0x3fd3333333333333,*(undefined8 *)(param_1 + 0x10));
  if (param_3 == 0) {
    func_0x00010bf2e5a0(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8;
    _objc_alloc(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
    func_0x00010c0048a0(0,0,0x3fc999999999999a,0x3ff0000000000000);
    func_0x00010c216060(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
    func_0x00010bfaf8e0(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar1);
  }
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c068e20();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b09aad0; end: 10b09aad3; -[SCUIKitTransitionAnimationController completeTransition:animated:withVelocity:] */

void FUN_10b09aad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_completeTransition_animated__1125ae8a0);
  return;
}



/* Entry: 10b09aad4; end: 10b09ab13; -[SCUIKitTransitionAnimationController _presentationTransitionFromDirection:] */

void FUN_10b09aad4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_1126df6e0;
  }
  else {
    if (param_3 != 1) goto _objc_autoreleaseReturnValue;
    ppuVar1 = &PTR_PTR_1126df6e8;
  }
  _objc_opt_new(*ppuVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09ab14; end: 10b09ab6f; -[SCUIKitTransitionAnimationController _dismissTransitionFromDirection:] */

void FUN_10b09ab14(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    _objc_alloc(PTR_PTR_1126df6f8);
    func_0x00010c040180();
  }
  else if (param_3 == 0) {
    _objc_opt_new(PTR_PTR_1126df6f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09ab70; end: 10b09ab87; -[SCUIKitTransitionAnimationController delegate] */

void FUN_10b09ab70(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09ab88; end: 10b09ab93; -[SCUIKitTransitionAnimationController setDelegate:] */

void FUN_10b09ab88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10b09ab94; end: 10b09abcb; -[SCUIKitTransitionAnimationController .cxx_destruct] */

void FUN_10b09ab94(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b09abcc; end: 10b09ac37; -[SCParentDeckContainerSwizzlingWeakRef initWithValue:] */

undefined1 * FUN_10b09abcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127055d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b09ac38; end: 10b09ac4f; -[SCParentDeckContainerSwizzlingWeakRef object] */

void FUN_10b09ac38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09ac50; end: 10b09ac57; -[SCParentDeckContainerSwizzlingWeakRef .cxx_destruct] */

void FUN_10b09ac50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b09ac58; end: 10b09aca3;  */

void FUN_10b09ac58(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_getAssociatedObject(param_1,&PTR____CFConstantStringClassReference_110f59278);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09aca4; end: 10b09ad13;  */

void FUN_10b09aca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df700;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060400();
  _objc_release(param_3);
  _objc_setAssociatedObject(param_1,&PTR____CFConstantStringClassReference_110f59278,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b09ad14; end: 10b09ad23;  */

void FUN_10b09ad14(void)

{
  return;
}



/* Entry: 10b09ad24; end: 10b09ad97; -[SCGrapheneNavigationUsageMetric2 init] */

undefined1 * FUN_10b09ad24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127055e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b09ad98; end: 10b09af0b;  */

void FUN_10b09ad98(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f725f55;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110cb6890,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  puVar2 = PTR_PTR_1126df708;
  _objc_alloc(PTR_PTR_1126df708);
  func_0x00010c09e4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b2e0(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b09af0c; end: 10b09af67;  */

void FUN_10b09af0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df708;
  _objc_alloc(PTR_PTR_1126df708);
  func_0x00010c09e4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b2e0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b09af68; end: 10b09b073; -[SCBridgeError toNSError] */

void FUN_10b09af68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f59298;
  uVar5 = 0;
  puVar6 = puVar2;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(ppuVar4);
    _objc_retain(uVar5);
    _objc_retain(puVar6);
    puVar3 = PTR_PTR_1126df710;
    _objc_opt_new(PTR_PTR_1126df710);
    _objc_initWeak(auStack_98,puVar3);
    func_0x00010c25fd00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10b09b1dc;
    puStack_c0 = &UNK_110cb68f0;
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(ppuVar4);
    ppuStack_b8 = ppuVar4;
    _objc_retain(uVar5);
    uStack_b0 = uVar5;
    _objc_retain(puVar6);
    puStack_a8 = puVar6;
    (**(code **)(param_1 + 0x10))(param_1,&puStack_d8);
    _objc_release(param_1);
    _objc_release(puStack_a8);
    _objc_release(uStack_b0);
    _objc_release(ppuStack_b8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b09b074; end: 10b09b1db; -[SCBridgeObservable subscribeWithOnNext:onError:onComplete:] */

void FUN_10b09b074(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126df710;
  _objc_opt_new(PTR_PTR_1126df710);
  _objc_initWeak(auStack_48,puVar1);
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b09b1dc;
  puStack_70 = &UNK_110cb68f0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_88);
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b09b1dc; end: 10b09b2d7;  */

void FUN_10b09b1dc(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 < 2) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
      }
      goto LAB_10b09b2b0;
    }
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c20f520();
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
      }
      goto LAB_10b09b2b0;
    }
    lVar1 = *(long *)(param_1 + 0x28);
    param_1 = param_5;
    func_0x00010c271f80(param_5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  }
  _objc_release(param_1);
LAB_10b09b2b0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b09b2d8; end: 10b09b33b; -[SCBridgeObservable toSCObservableNoError] */

void FUN_10b09b2d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b09b33c;
  puStack_20 = &UNK_11088e668;
  uStack_18 = param_1;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09b33c; end: 10b09b3d7;  */

void FUN_10b09b33c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126df710;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_10b09c290(param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b09b3d8; end: 10b09b43b; -[SCBridgeObservable toSCObservableSCResult] */

void FUN_10b09b3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b09b43c;
  puStack_20 = &UNK_11088e668;
  uStack_18 = param_1;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09b43c; end: 10b09b4d7;  */

void FUN_10b09b43c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126df710;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_10b09c3fc(param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b09b4d8; end: 10b09b607; -[SCBridgeObserver toSCObserverNoError] */

void FUN_10b09b4d8(void)

{
  _objc_alloc(PTR_PTR_1126df718);
  func_0x00010c02f960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09b608; end: 10b09b68f; -[SCBridgeObserver toSCObserverSCResult] */

void FUN_10b09b608(void)

{
  _objc_alloc(PTR_PTR_1126df718);
  func_0x00010c02f960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09b690; end: 10b09b70b;  */

void FUN_10b09b690(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b09b70c;
  puStack_20 = &UNK_11088b6c8;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b09b774;
  puStack_48 = &UNK_110849810;
  uStack_18 = uStack_40;
  func_0x00010c0c0800(param_2,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 10b09b70c; end: 10b09b773;  */

void FUN_10b09b70c(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0e3f40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b09b774; end: 10b09b803;  */

void FUN_10b09b774(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0e3f40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c272100(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    (**(code **)(lVar2 + 0x10))(lVar2,2,0,0,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b09b804; end: 10b09b84b;  */

void FUN_10b09b804(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e3f40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b09b84c; end: 10b09b8af; -[SCBridgeSubject toSCObservableNoError] */

void FUN_10b09b84c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b09b8b0;
  puStack_20 = &UNK_11088e668;
  uStack_18 = param_1;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09b8b0; end: 10b09b94b;  */

void FUN_10b09b8b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126df710;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_10b09c290(param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b09b94c; end: 10b09b9af; -[SCBridgeSubject toSCObservableSCResult] */

void FUN_10b09b94c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b09b9b0;
  puStack_20 = &UNK_11088e668;
  uStack_18 = param_1;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09b9b0; end: 10b09ba4b;  */

void FUN_10b09b9b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126df710;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_10b09c3fc(param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b09ba4c; end: 10b09bb7b; -[SCBridgeSubject toSCObserverNoError] */

void FUN_10b09ba4c(void)

{
  _objc_alloc(PTR_PTR_1126df718);
  func_0x00010c02f960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09bb7c; end: 10b09bc03; -[SCBridgeSubject toSCObserverSCResult] */

void FUN_10b09bb7c(void)

{
  _objc_alloc(PTR_PTR_1126df718);
  func_0x00010c02f960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09bc04; end: 10b09bc7f;  */

void FUN_10b09bc04(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b09bc80;
  puStack_20 = &UNK_11088b6c8;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b09bce8;
  puStack_48 = &UNK_110849810;
  uStack_18 = uStack_40;
  func_0x00010c0c0800(param_2,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 10b09bc80; end: 10b09bce7;  */

void FUN_10b09bc80(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0e3f40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b09bce8; end: 10b09bd77;  */

void FUN_10b09bce8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0e3f40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c272100(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    (**(code **)(lVar2 + 0x10))(lVar2,2,0,0,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b09bd78; end: 10b09bdbf;  */

void FUN_10b09bd78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e3f40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b09bdc0; end: 10b09be27; -[SCObservable toSCBridgeObservable] */

void FUN_10b09bdc0(void)

{
  _objc_alloc(PTR_PTR_1126b3c88);
  func_0x00010c04ef40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09be28; end: 10b09bf27;  */

void FUN_10b09be28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b09bf28;
  puStack_50 = &UNK_11084c0d0;
  _objc_retain(param_2);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10b09bf44;
  puStack_78 = &UNK_110849530;
  uStack_48 = param_2;
  _objc_retain(param_2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10b09bf60;
  puStack_a0 = &UNK_110cb6920;
  uStack_98 = param_2;
  uStack_70 = param_2;
  _objc_retain(param_2);
  FUN_10b09c5f0(uVar2,&puStack_68,&puStack_90,&puStack_b8);
  _objc_release(uStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10b09bf28; end: 10b09bf7b;  */

void FUN_10b09bf28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b09bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0,param_2,0);
  return;
}



/* Entry: 10b09bf7c; end: 10b09c00b;  */

void FUN_10b09bf7c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 == 3) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else if (param_2 == 1) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b09c00c; end: 10b09c10b;  */

void FUN_10b09c00c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b09c10c;
  puStack_50 = &UNK_11084c0d0;
  _objc_retain(param_2);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10b09c128;
  puStack_78 = &UNK_110849530;
  uStack_48 = param_2;
  _objc_retain(param_2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10b09c144;
  puStack_a0 = &UNK_110cb6920;
  uStack_98 = param_2;
  uStack_70 = param_2;
  _objc_retain(param_2);
  FUN_10b09c5f0(uVar2,&puStack_68,&puStack_90,&puStack_b8);
  _objc_release(uStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10b09c10c; end: 10b09c15f;  */

void FUN_10b09c10c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b09c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0,param_2,0);
  return;
}



/* Entry: 10b09c160; end: 10b09c1e3; -[SCBridgeObservableDisposable dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09c160(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar3 = (long)_DAT_11278c6c4;
  lVar1 = *(long *)(param_1 + lVar3);
  _objc_retainBlock();
  *(undefined1 *)(param_1 + _DAT_11278c6c8) = 1;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b09c1e4; end: 10b09c27b; -[SCBridgeObservableDisposable setSubscriptionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09c1e4(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  bVar1 = *(byte *)(param_1 + _DAT_11278c6c8);
  if ((bVar1 & 1) == 0) {
    lVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11278c6c4);
    *(long *)(param_1 + _DAT_11278c6c4) = lVar2;
    _objc_release(uVar3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if ((param_3 != 0) && (bVar1 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b09c27c; end: 10b09c28f; -[SCBridgeObservableDisposable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09c27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c6c4,0);
  return;
}



/* Entry: 10b09c290; end: 10b09c347;  */

void FUN_10b09c290(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain();
  _objc_initWeak(auStack_38,param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b09c348;
  puStack_50 = &UNK_110cb69b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b09c348; end: 10b09c3fb;  */

void FUN_10b09c348(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 == 3) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else if (param_2 == 1) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  else if (param_2 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c20f520();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b09c3fc; end: 10b09c4b3;  */

void FUN_10b09c3fc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain();
  _objc_initWeak(auStack_38,param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b09c4b4;
  puStack_50 = &UNK_110cb69b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b09c4b4; end: 10b09c5ef;  */

void FUN_10b09c4b4(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined *param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126af5d0;
  if (param_2 < 2) {
    if (param_2 == 0) {
      puVar1 = (undefined *)(param_1 + 0x28);
      _objc_loadWeakRetained(puVar1);
      func_0x00010c20f520();
    }
    else {
      if (param_2 != 1) goto LAB_10b09c5c8;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3);
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_10b09c5c8;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = param_5;
    func_0x00010c271f80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_10b09c5c8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b09c5f0; end: 10b09c7ef;  */

void FUN_10b09c5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10b09c7f0;
  puStack_b0 = &UNK_110cb69e0;
  puStack_88 = &uStack_90;
  _objc_retain();
  puStack_a8 = puVar2;
  puStack_98 = &uStack_90;
  _objc_retain(param_2);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10b09c84c;
  puStack_e8 = &UNK_110883360;
  uStack_a0 = param_2;
  _objc_retain(puVar2);
  puStack_e0 = puVar2;
  puStack_d0 = &uStack_90;
  _objc_retain(param_3);
  uVar3 = param_1;
  uStack_d8 = param_3;
  func_0x00010c25ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x10b09c890;
  puStack_120 = &UNK_11084fa08;
  _objc_retain(puVar2);
  puStack_118 = puVar2;
  puStack_108 = &uStack_90;
  _objc_retain(uVar3);
  uStack_110 = uVar3;
  (**(code **)(param_4 + 0x10))(param_4,&puStack_138);
  _objc_release(uStack_110);
  _objc_release(puStack_118);
  _objc_release(uVar3);
  _objc_release(uStack_d8);
  _objc_release(puStack_e0);
  _objc_release(uStack_a0);
  _objc_release(puStack_a8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 10b09c7f0; end: 10b09c963;  */

void FUN_10b09c7f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b09c964; end: 10b09cb1f;  */

void FUN_10b09c964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b09ca64;
  puStack_50 = &UNK_11084c0d0;
  _objc_retain(param_2);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b09cb9c;
  puStack_78 = &UNK_110849530;
  uStack_48 = param_2;
  _objc_retain(param_2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10b09cbb8;
  puStack_a0 = &UNK_110cb6920;
  uStack_98 = param_2;
  uStack_70 = param_2;
  _objc_retain(param_2);
  FUN_10b09c5f0(uVar2,&puStack_68,&puStack_90,&puStack_b8);
  _objc_release(uStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10b09cb20; end: 10b09cb43;  */

void FUN_10b09cb20(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b09cb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0,param_2,0);
    return;
  }
  return;
}



/* Entry: 10b09cb44; end: 10b09cb9b;  */

void FUN_10b09cb44(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c272100(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,2,0,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10b09cb9c; end: 10b09cbd3;  */

void FUN_10b09cb9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b09cbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),3,0,0,0);
  return;
}



/* Entry: 10b09cbd4; end: 10b09cea7;  */

undefined8 FUN_10b09cbd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c35034();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf90000();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b09cea8; end: 10b09ced3;  */

ulong FUN_10b09cea8(void)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2970;
  func_0x00010c067fc0();
  uVar2 = (long)ppuVar1 - 1;
  if (4 < uVar2) {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 10b09ced4; end: 10b09cf57;  */

void FUN_10b09ced4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f592f8,0,0);
  return;
}



/* Entry: 10b09cf58; end: 10b09cfdf;  */

ulong FUN_10b09cf58(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f593b8,1,0);
    uVar1 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f59358,0,0);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = param_1,
       func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f59378,0,0),
       (int)uVar1 != 0)) goto LAB_10b09cfc8;
  }
  uVar2 = 0;
LAB_10b09cfc8:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b09cfe0; end: 10b09d007;  */

long FUN_10b09cfe0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f59318,0xffffffff,0)
  ;
  return (long)(int)param_1;
}



/* Entry: 10b09d008; end: 10b09d023;  */

void FUN_10b09d008(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110f593d8,0,0);
    return;
  }
  return;
}



/* Entry: 10b09d024; end: 10b09d08b; +[DeckConfig descriptor] */

void FUN_10b09d024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3f30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c6a3d0,
                        &PTR____CFConstantStringClassReference_110f59478,&PTR_DAT_11336a170,
                        &PTR_DAT_11336a188,4,4,0x1c);
    puRam00000001137f3f30 = puVar1;
  }
  return;
}



/* Entry: 10b09d08c; end: 10b09d143;  */

undefined * FUN_10b09d08c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    if (lRam00000001137f3f58 != -1) {
      func_0x000107c27d9c(0x1137f3f58,&PTR___NSConcreteGlobalBlock_110cb6a30);
    }
    lVar1 = lRam00000001137f3f50;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b6f08;
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010c067fc0(lVar1);
      func_0x00010bfc51e0(puVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10b09d144; end: 10b09e027;  */

void FUN_10b09d144(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuStack_b88;
  undefined **ppuStack_b80;
  undefined **ppuStack_b78;
  undefined **ppuStack_b70;
  undefined **ppuStack_b68;
  undefined **ppuStack_b60;
  undefined **ppuStack_b58;
  undefined **ppuStack_b50;
  undefined **ppuStack_b48;
  undefined **ppuStack_b40;
  undefined **ppuStack_b38;
  undefined **ppuStack_b30;
  undefined **ppuStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined **ppuStack_b00;
  undefined **ppuStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined **ppuStack_ae0;
  undefined **ppuStack_ad8;
  undefined **ppuStack_ad0;
  undefined **ppuStack_ac8;
  undefined **ppuStack_ac0;
  undefined **ppuStack_ab8;
  undefined **ppuStack_ab0;
  undefined **ppuStack_aa8;
  undefined **ppuStack_aa0;
  undefined **ppuStack_a98;
  undefined **ppuStack_a90;
  undefined **ppuStack_a88;
  undefined **ppuStack_a80;
  undefined **ppuStack_a78;
  undefined **ppuStack_a70;
  undefined **ppuStack_a68;
  undefined **ppuStack_a60;
  undefined **ppuStack_a58;
  undefined **ppuStack_a50;
  undefined **ppuStack_a48;
  undefined **ppuStack_a40;
  undefined **ppuStack_a38;
  undefined **ppuStack_a30;
  undefined **ppuStack_a28;
  undefined **ppuStack_a20;
  undefined **ppuStack_a18;
  undefined **ppuStack_a10;
  undefined **ppuStack_a08;
  undefined **ppuStack_a00;
  undefined **ppuStack_9f8;
  undefined **ppuStack_9f0;
  undefined **ppuStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined **ppuStack_9d0;
  undefined **ppuStack_9c8;
  undefined **ppuStack_9c0;
  undefined **ppuStack_9b8;
  undefined **ppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined **ppuStack_9a0;
  undefined **ppuStack_998;
  undefined **ppuStack_990;
  undefined **ppuStack_988;
  undefined **ppuStack_980;
  undefined **ppuStack_978;
  undefined **ppuStack_970;
  undefined **ppuStack_968;
  undefined **ppuStack_960;
  undefined **ppuStack_958;
  undefined **ppuStack_950;
  undefined **ppuStack_948;
  undefined **ppuStack_940;
  undefined **ppuStack_938;
  undefined **ppuStack_930;
  undefined **ppuStack_928;
  undefined **ppuStack_920;
  undefined **ppuStack_918;
  undefined **ppuStack_910;
  undefined **ppuStack_908;
  undefined **ppuStack_900;
  undefined **ppuStack_8f8;
  undefined **ppuStack_8f0;
  undefined **ppuStack_8e8;
  undefined **ppuStack_8e0;
  undefined **ppuStack_8d8;
  undefined **ppuStack_8d0;
  undefined **ppuStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined **ppuStack_8a0;
  undefined **ppuStack_898;
  undefined **ppuStack_890;
  undefined **ppuStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  undefined **ppuStack_870;
  undefined **ppuStack_868;
  undefined **ppuStack_860;
  undefined **ppuStack_858;
  undefined **ppuStack_850;
  undefined **ppuStack_848;
  undefined **ppuStack_840;
  undefined **ppuStack_838;
  undefined **ppuStack_830;
  undefined **ppuStack_828;
  undefined **ppuStack_820;
  undefined **ppuStack_818;
  undefined **ppuStack_810;
  undefined **ppuStack_808;
  undefined **ppuStack_800;
  undefined **ppuStack_7f8;
  undefined **ppuStack_7f0;
  undefined **ppuStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined **ppuStack_7d0;
  undefined **ppuStack_7c8;
  undefined **ppuStack_7c0;
  undefined **ppuStack_7b8;
  undefined **ppuStack_7b0;
  undefined **ppuStack_7a8;
  undefined **ppuStack_7a0;
  undefined **ppuStack_798;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined **ppuStack_738;
  undefined **ppuStack_730;
  undefined **ppuStack_728;
  undefined **ppuStack_720;
  undefined **ppuStack_718;
  undefined **ppuStack_710;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined **ppuStack_6f0;
  undefined **ppuStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined **ppuStack_6d0;
  undefined **ppuStack_6c8;
  undefined **ppuStack_6c0;
  undefined **ppuStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b88 = &PTR____CFConstantStringClassReference_110f59ad8;
  ppuStack_b80 = &PTR____CFConstantStringClassReference_110f59af8;
  ppuStack_5d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2bf8;
  ppuStack_5d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2bf8;
  ppuStack_b78 = &PTR____CFConstantStringClassReference_110f59b98;
  ppuStack_b70 = &PTR____CFConstantStringClassReference_110f594b8;
  ppuStack_5c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2bf8;
  ppuStack_5c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2bf8;
  ppuStack_b68 = &PTR____CFConstantStringClassReference_110f5ad18;
  ppuStack_b60 = &PTR____CFConstantStringClassReference_110f59b38;
  ppuStack_5b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2bf8;
  ppuStack_5b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a18;
  ppuStack_b58 = &PTR____CFConstantStringClassReference_110e44958;
  ppuStack_b50 = &PTR____CFConstantStringClassReference_110f59d18;
  ppuStack_5a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a18;
  ppuStack_5a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a18;
  ppuStack_b48 = &PTR____CFConstantStringClassReference_110f59b58;
  ppuStack_b40 = &PTR____CFConstantStringClassReference_110f5a718;
  ppuStack_598 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c10;
  ppuStack_590 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_b38 = &PTR____CFConstantStringClassReference_110f59b78;
  ppuStack_b30 = &PTR____CFConstantStringClassReference_110f5a998;
  ppuStack_588 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c28;
  ppuStack_580 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c28;
  ppuStack_b28 = &PTR____CFConstantStringClassReference_110e341b8;
  ppuStack_b20 = &PTR____CFConstantStringClassReference_110f5a5b8;
  ppuStack_578 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c28;
  ppuStack_570 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c28;
  ppuStack_b18 = &PTR____CFConstantStringClassReference_110e36118;
  ppuStack_b10 = &PTR____CFConstantStringClassReference_110f59b18;
  ppuStack_568 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c40;
  ppuStack_560 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c58;
  ppuStack_b08 = &PTR____CFConstantStringClassReference_110f59bb8;
  ppuStack_b00 = &PTR____CFConstantStringClassReference_110f59bd8;
  ppuStack_558 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c70;
  ppuStack_550 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c70;
  ppuStack_af8 = &PTR____CFConstantStringClassReference_110f59db8;
  ppuStack_af0 = &PTR____CFConstantStringClassReference_110f59dd8;
  ppuStack_548 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c70;
  ppuStack_540 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c70;
  ppuStack_ae8 = &PTR____CFConstantStringClassReference_110f5ab38;
  ppuStack_ae0 = &PTR____CFConstantStringClassReference_110dea458;
  ppuStack_538 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c70;
  ppuStack_530 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c70;
  ppuStack_ad8 = &PTR____CFConstantStringClassReference_110e1f9d8;
  ppuStack_ad0 = &PTR____CFConstantStringClassReference_110f5acd8;
  ppuStack_528 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c70;
  ppuStack_520 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c88;
  ppuStack_ac8 = &PTR____CFConstantStringClassReference_110eb57b8;
  ppuStack_ac0 = &PTR____CFConstantStringClassReference_110f59cd8;
  ppuStack_518 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_510 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_ab8 = &PTR____CFConstantStringClassReference_110f59cf8;
  ppuStack_ab0 = &PTR____CFConstantStringClassReference_110f5a898;
  ppuStack_508 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_500 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_aa8 = &PTR____CFConstantStringClassReference_110f5acb8;
  ppuStack_aa0 = &PTR____CFConstantStringClassReference_110ee1a38;
  ppuStack_4f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_4f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_a98 = &PTR____CFConstantStringClassReference_110f5a8b8;
  ppuStack_a90 = &PTR____CFConstantStringClassReference_110f5a8d8;
  ppuStack_4e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_4e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_a88 = &PTR____CFConstantStringClassReference_110ee1bf8;
  ppuStack_a80 = &PTR____CFConstantStringClassReference_110f5a6f8;
  ppuStack_4d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_4d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_a78 = &PTR____CFConstantStringClassReference_110f5ae38;
  ppuStack_a70 = &PTR____CFConstantStringClassReference_110f5a1d8;
  ppuStack_4c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_4c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_a68 = &PTR____CFConstantStringClassReference_110f59c98;
  ppuStack_a60 = &PTR____CFConstantStringClassReference_110f59cb8;
  ppuStack_4b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_4b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_a58 = &PTR____CFConstantStringClassReference_110e62018;
  ppuStack_a50 = &PTR____CFConstantStringClassReference_110f5a8f8;
  ppuStack_4a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_4a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ca0;
  ppuStack_a48 = &PTR____CFConstantStringClassReference_110f5a938;
  ppuStack_a40 = &PTR____CFConstantStringClassReference_110f5a278;
  ppuStack_498 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a00;
  ppuStack_490 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a00;
  ppuStack_a38 = &PTR____CFConstantStringClassReference_110f5a2f8;
  ppuStack_a30 = &PTR____CFConstantStringClassReference_110f5a298;
  ppuStack_488 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a00;
  ppuStack_480 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a00;
  ppuStack_a28 = &PTR____CFConstantStringClassReference_110db6e18;
  ppuStack_a20 = &PTR____CFConstantStringClassReference_110f5a978;
  ppuStack_478 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a00;
  ppuStack_470 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a00;
  ppuStack_a18 = &PTR____CFConstantStringClassReference_110f5a2b8;
  ppuStack_a10 = &PTR____CFConstantStringClassReference_110f59e78;
  ppuStack_468 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a00;
  ppuStack_460 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_a08 = &PTR____CFConstantStringClassReference_110f59eb8;
  ppuStack_a00 = &PTR____CFConstantStringClassReference_110f59ed8;
  ppuStack_458 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_450 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_9f8 = &PTR____CFConstantStringClassReference_110f59f18;
  ppuStack_9f0 = &PTR____CFConstantStringClassReference_110f59f38;
  ppuStack_448 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_440 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_9e8 = &PTR____CFConstantStringClassReference_110f59f58;
  ppuStack_9e0 = &PTR____CFConstantStringClassReference_110f59ef8;
  ppuStack_438 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_430 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_9d8 = &PTR____CFConstantStringClassReference_110f59f78;
  ppuStack_9d0 = &PTR____CFConstantStringClassReference_110f59f98;
  ppuStack_428 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_420 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_9c8 = &PTR____CFConstantStringClassReference_110f59fb8;
  ppuStack_9c0 = &PTR____CFConstantStringClassReference_110f59ff8;
  ppuStack_418 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_410 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_9b8 = &PTR____CFConstantStringClassReference_110f5a078;
  ppuStack_9b0 = &PTR____CFConstantStringClassReference_110f5a098;
  ppuStack_408 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_400 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_9a8 = &PTR____CFConstantStringClassReference_110f5a0b8;
  ppuStack_9a0 = &PTR____CFConstantStringClassReference_110eb4a98;
  ppuStack_3f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_3f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_998 = &PTR____CFConstantStringClassReference_110f5ae18;
  ppuStack_990 = &PTR____CFConstantStringClassReference_110f59df8;
  ppuStack_3e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_3e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_988 = &PTR____CFConstantStringClassReference_110f5a038;
  ppuStack_3d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_980 = &PTR____CFConstantStringClassReference_110f5a018;
  ppuStack_3d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_978 = &PTR____CFConstantStringClassReference_110f59e98;
  ppuStack_3c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_970 = &PTR____CFConstantStringClassReference_110f5a0d8;
  ppuStack_3c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cb8;
  ppuStack_968 = &PTR____CFConstantStringClassReference_110dbf098;
  ppuStack_3b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_960 = &PTR____CFConstantStringClassReference_110f5a0f8;
  ppuStack_3b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_958 = &PTR____CFConstantStringClassReference_110f5a118;
  ppuStack_3a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_950 = &PTR____CFConstantStringClassReference_110f5a178;
  ppuStack_3a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_948 = &PTR____CFConstantStringClassReference_110f5a198;
  ppuStack_398 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_940 = &PTR____CFConstantStringClassReference_110f59e38;
  ppuStack_390 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_938 = &PTR____CFConstantStringClassReference_110f59e58;
  ppuStack_388 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_930 = &PTR____CFConstantStringClassReference_110f5a238;
  ppuStack_380 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_928 = &PTR____CFConstantStringClassReference_110f5a258;
  ppuStack_378 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_920 = &PTR____CFConstantStringClassReference_110f5ad38;
  ppuStack_370 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_918 = &PTR____CFConstantStringClassReference_110f5a158;
  ppuStack_368 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_910 = &PTR____CFConstantStringClassReference_110e20e18;
  ppuStack_360 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_908 = &PTR____CFConstantStringClassReference_110db9d58;
  ppuStack_358 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_900 = &PTR____CFConstantStringClassReference_110f5a2d8;
  ppuStack_350 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_8f8 = &PTR____CFConstantStringClassReference_110f59c38;
  ppuStack_348 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_8f0 = &PTR____CFConstantStringClassReference_110f5aed8;
  ppuStack_340 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2cd0;
  ppuStack_8e8 = &PTR____CFConstantStringClassReference_110e30ab8;
  ppuStack_338 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ce8;
  ppuStack_8e0 = &PTR____CFConstantStringClassReference_110f5a358;
  ppuStack_330 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ce8;
  ppuStack_8d8 = &PTR____CFConstantStringClassReference_110db9d78;
  ppuStack_328 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ce8;
  ppuStack_8d0 = &PTR____CFConstantStringClassReference_110f5a378;
  ppuStack_320 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_8c8 = &PTR____CFConstantStringClassReference_110f5a398;
  ppuStack_318 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_8c0 = &PTR____CFConstantStringClassReference_110f5a3b8;
  ppuStack_310 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_8b8 = &PTR____CFConstantStringClassReference_110f5a3d8;
  ppuStack_308 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_8b0 = &PTR____CFConstantStringClassReference_110f5a3f8;
  ppuStack_300 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_8a8 = &PTR____CFConstantStringClassReference_110f5a418;
  ppuStack_2f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_8a0 = &PTR____CFConstantStringClassReference_110f5a458;
  ppuStack_2f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_898 = &PTR____CFConstantStringClassReference_110f5a478;
  ppuStack_2e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_890 = &PTR____CFConstantStringClassReference_110f5a498;
  ppuStack_2e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_888 = &PTR____CFConstantStringClassReference_110f5a4b8;
  ppuStack_2d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_880 = &PTR____CFConstantStringClassReference_110f5a4d8;
  ppuStack_2d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_878 = &PTR____CFConstantStringClassReference_110f5a4f8;
  ppuStack_2c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_870 = &PTR____CFConstantStringClassReference_110db9e78;
  ppuStack_2c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_868 = &PTR____CFConstantStringClassReference_110f5a518;
  ppuStack_2b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d00;
  ppuStack_860 = &PTR____CFConstantStringClassReference_110eb5718;
  ppuStack_2b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_858 = &PTR____CFConstantStringClassReference_110e66878;
  ppuStack_2a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_850 = &PTR____CFConstantStringClassReference_110e66898;
  ppuStack_2a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_848 = &PTR____CFConstantStringClassReference_110e668b8;
  ppuStack_298 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_840 = &PTR____CFConstantStringClassReference_110f5a1b8;
  ppuStack_290 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_838 = &PTR____CFConstantStringClassReference_110f5a578;
  ppuStack_288 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_830 = &PTR____CFConstantStringClassReference_110f5ac38;
  ppuStack_280 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_828 = &PTR____CFConstantStringClassReference_110f5ac58;
  ppuStack_278 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_820 = &PTR____CFConstantStringClassReference_110f5a598;
  ppuStack_270 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_818 = &PTR____CFConstantStringClassReference_110e1f2b8;
  ppuStack_268 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_810 = &PTR____CFConstantStringClassReference_110f5a558;
  ppuStack_260 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_808 = &PTR____CFConstantStringClassReference_110f5a9b8;
  ppuStack_258 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_800 = &PTR____CFConstantStringClassReference_110e1cd38;
  ppuStack_250 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_7f8 = &PTR____CFConstantStringClassReference_110dd50f8;
  ppuStack_248 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_7f0 = &PTR____CFConstantStringClassReference_110f5af18;
  ppuStack_240 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_7e8 = &PTR____CFConstantStringClassReference_110f5a9f8;
  ppuStack_238 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d18;
  ppuStack_7e0 = &PTR____CFConstantStringClassReference_110f16ef8;
  ppuStack_230 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d18;
  ppuStack_7d8 = &PTR____CFConstantStringClassReference_110f59778;
  ppuStack_228 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d18;
  ppuStack_7d0 = &PTR____CFConstantStringClassReference_110f59798;
  ppuStack_220 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d30;
  ppuStack_7c8 = &PTR____CFConstantStringClassReference_110f597b8;
  ppuStack_218 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d48;
  ppuStack_7c0 = &PTR____CFConstantStringClassReference_110f597d8;
  ppuStack_210 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_7b8 = &PTR____CFConstantStringClassReference_110f597f8;
  ppuStack_208 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d60;
  ppuStack_7b0 = &PTR____CFConstantStringClassReference_110f59818;
  ppuStack_200 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_7a8 = &PTR____CFConstantStringClassReference_110f59838;
  ppuStack_1f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d78;
  ppuStack_7a0 = &PTR____CFConstantStringClassReference_110f59858;
  ppuStack_1f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2c70;
  ppuStack_798 = &PTR____CFConstantStringClassReference_110f59878;
  ppuStack_1e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_790 = &PTR____CFConstantStringClassReference_110f59898;
  ppuStack_1e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d90;
  ppuStack_788 = &PTR____CFConstantStringClassReference_110f598b8;
  ppuStack_1d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2da8;
  ppuStack_780 = &PTR____CFConstantStringClassReference_110f598d8;
  ppuStack_1d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_778 = &PTR____CFConstantStringClassReference_110f598f8;
  ppuStack_1c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d90;
  ppuStack_770 = &PTR____CFConstantStringClassReference_110f59918;
  ppuStack_1c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d90;
  ppuStack_768 = &PTR____CFConstantStringClassReference_110f59938;
  ppuStack_1b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_760 = &PTR____CFConstantStringClassReference_110f5a9d8;
  ppuStack_1b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_758 = &PTR____CFConstantStringClassReference_110f59958;
  ppuStack_1a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_750 = &PTR____CFConstantStringClassReference_110f59978;
  ppuStack_1a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_748 = &PTR____CFConstantStringClassReference_110f59998;
  ppuStack_198 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_740 = &PTR____CFConstantStringClassReference_110f599b8;
  ppuStack_190 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_738 = &PTR____CFConstantStringClassReference_110f599d8;
  ppuStack_188 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_730 = &PTR____CFConstantStringClassReference_110f599f8;
  ppuStack_180 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_728 = &PTR____CFConstantStringClassReference_110f59a18;
  ppuStack_178 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_720 = &PTR____CFConstantStringClassReference_110f59a38;
  ppuStack_170 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_718 = &PTR____CFConstantStringClassReference_110f59a58;
  ppuStack_168 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_710 = &PTR____CFConstantStringClassReference_110f59a78;
  ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_708 = &PTR____CFConstantStringClassReference_110f59a98;
  ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_700 = &PTR____CFConstantStringClassReference_110f59ab8;
  ppuStack_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_6f8 = &PTR____CFConstantStringClassReference_110f5a5d8;
  ppuStack_148 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dc0;
  ppuStack_6f0 = &PTR____CFConstantStringClassReference_110f5a5f8;
  ppuStack_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29d0;
  ppuStack_6e8 = &PTR____CFConstantStringClassReference_110f5a618;
  ppuStack_138 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29d0;
  ppuStack_6e0 = &PTR____CFConstantStringClassReference_110f5a658;
  ppuStack_130 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_6d8 = &PTR____CFConstantStringClassReference_110f5a678;
  ppuStack_128 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_6d0 = &PTR____CFConstantStringClassReference_110f5a698;
  ppuStack_120 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_6c8 = &PTR____CFConstantStringClassReference_110f5a6b8;
  ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_6c0 = &PTR____CFConstantStringClassReference_110f5a818;
  ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_6b8 = &PTR____CFConstantStringClassReference_110f5a7f8;
  ppuStack_108 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_6b0 = &PTR____CFConstantStringClassReference_110e85a18;
  ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_6a8 = &PTR____CFConstantStringClassReference_110f5ab98;
  ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_6a0 = &PTR____CFConstantStringClassReference_110f5abb8;
  ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_698 = &PTR____CFConstantStringClassReference_110f5abd8;
  ppuStack_e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_690 = &PTR____CFConstantStringClassReference_110f5abf8;
  ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2dd8;
  ppuStack_688 = &PTR____CFConstantStringClassReference_110f5adf8;
  ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2df0;
  ppuStack_680 = &PTR____CFConstantStringClassReference_110f5ad78;
  ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2df0;
  ppuStack_678 = &PTR____CFConstantStringClassReference_110f5ad58;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2df0;
  ppuStack_670 = &PTR____CFConstantStringClassReference_110f5ad98;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2df0;
  ppuStack_668 = &PTR____CFConstantStringClassReference_110f5adb8;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2df0;
  ppuStack_660 = &PTR____CFConstantStringClassReference_110f5ad78;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2df0;
  ppuStack_658 = &PTR____CFConstantStringClassReference_110f5add8;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2df0;
  ppuStack_650 = &PTR____CFConstantStringClassReference_110f59e18;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d90;
  ppuStack_648 = &PTR____CFConstantStringClassReference_110f5acf8;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2d90;
  ppuStack_640 = &PTR____CFConstantStringClassReference_110f5ae58;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e08;
  ppuStack_638 = &PTR____CFConstantStringClassReference_110f5ae78;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e08;
  ppuStack_630 = &PTR____CFConstantStringClassReference_110f5a838;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29b8;
  ppuStack_628 = &PTR____CFConstantStringClassReference_110f5a858;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29b8;
  ppuStack_620 = &PTR____CFConstantStringClassReference_110e1f6b8;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29b8;
  ppuStack_618 = &PTR____CFConstantStringClassReference_110f5a6d8;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e20;
  ppuStack_610 = &PTR____CFConstantStringClassReference_110f5aa18;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e38;
  ppuStack_608 = &PTR____CFConstantStringClassReference_110f5ab78;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e38;
  ppuStack_600 = &PTR____CFConstantStringClassReference_110f5aa38;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e38;
  ppuStack_5f8 = &PTR____CFConstantStringClassReference_110f5ae98;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e50;
  ppuStack_5f0 = &PTR____CFConstantStringClassReference_110f5a138;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e68;
  ppuStack_5e8 = &PTR____CFConstantStringClassReference_110f5ac98;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e80;
  ppuStack_5e0 = &PTR____CFConstantStringClassReference_110f5ac78;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2e80;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&ppuStack_5d8,&ppuStack_b88,
                      0xb6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f3f50;
  puRam00000001137f3f50 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
  dRam00000001137f3f90 = param_4 / param_3;
  return;
}



/* Entry: 10b09e028; end: 10b09e257;  */

void FUN_10b09e028(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  dRam00000001137f3f90 = param_4 / param_3;
  return;
}



/* Entry: 10b09e258; end: 10b09e27b; -[SCCapriIconConfig copyWithZone:] */

undefined8 FUN_10b09e258(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b09e27c; end: 10b09e35f; -[SCCapriIconConfig hash] */

undefined8 * FUN_10b09e27c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_48 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b09e49c:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b09e4a8;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)puVar4 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)puVar4 + 0x30) - *(double *)(param_3 + 0x30));
        dVar9 = ABS(*(double *)((long)puVar4 + 0x30) + *(double *)(param_3 + 0x30)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (bVar1) {
          dVar10 = ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38));
          dVar9 = ABS(*(double *)((long)puVar4 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
            bVar1 = dVar10 < dVar9;
          }
          if ((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
            puVar8 = *(undefined1 **)((long)puVar4 + 0x20);
            if (puVar8 != *(undefined1 **)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b09e4a8;
            }
            goto LAB_10b09e49c;
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b09e4a8:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b09e360; end: 10b09e4c3; -[SCCapriIconConfig isEqual:] */

long FUN_10b09e360(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b09e49c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b09e4a8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
          dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if ((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x20);
            if (lVar4 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b09e4a8;
            }
            goto LAB_10b09e49c;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b09e4a8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b09e4c4; end: 10b09e4e7;  */

undefined8 FUN_10b09e4c4(void)

{
  return 0x4049000000000000;
}



/* Entry: 10b09e4e8; end: 10b09e4ef; -[SCComposerDimmingPresentationController shouldRemovePresentersView] */

undefined8 FUN_10b09e4e8(void)

{
  return 0;
}


