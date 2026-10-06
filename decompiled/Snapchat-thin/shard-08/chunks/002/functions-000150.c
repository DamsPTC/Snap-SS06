/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e9ab80; end: 105e9ac13; -[SCPublicProfileManagementPageLaunchHandler _detachUiContainerHelperWithCompletion:] */

void FUN_105e9ab80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e9ac14;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf84b00(uVar1,param_2,0,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105e9ac14; end: 105e9ac27;  */

void FUN_105e9ac14(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e9ac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e9ac28; end: 105e9ada3; -[SCPublicProfileManagementPageLaunchHandler _createDeckUiContainer] */

void FUN_105e9ac28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = uVar1;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar2 = lVar3;
  func_0x00010c275b20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf55bc0(uVar5,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  _objc_release(uVar9);
  puVar6 = PTR_PTR_1126b0320;
  func_0x00010c0cf9c0(PTR_PTR_1126b0320);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b5c20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b52c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf668c0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0cfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e9ada4; end: 105e9adab; -[SCPublicProfileManagementPageLaunchHandler screen] */

undefined4 FUN_105e9ada4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* Entry: 105e9adac; end: 105e9adb3; -[SCPublicProfileManagementPageLaunchHandler composerPayloadClass] */

undefined8 FUN_105e9adac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105e9adb4; end: 105e9ade3; -[SCPublicProfileManagementPageLaunchHandler setComposerPayloadClass:] */

void FUN_105e9adb4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105e9ade4; end: 105e9adeb; -[SCPublicProfileManagementPageLaunchHandler payloadClass] */

undefined8 FUN_105e9ade4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105e9adec; end: 105e9adf3; -[SCPublicProfileManagementPageLaunchHandler payloadType] */

undefined4 FUN_105e9adec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



/* Entry: 105e9adf4; end: 105e9ae7b; -[SCPublicProfileManagementPageLaunchHandler .cxx_destruct] */

void FUN_105e9adf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e9ae7c; end: 105e9b00f; -[SCPublicProfileManagementPageLauncherPlugin initWithPublicProfileManagementScopeExposer:snapProServices:navigationDelegate:deckServices:] */

undefined1 *
FUN_105e9ae7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = &uStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126ed9e8;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c56c0;
    _objc_alloc();
    func_0x00010c03bd40();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(param_3 + 8);
}



/* Entry: 105e9b010; end: 105e9b017; -[SCPublicProfileManagementPageLauncherPlugin handlers] */

undefined8 FUN_105e9b010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e9b018; end: 105e9b047; -[SCPublicProfileManagementPageLauncherPlugin setHandlers:] */

void FUN_105e9b018(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105e9b048; end: 105e9b04f; -[SCPublicProfileManagementPageLauncherPlugin nativePayloadHandlers] */

undefined8 FUN_105e9b048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e9b050; end: 105e9b07f; -[SCPublicProfileManagementPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_105e9b050(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105e9b080; end: 105e9b087; -[SCPublicProfileManagementPageLauncherPlugin composerNativePayloadHandlers] */

undefined8 FUN_105e9b080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e9b088; end: 105e9b0b7; -[SCPublicProfileManagementPageLauncherPlugin setComposerNativePayloadHandlers:] */

void FUN_105e9b088(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105e9b0b8; end: 105e9b0f3; -[SCPublicProfileManagementPageLauncherPlugin .cxx_destruct] */

void FUN_105e9b0b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e9b0f4; end: 105e9b17b;  */

undefined * FUN_105e9b0f4(int param_1)

{
  if (param_1 - 1U < 4) {
    return (&PTR_PTR_1108f0e80)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 105e9b17c; end: 105e9b383;  */

void FUN_105e9b17c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010bf25000(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c291840(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf01740();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf4b900();
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010bf01740(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf4b900();
      _objc_release(lVar3);
      puVar9 = PTR_PTR_1126c5088;
      _objc_alloc(PTR_PTR_1126c5088);
      lVar3 = lVar1;
      func_0x00010c2711a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c260dc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c074e40(lVar2);
      _objc_retain(lVar1);
      lVar8 = lVar1;
      func_0x00010c078f80(lVar1);
      func_0x00010c0691a0(lVar1);
      _objc_release(lVar1);
      func_0x00010c00d580(puVar9,param_2,lVar3,lVar6,lVar7,lVar8,lVar4,lVar5);
      _objc_release(lVar6);
      _objc_release(lVar3);
      lVar3 = lVar1;
      func_0x00010bfe5ea0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4140(puVar9,param_2,lVar3);
      _objc_release(lVar3);
      lVar3 = lVar1;
      func_0x00010c0b4680(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(puVar9,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_105e9b35c;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_105e9b35c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105e9b384; end: 105e9b77b; -[SCDiscoverFeedThumbnailRingViewManager initWithDiscoverFeedFriendStoriesDataCoordinator:friendsFeedViewLifecycleListener:uberAvatarScopeServices:uberAvatarScopeExposer:circumstanceEngine:discoverFeedActionHandler:friendStoriesPlaybackListener:currentPageTracker:discoverFeedBadgeLifecycleListener:storiesConfigProvider:publicProfileManager:cachedReadReceiptViewStateProvider:userPreferences:discoverFeedDataFetcher:creatorSettingsFetcher:badgeRanker:] */

undefined8 *
FUN_105e9b384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  puStack_70 = PTR_PTR_1126ed9f0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_retain(param_3);
    uVar3 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 0x14) = 0;
    _objc_retain(param_8);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar3);
    uVar3 = param_12;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar1[0x18];
    puVar1[0x18] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar1[0x19];
    puVar1[0x19] = param_17;
    _objc_release(uVar3);
    uVar3 = puVar1[0x17];
    puVar1[0x17] = 0;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = param_18;
    _objc_release(uVar3);
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



/* Entry: 105e9b77c; end: 105e9b7ab;  */

void FUN_105e9b77c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c258320(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105e9b7ac; end: 105e9b91f; -[SCDiscoverFeedThumbnailRingViewManager attachThumbnailViewToContainer:withDefaultIcon:] */

void FUN_105e9b7ac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c56c8;
  _objc_retain(param_4);
  _objc_alloc();
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf151a0(param_3);
  func_0x00010c009ee0();
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_storeWeak(param_1 + 0x20,param_3);
  func_0x00010c222380(param_3);
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  func_0x00010bea8ea0(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c2468;
  func_0x00010bf914e0(PTR_PTR_1126c2468);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf1f360();
  _objc_release(puVar5);
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    puVar5 = PTR_PTR_1126c56d0;
    _objc_opt_class(PTR_PTR_1126c56d0);
    uVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((uVar6 & 1) != 0) {
      func_0x00010befa200(param_3);
    }
  }
  func_0x00010beae820(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e9b920; end: 105e9babb; -[SCDiscoverFeedThumbnailRingViewManager _setUpBadgeRanker] */

void FUN_105e9b920(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined **)(param_1 + 0xf0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b1468;
    _objc_alloc(PTR_PTR_1126b1468);
    func_0x00010c055e20();
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c1270c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c13cc80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 105e9babc; end: 105e9bb1b;  */

void FUN_105e9babc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c06b700(param_2);
  _objc_release(param_2);
  func_0x00010bdce7c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9bb1c; end: 105e9bbdf; -[SCDiscoverFeedThumbnailRingViewManager _requestThumbnailPresentation] */

void FUN_105e9bb1c(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    _objc_initWeak(auStack_28);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105e9bbe0;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be793b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareStoryThumbnailRing_11257be88);
  return;
}



/* Entry: 105e9bbe0; end: 105e9bc53;  */

void FUN_105e9bbe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xf8) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    puVar1 = PTR_PTR_1126b1460;
    func_0x00010bef0400(PTR_PTR_1126b1460,param_2,PTR____kCFBooleanTrue_11034ab68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9bc54; end: 105e9bca7; -[SCDiscoverFeedThumbnailRingViewManager _notifyRankerThumbnailInactive] */

void FUN_105e9bc54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(undefined1 *)(param_1 + 0xf8) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    puVar1 = PTR_PTR_1126b1460;
    func_0x00010c0db7e0(PTR_PTR_1126b1460);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105e9bca8; end: 105e9bd53; -[SCDiscoverFeedThumbnailRingViewManager _applyRankerDecision:] */

void FUN_105e9bca8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105e9bd54;
  puStack_40 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105e9bd54; end: 105e9bdcf;  */

void FUN_105e9bd54(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0xf9);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      *(undefined1 *)(lVar2 + 0xf9) = 1;
      if (((*(byte *)(lVar2 + 0xf8) & 1) != 0) || ((bVar1 & 1) == 0)) {
        *(undefined1 *)(lVar2 + 0xf8) = 0;
        func_0x00010be793a0(lVar2);
      }
    }
    else if (bVar1 != 0) {
      *(undefined1 *)(lVar2 + 0xf9) = 0;
      func_0x00010c28afa0(*(undefined8 *)(lVar2 + 8),param_2,1,1,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e9bdd0; end: 105e9bdd3; -[SCDiscoverFeedThumbnailRingViewManager didTapOnAvatarView] */

void FUN_105e9bdd0(void)

{
  return;
}



/* Entry: 105e9bdd4; end: 105e9bdd7; -[SCDiscoverFeedThumbnailRingViewManager didTapOnPublisherProfile] */

void FUN_105e9bdd4(void)

{
  return;
}



/* Entry: 105e9bdd8; end: 105e9bddb; -[SCDiscoverFeedThumbnailRingViewManager didTapOnStory] */

void FUN_105e9bdd8(void)

{
  return;
}



/* Entry: 105e9bddc; end: 105e9bddf; -[SCDiscoverFeedThumbnailRingViewManager navigationBarButtonItem:didChangeBadgeCount:] */

void FUN_105e9bddc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyNumericOverlayRule_112551318);
  return;
}



/* Entry: 105e9bde0; end: 105e9bde3; -[SCDiscoverFeedThumbnailRingViewManager navigationBarButtonItem:didChangeShowBadgeCount:] */

void FUN_105e9bde0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyNumericOverlayRule_112551318);
  return;
}



/* Entry: 105e9bde4; end: 105e9be7b; -[SCDiscoverFeedThumbnailRingViewManager _applyNumericOverlayRule] */

void FUN_105e9bde4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c26d800();
  if (iVar1 == 0) {
    return;
  }
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf151a0();
  if (lVar3 != 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2360c0();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9be7c; end: 105e9c2ef; -[SCDiscoverFeedThumbnailRingViewManager _setupObservingEventsWithDiscoverFeedFriendStoriesDataCoordinator:friendsFeedViewLifecycleListener:friendStoriesPlaybackListener:currentPageTracker:] */

void FUN_105e9be7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c29d340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e9c2f0;
  puStack_90 = &UNK_1108c9cc0;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0e0b00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105e9c480;
  puStack_b8 = &UNK_1108d46c0;
  _objc_copyWeak(auStack_b0,auStack_80);
  uVar5 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c2468;
  func_0x00010bfe6640(PTR_PTR_1126c2468);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf1f360();
  _objc_release(puVar6);
  _objc_release(uVar5);
  uVar5 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bfb9e80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105e9c5b8;
  puStack_e8 = &UNK_1108f0f10;
  _objc_copyWeak(auStack_e0,auStack_80);
  uStack_d8 = (undefined1)uVar2;
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  uVar2 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x105e9c6f0;
  puStack_110 = &UNK_110842a38;
  _objc_copyWeak(auStack_108,auStack_80);
  uVar5 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010bf5f7c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_130,auStack_80);
  uVar5 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e9c2f0; end: 105e9c39f;  */

void FUN_105e9c2f0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1560(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105e9c3a0; end: 105e9c443;  */

void FUN_105e9c3a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010be0b820(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e9c444; end: 105e9c47f;  */

void FUN_105e9c444(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9c480; end: 105e9c54b;  */

void FUN_105e9c480(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be0b820(lVar1);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105e9c54c; end: 105e9c5b7;  */

void FUN_105e9c54c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c08a7e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be695a0(lVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e9c5b8; end: 105e9c68b;  */

void FUN_105e9c5b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_retain(param_2);
  uStack_38 = *(undefined1 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  func_0x00010be0b820(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 105e9c68c; end: 105e9c7af;  */

void FUN_105e9c68c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f3c0();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x30) != '\x01')) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9c7b0; end: 105e9c87f; -[SCDiscoverFeedThumbnailRingViewManager _didChangeCurrentPageEvent:] */

void FUN_105e9c7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0c02c0(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105e9c880; end: 105e9c8ef;  */

void FUN_105e9c880(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    func_0x00010be31840(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9c8f0; end: 105e9c8fb;  */

void FUN_105e9c8f0(void)

{
  return;
}



/* Entry: 105e9c8fc; end: 105e9c9cf; -[SCDiscoverFeedThumbnailRingViewManager _handleSwitchCurrentPage:] */

void FUN_105e9c8fc(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(char *)(param_1 + 0xb0) = (char)param_3;
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf151a0();
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c2360c0();
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c26d800();
  if ((iVar1 != 0) && ((uVar5 & 1) == 0)) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1a80e0();
    _objc_release(lVar2);
  }
  if ((param_3 != 0) && (*(long *)(param_1 + 0xd8) == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010be353b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__hideBadgeFromTab__11256ae88,
               &PTR____CFConstantStringClassReference_110e2ebd8);
    return;
  }
  return;
}



/* Entry: 105e9c9d0; end: 105e9cb9f; -[SCDiscoverFeedThumbnailRingViewManager _shouldShowDiscoverFeedTtlBasedBadge] */

ulong FUN_105e9c9d0(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  if ((*(byte *)(param_2 + 0xb0) & 1) == 0) {
    lVar1 = *(long *)(param_2 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf82300();
    _objc_release();
    if (-1 < lVar2) {
      lVar1 = *(long *)(param_2 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf822e0();
      if ((int)lVar3 == 0) {
        _objc_release(lVar1);
      }
      else {
        uVar4 = *(ulong *)(param_2 + 8);
        func_0x00010bf15340();
        _objc_release();
        if ((uVar4 & 1) == 0) goto LAB_105e9ca64;
      }
      func_0x00010be46ea0();
      _objc_retainAutoreleasedReturnValue();
      if ((param_2 == 0) || (func_0x00010c26f3a0(param_2), (double)lVar2 <= -param_1)) {
        puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c2238;
        func_0x00010bf153a0(PTR_PTR_1126c2238);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126c2238;
        func_0x00010c26d820();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = 1;
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1049a0(puVar5);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      else {
        uVar4 = 0;
      }
      _objc_release();
      goto LAB_105e9cb64;
    }
  }
LAB_105e9ca64:
  param_2 = lVar1;
  uVar4 = 0;
LAB_105e9cb64:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar9 = *(ulong *)(param_2 + 0x90);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar5);
  uVar4 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return uVar4;
}



/* Entry: 105e9cba0; end: 105e9cc07; -[SCDiscoverFeedThumbnailRingViewManager _lastDiscoverFeedVisit] */

void FUN_105e9cba0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x90);
  func_0x00010c0dff20(uVar2,param_2,&PTR____CFConstantStringClassReference_110e1c918);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e9cc08; end: 105e9cccb; -[SCDiscoverFeedThumbnailRingViewManager _updateBadgeWithSwitchedToFriendsFeed:forBadgeTab:] */

void FUN_105e9cc08(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf82300();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf90300();
  _objc_release(uVar3);
  if ((lVar2 < 0) || ((int)uVar4 != 0)) {
    *(char *)(param_1 + 0x81) = (char)param_3;
    if (*(long *)(param_1 + 0xd8) == 2) {
      if ((param_3 & 1) == 0) {
        func_0x00010be353a0(param_1,param_2,param_4);
      }
    }
    else if ((*(long *)(param_1 + 0xd8) == 0) && (param_3 != 0)) {
      func_0x00010beb7e60(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e9cccc; end: 105e9cd1f; -[SCDiscoverFeedThumbnailRingViewManager _startPlaybackOnThumbnailBadgeTap] */

void FUN_105e9cccc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(param_1 + 0x88) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be59c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__logThumbnailTapForTab__1125740a0,
               &PTR____CFConstantStringClassReference_110e2ebd8);
    return;
  }
  return;
}



/* Entry: 105e9cd20; end: 105e9cdeb; -[SCDiscoverFeedThumbnailRingViewManager _prepareStoriesDirectToPlayBlock] */

void FUN_105e9cd20(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar2 = &puStack_50;
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c26d800();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x105e9cdc0;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined ***)(param_1 + 0x88) = ppuVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105e9cdec; end: 105e9cf5b; -[SCDiscoverFeedThumbnailRingViewManager _prepareStoriesPlaybackSession] */

void FUN_105e9cdec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    puVar1 = PTR_PTR_1126b1118;
    _objc_alloc(PTR_PTR_1126b1118);
    func_0x00010c043160();
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    _CACurrentMediaTime();
    func_0x000107aff660(uVar2,2,puVar1,&PTR____CFConstantStringClassReference_110eb8ad8,0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x78));
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa9a40(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e9cf5c; end: 105e9cfb7;  */

void FUN_105e9cf5c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_1108f0fa0);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be746a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e9cfb8; end: 105e9cfd3;  */

uint FUN_105e9cfb8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07fc80(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 105e9cfd4; end: 105e9d0eb; -[SCDiscoverFeedThumbnailRingViewManager _playFriendStories:] */

void FUN_105e9cfd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be1f1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c259cc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000108f50588(0,lVar1,param_3,3,lVar2,&PTR____CFConstantStringClassReference_110eb8b38,0,
                        0x47);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105e9d0ec;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    lStack_48 = lVar3;
    _objc_retain(lVar3);
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e9d0ec; end: 105e9d0fb;  */

void FUN_105e9d0ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x78),PTR_s_handleActionWithSender_actionMod_1125d19f8,lVar1,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 8));
  return;
}



/* Entry: 105e9d0fc; end: 105e9d1bf; -[SCDiscoverFeedThumbnailRingViewManager _onFriendStoriesSynced:] */

void FUN_105e9d0fc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf1f3c0();
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010beb5ea0();
    if ((int)lVar1 == 0) {
      if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
        *(undefined1 *)(param_1 + 0xa4) = 1;
        if (*(long *)(param_1 + 0xa8) != 0) {
          (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))();
          uVar2 = *(undefined8 *)(param_1 + 0xa8);
          *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(uVar2);
          return;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xa4) = 1;
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(param_1 + 0xd8) = 1;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_105e9d1c0;
      puStack_30 = &UNK_110842e18;
      lStack_28 = param_1;
      func_0x0001000d76cc("APPSTORE",&puStack_48);
    }
  }
  return;
}



/* Entry: 105e9d1c0; end: 105e9d1c7;  */

void FUN_105e9d1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showDiscoverFeedBadge_11258bc90);
  return;
}



/* Entry: 105e9d1c8; end: 105e9d28b; -[SCDiscoverFeedThumbnailRingViewManager _showBadgeOnSwitchingFeed] */

void FUN_105e9d1c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  if (*(char *)(param_1 + 0x81) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c22a8;
  func_0x00010bf82340(PTR_PTR_1126c22a8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f360();
  _objc_release(puVar3);
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0xd8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010beb8bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDiscoverFeedBadge_11258bc90);
  return;
}



/* Entry: 105e9d28c; end: 105e9d377; -[SCDiscoverFeedThumbnailRingViewManager _showDiscoverFeedBadge] */

void FUN_105e9d28c(long param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  *(undefined1 *)(param_1 + 0x80) = 1;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e9d378;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock();
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    puVar2 = (undefined1 *)ppuVar1;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined1 **)(param_1 + 0xa8) = puVar2;
    _objc_release(uVar3);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e9d378; end: 105e9d3a3;  */

void FUN_105e9d378(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9d3a4; end: 105e9d453; -[SCDiscoverFeedThumbnailRingViewManager _hideBadgeFromTab:] */

void FUN_105e9d3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c26d800();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    func_0x00010be59b00(param_1,param_2,param_3);
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1a80e0();
  }
  _objc_release(lVar3);
  func_0x00010c28afa0(*(undefined8 *)(param_1 + 8),param_2,1,1,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  func_0x00010be64f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e9d454; end: 105e9d51f; -[SCDiscoverFeedThumbnailRingViewManager _prepareStoryThumbnailRing] */

void FUN_105e9d454(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfaa800(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105e9d520; end: 105e9d5ab;  */

void FUN_105e9d520(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      func_0x00010be793e0(param_1);
    }
    else {
      lVar1 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee20c0(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e9d5ac; end: 105e9d7b3; -[SCDiscoverFeedThumbnailRingViewManager _prepareSubsStoryThumbnail] */

void FUN_105e9d5ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf009e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b4028;
  func_0x00010c258820(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c2604e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b4028;
  func_0x00010c258820(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c2605a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010050471c();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105e9d7e4;
  puStack_70 = &UNK_1108f1040;
  uStack_68 = uVar6;
  _objc_retain();
  uVar7 = uVar2;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar4;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105e9d88c;
  puStack_a0 = &UNK_110841f80;
  lStack_98 = param_1;
  uStack_90 = uVar7;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_release(uStack_90);
  _objc_release(uVar7);
  _objc_release(uStack_68);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105e9d7b4; end: 105e9d7bb;  */

void FUN_105e9d7b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 105e9d7bc; end: 105e9d7e3;  */

void FUN_105e9d7bc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105e9d7e4; end: 105e9d88b;  */

uint FUN_105e9d7e4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000107c03ddc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0741a0();
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar3;
      func_0x00010c074c20(uVar3);
      uVar5 = (uint)uVar4 ^ 1;
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 105e9d88c; end: 105e9d897;  */

void FUN_105e9d88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebb670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showThumbnailBadgeForSubscripti_11258c740,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105e9d898; end: 105e9d98b; -[SCDiscoverFeedThumbnailRingViewManager _updateThumbnailRingWithStoriesSummaryInfo:] */

void FUN_105e9d898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105e9d98c; end: 105e9dab7;  */

void FUN_105e9d98c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_105e9da3c;
  if ((*(long *)(lVar2 + 0xe8) != 0) && (*(char *)(lVar2 + 0xf9) != '\x01')) goto LAB_105e9da50;
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(lVar2 + 0xd8) != 1) {
      iVar1 = (int)*(undefined8 *)(lVar2 + 8);
      func_0x00010bf15340();
      if (iVar1 == 0) goto LAB_105e9da3c;
    }
    if ((*(byte *)(lVar2 + 0x80) & 1) != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0xb8);
      *(undefined8 *)(lVar2 + 0xb8) = 0;
      _objc_release(uVar3);
      lVar4 = lVar2 + 0x20;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010bf151a0();
      if (lVar5 == 0) {
        _objc_release(lVar4);
LAB_105e9da70:
        lVar4 = lVar2 + 0x20;
        _objc_loadWeakRetained(lVar4);
        func_0x00010c1a80e0();
        _objc_release(lVar4);
      }
      else {
        uVar6 = lVar2 + 0x20;
        _objc_loadWeakRetained();
        uVar7 = uVar6;
        func_0x00010c2360c0();
        _objc_release(uVar6);
        _objc_release(lVar4);
        if ((uVar7 & 1) == 0) goto LAB_105e9da70;
      }
      func_0x00010c28afa0(*(undefined8 *)(lVar2 + 8),param_2,0,1,*(undefined8 *)(param_1 + 0x20));
      func_0x00010be59be0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e2ebd8);
      goto LAB_105e9da50;
    }
  }
LAB_105e9da3c:
  func_0x00010be353a0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e2ebd8);
LAB_105e9da50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e9dab8; end: 105e9daff; -[SCDiscoverFeedThumbnailRingViewManager _executeBlockWithLock:] */

void FUN_105e9dab8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xa0);
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xa0);
  return;
}



/* Entry: 105e9db00; end: 105e9dc1b; -[SCDiscoverFeedThumbnailRingViewManager _getFirstUnwatchedStory:] */

void FUN_105e9db00(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_108 + lVar9 * 8);
        uVar3 = uVar7;
        func_0x00010bfddf20();
        if ((int)uVar3 != 0) {
          _objc_retain(uVar7);
          goto LAB_105e9dbd4;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  uVar7 = 0;
LAB_105e9dbd4:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  if ((*(long *)(param_3 + 0xe8) != 0) && (*(char *)(param_3 + 0xf9) != '\x01')) goto LAB_105e9dd28;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(long *)(param_3 + 0xd8) != 1) {
      iVar1 = (int)*(undefined8 *)(param_3 + 8);
      func_0x00010bf15340();
      if (iVar1 == 0) goto LAB_105e9dccc;
    }
    if ((*(byte *)(param_3 + 0x80) & 1) != 0) {
      _objc_retain(puVar6);
      uVar3 = *(undefined8 *)(param_3 + 0xb8);
      *(undefined8 **)(param_3 + 0xb8) = puVar6;
      _objc_release(uVar3);
      lVar2 = param_3 + 0x20;
      _objc_loadWeakRetained();
      lVar8 = lVar2;
      func_0x00010bf151a0();
      if (lVar8 == 0) {
        _objc_release(lVar2);
LAB_105e9dcec:
        lVar2 = param_3 + 0x20;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c1a80e0();
        _objc_release(lVar2);
      }
      else {
        uVar4 = param_3 + 0x20;
        _objc_loadWeakRetained();
        uVar5 = uVar4;
        func_0x00010c2360c0();
        _objc_release(uVar4);
        _objc_release(lVar2);
        if ((uVar5 & 1) == 0) goto LAB_105e9dcec;
      }
      func_0x00010c28afe0(*(undefined8 *)(param_3 + 8),param_2,puVar6);
      func_0x00010be59be0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2ebd8);
      goto LAB_105e9dd28;
    }
  }
LAB_105e9dccc:
  func_0x00010be353a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2ebd8);
LAB_105e9dd28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105e9dc1c; end: 105e9dd3f; -[SCDiscoverFeedThumbnailRingViewManager _showThumbnailBadgeForSubscriptionStory:] */

void FUN_105e9dc1c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0xe8) != 0) && (*(char *)(param_1 + 0xf9) != '\x01')) goto LAB_105e9dd28;
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0xd8) != 1) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010bf15340();
      if (iVar1 == 0) goto LAB_105e9dccc;
    }
    if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
      *(long *)(param_1 + 0xb8) = param_3;
      _objc_release(uVar2);
      lVar3 = param_1 + 0x20;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010bf151a0();
      if (lVar4 == 0) {
        _objc_release(lVar3);
LAB_105e9dcec:
        lVar3 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c1a80e0();
        _objc_release(lVar3);
      }
      else {
        uVar5 = param_1 + 0x20;
        _objc_loadWeakRetained();
        uVar6 = uVar5;
        func_0x00010c2360c0();
        _objc_release(uVar5);
        _objc_release(lVar3);
        if ((uVar6 & 1) == 0) goto LAB_105e9dcec;
      }
      func_0x00010c28afe0(*(undefined8 *)(param_1 + 8),param_2,param_3);
      func_0x00010be59be0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2ebd8);
      goto LAB_105e9dd28;
    }
  }
