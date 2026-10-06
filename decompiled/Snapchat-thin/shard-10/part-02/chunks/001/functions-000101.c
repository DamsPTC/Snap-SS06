/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b9dc04; end: 107b9dc73; -[SCWebBrowserLayerViewController urlInterceptorConfigUpdates] */

void FUN_107b9dc04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b9dc74; end: 107b9de73; -[SCWebBrowserLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9dc74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b540,0);
  _objc_storeStrong(param_1 + _DAT_11276b56c,0);
  _objc_storeStrong(param_1 + _DAT_11276b59c,0);
  _objc_storeStrong(param_1 + _DAT_11276b568,0);
  _objc_storeStrong(param_1 + _DAT_11276b550,0);
  _objc_storeStrong(param_1 + _DAT_11276b53c,0);
  _objc_storeStrong(param_1 + _DAT_11276b5c8,0);
  _objc_storeStrong(param_1 + _DAT_11276b58c,0);
  _objc_storeStrong(param_1 + _DAT_11276b5b4,0);
  _objc_storeStrong(param_1 + _DAT_11276b5ac,0);
  _objc_storeStrong(param_1 + _DAT_11276b5a8,0);
  _objc_storeStrong(param_1 + _DAT_11276b598,0);
  _objc_storeStrong(param_1 + _DAT_11276b588,0);
  _objc_storeStrong(param_1 + _DAT_11276b57c,0);
  _objc_storeStrong(param_1 + _DAT_11276b5a4,0);
  _objc_storeStrong(param_1 + _DAT_11276b5a0,0);
  _objc_storeStrong(param_1 + _DAT_11276b584,0);
  _objc_storeStrong(param_1 + _DAT_11276b560,0);
  _objc_storeStrong(param_1 + _DAT_11276b55c,0);
  _objc_storeStrong(param_1 + _DAT_11276b558,0);
  _objc_storeStrong(param_1 + _DAT_11276b554,0);
  _objc_storeStrong(param_1 + _DAT_11276b5d8,0);
  _objc_storeStrong(param_1 + _DAT_11276b578,0);
  _objc_storeStrong(param_1 + _DAT_11276b564,0);
  _objc_storeStrong(param_1 + _DAT_11276b54c,0);
  _objc_storeStrong(param_1 + _DAT_11276b548,0);
  _objc_storeStrong(param_1 + _DAT_11276b544,0);
  _objc_storeStrong(param_1 + _DAT_11276b538,0);
  _objc_storeStrong(param_1 + _DAT_11276b570,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b5c4,0);
  return;
}



/* Entry: 107b9de74; end: 107b9e043; -[SCWebBrowserLayerViewControllerFactoryPlugin initWithWebBrowsingMultiScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:adConfigProvider:userAdIdProvider:trackSeqNumProvider:circumstanceEngine:browserPrivacyConsentInfoManager:webViewRetainer:] */

undefined1 *
FUN_107b9de74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fa148;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
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
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
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
  return (undefined1 *)puVar1;
}



/* Entry: 107b9e044; end: 107b9e0b3; -[SCWebBrowserLayerViewControllerFactoryPlugin supportedLayers] */

