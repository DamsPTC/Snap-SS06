/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10694a420; end: 10694a4a3; +[BadgeHeadline_HighlightTextColor descriptor] */

undefined * FUN_10694a420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07448,
                        &PTR____CFConstantStringClassReference_110e659b8,&PTR_DAT_11316a658,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c47c0 = puVar1;
  }
  return puRam00000001136c47c0;
}



/* Entry: 10694a4a4; end: 10694a527; +[BadgeHeadline_BackgroundType descriptor] */

undefined * FUN_10694a4a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07470,
                        &PTR____CFConstantStringClassReference_110e659d8,&PTR_DAT_11316a658,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c47c8 = puVar1;
  }
  return puRam00000001136c47c8;
}



/* Entry: 10694a528; end: 10694a5a3; +[BadgeCard descriptor] */

undefined * FUN_10694a528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b073a8,
                        &PTR____CFConstantStringClassReference_110e659f8,&PTR_DAT_11316a658,
                        &PTR_DAT_11316a7d0,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c47d0 = puVar1;
  }
  return puRam00000001136c47d0;
}



/* Entry: 10694a5a4; end: 10694a60b; +[SchedulingType descriptor] */

void FUN_10694a5a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b073f8,
                        &PTR____CFConstantStringClassReference_110e65a18,&PTR_DAT_11316a658,0,0,4,
                        0x1c);
    puRam00000001136c47d8 = puVar1;
  }
  return;
}



/* Entry: 10694a60c; end: 10694a6af; -[SCGenericSingleStoryFetcher initWithGenericStoryQueryCoordinator:discoverFeedDataFetcher:] */

undefined1 *
FUN_10694a60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3df0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10694a6b0; end: 10694a747; -[SCGenericSingleStoryFetcher fetchStoryObservableByCompositeId:existingSubject:pageType:] */

void FUN_10694a6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new(PTR_PTR_1126ae568);
  }
  else {
    _objc_retain(param_4);
    puVar1 = param_4;
  }
  func_0x00010be14900(param_1,param_2,param_3,param_5,0,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10694a748; end: 10694a74f; -[SCGenericSingleStoryFetcher fetchStoryByCompositeId:pageType:completion:] */

void FUN_10694a748(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchStoryByCompositeId_pageTyp_112562be0);
  return;
}



/* Entry: 10694a750; end: 10694a94f; -[SCGenericSingleStoryFetcher _fetchStoryByCompositeId:pageType:callback:subject:] */

