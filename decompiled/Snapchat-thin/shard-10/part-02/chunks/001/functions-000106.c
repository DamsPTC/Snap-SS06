/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bb5204; end: 107bb5213; -[SCWebBrowserV11ViewController setIsFirstTimeOnScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5204(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b850) = param_3;
  return;
}



/* Entry: 107bb5214; end: 107bb5223; -[SCWebBrowserV11ViewController isBrowserDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb5214(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b744);
}



/* Entry: 107bb5224; end: 107bb5233; -[SCWebBrowserV11ViewController setIsBrowserDismissed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5224(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b744) = param_3;
  return;
}



/* Entry: 107bb5234; end: 107bb5243; -[SCWebBrowserV11ViewController isVisibleQueueSuspended] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb5234(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b77c);
}



/* Entry: 107bb5244; end: 107bb5253; -[SCWebBrowserV11ViewController setIsVisibleQueueSuspended:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5244(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b77c) = param_3;
  return;
}



/* Entry: 107bb5254; end: 107bb5263; -[SCWebBrowserV11ViewController onKeyboardHideBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5254(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b8c8);
}



/* Entry: 107bb5264; end: 107bb526f; -[SCWebBrowserV11ViewController setOnKeyboardHideBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5264(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107bb5270; end: 107bb527f; -[SCWebBrowserV11ViewController isNavigationInProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb5270(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b748);
}



/* Entry: 107bb5280; end: 107bb528f; -[SCWebBrowserV11ViewController setIsNavigationInProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5280(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b748) = param_3;
  return;
}



/* Entry: 107bb5290; end: 107bb529f; -[SCWebBrowserV11ViewController committedNavigationCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5290(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b85c);
}



/* Entry: 107bb52a0; end: 107bb52af; -[SCWebBrowserV11ViewController setCommittedNavigationCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb52a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276b85c) = param_3;
  return;
}



/* Entry: 107bb52b0; end: 107bb52bf; -[SCWebBrowserV11ViewController lastLoadWasDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb52b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b74c);
}



/* Entry: 107bb52c0; end: 107bb52cf; -[SCWebBrowserV11ViewController setLastLoadWasDeeplink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb52c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b74c) = param_3;
  return;
}



/* Entry: 107bb52d0; end: 107bb52df; -[SCWebBrowserV11ViewController shouldDismissBrowserOnBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb52d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b838);
}



/* Entry: 107bb52e0; end: 107bb52ef; -[SCWebBrowserV11ViewController setShouldDismissBrowserOnBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb52e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b838) = param_3;
  return;
}



/* Entry: 107bb52f0; end: 107bb52ff; -[SCWebBrowserV11ViewController navigationDecisionHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb52f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b780);
}



/* Entry: 107bb5300; end: 107bb533f; -[SCWebBrowserV11ViewController setNavigationDecisionHandlers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b780;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5340; end: 107bb535f; -[SCWebBrowserV11ViewController connectionErrorActionSheet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5340(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b8cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb5360; end: 107bb5373; -[SCWebBrowserV11ViewController setConnectionErrorActionSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5360(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b8cc,param_3);
  return;
}



/* Entry: 107bb5374; end: 107bb5383; -[SCWebBrowserV11ViewController javaScriptMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5374(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b864);
}



/* Entry: 107bb5384; end: 107bb5393; -[SCWebBrowserV11ViewController setIsScrolledToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5384(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b750) = param_3;
  return;
}



/* Entry: 107bb5394; end: 107bb53a3; -[SCWebBrowserV11ViewController lastReportedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5394(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b860);
}



/* Entry: 107bb53a4; end: 107bb53b3; -[SCWebBrowserV11ViewController setLastReportedProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb53a4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276b860) = param_1;
  return;
}



/* Entry: 107bb53b4; end: 107bb53c3; -[SCWebBrowserV11ViewController cardTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb53b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b784);
}



/* Entry: 107bb53c4; end: 107bb53d3; -[SCWebBrowserV11ViewController requestInterceptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb53c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b770);
}



/* Entry: 107bb53d4; end: 107bb5413; -[SCWebBrowserV11ViewController setRequestInterceptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb53d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b770;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5414; end: 107bb5423; -[SCWebBrowserV11ViewController metricHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5414(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b788);
}



/* Entry: 107bb5424; end: 107bb5463; -[SCWebBrowserV11ViewController setMetricHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b788;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5464; end: 107bb5473; -[SCWebBrowserV11ViewController mediaPlaybackHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5464(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b78c);
}



/* Entry: 107bb5474; end: 107bb54b3; -[SCWebBrowserV11ViewController setMediaPlaybackHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b78c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb54b4; end: 107bb54c3; -[SCWebBrowserV11ViewController grapheneRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb54b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b774);
}



/* Entry: 107bb54c4; end: 107bb5503; -[SCWebBrowserV11ViewController setGrapheneRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb54c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b774;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5504; end: 107bb5513; -[SCWebBrowserV11ViewController webViewPool] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5504(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b794);
}



/* Entry: 107bb5514; end: 107bb5553; -[SCWebBrowserV11ViewController setWebViewPool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b794;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5554; end: 107bb5563; -[SCWebBrowserV11ViewController webViewScriptFileCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5554(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b798);
}



/* Entry: 107bb5564; end: 107bb55a3; -[SCWebBrowserV11ViewController setWebViewScriptFileCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b798;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb55a4; end: 107bb55b3; -[SCWebBrowserV11ViewController shareHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb55a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b79c);
}



/* Entry: 107bb55b4; end: 107bb55f3; -[SCWebBrowserV11ViewController setShareHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb55b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b79c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb55f4; end: 107bb5603; -[SCWebBrowserV11ViewController crashLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb55f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b7a8);
}



/* Entry: 107bb5604; end: 107bb5643; -[SCWebBrowserV11ViewController setCrashLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b7a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5644; end: 107bb5653; -[SCWebBrowserV11ViewController thirdPartyLoginHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5644(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b844);
}



/* Entry: 107bb5654; end: 107bb5693; -[SCWebBrowserV11ViewController setThirdPartyLoginHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b844;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5694; end: 107bb56a3; -[SCWebBrowserV11ViewController thirdPartyLoginPlugInExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5694(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b7ac);
}



/* Entry: 107bb56a4; end: 107bb56e3; -[SCWebBrowserV11ViewController setThirdPartyLoginPlugInExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb56a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b7ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb56e4; end: 107bb56f3; -[SCWebBrowserV11ViewController thirdPartyLoginSaberPluginScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb56e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b7b0);
}



/* Entry: 107bb56f4; end: 107bb5733; -[SCWebBrowserV11ViewController setThirdPartyLoginSaberPluginScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb56f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b7b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5734; end: 107bb5743; -[SCWebBrowserV11ViewController tapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5734(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b878);
}



/* Entry: 107bb5744; end: 107bb5783; -[SCWebBrowserV11ViewController setTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b878;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5784; end: 107bb5793; -[SCWebBrowserV11ViewController panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5784(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b87c);
}



/* Entry: 107bb5794; end: 107bb57d3; -[SCWebBrowserV11ViewController setPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b87c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb57d4; end: 107bb57e3; -[SCWebBrowserV11ViewController panGestureStartTimestampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb57d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b8a0);
}



/* Entry: 107bb57e4; end: 107bb57f3; -[SCWebBrowserV11ViewController setPanGestureStartTimestampMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb57e4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276b8a0) = param_1;
  return;
}



/* Entry: 107bb57f4; end: 107bb5807; -[SCWebBrowserV11ViewController panGestureStartLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107bb57f4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11276b8a4);
}



/* Entry: 107bb5808; end: 107bb581b; -[SCWebBrowserV11ViewController setPanGestureStartLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5808(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276b8a4;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 107bb581c; end: 107bb582b; -[SCWebBrowserV11ViewController didTapGestureTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb581c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b86c);
}



/* Entry: 107bb582c; end: 107bb583b; -[SCWebBrowserV11ViewController setDidTapGestureTriggered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb582c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b86c) = param_3;
  return;
}



/* Entry: 107bb583c; end: 107bb584b; -[SCWebBrowserV11ViewController didBrowseFeatureTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb583c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b870);
}



/* Entry: 107bb584c; end: 107bb585b; -[SCWebBrowserV11ViewController setDidBrowseFeatureTriggered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb584c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b870) = param_3;
  return;
}



/* Entry: 107bb585c; end: 107bb586b; -[SCWebBrowserV11ViewController exbResolvedFinalHtmlUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb585c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b8d0);
}



/* Entry: 107bb586c; end: 107bb58ab; -[SCWebBrowserV11ViewController setExbResolvedFinalHtmlUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb586c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b8d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb58ac; end: 107bb58bb; -[SCWebBrowserV11ViewController subresouceNetworkErrors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb58ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b7a0);
}



/* Entry: 107bb58bc; end: 107bb58fb; -[SCWebBrowserV11ViewController setSubresouceNetworkErrors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb58bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b7a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb58fc; end: 107bb590b; -[SCWebBrowserV11ViewController jsErrorCounter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107bb58fc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11276b858);
}



/* Entry: 107bb590c; end: 107bb591b; -[SCWebBrowserV11ViewController setJsErrorCounter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb590c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_11276b858) = param_3;
  return;
}



/* Entry: 107bb591c; end: 107bb592b; -[SCWebBrowserV11ViewController initialPageLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb591c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b88c);
}



/* Entry: 107bb592c; end: 107bb593b; -[SCWebBrowserV11ViewController setInitialPageLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb592c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b88c) = param_3;
  return;
}



/* Entry: 107bb593c; end: 107bb594b; -[SCWebBrowserV11ViewController prefetchHintsNavigationActionSkipped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb593c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b754);
}



/* Entry: 107bb594c; end: 107bb595b; -[SCWebBrowserV11ViewController setPrefetchHintsNavigationActionSkipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb594c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b754) = param_3;
  return;
}



/* Entry: 107bb595c; end: 107bb5e97; -[SCWebBrowserV11ViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb595c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b7a0,0);
  _objc_storeStrong(param_1 + _DAT_11276b8d0,0);
  _objc_storeStrong(param_1 + _DAT_11276b87c,0);
  _objc_storeStrong(param_1 + _DAT_11276b878,0);
  _objc_storeStrong(param_1 + _DAT_11276b7b0,0);
  _objc_storeStrong(param_1 + _DAT_11276b7ac,0);
  _objc_storeStrong(param_1 + _DAT_11276b844,0);
  _objc_storeStrong(param_1 + _DAT_11276b7a8,0);
  _objc_storeStrong(param_1 + _DAT_11276b79c,0);
  _objc_storeStrong(param_1 + _DAT_11276b798,0);
  _objc_storeStrong(param_1 + _DAT_11276b794,0);
  _objc_storeStrong(param_1 + _DAT_11276b774,0);
  _objc_storeStrong(param_1 + _DAT_11276b78c,0);
  _objc_storeStrong(param_1 + _DAT_11276b788,0);
  _objc_storeStrong(param_1 + _DAT_11276b770,0);
  _objc_storeStrong(param_1 + _DAT_11276b784,0);
  _objc_storeStrong(param_1 + _DAT_11276b864,0);
  _objc_destroyWeak(param_1 + _DAT_11276b8cc);
  _objc_storeStrong(param_1 + _DAT_11276b780,0);
  _objc_storeStrong(param_1 + _DAT_11276b8c8,0);
  _objc_storeStrong(param_1 + _DAT_11276b778,0);
  _objc_storeStrong(param_1 + _DAT_11276b848,0);
  _objc_storeStrong(param_1 + _DAT_11276b868,0);
  _objc_storeStrong(param_1 + _DAT_11276b8c4,0);
  _objc_storeStrong(param_1 + _DAT_11276b8c0,0);
  _objc_storeStrong(param_1 + _DAT_11276b890,0);
  _objc_destroyWeak(param_1 + _DAT_11276b7a4);
  _objc_storeStrong(param_1 + _DAT_11276b888,0);
  _objc_storeStrong(param_1 + _DAT_11276b76c,0);
  _objc_storeStrong(param_1 + _DAT_11276b764,0);
  _objc_storeStrong(param_1 + _DAT_11276b768,0);
  _objc_destroyWeak(param_1 + _DAT_11276b8bc);
  _objc_destroyWeak(param_1 + _DAT_11276b8b8);
  _objc_destroyWeak(param_1 + _DAT_11276b8b4);
  _objc_destroyWeak(param_1 + _DAT_11276b834);
  _objc_storeStrong(param_1 + _DAT_11276b8b0,0);
  _objc_storeStrong(param_1 + _DAT_11276b8ac,0);
  _objc_storeStrong(param_1 + _DAT_11276b8d4,0);
  _objc_storeStrong(param_1 + _DAT_11276b8d8,0);
  _objc_storeStrong(param_1 + _DAT_11276b8a8,0);
  _objc_storeStrong(param_1 + _DAT_11276b894,0);
  _objc_destroyWeak(param_1 + _DAT_11276b75c);
  _objc_destroyWeak(param_1 + _DAT_11276b758);
  _objc_destroyWeak(param_1 + _DAT_11276b790);
  _objc_storeStrong(param_1 + _DAT_11276b760,0);
  _objc_storeStrong(param_1 + _DAT_11276b82c,0);
  _objc_storeStrong(param_1 + _DAT_11276b880,0);
  _objc_storeStrong(param_1 + _DAT_11276b7dc,0);
  _objc_storeStrong(param_1 + _DAT_11276b89c,0);
  _objc_storeStrong(param_1 + _DAT_11276b84c,0);
  _objc_storeStrong(param_1 + _DAT_11276b898,0);
  _objc_storeStrong(param_1 + _DAT_11276b7e4,0);
  _objc_storeStrong(param_1 + _DAT_11276b830,0);
  _objc_storeStrong(param_1 + _DAT_11276b7e0,0);
  _objc_storeStrong(param_1 + _DAT_11276b7d8,0);
  _objc_storeStrong(param_1 + _DAT_11276b7d4,0);
  _objc_storeStrong(param_1 + _DAT_11276b7d0,0);
  _objc_storeStrong(param_1 + _DAT_11276b7cc,0);
  _objc_storeStrong(param_1 + _DAT_11276b814,0);
  _objc_storeStrong(param_1 + _DAT_11276b7c8,0);
  _objc_storeStrong(param_1 + _DAT_11276b7c4,0);
  _objc_storeStrong(param_1 + _DAT_11276b824,0);
  _objc_storeStrong(param_1 + _DAT_11276b7c0,0);
  _objc_storeStrong(param_1 + _DAT_11276b7bc,0);
  _objc_storeStrong(param_1 + _DAT_11276b7f4,0);
  _objc_storeStrong(param_1 + _DAT_11276b7f0,0);
  _objc_storeStrong(param_1 + _DAT_11276b7ec,0);
  _objc_storeStrong(param_1 + _DAT_11276b810,0);
  _objc_storeStrong(param_1 + _DAT_11276b80c,0);
  _objc_storeStrong(param_1 + _DAT_11276b808,0);
  _objc_storeStrong(param_1 + _DAT_11276b804,0);
  _objc_storeStrong(param_1 + _DAT_11276b800,0);
  _objc_storeStrong(param_1 + _DAT_11276b7fc,0);
  _objc_storeStrong(param_1 + _DAT_11276b7f8,0);
  _objc_storeStrong(param_1 + _DAT_11276b818,0);
  _objc_storeStrong(param_1 + _DAT_11276b7e8,0);
  _objc_storeStrong(param_1 + _DAT_11276b7b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b7b4,0);
  return;
}



/* Entry: 107bb5e98; end: 107bb5ecb;  */

