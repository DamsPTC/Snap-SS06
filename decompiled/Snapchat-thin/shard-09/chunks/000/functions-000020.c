/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106824d1c; end: 106824d63; -[SCPublicProfileManagementActionHandler qrCodeCardPageDidDismiss] */

void FUN_106824d1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106824d64; end: 106824d67; -[SCPublicProfileManagementActionHandler didDismissCreatorSubscriptionOnboardingScope] */

void FUN_106824d64(void)

{
  return;
}



/* Entry: 106824d68; end: 106824e6f; -[SCPublicProfileManagementActionHandler .cxx_destruct] */

void FUN_106824d68(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106824e70; end: 106825307; -[SCPublicProfileManagementComposerController initWithUserSession:publicProfileManagementContextServices:circumstanceEngine:complianceEngine:businessId:featureSettingsService:webBrowserScopeExposer:snapProProfilesProvider:chatCameraScopeExposer:chatCameraScopeServices:unifiedPublicProfilesPresenterScopeLauncher:deepLinkSendToScopeExposer:sendToScopeExposer:activityFeedScopeExposer:memoriesPickerScopeExposer:contentProductPlaybackScopeExposer:adPreviewScopeExposer:shareScopeExposer:addToStoryCameraScopeLauncher:communityPillTapScopeExposer:communityStoreProvider:multiProfileServices:directorModeScopeExposer:friendingExperimentReader:] */

long FUN_106824e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
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
  if (param_1 != 0) {
    _objc_retain(param_10);
    _objc_retain(param_8);
    _objc_retain(param_4);
    _objc_storeWeak(param_1 + 8,param_3);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = param_7;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x18,param_8);
    _objc_release(param_8);
    _objc_storeWeak(param_1 + 0x28,param_10);
    _objc_release(param_10);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar2;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x10,param_4);
    _objc_release(param_4);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = param_6;
    _objc_release(uVar1);
    _objc_retain(param_9);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_9;
    _objc_release(uVar1);
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_11;
    _objc_release(uVar1);
    _objc_retain(param_12);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_12;
    _objc_release(uVar1);
    _objc_retain(param_13);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_13;
    _objc_release(uVar1);
    _objc_retain(param_14);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_14;
    _objc_release(uVar1);
    _objc_retain(param_15);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_15;
    _objc_release(uVar1);
    _objc_retain(param_16);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = param_16;
    _objc_release(uVar1);
    _objc_retain(param_17);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_17;
    _objc_release(uVar1);
    _objc_retain(param_18);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = param_18;
    _objc_release(uVar1);
    _objc_retain(param_19);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = param_19;
    _objc_release(uVar1);
    _objc_retain(param_20);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_20;
    _objc_release(uVar1);
    _objc_retain(param_21);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = param_21;
    _objc_release(uVar1);
    _objc_retain(param_22);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = param_22;
    _objc_release(uVar1);
    _objc_retain(param_25);
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = param_25;
    _objc_release(uVar1);
    _objc_retain(param_23);
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = param_23;
    _objc_release(uVar1);
    _objc_retain(param_24);
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = param_24;
    _objc_release(uVar1);
    _objc_retain(param_26);
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = param_26;
    _objc_release(uVar1);
  }
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
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 106825308; end: 10682543b; -[SCPublicProfileManagementComposerController provideViewModel] */

void FUN_106825308(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar6 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c266a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar6);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x00010bf25020(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      lVar6 = lVar3;
      FUN_10681dc64(lVar3,lVar5,0,0,uVar1,uVar2,param_1,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar4);
      goto LAB_10682541c;
    }
  }
  lVar6 = 0;
LAB_10682541c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10682543c; end: 10682587b; -[SCPublicProfileManagementComposerController provideContextAndBindWithViewController:] */

