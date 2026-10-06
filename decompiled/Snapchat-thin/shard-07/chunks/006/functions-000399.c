/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057409f4; end: 105740ae3; -[SCAdBrowserController webBrowserDidReceiveGAHit:hitTimestampMs:isPageView:isLandingPage:] */

void FUN_1057409f4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9440;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c197620();
  _objc_release(param_4);
  func_0x00010c1ec100(puVar1,param_3,(long)param_1);
  func_0x00010c213ba0(puVar1,param_3,0);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bef4d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164480(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bef2c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105740ae4; end: 105740ae7; -[SCAdBrowserController webBrowserDidFinalizeJavaScriptMetrics:eventType:common:] */

void FUN_105740ae4(void)

{
  return;
}



/* Entry: 105740ae8; end: 105740aeb; -[SCAdBrowserController webBrowserDidReceiveGAHit:isPageView:isLandingPage:didFullyAppearTimestampMs:common:] */

void FUN_105740ae8(void)

{
  return;
}



/* Entry: 105740aec; end: 105740aef; -[SCAdBrowserController webBrowserInterimJavaScriptMetricsUpdate:eventType:performanceMetrics:common:] */

void FUN_105740aec(void)

{
  return;
}



/* Entry: 105740af0; end: 105740af3; -[SCAdBrowserController webBrowser:didNavigate:common:exitMethod:] */

void FUN_105740af0(void)

{
  return;
}



/* Entry: 105740af4; end: 105740af7; -[SCAdBrowserController webBrowser:onWebviewUserEvent:] */

void FUN_105740af4(void)

{
  return;
}



/* Entry: 105740af8; end: 105740afb; -[SCAdBrowserController webBrowser:onWebvewConfigEvent:] */

void FUN_105740af8(void)

{
  return;
}



/* Entry: 105740afc; end: 105740aff; -[SCAdBrowserController onWebviewAsmEvent:] */

void FUN_105740afc(void)

{
  return;
}



/* Entry: 105740b00; end: 105740b03; -[SCAdBrowserController webBrowser:onWebviewOperationEvent:] */

void FUN_105740b00(void)

{
  return;
}



/* Entry: 105740b04; end: 105740b07; -[SCAdBrowserController webBrowser:onWebviewUrlParameterModificationEvent:] */

void FUN_105740b04(void)

{
  return;
}



/* Entry: 105740b08; end: 105740c4f; -[SCAdBrowserController _tryDeactivateController] */

undefined * FUN_105740b08(float param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  if ((param_2[0x52] & 1) == 0) {
    param_2[0x52] = 1;
    fVar6 = param_1;
    func_0x00010be1eec0();
    param_1 = fVar6;
    func_0x00010be3e820();
    if ((int)puVar1 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010be681d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__onBrowserLifecycleComplete_112577a10);
        return param_2;
      }
      goto LAB_105740c4c;
    }
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x58));
    puVar2 = PTR_PTR_1126bc890;
    param_1 = SUB84((double)fVar6,0);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1503c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(undefined **)(param_2 + 0x60) = puVar2;
    _objc_release(uVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar1;
  }
LAB_105740c4c:
  ___stack_chk_fail();
  uVar3 = *(ulong *)(puVar1 + 0x58);
  _objc_opt_class();
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(puVar1 + 0x58);
    _objc_opt_class();
    func_0x00010bf21840();
    if (lVar4 != 1) {
      return (undefined *)0x0;
    }
  }
  if (puVar1[0x50] == '\x01') {
    lVar4 = *(long *)(puVar1 + 0x38);
    func_0x00010c098d00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      dVar7 = *(double *)(puVar1 + 0x80);
      dVar9 = dVar7 * 1000.0;
      uVar5 = *(undefined8 *)(puVar1 + 0x38);
      func_0x00010c098d00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = dVar7;
      _objc_release(uVar5);
      param_1 = SUB84(dVar8,0);
      _objc_release(lVar4);
      if (dVar9 < dVar7) {
        return (undefined *)0x0;
      }
    }
    func_0x00010be1eec0(puVar1);
    return (undefined *)(ulong)(0.0 < param_1);
  }
  return (undefined *)0x0;
}



/* Entry: 105740c50; end: 105740d27; -[SCAdBrowserController _isBrowserLifecycleExtensionEligible] */

bool FUN_105740c50(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = *(ulong *)(param_2 + 0x58);
  _objc_opt_class();
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x58);
    _objc_opt_class();
    func_0x00010bf21840();
    if (lVar2 != 1) {
      return false;
    }
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar2 = *(long *)(param_2 + 0x38);
    func_0x00010c098d00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      dVar4 = *(double *)(param_2 + 0x80);
      dVar6 = dVar4 * 1000.0;
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c098d00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar5 = dVar4;
      _objc_release(uVar3);
      param_1 = SUB84(dVar5,0);
      _objc_release(lVar2);
      if (dVar6 < dVar4) {
        return false;
      }
    }
    func_0x00010be1eec0(param_2);
    return 0.0 < param_1;
  }
  return false;
}



/* Entry: 105740d28; end: 105740db7; -[SCAdBrowserController _getExtensionTtlSec] */

ulong FUN_105740d28(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010c098d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4840();
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c098d20(uVar2);
    fVar3 = (float)param_1;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = (ulong)(uint)(fVar3 / 1000.0);
  }
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 105740db8; end: 105740f2f; -[SCAdBrowserController _onBrowserLifecycleComplete] */

void FUN_105740db8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x52) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bef2c20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b3e90;
      func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ad80(uVar2,param_2,uVar3,puVar1,
                          &PTR____CFConstantStringClassReference_110dfb118,
                          &PTR____CFConstantStringClassReference_110dfb138);
      _objc_release(puVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    if (*(char *)(param_1 + 0x53) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bef2c20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b3e90;
      func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ad80(uVar2,param_2,uVar3,puVar1,
                          &PTR____CFConstantStringClassReference_110dfb158,
                          &PTR____CFConstantStringClassReference_110dfb178);
      _objc_release(puVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    func_0x00010c138000(*(undefined8 *)(param_1 + 0x58),param_2,1);
    *(undefined1 *)(param_1 + 0x53) = 1;
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bef2140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105740f30; end: 105740f37; -[SCAdBrowserController browser] */

undefined8 FUN_105740f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105740f38; end: 105740f67; -[SCAdBrowserController setBrowser:] */

void FUN_105740f38(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105740f68; end: 105740f6f; -[SCAdBrowserController attachmentOpened] */

undefined1 FUN_105740f68(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 105740f70; end: 105740f77; -[SCAdBrowserController setAttachmentOpened:] */

void FUN_105740f70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 105740f78; end: 105740f7f; -[SCAdBrowserController backgroundOnAttachment] */

undefined1 FUN_105740f78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



/* Entry: 105740f80; end: 105740f87; -[SCAdBrowserController setBackgroundOnAttachment:] */

void FUN_105740f80(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 105740f88; end: 105740f8f; -[SCAdBrowserController deactivating] */

undefined1 FUN_105740f88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x52);
}



/* Entry: 105740f90; end: 105740f97; -[SCAdBrowserController setDeactivating:] */

void FUN_105740f90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x52) = param_3;
  return;
}



/* Entry: 105740f98; end: 105740f9f; -[SCAdBrowserController browserReset] */

undefined1 FUN_105740f98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x53);
}



/* Entry: 105740fa0; end: 105740fa7; -[SCAdBrowserController setBrowserReset:] */

void FUN_105740fa0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x53) = param_3;
  return;
}



/* Entry: 105740fa8; end: 105740faf; -[SCAdBrowserController timer] */

