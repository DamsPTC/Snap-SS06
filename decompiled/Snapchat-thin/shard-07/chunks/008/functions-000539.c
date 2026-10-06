/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a0f3a4; end: 105a0f3af; -[SCDiscoverFeedCardRequestSender setQueryCoordinator:] */

void FUN_105a0f3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 105a0f3b0; end: 105a0f4ef; -[SCDiscoverFeedCardRequestSender .cxx_destruct] */

void FUN_105a0f3b0(long param_1)

{
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a0f4f0; end: 105a0f613; -[SCDiscoverFeedCardRequestSenderCreator initWithUnifiedGRPCClientFactory:feedCardConverter:storiesConfigProvider:feedCardGrapheneMetricsEmitter:notificationPool:] */

undefined1 *
FUN_105a0f4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eb4c0;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a0f614; end: 105a0f64b; -[SCDiscoverFeedCardRequestSenderCreator createFeedCardRequestSender] */

void FUN_105a0f614(void)

{
  _objc_alloc(PTR_PTR_1126c1110);
  func_0x00010c058d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a0f64c; end: 105a0f89f; -[SCDiscoverFeedCardRequestSenderCreator createFeedCardRequestSenderWithUserSession:queuePerformer:circumstanceEngine:interactionHistoryManager:discoverFeedDataFetcher:adsClientInfoProvider:isBloopsEnabled:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:storiesSnapReadReceiptLogger:adConfigProvider:lazyUserRegistrationInfoProvider:lazyBitmojiAvatarProvider:lazyUserBirthdayProvider:networkConnectivityMonitor:rtusClientCacheManager:dpaConfigProvider:locationProvider:] */

void FUN_105a0f64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1110;
  _objc_retain();
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
  _objc_alloc(puVar1);
  func_0x00010c016ba0();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0f8a0; end: 105a0f933; -[SCDiscoverFeedCardRequestSenderCreator .cxx_destruct] */

void FUN_105a0f8a0(long param_1)

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



/* Entry: 105a0f934; end: 105a0faa3; -[SCDiscoverFeedCardRequestSenderServiceProvider _createFeedCardRequestSenderCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a0f934(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126c1120;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272d5e0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272d5e4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfa36e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272d5e8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272d5ec;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bfa3720();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d5f0;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058d40(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0faa4; end: 105a0fb0b; -[SCDiscoverFeedCardRequestSenderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a0faa4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d5f0);
  _objc_destroyWeak(param_1 + _DAT_11272d5e0);
  _objc_destroyWeak(param_1 + _DAT_11272d5ec);
  _objc_destroyWeak(param_1 + _DAT_11272d5e8);
  _objc_destroyWeak(param_1 + _DAT_11272d5e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d5f4);
  return;
}



/* Entry: 105a0fb0c; end: 105a0fb7f; -[UNIMFCFeedCardService initWithUnifiedGrpcService:] */

undefined1 * FUN_105a0fb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb4c8;
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



/* Entry: 105a0fb80; end: 105a0fc63; -[UNIMFCFeedCardService getFeedsWithRequest:callOptionsBuilder:handler:] */

void FUN_105a0fb80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c1128;
  _objc_opt_class(PTR_PTR_1126c1128);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e16118,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a0fc64; end: 105a0fd47; -[UNIMFCFeedCardService getFeedCardsWithRequest:callOptionsBuilder:handler:] */

void FUN_105a0fc64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c1130;
  _objc_opt_class(PTR_PTR_1126c1130);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e16138,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a0fd48; end: 105a0fe2b; -[UNIMFCFeedCardService getRecommendedFeedWithRequest:callOptionsBuilder:handler:] */

void FUN_105a0fd48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c1138;
  _objc_opt_class(PTR_PTR_1126c1138);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e16158,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a0fe2c; end: 105a0ff0f; -[UNIMFCFeedCardService batchGetFeedCardsByOwnersWithRequest:callOptionsBuilder:handler:] */

void FUN_105a0fe2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c1140;
  _objc_opt_class(PTR_PTR_1126c1140);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e16178,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a0ff10; end: 105a0ff1b; -[UNIMFCFeedCardService .cxx_destruct] */

void FUN_105a0ff10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a0ff1c; end: 105a0ff83; +[SCRankingGetRecommendedFeedRequest descriptor] */

void FUN_105a0ff1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a82e00,
                        &PTR____CFConstantStringClassReference_110e16198,&PTR_DAT_113115b28,
                        &PTR_s_session_113115b40,2,0x18,0x1c);
    puRam00000001136c1a50 = puVar1;
  }
  return;
}



