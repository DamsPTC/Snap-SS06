/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dca970; end: 107dca977; -[SCOperaRemoteWebLayer requiresUserActionForMediaPlayback] */

undefined1 FUN_107dca970(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107dca978; end: 107dca97f; -[SCOperaRemoteWebLayer allowsInlineMediaPlayback] */

undefined1 FUN_107dca978(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107dca980; end: 107dca987; -[SCOperaRemoteWebLayer allowJSInjection] */

undefined1 FUN_107dca980(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107dca988; end: 107dca98f; -[SCOperaRemoteWebLayer resetWebviewOnHide] */

undefined1 FUN_107dca988(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107dca990; end: 107dca997; -[SCOperaRemoteWebLayer allowPreloading] */

undefined1 FUN_107dca990(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107dca998; end: 107dca99f; -[SCOperaRemoteWebLayer useImmersiveMode] */

undefined1 FUN_107dca998(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107dca9a0; end: 107dca9a7; -[SCOperaRemoteWebLayer allowLoadingUnsafeSites] */

undefined1 FUN_107dca9a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107dca9a8; end: 107dca9af; -[SCOperaRemoteWebLayer allowPreloadHeader] */

undefined1 FUN_107dca9a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107dca9b0; end: 107dca9b7; -[SCOperaRemoteWebLayer allowHidingUrlBarOnFirstLoad] */

undefined1 FUN_107dca9b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107dca9b8; end: 107dca9bf; -[SCOperaRemoteWebLayer skipAlertForDeepLink] */

undefined1 FUN_107dca9b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107dca9c0; end: 107dca9c7; -[SCOperaRemoteWebLayer dismissOnlyWithExitButton] */

undefined1 FUN_107dca9c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 107dca9c8; end: 107dca9cf; -[SCOperaRemoteWebLayer preventPullDownWhenViewingContent] */

undefined1 FUN_107dca9c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 107dca9d0; end: 107dca9d7; -[SCOperaRemoteWebLayer controlAudio] */

undefined1 FUN_107dca9d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 107dca9d8; end: 107dca9df; -[SCOperaRemoteWebLayer showURLBar] */

undefined8 FUN_107dca9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dca9e0; end: 107dca9e7; -[SCOperaRemoteWebLayer primaryColor] */

undefined8 FUN_107dca9e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dca9e8; end: 107dca9ef; -[SCOperaRemoteWebLayer loadingBackgroundColor] */

undefined8 FUN_107dca9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dca9f0; end: 107dcaa07; -[SCOperaRemoteWebLayer page] */

void FUN_107dca9f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dcaa08; end: 107dcaa13; -[SCOperaRemoteWebLayer setPage:] */

void FUN_107dcaa08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 107dcaa14; end: 107dcaa1b; -[SCOperaRemoteWebLayer allowOnShowOnHideJSCallback] */

undefined1 FUN_107dcaa14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 107dcaa1c; end: 107dcaa23; -[SCOperaRemoteWebLayer disableTouchCallout] */

undefined1 FUN_107dcaa1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 107dcaa24; end: 107dcaa2b; -[SCOperaRemoteWebLayer subscriptionConfiguration] */

undefined8 FUN_107dcaa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107dcaa2c; end: 107dcaa33; -[SCOperaRemoteWebLayer customUserAgent] */

undefined8 FUN_107dcaa2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107dcaa34; end: 107dcaa3b; -[SCOperaRemoteWebLayer jsBridgeCapabilities] */

undefined8 FUN_107dcaa34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107dcaa3c; end: 107dcaa43; -[SCOperaRemoteWebLayer useCardLoading] */

undefined1 FUN_107dcaa3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 107dcaa44; end: 107dcaa4b; -[SCOperaRemoteWebLayer urlBarLoadingText] */

undefined8 FUN_107dcaa44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107dcaa4c; end: 107dcaa53; -[SCOperaRemoteWebLayer useWebviewStandardizationExperience] */

undefined1 FUN_107dcaa4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 107dcaa54; end: 107dcaa5b; -[SCOperaRemoteWebLayer showProgressBar] */

undefined1 FUN_107dcaa54(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 107dcaa5c; end: 107dcaa63; -[SCOperaRemoteWebLayer startWithLoadingIndicator] */

undefined1 FUN_107dcaa5c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 107dcaa64; end: 107dcaa6b; -[SCOperaRemoteWebLayer allowSwipeNavigation] */

undefined1 FUN_107dcaa64(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



/* Entry: 107dcaa6c; end: 107dcaa73; -[SCOperaRemoteWebLayer enableMultiWebViews] */

undefined1 FUN_107dcaa6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}



/* Entry: 107dcaa74; end: 107dcaa7b; -[SCOperaRemoteWebLayer multiWebViewsCount] */

undefined8 FUN_107dcaa74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107dcaa7c; end: 107dcaa83; -[SCOperaRemoteWebLayer multiWebViewsDefaultInteractiveIndex] */

undefined8 FUN_107dcaa7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107dcaa84; end: 107dcaa8b; -[SCOperaRemoteWebLayer ignoreTapGesture] */

undefined1 FUN_107dcaa84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1f);
}



/* Entry: 107dcaa8c; end: 107dcaa93; -[SCOperaRemoteWebLayer useXExitButton] */

undefined1 FUN_107dcaa8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 107dcaa94; end: 107dcaa9b; -[SCOperaRemoteWebLayer hideExitButton] */

undefined1 FUN_107dcaa94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 107dcaa9c; end: 107dcaaa3; -[SCOperaRemoteWebLayer enableExitButton] */

undefined1 FUN_107dcaa9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 107dcaaa4; end: 107dcaaab; -[SCOperaRemoteWebLayer backgroundColor] */

undefined8 FUN_107dcaaa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107dcaaac; end: 107dcaab3; -[SCOperaRemoteWebLayer contentAspectRatio] */

undefined4 FUN_107dcaaac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 107dcaab4; end: 107dcaabb; -[SCOperaRemoteWebLayer shouldSkipSafeBrowseCheck] */

undefined1 FUN_107dcaab4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x23);
}



/* Entry: 107dcaabc; end: 107dcaac3; -[SCOperaRemoteWebLayer isTopSnap] */

undefined1 FUN_107dcaabc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Entry: 107dcaac4; end: 107dcaacb; -[SCOperaRemoteWebLayer additionalInfoDictForDeeplinkManager] */

undefined8 FUN_107dcaac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107dcaacc; end: 107dcab63; -[SCOperaRemoteWebLayer .cxx_destruct] */

void FUN_107dcaacc(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 107dcab64; end: 107dcabaf; +[SCOperaRotatingImageLayer layerWithPage:] */

void FUN_107dcab64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7dc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dcabb0; end: 107dcad03; -[SCOperaRotatingImageLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107dcabb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fb1e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f608);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f608) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      *(char *)((long)puVar1 + (long)_DAT_11276f60c) = (char)uVar5;
      _objc_release(uVar4);
    }
    else {
      *(undefined1 *)((long)puVar1 + (long)_DAT_11276f60c) = 1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dcad04; end: 107dcad0b; -[SCOperaRotatingImageLayer type] */

undefined8 FUN_107dcad04(void)

{
  return 2;
}



/* Entry: 107dcad0c; end: 107dcad13; -[SCOperaRotatingImageLayer layerContentType] */

undefined8 FUN_107dcad0c(void)

{
  return 1;
}



/* Entry: 107dcad14; end: 107dcae4f; -[SCOperaRotatingImageLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107dcad14(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_60;
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126d7dc0;
  _objc_opt_class();
  if (puVar2 == puVar3) {
    if (param_1 == param_3) {
      ppuVar6 = (undefined **)0x1;
    }
    else {
      _objc_retain(param_3);
      puVar2 = PTR_s_isEqual__1125fa0c8;
      puStack_48 = PTR_PTR_1126fb1e8;
      ppuVar4 = &puStack_50;
      puStack_50 = param_1;
      _objc_msgSendSuper2(ppuVar4,PTR_s_isEqual__1125fa0c8,param_3);
      if ((int)ppuVar4 == 0) {
        ppuVar6 = (undefined **)0x0;
      }
      else {
        iVar7 = (int)*(undefined8 *)(param_1 + _DAT_11276f608);
        puVar3 = param_3;
        func_0x00010bfe7fa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        if ((iVar7 == 0) ||
           (bVar1 = param_1[_DAT_11276f60c], puVar5 = param_3, func_0x00010c079780(),
           (uint)bVar1 != (uint)puVar5)) {
          ppuVar6 = (undefined **)0x0;
        }
        else {
          puStack_58 = PTR_PTR_1126fb1e8;
          puStack_60 = param_1;
          _objc_msgSendSuper2(&puStack_60,puVar2,param_3);
        }
        _objc_release(puVar3);
      }
      _objc_release(param_3);
    }
  }
  else {
    ppuVar6 = (undefined **)0x0;
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar6;
}



/* Entry: 107dcae50; end: 107dcae5f; -[SCOperaRotatingImageLayer imageKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dcae50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f608);
}



/* Entry: 107dcae60; end: 107dcae6f; -[SCOperaRotatingImageLayer isOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dcae60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f60c);
}



/* Entry: 107dcae70; end: 107dcae83; -[SCOperaRotatingImageLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dcae70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f608,0);
  return;
}



/* Entry: 107dcae84; end: 107dcaecb; +[SCOperaRotatingLayer layerWithPage:] */

void FUN_107dcae84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107dcaecc; end: 107dcb06f; -[SCOperaRotatingLayer initWithPage:] */

undefined1 * FUN_107dcaecc(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126fb1f0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar8 = (double)param_1;
    dVar7 = dVar8;
    if (param_1 == 0.0) {
      dVar7 = 1.0;
    }
    *(double *)((long)puVar1 + 0x10) = dVar7;
    _objc_release(uVar2);
    uVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar2 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    if (uVar2 == 0) {
      uVar5 = 2;
    }
    else {
      func_0x00010c2827c0();
    }
    *(ulong *)((long)puVar1 + 0x18) = uVar5;
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar5 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar4);
    func_0x00010bdc10a0(uVar5);
    _objc_release(uVar5);
    *(double *)((long)puVar1 + 0x20) = dVar7;
    *(double *)((long)puVar1 + 0x28) = dVar8;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107dcb070; end: 107dcb077; -[SCOperaRotatingLayer type] */

undefined8 FUN_107dcb070(void)

{
  return 0;
}



/* Entry: 107dcb078; end: 107dcb07f; -[SCOperaRotatingLayer layerContentType] */

undefined8 FUN_107dcb078(void)

{
  return 1;
}



/* Entry: 107dcb080; end: 107dcb183; -[SCOperaRotatingLayer isEqual:] */

bool FUN_107dcb080(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126d7df8;
  _objc_opt_class(PTR_PTR_1126d7df8);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (((uVar1 == 0) ||
      (bVar2 = *(byte *)(param_3 + 8), uVar4 = param_5, func_0x00010c232cc0(),
      (uint)bVar2 != (uint)uVar4)) ||
     (uVar6 = *(ulong *)(param_3 + 0x18), uVar4 = param_5, func_0x00010c0b8420(), uVar6 != uVar4)) {
    bVar5 = false;
  }
  else {
    func_0x00010c0c6700(param_5);
    bVar5 = false;
    if ((*(double *)(param_3 + 0x20) == param_1) &&
       (dVar7 = *(double *)(param_3 + 0x28), dVar7 == param_2)) {
      dVar9 = *(double *)(param_3 + 0x10);
      func_0x00010c0c65c0(param_5);
      dVar8 = ABS(dVar9 + dVar7) * 2.220446049250313e-16;
      if (dVar8 <= 2.2250738585072014e-308) {
        dVar8 = 2.2250738585072014e-308;
      }
      bVar5 = ABS(dVar9 - dVar7) < dVar8;
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  return bVar5;
}



/* Entry: 107dcb184; end: 107dcb18b; -[SCOperaRotatingLayer shouldRotate] */

undefined1 FUN_107dcb184(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dcb18c; end: 107dcb193; -[SCOperaRotatingLayer mediaScaleFactor] */

undefined8 FUN_107dcb18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dcb194; end: 107dcb19b; -[SCOperaRotatingLayer mediaSize] */

undefined1  [16] FUN_107dcb194(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 107dcb19c; end: 107dcb1a3; -[SCOperaRotatingLayer manipulatorFormat] */

undefined8 FUN_107dcb19c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dcb1a4; end: 107dcb1ef; +[SCOperaRotatingVideoLayer layerWithPage:] */

void FUN_107dcb1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7dd0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dcb1f0; end: 107dcb4ab; -[SCOperaRotatingVideoLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107dcb1f0(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fb1f8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPage__1125ea568,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = lVar3;
      func_0x00010c2827c0();
    }
    *(long *)((long)puVar1 + (long)_DAT_11276f620) = lVar4;
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (lVar4 != 0) {
      func_0x00010c2827c0();
    }
    *(long *)((long)puVar1 + (long)_DAT_11276f624) = lVar5;
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f628);
    *(long *)((long)puVar1 + (long)_DAT_11276f628) = lVar5;
    _objc_release(uVar7);
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f62c);
    *(long *)((long)puVar1 + (long)_DAT_11276f62c) = lVar5;
    _objc_release(uVar7);
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f630);
    *(long *)((long)puVar1 + (long)_DAT_11276f630) = lVar5;
    _objc_release(uVar7);
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_11276f634) = (char)lVar6;
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar9 = (double)param_1;
    *(double *)((long)puVar1 + (long)_DAT_11276f638) = dVar9;
    _objc_release(lVar5);
    fVar8 = SUB84(dVar9,0);
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_11276f63c) = (char)lVar6;
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    *(double *)((long)puVar1 + (long)_DAT_11276f640) = (double)fVar8;
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_11276f644) = (char)lVar6;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107dcb4ac; end: 107dcb4b3; -[SCOperaRotatingVideoLayer type] */

undefined8 FUN_107dcb4ac(void)

{
  return 5;
}



/* Entry: 107dcb4b4; end: 107dcb4bb; -[SCOperaRotatingVideoLayer layerContentType] */

undefined8 FUN_107dcb4b4(void)

{
  return 1;
}



/* Entry: 107dcb4bc; end: 107dcb707; -[SCOperaRotatingVideoLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107dcb4bc(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  undefined *puStack_60;
  undefined *puStack_58;
  
  iVar2 = (int)&puStack_60;
  _objc_retain(param_4);
  puVar4 = param_4;
  _objc_opt_class();
  puVar6 = PTR_PTR_1126d7dd0;
  _objc_opt_class();
  if (puVar4 != puVar6) {
    bVar3 = false;
    goto LAB_107dcb5f8;
  }
  if (param_2 == param_4) {
    bVar3 = true;
    goto LAB_107dcb5f8;
  }
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fb1f8;
  puStack_60 = param_2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_isEqual__1125fa0c8,param_4);
  if (((iVar2 == 0) ||
      (puVar6 = *(undefined **)(param_2 + _DAT_11276f620), puVar4 = param_4, func_0x00010bf87840(),
      puVar6 != puVar4)) ||
     (puVar6 = *(undefined **)(param_2 + _DAT_11276f624), puVar4 = param_4, func_0x00010c0ffbc0(),
     puVar6 != puVar4)) {
    bVar3 = false;
  }
  else {
    puVar6 = *(undefined **)(param_2 + _DAT_11276f628);
    puVar4 = param_4;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    _objc_retain(puVar4);
    if (puVar6 == puVar4) {
      _objc_release(puVar4);
      _objc_release(puVar6);
LAB_107dcb630:
      uVar7 = *(undefined8 *)(param_2 + _DAT_11276f630);
      puVar6 = param_4;
      func_0x00010bf0b380(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bd86de8(uVar7,puVar6);
      if ((((int)uVar7 == 0) ||
          (bVar1 = param_2[_DAT_11276f634], puVar5 = param_4, func_0x00010bf4ffc0(),
          (uint)bVar1 != (uint)puVar5)) ||
         ((dVar8 = *(double *)(param_2 + _DAT_11276f638), func_0x00010bf4ffe0(param_4),
          dVar8 != param_1 ||
          ((bVar1 = param_2[_DAT_11276f63c], puVar5 = param_4, func_0x00010bf0efa0(),
           (uint)bVar1 != (uint)puVar5 ||
           (dVar8 = *(double *)(param_2 + _DAT_11276f640), func_0x00010c0c6880(param_4),
           dVar8 != param_1)))))) {
LAB_107dcb6f0:
        bVar3 = false;
      }
      else {
        bVar1 = param_2[_DAT_11276f644];
        puVar5 = param_4;
        func_0x00010c25c720(param_4);
        bVar3 = (uint)bVar1 == (uint)puVar5;
      }
      _objc_release(puVar6);
    }
    else {
      if (puVar4 == (undefined *)0x0) goto LAB_107dcb6f0;
      puVar5 = puVar6;
      func_0x00010c071ae0();
      _objc_release(puVar4);
      _objc_release(puVar6);
      if ((int)puVar5 != 0) goto LAB_107dcb630;
      bVar3 = false;
    }
    _objc_release(puVar4);
  }
  _objc_release(param_4);
LAB_107dcb5f8:
  _objc_release(param_4);
  return bVar3;
}



/* Entry: 107dcb708; end: 107dcb717; -[SCOperaRotatingVideoLayer docking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dcb708(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f620);
}



/* Entry: 107dcb718; end: 107dcb727; -[SCOperaRotatingVideoLayer playbackMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dcb718(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f624);
}



/* Entry: 107dcb728; end: 107dcb737; -[SCOperaRotatingVideoLayer url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dcb728(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f628);
}



/* Entry: 107dcb738; end: 107dcb747; -[SCOperaRotatingVideoLayer shareableURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dcb738(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f62c);
}



/* Entry: 107dcb748; end: 107dcb757; -[SCOperaRotatingVideoLayer assetKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dcb748(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f630);
}



/* Entry: 107dcb758; end: 107dcb767; -[SCOperaRotatingVideoLayer controlsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dcb758(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f634);
}



/* Entry: 107dcb768; end: 107dcb777; -[SCOperaRotatingVideoLayer audioDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dcb768(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f63c);
}



/* Entry: 107dcb778; end: 107dcb787; -[SCOperaRotatingVideoLayer controlsMinimumDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dcb778(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f638);
}



/* Entry: 107dcb788; end: 107dcb797; -[SCOperaRotatingVideoLayer mediaStartTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dcb788(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f640);
}



/* Entry: 107dcb798; end: 107dcb7a7; -[SCOperaRotatingVideoLayer streaming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dcb798(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f644);
}



/* Entry: 107dcb7a8; end: 107dcb7f7; -[SCOperaRotatingVideoLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dcb7a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f630,0);
  _objc_storeStrong(param_1 + _DAT_11276f62c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f628,0);
  return;
}



/* Entry: 107dcb7f8; end: 107dcd01f;  */

void FUN_107dcb7f8(undefined *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar15 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x000107dccde4(param_1,&PTR____CFConstantStringClassReference_110f0e2b8);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar14 = param_1;
    func_0x000107dccde4(param_1,&PTR____CFConstantStringClassReference_110f0e2d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    if (puVar15 == (undefined *)0x0) {
      puVar15 = puVar14;
      func_0x00010c0d3c80();
    }
    else {
      func_0x00010bf529e0(puVar14);
      func_0x00010bfed320(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b20(puVar15);
      _objc_release(puVar4);
    }
    _objc_release(puVar14);
  }
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010bf1f3c0();
  _objc_release(puVar4);
  if ((int)puVar14 != 0) {
    puVar4 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf1f3c0();
    _objc_release(puVar8);
    _objc_release(puVar4);
    if ((int)puVar5 != 0) {
      _objc_retain(param_1);
      puVar4 = param_1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ca3f8;
      _objc_opt_class(PTR_PTR_1126ca3f8);
      puVar5 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar4);
      puVar4 = puVar8;
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar8);
      if (puVar4 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = param_1;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar7 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar8);
        puVar5 = puVar6;
        if (((ulong)puVar7 & 1) == 0) {
          puVar5 = (undefined *)0x0;
        }
        _objc_retain(puVar5);
        _objc_release(puVar6);
        puVar8 = PTR_PTR_1126d7e10;
        _objc_alloc();
        func_0x00010bf1f3c0(puVar5);
        _objc_release(puVar5);
        func_0x00010c061de0();
      }
      _objc_release(puVar4);
      _objc_release(param_1);
      if (puVar8 != (undefined *)0x0) {
        if (puVar15 == (undefined *)0x0) {
          puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_retain(puVar15);
        _objc_release(puVar15);
        func_0x00010befa120(puVar15);
      }
      _objc_release(puVar8);
    }
  }
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0 && ((ulong)puVar14 & 1) == 0) {
    _objc_retain(param_1);
    puVar4 = param_1;
    func_0x00010c118b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c0f0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    puVar4 = puVar5;
    if (puVar8 != (undefined *)0x0) {
      puVar8 = param_1;
      func_0x00010c118b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f0c80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar8);
    }
    puVar8 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f3c0();
    _objc_release(puVar5);
    _objc_release(puVar8);
    ppuVar1 = &PTR_PTR_1126d7dc0;
    if ((int)puVar6 == 0) {
      ppuVar1 = &PTR_PTR_1126d68d8;
    }
    puVar8 = *ppuVar1;
    func_0x00010c08c700(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_1);
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
  }
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
LAB_107dcbdac:
    puVar8 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126d68e8;
    if (puVar8 != (undefined *)0x0) goto LAB_107dcc084;
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) goto LAB_107dcbec0;
      puVar4 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) goto LAB_107dcbec0;
    }
    else {
LAB_107dcbec0:
      _objc_release();
      if (((ulong)puVar14 & 1) == 0) {
        puVar4 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010bf1f3c0();
        _objc_release(puVar4);
        puVar4 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf1f3c0();
        _objc_release(puVar4);
        puVar4 = PTR_PTR_1126d7e00;
        if ((int)puVar8 != 0) {
          puVar4 = PTR_PTR_1126d7dd0;
        }
        if ((int)puVar5 != 0) {
          puVar4 = PTR_PTR_1126d7de0;
        }
        goto LAB_107dcc084;
      }
    }
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) goto LAB_107dcbf08;
    }
    else {
LAB_107dcbf08:
      _objc_release();
      puVar4 = PTR_PTR_1126d68f0;
      if (((ulong)puVar14 & 1) == 0) goto LAB_107dcc084;
    }
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      puVar8 = puVar3;
      func_0x00010c0e00e0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126d6900;
      if (((int)puVar5 == 0) || (puVar4 = PTR_PTR_1126d6900, puVar8 == (undefined *)0x0))
      goto LAB_107dcc084;
      _objc_opt_class(puVar8);
      _objc_alloc();
      func_0x00010c032da0();
      goto LAB_107dcc094;
    }
    puVar8 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126d6910;
    if (puVar8 != (undefined *)0x0) goto LAB_107dcc084;
  }
  else {
    if (((ulong)puVar14 & 1) == 0) {
      _objc_release(puVar4);
    }
    else {
      puVar8 = param_1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar8);
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x0) goto LAB_107dcbdac;
    }
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126d7dd8;
    if ((int)puVar8 == 0) {
      puVar4 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010bf1f3c0();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126d68d8;
      if ((int)puVar8 != 0) {
        puVar4 = PTR_PTR_1126d7dc0;
      }
    }
