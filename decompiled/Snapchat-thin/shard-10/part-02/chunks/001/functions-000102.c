/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b9ff10; end: 107b9ff13; -[SCUnauthenticatedWebBrowserViewController reset:] */

void FUN_107b9ff10(void)

{
  return;
}



/* Entry: 107b9ff14; end: 107b9ff17; -[SCUnauthenticatedWebBrowserViewController setIsOffScreen:] */

void FUN_107b9ff14(void)

{
  return;
}



/* Entry: 107b9ff18; end: 107b9ff1b; -[SCUnauthenticatedWebBrowserViewController dismiss] */

void FUN_107b9ff18(void)

{
  return;
}



/* Entry: 107b9ff1c; end: 107ba004f; -[SCUnauthenticatedWebBrowserViewController userContentController:didReceive:webView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9ff1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + _DAT_11276b6e0);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c2917a0(*(undefined8 *)(lStack_118 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107ba0050;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_107ba00b0;
  puStack_140 = &UNK_1109fee38;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000100504554(*(undefined8 *)(param_3 + _DAT_11276b6e0),&puStack_158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ba0050; end: 107ba00af; -[SCUnauthenticatedWebBrowserViewController _getInjectionScripts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba0050(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107ba00b0;
  puStack_20 = &UNK_1109fee38;
  lStack_18 = param_1;
  func_0x000100504554(*(undefined8 *)(param_1 + _DAT_11276b6e0),&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ba00b0; end: 107ba01a7;  */

void FUN_107ba00b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d6d30;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0651a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0651a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4820(param_2);
  func_0x00010c065300(param_2);
  uVar4 = param_2;
  func_0x00010c0d57c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c02daa0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bef9c80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ba01a8; end: 107ba01b7; -[SCUnauthenticatedWebBrowserViewController config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba01a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6e8);
}