/* Entry: 105a0ff84; end: 105a1002b; +[SCRankingGetRecommendedFeedResponse descriptor] */

void FUN_105a0ff84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a82e50,
                        &PTR____CFConstantStringClassReference_110e161b8,&PTR_DAT_113115b28,
                        &PTR_s_session_113115b80,2,0x18,0x1c);
    puRam00000001136c1a58 = puVar1;
  }
  return;
}



/* Entry: 105a1002c; end: 105a10123; -[SCDiscoverFeedInteractionHistoryServiceProvider _creatDiscoverFeedInteractionHistoryManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a1002c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c1150;
  _objc_alloc(PTR_PTR_1126c1150);
  lVar2 = param_1 + _DAT_11272d5fc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272d600;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d604;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021e40(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a10124; end: 105a10233; -[SCDiscoverFeedInteractionHistoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a10124(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d604);
  _objc_destroyWeak(param_1 + _DAT_11272d600);
  _objc_destroyWeak(param_1 + _DAT_11272d5fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d608);
  return;
}



/* Entry: 105a10234; end: 105a1023b; -[SCSpotlightConfigProvider dynamicRankingConfig] */

void FUN_105a10234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 105a1023c; end: 105a103b7; -[SCSpotlightConfigProvider _dynamicRankingConfig] */

