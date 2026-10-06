/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105aa7be4; end: 105aa7de7; -[SCSpectaclesPostPairingManager initWithDevice:onDemandResourceFetching:playerProvider:otaManager:phaseOrder:analyticsLogger:onboardingSessionInfo:lagunaId:runtime:composerCoreUIServices:] */

undefined8 *
FUN_105aa7be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126ebad8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c0d3c80();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 105aa7de8; end: 105aa7deb; -[SCSpectaclesPostPairingManager startPostPairingFlow] */

void FUN_105aa7de8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be62390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__navigateToNextPhase_112576280);
  return;
}



/* Entry: 105aa7dec; end: 105aa7e43; -[SCSpectaclesPostPairingManager postPairingPhaseDidComplete:] */

void FUN_105aa7dec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1;
  func_0x00010bdf6da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab640(uVar2);
  _objc_release(lVar1);
  func_0x00010be5d920(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be62390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__navigateToNextPhase_112576280);
  return;
}



/* Entry: 105aa7e44; end: 105aa7eaf; -[SCSpectaclesPostPairingManager postPairingPhaseDidFail:] */

void FUN_105aa7e44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1;
  func_0x00010bdf6da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab620(uVar2,param_2,lVar1,2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c104a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa7eb0; end: 105aa7f07; -[SCSpectaclesPostPairingManager postPairingPhaseDidSkip:] */

void FUN_105aa7eb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1;
  func_0x00010bdf6da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab640(uVar2);
  _objc_release(lVar1);
  func_0x00010be5d920(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be62390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__navigateToNextPhase_112576280);
  return;
}



/* Entry: 105aa7f08; end: 105aa7f73; -[SCSpectaclesPostPairingManager postPairingPhaseDidUpdateLater:] */

