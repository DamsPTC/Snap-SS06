/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051f4a08; end: 1051f4a77; -[SCModalOperaViewController viewDidDisappear:] */

void FUN_1051f4a08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6e20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)uVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfb00();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1051f4a78; end: 1051f4a7f; -[SCModalOperaViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_1051f4a78(void)

{
  return 1;
}



/* Entry: 1051f4a80; end: 1051f4a83; -[SCModalOperaViewController operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_1051f4a80(void)

{
  return;
}



/* Entry: 1051f4a84; end: 1051f4a87; -[SCModalOperaViewController operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_1051f4a84(void)

{
  return;
}



/* Entry: 1051f4a88; end: 1051f4a8b; -[SCModalOperaViewController operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1051f4a88(void)

{
  return;
}



/* Entry: 1051f4a8c; end: 1051f4aa3; -[SCModalOperaViewController operaPresenterDidCancelDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4a8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271f500);
  *(undefined8 *)(param_1 + _DAT_11271f500) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051f4aa4; end: 1051f4aa7; -[SCModalOperaViewController operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_1051f4aa4(void)

{
  return;
}



/* Entry: 1051f4aa8; end: 1051f4ae3; -[SCModalOperaViewController operaPresenterDidFailToPresent:] */

void FUN_1051f4aa8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6e20;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
  return;
}



/* Entry: 1051f4ae4; end: 1051f4bbb; -[SCModalOperaViewController operaPresenterDidFinishDismissing:] */