void FUN_105a1023c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_78;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c1195e0(uVar1,param_3,&PTR____CFConstantStringClassReference_110e161d8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c1160;
  _objc_alloc(PTR_PTR_1126c1160);
  uVar3 = uVar1;
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = 0;
  func_0x00010c008360(puVar2,param_3,uVar3,&uStack_78);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c1158;
  _objc_alloc(PTR_PTR_1126c1158);
  func_0x00010c0d7600(puVar2);
  fVar9 = (float)param_1;
  func_0x00010c0d75e0(puVar2);
  fVar10 = (float)param_1;
  func_0x00010c1044a0(puVar2);
  fVar11 = (float)param_1;
  func_0x00010c104480(puVar2);
  fVar12 = (float)param_1;
  puVar5 = puVar2;
  func_0x00010bf803e0(puVar2);
  puVar6 = puVar2;
  func_0x00010bf80580(puVar2);
  func_0x00010bf66640(puVar2);
  puVar7 = puVar2;
  uVar3 = param_1;
  func_0x00010c139420(puVar2);
  func_0x00010bf6a220(puVar2);
  puVar8 = puVar2;
  func_0x00010c0e8ae0(puVar2);
  func_0x00010c02efe0((double)fVar9,(double)fVar10,(double)fVar11,(double)fVar12,param_1,uVar3,
                      puVar4,param_3,puVar5,puVar6,puVar7,puVar8);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a103b8; end: 105a103bf; -[SCSpotlightConfigProvider dynamicPrefetchConfig] */

void FUN_105a103b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 105a103c0; end: 105a104db; -[SCSpotlightConfigProvider _dynamicPrefetchConfig] */

void FUN_105a103c0(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c1195e0(uVar1,param_3,&PTR____CFConstantStringClassReference_110e161f8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c1168;
  _objc_alloc(PTR_PTR_1126c1168);
  uVar3 = uVar1;
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = 0;
  func_0x00010c008360(puVar2,param_3,uVar3,&uStack_58);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c1170;
  _objc_alloc(PTR_PTR_1126c1170);
  puVar5 = puVar2;
  func_0x00010bf926c0(puVar2);
  puVar6 = puVar2;
  func_0x00010c29c620(puVar2);
  func_0x00010c28b640(puVar2);
  dVar7 = (double)param_1;
  func_0x00010c0d8e20(puVar2);
  dVar8 = (double)param_1;
  func_0x00010c280480(puVar2);
  func_0x00010c00fa80(dVar7,dVar8,(double)param_1,puVar4,param_3,puVar5,(long)(int)puVar6);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a104dc; end: 105a104e3; -[SCSpotlightConfigProvider lensesFeedConfig] */

void FUN_105a104dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 105a104e4; end: 105a1056f; -[SCSpotlightConfigProvider _lensesFeedConfiguration] */

void FUN_105a104e4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c1178;
  _objc_alloc(PTR_PTR_1126c1178);
  func_0x00010c00fa00(0);
  func_0x00010be4c200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a10570; end: 105a105b3; -[SCSpotlightConfigProvider _lensesConfigPrefetchModeForCofMode:] */

undefined8 FUN_105a10570(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (param_3 < 2) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = 1;
  if (param_3 == 2) {
    uVar2 = 2;
  }
  uVar1 = 3;
  if (param_3 != 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105a105b4; end: 105a1078b; -[SCSpotlightConfigProvider _lensesConfigFromCOF] */

void FUN_105a105b4(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar10 = *(long *)(param_2 + 0x20);
  puVar1 = PTR_PTR_1126c1180;
  func_0x00010c24b540(PTR_PTR_1126c1180);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b84a0(lVar10,param_3,puVar11,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar1);
  lVar2 = lVar10;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c1188;
  _objc_alloc();
  func_0x00010c008360();
  puVar11 = (undefined *)0x0;
  if (lVar4 != 0 && puVar1 != (undefined *)0x0) {
    puVar11 = PTR_PTR_1126c1178;
    _objc_alloc(PTR_PTR_1126c1178);
    puVar5 = puVar1;
    func_0x00010bfa3b60(puVar1);
    puVar6 = puVar1;
    func_0x00010bfa4340(puVar1);
    puVar7 = puVar1;
    func_0x00010c142040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c107ac0(puVar1);
    func_0x00010be4c220(param_2,param_3,puVar8);
    puVar8 = puVar1;
    func_0x00010c107f60(puVar1);
    puVar9 = puVar1;
    func_0x00010c0f28e0(puVar1);
    func_0x00010c125620(puVar1);
    func_0x00010c00fa00((double)param_1,puVar11,param_3,puVar5,(ulong)puVar6 & 0xffffffff,puVar7,
                        param_2,(ulong)puVar8 & 0xffffffff,(ulong)puVar9 & 0xffffffff);
    _objc_release(puVar7);
  }
  _objc_release(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105a1078c; end: 105a107a3; -[SCSpotlightConfigProvider isSpotlightShareToStoriesV2UseDebugLens] */

void FUN_105a1078c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16218,0,0);
  return;
}



/* Entry: 105a107a4; end: 105a10823; -[SCSpotlightConfigProvider isSpotlightShareToStoriesV2EnabledWithShouldExpose:] */

undefined8 FUN_105a107a4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16238,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010bf9d480(uVar1);
  }
  uVar2 = uVar1;
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105a10824; end: 105a108a3; -[SCSpotlightConfigProvider isSpotlightAutoSharingToStoriesEnabledWithExposure:] */

undefined8 FUN_105a10824(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16258,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010bf9d480(uVar1);
  }
  uVar2 = uVar1;
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105a108a4; end: 105a108bb; -[SCSpotlightConfigProvider isSpotlightShareToStoriesV2OptimizationEnabled] */

void FUN_105a108a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16278,0,0);
  return;
}



/* Entry: 105a108bc; end: 105a108c3; -[SCSpotlightConfigProvider circumstanceEngine] */

undefined8 FUN_105a108bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a108c4; end: 105a10a53; -[SCSpotlightConfigProvider .cxx_destruct] */

void FUN_105a108c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a10a54; end: 105a10a5f;  */

undefined ** FUN_105a10a54(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2368;
}



/* Entry: 105a10a60; end: 105a10cc3;  */

void FUN_105a10a60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16598,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105a10cc4; end: 105a10edb;  */

void FUN_105a10cc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1195e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110de91b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ba430;
  uVar3 = uVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c0f40e0(puVar4,param_2,uVar3,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  _objc_release(uVar3);
  puVar5 = (undefined *)0x0;
  if (lVar1 == 0) {
    _objc_retain(puVar4);
    puVar5 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a10edc; end: 105a1126f;  */

void FUN_105a10edc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be22fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a11270; end: 105a112af;  */

void FUN_105a11270(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e165f8,0,0);
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a112b0; end: 105a11957;  */

void FUN_105a112b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16618,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105a11958; end: 105a11997; -[SCStoriesConfigProviderImplementation enableInvalidViewTimeLoggingFix] */

undefined8 FUN_105a11958(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a11998; end: 105a119d7; -[SCStoriesConfigProviderImplementation appBackgroundRefreshPageSessionIdEnabled] */

undefined8 FUN_105a11998(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a119d8; end: 105a11a17; -[SCStoriesConfigProviderImplementation appBackgroundRerankEnabled] */

undefined8 FUN_105a119d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a11a18; end: 105a11a57; -[SCStoriesConfigProviderImplementation stopLoggingPullToRefreshLatency] */

undefined8 FUN_105a11a18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a11a58; end: 105a11b8f; -[SCStoriesConfigProviderImplementation _fetchDiscoverThumbnailPrefetchConfig] */

void FUN_105a11a58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cd858);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c11a8;
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c11a8;
  if (lVar2 == 0 || puVar4 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
    _objc_opt_class(puVar5);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a11b90; end: 105a11be7;  */

void FUN_105a11b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11a8;
  _objc_opt_new(PTR_PTR_1126c11a8);
  func_0x00010c18d3c0();
  func_0x00010c18d3e0(puVar1,param_2,4);
  func_0x00010c18d060(puVar1,param_2,2);
  func_0x00010c18d080(puVar1,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a11be8; end: 105a11d1f; -[SCStoriesConfigProviderImplementation _fetchDiscoverClientMetadataConfig] */

void FUN_105a11be8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cd898);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c11b0;
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c11b0;
  if (lVar2 == 0 || puVar4 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
    _objc_opt_class(puVar5);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a11d20; end: 105a11dfb;  */

void FUN_105a11d20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11b0;
  _objc_opt_new(PTR_PTR_1126c11b0);
  func_0x00010c18d1a0();
  func_0x00010c18d1c0(puVar1,param_2,600000);
  func_0x00010c18d2e0(puVar1,param_2,180000);
  func_0x00010c18d300(puVar1,param_2,600000);
  func_0x00010c18d120(puVar1,param_2,180000);
  func_0x00010c18d140(puVar1,param_2,600000);
  func_0x00010c18d160(puVar1,param_2,180000);
  func_0x00010c18d180(puVar1,param_2,600000);
  func_0x00010c18d100(puVar1,param_2,0);
  func_0x00010c18d0e0(puVar1,param_2,21600000);
  func_0x00010c18d0a0(puVar1,param_2,0);
  func_0x00010c18d0c0(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a11dfc; end: 105a11e13; -[SCStoriesConfigProviderImplementation _isEngagementAdjustedContentCacheTTLEnabled] */

void FUN_105a11dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16478,0,0);
  return;
}



/* Entry: 105a11e14; end: 105a11edb; -[SCStoriesConfigProviderImplementation _normalizedEngagementLevel:] */

void FUN_105a11e14(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110daf6b8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c08fa60();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf6b8;
  if ((ppuVar2 != (undefined **)0x0) &&
     (puVar3 = puVar1, func_0x00010bf4b900(puVar1,param_2,param_3), (int)puVar3 != 0)) {
    _objc_retain(param_3);
    ppuVar4 = param_3;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105a11edc; end: 105a11f47; -[SCStoriesConfigProviderImplementation _mixedFeedRefreshIntervalMsForEngagementLevel:] */

long FUN_105a11edc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e16938);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar2,param_2,puVar1,0xffffffff,0);
  _objc_release(puVar1);
  return (long)(int)uVar2;
}



/* Entry: 105a11f48; end: 105a1205b; -[SCStoriesConfigProviderImplementation mixedFeedMetadataRefereshInterval] */

double FUN_105a11f48(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16558,0,0);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16578,
                        &PTR____CFConstantStringClassReference_110daafd8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be640e0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be60a80(param_1,param_2,uVar2);
    if ((-1 < (long)uVar3) ||
       ((uVar3 = uVar2,
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110daf6b8),
        (uVar3 & 1) == 0 &&
        (uVar3 = param_1,
        func_0x00010be60a80(param_1,param_2,&PTR____CFConstantStringClassReference_110daf6b8),
        -1 < (long)uVar3)))) {
      dVar4 = (double)uVar3;
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_105a1203c;
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16958,86400000,0);
  dVar4 = (double)(int)uVar1;
LAB_105a1203c:
  return dVar4 / 1000.0;
}



/* Entry: 105a1205c; end: 105a121c3; -[SCStoriesConfigProviderImplementation _fetchDiscoverClientFyMetadataConfigForEngagementLevel:] */

void FUN_105a1205c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e16978);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c11b8;
  lVar4 = lVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126c11b8;
  if (lVar3 == 0 || puVar5 == (undefined *)0x0) {
    puVar6 = puVar2;
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    _objc_opt_class(puVar6);
    puVar7 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar6);
    puVar6 = puVar5;
    if (((ulong)puVar7 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105a121c4; end: 105a121cb;  */

undefined8 FUN_105a121c4(void)

{
  return 0;
}



/* Entry: 105a121cc; end: 105a12333; -[SCStoriesConfigProviderImplementation _fetchDiscoverClientSubMetadataConfigForEngagementLevel:] */

void FUN_105a121cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e16998);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c11c0;
  lVar4 = lVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126c11c0;
  if (lVar3 == 0 || puVar5 == (undefined *)0x0) {
    puVar6 = puVar2;
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    _objc_opt_class(puVar6);
    puVar7 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar6);
    puVar6 = puVar5;
    if (((ulong)puVar7 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105a12334; end: 105a1233b;  */

undefined8 FUN_105a12334(void)

{
  return 0;
}



/* Entry: 105a1233c; end: 105a12473; -[SCStoriesConfigProviderImplementation _fetchDefaultDiscoverClientFyMetadataConfig] */

void FUN_105a1233c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cd938);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c11b8;
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c11b8;
  if (lVar2 == 0 || puVar4 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
    _objc_opt_class(puVar5);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a12474; end: 105a124cb;  */

void FUN_105a12474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11b8;
  _objc_opt_new(PTR_PTR_1126c11b8);
  func_0x00010c18d220();
  func_0x00010c18d240(puVar1,param_2,0xffffffff);
  func_0x00010c18d1e0(puVar1,param_2,0xffffffff);
  func_0x00010c18d200(puVar1,param_2,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a124cc; end: 105a12603; -[SCStoriesConfigProviderImplementation _fetchDefaultDiscoverClientSubMetadataConfig] */

void FUN_105a124cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cd958);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c11c0;
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c11c0;
  if (lVar2 == 0 || puVar4 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
    _objc_opt_class(puVar5);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a12604; end: 105a1265b;  */

void FUN_105a12604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11c0;
  _objc_opt_new(PTR_PTR_1126c11c0);
  func_0x00010c18d2a0();
  func_0x00010c18d2c0(puVar1,param_2,0xffffffff);
  func_0x00010c18d260(puVar1,param_2,0xffffffff);
  func_0x00010c18d280(puVar1,param_2,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1265c; end: 105a1275b; -[SCStoriesConfigProviderImplementation _fetchDiscoverClientSubMetadataConfig] */

void FUN_105a1265c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010be401e0();
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25d780(uVar2,param_2,&PTR____CFConstantStringClassReference_110e164b8,
                        &PTR____CFConstantStringClassReference_110daafd8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010be640e0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be10f40(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
LAB_105a126d0:
      _objc_retain();
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar2);
      param_1 = uVar3;
      goto LAB_105a12748;
    }
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110daf6b8);
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010be10f40(param_1,param_2,&PTR____CFConstantStringClassReference_110daf6b8);
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 != 0) goto LAB_105a126d0;
    }
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  func_0x00010be10de0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_105a12748:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a1275c; end: 105a1285b; -[SCStoriesConfigProviderImplementation _fetchDiscoverClientFyMetadataConfig] */

void FUN_105a1275c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010be401e0();
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25d780(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16498,
                        &PTR____CFConstantStringClassReference_110daafd8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010be640e0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be10ee0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
LAB_105a127d0:
      _objc_retain();
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar2);
      param_1 = uVar3;
      goto LAB_105a12848;
    }
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110daf6b8);
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010be10ee0(param_1,param_2,&PTR____CFConstantStringClassReference_110daf6b8);
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 != 0) goto LAB_105a127d0;
    }
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  func_0x00010be10dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_105a12848:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a1285c; end: 105a12993; -[SCStoriesConfigProviderImplementation _fetchDiscoverRequestDebouncerConfig] */