void FUN_107b9e044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_20;
  long lStack_18;
  
  ppuVar3 = &puStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ca8b0;
  _objc_opt_class();
  uVar4 = 1;
  puStack_20 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(uVar4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    puVar1 = PTR_PTR_1126ca8b0;
    _objc_retain(ppuVar3);
    _objc_opt_class(puVar1);
    puVar2 = (undefined1 *)ppuVar3;
    func_0x00010c077980(ppuVar3,param_2,puVar1);
    _objc_release(ppuVar3);
    if ((int)puVar2 != 0) {
      _objc_alloc(PTR_PTR_1126d6cf0);
      func_0x00010c001b20();
    }
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b9e0b4; end: 107b9e1c7; -[SCWebBrowserLayerViewControllerFactoryPlugin layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107b9e0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126ca8b0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar1 = param_3;
  func_0x00010c077980(param_3,param_2,puVar2);
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d6cf0;
    _objc_alloc(PTR_PTR_1126d6cf0);
    func_0x00010c001b20();
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b9e1c8; end: 107b9e24b; -[SCWebBrowserLayerViewControllerFactoryPlugin .cxx_destruct] */

void FUN_107b9e1c8(long param_1)

{
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



/* Entry: 107b9e24c; end: 107b9e41b; +[SCWebBrowserOperaConfigurationHelper updateConfig:adConfigProvider:userAdIdProvider:circumstanceEngine:browserPrivacyConsentInfoManager:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:] */

void FUN_107b9e24c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf61820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca0e8;
  _objc_alloc(PTR_PTR_1126ca0e8);
  func_0x00010c062ca0();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = puVar3;
  func_0x00010bf09f60(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c2aba40(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b9e41c; end: 107b9e42b; +[SCWebBrowserOperaConfigurationHelper browserPagePropertiesWithSafeBrowsingSkipFirstURL:initialRequestHeaders:webviewInfo:source:] */

void FUN_107b9e41c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c7cd0,PTR_s_browserPagePropertiesWithSafeBro_1125a5f88);
  return;
}



/* Entry: 107b9e42c; end: 107b9e757; +[SCWebBrowserOperaConfigurationHelper browserPagePropertiesWithSafeBrowsingSkipFirstURL:initialRequestHeaders:webviewInfo:source:webBrowserConfigBlock:] */

void FUN_107b9e42c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined *in_x6;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x6);
  puVar1 = PTR_PTR_1126bddf0;
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  func_0x00010bfe6000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2afe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2a8b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0dfec0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2b5820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar4;
  if (in_x6 != (undefined *)0x0) {
    puVar1 = in_x6;
    (**(code **)(in_x6 + 0x10))(in_x6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000108b8fe50();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar2);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_x6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107b9e758; end: 107b9e75b; -[SCWebExternalBrowserViewController currentSharableUrl] */

void FUN_107b9e758(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_desiredURL_1125b9478);
  return;
}



/* Entry: 107b9e75c; end: 107b9e8c3; -[SCWebExternalBrowserViewController initWithConfig:grapheneRegistry:urlHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b9e75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126fa150;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11276b618;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d6cf8;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bef2500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247520();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf21740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a580();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b61c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b61c) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11276b620;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b9e8c4; end: 107b9e94f; -[SCWebExternalBrowserViewController initWithConfig:grapheneRegistry:] */

undefined8
FUN_107b9e8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000ee0(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 107b9e950; end: 107b9e953; -[SCWebExternalBrowserViewController loadURL:] */

void FUN_107b9e950(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openExternalURL__112578e00);
  return;
}



/* Entry: 107b9e954; end: 107b9e95f; +[SCWebExternalBrowserViewController browserName] */

undefined ** FUN_107b9e954(void)

{
  return &PTR____CFConstantStringClassReference_110eb17d8;
}



/* Entry: 107b9e960; end: 107b9e967; +[SCWebExternalBrowserViewController browserType] */

undefined8 FUN_107b9e960(void)

{
  return 4;
}



/* Entry: 107b9e968; end: 107b9e96f; +[SCWebExternalBrowserViewController isJavaScriptMetricsSupported] */

undefined8 FUN_107b9e968(void)

{
  return 0;
}



/* Entry: 107b9e970; end: 107b9e977; +[SCWebExternalBrowserViewController isPreloadingSupported] */

undefined8 FUN_107b9e970(void)

{
  return 0;
}



/* Entry: 107b9e978; end: 107b9e97b; -[SCWebExternalBrowserViewController reset:] */

void FUN_107b9e978(void)

{
  return;
}



/* Entry: 107b9e97c; end: 107b9e97f; -[SCWebExternalBrowserViewController setIsOffScreen:] */

void FUN_107b9e97c(void)

{
  return;
}



/* Entry: 107b9e980; end: 107b9e983; -[SCWebExternalBrowserViewController dismiss] */

void FUN_107b9e980(void)

{
  return;
}



/* Entry: 107b9e984; end: 107b9ea93; -[SCWebExternalBrowserViewController _openExternalURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9e984(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276b620;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010bf2cf00();
  if (iVar1 != 0) {
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
      func_0x00010bf9a9e0();
      _objc_release(uVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain(param_3);
    func_0x00010c14d740(uVar4);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b9ea94; end: 107b9ea97;  */

void FUN_107b9ea94(void)

{
  return;
}



/* Entry: 107b9ea98; end: 107b9eaa7; -[SCWebExternalBrowserViewController config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ea98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b618);
}



/* Entry: 107b9eaa8; end: 107b9eac7; -[SCWebExternalBrowserViewController topViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9eaa8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b624);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b9eac8; end: 107b9eadb; -[SCWebExternalBrowserViewController setTopViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9eac8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b624,param_3);
  return;
}



/* Entry: 107b9eadc; end: 107b9eaeb; -[SCWebExternalBrowserViewController desiredURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9eadc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b628);
}



/* Entry: 107b9eaec; end: 107b9eb0b; -[SCWebExternalBrowserViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9eaec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b62c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b9eb0c; end: 107b9eb1f; -[SCWebExternalBrowserViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9eb0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b62c,param_3);
  return;
}



/* Entry: 107b9eb20; end: 107b9eb3f; -[SCWebExternalBrowserViewController eventDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9eb20(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b9eb40; end: 107b9eb53; -[SCWebExternalBrowserViewController setEventDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9eb40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b630,param_3);
  return;
}



/* Entry: 107b9eb54; end: 107b9eb63; -[SCWebExternalBrowserViewController initialLandingPageEstimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9eb54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b600);
}



/* Entry: 107b9eb64; end: 107b9eb73; -[SCWebExternalBrowserViewController initialLoadStatusCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9eb64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b634);
}



/* Entry: 107b9eb74; end: 107b9eb83; -[SCWebExternalBrowserViewController javaScriptMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9eb74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b638);
}



/* Entry: 107b9eb84; end: 107b9eb93; -[SCWebExternalBrowserViewController lastLoadWasDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b9eb84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b604);
}



/* Entry: 107b9eb94; end: 107b9eba3; -[SCWebExternalBrowserViewController estimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9eb94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b608);
}



/* Entry: 107b9eba4; end: 107b9ebb3; -[SCWebExternalBrowserViewController hasSubsequentNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b9eba4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b60c);
}



/* Entry: 107b9ebb4; end: 107b9ebc3; -[SCWebExternalBrowserViewController isScrolledToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b9ebb4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b610);
}



/* Entry: 107b9ebc4; end: 107b9ebd3; -[SCWebExternalBrowserViewController landingPageServerRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ebc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b63c);
}



/* Entry: 107b9ebd4; end: 107b9ec13; -[SCWebExternalBrowserViewController setLandingPageServerRedirectCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9ebd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b63c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b9ec14; end: 107b9ec23; -[SCWebExternalBrowserViewController landingPageServerRedirectResolvedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ec14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b640);
}



/* Entry: 107b9ec24; end: 107b9ec33; -[SCWebExternalBrowserViewController landingPageServerRedirectResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ec24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b644);
}



/* Entry: 107b9ec34; end: 107b9ec43; -[SCWebExternalBrowserViewController adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ec34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b648);
}



/* Entry: 107b9ec44; end: 107b9ec53; -[SCWebExternalBrowserViewController adServeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ec44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b64c);
}



/* Entry: 107b9ec54; end: 107b9ec63; -[SCWebExternalBrowserViewController enableExtendedLifecycleV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b9ec54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b614);
}



/* Entry: 107b9ec64; end: 107b9ec73; -[SCWebExternalBrowserViewController didFullyAppearTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ec64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b650);
}



/* Entry: 107b9ec74; end: 107b9ecb3; -[SCWebExternalBrowserViewController setDidFullyAppearTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9ec74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b650;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b9ecb4; end: 107b9ecc3; -[SCWebExternalBrowserViewController currentUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ecb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b654);
}



/* Entry: 107b9ecc4; end: 107b9ecd3; -[SCWebExternalBrowserViewController finalResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9ecc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b658);
}



/* Entry: 107b9ecd4; end: 107b9edf7; -[SCWebExternalBrowserViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9ecd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b658,0);
  _objc_storeStrong(param_1 + _DAT_11276b654,0);
  _objc_storeStrong(param_1 + _DAT_11276b650,0);
  _objc_storeStrong(param_1 + _DAT_11276b64c,0);
  _objc_storeStrong(param_1 + _DAT_11276b648,0);
  _objc_storeStrong(param_1 + _DAT_11276b644,0);
  _objc_storeStrong(param_1 + _DAT_11276b640,0);
  _objc_storeStrong(param_1 + _DAT_11276b63c,0);
  _objc_storeStrong(param_1 + _DAT_11276b638,0);
  _objc_storeStrong(param_1 + _DAT_11276b634,0);
  _objc_destroyWeak(param_1 + _DAT_11276b630);
  _objc_destroyWeak(param_1 + _DAT_11276b62c);
  _objc_storeStrong(param_1 + _DAT_11276b628,0);
  _objc_destroyWeak(param_1 + _DAT_11276b624);
  _objc_storeStrong(param_1 + _DAT_11276b618,0);
  _objc_storeStrong(param_1 + _DAT_11276b620,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b61c,0);
  return;
}



/* Entry: 107b9edf8; end: 107b9edfb; -[SCWebBrowserSafariViewController currentSharableUrl] */

void FUN_107b9edf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_desiredURL_1125b9478);
  return;
}



