/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106891cdc; end: 106891d97; -[SCSearchPulldownUIContainer initWithPresentingViewController:wantsInteractivePresentation:] */

undefined1 * FUN_106891cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f3990;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ce8d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ce8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    func_0x00010c224700(*(undefined8 *)((long)puVar1 + 0x20));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106891d98; end: 106891f17; -[SCSearchPulldownUIContainer attachUI:] */

void FUN_106891d98(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5690);
  if ((param_3 == 0) || ((uVar1 & 1) == 0)) {
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained(uVar1);
    func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c10eda0(uVar1);
  }
  else {
    func_0x00010c1c8b80(param_3);
    func_0x00010c219b20(param_3);
    _objc_retain(param_3);
    func_0x00010c1f8cc0(*(undefined8 *)(param_1 + 0x18));
    _objc_storeWeak(param_1 + 0x10,param_3);
    func_0x00010c1e13e0(*(undefined8 *)(param_1 + 0x20));
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    func_0x00010c09c7a0(param_3);
    _objc_retain(param_1);
    _objc_retain(param_3);
    func_0x00010c0e48e0(param_3);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(param_1);
    uVar1 = param_3;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106891f18; end: 106891f73; -[SCSearchPulldownUIContainer detachUI:] */

void FUN_106891f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf84b00(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106891f74; end: 106891f9b; -[SCSearchPulldownUIContainer animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106891f74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106891f9c; end: 106891fc3; -[SCSearchPulldownUIContainer animationControllerForDismissedController:] */

void FUN_106891f9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106891fc4; end: 10689200f; -[SCSearchPulldownUIContainer interactionControllerForPresentation:] */

void FUN_106891fc4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c1b3820(*(undefined8 *)(param_1 + 0x20),param_2,1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a1a60();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106892010; end: 10689205b; -[SCSearchPulldownUIContainer interactionControllerForDismissal:] */

void FUN_106892010(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c1b3820(*(undefined8 *)(param_1 + 0x20),param_2,0);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a1a60();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10689205c; end: 106892083; -[SCSearchPulldownUIContainer interactiveTransition] */

void FUN_10689205c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106892084; end: 10689208b; -[SCSearchPulldownUIContainer interactionController] */

undefined8 FUN_106892084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10689208c; end: 1068920cb; -[SCSearchPulldownUIContainer .cxx_destruct] */

void FUN_10689208c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1068920cc; end: 10689212f;  */

void FUN_1068920cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106892130; end: 10689215b;  */

void FUN_106892130(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed68c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10689215c; end: 106892247; -[SCCustomStatusBarStyleContextController _updateCustomStatusBarStyleContext] */

void FUN_10689215c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_retain();
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    do {
      uVar2 = uVar4;
      func_0x00010c230f40();
      uVar3 = uVar4;
      if ((uVar2 & 1) != 0) break;
      _objc_retain(uVar4);
      _objc_release(uVar1);
      uVar1 = uVar4;
      func_0x00010c10f960();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010c230f40(), (uVar2 & 1) != 0)) {
        func_0x00010bf38ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar1);
        uVar3 = uVar1;
      }
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar1 = uVar4;
      uVar4 = uVar3;
    } while (uVar3 != 0);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106892248; end: 106892353; -[SCCustomStatusBarStyleContextController _addObserver:] */

void FUN_106892248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010befa200(*(undefined8 *)(param_1 + 8));
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  func_0x00010c1cbd20(param_1);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126b0418;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106892354; end: 10689239b;  */

void FUN_106892354(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d560(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10689239c; end: 1068923a3; -[SCCustomStatusBarStyleContextController customStatusBarScopeExposer] */

undefined8 FUN_10689239c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068923a4; end: 1068923db; -[SCCustomStatusBarStyleContextController .cxx_destruct] */

void FUN_1068923a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068923dc; end: 1068923df;  */

void FUN_1068923dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf61c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_customStatusBarStyleForViewContr_1125b60c8);
  return;
}



/* Entry: 1068923e0; end: 106892433;  */

undefined8 FUN_1068923e0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_1126a4f48;
  _objc_retain();
  lVar3 = param_1;
  func_0x00010010fab4(param_1,puVar2);
  _objc_release(param_1);
  uVar1 = 1;
  if (((uint)(param_1 != 0) & (uint)lVar3) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106892434; end: 1068925af;  */

void FUN_106892434(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar5 = PTR_DAT_1126a4f48;
        uVar7 = *(ulong *)(uVar8 * 8);
        _objc_retain(uVar7);
        uVar4 = uVar7;
        func_0x00010010fab4(uVar7,puVar5);
        _objc_release(uVar7);
        if ((int)uVar4 != 0 && uVar7 != 0) {
          _objc_retain(uVar7);
          _objc_release(param_1);
          goto LAB_106892568;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      uVar3 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
  }
  _objc_retain(uVar2);
  uVar7 = uVar2;
LAB_106892568:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      _objc_retain(uVar2);
      uVar3 = uVar2;
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c230f40();
      if ((uVar8 & 1) == 0) {
        _objc_retain(uVar3);
        uVar7 = uVar3;
      }
      else {
        uVar7 = uVar2;
        func_0x00010c275140(uVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1068925b0; end: 106892767;  */

void FUN_1068925b0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c230f40();
    if ((uVar3 & 1) == 0) {
      _objc_retain(uVar2);
      uVar3 = uVar2;
    }
    else {
      uVar3 = param_1;
      func_0x00010c275140(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106892768; end: 10689282b; -[SCCommunitiesPromptNotificationScope initWithPresentingViewController:groupId:delegate:] */

undefined1 *
FUN_106892768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f39a0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10689282c; end: 106892833; -[SCCommunitiesPromptNotificationScope viewController] */

undefined8 FUN_10689282c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106892834; end: 10689283b; -[SCCommunitiesPromptNotificationScope groupId] */

undefined8 FUN_106892834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10689283c; end: 106892853; -[SCCommunitiesPromptNotificationScope delegate] */

void FUN_10689283c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106892854; end: 10689288b; -[SCCommunitiesPromptNotificationScope .cxx_destruct] */

void FUN_106892854(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10689288c; end: 1068929df; -[SCVerifiedCommunitiesOnboardingScope initWithUIContainer:delegate:sourceType:sessionId:onboardingLaunchPreset:groupId:orgId:] */

undefined1 *
FUN_10689288c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f39a8;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068929e0; end: 1068929e7; -[SCVerifiedCommunitiesOnboardingScope uiContainer] */

undefined8 FUN_1068929e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068929e8; end: 1068929ff; -[SCVerifiedCommunitiesOnboardingScope delegate] */

void FUN_1068929e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106892a00; end: 106892a07; -[SCVerifiedCommunitiesOnboardingScope sourceType] */

undefined8 FUN_106892a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106892a08; end: 106892a0f; -[SCVerifiedCommunitiesOnboardingScope sessionId] */

undefined8 FUN_106892a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106892a10; end: 106892a17; -[SCVerifiedCommunitiesOnboardingScope onboardingLaunchPreset] */

undefined8 FUN_106892a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106892a18; end: 106892a1f; -[SCVerifiedCommunitiesOnboardingScope groupId] */

undefined8 FUN_106892a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106892a20; end: 106892a27; -[SCVerifiedCommunitiesOnboardingScope orgId] */

undefined8 FUN_106892a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106892a28; end: 106892a2f; -[SCVerifiedCommunitiesOnboardingScope billboardSurface] */

undefined8 FUN_106892a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106892a30; end: 106892a37; -[SCVerifiedCommunitiesOnboardingScope setBillboardSurface:] */

void FUN_106892a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106892a38; end: 106892a93; -[SCVerifiedCommunitiesOnboardingScope .cxx_destruct] */

void FUN_106892a38(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106892a94; end: 106892aab; -[SCNavigationItemBadgeProviderScope viewTypeToNavigationItemMap] */

void FUN_106892a94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106892aac; end: 106892ad7; -[SCNavigationItemBadgeProviderScope .cxx_destruct] */

void FUN_106892aac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106892ad8; end: 106892b53;  */

void FUN_106892ad8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c078dc0();
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106892b54; end: 106892bf3; -[SCHeaderButtonProvider profileButtonItem] */

void FUN_106892b54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 0x48);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf22aa0(uVar1,param_2,puVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar3;
    _objc_release(uVar2);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  else {
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106892bf4; end: 106892c9b; -[SCHeaderButtonProvider searchButtonItem] */

void FUN_106892bf4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x50);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126ce8e8;
    _objc_alloc(PTR_PTR_1126ce8e8);
    func_0x00010bff9fa0();
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf21f80(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106892c9c; end: 106892d47; -[SCHeaderButtonProvider addFriendsButtonItem] */

void FUN_106892c9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x60);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126ce8f0;
    _objc_alloc(PTR_PTR_1126ce8f0);
    func_0x00010bff9fc0();
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf21f80(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106892d48; end: 106892d97; -[SCHeaderButtonProvider settingsButtonItem] */

void FUN_106892d48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x70);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106892d98; end: 106892e73; -[SCHeaderButtonProvider mapButtonItemWithMapAttribution:] */

void FUN_106892d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c2d70;
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 == 0) {
    _objc_retain(param_3);
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126ce8f8;
    _objc_alloc(PTR_PTR_1126ce8f8);
    func_0x00010bff9f80();
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar3);
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf9d620();
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x78);
    _objc_retain(lVar4);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106892e74; end: 106892f13; -[SCHeaderButtonProvider mapProfileButtonItem] */

void FUN_106892e74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 0xb8);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf22aa0(uVar1,param_2,puVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined **)(param_1 + 0xb8) = puVar3;
    _objc_release(uVar2);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  else {
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106892f14; end: 106892fbb; -[SCHeaderButtonProvider mapSearchButtonItem] */

void FUN_106892f14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0xc0);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126ce8e8;
    _objc_alloc(PTR_PTR_1126ce8e8);
    func_0x00010bff9fa0();
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined **)(param_1 + 0xc0) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf21f80(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = uVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106892fbc; end: 10689300b; -[SCHeaderButtonProvider mapSettingsButtonItem] */

void FUN_106892fbc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0xd0);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10689300c; end: 1068930ab; -[SCHeaderButtonProvider spotlightProfileButtonItem] */

void FUN_10689300c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 0xf0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf22aa0(uVar1,param_2,puVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined **)(param_1 + 0xf0) = puVar3;
    _objc_release(uVar2);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  else {
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068930ac; end: 106893153; -[SCHeaderButtonProvider spotlightSearchButtonItem] */

void FUN_1068930ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0xf8);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126ce8e8;
    _objc_alloc(PTR_PTR_1126ce8e8);
    func_0x00010bff9fa0();
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined **)(param_1 + 0xf8) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf21f80(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106893154; end: 1068931ff; -[SCHeaderButtonProvider friendsFeedAddFriendsButtonItem] */

void FUN_106893154(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x108);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126ce8f0;
    _objc_alloc(PTR_PTR_1126ce8f0);
    func_0x00010bff9fc0();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf21f80(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    _objc_release(uVar3);
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    *(undefined **)(param_1 + 0x108) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106893200; end: 1068932ab; -[SCHeaderButtonProvider discoverAddFriendsButtonItem] */

void FUN_106893200(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x128);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126ce8f0;
    _objc_alloc(PTR_PTR_1126ce8f0);
    func_0x00010bff9fc0();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf21f80(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    _objc_release(uVar3);
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x128);
    *(undefined **)(param_1 + 0x128) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068932ac; end: 106893357; -[SCHeaderButtonProvider spotlightAddFriendsButtonItem] */

void FUN_1068932ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x138);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126ce8f0;
    _objc_alloc(PTR_PTR_1126ce8f0);
    func_0x00010bff9fc0();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf21f80(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    _objc_release(uVar3);
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    *(undefined **)(param_1 + 0x138) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106893358; end: 106893433; -[SCHeaderButtonProvider notificationCenterButtonItemCamera] */

void FUN_106893358(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x80);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf25880();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf231e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = uVar2;
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    else {
      func_0x00010bdd6660(param_1,param_2,puVar4);
    }
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar4;
    _objc_release(uVar2);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106893434; end: 10689350f; -[SCHeaderButtonProvider notificationCenterButtonItemDiscoverFeed] */

void FUN_106893434(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x88);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf25880();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf231e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xa0) = uVar2;
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    else {
      func_0x00010bdd6660(param_1,param_2,puVar4);
    }
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar4;
    _objc_release(uVar2);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106893510; end: 1068935eb; -[SCHeaderButtonProvider notificationCenterButtonItemFriendsFeed] */

void FUN_106893510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x90);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf25880();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf231e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa8) = uVar2;
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    else {
      func_0x00010bdd6660(param_1,param_2,puVar4);
    }
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar4;
    _objc_release(uVar2);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068935ec; end: 10689368f; -[SCHeaderButtonProvider _buildNotificationCenterRebuildButtonItem:] */

void FUN_1068935ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf25880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010bf23200(lVar3,param_2,param_3,param_1);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106893690; end: 1068936f7; -[SCHeaderButtonProvider didTapProfileHeaderButton:] */

void FUN_106893690(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126ce900;
  func_0x00010bf7d200(PTR_PTR_1126ce900);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068936f8; end: 10689375f; -[SCHeaderButtonProvider didTapSearchHeaderButton:] */

void FUN_1068936f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126ce900;
  func_0x00010bf7d3e0(PTR_PTR_1126ce900);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106893760; end: 1068937c7; -[SCHeaderButtonProvider didTapAddFriendsHeaderButton:] */

void FUN_106893760(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126ce900;
  func_0x00010bf7c580(PTR_PTR_1126ce900);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068937c8; end: 10689380b; -[SCHeaderButtonProvider didTapMapHeaderButton:attribution:] */

void FUN_1068937c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126ce900;
  func_0x00010bf7ccc0(PTR_PTR_1126ce900);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10689380c; end: 10689387b; -[SCHeaderButtonProvider didTapNotificationCenterHeaderButton] */

void FUN_10689380c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126ce900;
  func_0x00010bf7cf80(PTR_PTR_1126ce900);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10689387c; end: 10689391f; -[SCHeaderButtonProvider didTapNotificationCenterButtonWithBellIconLastSeenTimestamp:bellIconIsBadged:] */

void FUN_10689387c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce900;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf7cf80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cde0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106893920; end: 106893937; -[SCHeaderButtonProvider delegate] */

void FUN_106893920(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106893938; end: 106893b2f; -[SCHeaderButtonProvider .cxx_destruct] */

void FUN_106893938(long param_1)

{
  _objc_destroyWeak(param_1 + 0x148);
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
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106893b30; end: 106893bc3; -[SCHeaderButtonServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106893b30(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752570);
  _objc_destroyWeak(param_1 + _DAT_11275256c);
  _objc_destroyWeak(param_1 + _DAT_112752568);
  _objc_storeStrong(param_1 + _DAT_112752564,0);
  _objc_storeStrong(param_1 + _DAT_112752558,0);
  _objc_destroyWeak(param_1 + _DAT_11275255c);
  _objc_destroyWeak(param_1 + _DAT_112752560);
  _objc_destroyWeak(param_1 + _DAT_112752574);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752578);
  return;
}



/* Entry: 106893bc4; end: 106894103; -[SCProfileHeaderButtonDismissTooltipView initWithBackgroundColor:dismissColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106893bc4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_b8 = PTR_PTR_1126f39c0;
  puVar1 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275257c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275257c) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112752580);
    *(undefined **)((long)puVar1 + (long)_DAT_112752580) = puVar4;
    _objc_release(uVar3);
    _objc_retain(puVar4);
    puVar5 = puVar1;
    func_0x00010be36b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar4);
    _objc_release(puVar5);
    func_0x00010c16e440(puVar4);
    func_0x00010c216160(puVar4);
    func_0x00010befbd60(puVar4);
    func_0x00010c219b60(puVar4);
    puVar6 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4028000000000000);
    _objc_release(puVar6);
    func_0x00010befbb60(puVar2);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_b0 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    puStack_a8 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    puStack_a0 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar4;
    puStack_98 = puVar17;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar4;
    puStack_90 = puVar20;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar4;
    puStack_88 = puVar23;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar4;
    puStack_80 = puVar26;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar29;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar7);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 106894104; end: 106894113; -[SCProfileHeaderButtonDismissTooltipView intrinsicContentSize] */

undefined1  [16] FUN_106894104(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4038000000000000;
  auVar1._0_8_ = 0x4040000000000000;
  return auVar1;
}



/* Entry: 106894114; end: 106894147; -[SCProfileHeaderButtonDismissTooltipView _tappedDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106894114(long param_1)

{
  param_1 = param_1 + _DAT_112752584;
  _objc_loadWeakRetained(param_1);
  func_0x00010c269b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106894148; end: 1068941c3; -[SCProfileHeaderButtonDismissTooltipView _iconXSignFillImage] */

void FUN_106894148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4030000000000000,0x4030000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068941c4; end: 1068941e3; -[SCProfileHeaderButtonDismissTooltipView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068941c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112752584);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068941e4; end: 1068941f7; -[SCProfileHeaderButtonDismissTooltipView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068941e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112752584,param_3);
  return;
}



/* Entry: 1068941f8; end: 106894243; -[SCProfileHeaderButtonDismissTooltipView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068941f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752584);
  _objc_storeStrong(param_1 + _DAT_11275257c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752580,0);
  return;
}



/* Entry: 106894244; end: 106894293; -[SCNavigationLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106894244(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752594);
  _objc_destroyWeak(param_1 + _DAT_112752590);
  _objc_destroyWeak(param_1 + _DAT_11275258c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752588);
  return;
}



/* Entry: 106894294; end: 106894297; -[SCNavigationLoggingObserver presenter:willDismiss:interactively:] */

void FUN_106894294(void)

{
  return;
}



/* Entry: 106894298; end: 10689429b; -[SCNavigationLoggingObserver presenter:didDismiss:interactively:] */

void FUN_106894298(void)

{
  return;
}



/* Entry: 10689429c; end: 1068942a7; -[SCNavigationLoggingObserver setExitEvent:] */

void FUN_10689429c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c198350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setExitEvent__112643af0);
  return;
}



/* Entry: 1068942a8; end: 1068942b3; -[SCNavigationLoggingObserver setFriendsFeedBadgeOn:] */

void FUN_1068942a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setFriendsFeedBadgeOn__112645c28);
  return;
}



/* Entry: 1068942b4; end: 1068942bf; -[SCNavigationLoggingObserver setDiscoverFeedBadgeOn:] */

void FUN_1068942b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c18ef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setDiscoverFeedBadgeOn__1126415f8);
  return;
}



/* Entry: 1068942c0; end: 1068942cb; -[SCNavigationLoggingObserver setAddFriendsBadgeOn:] */

void FUN_1068942c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c165250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setAddFriendsBadgeOn__112636eb0);
  return;
}