void FUN_105a1285c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cd998);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c11c8;
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c11c8;
  if (lVar2 == 0 || puVar4 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
    _objc_opt_class(puVar5);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a12994; end: 105a12a03;  */

void FUN_105a12994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11c8;
  _objc_opt_new(PTR_PTR_1126c11c8);
  func_0x00010c18d360();
  func_0x00010c18d3a0(puVar1,param_2,30000);
  func_0x00010c18d320(puVar1,param_2,30000);
  func_0x00010c18d340(puVar1,param_2,30000);
  func_0x00010c18d380(puVar1,param_2,30000);
  func_0x00010c18d040(puVar1,param_2,0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a12a04; end: 105a12b3b; -[SCStoriesConfigProviderImplementation _fetchMixedCarouselRequestDebouncerConfig] */

void FUN_105a12a04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cd9d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c11d0;
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c11d0;
  if (lVar2 == 0 || puVar4 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
    _objc_opt_class(puVar5);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a12b3c; end: 105a12bbf;  */

void FUN_105a12b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11d0;
  _objc_opt_new(PTR_PTR_1126c11d0);
  func_0x00010c20c7e0();
  func_0x00010c20c820(puVar1,param_2,900000);
  func_0x00010c20c800(puVar1,param_2,3000);
  func_0x00010c20c7c0(puVar1,param_2,180000);
  func_0x00010c20c7a0(puVar1,param_2,180000);
  func_0x00010c20c4c0(puVar1,param_2,21600000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a12bc0; end: 105a12be7; -[SCStoriesConfigProviderImplementation rtusConfigs] */

void FUN_105a12bc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a12be8; end: 105a12bef; -[SCStoriesConfigProviderImplementation isVOperaEnabled] */

undefined8 FUN_105a12be8(void)

{
  return 0;
}



/* Entry: 105a12bf0; end: 105a12c07; -[SCStoriesConfigProviderImplementation snapProChatSharedStoryPlaybackScopeEnabled] */

void FUN_105a12bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16a38,0,0);
  return;
}



/* Entry: 105a12c08; end: 105a12c1f; -[SCStoriesConfigProviderImplementation snapProChatSharedStoryRingPlaybackScopeEnabled] */

void FUN_105a12c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16a58,0,0);
  return;
}



