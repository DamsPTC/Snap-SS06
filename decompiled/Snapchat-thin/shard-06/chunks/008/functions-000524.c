/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e0623c; end: 104e06243; -[SCCommerceSIGRootNavigationDeck bridgingSCUIContainer] */

undefined8 FUN_104e0623c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e06244; end: 104e06273; -[SCCommerceSIGRootNavigationDeck setBridgingSCUIContainer:] */

void FUN_104e06244(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e06274; end: 104e0627b; -[SCCommerceSIGRootNavigationDeck navigationContainer] */

undefined8 FUN_104e06274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104e0627c; end: 104e062ab; -[SCCommerceSIGRootNavigationDeck setNavigationContainer:] */

void FUN_104e0627c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e062ac; end: 104e062b3; -[SCCommerceSIGRootNavigationDeck uiContainer] */

undefined8 FUN_104e062ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104e062b4; end: 104e062e3; -[SCCommerceSIGRootNavigationDeck setUiContainer:] */

void FUN_104e062b4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e062e4; end: 104e062fb; -[SCCommerceSIGRootNavigationDeck delegate] */

void FUN_104e062e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e062fc; end: 104e06307; -[SCCommerceSIGRootNavigationDeck setDelegate:] */

void FUN_104e062fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104e06308; end: 104e0630f; -[SCCommerceSIGRootNavigationDeck isNavigationContainerVisible] */

undefined1 FUN_104e06308(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e06310; end: 104e06317; -[SCCommerceSIGRootNavigationDeck setIsNavigationContainerVisible:] */

void FUN_104e06310(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104e06318; end: 104e06373; -[SCCommerceSIGRootNavigationDeck .cxx_destruct] */

void FUN_104e06318(long param_1)

{
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



/* Entry: 104e06374; end: 104e064f3; -[SCCommerceSIGStackedNavigationDeck initWithSIGContainer:delegate:] */

undefined8 *
FUN_104e06374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e44e0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ad0;
    _objc_alloc_init();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b0ad8;
    func_0x00010c0d6620(PTR_PTR_1126b0ad8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0d6640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    func_0x00010c18b5e0(puVar1[2]);
    _objc_storeWeak(puVar1 + 4,param_4);
    _objc_initWeak(auStack_58,puVar1);
    uVar3 = puVar1[2];
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0e7c20(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e064f4; end: 104e0651f;  */

void FUN_104e064f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e06520; end: 104e06523; -[SCCommerceSIGStackedNavigationDeck attachToPresentingContainer] */

void FUN_104e06520(void)

{
  return;
}



/* Entry: 104e06524; end: 104e06527; -[SCCommerceSIGStackedNavigationDeck dismissFromPresentingContainer] */

void FUN_104e06524(void)

{
  return;
}



/* Entry: 104e06528; end: 104e0660b; -[SCCommerceSIGStackedNavigationDeck pushViewController:animated:] */

void FUN_104e06528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c11c540(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e0660c; end: 104e06647;  */

void FUN_104e0660c(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be84f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e06648; end: 104e066a3; -[SCCommerceSIGStackedNavigationDeck popViewControllerAnimated:] */

bool FUN_104e06648(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  func_0x00010c103a20(*(undefined8 *)(param_1 + 0x10),param_2,param_3,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24d100(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return 1 < uVar1;
}



/* Entry: 104e066a4; end: 104e06707; -[SCCommerceSIGStackedNavigationDeck presentModalViewController:animated:] */

void FUN_104e066a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bef1360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e06708; end: 104e0670f; -[SCCommerceSIGStackedNavigationDeck activeViewController] */

void FUN_104e06708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_currentViewController_1125b5c90);
  return;
}



/* Entry: 104e06710; end: 104e06717; -[SCCommerceSIGStackedNavigationDeck isRootOfNavigation] */

undefined8 FUN_104e06710(void)

{
  return 0;
}



/* Entry: 104e06718; end: 104e06777; -[SCCommerceSIGStackedNavigationDeck activeUIContainer] */

void FUN_104e06718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010bef1360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e06778; end: 104e067f7; -[SCCommerceSIGStackedNavigationDeck didDismissViewController] */

void FUN_104e06778(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 1) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2a6980();
    _objc_release(lVar1);
    func_0x00010c1037e0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf79a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 104e067f8; end: 104e06873; -[SCCommerceSIGStackedNavigationDeck _pushViewController:] */

void FUN_104e067f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2a5780();
    _objc_release(lVar1);
  }
  func_0x00010c11bfa0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72360();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e06874; end: 104e0689f; -[SCCommerceSIGStackedNavigationDeck _handleNavigationContainerWillDisappear] */

void FUN_104e06874(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e068a0; end: 104e068a7; -[SCCommerceSIGStackedNavigationDeck stack] */

undefined8 FUN_104e068a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e068a8; end: 104e068d7; -[SCCommerceSIGStackedNavigationDeck setStack:] */

void FUN_104e068a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e068d8; end: 104e068df; -[SCCommerceSIGStackedNavigationDeck navigationContainer] */

undefined8 FUN_104e068d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e068e0; end: 104e0690f; -[SCCommerceSIGStackedNavigationDeck setNavigationContainer:] */

void FUN_104e068e0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e06910; end: 104e06917; -[SCCommerceSIGStackedNavigationDeck uiContainer] */

undefined8 FUN_104e06910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e06918; end: 104e06947; -[SCCommerceSIGStackedNavigationDeck setUiContainer:] */

void FUN_104e06918(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e06948; end: 104e0695f; -[SCCommerceSIGStackedNavigationDeck delegate] */

void FUN_104e06948(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e06960; end: 104e0696b; -[SCCommerceSIGStackedNavigationDeck setDelegate:] */

void FUN_104e06960(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104e0696c; end: 104e069af; -[SCCommerceSIGStackedNavigationDeck .cxx_destruct] */

void FUN_104e0696c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e069b0; end: 104e06a63; -[SCCommerceNavigator initWithRuntime:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104e069b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e44e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRuntime__1125edce0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126b0370);
    func_0x00010c181960(puVar1);
    _objc_opt_class(PTR_PTR_1126b0378);
    func_0x00010c1cb7e0(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127138c8),param_4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104e06a64; end: 104e06b6b; -[SCCommerceNavigator presentAlertViewController:animated:completion:] */

void FUN_104e06a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e06b6c;
  puStack_60 = &UNK_110849230;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_5);
  uStack_50 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104e06b6c; end: 104e06ba3;  */

void FUN_104e06b6c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e06ba4; end: 104e06c83; -[SCCommerceNavigator dismissAlertViewControllerAnimated:completion:] */

void FUN_104e06ba4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e06c84;
  puStack_58 = &UNK_1108511c8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 104e06c84; end: 104e06cbb;  */

void FUN_104e06c84(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e06cbc; end: 104e06cef; -[SCCommerceNavigator pushComponentWithPage:animated:] */

void FUN_104e06cbc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e44e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_pushComponentWithPage_animated__112525e68);
  return;
}



/* Entry: 104e06cf0; end: 104e06dbb; -[SCCommerceNavigator popWithAnimated:] */

void FUN_104e06cf0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e44e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_popWithAnimated__112526600);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e06dbc;
  puStack_50 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e06dbc; end: 104e06def;  */

void FUN_104e06dbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e06df0; end: 104e06ebb; -[SCCommerceNavigator popToSelfWithAnimated:] */

void FUN_104e06df0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e44e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_popToSelfWithAnimated__11261e888);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e06ebc;
  puStack_50 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e06ebc; end: 104e06eef;  */

void FUN_104e06ebc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e06ef0; end: 104e06f23; -[SCCommerceNavigator presentComponentWithPage:animated:] */

void FUN_104e06ef0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e44e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_presentComponentWithPage_animate_112525e60);
  return;
}



/* Entry: 104e06f24; end: 104e06fef; -[SCCommerceNavigator dismissWithAnimated:] */

void FUN_104e06f24(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e44e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dismissWithAnimated__1125becc8);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e06ff0;
  puStack_50 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e06ff0; end: 104e07023;  */

void FUN_104e06ff0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e07024; end: 104e07057; -[SCCommerceNavigator forceDisableDismissalGestureWithForceDisable:] */

void FUN_104e07024(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e44e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_forceDisableDismissalGestureWith_112526608);
  return;
}



/* Entry: 104e07058; end: 104e0708b; -[SCCommerceNavigator setBackButtonObserverWithObserver:] */

void FUN_104e07058(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e44e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setBackButtonObserverWithObserve_112526610);
  return;
}



/* Entry: 104e0708c; end: 104e0713b; -[SCCommerceNavigator _presentAlertViewController:animated:completion:] */

void FUN_104e0708c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c189400(param_3,param_2,1);
  func_0x00010c1c8b80(param_3,param_2,6);
  func_0x00010c0b8200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e0713c; end: 104e071b3; -[SCCommerceNavigator _dismissAlertViewController:completion:] */

void FUN_104e0713c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c0b8200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e071b4; end: 104e072bf; -[SCCommerceNavigator _popWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e071b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010c0b8200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 1) {
      lVar1 = param_1 + _DAT_1127138c8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0d6d80();
      _objc_release(lVar1);
    }
    func_0x00010c0b8200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e072c0; end: 104e073bb; -[SCCommerceNavigator _popToSelfWithAnimated:] */

void FUN_104e072c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010c0b8200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8200(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1039c0(lVar1,param_2,lVar3,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104e073bc; end: 104e073f7; -[SCCommerceNavigator _dismissWithAnimated:] */

void FUN_104e073bc(undefined8 param_1)

{
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e073f8; end: 104e07407; -[SCCommerceNavigator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e073f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127138c8);
  return;
}



/* Entry: 104e07408; end: 104e07473; -[SCCommerceSIGNavigationStack init] */

undefined1 * FUN_104e07408(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e44f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e07474; end: 104e074af; -[SCCommerceSIGNavigationStack count] */

undefined8 FUN_104e07474(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104e074b0; end: 104e074ef; -[SCCommerceSIGNavigationStack isEmpty] */

bool FUN_104e074b0(long param_1)

{
  long lVar1;
  
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 104e074f0; end: 104e0759b; -[SCCommerceSIGNavigationStack previousViewController] */

void FUN_104e074f0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  if (uVar1 < 2) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c29c580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c580(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf529e0();
    uVar3 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,uVar2 - 2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e0759c; end: 104e075df; -[SCCommerceSIGNavigationStack currentViewController] */

void FUN_104e0759c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e075e0; end: 104e07637; -[SCCommerceSIGNavigationStack push:] */

void FUN_104e075e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c29c580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e07638; end: 104e076a7; -[SCCommerceSIGNavigationStack pop] */

void FUN_104e07638(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c29c580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cd60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e076a8; end: 104e076af; -[SCCommerceSIGNavigationStack viewControllers] */

undefined8 FUN_104e076a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e076b0; end: 104e076df; -[SCCommerceSIGNavigationStack setViewControllers:] */

void FUN_104e076b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e076e0; end: 104e076eb; -[SCCommerceSIGNavigationStack .cxx_destruct] */

void FUN_104e076e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e076ec; end: 104e0773f; -[SCCommerceComposerPageViewController initWithValdiView:] */

undefined1 * FUN_104e076ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e44f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e07740; end: 104e07747; -[SCCommerceComposerPageViewController pageViewName] */

undefined8 FUN_104e07740(void)

{
  return 0x2f;
}



/* Entry: 104e07748; end: 104e077d7; -[SCCommerceManagedViewController initWithRootViewController:] */

undefined1 * FUN_104e07748(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithRootViewController__1125edab8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1cb760(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c068d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar2);
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e077d8; end: 104e0780b; -[SCCommerceManagedViewController pushViewController:animated:] */

void FUN_104e077d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4500;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_pushViewController_animated__112624b68);
  return;
}



/* Entry: 104e0780c; end: 104e07847; -[SCCommerceManagedViewController presentViewController:animated:completion:] */

void FUN_104e0780c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4500;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_presentViewController_animated_c_112621588,param_3,
                      param_4 != 0);
  return;
}



/* Entry: 104e07848; end: 104e0784f; -[SCCommerceManagedViewController pageViewName] */

undefined8 FUN_104e07848(void)

{
  return 0x32;
}



/* Entry: 104e07850; end: 104e078ab; -[SCCommercePresentingViewController initWithDarkModeEligible:] */

undefined1 * FUN_104e07850(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4508;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithLoggingObserver__112526618,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e078ac; end: 104e07933; -[SCCommercePresentingViewController pageViewName] */

ulong FUN_104e078ac(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_pageViewName_11261a2a0);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar1;
    func_0x00010c0f2220(uVar1);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 104e07934; end: 104e07997; -[SCCommerceToastPresenter showFavoriteAddedToastWithImage:] */

void FUN_104e07934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000104e0884c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a800(param_1,param_2,param_3,uVar1,0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e07998; end: 104e07a2f; -[SCCommerceToastPresenter showFavoriteAddedToastWithImage:viewAction:] */

void FUN_104e07998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000104e0884c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000104e0887c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a800(param_1,param_2,param_3,uVar1,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e07a30; end: 104e07ac7; -[SCCommerceToastPresenter showFavoriteRemovedToastWithImage:undoAction:] */

void FUN_104e07a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000104e08864();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000104e08894();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a800(param_1,param_2,param_3,uVar1,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e07ac8; end: 104e07b5f; -[SCCommerceToastPresenter showFavoriteRemovedToastWithImage:viewAction:] */

void FUN_104e07ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000104e08864();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000104e0887c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a800(param_1,param_2,param_3,uVar1,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e07b60; end: 104e07bc3; -[SCCommerceToastPresenter showFavoriteRemovedToastWithImage:] */

void FUN_104e07b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000104e08864();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a800(param_1,param_2,param_3,uVar1,0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e07bc4; end: 104e07c67; -[SCCommerceToastPresenter initWithNotificationPool:iconProvider:] */

undefined1 *
FUN_104e07bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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



/* Entry: 104e07c68; end: 104e07d9b; -[SCCommerceToastPresenter showToastWithImage:titleText:buttonTitle:buttonActionBlock:] */

void FUN_104e07c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e07d9c;
  puStack_78 = &UNK_11084cbf0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e07d9c; end: 104e07dd3;  */

void FUN_104e07d9c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebb7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e07dd4; end: 104e07e87; -[SCCommerceToastPresenter showGenericErrorToast] */

void FUN_104e07dd4(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e07e5c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e07e88; end: 104e07f6f; -[SCCommerceToastPresenter showSuccessToastWithText:] */

void FUN_104e07e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104e07f3c;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e07f70; end: 104e08057; -[SCCommerceToastPresenter showErrorToastWithText:] */

void FUN_104e07f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104e08024;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e08058; end: 104e08293; -[SCCommerceToastPresenter _showToastWithImage:titleText:buttonTitle:buttonActionBlock:] */

void FUN_104e08058(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be02900(param_1);
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e08294;
  puStack_90 = &UNK_110848708;
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar1 = &puStack_a8;
  _objc_retainBlock(ppuVar1);
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
  }
  else {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  puVar4 = PTR_PTR_1126b0ae0;
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_78);
  func_0x00010bf57ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  _objc_release(uVar5);
  _objc_release(puVar3);
  func_0x00010c25f340(*(undefined8 *)(param_1 + 8));
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e08294; end: 104e082ff;  */

void FUN_104e08294(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e08300; end: 104e083af; -[SCCommerceToastPresenter _showGenericErrorToast] */

void FUN_104e08300(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010be02900();
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfe55a0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e083b0; end: 104e083f7;  */

void FUN_104e083b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becfc00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e083f8; end: 104e084df; -[SCCommerceToastPresenter _triggerGenericToastWithImage:] */

void FUN_104e083f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104e084ac;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e084e0; end: 104e0862b; -[SCCommerceToastPresenter _presentGenericToastWithImage:] */

void FUN_104e084e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126b0ae0;
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_104e08834();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf57f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c25f340(*(undefined8 *)(param_1 + 8));
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e0862c; end: 104e08657;  */

void FUN_104e0862c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e08658; end: 104e086cb; -[SCCommerceToastPresenter _showSuccessToastWithText:] */

void FUN_104e08658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010be02900(param_1);
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110db5d38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e086cc; end: 104e0873f; -[SCCommerceToastPresenter _showErrorToastWithText:] */

void FUN_104e086cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010be02900(param_1);
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110db5d38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e08740; end: 104e0874f; -[SCCommerceToastPresenter _dismissCurrentToast] */

void FUN_104e08740(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x10),PTR_s_dismissPresenter_1125bea28);
    return;
  }
  return;
}



/* Entry: 104e08750; end: 104e08757; -[SCCommerceToastPresenter notificationPool] */

undefined8 FUN_104e08750(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e08758; end: 104e08787; -[SCCommerceToastPresenter setNotificationPool:] */

void FUN_104e08758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e08788; end: 104e0878f; -[SCCommerceToastPresenter notificationPresenter] */

undefined8 FUN_104e08788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e08790; end: 104e087bf; -[SCCommerceToastPresenter setNotificationPresenter:] */

void FUN_104e08790(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e087c0; end: 104e087c7; -[SCCommerceToastPresenter iconProvider] */

undefined8 FUN_104e087c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e087c8; end: 104e087f7; -[SCCommerceToastPresenter setIconProvider:] */

void FUN_104e087c8(long param_1,undefined8 param_2,undefined8 param_3)

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