LAB_105e9dccc:
  func_0x00010be353a0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2ebd8);
LAB_105e9dd28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e9dd40; end: 105e9dd5b; -[SCDiscoverFeedThumbnailRingViewManager _logThumbnailRenderForTab:] */

/* WARNING: Removing unreachable block (ram,0x00010852f830) */
/* WARNING: Removing unreachable block (ram,0x00010852faf0) */
/* WARNING: Removing unreachable block (ram,0x00010852f628) */
/* WARNING: Removing unreachable block (ram,0x00010852f6b8) */

void FUN_105e9dd40(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined **ppuStack_330;
  long *plStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined **ppuStack_2b0;
  long *plStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined **ppuStack_230;
  long *plStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 ***pppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e2ec18;
  ppuVar11 = &PTR____CFConstantStringClassReference_110dea8b8;
  uVar13 = 1;
  puVar8 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar6;
  puVar3 = param_3;
  ppuVar12 = ppuVar11;
  _objc_retain(&PTR____CFConstantStringClassReference_110e2ec18);
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110dea8b8);
  if (lVar1 != 0) {
    plVar14 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e2ec18);
    ppuVar2 = ppuVar6;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e2ec18);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e2ec18);
    func_0x000107c278b8(auStack_a0,ppuVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar3);
    _objc_retain(&PTR____CFConstantStringClassReference_110dea8b8);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dea8b8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
    func_0x000107c278b8(auStack_70,ppuVar11);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    ppuVar2 = (undefined **)&UNK_110a51750;
    ppuVar12 = (undefined **)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar1 = 0;
    puVar3 = (undefined *)puVar8;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  _objc_release(param_3);
  _objc_release(&PTR____CFConstantStringClassReference_110e2ec18);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  puStack_c8 = &UNK_10852f868;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar2;
  puVar4 = puVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar3);
  _objc_retain(ppuVar12);
  if (ppuVar6 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar6[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar11 = (undefined **)&UNK_10f4a390b;
    }
    else {
      ppuVar11 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x000107c278b8(auStack_160,ppuVar11);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar4 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_148,puVar4);
    _objc_retain(ppuVar12);
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar11 = (undefined **)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(ppuVar12);
      ppuVar11 = ppuVar12;
      func_0x00010bdc3520(ppuVar12);
    }
    _objc_release(ppuVar12);
    func_0x000107c278b8(auStack_130,ppuVar11);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    ppuVar11 = (undefined **)&UNK_110a517a0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a517a0,&uStack_180,uVar13);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar1 = 0;
    puVar4 = (undefined *)puVar8;
    do {
      if ((&cStack_119)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar1 != -0x48);
  }
  _objc_release(ppuVar12);
  _objc_release(puVar3);
  ppuVar6 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(ppuVar12);
    puVar8 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar8);
    _objc_release(ppuVar12);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    ppuVar5 = ppuVar6;
    __Unwind_Resume();
    ppuVar10 = &puStack_200;
    puStack_188 = &UNK_10852fb28;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar7 = ppuVar11;
    puVar9 = puVar4;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar8;
    ppuStack_1b0 = ppuVar6;
    ppuStack_1a8 = ppuVar12;
    puStack_1a0 = puVar3;
    ppuStack_198 = ppuVar2;
    ppuStack_190 = &puStack_d0;
    _objc_retain(ppuVar11);
    plVar14 = (long *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar11);
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar11;
        _objc_retainAutorelease(ppuVar11);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar11);
      puVar8 = auStack_1e0;
      func_0x000107c278b8(auStack_1e0,ppuVar2);
      puStack_200 = (undefined *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x000107c27984(&puStack_200,auStack_1e0,&lStack_1c8,1);
      ppuVar7 = (undefined **)&UNK_110a517f0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a517f0,&puStack_200,puVar4);
      puStack_1e8 = (undefined1 *)&puStack_200;
      func_0x000107c278ac(&puStack_1e8);
      puVar9 = (undefined *)ppuVar10;
      ppuVar6 = &puStack_200;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar9 = (undefined *)ppuVar10;
        ppuVar6 = &puStack_200;
      }
    }
    ppuVar2 = ppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar11);
    _objc_release(ppuVar11);
    ppuVar5 = ppuVar2;
    __Unwind_Resume();
    ppuVar10 = &puStack_280;
    puStack_208 = &UNK_10852fc9c;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = ppuVar7;
    puVar3 = puVar9;
    puStack_240 = unaff_x24;
    puStack_238 = puVar8;
    ppuStack_230 = ppuVar6;
    plStack_228 = plVar14;
    ppuStack_220 = ppuVar2;
    ppuStack_218 = ppuVar11;
    pppuStack_210 = &ppuStack_190;
    _objc_retain(ppuVar7);
    plVar14 = (long *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      puVar8 = auStack_260;
      func_0x000107c278b8(auStack_260,ppuVar2);
      puStack_280 = (undefined *)0x0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x000107c27984(&puStack_280,auStack_260,&lStack_248,1);
      ppuVar12 = (undefined **)&UNK_110a51840;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51840,&puStack_280,puVar9);
      puStack_268 = (undefined1 *)&puStack_280;
      func_0x000107c278ac(&puStack_268);
      puVar3 = (undefined *)ppuVar10;
      ppuVar6 = &puStack_280;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar3 = (undefined *)ppuVar10;
        ppuVar6 = &puStack_280;
      }
    }
    ppuVar2 = ppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar7);
    _objc_release(ppuVar7);
    ppuVar5 = ppuVar2;
    __Unwind_Resume();
    ppuVar10 = &puStack_300;
    puStack_288 = &UNK_10852fe10;
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar11 = ppuVar12;
    puVar4 = puVar3;
    puStack_2c0 = unaff_x24;
    puStack_2b8 = puVar8;
    ppuStack_2b0 = ppuVar6;
    plStack_2a8 = plVar14;
    ppuStack_2a0 = ppuVar2;
    ppuStack_298 = ppuVar7;
    pppuStack_290 = &pppuStack_210;
    _objc_retain(ppuVar12);
    plVar14 = (long *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar12);
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar12;
        _objc_retainAutorelease(ppuVar12);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar12);
      puVar8 = auStack_2e0;
      func_0x000107c278b8(auStack_2e0,ppuVar2);
      puStack_300 = (undefined *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x000107c27984(&puStack_300,auStack_2e0,&lStack_2c8,1);
      ppuVar11 = (undefined **)&UNK_110a51890;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51890,&puStack_300,puVar3);
      puStack_2e8 = (undefined1 *)&puStack_300;
      func_0x000107c278ac(&puStack_2e8);
      puVar4 = (undefined *)ppuVar10;
      ppuVar6 = &puStack_300;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar4 = (undefined *)ppuVar10;
        ppuVar6 = &puStack_300;
      }
    }
    ppuVar2 = ppuVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar12);
    _objc_release(ppuVar12);
    ppuVar5 = ppuVar2;
    __Unwind_Resume();
    puStack_308 = &UNK_10852ff84;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar7 = ppuVar11;
    puStack_340 = unaff_x24;
    puStack_338 = puVar8;
    ppuStack_330 = ppuVar6;
    plStack_328 = plVar14;
    ppuStack_320 = ppuVar2;
    ppuStack_318 = ppuVar12;
    pppuStack_310 = &pppuStack_290;
    _objc_retain(ppuVar11);
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar11);
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar11;
        _objc_retainAutorelease(ppuVar11);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar11);
      func_0x000107c278b8(auStack_360,ppuVar2);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
      ppuVar7 = (undefined **)&UNK_110a518e0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a518e0,&uStack_380,puVar4);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x000107c278ac(&puStack_368);
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
      }
    }
    ppuVar2 = ppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar11);
    _objc_release(ppuVar11);
    ppuVar12 = ppuVar2;
    __Unwind_Resume();
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    puStack_388 = &UNK_1085300f8;
    if (ppuVar12 != (undefined **)0x0) {
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      ppuStack_3a0 = ppuVar2;
      ppuStack_398 = ppuVar11;
      pppuStack_390 = &pppuStack_310;
      (**(code **)(*(long *)ppuVar12[1] + 0x18))(ppuVar12[1],&UNK_110a51930,&uStack_3c0,ppuVar7);
      func_0x000107c278ac(&puStack_3a8);
    }
    return;
  }
  return;
}