/* Entry: 107ba01b8; end: 107ba01d7; -[SCUnauthenticatedWebBrowserViewController topViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba01b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b6ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ba01d8; end: 107ba01eb; -[SCUnauthenticatedWebBrowserViewController setTopViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba01d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b6ec,param_3);
  return;
}



/* Entry: 107ba01ec; end: 107ba01fb; -[SCUnauthenticatedWebBrowserViewController desiredURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba01ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6f0);
}



/* Entry: 107ba01fc; end: 107ba021b; -[SCUnauthenticatedWebBrowserViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba01fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b6f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ba021c; end: 107ba022f; -[SCUnauthenticatedWebBrowserViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba021c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b6f4,param_3);
  return;
}



/* Entry: 107ba0230; end: 107ba024f; -[SCUnauthenticatedWebBrowserViewController eventDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba0230(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b6f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ba0250; end: 107ba0263; -[SCUnauthenticatedWebBrowserViewController setEventDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba0250(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b6f8,param_3);
  return;
}



/* Entry: 107ba0264; end: 107ba0273; -[SCUnauthenticatedWebBrowserViewController initialLandingPageEstimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba0264(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6c4);
}



/* Entry: 107ba0274; end: 107ba0283; -[SCUnauthenticatedWebBrowserViewController initialLoadStatusCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba0274(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6fc);
}



/* Entry: 107ba0284; end: 107ba0293; -[SCUnauthenticatedWebBrowserViewController javaScriptMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba0284(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b700);
}



/* Entry: 107ba0294; end: 107ba02a3; -[SCUnauthenticatedWebBrowserViewController lastLoadWasDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ba0294(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b6c8);
}



/* Entry: 107ba02a4; end: 107ba02b3; -[SCUnauthenticatedWebBrowserViewController estimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba02a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6cc);
}



/* Entry: 107ba02b4; end: 107ba02c3; -[SCUnauthenticatedWebBrowserViewController hasSubsequentNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ba02b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b6d0);
}



/* Entry: 107ba02c4; end: 107ba02d3; -[SCUnauthenticatedWebBrowserViewController isScrolledToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ba02c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b6d4);
}



/* Entry: 107ba02d4; end: 107ba02e3; -[SCUnauthenticatedWebBrowserViewController landingPageServerRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba02d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b704);
}



/* Entry: 107ba02e4; end: 107ba0323; -[SCUnauthenticatedWebBrowserViewController setLandingPageServerRedirectCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba02e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b704;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ba0324; end: 107ba0333; -[SCUnauthenticatedWebBrowserViewController landingPageServerRedirectResolvedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba0324(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b708);
}



/* Entry: 107ba0334; end: 107ba0343; -[SCUnauthenticatedWebBrowserViewController landingPageServerRedirectResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba0334(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b70c);
}



/* Entry: 107ba0344; end: 107ba0353; -[SCUnauthenticatedWebBrowserViewController adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba0344(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b710);
}



/* Entry: 107ba0354; end: 107ba0363; -[SCUnauthenticatedWebBrowserViewController adServeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba0354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b714);
}



/* Entry: 107ba0364; end: 107ba0373; -[SCUnauthenticatedWebBrowserViewController enableExtendedLifecycleV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ba0364(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b6d8);
}



/* Entry: 107ba0374; end: 107ba0383; -[SCUnauthenticatedWebBrowserViewController didFullyAppearTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba0374(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b718);
}



/* Entry: 107ba0384; end: 107ba03c3; -[SCUnauthenticatedWebBrowserViewController setDidFullyAppearTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba0384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b718;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ba03c4; end: 107ba03d3; -[SCUnauthenticatedWebBrowserViewController currentUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba03c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b71c);
}



/* Entry: 107ba03d4; end: 107ba03e3; -[SCUnauthenticatedWebBrowserViewController finalResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba03d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b720);
}



/* Entry: 107ba03e4; end: 107ba0513; -[SCUnauthenticatedWebBrowserViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba03e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b720,0);
  _objc_storeStrong(param_1 + _DAT_11276b71c,0);
  _objc_storeStrong(param_1 + _DAT_11276b718,0);
  _objc_storeStrong(param_1 + _DAT_11276b714,0);
  _objc_storeStrong(param_1 + _DAT_11276b710,0);
  _objc_storeStrong(param_1 + _DAT_11276b70c,0);
  _objc_storeStrong(param_1 + _DAT_11276b708,0);
  _objc_storeStrong(param_1 + _DAT_11276b704,0);
  _objc_storeStrong(param_1 + _DAT_11276b700,0);
  _objc_storeStrong(param_1 + _DAT_11276b6fc,0);
  _objc_destroyWeak(param_1 + _DAT_11276b6f8);
  _objc_destroyWeak(param_1 + _DAT_11276b6f4);
  _objc_storeStrong(param_1 + _DAT_11276b6f0,0);
  _objc_destroyWeak(param_1 + _DAT_11276b6ec);
  _objc_storeStrong(param_1 + _DAT_11276b6e8,0);
  _objc_destroyWeak(param_1 + _DAT_11276b6dc);
  _objc_storeStrong(param_1 + _DAT_11276b6e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b6e4,0);
  return;
}



/* Entry: 107ba0514; end: 107ba0587; -[SCWebBrowserMediaPlaybackHelper initWithMetricHelper:] */

undefined1 * FUN_107ba0514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa168;
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



/* Entry: 107ba0588; end: 107ba069f; -[SCWebBrowserMediaPlaybackHelper pauseMediaPlayback:] */