LAB_107dcc084:
    puVar8 = puVar4;
    func_0x00010c08c700(puVar8);
    _objc_retainAutoreleasedReturnValue();
LAB_107dcc094:
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
  }
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d68e0;
    func_0x00010c08c700(PTR_PTR_1126d68e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0 && ((ulong)puVar14 & 1) == 0) {
    _objc_retain(param_1);
    puVar4 = param_1;
    func_0x00010c118b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c0f0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010c0f0cc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar8 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar5 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f3c0();
    _objc_release(puVar5);
    _objc_release(puVar8);
    ppuVar1 = &PTR_PTR_1126d7dc0;
    if ((int)puVar6 == 0) {
      ppuVar1 = &PTR_PTR_1126d68d8;
    }
    puVar8 = *ppuVar1;
    func_0x00010c08c700(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
  }
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0 && ((ulong)puVar14 & 1) == 0) {
    _objc_retain(param_1);
    puVar4 = param_1;
    func_0x00010c118b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c0f0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar14);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126d68d8;
    func_0x00010c08c700(PTR_PTR_1126d68d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_opt_class();
    _objc_alloc();
    func_0x00010c032da0();
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
  }
  puVar4 = puVar15;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  puVar14 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar14;
  func_0x00010bf1f3c0();
  _objc_release(puVar14);
  if ((int)puVar8 == 0) {
    uVar13 = 1;
  }
  else {
    puVar14 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010bf1f3c0();
    uVar13 = (uint)puVar8 ^ 1;
    _objc_release(puVar14);
  }
  puVar14 = PTR_PTR_1126c9a58;
  func_0x00010c070a60();
  if (((ulong)puVar14 & 1) == 0) {
    _objc_retain(puVar3);
    puVar14 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010bf1f3c0();
    if ((int)puVar8 == 0) {
      puVar8 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar14);
      _objc_release(puVar3);
      if (puVar8 == (undefined *)0x0) goto LAB_107dcc530;
      puVar14 = PTR_PTR_1126d6938;
      func_0x00010c08c700();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2;
      func_0x00010bf461c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      FUN_107dc65c0(param_1,lVar10);
      _objc_release(lVar10);
      _objc_release(lVar9);
      if ((int)puVar8 != 0) {
        func_0x00010befa120(puVar2);
      }
    }
    else {
      _objc_release(puVar14);
      _objc_release(puVar3);
LAB_107dcc530:
      puVar14 = (undefined *)0x0;
    }
    puVar8 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf1f3c0();
    if ((int)puVar5 == 0) {
LAB_107dcc5c4:
      _objc_release(puVar8);
    }
    else {
      puVar5 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf1f3c0();
      _objc_release(puVar5);
      _objc_release(puVar8);
      if (((uint)puVar6 & uVar13) == 1) {
        puVar8 = PTR_PTR_1126d6958;
        func_0x00010c08c700(PTR_PTR_1126d6958);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        goto LAB_107dcc5c4;
      }
    }
    puVar8 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf1f3c0();
    _objc_release(puVar8);
    if ((int)puVar5 != 0) {
      puVar8 = PTR_PTR_1126d6978;
      func_0x00010c08c700(PTR_PTR_1126d6978);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar8);
    }
    puVar8 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf1f3c0();
    _objc_release(puVar8);
    if ((int)puVar5 != 0) {
      puVar8 = PTR_PTR_1126d6980;
      func_0x00010c08c700(PTR_PTR_1126d6980);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar8);
    }
  }
  else {
    puVar14 = (undefined *)0x0;
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf1f3c0();
      if ((int)puVar6 != 0) goto LAB_107dcc704;
      puVar6 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf1f3c0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar8);
      if (((ulong)puVar7 & 1) != 0) goto LAB_107dcc710;
      puVar8 = PTR_PTR_1126d6908;
      func_0x00010c08c700(PTR_PTR_1126d6908);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
    }
    else {
LAB_107dcc704:
      _objc_release();
    }
    _objc_release(puVar8);
  }
