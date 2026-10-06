/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9645fc; end: 10b96460b; -[SCValdiComponentContainerView initWithComponentPath:owner:runtime:] */

void FUN_10b9645fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c000650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithComponentPath_owner_view_1125ddb58,param_3,param_4,0,0,param_5);
  return;
}



/* Entry: 10b96460c; end: 10b9646ff; -[SCValdiComponentContainerView initWithComponentPath:owner:viewModel:componentContext:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b96460c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112795d80);
  *(undefined8 *)(param_1 + _DAT_112795d80) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_release(uVar2);
  puStack_58 = PTR_PTR_11270c008;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_initWithOwner_viewModel_componen_1125ea498,param_4,param_5,
                      param_6,param_7);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)plVar1;
}



/* Entry: 10b964700; end: 10b96472f; -[SCValdiComponentContainerView componentPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964700(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795d80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b964730; end: 10b964743; -[SCValdiComponentContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795d80,0);
  return;
}



/* Entry: 10b964744; end: 10b96474b; -[SCValdiConfiguration imageLoaders] */

undefined8 FUN_10b964744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b96474c; end: 10b964753; -[SCValdiConfiguration videoLoaders] */

undefined8 FUN_10b96474c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b964754; end: 10b96475b; -[SCValdiConfiguration requestManager] */

undefined8 FUN_10b964754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b96475c; end: 10b964763; -[SCValdiConfiguration debugMessageDisplayer] */

undefined8 FUN_10b96475c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b964764; end: 10b964783; -[SCValdiConfiguration setDebugMessageDisplayer:] */