void FUN_105aa7f08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1;
  func_0x00010bdf6da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab620(uVar2,param_2,lVar1,2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c104a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa7f74; end: 105aa7fa7; -[SCSpectaclesPostPairingManager postPairingPhaseDidUpdateUIDataSource:] */

void FUN_105aa7f74(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c104aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa7fa8; end: 105aa8057; -[SCSpectaclesPostPairingManager _navigateToNextPhase] */

void FUN_105aa7fa8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be20c20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c104a80();
    _objc_release(param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = param_1;
    func_0x00010bdf6da0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab660(uVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar3);
    func_0x00010be84e20(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa8058; end: 105aa80ab; -[SCSpectaclesPostPairingManager _pushToUIContainer:] */

void FUN_105aa8058(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c104a60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa80ac; end: 105aa8213; -[SCSpectaclesPostPairingManager _taskForPage:] */

void FUN_105aa80ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *unaff_x20;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      puVar4 = PTR_PTR_1126c1f40;
      _objc_alloc(PTR_PTR_1126c1f40);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfa1c80(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2a54c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c063060(puVar4,param_2,uVar3,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else if (param_3 == 1) {
      puVar4 = PTR_PTR_1126c1f48;
      _objc_alloc(PTR_PTR_1126c1f48);
      func_0x00010c00bee0();
    }
    else {
      if (param_3 != 2) goto LAB_105aa81fc;
      puVar4 = PTR_PTR_1126c1f50;
      _objc_alloc(PTR_PTR_1126c1f50);
      func_0x00010c00bf60();
    }
  }
  else {
    puVar4 = PTR_PTR_1126c1f58;
    if (param_3 != 3) {
      if (param_3 == 4) {
        puVar4 = PTR_PTR_1126c1f68;
        _objc_alloc(PTR_PTR_1126c1f68);
        func_0x00010c00bf80();
        goto LAB_105aa81f0;
      }
      puVar4 = PTR_PTR_1126c1f60;
      if (param_3 != 5) goto LAB_105aa81fc;
    }
    _objc_alloc(puVar4);
    func_0x00010c00bf40();
  }
LAB_105aa81f0:
  func_0x00010c1db000(puVar4,param_2,param_1);
  unaff_x20 = puVar4;
LAB_105aa81fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105aa8214; end: 105aa827f; -[SCSpectaclesPostPairingManager _getNextTask] */

void FUN_105aa8214(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    func_0x00010becac60(param_1,param_2,(long)(int)uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105aa8280; end: 105aa82db; -[SCSpectaclesPostPairingManager _markTaskAsComplete] */

void FUN_105aa8280(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1db000(*(undefined8 *)(param_1 + 0x18),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aa82dc; end: 105aa847b; -[SCSpectaclesPostPairingManager _currentOnboardingSessionInfo:] */

void FUN_105aa82dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126c1ee8;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0e8140(uVar2);
  uVar3 = param_4;
  func_0x00010c0e80a0(param_4);
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0f3480(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar4,param_3,uVar5);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf70720(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfb0d20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfd38e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf700a0(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0f3420();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0f3480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031a60(param_1,puVar1,param_3,uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aa847c; end: 105aa8493; -[SCSpectaclesPostPairingManager delegate] */

void FUN_105aa847c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aa8494; end: 105aa849f; -[SCSpectaclesPostPairingManager setDelegate:] */

void FUN_105aa8494(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105aa84a0; end: 105aa8543; -[SCSpectaclesPostPairingManager .cxx_destruct] */

void FUN_105aa84a0(long param_1)

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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105aa8544; end: 105aa85d3; -[SCSpectaclesComposerWiFiSelectorViewController initWithContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105aa8544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ebae0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11272ea40;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aa85d4; end: 105aa85e3; -[SCSpectaclesComposerWiFiSelectorViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa85d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11272ea40));
  return;
}



/* Entry: 105aa85e4; end: 105aa85e7; -[SCSpectaclesComposerWiFiSelectorViewController preferredStatusBarStyle] */

undefined8 FUN_105aa85e4(long param_1)

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



/* Entry: 105aa85e8; end: 105aa85ef; -[SCSpectaclesComposerWiFiSelectorViewController prefersStatusBarHidden] */

undefined8 FUN_105aa85e8(void)

{
  return 0;
}



/* Entry: 105aa85f0; end: 105aa8663; -[SCSpectaclesComposerWiFiSelectorViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_105aa85f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebae0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105aa8664; end: 105aa8723; -[SCSpectaclesComposerWiFiSelectorViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa8664(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebae0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11272ea44) = puVar3;
  _objc_release(puVar1);
  return;
}



/* Entry: 105aa8724; end: 105aa876b; -[SCSpectaclesComposerWiFiSelectorViewController viewWillAppear:] */

void FUN_105aa8724(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebae0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 105aa876c; end: 105aa8773; -[SCSpectaclesComposerWiFiSelectorViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_105aa876c(void)

{
  return 1;
}



/* Entry: 105aa8774; end: 105aa877b; -[SCSpectaclesComposerWiFiSelectorViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_105aa8774(void)

{
  return 0;
}



/* Entry: 105aa877c; end: 105aa878f; -[SCSpectaclesComposerWiFiSelectorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa877c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ea40,0);
  return;
}



/* Entry: 105aa8790; end: 105aa8867; -[SCSpectaclesPostPairingFlowController initWithDelegate:postPairingManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aa8790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebae8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272ea48),param_3);
    lVar3 = (long)_DAT_11272ea4c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aa8868; end: 105aa88c7; -[SCSpectaclesPostPairingFlowController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa8868(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_11272ea48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c249500();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126ebae8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105aa88c8; end: 105aa8d4b; -[SCSpectaclesPostPairingFlowController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa88c8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR_PTR_1126ebae8;
  lStack_b0 = param_1;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar15 = (long)_DAT_11272ea50;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar2);
  func_0x00010befbb60(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010bf1ff80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c2793a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar12);
  _objc_release(lVar15);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar14);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(lVar4);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c1f70;
  _objc_alloc();
  func_0x00010c00a2c0();
  lVar14 = (long)_DAT_11272ea54;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_a0 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08de00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  uStack_98 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c2793a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar9);
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(lVar4);
  _objc_release(uVar12);
  func_0x00010c24ff20(*(undefined8 *)(param_1 + _DAT_11272ea4c));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(lVar1 + _DAT_11272ea54);
  func_0x00010be34ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aa8d4c; end: 105aa8d97; -[SCSpectaclesPostPairingFlowController _refreshPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa8d4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ea54);
  func_0x00010be34ea0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11272ea58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa8d98; end: 105aa8df3; -[SCSpectaclesPostPairingFlowController _setPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa8d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0834c0();
  if ((int)lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_11272ea58);
    func_0x00010c071ae0(uVar2,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      func_0x00010bed6620(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aa8df4; end: 105aa8ef7; -[SCSpectaclesPostPairingFlowController _updateCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa8df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11272ea58;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf38e80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105aa8ef8;
  puStack_50 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105aa8f60;
  puStack_80 = &UNK_110848bd8;
  uStack_78 = uVar2;
  lStack_70 = param_1;
  lStack_48 = param_1;
  _objc_retain(uVar2);
  func_0x00010bf03420(0x3fd3333333333333,puVar1,param_2,&puStack_68,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105aa8ef8; end: 105aa8f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa8ef8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ea54));
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ea50));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aa8f90; end: 105aa914f; -[SCSpectaclesPostPairingFlowController _showCurrentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa8f90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar3 = (long)_DAT_11272ea58;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf4d5e0();
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272ea50);
    uVar4 = 0x4055000000000000;
    uVar5 = 0x4043000000000000;
    uVar7 = 0x4042800000000000;
    uVar6 = 0x4034000000000000;
  }
  else {
    if (lVar1 != 0) goto LAB_105aa9014;
    uVar4 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar7 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272ea50);
  }
  func_0x00010c1b9b80(uVar4,uVar5,uVar6,uVar7,uVar2);
LAB_105aa9014:
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf38e80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc7bc0(param_1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1cbec0(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ea54);
  lVar1 = param_1;
  func_0x00010be34ea0(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf38e80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105aa9150;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68,0);
  return;
}



/* Entry: 105aa9150; end: 105aa9197;  */

/* WARNING: Possible PIC construction at 0x000105aa9178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105aa917c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ea54),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105aa9198; end: 105aa920b; -[SCSpectaclesPostPairingFlowController _removePage:] */

void FUN_105aa9198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c2a6740(param_3,param_2,0);
  func_0x00010c12c8e0(param_3);
  func_0x00010bf17b00(param_3,param_2,0,1);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010bf941a0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aa920c; end: 105aa959f; -[SCSpectaclesPostPairingFlowController _addPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa920c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined8 uVar27;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c2a6740(param_3,param_2,param_1);
  func_0x00010bef7700(param_1,param_2,param_3);
  func_0x00010bf17b00(param_3,param_2,1,1);
  lVar25 = (long)_DAT_11272ea50;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  uVar27 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar23,param_2,uVar27);
  _objc_release(uVar27);
  func_0x00010bf941a0(param_3);
  func_0x00010bf77e80(param_3,param_2,param_1);
  uVar27 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar27);
  puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar27 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar23;
  func_0x00010bf493a0(uVar23,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  uStack_88 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  uStack_80 = uVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  uStack_78 = uVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar15 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar24;
  func_0x00010beef8c0(puVar19);
  _objc_release(puVar24);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar23);
  _objc_release(uVar27);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar22);
  puVar19 = puVar22;
  func_0x00010c0d5de0();
  puVar24 = (undefined *)0x0;
  uVar27 = 0;
  if ((long)puVar19 < 2) {
    if (puVar19 == (undefined *)0x0) {
      puVar24 = (undefined *)0x0;
      ppuVar26 = (undefined **)0x0;
      uVar27 = 1;
      goto LAB_105aa965c;
    }
    ppuVar26 = (undefined **)0x0;
    if (puVar19 != (undefined *)0x1) goto LAB_105aa965c;
    ppuVar26 = &PTR____CFConstantStringClassReference_110e1b718;
    func_0x000105aac750();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar19 == (undefined *)0x2) {
    ppuVar26 = &PTR____CFConstantStringClassReference_110e1b738;
    func_0x000105aac768();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar26 = (undefined **)0x0;
    if (puVar19 != (undefined *)0x3) goto LAB_105aa965c;
    ppuVar26 = &PTR____CFConstantStringClassReference_110e1b758;
    func_0x000105aac780();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar27 = 0;
  puVar24 = puVar19;
LAB_105aa965c:
  puVar19 = PTR_PTR_1126c1f78;
  _objc_alloc(PTR_PTR_1126c1f78);
  puVar20 = puVar22;
  func_0x00010c2711a0(puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar22;
  func_0x00010c260dc0(puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  func_0x00010c053720(puVar19,param_2,puVar20,puVar21,puVar24,ppuVar26,uVar27,1);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 105aa95a0; end: 105aa96f3; -[SCSpectaclesPostPairingFlowController _headerViewModelFromPage:] */

void FUN_105aa95a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d5de0();
  lVar4 = 0;
  uVar6 = 0;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      lVar4 = 0;
      ppuVar5 = (undefined **)0x0;
      uVar6 = 1;
      goto LAB_105aa965c;
    }
    ppuVar5 = (undefined **)0x0;
    if (lVar1 != 1) goto LAB_105aa965c;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e1b718;
    func_0x000105aac750();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 2) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e1b738;
    func_0x000105aac768();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = (undefined **)0x0;
    if (lVar1 != 3) goto LAB_105aa965c;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e1b758;
    func_0x000105aac780();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = 0;
  lVar4 = lVar1;
LAB_105aa965c:
  puVar2 = PTR_PTR_1126c1f78;
  _objc_alloc(PTR_PTR_1126c1f78);
  lVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c053720(puVar2,param_2,lVar1,lVar3,lVar4,ppuVar5,uVar6,1);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105aa96f4; end: 105aa9883; -[SCSpectaclesPostPairingFlowController _cancelAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa96f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105aac768();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105aac798();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000105aac7b0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0f30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(puVar1 + 0x20) + (long)_DAT_11272ea58),
             PTR_s_pairingFlowControllerDidTapNavBu_11261a640);
  return;
}



/* Entry: 105aa9884; end: 105aa98bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9884(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0f30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ea58),
             PTR_s_pairingFlowControllerDidTapNavBu_11261a640);
  return;
}



/* Entry: 105aa98c0; end: 105aa98cf;  */

void FUN_105aa98c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105aa98d0; end: 105aa991b; -[SCSpectaclesPostPairingFlowController postPairingManagerDidRequestDismiss:cancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa98d0(long param_1)

{
  param_1 = param_1 + _DAT_11272ea48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c249520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa991c; end: 105aa9923; -[SCSpectaclesPostPairingFlowController postPairingManager:didMoveToNextPhase:] */

void FUN_105aa991c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setPage__112587248,param_4);
  return;
}



/* Entry: 105aa9924; end: 105aa9927; -[SCSpectaclesPostPairingFlowController postPairingManagerDidUpdatePhaseState:] */

void FUN_105aa9924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be887f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshPage_11257fb98);
  return;
}



/* Entry: 105aa9928; end: 105aa99c7; -[SCSpectaclesPostPairingFlowController pairingHeaderDidTapNavButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9928(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != *(long *)(param_1 + _DAT_11272ea54)) {
    return;
  }
  lVar2 = (long)_DAT_11272ea58;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c0d5de0();
  if (lVar1 != 3) {
    if (lVar1 == 2) {
      lVar1 = param_1;
      func_0x00010bdda360(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10eda0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    if (lVar1 != 1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_pairingFlowControllerDidTapNavBu_11261a640);
  return;
}



/* Entry: 105aa99c8; end: 105aa99cb; -[SCSpectaclesPostPairingFlowController pairingHeaderDidTapBackButton:] */

void FUN_105aa99c8(void)

{
  return;
}



/* Entry: 105aa99cc; end: 105aa99d7; -[SCSpectaclesPostPairingFlowController backgroundExitBehavior] */

void FUN_105aa99cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_neverExit_112613b08);
  return;
}



/* Entry: 105aa99d8; end: 105aa99e7; -[SCSpectaclesPostPairingFlowController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa99d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ea58),PTR_s_childViewController_1125abd48);
  return;
}



/* Entry: 105aa99e8; end: 105aa99f7; -[SCSpectaclesPostPairingFlowController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa99e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ea58),PTR_s_childViewController_1125abd48);
  return;
}



/* Entry: 105aa99f8; end: 105aa9a73; -[SCSpectaclesPostPairingFlowController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa99f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ea4c,0);
  _objc_destroyWeak(param_1 + _DAT_11272ea48);
  _objc_storeStrong(param_1 + _DAT_11272ea5c,0);
  _objc_storeStrong(param_1 + _DAT_11272ea58,0);
  _objc_storeStrong(param_1 + _DAT_11272ea50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ea54,0);
  return;
}



/* Entry: 105aa9a74; end: 105aa9b63; -[SCSpectaclesLocationPhase initWithDevice:onDemandResourceFetching:playerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aa9a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ebaf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272ea60;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1f80;
    _objc_alloc();
    func_0x00010c031300();
    lVar4 = (long)_DAT_11272ea64;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aa9b64; end: 105aa9c03; -[SCSpectaclesLocationPhase pairingLocationViewControllerDidEnable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9b64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ea60);
  func_0x00010bfa1c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09f4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289d40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0fa9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa9c04; end: 105aa9c13; -[SCSpectaclesLocationPhase title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0faa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ea64),PTR_s_phaseTitle_11261c4a8);
  return;
}



/* Entry: 105aa9c14; end: 105aa9c23; -[SCSpectaclesLocationPhase subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0faa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ea64),PTR_s_phaseSubtitle_11261c4a0);
  return;
}



/* Entry: 105aa9c24; end: 105aa9c2b; -[SCSpectaclesLocationPhase navButtonAction] */

undefined8 FUN_105aa9c24(void)

{
  return 1;
}



/* Entry: 105aa9c2c; end: 105aa9c33; -[SCSpectaclesLocationPhase contentSize] */

undefined8 FUN_105aa9c2c(void)

{
  return 0;
}



/* Entry: 105aa9c34; end: 105aa9c63; -[SCSpectaclesLocationPhase childViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9c34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ea64);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aa9c64; end: 105aa9c6b; -[SCSpectaclesLocationPhase onboardingPage] */

undefined8 FUN_105aa9c64(void)

{
  return 0xf;
}



/* Entry: 105aa9c6c; end: 105aa9ca3; -[SCSpectaclesLocationPhase pairingFlowControllerDidTapNavButton] */

void FUN_105aa9c6c(undefined8 param_1)

{
  func_0x00010c0fa9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa9ca4; end: 105aa9ce3; -[SCSpectaclesLocationPhase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9ca4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ea64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ea60,0);
  return;
}



/* Entry: 105aa9ce4; end: 105aa9f3b; -[SCSpectaclesOTAPhase initWithDevice:onDemandResourceFetching:playerProvider:otaManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105aa9ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126ebaf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11272ea68;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11272ea6c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ea70);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ea70) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c252740(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c1f88;
    _objc_alloc();
    func_0x00010c031340();
    lVar7 = (long)_DAT_11272ea74;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105aa9f3c; end: 105aa9f83;  */

void FUN_105aa9f3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aa9f84; end: 105aaa0c7; -[SCSpectaclesOTAPhase _updateOTAUpdateAppState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aa9f84(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11272ea78;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    lVar5 = (long)_DAT_11272ea74;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c0834c0();
    if (iVar1 != 0) {
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = param_3;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bfed8e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc9a0();
      _objc_release(uVar3);
      if ((*(byte *)(param_1 + _DAT_11272ea7c) & 1) == 0) {
        func_0x00010c0fa9e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c104ae0();
        _objc_release(param_1);
      }
      else {
        func_0x00010c23ac60(*(undefined8 *)(param_1 + lVar5));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aaa0c8; end: 105aaa0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa0c8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272ea7c) = param_4;
  return;
}



/* Entry: 105aaa0e0; end: 105aaa11b;  */

void FUN_105aaa0e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fa9e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aaa11c; end: 105aaa193; -[SCSpectaclesOTAPhase OTAViewControllerDidClickUpdateNow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa11c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c288060(*(undefined8 *)(param_1 + _DAT_11272ea6c));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ea68);
  func_0x00010c0692a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18caa0();
  _objc_release(uVar1);
  func_0x00010c0fa9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aaa194; end: 105aaa1a3; -[SCSpectaclesOTAPhase title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0faa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ea74),PTR_s_phaseTitle_11261c4a8);
  return;
}



/* Entry: 105aaa1a4; end: 105aaa1b3; -[SCSpectaclesOTAPhase subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0faa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ea74),PTR_s_phaseSubtitle_11261c4a0);
  return;
}



/* Entry: 105aaa1b4; end: 105aaa1bb; -[SCSpectaclesOTAPhase navButtonAction] */

undefined8 FUN_105aaa1b4(void)

{
  return 3;
}



/* Entry: 105aaa1bc; end: 105aaa1c3; -[SCSpectaclesOTAPhase contentSize] */

undefined8 FUN_105aaa1bc(void)

{
  return 0;
}



/* Entry: 105aaa1c4; end: 105aaa1f3; -[SCSpectaclesOTAPhase childViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa1c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ea74);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aaa1f4; end: 105aaa1fb; -[SCSpectaclesOTAPhase onboardingPage] */

undefined8 FUN_105aaa1f4(void)

{
  return 0xc;
}



/* Entry: 105aaa1fc; end: 105aaa233; -[SCSpectaclesOTAPhase pairingFlowControllerDidTapNavButton] */

void FUN_105aaa1fc(undefined8 param_1)

{
  func_0x00010c0fa9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aaa234; end: 105aaa2a3; -[SCSpectaclesOTAPhase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa234(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ea70,0);
  _objc_storeStrong(param_1 + _DAT_11272ea78,0);
  _objc_storeStrong(param_1 + _DAT_11272ea74,0);
  _objc_storeStrong(param_1 + _DAT_11272ea6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ea68,0);
  return;
}



/* Entry: 105aaa2a4; end: 105aaa3db; -[SCSpectaclesPairingCompletionPhase initWithDevice:onDemandResourceFetching:playerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aaa2a4(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ebb00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11272ea80;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined ***)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    ppuVar3 = param_3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c074be0();
    _objc_release(ppuVar3);
    if ((int)ppuVar4 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      func_0x000109026248();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126c1f90;
    _objc_alloc();
    func_0x00010c031320();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ea84);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ea84) = puVar5;
    _objc_release(uVar2);
    _objc_release(ppuVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aaa3dc; end: 105aaa49f; -[SCSpectaclesPairingCompletionPhase pairingCompletionViewControllerRequestsDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa3dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11272ea80;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0692a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe680();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfa1c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf0ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe860();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c0fa9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aaa4a0; end: 105aaa4ab; -[SCSpectaclesPairingCompletionPhase title] */

undefined ** FUN_105aaa4a0(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 105aaa4ac; end: 105aaa4b7; -[SCSpectaclesPairingCompletionPhase subtitle] */

undefined ** FUN_105aaa4ac(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 105aaa4b8; end: 105aaa4bf; -[SCSpectaclesPairingCompletionPhase navButtonAction] */

undefined8 FUN_105aaa4b8(void)

{
  return 0;
}



/* Entry: 105aaa4c0; end: 105aaa4c7; -[SCSpectaclesPairingCompletionPhase contentSize] */

undefined8 FUN_105aaa4c0(void)

{
  return 0;
}



/* Entry: 105aaa4c8; end: 105aaa4f7; -[SCSpectaclesPairingCompletionPhase childViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa4c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ea84);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aaa4f8; end: 105aaa52f; -[SCSpectaclesPairingCompletionPhase pairingFlowControllerDidTapNavButton] */

void FUN_105aaa4f8(undefined8 param_1)

{
  func_0x00010c0fa9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aaa530; end: 105aaa56f; -[SCSpectaclesPairingCompletionPhase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa530(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ea80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ea84,0);
  return;
}



/* Entry: 105aaa570; end: 105aaa693; -[SCSpectaclesPasscodePhaseContainerViewController initWithDevice:lagunaId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aaa570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ebb08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11272ea88;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ea8c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272ea8c) = uVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11272ea90;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272ea94),param_5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ea98);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ea98) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aaa694; end: 105aaa93b; -[SCSpectaclesPasscodePhaseContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa694(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126ebb08;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar10 = (long)_DAT_11272ea9c;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  puStack_90 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_90);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  func_0x00010bec0420(param_1);
  func_0x00010beac0a0(param_1);
  lVar6 = *(long *)(param_1 + _DAT_11272eaa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136f40();
  lVar10 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105aaa93c;
  lVar9 = (long)_DAT_11272eaa0;
  if (*(long *)(lVar10 + lVar9) == 0) {
    uVar7 = *(undefined8 *)(lVar10 + _DAT_11272ea88);
    puStack_d0 = puVar1;
    uStack_c8 = uVar8;
    lStack_c0 = lVar4;
    lStack_b8 = lVar2;
    uStack_b0 = uVar3;
    lStack_a8 = lVar6;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf70f40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar10 + lVar9);
    *(undefined8 *)(lVar10 + lVar9) = uVar8;
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_initWeak(auStack_d8,lVar10);
    uVar3 = *(undefined8 *)(lVar10 + lVar9);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf70f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_d8);
    uVar7 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
  }
  return;
}



/* Entry: 105aaa93c; end: 105aaaa9f; -[SCSpectaclesPasscodePhaseContainerViewController _setupDeviceSecurityManagerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaa93c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar4 = (long)_DAT_11272eaa0;
  if (*(long *)(param_1 + lVar4) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272ea88);
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf70f40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf70f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar1 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105aaaaa0; end: 105aaaae7;  */

void FUN_105aaaaa0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32d80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aaaae8; end: 105aaacbf; -[SCSpectaclesPasscodePhaseContainerViewController _handleUserDeviceSecurityDataResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaaae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
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
  pcStack_48 = FUN_105aaacc0;
  uStack_40 = 0x105aaacd0;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105aaacc0;
  uStack_70 = 0x105aaacd0;
  uStack_68 = 0;
  func_0x00010c0bfa80(param_3);
  lVar2 = (long)_DAT_11272eaa4;
  if ((*(long *)(param_1 + lVar2) == 0) || (*(char *)(param_1 + _DAT_11272eaa8) != '\x01')) {
    func_0x00010bec31c0(param_1);
    if (*(long *)(param_1 + lVar2) != 0) goto LAB_105aaac58;
    if (puStack_88[5] == 0) {
      iVar1 = (int)puStack_58[5];
      func_0x00010c137520();
      if (iVar1 != 0) {
        param_1 = param_1 + _DAT_11272ea94;
        _objc_loadWeakRetained(param_1);
        func_0x00010c2494a0();
        goto LAB_105aaabf8;
      }
    }
    func_0x00010beaeb00(param_1);
  }
  else {
    param_1 = param_1 + _DAT_11272ea94;
    _objc_loadWeakRetained(param_1);
    func_0x00010c249480();
LAB_105aaabf8:
    _objc_release(param_1);
  }
LAB_105aaac58:
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105aaacc0; end: 105aaacd7;  */

void FUN_105aaacc0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105aaacd8; end: 105aaad47;  */

void FUN_105aaacd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aaad48; end: 105aaada3; -[SCSpectaclesPasscodePhaseContainerViewController _startLoadingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaad48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eaa4);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ea9c),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 105aaada4; end: 105aaadff; -[SCSpectaclesPasscodePhaseContainerViewController _stopLoadingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaada4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eaa4);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ea9c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105aaae00; end: 105aaaf5b; -[SCSpectaclesPasscodePhaseContainerViewController _setupPasscodeViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaae00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c1f98;
  _objc_alloc();
  func_0x00010c00a2c0();
  func_0x00010c2a6740();
  func_0x00010bef7700(param_1,param_2,puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010bf77e80(puVar1,param_2,param_1);
  puVar3 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde64c0(param_1,param_2,puVar3,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar3);
  lVar5 = (long)_DAT_11272eaa4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar4);
  lVar2 = param_1 + _DAT_11272ea94;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c249460(lVar2,param_2,param_1,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105aaaf5c; end: 105aab223; -[SCSpectaclesPasscodePhaseContainerViewController _constrainAllFrom:to:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aaaf5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c219b60(param_3,param_2,0);
  func_0x00010c219b60(param_4,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  lStack_88 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf493a0(lVar5,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  lStack_80 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493a0(lVar9,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  lStack_78 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar14 = param_4;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar15 = uVar14;
  func_0x00010c2793a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar13;
  func_0x00010bf493a0(lVar13,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 4;
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar18);
  uVar19 = *(undefined8 *)(lVar2 + _DAT_11272eaac);
  *(undefined8 *)(lVar2 + _DAT_11272eaac) = uVar18;
  _objc_retain(uVar18);
  _objc_release(uVar19);
  func_0x00010bec0420(lVar2);
  *(undefined1 *)(lVar2 + _DAT_11272eaa8) = 1;
  uVar19 = *(undefined8 *)(lVar2 + _DAT_11272eaa0);
  func_0x00010c269d40(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d680();
  _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar19);
  return;
}



/* Entry: 105aab224; end: 105aab2bf; -[SCSpectaclesPasscodePhaseContainerViewController spectaclesPasscodeViewController:didEnterPasscode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aab224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eaac);
  *(undefined8 *)(param_1 + _DAT_11272eaac) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010bec0420(param_1);
  *(undefined1 *)(param_1 + _DAT_11272eaa8) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eaa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d680();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aab2c0; end: 105aab31b; -[SCSpectaclesPasscodePhaseContainerViewController spectaclesPasscodeViewController:didUpdateTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aab2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272ea94;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c249460();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aab31c; end: 105aab3c7; -[SCSpectaclesPasscodePhaseContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aab31c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ea98,0);
  _objc_storeStrong(param_1 + _DAT_11272eaa0,0);
  _objc_storeStrong(param_1 + _DAT_11272ea9c,0);
  _objc_storeStrong(param_1 + _DAT_11272eaa4,0);
  _objc_storeStrong(param_1 + _DAT_11272eaac,0);
  _objc_destroyWeak(param_1 + _DAT_11272ea94);
  _objc_storeStrong(param_1 + _DAT_11272ea90,0);
  _objc_storeStrong(param_1 + _DAT_11272ea8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ea88,0);
  return;
}



/* Entry: 105aab3c8; end: 105aab4f7; -[SCSpectaclesPasscodePhase initWithDevice:lagunaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aab3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ebb10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bfa1c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf70f40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161e20();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c1fa0;
    _objc_alloc();
    func_0x00010c00bf00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272eab0);
    *(undefined **)((long)puVar1 + (long)_DAT_11272eab0) = puVar3;
    _objc_release();
    func_0x000105aae5b8();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272eab4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272eab4) = uVar4;
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aab4f8; end: 105aab527; -[SCSpectaclesPasscodePhase title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aab4f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eab4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aab528; end: 105aab52b; -[SCSpectaclesPasscodePhase subtitle] */

void FUN_105aab528(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b778;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b778,
                      &PTR____CFConstantStringClassReference_110e1b798,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


