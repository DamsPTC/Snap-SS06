/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10662c19c; end: 10662c20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c19c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274c708;
  func_0x00010c21e900(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274c724) = 0;
  return;
}



/* Entry: 10662c210; end: 10662c21b; -[SCUnifiedProfileFlatlandViewController rootViewWillDismissProfileViewController] */

void FUN_10662c210(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissUnifiedProfileAnimated_co_1125bec28,1,0);
  return;
}



/* Entry: 10662c21c; end: 10662c22b; -[SCUnifiedProfileFlatlandViewController rootViewRequestsSwipeToDimissEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c21c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274c6c8) = param_3;
  return;
}



/* Entry: 10662c22c; end: 10662c23b; -[SCUnifiedProfileFlatlandViewController rootViewObservesSwipeToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c6cc),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 10662c23c; end: 10662c24b; -[SCUnifiedProfileFlatlandViewController rootViewRequestsRequestsExitOnAppBackgroundEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c23c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274c6d0) = param_3;
  return;
}



/* Entry: 10662c24c; end: 10662c25f; -[SCUnifiedProfileFlatlandViewController forceDisableDismissalGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c24c(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + _DAT_11274c6c8) = param_3 ^ 1;
  return;
}



/* Entry: 10662c260; end: 10662c29f; -[SCUnifiedProfileFlatlandViewController setPageVisibilityObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274c728);
  *(undefined8 *)(param_1 + _DAT_11274c728) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be65270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyVisibility_112576e38);
  return;
}



/* Entry: 10662c2a0; end: 10662c2f3; -[SCUnifiedProfileFlatlandViewController _notifyVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c2a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11274c728);
  _objc_retainBlock();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))((double)*(long *)(param_1 + _DAT_11274c700),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10662c2f4; end: 10662c33b; -[SCUnifiedProfileFlatlandViewController cardToExpandTransition] */

void FUN_10662c2f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = lVar1;
  }
  _objc_retain(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10662c33c; end: 10662c44b; -[SCUnifiedProfileFlatlandViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10662c33c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  if (*(char *)(param_3 + _DAT_11274c6c8) != '\x01') {
    uVar4 = 0;
    goto LAB_10662c424;
  }
  lVar3 = *(long *)(param_3 + _DAT_11274c720);
  _objc_retain(lVar3);
  if ((lVar3 == 0) || (*(char *)(param_3 + _DAT_11274c6fc) != '\x01')) {
LAB_10662c3fc:
    uVar4 = *(undefined8 *)(param_3 + _DAT_11274c72c);
    func_0x00010bf848c0(param_1,param_2,uVar4,param_4,param_5);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_3 + _DAT_11274c6d4);
    func_0x000108fab1cc();
    if (iVar1 == 0) goto LAB_10662c3fc;
    func_0x00010bf512a0(param_1,param_2,param_5,param_4,lVar3);
    lVar2 = param_3;
    func_0x00010be363c0(param_3,param_4,lVar3);
    if (lVar2 == 1) {
      uVar4 = 1;
    }
    else {
      if (lVar2 != 2) goto LAB_10662c3fc;
      uVar4 = 0;
    }
  }
  _objc_release(lVar3);
LAB_10662c424:
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 10662c44c; end: 10662c55f; -[SCUnifiedProfileFlatlandViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c44c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_11274c724) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274c708);
    func_0x00010bf40120(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(uVar2);
    func_0x00010bf848e0(*(undefined8 *)(param_1 + _DAT_11274c72c));
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274c6cc),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c65e0);
  lVar3 = param_1;
  func_0x00010bf31f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0797a0();
  if ((int)lVar4 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274c6d4);
    func_0x000108fab1e8();
    if (iVar1 != 0) {
      param_1 = param_1 + _DAT_11274c70c;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf84320();
      _objc_release(param_1);
      goto LAB_10662c544;
    }
  }
  func_0x00010bf84b00(lVar3,param_2,1,0);
LAB_10662c544:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10662c560; end: 10662c5e3; -[SCUnifiedProfileFlatlandViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c560(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_11274c724) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274c708);
    func_0x00010bf40120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(uVar1);
    func_0x00010bf848a0(*(undefined8 *)(param_1 + _DAT_11274c72c));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c6cc),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c65f8);
  return;
}



/* Entry: 10662c5e4; end: 10662c5fb; -[SCUnifiedProfileFlatlandViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c5e4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274c6a4),PTR_s_addListener__11259c008);
    return;
  }
  return;
}



/* Entry: 10662c5fc; end: 10662c613; -[SCUnifiedProfileFlatlandViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c5fc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274c6a4),PTR_s_removeListener__112628e00);
    return;
  }
  return;
}



/* Entry: 10662c614; end: 10662c66b; -[SCUnifiedProfileFlatlandViewController dismissUnifiedProfile] */