void FUN_107bb5e98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ddd4f8);
  return;
}



/* Entry: 107bb5ecc; end: 107bb6467; +[SCWebBrowserFactory browserWithConfig:delegate:safeBrowsingChecker:urlInterceptor:additionalScriptControllers:grapheneRegistry:cofStore:webViewPool:webViewScriptFileCache:shareHandler:crashLogger:thirdPartyLoginPlugInExposer:thirdPartyLoginSaberPluginScopeServices:runtime:uiContainer:alertPresenterFactory:actionSheetPresenterFactory:notificationPresenterFactory:browserPrivacyConsentInfoManager:notificationPool:bitmojiAvatarProvider:adConfigProvider:cofConfigProvider:deckHierarchyFactory:webBrowsingSecureGuard:valdiRuntimeProvider:adTrackSeqNumProvider:userPreferences:webBrowsingBrowserLogger:] */

void FUN_107bb5ecc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,long param_31)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_e8;
  
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
  lVar1 = param_31;
  _objc_retain();
  if (param_8 == 0) {
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_8);
    lVar1 = param_8;
  }
  lVar2 = param_3;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0ea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  puVar4 = (undefined *)0x0;
  if (lVar3 != 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b8260;
    _objc_opt_class(PTR_PTR_1126b8260);
    lVar3 = lVar2;
    func_0x00010beecc20(lVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bfc1d60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d6e68;
    _objc_alloc();
    lVar5 = lVar2;
    func_0x00010bfe4c00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bfe4d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0198a0(puVar4,param_2,lVar5,lVar6,lVar1,param_24);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  lVar2 = param_3;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06b9e0();
  _objc_release(lVar2);
  uStack_e8 = param_5;
  if ((int)lVar3 != 0) {
    _objc_release(param_5);
    uStack_e8 = 0;
  }
  lVar2 = param_3;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf902a0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    func_0x00010c235580(param_1,param_2,param_3,param_25,lVar1);
    if ((int)param_1 == 0) {
      puVar7 = PTR_PTR_1126d6e78;
      _objc_alloc();
      puVar8 = puVar7;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000e40(puVar7,param_2,param_3,param_4,0,uStack_e8,param_6,param_7,puVar4,lVar1,
                          param_10,param_11,param_12,param_13,param_14,param_15,param_17,puVar8,
                          param_16,param_18,param_19,param_20,param_9,param_21,param_22,param_23,
                          param_25,param_26,param_27,param_28,param_29,param_30,param_31);
      _objc_release(puVar8);
      goto LAB_107bb634c;
    }
    puVar7 = PTR_PTR_1126d6e70;
    _objc_alloc(PTR_PTR_1126d6e70);
    func_0x00010c000e20();
  }
  else {
    puVar7 = PTR_PTR_1126bde00;
    _objc_alloc(PTR_PTR_1126bde00);
    func_0x00010c000ec0();
  }
  func_0x00010c18b5e0();
LAB_107bb634c:
  _objc_release(puVar4);
  _objc_release(lVar1);
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
  _objc_release(uStack_e8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107bb6468; end: 107bb6653; +[SCWebBrowserFactory shouldUseSafariBrowser:cofConfigProvider:grapheneRegistry:] */

undefined *
FUN_107bb6468(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuVar1 = param_3;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf01480();
  _objc_release(ppuVar1);
  if ((int)ppuVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf9c2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d6d10;
    ppuVar2 = param_3;
    func_0x00010bf9c2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1820(puVar9,param_2,ppuVar2);
    _objc_release(ppuVar2);
    if (((ulong)puVar9 & 1) == 0) {
      puVar3 = PTR_PTR_1126d6d08;
      func_0x00010c264420(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_3;
      func_0x00010bf9c2c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar2 = ppuVar5;
      }
      puVar6 = puVar3;
      func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110eb17f8,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(puVar3);
      ppuVar2 = param_3;
      func_0x00010c247520(param_3);
      FUN_107bbec4c();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110db1138,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(ppuVar2);
      uVar7 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2a3360();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar3);
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 107bb6654; end: 107bb675b; -[SCWebBrowsingWebViewPoolImpl initWithGrapheneRegistry:circumstanceEngine:] */

undefined1 *
FUN_107bb6654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa178;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bb675c; end: 107bb67e3; -[SCWebBrowsingWebViewPoolImpl cachePreloadWebView:forUrl:] */

void FUN_107bb675c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x30);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
    _os_unfair_lock_unlock(param_1 + 0x30);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb67e4; end: 107bb6933; -[SCWebBrowsingWebViewPoolImpl getPreloadedWebViewForUrl:] */

void FUN_107bb67e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2a3360();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d6d08;
      func_0x00010c108be0(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(uVar3,param_2,puVar4);
    }
    else {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2a3360();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d6d08;
      func_0x00010c108bc0(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(uVar3,param_2,puVar4);
    }
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x30);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107bb6934; end: 107bb69c7; -[SCWebBrowsingWebViewPoolImpl hasPreloadedWebViewforUrl:] */

bool FUN_107bb6934(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0dff20(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
    _os_unfair_lock_unlock(param_1 + 0x30);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107bb69c8; end: 107bb6a4b; -[SCWebBrowsingWebViewPoolImpl recycleWkWebView:] */

void FUN_107bb69c8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x30);
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    uVar2 = param_1;
    func_0x00010c124800();
    if (uVar1 < uVar2) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    }
    _os_unfair_lock_unlock(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb6a4c; end: 107bb6b83; -[SCWebBrowsingWebViewPoolImpl claimRecycledWkWebView] */

void FUN_107bb6a4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2a3360();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d6d08;
    func_0x00010c2a4920(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar4,param_2,puVar5);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x20),param_2,0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2a3360();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d6d08;
    func_0x00010c2a4900(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar4,param_2,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107bb6b84; end: 107bb6bff; -[SCWebBrowsingWebViewPoolImpl cachePrefetchHintsLoadedWebView:forPrefetchHintsId:] */

void FUN_107bb6b84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x30);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb6c00; end: 107bb6c87; -[SCWebBrowsingWebViewPoolImpl getPrefetchHintsLoadedWebView:] */

void FUN_107bb6c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107bb6c88; end: 107bb6d07; -[SCWebBrowsingWebViewPoolImpl hasPrefetchHintsLoadedWebView:] */

bool FUN_107bb6c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 107bb6d08; end: 107bb6d33; -[SCWebBrowsingWebViewPoolImpl recyclePoolSizeLimit] */

long FUN_107bb6d08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb1eb8,0,0);
  return (long)(int)uVar1;
}



/* Entry: 107bb6d34; end: 107bb6d87; -[SCWebBrowsingWebViewPoolImpl .cxx_destruct] */

void FUN_107bb6d34(long param_1)

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



/* Entry: 107bb6d88; end: 107bb6dfb; -[SCAdPixelMatchingMetricsManager initWithGrapheneRegistry:] */

undefined1 * FUN_107bb6d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa180;
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



/* Entry: 107bb6dfc; end: 107bb6e87; -[SCAdPixelMatchingMetricsManager onStartHandlingGetSRIDWithLatency:] */

void FUN_107bb6dfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010c0fca80(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1,uVar2,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb6e88; end: 107bb704f; -[SCAdPixelMatchingMetricsManager onSridPassed:latency:] */

void FUN_107bb6e88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0fcbc0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0fcba0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107bb7050; end: 107bb70cb; -[SCAdPixelMatchingMetricsManager onCookieIdCalled] */

void FUN_107bb7050(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0fcd60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bb70cc; end: 107bb70d7; -[SCAdPixelMatchingMetricsManager .cxx_destruct] */

void FUN_107bb70cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bb70d8; end: 107bb71d3; -[SCAdPixelMatchingScriptController initWithServeItemId:pixelId:metricsManager:pixelServeItemSyncManager:] */

undefined1 *
FUN_107bb70d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fa188;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bb71d4; end: 107bb71db; -[SCAdPixelMatchingScriptController forMainFrameOnly] */

undefined8 FUN_107bb71d4(void)

{
  return 0;
}



/* Entry: 107bb71dc; end: 107bb71e7; -[SCAdPixelMatchingScriptController injectedJavaScript] */

undefined ** FUN_107bb71dc(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 107bb71e8; end: 107bb71ef; -[SCAdPixelMatchingScriptController injectionTime] */

undefined8 FUN_107bb71e8(void)

{
  return 1;
}



/* Entry: 107bb71f0; end: 107bb7263; -[SCAdPixelMatchingScriptController nativeCallbackNames] */

void FUN_107bb71f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb1ef8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb1ed8;
  uVar6 = 2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_28);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  puVar2 = puVar1;
  func_0x00010c0d57c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0d4f60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4b900(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)puVar4 != 0) {
    uVar3 = uVar6;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar5 == 0) {
      uVar3 = uVar6;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar5 != 0) {
        func_0x00010be2d300(puVar1,param_2,uVar6);
      }
    }
    else {
      func_0x00010be2a460(puVar1,param_2,uVar6);
    }
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 107bb7264; end: 107bb7367; -[SCAdPixelMatchingScriptController userContentController:didReceiveScriptMessage:] */

void FUN_107bb7264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0d57c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0d4f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar2 = param_4;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar2 = param_4;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        func_0x00010be2d300(param_1,param_2,param_4);
      }
    }
    else {
      func_0x00010be2a460(param_1,param_2,param_4);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb7368; end: 107bb7393; -[SCAdPixelMatchingScriptController browserDidStartLoadingURL] */

void FUN_107bb7368(undefined8 param_1,long param_2)

{
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 107bb7394; end: 107bb7437; -[SCAdPixelMatchingScriptController isEqual:] */

undefined8 FUN_107bb7394(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126b0798;
  _objc_opt_class();
  if (puVar1 == puVar2) {
    if (param_1 == param_3) {
      uVar3 = 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = param_3;
      func_0x00010c15ed20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar3,param_2,puVar1);
      _objc_release(puVar1);
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107bb7438; end: 107bb754b; -[SCAdPixelMatchingScriptController _handleGetSRIDJSCallbackWithMessage:] */

void FUN_107bb7438(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110eb1f18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    func_0x00010c0e69a0(param_1 - *(double *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8));
    func_0x00010c085400(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf999e0();
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 107bb754c; end: 107bb759b;  */

void FUN_107bb754c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
                    /* WARNING: Could not recover jumptable at 0x00010c0e6990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 - *(double *)(param_2 + 0x28),uVar1,PTR_s_onSridPassed_latency__112617478,
             param_4 == 0);
  return;
}



/* Entry: 107bb759c; end: 107bb7663; -[SCAdPixelMatchingScriptController _handleOnCookieIdJSCallbackWithMessgae:] */

void FUN_107bb759c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_107bb7650;
    lVar1 = param_3;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c0e3380(*(undefined8 *)(param_1 + 8));
      func_0x00010c266580(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x30),lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_107bb7650:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb7664; end: 107bb767b; -[SCAdPixelMatchingScriptController javaScriptExecutionDelegate] */

void FUN_107bb7664(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