void FUN_10b964764(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000107c39f30();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b964784; end: 10b96478b; -[SCValdiConfiguration exceptionReporter] */

undefined8 FUN_10b964784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b96478c; end: 10b964793; -[SCValdiConfiguration fontLoader] */

undefined8 FUN_10b96478c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b964794; end: 10b96479b; -[SCValdiConfiguration customModuleProvider] */

undefined8 FUN_10b964794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b96479c; end: 10b9647a3; -[SCValdiConfiguration userId] */

undefined8 FUN_10b96479c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b9647a4; end: 10b9647ab; -[SCValdiConfiguration performHapticFeedbackBlock] */

undefined8 FUN_10b9647a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b9647ac; end: 10b9647b3; -[SCValdiConfiguration allowDarkMode] */

undefined1 FUN_10b9647ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b9647b4; end: 10b9647bb; -[SCValdiConfiguration useViewControllerBasedUserInterfaceStyleForDarkMode] */

undefined1 FUN_10b9647b4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b9647bc; end: 10b9647c3; -[SCValdiConfiguration setUseViewControllerBasedUserInterfaceStyleForDarkMode:] */

void FUN_10b9647bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b9647c4; end: 10b9647cb; -[SCValdiConfiguration disableLegacyMeasureBehaviorByDefault] */

undefined1 FUN_10b9647c4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b9647cc; end: 10b9647d3; -[SCValdiConfiguration setDisableLegacyMeasureBehaviorByDefault:] */

void FUN_10b9647cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b9647d4; end: 10b9647db; -[SCValdiConfiguration disableFontLeadingInTextMeasure] */

undefined1 FUN_10b9647d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b9647dc; end: 10b9647e3; -[SCValdiConfiguration disableGcStackUsageDetection] */

undefined1 FUN_10b9647dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b9647e4; end: 10b9647eb; -[SCValdiConfiguration setDisableGcStackUsageDetection:] */

void FUN_10b9647e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b9647ec; end: 10b9647f3; -[SCValdiConfiguration enableReferenceTracking] */

undefined1 FUN_10b9647ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b9647f4; end: 10b9647fb; -[SCValdiConfiguration enableDebuggerService] */

undefined1 FUN_10b9647f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10b9647fc; end: 10b964803; -[SCValdiConfiguration disableHotReloader] */

undefined1 FUN_10b9647fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b964804; end: 10b96480b; -[SCValdiConfiguration setDisableHotReloader:] */

void FUN_10b964804(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b96480c; end: 10b964813; -[SCValdiConfiguration debuggerServicePort] */

undefined8 FUN_10b96480c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b964814; end: 10b96481b; -[SCValdiConfiguration setDebuggerServicePort:] */

void FUN_10b964814(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b96481c; end: 10b964823; -[SCValdiConfiguration javaScriptEngineType] */

undefined8 FUN_10b96481c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b964824; end: 10b96482b; -[SCValdiConfiguration isTestEnvironment] */

undefined1 FUN_10b964824(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10b96482c; end: 10b964833; -[SCValdiConfiguration anrTimeoutMs] */

undefined8 FUN_10b96482c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b964834; end: 10b964897; -[SCValdiConfiguration .cxx_destruct] */

void FUN_10b964834(long param_1)

{
  FUN_10b964898(param_1 + 0x58);
  FUN_10b964898(param_1 + 0x50);
  FUN_10b964898(param_1 + 0x48);
  FUN_10b964898(param_1 + 0x40);
  FUN_10b964898(param_1 + 0x38);
  FUN_10b964898(param_1 + 0x30);
  FUN_10b964898(param_1 + 0x28);
  FUN_10b964898(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b964898; end: 10b96489f;  */

void FUN_10b964898(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b9648a0; end: 10b964937; -[SCValdiDefaultContainerViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b9648a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112795ddc) = 0;
    lVar3 = (long)_DAT_112795de0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b964938; end: 10b9649ef; -[SCValdiDefaultContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964938(void)

{
  long unaff_x19;
  undefined1 auStack_40 [16];
  
  FUN_10b964c5c();
  _objc_msgSendSuper2(auStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  func_0x00010b964c7c();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(unaff_x19 + _DAT_112795de0));
  func_0x00010b964c7c();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  func_0x00010b964c7c();
  return;
}



/* Entry: 10b9649f0; end: 10b964a33; -[SCValdiDefaultContainerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b9649f0(void)

{
  long unaff_x19;
  undefined1 auStack_30 [16];
  
  FUN_10b964c5c();
  _objc_msgSendSuper2(auStack_30,PTR_s_viewDidAppear__112684bd0);
  *(undefined8 *)(unaff_x19 + _DAT_112795de4) = 1;
  func_0x00010be65260();
  return;
}



/* Entry: 10b964a34; end: 10b964a73; -[SCValdiDefaultContainerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964a34(void)

{
  long unaff_x19;
  undefined1 auStack_30 [16];
  
  FUN_10b964c5c();
  _objc_msgSendSuper2(auStack_30,PTR_s_viewDidDisappear__112684c48);
  *(undefined8 *)(unaff_x19 + _DAT_112795de4) = 0;
  func_0x00010be65260();
  return;
}



/* Entry: 10b964a74; end: 10b964ab7; -[SCValdiDefaultContainerViewController setShowsNavigationBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964a74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795ddc) = param_3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b964ab8; end: 10b964b0f; -[SCValdiDefaultContainerViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964ab8(void)

{
  long unaff_x19;
  undefined1 auStack_30 [16];
  
  FUN_10b964c5c();
  _objc_msgSendSuper2(auStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(unaff_x19 + _DAT_112795de0));
  func_0x00010b964c7c();
  return;
}



/* Entry: 10b964b10; end: 10b964b67; -[SCValdiDefaultContainerViewController forceDisableDismissalGesture:] */

void FUN_10b964b10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c068d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b964b68; end: 10b964ba7; -[SCValdiDefaultContainerViewController setPageVisibilityObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795de8);
  *(undefined8 *)(param_1 + _DAT_112795de8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be65270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyVisibility_112576e38);
  return;
}



/* Entry: 10b964ba8; end: 10b964bfb; -[SCValdiDefaultContainerViewController _notifyVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964ba8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112795de8);
  _objc_retainBlock();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))((double)*(long *)(param_1 + _DAT_112795de4),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b964bfc; end: 10b964c0b; -[SCValdiDefaultContainerViewController valdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b964bfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795de0);
}



/* Entry: 10b964c0c; end: 10b964c1b; -[SCValdiDefaultContainerViewController showsNavigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b964c0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795ddc);
}



/* Entry: 10b964c1c; end: 10b964c5b; -[SCValdiDefaultContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b964c1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795de8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795de0,0);
  return;
}



/* Entry: 10b964c5c; end: 10b964c83;  */

void FUN_10b964c5c(void)

{
  return;
}



/* Entry: 10b964c84; end: 10b964cdf; -[SCValdiDefaultNavigator initWithRuntime:] */

undefined1 * FUN_10b964c84(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b9658f8();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_storeWeak(puVar1 + 8);
  }
  func_0x00010b965918();
  return puVar1;
}



/* Entry: 10b964ce0; end: 10b964d57; -[SCValdiDefaultNavigator viewController] */

void FUN_10b964ce0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = param_1;
    FUN_10b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010b9659bc();
    if ((int)lVar2 != 0) {
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f9ddf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b96596c(lVar1);
      func_0x00010b965928();
    }
    func_0x00010b965950();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b964d58; end: 10b964d87; -[SCValdiDefaultNavigator dismissWithAnimated:] */

void FUN_10b964d58(void)

{
  func_0x00010b965908();
  func_0x00010b9658c4(FUN_10b964d88);
  return;
}



/* Entry: 10b964d88; end: 10b964dc3;  */

void FUN_10b964d88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b964dc4; end: 10b964df3; -[SCValdiDefaultNavigator popToSelfWithAnimated:] */

void FUN_10b964dc4(void)

{
  func_0x00010b965908();
  func_0x00010b9658c4(FUN_10b964df4);
  return;
}



/* Entry: 10b964df4; end: 10b964e6b;  */

void FUN_10b964df4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29c100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1039c0(uVar2,param_2,uVar3,*(undefined1 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b965964();
  func_0x00010b965928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b964e6c; end: 10b964e9b; -[SCValdiDefaultNavigator popWithAnimated:] */

void FUN_10b964e6c(void)

{
  func_0x00010b965908();
  func_0x00010b9658c4(FUN_10b964e9c);
  return;
}



/* Entry: 10b964e9c; end: 10b964ef3;  */

void FUN_10b964e9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b965928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b964ef4; end: 10b964f7b; -[SCValdiDefaultNavigator presentComponentWithPage:animated:] */

void FUN_10b964ef4(long param_1)

{
  undefined8 uStack_50;
  
  func_0x00010b965920();
  _objc_loadWeakRetained(param_1 + 8);
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b965964();
  func_0x00010b965908();
  func_0x00010b965930(FUN_10b964f7c);
  func_0x00010b9659d0();
  func_0x00010b9658e8();
  _objc_release(uStack_50);
  func_0x00010b9659d8();
  func_0x00010b9659ac();
  func_0x00010b965918();
  return;
}



/* Entry: 10b964f7c; end: 10b964f8f;  */

void FUN_10b964f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be057b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doPresentComponentWithPage_sour_11255ef88,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 10b964f90; end: 10b965017; -[SCValdiDefaultNavigator pushComponentWithPage:animated:] */

void FUN_10b964f90(long param_1)

{
  undefined8 uStack_50;
  
  func_0x00010b965920();
  _objc_loadWeakRetained(param_1 + 8);
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b965964();
  func_0x00010b965908();
  func_0x00010b965930(FUN_10b965018);
  func_0x00010b9659d0();
  func_0x00010b9658e8();
  _objc_release(uStack_50);
  func_0x00010b9659d8();
  func_0x00010b9659ac();
  func_0x00010b965918();
  return;
}



/* Entry: 10b965018; end: 10b96502b;  */

void FUN_10b965018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be057d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doPushComponentWithPage_sourceC_11255ef90,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 10b96502c; end: 10b96502f; -[SCValdiDefaultNavigator setBackButtonObserverWithObserver:] */

void FUN_10b96502c(void)

{
  return;
}



/* Entry: 10b965030; end: 10b96508b; -[SCValdiDefaultNavigator setPageVisibilityObserverWithObserver:] */

void FUN_10b965030(void)

{
  func_0x00010b9658f8();
  func_0x00010b965908();
  func_0x00010b9659d0();
  func_0x00010b9658e8();
  func_0x00010b9659d8();
  func_0x00010b965918();
  return;
}



/* Entry: 10b96508c; end: 10b96515f;  */

void FUN_10b96508c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  uVar3 = uVar2;
  func_0x00010b965918();
  if ((uVar2 & 1) == 0) {
    FUN_10b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010b9659bc();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar2 != 0) {
      func_0x00010c29c100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b96596c(uVar3);
      func_0x00010b965928();
      func_0x00010b965950();
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010c29c100(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8a00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b965160; end: 10b96518f; -[SCValdiDefaultNavigator forceDisableDismissalGestureWithForceDisable:] */

void FUN_10b965160(void)

{
  func_0x00010b965908();
  func_0x00010b9658c4(FUN_10b965190);
  return;
}



/* Entry: 10b965190; end: 10b965263;  */

void FUN_10b965190(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  uVar3 = uVar2;
  func_0x00010b965918();
  if ((uVar2 & 1) == 0) {
    FUN_10b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010b9659bc();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar2 != 0) {
      func_0x00010c29c100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b96596c(uVar3);
      func_0x00010b965928();
      func_0x00010b965950();
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010c29c100(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4a40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b965264; end: 10b9652ef; -[SCValdiDefaultNavigator _findTopViewController] */

void FUN_10b965264(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  while( true ) {
    uVar1 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) break;
    uVar1 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d1a0();
    func_0x00010b965928();
    func_0x00010b965950();
    if ((uVar1 & 1) != 0) break;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b965918();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9652f0; end: 10b9653c3; -[SCValdiDefaultNavigator _doPresentComponentWithPage:sourceComponentContext:animated:] */

void FUN_10b9652f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b965920();
  uVar2 = param_1;
  func_0x00010c0b7060(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be16c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd660();
  iVar1 = (int)param_3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9659ac();
  func_0x00010bf1f3c0();
  func_0x00010b9659a4();
  if (iVar1 != 0) {
    func_0x00010c2bd6e0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b965950();
    uVar2 = param_1;
  }
  func_0x00010c10eda0(uVar3,param_2,uVar2,param_5,0);
  func_0x00010b965928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b9653c4; end: 10b96551f; -[SCValdiDefaultNavigator _doPushComponentWithPage:sourceComponentContext:animated:] */

void FUN_10b9653c4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010b965920();
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be16c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
  }
  else {
    uVar3 = uVar1;
    _objc_retain();
  }
  if (uVar1 == 0) {
    FUN_10b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010b9659bc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar1 != 0) {
      func_0x00010bf44480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eeea0(uVar3);
      func_0x00010b9659ac();
      func_0x00010b965978();
    }
  }
  else {
    func_0x00010c0b7060(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520(uVar1);
  }
  func_0x00010b9659a4();
  func_0x00010b965964();
  func_0x00010b965928();
  func_0x00010b965950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b965520; end: 10b9655ab; -[SCValdiDefaultNavigator wrapViewControllerInNavigationController:] */

void FUN_10b965520(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x00010b965920();
  _objc_opt_class(puVar1);
  puVar2 = param_1;
  func_0x00010c0d66c0();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c0d66c0(param_1);
    puVar1 = param_1;
  }
  _objc_alloc(puVar1);
  func_0x00010c0402e0();
  func_0x00010b965918();
  func_0x00010c0d6280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219c00();
  func_0x00010b965918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b9655ac; end: 10b9657fb; -[SCValdiDefaultNavigator makeContainerViewControllerWithPage:parentValdiContext:] */

void FUN_10b9655ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x00010b965920();
  _objc_retain(param_4);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  _objc_alloc();
  _objc_loadWeakRetained(param_1 + 8);
  func_0x00010c040b80(lVar1);
  func_0x00010b965964();
  func_0x00010b9659e0();
  func_0x00010c181960(lVar1);
  func_0x00010c0d66c0(param_1);
  func_0x00010c1cb7e0(lVar1);
  uVar2 = param_3;
  func_0x00010bf443a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3c80();
  func_0x00010b9659a4();
  func_0x00010c1d0640(uVar2);
  puVar3 = PTR_PTR_1126afcc8;
  _objc_alloc(PTR_PTR_1126afcc8);
  func_0x00010bf44480(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf445a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e00(uVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c000640(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010b965978();
  if (param_4 != 0) {
    func_0x00010c295200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d90a0();
    func_0x00010b965978();
  }
  puVar3 = PTR_PTR_1126afcd0;
  _objc_opt_class();
  puVar5 = puVar3;
  func_0x00010b9659e0();
  if (puVar5 != (undefined *)0x0) {
    func_0x00010b9659e0();
    puVar3 = puVar5;
  }
  _objc_alloc();
  func_0x00010c0601e0();
  puVar5 = puVar3;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010c239260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c202620(puVar3);
    func_0x00010b965978();
  }
  puVar5 = puVar3;
  _objc_opt_respondsToSelector(puVar3,PTR_s_setTitle__1126632b8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010c0fe2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar3);
    func_0x00010b965978();
  }
  func_0x00010c1c1bc0(lVar1);
  func_0x00010b9659a4();
  func_0x00010b965964();
  func_0x00010b965928();
  func_0x00010b965950();
  func_0x00010b965918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b9657fc; end: 10b965807; -[SCValdiDefaultNavigator pushToValdiMarshaller:] */

undefined8 FUN_10b9657fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b38;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010b9661d8();
  return param_3;
}



/* Entry: 10b965808; end: 10b96580f; -[SCValdiDefaultNavigator shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10b965808(void)

{
  return 1;
}



/* Entry: 10b965810; end: 10b965827; -[SCValdiDefaultNavigator managedViewController] */

void FUN_10b965810(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b965828; end: 10b965833; -[SCValdiDefaultNavigator setManagedViewController:] */

void FUN_10b965828(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10b965834; end: 10b96583b; -[SCValdiDefaultNavigator containerClassOverride] */

undefined8 FUN_10b965834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b96583c; end: 10b96585b; -[SCValdiDefaultNavigator setContainerClassOverride:] */

void FUN_10b96583c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b9658f8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b96585c; end: 10b965863; -[SCValdiDefaultNavigator navigationControllerClassOverride] */

undefined8 FUN_10b96585c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b965864; end: 10b965883; -[SCValdiDefaultNavigator setNavigationControllerClassOverride:] */

void FUN_10b965864(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b9658f8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b965884; end: 10b9658c3; -[SCValdiDefaultNavigator .cxx_destruct] */

void FUN_10b965884(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b9658c4; end: 10b9659ef;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_10b9658c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uStack0000000000000010;
  undefined *puStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined1 uStack0000000000000028;
  
  puVar1 = PTR___dispatch_main_q_11034be20;
  puStack0000000000000018 = &UNK_110845ce0;
  uStack0000000000000010 = param_1;
  uStack0000000000000020 = param_2;
  uStack0000000000000028 = param_4;
  func_0x000107c61174();
  func_0x000107c61174();
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar2 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar3;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar3 = pcRam0000000113817cd0;
  func_0x00010002a3a8();
  func_0x000107c61180();
  (*pcVar3)(puVar1,register0x00000008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(register0x00000008);
  return;
}



/* Entry: 10b9659f0; end: 10b965a27; -[SCValdiIntEnum initWithEnumCases:count:] */

void FUN_10b9659f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010b965af4();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b965a28; end: 10b965a5b; -[SCValdiIntEnum initWithEnumCasesCount:] */

void FUN_10b965a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b965af4();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 10b965a5c; end: 10b965a6f; -[SCValdiIntEnum enumCaseForIndex:] */

long FUN_10b965a5c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
    param_3 = *(long *)(*(long *)(param_1 + 8) + param_3 * 8);
  }
  return param_3;
}



/* Entry: 10b965a70; end: 10b965a77; -[SCValdiIntEnum count] */

undefined8 FUN_10b965a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b965a78; end: 10b965ad7; -[SCValdiStringEnum initWithEnumCases:] */

long FUN_10b965a78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  _objc_retain();
  func_0x00010b965af4();
  if (lVar1 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(long *)(lVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10b965ad8; end: 10b965adf; -[SCValdiStringEnum enumCaseForIndex:] */

void FUN_10b965ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectAtIndexedSubscript__112615968);
  return;
}



/* Entry: 10b965ae0; end: 10b965ae7; -[SCValdiStringEnum count] */

void FUN_10b965ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10b965ae8; end: 10b965b0f; -[SCValdiStringEnum .cxx_destruct] */

void FUN_10b965ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b965b10; end: 10b965b17; -[SCValdiError initWithReason:] */

void FUN_10b965b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03d210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithReason_stackTrace__1125ece80,param_3,0);
  return;
}



/* Entry: 10b965b18; end: 10b965c0f; -[SCValdiError initWithReason:stackTrace:] */

undefined ** FUN_10b965b18(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110e70338;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = param_4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_50 = PTR_PTR_11270c038;
  ppuVar2 = &puStack_58;
  puStack_58 = param_1;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithName_reason_userInfo__1125e9070,
                      &PTR____CFConstantStringClassReference_110f9de78,param_3,puVar6);
  if (param_4 != 0) {
    func_0x00010b965d78();
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar5 = 0;
  FUN_10b965c30();
  _objc_retain();
  lVar3 = lVar5;
  _objc_retain();
  iVar1 = (int)lVar3;
  FUN_10b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b965d80();
  if (iVar1 != 0) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b965d64();
    func_0x00010b965d78();
  }
  ppuVar4 = ppuVar2;
  _objc_release();
  iVar1 = (int)ppuVar4;
  if (lVar5 != 0) {
    FUN_10b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b965d80();
    if (iVar1 != 0) {
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b965d64();
      func_0x00010b965d78();
    }
    _objc_release(ppuVar2);
  }
  _objc_alloc(PTR_PTR_1126da880);
  func_0x00010c03d200();
  _objc_autorelease();
  _objc_exception_throw();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f9deb8;
  FUN_10b965c10(&PTR____CFConstantStringClassReference_110f9deb8);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return ppuVar4;
}



/* Entry: 10b965c10; end: 10b965c2f;  */

void FUN_10b965c10(void)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  int unaff_w21;
  
  _objc_retain();
  lVar5 = 0;
  FUN_10b965c30();
  _objc_retain();
  lVar2 = lVar5;
  _objc_retain();
  iVar1 = (int)lVar2;
  FUN_10b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b965d80();
  if (iVar1 != 0) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b965d64();
    func_0x00010b965d78();
  }
  _objc_release();
  if (lVar5 != 0) {
    FUN_10b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b965d80();
    if (unaff_w21 != 0) {
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b965d64();
      func_0x00010b965d78();
    }
    _objc_release();
  }
  _objc_alloc(PTR_PTR_1126da880);
  func_0x00010c03d200();
  _objc_autorelease();
  _objc_exception_throw();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f9deb8;
  FUN_10b965c10(&PTR____CFConstantStringClassReference_110f9deb8);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10b965c30; end: 10b965d03;  */

void FUN_10b965c30(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  int unaff_w21;
  
  _objc_retain();
  lVar2 = param_2;
  _objc_retain();
  iVar1 = (int)lVar2;
  FUN_10b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b965d80();
  if (iVar1 != 0) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b965d64();
    func_0x00010b965d78();
  }
  _objc_release();
  if (param_2 != 0) {
    FUN_10b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b965d80();
    if (unaff_w21 != 0) {
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b965d64();
      func_0x00010b965d78();
    }
    _objc_release();
  }
  _objc_alloc(PTR_PTR_1126da880);
  func_0x00010c03d200();
  _objc_autorelease();
  _objc_exception_throw();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f9deb8;
  FUN_10b965c10(&PTR____CFConstantStringClassReference_110f9deb8);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10b965d04; end: 10b965d17;  */

void FUN_10b965d04(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f9deb8;
  FUN_10b965c10(&PTR____CFConstantStringClassReference_110f9deb8);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b965d18; end: 10b965d63;  */

void FUN_10b965d18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b965d64; end: 10b965d8b;  */

void FUN_10b965d64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eeeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b965d8c; end: 10b965df7;  */

long FUN_10b965d8c(long param_1)

{
  if (param_1 != 0) {
    _objc_retain(param_1);
    _CFAutorelease(param_1);
  }
  return param_1;
}



/* Entry: 10b965df8; end: 10b965dff; -[SCValdiGeneratedModuleFactory moduleProtocol] */

undefined8 FUN_10b965df8(void)

{
  return 0;
}



/* Entry: 10b965e00; end: 10b965e23; -[SCValdiGeneratedModuleFactory onLoadModule] */

undefined8 FUN_10b965e00(void)

{
  FUN_10b965f10();
  func_0x00010c11f020();
  return 0;
}



/* Entry: 10b965e24; end: 10b965e47; -[SCValdiGeneratedModuleFactory getModulePath] */

undefined8 FUN_10b965e24(void)

{
  FUN_10b965f10();
  func_0x00010c11f020();
  return 0;
}



/* Entry: 10b965e48; end: 10b965f0f; -[SCValdiGeneratedModuleFactory loadModule] */

void FUN_10b965e48(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010c0e4ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf481c0();
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  if ((uVar3 & 1) == 0) {
    _objc_opt_class();
    func_0x00010c11f020(puVar1);
    uVar3 = 0;
  }
  else {
    FUN_10b9752b0(uVar2,param_1);
    _objc_retain(uVar2);
    uVar3 = uVar2;
  }
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b965f10; end: 10b965f27;  */

undefined * FUN_10b965f10(void)

{
  return PTR__OBJC_CLASS___NSException_1126af520;
}



/* Entry: 10b965f28; end: 10b965f53; +[SCValdiINavigator valdiMarshallableObjectDescriptor] */

void FUN_10b965f28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d79ee0;
  param_1[1] = &PTR_DAT_110d79ed0;
  param_1[2] = &PTR_s_ooob_v_110d79e70;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