/* Entry: 105a12c20; end: 105a12c5f; -[SCStoriesConfigProviderImplementation contentFeedRepoSingleConnection] */

ulong FUN_105a12c20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x120);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  return uVar2 >> 2 & 1;
}



/* Entry: 105a12c60; end: 105a12c77; -[SCStoriesConfigProviderImplementation contentFeedRepoAutoVacuum] */

void FUN_105a12c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16a78,0,0);
  return;
}



/* Entry: 105a12c78; end: 105a12c8f; -[SCStoriesConfigProviderImplementation friendsFeedPlaybackScopeMigrationPluginFix] */

void FUN_105a12c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16ab8,0,0);
  return;
}



/* Entry: 105a12c90; end: 105a12ccb; -[SCStoriesConfigProviderImplementation responsivenessNfsInteractionHistoryUploadLimit] */

undefined8 FUN_105a12c90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be021a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0da040();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a12ccc; end: 105a12d07; -[SCStoriesConfigProviderImplementation responsivenessActionThresholdInSecond] */

undefined8 FUN_105a12ccc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be021a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beef1a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a12d08; end: 105a12d47; -[SCStoriesConfigProviderImplementation shouldPrioritizeInteractionHistoryWithActionsAndAddTileIdFeedType] */

uint FUN_105a12d08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be021a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beef1a0();
  _objc_release(param_1);
  return ~(uint)uVar1 >> 0x1f;
}