/* Entry: 105e9dd5c; end: 105e9dd73; -[SCDiscoverFeedThumbnailRingViewManager _logThumbnailTapForTab:] */

/* WARNING: Removing unreachable block (ram,0x00010852f830) */
/* WARNING: Removing unreachable block (ram,0x00010852faf0) */
/* WARNING: Removing unreachable block (ram,0x00010852f628) */
/* WARNING: Removing unreachable block (ram,0x00010852f6b8) */

void FUN_105e9dd5c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined **ppuStack_330;
  long *plStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined **ppuStack_2b0;
  long *plStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined **ppuStack_230;
  long *plStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 ***pppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dea8b8;
  ppuVar5 = &PTR____CFConstantStringClassReference_110e22dd8;
  uVar13 = 1;
  puVar9 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar5;
  puVar3 = param_3;
  ppuVar12 = ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e22dd8);
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110dea8b8);
  if (lVar1 != 0) {
    plVar14 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e22dd8);
    ppuVar2 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e22dd8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e22dd8);
    func_0x000107c278b8(auStack_a0,ppuVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar3);
    _objc_retain(&PTR____CFConstantStringClassReference_110dea8b8);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dea8b8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
    func_0x000107c278b8(auStack_70,ppuVar4);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    ppuVar2 = (undefined **)&UNK_110a51750;
    ppuVar12 = (undefined **)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar1 = 0;
    puVar3 = (undefined *)puVar9;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  _objc_release(param_3);
  _objc_release(&PTR____CFConstantStringClassReference_110e22dd8);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  puStack_c8 = &UNK_10852f868;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar2;
  puVar6 = puVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar3);
  _objc_retain(ppuVar12);
  if (ppuVar5 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar5[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f4a390b;
    }
    else {
      ppuVar4 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x000107c278b8(auStack_160,ppuVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar6 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_148,puVar6);
    _objc_retain(ppuVar12);
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(ppuVar12);
      ppuVar4 = ppuVar12;
      func_0x00010bdc3520(ppuVar12);
    }
    _objc_release(ppuVar12);
    func_0x000107c278b8(auStack_130,ppuVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    ppuVar4 = (undefined **)&UNK_110a517a0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a517a0,&uStack_180,uVar13);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar1 = 0;
    puVar6 = (undefined *)puVar9;
    do {
      if ((&cStack_119)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar1 != -0x48);
  }
  _objc_release(ppuVar12);
  _objc_release(puVar3);
  ppuVar5 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(ppuVar12);
    puVar9 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar9);
    _objc_release(ppuVar12);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    ppuVar7 = ppuVar5;
    __Unwind_Resume();
    ppuVar11 = &puStack_200;
    puStack_188 = &UNK_10852fb28;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = ppuVar4;
    puVar10 = puVar6;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar9;
    ppuStack_1b0 = ppuVar5;
    ppuStack_1a8 = ppuVar12;
    puStack_1a0 = puVar3;
    ppuStack_198 = ppuVar2;
    ppuStack_190 = &puStack_d0;
    _objc_retain(ppuVar4);
    plVar14 = (long *)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar7[1];
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar4;
        _objc_retainAutorelease(ppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar4);
      puVar9 = auStack_1e0;
      func_0x000107c278b8(auStack_1e0,ppuVar2);
      puStack_200 = (undefined *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x000107c27984(&puStack_200,auStack_1e0,&lStack_1c8,1);
      ppuVar8 = (undefined **)&UNK_110a517f0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a517f0,&puStack_200,puVar6);
      puStack_1e8 = (undefined1 *)&puStack_200;
      func_0x000107c278ac(&puStack_1e8);
      puVar10 = (undefined *)ppuVar11;
      ppuVar5 = &puStack_200;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar10 = (undefined *)ppuVar11;
        ppuVar5 = &puStack_200;
      }
    }
    ppuVar2 = ppuVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar4);
    _objc_release(ppuVar4);
    ppuVar7 = ppuVar2;
    __Unwind_Resume();
    ppuVar11 = &puStack_280;
    puStack_208 = &UNK_10852fc9c;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = ppuVar8;
    puVar3 = puVar10;
    puStack_240 = unaff_x24;
    puStack_238 = puVar9;
    ppuStack_230 = ppuVar5;
    plStack_228 = plVar14;
    ppuStack_220 = ppuVar2;
    ppuStack_218 = ppuVar4;
    pppuStack_210 = &ppuStack_190;
    _objc_retain(ppuVar8);
    plVar14 = (long *)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar7[1];
      _objc_retain(ppuVar8);
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar8;
        _objc_retainAutorelease(ppuVar8);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar8);
      puVar9 = auStack_260;
      func_0x000107c278b8(auStack_260,ppuVar2);
      puStack_280 = (undefined *)0x0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x000107c27984(&puStack_280,auStack_260,&lStack_248,1);
      ppuVar12 = (undefined **)&UNK_110a51840;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51840,&puStack_280,puVar10);
      puStack_268 = (undefined1 *)&puStack_280;
      func_0x000107c278ac(&puStack_268);
      puVar3 = (undefined *)ppuVar11;
      ppuVar5 = &puStack_280;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar3 = (undefined *)ppuVar11;
        ppuVar5 = &puStack_280;
      }
    }
    ppuVar2 = ppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar8);
    _objc_release(ppuVar8);
    ppuVar7 = ppuVar2;
    __Unwind_Resume();
    ppuVar11 = &puStack_300;
    puStack_288 = &UNK_10852fe10;
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar4 = ppuVar12;
    puVar6 = puVar3;
    puStack_2c0 = unaff_x24;
    puStack_2b8 = puVar9;
    ppuStack_2b0 = ppuVar5;
    plStack_2a8 = plVar14;
    ppuStack_2a0 = ppuVar2;
    ppuStack_298 = ppuVar8;
    pppuStack_290 = &pppuStack_210;
    _objc_retain(ppuVar12);
    plVar14 = (long *)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar7[1];
      _objc_retain(ppuVar12);
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar12;
        _objc_retainAutorelease(ppuVar12);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar12);
      puVar9 = auStack_2e0;
      func_0x000107c278b8(auStack_2e0,ppuVar2);
      puStack_300 = (undefined *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x000107c27984(&puStack_300,auStack_2e0,&lStack_2c8,1);
      ppuVar4 = (undefined **)&UNK_110a51890;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51890,&puStack_300,puVar3);
      puStack_2e8 = (undefined1 *)&puStack_300;
      func_0x000107c278ac(&puStack_2e8);
      puVar6 = (undefined *)ppuVar11;
      ppuVar5 = &puStack_300;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar6 = (undefined *)ppuVar11;
        ppuVar5 = &puStack_300;
      }
    }
    ppuVar2 = ppuVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar12);
    _objc_release(ppuVar12);
    ppuVar7 = ppuVar2;
    __Unwind_Resume();
    puStack_308 = &UNK_10852ff84;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = ppuVar4;
    puStack_340 = unaff_x24;
    puStack_338 = puVar9;
    ppuStack_330 = ppuVar5;
    plStack_328 = plVar14;
    ppuStack_320 = ppuVar2;
    ppuStack_318 = ppuVar12;
    pppuStack_310 = &pppuStack_290;
    _objc_retain(ppuVar4);
    if (ppuVar7 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar7[1];
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar4;
        _objc_retainAutorelease(ppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar4);
      func_0x000107c278b8(auStack_360,ppuVar2);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
      ppuVar8 = (undefined **)&UNK_110a518e0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a518e0,&uStack_380,puVar6);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x000107c278ac(&puStack_368);
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
      }
    }
    ppuVar2 = ppuVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar4);
    _objc_release(ppuVar4);
    ppuVar5 = ppuVar2;
    __Unwind_Resume();
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    puStack_388 = &UNK_1085300f8;
    if (ppuVar5 != (undefined **)0x0) {
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      ppuStack_3a0 = ppuVar2;
      ppuStack_398 = ppuVar4;
      pppuStack_390 = &pppuStack_310;
      (**(code **)(*(long *)ppuVar5[1] + 0x18))(ppuVar5[1],&UNK_110a51930,&uStack_3c0,ppuVar8);
      func_0x000107c278ac(&puStack_3a8);
    }
    return;
  }
  return;
}