void FUN_1051f4ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051f4bbc;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  puStack_68 = PTR_PTR_1126e6e20;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1051f4bbc; end: 1051f4c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4bbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11271f500;
    if (*(long *)(param_1 + lVar2) != 0) {
      (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f4c0c; end: 1051f4c23; -[SCModalOperaViewController operaPresenterDidTearDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4c0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271f4f4);
  *(undefined8 *)(param_1 + _DAT_11271f4f4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051f4c24; end: 1051f4c7f; -[SCModalOperaViewController operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1051f4c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfae0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f4c80; end: 1051f4c83; -[SCModalOperaViewController operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_1051f4c80(void)

{
  return;
}



/* Entry: 1051f4c84; end: 1051f4c87; -[SCModalOperaViewController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_1051f4c84(void)

{
  return;
}



/* Entry: 1051f4c88; end: 1051f4c93; -[SCModalOperaViewController transitionDuration:] */

undefined8 FUN_1051f4c88(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 1051f4c94; end: 1051f4df7; -[SCModalOperaViewController animateTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4c94(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010bfaef80(param_7);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar2);
  lVar2 = (long)_DAT_11271f4fc;
  (**(code **)(*(long *)(param_5 + lVar2) + 0x10))();
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  *(undefined8 *)(param_5 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c27a940(param_5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1051f4df8;
  puStack_60 = &UNK_110842e18;
  uStack_58 = param_7;
  _objc_retain(param_7);
  func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_7);
  return;
}



/* Entry: 1051f4df8; end: 1051f4e03;  */

void FUN_1051f4df8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 1051f4e04; end: 1051f4e07; -[SCModalOperaViewController playbackPresenterDidTearDown:playbackScope:] */

void FUN_1051f4e04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eaf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidTearDown__1126185e0);
  return;
}



/* Entry: 1051f4e08; end: 1051f4e0b; -[SCModalOperaViewController playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_1051f4e08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishDismissin_1126185b0);
  return;
}



/* Entry: 1051f4e0c; end: 1051f4e0f; -[SCModalOperaViewController playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_1051f4e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFailToPresent__1126185a8);
  return;
}



/* Entry: 1051f4e10; end: 1051f4e2f; -[SCModalOperaViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4e10(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f504);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f4e30; end: 1051f4e43; -[SCModalOperaViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4e30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f504,param_3);
  return;
}



/* Entry: 1051f4e44; end: 1051f4eab; -[SCModalOperaViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4e44(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f504);
  _objc_destroyWeak(param_1 + _DAT_11271f4f8);
  _objc_storeStrong(param_1 + _DAT_11271f500,0);
  _objc_storeStrong(param_1 + _DAT_11271f4fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f4f4,0);
  return;
}



/* Entry: 1051f4eac; end: 1051f4f43; -[SCPollStickerComposerContainerViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1051f4eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e6e28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271f508) = 0;
    lVar3 = (long)_DAT_11271f50c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051f4f44; end: 1051f4fb7; -[SCPollStickerComposerContainerViewController loadView] */

void FUN_1051f4f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051f4fb8; end: 1051f5087; -[SCPollStickerComposerContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4fb8(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6e28;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271f50c));
  _objc_release(lVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  return;
}



/* Entry: 1051f5088; end: 1051f50cb; -[SCPollStickerComposerContainerViewController setShowsNavigationBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f5088(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271f508) = param_3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f50cc; end: 1051f513b; -[SCPollStickerComposerContainerViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f50cc(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6e28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271f50c));
  _objc_release(lVar1);
  return;
}



/* Entry: 1051f513c; end: 1051f5193; -[SCPollStickerComposerContainerViewController forceDisableDismissalGesture:] */

void FUN_1051f513c(undefined8 param_1)

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



/* Entry: 1051f5194; end: 1051f51a7; -[SCPollStickerComposerContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f5194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f50c,0);
  return;
}



/* Entry: 1051f51a8; end: 1051f56bb; -[SCPollStickerCreationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f51a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar1 = param_1 + _DAT_11271f510;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar4 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
    _objc_initWeak(auStack_78,param_1);
    puVar5 = PTR_PTR_1126b6190;
    _objc_alloc();
    lVar2 = param_1 + _DAT_11271f514;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010bf075a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1051f56bc;
    puStack_88 = &UNK_11086fe28;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010bff38c0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    puVar8 = PTR_PTR_1126b6198;
    _objc_alloc(PTR_PTR_1126b6198);
    lVar2 = param_1;
    FUN_1051f583c();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c1031c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052bc0(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    puVar9 = PTR_PTR_1126b61a0;
    func_0x00010bf8e800(PTR_PTR_1126b61a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1946e0(puVar8);
    _objc_release(puVar9);
    lVar2 = param_1;
    FUN_1051f583c();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c1031c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c26c560();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c085000();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    if (lVar10 == 2) {
      lVar2 = param_1;
      FUN_1051f583c(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c1031c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c26c560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19d380(puVar8);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar2);
      lVar2 = param_1;
      FUN_1051f583c(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c1031c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c26c560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f8e20(puVar8);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
    puVar9 = PTR_PTR_1126b61a8;
    _objc_alloc(PTR_PTR_1126b61a8);
    func_0x00010c061d40();
    puVar13 = PTR_PTR_1126b61b0;
    _objc_alloc(PTR_PTR_1126b61b0);
    func_0x00010c0601e0();
    func_0x00010c1c8b80();
    func_0x00010c1c1bc0(puVar4);
    FUN_1051f583c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  return;
}



/* Entry: 1051f56bc; end: 1051f5763;  */

void FUN_1051f56bc(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051f5764;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1051f5764; end: 1051f583b;  */

void FUN_1051f5764(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c103260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f583c; end: 1051f585f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f583c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f518);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f5860; end: 1051f58ef; -[SCPollStickerCreationEntryPoint pollCreationCancelled] */

void FUN_1051f5860(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1051f583c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1034a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_1051f583c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f58f0; end: 1051f5bcf; -[SCPollStickerCreationEntryPoint pollCreationCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f58f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b61b8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  FUN_1051f583c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1031c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1032a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = lVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1deac0(puVar1,param_2,lVar5);
    _objc_release(lVar5);
  }
  else {
    func_0x00010c1deac0(puVar1,param_2,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b5c80;
  func_0x00010c0cb140(PTR_PTR_1126b5c80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0ae0();
  puVar7 = PTR_PTR_1126b5c78;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb1960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b71a0(puVar7,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1d5e20(puVar7,param_2,0);
  puVar8 = PTR_PTR_1126b5c78;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c154c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b71a0(puVar8,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1d5e20(puVar8,param_2,1);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar7;
  puStack_60 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  func_0x00010c1b6460(puVar6,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  func_0x00010c2135e0(puVar1,param_2,puVar6);
  lVar2 = param_1;
  FUN_1051f583c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1034c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  FUN_1051f583c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_3 + _DAT_11271f518);
  _objc_destroyWeak(param_3 + _DAT_11271f514);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3 + _DAT_11271f510);
  return;
}



/* Entry: 1051f5bd0; end: 1051f5c13; -[SCPollStickerCreationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f5bd0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f518);
  _objc_destroyWeak(param_1 + _DAT_11271f514);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f510);
  return;
}



/* Entry: 1051f5c14; end: 1051f5ceb; +[SCPollStickerCreationEmojiSectionProvider emojiSections] */

void FUN_1051f5c14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar1 = PTR_PTR_1126b61c8;
  _objc_alloc(PTR_PTR_1126b61c8);
  func_0x00010c008240();
  func_0x00010bf0a100(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b61c0;
  func_0x00010bf61040(PTR_PTR_1126b61c0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100504554();
  _objc_release(puVar3);
  func_0x00010befa160(puVar2);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051f5cec; end: 1051f5d53;  */

void FUN_1051f5cec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf8e2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b61c8;
  _objc_alloc(PTR_PTR_1126b61c8);
  func_0x00010c008240();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051f5d54; end: 1051f5d5b;  */

void FUN_1051f5d54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_text_1126787e8);
  return;
}



/* Entry: 1051f5d5c; end: 1051f5e03; -[SCPollSwipeViewController init] */

undefined1 * FUN_1051f5d5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126e6e30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(0,&uStack_30,PTR_s_initWithStyle_backgroundColor_sh_1125282c0,2,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c181ce0(puVar2);
    func_0x00010c167760(puVar2);
    func_0x00010c1a6d20(puVar2);
    func_0x00010c181d00(puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1051f5e04; end: 1051f5e0b; -[SCPollSwipeViewController setPollContainerView:] */

void FUN_1051f5e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c182b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setContentView_animated__11263e4e8,param_3,1)
  ;
  return;
}



/* Entry: 1051f5e0c; end: 1051f5e7b; -[SCPollSwipeViewController viewDidDisappear:] */

void FUN_1051f5e0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6e30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)uVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1035e0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1051f5e7c; end: 1051f5e9b; -[SCPollSwipeViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f5e7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f51c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f5e9c; end: 1051f5eaf; -[SCPollSwipeViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f5e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f51c,param_3);
  return;
}



/* Entry: 1051f5eb0; end: 1051f5ebf; -[SCPollSwipeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f5eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f51c);
  return;
}



/* Entry: 1051f5ec0; end: 1051f64b7; -[SCPollViewEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f5ec0(long param_1)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126b61d0;
  _objc_alloc_init();
  func_0x00010c18b5e0();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar16 = *(undefined8 *)(param_1 + _DAT_11271f520);
  *(undefined **)(param_1 + _DAT_11271f520) = puVar2;
  _objc_release(uVar16);
  puVar2 = PTR_PTR_1126b61d8;
  _objc_alloc(PTR_PTR_1126b61d8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1051f64b8;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  lVar3 = param_1 + _DAT_11271f52c;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c103740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271f528;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d180(puVar2);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_retain(0);
  func_0x00010c165a00(puVar2);
  _objc_release(0);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1051f64e4;
  puStack_c0 = &UNK_11086fed8;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_b8 = puVar1;
  func_0x00010c1d3500(puVar2);
  _objc_copyWeak(auStack_e0,auStack_80);
  func_0x00010c1d4440(puVar2);
  puVar10 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  lVar3 = param_1 + _DAT_11271f524;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80(puVar10);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  func_0x00010c1cba60(puVar2);
  puVar11 = PTR_PTR_1126b61e0;
  _objc_alloc(PTR_PTR_1126b61e0);
  lVar3 = param_1 + _DAT_11271f530;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010c1032c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c1032a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037a60(puVar11);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_11271f530;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010c1032c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd0c0(puVar11);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_11271f530;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185be0(puVar11);
  _objc_release(lVar6);
  _objc_release(lVar3);
  puVar12 = PTR_PTR_1126b61e8;
  _objc_alloc(PTR_PTR_1126b61e8);
  lVar3 = param_1 + _DAT_11271f524;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  puVar13 = PTR_PTR_1126afcd0;
  _objc_alloc();
  func_0x00010c0601e0();
  func_0x00010c1c1bc0(puVar10);
  puVar14 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc();
  func_0x00010c0402e0();
  func_0x00010bef7700(puVar1);
  puVar15 = puVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dea40(puVar1);
  _objc_release(puVar15);
  func_0x00010bf77e80(puVar14);
  param_1 = param_1 + _DAT_11271f530;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1051f64b8; end: 1051f64e3;  */

void FUN_1051f64b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c103640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f64e4; end: 1051f65cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f64e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_11271f530;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c103660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar1 + _DAT_11271f530;
      _objc_loadWeakRetained();
      lVar4 = lVar2;
      func_0x00010c103660();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1 + _DAT_11271f530;
      _objc_loadWeakRetained(lVar3);
      (**(code **)(lVar4 + 0x10))(lVar4,lVar3,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051f65cc; end: 1051f65ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f65cc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f530);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f65f0; end: 1051f6727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f65f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271f52c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c1037c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11aee0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11271f530;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c103680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1 + _DAT_11271f530;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c103680();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051f6728; end: 1051f6773; -[SCPollViewEntryPoint pollViewDidDismiss] */

void FUN_1051f6728(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1051f65cc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f6774; end: 1051f67eb; -[SCPollViewEntryPoint pollSwipeViewControllerDidDismiss:] */

void FUN_1051f6774(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1051f65cc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051f65cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1036a0(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051f67ec; end: 1051f684b; -[SCPollViewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f67ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f530);
  _objc_destroyWeak(param_1 + _DAT_11271f52c);
  _objc_destroyWeak(param_1 + _DAT_11271f528);
  _objc_destroyWeak(param_1 + _DAT_11271f524);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f520,0);
  return;
}



/* Entry: 1051f684c; end: 1051f69d3; -[SCPollViewScope initWithPollInfo:creatorDisplayName:uiContainer:delegate:launchSource:contextSessionId:pollViewDidVoteBlock:pollViewDidShareBlock:] */

undefined1 *
FUN_1051f684c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e6e38;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051f69d4; end: 1051f69db; -[SCPollViewScope pollInfo] */

undefined8 FUN_1051f69d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051f69dc; end: 1051f69e3; -[SCPollViewScope creatorDisplayName] */

undefined8 FUN_1051f69dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051f69e4; end: 1051f69eb; -[SCPollViewScope uiContainer] */

undefined8 FUN_1051f69e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1051f69ec; end: 1051f6a03; -[SCPollViewScope delegate] */

void FUN_1051f69ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f6a04; end: 1051f6a0b; -[SCPollViewScope launchSource] */

undefined8 FUN_1051f6a04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1051f6a0c; end: 1051f6a13; -[SCPollViewScope contextSessionId] */

undefined8 FUN_1051f6a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1051f6a14; end: 1051f6a1b; -[SCPollViewScope pollViewDidVoteBlock] */

undefined8 FUN_1051f6a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1051f6a1c; end: 1051f6a23; -[SCPollViewScope setPollViewDidVoteBlock:] */

void FUN_1051f6a1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1051f6a24; end: 1051f6a2b; -[SCPollViewScope pollViewDidShareBlock] */

undefined8 FUN_1051f6a24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1051f6a2c; end: 1051f6a33; -[SCPollViewScope setPollViewDidShareBlock:] */

void FUN_1051f6a2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1051f6a34; end: 1051f6a9b; -[SCPollViewScope .cxx_destruct] */

void FUN_1051f6a34(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051f6a9c; end: 1051f738b; -[SCPreviewContextCardsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f6a9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_1;
  FUN_1051f738c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010bf32340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11271f598;
    _objc_loadWeakRetained();
  }
  puVar2 = PTR_PTR_1126b2370;
  _objc_retain();
  _objc_retain(lVar1);
  _objc_alloc();
  func_0x00010c01f560();
  _objc_retain(lVar1);
  puVar3 = PTR_PTR_1126b5c10;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b61f0;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar18 = lVar1;
  func_0x00010bf42500();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar18;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar18);
      }
      uVar16 = *(undefined8 *)(lVar14 * 8);
      puVar8 = PTR_PTR_1126b61f8;
      func_0x00010c0cb140(PTR_PTR_1126b61f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c241860(uVar16);
      func_0x00010c204900(puVar8);
      uVar13 = uVar16;
      func_0x00010c257800(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c240(puVar8);
      _objc_release(uVar13);
      func_0x00010c086560(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar8);
      _objc_release(uVar16);
      func_0x00010befa120(puVar5);
      _objc_release(puVar8);
      lVar14 = lVar14 + 1;
    } while (lVar7 != lVar14);
    lVar7 = lVar18;
    func_0x00010bf52a60();
  }
  _objc_release(lVar18);
  lVar18 = lVar1;
  func_0x00010bf42720();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar18;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar18);
      }
      uVar16 = *(undefined8 *)(lVar14 * 8);
      puVar8 = PTR_PTR_1126b6200;
      func_0x00010c0cb140(PTR_PTR_1126b6200);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar16;
      func_0x00010c257800(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c240(puVar8);
      _objc_release(uVar13);
      uVar13 = uVar16;
      func_0x00010bf33480(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a100(puVar8);
      _objc_release(uVar13);
      func_0x00010c086560(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar8);
      _objc_release(uVar16);
      func_0x00010befa120(puVar6);
      _objc_release(puVar8);
      lVar14 = lVar14 + 1;
    } while (lVar7 != lVar14);
    lVar7 = lVar18;
    func_0x00010bf52a60();
  }
  _objc_release(lVar18);
  func_0x00010c17f1e0(puVar4);
  func_0x00010c17f3e0(puVar4);
  func_0x00010c17f1c0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b23a0;
  lVar7 = lVar17;
  func_0x00010c2923e0(lVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292680(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar5 = PTR_PTR_1126b2398;
  _objc_alloc(PTR_PTR_1126b2398);
  lVar7 = lVar17;
  func_0x00010c2946e0(lVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  lVar9 = lVar7;
  func_0x00010c269d40(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar9;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bcc0(puVar5);
  _objc_release(lVar18);
  _objc_release(lVar9);
  _objc_release(lVar7);
  puVar6 = PTR_PTR_1126b2380;
  _objc_alloc(PTR_PTR_1126b2380);
  lVar7 = lVar1;
  func_0x00010c094540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c0607a0(puVar6);
  _objc_release(lVar7);
  puVar8 = PTR_PTR_1126b2390;
  _objc_alloc();
  puVar10 = puVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045140();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar17);
  _objc_release(lVar1);
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11271f578;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar15;
  func_0x00010c0b3860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c15ffa0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    func_0x00010c08bda0(puVar8);
  }
  lVar7 = lVar17;
  func_0x00010bf56fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar17);
  _objc_release(lVar1);
  _objc_release(lVar15);
  puVar2 = PTR_PTR_1126b5bb0;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b5ba8;
  _objc_alloc(PTR_PTR_1126b5ba8);
  func_0x00010c0044c0();
  func_0x0001064bce14(puVar8);
  func_0x00010c0275c0();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  lVar15 = param_1;
  FUN_1051f738c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef1e0();
  func_0x00010bf4eae0(puVar2);
  func_0x00010bf4eb00(puVar2);
  func_0x00010bff0a60(puVar3);
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010bdebd40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6208;
  _objc_alloc(PTR_PTR_1126b6208);
  func_0x00010c00a2c0();
  lVar1 = lVar15;
  (**(code **)(lVar15 + 0x10))(lVar15,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182b00(puVar4);
  puVar5 = PTR_PTR_1126b6210;
  _objc_alloc();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11271f574;
    _objc_loadWeakRetained(lVar17);
  }
  lVar9 = lVar17;
  func_0x00010bf322c0(lVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027200();
  lVar18 = (long)_DAT_11271f554;
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar5;
  _objc_release(uVar13);
  _objc_release(lVar9);
  _objc_release(lVar17);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar18));
  lVar17 = param_1;
  FUN_1051f738c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar17;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar9);
  _objc_release(lVar17);
  func_0x00010c09b080(*(undefined8 *)(param_1 + lVar18));
  _objc_storeWeak(param_1 + _DAT_11271f558,lVar1);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(lVar15);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  if (lVar7 != 0) {
    _objc_loadWeakRetained(lVar7 + _DAT_11271f55c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f738c; end: 1051f73af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f738c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f55c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f73b0; end: 1051f756f; -[SCPreviewContextCardsEntryPoint _createCardViewFactory:logger:actionParams:source:] */

void FUN_1051f73b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar3 = &puStack_e0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1051f7570;
  puStack_78 = &UNK_11086ff38;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1051f7618;
  puStack_c8 = &UNK_11086ff98;
  _objc_copyWeak(auStack_98,auStack_68);
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  uStack_b0 = param_5;
  uStack_a8 = param_6;
  puStack_a0 = puVar2;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_e0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1051f7570; end: 1051f7617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f7570(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11271f570;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1051f7618; end: 1051f7b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f7618(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
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
  undefined *puVar22;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    puVar1 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1051f7b5c;
    puStack_90 = &UNK_11086ff68;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b0,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271f57c;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010beee700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126b6220;
    _objc_alloc();
    lVar3 = param_1 + _DAT_11271f5a0;
    _objc_loadWeakRetained();
    lVar6 = lVar3;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271f5a8);
    _objc_retain();
    func_0x00010bf4eb20();
    lVar8 = param_1 + _DAT_11271f598;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf1a840();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_11271f568;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11271f584;
    _objc_loadWeakRetained();
    lVar13 = param_1 + _DAT_11271f580;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_11271f56c;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010beff660();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_11271f564;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_11271f58c;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c0fdcc0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_11271f59c;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045480();
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
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar3);
    puVar22 = PTR_PTR_1126b6228;
    _objc_alloc();
    lVar3 = param_1 + _DAT_11271f588;
    _objc_loadWeakRetained();
    lVar14 = lVar3;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_11271f590;
    _objc_loadWeakRetained();
    lVar10 = param_1 + _DAT_11271f560;
    _objc_loadWeakRetained();
    lVar20 = lVar10;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11271f564;
    _objc_loadWeakRetained();
    lVar18 = lVar12;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11271f5a4;
    _objc_loadWeakRetained();
    lVar16 = lVar13;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0bc0(puVar22);
    _objc_release(lVar16);
    _objc_release(lVar13);
    _objc_release(lVar18);
    _objc_release(lVar12);
    _objc_release(lVar20);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar14);
    _objc_release(lVar3);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 1051f7b5c; end: 1051f7cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f7b5c(long param_1,undefined8 param_2)

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
    puVar5 = PTR_PTR_1126b6218;
    _objc_alloc(PTR_PTR_1126b6218);
    lVar1 = param_1 + _DAT_11271f590;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11271f594;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c12a480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0492c0(puVar5,param_2,lVar2,lVar4);
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



/* Entry: 1051f7cdc; end: 1051f7d33; -[SCPreviewContextCardsEntryPoint cardsDataProvider:didErrorWithRetryBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f7cdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271f558;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2374c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f7d34; end: 1051f7d8f; -[SCPreviewContextCardsEntryPoint cardsDataProvider:didGeneratePlaceholderCards:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f7d34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271f558;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1dca40();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f7d90; end: 1051f7de7; -[SCPreviewContextCardsEntryPoint cardsDataProvider:didReceiveContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f7d90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271f558;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2367c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f7de8; end: 1051f7e33; -[SCPreviewContextCardsEntryPoint previewViewControllerDidFinish:] */

void FUN_1051f7de8(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1051f738c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f7e34; end: 1051f7f63; -[SCPreviewContextCardsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f7e34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f5a8,0);
  _objc_destroyWeak(param_1 + _DAT_11271f5a4);
  _objc_destroyWeak(param_1 + _DAT_11271f5a0);
  _objc_destroyWeak(param_1 + _DAT_11271f59c);
  _objc_destroyWeak(param_1 + _DAT_11271f598);
  _objc_destroyWeak(param_1 + _DAT_11271f594);
  _objc_destroyWeak(param_1 + _DAT_11271f590);
  _objc_destroyWeak(param_1 + _DAT_11271f58c);
  _objc_destroyWeak(param_1 + _DAT_11271f588);
  _objc_destroyWeak(param_1 + _DAT_11271f584);
  _objc_destroyWeak(param_1 + _DAT_11271f580);
  _objc_destroyWeak(param_1 + _DAT_11271f57c);
  _objc_destroyWeak(param_1 + _DAT_11271f578);
  _objc_destroyWeak(param_1 + _DAT_11271f574);
  _objc_destroyWeak(param_1 + _DAT_11271f570);
  _objc_destroyWeak(param_1 + _DAT_11271f56c);
  _objc_destroyWeak(param_1 + _DAT_11271f568);
  _objc_destroyWeak(param_1 + _DAT_11271f564);
  _objc_destroyWeak(param_1 + _DAT_11271f560);
  _objc_destroyWeak(param_1 + _DAT_11271f55c);
  _objc_storeStrong(param_1 + _DAT_11271f554,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f558);
  return;
}



/* Entry: 1051f7f64; end: 1051f7feb; -[SCPreviewContextCardsViewController initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1051f7f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6e40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271f5ac),param_3);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051f7fec; end: 1051f8143; -[SCPreviewContextCardsViewController viewDidLoad] */

void FUN_1051f7fec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6e40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
  _objc_alloc(PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870);
  func_0x00010c050900();
  func_0x00010c18e180();
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(uVar3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1051f8144; end: 1051f83d7; -[SCPreviewContextCardsViewController setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051f8144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09c7a0(param_1);
  lVar16 = (long)_DAT_11271f5b0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(param_3,param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  uStack_80 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  uStack_78 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined8 *)(param_1 + lVar16) = param_3;
  _objc_release(uVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar15;
  }
  ___stack_chk_fail();
  return 0x3d;
}



/* Entry: 1051f83d8; end: 1051f83df; -[SCPreviewContextCardsViewController pageViewName] */

undefined8 FUN_1051f83d8(void)

{
  return 0x3d;
}



/* Entry: 1051f83e0; end: 1051f8487; -[SCPreviewContextCardsViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051f83e0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_11271f5b0);
    func_0x00010c09ef00(param_4);
    func_0x00010c102b20();
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      goto LAB_1051f846c;
    }
  }
  uVar3 = 1;
LAB_1051f846c:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 1051f8488; end: 1051f84c3; -[SCPreviewContextCardsViewController _didSwipeDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f8488(long param_1)

{
  param_1 = param_1 + _DAT_11271f5ac;
  _objc_loadWeakRetained(param_1);
  func_0x00010c112360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f84c4; end: 1051f84ff; -[SCPreviewContextCardsViewController _didTapBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f84c4(long param_1)

{
  param_1 = param_1 + _DAT_11271f5ac;
  _objc_loadWeakRetained(param_1);
  func_0x00010c112360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f8500; end: 1051f850f; -[SCPreviewContextCardsViewController contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051f8500(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f5b0);
}



/* Entry: 1051f8510; end: 1051f854b; -[SCPreviewContextCardsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f8510(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f5b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f5ac);
  return;
}



/* Entry: 1051f854c; end: 1051f8617; -[SCContextScrollableModalViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1051f854c(double param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126e6e48;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_11271f5b4) = 0x4064000000000000;
    pdVar1 = (double *)((long)puVar2 + (long)_DAT_11271f5b8);
    func_0x00010c14da40(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar5 = param_1 + 16.0;
    func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    *pdVar1 = dVar5;
    pdVar1[1] = 0.0;
    pdVar1[2] = param_1 + 16.0;
    pdVar1[3] = 0.0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11271f5bc);
    *(undefined **)((long)puVar2 + (long)_DAT_11271f5bc) = puVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1051f8618; end: 1051f86bf; -[SCContextScrollableModalViewController loadView] */

void FUN_1051f8618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051f86c0; end: 1051f89eb; -[SCContextScrollableModalViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f86c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_1126e6e48;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc_init();
  lVar8 = (long)_DAT_11271f5c0;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_alloc();
  func_0x00010c062fe0(0,0);
  _objc_retainAutorelease();
  puVar2 = puVar1;
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar2;
  _objc_alloc();
  func_0x00010c062fe0(0,0x3fe0000000000000);
  _objc_retainAutorelease();
  puVar2 = puVar3;
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  lVar8 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,lVar8);
  func_0x00010c18e220(lVar8);
  func_0x00010c17d4c0(lVar8);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126b44c8;
  func_0x00010bf4ff40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11271f5c4;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010c0e0780(uVar6);
  func_0x00010c181fc0(lVar8);
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  func_0x00010be3cdc0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be3cdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11271f5c8);
  *(long *)(param_1 + _DAT_11271f5c8) = lVar5;
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(lVar8);
  lVar7 = lVar8 + 0x20;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bedba80();
  _objc_release(lVar7);
  lVar8 = lVar8 + 0x20;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bdc9540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 1051f89ec; end: 1051f8a37;  */

void FUN_1051f89ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bedba80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc9540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f8a38; end: 1051f8a7f; -[SCContextScrollableModalViewController viewWillLayoutSubviews] */

void FUN_1051f8a38(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6e48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  func_0x00010bedba80(param_1);
  return;
}



/* Entry: 1051f8a80; end: 1051f8a8f; -[SCContextScrollableModalViewController _didTapToDismiss] */

void FUN_1051f8a80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf831d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissAnimated_exitEvent_comple_1125be618,1,0xc,0);
  return;
}



/* Entry: 1051f8a90; end: 1051f8b1f; -[SCContextScrollableModalViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f8a90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271f5cc;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1051f8b20; end: 1051f8b27; -[SCContextScrollableModalViewController setPeekAmount:] */

void FUN_1051f8b20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1da030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPeekAmount_animated__112654230,0);
  return;
}



/* Entry: 1051f8b28; end: 1051f8b6f; -[SCContextScrollableModalViewController setPeekAmount:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f8b28(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(double *)(param_2 + _DAT_11271f5b4) != param_1) {
    *(double *)(param_2 + _DAT_11271f5b4) = param_1;
    func_0x00010bedba80();
                    /* WARNING: Could not recover jumptable at 0x00010bdc9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__adjustTranslateY__11254fef0,param_4);
    return;
  }
  return;
}



/* Entry: 1051f8b70; end: 1051f8d57; -[SCContextScrollableModalViewController _updateMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f8b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar2 = param_5;
  func_0x00010c0834c0();
  if ((int)lVar2 != 0) {
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar2);
    lVar2 = (long)_DAT_11271f5b4;
    pdVar1 = (double *)(param_5 + _DAT_11271f5b8);
    dVar10 = param_4 - (*pdVar1 + pdVar1[2]);
    dVar7 = param_4 - *(double *)(param_5 + lVar2);
    uVar5 = 0;
    func_0x00010c19f0e0(0,dVar7,param_3,*(undefined8 *)(param_5 + _DAT_11271f5c0));
    lVar3 = (long)_DAT_11271f5cc;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    dVar9 = param_4 - *pdVar1;
    dVar8 = dVar7;
    func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010c1739e0(uVar5,dVar7,param_3,dVar9,*(undefined8 *)(param_5 + lVar3));
    uVar6 = uVar5;
    _CGRectGetMidX(uVar5,dVar7,param_3,dVar9);
    _CGRectGetMidY(uVar5,dVar7,param_3,dVar9);
    func_0x00010c17a6a0(uVar6,uVar5,*(undefined8 *)(param_5 + lVar3));
    func_0x00010c181f80(0,0,pdVar1[2],0,*(undefined8 *)(param_5 + lVar3));
    dVar7 = *(double *)(param_5 + lVar2);
    if (dVar8 <= dVar7) {
      dVar7 = dVar8;
    }
    lVar2 = (long)_DAT_11271f5d0;
    *(double *)(param_5 + lVar2) = *pdVar1 + (dVar10 - dVar7);
    if (dVar8 <= dVar10) {
      dVar7 = (dVar10 - dVar8) + *pdVar1;
    }
    else {
      dVar7 = *pdVar1;
    }
    lVar4 = (long)_DAT_11271f5d4;
    *(double *)(param_5 + lVar4) = dVar7;
    func_0x00010c1f7b20(*(undefined8 *)(param_5 + lVar3),param_6,dVar10 < dVar8);
    *(double *)(param_5 + _DAT_11271f5d8) =
         *(double *)(param_5 + lVar4) +
         (*(double *)(param_5 + lVar2) - *(double *)(param_5 + lVar4)) * 0.5;
    *(bool *)(param_5 + _DAT_11271f5dc) =
         *(double *)(param_5 + lVar4) < *(double *)(param_5 + lVar2);
    *(double *)(param_5 + _DAT_11271f5e0) = param_4;
  }
  return;
}



/* Entry: 1051f8d58; end: 1051f8ea3; -[SCContextScrollableModalViewController _adjustTranslateY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f8d58(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined **ppuVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  piVar3 = (int *)&DAT_11271f5e0;
  if ((*(byte *)(param_1 + _DAT_11271f5e4) & 1) == 0) {
    lVar1 = 0x20;
    if (*(char *)(param_1 + _DAT_11271f5e8) == '\0') {
      lVar1 = 0x1c;
    }
    piVar3 = (int *)(&DAT_11271f5b4 + lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + *piVar3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1051f8ea4;
  puStack_60 = &UNK_110846540;
  _objc_copyWeak(auStack_58,auStack_48);
  ppuVar2 = &puStack_78;
  uStack_50 = uVar4;
  _objc_retainBlock();
  if (*(long *)(param_1 + _DAT_11271f5ec) == 0) {
    if (param_3 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    else {
      func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
    }
  }
  else {
    func_0x00010bef6cc0();
  }
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1051f8ea4; end: 1051f8edf;  */

void FUN_1051f8ea4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea8ae0(*(undefined8 *)(param_1 + 0x28),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051f8ee0; end: 1051f904f; -[SCContextScrollableModalViewController _setTranslateY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f8ee0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _CGAffineTransformMakeTranslation(&uStack_80,0,param_1);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_11271f5cc),param_3,&uStack_b0);
  lVar3 = (long)_DAT_11271f5d0;
  dVar4 = *(double *)(param_2 + lVar3);
  dVar4 = (param_1 - dVar4) / (*(double *)(param_2 + _DAT_11271f5e0) - dVar4);
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar5 = 1.0;
  if (dVar4 <= 1.0) {
    dVar5 = dVar4;
  }
  func_0x00010c1677c0(1.0 - dVar5,*(undefined8 *)(param_2 + _DAT_11271f5c0));
  if (*(char *)(param_2 + _DAT_11271f5dc) == '\x01') {
    dVar4 = *(double *)(param_2 + lVar3);
    dVar4 = (param_1 - dVar4) / (*(double *)(param_2 + _DAT_11271f5d4) - dVar4);
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    dVar5 = 1.0;
    if (dVar4 <= 1.0) {
      dVar5 = dVar4;
    }
    lVar3 = (long)_DAT_11271f5f0;
    if (*(double *)(param_2 + lVar3) != dVar5) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,dVar5 * 0.5,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(lVar2);
      _objc_release(puVar1);
      *(double *)(param_2 + lVar3) = dVar5;
      func_0x00010c288d40(dVar5,param_2,param_3,*(undefined1 *)(param_2 + _DAT_11271f5e4));
    }
  }
  return;
}



/* Entry: 1051f9050; end: 1051f91ef; -[SCContextScrollableModalViewController _didPan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f9050(undefined8 param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 != 0) && (uVar3 = param_5, func_0x00010c252440(), uVar3 != 5)) {
    uVar3 = param_5;
    func_0x00010c252440();
    if (uVar3 == 1) {
      lVar7 = (long)_DAT_11271f5f4;
      lVar4 = *(long *)(param_3 + lVar7);
      uVar6 = 0;
      if (lVar4 != 0) {
        func_0x00010c252440();
        uVar5 = *(undefined8 *)(param_3 + lVar7);
        uVar6 = uVar5;
        if (lVar4 == 1) {
          func_0x00010c075c40();
          uVar6 = *(undefined8 *)(param_3 + lVar7);
          if ((int)uVar5 != 0) {
            func_0x00010c2559c0(uVar6);
            uVar6 = *(undefined8 *)(param_3 + lVar7);
          }
        }
      }
      *(undefined8 *)(param_3 + lVar7) = 0;
      _objc_release(uVar6);
      if (*(long *)(param_3 + _DAT_11271f5cc) == 0) {
        uStack_58 = 0;
      }
      else {
        func_0x00010c27a460(auStack_80);
      }
      *(undefined8 *)(param_3 + _DAT_11271f5f8) = uStack_58;
    }
    else {
      uVar3 = param_5;
      func_0x00010c252440();
      if (uVar3 == 2) {
        dVar10 = *(double *)(param_3 + _DAT_11271f5f8);
        lVar4 = param_3;
        func_0x00010c29bf00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27adc0(param_5);
        dVar10 = dVar10 + param_2;
        _objc_release(lVar4);
        dVar8 = *(double *)(param_3 + _DAT_11271f5d4);
        dVar9 = dVar8 - SQRT(dVar8 - dVar10);
        if (dVar8 <= dVar10) {
          dVar9 = dVar10;
        }
        func_0x00010bea8ae0(dVar9,param_3);
      }
      else {
        func_0x00010be17060(param_3);
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}


