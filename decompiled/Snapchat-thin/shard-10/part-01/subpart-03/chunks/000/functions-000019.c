/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10798e1e4; end: 10798e267;  */

void FUN_10798e1e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf529e0();
  lVar3 = 0x30;
  if (lVar4 != 0) {
    lVar3 = 0x20;
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010798de50(uVar1,param_2,*(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28))
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10798e8f8; end: 10798ec13;  */

void FUN_10798e8f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_1);
      puVar4 = puVar2;
      func_0x00010bf51e00(puVar2);
      _objc_release(puVar2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar9 = *(undefined **)(lVar8 * 8);
      puVar4 = PTR_PTR_1126c2118;
      _objc_opt_class(PTR_PTR_1126c2118);
      puVar5 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar4);
      puVar4 = puVar9;
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = PTR_PTR_1126bdd30;
        _objc_opt_class(PTR_PTR_1126bdd30);
        puVar6 = puVar9;
        _objc_opt_isKindOfClass(puVar9,puVar5);
        if (((ulong)puVar6 & 1) != 0) {
          _objc_retain(puVar9);
          puVar5 = puVar9;
          func_0x00010bf82000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 != (undefined *)0x0) {
            func_0x00010bf82000(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            goto LAB_10798eb74;
          }
          goto LAB_10798eb7c;
        }
        puVar4 = PTR_PTR_1126bdd28;
        _objc_opt_class(PTR_PTR_1126bdd28);
        puVar5 = puVar9;
        _objc_opt_isKindOfClass(puVar9,puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          _objc_retain(puVar9);
          func_0x00010c259740(puVar9);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          goto LAB_10798eb74;
        }
      }
      else {
        _objc_retain(puVar2);
        _objc_retain(puVar2);
        _objc_retain(puVar9);
        func_0x00010c0bdf40(puVar9);
        _objc_release(puVar2);
        puVar9 = puVar2;
LAB_10798eb74:
        _objc_release(puVar9);
        puVar9 = puVar4;
LAB_10798eb7c:
        _objc_release(puVar9);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10798ee8c; end: 10798f04b; -[SCDiscoverFeedCustomStoryActionHandler initWithLazyDiscoverFeedEventsLogger:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:lazyDiscoverFeedInteractionHistoryManager:customStoryMenuScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:customStoryMenuScopeServices:] */

undefined1 *
FUN_10798ee8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f8fe8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_10);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110eb3638);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined ***)((long)puVar1 + 0x48) = &PTR____CFConstantStringClassReference_110eb3638;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10798f84c; end: 10798f863; -[SCDiscoverFeedCustomStoryActionHandler presentingViewController] */

void FUN_10798f84c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10798faec; end: 10798fbd7; -[SCDiscoverFeedExpandStoriesActionHandler _logExpandSectionForSection:] */

void FUN_10798faec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000108f54160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  uVar3 = 0xd;
  func_0x000107cb4bc4(0xd,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079901c0; end: 1079901fb; -[SCDiscoverFeedFriendStoryOptInStatusHandler .cxx_destruct] */

void FUN_1079901c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079909fc; end: 107990b23; -[SCDiscoverFeedOpenFriendProfileActionHandler _presentProfileForSnapchatter:dataModel:] */

void FUN_1079909fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = param_3;
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c080380();
    if ((int)uVar1 != 0) {
      *(undefined8 *)(param_1 + 0x58) = 0x1a0e6a1a;
    }
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,0);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b2860;
    _objc_alloc(PTR_PTR_1126b2860);
    uVar1 = param_4;
    func_0x00010c237b80(param_4);
    func_0x00010c0589c0(puVar4,param_2,puVar2,param_3,0x4c,0,0,uVar1,*(undefined8 *)(param_1 + 0x58)
                        ,0xc,param_1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107991144; end: 10799118b; -[SCDiscoverFeedOpenFriendProfileActionHandler dismissCameraScope:] */

void FUN_107991144(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1079916e8; end: 1079916ff; -[SCDiscoverFeedPostStoryActionHandler presentingViewController] */

void FUN_1079916e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10799178c; end: 107991fbb; -[SCDiscoverFeedSectionHeaderActionHandler initWithUserSession:discoverFeedActionHandler:eventsController:endpointManager:circumstanceEngine:snapTokenProvider:readReceiptCoordinator:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:sectionExtensionServices:storiesPrefetcher:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:sectionsCoordinator:storiesMixerNetworkRequester:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:addToStoryCameraScopeExposer:addToStoryCameraScopeBuilder:imageDownloader:isBloopsEnabled:imageSourceProvider:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:networkConnectivityMonitor:rtusClientCacheManager:unifiedGRPCClientFactory:dpaConfigProvider:adRenderDataParser:notificationPool:customAppThemeProvider:storiesGrapheneMetricsEmitter:discoverCrashLogger:locationProvider:] */

undefined8 *
FUN_10799178c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_70 = PTR_PTR_1126f9010;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[4];
    puVar1[4] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[5];
    puVar1[5] = param_12;
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
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_43;
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



/* Entry: 1079925b4; end: 1079925b7; -[SCDiscoverFeedSectionHeaderActionHandler operaModalPresentationDidEnd] */

void FUN_1079925b4(void)

{
  return;
}



/* Entry: 107992764; end: 107992953; -[SCDiscoverFeedSectionHeaderActionHandler _createExpandedViewControllerForFeedType:actionModel:pageType:pageTitle:] */

void FUN_107992764(long param_1,undefined8 param_2,int param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_6);
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2400;
  _objc_opt_class(PTR_PTR_1126c2400);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    func_0x00010be531a0(param_1);
  }
  func_0x00010becfba0(param_1);
  puVar2 = PTR_PTR_1126c72d0;
  _objc_alloc();
  func_0x00010c05d9a0(puVar2,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 8),
                      (long)param_3,param_5,param_6,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),0,
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x108),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x110),
                      *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x118),
                      *(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130),
                      *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),
                      *(undefined8 *)(param_1 + 0x148),0,*(undefined8 *)(param_1 + 0x150),
                      *(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160),
                      *(undefined8 *)(param_1 + 0x120));
  _objc_release(param_6);
  func_0x00010c18b5e0(puVar2);
  func_0x00010bef9980(puVar2);
  func_0x00010c1c8b80(puVar2);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107992ec8; end: 107992f1b;  */

void FUN_107992ec8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long in_x4;
  
  puVar1 = PTR_PTR_1126afca8;
  if (in_x4 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ea7658;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea7658,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  return;
}