undefined8 FUN_105740fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105740fb0; end: 105740fdf; -[SCAdBrowserController setTimer:] */

void FUN_105740fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105740fe0; end: 105740ff7; -[SCAdBrowserController presenterBrowsingDelegate] */

void FUN_105740fe0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105740ff8; end: 105741003; -[SCAdBrowserController setPresenterBrowsingDelegate:] */

void FUN_105740ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 105741004; end: 10574101b; -[SCAdBrowserController originalEventDelegate] */

void FUN_105741004(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10574101c; end: 105741027; -[SCAdBrowserController setOriginalEventDelegate:] */

void FUN_10574101c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105741028; end: 10574102f; -[SCAdBrowserController lastBrowserOpenTimestamp] */

undefined8 FUN_105741028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105741030; end: 105741037; -[SCAdBrowserController setLastBrowserOpenTimestamp:] */

void FUN_105741030(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 105741038; end: 10574103f; -[SCAdBrowserController browserDwellTimeSec] */

undefined8 FUN_105741038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105741040; end: 105741047; -[SCAdBrowserController setBrowserDwellTimeSec:] */

void FUN_105741040(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x80) = param_1;
  return;
}



/* Entry: 105741048; end: 1057410ef; -[SCAdBrowserController .cxx_destruct] */

void FUN_105741048(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1057410f0; end: 10574165f; -[SCAdBrowserControllerProvider initWithSafeBrowsingChecker:withWebViewPool:withWebViewScriptFileCache:timerProvider:adConfigProvider:webBrowsingConfigProvider:adCrashLogging:blizzardLogger:crashLogger:conversationDestinationParser:textSender:notificationPool:thirdPartyLoginPlugInExposer:thirdPartyLoginSaberPluginScopeServices:runtime:alertPresenterFactory:actionSheetPresenterFactory:notificationPresenterFactory:bitmojiAvatarProvider:deckHierarchyFactory:webBrowsingSecureGuard:valdiRuntimeProvider:adTrackSeqNumProvider:userPreferences:webBrowsingBrowserLogger:cofStore:browserPrivacyConsentInfoManager:] */

undefined8 *
FUN_1057410f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126ea0c8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
  }
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



/* Entry: 105741660; end: 1057418ef; -[SCAdBrowserControllerProvider provideAdBrowserControllerWithAdConfig:adBrowserControllerDelegate:browsingDelegate:deepLinkHandling:additionalBrowsingScripts:shareHandler:uiContainer:] */

void FUN_105741660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_8 == 0) {
    lVar1 = param_1;
    func_0x00010beb1bc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_8);
    lVar1 = param_8;
  }
  uVar2 = param_3;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c06b9e0();
  if ((int)uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_retain(uVar7);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bdb30;
  func_0x00010bf218a0(PTR_PTR_1126bdb30,*(undefined8 *)(param_1 + 0x38),param_3,param_5,
                      *(undefined8 *)(param_1 + 8),param_6,param_7,0,*(undefined8 *)(param_1 + 0xd0)
                      ,uVar7,*(undefined8 *)(param_1 + 0x18),lVar1,*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),param_9,*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bdb38;
  _objc_alloc(PTR_PTR_1126bdb38);
  uVar5 = uVar2;
  func_0x00010bf21600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c068d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062bc0(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057418f0; end: 1057419b7; -[SCAdBrowserControllerProvider _shareHandler] */

void FUN_1057418f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bdb40;
  _objc_opt_class(PTR_PTR_1126bdb40);
  lVar1 = param_1;
  func_0x00010beecc20(param_1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126bdb48;
    _objc_alloc(PTR_PTR_1126bdb48);
    func_0x00010c01d240();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057419b8; end: 105741b13; -[SCAdBrowserControllerProvider .cxx_destruct] */

void FUN_1057419b8(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105741b14; end: 105741ccb; -[SCAdBrowserLifecycleServiceImpl initWithAdBrowserControllerProvider:adConfigProvider:adCrashLogging:eventDelegate:] */

undefined1 *
FUN_105741b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ea0d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105741ccc; end: 10574247f; -[SCAdBrowserLifecycleServiceImpl provideBrowsingVCWithAdConfig:browsingDelegate:deepLinkHandling:additionalBrowsingScripts:shareHandler:] */

void FUN_105741ccc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar8 = param_3;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf21600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  if (lVar1 == 0) {
    lVar8 = 0;
    goto LAB_105742434;
  }
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bef2500(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b3e90;
    func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar3,param_2,lVar1,puVar2,&PTR____CFConstantStringClassReference_110dfb198,
                        &PTR____CFConstantStringClassReference_110dfb1b8);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(lVar8);
    _objc_release(uVar3);
  }
  lVar9 = *(long *)(param_1 + 0x18);
  lVar8 = param_3;
  func_0x00010bef2500(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf21600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar9,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar8);
  if (lVar9 == 0) {
LAB_105741f88:
    lVar10 = param_3;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010c068d00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
LAB_1057421e4:
      _objc_release(lVar10);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x28);
      lVar1 = param_3;
      func_0x00010bef2500(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010bf21600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar7,param_2,lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bef2500(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c068d00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010c0e00e0(lVar7,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar7);
      _objc_release(lVar9);
      _objc_release(lVar1);
      _objc_release(lVar8);
      _objc_release(lVar10);
      if (lVar5 != 0) {
        lVar6 = *(long *)(param_1 + 0x28);
        lVar8 = param_3;
        func_0x00010bef2500(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar8;
        func_0x00010bf21600();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar6,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_3;
        func_0x00010bef2500(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        func_0x00010c068d00();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar6;
        func_0x00010c0e00e0(lVar6,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar9);
        _objc_release(lVar6);
        _objc_release(lVar1);
        _objc_release(lVar8);
        lVar8 = lVar10;
        func_0x00010bf21580();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar8;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar1;
        func_0x00010bef2500();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        func_0x00010c247520();
        lVar6 = param_3;
        func_0x00010bef2500();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010c247520();
        _objc_release(lVar6);
        _objc_release(lVar9);
        _objc_release(lVar1);
        _objc_release(lVar8);
        if (lVar4 == lVar5) {
          func_0x00010c121000(lVar10,param_2,param_4);
          func_0x00010bf99d00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1839a0(lVar10,param_2,param_1);
          goto LAB_105742410;
        }
        goto LAB_1057421e4;
      }
    }
    lVar10 = *(long *)(param_1 + 8);
    func_0x00010c119800(lVar10,param_2,param_3,param_1,param_4,param_5,param_6,param_7,0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf99d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1839a0(lVar10,param_2,lVar8);
    _objc_release(lVar8);
    lVar8 = param_3;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010c068d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      param_1 = param_3;
      func_0x00010bef2500(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf21600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,lVar10,lVar8);
    }
    else {
      lVar9 = *(long *)(param_1 + 0x28);
      lVar8 = param_3;
      func_0x00010bef2500(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar8;
      func_0x00010bf21600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar9,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      _objc_release(lVar8);
      if (lVar9 == 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        lVar8 = param_3;
        func_0x00010bef2500(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar8;
        func_0x00010bf21600();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar3,param_2,puVar2,lVar1);
        _objc_release(lVar1);
        _objc_release(lVar8);
        _objc_release(puVar2);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      param_1 = param_3;
      func_0x00010bef2500(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf21600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar3,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bef2500(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010c068d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,lVar10,lVar9);
      _objc_release(lVar9);
      _objc_release(lVar1);
      _objc_release(uVar3);
    }
    _objc_release(lVar8);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x18);
    lVar8 = param_3;
    func_0x00010bef2500(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010bf21600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar10,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar8);
    lVar8 = lVar10;
    func_0x00010bf21580();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010c247520();
    lVar6 = param_3;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c247520();
    _objc_release(lVar6);
    _objc_release(lVar9);
    _objc_release(lVar1);
    _objc_release(lVar8);
    if (lVar4 != lVar5) {
      _objc_release(lVar10);
      goto LAB_105741f88;
    }
    func_0x00010c121000(lVar10,param_2,param_4);
    func_0x00010bf99d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1839a0(lVar10,param_2,param_1);
  }
LAB_105742410:
  _objc_release(param_1);
  lVar8 = lVar10;
  func_0x00010bf21580(lVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
LAB_105742434:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 105742480; end: 105742517; -[SCAdBrowserLifecycleServiceImpl provideNonReuseableBrowsingVCWithAdConfig:browsingDelegate:deepLinkHandling:additionalBrowsingScripts:uiContainer:] */

void FUN_105742480(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c119800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  lVar2 = param_1;
  func_0x00010bf99d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1839a0(uVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf21590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x68),PTR_s_browser_1125a5f08);
  return;
}



/* Entry: 105742518; end: 10574261f; -[SCAdBrowserLifecycleServiceImpl beginObservationWithAdUnifiedEventStreams:] */

void FUN_105742518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef3280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105742620; end: 105742667;  */

void FUN_105742620(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be676c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105742668; end: 1057428d3; -[SCAdBrowserLifecycleServiceImpl _onAdLifecycleEvent:] */

void FUN_105742668(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
  }
  _objc_retain(uVar7);
  lVar8 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar8 + 0x50);
  }
  uVar3 = uVar7;
  func_0x000107bb5e98(uVar7,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be16aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) goto LAB_105742880;
  lVar8 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x18);
    _objc_release();
    if (lVar8 < 8) {
      if (lVar8 == 1) {
        func_0x00010c0e26c0(lVar2);
        goto LAB_105742880;
      }
      if (lVar8 != 2) {
        if (lVar8 == 7) {
          func_0x00010c0e2200(lVar2);
        }
        goto LAB_105742880;
      }
      uVar4 = *(ulong *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0ec0c0();
      if ((uVar5 & 1) != 0) {
        lVar8 = param_3;
        func_0x00010bf99b20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 != 0) {
          cVar1 = *(char *)(lVar8 + 10);
          _objc_release();
          _objc_release(uVar4);
          if (cVar1 != '\x01') goto LAB_105742880;
          lVar8 = param_3;
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(lVar8 + 0x10);
          }
          _objc_retain(uVar7);
          lVar8 = param_3;
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08e100(param_1);
          _objc_release(lVar8);
        }
        _objc_release();
      }
    }
    else {
      if (lVar8 == 8) {
        func_0x00010c0e21e0(lVar2);
        goto LAB_105742880;
      }
      if (lVar8 == 9) {
        func_0x00010bfb5340(lVar2);
        goto LAB_105742880;
      }
      if (lVar8 != 10) goto LAB_105742880;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf13c40(lVar2);
    }
  }
  _objc_release();
LAB_105742880:
  _objc_release(lVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057428d4; end: 105742923; -[SCAdBrowserLifecycleServiceImpl leaveAdItemForAdIdentifier:adSnapIndex:] */

void FUN_1057428d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107bb5e98(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be64ba0(param_1);
  func_0x00010be64b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105742924; end: 105742a1f; -[SCAdBrowserLifecycleServiceImpl adBrowserInteractiveIndexUpdate:adSnapIndex:interactiveIndex:] */

void FUN_105742924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x00010c077480();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b3e90;
      func_0x00010befdee0(PTR_PTR_1126b3e90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ad80(uVar2);
      _objc_release(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x000107bb5e98(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(param_5);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105742a20; end: 105742a87; -[SCAdBrowserLifecycleServiceImpl adSessionEnd] */

void FUN_105742a20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      return;
    }
  }
  func_0x00010bdf8240(param_1);
  func_0x00010bdf8380(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105742a88; end: 105742adb; -[SCAdBrowserLifecycleServiceImpl eventDelegate] */

void FUN_105742a88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_loadWeakRetained(param_1 + 0x70);
  }
  else {
    func_0x00010c269d40(*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105742adc; end: 105742bd7; -[SCAdBrowserLifecycleServiceImpl adBrowserLifecycleComplete:interactiveIndex:] */

void FUN_105742adc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010be0a1a0();
  }
  else {
    func_0x00010be8a3c0(param_1,param_2,param_3,param_4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf21580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105742bd8; end: 105742d9b; -[SCAdBrowserLifecycleServiceImpl _deactivateBrowsersOnAdSessionEnd] */

void FUN_105742bd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  undefined1 auStack_2d0 [128];
  long lStack_250;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar10 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_1a0,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar12 = *plStack_190;
    do {
      lVar13 = 0;
      do {
        if (*plStack_190 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(lStack_198 + lVar13 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf65c00();
        _objc_release(uVar1);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_1a0,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  *(undefined1 *)(param_1 + 0x30) = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lVar10 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_1e0,auStack_158,0x10);
  if (lVar2 != 0) {
    lVar12 = *plStack_1d0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1d0 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,
                            *(undefined8 *)(lStack_1d8 + lVar13 * 8));
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_1e0,auStack_158,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(lVar2 + 0x30) = 1;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lVar12 = *(long *)(lVar2 + 0x28);
  _objc_retain(lVar12);
  puVar8 = &uStack_390;
  puVar9 = auStack_2d0;
  lVar10 = lVar12;
  func_0x00010bf52a60(lVar12,param_2,puVar8,puVar9,0x10);
  if (lVar10 != 0) {
    lVar13 = *plStack_380;
    do {
      lVar15 = 0;
      do {
        if (*plStack_380 != lVar13) {
          _objc_enumerationMutation(lVar12);
        }
        uVar1 = *(undefined8 *)(lStack_388 + lVar15 * 8);
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        plStack_3c0 = (long *)0x0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        lVar3 = *(long *)(lVar2 + 0x28);
        func_0x00010c0e00e0(lVar3,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar11 = *plStack_3c0;
          do {
            lVar14 = 0;
            do {
              if (*plStack_3c0 != lVar11) {
                _objc_enumerationMutation(lVar3);
              }
              uVar5 = *(undefined8 *)(lVar2 + 0x28);
              func_0x00010c0e00e0(uVar5,param_2,uVar1);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf65c00();
              _objc_release(uVar6);
              _objc_release(uVar5);
              lVar14 = lVar14 + 1;
            } while (lVar4 != lVar14);
            lVar4 = lVar3;
            func_0x00010bf52a60(lVar3,param_2,&uStack_3d0,auStack_350,0x10);
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar10);
      puVar8 = &uStack_390;
      puVar9 = auStack_2d0;
      lVar10 = lVar12;
      func_0x00010bf52a60(lVar12,param_2,puVar8,puVar9,0x10);
    } while (lVar10 != 0);
  }
  _objc_release(lVar12);
  *(undefined1 *)(lVar2 + 0x30) = 0;
  func_0x00010be8a460();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  if (puVar9 == (undefined1 *)0x0) {
    func_0x00010befa120(*(undefined8 *)(lVar2 + 0x38),param_2,puVar8);
  }
  else {
    lVar10 = *(long *)(lVar2 + 0x40);
    func_0x00010c0e00e0(lVar10,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x40),param_2,puVar7,puVar8);
      _objc_release(puVar7);
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x40);
    func_0x00010c0e00e0(uVar1,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar1);
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105742d9c; end: 105742f93; -[SCAdBrowserLifecycleServiceImpl _deactivateInteractiveIndexBrowsersOnAdSessionEnd] */

void FUN_105742d9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  *(undefined1 *)(param_1 + 0x30) = 1;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  puVar7 = &uStack_1b0;
  puVar8 = auStack_f0;
  lVar5 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,puVar7,puVar8,0x10);
  if (lVar5 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        uVar12 = *(undefined8 *)(lStack_1a8 + lVar14 * 8);
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x00010c0e00e0(lVar1,param_2,uVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          lVar11 = *plStack_1e0;
          do {
            lVar13 = 0;
            do {
              if (*plStack_1e0 != lVar11) {
                _objc_enumerationMutation(lVar1);
              }
              uVar3 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c0e00e0(uVar3,param_2,uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf65c00();
              _objc_release(uVar4);
              _objc_release(uVar3);
              lVar13 = lVar13 + 1;
            } while (lVar2 != lVar13);
            lVar2 = lVar1;
            func_0x00010bf52a60(lVar1,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar2 != 0);
        }
        _objc_release(lVar1);
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar5);
      puVar7 = &uStack_1b0;
      puVar8 = auStack_f0;
      lVar5 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,puVar7,puVar8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar10);
  *(undefined1 *)(param_1 + 0x30) = 0;
  func_0x00010be8a460();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar8 == (undefined1 *)0x0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,puVar7);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x40);
    func_0x00010c0e00e0(lVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar6,puVar7);
      _objc_release(puVar6);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0e00e0(uVar12,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar12);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105742f94; end: 10574305f; -[SCAdBrowserLifecycleServiceImpl _enqueuePendingRemoval:interactiveIndex:] */

void FUN_105742f94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar2,param_3);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105743060; end: 10574311b; -[SCAdBrowserLifecycleServiceImpl _releaseBrowser:interactiveIndex:] */

void FUN_105743060(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    plVar3 = (long *)(param_1 + 0x18);
  }
  else {
    plVar3 = (long *)(param_1 + 0x28);
    lVar1 = *plVar3;
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(lVar1);
    lVar2 = *plVar3;
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 != 0) goto LAB_1057430fc;
  }
  func_0x00010c12d3e0(*plVar3,param_2,param_3);
LAB_1057430fc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10574311c; end: 105743233; -[SCAdBrowserLifecycleServiceImpl _findMatchingBrowser:] */

void FUN_10574311c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010c0e00e0(lVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar4,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar5,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        goto LAB_105743218;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105743218:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105743234; end: 10574326f; -[SCAdBrowserLifecycleServiceImpl _notifyLeaveAdForNonInteractiveIndexAdBrowser:] */

void FUN_105743234(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0e4ce0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105743270; end: 1057433bb; -[SCAdBrowserLifecycleServiceImpl _notifyLeaveAdForInteractiveIndexAdBrowser:] */

void FUN_105743270(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_190;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    _objc_retain(lVar2);
    lVar5 = lVar2;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        lVar3 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e4ce0();
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x00010be8a460(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lVar7 = *(long *)(lVar2 + 0x40);
  _objc_retain(lVar7);
  puVar6 = &uStack_2d0;
  lVar5 = lVar7;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar9 = *plStack_2c0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_2c0 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        lVar4 = *(long *)(lVar2 + 0x40);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar4);
            }
            func_0x00010be8a3c0(lVar2);
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          lVar3 = lVar4;
          func_0x00010bf52a60();
        }
        _objc_release(lVar4);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar5);
      puVar6 = &uStack_2d0;
      lVar5 = lVar7;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar7);
  lVar5 = *(long *)(lVar2 + 0x40);
  func_0x00010c12adc0(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(lVar5 + 0x70,puVar6);
  return;
}



/* Entry: 1057433bc; end: 105743567; -[SCAdBrowserLifecycleServiceImpl _releasePendingReleaseInteractiveIndexedBrowser] */

void FUN_1057433bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar6 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar6);
  puVar5 = &uStack_1b0;
  lVar4 = lVar6;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar2 = *(long *)(param_1 + 0x40);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar2);
            }
            func_0x00010be8a3c0(param_1);
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          lVar3 = lVar2;
          func_0x00010bf52a60();
        }
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar4);
      puVar5 = &uStack_1b0;
      lVar4 = lVar6;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar6);
  lVar4 = *(long *)(param_1 + 0x40);
  func_0x00010c12adc0(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(lVar4 + 0x70,puVar5);
  return;
}



/* Entry: 105743568; end: 105743573; -[SCAdBrowserLifecycleServiceImpl setEventDelegate:] */

void FUN_105743568(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105743574; end: 1057436ab; -[SCAdBrowserLifecycleServiceImpl .cxx_destruct] */

void FUN_105743574(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057436ac; end: 1057436e7; -[SCAdBrowserServiceProvider end] */

void FUN_1057436ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ea0d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057436e8; end: 105743f03; -[SCAdBrowserServiceProvider _buildAdBrowserLifecycleService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057436e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  undefined *puVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  undefined8 uStack_1b8;
  undefined8 uStack_d8;
  
  puVar1 = PTR_PTR_1126aeea8;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bdb58;
  _objc_alloc();
  lVar58 = param_1 + _DAT_112728c70;
  _objc_loadWeakRetained();
  lVar3 = lVar58;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_105743f04();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a4360();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_105743f04();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a43e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar48 = 0;
  }
  else {
    lVar48 = param_1 + _DAT_112728ca0;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar48;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar49 = 0;
  }
  else {
    lVar49 = param_1 + _DAT_112728c94;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar49;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = (long)_DAT_112728c74;
  lVar11 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112728c78;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112728c7c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112728c80;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112728c84;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112728c88;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_1b8 = 0;
    uStack_d8 = 0;
  }
  else {
    uStack_1b8 = *(undefined8 *)(param_1 + _DAT_112728ccc);
    _objc_retain();
    uStack_d8 = param_1 + _DAT_112728cc8;
    _objc_loadWeakRetained();
  }
  lVar23 = param_1;
  func_0x000105743f28();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x000105743f4c();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x000105743f4c();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x000105743f4c();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010c0dc680();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar50 = 0;
  }
  else {
    lVar50 = param_1 + _DAT_112728cac;
    _objc_loadWeakRetained();
  }
  lVar36 = lVar50;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar51 = 0;
  }
  else {
    lVar51 = param_1 + _DAT_112728cb4;
    _objc_loadWeakRetained();
  }
  lVar37 = lVar51;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar52 = 0;
  }
  else {
    lVar52 = param_1 + _DAT_112728cbc;
    _objc_loadWeakRetained();
  }
  lVar39 = lVar52;
  func_0x00010c156d60();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1;
  func_0x000105743f28();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar53 = 0;
  }
  else {
    lVar53 = param_1 + _DAT_112728c90;
    _objc_loadWeakRetained();
  }
  lVar42 = lVar53;
  func_0x00010bef5ec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_112728cb8;
    _objc_loadWeakRetained();
  }
  lVar43 = lVar54;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_112728c98;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar55;
  func_0x00010c2a3420();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_112728cc0;
    _objc_loadWeakRetained();
  }
  lVar45 = lVar56;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar59 = 0;
  }
  else {
    lVar59 = param_1 + _DAT_112728cc4;
    _objc_loadWeakRetained();
  }
  lVar46 = lVar59;
  func_0x00010c113e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041280(puVar2,param_2,lVar4,lVar6,lVar8,puVar1,lVar9,lVar10,lVar12,lVar14,lVar16,
                      lVar18,lVar20,lVar22,uStack_1b8,uStack_d8,lVar26,lVar29,lVar32,lVar35,lVar36,
                      lVar38,lVar39,lVar41,lVar42,lVar43,lVar44,lVar45,lVar46);
  _objc_release(uStack_1b8);
  _objc_release(lVar46);
  _objc_release(lVar59);
  _objc_release(lVar45);
  _objc_release(lVar56);
  _objc_release(lVar44);
  _objc_release(lVar55);
  _objc_release(lVar43);
  _objc_release(lVar54);
  _objc_release(lVar42);
  _objc_release(lVar53);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar52);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar51);
  _objc_release(lVar36);
  _objc_release(lVar50);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(uStack_d8);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar49);
  _objc_release(lVar9);
  _objc_release(lVar48);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar58);
  puVar47 = PTR_PTR_1126bdb60;
  _objc_alloc(PTR_PTR_1126bdb60);
  if (param_1 == 0) {
    lVar58 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_112728c8c;
    _objc_loadWeakRetained(lVar58);
  }
  lVar3 = lVar58;
  func_0x00010bef2520(lVar58);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar57;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1000(puVar47,param_2,puVar2,lVar3,lVar4,param_3);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar58);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar47);
  return;
}



