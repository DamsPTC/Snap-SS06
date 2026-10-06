/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079a0eac; end: 1079a0eb7; -[SCDiscoverFeedExpandedStoryFeedViewController _isPageTypeDiscoverInForYou:] */

bool FUN_1079a0eac(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 3;
}



/* Entry: 1079a0eb8; end: 1079a0f47; -[SCDiscoverFeedExpandedStoryFeedViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0eb8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + _DAT_112766d3c,param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_overridePresentingVC_112619b10);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010c0f03e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_112766c98));
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a0f48; end: 1079a0f67; -[SCDiscoverFeedExpandedStoryFeedViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0f48(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112766d3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079a0f68; end: 1079a12bb; -[SCDiscoverFeedExpandedStoryFeedViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079a0f68(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112766d3c);
  _objc_storeStrong(param_1 + _DAT_112766d1c,0);
  _objc_storeStrong(param_1 + _DAT_112766d18,0);
  _objc_storeStrong(param_1 + _DAT_112766d10,0);
  _objc_storeStrong(param_1 + _DAT_112766d14,0);
  _objc_storeStrong(param_1 + _DAT_112766d0c,0);
  _objc_storeStrong(param_1 + _DAT_112766cfc,0);
  _objc_storeStrong(param_1 + _DAT_112766cf8,0);
  _objc_storeStrong(param_1 + _DAT_112766cf4,0);
  _objc_storeStrong(param_1 + _DAT_112766cf0,0);
  _objc_storeStrong(param_1 + _DAT_112766cec,0);
  _objc_storeStrong(param_1 + _DAT_112766ce4,0);
  _objc_storeStrong(param_1 + _DAT_112766cd8,0);
  _objc_storeStrong(param_1 + _DAT_112766cd4,0);
  _objc_storeStrong(param_1 + _DAT_112766cd0,0);
  _objc_storeStrong(param_1 + _DAT_112766c80,0);
  _objc_storeStrong(param_1 + _DAT_112766d30,0);
  _objc_storeStrong(param_1 + _DAT_112766ce0,0);
  _objc_storeStrong(param_1 + _DAT_112766cdc,0);
  _objc_storeStrong(param_1 + _DAT_112766d08,0);
  _objc_storeStrong(param_1 + _DAT_112766ccc,0);
  _objc_storeStrong(param_1 + _DAT_112766cc8,0);
  _objc_storeStrong(param_1 + _DAT_112766cc4,0);
  _objc_storeStrong(param_1 + _DAT_112766cc0,0);
  _objc_storeStrong(param_1 + _DAT_112766cbc,0);
  _objc_storeStrong(param_1 + _DAT_112766cb8,0);
  _objc_storeStrong(param_1 + _DAT_112766cb4,0);
  _objc_storeStrong(param_1 + _DAT_112766cb0,0);
  _objc_storeStrong(param_1 + _DAT_112766cac,0);
  _objc_destroyWeak(param_1 + _DAT_112766ca8);
  _objc_storeStrong(param_1 + _DAT_112766ca4,0);
  _objc_storeStrong(param_1 + _DAT_112766d04,0);
  _objc_storeStrong(param_1 + _DAT_112766d00,0);
  _objc_storeStrong(param_1 + _DAT_112766ce8,0);
  _objc_storeStrong(param_1 + _DAT_112766d44,0);
  _objc_storeStrong(param_1 + _DAT_112766d48,0);
  _objc_storeStrong(param_1 + _DAT_112766ca0,0);
  _objc_storeStrong(param_1 + _DAT_112766c9c,0);
  _objc_storeStrong(param_1 + _DAT_112766c98,0);
  _objc_storeStrong(param_1 + _DAT_112766c94,0);
  _objc_storeStrong(param_1 + _DAT_112766c90,0);
  _objc_storeStrong(param_1 + _DAT_112766c8c,0);
  _objc_storeStrong(param_1 + _DAT_112766c88,0);
  _objc_storeStrong(param_1 + _DAT_112766c84,0);
  _objc_storeStrong(param_1 + _DAT_112766c7c,0);
  _objc_storeStrong(param_1 + _DAT_112766d20,0);
  _objc_storeStrong(param_1 + _DAT_112766c68,0);
  _objc_storeStrong(param_1 + _DAT_112766d4c,0);
  _objc_destroyWeak(param_1 + _DAT_112766c70);
  _objc_storeStrong(param_1 + _DAT_112766d2c,0);
  _objc_storeStrong(param_1 + _DAT_112766d28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112766d24,0);
  return;
}



/* Entry: 1079a12bc; end: 1079a17f3; -[SCDiscoverFeedExpandedStoryQueryCoordinator initWithUserSession:endpointManager:circumstanceEngine:snapTokenProvider:readReceiptCoordinator:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:adsClientInfoProvider:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:sectionsCoordinator:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:isBloopsEnabled:storiesConfigProvider:networkConnectivityMonitor:rtusClientCacheManager:unifiedGRPCClientFactory:dpaConfigProvider:adRenderDataParser:notificationPool:storiesGrapheneMetricsEmitter:discoverCrashLogger:locationProvider:] */

undefined8 *
FUN_1079a12bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
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
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_000000a0);
  _objc_retain(in_stack_000000a8);
  _objc_retain(in_stack_000000b0);
  _objc_retain(in_stack_000000b8);
  puStack_70 = PTR_PTR_1126f9058;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000b0);
    uVar2 = puVar1[7];
    puVar1[7] = in_stack_000000b0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cefe0;
    _objc_alloc();
    uVar2 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_10;
    func_0x00010c269d40(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035260();
    uVar6 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cefd8;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e340();
    uVar6 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010c1e63a0(puVar1[5]);
    func_0x00010c1e63a0(puVar1[6]);
    _objc_retain(in_stack_00000040);
    uVar2 = puVar1[4];
    puVar1[4] = in_stack_00000040;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_000000b8);
  _objc_release(in_stack_000000b0);
  _objc_release(in_stack_000000a8);
  _objc_release(in_stack_000000a0);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
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



/* Entry: 1079a17f4; end: 1079a184f; -[SCDiscoverFeedExpandedStoryQueryCoordinator setSectionExtensionServices:] */