/* Entry: 105a12d48; end: 105a12d5f; -[SCStoriesConfigProviderImplementation shouldPlaceSubsBeforeFS] */

void FUN_105a12d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e162b8,0,0);
  return;
}



/* Entry: 105a12d60; end: 105a12da3; -[SCStoriesConfigProviderImplementation shouldChangePlaylistOrderForSubsBeforeFS] */

void FUN_105a12d60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c231d40();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e162d8,0,0);
    return;
  }
  return;
}



/* Entry: 105a12da4; end: 105a12dbb; -[SCStoriesConfigProviderImplementation enabledCustomTTLReadReceiptFix] */

void FUN_105a12da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16ad8,0,0);
  return;
}



/* Entry: 105a12dbc; end: 105a12dd3; -[SCStoriesConfigProviderImplementation blendedFeedSubscriptionIconWithCheckmarkEnabled] */

void FUN_105a12dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16b38,0,0);
  return;
}



/* Entry: 105a12dd4; end: 105a12e43; -[SCStoriesConfigProviderImplementation isPlaylistControlledPaginationEnabled] */

undefined8 FUN_105a12dd4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16b58,0,0);
  return uVar3;
}



/* Entry: 105a12e44; end: 105a12e4f; -[SCStoriesConfigProviderImplementation discoverBadgeAlwaysOnEnabledForColdStart] */