void FUN_10682543c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c266a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x00010bf25020(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_80,param_1);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10682587c;
      puStack_90 = &UNK_110852b00;
      _objc_copyWeak(auStack_88,auStack_80);
      lVar2 = lVar4;
      func_0x00010befa2a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0xa0);
      *(long *)(param_1 + 0xa0) = lVar2;
      _objc_release(uVar11);
      puVar5 = PTR_PTR_1126b0f70;
      _objc_alloc();
      func_0x00010bff0f00();
      _objc_retain();
      uVar11 = *(undefined8 *)(param_1 + 0x98);
      *(undefined **)(param_1 + 0x98) = puVar5;
      _objc_release(uVar11);
      puVar6 = PTR_PTR_1126b0f80;
      _objc_alloc();
      uVar11 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = puVar1;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x10682591c;
      puStack_b8 = &UNK_110852b60;
      _objc_copyWeak(auStack_b0,auStack_80);
      func_0x00010c0002e0();
      _objc_release(uVar11);
      _objc_retain(puVar6);
      uVar11 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined **)(param_1 + 0xa8) = puVar6;
      _objc_release(uVar11);
      lVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar2);
      lVar7 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5bd80();
      func_0x00010c1ce320(param_1);
      _objc_release(lVar7);
      _objc_release(lVar2);
      lVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar2);
      lVar7 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5bda0();
      func_0x00010c1ce340(param_1);
      _objc_release(lVar7);
      _objc_release(lVar2);
      _objc_storeWeak(param_1 + 0xb8,param_3);
      puVar8 = PTR_PTR_1126b0f78;
      _objc_alloc(PTR_PTR_1126b0f78);
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_106825984;
      puStack_e0 = &UNK_110849200;
      _objc_copyWeak(auStack_d8,auStack_80);
      _objc_copyWeak(auStack_100,auStack_80);
      func_0x00010c0597c0(puVar8);
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar7 = lVar2;
      func_0x00010c119b40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c1199e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0xd0);
      *(long *)(param_1 + 0xd0) = lVar10;
      _objc_release(uVar11);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lVar2);
      uVar11 = *(undefined8 *)(param_1 + 0xd0);
      _objc_retain(uVar11);
      _objc_release(puVar8);
      _objc_destroyWeak(auStack_100);
      _objc_destroyWeak(auStack_d8);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_b0);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_release(lVar3);
      _objc_release(lVar4);
      goto LAB_1068257e0;
    }
  }
  uVar11 = 0;
LAB_1068257e0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 10682587c; end: 106825983;  */

