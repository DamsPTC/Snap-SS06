/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e30de4; end: 104e30e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e30de4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271400c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e30e28; end: 104e30e5b; -[SCPublicProfileManagementViewController viewDidLoad] */

void FUN_104e30e28(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e46f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 104e30e5c; end: 104e30ea3; -[SCPublicProfileManagementViewController viewWillAppear:] */

void FUN_104e30e5c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e46f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 104e30ea4; end: 104e30ef3; -[SCPublicProfileManagementViewController viewDidAppear:] */

void FUN_104e30ea4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e46f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1cbec0(param_1);
  func_0x00010be2e960(param_1);
  return;
}



/* Entry: 104e30ef4; end: 104e30f9b; -[SCPublicProfileManagementViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e30ef4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112714074;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfea060();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271407c);
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef1580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1520();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_38 = PTR_PTR_1126e46f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e30f9c; end: 104e30fa3; -[SCPublicProfileManagementViewController prefersStatusBarHidden] */

undefined8 FUN_104e30f9c(void)

{
  return 0;
}



/* Entry: 104e30fa4; end: 104e30fa7; -[SCPublicProfileManagementViewController preferredStatusBarStyle] */

undefined8 FUN_104e30fa4(long param_1)

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



/* Entry: 104e30fa8; end: 104e3105b; -[SCPublicProfileManagementViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_104e30fa8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e46f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e3105c; end: 104e312e7; -[SCPublicProfileManagementViewController _businessProfileChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3105c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112714050);
  lVar1 = param_3;
  func_0x00010bf25020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010681dc64(uVar8,lVar1,0,*(undefined8 *)(param_1 + _DAT_11271405c),
                      *(undefined8 *)(param_1 + _DAT_112714060),
                      *(undefined8 *)(param_1 + _DAT_112714064),
                      *(undefined8 *)(param_1 + _DAT_11271400c),
                      *(undefined8 *)(param_1 + _DAT_112714018),
                      *(undefined8 *)(param_1 + _DAT_11271404c),
                      *(undefined8 *)(param_1 + _DAT_11271401c),
                      *(undefined4 *)(param_1 + _DAT_112714024));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2954c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + _DAT_112714078);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      lVar4 = param_3;
      func_0x00010bf25020();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f95a0(uVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_112714078),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 104e312e8; end: 104e312f7; -[SCPublicProfileManagementViewController _removeBusinessProfileObserverWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e312e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714078),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 104e312f8; end: 104e3144f; -[SCPublicProfileManagementViewController _handlePushNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e312f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112714010;
  uVar6 = *(ulong *)(param_1 + lVar7);
  if (uVar6 != 0) {
    _objc_retain(uVar6);
    uVar1 = uVar6;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112714014);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar6);
      func_0x00010bfd3260(uVar5);
      _objc_release(uVar5);
      _objc_release(uVar6);
    }
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = 0;
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  return;
}



/* Entry: 104e31450; end: 104e314db;  */

void FUN_104e31450(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c2a14c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 104e314dc; end: 104e314ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e314dc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c235a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112714080),
             PTR_s_showActivityFeedForBusinessProfi_11266b0a8,param_2,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 104e31500; end: 104e315a3; -[SCPublicProfileManagementViewController _createProfileSwitcherContextWithScopeDelegate:cofStore:] */