/* Entry: 107b9edfc; end: 107b9f057; -[SCWebBrowserSafariViewController initWithConfig:cofConfigProvider:grapheneRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b9edfc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = &uStack_80;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126fa158;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010bf9c2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010bf9c2c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c112a00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b674);
      *(undefined **)((long)puVar1 + (long)_DAT_11276b674) = puVar4;
      _objc_release(uVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    lVar7 = (long)_DAT_11276b678;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11276b67c;
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126d6cf8;
    _objc_alloc();
    puVar2 = param_3;
    func_0x00010bef2500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247520();
    puVar5 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf21740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a580();
    lVar7 = (long)_DAT_11276b680;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    func_0x00010c1c8b80(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    puVar2 = PTR_PTR_1126d6d08;
    func_0x00010c264380();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfec2a0(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d6d10;
  _objc_retain(puVar4);
  func_0x00010bdc1820();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126d6d08;
    func_0x00010c264420(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bfec2a0(*(undefined8 *)(param_3 + _DAT_11276b680));
  }
  else {
    func_0x00010bf779c0(*(undefined8 *)(param_3 + _DAT_11276b680));
    func_0x00010be4eca0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 107b9f058; end: 107b9f147; -[SCWebBrowserSafariViewController loadURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f058(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  puVar2 = PTR_PTR_1126d6d10;
  _objc_retain(param_3);
  func_0x00010bdc1820(puVar2,param_2,param_3);
  if (((ulong)puVar2 & 1) == 0) {
    ppuVar3 = (undefined **)PTR_PTR_1126d6d08;
    func_0x00010c264420(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    param_3 = ppuVar3;
    func_0x00010c2ac460(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110eb17f8,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + _DAT_11276b680),param_2,param_3);
  }
  else {
    func_0x00010bf779c0(*(undefined8 *)(param_1 + _DAT_11276b680));
    func_0x00010be4eca0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b9f148; end: 107b9f4b3; -[SCWebBrowserSafariViewController _loadURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_107b9f148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined **param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar5 = *(undefined8 *)(param_5 + _DAT_11276b680);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c2643c0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar5);
  _objc_release(puVar1);
  lVar6 = param_5;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bf8f440();
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar1 = PTR_PTR_1126d6d18;
  if ((int)lVar2 != 0) {
    lVar6 = param_5;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf11520();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + _DAT_11276b684);
    *(undefined **)(param_5 + _DAT_11276b684) = puVar1;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  func_0x00010be93920(param_5);
  puVar1 = PTR__OBJC_CLASS___SFSafariViewControllerConfiguration_1126d6d20;
  _objc_opt_new(PTR__OBJC_CLASS___SFSafariViewControllerConfiguration_1126d6d20);
  func_0x00010c16f1a0();
  puVar3 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
  _objc_alloc();
  func_0x00010c057980();
  lVar7 = (long)_DAT_11276b688;
  uVar5 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar3;
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar7));
  func_0x00010c18f480(*(undefined8 *)(param_5 + lVar7));
  _objc_storeWeak(param_5 + _DAT_11276b68c,*(undefined8 *)(param_5 + lVar7));
  lVar6 = param_5;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    lVar6 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar5 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar5);
    _objc_release(lVar6);
    lVar6 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar6);
    _objc_release(uVar5);
    _objc_release(lVar6);
    func_0x00010bef7700(param_5);
    func_0x00010bf77e80(*(undefined8 *)(param_5 + lVar7));
  }
  else {
    func_0x00010c1c8c00(*(undefined8 *)(param_5 + lVar7));
    func_0x00010c1c8b80(*(undefined8 *)(param_5 + lVar7));
    func_0x00010c10eda0(param_5);
  }
  lVar6 = (long)_DAT_11276b674;
  func_0x00010c069d00(*(undefined8 *)(param_5 + lVar6));
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  *(undefined8 *)(param_5 + lVar6) = 0;
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_7;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110eb1838;
}



/* Entry: 107b9f4b4; end: 107b9f4bf; +[SCWebBrowserSafariViewController browserName] */