/* Entry: 105e9dd74; end: 105e9dd8f; -[SCDiscoverFeedThumbnailRingViewManager _logThumbnailClearOnTabEnterForTab:] */

/* WARNING: Removing unreachable block (ram,0x00010852f830) */
/* WARNING: Removing unreachable block (ram,0x00010852faf0) */
/* WARNING: Removing unreachable block (ram,0x00010852f628) */
/* WARNING: Removing unreachable block (ram,0x00010852f6b8) */

void FUN_105e9dd74(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined **ppuStack_330;
  long *plStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined **ppuStack_2b0;
  long *plStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined **ppuStack_230;
  long *plStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 ***pppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e2ec38;
  ppuVar11 = &PTR____CFConstantStringClassReference_110dea8b8;
  uVar13 = 1;
  puVar8 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar6;
  puVar3 = param_3;
  ppuVar12 = ppuVar11;
  _objc_retain(&PTR____CFConstantStringClassReference_110e2ec38);
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110dea8b8);
  if (lVar1 != 0) {
    plVar14 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e2ec38);
    ppuVar2 = ppuVar6;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e2ec38);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e2ec38);
    func_0x000107c278b8(auStack_a0,ppuVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar3);
    _objc_retain(&PTR____CFConstantStringClassReference_110dea8b8);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dea8b8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
    func_0x000107c278b8(auStack_70,ppuVar11);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    ppuVar2 = (undefined **)&UNK_110a51750;
    ppuVar12 = (undefined **)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar1 = 0;
    puVar3 = (undefined *)puVar8;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(&PTR____CFConstantStringClassReference_110dea8b8);
  _objc_release(param_3);
  _objc_release(&PTR____CFConstantStringClassReference_110e2ec38);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  puStack_c8 = &UNK_10852f868;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar2;
  puVar4 = puVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar3);
  _objc_retain(ppuVar12);
  if (ppuVar6 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar6[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar11 = (undefined **)&UNK_10f4a390b;
    }
    else {
      ppuVar11 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x000107c278b8(auStack_160,ppuVar11);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = &UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar4 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_148,puVar4);
    _objc_retain(ppuVar12);
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar11 = (undefined **)&UNK_10f4a390b;
    }
    else {
      _objc_retainAutorelease(ppuVar12);
      ppuVar11 = ppuVar12;
      func_0x00010bdc3520(ppuVar12);
    }
    _objc_release(ppuVar12);
    func_0x000107c278b8(auStack_130,ppuVar11);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    ppuVar11 = (undefined **)&UNK_110a517a0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a517a0,&uStack_180,uVar13);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar1 = 0;
    puVar4 = (undefined *)puVar8;
    do {
      if ((&cStack_119)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar1 != -0x48);
  }
  _objc_release(ppuVar12);
  _objc_release(puVar3);
  ppuVar6 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(ppuVar12);
    puVar8 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar8);
    _objc_release(ppuVar12);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    ppuVar5 = ppuVar6;
    __Unwind_Resume();
    ppuVar10 = &puStack_200;
    puStack_188 = &UNK_10852fb28;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar7 = ppuVar11;
    puVar9 = puVar4;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar8;
    ppuStack_1b0 = ppuVar6;
    ppuStack_1a8 = ppuVar12;
    puStack_1a0 = puVar3;
    ppuStack_198 = ppuVar2;
    ppuStack_190 = &puStack_d0;
    _objc_retain(ppuVar11);
    plVar14 = (long *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar11);
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar11;
        _objc_retainAutorelease(ppuVar11);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar11);
      puVar8 = auStack_1e0;
      func_0x000107c278b8(auStack_1e0,ppuVar2);
      puStack_200 = (undefined *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x000107c27984(&puStack_200,auStack_1e0,&lStack_1c8,1);
      ppuVar7 = (undefined **)&UNK_110a517f0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a517f0,&puStack_200,puVar4);
      puStack_1e8 = (undefined1 *)&puStack_200;
      func_0x000107c278ac(&puStack_1e8);
      puVar9 = (undefined *)ppuVar10;
      ppuVar6 = &puStack_200;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar9 = (undefined *)ppuVar10;
        ppuVar6 = &puStack_200;
      }
    }
    ppuVar2 = ppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar11);
    _objc_release(ppuVar11);
    ppuVar5 = ppuVar2;
    __Unwind_Resume();
    ppuVar10 = &puStack_280;
    puStack_208 = &UNK_10852fc9c;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = ppuVar7;
    puVar3 = puVar9;
    puStack_240 = unaff_x24;
    puStack_238 = puVar8;
    ppuStack_230 = ppuVar6;
    plStack_228 = plVar14;
    ppuStack_220 = ppuVar2;
    ppuStack_218 = ppuVar11;
    pppuStack_210 = &ppuStack_190;
    _objc_retain(ppuVar7);
    plVar14 = (long *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      puVar8 = auStack_260;
      func_0x000107c278b8(auStack_260,ppuVar2);
      puStack_280 = (undefined *)0x0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x000107c27984(&puStack_280,auStack_260,&lStack_248,1);
      ppuVar12 = (undefined **)&UNK_110a51840;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51840,&puStack_280,puVar9);
      puStack_268 = (undefined1 *)&puStack_280;
      func_0x000107c278ac(&puStack_268);
      puVar3 = (undefined *)ppuVar10;
      ppuVar6 = &puStack_280;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar3 = (undefined *)ppuVar10;
        ppuVar6 = &puStack_280;
      }
    }
    ppuVar2 = ppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar7);
    _objc_release(ppuVar7);
    ppuVar5 = ppuVar2;
    __Unwind_Resume();
    ppuVar10 = &puStack_300;
    puStack_288 = &UNK_10852fe10;
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar11 = ppuVar12;
    puVar4 = puVar3;
    puStack_2c0 = unaff_x24;
    puStack_2b8 = puVar8;
    ppuStack_2b0 = ppuVar6;
    plStack_2a8 = plVar14;
    ppuStack_2a0 = ppuVar2;
    ppuStack_298 = ppuVar7;
    pppuStack_290 = &pppuStack_210;
    _objc_retain(ppuVar12);
    plVar14 = (long *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar12);
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar12;
        _objc_retainAutorelease(ppuVar12);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar12);
      puVar8 = auStack_2e0;
      func_0x000107c278b8(auStack_2e0,ppuVar2);
      puStack_300 = (undefined *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x000107c27984(&puStack_300,auStack_2e0,&lStack_2c8,1);
      ppuVar11 = (undefined **)&UNK_110a51890;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a51890,&puStack_300,puVar3);
      puStack_2e8 = (undefined1 *)&puStack_300;
      func_0x000107c278ac(&puStack_2e8);
      puVar4 = (undefined *)ppuVar10;
      ppuVar6 = &puStack_300;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar4 = (undefined *)ppuVar10;
        ppuVar6 = &puStack_300;
      }
    }
    ppuVar2 = ppuVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar12);
    _objc_release(ppuVar12);
    ppuVar5 = ppuVar2;
    __Unwind_Resume();
    puStack_308 = &UNK_10852ff84;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar7 = ppuVar11;
    puStack_340 = unaff_x24;
    puStack_338 = puVar8;
    ppuStack_330 = ppuVar6;
    plStack_328 = plVar14;
    ppuStack_320 = ppuVar2;
    ppuStack_318 = ppuVar12;
    pppuStack_310 = &pppuStack_290;
    _objc_retain(ppuVar11);
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar11);
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f4a390b;
      }
      else {
        ppuVar2 = ppuVar11;
        _objc_retainAutorelease(ppuVar11);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar11);
      func_0x000107c278b8(auStack_360,ppuVar2);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
      ppuVar7 = (undefined **)&UNK_110a518e0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a518e0,&uStack_380,puVar4);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x000107c278ac(&puStack_368);
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
      }
    }
    ppuVar2 = ppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar11);
    _objc_release(ppuVar11);
    ppuVar12 = ppuVar2;
    __Unwind_Resume();
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    puStack_388 = &UNK_1085300f8;
    if (ppuVar12 != (undefined **)0x0) {
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      ppuStack_3a0 = ppuVar2;
      ppuStack_398 = ppuVar11;
      pppuStack_390 = &pppuStack_310;
      (**(code **)(*(long *)ppuVar12[1] + 0x18))(ppuVar12[1],&UNK_110a51930,&uStack_3c0,ppuVar7);
      func_0x000107c278ac(&puStack_3a8);
    }
    return;
  }
  return;
}