/* Entry: 105743f04; end: 105743f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105743f04(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112728cb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105743f70; end: 105744233; -[SCAdBrowserServiceProvider _buildAdWebviewEventStreamsRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105743f70(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = (long)_DAT_112728c8c;
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f480();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  ppuVar1 = &PTR_PTR_1126bdb68;
  if ((int)lVar5 == 0) {
    ppuVar1 = &PTR_PTR_1126bdb70;
  }
  puVar6 = *ppuVar1;
  _objc_alloc(puVar6);
  lVar10 = (long)_DAT_112728c90;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010bef5e60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar7 = lVar11;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112728c94;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112728c98;
  _objc_loadWeakRetained(lVar4);
  lVar9 = lVar4;
  func_0x00010c28f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff20a0(puVar6,param_2,lVar5,lVar7,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar11 = lVar2;
  func_0x00010bef5d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18580();
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar11 = lVar2;
  func_0x00010bef5d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf185a0();
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar11 = lVar2;
  func_0x00010bef64c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf185a0();
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bef6620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf185a0();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105744234; end: 105744377; -[SCAdBrowserServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105744234(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112728ccc,0);
  _objc_destroyWeak(param_1 + _DAT_112728cc8);
  _objc_destroyWeak(param_1 + _DAT_112728cc4);
  _objc_destroyWeak(param_1 + _DAT_112728cc0);
  _objc_destroyWeak(param_1 + _DAT_112728c98);
  _objc_destroyWeak(param_1 + _DAT_112728cbc);
  _objc_destroyWeak(param_1 + _DAT_112728cb8);
  _objc_destroyWeak(param_1 + _DAT_112728cb4);
  _objc_destroyWeak(param_1 + _DAT_112728c74);
  _objc_destroyWeak(param_1 + _DAT_112728c70);
  _objc_destroyWeak(param_1 + _DAT_112728cb0);
  _objc_destroyWeak(param_1 + _DAT_112728cac);
  _objc_destroyWeak(param_1 + _DAT_112728c88);
  _objc_destroyWeak(param_1 + _DAT_112728c84);
  _objc_destroyWeak(param_1 + _DAT_112728c80);
  _objc_destroyWeak(param_1 + _DAT_112728ca8);
  _objc_destroyWeak(param_1 + _DAT_112728ca4);
  _objc_destroyWeak(param_1 + _DAT_112728c7c);
  _objc_destroyWeak(param_1 + _DAT_112728c78);
  _objc_destroyWeak(param_1 + _DAT_112728c94);
  _objc_destroyWeak(param_1 + _DAT_112728c90);
  _objc_destroyWeak(param_1 + _DAT_112728c8c);
  _objc_destroyWeak(param_1 + _DAT_112728ca0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728c9c);
  return;
}



/* Entry: 105744378; end: 1057443c3; +[SCAdInFlightResult successWithResponses:] */