bool FUN_105a12e44(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c067f00(uVar1,1,&PTR____CFConstantStringClassReference_110f0eef8,0,0);
  return (uVar1 & 1) != 0;
}



/* Entry: 105a12e50; end: 105a12e5b; -[SCStoriesConfigProviderImplementation discoverBadgeAlwaysOnEnabledForWarmStart] */

bool FUN_105a12e50(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c067f00(uVar1,2,&PTR____CFConstantStringClassReference_110f0eef8,0,0);
  return (uVar1 & 2) != 0;
}



/* Entry: 105a12e5c; end: 105a12e73; -[SCStoriesConfigProviderImplementation showTileWatchBarEverywhere] */

void FUN_105a12e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16b78,0,0);
  return;
}



/* Entry: 105a12e74; end: 105a12f33; -[SCStoriesConfigProviderImplementation upNextV2Config] */

void FUN_105a12e74(long param_1,undefined8 param_2)

{
  func_0x00010bf1f440(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e16b98,1,0);
  func_0x00010bf1f440(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e16bb8,1,0);
  _objc_alloc(PTR_PTR_1126c11d8);
  func_0x00010c01ef60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a12f34; end: 105a12f73; -[SCStoriesConfigProviderImplementation upNextV2UsePrefetchV2] */

undefined8 FUN_105a12f34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a12f74; end: 105a12fb3; -[SCStoriesConfigProviderImplementation discoverFeedTilesShowAvatar] */

undefined8 FUN_105a12f74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a12fb4; end: 105a13053; -[SCStoriesConfigProviderImplementation spotlightDisableInChatFeed] */

undefined8 FUN_105a12fb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b1278;
  func_0x00010c1231a0(PTR_PTR_1126b1278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e16bd8,0,0);
    return uVar2;
  }
  return 1;
}