void FUN_10694a750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b1138;
  _objc_alloc(PTR_PTR_1126b1138);
  func_0x00010c0127e0();
  puVar2 = PTR_PTR_1126cf338;
  _objc_alloc(PTR_PTR_1126cf338);
  func_0x00010c00cfa0();
  puVar3 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10694a950;
  puStack_90 = &UNK_11094ce30;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_retain(param_3);
  ppuVar4 = &puStack_a8;
  uStack_80 = param_3;
  _objc_retainBlock(ppuVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13cfe0();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10694a950; end: 10694a987;  */

void FUN_10694a950(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10694a988; end: 10694aa5b; -[SCGenericSingleStoryFetcher _prepareSCDiscoverFeedStoryForPlayback:subject:compositeStoryId:] */

void FUN_10694a988(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000108f51d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25baa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_3 == 0) {
    if (param_4 != 0) {
      func_0x00010c0d9840(param_4);
    }
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,uVar2,0);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10694aa5c; end: 10694aa8b; -[SCGenericSingleStoryFetcher .cxx_destruct] */

void FUN_10694aa5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10694aa8c; end: 10694ac93; +[SCGenericStoryClientInfoFetcher clientInfoWithInteractionsHistory:hasBitmojiAvatarId:accountCreationTimestamp:mutualFriendsCount:audioSession:networkConnectivityMonitor:locationProvider:birthdayProvider:] */

void FUN_10694aa8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c0e20;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x000108f1337c();
  _objc_release(param_9);
  uVar2 = param_8;
  func_0x000108f136bc(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c180e80(puVar1);
  _objc_release(uVar2);
  func_0x000108f137cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c07a4e0(uVar2);
  func_0x00010c206a80(puVar1);
  _objc_release(uVar2);
  func_0x00010c1ae2e0(puVar1);
  _objc_release(param_3);
  func_0x00010c1a5a60(puVar1);
  lVar3 = param_10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befe800(lVar4);
    func_0x00010c21de80(puVar1);
    _objc_release(puVar5);
  }
  func_0x00010c26f320(param_5);
  func_0x00010c21e160(puVar1);
  func_0x00010c170020(puVar1);
  _objc_release(lVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10694ac94; end: 10694ac9b; -[SCGenericStoryMultiQueryCoordinator shouldBeginLoadingWithSource:] */

undefined8 FUN_10694ac94(void)

{
  return 1;
}



/* Entry: 10694ac9c; end: 10694ac9f; -[SCGenericStoryMultiQueryCoordinator beginLoading] */

void FUN_10694ac9c(void)

{
  return;
}



/* Entry: 10694aca0; end: 10694aca3; -[SCGenericStoryMultiQueryCoordinator endLoading] */

void FUN_10694aca0(void)

{
  return;
}



/* Entry: 10694aca4; end: 10694b0ff; -[SCGenericStoryQueryCoordinator initWithUserSession:circumstanceEngine:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:snapchattersDataFetcher:remoteSnapchattersDataFetcher:readReceiptCoordinator:sectionsCoordinator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:networkRequester:grapheneRegistry:adConfigProvider:promotedStoriesLogger:creatorSettingsDataFetcher:audioSession:storiesConfigProvider:networkConnectivityMonitor:rtusClientCacheManager:adRenderDataParser:contentObjectResolver:locationProvider:birthdayProvider:] */

undefined8
FUN_10694aca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain();
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
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
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3a3cdd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,0x15);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cefe0;
  _objc_alloc();
  uVar3 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c035260(puVar2,param_2,puVar1,param_3,param_10,param_5,uVar3,uVar4,param_12,param_13,
                      param_16,param_11,param_4,param_8,param_17,param_20,param_22,param_23,0,
                      param_24);
  _objc_release(param_24);
  _objc_release(param_22);
  _objc_release(param_17);
  _objc_release(param_10);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1e63a0(puVar2,param_2,param_1);
  puVar5 = PTR_PTR_1126cf340;
  _objc_alloc();
  uVar3 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c820(puVar5,param_2,puVar1,param_4,param_5,uVar3,param_8,param_15,param_16,param_12
                      ,param_19,param_14,param_20,param_21,param_25,param_26);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_8);
  _objc_release(param_5);
  func_0x00010c035140(param_1,param_2,puVar1,puVar5,puVar2,param_4,param_6,param_9,param_11,param_12
                      ,param_13,param_16,param_18,param_23);
  _objc_release(param_23);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10694b100; end: 10694b3c3; -[SCGenericStoryQueryCoordinator initWithPerformer:storiesRequestSender:storiesResponseProcessor:circumstanceEngine:discoverFeedDataFetcher:remoteSnapchattersDataFetcher:sectionsCoordinator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:adConfigProvider:creatorSettingsDataFetcher:adRenderDataParser:] */

undefined8 *
FUN_10694b100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f3df8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
  }
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



/* Entry: 10694b3c4; end: 10694b3cb; -[SCGenericStoryQueryCoordinator canPerformQuery:] */

undefined8 FUN_10694b3c4(void)

{
  return 1;
}



/* Entry: 10694b3cc; end: 10694b463; -[SCGenericStoryQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_10694b3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c22e380(param_1,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf183a0(param_1);
    func_0x00010be14a00(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10694b464; end: 10694b567; -[SCGenericStoryQueryCoordinator _fetchStoryLookupResponseFromMixerForQuery:updatingBlock:] */

void FUN_10694b464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c15c7c0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694b568; end: 10694b5f3;  */

void FUN_10694b568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82520();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10694b5f4; end: 10694b7c3; -[SCGenericStoryQueryCoordinator _processStoryLookupResponseIntoSCDiscoverFeedStory:response:error:query:updatingBlock:] */

void FUN_10694b5f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10694b7c4;
  puStack_88 = &UNK_110900b08;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(param_7);
  ppuVar1 = &puStack_a0;
  uStack_78 = param_7;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10694c714(param_3,param_4,puVar2,param_5,param_6,uVar3,*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x68),ppuVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694b7c4; end: 10694b82f;  */

void FUN_10694b7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82140();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10694b830; end: 10694b94b; -[SCGenericStoryQueryCoordinator _processSCDiscoverFeedStoryIntoLocalCache:error:query:updatingBlock:] */