void FUN_104e31500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0ff8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126b0ff8;
  _objc_alloc_init(PTR_PTR_1126b0ff8);
  func_0x00010c1e4380();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b1000;
  _objc_alloc(PTR_PTR_1126b1000);
  func_0x00010c03a380();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e315a4; end: 104e3162f; -[SCPublicProfileManagementViewController _onCommunityPillTap:withUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e315a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1008;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0190e0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112714084),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e31630; end: 104e31687; -[SCPublicProfileManagementViewController didCompleteCommunityPillTapScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e31630(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112714084;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e31688; end: 104e3168f; -[SCPublicProfileManagementViewController pageViewName] */

undefined8 FUN_104e31688(void)

{
  return 0xe0;
}



/* Entry: 104e31690; end: 104e3184f; -[SCPublicProfileManagementViewController addSnapToBusinessStory:] */

void FUN_104e31690(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar4 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar2);
      uVar2 = uVar4;
      func_0x00010c08fa60();
      if (uVar2 != 0) {
        puVar3 = PTR_PTR_1126b1010;
        _objc_alloc();
        func_0x00010c02ec80();
        func_0x00010c1745a0();
        func_0x00010c1d86a0(puVar3);
        _objc_initWeak(auStack_48,param_1);
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_104e31850;
        puStack_60 = &UNK_110841fb0;
        _objc_copyWeak(auStack_50,auStack_48);
        puStack_58 = puVar3;
        func_0x0001000d76cc("APPSTORE",&puStack_78);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
        _objc_release(puVar3);
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104e31850; end: 104e31907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e31850(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112714070);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c271e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23680(uVar3,param_2,lVar1,uVar2,lVar1,1,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + _DAT_11271406c),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e31908; end: 104e3190b; -[SCPublicProfileManagementViewController getFriends:] */

void FUN_104e31908(void)

{
  return;
}



/* Entry: 104e3190c; end: 104e31b0f; -[SCPublicProfileManagementViewController observeBusinessProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104e3190c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **unaff_x24;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _arc4random();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0dfd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112714078));
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (1 < uVar2) {
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126b1018;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104e31b10;
    puStack_70 = &UNK_110852bf0;
    unaff_x24 = &puStack_88;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar1);
    puStack_68 = puVar1;
    func_0x00010beef280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f95a0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(puStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 5);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  lVar5 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar5);
  func_0x00010be8b860();
  _objc_release(lVar5);
  return 0;
}



/* Entry: 104e31b10; end: 104e31b4b;  */

undefined8 FUN_104e31b10(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b860();
  _objc_release(param_1);
  return 0;
}



/* Entry: 104e31b4c; end: 104e31e37; -[SCPublicProfileManagementViewController reloadManagedBusinessProfiles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e31b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112714050;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf25180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf25180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfda1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf25180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c2a14c0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = (long)_DAT_112714074;
  uVar3 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfea080();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104e31e38; end: 104e31edf; -[SCPublicProfileManagementViewController dismissViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e31e38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e46f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dismissViewControllerAnimated_co_1125bec68);
  lVar1 = param_1 + _DAT_112714074;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfea0a0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271407c);
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef1580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1540();
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104e31ee0; end: 104e31fbf; -[SCPublicProfileManagementViewController dismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e31ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + _DAT_112714074;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfea0a0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271407c);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef1580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1540();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    puStack_38 = PTR_PTR_1126e46f8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_dismiss__1125be580,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104e31fc0; end: 104e32017; -[SCPublicProfileManagementViewController dismissCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e31fc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271406c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e32018; end: 104e32023; -[SCPublicProfileManagementViewController defaultProjectNameV2] */

void FUN_104e32018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_creators_1125b48c0);
  return;
}



/* Entry: 104e32024; end: 104e3202b; -[SCPublicProfileManagementViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_104e32024(void)

{
  return 0;
}



/* Entry: 104e3202c; end: 104e32033; -[SCPublicProfileManagementViewController shouldDismissViewControllerLater] */

undefined8 FUN_104e3202c(void)

{
  return 1;
}



/* Entry: 104e32034; end: 104e3203b; -[SCPublicProfileManagementViewController shouldPopToRootViewController] */

undefined8 FUN_104e32034(void)

{
  return 0;
}



/* Entry: 104e3203c; end: 104e32043; -[SCPublicProfileManagementViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_104e3203c(void)

{
  return 1;
}



/* Entry: 104e32044; end: 104e3204b; -[SCPublicProfileManagementViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_104e32044(void)

{
  return 1;
}



/* Entry: 104e3204c; end: 104e320cb; -[SCPublicProfileManagementViewController viewControllerDismissSelf] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3204c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_112714074;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfea0a0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271407c);
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef1580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1540();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e320cc; end: 104e321d3; -[SCPublicProfileManagementViewController navigationController:animationControllerForOperation:fromViewController:toViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e320cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar3 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_4 == 2) && (*(char *)(param_1 + _DAT_112714020) == '\x01')) {
    lVar4 = (long)_DAT_112714088;
    plVar3 = *(long **)(param_1 + lVar4);
    if (plVar3 == (long *)0x0) {
      puVar1 = PTR_PTR_1126b1020;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar2);
      plVar3 = *(long **)(param_1 + lVar4);
    }
    _objc_retain(plVar3);
  }
  else {
    puStack_48 = PTR_PTR_1126e46f8;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_navigationController_animationCo_112526758,param_3,param_4,
                        param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104e321d4; end: 104e321db; -[SCPublicProfileManagementViewController shouldBeginInteractiveDismissal] */

undefined8 FUN_104e321d4(void)

{
  return 0;
}



/* Entry: 104e321dc; end: 104e322db; -[SCPublicProfileManagementViewController _updateNotificationSettingsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e321dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271400c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8520(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e322dc; end: 104e32307;  */

void FUN_104e322dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e32308; end: 104e3238b; -[SCPublicProfileManagementViewController _performNotificationSettingsChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e32308(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0dc3a0();
  lVar2 = (long)_DAT_11271400c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185f00();
  _objc_release(uVar1);
  func_0x00010c0dc3c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e3238c; end: 104e3239b; -[SCPublicProfileManagementViewController notificationMidrollOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104e3238c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112713ffc);
}



/* Entry: 104e3239c; end: 104e323ab; -[SCPublicProfileManagementViewController setNotificationMidrollOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3239c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112713ffc) = param_3;
  return;
}



/* Entry: 104e323ac; end: 104e323bb; -[SCPublicProfileManagementViewController notificationMilestoneOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104e323ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112714000);
}



/* Entry: 104e323bc; end: 104e323cb; -[SCPublicProfileManagementViewController setNotificationMilestoneOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e323bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112714000) = param_3;
  return;
}



/* Entry: 104e323cc; end: 104e325d7; -[SCPublicProfileManagementViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e323cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714008,0);
  _objc_storeStrong(param_1 + _DAT_112714048,0);
  _objc_storeStrong(param_1 + _DAT_112714044,0);
  _objc_storeStrong(param_1 + _DAT_112714040,0);
  _objc_storeStrong(param_1 + _DAT_11271403c,0);
  _objc_storeStrong(param_1 + _DAT_112714038,0);
  _objc_storeStrong(param_1 + _DAT_112714084,0);
  _objc_storeStrong(param_1 + _DAT_11271408c,0);
  _objc_storeStrong(param_1 + _DAT_112714034,0);
  _objc_storeStrong(param_1 + _DAT_112714030,0);
  _objc_storeStrong(param_1 + _DAT_11271402c,0);
  _objc_storeStrong(param_1 + _DAT_112714028,0);
  _objc_storeStrong(param_1 + _DAT_11271404c,0);
  _objc_storeStrong(param_1 + _DAT_112714018,0);
  _objc_storeStrong(param_1 + _DAT_11271400c,0);
  _objc_storeStrong(param_1 + _DAT_112714070,0);
  _objc_storeStrong(param_1 + _DAT_11271406c,0);
  _objc_storeStrong(param_1 + _DAT_112714088,0);
  _objc_destroyWeak(param_1 + _DAT_112714074);
  _objc_storeStrong(param_1 + _DAT_112714068,0);
  _objc_storeStrong(param_1 + _DAT_112714058,0);
  _objc_storeStrong(param_1 + _DAT_112714064,0);
  _objc_storeStrong(param_1 + _DAT_112714060,0);
  _objc_storeStrong(param_1 + _DAT_112714080,0);
  _objc_storeStrong(param_1 + _DAT_11271407c,0);
  _objc_storeStrong(param_1 + _DAT_112714078,0);
  _objc_storeStrong(param_1 + _DAT_112714014,0);
  _objc_storeStrong(param_1 + _DAT_112714010,0);
  _objc_storeStrong(param_1 + _DAT_11271405c,0);
  _objc_storeStrong(param_1 + _DAT_112714054,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714050,0);
  return;
}



/* Entry: 104e325d8; end: 104e32913; -[SCUnifiedPublicProfilesPresenterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e325d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112714090);
  *(undefined **)(param_1 + _DAT_112714090) = puVar1;
  _objc_release(uVar16);
  lVar18 = (long)_DAT_112714094;
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c280220();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112714098;
  _objc_storeWeak(param_1 + lVar17,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = param_1 + lVar18;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  func_0x00010c137a20();
  if ((uVar5 & 1) == 0) {
    _objc_release(uVar4);
  }
  else {
    uVar5 = param_1 + lVar17;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    _objc_opt_respondsToSelector();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) != 0) {
      puVar7 = (undefined *)(param_1 + lVar18);
      _objc_loadWeakRetained(puVar7);
      puVar8 = puVar7;
      func_0x00010c280220();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar8;
      func_0x00010c10fe60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      lVar2 = param_1 + lVar18;
      _objc_loadWeakRetained();
      lVar9 = lVar2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + lVar18;
      _objc_loadWeakRetained();
      lVar11 = lVar3;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1 + lVar18;
      _objc_loadWeakRetained(lVar17);
      lVar13 = lVar17;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b840();
      lVar18 = param_1 + lVar18;
      _objc_loadWeakRetained(lVar18);
      lVar14 = lVar18;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2801e0(param_1);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar18);
      _objc_release(lVar13);
      _objc_release(lVar17);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar3);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar2);
      goto LAB_104e328d0;
    }
  }
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1028;
  _objc_alloc(PTR_PTR_1126b1028);
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar18);
  lVar17 = lVar18;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058260(puVar1);
  _objc_release(lVar17);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271409c));
LAB_104e328d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e32914; end: 104e329b3; -[SCUnifiedPublicProfilesPresenterEntryPoint unifiedPublicProfileScopeWasExposed:withViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e32914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112714090));
  lVar3 = (long)_DAT_112714098;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c280260();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e329b4; end: 104e32a33; -[SCUnifiedPublicProfilesPresenterEntryPoint unifiedPublicProfileDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e329b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_112714090;
  func_0x00010c12d360(*(undefined8 *)(param_1 + lVar1));
  lVar1 = *(long *)(param_1 + lVar1);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar2 = (long)_DAT_112714098;
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      param_1 = param_1 + lVar2;
      _objc_loadWeakRetained(param_1);
      func_0x00010c280240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 104e32a34; end: 104e32aab; -[SCUnifiedPublicProfilesPresenterEntryPoint unifiedPublicProfileDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e32a34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112714098;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2802c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e32aac; end: 104e32e53; -[SCUnifiedPublicProfilesPresenterEntryPoint unifiedPublicProfileShouldPresentProfileWithId:withLoggingInfo:isPublisherProfile:onViewController:userId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e32aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
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
  undefined *puVar23;
  long lVar24;
  
  puVar1 = PTR_PTR_1126b0f18;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar24 = (long)_DAT_112714094;
  uVar2 = param_1 + lVar24;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1117c0();
  uVar5 = param_1 + lVar24;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c237bc0();
  uVar8 = param_1 + lVar24;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c078840();
  lVar11 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0cfbe0();
  lVar14 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c0e33c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072b60();
  lVar19 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c08bdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9dc0(puVar1,param_2,param_3,param_4,uVar4 & 0xffffffff,uVar7 & 0xffffffff,
                      uVar10 & 0xffffffff,lVar13,lVar16,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar11 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar11);
  lVar14 = lVar11;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010c0dac80();
  func_0x00010c1cd960(puVar1,param_2,lVar17);
  _objc_release(lVar14);
  _objc_release(lVar11);
  lVar11 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar11);
  lVar14 = lVar11;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010c0dacc0();
  func_0x00010c1cd9a0(puVar1,param_2,lVar17);
  _objc_release(lVar14);
  _objc_release(lVar11);
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar24);
  lVar11 = lVar24;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar11);
  _objc_release(lVar24);
  puVar22 = PTR_PTR_1126b1030;
  _objc_alloc(PTR_PTR_1126b1030);
  func_0x00010c039440();
  _objc_release(param_6);
  puVar23 = PTR_PTR_1126b1028;
  _objc_alloc(PTR_PTR_1126b1028);
  func_0x00010c058260();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271409c),param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e32e54; end: 104e32e57; -[SCUnifiedPublicProfilesPresenterEntryPoint swipeInteractionPresenter:didStartPresentingWithSwipeDirection:] */

void FUN_104e32e54(void)

{
  return;
}



/* Entry: 104e32e58; end: 104e32e5b; -[SCUnifiedPublicProfilesPresenterEntryPoint swipeInteractionPresenterDidFinishDismissing:] */

void FUN_104e32e58(void)

{
  return;
}



/* Entry: 104e32e5c; end: 104e32e63; -[SCUnifiedPublicProfilesPresenterEntryPoint swipeInteractionPresenter:swipeEnabledWithDirection:] */

undefined8 FUN_104e32e5c(void)

{
  return 0;
}



/* Entry: 104e32e64; end: 104e32ec7; -[SCUnifiedPublicProfilesPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e32e64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127140a0);
  _objc_storeStrong(param_1 + _DAT_11271409c,0);
  _objc_destroyWeak(param_1 + _DAT_112714094);
  _objc_destroyWeak(param_1 + _DAT_112714098);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714090,0);
  return;
}



/* Entry: 104e32ec8; end: 104e33997; -[SCSnapInsightsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e32ec8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  undefined *puVar19;
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
  long lVar47;
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
  undefined *puVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar1 = PTR_PTR_1126b1038;
  _objc_alloc();
  lVar69 = (long)_DAT_1127140a4;
  lVar2 = param_1 + lVar69;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c049560(puVar1,param_2,lVar2,0x82,3);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b0e18;
  _objc_alloc();
  lVar70 = (long)_DAT_1127140a8;
  lVar2 = param_1 + lVar70;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127140ac;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_1127140b0;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c05e0c0(puVar3,param_2,lVar4,lVar5,lVar6,0x82);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b0e20;
  _objc_alloc();
  lVar2 = param_1 + lVar70;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar69;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c05e640(puVar7,param_2,lVar6,lVar5,*(undefined8 *)(param_1 + _DAT_1127140b4));
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b0e10;
  _objc_alloc();
  lVar2 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = (long)_DAT_1127140b8;
  lVar5 = param_1 + lVar64;
  _objc_loadWeakRetained();
  lVar10 = lVar5;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127140bc;
  _objc_loadWeakRetained();
  lVar12 = lVar6;
  func_0x00010c2426c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar69;
  _objc_loadWeakRetained(lVar4);
  lVar13 = lVar4;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = (long)_DAT_1127140c0;
  lVar14 = param_1 + lVar65;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_1127140c4;
  _objc_loadWeakRetained(lVar16);
  lVar17 = lVar16;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ddc0(puVar8,param_2,lVar9,lVar11,lVar12,lVar13,lVar15,lVar17);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar2);
  lVar68 = (long)_DAT_1127140c8;
  lVar2 = param_1 + lVar68;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar6;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar19 = PTR_PTR_1126b1040;
  _objc_alloc();
  lVar70 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar20 = lVar70;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127140cc;
  _objc_loadWeakRetained();
  lVar21 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_1127140d0;
  lVar5 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar22 = lVar5;
  func_0x00010c241740();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar24 = lVar6;
  func_0x00010c241740();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar26 = lVar4;
  func_0x00010c241740();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar28 = lVar65;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127140d4;
  _objc_loadWeakRetained();
  lVar29 = lVar14;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar30 = lVar16;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar31 = lVar9;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar32 = lVar10;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar33 = lVar11;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar34 = lVar12;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar35 = lVar69;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = (long)_DAT_1127140d8;
  lVar13 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar36 = lVar13;
  func_0x00010bf50180();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_1127140dc;
  _objc_loadWeakRetained();
  lVar37 = lVar15;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_1127140e0;
  _objc_loadWeakRetained();
  lVar38 = lVar17;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_1127140e4;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_1127140e8;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_1127140ec;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar44;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_1127140f0;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = param_1 + lVar68;
  _objc_loadWeakRetained();
  lVar48 = lVar68;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_1127140f4;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010c2417a0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + lVar64;
  _objc_loadWeakRetained();
  lVar53 = lVar64;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_1127140f8;
  _objc_loadWeakRetained();
  lVar55 = param_1 + _DAT_1127140fc;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar57 = lVar67;
  func_0x00010bfb9e40();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_112714100;
  _objc_loadWeakRetained();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e33998;
  puStack_78 = &UNK_110852c50;
  puVar59 = PTR_PTR_1126ae720;
  lStack_70 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + _DAT_112714108;
  _objc_loadWeakRetained();
  lVar61 = lVar60;
  func_0x00010c25adc0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + _DAT_11271410c;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010bf5b4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d2e0(puVar19,param_2,lVar20,lVar21,lVar23,lVar25,lVar27,0,0,0,puVar8,lVar28,puVar1,
                      puVar3,lVar29,lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,lVar36,lVar37,lVar38,
                      lVar40,lVar42,puVar7,lVar45,lVar47,lVar48,lVar18,lVar50,lVar52,lVar53,1);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(puVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar67);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar64);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar68);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar17);
  _objc_release(lVar37);
  _objc_release(lVar15);
  _objc_release(lVar36);
  _objc_release(lVar13);
  _objc_release(lVar35);
  _objc_release(lVar69);
  _objc_release(lVar34);
  _objc_release(lVar12);
  _objc_release(lVar33);
  _objc_release(lVar11);
  _objc_release(lVar32);
  _objc_release(lVar10);
  _objc_release(lVar31);
  _objc_release(lVar9);
  _objc_release(lVar30);
  _objc_release(lVar16);
  _objc_release(lVar29);
  _objc_release(lVar14);
  _objc_release(lVar28);
  _objc_release(lVar65);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar4);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar6);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar5);
  _objc_release(lVar21);
  _objc_release(lVar2);
  _objc_release(lVar20);
  _objc_release(lVar70);
  param_1 = param_1 + lVar66;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e33998; end: 104e33a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e33998(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112714104;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_1127140ec;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf55800(lVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 104e33a88; end: 104e33bef; -[SCSnapInsightsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e33a88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127140b4,0);
  _objc_destroyWeak(param_1 + _DAT_1127140b0);
  _objc_destroyWeak(param_1 + _DAT_1127140ac);
  _objc_destroyWeak(param_1 + _DAT_1127140e8);
  _objc_destroyWeak(param_1 + _DAT_1127140e4);
  _objc_destroyWeak(param_1 + _DAT_11271410c);
  _objc_destroyWeak(param_1 + _DAT_1127140c4);
  _objc_destroyWeak(param_1 + _DAT_112714108);
  _objc_destroyWeak(param_1 + _DAT_1127140f8);
  _objc_destroyWeak(param_1 + _DAT_1127140bc);
  _objc_destroyWeak(param_1 + _DAT_1127140a8);
  _objc_destroyWeak(param_1 + _DAT_1127140d4);
  _objc_destroyWeak(param_1 + _DAT_1127140e0);
  _objc_destroyWeak(param_1 + _DAT_1127140a4);
  _objc_destroyWeak(param_1 + _DAT_1127140d8);
  _objc_destroyWeak(param_1 + _DAT_1127140fc);
  _objc_destroyWeak(param_1 + _DAT_1127140c0);
  _objc_destroyWeak(param_1 + _DAT_1127140b8);
  _objc_destroyWeak(param_1 + _DAT_1127140f4);
  _objc_destroyWeak(param_1 + _DAT_1127140f0);
  _objc_destroyWeak(param_1 + _DAT_1127140c8);
  _objc_destroyWeak(param_1 + _DAT_1127140ec);
  _objc_destroyWeak(param_1 + _DAT_1127140cc);
  _objc_destroyWeak(param_1 + _DAT_112714104);
  _objc_destroyWeak(param_1 + _DAT_112714100);
  _objc_destroyWeak(param_1 + _DAT_1127140dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127140d0);
  return;
}



/* Entry: 104e33bf0; end: 104e33d23; -[SCDiscoverScanResultsSnapcodeViewModelProvider initWithParseScanPerformer:contentDeliveryServices:deeplinkHandler:discoverFeedLogger:] */

undefined1 *
FUN_104e33bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4700;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e33d24; end: 104e33d4f; -[SCDiscoverScanResultsSnapcodeViewModelProvider end] */

void FUN_104e33d24(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e33d50; end: 104e33d77; -[SCDiscoverScanResultsSnapcodeViewModelProvider scanResultViewModels] */

void FUN_104e33d50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e33d78; end: 104e33ed3; -[SCDiscoverScanResultsSnapcodeViewModelProvider configureWithContext:] */

void FUN_104e33d78(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c0cfc40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2;
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    lVar2 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104e33ed4; end: 104e33f1b;  */

void FUN_104e33ed4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e33f1c; end: 104e343f3; -[SCDiscoverScanResultsSnapcodeViewModelProvider _handleSnapcodeMetadata:] */

void FUN_104e33f1c(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 6) {
    puVar2 = PTR_PTR_1126b1048;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_98 = 0;
    func_0x00010c008360();
    lVar1 = lStack_98;
    _objc_retain(lStack_98);
    _objc_release(lVar3);
    if ((lVar1 == 0) && (puVar2 != (undefined *)0x0)) {
      puVar4 = PTR_PTR_1126ae560;
      _objc_alloc_init();
      puVar5 = puVar4;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfe5b40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_104e343f4;
      puStack_a8 = &UNK_11084d858;
      _objc_retain(puVar4);
      puStack_a0 = puVar4;
      func_0x00010be11a40(param_1);
      _objc_release(puVar6);
      ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be108;
      ppuVar7 = &PTR____CFConstantStringClassReference_110db6d98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6d98,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_88 = ppuVar7;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_initWeak(auStack_c8,param_1);
      puStack_f8 = puVar9;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_104e34400;
      puStack_e0 = &UNK_110841fb0;
      param_2 = auStack_c8;
      _objc_copyWeak(auStack_d0,param_2);
      _objc_retain(puVar2);
      ppuVar7 = &puStack_f8;
      puStack_d8 = puVar2;
      _objc_retainBlock();
      puVar8 = PTR_PTR_1126aef38;
      _objc_alloc();
      puVar9 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      puVar10 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      puVar11 = PTR_PTR_1126ae6b8;
      _objc_alloc_init(PTR_PTR_1126ae6b8);
      func_0x00010c0048e0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar10 = PTR_PTR_1126aef40;
      _objc_alloc(PTR_PTR_1126aef40);
      puVar9 = puVar2;
      func_0x00010bfdef60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126aef30;
      func_0x00010c25d9a0(PTR_PTR_1126aef30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020120(puVar10);
      _objc_release(puVar11);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126aef48;
      puVar11 = PTR_PTR_1126aef50;
      _objc_alloc(PTR_PTR_1126aef50);
      lVar3 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar3;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05a5c0(puVar11);
      func_0x00010c2453a0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar3);
      puVar11 = PTR_PTR_1126aef58;
      _objc_alloc(PTR_PTR_1126aef58);
      puVar14 = puVar11;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b920(puVar11);
      _objc_release(puVar15);
      _objc_release(puVar14);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(ppuVar7);
      _objc_release(puStack_d8);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_c8);
      _objc_release(puVar6);
      _objc_release(puStack_a0);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 104e343f4; end: 104e343ff;  */

void FUN_104e343f4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 104e34400; end: 104e34453;  */

void FUN_104e34400(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf68280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be010e0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e34454; end: 104e3460b; -[SCDiscoverScanResultsSnapcodeViewModelProvider _fetchIconWithURL:completion:] */

void FUN_104e34454(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong in_stack_ffffffffffffff88;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  puVar2 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  puVar3 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  uVar5 = param_3;
  func_0x00010c05a200(puVar2,param_2,param_3,0,0,0,0,0,param_3,
                      in_stack_ffffffffffffff88 & 0xffffffffffffff00,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e3460c;
  puStack_50 = &UNK_110852c80;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c1267e0(uVar4,param_2,puVar1,puVar2,0,0,puVar3,0,uVar5 & 0xffffffffffffff00,
                      &puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e3460c; end: 104e34673;  */

void FUN_104e3460c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  if ((param_3 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104e34670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104e34674; end: 104e34773; -[SCDiscoverScanResultsSnapcodeViewModelProvider _didTapOpenAction:] */

void FUN_104e34674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010beeee20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf6ad20(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e34774; end: 104e34817;  */

void FUN_104e34774(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104e34818;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e34818; end: 104e3484b;  */

void FUN_104e34818(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e3484c; end: 104e3484f;  */

void FUN_104e3484c(void)

{
  return;
}



/* Entry: 104e34850; end: 104e34a37; -[SCDiscoverScanResultsSnapcodeViewModelProvider _openDeepLinkToURL:] */

void FUN_104e34850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010beeee20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84020();
  _objc_release(uVar6);
  func_0x00010bf74280(*(undefined8 *)(param_1 + 0x38));
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar2);
  _objc_release(puVar3);
  uVar6 = 0;
  func_0x00010bb0a564(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar2);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  func_0x00010c057c40();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc2b80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1bc0(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x40,0);
  _objc_storeStrong(puVar1 + 0x38,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 104e34a38; end: 104e34aaf; -[SCDiscoverScanResultsSnapcodeViewModelProvider .cxx_destruct] */

void FUN_104e34a38(long param_1)

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



/* Entry: 104e34ab0; end: 104e34c33; -[SCDiscoverScanResultsSnapcodeViewModelProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e34ab0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b1070;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010be704c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112714130;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112714134;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112714138;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf82540();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034180(puVar1,param_2,lVar2,lVar4,lVar6,lVar9);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11271413c);
  *(undefined **)(param_1 + _DAT_11271413c) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112714140;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e34c34; end: 104e34cc7; -[SCDiscoverScanResultsSnapcodeViewModelProviderEntryPoint _parseScanPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e34c34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112714144;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e34cc8; end: 104e34d2b; -[SCDiscoverScanResultsSnapcodeViewModelProviderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e34cc8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_11271413c;
  func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e4708;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e34d2c; end: 104e34d97; -[SCDiscoverScanResultsSnapcodeViewModelProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e34d2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714134);
  _objc_destroyWeak(param_1 + _DAT_112714138);
  _objc_destroyWeak(param_1 + _DAT_112714130);
  _objc_destroyWeak(param_1 + _DAT_112714144);
  _objc_destroyWeak(param_1 + _DAT_112714140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271413c,0);
  return;
}



/* Entry: 104e34d98; end: 104e3576b; -[SCOurStoryDeepLinkHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e34d98(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
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
  long lVar47;
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
  ulong uVar60;
  undefined *puVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  undefined8 uVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  
  uVar73 = param_1 + _DAT_112714148;
  uVar1 = uVar73;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10fdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    puVar4 = PTR_PTR_1126b1078;
    _objc_alloc();
    lVar5 = param_1 + _DAT_11271414c;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112714150;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112714154;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c0cf020();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112714158;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bfb7c20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11271415c;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_112714160;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c2587e0();
    _objc_retainAutoreleasedReturnValue();
    lVar76 = (long)_DAT_112714164;
    lVar17 = param_1 + lVar76;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    lVar76 = param_1 + lVar76;
    _objc_loadWeakRetained();
    lVar19 = lVar76;
    func_0x00010c08d320();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_112714168;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_11271416c;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar77 = (long)_DAT_112714170;
    lVar24 = param_1 + lVar77;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + _DAT_112714174;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar77 = param_1 + lVar77;
    _objc_loadWeakRetained();
    lVar28 = lVar77;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = param_1 + _DAT_112714178;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010bf9e260();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = param_1 + _DAT_112714184;
    _objc_loadWeakRetained();
    lVar32 = param_1 + _DAT_112714188;
    _objc_loadWeakRetained();
    lVar33 = lVar32;
    func_0x00010c14a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = param_1 + _DAT_11271418c;
    _objc_loadWeakRetained();
    lVar35 = lVar34;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar73;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c150700();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = param_1 + _DAT_112714198;
    _objc_loadWeakRetained();
    lVar37 = lVar36;
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = param_1 + _DAT_1127141c8;
    _objc_loadWeakRetained();
    lVar39 = lVar38;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = param_1 + _DAT_11271419c;
    _objc_loadWeakRetained();
    lVar41 = lVar40;
    func_0x00010c0dc400();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = param_1 + _DAT_1127141a0;
    _objc_loadWeakRetained();
    lVar43 = param_1 + _DAT_1127141a4;
    _objc_loadWeakRetained();
    lVar44 = lVar43;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = param_1 + _DAT_1127141a8;
    _objc_loadWeakRetained();
    lVar46 = lVar45;
    func_0x00010c131960();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = param_1 + _DAT_1127141ac;
    _objc_loadWeakRetained();
    lVar48 = lVar47;
    func_0x00010bfab9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar78 = (long)_DAT_1127141b0;
    lVar49 = param_1 + lVar78;
    _objc_loadWeakRetained();
    lVar50 = lVar49;
    func_0x00010c24c220();
    _objc_retainAutoreleasedReturnValue();
    lVar78 = param_1 + lVar78;
    _objc_loadWeakRetained();
    lVar51 = lVar78;
    func_0x00010c24ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar52 = param_1 + _DAT_1127141b4;
    _objc_loadWeakRetained();
    lVar53 = lVar52;
    func_0x00010c112f80();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = param_1 + _DAT_1127141b8;
    _objc_loadWeakRetained();
    lVar55 = lVar54;
    func_0x00010c08d460();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = param_1 + _DAT_1127141bc;
    _objc_loadWeakRetained();
    lVar57 = lVar56;
    func_0x00010bf534e0();
    _objc_retainAutoreleasedReturnValue();
    lVar58 = param_1 + _DAT_1127141c0;
    _objc_loadWeakRetained();
    lVar59 = lVar58;
    func_0x00010c0f14e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e140();
    lVar79 = (long)_DAT_1127141c4;
    uVar75 = *(undefined8 *)(param_1 + lVar79);
    *(undefined **)(param_1 + lVar79) = puVar4;
    _objc_release(uVar75);
    _objc_release(lVar59);
    _objc_release(lVar58);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar78);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar77);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar76);
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
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    uVar3 = uVar73;
    _objc_loadWeakRetained();
    uVar62 = uVar3;
    func_0x00010bf68280();
    _objc_retainAutoreleasedReturnValue();
    uVar63 = uVar73;
    _objc_loadWeakRetained();
    uVar60 = uVar63;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar62;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar60);
    _objc_release(uVar63);
    _objc_release(uVar62);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    func_0x00010c04e820();
    puVar61 = PTR_PTR_1126b1068;
    _objc_alloc(PTR_PTR_1126b1068);
    func_0x00010c057c40();
    uVar75 = *(undefined8 *)(param_1 + lVar79);
    uVar3 = uVar73;
    _objc_loadWeakRetained();
    uVar62 = uVar3;
    func_0x00010befd100();
    _objc_retainAutoreleasedReturnValue();
    uVar63 = uVar73;
    _objc_loadWeakRetained();
    func_0x00010c07e340();
    uVar60 = uVar73;
    _objc_loadWeakRetained();
    func_0x00010c0f1e60();
    uVar64 = uVar73;
    _objc_loadWeakRetained();
    func_0x00010bf420a0();
    uVar65 = uVar73;
    _objc_loadWeakRetained();
    uVar66 = uVar65;
    func_0x00010bf16300();
    _objc_retainAutoreleasedReturnValue();
    uVar67 = uVar73;
    _objc_loadWeakRetained();
    uVar68 = uVar67;
    func_0x00010c25a7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar69 = uVar73;
    _objc_loadWeakRetained();
    uVar70 = uVar69;
    func_0x00010c10a700();
    _objc_retainAutoreleasedReturnValue();
    uVar71 = uVar73;
    _objc_loadWeakRetained();
    uVar72 = uVar71;
    func_0x00010bfdedc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    uVar74 = uVar73;
    func_0x00010c0d2fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0c20(uVar75);
    _objc_release(uVar74);
    _objc_release(uVar73);
    _objc_release(uVar72);
    _objc_release(uVar71);
    _objc_release(uVar70);
    _objc_release(uVar69);
    _objc_release(uVar68);
    _objc_release(uVar67);
    _objc_release(uVar66);
    _objc_release(uVar65);
    _objc_release(uVar64);
    _objc_release(uVar60);
    _objc_release(uVar63);
    _objc_release(uVar62);
    _objc_release(uVar3);
    _objc_release(puVar61);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e3576c; end: 104e3592b; -[SCOurStoryDeepLinkHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e3576c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714194,0);
  _objc_storeStrong(param_1 + _DAT_112714190,0);
  _objc_storeStrong(param_1 + _DAT_11271417c,0);
  _objc_storeStrong(param_1 + _DAT_112714180,0);
  _objc_destroyWeak(param_1 + _DAT_1127141a8);
  _objc_destroyWeak(param_1 + _DAT_1127141a4);
  _objc_destroyWeak(param_1 + _DAT_112714184);
  _objc_destroyWeak(param_1 + _DAT_1127141c0);
  _objc_destroyWeak(param_1 + _DAT_1127141b8);
  _objc_destroyWeak(param_1 + _DAT_1127141b4);
  _objc_destroyWeak(param_1 + _DAT_1127141ac);
  _objc_destroyWeak(param_1 + _DAT_1127141a0);
  _objc_destroyWeak(param_1 + _DAT_11271414c);
  _objc_destroyWeak(param_1 + _DAT_1127141c8);
  _objc_destroyWeak(param_1 + _DAT_11271419c);
  _objc_destroyWeak(param_1 + _DAT_112714198);
  _objc_destroyWeak(param_1 + _DAT_112714150);
  _objc_destroyWeak(param_1 + _DAT_112714170);
  _objc_destroyWeak(param_1 + _DAT_112714154);
  _objc_destroyWeak(param_1 + _DAT_112714160);
  _objc_destroyWeak(param_1 + _DAT_112714164);
  _objc_destroyWeak(param_1 + _DAT_11271418c);
  _objc_destroyWeak(param_1 + _DAT_112714188);
  _objc_destroyWeak(param_1 + _DAT_112714174);
  _objc_destroyWeak(param_1 + _DAT_112714178);
  _objc_destroyWeak(param_1 + _DAT_1127141b0);
  _objc_destroyWeak(param_1 + _DAT_11271415c);
  _objc_destroyWeak(param_1 + _DAT_112714158);
  _objc_destroyWeak(param_1 + _DAT_11271416c);
  _objc_destroyWeak(param_1 + _DAT_1127141bc);
  _objc_destroyWeak(param_1 + _DAT_112714168);
  _objc_destroyWeak(param_1 + _DAT_112714148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127141c4,0);
  return;
}



/* Entry: 104e3592c; end: 104e3594f; -[BatchSnapStatsByStoryType getSpotlightStoryType] */

uint FUN_104e3592c(uint param_1)

{
  func_0x00010c25b720();
  if (param_1 != 5) {
    param_1 = (uint)(param_1 == 1);
  }
  return param_1;
}



/* Entry: 104e35950; end: 104e35973; -[BatchSnapStatsByStoryType setSpotlightStoryType:] */

void FUN_104e35950(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 < 6) && ((1 << (ulong)(param_3 & 0x1f) & 0x23U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c20ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStoryType__112661198);
    return;
  }
  return;
}



/* Entry: 104e35974; end: 104e359c7; +[SCCORECompositeStoryId ourStoryCompositeStoryId] */

void FUN_104e35974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1080;
  _objc_opt_new(PTR_PTR_1126b1080);
  func_0x00010c1a99c0();
  func_0x00010c1843a0(puVar1,param_2,0x1f);
  func_0x00010c220e20(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e359c8; end: 104e359e3; -[SCCORECompositeStoryId isOurStoryFeed] */

bool FUN_104e359c8(int param_1)

{
  func_0x00010bf52680();
  return param_1 == 0x1f;
}



/* Entry: 104e359e4; end: 104e35d63; -[SCSpotlightManagementProfileActionHandler initWithSpotlightManagementScopeExposer:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:storyShareScopeServices:spotlightNavigationDelegate:myStoriesDataCoordinator:spotlightPresenter:userSession:valdiRuntimeProvider:snapTokenProvider:ourStoriesAttributionManager:userInfoServices:userProfileIdProvider:profileOnboardingScopeExposer:] */

undefined8 *
FUN_104e359e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

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
  puStack_70 = PTR_PTR_1126e4710;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[7];
    puVar1[7] = param_18;
    _objc_release(uVar2);
  }
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



/* Entry: 104e35d64; end: 104e35ecb; -[SCSpotlightManagementProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_104e35d64(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar5 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar5 != 0) {
        uVar5 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b1088;
        _objc_opt_class(PTR_PTR_1126b1088);
        uVar4 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar3);
        uVar1 = uVar5;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar5);
        uVar5 = (ulong)(uVar1 != 0);
        if (uVar1 != 0) {
          func_0x00010be79e20(param_1);
        }
        _objc_release(uVar1);
      }
      goto LAB_104e35e18;
    }
    lVar2 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be79da0(param_1);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bee9280(param_1);
  }
  uVar5 = 1;
LAB_104e35e18:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 104e35ecc; end: 104e35f13; -[SCSpotlightManagementProfileActionHandler spotlightManagementDidDismiss] */

void FUN_104e35ecc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e35f14; end: 104e35f1f; -[SCSpotlightManagementProfileActionHandler spotlightManagementRetrySnapUploadWithStoryId:clientId:] */

void FUN_104e35f14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_retryStoryPostWithClientId__11262d8a0,param_4);
  return;
}



/* Entry: 104e35f20; end: 104e35fc7; -[SCSpotlightManagementProfileActionHandler spotlightManagementPlaySnapWith:fromSourceView:presentingViewController:playbackCompletion:] */

void FUN_104e35f20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010010fab4(param_5,PTR_DAT_1126a4e58);
  if ((param_5 != 0) && ((int)lVar1 != 0)) {
    func_0x00010c10e520(*(undefined8 *)(param_1 + 0x40));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e35fc8; end: 104e35fcb; -[SCSpotlightManagementProfileActionHandler spotlightManagementDeleteSnapWith:clientId:serverId:posterGuid:presentingViewController:] */

void FUN_104e35fc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteSnapForStoryId_snapClient_11255c350);
  return;
}



/* Entry: 104e35fcc; end: 104e36083; -[SCSpotlightManagementProfileActionHandler _viewAllSnapsFromActionMenuWithActionSheet:] */

void FUN_104e35fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83000(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104e36084; end: 104e360af;  */

void FUN_104e36084(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e360b0; end: 104e3613f; -[SCSpotlightManagementProfileActionHandler _viewAllSnaps] */

void FUN_104e360b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1090;
  _objc_alloc(PTR_PTR_1126b1090);
  func_0x00010c00afc0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e36140; end: 104e361f7; -[SCSpotlightManagementProfileActionHandler _presentImpalaProfileOnboardingFromActionMenuWithActionSheet:] */

void FUN_104e36140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83000(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104e361f8; end: 104e36223;  */

void FUN_104e361f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e36224; end: 104e3636b; -[SCSpotlightManagementProfileActionHandler _presentImpalaProfileOnboarding] */

void FUN_104e36224(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x90;
    _objc_loadWeakRetained();
    puVar2 = PTR_PTR_1126aeaf8;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    _objc_alloc();
    func_0x00010c0311a0();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b1098;
    _objc_alloc(PTR_PTR_1126b1098);
    func_0x00010c058a20();
    func_0x00010bf9d620(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 104e3636c; end: 104e363c3;  */

void FUN_104e3636c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1c8b80(param_2);
  func_0x00010c1c8c00(param_2);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e363c4; end: 104e363d3;  */

void FUN_104e363c4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             param_2);
  return;
}



/* Entry: 104e363d4; end: 104e363f3;  */

void FUN_104e363d4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104e363f4; end: 104e3671b; -[SCSpotlightManagementProfileActionHandler _presentActionMenuFromViewController:] */

void FUN_104e363f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = *(undefined1 **)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf2c720();
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126b10a0;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)puVar3 != 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db6e18;
    func_0x0001052c56b4(&PTR____CFConstantStringClassReference_110db6e18,
                        &PTR____CFConstantStringClassReference_110db6e38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar7;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104e3671c;
    puStack_88 = &UNK_110852cd0;
    _objc_copyWeak(auStack_80,auStack_78);
    puVar6 = puVar5;
    func_0x00010bf1d200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
    puVar2 = auStack_80;
    _objc_destroyWeak(puVar2);
  }
  puVar5 = PTR_PTR_1126b10a0;
  func_0x000104e42174();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar7;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x104e36764;
  puStack_b0 = &UNK_110852cd0;
  _objc_copyWeak(auStack_a8,auStack_78);
  puVar6 = puVar5;
  func_0x00010bf1d200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar5 = puVar1;
  func_0x00010befa120(puVar1);
  puVar7 = PTR_PTR_1126b10a0;
  func_0x000104e4215c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_78);
  puVar8 = puVar7;
  func_0x00010bf1d200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar7 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  func_0x00010c10af80(param_3);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 104e3671c; end: 104e367f3;  */

void FUN_104e3671c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bd60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e367f4; end: 104e36c3f; -[SCSpotlightManagementProfileActionHandler _presentActionMenuWithSnapDataModel:] */

void FUN_104e367f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = param_3;
  func_0x00010c0823e0();
  puVar3 = PTR_PTR_1126b10a0;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000104e421a4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f180(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar4;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104e36c40;
    puStack_98 = &UNK_110852d00;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    puVar4 = puVar3;
    puStack_90 = param_3;
    func_0x00010bf1d200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(puVar4);
    _objc_release(puStack_90);
    puVar2 = auStack_88;
    _objc_destroyWeak(puVar2);
  }
  puVar3 = PTR_PTR_1126b10a0;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000104e4218c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar4;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x104e36c94;
  puStack_c8 = &UNK_110852d00;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_3);
  puVar5 = puVar3;
  puStack_c0 = param_3;
  func_0x00010bf1d200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010befa120(puVar1);
  puVar2 = param_3;
  func_0x00010c07f5a0();
  puVar3 = PTR_PTR_1126b10a0;
  if ((int)puVar2 != 0) {
    func_0x000104e421bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar4;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x104e36ce8;
    puStack_f8 = &UNK_110852d00;
    _objc_copyWeak(auStack_e8,auStack_80);
    _objc_retain(param_3);
    puVar4 = puVar3;
    puStack_f0 = param_3;
    func_0x00010bf1d200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(puVar4);
    _objc_release(puStack_f0);
    puVar2 = auStack_e8;
    _objc_destroyWeak(puVar2);
  }
  puVar4 = PTR_PTR_1126b10a0;
  func_0x000104e4215c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_118,auStack_80);
  puVar3 = puVar4;
  func_0x00010bf1d200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10af80();
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar5);
  _objc_release(puStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 104e36c40; end: 104e36d3b;  */

void FUN_104e36c40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