/* Entry: 105a13054; end: 105a1307f; -[SCStoriesConfigProviderImplementation spotlightChatPreviewAutoPlayTreatment] */

long FUN_105a13054(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16bf8,0,0);
  return (long)(int)uVar1;
}



/* Entry: 105a13080; end: 105a130bf; -[SCStoriesConfigProviderImplementation _contentProductPlaybackScopeEnabledForPlaybackLocation:] */

bool FUN_105a13080(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16c18,0,0);
  return (param_3 & (long)(int)uVar1) != 0;
}



/* Entry: 105a130c0; end: 105a131f7; -[SCStoriesConfigProviderImplementation _discoverResponsivenessConfig] */

void FUN_105a130c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cda18);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c11e0;
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c11e0;
  if (lVar2 == 0 || puVar4 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
    _objc_opt_class(puVar5);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a131f8; end: 105a13237;  */

void FUN_105a131f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11e0;
  _objc_opt_new(PTR_PTR_1126c11e0);
  func_0x00010c1cd540();
  func_0x00010c161f20(puVar1,param_2,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a13238; end: 105a1323f; -[SCStoriesConfigProviderImplementation _fetchCompactSubsMultiplier] */

undefined8 FUN_105a13238(void)

{
  return 0x3f800000;
}



/* Entry: 105a13240; end: 105a13287; -[SCStoriesConfigProviderImplementation compactSubsMultiplier] */

undefined8 FUN_105a13240(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105a13288; end: 105a132cf; -[SCStoriesConfigProviderImplementation compactSubsTitleGradientMultiplier] */

undefined8 FUN_105a13288(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105a132d0; end: 105a132d7; -[SCStoriesConfigProviderImplementation _fetchCompactSubsTitleGradientMultiplier] */

undefined8 FUN_105a132d0(void)

{
  return 0x3f800000;
}



/* Entry: 105a132d8; end: 105a13317; -[SCStoriesConfigProviderImplementation compactSubsPublisherStoriesTitleStyle] */

long FUN_105a132d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 105a13318; end: 105a1331f; -[SCStoriesConfigProviderImplementation _fetchCompactSubsPublisherStoriesTitleStyle] */

undefined8 FUN_105a13318(void)

{
  return 0;
}



/* Entry: 105a13320; end: 105a1335f; -[SCStoriesConfigProviderImplementation compactSubsUserStoriesBadgeStyle] */

long FUN_105a13320(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 105a13360; end: 105a13367; -[SCStoriesConfigProviderImplementation _fetchCompactSubsUserStoriesBadgeStyle] */

undefined8 FUN_105a13360(void)

{
  return 0;
}



/* Entry: 105a13368; end: 105a133a7; -[SCStoriesConfigProviderImplementation compactSubsNumThumbnailsToPrefetch] */

long FUN_105a13368(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 105a133a8; end: 105a133bf; -[SCStoriesConfigProviderImplementation quickSendPreviewRefactorEnabled] */

void FUN_105a133a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e162f8,0,0);
  return;
}