void FUN_107ba0588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107ba06a0;
  puStack_58 = &UNK_110850658;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c135da0(param_3);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0f5b60(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107ba06a0; end: 107ba071b;  */

void FUN_107ba06a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdff600(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ba071c; end: 107ba0747;  */

void FUN_107ba071c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfeb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ba0748; end: 107ba078b; -[SCWebBrowserMediaPlaybackHelper _didPauseMediaPlayback] */

void FUN_107ba0748(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c0c5ea0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ba078c; end: 107ba0813; -[SCWebBrowserMediaPlaybackHelper _didReceiveMediaPlaybackState:] */

void FUN_107ba078c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d6d08;
  _objc_retain(param_3);
  func_0x00010c0c5f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ba0814; end: 107ba081f; -[SCWebBrowserMediaPlaybackHelper .cxx_destruct] */

void FUN_107ba0814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ba0820; end: 107ba12d3; -[SCWebBrowserV11ViewController initWithConfig:delegate:eventDelegate:safeBrowsingChecker:urlInterceptor:additionalScriptControllers:requestInterceptor:grapheneRegistry:webViewPool:webViewScriptFileCache:shareHandler:crashLogger:thirdPartyLoginPlugInExposer:thirdPartyLoginSaberPluginScopeServices:uiContainer:mainQueuePerformer:runtime:alertPresenterFactory:actionSheetPresenterFactory:notificationPresenterFactory:cofStore:browserPrivacyConsentInfoManager:notificationPool:bitmojiAvatarProvider:cofConfigProvider:deckHierarchyFactory:webBrowsingSecureGuard:valdiRuntimeProvider:adTrackSeqNumProvider:userPreferences:webBrowsingBrowserLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ba0820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,long param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  puStack_70 = PTR_PTR_1126fa170;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276b758,param_4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276b75c,param_5);
    lVar7 = (long)_DAT_11276b760;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b764;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b768;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (param_8 != (undefined *)0x0) {
      puVar3 = param_8;
    }
    lVar7 = (long)_DAT_11276b76c;
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b770;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b774;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_10;
    _objc_release(uVar2);
    puVar3 = &UNK_10f449112;
    _dispatch_queue_create_with_target_V2(&UNK_10f449112,0,PTR___dispatch_main_q_11034be20);
    lVar7 = (long)_DAT_11276b778;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    _dispatch_suspend(*(undefined8 *)((long)puVar1 + lVar7));
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276b77c) = 1;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b780);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b780) = puVar3;
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010c1c8b80();
    func_0x00010b8373e4();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276b784;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar2);
    func_0x00010c219b20(puVar1);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR_PTR_1126d6cf8;
    _objc_alloc();
    func_0x00010c247520(param_3);
    puVar4 = puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf21740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a580();
    lVar7 = (long)_DAT_11276b788;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d6d38;
    _objc_alloc();
    func_0x00010c02bd40();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b78c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b78c) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    puVar3 = PTR_PTR_1126d6d08;
    func_0x00010bfee200(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2);
    _objc_release(puVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276b790,puVar1);
    lVar7 = (long)_DAT_11276b794;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_11;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b798;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_12;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b79c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_13;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b7a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b7a0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276b7a4,puVar3);
    _objc_release(puVar3);
    lVar7 = (long)_DAT_11276b7a8;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_14;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7ac;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_15;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7b0;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_16;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7b4;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_17;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7b8;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_18;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7bc;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_23;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7c0;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_24;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7c4;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_25;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7c8;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_26;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7cc;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_28;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7d0;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_29;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7d4;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_30;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7d8;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_31;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b7dc;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_32;
    _objc_release(uVar2);
    uVar2 = param_33;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276b7e0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126d6d40;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf91b40();
    func_0x00010c062c20();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b7e4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b7e4) = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    if (param_19 != 0) {
      lVar8 = (long)_DAT_11276b7e8;
      _objc_retain(param_19);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(long *)((long)puVar1 + lVar8) = param_19;
      _objc_release(uVar2);
      lVar8 = (long)_DAT_11276b7ec;
      _objc_retain(param_20);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined8 *)((long)puVar1 + lVar8) = param_20;
      _objc_release(uVar2);
      lVar8 = (long)_DAT_11276b7f0;
      _objc_retain(param_21);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined8 *)((long)puVar1 + lVar8) = param_21;
      _objc_release(uVar2);
      lVar8 = (long)_DAT_11276b7f4;
      _objc_retain(param_22);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined8 *)((long)puVar1 + lVar8) = param_22;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b7f8);
      *(undefined **)((long)puVar1 + (long)_DAT_11276b7f8) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b7fc);
      *(undefined **)((long)puVar1 + (long)_DAT_11276b7fc) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b800);
      *(undefined **)((long)puVar1 + (long)_DAT_11276b800) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b804);
      *(undefined **)((long)puVar1 + (long)_DAT_11276b804) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b808);
      *(undefined **)((long)puVar1 + (long)_DAT_11276b808) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b80c);
      *(undefined **)((long)puVar1 + (long)_DAT_11276b80c) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b810);
      *(undefined **)((long)puVar1 + (long)_DAT_11276b810) = puVar3;
      _objc_release(uVar2);
      lVar8 = (long)_DAT_11276b814;
      _objc_retain(param_27);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined8 *)((long)puVar1 + lVar8) = param_27;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126d6d48;
      _objc_alloc();
      puVar4 = puVar1;
      func_0x00010bde3be0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bde3bc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061d40();
      lVar8 = (long)_DAT_11276b818;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar3;
      _objc_release(uVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      func_0x00010c295200(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c3578);
      func_0x00010c1275a0(uVar2);
      _objc_release(uVar2);
      puVar4 = puVar1;
      func_0x00010becdd80(0,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c218ee0(*(undefined8 *)((long)puVar1 + lVar7));
      _objc_release(puVar4);
    }
  }
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