void FUN_105744378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_opt_new();
  *(undefined1 *)(param_1 + 8) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057443c4; end: 10574440b; +[SCAdInFlightResult failureWithErrorResponse:] */

void FUN_1057443c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_opt_new();
  *(undefined1 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10574440c; end: 105744413; -[SCAdInFlightResult isSuccess] */

undefined1 FUN_10574440c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105744414; end: 10574441b; -[SCAdInFlightResult responses] */

undefined8 FUN_105744414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10574441c; end: 105744423; -[SCAdInFlightResult errorResponse] */

undefined8 FUN_10574441c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105744424; end: 105744453; -[SCAdInFlightResult .cxx_destruct] */

void FUN_105744424(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105744454; end: 1057446a3;  */

void FUN_105744454(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = puVar1;
  if (0 < param_1) {
    do {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release();
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057446a4; end: 105744877;  */

void FUN_1057446a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf7fbe0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar2 = param_1;
    func_0x00010bfc2020();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010befa120(puVar1);
    }
    lVar3 = param_1;
    func_0x00010c0f6fc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      do {
        lVar4 = lVar3;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010848f47c();
        _objc_release(lVar4);
        lVar4 = lVar3;
        if ((int)lVar5 == 0) break;
        lVar5 = param_1;
        func_0x00010bfc2020();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) break;
        func_0x00010befa120(puVar1);
        lVar4 = param_1;
        func_0x00010c0f6fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar5);
        lVar3 = lVar4;
      } while (lVar4 != 0);
      _objc_release(lVar4);
    }
    puVar8 = puVar1;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126bdb78;
      _objc_alloc(PTR_PTR_1126bdb78);
      puVar6 = puVar8;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf51e00(puVar1);
      func_0x00010c01b480(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105744878; end: 10574495f;  */

void FUN_105744878(undefined8 param_1,undefined *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b8dd0;
    func_0x00010bfe6000(PTR_PTR_1126b8dd0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2b3fa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b3fc0((double)((param_3 ^ 0xffffffff) & 1));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c2a7920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105744960; end: 105744c2b; -[SCAdProvider initWithAdServer:adConfigProvider:adConfigProviderV2:sessionViewingHistory:userAdIdProvider:lazyDocObjectContext:grapheneRegistry:lifecycleTracker:userPreferences:onDeviceFeatureGatingProvider:locationProvider:adEOVTimerProvider:serveMetricsManager:skStoreProductPrefetcher:performer:appStartExperimentReader:] */

undefined8
FUN_105744960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bdb88;
  _objc_alloc();
  func_0x00010c00db40();
  _objc_release(param_8);
  puVar4 = PTR_PTR_1126bdb90;
  _objc_alloc();
  func_0x00010c0180c0();
  puVar5 = PTR_PTR_1126bdb98;
  _objc_alloc();
  func_0x00010bfeede0();
  _objc_release(param_10);
  func_0x00010bff1ee0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar5,uVar2,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 105744c2c; end: 105744ff3; -[SCAdProvider initWithAdServer:adConfigProvider:adConfigProviderV2:sessionViewingHistory:userAdIdProvider:adResponseCache:graphene:userPreferences:onDeviceFeatureGatingProvider:locationProvider:adEOVTimerProvider:serveMetricsManager:skStoreProductPrefetcher:performer:appStartExperimentReader:] */

undefined8 *
FUN_105744c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_70 = PTR_PTR_1126ea0e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 105744ff4; end: 105745487; -[SCAdProvider adWithFetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:adViewLocation:requestTriggerType:operaType:brandSafetyInventoryType:willMakeRequest:] */

void FUN_105744ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  uVar8 = param_11;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_15);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  _objc_initWeak(auStack_80,param_1);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105745488;
  puStack_108 = &UNK_1108aed88;
  puStack_b8 = puVar2;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_3);
  uStack_100 = param_3;
  _objc_retain(param_4);
  uStack_f8 = param_4;
  _objc_retain(param_5);
  uStack_f0 = param_5;
  uStack_b0 = param_6;
  _objc_retain(param_7);
  uStack_e8 = param_7;
  _objc_retain(param_8);
  uStack_e0 = param_8;
  _objc_retain(param_9);
  uStack_d8 = param_9;
  _objc_retain(param_10);
  uStack_d0 = param_10;
  uStack_a0 = param_12;
  uStack_a8 = param_11;
  uStack_98 = param_13;
  uStack_90 = param_14;
  _objc_retain(param_15);
  uStack_c8 = param_15;
  ppuVar3 = &puStack_120;
  uStack_88 = uVar8;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8cd8;
  _objc_retain();
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067f60();
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
  if ((long)uVar5 < 1) {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x78));
  }
  else {
    lVar7 = *(long *)(param_1 + 0x88);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (lVar7 != 0) {
      _dispatch_block_cancel(lVar7);
    }
    uVar6 = 0;
    func_0x0001008553e8(0,ppuVar3);
    uVar8 = uVar6;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + 0x88);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar9);
    _objc_release(puVar1);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0cd480((double)uVar5,PTR_PTR_1126afec0);
    func_0x00010c0f7fe0(uVar8);
    _objc_release(uVar6);
    _objc_release(lVar7);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  _objc_release(ppuVar3);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105745488; end: 105745587;  */