/* Entry: 105e9dd90; end: 105e9ded7; -[SCDiscoverFeedThumbnailRingViewManager .cxx_destruct] */

void FUN_105e9dd90(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e9ded8; end: 105e9e32f; -[SCDiscoverFeedThumbnailRingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9ded8(long param_1)

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
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  
  puVar1 = PTR_PTR_1126c56d8;
  _objc_alloc();
  lVar36 = param_1 + _DAT_112738d28;
  _objc_loadWeakRetained();
  lVar2 = lVar36;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112738d2c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bfba360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112738d30;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_112738d38;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112738d3c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf81640();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112738d40;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfb8c40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112738d44;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112738d48;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf81700();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112738d4c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112738d50;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c11a760();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112738d54;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112738d58;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112738d5c;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112738d60;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112738d64;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c14c2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ce60();
  lVar35 = (long)_DAT_112738d68;
  uVar34 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar1;
  _objc_release(uVar34);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
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
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar36);
  lVar36 = (long)_DAT_112738d6c;
  uVar31 = param_1 + lVar36;
  _objc_loadWeakRetained();
  uVar33 = uVar31;
  func_0x00010c2675c0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar33;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar33);
  _objc_release(uVar31);
  puVar1 = PTR_PTR_1126c56e0;
  _objc_opt_class();
  uVar33 = uVar32;
  _objc_opt_isKindOfClass(uVar32,puVar1);
  uVar31 = uVar32;
  if ((uVar33 & 1) == 0) {
    uVar31 = 0;
  }
  _objc_retain(uVar31);
  _objc_release(uVar32);
  uVar34 = *(undefined8 *)(param_1 + lVar35);
  param_1 = param_1 + lVar36;
  _objc_loadWeakRetained(param_1);
  lVar36 = param_1;
  func_0x00010c2675c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c8a0(uVar34);
  _objc_release(uVar31);
  _objc_release(lVar36);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9e330; end: 105e9e42f; -[SCDiscoverFeedThumbnailRingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9e330(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738d64);
  _objc_destroyWeak(param_1 + _DAT_112738d4c);
  _objc_destroyWeak(param_1 + _DAT_112738d60);
  _objc_destroyWeak(param_1 + _DAT_112738d5c);
  _objc_destroyWeak(param_1 + _DAT_112738d58);
  _objc_destroyWeak(param_1 + _DAT_112738d54);
  _objc_destroyWeak(param_1 + _DAT_112738d50);
  _objc_destroyWeak(param_1 + _DAT_112738d48);
  _objc_storeStrong(param_1 + _DAT_112738d34,0);
  _objc_destroyWeak(param_1 + _DAT_112738d30);
  _objc_destroyWeak(param_1 + _DAT_112738d44);
  _objc_destroyWeak(param_1 + _DAT_112738d40);
  _objc_destroyWeak(param_1 + _DAT_112738d3c);
  _objc_destroyWeak(param_1 + _DAT_112738d38);
  _objc_destroyWeak(param_1 + _DAT_112738d28);
  _objc_destroyWeak(param_1 + _DAT_112738d2c);
  _objc_destroyWeak(param_1 + _DAT_112738d6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738d68,0);
  return;
}