ulong FUN_10694b830(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (param_4 == 0) {
    pcVar5 = *(code **)(param_7 + 0x10);
    _objc_retain(param_7);
    (*pcVar5)(param_7,0,0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    _objc_retain(param_7);
    func_0x00010bf0a140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2ac0(uVar4);
    _objc_release(param_7);
    param_7 = puVar1;
  }
  _objc_release(param_7);
  func_0x00010bf94ca0(param_2);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_4;
  }
  ___stack_chk_fail();
  uVar2 = 0;
  if (*(long *)(param_4 + 0x48) != 0) {
    func_0x00010c26f3a0();
    uVar2 = (ulong)(-300.0 < param_1);
  }
  return uVar2;
}



/* Entry: 10694b94c; end: 10694b977; -[SCGenericStoryQueryCoordinator isLoading] */

bool FUN_10694b94c(double param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(long *)(param_2 + 0x48) != 0) {
    func_0x00010c26f3a0();
    bVar1 = -300.0 < param_1;
  }
  return bVar1;
}



/* Entry: 10694b978; end: 10694b98f; -[SCGenericStoryQueryCoordinator shouldBeginLoadingWithSource:] */

uint FUN_10694b978(uint param_1)

{
  func_0x00010c076be0();
  return param_1 ^ 1;
}



/* Entry: 10694b990; end: 10694b9cb; -[SCGenericStoryQueryCoordinator beginLoading] */

void FUN_10694b990(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10694b9cc; end: 10694b9db; -[SCGenericStoryQueryCoordinator endLoading] */

void FUN_10694b9cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10694b9dc; end: 10694b9e3; -[SCGenericStoryQueryCoordinator sectionExtensionServices] */

undefined8 FUN_10694b9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10694b9e4; end: 10694ba13; -[SCGenericStoryQueryCoordinator setSectionExtensionServices:] */

void FUN_10694b9e4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10694ba14; end: 10694ba2b; -[SCGenericStoryQueryCoordinator delegate] */

void FUN_10694ba14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10694ba2c; end: 10694ba37; -[SCGenericStoryQueryCoordinator setDelegate:] */

void FUN_10694ba2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 10694ba38; end: 10694ba3f; -[SCGenericStoryQueryCoordinator currentQuery] */

undefined8 FUN_10694ba38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10694ba40; end: 10694ba47; -[SCGenericStoryQueryCoordinator setCurrentQuery:] */

void FUN_10694ba40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10694ba48; end: 10694bb1b; -[SCGenericStoryQueryCoordinator .cxx_destruct] */

void FUN_10694ba48(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
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



/* Entry: 10694bb1c; end: 10694be0f; -[SCGenericStoryRequestSender initWithQueuePerformer:circumstanceEngine:interactionHistoryManager:discoverFeedDataFetcher:snapchattersDataFetcher:grapheneRegistry:adConfigProvider:lazyBitmojiAvatarProvider:audioSession:networkRequester:storiesConfigProvider:networkConnectivityMonitor:locationProvider:birthdayProvider:] */

undefined8 *
FUN_10694bb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f3e00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 4,param_3);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
  }
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



/* Entry: 10694be10; end: 10694bf0b; -[SCGenericStoryRequestSender sendRequestWithStoriesWithQuery:completion:] */