/* Entry: 1068942cc; end: 1068942d7; -[SCNavigationLoggingObserver setMemoriesBadgeOn:] */

void FUN_1068942cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x33) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1c5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setMemoriesBadgeOn__11264f148);
  return;
}



/* Entry: 1068942d8; end: 1068942e3; -[SCNavigationLoggingObserver setSpotlightBadgeOn:] */

void FUN_1068942d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x34) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2085b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setSpotlightBadgeOn__11265fb90);
  return;
}



/* Entry: 1068942e4; end: 1068942ef; -[SCNavigationLoggingObserver setProfileBadgeOn:] */

void FUN_1068942e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x35) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1e3fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setProfileBadgeOn__112656a10);
  return;
}



/* Entry: 1068942f0; end: 1068942f7; -[SCNavigationLoggingObserver presentedInteractively] */

undefined1 FUN_1068942f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 1068942f8; end: 1068942ff; -[SCNavigationLoggingObserver setPresentedInteractively:] */

void FUN_1068942f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106894300; end: 10689434f; -[SCNavigationLoggingObserver .cxx_destruct] */

void FUN_106894300(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106894350; end: 10689435b; -[SCNavigationSignPostLogger .cxx_destruct] */

void FUN_106894350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10689435c; end: 10689439b;  */

void FUN_10689435c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf8e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10689439c; end: 1068944eb; -[SCDeepLinkHandlingAuthenticatedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689439c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(0);
  uVar2 = uRam0000000113824548;
  uRam0000000113824548 = 0;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_1127525dc;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127525e0;
  func_0x00010c12c0c0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_1127525e4;
  func_0x00010c12c0c0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127525e8;
  func_0x00010c12c0c0();
  _objc_release(lVar1);
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar2);
  puStack_58 = PTR_PTR_1126f39d8;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068944ec; end: 10689457f; -[SCDeepLinkHandlingAuthenticatedEntryPoint _deepLinkHandling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068944ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ce950;
  _objc_alloc(PTR_PTR_1126ce950);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127525ec);
  lVar2 = param_1 + _DAT_1127525f0;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_1127525f4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c009b40(puVar1,param_2,uVar3,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106894580; end: 10689461f; -[SCDeepLinkHandlingAuthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106894580(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127525d8,0);
  _objc_storeStrong(param_1 + _DAT_1127525ec,0);
  _objc_destroyWeak(param_1 + _DAT_1127525f4);
  _objc_destroyWeak(param_1 + _DAT_1127525f0);
  _objc_destroyWeak(param_1 + _DAT_1127525dc);
  _objc_destroyWeak(param_1 + _DAT_1127525f8);
  _objc_storeStrong(param_1 + _DAT_1127525e8,0);
  _objc_storeStrong(param_1 + _DAT_1127525e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127525e0,0);
  return;
}



/* Entry: 106894620; end: 106894983; -[SCDeepLinkHandlingUnauthenticatedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106894620(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce930;
  _objc_alloc();
  func_0x00010c009ac0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_1127525fc));
  _objc_retain(puVar2);
  uVar7 = puRam0000000113824550;
  puRam0000000113824550 = puVar2;
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126ce938;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x00010bf680e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112752600;
  lVar5 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0e9bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009ba0();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112752604);
  *(undefined **)(param_1 + _DAT_112752604) = puVar3;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126ce940;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x00010bf680e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0e9bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009ba0();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112752608);
  *(undefined **)(param_1 + _DAT_112752608) = puVar3;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126ce948;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x00010bf680e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0e9bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009ba0();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11275260c);
  *(undefined **)(param_1 + _DAT_11275260c) = puVar3;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  lVar5 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e40();
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e40();
  _objc_release(lVar6);
  _objc_release(lVar5);
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e40();
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106894984; end: 1068949c3;  */

void FUN_106894984(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf8e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068949c4; end: 106894b13; -[SCDeepLinkHandlingUnauthenticatedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068949c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(0);
  uVar2 = uRam0000000113824550;
  uRam0000000113824550 = 0;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_112752600;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112752604;
  func_0x00010c12c0c0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112752608;
  func_0x00010c12c0c0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275260c;
  func_0x00010c12c0c0();
  _objc_release(lVar1);
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar2);
  puStack_58 = PTR_PTR_1126f39e0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106894b14; end: 106894bbf; -[SCDeepLinkHandlingUnauthenticatedEntryPoint _deepLinkHandling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106894b14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ce958;
  _objc_alloc(PTR_PTR_1126ce958);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112752610);
  lVar2 = param_1 + _DAT_112752614;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6abe0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112752618;
  _objc_loadWeakRetained(param_1);
  func_0x00010c009b00(puVar1,param_2,uVar4,lVar3,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106894bc0; end: 106894c5f; -[SCDeepLinkHandlingUnauthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106894bc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127525fc,0);
  _objc_storeStrong(param_1 + _DAT_112752610,0);
  _objc_destroyWeak(param_1 + _DAT_112752618);
  _objc_destroyWeak(param_1 + _DAT_112752614);
  _objc_destroyWeak(param_1 + _DAT_112752600);
  _objc_destroyWeak(param_1 + _DAT_11275261c);
  _objc_storeStrong(param_1 + _DAT_11275260c,0);
  _objc_storeStrong(param_1 + _DAT_112752608,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752604,0);
  return;
}



/* Entry: 106894c60; end: 106894c67; -[SCContinueUserActivityHandlerBrowsingWebPlugin uniquePluginType] */

undefined8 FUN_106894c60(void)

{
  return 1;
}



/* Entry: 106894c68; end: 106894d07; -[SCContinueUserActivityHandlerBrowsingWebPlugin processEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106894c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_3);
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  _objc_release(puVar2);
  uVar1 = 8;
  if (puVar3 == (undefined *)0x0) {
    uVar1 = 0x4f;
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112752620);
  func_0x00010c1149a0(uVar4,param_2,param_3,
                      *(undefined8 *)PTR__NSUserActivityTypeBrowsingWeb_110345670,uVar1,
                      puVar3 != (undefined *)0x0);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106894d08; end: 106894d1b; -[SCContinueUserActivityHandlerBrowsingWebPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106894d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752620,0);
  return;
}



/* Entry: 106894d1c; end: 106894d23; -[SCContinueUserActivityHandlerLockedCameraExtensionPlugin uniquePluginType] */

undefined8 FUN_106894d1c(void)

{
  return 4;
}