void FUN_1079a17f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_3;
    _objc_release(uVar2);
    func_0x00010c1f9280(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a1850; end: 1079a1857; -[SCDiscoverFeedExpandedStoryQueryCoordinator canPerformQuery:] */

undefined8 FUN_1079a1850(void)

{
  return 1;
}



/* Entry: 1079a1858; end: 1079a19d3; -[SCDiscoverFeedExpandedStoryQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1079a1858(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar5);
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
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
  uVar2 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0f1e60();
  if ((uVar2 == 0xb) && ((uVar4 & 1) == 0)) {
    func_0x00010bed60c0(param_1);
  }
  else if ((uVar4 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0f1e60();
    if ((param_4 != 0) && (uVar2 == 3)) {
      uVar2 = param_3;
      FUN_1079b7dd0(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar2,0);
      _objc_release(uVar2);
    }
    func_0x00010be137e0(param_1);
  }
  else {
    func_0x00010be13820(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a19d4; end: 1079a1ae3; -[SCDiscoverFeedExpandedStoryQueryCoordinator _updateContentSectionsWithQuery:resultState:updatingBlock:] */

void FUN_1079a19d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1079a1ae4;
  puStack_68 = &UNK_11094c578;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c11d900(uVar2,param_2,uVar1,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1079a1ae4; end: 1079a1af7;  */

void FUN_1079a1ae4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed60f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateContentSectionsWithSectio_1125931e0,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1079a1af8; end: 1079a1c93; -[SCDiscoverFeedExpandedStoryQueryCoordinator _updateContentSectionsWithSectionMetadata:query:resultState:updatingBlock:] */

void FUN_1079a1af8(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar10 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar10);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar10 != 0) {
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f4b218;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1079a3004;
    puStack_70 = &UNK_11094c668;
    _objc_retain(lVar10);
    puVar3 = puVar2;
    lStack_68 = lVar10;
    func_0x000100504554(puVar2,&puStack_88);
    _objc_release(lStack_68);
    _objc_release(puVar2);
  }
  _objc_release(lVar10);
  puVar2 = PTR_PTR_1126b16f0;
  _objc_alloc();
  uVar8 = param_4;
  puVar9 = puVar3;
  func_0x00010c042a40();
  if (param_6 != 0) {
    uVar8 = 0;
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(uVar8);
    _objc_retain(puVar9);
    uVar4 = uVar8;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1138;
    _objc_opt_class(PTR_PTR_1126b1138);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    _objc_initWeak(auStack_e8,param_3);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfa43a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c11d960(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0720c0();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1079a207c;
    puStack_108 = &UNK_1109f3010;
    _objc_copyWeak(auStack_f0,auStack_e8);
    _objc_retain(uVar8);
    uStack_100 = uVar8;
    _objc_retain(puVar9);
    puStack_f8 = puVar9;
    FUN_1079a1e64(uVar6,uVar4,uVar7,&puStack_120);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(puStack_f8);
    _objc_release(uStack_100);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_release(uVar1);
    _objc_release(puVar9);
    _objc_release(uVar8);
    return;
  }
  return;
}



/* Entry: 1079a1c94; end: 1079a1e63; -[SCDiscoverFeedExpandedStoryQueryCoordinator _fetchRemoteDFStoriesIfNecessaryWithQuery:updatingBlock:] */

void FUN_1079a1c94(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
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
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa43a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0720c0();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1079a207c;
  puStack_78 = &UNK_1109f3010;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  FUN_1079a1e64(uVar5,uVar2,uVar6,&puStack_90);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a1e64; end: 1079a207b;  */

void FUN_1079a1e64(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1079a3098;
  uStack_50 = 0x1079a30a8;
  uStack_48 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1079a3098;
  uStack_80 = 0x1079a30a8;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_1079a3098;
  uStack_d0 = 0x1079a30a8;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_c8 = puVar1;
  if ((param_3 != 0) && (lVar2 = param_2, func_0x00010bf529e0(), lVar2 != 0)) {
    lVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar2);
  }
  _objc_retain(param_4);
  func_0x00010bfa9fc0(param_1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(puStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1079a207c; end: 1079a211f;  */

void FUN_1079a207c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdde5c0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a2120; end: 1079a22ef; -[SCDiscoverFeedExpandedStoryQueryCoordinator _fetchRemoteDFStoriesWithQuery:updatingBlock:] */

void FUN_1079a2120(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
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
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa43a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0720c0();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1079a22f0;
  puStack_78 = &UNK_1109f3010;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  FUN_1079a1e64(uVar5,uVar2,uVar6,&puStack_90);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a22f0; end: 1079a2393;  */

void FUN_1079a22f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13800();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a2394; end: 1079a2767; -[SCDiscoverFeedExpandedStoryQueryCoordinator _checkValidityOfSectionsAndFetchIfNecessary:streamToken:metaStreamToken:allStreamTokens:query:updatingBlock:] */

void FUN_1079a2394(double param_1,long param_2,undefined8 param_3,undefined *param_4,long param_5,
                  undefined8 param_6,undefined *param_7,undefined *param_8,long param_9)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  byte bVar20;
  undefined *puVar21;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_1e0;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_8;
  lVar14 = param_9;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar4 = param_8;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  puVar15 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar15 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010bf529e0();
  puStack_148 = puVar5;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  puVar10 = param_4;
  if (puVar4 == puVar15) {
    puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
    lStack_170 = param_9;
    puStack_168 = param_8;
    puStack_160 = param_7;
    uStack_158 = param_6;
    lStack_150 = param_5;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar15);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_4);
    puVar4 = param_4;
    func_0x00010bf52a60();
    if (puVar4 == (undefined *)0x0) {
      bVar2 = false;
      bVar20 = 1;
    }
    else {
      bVar2 = false;
      lVar18 = *plStack_130;
      bVar20 = 1;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar18) {
            _objc_enumerationMutation(param_4);
          }
          puVar15 = *(undefined **)(lStack_138 + (long)puVar21 * 8);
          func_0x00010bfa4340(puVar15);
          puVar6 = *(undefined **)(param_2 + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bf009e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = puVar15;
          func_0x00010bfab800();
          bVar20 = param_1 - (double)(long)puVar6 <= 1200.0 & bVar20;
          puVar6 = puVar5;
          func_0x00010bf529e0();
          bVar2 = (bool)(puVar6 != (undefined *)0x0 | bVar2);
          _objc_release(puVar5);
          puVar21 = puVar21 + 1;
        } while (puVar4 != puVar21);
        puVar4 = param_4;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(param_4);
    puVar21 = puStack_148;
    puVar4 = puStack_148;
    func_0x00010c0f1e60();
    param_5 = lStack_150;
    param_6 = uStack_158;
    param_7 = puStack_160;
    param_8 = puStack_168;
    param_9 = lStack_170;
    bVar1 = (bool)(puVar4 != (undefined *)0x3 & bVar20);
    if ((bVar1) && (bVar2)) {
      uVar12 = 0;
      puVar4 = param_4;
      puVar10 = puStack_168;
      lVar18 = lStack_170;
      func_0x00010c130040(*(undefined8 *)(param_2 + 0x28));
      param_5 = lStack_150;
      param_6 = uStack_158;
    }
    else {
      if ((bool)((bVar1 ^ 1U) & bVar2)) {
        func_0x00010c130040(*(undefined8 *)(param_2 + 0x28));
        param_5 = lStack_150;
        param_6 = uStack_158;
      }
      else if (lStack_170 != 0) {
        puVar15 = puStack_168;
        FUN_1079b7dd0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_9 + 0x10))(param_9,puVar15,0);
        _objc_release(puVar15);
      }
      puVar4 = param_8;
      lVar18 = param_5;
      uVar12 = param_6;
      puVar13 = param_7;
      lVar14 = param_9;
      func_0x00010be13800(param_2);
    }
  }
  else {
    puVar4 = param_8;
    lVar18 = param_5;
    uVar12 = param_6;
    puVar13 = param_7;
    lVar14 = param_9;
    func_0x00010be13800(param_2);
    puVar21 = puStack_148;
  }
  _objc_release(puVar21);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar6 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_1079a2768;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = puVar5;
  puStack_1c8 = puVar21;
  lStack_1c0 = param_9;
  lStack_1b8 = param_2;
  puStack_1b0 = param_8;
  puStack_1a8 = param_7;
  uStack_1a0 = param_6;
  lStack_198 = param_5;
  puStack_190 = puVar15;
  puStack_188 = param_4;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar10);
  _objc_retain(lVar18);
  _objc_retain(uVar12);
  _objc_retain(puVar13);
  _objc_retain(lVar14);
  puVar15 = puVar4;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  puVar21 = puVar15;
  _objc_opt_isKindOfClass(puVar15,puVar5);
  puVar5 = puVar15;
  if (((ulong)puVar21 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar15);
  puVar15 = puVar4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar15;
  func_0x00010c0720c0();
  _objc_release(puVar15);
  puVar15 = puVar5;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  if ((uint)puVar21 == 0) {
    uVar3 = 0xdd;
  }
  else {
    puVar7 = puVar15;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x0) {
      uVar3 = 0xdd;
    }
    else {
      puVar7 = puVar5;
      func_0x00010bfa43a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar16;
      func_0x00010c067ec0();
      uVar3 = (uint)puVar8;
      _objc_release(puVar16);
      _objc_release(puVar7);
    }
    _objc_release(puVar15);
    puVar15 = (undefined *)0x0;
  }
  puVar7 = PTR_PTR_1126c0f90;
  _objc_opt_new();
  func_0x00010afb79f0();
  if ((uVar3 & (uint)puVar21) == 1) {
    func_0x00010c19b200(puVar7);
  }
  puVar21 = puVar15;
  func_0x00010bf529e0();
  if (puVar21 != (undefined *)0x0) {
    puVar21 = PTR_PTR_1126b7828;
    _objc_opt_new(PTR_PTR_1126b7828);
    func_0x00010c19b220(puVar7);
    _objc_release(puVar21);
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    _objc_retain(puVar15);
    puVar21 = puVar15;
    func_0x00010bf52a60();
    if (puVar21 != (undefined *)0x0) {
      lVar19 = *plStack_290;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_290 != lVar19) {
            _objc_enumerationMutation(puVar15);
          }
          uVar17 = *(undefined8 *)(lStack_298 + (long)puVar16 * 8);
          puVar8 = puVar7;
          func_0x00010bfa43c0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0(uVar17);
          func_0x00010befc800(puVar8);
          _objc_release(puVar8);
          puVar16 = puVar16 + 1;
        } while (puVar21 != puVar16);
        puVar21 = puVar15;
        func_0x00010bf52a60();
      } while (puVar21 != (undefined *)0x0);
    }
    _objc_release(puVar15);
  }
  puVar21 = puVar4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar21;
  func_0x00010c0720c0();
  _objc_release(puVar21);
  if (((ulong)puVar16 & 1) == 0) {
    puVar21 = puVar4;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar21;
    func_0x00010c0720c0();
    _objc_release(puVar21);
    if ((int)puVar16 == 0) goto LAB_1079a2a7c;
  }
  func_0x00010c21a2a0(puVar7);
