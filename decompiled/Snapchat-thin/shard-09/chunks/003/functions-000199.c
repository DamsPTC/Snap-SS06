/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b985a0; end: 106b985a3; -[SCGenericSettingsViewController leftSwipeSucceed] */

void FUN_106b985a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_leftButtonPressed_112601348);
  return;
}



/* Entry: 106b985a4; end: 106b985ab; -[SCGenericSettingsViewController shouldPopToRootViewController] */

undefined8 FUN_106b985a4(void)

{
  return 0;
}



/* Entry: 106b985ac; end: 106b985b3; -[SCGenericSettingsViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_106b985ac(void)

{
  return 1;
}



/* Entry: 106b985b4; end: 106b98607; -[SCGenericSettingsViewController navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_106b985b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  if (param_4 == 1) {
    _objc_alloc_init(PTR_PTR_1126d0d58);
  }
  else {
    puStack_18 = PTR_PTR_1126f5550;
    uStack_20 = param_1;
    _objc_msgSendSuper2(&uStack_20,PTR_s_navigationController_animationCo_112526758);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b98608; end: 106b9864f; -[SCGenericSettingsViewController viewWillAppear:] */

void FUN_106b98608(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5550;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 106b98650; end: 106b98653; -[SCGenericSettingsViewController preferredStatusBarStyle] */

undefined8 FUN_106b98650(long param_1)

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



/* Entry: 106b98654; end: 106b9865b; -[SCGenericSettingsViewController prefersStatusBarHidden] */

undefined8 FUN_106b98654(void)

{
  return 0;
}



/* Entry: 106b9865c; end: 106b9870b; -[SCGenericSettingsViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_106b9865c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5550;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b9870c; end: 106b9871b; -[SCGenericSettingsViewController header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9870c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275958c);
}



/* Entry: 106b9871c; end: 106b9872b; -[SCGenericSettingsViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9871c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759584);
}



/* Entry: 106b9872c; end: 106b9873b; -[SCGenericSettingsViewController delegateDismissToCaller] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b9872c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112759580);
}



/* Entry: 106b9873c; end: 106b9874b; -[SCGenericSettingsViewController setDelegateDismissToCaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9873c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112759580) = param_3;
  return;
}



/* Entry: 106b9874c; end: 106b9875b; -[SCGenericSettingsViewController containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9874c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759594);
}



/* Entry: 106b9875c; end: 106b9879b; -[SCGenericSettingsViewController setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9875c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759594;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b9879c; end: 106b987bb; -[SCGenericSettingsViewController settingsDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9879c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112759588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b987bc; end: 106b987cf; -[SCGenericSettingsViewController setSettingsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b987bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112759588,param_3);
  return;
}



/* Entry: 106b987d0; end: 106b9883b; -[SCGenericSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b987d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759588);
  _objc_storeStrong(param_1 + _DAT_112759594,0);
  _objc_storeStrong(param_1 + _DAT_112759584,0);
  _objc_storeStrong(param_1 + _DAT_112759590,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275958c,0);
  return;
}



/* Entry: 106b9883c; end: 106b98843; -[SCInformationSettingsViewController initWithURL:] */

void FUN_106b9883c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0579b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithURL_cookies__1125f3878,param_3,0);
  return;
}



/* Entry: 106b98844; end: 106b988d7; -[SCInformationSettingsViewController initWithURL:cookies:] */

undefined1 *
FUN_106b98844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21d340(puVar1);
    func_0x00010c183fc0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b988d8; end: 106b9896b; -[SCInformationSettingsViewController initWithRequest:cookies:] */

undefined1 *
FUN_106b988d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1ebac0(puVar1);
    func_0x00010c183fc0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9896c; end: 106b989d7; -[SCInformationSettingsViewController initWithRequest:] */

undefined1 * FUN_106b9896c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5558;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1ebac0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b989d8; end: 106b98ab3; -[SCInformationSettingsViewController pageViewName] */