LAB_107dcc710:
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126d68f8;
    func_0x00010c08c700(PTR_PTR_1126d68f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf1f3c0();
  _objc_release(puVar8);
  if ((int)puVar5 != 0) {
    puVar8 = PTR_PTR_1126d6968;
    func_0x00010c08c700(PTR_PTR_1126d6968);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    lVar9 = param_2;
    func_0x00010bf4ec20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf56cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    if (lVar11 != 0) {
      func_0x00010befa120(puVar2);
    }
    _objc_release(lVar11);
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf1f3c0();
  _objc_release(puVar8);
  if ((int)puVar5 == 0) {
    puStack_80 = (undefined *)0x0;
  }
  else {
    puStack_80 = PTR_PTR_1126d6940;
    func_0x00010c08c700();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined *)0x0) {
      func_0x00010befa120(puVar2);
    }
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf1f3c0();
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f3c0();
    if (((ulong)puVar6 & 1) != 0) {
LAB_107dcc968:
      _objc_release(puVar5);
      goto LAB_107dcc970;
    }
    puVar6 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf1f3c0();
    if ((int)puVar7 != 0) {
      _objc_release(puVar6);
      goto LAB_107dcc968;
    }
    puVar7 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010bf1f3c0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar8);
    if (((ulong)puVar12 & 1) == 0) goto LAB_107dcc9ac;
  }
  else {
LAB_107dcc970:
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126d6970;
  func_0x00010c08c700(PTR_PTR_1126d6970);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar8);
