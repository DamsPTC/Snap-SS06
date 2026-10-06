/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105774780; end: 105774827; -[SCWebBrowsingEntryPointHandler .cxx_destruct] */

void FUN_105774780(long param_1)

{
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



/* Entry: 105774828; end: 105774833; -[SCWebBrowsingUserScopedCache clearBrowserCachesAndCookies] */

void FUN_105774828(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4f58,PTR_s_clearBrowserCachesAndCookies_1125ac450);
  return;
}



/* Entry: 105774834; end: 10577483f; -[SCWebBrowsingUserScopedCache clearBrowserCachesAndCookiesWithCompletionBlock:] */

void FUN_105774834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4f58,PTR_s_clearBrowserCachesAndCookiesWith_1125ac458);
  return;
}



/* Entry: 105774840; end: 10577484b; -[SCWebBrowsingUserScopedCache markClearDiskCacheOnNextColdStartupIfExceeds:] */

void FUN_105774840(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4f58,PTR_s_markClearDiskCacheOnNextColdStar_11260c6c8);
  return;
}



/* Entry: 10577484c; end: 105774857; -[SCWebBrowsingUserScopedCache browserCachesAndCookiesSize] */

void FUN_10577484c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf215f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4f58,PTR_s_browserCachesAndCookiesSize_1125a5f20);
  return;
}



/* Entry: 105774858; end: 10577490f;  */