void FUN_10662c614(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10662c66c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10662c66c; end: 10662c6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c66c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11274c70c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10662c6b4; end: 10662c857; -[SCUnifiedProfileFlatlandViewController dismissUnifiedProfileAnimated:completionBlock:] */

void FUN_10662c6b4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10662c74c;
  puStack_50 = &UNK_1108523f8;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10662c858; end: 10662c86b;  */

void FUN_10662c858(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010662c864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10662c86c; end: 10662c89b; -[SCUnifiedProfileFlatlandViewController unifiedProfileView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c86c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274c720);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10662c89c; end: 10662c89f; -[SCUnifiedProfileFlatlandViewController preferredStatusBarStyle] */

undefined8 FUN_10662c89c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10662c8a0; end: 10662c8a7; -[SCUnifiedProfileFlatlandViewController prefersStatusBarHidden] */

undefined8 FUN_10662c8a0(void)

{
  return 0;
}



/* Entry: 10662c8a8; end: 10662c8af; -[SCUnifiedProfileFlatlandViewController preferredStatusBarUpdateAnimation] */

undefined8 FUN_10662c8a8(void)

{
  return 1;
}



/* Entry: 10662c8b0; end: 10662c97f; -[SCUnifiedProfileFlatlandViewController _updateStatusBarAppearanceAnimated:] */

void FUN_10662c8b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2258;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  if (param_3 != 0) {
    func_0x00010c106ee0(param_1);
  }
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10662c980; end: 10662c987; -[SCUnifiedProfileFlatlandViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_10662c980(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStatusBarAppearanceAnimat_112595c40,0)
  ;
  return;
}



/* Entry: 10662c988; end: 10662c9b3; -[SCUnifiedProfileFlatlandViewController navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_10662c988(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    _objc_opt_new(PTR_PTR_1126cc400);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10662c9b4; end: 10662c9b7; -[SCUnifiedProfileFlatlandViewController didSetupSections:] */

void FUN_10662c9b4(void)

{
  return;
}



/* Entry: 10662c9b8; end: 10662c9db; -[SCUnifiedProfileFlatlandViewController didUpdateSectionsWithAnimationFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c6a0),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098,
             &PTR____CFConstantStringClassReference_110eb73d8,0,0);
  return;
}



/* Entry: 10662c9dc; end: 10662c9df; -[SCUnifiedProfileFlatlandViewController didTearDownSections:] */

void FUN_10662c9dc(void)

{
  return;
}



/* Entry: 10662c9e0; end: 10662c9e3; -[SCUnifiedProfileFlatlandViewController presentingViewControllerForSection] */

void FUN_10662c9e0(void)

{
  return;
}



/* Entry: 10662c9e4; end: 10662ca67; -[SCUnifiedProfileFlatlandViewController handleNotificationWhenReady:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_1126a4ef0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274c6b4);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010bfd19c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10662ca68; end: 10662ca8b; -[SCUnifiedProfileFlatlandViewController scrollViewWillBeginDragging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662ca68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c6a0),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098,
             &PTR____CFConstantStringClassReference_110eb7358,0,0);
  return;
}



/* Entry: 10662ca8c; end: 10662cb1f; -[SCUnifiedProfileFlatlandViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662ca8c(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + _DAT_11274c6d0) & 1) == 0) {
    func_0x00010c0d83c0(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(ulong *)(param_1 + _DAT_11274c6d4);
    func_0x00010b09cfe0();
    if ((long)uVar1 < 0) {
      func_0x00010bf9b4a0(PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (uVar1 == 0) {
      func_0x00010bf9b820(PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf9b4c0((double)uVar1,PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10662cb20; end: 10662cb73; -[SCUnifiedProfileFlatlandViewController exit:] */

void FUN_10662cb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  func_0x00010bf098c0(puVar1);
  func_0x00010bf84a00(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10662cb74; end: 10662cb7b; -[SCUnifiedProfileFlatlandViewController shouldDismissViewControllerLater] */

undefined8 FUN_10662cb74(void)

{
  return 1;
}



/* Entry: 10662cb7c; end: 10662cb8b; -[SCUnifiedProfileFlatlandViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10662cb7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c6c0);
}



/* Entry: 10662cb8c; end: 10662cbe3; -[SCUnifiedProfileFlatlandViewController defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662cb8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11274c6bc);
  func_0x00010bfcbb00();
  if ((lVar1 == 0xb8) || (lVar1 == 0x13a)) {
    func_0x00010bf5bc60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1164a0(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10662cbe4; end: 10662cd53; -[SCUnifiedProfileFlatlandViewController _horizontalSwipeDecisionForView:touchLocationInView:] */

undefined8
FUN_10662cbe4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  
  _objc_retain(param_6);
  if (param_6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_6;
    func_0x00010bfe3a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    if ((uVar2 != 0) && (uVar2 != param_6)) {
      bVar7 = false;
      bVar6 = false;
      uVar4 = uVar2;
      do {
        puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
        _objc_retain(uVar4);
        _objc_opt_class(puVar3);
        uVar2 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar3);
        uVar1 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar4);
        dVar8 = param_1;
        if ((uVar2 & 1) != 0) {
          func_0x00010bf4d5e0(uVar4);
          dVar8 = param_1;
          func_0x00010bf20c00(uVar4);
          if (param_3 < param_1) {
            func_0x00010bf4cdc0(uVar4);
            if (dVar8 <= 0.5) {
              bVar6 = true;
            }
            bVar7 = true;
          }
        }
        uVar2 = uVar4;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar1);
      } while ((uVar2 != 0) && (uVar4 = uVar2, param_1 = dVar8, uVar2 != param_6));
      uVar5 = 2;
      if (!bVar7) {
        uVar5 = 0;
      }
      if (bVar6) {
        uVar5 = 1;
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return uVar5;
}



/* Entry: 10662cd54; end: 10662cf07; -[SCUnifiedProfileFlatlandViewController _didCreateFlatlandView:forContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662cd54(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274c6d4);
  func_0x000108fab140();
  lVar4 = (long)_DAT_11274c720;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar3);
  func_0x00010c182b00(param_4);
  lVar4 = param_1 + _DAT_11274c70c;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c117520();
  _objc_release(lVar4);
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5548);
  _objc_release(param_3);
  uVar1 = (uint)lVar4 ^ 1;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274c6d8);
    lVar4 = param_3;
    func_0x00010c295200(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_48);
    uStack_58 = uVar3;
    uStack_50 = uVar2;
    _objc_opt_class(PTR_PTR_1126cc3d8);
    func_0x00010c1275a0(lVar4);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10662cf08; end: 10662d20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662cf08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_5 + _DAT_11274c6ac);
    _objc_opt_respondsToSelector(uVar1,PTR_s_disableProfileCardBackground_1125bdb30);
    if ((uVar1 & 1) != 0) {
      func_0x00010bf80620();
    }
    func_0x000108fab210();
    func_0x000108fab210();
    puVar2 = PTR_PTR_1126cc3d8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    lVar5 = (long)_DAT_11274c704;
    func_0x000108fab1cc();
    func_0x000108fab224();
    func_0x00010c0143c0(param_1,param_2,param_3,param_4);
    lVar9 = (long)_DAT_11274c708;
    uVar6 = *(undefined8 *)(param_5 + lVar9);
    *(undefined **)(param_5 + lVar9) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126cc408;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010bf40120(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff8a0();
    lVar8 = (long)_DAT_11274c72c;
    uVar7 = *(undefined8 *)(param_5 + lVar8);
    *(undefined **)(param_5 + lVar8) = puVar2;
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar8));
    uVar6 = *(undefined8 *)(param_5 + lVar5);
    FUN_10662d20c(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4580(*(undefined8 *)(param_5 + lVar8));
    _objc_release(uVar6);
    func_0x00010beb04c0(param_5);
    lVar5 = (long)_DAT_11274c70c;
    uVar1 = param_5 + lVar5;
    _objc_loadWeakRetained();
    uVar4 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) {
      lVar5 = param_5 + lVar5;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c117480();
      _objc_release(lVar5);
    }
    uVar6 = *(undefined8 *)(param_5 + lVar9);
    _objc_retain(uVar6);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10662d20c; end: 10662d257;  */

void FUN_10662d20c(ulong param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_1 < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_1109306b0)[param_1];
  }
  else {
    ppuVar1 = &PTR_PTR_110930a08;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10662d258; end: 10662d31f; -[SCUnifiedProfileFlatlandViewController _setupTTUTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cc410;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274c704);
  FUN_10662d20c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274c708);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274c72c);
  func_0x00010c22ff60(uVar4);
  func_0x00010c034680(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd8f98,uVar2,uVar3,
                      param_1,uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274c730);
  *(undefined **)(param_1 + _DAT_11274c730) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10662d320; end: 10662d32f; -[SCUnifiedProfileFlatlandViewController sectionTypeAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c156930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c72c),PTR_s_sectionTypeAtIndex__112633468);
  return;
}