undefined8 FUN_106b989d8(ulong param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc7d58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d58,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc7cd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7cd8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0720c0();
    _objc_release(ppuVar2);
    _objc_release(param_1);
    uVar4 = 0x147;
    if ((int)uVar1 == 0) {
      uVar4 = 0x1c;
    }
  }
  else {
    uVar4 = 0xd7;
  }
  return uVar4;
}



/* Entry: 106b98ab4; end: 106b98b83; -[SCInformationSettingsViewController viewDidLayoutSubviews] */

void FUN_106b98ab4(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5558;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = param_2;
  func_0x00010bfdef60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxX();
  dVar3 = param_1 + -25.0;
  uVar2 = param_2;
  func_0x00010bfdef60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxY();
  func_0x00010bef1600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar3,param_1 + -22.0);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106b98b84; end: 106b98daf; -[SCInformationSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b98b84(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5558;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c162da0(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bef1600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e800();
  _objc_release(lVar5);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bef1600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bef1600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  _objc_release(lVar5);
  puVar1 = PTR_PTR_1126b4f58;
  func_0x00010bf57640(PTR_PTR_1126b4f58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4f58;
  func_0x00010bdc3620(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112759598;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1cb840(*(undefined8 *)(param_1 + lVar5));
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar5);
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b98db0; end: 106b98f1f;  */

void FUN_106b98db0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b98f20; end: 106b98f73; -[SCInformationSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b98f20(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c1cb840(*(undefined8 *)(param_1 + _DAT_112759598),param_2,0);
  puStack_28 = PTR_PTR_1126f5558;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b98f74; end: 106b98fd7; -[SCInformationSettingsViewController leftButtonPressed] */

void FUN_106b98f74(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5558;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_leftButtonPressed_112601348);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b80();
  _objc_release(param_1);
  return;
}



/* Entry: 106b98fd8; end: 106b98fe3; -[SCInformationSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_106b98fd8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 106b98fe4; end: 106b990c3; -[SCInformationSettingsViewController webView:didFinishNavigation:] */

void FUN_106b98fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef1600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bef1600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1aafe0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfcb3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b990c4; end: 106b9919f; -[SCInformationSettingsViewController viewWillAppear:] */

void FUN_106b990c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  lVar2 = param_1;
  if (lVar1 == 0) {
    func_0x00010c28f340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137160(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4ef20(param_1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4ef20(param_1);
  }
  _objc_release(lVar2);
  puStack_38 = PTR_PTR_1126f5558;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 106b991a0; end: 106b99293; -[SCInformationSettingsViewController getTitle] */

void FUN_106b991a0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c0f0580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_1;
      func_0x00010bfea380();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c2711a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfda7c0(uVar2,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c2711a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106b99280;
      }
    }
    func_0x00010bfea380(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0f0580(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106b99280:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b99294; end: 106b995af; -[SCInformationSettingsViewController _loadWebViewWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99294(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11275959c;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_108,param_1);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_106b995b0;
    puStack_120 = &UNK_110841fb0;
    _objc_copyWeak(auStack_110,auStack_108);
    _objc_retain(param_3);
    ppuVar3 = &puStack_138;
    lStack_118 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112759598);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a46c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe4ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      lVar2 = *(long *)(param_1 + lVar9);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183f80(uVar6);
    }
    else {
      _dispatch_group_create();
      lVar8 = *(long *)(param_1 + lVar9);
      _objc_retain(lVar8);
      lVar9 = lVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar9 != 0) {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar8);
          }
          _dispatch_group_enter(lVar2);
          _objc_retain(lVar2);
          func_0x00010c183f80(uVar6);
          _objc_release(lVar2);
          lVar7 = lVar7 + 1;
        } while (lVar9 != lVar7);
        lVar9 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      func_0x000100bc0718(lVar2,PTR___dispatch_main_q_11034be20,ppuVar3);
    }
    _objc_release(lVar2);
    _objc_release(uVar6);
    _objc_release(ppuVar3);
    _objc_release(lStack_118);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  lVar2 = param_3;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b995b0; end: 106b9960b;  */

void FUN_106b995b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b9960c; end: 106b99613;  */

void FUN_106b9960c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106b99614; end: 106b99633; -[SCInformationSettingsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99614(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127595a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b99634; end: 106b99647; -[SCInformationSettingsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99634(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127595a0,param_3);
  return;
}



/* Entry: 106b99648; end: 106b99657; -[SCInformationSettingsViewController overrideTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b99648(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595a4);
}



/* Entry: 106b99658; end: 106b99663; -[SCInformationSettingsViewController setOverrideTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99658(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b99664; end: 106b99673; -[SCInformationSettingsViewController webView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b99664(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759598);
}



/* Entry: 106b99674; end: 106b996b3; -[SCInformationSettingsViewController setWebView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759598;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b996b4; end: 106b996c3; -[SCInformationSettingsViewController url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b996b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595a8);
}



/* Entry: 106b996c4; end: 106b99703; -[SCInformationSettingsViewController setUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b996c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127595a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b99704; end: 106b99713; -[SCInformationSettingsViewController activityIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b99704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595ac);
}



/* Entry: 106b99714; end: 106b99753; -[SCInformationSettingsViewController setActivityIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127595ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b99754; end: 106b99763; -[SCInformationSettingsViewController request] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b99754(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595b0);
}



/* Entry: 106b99764; end: 106b997a3; -[SCInformationSettingsViewController setRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127595b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b997a4; end: 106b997b3; -[SCInformationSettingsViewController implicitTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b997a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595b4);
}



/* Entry: 106b997b4; end: 106b997f3; -[SCInformationSettingsViewController setImplicitTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b997b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127595b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b997f4; end: 106b99803; -[SCInformationSettingsViewController cookies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b997f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275959c);
}



/* Entry: 106b99804; end: 106b99843; -[SCInformationSettingsViewController setCookies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275959c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b99844; end: 106b998df; -[SCInformationSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b99844(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275959c,0);
  _objc_storeStrong(param_1 + _DAT_1127595b4,0);
  _objc_storeStrong(param_1 + _DAT_1127595b0,0);
  _objc_storeStrong(param_1 + _DAT_1127595ac,0);
  _objc_storeStrong(param_1 + _DAT_1127595a8,0);
  _objc_storeStrong(param_1 + _DAT_112759598,0);
  _objc_storeStrong(param_1 + _DAT_1127595a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127595a0);
  return;
}



/* Entry: 106b998e0; end: 106b999c7; -[SCSettingHeaderPromptView initWithTitle:text:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b998e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5560;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127595b8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127595bc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127595c0),param_5);
    func_0x00010beb0340(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b999c8; end: 106b9a20b; -[SCSettingHeaderPromptView _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b999c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar15 = (long)_DAT_1127595c4;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar15),param_2,
                      *(undefined8 *)(param_1 + _DAT_1127595b8));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar15),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493c0(0x4038000000000000,uVar2,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  uStack_98 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2a5060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010bf49500(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_90 = uVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(lVar11);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar16 = (long)_DAT_1127595c8;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar13);
  func_0x00010c1677c0(0x3fe99999a0000000,*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar16),param_2,
                      *(undefined8 *)(param_1 + _DAT_1127595bc));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar16),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493c0(0x4020000000000000,uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  uStack_b8 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010bf493c0(0x4041800000000000,uVar8,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  uStack_b0 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar9;
  func_0x00010bf493c0(0xc041800000000000,uVar9,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  uStack_a8 = uVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar13);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(lVar4);
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126af938;
  _objc_opt_new();
  lVar15 = (long)_DAT_1127595cc;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release();
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x000106b9c3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar14,param_2,uVar13,0);
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar13);
  _objc_release(puVar1);
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 15.0;
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar13);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar15),param_2,param_1,
                      PTR_s__didTapContinueButton_112533d40,0x40);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c2a5040(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010bf493c0(0x4028000000000000,lVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  lStack_d0 = lVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  uStack_c8 = uVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf49420(dVar17 + 36.0 + 40.0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_d0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(lVar6);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(uVar12);
  _objc_release(lVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = lVar11 + _DAT_1127595c0;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c227e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 106b9a20c; end: 106b9a247; -[SCSettingHeaderPromptView _didTapContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9a20c(long param_1)

{
  param_1 = param_1 + _DAT_1127595c0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c227e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b9a248; end: 106b9a267; -[SCSettingHeaderPromptView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9a248(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127595c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b9a268; end: 106b9a27b; -[SCSettingHeaderPromptView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9a268(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127595c0,param_3);
  return;
}



/* Entry: 106b9a27c; end: 106b9a2f7; -[SCSettingHeaderPromptView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9a27c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127595c0);
  _objc_storeStrong(param_1 + _DAT_1127595bc,0);
  _objc_storeStrong(param_1 + _DAT_1127595b8,0);
  _objc_storeStrong(param_1 + _DAT_1127595cc,0);
  _objc_storeStrong(param_1 + _DAT_1127595c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127595c4,0);
  return;
}



/* Entry: 106b9a2f8; end: 106b9a42b; -[SCSettingsAppVersionFormatter formattedSettingsInformation] */

void FUN_106b9a2f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  func_0x000100150168();
  puVar2 = puVar3;
  if ((int)puVar1 != 0) {
    func_0x00010c25ce40(puVar3,param_2,&PTR____CFConstantStringClassReference_110e76c78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar1 = puVar3;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_106b9c3a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b9a42c; end: 106b9a437; +[SCSettingsAppearance heightForTableHeaderInSection:] */

undefined8 FUN_106b9a42c(void)

{
  return 0x4041800000000000;
}



/* Entry: 106b9a438; end: 106b9a43f; +[SCSettingsAppearance viewForTableHeaderInSection:text:] */

void FUN_106b9a438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29cfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_viewForTableHeaderInSection_text_112684e10,param_3,param_4,1);
  return;
}



/* Entry: 106b9a440; end: 106b9a4ef; +[SCSettingsAppearance viewForTableHeaderInSection:text:forceUppercase:] */

void FUN_106b9a440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_4);
  func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                      puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cfc0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b9a4f0; end: 106b9a733; +[SCSettingsAppearance viewForTableHeaderInSection:text:forceUppercase:textColor:] */

void FUN_106b9a4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010bfe0820(param_2,param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar4 = param_1;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  func_0x00010c013de0(0,0,uVar4,param_1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010c213180(puVar2,param_3,param_7);
  _objc_release(param_7);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  if (param_6 == 0) {
    func_0x00010c212f20(puVar2,param_3,param_5);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c28eda0(param_5,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2,param_3,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  func_0x00010c213040(puVar2,param_3,4);
  func_0x00010c1b6b20(0x3ff0000000000000,puVar2);
  func_0x00010befbb60(puVar1,param_3,puVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b9a734;
  puStack_68 = &UNK_11084fc28;
  _objc_retain(puVar1);
  uStack_58 = 0x4028000000000000;
  puStack_60 = puVar1;
  func_0x00010c0bbfc0(puVar2,param_3,&puStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puStack_60);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b9a734; end: 106b9a93f;  */

void FUN_106b9a734(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b9a940; end: 106b9ac9b; -[SCSettingsTableViewCell initWithReuseIdentifier:] */

undefined8 * FUN_106b9a940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f5568;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c26c280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar3);
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c17eb40(puVar1);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c16f0a0(puVar1);
    _objc_release(puVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf15840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf15840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf6f720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 106b9ac9c; end: 106b9ade3;  */

void FUN_106b9ac9c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b9ade4; end: 106b9b013;  */

void FUN_106b9ade4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6f720(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8590);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26c280(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0bc040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b9b014; end: 106b9b093; -[SCSettingsTableViewCell layoutSubviews] */

void FUN_106b9b014(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5568;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bdc2b00();
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(param_1);
  return;
}



/* Entry: 106b9b094; end: 106b9b0f3; -[SCSettingsTableViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9b094(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5568;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  lVar2 = (long)_DAT_1127595d0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106b9b0f4; end: 106b9b1e3; -[SCSettingsTableViewCell loadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9b0f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_1127595d4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar4),param_2,1);
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106b9b1e4;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106b9b1e4; end: 106b9b32b;  */

void FUN_106b9b1e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b9b32c; end: 106b9b39b; -[SCSettingsTableViewCell setDetailText:] */

void FUN_106b9b32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c08fa60();
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b9b39c; end: 106b9b3a3; -[SCSettingsTableViewCell resetCellState:] */

void FUN_106b9b39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetCellState_hasError__11262bb68,param_3,0)
  ;
  return;
}



/* Entry: 106b9b3a4; end: 106b9b3e7; -[SCSettingsTableViewCell resetCellState:hasError:] */

void FUN_106b9b3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c18c5c0(param_1,param_2,&PTR____CFConstantStringClassReference_110db2d98);
                    /* WARNING: Could not recover jumptable at 0x00010c17a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCellState_hasError__11263c348,param_3,param_4);
  return;
}



/* Entry: 106b9b3e8; end: 106b9b693; -[SCSettingsTableViewCell setCellState:hasError:] */

void FUN_106b9b3e8(double param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x90);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf416a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x90);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf15840(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c216140(param_2,param_3,1);
  uVar2 = param_2;
  func_0x00010bf15840(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    if (param_4 != 0) {
      func_0x00010c161280(param_2,param_3,0);
      func_0x00010c161260(param_2,param_3,1);
      lVar5 = 0;
      goto LAB_106b9b584;
    }
    lVar5 = 0x20;
  }
  else {
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf15840(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    lVar5 = (long)(param_1 + -16.0);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (param_4 != 0) {
      uVar2 = param_2;
      func_0x00010bf416a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161280(param_2,param_3,uVar2);
      _objc_release(uVar2);
      goto LAB_106b9b584;
    }
  }
  func_0x00010c161260(param_2,param_3,0);
LAB_106b9b584:
  uVar2 = param_2;
  func_0x00010bf6f720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0((double)-lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = 0x90;
  if (param_5 == 0) {
    uVar2 = 0xc6;
  }
  uVar3 = 0x90;
  if (param_5 == 0) {
    uVar3 = 0xbf;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c26c280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b9b694; end: 106b9b69b; -[SCSettingsTableViewCell setCellStyle:indicatorType:] */

void FUN_106b9b694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCellStyle_indicatorType_excla_11263c360,param_3,param_4,0);
  return;
}



/* Entry: 106b9b69c; end: 106b9b99f; -[SCSettingsTableViewCell setCellStyle:indicatorType:exclamation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9b69c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010be35be0();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf15840(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(lVar5);
  _objc_release(puVar1);
  if (param_5 < 2) {
    if ((param_5 == 0) || (param_5 == 1)) {
      func_0x00010c161260(param_2);
    }
    goto LAB_106b9b880;
  }
  lVar5 = param_2;
  lVar3 = param_2;
  if (param_5 == 2) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf416a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(lVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf15840(param_2);
    _objc_retainAutoreleasedReturnValue();
LAB_106b9b82c:
    func_0x00010c216160();
    _objc_release(lVar5);
    _objc_release(puVar1);
    func_0x00010bf416a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161280(param_2);
  }
  else {
    if (param_5 == 3) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf416a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106b9b82c;
    }
    if (param_5 != 4) goto LAB_106b9b880;
    func_0x00010c161260(param_2);
    func_0x00010c09cea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar5);
    func_0x00010c09cea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
  }
  _objc_release(lVar3);
LAB_106b9b880:
  *(long *)(param_2 + _DAT_1127595d8) = param_5;
  func_0x00010bed3e60(param_2);
  lVar5 = param_2;
  func_0x00010bf15840(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    func_0x00010c1a7f60();
    _objc_release(lVar5);
    lVar5 = 0x20;
    if (param_5 != 0) {
      lVar5 = 0;
    }
  }
  else {
    func_0x00010c1a7f60();
    _objc_release(lVar5);
    lVar3 = param_2;
    func_0x00010bf15840(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    lVar5 = (long)(param_1 + -16.0);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_2;
  func_0x00010bf6f720(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0((double)-lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2843b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_updateCellStyle__11267eb10,param_4);
  return;
}



/* Entry: 106b9b9a0; end: 106b9bb53; -[SCSettingsTableViewCell updateCellStyle:] */

/* WARNING: Possible PIC construction at 0x000106b9b9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b9b9cc) */
/* WARNING: Removing unreachable block (ram,0x000106b9baa4) */
/* WARNING: Removing unreachable block (ram,0x000106b9b9d4) */
/* WARNING: Removing unreachable block (ram,0x000106b9ba38) */
/* WARNING: Removing unreachable block (ram,0x000106b9b9dc) */
/* WARNING: Removing unreachable block (ram,0x000106b9bb40) */
/* WARNING: Removing unreachable block (ram,0x000106b9b9e4) */
/* WARNING: Removing unreachable block (ram,0x000106b9baf4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106b9b9a0(undefined8 param_1)

{
  func_0x00010be92640();
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserInteractionEnabled__112665468,1);
  return;
}



/* Entry: 106b9bb54; end: 106b9bc2b; -[SCSettingsTableViewCell setCustomAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9bb54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127595d0;
  if (*(long *)(param_1 + lVar3) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c12c960();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b9bc2c;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b9bc2c; end: 106b9be87;  */

void FUN_106b9bc2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_106b9be88();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_106b9be88();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b9be88; end: 106b9bec3;  */

void FUN_106b9be88(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b9bec4; end: 106b9bf17; -[SCSettingsTableViewCell setHighlighted:animated:] */

void FUN_106b9bec4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0xa8;
  if (param_3 == 0) {
    uVar1 = 0x29;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b9bf18; end: 106b9bf6b; -[SCSettingsTableViewCell setSelected:animated:] */

void FUN_106b9bf18(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0xa8;
  if (param_3 == 0) {
    uVar1 = 0x29;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b9bf6c; end: 106b9bfbf; -[SCSettingsTableViewCell _hidePreviousIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9bf6c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_1127595d8) == 4) {
    lVar1 = (long)_DAT_1127595d4;
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c161290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessoryView__112635ec0,0);
  return;
}



/* Entry: 106b9bfc0; end: 106b9c0b3; -[SCSettingsTableViewCell _resetCellTextStyle] */

void FUN_106b9bfc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar2);
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b9c0b4; end: 106b9c12f; -[SCSettingsTableViewCell _updateBangViewOffset] */

void FUN_106b9c0b4(undefined8 param_1)

{
  func_0x00010bf15840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106b9c130; end: 106b9c237;  */

void FUN_106b9c130(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x4030000000000000;
  if (lVar6 != 0) {
    uVar7 = 0x4020000000000000;
  }
  (**(code **)(lVar5 + 0x10))(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b9c238; end: 106b9c247; -[SCSettingsTableViewCell currentInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9c238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595dc);
}



/* Entry: 106b9c248; end: 106b9c287; -[SCSettingsTableViewCell setCurrentInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9c248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127595dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b9c288; end: 106b9c297; -[SCSettingsTableViewCell customAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9c288(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595d0);
}



/* Entry: 106b9c298; end: 106b9c2a7; -[SCSettingsTableViewCell bangView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9c298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595e0);
}



/* Entry: 106b9c2a8; end: 106b9c2e7; -[SCSettingsTableViewCell setBangView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9c2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127595e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b9c2e8; end: 106b9c2f7; -[SCSettingsTableViewCell coloredArrow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9c2e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127595e4);
}



/* Entry: 106b9c2f8; end: 106b9c337; -[SCSettingsTableViewCell setColoredArrow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9c2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127595e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b9c338; end: 106b9c3a7; -[SCSettingsTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9c338(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127595e4,0);
  _objc_storeStrong(param_1 + _DAT_1127595e0,0);
  _objc_storeStrong(param_1 + _DAT_1127595d0,0);
  _objc_storeStrong(param_1 + _DAT_1127595dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127595d4,0);
  return;
}



/* Entry: 106b9c3a8; end: 106b9c407;  */

void FUN_106b9c3a8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3c78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dd3c78,
                      &PTR____CFConstantStringClassReference_110e76c98,0);
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



/* Entry: 106b9c408; end: 106b9c7a3; -[SCPlayGamesLensInfoCardEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9c408(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lVar1 = param_1;
  FUN_106b9c7a4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      _objc_retain(0);
      uVar6 = 0;
      lVar9 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + _DAT_11275960c);
      _objc_retain(uVar6);
      lVar9 = param_1 + _DAT_112759610;
      _objc_loadWeakRetained();
    }
    puVar2 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106b9c7c8;
    puStack_90 = &UNK_1108f0cb0;
    _objc_retain(uVar6);
    uStack_88 = uVar6;
    _objc_retain(lVar9);
    lStack_80 = lVar9;
    func_0x00010bf11fe0(puVar2,param_2,&puStack_a8);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = param_1 + _DAT_112759604;
      _objc_loadWeakRetained();
    }
    lVar13 = lVar12;
    func_0x00010c094900();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1109646d8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010bf54520(lVar10,param_2,puVar2,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar10);
    _objc_release(lVar13);
    _objc_release(lVar12);
    puVar3 = PTR_PTR_1126b6888;
    _objc_alloc();
    if (param_1 == 0) {
      _objc_retain(0);
      lVar8 = 0;
      lVar13 = 0;
      lVar12 = 0;
      uVar14 = 0;
      lVar10 = 0;
      lVar11 = 0;
    }
    else {
      lVar12 = param_1 + _DAT_1127595f0;
      _objc_loadWeakRetained(lVar12);
      uVar14 = *(undefined8 *)(param_1 + _DAT_112759608);
      _objc_retain(uVar14);
      lVar13 = param_1 + _DAT_1127595f4;
      _objc_loadWeakRetained(lVar13);
      lVar10 = param_1 + _DAT_1127595f8;
      _objc_loadWeakRetained(lVar10);
      lVar8 = param_1 + _DAT_1127595fc;
      _objc_loadWeakRetained(lVar8);
      lVar11 = param_1 + _DAT_112759600;
      _objc_loadWeakRetained();
    }
    func_0x00010c042180(puVar3,param_2,lVar12,uVar14,lVar4,lVar13,lVar10,lVar8,lVar11);
    lVar7 = (long)_DAT_1127595e8;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(lVar13);
    _objc_release(lVar12);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    _objc_retain(uVar5);
    uVar14 = *(undefined8 *)(param_1 + _DAT_112759608);
    _objc_retain(uVar14);
    _objc_retain(uVar5);
    _objc_retain(uVar14);
    lVar12 = lVar1;
    func_0x00010c0949a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d2f20();
    _objc_release(lVar12);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar14);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar2);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_release(lVar9);
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106b9c7a4; end: 106b9c7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9c7a4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127595ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b9c7c8; end: 106b9c7f7;  */

void FUN_106b9c7c8(void)

{
  _objc_alloc(PTR_PTR_1126b6890);
  func_0x00010c042040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b9c7f8; end: 106b9c7ff;  */

undefined8 FUN_106b9c7f8(void)

{
  return 0;
}



/* Entry: 106b9c800; end: 106b9c87f;  */

void FUN_106b9c800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c10c800(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