void FUN_105745488(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be6aa60(*(undefined8 *)(param_1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105745588; end: 105745687; -[SCAdProvider peekAdResponse:completionBlock:] */

void FUN_105745588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105745688; end: 1057456bb;  */

void FUN_105745688(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6aac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057456bc; end: 1057457bb; -[SCAdProvider updateAdResponseWithAdRequestClientId:adResponse:] */

void FUN_1057456bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  puVar1 = PTR_PTR_1126bdba0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c059820();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  puVar4 = puVar3;
  func_0x00010c283460(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (puVar4 == (undefined *)0x0) {
    pcVar7 = *(code **)(lVar5 + 0x10);
    _objc_retain(lVar5);
    (*pcVar7)(lVar5,0);
  }
  else {
    lVar6 = *(long *)(puVar1 + 8);
    _objc_retain(lVar5);
    func_0x00010c0f6fa0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,lVar6);
    _objc_release(lVar5);
    lVar5 = lVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1057457bc; end: 105745847; -[SCAdProvider _onPerformerPeekAdResponse:completionBlock:] */

void FUN_1057457bc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_3 == 0) {
    pcVar1 = *(code **)(param_4 + 0x10);
    _objc_retain(param_4);
    (*pcVar1)(param_4,0);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010c0f6fa0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,lVar2);
    _objc_release(param_4);
    param_4 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105745848; end: 105745f83; -[SCAdProvider _onPerformerAdWithFetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:adViewLocation:requestTriggerType:operaType:brandSafetyInventoryType:willMakeRequest:startTimestampInMillis:] */

void FUN_105745848(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [8];
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_17);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_105745f84;
  uStack_e8 = 0x105745f94;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_105745f84;
  uStack_118 = 0x105745f94;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_158 = 0;
  uStack_148 = 0x2020000000;
  uStack_140 = 0;
  uStack_178 = 0;
  uStack_168 = 0x2020000000;
  puVar2 = PTR_PTR_1126bdba8;
  puStack_170 = &uStack_178;
  puStack_150 = &uStack_158;
  puStack_110 = puVar5;
  func_0x00010c2808e0();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_105745f9c;
  puStack_1b8 = &UNK_1108aedb8;
  puStack_1b0 = param_2;
  puStack_1a0 = &uStack_158;
  puStack_160 = puVar2;
  _objc_retain(param_5);
  uStack_180 = param_12;
  puStack_230 = puVar5;
  uStack_228 = 0xc2000000;
  uStack_220 = 0x105746148;
  puStack_218 = &UNK_1108aede8;
  puStack_210 = param_2;
  puStack_200 = &uStack_d8;
  puStack_1f8 = &uStack_178;
  uStack_1a8 = param_5;
  puStack_198 = &uStack_b8;
  puStack_190 = &uStack_98;
  uStack_188 = param_7;
  _objc_retain(param_5);
  uStack_1d8 = param_12;
  puStack_2a0 = puVar5;
  uStack_298 = 0xc2000000;
  uStack_290 = 0x1057464c8;
  puStack_288 = &UNK_1108aee18;
  uStack_238 = param_12;
  puStack_280 = param_2;
  puStack_270 = &uStack_d8;
  puStack_268 = &uStack_158;
  puStack_260 = &uStack_178;
  uStack_240 = param_7;
  uStack_208 = param_5;
  puStack_1f0 = &uStack_b8;
  puStack_1e8 = &uStack_98;
  uStack_1e0 = param_7;
  _objc_retain(param_5);
  puStack_258 = &uStack_138;
  puStack_2c8 = puVar5;
  uStack_2c0 = 0xc2000000;
  pcStack_2b8 = FUN_105746ba4;
  puStack_2b0 = &UNK_1108aee48;
  puStack_2a8 = &uStack_108;
  uStack_278 = param_5;
  puStack_250 = &uStack_b8;
  puStack_248 = &uStack_98;
  func_0x00010c0bc6a0(param_4);
  func_0x00010be50f40(param_2);
  bVar1 = *(byte *)(puStack_90 + 3);
  puVar5 = PTR_PTR_1126ae4e8;
  if ((param_17 != 0) && (bVar1 != 0)) {
    (**(code **)(param_17 + 0x10))(param_17,0);
    bVar1 = *(byte *)(puStack_90 + 3) & 1;
    puVar5 = PTR_PTR_1126ae4e8;
  }
  PTR_PTR_1126ae4e8 = puVar5;
  if (bVar1 == 0) {
    lVar4 = param_8;
    if ((param_8 != 0) && (lVar3 = param_8, func_0x00010c135fc0(), lVar3 == 0)) {
      func_0x00010c2b7120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_8);
    }
    puVar5 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf17b60();
    _objc_release(puVar5);
    func_0x00010c107cc0(lVar4);
    puVar5 = (undefined *)puStack_100[5];
    if (puVar5 == (undefined *)0x0) {
      puVar5 = param_2;
      func_0x00010bdc5720();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar5);
    }
    _objc_initWeak(auStack_2d0,param_2);
    puStack_300 = puVar2;
    _objc_retain(lVar4);
    _objc_retain(param_9);
    uStack_2f8 = param_12;
    uStack_2f0 = param_7;
    _objc_copyWeak(auStack_308,auStack_2d0);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(puVar5);
    _objc_retain(param_10);
    _objc_retain(param_11);
    uStack_2e8 = param_15;
    uStack_2e0 = param_16;
    _objc_retain(param_17);
    uStack_2d8 = param_1;
    func_0x00010bdc5aa0(param_2);
    func_0x00010be57cc0(param_2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar2);
    _objc_release(param_17);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(puVar5);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_308);
    _objc_release(param_9);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_2d0);
    param_8 = lVar4;
  }
  else {
    func_0x00010c22b6a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
  }
  _objc_release(puVar5);
  _objc_release(uStack_278);
  _objc_release(uStack_208);
  _objc_release(uStack_1a8);
  __Block_object_dispose(&uStack_178,8);
  __Block_object_dispose(&uStack_158,8);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(puStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105745f84; end: 105745f9b;  */

void FUN_105745f84(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105745f9c; end: 105746ba3;  */

void FUN_105745f9c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar3);
  lVar4 = param_2;
  func_0x00010c23eb60();
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)lVar4;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bfc2000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x0001063f9ea8(uVar5,uVar1,uVar2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((uVar7 & 1) == 0) {
      lVar8 = param_2;
      func_0x00010c261740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 != 0) {
        lVar8 = param_2;
        func_0x00010c261740();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))();
        _objc_release(lVar8);
      }
      lVar8 = lVar4;
      func_0x00010bf26d80();
      *(bool *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = lVar8 == 1;
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
    }
  }
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105746ba4; end: 105746c5f;  */