LAB_1079a2a7c:
  func_0x00010c1b8a60(puVar7);
  puVar21 = puVar7;
  func_0x00010bfa4340();
  if ((int)puVar21 == 0xdd) {
    func_0x00010c1b82c0(puVar7);
  }
  puVar21 = puVar5;
  func_0x00010c0f1e60();
  if (puVar21 == (undefined *)0x3) {
    func_0x00010c1ec040(puVar7);
  }
  _objc_initWeak(auStack_2a8,puVar6);
  uVar17 = *(undefined8 *)(puVar6 + 0x30);
  puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e0 = 0xc2000000;
  pcStack_2d8 = FUN_1079a2c1c;
  puStack_2d0 = &UNK_1109f3040;
  puVar9 = auStack_2a8;
  _objc_copyWeak(auStack_2b0,puVar9);
  _objc_retain(puVar4);
  puStack_2c8 = puVar4;
  _objc_retain(lVar14);
  lStack_2b8 = lVar14;
  _objc_retain(puVar10);
  ppuVar11 = &puStack_2e8;
  puVar21 = puVar7;
  puVar6 = puVar4;
  puStack_2c0 = puVar10;
  func_0x00010c15c780(uVar17);
  _objc_release(puStack_2c0);
  _objc_release(lStack_2b8);
  _objc_release(puStack_2c8);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(puVar7);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(lVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(lVar18);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_2a8);
  __Unwind_Resume();
  _objc_retain(puVar9);
  _objc_retain(puVar21);
  _objc_retain(puVar6);
  _objc_retain(ppuVar11);
  puVar4 = puVar4 + 0x38;
  _objc_loadWeakRetained(puVar4);
  if (puVar6 == (undefined *)0x0) {
    func_0x00010bed8500(puVar4);
  }
  else {
    func_0x00010be294c0(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(ppuVar11);
  _objc_release(puVar6);
  _objc_release(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1079a2768; end: 1079a2c1b; -[SCDiscoverFeedExpandedStoryQueryCoordinator _fetchRemoteDFStoriesWithQuery:existingSections:streamToken:metaStreamToken:allStreamTokens:updatingBlock:] */

void FUN_1079a2768(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar13 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar4 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar3);
  uVar1 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar13);
  uVar13 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010c0720c0();
  _objc_release(uVar13);
  uVar13 = uVar1;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  if ((uint)uVar4 == 0) {
    uVar2 = 0xdd;
  }
  else {
    uVar10 = uVar13;
    func_0x00010bf529e0();
    if (uVar10 == 0) {
      uVar2 = 0xdd;
    }
    else {
      uVar10 = uVar1;
      func_0x00010bfa43a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c067ec0();
      uVar2 = (uint)uVar6;
      _objc_release(uVar5);
      _objc_release(uVar10);
    }
    _objc_release(uVar13);
    uVar13 = 0;
  }
  puVar3 = PTR_PTR_1126c0f90;
  _objc_opt_new();
  func_0x00010afb79f0();
  if ((uVar2 & (uint)uVar4) == 1) {
    func_0x00010c19b200(puVar3);
  }
  uVar4 = uVar13;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    puVar7 = PTR_PTR_1126b7828;
    _objc_opt_new(PTR_PTR_1126b7828);
    func_0x00010c19b220(puVar3);
    _objc_release(puVar7);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(uVar13);
    uVar4 = uVar13;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      lVar12 = *plStack_120;
      do {
        uVar10 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(uVar13);
          }
          uVar11 = *(undefined8 *)(lStack_128 + uVar10 * 8);
          puVar7 = puVar3;
          func_0x00010bfa43c0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0(uVar11);
          func_0x00010befc800(puVar7);
          _objc_release(puVar7);
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
        uVar4 = uVar13;
        func_0x00010bf52a60();
      } while (uVar4 != 0);
    }
    _objc_release(uVar13);
  }
  uVar4 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((uVar10 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar10 == 0) goto LAB_1079a2a7c;
  }
  func_0x00010c21a2a0(puVar3);
LAB_1079a2a7c:
  func_0x00010c1b8a60(puVar3);
  puVar7 = puVar3;
  func_0x00010bfa4340();
  if ((int)puVar7 == 0xdd) {
    func_0x00010c1b82c0(puVar3);
  }
  uVar4 = uVar1;
  func_0x00010c0f1e60();
  if (uVar4 == 3) {
    func_0x00010c1ec040(puVar3);
  }
  _objc_initWeak(auStack_138,param_1);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1079a2c1c;
  puStack_160 = &UNK_1109f3040;
  puVar8 = auStack_138;
  _objc_copyWeak(auStack_140,puVar8);
  _objc_retain(param_3);
  uStack_158 = param_3;
  _objc_retain(param_8);
  uStack_148 = param_8;
  _objc_retain(param_4);
  ppuVar9 = &puStack_178;
  puVar7 = puVar3;
  uVar4 = param_3;
  uStack_150 = param_4;
  func_0x00010c15c780(uVar11);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_158);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
    __Unwind_Resume();
    _objc_retain(puVar8);
    _objc_retain(puVar7);
    _objc_retain(uVar4);
    _objc_retain(ppuVar9);
    lVar12 = param_3 + 0x38;
    _objc_loadWeakRetained(lVar12);
    if (uVar4 == 0) {
      func_0x00010bed8500(lVar12);
    }
    else {
      func_0x00010be294c0(lVar12);
    }
    _objc_release(lVar12);
    _objc_release(ppuVar9);
    _objc_release(uVar4);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  return;
}



/* Entry: 1079a2c1c; end: 1079a2cdb;  */