void FUN_10682587c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b0f68;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    if (uVar1 != 0) {
      func_0x00010bdd7120(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106825984; end: 106825a0b;  */

void FUN_106825984(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1ce320(param_1);
    func_0x00010bedc360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106825a0c; end: 106825a4f; -[SCPublicProfileManagementComposerController dealloc] */

void FUN_106825a0c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c2829e0();
  puStack_28 = PTR_PTR_1126f3640;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106825a50; end: 106825bdb; -[SCPublicProfileManagementComposerController _businessProfileChanged:] */

void FUN_106825a50(long param_1,undefined8 param_2,long param_3)

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
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010bf00d20();
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
    } while (lVar3 != lVar9);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x90),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 106825bdc; end: 106825be3; -[SCPublicProfileManagementComposerController _removeBusinessProfileObserverWithKey:] */

void FUN_106825bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 106825be4; end: 106825c8b; -[SCPublicProfileManagementComposerController _onCommunityPillTap:withUserId:] */

void FUN_106825be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1008;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0190e0(puVar1,param_2,param_3,param_4,lVar2,param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xe8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106825c8c; end: 106825cd3; -[SCPublicProfileManagementComposerController didCompleteCommunityPillTapScope] */

void FUN_106825c8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xe8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106825cd4; end: 106825e93; -[SCPublicProfileManagementComposerController addSnapToBusinessStory:] */

void FUN_106825cd4(undefined8 param_1,undefined8 param_2,ulong param_3)

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
        pcStack_68 = FUN_106825e94;
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



/* Entry: 106825e94; end: 106825f4f;  */

void FUN_106825e94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    lVar2 = lVar1 + 0xb8;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c271e00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23680(uVar4,param_2,lVar2,uVar3,lVar1,1,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x30),param_2,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106825f50; end: 106825f53; -[SCPublicProfileManagementComposerController getFriends:] */

void FUN_106825f50(void)

{
  return;
}



/* Entry: 106825f54; end: 10682614f; -[SCPublicProfileManagementComposerController observeBusinessProfile:] */

ulong FUN_106825f54(long param_1,undefined8 param_2,ulong param_3)

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
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x90));
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (1 < uVar2) {
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126b1018;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106826150;
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



/* Entry: 106826150; end: 10682618b;  */

undefined8 FUN_106826150(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b860();
  _objc_release(param_1);
  return 0;
}



/* Entry: 10682618c; end: 10682645f; -[SCPublicProfileManagementComposerController reloadManagedBusinessProfiles:] */

void FUN_10682618c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfda1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106826304;
  puStack_50 = &UNK_110852c20;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a14c0(lVar3,param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bfea080(param_1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106826460; end: 106826463; -[SCPublicProfileManagementComposerController back:] */

void FUN_106826460(void)

{
  return;
}



/* Entry: 106826464; end: 106826467; -[SCPublicProfileManagementComposerController dismiss:] */

void FUN_106826464(void)

{
  return;
}



/* Entry: 106826468; end: 10682646b; -[SCPublicProfileManagementComposerController present:] */

void FUN_106826468(void)

{
  return;
}



/* Entry: 10682646c; end: 10682646f; -[SCPublicProfileManagementComposerController push:] */

void FUN_10682646c(void)

{
  return;
}



/* Entry: 106826470; end: 1068264db; -[SCPublicProfileManagementComposerController unsubscribe] */

void FUN_106826470(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xa0));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1540();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068264dc; end: 106826523; -[SCPublicProfileManagementComposerController dismissCameraScope:] */

void FUN_1068264dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106826524; end: 10682662b; -[SCPublicProfileManagementComposerController _updateNotificationSettingsIfNecessary] */

void FUN_106826524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8520(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10682662c; end: 106826657;  */

void FUN_10682662c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106826658; end: 1068266f3; -[SCPublicProfileManagementComposerController _performNotificationSettingsChanges] */

void FUN_106826658(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0dc3a0();
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185f00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0dc3c0(param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185f20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068266f4; end: 1068266f7; -[SCPublicProfileManagementComposerController impalaProfileDidComplete] */

void FUN_1068266f4(void)

{
  return;
}



/* Entry: 1068266f8; end: 1068266fb; -[SCPublicProfileManagementComposerController impalaProfileNeedsRemoval] */

void FUN_1068266f8(void)

{
  return;
}



/* Entry: 1068266fc; end: 106826747; -[SCPublicProfileManagementComposerController impalaProfileDidReloadManagedProfiles] */

void FUN_1068266fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e61058,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106826748; end: 10682674f; -[SCPublicProfileManagementComposerController notificationMidrollOn] */

undefined1 FUN_106826748(long param_1)

{
  return *(undefined1 *)(param_1 + 0x110);
}



/* Entry: 106826750; end: 106826757; -[SCPublicProfileManagementComposerController setNotificationMidrollOn:] */

void FUN_106826750(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 106826758; end: 10682675f; -[SCPublicProfileManagementComposerController notificationMilestoneOn] */

undefined1 FUN_106826758(long param_1)

{
  return *(undefined1 *)(param_1 + 0x111);
}



/* Entry: 106826760; end: 106826767; -[SCPublicProfileManagementComposerController setNotificationMilestoneOn:] */

void FUN_106826760(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x111) = param_3;
  return;
}



/* Entry: 106826768; end: 1068268f3; -[SCPublicProfileManagementComposerController .cxx_destruct] */

void FUN_106826768(long param_1)

{
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_destroyWeak(param_1 + 0xb0);
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1068268f4; end: 106827107; -[SCPublicProfileManagementContext initWithApplication:actionHandler:storyPlayer:snapViewStateProvider:lensActionHandler:urlActionHandler:cameraRollLibrary:imageFactory:boltUploader:tempFileProvider:mediaPickerPresenter:memoriesTranscoder:networkingClient:serviceConfig:friendStore:actionSheetPresenter:alertPresenter:storySharingActionHandler:cofStore:supStore:publicProfileManager:blizzardLogger:grpcServiceFactory:activityFeedPresenter:notificationSettingsActionHandler:nativeStoryClientModelGenerator:discoverFeedStoryPlayer:profileManagementNuxHandler:adsTabHandlers:navigator:profileSwitcherContext:communityPillContext:pageLauncher:localStoryStore:livePublicStoryStateObserver:presentationController:notificationPresenter:safetyReportLauncher:navigatorToDeckContainerConverter:storefrontProvider:subscriptionDisplayNameObservable:isFanPassCreatorObservable:] */

undefined8 *
FUN_1068268f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

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
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  puStack_70 = PTR_PTR_1126f3648;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
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
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_44;
    _objc_release(uVar2);
  }
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106827108; end: 106827113; -[SCPublicProfileManagementContext pushToValdiMarshaller:] */

void FUN_106827108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8feb4(param_3,param_1);
  func_0x00010af8fe58();
  func_0x00010af8fe50();
  func_0x00010af8fd34();
  func_0x00010af8fd10();
  return;
}



/* Entry: 106827114; end: 10682711b; -[SCPublicProfileManagementContext application] */

undefined8 FUN_106827114(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10682711c; end: 10682714b; -[SCPublicProfileManagementContext setApplication:] */

void FUN_10682711c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682714c; end: 106827153; -[SCPublicProfileManagementContext actionHandler] */

undefined8 FUN_10682714c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106827154; end: 106827183; -[SCPublicProfileManagementContext setActionHandler:] */

void FUN_106827154(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106827184; end: 10682718b; -[SCPublicProfileManagementContext storyPlayer] */

undefined8 FUN_106827184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10682718c; end: 1068271bb; -[SCPublicProfileManagementContext setStoryPlayer:] */

void FUN_10682718c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1068271bc; end: 1068271c3; -[SCPublicProfileManagementContext snapViewStateProvider] */

undefined8 FUN_1068271bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068271c4; end: 1068271f3; -[SCPublicProfileManagementContext setSnapViewStateProvider:] */

void FUN_1068271c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068271f4; end: 1068271fb; -[SCPublicProfileManagementContext lensActionHandler] */

undefined8 FUN_1068271f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068271fc; end: 10682722b; -[SCPublicProfileManagementContext setLensActionHandler:] */

void FUN_1068271fc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10682722c; end: 106827233; -[SCPublicProfileManagementContext urlActionHandler] */

undefined8 FUN_10682722c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106827234; end: 106827263; -[SCPublicProfileManagementContext setUrlActionHandler:] */

void FUN_106827234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106827264; end: 10682726b; -[SCPublicProfileManagementContext cameraRollLibrary] */

undefined8 FUN_106827264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10682726c; end: 10682729b; -[SCPublicProfileManagementContext setCameraRollLibrary:] */

void FUN_10682726c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682729c; end: 1068272a3; -[SCPublicProfileManagementContext imageFactory] */

undefined8 FUN_10682729c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1068272a4; end: 1068272d3; -[SCPublicProfileManagementContext setImageFactory:] */

void FUN_1068272a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1068272d4; end: 1068272db; -[SCPublicProfileManagementContext boltUploader] */

undefined8 FUN_1068272d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1068272dc; end: 10682730b; -[SCPublicProfileManagementContext setBoltUploader:] */

void FUN_1068272dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10682730c; end: 106827313; -[SCPublicProfileManagementContext tempFileProvider] */

undefined8 FUN_10682730c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106827314; end: 106827343; -[SCPublicProfileManagementContext setTempFileProvider:] */

void FUN_106827314(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106827344; end: 10682734b; -[SCPublicProfileManagementContext mediaPickerPresenter] */

undefined8 FUN_106827344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10682734c; end: 10682737b; -[SCPublicProfileManagementContext setMediaPickerPresenter:] */

void FUN_10682734c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10682737c; end: 106827383; -[SCPublicProfileManagementContext memoriesTranscoder] */

undefined8 FUN_10682737c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106827384; end: 1068273b3; -[SCPublicProfileManagementContext setMemoriesTranscoder:] */

void FUN_106827384(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1068273b4; end: 1068273bb; -[SCPublicProfileManagementContext networkingClient] */

undefined8 FUN_1068273b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1068273bc; end: 1068273eb; -[SCPublicProfileManagementContext setNetworkingClient:] */

void FUN_1068273bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068273ec; end: 1068273f3; -[SCPublicProfileManagementContext serviceConfig] */

undefined8 FUN_1068273ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1068273f4; end: 106827423; -[SCPublicProfileManagementContext setServiceConfig:] */

void FUN_1068273f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106827424; end: 10682742b; -[SCPublicProfileManagementContext friendStore] */

undefined8 FUN_106827424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10682742c; end: 10682745b; -[SCPublicProfileManagementContext setFriendStore:] */

void FUN_10682742c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682745c; end: 106827463; -[SCPublicProfileManagementContext blizzardLogger] */

undefined8 FUN_10682745c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106827464; end: 106827493; -[SCPublicProfileManagementContext setBlizzardLogger:] */

void FUN_106827464(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106827494; end: 10682749b; -[SCPublicProfileManagementContext feedbackReporterPresenter] */

undefined8 FUN_106827494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10682749c; end: 1068274cb; -[SCPublicProfileManagementContext setFeedbackReporterPresenter:] */

void FUN_10682749c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068274cc; end: 1068274d3; -[SCPublicProfileManagementContext actionSheetPresenter] */

undefined8 FUN_1068274cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1068274d4; end: 106827503; -[SCPublicProfileManagementContext setActionSheetPresenter:] */

void FUN_1068274d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106827504; end: 10682750b; -[SCPublicProfileManagementContext alertPresenter] */

undefined8 FUN_106827504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10682750c; end: 10682753b; -[SCPublicProfileManagementContext setAlertPresenter:] */

void FUN_10682750c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682753c; end: 106827543; -[SCPublicProfileManagementContext storySharingActionHandler] */

undefined8 FUN_10682753c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106827544; end: 106827573; -[SCPublicProfileManagementContext setStorySharingActionHandler:] */

void FUN_106827544(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106827574; end: 10682757b; -[SCPublicProfileManagementContext cofStore] */

undefined8 FUN_106827574(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10682757c; end: 1068275ab; -[SCPublicProfileManagementContext setCofStore:] */

void FUN_10682757c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068275ac; end: 1068275b3; -[SCPublicProfileManagementContext supStore] */

undefined8 FUN_1068275ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1068275b4; end: 1068275e3; -[SCPublicProfileManagementContext setSupStore:] */

void FUN_1068275b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068275e4; end: 1068275eb; -[SCPublicProfileManagementContext grpcServiceFactory] */

undefined8 FUN_1068275e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1068275ec; end: 10682761b; -[SCPublicProfileManagementContext setGrpcServiceFactory:] */

void FUN_1068275ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682761c; end: 106827623; -[SCPublicProfileManagementContext activityFeedPresenter] */

undefined8 FUN_10682761c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106827624; end: 106827653; -[SCPublicProfileManagementContext setActivityFeedPresenter:] */

void FUN_106827624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106827654; end: 10682765b; -[SCPublicProfileManagementContext publicProfileManager] */

undefined8 FUN_106827654(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10682765c; end: 10682768b; -[SCPublicProfileManagementContext setPublicProfileManager:] */

void FUN_10682765c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682768c; end: 106827693; -[SCPublicProfileManagementContext notificationSettingsActionHandler] */

undefined8 FUN_10682768c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106827694; end: 1068276c3; -[SCPublicProfileManagementContext setNotificationSettingsActionHandler:] */

void FUN_106827694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068276c4; end: 1068276cb; -[SCPublicProfileManagementContext discoverFeedStoryPlayer] */

undefined8 FUN_1068276c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1068276cc; end: 1068276fb; -[SCPublicProfileManagementContext setDiscoverFeedStoryPlayer:] */

void FUN_1068276cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068276fc; end: 106827703; -[SCPublicProfileManagementContext nativeModelGenerator] */

undefined8 FUN_1068276fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106827704; end: 106827733; -[SCPublicProfileManagementContext setNativeModelGenerator:] */

void FUN_106827704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106827734; end: 10682773b; -[SCPublicProfileManagementContext profileManagementNuxHandler] */

undefined8 FUN_106827734(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10682773c; end: 10682776b; -[SCPublicProfileManagementContext setProfileManagementNuxHandler:] */

void FUN_10682773c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682776c; end: 106827773; -[SCPublicProfileManagementContext adsTabHandlers] */

undefined8 FUN_10682776c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 106827774; end: 1068277a3; -[SCPublicProfileManagementContext setAdsTabHandlers:] */

void FUN_106827774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068277a4; end: 1068277ab; -[SCPublicProfileManagementContext navigator] */

undefined8 FUN_1068277a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1068277ac; end: 1068277db; -[SCPublicProfileManagementContext setNavigator:] */

void FUN_1068277ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