/* Entry: 10662d330; end: 10662d347; -[SCUnifiedProfileFlatlandViewController flatlandView:willDisplayCellAtSection:itemIndex:cellFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd07d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c730),
             PTR_s_handleCellDisplayAtSection_itemI_1125d1b98,param_4,param_5);
  return;
}



/* Entry: 10662d348; end: 10662d35f; -[SCUnifiedProfileFlatlandViewController flatlandView:willDisplaySupplementaryAtSection:elementKind:viewFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c730),
             PTR_s_handleSupplementaryDisplayAtSect_1125d2478,param_4,param_5);
  return;
}



/* Entry: 10662d360; end: 10662d37f; -[SCUnifiedProfileFlatlandViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d360(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274c70c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10662d380; end: 10662d393; -[SCUnifiedProfileFlatlandViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d380(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274c70c,param_3);
  return;
}



/* Entry: 10662d394; end: 10662d3a3; -[SCUnifiedProfileFlatlandViewController eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10662d394(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c6a0);
}



/* Entry: 10662d3a4; end: 10662d3b3; -[SCUnifiedProfileFlatlandViewController isOverlayPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10662d3a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274c698);
}



/* Entry: 10662d3b4; end: 10662d3c3; -[SCUnifiedProfileFlatlandViewController setIsOverlayPresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d3b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274c698) = param_3;
  return;
}



/* Entry: 10662d3c4; end: 10662d55f; -[SCUnifiedProfileFlatlandViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d3c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274c6a0,0);
  _objc_destroyWeak(param_1 + _DAT_11274c70c);
  _objc_storeStrong(param_1 + _DAT_11274c728,0);
  _objc_storeStrong(param_1 + _DAT_11274c6f8,0);
  _objc_storeStrong(param_1 + _DAT_11274c6f4,0);
  _objc_storeStrong(param_1 + _DAT_11274c6e8,0);
  _objc_storeStrong(param_1 + _DAT_11274c6f0,0);
  _objc_storeStrong(param_1 + _DAT_11274c6ec,0);
  _objc_storeStrong(param_1 + _DAT_11274c6e0,0);
  _objc_storeStrong(param_1 + _DAT_11274c6a8,0);
  _objc_storeStrong(param_1 + _DAT_11274c6dc,0);
  _objc_storeStrong(param_1 + _DAT_11274c6d4,0);
  _objc_storeStrong(param_1 + _DAT_11274c6cc,0);
  _objc_storeStrong(param_1 + _DAT_11274c730,0);
  _objc_storeStrong(param_1 + _DAT_11274c708,0);
  _objc_storeStrong(param_1 + _DAT_11274c720,0);
  _objc_storeStrong(param_1 + _DAT_11274c72c,0);
  _objc_storeStrong(param_1 + _DAT_11274c6c4,0);
  _objc_storeStrong(param_1 + _DAT_11274c6bc,0);
  _objc_storeStrong(param_1 + _DAT_11274c6b8,0);
  _objc_storeStrong(param_1 + _DAT_11274c6b4,0);
  _objc_storeStrong(param_1 + _DAT_11274c6b0,0);
  _objc_storeStrong(param_1 + _DAT_11274c6ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c6a4,0);
  return;
}



/* Entry: 10662d560; end: 10662d62b; -[SCUnifiedProfileFlatlandViewControllerContainerView setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d560(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11274c69c;
  ppuVar1 = *(undefined ***)(param_1 + lVar4);
  if (ppuVar1 != (undefined **)0x0 && ppuVar1 != param_3) {
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e53938;
    }
    else {
      ppuVar2 = param_3;
      _objc_opt_class(param_3);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined ***)(param_1 + lVar4) = param_3;
  _objc_release(uVar3);
  if (param_3 != (undefined **)0x0) {
    func_0x00010befbb60(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10662d62c; end: 10662d683; -[SCUnifiedProfileFlatlandViewControllerContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d62c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2260;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11274c69c));
  return;
}



/* Entry: 10662d684; end: 10662d693; -[SCUnifiedProfileFlatlandViewControllerContainerView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10662d684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c69c);
}



/* Entry: 10662d694; end: 10662d6a7; -[SCUnifiedProfileFlatlandViewControllerContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662d694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c69c,0);
  return;
}



/* Entry: 10662d6a8; end: 10662d843; -[SCUnifiedProfileHeaderCoordinator initWithHeaderView:headerDataProvider:] */