void FUN_105746ba4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c106200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105746c60; end: 105746fa3;  */

void FUN_105746c60(long param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126ae4e8;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x98);
  _objc_retain(param_2);
  _objc_retain(lVar8);
  uVar11 = lVar6 - 5;
  func_0x00010bf8be80();
  if ((uVar11 < 2 || lVar8 != 0) && ((uVar2 & 1) != 0)) {
    puVar3 = PTR_PTR_1126b82d8;
    _objc_alloc();
    uVar12 = 0;
    func_0x00010c0548c0(0,0,0,0,0,0);
    puVar4 = PTR_PTR_1126b82d0;
    _objc_alloc();
    func_0x00010c054880();
    puVar5 = PTR_PTR_1126b82c8;
    _objc_alloc();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    lVar6 = lVar8;
    func_0x00010bf12a60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      lVar7 = lVar8;
      func_0x00010c281dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045660(uVar12,0,0,0,0);
      _objc_release(lVar7);
    }
    else {
      func_0x00010c045660(uVar12,0,0,0,0);
    }
    _objc_release(lVar6);
    if (uVar11 < 2) {
      puVar1 = PTR____NSArray0__struct_11034ab48;
      if (param_2 != (undefined *)0x0) {
        puVar1 = param_2;
      }
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  _objc_release(lVar8);
  _objc_release(param_2);
  _objc_release(param_2);
  lVar8 = param_1 + 0x80;
  _objc_loadWeakRetained();
  func_0x00010bec5da0(*(undefined8 *)(param_1 + 0xb0));
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(puVar9 + 0x20));
  _objc_retain(*(undefined8 *)(puVar9 + 0x28));
  _objc_retain(*(undefined8 *)(puVar9 + 0x30));
  _objc_retain(*(undefined8 *)(puVar9 + 0x38));
  _objc_retain(*(undefined8 *)(puVar9 + 0x40));
  _objc_retain(*(undefined8 *)(puVar9 + 0x48));
  _objc_retain(*(undefined8 *)(puVar9 + 0x50));
  _objc_retain(*(undefined8 *)(puVar9 + 0x58));
  __Block_object_assign(lVar8 + 0x60,*(undefined8 *)(puVar9 + 0x60),7);
  __Block_object_assign(lVar8 + 0x68,*(undefined8 *)(puVar9 + 0x68),8);
  __Block_object_assign(lVar8 + 0x70,*(undefined8 *)(puVar9 + 0x70),8);
  __Block_object_assign(lVar8 + 0x78,*(undefined8 *)(puVar9 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(lVar8 + 0x80,puVar9 + 0x80);
  return;
}



/* Entry: 105746fa4; end: 1057470d7;  */

void FUN_105746fa4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x80,param_2 + 0x80);
  return;
}