/* Entry: 105e9e430; end: 105e9e59b; -[SCDiscoverFeedThumbnailRingView initWithDefaultBarButtonImageView:uberAvatarScopeServices:uberAvatarScopeExposer:uberAvatarScopeDelegate:isBadgeVisible:publicProfileManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e9e430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed9f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112738d70) = param_7;
    lVar3 = (long)_DAT_112738d74;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738d78;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112738d7c),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112738d80),param_6);
    lVar3 = (long)_DAT_112738d84;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    func_0x00010c219b60(puVar1);
    func_0x00010c21e900(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e9e59c; end: 105e9e66f; -[SCDiscoverFeedThumbnailRingView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9e59c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738d88);
  *(undefined8 *)(param_1 + _DAT_112738d88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738d8c);
  *(undefined8 *)(param_1 + _DAT_112738d8c) = 0;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_112738d7c;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738d90);
  *(undefined8 *)(param_1 + _DAT_112738d90) = 0;
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126ed9f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105e9e670; end: 105e9e76f; -[SCDiscoverFeedThumbnailRingView updateThumbnailViewIsHidden:animated:storiesSummaryInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9e670(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    if (param_5 != 0) {
      lVar4 = (long)_DAT_112738d94;
      if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xdc);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar3 = (undefined *)0x0;
      }
      puVar2 = PTR_PTR_1126c56e8;
      lVar1 = param_5;
      func_0x00010c26d760(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25bc00(puVar2,param_2,lVar1,puVar3,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea9ae0(param_1,param_2,puVar2,(*(byte *)(param_1 + lVar4) ^ 0xff) & 1);
      _objc_release(puVar2);
      _objc_release(lVar1);
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010bebb6a0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105e9e770; end: 105e9e9a7; -[SCDiscoverFeedThumbnailRingView updateThumbnailViewWithDiscoverFeedStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9e770(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if ((*(byte *)(param_1 + _DAT_112738d94) & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = (undefined *)0x0;
    }
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105e9e9a8;
    uStack_70 = 0x105e9e9b8;
    uStack_68 = 0;
    lVar1 = param_3;
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    func_0x00010c0bf680(lVar1);
    _objc_release(lVar1);
    if (puStack_88[5] != 0) {
      func_0x00010bea9ae0(param_1);
    }
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e9e9a8; end: 105e9e9bf;  */

