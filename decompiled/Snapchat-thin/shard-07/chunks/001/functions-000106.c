/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105213398; end: 1052133df; -[SCSearchV2ActionSheetPresenter groupActionSheetDidDismiss] */

void FUN_105213398(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1052133e0; end: 105213427; -[SCSearchV2ActionSheetPresenter dismissCameraScope:] */

void FUN_1052133e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105213428; end: 10521343f; -[SCSearchV2ActionSheetPresenter presentingViewController] */

void FUN_105213428(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105213440; end: 10521344b; -[SCSearchV2ActionSheetPresenter setPresentingViewController:] */

void FUN_105213440(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10521344c; end: 10521347b; -[SCSearchV2ActionSheetPresenter setActionSheetPresenter:] */

void FUN_10521344c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10521347c; end: 10521351f; -[SCSearchV2ActionSheetPresenter .cxx_destruct] */

void FUN_10521347c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 105213520; end: 105213593; -[SCSearchV2BirthdayPagePresenter initWithBirthdayPageServices:] */

undefined1 * FUN_105213520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6f18;
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



/* Entry: 105213594; end: 1052135ff; -[SCSearchV2BirthdayPagePresenter birthdayPagePresenter] */

void FUN_105213594(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1a780();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105213600; end: 105213647; -[SCSearchV2BirthdayPagePresenter openBirthdayPage] */

void FUN_105213600(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bf1a780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10b3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105213648; end: 105213683; -[SCSearchV2BirthdayPagePresenter dismissBirthdayPage] */

void FUN_105213648(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bf1a780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf832a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105213684; end: 10521368b; -[SCSearchV2BirthdayPagePresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105213684(void)

{
  return 0;
}



/* Entry: 10521368c; end: 105213697; -[SCSearchV2BirthdayPagePresenter pushToValdiMarshaller:] */

undefined8 FUN_10521368c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b0472c8(param_3,param_1);
  func_0x00010b0472c0();
  func_0x00010b04728c();
  func_0x00010b04729c();
  return param_3;
}



/* Entry: 105213698; end: 10521369f; -[SCSearchV2BirthdayPagePresenter uiContainer] */

undefined8 FUN_105213698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052136a0; end: 1052136cf; -[SCSearchV2BirthdayPagePresenter setUiContainer:] */

void FUN_1052136a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052136d0; end: 10521370b; -[SCSearchV2BirthdayPagePresenter .cxx_destruct] */

void FUN_1052136d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10521370c; end: 1052137d7; -[SCSearchV2ChatPresenter initWithChatScopeExposer:chatScopeServices:publicGroupsChatScopeLauncher:] */

undefined1 *
FUN_10521370c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6f20;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052137d8; end: 105213893; -[SCSearchV2ChatPresenter presentChatForGroupId:groupType:deeplinkURL:onViewController:] */

void FUN_1052137d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b01c0;
  if (param_4 == 2) {
    _objc_retain(param_6);
    func_0x00010be7dda0(param_1,param_2,param_3,param_6);
    puVar1 = param_6;
  }
  else {
    _objc_retain(param_6);
    func_0x00010bfcf680(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7a8a0(param_1,param_2,puVar1,param_5,param_6);
    _objc_release(param_6);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105213894; end: 105213953; -[SCSearchV2ChatPresenter _presentPublicGroupsChatForGroupId:onViewController:] */

void FUN_105213894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b5c08;
    _objc_alloc(PTR_PTR_1126b5c08);
    func_0x00010c039140();
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x18),param_2,puVar3,param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105213954; end: 105213a73; -[SCSearchV2ChatPresenter _presentChatForStartChatIdentifier:deeplinkURL:onViewController:] */

void FUN_105213954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    func_0x00010c038f40();
    func_0x00010c13a640(PTR_PTR_1126b41f8,param_2,param_4);
    puVar3 = PTR_PTR_1126b3520;
    _objc_alloc(PTR_PTR_1126b3520);
    func_0x00010bffdd20();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf22b00(uVar4,param_2,param_3,puVar3,param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105213a74; end: 105213a93; -[SCSearchV2ChatPresenter chatScopeDidDismiss:] */

void FUN_105213a74(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105213a94; end: 105213a9b; -[SCSearchV2ChatPresenter didDismissChatWithScope:] */

void FUN_105213a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 105213a9c; end: 105213ad7; -[SCSearchV2ChatPresenter .cxx_destruct] */

void FUN_105213a9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105213ad8; end: 105213b43; -[SCSearchV2CommercePresenter initWithCommerceShoppingScopeExposer:commerceDeepLinkParser:] */

long FUN_105213ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105213b44; end: 105213c97; -[SCSearchV2CommercePresenter presentWithDeeplinkURL:onViewController:] */

void FUN_105213b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 8,param_4);
  puVar1 = PTR_PTR_1126b0500;
  func_0x00010c1540c0(PTR_PTR_1126b0500);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0508;
  _objc_alloc(PTR_PTR_1126b0508);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c257820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c115e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c039400(puVar2);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c18b5e0(puVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105213c98; end: 105213c9f; -[SCSearchV2CommercePresenter isPresenting] */

undefined1 FUN_105213c98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 105213ca0; end: 105213cf3; -[SCSearchV2CommercePresenter didDismissShoppingScope] */

void FUN_105213ca0(long param_1)

{
  long lVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x10) = 0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c6a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,0);
  return;
}



/* Entry: 105213cf4; end: 105213d2b; -[SCSearchV2CommercePresenter .cxx_destruct] */

void FUN_105213cf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105213d2c; end: 105213d9f; -[SCSearchV2FamilyCenterPresenter initWithPageLauncher:] */

undefined1 * FUN_105213d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6f28;
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



/* Entry: 105213da0; end: 105213df7; -[SCSearchV2FamilyCenterPresenter openFamilyCenter] */

void FUN_105213da0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105213df8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105213df8; end: 105213e6b;  */

void FUN_105213df8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bde6a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c020(uVar1,param_2,uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105213e6c; end: 105213ec3; -[SCSearchV2FamilyCenterPresenter _constructFamilyCenterLaunchCommand] */

void FUN_105213e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0ea8;
  _objc_opt_new(PTR_PTR_1126b0ea8);
  func_0x00010c19a840();
  puVar2 = PTR_PTR_1126b6558;
  _objc_opt_new(PTR_PTR_1126b6558);
  func_0x00010c19a1a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105213ec4; end: 105213ecb; -[SCSearchV2FamilyCenterPresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105213ec4(void)

{
  return 0;
}



/* Entry: 105213ecc; end: 105213ed7; -[SCSearchV2FamilyCenterPresenter pushToValdiMarshaller:] */

undefined8 FUN_105213ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df100;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010af9bdbc();
  return param_3;
}



/* Entry: 105213ed8; end: 105213edf; -[SCSearchV2FamilyCenterPresenter uiContainer] */

undefined8 FUN_105213ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105213ee0; end: 105213f0f; -[SCSearchV2FamilyCenterPresenter setUiContainer:] */

void FUN_105213ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105213f10; end: 105213f3f; -[SCSearchV2FamilyCenterPresenter .cxx_destruct] */

void FUN_105213f10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105213f40; end: 105214093; -[SCSearchV2ProfilePresenter initWithFriendProfileScopeExposer:groupProfileScopeExposer:chatScopeExposer:chatScopeServices:groupSnapchatterRepository:callLauncher:] */

undefined1 *
FUN_105213f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126e6f30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 105214094; end: 105214217; -[SCSearchV2ProfilePresenter presentProfileForSnapchatter:addSourceType:sourceSessionId:onViewController:] */

void FUN_105214094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_storeWeak(param_1 + 0x38,param_6);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  _objc_retain(param_5);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(param_5);
  }
  else {
    func_0x00010c032ec0(puVar2);
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105214218; end: 105214247;  */

void FUN_105214218(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 105214248; end: 10521428f; -[SCSearchV2ProfilePresenter friendProfileDidDismiss:] */

void FUN_105214248(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105214290; end: 10521429b; -[SCSearchV2ProfilePresenter friendProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_105214290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentChat_deeplinkType__112620830,param_4,param_5);
  return;
}



/* Entry: 10521429c; end: 105214327; -[SCSearchV2ProfilePresenter friendProfileDidDismiss:withRequestedCallInChat:media:] */

undefined8
FUN_10521429c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24e0a0(uVar1,param_2,param_4,param_5,0xe,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 105214328; end: 105214413; -[SCSearchV2ProfilePresenter presentProfileForGroup:onViewController:] */

void FUN_105214328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      _objc_storeWeak(param_1 + 0x38,param_4);
      puVar2 = PTR_PTR_1126b4b68;
      _objc_alloc(PTR_PTR_1126b4b68);
      lVar1 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar1);
      uVar3 = param_3;
      func_0x00010bfceb20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0029c0(puVar2);
      _objc_release(uVar3);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105214414; end: 105214557; -[SCSearchV2ProfilePresenter groupProfileDidDimiss:withRequestedFriendshipProfile:] */

void FUN_105214414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2447c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105214558; end: 1052145df;  */

void FUN_105214558(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar1 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c10dd00(param_1);
      _objc_release(lVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052145e0; end: 1052145eb; -[SCSearchV2ProfilePresenter groupProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_1052145e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentChat_deeplinkType__112620830,param_4,param_5);
  return;
}



/* Entry: 1052145ec; end: 105214677; -[SCSearchV2ProfilePresenter groupProfileDidDismiss:withRequestedCallInChat:media:] */

undefined8
FUN_1052145ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24e0a0(uVar1,param_2,param_4,param_5,0xe,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 105214678; end: 1052146bf; -[SCSearchV2ProfilePresenter groupProfileWillDimiss:] */

void FUN_105214678(long param_1)

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



/* Entry: 1052146c0; end: 1052147bb; -[SCSearchV2ProfilePresenter presentChat:deeplinkType:] */

void FUN_1052146c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b3520;
    _objc_alloc(PTR_PTR_1126b3520);
    func_0x00010bffdd20();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf22b00(uVar4,param_2,param_3,puVar3,param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052147bc; end: 105214803; -[SCSearchV2ProfilePresenter chatScopeDidDismiss:] */

void FUN_1052147bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105214804; end: 10521486b; -[SCSearchV2ProfilePresenter .cxx_destruct] */

void FUN_105214804(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 10521486c; end: 1052149b7; -[SCSearchV2PublicProfilePresenter initWithFriendProfileScopeExposer:lensCreatorProfileScopeExposer:lensCreatorProfileScopeServices:chatScopeExposer:chatScopeServices:presentingViewController:] */

undefined1 *
FUN_10521486c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126e6f38;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052149b8; end: 105214a3f; -[SCSearchV2PublicProfilePresenter presentUserProfileWithUserId:] */

void FUN_1052149b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105214a40;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105214a40; end: 105214b43;  */

void FUN_105214a40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = *(long *)(param_1 + 0x20) + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 105214b44; end: 105214bcb; -[SCSearchV2PublicProfilePresenter presentSnapProProfileWithProfileId:] */

void FUN_105214b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105214bcc;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105214bcc; end: 105214c97;  */

void FUN_105214bcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126b6560;
  func_0x00010c11a820(PTR_PTR_1126b6560,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar1 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf232e0(uVar3,param_2,puVar2,1,lVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105214c98; end: 105214e1b; -[SCSearchV2PublicProfilePresenter presentLensCreatorCommunityProfileWithUserId:displayName:] */

void FUN_105214c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105214d50;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105214e1c; end: 105214e3b; -[SCSearchV2PublicProfilePresenter lensCreatorProfiledDismissedWithScope:] */

void FUN_105214e1c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105214e3c; end: 105214e43; -[SCSearchV2PublicProfilePresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105214e3c(void)

{
  return 0;
}



/* Entry: 105214e44; end: 105214e4f; -[SCSearchV2PublicProfilePresenter pushToValdiMarshaller:] */

undefined8 FUN_105214e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df108;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 105214e50; end: 105214e6f; -[SCSearchV2PublicProfilePresenter friendProfileDidDismiss:] */

void FUN_105214e50(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105214e70; end: 105214e7b; -[SCSearchV2PublicProfilePresenter friendProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_105214e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentChat_deeplinkType__112620830,param_4,param_5);
  return;
}



/* Entry: 105214e7c; end: 105214f77; -[SCSearchV2PublicProfilePresenter presentChat:deeplinkType:] */

void FUN_105214e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b3520;
    _objc_alloc(PTR_PTR_1126b3520);
    func_0x00010bffdd20();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf22b00(uVar4,param_2,param_3,puVar3,param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105214f78; end: 105214f97; -[SCSearchV2PublicProfilePresenter chatScopeDidDismiss:] */

void FUN_105214f78(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105214f98; end: 105214ff3; -[SCSearchV2PublicProfilePresenter .cxx_destruct] */

void FUN_105214f98(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105214ff4; end: 10521508f; -[SCSearchV2SafetyReporter initWithSafetyReportScopeExposer:navigationServices:] */

undefined1 *
FUN_105214ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6f40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105215090; end: 1052151bf; -[SCSearchV2SafetyReporter reportSingleSnapStoryWithReportParams:] */

void FUN_105215090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b2e98;
    func_0x00010c24c3a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1052151c0;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = lVar4;
    puStack_50 = puVar5;
    lStack_48 = param_1;
    _objc_retain();
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(puStack_50);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1052151c0; end: 10521521b;  */

void FUN_1052151c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2ec8;
  _objc_alloc(PTR_PTR_1126b2ec8);
  func_0x00010c058840();
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10521521c; end: 105215263; -[SCSearchV2SafetyReporter reportDidCompleteWithCancelled:] */

void FUN_10521521c(long param_1)

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



/* Entry: 105215264; end: 10521528f; -[SCSearchV2SafetyReporter .cxx_destruct] */

void FUN_105215264(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105215290; end: 10521538b; -[SCSearchV2SnapchatPlusPresenter initWithPlusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusManagementScopeExposer:] */

undefined1 *
FUN_105215290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6f48;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10521538c; end: 1052154af; -[SCSearchV2SnapchatPlusPresenter openSnapchatPlus] */

void FUN_10521538c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c080120();
    if ((int)lVar5 == 0) {
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c071800();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (iVar1 != 0) {
        puVar7 = PTR_PTR_1126b3470;
        _objc_alloc(PTR_PTR_1126b3470);
        func_0x00010c057420();
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        goto LAB_10521547c;
      }
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c071800();
    if (iVar1 != 0) {
      puVar7 = *(undefined **)(param_1 + 0x18);
      func_0x00010bf24080(puVar7,param_2,*(undefined8 *)(param_1 + 0x28),0x10,param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x10);
LAB_10521547c:
      func_0x00010bf9d620(uVar6,param_2,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
  }
  return;
}



/* Entry: 1052154b0; end: 1052154f7; -[SCSearchV2SnapchatPlusPresenter plusSubscribeDidDismiss] */

void FUN_1052154b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1052154f8; end: 10521553f; -[SCSearchV2SnapchatPlusPresenter plusManagementDidDismiss] */

void FUN_1052154f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105215540; end: 105215547; -[SCSearchV2SnapchatPlusPresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105215540(void)

{
  return 0;
}



/* Entry: 105215548; end: 105215553; -[SCSearchV2SnapchatPlusPresenter pushToValdiMarshaller:] */

undefined8 FUN_105215548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df180;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010af9f824();
  return param_3;
}



/* Entry: 105215554; end: 10521555b; -[SCSearchV2SnapchatPlusPresenter uiContainer] */

undefined8 FUN_105215554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10521555c; end: 10521558b; -[SCSearchV2SnapchatPlusPresenter setUiContainer:] */

void FUN_10521555c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10521558c; end: 1052155df; -[SCSearchV2SnapchatPlusPresenter .cxx_destruct] */

void FUN_10521558c(long param_1)

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



/* Entry: 1052155e0; end: 10521566f; -[SCSearchV2WebPresenter initWithWebBrowsingScopeExposer:] */

undefined1 * FUN_1052155e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6f50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105215670; end: 1052156cb; -[SCSearchV2WebPresenter webBrowserDidDismiss:] */

void FUN_105215670(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 1052156cc; end: 105215833; -[SCSearchV2WebPresenter presentWebBrowserWithHtmlString:] */

void FUN_1052156cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    func_0x00010bfee200();
    puVar4 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105215834;
    puStack_50 = &UNK_110842308;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c297260(puVar4,param_2,&puStack_68,*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b5a68;
    _objc_alloc(PTR_PTR_1126b5a68);
    func_0x00010c000e00();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uStack_48);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105215834; end: 10521584f;  */

void FUN_105215834(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadHTMLString_baseURL__1126047a0,*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 105215850; end: 105215853; -[SCSearchV2WebPresenter openUrlWithUrlRequest:] */

void FUN_105215850(void)

{
  return;
}



/* Entry: 105215854; end: 105215917; -[SCSearchV2WebPresenter openHtmlWithHtmlRequest:] */

void FUN_105215854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1052158dc;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105215918; end: 10521591f; -[SCSearchV2WebPresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105215918(void)

{
  return 0;
}



/* Entry: 105215920; end: 10521592b; -[SCSearchV2WebPresenter pushToValdiMarshaller:] */

undefined8 FUN_105215920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a28;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 10521592c; end: 105215933; -[SCSearchV2WebPresenter uiContainer] */

undefined8 FUN_10521592c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105215934; end: 105215963; -[SCSearchV2WebPresenter setUiContainer:] */

void FUN_105215934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105215964; end: 10521599f; -[SCSearchV2WebPresenter .cxx_destruct] */

void FUN_105215964(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052159a0; end: 105215a3b; -[SCSearchV2SnapProActionHandler initWithBusinessProfilesPresenterScopeExposer:businessProfilesPresenterScopeViewController:] */

undefined1 *
FUN_1052159a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6f58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105215a3c; end: 105215aef; -[SCSearchV2SnapProActionHandler openBusinessProfileWithBusinessProfileId:] */

void FUN_105215a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105215af0;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105215af0; end: 105215beb;  */

void FUN_105215af0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(lVar1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126b4158;
    _objc_alloc(PTR_PTR_1126b4158);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    puVar4 = PTR_PTR_1126b64b0;
    func_0x00010bf6e4c0(PTR_PTR_1126b64b0,param_2,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03bd00(puVar3,param_2,uVar5,lVar1,lVar2,puVar4,0,0,0);
    _objc_release(puVar4);
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 8),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105215bec; end: 105215c4f; -[SCSearchV2SnapProActionHandler businessProfilesPresenterScopeWillDismiss:] */

void FUN_105215bec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105215c50; end: 105215c57; -[SCSearchV2SnapProActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105215c50(void)

{
  return 0;
}



/* Entry: 105215c58; end: 105215c63; -[SCSearchV2SnapProActionHandler pushToValdiMarshaller:] */

undefined8 FUN_105215c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af9b828(param_3,param_1);
  func_0x00010af9b820();
  func_0x00010af9b7f8();
  func_0x00010af9b808();
  return param_3;
}



/* Entry: 105215c64; end: 105215c8f; -[SCSearchV2SnapProActionHandler .cxx_destruct] */

void FUN_105215c64(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105215c90; end: 105215d23; -[SCComposerSubscreenPresentationController initWithPresentedViewController:presentingViewController:sourceViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105215c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6f60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPresentedViewController__1125ebc88,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271fd54;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105215d24; end: 105215eaf; -[SCComposerSubscreenPresentationController presentationTransitionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105215d24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c00ee20();
  lVar5 = (long)_DAT_11271fd58;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c10f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar4,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c193d20(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105215eb0;
  puStack_50 = &UNK_110870710;
  lStack_48 = param_1;
  func_0x00010bf02c20(lVar3,param_2,&puStack_68,0);
  _objc_release(lVar3);
  return;
}



/* Entry: 105215eb0; end: 105215f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105215eb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271fd58),param_2,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