LAB_107dcc9ac:
  lVar9 = param_2;
  func_0x00010bf461c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  FUN_107dc65c0(param_1,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = PTR_PTR_1126d6920;
    func_0x00010c08c700(PTR_PTR_1126d6920);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    if (puVar14 != (undefined *)0x0) {
      func_0x00010c12d360(puVar2);
      func_0x00010befa120(puVar2);
    }
    _objc_release(puVar8);
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    _objc_release(puVar8);
    if (puVar5 != puVar6) {
      puVar8 = PTR_PTR_1126d6918;
      func_0x00010c08c700(PTR_PTR_1126d6918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar8);
    }
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f3c0();
    _objc_release(puVar5);
    _objc_release(puVar8);
    if ((int)puVar6 != 0) {
      puVar8 = PTR_PTR_1126d6928;
      func_0x00010c08c700(PTR_PTR_1126d6928);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar8);
    }
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126d6930;
    func_0x00010c08c700(PTR_PTR_1126d6930);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126d6950;
    func_0x00010c08c700(PTR_PTR_1126d6950);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126d6960;
    func_0x00010c08c700(PTR_PTR_1126d6960);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    if (puStack_80 != (undefined *)0x0) {
      func_0x00010befa120(puVar2);
    }
    _objc_release(puVar8);
  }
  puVar8 = puVar15;
  func_0x00010bfaea20(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_retain(puVar2);
  _objc_release(puVar8);
  _objc_release(puStack_80);
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(puVar15);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107dcd020; end: 107dcd0d7;  */

bool FUN_107dcd020(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_layerContentType_112600ab8);
  if ((uVar2 & 1) == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = param_2;
    func_0x00010c08c2a0(param_2);
    bVar1 = uVar2 != 3;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107dcd0d8; end: 107dcd257;  */

void FUN_107dcd0d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x000107dccde4(param_1,&PTR____CFConstantStringClassReference_110f0e318);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(lVar3);
  }
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f3c0();
  _objc_release(lVar3);
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126d6948;
    func_0x00010c08c700(PTR_PTR_1126d6948);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
  }
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar5 = PTR_PTR_1126d7e08;
    func_0x00010c08c700(PTR_PTR_1126d7e08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dcd258; end: 107dcd55f; -[SCOperaSubscriptionConfiguration initWithProperties:] */

undefined1 * FUN_107dcd258(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fb200;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar4;
    }
    else {
      _objc_retain(lVar2);
      uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = lVar2;
    }
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)((long)puVar1 + 0x18);
      *(long *)((long)puVar1 + 0x18) = (long)puVar4;
    }
    else {
      _objc_retain(lVar2);
      lVar5 = *(long *)((long)puVar1 + 0x18);
      *(long *)((long)puVar1 + 0x18) = lVar2;
    }
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    if (lVar2 == 0) {
      lVar5 = *(long *)((long)puVar1 + 0x18);
    }
    _objc_retain(lVar5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(long *)((long)puVar1 + 0x20) = lVar5;
    _objc_release(uVar3);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(long *)((long)puVar1 + 0x30) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(long *)((long)puVar1 + 0x38) = lVar5;
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(long *)((long)puVar1 + 0x40) = lVar5;
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(long *)((long)puVar1 + 0x48) = lVar5;
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c2827c0();
    *(long *)((long)puVar1 + 8) = lVar5;
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      *(undefined8 *)((long)puVar1 + 0x50) = 2;
    }
    else {
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c2827c0();
      *(long *)((long)puVar1 + 0x50) = lVar6;
      _objc_release(lVar5);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dcd560; end: 107dcd92f; -[SCOperaSubscriptionConfiguration isEqual:] */

bool FUN_107dcd560(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126d7df0;
  _objc_opt_class();
  if (puVar2 != puVar5) {
    bVar1 = false;
    goto LAB_107dcd904;
  }
  if (param_1 == param_3) {
    bVar1 = true;
    goto LAB_107dcd904;
  }
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar2 = param_3;
  func_0x00010c2608c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  if (puVar5 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar5);
LAB_107dcd640:
    puVar6 = *(undefined **)(param_1 + 0x18);
    puVar5 = param_3;
    func_0x00010c260920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    if (puVar6 == puVar5) {
      _objc_release(puVar5);
      _objc_release(puVar6);
LAB_107dcd6b0:
      puVar7 = *(undefined **)(param_1 + 0x20);
      puVar6 = param_3;
      func_0x00010c260720();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar7);
      _objc_retain(puVar6);
      if (puVar7 == puVar6) {
        _objc_release(puVar6);
        _objc_release(puVar7);
LAB_107dcd720:
        puVar8 = *(undefined **)(param_1 + 0x28);
        puVar7 = param_3;
        func_0x00010c2607c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar8);
        _objc_retain(puVar7);
        if (puVar8 == puVar7) {
          _objc_release(puVar7);
          _objc_release(puVar8);
LAB_107dcd790:
          puVar9 = *(undefined **)(param_1 + 0x30);
          puVar8 = param_3;
          func_0x00010c25fd80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar9);
          _objc_retain(puVar8);
          if (puVar9 == puVar8) {
            _objc_release(puVar8);
            _objc_release(puVar9);
LAB_107dcd800:
            uVar10 = *(undefined8 *)(param_1 + 0x38);
            puVar9 = param_3;
            func_0x00010c282a40(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bd86de8(uVar10,puVar9);
            if ((int)uVar10 != 0) {
              uVar10 = *(undefined8 *)(param_1 + 0x40);
              puVar11 = param_3;
              func_0x00010c09cc20(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bd86de8(uVar10,puVar11);
              if ((int)uVar10 == 0) goto LAB_107dcd8b0;
              iVar12 = (int)*(undefined8 *)(param_1 + 0x48);
              puVar3 = param_3;
              func_0x00010c140080();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bd86de8();
              if ((iVar12 == 0) ||
                 (puVar13 = *(undefined **)(param_1 + 8), puVar4 = param_3, func_0x00010c260760(),
                 puVar13 != puVar4)) {
                bVar1 = false;
              }
              else {
                puVar13 = *(undefined **)(param_1 + 0x50);
                puVar4 = param_3;
                func_0x00010c260840(param_3);
                bVar1 = puVar13 == puVar4;
              }
              _objc_release(puVar3);
              goto LAB_107dcd8c4;
            }
            bVar1 = false;
          }
          else {
            if (puVar8 != (undefined *)0x0) {
              puVar11 = puVar9;
              func_0x00010c071ae0();
              _objc_release(puVar8);
              _objc_release(puVar9);
              if ((int)puVar11 == 0) goto LAB_107dcd7e8;
              goto LAB_107dcd800;
            }
            puVar11 = (undefined *)0x0;
LAB_107dcd8b0:
            bVar1 = false;
LAB_107dcd8c4:
            _objc_release(puVar11);
          }
          _objc_release(puVar9);
        }
        else {
          if (puVar7 != (undefined *)0x0) {
            puVar9 = puVar8;
            func_0x00010c071ae0();
            _objc_release(puVar7);
            _objc_release(puVar8);
            if ((int)puVar9 == 0) goto LAB_107dcd778;
            goto LAB_107dcd790;
          }
LAB_107dcd7e8:
          bVar1 = false;
        }
        _objc_release(puVar8);
      }
      else {
        if (puVar6 != (undefined *)0x0) {
          puVar8 = puVar7;
          func_0x00010c071ae0();
          _objc_release(puVar6);
          _objc_release(puVar7);
          if ((int)puVar8 == 0) goto LAB_107dcd708;
          goto LAB_107dcd720;
        }
LAB_107dcd778:
        bVar1 = false;
      }
      _objc_release(puVar7);
    }
    else {
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar6;
        func_0x00010c071ae0();
        _objc_release(puVar5);
        _objc_release(puVar6);
        if ((int)puVar7 == 0) goto LAB_107dcd698;
        goto LAB_107dcd6b0;
      }
LAB_107dcd708:
      bVar1 = false;
    }
    _objc_release(puVar6);