void FUN_105e9e9a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e9e9c0; end: 105e9eb8f;  */

void FUN_105e9e9c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c56e8;
  func_0x00010c26e100(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e9eb90; end: 105e9ebb7; -[SCDiscoverFeedThumbnailRingView thumbnailBadgeIsVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105e9eb90(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112738d88);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010c074c20();
    uVar1 = (uint)lVar2 ^ 1;
  }
  return uVar1;
}



/* Entry: 105e9ebb8; end: 105e9ecbf; -[SCDiscoverFeedThumbnailRingView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9ebb8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ed9f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_112738d74;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != param_1) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    func_0x00010befbb60(param_1);
    func_0x00010bdc4be0(param_1);
  }
  if ((*(char *)(param_1 + _DAT_112738d70) == '\x01') &&
     (*(char *)(param_1 + _DAT_112738d94) == '\x01')) {
    lVar2 = param_1;
    func_0x00010be1ab80(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
  }
  else {
    bVar1 = false;
    lVar2 = 0;
  }
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(param_1);
  if (bVar1) {
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 105e9ecc0; end: 105e9ed93; -[SCDiscoverFeedThumbnailRingView _generateBadgeCutOutMask] */

void FUN_105e9ecc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(puVar1);
  func_0x00010bdd8460(param_1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf199c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40();
  func_0x00010c19bc80(puVar1,param_2,*(undefined8 *)PTR__kCAFillRuleEvenOdd_110346ce8);
  puVar4 = puVar3;
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e9ed94; end: 105e9ee63; -[SCDiscoverFeedThumbnailRingView _calculateBadgeCutOutRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105e9ed94(double param_1,undefined8 param_2,double param_3,long param_4)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)(param_4 + _DAT_112738d94) == '\x01') {
    lVar2 = param_4;
    func_0x00010bdd2740();
    iVar1 = (int)lVar2;
    param_1 = param_1 + 1.0;
  }
  else {
    lVar2 = param_4;
    func_0x00010bdd2620();
    iVar1 = (int)lVar2;
  }
  func_0x000100456ca0();
  dVar3 = 1.0;
  dVar4 = 1.5;
  if (iVar1 == 0) {
    dVar4 = 1.0;
  }
  lVar2 = (long)_DAT_112738d74;
  func_0x00010bf151e0(*(undefined8 *)(param_4 + lVar2));
  dVar4 = -dVar3 - dVar4;
  func_0x00010bf15200(*(undefined8 *)(param_4 + lVar2));
  lVar2 = param_4;
  func_0x00010bf8d060();
  if (lVar2 != 1) {
    func_0x00010bf20c00(param_4);
    dVar4 = (param_3 - dVar4) - param_1;
  }
  func_0x00010bf20c00(param_4);
  return dVar4;
}