undefined ** FUN_107b9f4b4(void)

{
  return &PTR____CFConstantStringClassReference_110eb1838;
}



/* Entry: 107b9f4c0; end: 107b9f4c7; +[SCWebBrowserSafariViewController browserType] */

undefined8 FUN_107b9f4c0(void)

{
  return 3;
}



/* Entry: 107b9f4c8; end: 107b9f4cf; +[SCWebBrowserSafariViewController isJavaScriptMetricsSupported] */

undefined8 FUN_107b9f4c8(void)

{
  return 0;
}



/* Entry: 107b9f4d0; end: 107b9f4d7; +[SCWebBrowserSafariViewController isPreloadingSupported] */

undefined8 FUN_107b9f4d0(void)

{
  return 0;
}



/* Entry: 107b9f4d8; end: 107b9f517; -[SCWebBrowserSafariViewController reset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f4d8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be93920();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b684);
  *(undefined8 *)(param_1 + _DAT_11276b684) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b680),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 107b9f518; end: 107b9f57f; -[SCWebBrowserSafariViewController setIsOffScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f518(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_11276b690) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11276b690) = 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b680);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c2643e0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9f580; end: 107b9f583; -[SCWebBrowserSafariViewController dismiss] */

void FUN_107b9f580(void)

{
  return;
}