void FUN_105774858(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    ppuVar1 = &PTR_PTR_1126bde10;
    if (*(char *)(param_1 + 0x28) == '\0') {
      ppuVar1 = &PTR_PTR_1126bde18;
    }
    _objc_opt_new(*ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105774910; end: 1057749e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105774910(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126bde30;
    _objc_alloc(PTR_PTR_1126bde30);
    lVar1 = param_1 + _DAT_112729134;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11272912c;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018500(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057749e8; end: 105774a03;  */

void FUN_1057749e8(void)

{
  _objc_opt_new(PTR_PTR_1126bde38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105774a04; end: 105774a53; -[SCWebBrowsingUserScopedServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105774a04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729138);
  _objc_destroyWeak(param_1 + _DAT_11272912c);
  _objc_destroyWeak(param_1 + _DAT_112729134);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729130);
  return;
}



/* Entry: 105774a54; end: 105774acf; -[SCWebBrowsingViewProvider webViewWithFrame:scalesPageToFit:] */

void FUN_105774a54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_3 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
    _objc_opt_new(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  }
  else {
    puVar1 = PTR_PTR_1126b4f58;
    func_0x00010bf57640(PTR_PTR_1126b4f58,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b4f58;
  func_0x00010bdc3620(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),PTR_PTR_1126b4f58,param_2,
                      puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105774ad0; end: 105774aeb; -[SCWebBrowsingViewProvider webViewWithFrame:configuration:] */

void FUN_105774ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),PTR_PTR_1126b4f58,
             PTR_s_WKWebViewWithFrame_configuration_11254e728);
  return;
}



/* Entry: 105774aec; end: 105774bd3; -[SCWebBrowsingViewProvider providePrefetchHintsLoadWkWebviewWithSharedCookie:] */

void FUN_105774aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_alloc_init(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  puVar2 = PTR__OBJC_CLASS___WKPreferences_1126bde50;
  _objc_opt_new(PTR__OBJC_CLASS___WKPreferences_1126bde50);
  func_0x00010c1b65a0();
  func_0x00010c1dfdc0(puVar1,param_2,puVar2);
  func_0x00010c189540(puVar1,param_2,5);
  func_0x00010c167600(puVar1,param_2,1);
  puVar3 = PTR_PTR_1126af390;
  func_0x00010bf07bc0(PTR_PTR_1126af390,param_2,0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169940(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b4f58;
  func_0x00010bdc3640(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),PTR_PTR_1126b4f58,param_2,
                      puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105774bd4; end: 105774ddf; -[SCAdWebviewEventStreamsRepository initWithAdTrackPerformer:adConfigProvider:webBrowsingConfigProvider:webBrowsingUrlParameterModificationLogger:] */

undefined1 *
FUN_105774bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea1c8;
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
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105774de0; end: 105774e07; -[SCAdWebviewEventStreamsRepository adLifecycleEventObservableV2] */

void FUN_105774de0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774e08; end: 105774e0f; -[SCAdWebviewEventStreamsRepository adLifecycleEventObservable] */

undefined8 FUN_105774e08(void)

{
  return 0;
}



/* Entry: 105774e10; end: 105774e17; -[SCAdWebviewEventStreamsRepository adInteractionEventObservable] */

undefined8 FUN_105774e10(void)

{
  return 0;
}



/* Entry: 105774e18; end: 105774e1f; -[SCAdWebviewEventStreamsRepository streamsType] */

undefined8 FUN_105774e18(void)

{
  return 2;
}



/* Entry: 105774e20; end: 105774e47; -[SCAdWebviewEventStreamsRepository adWebviewEventObservable] */

void FUN_105774e20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774e48; end: 105774e6f; -[SCAdWebviewEventStreamsRepository adWebviewUserEventObservableV2] */

void FUN_105774e48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774e70; end: 105774e97; -[SCAdWebviewEventStreamsRepository adWebviewConfigEventObservable] */

void FUN_105774e70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774e98; end: 105774ebf; -[SCAdWebviewEventStreamsRepository adWebviewAsmEventObservable] */

void FUN_105774e98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774ec0; end: 105774ee7; -[SCAdWebviewEventStreamsRepository adWebviewLoadingEventObservable] */

void FUN_105774ec0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774ee8; end: 105774f0f; -[SCAdWebviewEventStreamsRepository adWebviewNavigationEventObservable] */

void FUN_105774ee8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774f10; end: 105774f37; -[SCAdWebviewEventStreamsRepository adWebviewGaEventObservable] */

void FUN_105774f10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774f38; end: 105774f5f; -[SCAdWebviewEventStreamsRepository adWebviewOperationEventObservable] */

void FUN_105774f38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105774f60; end: 105775043; -[SCAdWebviewEventStreamsRepository webBrowserInterimJavaScriptMetricsUpdate:eventType:performanceMetrics:common:] */

void FUN_105774f60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    lVar1 = *(long *)(param_6 + 0x10);
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_6 + 0x18);
      _objc_retain(lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar2 != 0) {
        lVar1 = param_3;
        func_0x00010c085420();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          lVar1 = param_5;
          func_0x00010bf529e0();
          if (lVar1 != 0) {
            func_0x00010be6c800(param_1,param_2,param_3,param_5,param_4,param_6);
          }
        }
        else {
          _objc_release();
        }
      }
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105775044; end: 1057751db; -[SCAdWebviewEventStreamsRepository webBrowserDidFinalizeJavaScriptMetrics:eventType:common:] */

void FUN_105775044(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 == 0) goto LAB_1057751b0;
  lVar4 = *(long *)(param_5 + 0x10);
  _objc_retain(lVar4);
  if (lVar4 == 0) goto LAB_1057751b0;
  lVar5 = *(long *)(param_5 + 0x18);
  _objc_retain(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar5 == 0) goto LAB_1057751b0;
  _objc_retain(param_5);
  uVar6 = *(undefined8 *)(param_5 + 0x10);
  _objc_retain(uVar6);
  uVar1 = *(undefined8 *)(param_5 + 0x48);
  _objc_retain(uVar1);
  func_0x00010c067ec0();
  _objc_release(param_5);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dfd6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar3 = param_3;
  func_0x00010c085420();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar3 = param_3;
    _objc_opt_class();
    func_0x00010c075de0();
    if ((uVar3 & 1) == 0) goto LAB_105775158;
  }
  else {
    _objc_release();
LAB_105775158:
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf4b900(uVar3,param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
      uVar3 = param_3;
      func_0x00010c085420(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6c800(param_1,param_2,param_3,uVar3,param_4,param_5);
      _objc_release(uVar3);
    }
  }
  _objc_release(puVar2);
LAB_1057751b0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057751dc; end: 1057753d7; -[SCAdWebviewEventStreamsRepository webBrowser:didNavigate:common:exitMethod:] */

void FUN_1057751dc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_6 != 0) {
    lVar5 = *(long *)(param_6 + 0x10);
    _objc_retain(lVar5);
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_6 + 0x18);
      _objc_retain(lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      if (lVar6 != 0) {
        func_0x00010c063f20(param_4);
        uVar1 = param_4;
        func_0x00010bf60880(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010bfaf000(param_4);
        _objc_retainAutoreleasedReturnValue();
        if (param_5 == 6) {
          func_0x00010beeaac0(param_2);
        }
        else if (param_5 == 5) {
          func_0x00010beeaa80(param_2);
        }
        else if (param_5 == 2) {
          func_0x00010beeaaa0(param_2);
        }
        puVar3 = PTR_PTR_1126b9060;
        _objc_alloc(PTR_PTR_1126b9060);
        uVar7 = *(undefined8 *)(param_6 + 8);
        _objc_retain(uVar7);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1 * 100.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b892c90(puVar3,uVar7,param_5,puVar4,uVar1,uVar2,param_7,0,0,0);
        _objc_release(puVar4);
        _objc_release(uVar7);
        uVar7 = *(undefined8 *)(param_2 + 0x68);
        puVar4 = PTR_PTR_1126b9068;
        _objc_alloc(PTR_PTR_1126b9068);
        func_0x00010c000060();
        func_0x00010c0d9840(uVar7);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057753d8; end: 10577555b; -[SCAdWebviewEventStreamsRepository webBrowserDidReceiveGAHit:isPageView:isLandingPage:didFullyAppearTimestampMs:common:] */

void FUN_1057753d8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_7 != 0) {
    lVar4 = *(long *)(param_7 + 0x10);
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_7 + 0x18);
      _objc_retain(lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (((0.0 < param_1) && (lVar5 != 0)) && (param_1 <= *(double *)(param_7 + 0x78))) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(*(double *)(param_7 + 0x78) - param_1,
                            PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b9070;
        _objc_alloc(PTR_PTR_1126b9070);
        uVar6 = *(undefined8 *)(param_7 + 8);
        _objc_retain(uVar6);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(*(undefined8 *)(param_7 + 0x78),PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b893138(puVar2,uVar6,param_4,puVar1,puVar3,param_5,param_6);
        _objc_release(puVar3);
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_2 + 0x70);
        puVar3 = PTR_PTR_1126b9078;
        _objc_alloc(PTR_PTR_1126b9078);
        func_0x00010c000060();
        func_0x00010c0d9840(uVar6);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
    }
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10577555c; end: 10577562b; -[SCAdWebviewEventStreamsRepository webBrowser:onWebviewUserEvent:] */

void FUN_10577555c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_retain();
  }
  else {
    lVar3 = *(long *)(lVar1 + 8);
    _objc_retain(lVar3);
    if (lVar3 != 0) {
      lVar2 = param_4;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar2 + 0x18);
      }
      _objc_retain(lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (lVar4 != 0) {
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50),param_2,param_4);
      }
      goto LAB_10577560c;
    }
  }
  _objc_release(lVar1);
LAB_10577560c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10577562c; end: 1057756fb; -[SCAdWebviewEventStreamsRepository webBrowser:onWebvewConfigEvent:] */

void FUN_10577562c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_retain();
  }
  else {
    lVar3 = *(long *)(lVar1 + 0x10);
    _objc_retain(lVar3);
    if (lVar3 != 0) {
      lVar2 = param_4;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar2 + 0x18);
      }
      _objc_retain(lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (lVar4 != 0) {
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x48),param_2,param_4);
      }
      goto LAB_1057756dc;
    }
  }
  _objc_release(lVar1);