/* Entry: 107ba12d4; end: 107ba1337;  */

void FUN_107ba12d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3578;
  _objc_alloc(PTR_PTR_1126c3578);
  puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_opt_new(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x00010c014100(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ba1338; end: 107ba1347; -[SCWebBrowserV11ViewController hasSubsequentNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ba1338(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b81c);
}



/* Entry: 107ba1348; end: 107ba1523; -[SCWebBrowserV11ViewController _composerBrowserViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba1348(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 unaff_x23;
  long lVar7;
  
  puVar2 = PTR_PTR_1126d6d50;
  _objc_opt_new(PTR_PTR_1126d6d50);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = (long)_DAT_11276b760;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010bf80020();
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    unaff_x23 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bef2500(unaff_x23);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x23;
    func_0x00010c06b9e0();
    uVar6 = (uint)uVar4 ^ 1;
  }
  func_0x00010c0df760(puVar3,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e840(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  if (iVar1 != 0) {
    _objc_release(unaff_x23);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf83380(uVar4);
  func_0x00010c0df6e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010beee9a0(uVar4);
  func_0x00010c0df6e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161b20(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010bf91c80();
  if (iVar1 != 0) {
    func_0x00010c19e680(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9e0);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf91380();
  _objc_release(uVar5);
  if ((int)uVar4 != 0) {
    func_0x00010c19e680(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9f8);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276b814);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf9a780();
  func_0x00010c0df780(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b2c0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ba1524; end: 107ba20e3; -[SCWebBrowserV11ViewController _composerBrowserViewContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba1524(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_420 [8];
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined1 auStack_3f8 [8];
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [8];
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined1 auStack_330 [8];
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar11 = *(undefined8 *)(param_1 + _DAT_11276b7e8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107ba20e4;
  puStack_90 = &UNK_110858d90;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_opt_class(PTR_PTR_1126d6d58);
  func_0x00010c0b7ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d6d60;
  _objc_opt_new(PTR_PTR_1126d6d60);
  func_0x00010c173f20();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b7bc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar5 = puVar4;
  FUN_107ba2134();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b7ec);
  func_0x00010c0b7600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166aa0(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b7f0);
  func_0x00010c0b7660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161e00(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b7f4);
  func_0x00010c0b75e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce4c0(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b7f8);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cba20(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b800);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d400(puVar2);
  _objc_release(uVar3);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276b7fc);
  func_0x00010bf870a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bee80(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar9);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b808);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d1c0(puVar2);
  _objc_release(uVar3);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276b80c);
  func_0x00010bf870a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7800(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar9);
  func_0x00010c18a420(puVar2);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x107ba21c4;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c18f360(puVar2);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_107ba2258;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c16e0c0(puVar2);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_107ba22d8;
  puStack_108 = &UNK_1108434b0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c19ed80(puVar2);
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_107ba2358;
  puStack_130 = &UNK_1108434b0;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c1d4c60(puVar2);
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_107ba23d8;
  puStack_158 = &UNK_1108434b0;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010c1e9500(puVar2);
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_107ba2458;
  puStack_180 = &UNK_1108434b0;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010c1fbf80(puVar2);
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_107ba24d8;
  puStack_1a8 = &UNK_1109feec8;
  _objc_copyWeak(auStack_1a0,auStack_80);
  func_0x00010c1d51e0(puVar2);
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_107ba2674;
  puStack_1d0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1c8,auStack_80);
  func_0x00010c1d4ce0(puVar2);
  puStack_210 = puVar1;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_107ba26f4;
  puStack_1f8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1f0,auStack_80);
  func_0x00010c18f400(puVar2);
  puStack_238 = puVar1;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_107ba2774;
  puStack_220 = &UNK_110860e88;
  _objc_copyWeak(auStack_218,auStack_80);
  func_0x00010c165120(puVar2);
  puStack_260 = puVar1;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_107ba2824;
  puStack_248 = &UNK_110843540;
  _objc_copyWeak(auStack_240,auStack_80);
  func_0x00010c1ea420(puVar2);
  puStack_288 = puVar1;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_107ba28a4;
  puStack_270 = &UNK_1108434b0;
  _objc_copyWeak(auStack_268,auStack_80);
  func_0x00010c17c7c0(puVar2);
  puStack_2b0 = puVar1;
  uStack_2a8 = 0xc2000000;
  pcStack_2a0 = FUN_107ba2924;
  puStack_298 = &UNK_1108434b0;
  _objc_copyWeak(auStack_290,auStack_80);
  func_0x00010c1840e0(puVar2);
  puStack_2d8 = puVar1;
  uStack_2d0 = 0xc2000000;
  pcStack_2c8 = FUN_107ba29a4;
  puStack_2c0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_2b8,auStack_80);
  func_0x00010c1fea60(puVar2);
  puStack_300 = puVar1;
  uStack_2f8 = 0xc2000000;
  pcStack_2f0 = FUN_107ba2a24;
  puStack_2e8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_2e0,auStack_80);
  func_0x00010c1cb680(puVar2);
  puStack_328 = puVar1;
  uStack_320 = 0xc2000000;
  uStack_318 = 0x107ba2af0;
  puStack_310 = &UNK_110848ca8;
  _objc_copyWeak(auStack_308,auStack_80);
  func_0x00010c1a3760(puVar2);
  puStack_350 = puVar1;
  uStack_348 = 0xc2000000;
  uStack_340 = 0x107ba2b60;
  puStack_338 = &UNK_11089ef40;
  _objc_copyWeak(auStack_330,auStack_80);
  func_0x00010c21c6c0(puVar2);
  puStack_378 = puVar1;
  uStack_370 = 0xc2000000;
  pcStack_368 = FUN_107ba2bac;
  puStack_360 = &UNK_1108434b0;
  _objc_copyWeak(auStack_358,auStack_80);
  func_0x00010c18d9c0(puVar2);
  puStack_3a0 = puVar1;
  uStack_398 = 0xc2000000;
  uStack_390 = 0x107ba2c78;
  puStack_388 = &UNK_110848ca8;
  _objc_copyWeak(auStack_380,auStack_80);
  func_0x00010c200be0(puVar2);
  puStack_3c8 = puVar1;
  uStack_3c0 = 0xc2000000;
  uStack_3b8 = 0x107ba2cc0;
  puStack_3b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_3a8,auStack_80);
  func_0x00010c18d600(puVar2);
  puStack_3f0 = puVar1;
  uStack_3e8 = 0xc2000000;
  pcStack_3e0 = FUN_107ba2d48;
  puStack_3d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_3d0,auStack_80);
  func_0x00010c18d500(puVar2);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11276b7cc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf55bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf553a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a240(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar10);
  puStack_418 = puVar1;
  uStack_410 = 0xc2000000;
  pcStack_408 = FUN_107ba2dd0;
  puStack_400 = &UNK_110855290;
  _objc_copyWeak(auStack_3f8,auStack_80);
  func_0x00010c17c0c0(puVar2);
  _objc_copyWeak(auStack_420,auStack_80);
  func_0x00010c1a3340(puVar2);
  func_0x00010c1c0520(puVar2);
  _objc_destroyWeak(auStack_420);
  _objc_destroyWeak(auStack_3f8);
  _objc_destroyWeak(auStack_3d0);
  _objc_destroyWeak(auStack_3a8);
  _objc_destroyWeak(auStack_380);
  _objc_destroyWeak(auStack_358);
  _objc_destroyWeak(auStack_330);
  _objc_destroyWeak(auStack_308);
  _objc_destroyWeak(auStack_2e0);
  _objc_destroyWeak(auStack_2b8);
  _objc_destroyWeak(auStack_290);
  _objc_destroyWeak(auStack_268);
  _objc_destroyWeak(auStack_240);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ba20e4; end: 107ba2133;  */

void FUN_107ba20e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010beeac40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ba2134; end: 107ba2173;  */

void FUN_107ba2134(void)

{
  if (lRam0000000113727730 != -1) {
    func_0x00010002a2fc(0x113727730,&PTR___NSConcreteGlobalBlock_1109ff0f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727728,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107ba2174; end: 107ba223b;  */

void FUN_107ba2174(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c008340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ba223c; end: 107ba2257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba223c(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276b820) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 107ba2258; end: 107ba22cf;  */

void FUN_107ba2258(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba22d0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba22d0; end: 107ba22d7;  */

void FUN_107ba22d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2737f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toolbarBackButtonPressed_11267a820);
  return;
}



/* Entry: 107ba22d8; end: 107ba234f;  */

void FUN_107ba22d8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba2350;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba2350; end: 107ba2357;  */

void FUN_107ba2350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toolbarForwardButtonPressed_11267a888);
  return;
}



/* Entry: 107ba2358; end: 107ba23cf;  */

void FUN_107ba2358(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba23d0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba23d0; end: 107ba23d7;  */

void FUN_107ba23d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be67550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onActionMenuOpen_1125776f0);
  return;
}



/* Entry: 107ba23d8; end: 107ba244f;  */

void FUN_107ba23d8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba2450;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba2450; end: 107ba2457;  */

void FUN_107ba2450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toolbarReloadButtonPressed_11267a918);
  return;
}