/* Entry: 107b9f584; end: 107b9f5ff; -[SCWebBrowserSafariViewController safariViewControllerDidFinish:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f584(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b694;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a3120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107b9f600; end: 107b9f727; -[SCWebBrowserSafariViewController safariViewController:didCompleteInitialLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f600(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11276b680;
  func_0x00010bf768c0(*(undefined8 *)(param_1 + lVar7),param_2,param_4);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c2643a0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + lVar7));
  lVar7 = (long)_DAT_11276b694;
  uVar5 = param_1 + lVar7;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  if ((uVar6 & 1) != 0) {
    param_1 = param_1 + lVar7;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a2ee0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107b9f728; end: 107b9f7db; -[SCWebBrowserSafariViewController safariViewControllerWillOpenInBrowser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f728(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b680);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c264400(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar4);
  _objc_release(puVar1);
  lVar5 = (long)_DAT_11276b694;
  uVar2 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a3320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107b9f7dc; end: 107b9f857; -[SCWebBrowserSafariViewController _resetSafariViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f7dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b688;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c2a6740(*(long *)(param_1 + lVar2),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar1);
    func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b9f858; end: 107b9f867; -[SCWebBrowserSafariViewController config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f858(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b678);
}



/* Entry: 107b9f868; end: 107b9f887; -[SCWebBrowserSafariViewController topViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f868(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b68c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b9f888; end: 107b9f89b; -[SCWebBrowserSafariViewController setTopViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f888(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b68c,param_3);
  return;
}



/* Entry: 107b9f89c; end: 107b9f8ab; -[SCWebBrowserSafariViewController desiredURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f89c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b684);
}



/* Entry: 107b9f8ac; end: 107b9f8bb; -[SCWebBrowserSafariViewController initialLandingPageEstimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f8ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b65c);
}



/* Entry: 107b9f8bc; end: 107b9f8cb; -[SCWebBrowserSafariViewController initialLoadStatusCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f8bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b698);
}



/* Entry: 107b9f8cc; end: 107b9f8eb; -[SCWebBrowserSafariViewController eventDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f8cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b69c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b9f8ec; end: 107b9f8ff; -[SCWebBrowserSafariViewController setEventDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b69c,param_3);
  return;
}



/* Entry: 107b9f900; end: 107b9f90f; -[SCWebBrowserSafariViewController isScrolledToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b9f900(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b660);
}



/* Entry: 107b9f910; end: 107b9f91f; -[SCWebBrowserSafariViewController javaScriptMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f910(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6a0);
}



/* Entry: 107b9f920; end: 107b9f92f; -[SCWebBrowserSafariViewController lastLoadWasDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b9f920(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b664);
}



/* Entry: 107b9f930; end: 107b9f93f; -[SCWebBrowserSafariViewController estimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f930(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b668);
}



/* Entry: 107b9f940; end: 107b9f94f; -[SCWebBrowserSafariViewController hasSubsequentNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b9f940(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b66c);
}



/* Entry: 107b9f950; end: 107b9f95f; -[SCWebBrowserSafariViewController landingPageServerRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6a4);
}



/* Entry: 107b9f960; end: 107b9f99f; -[SCWebBrowserSafariViewController setLandingPageServerRedirectCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9f960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b6a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b9f9a0; end: 107b9f9af; -[SCWebBrowserSafariViewController landingPageServerRedirectResolvedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f9a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6a8);
}



/* Entry: 107b9f9b0; end: 107b9f9bf; -[SCWebBrowserSafariViewController landingPageServerRedirectResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f9b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6ac);
}



/* Entry: 107b9f9c0; end: 107b9f9cf; -[SCWebBrowserSafariViewController adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f9c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6b0);
}



/* Entry: 107b9f9d0; end: 107b9f9df; -[SCWebBrowserSafariViewController adServeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f9d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6b4);
}



/* Entry: 107b9f9e0; end: 107b9f9ef; -[SCWebBrowserSafariViewController enableExtendedLifecycleV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b9f9e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b670);
}



/* Entry: 107b9f9f0; end: 107b9f9ff; -[SCWebBrowserSafariViewController didFullyAppearTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9f9f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6b8);
}



/* Entry: 107b9fa00; end: 107b9fa3f; -[SCWebBrowserSafariViewController setDidFullyAppearTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9fa00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b6b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b9fa40; end: 107b9fa4f; -[SCWebBrowserSafariViewController currentUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9fa40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6bc);
}



/* Entry: 107b9fa50; end: 107b9fa5f; -[SCWebBrowserSafariViewController finalResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9fa50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b6c0);
}



/* Entry: 107b9fa60; end: 107b9fa7f; -[SCWebBrowserSafariViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9fa60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b694);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b9fa80; end: 107b9fa93; -[SCWebBrowserSafariViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9fa80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b694,param_3);
  return;
}



/* Entry: 107b9fa94; end: 107b9fbd7; -[SCWebBrowserSafariViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9fa94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276b694);
  _objc_storeStrong(param_1 + _DAT_11276b6c0,0);
  _objc_storeStrong(param_1 + _DAT_11276b6bc,0);
  _objc_storeStrong(param_1 + _DAT_11276b6b8,0);
  _objc_storeStrong(param_1 + _DAT_11276b6b4,0);
  _objc_storeStrong(param_1 + _DAT_11276b6b0,0);
  _objc_storeStrong(param_1 + _DAT_11276b6ac,0);
  _objc_storeStrong(param_1 + _DAT_11276b6a8,0);
  _objc_storeStrong(param_1 + _DAT_11276b6a4,0);
  _objc_storeStrong(param_1 + _DAT_11276b6a0,0);
  _objc_destroyWeak(param_1 + _DAT_11276b69c);
  _objc_storeStrong(param_1 + _DAT_11276b698,0);
  _objc_storeStrong(param_1 + _DAT_11276b684,0);
  _objc_destroyWeak(param_1 + _DAT_11276b68c);
  _objc_storeStrong(param_1 + _DAT_11276b678,0);
  _objc_storeStrong(param_1 + _DAT_11276b674,0);
  _objc_storeStrong(param_1 + _DAT_11276b67c,0);
  _objc_storeStrong(param_1 + _DAT_11276b680,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b688,0);
  return;
}



/* Entry: 107b9fbd8; end: 107b9fbdb; -[SCUnauthenticatedWebBrowserViewController currentSharableUrl] */