undefined8 *
FUN_10662d6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f2268;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
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
    func_0x00010c18b5e0(puVar1[2]);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = puVar1[3];
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10662d844; end: 10662d86f;  */

void FUN_10662d844(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10662d870; end: 10662d933; -[SCUnifiedProfileHeaderCoordinator dataProviderDidUpdate:] */

void FUN_10662d870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10662d934; end: 10662d95f;  */

void FUN_10662d934(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10662d960; end: 10662da07; -[SCUnifiedProfileHeaderCoordinator _updateHeaderViewWithDataProvider] */

void FUN_10662d960(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfe02a0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10662da08; end: 10662dac3;  */

void FUN_10662da08(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10662dac4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x00010bcbe2c4("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10662dac4; end: 10662daf7;  */

void FUN_10662dac4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10662daf8; end: 10662daff; -[SCUnifiedProfileHeaderCoordinator _updateHeaderViewWithViewModel:] */

void FUN_10662daf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setViewModel__1126663d8)
  ;
  return;
}



/* Entry: 10662db00; end: 10662db3b; -[SCUnifiedProfileHeaderCoordinator .cxx_destruct] */

void FUN_10662db00(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10662db3c; end: 10662dba7; +[SCProfileCollectionViewUpdaterFactory updaterWithCollectionView:circumstanceEngine:] */

void FUN_10662db3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc418;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfff860();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10662dba8; end: 10662dc4b; -[SCProfileScrollFixCollectionViewUpdater _scrollToOffsetIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662dba8(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = (long)_DAT_11277f14c;
  dVar2 = param_2;
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar1));
  dVar3 = 1.0;
  if (1.0 <= ABS(dVar2 - param_2)) {
    func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar1));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
    if (param_2 <= dVar3 + param_4 * -0.5) {
      func_0x00010c1822e0(param_1,param_2,*(undefined8 *)(param_5 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_5 + lVar1),PTR_s_layoutIfNeeded_112600d80);
      return;
    }
  }
  return;
}



/* Entry: 10662dc4c; end: 10662dcbf; -[SCProfileScrollFixCollectionViewUpdater _performBatchUpdateInvalidateCollectionViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662dc4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11277f14c));
  puStack_38 = PTR_PTR_1126f2270;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s__performBatchUpdateInvalidateCol_112579f20);
  func_0x00010be9c160(param_1,param_2,param_3);
  return;
}



/* Entry: 10662dcc0; end: 10662dd3b; -[SCProfileScrollFixCollectionViewUpdater _handleResultsCollectionViewUpdateCompletionWithFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662dcc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11277f14c));
  puStack_38 = PTR_PTR_1126f2270;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s__handleResultsCollectionViewUpda_1125696e0,param_5);
  func_0x00010be9c160(param_1,param_2,param_3);
  return;
}



/* Entry: 10662dd3c; end: 10662ddeb; -[SCProfileScrollFixCollectionViewUpdater _handleResultCollectionViewUpdateWithUpdateBlock:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662dd3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11277f14c);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf4cdc0(uVar1);
  puStack_48 = PTR_PTR_1126f2270;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s__handleResultCollectionViewUpdat_1125696c0,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010be9c160(param_1,param_2,param_3);
  return;
}



/* Entry: 10662ddec; end: 10662de9f; +[SCProfileSectionCollectionViewUpdater typesWithAllowedCustomInsetsAndOffsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10662ddec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dd99f8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f12298;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f12198;
  uVar5 = 3;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_80;
  _objc_retain(uVar5);
  puStack_78 = PTR_PTR_1126f2278;
  puStack_80 = puVar1;
  _objc_msgSendSuper2(&puStack_80,PTR_s_initWithCollectionView_circumsta_1125dd7e0,puVar4,uVar5);
  if (ppuVar3 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11274c740);
    *(undefined **)((long)ppuVar3 + (long)_DAT_11274c740) = puVar2;
    _objc_release(uVar6);
    func_0x00010bea6380(0x3fa999999999999a,ppuVar3);
    puVar2 = PTR_PTR_1126b1130;
    func_0x00010c07daa0();
    *(char *)((long)ppuVar3 + (long)_DAT_11274c744) = (char)puVar2;
  }
  _objc_release(uVar5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 10662dea0; end: 10662df63; -[SCProfileSectionCollectionViewUpdater initWithCollectionView:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10662dea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2278;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCollectionView_circumsta_1125dd7e0,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c740);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c740) = puVar2;
    _objc_release(uVar3);
    func_0x00010bea6380(0x3fa999999999999a,puVar1);
    puVar2 = PTR_PTR_1126b1130;
    func_0x00010c07daa0();
    *(char *)((long)puVar1 + (long)_DAT_11274c744) = (char)puVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10662df64; end: 10662df67; -[SCProfileSectionCollectionViewUpdater setPendingSectionDelay:] */

void FUN_10662df64(void)

{
  return;
}



/* Entry: 10662df68; end: 10662df9b; -[SCProfileSectionCollectionViewUpdater _setPendingSectionDelay:] */

void FUN_10662df68(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2278;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setPendingSectionDelay__112654340);
  return;
}