LAB_1057756dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057756fc; end: 1057757cb; -[SCAdWebviewEventStreamsRepository onWebviewAsmEvent:] */

void FUN_1057756fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_retain();
  }
  else {
    lVar3 = *(long *)(lVar1 + 8);
    _objc_retain(lVar3);
    if (lVar3 != 0) {
      lVar2 = param_3;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar2 + 0x18);
      }
      _objc_retain(lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (lVar4 != 0) {
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
      }
      goto LAB_1057757ac;
    }
  }
  _objc_release(lVar1);
LAB_1057757ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057757cc; end: 10577582f; -[SCAdWebviewEventStreamsRepository webBrowser:onWebviewOperationEvent:] */

void FUN_1057757cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_4 + 8);
  }
  _objc_retain(lVar1);
  _objc_release(lVar1);
  if (lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105775830; end: 10577587f; -[SCAdWebviewEventStreamsRepository webBrowser:onWebviewUrlParameterModificationEvent:] */

void FUN_105775830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2760();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105775880; end: 105775ea3; -[SCAdWebviewEventStreamsRepository _onWebBrowser:performanceMetrics:eventType:common:] */

void FUN_105775880(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  _objc_retain(param_4);
  puVar14 = PTR_PTR_1126b9450;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f9840(puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar2 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar14);
  uVar11 = uVar1;
  if ((uVar2 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain(uVar11);
  _objc_release(uVar1);
  puVar14 = PTR_PTR_1126b9450;
  func_0x00010c0f97e0(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126bde58;
  func_0x00010c0d6ba0(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126bde58;
  func_0x00010c13b840(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  lVar3 = param_1;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126bde58;
  func_0x00010bf87b80(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  lVar4 = param_1;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126bde58;
  func_0x00010c09b460(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  lVar5 = param_1;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126bde58;
  func_0x00010bf87ce0(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  lVar6 = param_1;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126bde58;
  func_0x00010bf87b80(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  lVar7 = param_1;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126bde58;
  func_0x00010bf87aa0(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  lVar8 = param_1;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126bde58;
  func_0x00010c13bc60(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  func_0x00010c0b4ca0(uVar1);
  lVar9 = param_1;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar14);
  if ((long)uVar2 < 1) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR_PTR_1126b9450;
  func_0x00010c0f9880(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uVar15 = param_3;
  func_0x00010bf6eb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar12 = uVar15;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  puVar10 = PTR_PTR_1126b9450;
  func_0x00010c0f9860(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b9050;
  _objc_alloc(PTR_PTR_1126b9050);
  if (param_6 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_6 + 8);
  }
  _objc_retain(uVar15);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b892588(puVar10,uVar15,param_5,puVar13,lVar9,lVar6,lVar7,lVar8,lVar3,lVar4,puVar14,
                      lVar5,uVar11,uVar12,uVar1);
  _objc_release(puVar13);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  puVar13 = PTR_PTR_1126b9058;
  _objc_alloc(PTR_PTR_1126b9058);
  func_0x00010c000060();
  _objc_release(param_6);
  func_0x00010c0d9840(uVar15);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar14);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105775ea4; end: 105775edb; -[SCAdWebviewEventStreamsRepository _webViewLatencyValue:startTimestamp:] */

void FUN_105775ea4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((0 < param_4) && (param_4 <= param_3)) {
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 - param_4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105775edc; end: 105776083; -[SCAdWebviewEventStreamsRepository _adTrackCommon:] */

void FUN_105775edc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR_PTR_1126b8e38;
  _objc_retain(param_3);
  _objc_alloc();
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar2 = 0;
    uVar8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uStack_80 = 0;
    uVar6 = 0;
    uStack_98 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_3 + 0x48);
    uStack_80 = *(undefined8 *)(param_3 + 0x50);
    _objc_retain(uVar4);
    uVar11 = *(undefined8 *)(param_3 + 0x78);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar6);
    uStack_98 = *(undefined8 *)(param_3 + 0x38);
    uStack_90 = *(undefined8 *)(param_3 + 0x58);
    uVar9 = *(undefined8 *)(param_3 + 0x70);
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    uStack_88 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    uVar2 = *(undefined8 *)(param_3 + 0x68);
    uVar10 = *(undefined8 *)(param_3 + 0x80);
  }
  _objc_retain(uVar10);
  _objc_release(param_3);
  func_0x00010bff1840(uVar11,puVar1,param_2,uVar3,uStack_80,uVar4,uVar5,uVar6,uStack_88,uStack_98,
                      uStack_90,uVar9,uVar8,uVar7,uVar2,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105776084; end: 10577613f; -[SCAdWebviewEventStreamsRepository _webBrowserViewDidAppear:] */

void FUN_105776084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_retain(param_3);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b8e70;
  _objc_alloc(PTR_PTR_1126b8e70);
  lVar2 = param_1;
  func_0x00010bdc58a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b8e68;
  func_0x00010c29c680(PTR_PTR_1126b8e68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000140(puVar1,param_2,lVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x80),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105776140; end: 105776207; -[SCAdWebviewEventStreamsRepository _webBrowserDidDismiss:exitMethod:common:] */

void FUN_105776140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    if (param_5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_5 + 0x78);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar3);
    func_0x00010c2a31c0(param_1,param_2,param_3,8,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105776208; end: 1057762cf; -[SCAdWebviewEventStreamsRepository _webBrowserWillResignActive:exitMethod:common:] */

void FUN_105776208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    if (param_5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_5 + 0x78);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar3);
    func_0x00010c2a31c0(param_1,param_2,param_3,9,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057762d0; end: 1057762d7; -[SCAdWebviewEventStreamsRepository adLifecycleEventSubjectV2] */

undefined8 FUN_1057762d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1057762d8; end: 105776307; -[SCAdWebviewEventStreamsRepository setAdLifecycleEventSubjectV2:] */

void FUN_1057762d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105776308; end: 10577630f; -[SCAdWebviewEventStreamsRepository adWebviewConfigEventSubject] */

undefined8 FUN_105776308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105776310; end: 10577633f; -[SCAdWebviewEventStreamsRepository setAdWebviewConfigEventSubject:] */

void FUN_105776310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105776340; end: 105776347; -[SCAdWebviewEventStreamsRepository adWebviewUserEventSubjectV2] */

undefined8 FUN_105776340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105776348; end: 105776377; -[SCAdWebviewEventStreamsRepository setAdWebviewUserEventSubjectV2:] */

void FUN_105776348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105776378; end: 10577637f; -[SCAdWebviewEventStreamsRepository adWebviewAsmEventSubject] */

undefined8 FUN_105776378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105776380; end: 1057763af; -[SCAdWebviewEventStreamsRepository setAdWebviewAsmEventSubject:] */

void FUN_105776380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057763b0; end: 1057763b7; -[SCAdWebviewEventStreamsRepository adWebviewLoadingEventSubject] */

undefined8 FUN_1057763b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1057763b8; end: 1057763bf; -[SCAdWebviewEventStreamsRepository adWebviewNavigationEventSubject] */

undefined8 FUN_1057763b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1057763c0; end: 1057763c7; -[SCAdWebviewEventStreamsRepository adWebviewGaEventSubject] */

undefined8 FUN_1057763c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1057763c8; end: 1057763cf; -[SCAdWebviewEventStreamsRepository adWebviewOperationEventSubject] */

undefined8 FUN_1057763c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1057763d0; end: 1057763d7; -[SCAdWebviewEventStreamsRepository adWebviewEventSubject] */

undefined8 FUN_1057763d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1057763d8; end: 105776407; -[SCAdWebviewEventStreamsRepository setAdWebviewEventSubject:] */

void FUN_1057763d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105776408; end: 1057764df; -[SCAdWebviewEventStreamsRepository .cxx_destruct] */

void FUN_105776408(long param_1)

{
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



/* Entry: 1057764e0; end: 105776687; -[SCAdWebViewAssetPrefetcherImpl initWithWebBrowsingScriptCache:contentDelivery:adConfigProvider:webBrowsingConfigProvider:queuePerformer:prefetchHintsManager:httpMetadataService:httpRequestModifier:] */

undefined1 *
FUN_1057764e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ea1d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105776688; end: 10577670b; -[SCAdWebViewAssetPrefetcherImpl prefetchScriptFileForAdPod:] */

void FUN_105776688(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bef4c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107da0(param_1,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577670c; end: 10577680b; -[SCAdWebViewAssetPrefetcherImpl prefetchScriptFileForAdResponses:] */

void FUN_10577670c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10577680c; end: 105776847;  */

void FUN_10577680c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be775e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105776848; end: 1057768df; -[SCAdWebViewAssetPrefetcherImpl _prefetchDynamicScriptFile] */

void FUN_105776848(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b8cf0;
  func_0x00010c09dfe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf8bae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010be76ea0(param_1,param_2,uVar4);
    _objc_release(uVar4);
  }
  else {
    func_0x00010be77380(param_1,param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057768e0; end: 105776a83; -[SCAdWebViewAssetPrefetcherImpl _prefetchLocalTestScriptFile:] */

void FUN_1057768e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf225e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c25f600(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105776a84; end: 105776a87;  */

void FUN_105776a84(void)

{
  return;
}



/* Entry: 105776a88; end: 105776b3b;  */

void FUN_105776a88(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long in_x4;
  long in_x5;
  
  _objc_retain(in_x4);
  if ((in_x5 == 0) && (lVar1 = in_x4, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf26c00();
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 105776b3c; end: 105776ee3; -[SCAdWebViewAssetPrefetcherImpl _prefetchScriptFileForAdResponses:] */

void FUN_105776b3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_200;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_200 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lStack_200 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_1a8 + lVar10 * 8);
        lVar1 = lVar13;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar1;
        func_0x00010c08fa60();
        _objc_release(lVar1);
        if (lVar12 != 0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          func_0x00010bef52c0();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar13;
          func_0x00010bf52a60();
          if (lVar1 != 0) {
            lVar12 = *plStack_1e0;
            do {
              lVar11 = 0;
              do {
                if (*plStack_1e0 != lVar12) {
                  _objc_enumerationMutation(lVar13);
                }
                lVar14 = *(long *)(lStack_1e8 + lVar11 * 8);
                lVar2 = lVar14;
                func_0x00010bef60a0();
                if (lVar2 == 3) {
                  lVar2 = lVar14;
                  func_0x00010c242040();
                  _objc_retainAutoreleasedReturnValue();
                  lVar3 = lVar2;
                  func_0x00010bf20540();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar3;
                  func_0x00010c2a4740();
                  _objc_retainAutoreleasedReturnValue();
                  lVar5 = lVar4;
                  func_0x00010c2a3520();
                  _objc_release(lVar4);
                  _objc_release(lVar3);
                  _objc_release(lVar2);
                  if (lVar5 != 3) {
                    func_0x00010be77020(param_1,param_2,lVar14);
                    func_0x00010be77180(param_1);
                  }
                }
                else {
                  lVar2 = lVar14;
                  func_0x00010bef60a0();
                  if (lVar2 == 10) {
                    func_0x00010c242040();
                    _objc_retainAutoreleasedReturnValue();
                    lVar2 = lVar14;
                    func_0x00010bf20540();
                    _objc_retainAutoreleasedReturnValue();
                    lVar3 = lVar2;
                    func_0x00010bf3fc80();
                    _objc_retainAutoreleasedReturnValue();
                    lVar4 = lVar3;
                    func_0x00010bf68c60();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar3);
                    _objc_release(lVar2);
                    _objc_release(lVar14);
                    lVar2 = lVar4;
                    func_0x00010bef60a0();
                    if (lVar2 == 3) {
                      lVar2 = lVar4;
                      func_0x00010c2a4760();
                      _objc_retainAutoreleasedReturnValue();
                      lVar14 = lVar2;
                      func_0x00010c2a3520();
                      _objc_release(lVar2);
                      if (lVar14 != 3) {
                        lVar2 = lVar4;
                        func_0x00010c2a4760();
                        _objc_retainAutoreleasedReturnValue();
                        lVar14 = lVar2;
                        func_0x00010bf96040();
                        _objc_retainAutoreleasedReturnValue();
                        lVar3 = lVar14;
                        func_0x00010bf96060();
                        _objc_retainAutoreleasedReturnValue();
                        lVar5 = lVar3;
                        func_0x00010c28f340();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(lVar3);
                        _objc_release(lVar14);
                        _objc_release(lVar2);
                        func_0x00010be77000(param_1,param_2,lVar5);
                        func_0x00010be77180(param_1);
                        _objc_release(lVar5);
                      }
                    }
                    _objc_release(lVar4);
                  }
                }
                lVar11 = lVar11 + 1;
              } while (lVar1 != lVar11);
              lVar1 = lVar13;
              func_0x00010bf52a60(lVar13,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar1 != 0);
          }
          _objc_release(lVar13);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != lStack_200);
      lStack_200 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lStack_200 != 0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c108fa0();
  _objc_release(uVar6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  puVar7 = PTR_PTR_1126bde60;
  func_0x00010c09dfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c08fa60();
  if (puVar8 == (undefined *)0x0) {
    lVar10 = lVar9;
    func_0x00010c242040(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar10;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf96040();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar13;
    func_0x00010bf96060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar1);
    _objc_release(lVar10);
    func_0x00010be77000(param_3,param_2,lVar2);
    _objc_release(lVar2);
  }
  else {
    func_0x00010be77380(param_3,param_2,puVar7);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 105776ee4; end: 105777007; -[SCAdWebViewAssetPrefetcherImpl _prefetchAsmScriptWithAdSnap:] */

void FUN_105776ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bde60;
  func_0x00010c09dfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    uVar3 = param_3;
    func_0x00010c242040(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf96040();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf96060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010be77000(param_1,param_2,uVar8);
    _objc_release(uVar8);
  }
  else {
    func_0x00010be77380(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105777008; end: 10577700b; -[SCAdWebViewAssetPrefetcherImpl _prefetchAsmScriptForUrl:] */

void FUN_105777008(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prefetcScriptViaContentManagerW_11257b548);
  return;
}



/* Entry: 10577700c; end: 1057770e3; -[SCAdWebViewAssetPrefetcherImpl _prefetcScriptViaContentManagerWithDownloadUrl:] */

void FUN_10577700c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be76e80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1057770e4; end: 10577715f;  */

void FUN_1057770e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010be2fa20(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105777160; end: 10577737f; -[SCAdWebViewAssetPrefetcherImpl _prefetcAssetsViaContentManagerWithDownloadUrl:completion:] */

void FUN_105777160(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    puVar3 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    uVar8 = 0x40d5180000000000;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1058;
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c01b360();
    puVar7 = PTR_PTR_1126b1050;
    _objc_alloc(PTR_PTR_1126b1050);
    uVar1 = param_3;
    func_0x00010c05a200();
    _objc_release(param_3);
    _objc_release(puVar6);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105777380;
    puStack_80 = &UNK_1108b06f0;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    uStack_68 = uVar8;
    func_0x00010c1267e0(uVar5,param_2,puVar2,puVar7,0,0,puVar3,puVar4,uVar1 & 0xffffffffffffff00,
                        &puStack_98);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar5);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105777380; end: 1057773eb;  */

void FUN_105777380(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x28);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  (**(code **)(lVar1 + 0x10))(param_1 - *(double *)(param_2 + 0x30),lVar1,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057773ec; end: 10577748b; -[SCAdWebViewAssetPrefetcherImpl _handleScriptPrefetchContentDownloadUrl:data:success:latency:isFromCache:] */

void FUN_1057773ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c008340();
    _objc_release(param_4);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf26c00();
    _objc_release(param_3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10577748c; end: 105777503; -[SCAdWebViewAssetPrefetcherImpl .cxx_destruct] */

void FUN_10577748c(long param_1)

{
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



/* Entry: 105777504; end: 10577769b; -[SCAdWebViewPrefetchHintsDataSource initWithContentDelivery:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:grapheneRegistry:queuePerformer:] */

undefined1 *
FUN_105777504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ea1d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10577769c; end: 105777927; -[SCAdWebViewPrefetchHintsDataSource preparePrefetchHints:adSwipeUpLikely:isPrefetchOptIn:adType:metadata:completion:] */

void FUN_10577769c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  *(char *)(param_1 + 0x40) = (char)param_5;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf905e0();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010be40bc0();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  if (param_4 == 0) {
LAB_105777794:
    if (param_5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bf910c0();
      _objc_release(uVar6);
      if ((int)uVar3 != 0) goto LAB_1057777c4;
    }
    uVar3 = 3;
    if ((uint)uVar8 == 0) {
      uVar3 = 0;
    }
    _objc_initWeak(auStack_68,param_1);
    if ((((uint)uVar8 | (uint)lVar2 | (uint)uVar1) & 1) == 0) {
      puVar7 = PTR_PTR_1126bde68;
      func_0x00010c0da6a0(PTR_PTR_1126bde68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be38560(param_1);
      _objc_release(puVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      _objc_copyWeak(auStack_80,auStack_68);
      _objc_retain(param_3);
      uStack_78 = uVar3;
      uStack_70 = param_6;
      _objc_retain(param_8);
      func_0x00010c0f7fc0(uVar8);
      _objc_release(param_8);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      goto LAB_1057778c4;
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf912a0();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) goto LAB_105777794;
LAB_1057777c4:
    _objc_initWeak(auStack_68,param_1);
  }
  func_0x00010be06020(param_1);
LAB_1057778c4:
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 105777928; end: 105777963;  */

void FUN_105777928(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105777964; end: 105777a9f; -[SCAdWebViewPrefetchHintsDataSource retrievePrefetchHints:] */

void FUN_105777964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105777aa0;
  uStack_40 = 0x105777ab0;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105777aa0; end: 105777ab7;  */

void FUN_105777aa0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105777ab8; end: 105777b13;  */

void FUN_105777ab8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be4cbc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105777b14; end: 105777c27; -[SCAdWebViewPrefetchHintsDataSource _downloadPrefetchHints:prefetchMode:adType:completion:] */

void FUN_105777b14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105777c28; end: 105777c67;  */

void FUN_105777c28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0f8720(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105777c68; end: 10577803f; -[SCAdWebViewPrefetchHintsDataSource performDownloadPrefetchHints:prefetchMode:adType:completion:] */

void FUN_105777c68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bde68;
  func_0x00010bf88740(PTR_PTR_1126bde68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be38560(param_1);
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_105778040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1060;
    _objc_alloc();
    func_0x00010c032f60();
    puVar1 = PTR_PTR_1126b1378;
    func_0x00010c0c46a0(puVar4);
    func_0x00010c1081a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b4960;
    _objc_retain();
    _objc_retain(puVar3);
    puVar7 = puVar5;
    func_0x00010c0f1260(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58680(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b9f60;
    _objc_alloc(PTR_PTR_1126b9f60);
    func_0x00010c040f00();
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40ac200000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_70,param_1);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10577808c;
    puStack_b0 = &UNK_1108b0720;
    puStack_a8 = puVar6;
    _objc_copyWeak(auStack_88,auStack_70);
    _objc_retain(param_3);
    uStack_a0 = param_3;
    puStack_98 = puVar3;
    uStack_80 = param_4;
    uStack_78 = param_5;
    _objc_retain(param_6);
    ppuVar10 = &puStack_c8;
    lStack_90 = param_6;
    _objc_retainBlock();
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88aa0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(ppuVar10);
    _objc_release(lStack_90);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar1 = PTR_PTR_1126bde68;
    func_0x00010bf889c0(PTR_PTR_1126bde68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38560(param_1);
    _objc_release(puVar1);
    puVar3 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105778040; end: 10577808b;  */

void FUN_105778040(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10577808c; end: 10577812f;  */

void FUN_10577808c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  if (param_2 != 0) {
    puVar2 = PTR_PTR_1126bde68;
    func_0x00010bf88be0(PTR_PTR_1126bde68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38560(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000105778104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
    return;
  }
  func_0x00010be4e480(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105778130; end: 1057782d3; -[SCAdWebViewPrefetchHintsDataSource _loadPrefetchHintsHtmlIntoMemoryCache:cacheKey:prefetchMode:adType:completion:] */

void FUN_105778130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126bde68;
  func_0x00010bf89080(PTR_PTR_1126bde68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be38560(param_1,param_2,puVar1,param_5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1057782d4;
  puStack_88 = &UNK_1108b0780;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_7;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_a0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  FUN_105778040(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13e560(uVar3,param_2,uVar4,puVar1,ppuVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1057782d4; end: 105778407;  */

void FUN_1057782d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105778408; end: 10577844b;  */

void FUN_105778408(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfd0940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10577844c; end: 1057785e7; -[SCAdWebViewPrefetchHintsDataSource handleContentResult:prefetchHintsId:cacheKey:prefetchMode:adType:completion:] */

/* WARNING: Removing unreachable block (ram,0x000105778544) */

void FUN_10577844c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfcaaa0(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126bde68;
    func_0x00010c09b4c0(PTR_PTR_1126bde68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38560(param_1);
    _objc_release(puVar2);
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    lVar1 = param_3;
    func_0x00010b7f5374(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bde70;
    func_0x00010c0f40e0(PTR_PTR_1126bde70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bde68;
    func_0x00010c09c400(PTR_PTR_1126bde68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38560(param_1);
    _objc_release(puVar3);
    func_0x00010be78ea0(param_1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057785e8; end: 105778713; -[SCAdWebViewPrefetchHintsDataSource _loadCachedPrefetchHintsHtml:] */

void FUN_1057785e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar7,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126bde68;
  func_0x00010c09b5a0(PTR_PTR_1126bde68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar7 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfd778,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2a4380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 105778714; end: 1057789c7; -[SCAdWebViewPrefetchHintsDataSource _buildPrefetchHTML:prefetchHintsId:prefetchMode:prefetchResourceURLs:topConnectedOriginURLs:usesWebviewMetadata:] */

void FUN_105778714(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126bde68;
    func_0x00010bf8ed00(PTR_PTR_1126bde68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38580(param_1);
  }
  else {
    if (param_8 != 0) {
      lVar1 = *(long *)(param_1 + 0x30);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) goto LAB_10577898c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1061e0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f480();
    _objc_release(uVar2);
    if (param_1[0x40] == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf910c0();
      _objc_release(uVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f480();
    _objc_release(uVar4);
    puVar3 = param_1;
    func_0x00010be21920(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf872e0();
    _objc_release(uVar4);
    func_0x00010bf529e0(puVar3);
    puVar5 = param_1;
    func_0x00010be236a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_6;
    FUN_10577b7dc(param_6,puVar3,puVar5,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bde78;
    _objc_alloc(PTR_PTR_1126bde78);
    func_0x00010bff7140();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    func_0x00010be51000(param_1);
    _objc_release(puVar6);
    _objc_release(lVar1);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
LAB_10577898c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057789c8; end: 105778bf7; -[SCAdWebViewPrefetchHintsDataSource _logCachedPrefetchHintsGrapheneMetric:preconnectUrls:dnsPrefetchUrls:prefetchMode:usesWebviewMetadata:] */

void FUN_1057789c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bde68;
  func_0x00010bf26700(PTR_PTR_1126bde68);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = puVar1;
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010c0df840(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfd7d8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar2 = param_4;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = puVar5;
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bf529e0(param_4);
    func_0x00010c0df840(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dfd7f8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar2 = param_5;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = puVar1;
  if (lVar2 != 0) {
    lVar2 = param_5;
    func_0x00010bf529e0(param_5);
    func_0x00010c0df840(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfd818,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  func_0x00010be38580(param_1,param_2,puVar5,param_6,param_7);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105778bf8; end: 105778c27; -[SCAdWebViewPrefetchHintsDataSource _getPreconnectUrls:startIndex:preconnectCount:enablePreconnectForPrefetchOptIn:isPrefetchOptIn:] */

void FUN_105778bf8(void)

{
  int in_w5;
  uint in_w6;
  
  if (((in_w6 & 1) != 0) || (in_w5 == 0)) {
    func_0x00010be236a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105778c28; end: 105778cb7; -[SCAdWebViewPrefetchHintsDataSource _getTopOriginUrlsSubarray:startIndex:urlCount:] */

void FUN_105778c28(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (0 < (long)param_5) {
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf529e0();
    puVar1 = param_4;
    if (puVar2 <= param_4) {
      puVar1 = puVar2;
    }
    puVar2 = param_3;
    func_0x00010bf529e0();
    if ((ulong)((long)puVar2 - (long)param_4) <= param_5) {
      param_5 = (long)puVar2 - (long)param_4;
    }
    puVar2 = param_3;
    func_0x00010c25e980(param_3,param_2,puVar1,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105778cb8; end: 10577914b; -[SCAdWebViewPrefetchHintsDataSource _preparePrefetchHints:prefetchHintsProto:prefetchMode:adType:completion:] */

void FUN_105778cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar9);
  puVar1 = PTR_PTR_1126bde68;
  func_0x00010c109940();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = param_4;
  func_0x00010bf16280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = param_4;
  func_0x00010c13b560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df760(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar1);
  func_0x00010be38560(param_1);
  if (param_5 - 1U < 2) {
    puVar1 = param_4;
    func_0x00010c13b560();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x000100504554();
    _objc_release(puVar1);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  puVar1 = param_4;
  func_0x00010bf16280();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b9450;
    func_0x00010bf8ecc0(PTR_PTR_1126b9450);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar5 = param_1;
  func_0x00010be40bc0();
  if (((int)lVar5 != 0) && (puVar4 = param_4, func_0x00010c2682a0(), puVar4 != (undefined *)0x0)) {
    puVar4 = param_4;
    func_0x00010c268280(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x000100504554();
    _objc_release(puVar4);
    func_0x00010befa160(puVar1);
    _objc_release(puVar8);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf905e0();
  _objc_release(uVar6);
  if ((int)uVar9 != 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bfbcac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar5;
    func_0x00010c08fa60();
    if ((lVar7 != 0) && (puVar4 = puVar1, func_0x00010bf4b900(), ((ulong)puVar4 & 1) == 0)) {
      func_0x00010befa120(puVar1);
    }
    _objc_release(lVar5);
  }
  puVar8 = *(undefined **)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010bf1f480();
  if ((int)puVar4 != 0) {
    puVar4 = param_4;
    func_0x00010bfda3a0();
    _objc_release(puVar8);
    if ((int)puVar4 == 0) goto LAB_10577904c;
    puVar8 = param_4;
    func_0x00010c0fccc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar8);
LAB_10577904c:
  func_0x00010befa160(puVar1);
  puVar4 = param_4;
  func_0x00010c274340(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bdd6840(param_1);
  _objc_release(puVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  (**(code **)(param_7 + 0x10))(param_7,uVar9);
  _objc_release(param_7);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10577914c; end: 10577915b;  */

void FUN_10577914c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_resourceURL_11262c748);
  return;
}



/* Entry: 10577915c; end: 1057791ef; -[SCAdWebViewPrefetchHintsDataSource _isGTMPrefetchEnabled:] */

undefined8 FUN_10577915c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f480();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else if (param_3 == 5) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf90600();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1057791f0; end: 1057792d3; -[SCAdWebViewPrefetchHintsDataSource _incrementMetric:prefetchMode:] */

void FUN_1057791f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df840(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dcf2b8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2a4380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1057792d4; end: 10577938f; -[SCAdWebViewPrefetchHintsDataSource _incrementMetric:prefetchMode:usesWebviewMetadata:] */

void FUN_1057792d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df6e0(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dfd898,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be38560(param_1,param_2,uVar3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105779390; end: 105779407; -[SCAdWebViewPrefetchHintsDataSource .cxx_destruct] */

void FUN_105779390(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105779408; end: 10577957b; -[SCAdWebViewPrefetchHintsLoadWorker initWithPrefetchHintsId:prefetchHints:delegate:browserViewProvider:webBrowsingConfigProvider:queuePerformer:grapheneRegistry:] */

undefined1 *
FUN_105779408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ea1e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10577957c; end: 10577962f; -[SCAdWebViewPrefetchHintsLoadWorker startLoadPrefetchHints] */

void FUN_10577957c(undefined8 param_1,long param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010028941c();
  *(undefined8 *)(param_2 + 0x48) = param_1;
  _objc_initWeak(auStack_28,param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105779630;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}