LAB_107dcd8ec:
    _objc_release(puVar5);
  }
  else {
    if (puVar2 == (undefined *)0x0) {
LAB_107dcd698:
      bVar1 = false;
      goto LAB_107dcd8ec;
    }
    puVar6 = puVar5;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    _objc_release(puVar5);
    if ((int)puVar6 != 0) goto LAB_107dcd640;
    bVar1 = false;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
LAB_107dcd904:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107dcd930; end: 107dcd937; -[SCOperaSubscriptionConfiguration subscriptionButtonState] */

undefined8 FUN_107dcd930(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dcd938; end: 107dcd93f; -[SCOperaSubscriptionConfiguration subscriptionPrimaryColor] */

undefined8 FUN_107dcd938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dcd940; end: 107dcd947; -[SCOperaSubscriptionConfiguration subscriptionSecondaryColor] */

undefined8 FUN_107dcd940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dcd948; end: 107dcd94f; -[SCOperaSubscriptionConfiguration subscriptionBarColor] */

undefined8 FUN_107dcd948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dcd950; end: 107dcd957; -[SCOperaSubscriptionConfiguration subscriptionIconKey] */

undefined8 FUN_107dcd950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dcd958; end: 107dcd95f; -[SCOperaSubscriptionConfiguration subscribeButtonTitle] */

undefined8 FUN_107dcd958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dcd960; end: 107dcd967; -[SCOperaSubscriptionConfiguration unsubscribeButtonTitle] */

undefined8 FUN_107dcd960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dcd968; end: 107dcd96f; -[SCOperaSubscriptionConfiguration loadingButtonTitle] */

undefined8 FUN_107dcd968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dcd970; end: 107dcd977; -[SCOperaSubscriptionConfiguration reverseLoadingButtonTitle] */

undefined8 FUN_107dcd970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dcd978; end: 107dcd97f; -[SCOperaSubscriptionConfiguration subscriptionMethod] */

undefined8 FUN_107dcd978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107dcd980; end: 107dcd9f7; -[SCOperaSubscriptionConfiguration .cxx_destruct] */

void FUN_107dcd980(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107dcd9f8; end: 107dcda43; +[SCOperaShowActionMenuButtonLayer layerWithPage:] */

void FUN_107dcd9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6958;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dcda44; end: 107dcdc8f; -[SCOperaShowActionMenuButtonLayer initWithPage:] */

undefined1 * FUN_107dcda44(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  float fVar7;
  double dVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126fb208;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar3 + 0x20),param_4);
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010bfb2c80(uVar1);
    _objc_release(uVar1);
    dVar8 = (double)param_1;
    *(double *)((long)puVar3 + 0x10) = dVar8;
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    fVar7 = SUB84(dVar8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    *(char *)((long)puVar3 + 8) = (char)uVar4;
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010bfb2c80(uVar1);
    _objc_release(uVar1);
    *(double *)((long)puVar3 + 0x18) = (double)fVar7;
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    *(char *)((long)puVar3 + 10) = (char)uVar4;
    *(bool *)((long)puVar3 + 9) = 0.0 < *(double *)((long)puVar3 + 0x18);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  return (undefined1 *)puVar3;
}



/* Entry: 107dcdc90; end: 107dcdc97; -[SCOperaShowActionMenuButtonLayer type] */

undefined8 FUN_107dcdc90(void)

{
  return 0x17;
}



/* Entry: 107dcdc98; end: 107dcde73; -[SCOperaShowActionMenuButtonLayer isEqual:] */

bool FUN_107dcdc98(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  
  _objc_retain(param_4);
  puVar3 = param_4;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d6958;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126d6958;
  if (puVar3 != puVar4) {
    bVar2 = false;
    goto LAB_107dcde4c;
  }
  _objc_retain(param_4);
  _objc_opt_class(puVar5);
  puVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar5);
  puVar5 = param_4;
  if (((ulong)puVar3 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(param_4);
  dVar9 = *(double *)(param_2 + 0x10);
  func_0x00010c2bec60(puVar5);
  if ((dVar9 == param_1) &&
     (bVar1 = param_2[8], puVar3 = puVar5, func_0x00010c08ce40(), (uint)bVar1 == (uint)puVar3)) {
    puVar3 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c1070e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c1070e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    if (puVar4 == puVar7) {
      _objc_release(puVar7);
      _objc_release(puVar4);
LAB_107dcddf0:
      bVar1 = param_2[9];
      puVar8 = puVar5;
      func_0x00010c07b480();
      if ((uint)bVar1 != (uint)puVar8) goto LAB_107dcde20;
      bVar1 = param_2[10];
      puVar8 = puVar5;
      func_0x00010bf021e0(puVar5);
      bVar2 = (uint)bVar1 == (uint)puVar8;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        _objc_release();
      }
      else {
        puVar8 = puVar4;
        func_0x00010c071ae0();
        _objc_release(puVar7);
        _objc_release(puVar4);
        if ((int)puVar8 != 0) goto LAB_107dcddf0;
      }
LAB_107dcde20:
      bVar2 = false;
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    bVar2 = false;
  }
  _objc_release(puVar5);
LAB_107dcde4c:
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 107dcde74; end: 107dcde7b; -[SCOperaShowActionMenuButtonLayer yOffset] */

undefined8 FUN_107dcde74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dcde7c; end: 107dcde83; -[SCOperaShowActionMenuButtonLayer layoutInsideMediaFrame] */

undefined1 FUN_107dcde7c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dcde84; end: 107dcde8b; -[SCOperaShowActionMenuButtonLayer isProgressBarAlignedToTop] */

undefined1 FUN_107dcde84(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dcde8c; end: 107dcde93; -[SCOperaShowActionMenuButtonLayer topOffsetWhenOverMediaContent] */

undefined8 FUN_107dcde8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dcde94; end: 107dcde9b; -[SCOperaShowActionMenuButtonLayer alwaysUseTopOffset] */

undefined1 FUN_107dcde94(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}