void FUN_107b9fbd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_desiredURL_1125b9478);
  return;
}



/* Entry: 107b9fbdc; end: 107b9fd53; -[SCUnauthenticatedWebBrowserViewController initWithRuntime:url:delegate:additionalScriptControllers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b9fbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fa160;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276b6dc),param_5);
    lVar5 = (long)_DAT_11276b6e0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d6d28;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be1fba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040c80();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b6e4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b6e4) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c1c8b80(puVar1);
    func_0x00010b8373e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19efc0(0x3ff0000000000000);
    func_0x00010c219b20(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b9fd54; end: 107b9fe6f; -[SCUnauthenticatedWebBrowserViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9fd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fa160;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  lVar3 = (long)_DAT_11276b6e4;
  func_0x00010bef7700(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010bf77e80(*(undefined8 *)(param_5 + lVar3));
  return;
}



/* Entry: 107b9fe70; end: 107b9fedb; -[SCUnauthenticatedWebBrowserViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9fe70(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa160;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  lVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + _DAT_11276b6dc;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74ac0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107b9fedc; end: 107b9feeb; -[SCUnauthenticatedWebBrowserViewController loadURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9fedc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b6e4),PTR_s_loadURL__112604b58);
  return;
}



/* Entry: 107b9feec; end: 107b9fef7; +[SCUnauthenticatedWebBrowserViewController browserName] */

undefined ** FUN_107b9feec(void)

{
  return &PTR____CFConstantStringClassReference_110eb1878;
}



/* Entry: 107b9fef8; end: 107b9feff; +[SCUnauthenticatedWebBrowserViewController browserType] */

undefined8 FUN_107b9fef8(void)

{
  return 1;
}



/* Entry: 107b9ff00; end: 107b9ff07; +[SCUnauthenticatedWebBrowserViewController isJavaScriptMetricsSupported] */

undefined8 FUN_107b9ff00(void)

{
  return 0;
}



/* Entry: 107b9ff08; end: 107b9ff0f; +[SCUnauthenticatedWebBrowserViewController isPreloadingSupported] */

undefined8 FUN_107b9ff08(void)

{
  return 0;
}