/* Entry: 107ba2458; end: 107ba24cf;  */

void FUN_107ba2458(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba24d0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba24d0; end: 107ba24d7;  */

void FUN_107ba24d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toolbarSendButtonPressed_11267a920);
  return;
}



/* Entry: 107ba24d8; end: 107ba2673;  */

void FUN_107ba24d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x107ba25a8;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    uStack_48 = param_3;
    lStack_40 = param_1;
    _objc_retain(param_2);
    uStack_38 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107ba2674; end: 107ba26eb;  */

void FUN_107ba2674(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba26ec;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba26ec; end: 107ba26f3;  */

void FUN_107ba26ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onOpenBookmarkPage_112578368);
  return;
}



/* Entry: 107ba26f4; end: 107ba276b;  */

void FUN_107ba26f4(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba276c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba276c; end: 107ba2773;  */

void FUN_107ba276c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onDismissBookmarkPage_112577d38);
  return;
}



/* Entry: 107ba2774; end: 107ba2817;  */

void FUN_107ba2774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_107ba2818;
    puStack_38 = &UNK_11084aaa8;
    lStack_30 = param_1;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 107ba2818; end: 107ba2823;  */

void FUN_107ba2818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be679f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onAddBookmark__112577818,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107ba2824; end: 107ba289b;  */