/* Entry: 10662df9c; end: 10662e037; -[SCProfileSectionCollectionViewUpdater collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10662df9c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126f2278;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_collectionView_numberOfItemsInSe_1125adae0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274c740);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  if (plVar1 == (long *)0x0) {
    func_0x00010befa120(uVar3);
  }
  else {
    func_0x00010c12d360();
  }
  _objc_release(puVar2);
  return (undefined1 *)plVar1;
}



/* Entry: 10662e038; end: 10662e2e7; -[SCProfileSectionCollectionViewUpdater collectionView:layout:insetForSectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10662e038(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long in_x4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126f2278;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_collectionView_layout_insetForSe_1125ada48);
  lVar8 = (long)_DAT_11274c740;
  uVar5 = *(ulong *)(param_1 + lVar8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar2);
  uVar10 = 0;
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0x4018000000000000;
    if ((uVar5 != 0) &&
       (uVar7 = uVar5,
       _objc_opt_respondsToSelector(uVar5,PTR_s_shouldClingsToPreviousSection_1126694b0),
       puVar2 = PTR_DAT_1126a5550, (uVar7 & 1) != 0)) {
      _objc_retain(uVar5);
      uVar7 = uVar5;
      func_0x00010010fab4(uVar5,puVar2);
      _objc_release(uVar5);
      if ((int)uVar7 != 0) {
        uVar7 = uVar5;
        func_0x00010c22ea20();
        uVar10 = 0xc018000000000000;
        if ((int)uVar7 == 0) {
          uVar10 = 0x4018000000000000;
        }
      }
    }
    uVar9 = 0;
    if (in_x4 < 1) {
      uVar10 = 0;
    }
    uVar7 = uVar5;
    _objc_opt_respondsToSelector(uVar5,PTR_s_sectionInfo_112633260);
    if ((uVar7 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5;
      func_0x00010c156100();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = uVar7;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar1 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    uVar6 = uVar1;
    func_0x00010c08fa60();
    if (uVar6 != 0) {
      puVar2 = PTR_PTR_1126cc418;
      func_0x00010c27e160();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf4b900();
      _objc_release(puVar2);
      if ((int)puVar4 != 0) {
        uVar6 = *(ulong *)(param_1 + lVar8);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(puVar2);
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar5;
          func_0x00010c156140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar6 != 0) {
            uVar6 = uVar5;
            func_0x00010c156140(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc2aa0();
            _objc_release(uVar6);
            uVar10 = uVar9;
          }
        }
      }
    }
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
  return uVar10;
}



/* Entry: 10662e2e8; end: 10662e337; -[SCProfileSectionCollectionViewUpdater collectionViewSectionUpdateIfNeeded:] */