/* Entry: 1057470d8; end: 10574790f; -[SCAdProvider _submitAdRequestWithFetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:adRequestClientIds:engagement:adOrganicSignals:upcomingStoriesContext:unviewedEligibleStoryCount:adViewLocation:viewingSessionRecords:operaType:brandSafetyInventoryType:purgedAdResponses:smartCacheAllocationEnabled:willMakeRequest:startTimestampInMillis:] */

void FUN_1057470d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puStack_2c8;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  uVar8 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_21);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0882a0();
  _objc_release(puVar1);
  uVar2 = param_18;
  func_0x000100504554(param_18,&PTR___NSConcreteGlobalBlock_1108aeec8);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c233080();
  uVar7 = param_9;
  func_0x0001063f8f54(uVar8,param_9,param_6,param_7,param_8,param_5,param_10,param_11,param_12,uVar3
                      ,uVar4,param_14,param_15,param_16,uVar5,(char)uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_80,param_2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf1f480();
  _objc_release(uVar8);
  if ((int)uVar10 == 0) {
    func_0x00010bf529e0(param_9);
    func_0x00010be53cc0(param_2);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf17b60();
    _objc_release(puVar1);
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_105748318;
    puStack_1d0 = &UNK_1108aef48;
    puStack_2c8 = auStack_178;
    _objc_copyWeak(puStack_2c8,auStack_80);
    _objc_retain(param_4);
    uStack_1c8 = param_4;
    _objc_retain(param_5);
    uStack_1c0 = param_5;
    _objc_retain(param_6);
    uStack_1b8 = param_6;
    uStack_170 = param_7;
    _objc_retain(param_8);
    uStack_1b0 = param_8;
    _objc_retain(param_9);
    uStack_1a8 = param_9;
    _objc_retain(param_10);
    uStack_1a0 = param_10;
    _objc_retain(param_11);
    uStack_198 = param_11;
    _objc_retain(param_12);
    uStack_190 = param_12;
    uStack_168 = param_14;
    _objc_retain(param_15);
    uStack_188 = param_15;
    uStack_160 = param_16;
    uStack_158 = param_17;
    _objc_retain(param_18);
    uStack_180 = param_18;
    uStack_150 = param_1;
    puStack_148 = puVar9;
    _objc_copyWeak(auStack_1f8,auStack_80);
    _objc_retain(param_4);
    _objc_retain(param_9);
    puStack_1f0 = puVar9;
    func_0x00010c0b6ee0(uVar10);
    _objc_release(uVar10);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    _objc_release(param_9);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_1f8);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    _objc_release(uStack_198);
    _objc_release(uStack_1a0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1b0);
    _objc_release(uStack_1b8);
    _objc_release(uStack_1c0);
    uVar10 = uStack_1c8;
  }
  else {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar1);
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_105747918;
    puStack_128 = &UNK_1108aef18;
    puStack_2c8 = auStack_b8;
    _objc_copyWeak(puStack_2c8,auStack_80);
    _objc_retain(param_5);
    uStack_120 = param_5;
    uStack_b0 = param_7;
    _objc_retain(param_8);
    uStack_a8 = param_13;
    uStack_118 = param_8;
    _objc_retain(param_9);
    uStack_110 = param_9;
    _objc_retain(uVar7);
    uStack_108 = uVar7;
    _objc_retain(param_21);
    uStack_c0 = param_21;
    _objc_retain(uVar3);
    uStack_100 = uVar3;
    _objc_retain(param_4);
    uStack_f8 = param_4;
    _objc_retain(param_6);
    uStack_f0 = param_6;
    _objc_retain(param_10);
    uStack_e8 = param_10;
    _objc_retain(param_11);
    uStack_e0 = param_11;
    _objc_retain(param_12);
    uStack_d8 = param_12;
    uStack_a0 = param_14;
    _objc_retain(param_15);
    uStack_d0 = param_15;
    uStack_98 = param_16;
    uStack_90 = param_17;
    _objc_retain(param_18);
    uStack_c8 = param_18;
    uStack_88 = param_1;
    func_0x00010c0f7fc0(uVar3);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_c0);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    uVar10 = uStack_120;
  }
  _objc_release(uVar10);
  _objc_destroyWeak(puStack_2c8);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105747910; end: 105747917;  */