void FUN_10694be10(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf338;
  _objc_opt_class(PTR_PTR_1126cf338);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf81fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010be9ff40(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10694bf0c; end: 10694c093; -[SCGenericStoryRequestSender _sendRequestWithStoriesQuery:parameters:completion:] */

void FUN_10694bf0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfcac80(uVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694c094; end: 10694c0eb;  */

void FUN_10694c094(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ff60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10694c0ec; end: 10694c44b; -[SCGenericStoryRequestSender _sendRequestWithStoriesQuery:parameters:completion:interactionHistoryArray:] */

void FUN_10694c0ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x000107bf2ff8(param_6,uVar1,uVar8,uVar9,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd46e0();
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126cf348;
  uVar3 = uVar2;
  func_0x00010bf51e00(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d42e0();
  func_0x00010bf3d100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_80,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0f1e60();
  func_0x00010c14de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10694c44c;
  puStack_a8 = &UNK_11094ce60;
  _objc_retain(param_3);
  uStack_a0 = param_3;
  lStack_98 = param_1;
  uStack_90 = uVar1;
  _objc_retain(puVar6);
  puStack_88 = puVar6;
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(param_5);
  func_0x00010bfa5340(uVar3);
  _objc_release(puVar7);
  _objc_release(uVar3);
  func_0x000107bf38a4(param_6,*(undefined8 *)(param_1 + 0x10),uVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puStack_88);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694c44c; end: 10694c4e7;  */

void FUN_10694c44c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11da20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010846df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1ebd20(uVar2);
  _objc_retain(0);
  func_0x00010c21ab00(uVar2);
  _objc_release(0);
  func_0x00010c17cd40(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10694c4e8; end: 10694c62f;  */

void FUN_10694c4e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10694c630;
    puStack_78 = &UNK_1108465d0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_58 = uVar4;
    _objc_retain(param_2);
    uStack_70 = param_2;
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    func_0x00010007380c(lVar3,&puStack_90);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10694c630; end: 10694c643;  */

void FUN_10694c630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010694c640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10694c644; end: 10694c713; -[SCGenericStoryRequestSender .cxx_destruct] */

void FUN_10694c644(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10694c714; end: 10694cd07;  */

void FUN_10694c714(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_90,param_8);
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  lVar2 = param_2;
  func_0x00010846e4c8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if (param_14 == 0) goto LAB_10694cc14;
    puVar4 = auStack_90;
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    if (puVar5 == (undefined1 *)0x0) goto LAB_10694cc14;
    puVar4 = auStack_90;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10694cd08;
    puStack_a8 = &UNK_11084aaa8;
    _objc_retain(param_14);
    lStack_98 = param_14;
    _objc_retain(param_4);
    uStack_a0 = param_4;
    func_0x00010007380c(puVar5,&puStack_c0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uStack_a0);
    lVar12 = lStack_98;
  }
  else {
    _objc_retain(lVar2);
    lVar12 = lVar2;
    func_0x00010bf31ee0();
    if ((int)lVar12 == 4) {
      lVar3 = lVar2;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar3;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    else {
      lVar12 = 0;
    }
    _objc_release(lVar2);
    uVar6 = param_6;
    func_0x00010bf5b7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080120(uVar6);
    func_0x00010c1b4ca0(lVar2);
    func_0x00010c079480(uVar6);
    func_0x00010c1b2e40(lVar2);
    uVar7 = param_5;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126cf338;
    _objc_opt_class(PTR_PTR_1126cf338);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar8);
    uVar1 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10694cd1c;
    puStack_120 = &UNK_11094cec0;
    _objc_retain(param_1);
    lStack_118 = param_1;
    _objc_retain(param_3);
    uStack_110 = param_3;
    _objc_retain(uVar1);
    uStack_108 = uVar1;
    _objc_retain(lVar2);
    lStack_100 = lVar2;
    _objc_retain(param_10);
    uStack_f8 = param_10;
    _objc_retain(param_11);
    uStack_f0 = param_11;
    _objc_retain(param_12);
    uStack_e8 = param_12;
    _objc_retain(param_9);
    uStack_e0 = param_9;
    _objc_retain(param_13);
    uStack_d8 = param_13;
    _objc_retain(param_14);
    lStack_d0 = param_14;
    _objc_copyWeak(auStack_c8,auStack_90);
    ppuVar10 = &puStack_138;
    _objc_retainBlock();
    puVar8 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc();
    func_0x00010c057ea0();
    _objc_release();
    if (puVar8 == (undefined *)0x0) {
      (*(code *)ppuVar10[2])(ppuVar10,PTR____NSDictionary0__struct_11034ab58);
    }
    else {
      uVar11 = param_7;
      func_0x00010c269d40(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = lVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = auStack_90;
      _objc_loadWeakRetained(puVar4);
      puVar5 = puVar4;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar10);
      func_0x00010bfaa4c0(uVar11);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(uVar11);
      _objc_release(ppuVar10);
    }
    _objc_release(ppuVar10);
    _objc_destroyWeak(auStack_c8);
    _objc_release(lStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(lStack_100);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(lStack_118);
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  _objc_release(lVar12);
LAB_10694cc14:
  _objc_release(lVar2);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010694cd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10694cd08; end: 10694cd1b;  */

void FUN_10694cd08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010694cd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10694cd1c; end: 10694cf17;  */

void FUN_10694cd1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b0ef8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bfebb60(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c03ef40(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108482f84(uVar5,puVar1,0,uVar3,0,uVar8,param_2,0,0,uVar4,*(undefined8 *)(param_1 + 0x58)
                      ,*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar6 = param_1 + 0x70;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar7 != 0) {
      lVar6 = param_1 + 0x70;
      _objc_loadWeakRetained(lVar6);
      lVar7 = lVar6;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_10694cf18;
      puStack_68 = &UNK_11084aaa8;
      uVar8 = *(undefined8 *)(param_1 + 0x68);
      _objc_retain(uVar8);
      uStack_58 = uVar8;
      _objc_retain(uVar5);
      uStack_60 = uVar5;
      func_0x00010007380c(lVar7,&puStack_80);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(uStack_60);
      _objc_release(uStack_58);
    }
  }
  _objc_release(uVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 10694cf18; end: 10694cf37;  */

void FUN_10694cf18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010694cf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10694cf38; end: 10694cfbf; -[SCGenericStoryRequestQueryParameters initWithDiscoverFeedStoriesRequestQueryParameters:includeManagementInfo:] */

undefined1 *
FUN_10694cf38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f3e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10694cfc0; end: 10694cfe3; -[SCGenericStoryRequestQueryParameters copyWithZone:] */

undefined8 FUN_10694cfc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10694cfe4; end: 10694d04f; -[SCGenericStoryRequestQueryParameters hash] */

undefined8 * FUN_10694cfe4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10694d0d4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10694d0d4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10694d0d4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10694d0d4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10694d050; end: 10694d0ef; -[SCGenericStoryRequestQueryParameters isEqual:] */

long FUN_10694d050(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10694d0d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10694d0d4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10694d0d4;
    }
  }
  lVar3 = 1;
LAB_10694d0d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10694d0f0; end: 10694d0f7; -[SCGenericStoryRequestQueryParameters discoverFeedStoriesRequestQueryParameters] */

undefined8 FUN_10694d0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10694d0f8; end: 10694d0ff; -[SCGenericStoryRequestQueryParameters includeManagementInfo] */

undefined1 FUN_10694d0f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10694d100; end: 10694d10b; -[SCGenericStoryRequestQueryParameters .cxx_destruct] */

void FUN_10694d100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10694d10c; end: 10694d4ef; -[SCStoriesSnapDeleteCoordinator deleteSnapWithStoryType:postingStoryType:storyId:clientId:serverId:snapProAttributes:completion:] */

void FUN_10694d10c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined *param_8,long param_9
                  )

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_6;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfaa2c0();
  if (lVar2 == 1) {
    (**(code **)(param_9 + 0x10))(param_9,0,1);
  }
  else {
    func_0x00010bed6c20(param_1);
    lVar2 = param_7;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      (**(code **)(param_9 + 0x10))(param_9,1,0);
      func_0x00010be282a0(param_1);
    }
    else {
      _objc_initWeak(auStack_80,param_1);
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_10694d4f0;
      puStack_c8 = &UNK_11094cef0;
      _objc_retain(uVar1);
      uStack_c0 = uVar1;
      _objc_retain(param_5);
      uStack_b8 = param_5;
      _objc_retain(param_9);
      lStack_98 = param_9;
      _objc_copyWeak(auStack_90,auStack_80);
      lStack_88 = param_3;
      _objc_retain(param_6);
      uStack_b0 = param_6;
      _objc_retain(param_7);
      lStack_a8 = param_7;
      _objc_retain(param_8);
      ppuVar3 = &puStack_e0;
      puStack_a0 = param_8;
      _objc_retainBlock();
      puStack_128 = puVar6;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_10694d544;
      puStack_110 = &UNK_11094cf20;
      _objc_retain(uVar1);
      uStack_108 = uVar1;
      _objc_retain(param_5);
      uStack_100 = param_5;
      _objc_retain(param_9);
      lStack_f0 = param_9;
      _objc_copyWeak(auStack_e8,auStack_80);
      _objc_retain(param_8);
      ppuVar4 = &puStack_128;
      puStack_f8 = param_8;
      _objc_retainBlock();
      func_0x00010c0b0fe0(*(undefined8 *)(param_1 + 0x20));
      uVar5 = *(undefined8 *)(param_1 + 8);
      if (param_3 == 3) {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR___dispatch_main_q_11034be20;
        _objc_retain(PTR___dispatch_main_q_11034be20);
        func_0x00010bf6cba0(uVar5);
      }
      else {
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_8;
        func_0x00010befd0a0(param_8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        func_0x00010bf6cb80(uVar5);
        _objc_release(PTR___dispatch_main_q_11034be20);
      }
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(ppuVar4);
      _objc_release(puStack_f8);
      _objc_destroyWeak(auStack_e8);
      _objc_release(lStack_f0);
      _objc_release(uStack_100);
      _objc_release(uStack_108);
      _objc_release(ppuVar3);
      _objc_release(puStack_a0);
      _objc_release(lStack_a8);
      _objc_release(uStack_b0);
      _objc_destroyWeak(auStack_90);
      _objc_release(lStack_98);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      _objc_destroyWeak(auStack_80);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10694d4f0; end: 10694d543;  */

void FUN_10694d4f0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),1,0);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be282a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10694d544; end: 10694d5d7;  */

void FUN_10694d544(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  pcVar2 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_3);
  (*pcVar2)(lVar1,0,0);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c252ee0(param_3);
  _objc_release(param_3);
  func_0x00010be28320(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10694d5d8; end: 10694d65f; -[SCStoriesSnapDeleteCoordinator fetchSnapDeleteStateWithStoryId:snapComponentId:] */

undefined8 FUN_10694d5d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c067fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 10694d660; end: 10694d6ef; -[SCStoriesSnapDeleteCoordinator _handleDeletionFailureWithStoryId:snapComponentId:snapProAttributes:statusCode:] */

void FUN_10694d660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b0fc0(uVar1,param_2,param_6);
  func_0x00010bed6c20(param_1,param_2,param_3,param_4,param_5,3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10694d6f0; end: 10694d837; -[SCStoriesSnapDeleteCoordinator _updateDeleteStateWithStoryId:snapComponentId:snapProAttributes:deleteState:] */

void FUN_10694d6f0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar2,param_3);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar3);
    _objc_release(puVar2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf6ca60();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10694d838; end: 10694d9ff; -[SCStoriesSnapDeleteCoordinator _handleDeletedSnapWithStoryId:snapComponentId:storyType:clientId:serverId:snapProAttributes:] */

void FUN_10694d838(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0b1000(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((lVar1 != 0) && (lVar1 = param_6, func_0x00010c08fa60(), param_5 == 2)) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6ba00(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar1 = param_7;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f1a0(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  func_0x00010bed6c20(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x28),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10694da00; end: 10694da07; -[SCStoriesSnapDeleteCoordinator fetchSnapDeleteStatesWithStoryId:] */

void FUN_10694da00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10694da08; end: 10694da1f; -[SCStoriesSnapDeleteCoordinator deleteStateForwarder] */

void FUN_10694da08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10694da20; end: 10694da7b; -[SCStoriesSnapDeleteCoordinator .cxx_destruct] */

void FUN_10694da20(long param_1)

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



/* Entry: 10694da7c; end: 10694db8b; -[SCLocalSnapProPlaybackDataProvider initWithCachedReadReceiptViewStateProvider:currentUserId:pendingSnapProManager:circumstanceEngine:] */

undefined1 *
FUN_10694da7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3e18;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10694db8c; end: 10694dd37; -[SCLocalSnapProPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

undefined * FUN_10694db8c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = auStack_f0;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar11 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = param_1;
        func_0x00010c293c40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      puVar7 = auStack_f0;
      puVar1 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar1 = puVar9;
  func_0x00010bf51e00();
  (**(code **)(param_4 + 0x10))(param_4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    puVar9 = param_3 + 0x18;
    _objc_loadWeakRetained();
    puVar1 = puVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c245d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar13);
    puVar9 = puVar13;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar13);
        }
        lVar10 = *(long *)((long)puVar12 * 8);
        lVar4 = lVar10;
        func_0x00010c0f79a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == 0) {
          func_0x000108f34d84(*(undefined8 *)(param_3 + 0x28),1);
        }
        else {
          func_0x00010c0f79a0(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar10);
        }
        puVar12 = puVar12 + 1;
      } while (puVar9 != puVar12);
      puVar9 = puVar13;
      func_0x00010bf52a60();
    }
    _objc_release(puVar13);
    if (puVar1 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar12 = puVar1;
      func_0x000107a87a14(puVar1,puVar7,0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126cc618;
      _objc_alloc(PTR_PTR_1126cc618);
      uVar2 = *(undefined8 *)(param_3 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf00760();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar12;
      func_0x000107a86ee8(puVar12,uVar3,*(undefined8 *)(param_3 + 0x10),
                          *(undefined8 *)(param_3 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05b080(puVar9);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(puVar12);
    }
    _objc_release(puVar1);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return puVar9;
    }
    ___stack_chk_fail();
    return (undefined *)0x0;
  }
  return param_3;
}



/* Entry: 10694dd38; end: 10694dfe3; -[SCLocalSnapProPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

undefined * FUN_10694dd38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c245d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      lVar12 = *(long *)(lVar13 * 8);
      lVar5 = lVar12;
      func_0x00010c0f79a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 == 0) {
        func_0x000108f34d84(*(undefined8 *)(param_1 + 0x28),1);
      }
      else {
        func_0x00010c0f79a0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar12);
      }
      lVar13 = lVar13 + 1;
    } while (lVar1 != lVar13);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar4;
    func_0x000107a87a14(puVar4,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126cc618;
    _objc_alloc(PTR_PTR_1126cc618);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf00760();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x000107a86ee8(puVar6,uVar8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05b080(puVar11);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 10694dfe4; end: 10694dfeb; -[SCLocalSnapProPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

undefined8 FUN_10694dfe4(void)

{
  return 0;
}



/* Entry: 10694dfec; end: 10694dff3; -[SCLocalSnapProPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_10694dfec(void)

{
  return 0;
}



/* Entry: 10694dff4; end: 10694dffb; -[SCLocalSnapProPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_10694dff4(void)

{
  return 0;
}



/* Entry: 10694dffc; end: 10694e003; -[SCLocalSnapProPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_10694dffc(void)

{
  return 0;
}



/* Entry: 10694e004; end: 10694e00b; -[SCLocalSnapProPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_10694e004(void)

{
  return 0;
}



/* Entry: 10694e00c; end: 10694e013; -[SCLocalSnapProPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_10694e00c(void)

{
  return 0;
}



/* Entry: 10694e014; end: 10694e017; -[SCLocalSnapProPlaybackDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_10694e014(void)

{
  return;
}



/* Entry: 10694e018; end: 10694e01f; -[SCLocalSnapProPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_10694e018(void)

{
  return 0;
}



/* Entry: 10694e020; end: 10694e0f7; -[SCLocalSnapProPlaybackDataProvider .cxx_destruct] */

void FUN_10694e020(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10694e0f8; end: 10694e107;  */

void FUN_10694e0f8(void)

{
  return;
}



/* Entry: 10694e108; end: 10694e173;  */

void FUN_10694e108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0e28;
  func_0x00010c2315c0();
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10694e174; end: 10694e193;  */

uint FUN_10694e174(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10694e194; end: 10694e19b;  */

void FUN_10694e194(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 10694e19c; end: 10694e1bb;  */

uint FUN_10694e19c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10694e1bc; end: 10694e37b;  */

void FUN_10694e1bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010be3c6e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bdfa4c0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x50),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10694e37c; end: 10694e383; -[SCMyStoriesDataCoordinator removeListener:] */

void FUN_10694e37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10694e384; end: 10694e3f3; -[SCMyStoriesDataCoordinator insertStoryPostingSetting:clientId:] */

void FUN_10694e384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066ea0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10694e3f4; end: 10694e4ff; -[SCMyStoriesDataCoordinator insertPostingStorySnaps:completion:] */

void FUN_10694e3f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694e500; end: 10694e533;  */

void FUN_10694e500(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10694e534; end: 10694e66b; -[SCMyStoriesDataCoordinator insertPostingStorySnapsWithSnapDoc:storyMetadata:destinationMetadataByStoryPostingId:customStoryTypesByStoryId:] */

void FUN_10694e534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c066ce0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694e66c; end: 10694e723;  */

void FUN_10694e66c(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x10694e6e0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x78),param_2,&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 10694e724; end: 10694e8e7; -[SCMyStoriesDataCoordinator _insertPostingStorySnaps:completion:] */

void FUN_10694e724(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bd869d0(param_4,&PTR___NSConcreteGlobalBlock_11094d020,
                      &PTR___NSConcreteGlobalBlock_11094d040);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10694e9a8;
  puStack_78 = &UNK_11094d060;
  _objc_retain(uVar1);
  uStack_70 = uVar1;
  _objc_retain(param_5);
  uStack_68 = param_5;
  func_0x00010c066aa0(param_1,uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_98,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10694e8e8; end: 10694e9a7;  */

void FUN_10694e8e8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010694e918(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10694e9a8; end: 10694e9f7;  */

void FUN_10694e9a8(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = param_3;
    if (param_2 == 0) {
      uVar1 = 0;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10694e9f8; end: 10694ea4b;  */

void FUN_10694e9f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf002e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc5a0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10694ea4c; end: 10694eca7; -[SCMyStoriesDataCoordinator _announceStoriesPostAttemptForStoryIds:] */

void FUN_10694ea4c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_250 [128];
  long lStack_1d0;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        iVar10 = (int)*(undefined8 *)(lStack_128 + lVar12 * 8);
        func_0x00010c0720c0();
        if (iVar10 == 0) {
          func_0x00010befa120(puVar1);
        }
        else {
          puVar3 = PTR_PTR_1126cf360;
          func_0x00010bfd2860();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdcc160(param_1);
          _objc_release(puVar3);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_138,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_138;
  _objc_copyWeak(auStack_140);
  func_0x00010bf62520(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  puVar13 = auStack_250;
  puVar6 = puVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar6 != (undefined1 *)0x0) {
    puVar13 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar9);
      }
      puVar7 = puVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c27dd80();
      puVar1 = PTR_PTR_1126cf360;
      if (puVar8 == (undefined1 *)0x1) {
        puVar8 = puVar7;
        func_0x00010bf85d80(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd2860(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        lVar11 = param_3 + 0x20;
        _objc_loadWeakRetained(lVar11);
        func_0x00010bdcc160();
        _objc_release(lVar11);
        _objc_release(puVar1);
      }
      _objc_release(puVar7);
      puVar13 = puVar13 + 1;
    } while (puVar6 != puVar13);
    puVar13 = auStack_250;
    puVar6 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(puVar13);
  _objc_alloc(puVar1);
  func_0x00010bff4000();
  _objc_release(puVar13);
  uVar4 = *(undefined8 *)(puVar9 + 0xa8);
  puVar3 = PTR_PTR_1126cf368;
  _objc_alloc(PTR_PTR_1126cf368);
  func_0x00010c026980();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10694eca8; end: 10694ee37;  */

void FUN_10694eca8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar7 = auStack_f0;
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar3 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c27dd80();
      puVar5 = PTR_PTR_1126cf360;
      if (lVar4 == 1) {
        lVar4 = lVar3;
        func_0x00010bf85d80(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd2860(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lVar4 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar4);
        func_0x00010bdcc160();
        _objc_release(lVar4);
        _objc_release(puVar5);
      }
      _objc_release(lVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    puVar7 = auStack_f0;
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(puVar7);
  _objc_alloc(puVar5);
  func_0x00010bff4000();
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  puVar6 = PTR_PTR_1126cf368;
  _objc_alloc(PTR_PTR_1126cf368);
  func_0x00010c026980();
  func_0x00010c0d9840(uVar8);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10694ee38; end: 10694eec7; -[SCMyStoriesDataCoordinator setStoriesUploadingSnapState:businessIds:] */

void FUN_10694ee38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bff4000();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  puVar2 = PTR_PTR_1126cf368;
  _objc_alloc(PTR_PTR_1126cf368);
  func_0x00010c026980();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10694eec8; end: 10694eeef; -[SCMyStoriesDataCoordinator getStoriesUploadingSnapState] */

void FUN_10694eec8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10694eef0; end: 10694eeff; -[SCMyStoriesDataCoordinator updateSnapZippedFieldWithClientId:zipped:completion:] */

void FUN_10694eef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_updateMyStorySnapWithClientId_zi_11267f9e0,
             param_3,param_4,0,param_5);
  return;
}



/* Entry: 10694ef00; end: 10694efe3; -[SCMyStoriesDataCoordinator updatePostedStorySnaps:] */

void FUN_10694ef00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10694efe4; end: 10694f017;  */

void FUN_10694efe4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