void FUN_10662e2e8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_collectionViewSectionUpdateIfNee_1125adc28);
  func_0x00010bea6380(0x3fc999999999999a,param_1);
  return;
}



/* Entry: 10662e338; end: 10662e387; -[SCProfileSectionCollectionViewUpdater setSectionWithConfigurations:animated:] */

void FUN_10662e338(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setOrUpdateSectionWithConfigurat_112653230);
  func_0x00010bea6380(0x3fc999999999999a,param_1);
  return;
}



/* Entry: 10662e388; end: 10662e3d7; -[SCProfileSectionCollectionViewUpdater setOrUpdateSectionWithConfigurations:animated:] */

void FUN_10662e388(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setOrUpdateSectionWithConfigurat_112653230);
  func_0x00010bea6380(0x3fc999999999999a,param_1);
  return;
}



/* Entry: 10662e3d8; end: 10662e4a3; -[SCProfileSectionCollectionViewUpdater _scrollToOffsetIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662e3d8(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = (long)_DAT_11277f14c;
  dVar2 = param_2;
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar1));
  dVar3 = 1.0;
  if (1.0 <= ABS(dVar2 - param_2)) {
    func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar1));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
    if (param_2 <= dVar3 + param_4 * -0.5) {
      func_0x00010c1822e0(param_1,param_2,*(undefined8 *)(param_5 + lVar1));
      if (*(char *)(param_5 + _DAT_11274c744) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_5 + lVar1),PTR_s_setNeedsLayout_1126509b0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_5 + lVar1),PTR_s_layoutIfNeeded_112600d80);
      return;
    }
  }
  return;
}



/* Entry: 10662e4a4; end: 10662e517; -[SCProfileSectionCollectionViewUpdater _performBatchUpdateInvalidateCollectionViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662e4a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11277f14c));
  puStack_38 = PTR_PTR_1126f2278;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s__performBatchUpdateInvalidateCol_112579f20);
  func_0x00010be9c160(param_1,param_2,param_3);
  return;
}



/* Entry: 10662e518; end: 10662e593; -[SCProfileSectionCollectionViewUpdater _handleResultsCollectionViewUpdateCompletionWithFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662e518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11277f14c));
  puStack_38 = PTR_PTR_1126f2278;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s__handleResultsCollectionViewUpda_1125696e0,param_5);
  func_0x00010be9c160(param_1,param_2,param_3);
  return;
}



/* Entry: 10662e594; end: 10662e6ab; -[SCProfileSectionCollectionViewUpdater _handleResultCollectionViewUpdateWithUpdateBlock:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662e594(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  lVar6 = (long)_DAT_11277f14c;
  uVar4 = *(undefined8 *)(param_3 + lVar6);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf4cdc0(uVar4);
  puVar2 = PTR_PTR_1126cc3c0;
  uVar5 = *(ulong *)(param_3 + lVar6);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  func_0x00010c1f5e80(uVar1);
  puStack_58 = PTR_PTR_1126f2278;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s__handleResultCollectionViewUpdat_1125696c0,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c1f5e80(uVar1);
  func_0x00010be9c160(param_1,param_2,param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10662e6ac; end: 10662e6bf; -[SCProfileSectionCollectionViewUpdater .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662e6ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c740,0);
  return;
}



/* Entry: 10662e6c0; end: 10662e70b; +[SCProfileSectionNoUpdatesRegistry wrap:] */