void FUN_105747910(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serveItemId_112635568);
  return;
}



/* Entry: 105747918; end: 105747e5b;  */

void FUN_105747918(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_105747e00;
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  lVar3 = lVar1;
  func_0x00010bdf81c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(lVar1 + 0x90);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010be53cc0(lVar1);
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    func_0x00010bf8be80();
    if ((uVar5 & 1) != 0) {
      uVar5 = 1;
      goto LAB_105747a14;
    }
LAB_105747b40:
    uVar8 = *(undefined8 *)(param_1 + 0x80);
  }
  else {
    func_0x00010c107cc0();
    uVar6 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf8be80();
    if ((uVar6 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
LAB_105747a48:
        func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x98));
        puVar2 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf18ba0();
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95660();
        _objc_release(puVar2);
        goto LAB_105747aac;
      }
    }
    else {
LAB_105747a14:
      uVar7 = *(ulong *)(lVar1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf1f480();
      _objc_release(uVar7);
      if (((uVar6 & 1) == 0) && ((uVar5 & 1) == 0)) goto LAB_105747a48;
LAB_105747aac:
      if (lVar4 == 0) goto LAB_105747b40;
    }
    uVar8 = *(undefined8 *)(lVar1 + 0xa0);
    func_0x00010c0e00e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107cc0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf8be80(*(undefined8 *)(param_1 + 0x28));
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c06a4a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be87740(lVar1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    lVar10 = *(long *)(param_1 + 0x80);
    uVar8 = 0;
    if (lVar10 != 0) {
      (**(code **)(lVar10 + 0x10))(lVar10,1);
      uVar8 = 0;
    }
  }
  _objc_retainBlock(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c06a4a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010be37f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105745f84;
  uStack_88 = 0x105745f94;
  uStack_80 = 0;
  lVar11 = lVar10;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,param_1 + 0x88);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = lVar4 != 0;
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar15);
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar16);
  uStack_d8 = *(undefined8 *)(param_1 + 0x90);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar17);
  uVar18 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar18);
  uVar19 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar19);
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar20);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
  uVar21 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar21);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
  uVar22 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar22);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  lVar4 = lVar12;
  func_0x00010c25ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = puStack_a0[5];
  puStack_a0[5] = lVar4;
  _objc_release(uVar9);
  _objc_release(lVar12);
  _objc_release(lVar11);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_e0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar10);
  _objc_release(uVar8);
  _objc_release(lVar3);
LAB_105747e00:
  _objc_release(lVar1);
  return;
}



/* Entry: 105747e5c; end: 1057481ff;  */

void FUN_105747e5c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  lVar9 = *(long *)(*(long *)(param_1 + 0x70) + 8);
  uVar3 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  _objc_release(uVar3);
  lVar9 = param_1 + 0x78;
  _objc_loadWeakRetained();
  if (lVar9 == 0) goto LAB_1057481b0;
  uVar3 = param_2;
  func_0x00010c080320();
  uVar5 = param_2;
  if ((int)uVar3 == 0) {
    func_0x00010bf98ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be28f80(lVar9);
  }
  else {
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010c107cc0();
      if ((*(byte *)(param_1 + 0xa8) & 1) == 0) goto LAB_105747f40;
    }
    else {
      uVar4 = 0;
LAB_105747f40:
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c107cc0();
      if (iVar1 != 0) {
        uVar8 = *(undefined8 *)(lVar9 + 0x98);
        lVar6 = lVar9;
        func_0x00010bdf81c0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        func_0x00010bf1f3c0();
        _objc_release(uVar8);
        _objc_release(lVar6);
        if ((int)uVar3 != 0) {
          puVar2 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf18ba0();
          _objc_release(puVar2);
          puVar2 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf95660();
          _objc_release(puVar2);
        }
      }
    }
    if ((uVar4 & 1) == 0) {
      if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010bf8be80();
        if (iVar1 == 0) goto LAB_1057480b0;
        uVar7 = *(ulong *)(lVar9 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010bf1f480();
        if ((uVar4 & 1) == 0) {
          _objc_release(uVar7);
          goto LAB_1057480b0;
        }
        uVar10 = *(ulong *)(lVar9 + 0x98);
        lVar6 = lVar9;
        func_0x00010bdf81c0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar10;
        func_0x00010bf1f3c0();
        _objc_release(uVar10);
        _objc_release(lVar6);
        _objc_release(uVar7);
        if ((uVar4 & 1) == 0) goto LAB_1057480b0;
LAB_105748100:
        puVar2 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf18ba0();
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95660();
        _objc_release(puVar2);
      }
      else {
LAB_1057480b0:
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
          func_0x00010bf8be80();
          if (iVar1 != 0) {
            uVar8 = *(undefined8 *)(lVar9 + 0x28);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            func_0x00010bf1f480();
            _objc_release(uVar8);
            if ((int)uVar3 != 0) goto LAB_105748100;
          }
        }
      }
    }
    func_0x00010c13bde0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be25440(*(undefined8 *)(param_1 + 0xa0),lVar9);
  }
  _objc_release(uVar5);
LAB_1057481b0:
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105748200; end: 105748303;  */

void FUN_105748200(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x78,param_2 + 0x78);
  return;
}



/* Entry: 105748304; end: 105748317;  */

void FUN_105748304(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105748318; end: 105748443;  */

void FUN_105748318(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be25440(*(undefined8 *)(param_1 + 0x98));
  _objc_release(param_2);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105748444; end: 10574851b; -[SCAdProvider _deDupeKeyForTargetingParameters:] */

void FUN_105748444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bdbb0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bef4240(param_3);
  uVar3 = param_3;
  func_0x00010c06a4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c06a3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bef3ea0(param_3);
  uVar6 = param_3;
  func_0x00010c06a440(param_3);
  _objc_release(param_3);
  func_0x00010bff1b60(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10574851c; end: 105748877; -[SCAdProvider _inFlightSubjectForKey:requestMetadata:inventoryType:willMakeRequest:] */

void FUN_10574851c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = *(undefined **)(param_1 + 0x90);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b8d98;
    func_0x00010bfed8c0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18));
    puVar1 = PTR_PTR_1126b7e38;
    func_0x00010c131720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x90));
    if (param_4 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa0));
    }
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf17b60();
    _objc_release(puVar3);
    _objc_initWeak(auStack_80,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105748878;
    puStack_b0 = &UNK_1108aefa8;
    _objc_copyWeak(auStack_90,auStack_80);
    puStack_88 = puVar4;
    _objc_retain(puVar1);
    puStack_a8 = puVar1;
    _objc_retain(param_3);
    uStack_a0 = param_3;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_copyWeak(auStack_d8,auStack_80);
    puStack_d0 = puVar4;
    _objc_retain(puVar1);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0b6ee0(uVar5);
    _objc_release(uVar5);
    _objc_retain(puVar1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_d8);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(puStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
  }
  else {
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010bfed8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18));
    _objc_retain(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105748878; end: 1057489d7;  */

void FUN_105748878(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126bdbb8;
    func_0x00010c261a80(PTR_PTR_1126bdbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x78);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(param_2);
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1057489d8; end: 105748a5f;  */

/* WARNING: Possible PIC construction at 0x000105748a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105748a3c) */

void FUN_1057489d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126bdbb8;
  func_0x00010c261a80(PTR_PTR_1126bdbb8,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be07d80(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105748a60; end: 105748bbf;  */

void FUN_105748a60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126bdbb8;
    func_0x00010bfa0240(PTR_PTR_1126bdbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x78);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(param_2);
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}