/* Entry: 105e9ee64; end: 105e9ee87; -[SCDiscoverFeedThumbnailRingView _badgeShowCountFullViewSize] */

undefined8 FUN_105e9ee64(int param_1)

{
  undefined8 uVar1;
  
  func_0x000100456ca0();
  uVar1 = 0x403e000000000000;
  if (param_1 == 0) {
    uVar1 = 0x4034000000000000;
  }
  return uVar1;
}



/* Entry: 105e9ee88; end: 105e9eeab; -[SCDiscoverFeedThumbnailRingView _badgeBlankFullViewSize] */

undefined8 FUN_105e9ee88(int param_1)

{
  undefined8 uVar1;
  
  func_0x000100456ca0();
  uVar1 = 0x403e000000000000;
  if (param_1 == 0) {
    uVar1 = 0x4034000000000000;
  }
  return uVar1;
}



/* Entry: 105e9eeac; end: 105e9eebb; -[SCDiscoverFeedThumbnailRingView setThemeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9eeac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112738d74),PTR_s_setThemeColor__1126628c8);
  return;
}



/* Entry: 105e9eebc; end: 105e9eecb; -[SCDiscoverFeedThumbnailRingView setHighlightThemeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9eebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a87f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112738d74),PTR_s_setHighlightThemeColor__112647c18);
  return;
}



/* Entry: 105e9eecc; end: 105e9eedb; -[SCDiscoverFeedThumbnailRingView setSelected:overrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9eecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112738d74),
             PTR_s_setSelected_overrideTintColor__11265c5a8);
  return;
}



/* Entry: 105e9eedc; end: 105e9ef53; -[SCDiscoverFeedThumbnailRingView setBadgeIsVisible:badgeCountIsVisible:badgeIsImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9eedc(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112738d70) == param_3) &&
     ((param_3 == 0 || (*(byte *)(param_1 + _DAT_112738d94) == param_4)))) {
    return;
  }
  lVar1 = (long)_DAT_112738d94;
  *(char *)(param_1 + _DAT_112738d70) = (char)param_3;
  *(char *)(param_1 + lVar1) = (char)param_4;
  func_0x00010c16ece0(*(undefined8 *)(param_1 + _DAT_112738d74));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105e9ef54; end: 105e9ef63; -[SCDiscoverFeedThumbnailRingView setEnableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9ef54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c194bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112738d74),PTR_s_setEnableDarkModeAlways__112642d10);
  return;
}



/* Entry: 105e9ef64; end: 105e9ef73; -[SCDiscoverFeedThumbnailRingView setIgnoreThemeColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9ef64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112738d74),PTR_s_setIgnoreThemeColors__1126481a0);
  return;
}



/* Entry: 105e9ef74; end: 105e9ef83; -[SCDiscoverFeedThumbnailRingView defaultImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9ef74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf698d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112738d74),PTR_s_defaultImage_1125b7fd8);
  return;
}