void FUN_10662e6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b41b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0437e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10662e70c; end: 10662e77f; -[SCProfileSectionNoUpdatesRegistry initWithSections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10662e70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2280;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274c748),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10662e780; end: 10662e86b; -[SCProfileSectionNoUpdatesRegistry register:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662e780(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    lStack_40 = param_3;
    _objc_retain(param_3);
    func_0x00010bf0a140(puVar1,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar1);
    param_1 = param_1 + _DAT_11274c748;
    _objc_loadWeakRetained(param_1);
    func_0x00010c125b60();
    _objc_release(param_1);
    _objc_release(puVar2);
    param_1 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274c748);
  return;
}



/* Entry: 10662e86c; end: 10662e87b; -[SCProfileSectionNoUpdatesRegistry .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662e86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274c748);
  return;
}



/* Entry: 10662e87c; end: 10662e903; -[SCProfileThrottlingCollectionViewUpdater initWithCollectionView:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10662e87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2288;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCollectionView_activatei_1125dd7d0,param_3,1);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000108fab154();
    *(char *)((long)puVar1 + (long)_DAT_11274c74c) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10662e904; end: 10662e92f; -[SCProfileThrottlingCollectionViewUpdater collectionViewSectionUpdateIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662e904(long param_1)

{
  if (*(char *)(param_1 + _DAT_11274c750) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11274c754) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be04070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispatchUpdateCollectionViewIfN_11255e9b8);
  return;
}



/* Entry: 10662e930; end: 10662e963; -[SCProfileThrottlingCollectionViewUpdater _oldCollectionViewSectionUpdateIfNeededImpl:] */

void FUN_10662e930(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2288;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_collectionViewSectionUpdateIfNee_1125adc28);
  return;
}



/* Entry: 10662e964; end: 10662e97b; -[SCProfileThrottlingCollectionViewUpdater _dispatchUpdateCollectionViewIfNeeded] */

void FUN_10662e964(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f91111111111111,param_1,PTR_s_performSelector_withObject_after_11261bdf0,
             PTR_s__callUpdateCollectionViewIfNeede_1125315b8,0);
  return;
}



/* Entry: 10662e97c; end: 10662e9b7; -[SCProfileThrottlingCollectionViewUpdater _callUpdateCollectionViewIfNeeded] */

void FUN_10662e97c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                      PTR_s__callUpdateCollectionViewIfNeede_1125315b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bed56f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCollectionViewIfNeeded_112592f60);
  return;
}



/* Entry: 10662e9b8; end: 10662ea4b; -[SCProfileThrottlingCollectionViewUpdater collectionViewSection:didUpdateLayoutWithInteraction:] */

void FUN_10662e9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s__superCollectionViewSectionDidUp_11258fd68;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f40(0x3f91111111111111,param_1,param_2,puVar1,puVar2);
  }
  else {
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec8f00(param_1,param_2,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10662ea4c; end: 10662eaef; -[SCProfileThrottlingCollectionViewUpdater _superCollectionViewSectionDidUpdateLayoutWithInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662ea4c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  long lStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  plVar2 = &lStack_40;
  func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                      PTR_s__superCollectionViewSectionDidUp_11258fd68,0);
  bVar1 = *(char *)(param_1 + _DAT_11274c74c) != '\x01';
  if (bVar1) {
    puStack_38 = PTR_PTR_1126f2288;
    lStack_40 = param_1;
  }
  else {
    puStack_28 = PTR_PTR_1126f2288;
    plVar2 = &lStack_30;
    lStack_30 = param_1;
  }
  _objc_msgSendSuper2(plVar2,PTR_s_collectionViewSection_didUpdateL_1125adc00,0,
                      !bVar1 || param_3 != 0);
  return;
}



/* Entry: 10662eaf0; end: 10662eb6f; -[SCProfileThrottlingCollectionViewUpdater _applyConfigurationsForSectionWithConfigurations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662eaf0(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11274c754;
  *(undefined1 *)(param_1 + lVar2) = 0;
  lVar3 = (long)_DAT_11274c750;
  *(undefined1 *)(param_1 + lVar3) = 1;
  puStack_38 = PTR_PTR_1126f2288;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s__applyConfigurationsForSectionWi_112551128);
  *(undefined1 *)(param_1 + lVar3) = 0;
  cVar1 = *(char *)(param_1 + lVar2);
  *(undefined1 *)(param_1 + lVar2) = 0;
  if (cVar1 == '\x01') {
    func_0x00010be04060(param_1);
  }
  return;
}



/* Entry: 10662eb70; end: 10662ec13; +[SCProfileSectionProviderWithConfig newWithProvider:configuration:] */

undefined1 *
FUN_10662eb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2290;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_new_112613b20);
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