void FUN_107ba2824(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba289c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba289c; end: 107ba28a3;  */

void FUN_107ba289c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6b110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onRemoveBookmark_1125785e0);
  return;
}



/* Entry: 107ba28a4; end: 107ba291b;  */

void FUN_107ba28a4(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba291c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba291c; end: 107ba2923;  */

void FUN_107ba291c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onClearCache_112577a80);
  return;
}



/* Entry: 107ba2924; end: 107ba299b;  */

void FUN_107ba2924(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba299c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba299c; end: 107ba29a3;  */

void FUN_107ba299c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__copyLink_112558050);
  return;
}



/* Entry: 107ba29a4; end: 107ba2a1b;  */

void FUN_107ba29a4(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba2a1c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba2a1c; end: 107ba2a23;  */

void FUN_107ba2a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toolbarShareButtonPressed_11267a928);
  return;
}



/* Entry: 107ba2a24; end: 107ba2a9b;  */

void FUN_107ba2a24(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba2a9c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba2a9c; end: 107ba2bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba2a9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11276b758;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c08bac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ba2bac; end: 107ba2d37;  */

void FUN_107ba2bac(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x107ba2c24;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba2d38; end: 107ba2d47;  */

void FUN_107ba2d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be573b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logPrivacyPromptEventWithEventT_112573688,9,0);
  return;
}