void FUN_1079a2c1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_4 == 0) {
    func_0x00010bed8500(param_1);
  }
  else {
    func_0x00010be294c0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079a2cdc; end: 1079a2e8f; -[SCDiscoverFeedExpandedStoryQueryCoordinator _updateForResponseFromQuery:existingSections:updatingBlock:response:data:retryFailedRequest:] */

/* WARNING: Removing unreachable block (ram,0x0001079a2df8) */
/* WARNING: Removing unreachable block (ram,0x0001079a2e0c) */

void FUN_1079a2cdc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b7608;
    _objc_alloc(PTR_PTR_1126b7608);
    func_0x00010c008360();
    _objc_release(param_7);
    _objc_retain(0);
    func_0x00010bfd2a40(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar3 = PTR_PTR_1126b7600;
    _objc_alloc(PTR_PTR_1126b7600);
    func_0x00010c008360();
    _objc_release(param_7);
    _objc_retain(0);
    func_0x00010bfd2a60(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a2e90; end: 1079a2f33; -[SCDiscoverFeedExpandedStoryQueryCoordinator _handleFailureWithQuery:error:updatingBlock:] */

void FUN_1079a2e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c11d680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar2);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1079a2f34; end: 1079a2f3b; -[SCDiscoverFeedExpandedStoryQueryCoordinator isLoading] */

undefined1 FUN_1079a2f34(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 1079a2f3c; end: 1079a2f43; -[SCDiscoverFeedExpandedStoryQueryCoordinator currentQuery] */

undefined8 FUN_1079a2f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1079a2f44; end: 1079a2f4b; -[SCDiscoverFeedExpandedStoryQueryCoordinator setCurrentQuery:] */

void FUN_1079a2f44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079a2f4c; end: 1079a2f53; -[SCDiscoverFeedExpandedStoryQueryCoordinator sectionExtensionServices] */

undefined8 FUN_1079a2f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1079a2f54; end: 1079a2f6b; -[SCDiscoverFeedExpandedStoryQueryCoordinator delegate] */

void FUN_1079a2f54(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079a2f6c; end: 1079a2f77; -[SCDiscoverFeedExpandedStoryQueryCoordinator setDelegate:] */

void FUN_1079a2f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1079a2f78; end: 1079a3003; -[SCDiscoverFeedExpandedStoryQueryCoordinator .cxx_destruct] */

void FUN_1079a2f78(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1079a3004; end: 1079a3097;  */

void FUN_1079a3004(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c09de60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c09de80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1079a3098; end: 1079a30af;  */

void FUN_1079a3098(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079a30b0; end: 1079a3337;  */

void FUN_1079a30b0(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar10 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar10 == 0) {
      lVar10 = *(long *)(param_1 + 0x20);
      if (lVar10 != 0) {
        uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
        func_0x00010bf51e00(uVar13);
        (**(code **)(lVar10 + 0x10))(lVar10,param_2,uVar12,uVar9,uVar13);
        _objc_release(uVar13);
      }
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      ppuVar2 = &PTR____CFConstantStringClassReference_110ea7958;
      func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ea7958,
                          &PTR____CFConstantStringClassReference_110ea7938,0);
      func_0x000107c61180();
      if (lRam00000001137fe070 != -1) {
        func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
      }
      ppuVar3 = ppuVar2;
      if ((bRam00000001137fe068 & 1) != 0) {
        func_0x000107c312ec(ppuVar2);
        func_0x000107c61180();
        func_0x000107c61170(ppuVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
      return;
    }
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar11 = *(long *)(lVar14 * 8);
      lVar4 = lVar11;
      func_0x00010c25c6c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
LAB_1079a3204:
        iVar6 = *(int *)(param_1 + 0x48);
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
        lVar4 = lVar11;
        func_0x00010c25c6c0(lVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfa4340(lVar11);
        func_0x00010c0df760(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar13);
        _objc_release(puVar5);
        _objc_release(lVar4);
        lVar4 = lVar11;
        func_0x00010bfa4340();
        iVar6 = *(int *)(param_1 + 0x48);
        if ((int)lVar4 == iVar6) {
          lVar4 = lVar11;
          func_0x00010c25c6c0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          uVar13 = *(undefined8 *)(lVar8 + 0x28);
          *(long *)(lVar8 + 0x28) = lVar4;
          _objc_release(uVar13);
          goto LAB_1079a3204;
        }
      }
      if ((iVar6 == 0xdd) &&
         ((*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0 ||
          (lVar4 = lVar11, func_0x00010bfab800(),
          *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) < lVar4)))) {
        lVar4 = lVar11;
        func_0x00010c0cc060();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        uVar13 = *(undefined8 *)(lVar8 + 0x28);
        *(long *)(lVar8 + 0x28) = lVar4;
        _objc_release(uVar13);
        func_0x00010bfab800();
        *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = lVar11;
      }
      lVar14 = lVar14 + 1;
    } while (lVar10 != lVar14);
    lVar10 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1079a3338; end: 1079a337f;  */

void FUN_1079a3338(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea7958;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ea7958,
                      &PTR____CFConstantStringClassReference_110ea7938,0);
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



/* Entry: 1079a3380; end: 1079a3aff;  */

void FUN_1079a3380(undefined8 param_1,ulong param_2,undefined *param_3,undefined **param_4,
                  undefined *param_5,ulong param_6,ulong param_7,undefined8 param_8,long param_9,
                  char param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_190;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_d0;
  ulong uStack_c8;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_4;
  puVar4 = param_5;
  uVar12 = param_6;
  uVar13 = param_7;
  uVar14 = param_8;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  if (param_2 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c23f8;
    _objc_opt_new();
    func_0x00010c2b7e40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b25e0(param_1,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6060(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_4 != (undefined **)0x0) {
      func_0x00010c2b6080(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if ((param_10 != '\0') && (puVar17 = param_5, func_0x00010c0720c0(), (int)puVar17 != 0)) {
      puVar17 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar16 = PTR_PTR_1126c2400;
      _objc_alloc();
      func_0x00010c012720();
      puVar4 = puVar16;
      func_0x00010c01b460(puVar17);
      _objc_release(puVar16);
      func_0x00010c2b5ec0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar17);
    }
    uVar2 = param_8;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    _objc_release(uVar2);
    if ((int)uVar3 == 2) {
      puStack_d0 = PTR_PTR_1126b02a8;
      _objc_alloc();
      puVar17 = PTR_PTR_1126c2400;
      _objc_alloc();
      uVar2 = param_8;
      func_0x00010bfa4340(param_8);
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = param_6 & 0xffffffff;
      func_0x00010c2827c0();
      uVar3 = param_8;
      func_0x00010c156900(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c012720();
      puVar16 = puStack_d0;
      puVar4 = puVar17;
      func_0x00010c01b460();
      _objc_release(puVar17);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010c2b5ec0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar16);
    }
    if ((int)param_6 == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110eb3678;
      puVar17 = param_5;
      func_0x00010c0720c0();
      if ((int)puVar17 != 0) {
        func_0x00010b87f3b0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar17;
        func_0x00010c155dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar4;
        func_0x00010bfe9720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar17);
        func_0x00010c2b7520(param_1,puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        ppuVar11 = ppuVar5;
        func_0x00010b0aeb34();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bf1ecc0(0x4028000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 2;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840();
        _objc_release(puVar6);
        _objc_release(puVar17);
        _objc_release(puVar4);
        _objc_release(ppuVar11);
        func_0x00010c2a8a80(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar17 = PTR_PTR_1126d59e8;
        _objc_opt_new(PTR_PTR_1126d59e8);
        func_0x00010c2afa20();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b8a80(puVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2aad80(0x4014000000000000,0x4020000000000000,0x4014000000000000,
                            0x4028000000000000,puVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2afa40(0,0xc010000000000000,0,0,puVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2ab220(0x402c000000000000,puVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a9060(puVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar17;
        func_0x00010bf21f60(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b7ce0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        ppuVar7 = (undefined **)PTR_PTR_1126b02a8;
        _objc_alloc();
        puVar6 = PTR_PTR_1126c2400;
        _objc_alloc();
        func_0x00010c012720();
        puVar4 = puVar6;
        func_0x00010c01b460();
        _objc_release(puVar6);
        ppuVar11 = ppuVar7;
        func_0x00010c2b7cc0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(puVar17);
        puStack_d0 = puVar16;
        uStack_c8 = param_7;
        goto LAB_1079a3a6c;
      }
    }
    else {
      func_0x00010c2b7520(param_1,puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      ppuVar11 = &PTR____CFConstantStringClassReference_110ea77d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea77d8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1ecc0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = 2;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840();
      param_3 = puVar16;
      _objc_release(puVar6);
      _objc_release(puVar17);
      _objc_release(puVar4);
      _objc_release(ppuVar11);
      func_0x00010c2a8a80(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuVar5 = (undefined **)PTR_PTR_1126b02a8;
      _objc_alloc();
      puVar17 = PTR_PTR_1126c2400;
      _objc_alloc();
      func_0x00010c012720();
      puVar4 = puVar17;
      func_0x00010c01b460();
      _objc_release(puVar17);
      ppuVar11 = ppuVar5;
      func_0x00010c2b7cc0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
LAB_1079a3a6c:
      _objc_release(ppuVar5);
      _objc_release(puVar16);
    }
    puVar17 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(ppuVar11);
  _objc_retain(puVar4);
  _objc_retain(uVar12);
  _objc_retain(uVar13);
  _objc_retain(uVar14);
  _objc_retain(param_9);
  _objc_retain(uStack_c8);
  func_0x00010bf409e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    if (param_9 == 0) {
      puStack_178 = puVar1;
      func_0x00010c155a80();
      _objc_retainAutoreleasedReturnValue();
      if ((char)puStack_d0 == '\0') goto LAB_1079a3c2c;
      puStack_170 = puVar1;
      func_0x00010c156620();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_178 = (undefined *)0x0;
LAB_1079a3c2c:
      puStack_170 = (undefined *)0x0;
    }
    puVar17 = puVar1;
    _objc_opt_respondsToSelector(puVar1,PTR_s_sectionSubtitleForDescriptor__112633388);
    if (((ulong)puVar17 & 1) == 0) {
      puStack_190 = (undefined *)0x0;
    }
    else {
      puStack_190 = puVar1;
      func_0x00010c1565a0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar17 = puVar1;
    _objc_opt_respondsToSelector(puVar1,PTR_s_carouselSectionLayoutCalculator__1125aa440);
    if (((ulong)puVar17 & 1) == 0) {
      puStack_180 = (undefined *)0x0;
    }
    else {
      puStack_180 = puVar1;
      func_0x00010bf32a60();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126b4890;
    _objc_opt_class(PTR_PTR_1126b4890);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar17);
    _objc_release(uVar8);
    if ((uVar9 & 1) == 0) {
      uVar8 = param_2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126b1700;
      _objc_opt_class(PTR_PTR_1126b1700);
      uVar9 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar17);
      _objc_release(uVar8);
      if ((uVar9 & 1) == 0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        uVar9 = param_2;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR_PTR_1126b1700;
        _objc_opt_class(PTR_PTR_1126b1700);
        uVar10 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar17);
        uVar8 = uVar9;
        if ((uVar10 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar9);
        uVar9 = uVar8;
        func_0x00010bf4c1e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        puVar17 = PTR_PTR_1126c2180;
        _objc_opt_class(PTR_PTR_1126c2180);
        uVar10 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar17);
        uVar8 = uVar9;
        if ((uVar10 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar9);
        uVar9 = param_2;
        func_0x00010bfe5ec0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2cc60(uVar8);
        uVar10 = uVar8;
        func_0x00010bfa4340(uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        func_0x00010c067ec0(uVar10);
        puVar16 = puStack_170;
        FUN_1079a3380(0x4028000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar9);
        puVar17 = PTR_PTR_1126b1108;
        _objc_alloc();
        if (puVar16 == (undefined *)0x0) {
          func_0x00010c04f820();
        }
        else {
          puVar6 = PTR_PTR_1126c23a8;
          _objc_alloc(PTR_PTR_1126c23a8);
          func_0x00010c01a180();
          func_0x00010c04f820();
          _objc_release(puVar6);
        }
        puVar6 = PTR_PTR_1126c23b8;
        _objc_opt_new(PTR_PTR_1126c23b8);
        func_0x00010c1b9a60(puVar17);
        _objc_release(puVar6);
        puVar6 = puVar17;
        func_0x00010c08caa0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189840();
        _objc_release(puVar6);
        uVar8 = param_2;
        func_0x00010bfe5ec0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0720c0();
        _objc_release(uVar8);
        if (puStack_178 == (undefined *)0x0) {
          func_0x00010c1f9240(puVar17);
        }
        else {
          puVar6 = puStack_178;
          (**(code **)(puStack_178 + 0x10))(puStack_178,uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f9240(puVar17);
          _objc_release(puVar6);
        }
        func_0x00010c161980(puVar17);
        puVar6 = puVar17;
        func_0x00010c155a60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar6 != (undefined *)0x0) {
          func_0x00010c189700(puVar17);
        }
        _objc_release(puVar16);
      }
    }
    else {
      puVar17 = puVar1;
      _objc_opt_respondsToSelector(puVar1,PTR_s_supplementaryViewProviderWithMar_1126765c8);
      if (((ulong)puVar17 & 1) == 0) {
        uVar8 = param_2;
        func_0x00010bfe5ec0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puStack_170;
        FUN_1079a3380(0x4028000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (puVar17 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = PTR_PTR_1126c23a8;
          _objc_alloc();
          func_0x00010c01a180();
        }
        _objc_release(puVar17);
      }
      else {
        puVar16 = puVar1;
        func_0x00010c262e80(0x4028000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar17 = PTR_PTR_1126bed88;
      _objc_alloc();
      uVar8 = param_2;
      func_0x00010bfe5ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04f860();
      _objc_release(uVar8);
      puVar6 = PTR_PTR_1126ae720;
      _objc_retain(uStack_c8);
      func_0x00010bf11fe0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c194ae0(puVar17);
      _objc_release(puVar6);
      func_0x00010c1738c0(puVar17);
      uVar8 = param_2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      if ((int)uVar9 != 0) {
        func_0x00010c1738c0(puVar17);
      }
      uVar8 = param_2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      if ((int)uVar9 != 0) {
        uVar8 = uStack_c8;
        func_0x00010c269d40(uStack_c8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b1270;
        func_0x00010c152a20(PTR_PTR_1126b1270);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f320(uVar8);
        func_0x00010c1738c0(puVar17);
        _objc_release(puVar6);
        _objc_release(uVar8);
      }
      if (param_9 == 0) {
        if (puStack_178 == (undefined *)0x0) {
          func_0x00010c1f9240(puVar17);
        }
        else {
          puVar6 = puStack_178;
          (**(code **)(puStack_178 + 0x10))(puStack_178,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f9240(puVar17);
          _objc_release(puVar6);
        }
      }
      else {
        func_0x00010c1f9240(puVar17);
      }
      func_0x00010c161980(puVar17);
      func_0x00010c1951e0(puVar17);
      puVar6 = puVar17;
      func_0x00010c155a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c189700(puVar17);
      }
      if (puStack_180 != (undefined *)0x0) {
        func_0x00010c1b9a60(puVar17);
        puVar6 = puVar17;
        func_0x00010c08caa0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189840();
        _objc_release(puVar6);
      }
      _objc_release(uStack_c8);
      _objc_release(puVar16);
    }
    _objc_release(puStack_180);
    _objc_release(puStack_178);
    _objc_release(puStack_190);
    _objc_release(puStack_170);
  }
  _objc_release(puVar1);
  _objc_release(uStack_c8);
  _objc_release(param_9);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(ppuVar11);
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1079a3b00; end: 1079a434f;  */

void FUN_1079a3b00(ulong param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,char param_9
                  ,undefined4 param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_c0;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  func_0x00010bf409e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  if (puVar2 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_1079a42e4;
  }
  if (param_8 == 0) {
    puStack_a8 = puVar2;
    func_0x00010c155a80();
    _objc_retainAutoreleasedReturnValue();
    if (param_9 == '\0') goto LAB_1079a3c2c;
    puStack_a0 = puVar2;
    func_0x00010c156620();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_a8 = (undefined *)0x0;
LAB_1079a3c2c:
    puStack_a0 = (undefined *)0x0;
  }
  puVar8 = puVar2;
  _objc_opt_respondsToSelector(puVar2,PTR_s_sectionSubtitleForDescriptor__112633388);
  if (((ulong)puVar8 & 1) == 0) {
    puStack_c0 = (undefined *)0x0;
  }
  else {
    puStack_c0 = puVar2;
    func_0x00010c1565a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = puVar2;
  _objc_opt_respondsToSelector(puVar2,PTR_s_carouselSectionLayoutCalculator__1125aa440);
  if (((ulong)puVar8 & 1) == 0) {
    puStack_b0 = (undefined *)0x0;
  }
  else {
    puStack_b0 = puVar2;
    func_0x00010bf32a60();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b4890;
  _objc_opt_class(PTR_PTR_1126b4890);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar8);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar8);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      uVar3 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b1700;
      _objc_opt_class(PTR_PTR_1126b1700);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar8);
      uVar1 = uVar3;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010bf4c1e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar8 = PTR_PTR_1126c2180;
      _objc_opt_class(PTR_PTR_1126c2180);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar8);
      uVar1 = uVar3;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      uVar3 = param_1;
      func_0x00010bfe5ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2cc60(uVar1);
      uVar4 = uVar1;
      func_0x00010bfa4340(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010c067ec0(uVar4);
      puVar7 = puStack_a0;
      FUN_1079a3380(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar8 = PTR_PTR_1126b1108;
      _objc_alloc();
      if (puVar7 == (undefined *)0x0) {
        func_0x00010c04f820();
      }
      else {
        puVar5 = PTR_PTR_1126c23a8;
        _objc_alloc(PTR_PTR_1126c23a8);
        func_0x00010c01a180();
        func_0x00010c04f820();
        _objc_release(puVar5);
      }
      puVar5 = PTR_PTR_1126c23b8;
      _objc_opt_new(PTR_PTR_1126c23b8);
      func_0x00010c1b9a60(puVar8);
      _objc_release(puVar5);
      puVar5 = puVar8;
      func_0x00010c08caa0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189840();
      _objc_release(puVar5);
      uVar1 = param_1;
      func_0x00010bfe5ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if (puStack_a8 == (undefined *)0x0) {
        func_0x00010c1f9240(puVar8);
      }
      else {
        puVar5 = puStack_a8;
        (**(code **)(puStack_a8 + 0x10))(puStack_a8,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f9240(puVar8);
        _objc_release(puVar5);
      }
      func_0x00010c161980(puVar8);
      puVar5 = puVar8;
      func_0x00010c155a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c189700(puVar8);
      }
      _objc_release(puVar7);
    }
  }
  else {
    puVar8 = puVar2;
    _objc_opt_respondsToSelector(puVar2,PTR_s_supplementaryViewProviderWithMar_1126765c8);
    if (((ulong)puVar8 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bfe5ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puStack_a0;
      FUN_1079a3380(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (puVar8 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR_PTR_1126c23a8;
        _objc_alloc();
        func_0x00010c01a180();
      }
      _objc_release(puVar8);
    }
    else {
      puVar7 = puVar2;
      func_0x00010c262e80(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR_PTR_1126bed88;
    _objc_alloc();
    uVar1 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04f860();
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126ae720;
    _objc_retain(param_11);
    func_0x00010bf11fe0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194ae0(puVar8);
    _objc_release(puVar5);
    func_0x00010c1738c0(puVar8);
    uVar1 = param_1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      func_0x00010c1738c0(puVar8);
    }
    uVar1 = param_1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar6 = param_11;
      func_0x00010c269d40(param_11);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b1270;
      func_0x00010c152a20(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f320(uVar6);
      func_0x00010c1738c0(puVar8);
      _objc_release(puVar5);
      _objc_release(uVar6);
    }
    if (param_8 == 0) {
      if (puStack_a8 == (undefined *)0x0) {
        func_0x00010c1f9240(puVar8);
      }
      else {
        puVar5 = puStack_a8;
        (**(code **)(puStack_a8 + 0x10))(puStack_a8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f9240(puVar8);
        _objc_release(puVar5);
      }
    }
    else {
      func_0x00010c1f9240(puVar8);
    }
    func_0x00010c161980(puVar8);
    func_0x00010c1951e0(puVar8);
    puVar5 = puVar8;
    func_0x00010c155a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c189700(puVar8);
    }
    if (puStack_b0 != (undefined *)0x0) {
      func_0x00010c1b9a60(puVar8);
      puVar5 = puVar8;
      func_0x00010c08caa0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189840();
      _objc_release(puVar5);
    }
    _objc_release(param_11);
    _objc_release(puVar7);
  }
  _objc_release(puStack_b0);
  _objc_release(puStack_a8);
  _objc_release(puStack_c0);
  _objc_release(puStack_a0);
LAB_1079a42e4:
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1079a4350; end: 1079a43ab;  */

void FUN_1079a4350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f8e0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079a43ac; end: 1079a43b7; +[SCDiscoverFeedFooterSectionDataProvider announcerIdentifier] */

undefined ** FUN_1079a43ac(void)

{
  return &PTR____CFConstantStringClassReference_110ea79b8;
}



/* Entry: 1079a43b8; end: 1079a43bf; -[SCDiscoverFeedFooterSectionDataProvider addListener:] */

void FUN_1079a43b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079a43c0; end: 1079a43c7; -[SCDiscoverFeedFooterSectionDataProvider removeListener:] */

void FUN_1079a43c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079a43c8; end: 1079a4463; -[SCDiscoverFeedFooterSectionDataProvider initWithDiscoverFeedDataFetcher:] */

undefined1 * FUN_1079a43c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9060;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079a4464; end: 1079a448f; -[SCDiscoverFeedFooterSectionDataProvider setUp] */

void FUN_1079a4464(long param_1,undefined8 param_2)

{
  func_0x00010befc780(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bee4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWithStoriesDataStore_112596d00);
  return;
}



/* Entry: 1079a4490; end: 1079a44bf; -[SCDiscoverFeedFooterSectionDataProvider tearDown] */

void FUN_1079a4490(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeUpdateListener__1126295c8,param_1);
  return;
}



/* Entry: 1079a44c0; end: 1079a44c7; -[SCDiscoverFeedFooterSectionDataProvider numberOfItemsInSection:] */

void FUN_1079a44c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1079a44c8; end: 1079a451b; -[SCDiscoverFeedFooterSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1079a44c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079a451c;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079a451c; end: 1079a454b;  */

void FUN_1079a451c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 1079a454c; end: 1079a460f; -[SCDiscoverFeedFooterSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1079a454c(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d59f0;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126c21a8;
  puStack_30 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126d59f8;
  puStack_28 = puVar3;
  _objc_opt_class();
  ppuVar5 = &puStack_30;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar2 = PTR_PTR_1126c2180;
  _objc_opt_class(PTR_PTR_1126c2180);
  ppuVar7 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar2);
  ppuVar1 = ppuVar5;
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  ppuVar7 = *(undefined ***)(puVar3 + 0x30);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar7);
  if (ppuVar1 == ppuVar7) {
    _objc_release(ppuVar7);
    _objc_release(ppuVar1);
  }
  else {
    if (ppuVar7 == (undefined **)0x0) {
      _objc_release();
    }
    else {
      ppuVar4 = ppuVar1;
      func_0x00010c071ae0();
      _objc_release(ppuVar7);
      _objc_release(ppuVar1);
      if (((ulong)ppuVar4 & 1) != 0) goto LAB_1079a46fc;
    }
    ppuVar7 = ppuVar1;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(puVar3 + 0x30);
    *(undefined ***)(puVar3 + 0x30) = ppuVar7;
    _objc_release(uVar6);
    ppuVar7 = ppuVar1;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar3 + 0x20);
    *(undefined ***)(puVar3 + 0x20) = ppuVar7;
    _objc_release(uVar6);
    func_0x00010bee4d60(puVar3);
  }
LAB_1079a46fc:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 1079a4610; end: 1079a471b; -[SCDiscoverFeedFooterSectionDataProvider setSectionDataModel:] */

void FUN_1079a4610(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2180;
  _objc_opt_class(PTR_PTR_1126c2180);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = *(ulong *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  if (uVar1 == uVar5) {
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1079a46fc;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee4d60(param_1);
  }
LAB_1079a46fc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a471c; end: 1079a471f; -[SCDiscoverFeedFooterSectionDataProvider dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_1079a471c(void)

{
  return;
}



/* Entry: 1079a4720; end: 1079a4723; -[SCDiscoverFeedFooterSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1079a4720(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be040d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispatchUpdateWithStoriesDataSt_11255e9d0);
  return;
}



/* Entry: 1079a4724; end: 1079a47db; -[SCDiscoverFeedFooterSectionDataProvider _dispatchUpdateWithStoriesDataStore] */

void FUN_1079a4724(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1079a47dc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1079a47dc; end: 1079a4807;  */

void FUN_1079a47dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a4808; end: 1079a48f7; -[SCDiscoverFeedFooterSectionDataProvider _updateWithStoriesDataStore] */

void FUN_1079a4808(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c067fc0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf00a00(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1079a48f8; end: 1079a495f;  */

void FUN_1079a48f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4d40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a4960; end: 1079a4a4b; -[SCDiscoverFeedFooterSectionDataProvider _updateWithStories:sectionDataModel:] */

void FUN_1079a4960(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf529e0();
  uVar7 = (ulong)(param_3 != 0);
  lVar1 = param_4;
  func_0x00010bfd9420();
  _objc_release(param_4);
  func_0x0001079a4bd8(uVar7,lVar1,param_4 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar5 = puVar2;
  func_0x00010bee5020(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar8 = *(undefined **)(puVar2 + 0x18);
  _objc_retain(puVar8);
  _objc_retain(puVar5);
  if (puVar8 == puVar5) {
    _objc_release(puVar5);
  }
  else {
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    else {
      puVar3 = puVar8;
      func_0x00010c071ae0();
      _objc_release(puVar5);
      _objc_release(puVar8);
      if (((ulong)puVar3 & 1) != 0) goto LAB_1079a4af8;
    }
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)(puVar2 + 0x18);
    *(undefined **)(puVar2 + 0x18) = puVar5;
    _objc_release(uVar4);
    puVar8 = puVar2 + 0x28;
    _objc_loadWeakRetained(puVar8);
    func_0x00010c155aa0();
  }
  _objc_release(puVar8);
LAB_1079a4af8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1079a4a4c; end: 1079a4b0b; -[SCDiscoverFeedFooterSectionDataProvider _updateWithViewModels:] */

void FUN_1079a4a4c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x18);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_1079a4af8;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c155aa0();
  }
  _objc_release(uVar3);
LAB_1079a4af8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a4b0c; end: 1079a4b23; -[SCDiscoverFeedFooterSectionDataProvider dataProviderDelegate] */

void FUN_1079a4b0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079a4b24; end: 1079a4b2f; -[SCDiscoverFeedFooterSectionDataProvider setDataProviderDelegate:] */

void FUN_1079a4b24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1079a4b30; end: 1079a4b37; -[SCDiscoverFeedFooterSectionDataProvider sectionDataModel] */

undefined8 FUN_1079a4b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079a4b38; end: 1079a4b3f; -[SCDiscoverFeedFooterSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1079a4b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1079a4b40; end: 1079a4b6f; -[SCDiscoverFeedFooterSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1079a4b40(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1079a4b70; end: 1079a4c2b; -[SCDiscoverFeedFooterSectionDataProvider .cxx_destruct] */

void FUN_1079a4b70(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079a4c2c; end: 1079a4c37; +[SCPremiumFeedFooterSectionDataProvider announcerIdentifier] */

undefined ** FUN_1079a4c2c(void)

{
  return &PTR____CFConstantStringClassReference_110ea7a58;
}



/* Entry: 1079a4c38; end: 1079a4c3f; -[SCPremiumFeedFooterSectionDataProvider addListener:] */

void FUN_1079a4c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079a4c40; end: 1079a4c47; -[SCPremiumFeedFooterSectionDataProvider removeListener:] */

void FUN_1079a4c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079a4c48; end: 1079a4ceb; -[SCPremiumFeedFooterSectionDataProvider initWithSectionsCoordinator:sectionDataModel:] */

undefined1 *
FUN_1079a4c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9068;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079a4cec; end: 1079a4dff; -[SCPremiumFeedFooterSectionDataProvider setUp] */

void FUN_1079a4cec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
    func_0x0001079a4bd8(0,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc780();
    _objc_release(uVar3);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010c155aa0();
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc780();
  }
  _objc_release(lVar1);
  func_0x00010bee4c80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12eea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1079a4e00; end: 1079a4e47; -[SCPremiumFeedFooterSectionDataProvider tearDown] */

void FUN_1079a4e00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12eea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079a4e48; end: 1079a4e4f; -[SCPremiumFeedFooterSectionDataProvider numberOfItemsInSection:] */

void FUN_1079a4e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1079a4e50; end: 1079a4ea3; -[SCPremiumFeedFooterSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1079a4e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079a4ea4;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079a4ea4; end: 1079a4ed3;  */

void FUN_1079a4ea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 1079a4ed4; end: 1079a4f77; -[SCPremiumFeedFooterSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1079a4ed4(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d59f0;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126c21a8;
  puStack_28 = puVar2;
  _objc_opt_class();
  ppuVar5 = &puStack_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar3 = PTR_PTR_1126c2180;
  _objc_opt_class(PTR_PTR_1126c2180);
  ppuVar7 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar3);
  ppuVar1 = ppuVar5;
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  ppuVar7 = *(undefined ***)(puVar2 + 0x30);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar7);
  if (ppuVar1 == ppuVar7) {
    _objc_release(ppuVar7);
    _objc_release(ppuVar1);
  }
  else {
    if (ppuVar7 == (undefined **)0x0) {
      _objc_release();
    }
    else {
      ppuVar4 = ppuVar1;
      func_0x00010c071ae0();
      _objc_release(ppuVar7);
      _objc_release(ppuVar1);
      if (((ulong)ppuVar4 & 1) != 0) goto LAB_1079a5044;
    }
    ppuVar7 = ppuVar1;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined ***)(puVar2 + 0x30) = ppuVar7;
    _objc_release(uVar6);
    func_0x00010be040a0(puVar2);
  }
LAB_1079a5044:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 1079a4f78; end: 1079a5063; -[SCPremiumFeedFooterSectionDataProvider setSectionDataModel:] */

void FUN_1079a4f78(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2180;
  _objc_opt_class(PTR_PTR_1126c2180);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = *(ulong *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  if (uVar1 == uVar5) {
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1079a5044;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar5;
    _objc_release(uVar4);
    func_0x00010be040a0(param_1);
  }
LAB_1079a5044:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a5064; end: 1079a50a3; -[SCPremiumFeedFooterSectionDataProvider dataLoadingStatus] */

undefined8 FUN_1079a5064(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 1;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar1 = 2;
    }
    return uVar1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return 2;
  }
  func_0x00010be55680();
  return 2;
}



/* Entry: 1079a50a4; end: 1079a50f3; -[SCPremiumFeedFooterSectionDataProvider _logLoadedWithoutModelOnce] */

void FUN_1079a50a4(long param_1)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  puVar1 = PTR_PTR_1126b0c28;
  _objc_opt_new(PTR_PTR_1126b0c28);
  func_0x000108c7a5d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079a50f4; end: 1079a50f7; -[SCPremiumFeedFooterSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1079a50f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be040b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispatchUpdateWithSectionsCoord_11255e9c8);
  return;
}



/* Entry: 1079a50f8; end: 1079a51af; -[SCPremiumFeedFooterSectionDataProvider _dispatchUpdateWithSectionsCoordinator] */

void FUN_1079a50f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1079a51b0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1079a51b0; end: 1079a51db;  */

void FUN_1079a51b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a51dc; end: 1079a53a7; -[SCPremiumFeedFooterSectionDataProvider _updateWithSectionsCoordinator] */

void FUN_1079a51dc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined **unaff_x23;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ulong uStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126c2180;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(ulong *)(param_1 + 0x30);
  _objc_retain(uVar7);
  _objc_opt_class();
  uVar2 = uVar7;
  _objc_opt_isKindOfClass();
  uVar5 = uVar7;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar7);
  uVar2 = uVar5;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    func_0x00010bed8420(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = uVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1079a53a8;
    puStack_68 = &UNK_110842c58;
    puVar1 = auStack_58;
    _objc_copyWeak(auStack_60);
    func_0x00010bfa9fc0(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    unaff_x23 = &puStack_80;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(uVar5);
  _objc_retain(puVar1);
  puVar4 = puVar1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x1) {
    lVar6 = uVar5 + 0x20;
    _objc_loadWeakRetained(lVar6);
    puVar4 = puVar1;
    func_0x00010bfb1920(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8420(lVar6);
    _objc_release(puVar4);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079a53a8; end: 1079a5427;  */

void FUN_1079a53a8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8420(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079a5428; end: 1079a55c3; -[SCPremiumFeedFooterSectionDataProvider _updateFooterWithSection:] */

void FUN_1079a5428(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c259d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  uVar4 = (ulong)(ppuVar2 != (undefined **)0x0);
  ppuVar2 = param_3;
  func_0x00010bfd9420(param_3);
  func_0x0001079a4bd8(uVar4,ppuVar2,param_3 != (undefined **)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  _objc_initWeak(auStack_58,param_1);
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1079a55c4;
    puStack_70 = &UNK_110841fb0;
    ppuVar1 = &puStack_88;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar3);
    puStack_68 = puVar3;
    func_0x00010c0f7fc0(lVar5);
    _objc_release(puStack_68);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1 + 5);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  param_3 = param_3 + 5;
  _objc_loadWeakRetained(param_3);
  func_0x00010bee5020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a55c4; end: 1079a55f7;  */

void FUN_1079a55c4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a55f8; end: 1079a56b7; -[SCPremiumFeedFooterSectionDataProvider _updateWithViewModels:] */

void FUN_1079a55f8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x10);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (param_3 != 0 || uVar3 != 0) {
    if ((param_3 == 0) || (uVar3 == 0)) {
      _objc_release(param_3);
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071b60(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_1079a56a4;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
  }
LAB_1079a56a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a56b8; end: 1079a56cf; -[SCPremiumFeedFooterSectionDataProvider dataProviderDelegate] */

void FUN_1079a56b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079a56d0; end: 1079a56db; -[SCPremiumFeedFooterSectionDataProvider setDataProviderDelegate:] */

void FUN_1079a56d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1079a56dc; end: 1079a56e3; -[SCPremiumFeedFooterSectionDataProvider sectionDataModel] */

undefined8 FUN_1079a56dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079a56e4; end: 1079a56eb; -[SCPremiumFeedFooterSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1079a56e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1079a56ec; end: 1079a571b; -[SCPremiumFeedFooterSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1079a56ec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1079a571c; end: 1079a5777; -[SCPremiumFeedFooterSectionDataProvider .cxx_destruct] */

void FUN_1079a571c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079a5778; end: 1079a592b;  */

void FUN_1079a5778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c0e20;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x000108f1337c();
  _objc_release(param_8);
  uVar2 = param_6;
  func_0x000108f136bc(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c180e80(puVar1);
  _objc_release(uVar2);
  func_0x000108f137cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a4e0();
  func_0x00010c206a80(puVar1);
  _objc_release(puVar3);
  func_0x00010c1ae2e0(puVar1);
  _objc_release(param_1);
  func_0x00010c1a5a60(puVar1);
  func_0x00010c26f320(param_3);
  _objc_release(param_3);
  func_0x00010c21e160(puVar1);
  func_0x00010c170020(puVar1);
  func_0x00010c175f00(puVar1);
  func_0x00010c1e8040(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079a592c; end: 1079a59bb;  */

void FUN_1079a592c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_s_compare__1125ae690;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c246d00(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf446e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110dc1338);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1079a59bc; end: 1079a5f83; -[SCDiscoverFeedStoriesRequestSender initWithUserSession:queuePerformer:endpointManager:circumstanceEngine:snapTokenProvider:interactionHistoryManager:discoverFeedDataFetcher:adsClientInfoProvider:isBloopsEnabled:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:adConfigProvider:lazyUserRegistrationInfoProvider:lazyBitmojiAvatarProvider:storiesConfigProvider:networkConnectivityMonitor:rtusClientCacheManager:dpaConfigProvider:notificationPool:discoverCrashLogger:locationProvider:unifiedGRPCClientFactory:] */

undefined8 *
FUN_1079a59bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_70 = PTR_PTR_1126f9070;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010c135d00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1080;
    _objc_alloc();
    uVar2 = param_17;
    func_0x00010c269d40(param_17);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c142560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb40();
    uVar5 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_17);
    _objc_retain(param_24);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_24);
    _objc_release(param_17);
  }
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



/* Entry: 1079a5f84; end: 1079a6137;  */

void FUN_1079a5f84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2320;
  func_0x00010bfbb340(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c25d300(ppuVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  ppuVar6 = ppuVar5;
  func_0x00010c08fa60();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1dd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar3 = ppuVar5;
  }
  func_0x00010c196320(puVar2,param_2,ppuVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar2,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1fd6e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e653f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126cf2e0;
  _objc_alloc(PTR_PTR_1126cf2e0);
  func_0x00010c058f80();
  _objc_release(uVar8);
  _objc_release(ppuVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079a6138; end: 1079a613f; -[SCDiscoverFeedStoriesRequestSender sendRequestWithStoriesRequest:query:completion:] */

void FUN_1079a6138(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sendRequestWithStoriesRequest_qu_112634c08);
  return;
}



/* Entry: 1079a6140; end: 1079a6227; -[SCDiscoverFeedStoriesRequestSender sendRequestWithStoriesRequest:query:completion:parsedCompletion:] */

void FUN_1079a6140(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_4;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
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
  func_0x00010be9ff80(param_1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079a6228; end: 1079a6567; -[SCDiscoverFeedStoriesRequestSender _sendRequestWithStoriesRequest:query:parameters:completion:parsedCompletion:] */

void FUN_1079a6228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
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
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1079a6568;
  puStack_a0 = &UNK_1109f30b8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(param_5);
  lStack_88 = param_5;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(param_7);
  ppuVar1 = &puStack_b8;
  uStack_78 = param_7;
  _objc_retainBlock(ppuVar1);
  lVar2 = param_5;
  func_0x00010c0f1e60();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  if (lVar2 == 5) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ceda0(PTR_PTR_1126c10f8);
    uVar4 = uVar3;
    func_0x00010c15bfa0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if ((int)uVar4 == 0) {
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcac60(uVar3);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcac80(uVar3);
    }
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf68b00(PTR_PTR_1126c10f8);
    uVar4 = uVar3;
    func_0x00010c15bfa0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if ((int)uVar4 == 0) {
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcac60(uVar3);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcac80(uVar3);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a6568; end: 1079a65c3;  */

void FUN_1079a6568(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ffa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a65c4; end: 1079a687f; -[SCDiscoverFeedStoriesRequestSender _waitForLocationWithTimeout:performer:thenCall:] */

void FUN_1079a65c4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1079a6880;
  uStack_80 = 0x1079a6890;
  uStack_78 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_1079a6898;
  pcStack_d0 = FUN_1079a68c0;
  uVar1 = param_5;
  puStack_e8 = &uStack_f0;
  puStack_b8 = &uStack_c0;
  puStack_98 = &uStack_a0;
  _objc_retainBlock();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1079a68c8;
  puStack_110 = &UNK_11084f768;
  ppuVar2 = &puStack_128;
  puStack_108 = &uStack_c0;
  puStack_100 = &uStack_a0;
  puStack_f8 = &uStack_f0;
  uStack_c8 = uVar1;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_2 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c09f820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = puStack_98[5];
  puStack_98[5] = uVar6;
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar7 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000.0));
  uVar1 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010058c530(uVar7,uVar1,ppuVar2);
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1079a6880; end: 1079a6897;  */

void FUN_1079a6880(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079a6898; end: 1079a68bf;  */

void FUN_1079a6898(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1079a68c0; end: 1079a68c7;  */

void FUN_1079a68c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079a68c8; end: 1079a6953;  */

void FUN_1079a68c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    _objc_release(uVar1);
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))();
      lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}