/* Entry: 10662ec14; end: 10662ec43; -[SCProfileSectionProviderWithConfig .cxx_destruct] */

void FUN_10662ec14(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10662ec44; end: 10662ece3;  */

void FUN_10662ec44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10662ece4;
  puStack_48 = &UNK_1109306f8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x000100504554(param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10662ece4; end: 10662ee7b;  */

void FUN_10662ece4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  func_0x00010c1bd8e0(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010beee460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbae0(uVar6);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10662ee54;
  }
  uVar2 = uVar1;
  func_0x00010010fab4(uVar1,PTR_DAT_1126a4e90);
  uVar3 = uVar1;
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  func_0x00010c161980(uVar3);
  _objc_release(uVar3);
  uVar3 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_configuration_1125af300);
  if ((uVar3 & 1) == 0) {
LAB_10662edbc:
    uVar3 = 0;
    FUN_106639468(0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) goto LAB_10662edbc;
  }
  puVar4 = PTR_PTR_1126b1220;
  _objc_alloc(PTR_PTR_1126b1220);
  func_0x00010c0ec9a0(param_2);
  func_0x00010c0322a0(puVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126cc420;
  _objc_alloc(PTR_PTR_1126cc420);
  func_0x00010c042ce0();
  puVar7 = PTR_PTR_1126cc428;
  func_0x00010c0d9620(PTR_PTR_1126cc428);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_10662ee54:
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10662ee7c; end: 10662f2e3; -[SCUnifiedProfileSectionController initWithCollectionView:collectionViewDelegate:lifecycleAnnouncer:actionHandler:sections:adjustSectionOrder:sectionBackgroundAttributor:circumstanceEngine:profileViewVisibilityObservable:] */

undefined8 *
FUN_10662ee7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_80 = PTR_PTR_1126f2298;
  puVar3 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar8 = PTR_PTR_1126cc430;
    func_0x00010c28d740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar3[1];
    puVar3[1] = puVar8;
    _objc_release(uVar6);
    func_0x00010c18b5e0(puVar3[1]);
    func_0x00010c17e720(puVar3[1]);
    bVar1 = true;
    func_0x00010c194fc0(puVar3[1]);
    puVar8 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar6 = puVar3[2];
    puVar3[2] = puVar8;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar6 = puVar3[5];
    puVar3[5] = param_5;
    _objc_release(uVar6);
    *(undefined4 *)(puVar3 + 3) = 0;
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = puVar3[4];
    puVar3[4] = puVar8;
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = puVar3[6];
    puVar3[6] = puVar8;
    _objc_release(uVar6);
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar8 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar3[9];
    puVar3[9] = puVar8;
    _objc_release(uVar6);
    uVar6 = param_8;
    _objc_retainBlock();
    uVar7 = puVar3[0xb];
    puVar3[0xb] = uVar6;
    _objc_release(uVar7);
    _objc_storeWeak(puVar3 + 0xc,param_6);
    _objc_retain(param_9);
    uVar6 = puVar3[10];
    puVar3[10] = param_9;
    _objc_release(uVar6);
    *(undefined2 *)(puVar3 + 0xd) = 0;
    _objc_retain(param_11);
    uVar6 = puVar3[7];
    puVar3[7] = param_11;
    _objc_release(uVar6);
    uVar6 = param_10;
    func_0x000108fab154();
    *(char *)(puVar3 + 0x10) = (char)uVar6;
    _objc_retain(param_10);
    uVar4 = puVar3[0x11];
    puVar3[0x11] = param_10;
    _objc_release();
    func_0x000100150168();
    if ((uVar4 & 1) == 0) {
      iVar2 = 1000;
      _arc4random_uniform();
      bVar1 = iVar2 == 0;
    }
    *(bool *)(puVar3 + 0x13) = bVar1;
    _objc_initWeak(auStack_90,puVar3);
    puVar8 = PTR_PTR_1126b1130;
    func_0x00010c06f820();
    if ((int)puVar8 == 0) {
      puVar8 = (undefined *)puVar3[2];
      _objc_retain(puVar8);
    }
    else {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10662f2e4;
    puStack_a8 = &UNK_110844b50;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_6);
    uStack_a0 = param_6;
    func_0x00010c297260(param_7);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = puVar3[0xf];
    puVar3[0xf] = puVar5;
    _objc_release(uVar6);
    uVar6 = puVar3[7];
    _objc_copyWeak(auStack_c8,auStack_90);
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_90);
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
  return puVar3;
}



/* Entry: 10662f2e4; end: 10662f3af;  */

void FUN_10662f2e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf51e00(param_2);
  _objc_release(param_2);
  func_0x00010bec7160(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