/* Entry: 107ba2d48; end: 107ba2dbf;  */

void FUN_107ba2d48(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107ba2dc0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107ba2dc0; end: 107ba2dcf;  */

void FUN_107ba2dc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be573b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logPrivacyPromptEventWithEventT_112573688,10,0);
  return;
}



/* Entry: 107ba2dd0; end: 107ba2e53;  */

void FUN_107ba2dd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b1588;
  _objc_opt_new(PTR_PTR_1126b1588);
  func_0x00010bfbb700();
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  else {
    puVar3 = puVar1;
    func_0x00010be1d100(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ba2e54; end: 107ba2eab;  */

void FUN_107ba2e54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d6d68;
    _objc_opt_new(PTR_PTR_1126d6d68);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bfc2ae0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ba2eac; end: 107ba3367; -[SCWebBrowserV11ViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba2eac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126fa170;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126b9450;
  func_0x00010c29c120(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  func_0x00010c219b60(lVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11276b818;
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  uStack_88 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar19);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar18);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  uVar18 = *(undefined8 *)(param_1 + _DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c29cac0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar18);
  _objc_release(puVar1);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107ba3368; end: 107ba3373; -[SCWebBrowserV11ViewController attachUI:] */

void FUN_107ba3368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewController_animated_c_112621588,param_3,0,0);
  return;
}



/* Entry: 107ba3374; end: 107ba3387; -[SCWebBrowserV11ViewController detachUI:] */

void FUN_107ba3374(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ba3380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 107ba3388; end: 107ba338f; +[SCWebBrowserV11ViewController isPreloadingSupported] */

undefined8 FUN_107ba3388(void)

{
  return 1;
}



/* Entry: 107ba3390; end: 107ba339b; +[SCWebBrowserV11ViewController browserName] */

undefined ** FUN_107ba3390(void)

{
  return &PTR____CFConstantStringClassReference_110eb18d8;
}



/* Entry: 107ba339c; end: 107ba33a3; +[SCWebBrowserV11ViewController browserType] */

undefined8 FUN_107ba339c(void)

{
  return 1;
}



/* Entry: 107ba33a4; end: 107ba33ab; +[SCWebBrowserV11ViewController isJavaScriptMetricsSupported] */

undefined8 FUN_107ba33a4(void)

{
  return 1;
}



/* Entry: 107ba33ac; end: 107ba33ff; -[SCWebBrowserV11ViewController landingPageServerRedirectCount] */

void FUN_107ba33ac(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c0d6720();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (1 < uVar2) {
    func_0x00010c0d6720(param_1);
    func_0x00010c0df840(puVar1,param_2,param_1 - 1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ba3400; end: 107ba34af; -[SCWebBrowserV11ViewController landingPageServerRedirectResolvedTsMs] */

void FUN_107ba3400(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_2;
  func_0x00010c087e20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfaf0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 != 0) {
      func_0x00010c08b120(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df720(param_1 * 1000.0,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      goto LAB_107ba349c;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_107ba349c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ba34b0; end: 107ba3543; -[SCWebBrowserV11ViewController landingPageServerRedirectResolvedUrl] */

void FUN_107ba34b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c087e20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bfaf0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010bfaf0a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      goto LAB_107ba3530;
    }
  }
  lVar2 = 0;
LAB_107ba3530:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107ba3544; end: 107ba35a7; -[SCWebBrowserV11ViewController currentUrl] */

void FUN_107ba3544(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ba35a8; end: 107ba35ab; -[SCWebBrowserV11ViewController currentSharableUrl] */

void FUN_107ba35a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be228b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getSharableUrl_1125663c8);
  return;
}



/* Entry: 107ba35ac; end: 107ba35ef; -[SCWebBrowserV11ViewController finalResolvedUrl] */

void FUN_107ba35ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfaf0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ba35f0; end: 107ba367f; -[SCWebBrowserV11ViewController viewWillAppear:] */

void FUN_107ba35f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fa170;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_1;
  func_0x00010beeac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed9240(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010beddfe0(param_1);
  return;
}



/* Entry: 107ba3680; end: 107ba3877; -[SCWebBrowserV11ViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba3680(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fa170;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1b5a20(param_1);
  func_0x00010c1afac0(param_1);
  func_0x00010bee4120(param_1);
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c29c680(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar7);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3460();
    _objc_release(uVar2);
  }
  lVar8 = (long)_DAT_11276b760;
  uVar3 = *(ulong *)(param_1 + lVar8);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c075540();
  _objc_release(uVar3);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + (long)_DAT_11276b828) = 0;
    func_0x00010bee4120(param_1);
    func_0x00010bee96e0(param_1);
    func_0x00010be6cf60(param_1);
  }
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf91c80();
  if ((int)uVar7 != 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11276b824);
    *(undefined8 *)(param_1 + (long)_DAT_11276b824) = uVar7;
    _objc_release(uVar6);
    lVar4 = param_1 + (long)_DAT_11276b758;
    _objc_loadWeakRetained(lVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bef2500(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf9c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78780(lVar4);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 107ba3878; end: 107ba391b; -[SCWebBrowserV11ViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba3878(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fa170;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  func_0x00010c1b5a20(param_1);
  func_0x00010c1afac0(param_1);
  func_0x00010bee4120(param_1);
  uVar1 = *(ulong *)(param_1 + _DAT_11276b760);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075540();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c1b2ea0(param_1);
  }
  return;
}



/* Entry: 107ba391c; end: 107ba399b; -[SCWebBrowserV11ViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba391c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fa170;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar1 = *(ulong *)(param_1 + _DAT_11276b760);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075540();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bde15a0(param_1);
  }
  return;
}



/* Entry: 107ba399c; end: 107ba39ab; -[SCWebBrowserV11ViewController updateExitMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba399c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276b820) = param_3;
  return;
}


