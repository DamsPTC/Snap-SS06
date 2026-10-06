/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079f4804; end: 1079f4823; -[SCImpalaSnapInsightsOperaLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079f4804(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (*(long *)(param_1 + _DAT_1127679d4) == 6 && param_3 == 4) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1079f4824; end: 1079f482b; -[SCImpalaSnapInsightsOperaLayerViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1079f4824(void)

{
  return 0;
}



/* Entry: 1079f482c; end: 1079f4837; -[SCImpalaSnapInsightsOperaLayerViewController pushToValdiMarshaller:] */

undefined8 FUN_1079f482c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5f78;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x000107a2a91c();
  return param_3;
}



/* Entry: 1079f4838; end: 1079f4aef; -[SCImpalaSnapInsightsOperaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f4838(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127679dc,0);
  _objc_storeStrong(param_1 + _DAT_1127679d8,0);
  _objc_storeStrong(param_1 + _DAT_1127679c4,0);
  _objc_storeStrong(param_1 + _DAT_1127679c0,0);
  _objc_storeStrong(param_1 + _DAT_1127679bc,0);
  _objc_storeStrong(param_1 + _DAT_1127679b8,0);
  _objc_storeStrong(param_1 + _DAT_1127679b4,0);
  _objc_storeStrong(param_1 + _DAT_1127679a8,0);
  _objc_storeStrong(param_1 + _DAT_1127679ac,0);
  _objc_storeStrong(param_1 + _DAT_112767994,0);
  _objc_storeStrong(param_1 + _DAT_112767990,0);
  _objc_storeStrong(param_1 + _DAT_11276798c,0);
  _objc_storeStrong(param_1 + _DAT_112767988,0);
  _objc_storeStrong(param_1 + _DAT_112767940,0);
  _objc_storeStrong(param_1 + _DAT_11276793c,0);
  _objc_storeStrong(param_1 + _DAT_1127679cc,0);
  _objc_storeStrong(param_1 + _DAT_112767984,0);
  _objc_storeStrong(param_1 + _DAT_112767980,0);
  _objc_storeStrong(param_1 + _DAT_11276797c,0);
  _objc_storeStrong(param_1 + _DAT_112767978,0);
  _objc_storeStrong(param_1 + _DAT_112767974,0);
  _objc_storeStrong(param_1 + _DAT_112767970,0);
  _objc_storeStrong(param_1 + _DAT_11276796c,0);
  _objc_storeStrong(param_1 + _DAT_1127679e0,0);
  _objc_storeStrong(param_1 + _DAT_1127679e4,0);
  _objc_storeStrong(param_1 + _DAT_1127679a4,0);
  _objc_storeStrong(param_1 + _DAT_1127679a0,0);
  _objc_storeStrong(param_1 + _DAT_11276799c,0);
  _objc_storeStrong(param_1 + _DAT_112767998,0);
  _objc_storeStrong(param_1 + _DAT_112767968,0);
  _objc_storeStrong(param_1 + _DAT_112767964,0);
  _objc_storeStrong(param_1 + _DAT_112767960,0);
  _objc_storeStrong(param_1 + _DAT_11276795c,0);
  _objc_storeStrong(param_1 + _DAT_112767958,0);
  _objc_storeStrong(param_1 + _DAT_112767954,0);
  _objc_storeStrong(param_1 + _DAT_112767950,0);
  _objc_storeStrong(param_1 + _DAT_11276794c,0);
  _objc_storeStrong(param_1 + _DAT_112767948,0);
  _objc_storeStrong(param_1 + _DAT_112767944,0);
  _objc_destroyWeak(param_1 + _DAT_112767938);
  _objc_storeStrong(param_1 + _DAT_112767934,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112767930);
  return;
}



/* Entry: 1079f4af0; end: 1079f528f; -[SCImpalaSnapInsightsOperaLayerViewControllerProvider initWithUserSession:circumstanceEngine:profileId:snapId:snaps:snapViewerDataCoordinator:snapDeletionHandler:chatPresenter:conversationIdResolver:profilePresenterProvider:payoutsPresenterProvider:snapTokenProvider:snapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:snapchatterObservableRepository:blockedSnapchattersDataFetcher:snapchatterPublicInfoFetcher:arroyoConversationDataUpdateAnnouncer:bitmojiSelfieFetcher:snapProManagedProfilesProvider:composerBlizzardLogger:cofStore:reportPagePresenter:valdiRuntimeProvider:simpleContentFetcher:composerNetworkingClient:conversationManager:startInSwipedUpState:useNativeDeleteModal:contentModerationStatus:composerPeopleBridgeFriendServices:composerCoreUIServices:featureSettingsService:friendsFeedEntryStore:showSwipeUpOnly:contentType:chatReactionServices:deckContainerConverter:storyReplyMutingService:creatorInfoProvider:] */

undefined8 *
FUN_1079f4af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32,
             undefined4 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined1 param_39,undefined4 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  puStack_70 = PTR_PTR_1126f93b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_43;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
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
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_29;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1e) = param_32;
    _objc_retain(param_34);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_38;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x26) = param_39;
    puVar1[0x27] = param_41;
    _objc_retain(param_44);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_45;
    _objc_release(uVar2);
  }
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
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



/* Entry: 1079f5290; end: 1079f54af; -[SCImpalaSnapInsightsOperaLayerViewControllerProvider viewControllerForDelegate:delegateViewForGestures:page:] */

void FUN_1079f5290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c97b8;
  _objc_opt_class(PTR_PTR_1126c97b8);
  _objc_opt_isKindOfClass(uVar4,puVar3);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126d5ce0;
  uVar2 = 0;
  if (*(long *)(param_1 + 0x138) != 6) {
    uVar2 = uVar1;
  }
  _objc_retain(uVar2);
  _objc_alloc(puVar3);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c05d2c0(puVar3,*(undefined8 *)(param_1 + 0x138),lVar5,*(undefined8 *)(param_1 + 0x10),
                      param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xe0),
                      *(undefined8 *)(param_1 + 0xd8),*(undefined1 *)(param_1 + 0xf0));
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079f54b0; end: 1079f54b7; -[SCImpalaSnapInsightsOperaLayerViewControllerProvider shouldDelegateGestures] */

undefined8 FUN_1079f54b0(void)

{
  return 0;
}



/* Entry: 1079f54b8; end: 1079f54bf; -[SCImpalaSnapInsightsOperaLayerViewControllerProvider context] */

undefined8 FUN_1079f54b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 1079f54c0; end: 1079f54ef; -[SCImpalaSnapInsightsOperaLayerViewControllerProvider setContext:] */

void FUN_1079f54c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079f54f0; end: 1079f56d7; -[SCImpalaSnapInsightsOperaLayerViewControllerProvider .cxx_destruct] */

void FUN_1079f54f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079f56d8; end: 1079f586b; -[SCImpalaSnapInsightsOperaPlaylistPlugin initWithActionHandler:refreshTilesCallback:onUnrepostCallback:] */

undefined8 *
FUN_1079f56d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f93b8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    func_0x00010c201c00(puVar1);
    func_0x00010c1b2060(puVar1);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079f586c; end: 1079f5937;  */

void FUN_1079f586c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf911c0();
    func_0x00010c0df6e0(puVar6,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1079f5938; end: 1079f5967; -[SCImpalaSnapInsightsOperaPlaylistPlugin setPlaylistItemController:] */

void FUN_1079f5938(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1079f5968; end: 1079f59db; -[SCImpalaSnapInsightsOperaPlaylistPlugin setOperaControlling:] */

void FUN_1079f5968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_3);
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bf99b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x30,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079f59dc; end: 1079f5acb; -[SCImpalaSnapInsightsOperaPlaylistPlugin registeredEventsForOperaSession] */

/* WARNING: Possible PIC construction at 0x0001079f6454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001079f6458) */
/* WARNING: Removing unreachable block (ram,0x0001079f6494) */
/* WARNING: Removing unreachable block (ram,0x0001079f64c4) */

void FUN_1079f59dc(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puStack_180;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = PTR_PTR_1126b2330;
  func_0x00010bfafaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_b8 = puVar25;
  func_0x00010bf17980();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ea9418;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ea93f8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ea9458;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ea9438;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ea9498;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ea9478;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ea94d8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ea94b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ea9518;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ea94f8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110ea9558;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ea9538;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ea2c98;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dcab58;
  ppuVar19 = &puStack_b8;
  uVar20 = 0x10;
  ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar19);
  _objc_retain(uVar20);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010bfafaa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar19;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar23 != 0) {
    func_0x00010bde2440(puVar25);
    puVar25[0x2a] = 1;
  }
  ppuVar23 = ppuVar19;
  func_0x00010c0720c0();
  if ((int)ppuVar23 == 0) {
LAB_1079f5c54:
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    if ((int)ppuVar23 != 0) {
      puVar2 = puVar25;
      func_0x00010c237ec0();
      if ((int)puVar2 == 0) goto LAB_1079f6b00;
      ppuVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR_PTR_1126d5ce0;
      _objc_opt_class();
      ppuVar3 = ppuVar9;
      _objc_opt_isKindOfClass();
      ppuVar23 = ppuVar9;
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuVar23 = (undefined **)0x0;
      }
      _objc_retain(ppuVar23);
      _objc_release(ppuVar9);
      func_0x00010c10c860(ppuVar23);
      _objc_release(ppuVar23);
      func_0x00010c201c00(puVar25);
    }
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    if ((int)ppuVar23 != 0) {
      ppuVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class();
      ppuVar3 = ppuVar9;
      _objc_opt_isKindOfClass();
      ppuVar23 = ppuVar9;
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuVar23 = (undefined **)0x0;
      }
      _objc_retain(ppuVar23);
      _objc_release(ppuVar9);
      if (*(long *)(puVar25 + 0x50) != 0) {
        param_2 = ppuVar23;
        (**(code **)(*(long *)(puVar25 + 0x50) + 0x10))();
      }
      _objc_release(ppuVar23);
    }
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    if ((int)ppuVar23 != 0) {
      ppuVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class();
      ppuVar3 = ppuVar9;
      _objc_opt_isKindOfClass();
      ppuVar23 = ppuVar9;
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuVar23 = (undefined **)0x0;
      }
      _objc_retain(ppuVar23);
      _objc_release(ppuVar9);
      if (*(long *)(puVar25 + 0x58) != 0) {
        param_2 = ppuVar23;
        (**(code **)(*(long *)(puVar25 + 0x58) + 0x10))();
      }
      _objc_release(ppuVar23);
    }
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)ppuVar23 != 0) {
      uVar8 = uVar20;
      func_0x00010be36bc0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(puVar25 + 0x10);
      func_0x00010c101440();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(puVar25 + 0x20);
      *(undefined8 *)(puVar25 + 0x20) = uVar7;
      _objc_release(uVar21);
      _objc_release(uVar6);
      _objc_release(uVar8);
    }
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf17980(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)ppuVar23 != 0) {
      uVar7 = *(undefined8 *)(puVar25 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf1f3c0();
      _objc_release(uVar7);
      if ((int)uVar8 != 0) {
        func_0x00010bedc700(puVar25);
      }
    }
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    if ((int)ppuVar23 != 0) {
      ppuVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class();
      ppuVar3 = ppuVar9;
      _objc_opt_isKindOfClass();
      ppuVar23 = ppuVar9;
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuVar23 = (undefined **)0x0;
      }
      _objc_retain(ppuVar23);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar23;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar23);
      puVar25[0x28] = (char)ppuVar9;
      func_0x00010bedc700(puVar25);
    }
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    if ((((ulong)ppuVar23 & 1) != 0) ||
       (ppuVar23 = ppuVar19, func_0x00010c0720c0(), (int)ppuVar23 != 0)) {
      ppuVar23 = ppuVar19;
      func_0x00010c0720c0();
      puVar25[0x29] = (char)ppuVar23;
      func_0x00010bedc700(puVar25);
    }
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    if ((int)ppuVar23 != 0) {
      ppuVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR_PTR_1126b0ed0;
      _objc_opt_class();
      ppuVar3 = ppuVar9;
      _objc_opt_isKindOfClass();
      ppuVar23 = ppuVar9;
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuVar23 = (undefined **)0x0;
      }
      _objc_retain(ppuVar23);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar23;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar9;
      func_0x00010c08fa60();
      if (ppuVar3 == (undefined **)0x0) {
        _objc_release(ppuVar9);
LAB_1079f60c8:
        ppuVar9 = ppuVar23;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar9;
        func_0x00010c08fa60();
        _objc_release(ppuVar9);
        if (ppuVar3 == (undefined **)0x0) goto LAB_1079f6afc;
        uVar8 = *(undefined8 *)(puVar25 + 0x10);
        ppuVar9 = ppuVar23;
        func_0x00010bf3cf60(ppuVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ddd40(uVar8);
        _objc_release(ppuVar9);
        ppuVar9 = ppuVar23;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar24 = *(long *)(puVar25 + 0x20);
        *(undefined ***)(puVar25 + 0x20) = ppuVar9;
      }
      else {
        lVar24 = *(long *)(puVar25 + 0x10);
        ppuVar3 = ppuVar23;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1014c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        _objc_release(ppuVar9);
        if (lVar24 == 0) goto LAB_1079f60c8;
        uVar21 = *(undefined8 *)(puVar25 + 0x10);
        func_0x00010c101260();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar21;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar8;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar23;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c0720c0();
        _objc_release(ppuVar9);
        _objc_release(uVar7);
        _objc_release(uVar8);
        _objc_release(uVar21);
        if ((int)uVar6 != 0) {
          func_0x00010bedc700(puVar25);
          _objc_release(lVar24);
          goto LAB_1079f6afc;
        }
        ppuVar9 = ppuVar23;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar25;
        func_0x00010be17ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        func_0x00010c1ddd60(*(undefined8 *)(puVar25 + 0x10));
        uVar8 = *(undefined8 *)(puVar25 + 0x20);
        *(undefined **)(puVar25 + 0x20) = puVar2;
        _objc_release(uVar8);
      }
      _objc_release(lVar24);
      func_0x00010bedc700(puVar25);
      _objc_release(ppuVar23);
    }
    ppuVar23 = ppuVar19;
    func_0x00010c0720c0();
    if ((((((ulong)ppuVar23 & 1) == 0) &&
         (ppuVar23 = ppuVar19, func_0x00010c0720c0(), ((ulong)ppuVar23 & 1) == 0)) &&
        (ppuVar23 = ppuVar19, func_0x00010c0720c0(), ((ulong)ppuVar23 & 1) == 0)) &&
       (ppuVar23 = ppuVar19, func_0x00010c0720c0(), (int)ppuVar23 == 0)) {
LAB_1079f68bc:
      ppuVar23 = ppuVar19;
      func_0x00010c0720c0();
      if ((int)ppuVar23 == 0) goto LAB_1079f6b00;
      ppuVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class();
      ppuVar3 = ppuVar9;
      _objc_opt_isKindOfClass();
      ppuVar23 = ppuVar9;
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuVar23 = (undefined **)0x0;
      }
      _objc_retain(ppuVar23);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar23;
      func_0x00010bf529e0();
      if (ppuVar9 == (undefined **)0x0) goto LAB_1079f6afc;
      ppuVar3 = ppuVar23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar25 + 0x10);
      ppuVar9 = ppuVar3;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      uVar10 = *(ulong *)(puVar25 + 0x10);
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b5bc0;
      _objc_opt_class(PTR_PTR_1126b5bc0);
      uVar11 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar2);
      uVar1 = uVar10;
      if ((uVar11 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      uStack_148 = 0x1079f6e0c;
      puStack_140 = &UNK_1109f4838;
      param_2 = &puStack_158;
      ppuVar9 = ppuVar23;
      puStack_138 = puVar25;
      func_0x000100504554();
      uVar11 = uVar1;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar13 = uVar11;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      if (uVar1 != 0) {
        puVar16 = PTR_PTR_1126aead8;
        _objc_alloc();
        puVar2 = puVar25 + 0x18;
        _objc_loadWeakRetained();
        puVar17 = puVar2;
        func_0x00010c27f040();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar17;
        func_0x00010c27f020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c038f40();
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar2);
        func_0x00010c14aec0(*(undefined8 *)(puVar25 + 8));
        _objc_release(puVar16);
      }
      _objc_release(uVar13);
      _objc_release(ppuVar9);
      _objc_release(uVar10);
      _objc_release(uVar8);
LAB_1079f6af4:
      _objc_release(ppuVar3);
LAB_1079f6afc:
      _objc_release(ppuVar23);
      goto LAB_1079f6b00;
    }
    ppuVar9 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = (undefined **)PTR_PTR_1126b0ed0;
    _objc_opt_class();
    ppuVar3 = ppuVar9;
    _objc_opt_isKindOfClass();
    ppuVar23 = ppuVar9;
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar23 = (undefined **)0x0;
    }
    _objc_retain(ppuVar23);
    _objc_release(ppuVar9);
    ppuVar9 = ppuVar23;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar9;
    func_0x00010c08fa60();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class();
      ppuVar5 = ppuVar4;
      _objc_opt_isKindOfClass();
      ppuVar3 = ppuVar4;
      if (((ulong)ppuVar5 & 1) == 0) {
        ppuVar3 = (undefined **)0x0;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar4);
    }
    else {
      ppuVar3 = ppuVar23;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar9);
    ppuVar9 = ppuVar3;
    func_0x00010c08fa60();
    if (ppuVar9 == (undefined **)0x0) goto LAB_1079f6af4;
    ppuVar9 = *(undefined ***)(puVar25 + 0x10);
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(ulong *)(puVar25 + 0x10);
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    param_2 = (undefined **)PTR_PTR_1126b5bc0;
    _objc_opt_class();
    uVar11 = uVar10;
    _objc_opt_isKindOfClass();
    uVar1 = uVar10;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    ppuVar4 = ppuVar19;
    func_0x00010c0720c0();
    if ((int)ppuVar4 == 0) {
      ppuVar4 = ppuVar19;
      func_0x00010c0720c0();
      puVar2 = PTR_PTR_1126b5bc0;
      if ((int)ppuVar4 == 0) {
        ppuVar4 = ppuVar19;
        func_0x00010c0720c0();
        if ((int)ppuVar4 == 0) {
          ppuVar4 = ppuVar19;
          func_0x00010c0720c0();
          if ((int)ppuVar4 != 0) {
            uVar8 = *(undefined8 *)(puVar25 + 8);
            puVar2 = puVar25 + 0x18;
            _objc_loadWeakRetained();
            puVar16 = puVar2;
            func_0x00010c27f040();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar16;
            func_0x00010c27f020();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar17;
            FUN_1079f6d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf520c0(uVar8);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar2);
          }
        }
        else {
          iVar22 = (int)*(undefined8 *)(puVar25 + 0x20);
          ppuVar4 = ppuVar9;
          func_0x00010be36bc0(ppuVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          if (iVar22 == 0) {
            puStack_180 = (undefined *)0x0;
          }
          else {
            puVar2 = puVar25 + 0x18;
            _objc_loadWeakRetained();
            puVar16 = puVar2;
            func_0x00010c22b5a0();
            _objc_retainAutoreleasedReturnValue();
            puStack_180 = puVar16;
            func_0x00010c22b620();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            _objc_release(puVar2);
          }
          _objc_release(ppuVar4);
          uVar8 = *(undefined8 *)(puVar25 + 8);
          puVar2 = puVar25 + 0x18;
          _objc_loadWeakRetained();
          puVar16 = puVar2;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c27f020();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          FUN_1079f6d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15cac0(uVar8);
          _objc_release(puVar18);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar2);
          _objc_release(puStack_180);
        }
      }
      else {
        _objc_retain(uVar10);
        _objc_opt_class(puVar2);
        uVar13 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar2);
        uVar11 = uVar10;
        if ((uVar13 & 1) == 0) {
          uVar11 = 0;
        }
        _objc_retain(uVar11);
        _objc_release(uVar10);
        uVar13 = uVar11;
        func_0x00010bf5b080();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010bf5b440();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        param_2 = (undefined **)0x1;
        uVar13 = uVar11;
        FUN_107a07834();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar11 != 0) && (uVar15 = uVar10, func_0x00010853a0e0(), (int)uVar15 != 0)) {
          puVar16 = PTR_PTR_1126aead8;
          _objc_alloc();
          puVar2 = puVar25 + 0x18;
          _objc_loadWeakRetained(puVar2);
          puVar17 = puVar2;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010c27f020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c038f40();
          _objc_release(puVar18);
          _objc_release(puVar17);
          _objc_release(puVar2);
          uVar8 = *(undefined8 *)(puVar25 + 8);
          uVar15 = uVar10;
          func_0x00010bf3cf60(uVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_130 = uVar13;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14aec0(uVar8);
          _objc_release(puVar2);
          _objc_release(uVar15);
          _objc_release(puVar16);
        }
        _objc_release(uVar13);
        _objc_release(uVar14);
        _objc_release(uVar11);
      }
LAB_1079f688c:
      _objc_release(uVar1);
      _objc_release(uVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar3);
      _objc_release(ppuVar23);
      goto LAB_1079f68bc;
    }
    puVar16 = PTR_PTR_1126aead8;
    _objc_alloc();
    puVar2 = puVar25 + 0x18;
    _objc_loadWeakRetained(puVar2);
    puVar17 = puVar2;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40();
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar2);
    func_0x00010bf6c8c0(*(undefined8 *)(puVar25 + 8));
    if (uVar1 != 0) {
LAB_1079f64f8:
      _objc_release(puVar16);
      goto LAB_1079f688c;
    }
    puVar2 = puVar25;
    func_0x00010c075e20();
    if ((ppuVar9 == (undefined **)0x0) || ((int)puVar2 == 0)) {
LAB_1079f64cc:
      uVar8 = *(undefined8 *)(puVar25 + 0x10);
      ppuVar4 = ppuVar9;
      func_0x00010be36bc0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12db80(uVar8);
      _objc_release(ppuVar4);
      goto LAB_1079f64f8;
    }
    ppuVar12 = *(undefined ***)(puVar25 + 0x10);
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar12;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar4);
    _objc_release(ppuVar12);
    if (ppuVar9 != ppuVar5) goto LAB_1079f64cc;
    param_2 = *(undefined ***)(puVar25 + 0x10);
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar25;
    func_0x00010c237ec0();
    if (((ulong)puVar2 & 1) == 0) {
      ppuVar9 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
      _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
      ppuVar3 = ppuVar9;
      _objc_opt_isKindOfClass(ppuVar9,puVar2);
      ppuVar23 = ppuVar9;
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuVar23 = (undefined **)0x0;
      }
      _objc_retain(ppuVar23);
      _objc_release(ppuVar9);
      ppuVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR_PTR_1126b0f00;
      _objc_opt_class();
      ppuVar5 = ppuVar4;
      _objc_opt_isKindOfClass();
      ppuVar3 = ppuVar4;
      if (((ulong)ppuVar5 & 1) == 0) {
        ppuVar3 = (undefined **)0x0;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar4);
      if ((ppuVar23 != (undefined **)0x0) && (ppuVar3 != (undefined **)0x0)) {
        func_0x00010be798e0(puVar25);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        goto LAB_1079f5c54;
      }
      _objc_release(ppuVar3);
      goto LAB_1079f6afc;
    }
LAB_1079f6b00:
    _objc_release(param_5);
    _objc_release(uVar20);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return;
    }
    ___stack_chk_fail();
    ppuVar9 = ppuVar19;
  }
  _objc_retain();
  _objc_retain(param_2);
  ppuVar19 = ppuVar9;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar19 == (undefined **)0x0) {
    ppuVar23 = (undefined **)0x0;
  }
  else {
    ppuVar19 = ppuVar9;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar19;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar19);
    ppuVar19 = ppuVar3;
    func_0x00010bfecde0();
    if (ppuVar19 == (undefined **)0x0) {
      ppuVar19 = ppuVar3;
      func_0x00010bf529e0();
      if ((undefined **)0x1 < ppuVar19) goto LAB_1079f6c14;
LAB_1079f6c28:
      ppuVar4 = param_2;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar9;
      func_0x00010bfce400(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar4;
      func_0x00010bfecde0();
      _objc_release(ppuVar23);
      if (ppuVar19 == (undefined **)0x7fffffffffffffff) {
LAB_1079f6d3c:
        ppuVar23 = (undefined **)0x0;
      }
      else {
        if (0 < (long)ppuVar19) {
          puVar25 = (undefined *)((long)ppuVar19 + 1);
          do {
            ppuVar5 = ppuVar4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar5;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar23 = ppuVar12;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar12);
            _objc_release(ppuVar5);
            if (ppuVar23 != (undefined **)0x0) goto LAB_1079f6d40;
            puVar25 = puVar25 + -1;
          } while ((undefined *)0x1 < puVar25);
        }
        do {
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
          ppuVar23 = ppuVar4;
          func_0x00010bf529e0();
          if (ppuVar23 <= ppuVar19) goto LAB_1079f6d3c;
          ppuVar5 = ppuVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar5;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar23 = ppuVar12;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar12);
          _objc_release(ppuVar5);
        } while (ppuVar23 == (undefined **)0x0);
      }
LAB_1079f6d40:
      _objc_release(ppuVar4);
    }
    else {
      if (ppuVar19 == (undefined **)0x7fffffffffffffff) goto LAB_1079f6c28;
LAB_1079f6c14:
      ppuVar23 = ppuVar3;
      func_0x00010c0dfd40(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
  }
  _objc_release(param_2);
  _objc_release(ppuVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar23);
  return;
}



/* Entry: 1079f5acc; end: 1079f6d7f; -[SCImpalaSnapInsightsOperaPlaylistPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x0001079f6454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001079f6458) */
/* WARNING: Removing unreachable block (ram,0x0001079f6494) */
/* WARNING: Removing unreachable block (ram,0x0001079f64c4) */

void FUN_1079f5acc(ulong param_1,undefined **param_2,undefined **param_3,undefined8 param_4,
                  undefined **param_5)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  int iVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined *puVar24;
  long lStack_c0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar24 = PTR_PTR_1126b2330;
  func_0x00010bfafaa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar24);
  if ((int)ppuVar22 != 0) {
    func_0x00010bde2440(param_1);
    *(undefined1 *)(param_1 + 0x2a) = 1;
  }
  ppuVar22 = param_3;
  func_0x00010c0720c0();
  if ((int)ppuVar22 == 0) {
LAB_1079f5c54:
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    if ((int)ppuVar22 != 0) {
      uVar1 = param_1;
      func_0x00010c237ec0();
      if ((int)uVar1 == 0) goto LAB_1079f6b00;
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR_PTR_1126d5ce0;
      _objc_opt_class();
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass();
      ppuVar22 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      _objc_retain(ppuVar22);
      _objc_release(ppuVar8);
      func_0x00010c10c860(ppuVar22);
      _objc_release(ppuVar22);
      func_0x00010c201c00(param_1);
    }
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    if ((int)ppuVar22 != 0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class();
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass();
      ppuVar22 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      _objc_retain(ppuVar22);
      _objc_release(ppuVar8);
      if (*(long *)(param_1 + 0x50) != 0) {
        param_2 = ppuVar22;
        (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
      }
      _objc_release(ppuVar22);
    }
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    if ((int)ppuVar22 != 0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class();
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass();
      ppuVar22 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      _objc_retain(ppuVar22);
      _objc_release(ppuVar8);
      if (*(long *)(param_1 + 0x58) != 0) {
        param_2 = ppuVar22;
        (**(code **)(*(long *)(param_1 + 0x58) + 0x10))();
      }
      _objc_release(ppuVar22);
    }
    puVar24 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar24);
    if ((int)ppuVar22 != 0) {
      uVar7 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c101440();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      _objc_release(uVar20);
      _objc_release(uVar5);
      _objc_release(uVar7);
    }
    puVar24 = PTR_PTR_1126b2330;
    func_0x00010bf17980(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar24);
    if ((int)ppuVar22 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      if ((int)uVar7 != 0) {
        func_0x00010bedc700(param_1);
      }
    }
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    if ((int)ppuVar22 != 0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class();
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass();
      ppuVar22 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      _objc_retain(ppuVar22);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar22;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar22);
      *(char *)(param_1 + 0x28) = (char)ppuVar8;
      func_0x00010bedc700(param_1);
    }
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    if ((((ulong)ppuVar22 & 1) != 0) ||
       (ppuVar22 = param_3, func_0x00010c0720c0(), (int)ppuVar22 != 0)) {
      ppuVar22 = param_3;
      func_0x00010c0720c0();
      *(char *)(param_1 + 0x29) = (char)ppuVar22;
      func_0x00010bedc700(param_1);
    }
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    if ((int)ppuVar22 != 0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR_PTR_1126b0ed0;
      _objc_opt_class();
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass();
      ppuVar22 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      _objc_retain(ppuVar22);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar22;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar8;
      func_0x00010c08fa60();
      if (ppuVar2 == (undefined **)0x0) {
        _objc_release(ppuVar8);
LAB_1079f60c8:
        ppuVar8 = ppuVar22;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar8;
        func_0x00010c08fa60();
        _objc_release(ppuVar8);
        if (ppuVar2 == (undefined **)0x0) goto LAB_1079f6afc;
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        ppuVar8 = ppuVar22;
        func_0x00010bf3cf60(ppuVar22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ddd40(uVar7);
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar22;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = *(long *)(param_1 + 0x20);
        *(undefined ***)(param_1 + 0x20) = ppuVar8;
      }
      else {
        lVar23 = *(long *)(param_1 + 0x10);
        ppuVar2 = ppuVar22;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1014c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        _objc_release(ppuVar8);
        if (lVar23 == 0) goto LAB_1079f60c8;
        uVar20 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c101260();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar20;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar22;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c0720c0();
        _objc_release(ppuVar8);
        _objc_release(uVar6);
        _objc_release(uVar7);
        _objc_release(uVar20);
        if ((int)uVar5 != 0) {
          func_0x00010bedc700(param_1);
          _objc_release(lVar23);
          goto LAB_1079f6afc;
        }
        ppuVar8 = ppuVar22;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010be17ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        func_0x00010c1ddd60(*(undefined8 *)(param_1 + 0x10));
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        *(ulong *)(param_1 + 0x20) = uVar1;
        _objc_release(uVar7);
      }
      _objc_release(lVar23);
      func_0x00010bedc700(param_1);
      _objc_release(ppuVar22);
    }
    ppuVar22 = param_3;
    func_0x00010c0720c0();
    if ((((((ulong)ppuVar22 & 1) == 0) &&
         (ppuVar22 = param_3, func_0x00010c0720c0(), ((ulong)ppuVar22 & 1) == 0)) &&
        (ppuVar22 = param_3, func_0x00010c0720c0(), ((ulong)ppuVar22 & 1) == 0)) &&
       (ppuVar22 = param_3, func_0x00010c0720c0(), (int)ppuVar22 == 0)) {
LAB_1079f68bc:
      ppuVar22 = param_3;
      func_0x00010c0720c0();
      if ((int)ppuVar22 == 0) goto LAB_1079f6b00;
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class();
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass();
      ppuVar22 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      _objc_retain(ppuVar22);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar22;
      func_0x00010bf529e0();
      if (ppuVar8 == (undefined **)0x0) goto LAB_1079f6afc;
      ppuVar2 = ppuVar22;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      ppuVar8 = ppuVar2;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      uVar9 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR_PTR_1126b5bc0;
      _objc_opt_class(PTR_PTR_1126b5bc0);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar24);
      uVar1 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      uStack_88 = 0x1079f6e0c;
      puStack_80 = &UNK_1109f4838;
      param_2 = &puStack_98;
      ppuVar8 = ppuVar22;
      uStack_78 = param_1;
      func_0x000100504554();
      uVar10 = uVar1;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar12 = uVar10;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      if (uVar1 != 0) {
        puVar24 = PTR_PTR_1126aead8;
        _objc_alloc();
        lVar23 = param_1 + 0x18;
        _objc_loadWeakRetained();
        lVar16 = lVar23;
        func_0x00010c27f040();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar16;
        func_0x00010c27f020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c038f40();
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(lVar23);
        func_0x00010c14aec0(*(undefined8 *)(param_1 + 8));
        _objc_release(puVar24);
      }
      _objc_release(uVar12);
      _objc_release(ppuVar8);
      _objc_release(uVar9);
      _objc_release(uVar7);
LAB_1079f6af4:
      _objc_release(ppuVar2);
LAB_1079f6afc:
      _objc_release(ppuVar22);
      goto LAB_1079f6b00;
    }
    ppuVar8 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = (undefined **)PTR_PTR_1126b0ed0;
    _objc_opt_class();
    ppuVar2 = ppuVar8;
    _objc_opt_isKindOfClass();
    ppuVar22 = ppuVar8;
    if (((ulong)ppuVar2 & 1) == 0) {
      ppuVar22 = (undefined **)0x0;
    }
    _objc_retain(ppuVar22);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar22;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar8;
    func_0x00010c08fa60();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class();
      ppuVar4 = ppuVar3;
      _objc_opt_isKindOfClass();
      ppuVar2 = ppuVar3;
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar2 = (undefined **)0x0;
      }
      _objc_retain(ppuVar2);
      _objc_release(ppuVar3);
    }
    else {
      ppuVar2 = ppuVar22;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar2;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) goto LAB_1079f6af4;
    ppuVar8 = *(undefined ***)(param_1 + 0x10);
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    param_2 = (undefined **)PTR_PTR_1126b5bc0;
    _objc_opt_class();
    uVar10 = uVar9;
    _objc_opt_isKindOfClass();
    uVar1 = uVar9;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    ppuVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)ppuVar3 == 0) {
      ppuVar3 = param_3;
      func_0x00010c0720c0();
      puVar24 = PTR_PTR_1126b5bc0;
      if ((int)ppuVar3 == 0) {
        ppuVar3 = param_3;
        func_0x00010c0720c0();
        if ((int)ppuVar3 == 0) {
          ppuVar3 = param_3;
          func_0x00010c0720c0();
          if ((int)ppuVar3 != 0) {
            uVar7 = *(undefined8 *)(param_1 + 8);
            lVar23 = param_1 + 0x18;
            _objc_loadWeakRetained();
            lVar16 = lVar23;
            func_0x00010c27f040();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar16;
            func_0x00010c27f020();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar17;
            FUN_1079f6d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf520c0(uVar7);
            _objc_release(lVar18);
            _objc_release(lVar17);
            _objc_release(lVar16);
            _objc_release(lVar23);
          }
        }
        else {
          iVar21 = (int)*(undefined8 *)(param_1 + 0x20);
          ppuVar3 = ppuVar8;
          func_0x00010be36bc0(ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          if (iVar21 == 0) {
            lStack_c0 = 0;
          }
          else {
            lVar23 = param_1 + 0x18;
            _objc_loadWeakRetained();
            lVar16 = lVar23;
            func_0x00010c22b5a0();
            _objc_retainAutoreleasedReturnValue();
            lStack_c0 = lVar16;
            func_0x00010c22b620();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar16);
            _objc_release(lVar23);
          }
          _objc_release(ppuVar3);
          uVar7 = *(undefined8 *)(param_1 + 8);
          lVar23 = param_1 + 0x18;
          _objc_loadWeakRetained();
          lVar16 = lVar23;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar16;
          func_0x00010c27f020();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar17;
          FUN_1079f6d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15cac0(uVar7);
          _objc_release(lVar18);
          _objc_release(lVar17);
          _objc_release(lVar16);
          _objc_release(lVar23);
          _objc_release(lStack_c0);
        }
      }
      else {
        _objc_retain(uVar9);
        _objc_opt_class(puVar24);
        uVar12 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar24);
        uVar10 = uVar9;
        if ((uVar12 & 1) == 0) {
          uVar10 = 0;
        }
        _objc_retain(uVar10);
        _objc_release(uVar9);
        uVar12 = uVar10;
        func_0x00010bf5b080();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010bf5b440();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        param_2 = (undefined **)0x1;
        uVar12 = uVar10;
        FUN_107a07834();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar10 != 0) && (uVar14 = uVar9, func_0x00010853a0e0(), (int)uVar14 != 0)) {
          puVar24 = PTR_PTR_1126aead8;
          _objc_alloc();
          lVar23 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar23);
          lVar16 = lVar23;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar16;
          func_0x00010c27f020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c038f40();
          _objc_release(lVar17);
          _objc_release(lVar16);
          _objc_release(lVar23);
          uVar7 = *(undefined8 *)(param_1 + 8);
          uVar14 = uVar9;
          func_0x00010bf3cf60(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_70 = uVar12;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14aec0(uVar7);
          _objc_release(puVar15);
          _objc_release(uVar14);
          _objc_release(puVar24);
        }
        _objc_release(uVar12);
        _objc_release(uVar13);
        _objc_release(uVar10);
      }
LAB_1079f688c:
      _objc_release(uVar1);
      _objc_release(uVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuVar2);
      _objc_release(ppuVar22);
      goto LAB_1079f68bc;
    }
    puVar24 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar23 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar23);
    lVar16 = lVar23;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40();
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar23);
    func_0x00010bf6c8c0(*(undefined8 *)(param_1 + 8));
    if (uVar1 != 0) {
LAB_1079f64f8:
      _objc_release(puVar24);
      goto LAB_1079f688c;
    }
    uVar10 = param_1;
    func_0x00010c075e20();
    if ((ppuVar8 == (undefined **)0x0) || ((int)uVar10 == 0)) {
LAB_1079f64cc:
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      ppuVar3 = ppuVar8;
      func_0x00010be36bc0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12db80(uVar7);
      _objc_release(ppuVar3);
      goto LAB_1079f64f8;
    }
    ppuVar11 = *(undefined ***)(param_1 + 0x10);
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar11;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar3);
    _objc_release(ppuVar11);
    if (ppuVar8 != ppuVar4) goto LAB_1079f64cc;
    param_2 = *(undefined ***)(param_1 + 0x10);
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010c237ec0();
    if ((uVar1 & 1) == 0) {
      ppuVar8 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___UIViewController_1126af898;
      _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar24);
      ppuVar22 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      _objc_retain(ppuVar22);
      _objc_release(ppuVar8);
      ppuVar3 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = (undefined **)PTR_PTR_1126b0f00;
      _objc_opt_class();
      ppuVar4 = ppuVar3;
      _objc_opt_isKindOfClass();
      ppuVar2 = ppuVar3;
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar2 = (undefined **)0x0;
      }
      _objc_retain(ppuVar2);
      _objc_release(ppuVar3);
      if ((ppuVar22 != (undefined **)0x0) && (ppuVar2 != (undefined **)0x0)) {
        func_0x00010be798e0(param_1);
        _objc_release(ppuVar3);
        _objc_release(ppuVar8);
        goto LAB_1079f5c54;
      }
      _objc_release(ppuVar2);
      goto LAB_1079f6afc;
    }
LAB_1079f6b00:
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    ppuVar8 = param_3;
  }
  _objc_retain();
  _objc_retain(param_2);
  ppuVar22 = ppuVar8;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar22 = (undefined **)0x0;
    goto LAB_1079f6d50;
  }
  ppuVar22 = ppuVar8;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar22;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar22);
  ppuVar22 = ppuVar2;
  func_0x00010bfecde0();
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar22 = ppuVar2;
    func_0x00010bf529e0();
    if ((undefined **)0x1 < ppuVar22) goto LAB_1079f6c14;
LAB_1079f6c28:
    ppuVar4 = param_2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar8;
    func_0x00010bfce400(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010bfecde0();
    _objc_release(ppuVar22);
    if (ppuVar3 == (undefined **)0x7fffffffffffffff) {
LAB_1079f6d3c:
      ppuVar22 = (undefined **)0x0;
    }
    else {
      if (0 < (long)ppuVar3) {
        puVar24 = (undefined *)((long)ppuVar3 + 1);
        do {
          ppuVar11 = ppuVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuVar11;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar19;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar19);
          _objc_release(ppuVar11);
          if (ppuVar22 != (undefined **)0x0) goto LAB_1079f6d40;
          puVar24 = puVar24 + -1;
        } while ((undefined *)0x1 < puVar24);
      }
      do {
        ppuVar3 = (undefined **)((long)ppuVar3 + 1);
        ppuVar22 = ppuVar4;
        func_0x00010bf529e0();
        if (ppuVar22 <= ppuVar3) goto LAB_1079f6d3c;
        ppuVar11 = ppuVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuVar11;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar19;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar19);
        _objc_release(ppuVar11);
      } while (ppuVar22 == (undefined **)0x0);
    }
LAB_1079f6d40:
    _objc_release(ppuVar4);
  }
  else {
    if (ppuVar22 == (undefined **)0x7fffffffffffffff) goto LAB_1079f6c28;
LAB_1079f6c14:
    ppuVar22 = ppuVar2;
    func_0x00010c0dfd40(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
LAB_1079f6d50:
  _objc_release(param_2);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar22);
  return;
}



/* Entry: 1079f6d80; end: 1079f6ee3;  */

void FUN_1079f6d80(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar1 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079f6ee4; end: 1079f6fa7; -[SCImpalaSnapInsightsOperaPlaylistPlugin _firstItemIdInMassSnapGroup:groupId:] */

void FUN_1079f6ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c064180(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ea93d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010be36bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079f6fa8; end: 1079f709b; -[SCImpalaSnapInsightsOperaPlaylistPlugin _updateOperaPlaybackState] */

void FUN_1079f6fa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    return;
  }
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(char *)(param_1 + 0x29) != '\x01')) {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d1c0();
  }
  else {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(lVar4,param_2,0,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1079f709c; end: 1079f749b; -[SCImpalaSnapInsightsOperaPlaylistPlugin _prepareViewController:presenter:] */

void FUN_1079f709c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((*(byte *)(param_5 + 0x2a) & 1) == 0) {
    if (*(long *)(param_5 + 0x38) != 0) {
      func_0x00010c2a6740(*(long *)(param_5 + 0x38),param_6,0);
      uVar1 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar1);
      func_0x00010c12c8e0(*(undefined8 *)(param_5 + 0x38));
    }
    if (*(long *)(param_5 + 0x40) != 0) {
      func_0x00010c2a6740(*(long *)(param_5 + 0x40),param_6,0);
      uVar1 = *(undefined8 *)(param_5 + 0x40);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar1);
      func_0x00010c12c8e0(*(undefined8 *)(param_5 + 0x40));
    }
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_5 + 0x48);
    *(undefined8 *)(param_5 + 0x48) = param_8;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_5 + 0x40);
    *(undefined8 *)(param_5 + 0x40) = param_7;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_5 + 0x38);
    *(undefined **)(param_5 + 0x38) = puVar2;
    _objc_release(uVar1);
    func_0x00010bef7700(*(undefined8 *)(param_5 + 0x38),param_6,param_7);
    uVar3 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar3,param_6,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar8 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010bf77e80(param_7,param_6,*(undefined8 *)(param_5 + 0x38));
    lVar4 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7700();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar7,param_6,uVar1);
    _objc_release(uVar1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar8 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c29bf00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar1 = *(undefined8 *)(param_5 + 0x38);
    lVar4 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77e80(uVar1,param_6,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar1);
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar1);
  }
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1079f749c; end: 1079f7737; -[SCImpalaSnapInsightsOperaPlaylistPlugin _commitPreparedViewControllerIfNeeded] */

void FUN_1079f749c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    _objc_retain(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1079f75b0;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = lVar2;
    uStack_40 = uVar3;
    uStack_38 = uVar4;
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    _objc_retain(lVar2);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(lStack_48);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1079f7738; end: 1079f77ab;  */

void FUN_1079f7738(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1079f77ac;
  puStack_30 = &UNK_110842e18;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1079f77ac; end: 1079f77b3;  */

void FUN_1079f77ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1079f77b4; end: 1079f7a1b; -[SCImpalaSnapInsightsOperaPlaylistPlugin didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_1079f77b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_4);
      }
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c075e20();
      if (((int)lVar4 != 0) && (lVar3 != 0)) {
        lVar5 = *(long *)(param_1 + 0x10);
        func_0x00010c101260();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010bf5f0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        _objc_release(lVar5);
        if (lVar3 == lVar6) {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c101260(uVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x0001079f6b54(lVar3,uVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          lVar6 = lVar4;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar6;
          func_0x00010c08fa60();
          _objc_release(lVar6);
          if (lVar5 != 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x10);
            lVar6 = lVar4;
            func_0x00010be36bc0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ddd60(uVar7);
            _objc_release(lVar6);
          }
          _objc_release(lVar4);
        }
      }
      func_0x00010c12db80(*(undefined8 *)(param_1 + 0x10));
      _objc_release(lVar3);
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
    lVar1 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1079f7a1c; end: 1079f7a1f; -[SCImpalaSnapInsightsOperaPlaylistPlugin didCancelDeleteStorySnap] */

void FUN_1079f7a1c(void)

{
  return;
}



/* Entry: 1079f7a20; end: 1079f7a23; -[SCImpalaSnapInsightsOperaPlaylistPlugin didDeleteSnapProStorySnaps:] */

void FUN_1079f7a20(void)

{
  return;
}



/* Entry: 1079f7a24; end: 1079f7a2b; -[SCImpalaSnapInsightsOperaPlaylistPlugin showInsights] */

undefined1 FUN_1079f7a24(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 1079f7a2c; end: 1079f7a33; -[SCImpalaSnapInsightsOperaPlaylistPlugin setShowInsights:] */

void FUN_1079f7a2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 1079f7a34; end: 1079f7a3b; -[SCImpalaSnapInsightsOperaPlaylistPlugin isJoinedPlayback] */

undefined1 FUN_1079f7a34(long param_1)

{
  return *(undefined1 *)(param_1 + 0x69);
}



/* Entry: 1079f7a3c; end: 1079f7a43; -[SCImpalaSnapInsightsOperaPlaylistPlugin setIsJoinedPlayback:] */

void FUN_1079f7a3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x69) = param_3;
  return;
}



/* Entry: 1079f7a44; end: 1079f7a4b; -[SCImpalaSnapInsightsOperaPlaylistPlugin context] */

undefined8 FUN_1079f7a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1079f7a4c; end: 1079f7a7b; -[SCImpalaSnapInsightsOperaPlaylistPlugin setContext:] */

void FUN_1079f7a4c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1079f7a7c; end: 1079f7b1b; -[SCImpalaSnapInsightsOperaPlaylistPlugin .cxx_destruct] */

void FUN_1079f7a7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079f7b1c; end: 1079f7be3; -[SCImpalaSnapInsightsOperaViewControllerWrapper initWithViewController:presenter:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1079f7b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f93c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithViewController_pauseOper_1125f6018,param_3,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112767ad4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112767ad8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079f7be4; end: 1079f7cd3; -[SCImpalaSnapInsightsOperaViewControllerWrapper viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f7be4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1126f93c0;
  puStack_58 = param_1;
  _objc_msgSendSuper2(&puStack_58,PTR_s_viewDidAppear__112684bd0);
  puVar1 = param_1;
  func_0x00010c06d1e0();
  if ((int)puVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112767ad8);
    ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
    puStack_40 = PTR____kCFBooleanTrue_11034ab68;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0(uVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f93c0;
  puStack_b8 = puVar1;
  _objc_msgSendSuper2(&puStack_b8,PTR_s_viewDidDisappear__112684c48);
  puVar2 = puVar1;
  func_0x00010c06d1a0();
  if ((int)puVar2 != 0) {
    uVar3 = *(undefined8 *)(puVar1 + _DAT_112767ad8);
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110ddd998;
    puStack_a0 = PTR____kCFBooleanFalse_11034ab60;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0(uVar3);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + _DAT_112767ad8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + _DAT_112767ad4,0);
  return;
}



/* Entry: 1079f7cd4; end: 1079f7dc3; -[SCImpalaSnapInsightsOperaViewControllerWrapper viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f7cd4(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1126f93c0;
  puStack_58 = param_1;
  _objc_msgSendSuper2(&puStack_58,PTR_s_viewDidDisappear__112684c48);
  puVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)puVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112767ad8);
    ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
    puStack_40 = PTR____kCFBooleanFalse_11034ab60;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0(uVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_112767ad8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_112767ad4,0);
  return;
}



/* Entry: 1079f7dc4; end: 1079f7e03; -[SCImpalaSnapInsightsOperaViewControllerWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f7dc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767ad8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767ad4,0);
  return;
}



/* Entry: 1079f7e04; end: 1079f7e6f; -[SCImpalaSnapInsightsPromoteInterfaceRouter initWithRootViewController:] */

undefined1 * FUN_1079f7e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f93c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1ee700(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079f7e70; end: 1079f7ecf; -[SCImpalaSnapInsightsPromoteInterfaceRouter container] */

void FUN_1079f7e70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c1417c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079f7ed0; end: 1079f7ee7; -[SCImpalaSnapInsightsPromoteInterfaceRouter rootViewController] */

void FUN_1079f7ed0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079f7ee8; end: 1079f7ef3; -[SCImpalaSnapInsightsPromoteInterfaceRouter setRootViewController:] */

void FUN_1079f7ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1079f7ef4; end: 1079f7efb; -[SCImpalaSnapInsightsPromoteInterfaceRouter .cxx_destruct] */

void FUN_1079f7ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079f7efc; end: 1079f889f; -[SCImpalaSnapInsightsV3ViewController initWithUserSession:circumstanceEngine:profileId:snapId:snaps:snapViewerDataCoordinator:operaActionHandler:snapActionHandler:chatPresenter:conversationIdResolver:profilePresenterProvider:payoutsPresenterProvider:snapTokenProvider:snapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:snapchatterObservableRepository:blockedSnapchattersDataFetcher:snapchatterPublicInfoFetcher:arroyoConversationDataUpdateAnnouncer:bitmojiSelfieFetcher:snapProManagedProfilesProvider:composerBlizzardLogger:cofStore:reportPagePresenter:valdiRuntimeProvider:composerNetworkingClient:actionSheetPresenterFactory:alertPresenter:simpleContentFetcher:snapInsightsScopeDelegate:conversationManager:disableThumbnailTapAction:composerPeopleBridgeFriendServices:featureSettingsService:playbackSequence:showSnapPromote:friendsFeedEntryStore:chatReactionServices:deckContainerConverter:contentType:storyReplyMutingService:creatorInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
FUN_1079f7efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             ulong param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined1 param_35,undefined4 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined1 param_40,
             undefined4 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 **ppuStack_1f8;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain();
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_46);
  _objc_retain(param_47);
  puStack_70 = PTR_PTR_1126f93d0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
    ppuStack_1f8 = (undefined8 **)0x0;
  }
  else {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112767ae0,param_3);
    lVar6 = (long)_DAT_112767ae4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767ae8;
    _objc_retain(param_43);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_43;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767aec;
    _objc_retain(param_44);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_44;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767af0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767af0) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767af4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767af4) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767af8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767af8) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767afc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767afc) = uVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112767b00;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b04;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d5cb0;
    _objc_opt_class(PTR_PTR_1126d5cb0);
    uVar4 = param_9;
    _objc_opt_isKindOfClass(param_9,puVar3);
    if ((uVar4 & 1) != 0) {
      _objc_initWeak(auStack_80,puVar1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1079f88a0;
      puStack_90 = &UNK_1109f4868;
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010c1d3520(param_9);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    lVar6 = (long)_DAT_112767b08;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b0c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b10;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b14;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b18;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_14;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b1c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_15;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b20;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_16;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b24;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_17;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b28;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_18;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b2c;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_19;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b30;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_21;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b34;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_20;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b38;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_22;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b3c;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_23;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b40;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_24;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b44;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_25;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b48;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_26;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b4c;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_27;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b50;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_28;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b54;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_32;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b58;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_29;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112767b5c,param_33);
    lVar6 = (long)_DAT_112767b60;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_34;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112767b64) = param_35;
    lVar6 = (long)_DAT_112767b68;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_37;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b6c;
    _objc_retain(param_38);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_38;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b70;
    _objc_retain(param_39);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_39;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112767b74) = param_40;
    lVar6 = (long)_DAT_112767b78;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_30;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b7c;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_31;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b80;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_42;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767b84) = param_45;
    lVar6 = (long)_DAT_112767b88;
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_46;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112767b8c;
    _objc_retain(param_47);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_47;
    _objc_release(uVar2);
    puStack_b0 = PTR_PTR_1126f93d0;
    ppuStack_1f8 = &puStack_b8;
    puStack_b8 = puVar1;
    _objc_msgSendSuper2(ppuStack_1f8,PTR_s_initWithDismissalSwipeDirection__112531540,2,0);
  }
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
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
  return ppuStack_1f8;
}



/* Entry: 1079f88a0; end: 1079f8923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f88a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112767af8);
    *(undefined8 *)(param_1 + _DAT_112767af8) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079f8924; end: 1079f8973; -[SCImpalaSnapInsightsV3ViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f8924(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112767b90));
  puStack_28 = PTR_PTR_1126f93d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1079f8974; end: 1079f94e7; -[SCImpalaSnapInsightsV3ViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f8974(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  
  puStack_80 = PTR_PTR_1126f93d0;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  lVar1 = *(long *)(param_1 + _DAT_112767b50);
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bdce560(param_1);
    lVar2 = param_1;
    func_0x00010bdd6ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + _DAT_112767b94);
    *(long *)(param_1 + _DAT_112767b94) = lVar2;
    _objc_release(uVar22);
    puVar18 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1079f94e8;
    puStack_98 = &UNK_1109f4898;
    puVar3 = PTR_PTR_1126ae720;
    lStack_90 = param_1;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d5ce8;
    _objc_alloc();
    lVar2 = param_1 + _DAT_112767b5c;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0618c0();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b0e40;
    _objc_alloc();
    lVar25 = (long)_DAT_112767ae0;
    lVar2 = param_1 + lVar25;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c05d1a0();
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126b0c98;
    _objc_alloc();
    func_0x00010c0368e0();
    lVar23 = (long)_DAT_112767b68;
    lVar7 = *(long *)(param_1 + lVar23);
    func_0x00010bfb8b80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar7);
    uVar22 = *(undefined8 *)(param_1 + _DAT_112767b14);
    func_0x00010c1170e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_112767b18);
    func_0x00010c0f6b60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b0e48;
    _objc_alloc();
    lVar2 = param_1 + lVar25;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c061900();
    _objc_release(lVar2);
    puVar11 = PTR_PTR_1126ba010;
    _objc_opt_new();
    puVar12 = PTR_PTR_1126b0e70;
    _objc_alloc();
    func_0x00010c03e760();
    puVar13 = PTR_PTR_1126d5cf0;
    _objc_alloc();
    lVar25 = param_1 + lVar25;
    _objc_loadWeakRetained(lVar25);
    func_0x00010c05ce40();
    _objc_release(lVar25);
    puVar14 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
    _objc_opt_class(PTR_PTR_1126cefc8);
    func_0x00010c181960(puVar14);
    _objc_initWeak(auStack_b8,param_1);
    puVar15 = PTR_PTR_1126ae720;
    puStack_e0 = puVar18;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1079f951c;
    puStack_c8 = &UNK_1109f48c8;
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_1079ff51c(lVar1,puVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar25 = *(long *)(param_1 + _DAT_112767b44);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar25 != 0) {
      lVar25 = *(long *)(param_1 + _DAT_112767b48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar25 != 0) {
        puVar16 = PTR_PTR_1126d5cf8;
        _objc_alloc();
        uVar17 = *(undefined8 *)(param_1 + _DAT_112767b58);
        func_0x00010c269d40(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR_PTR_1126d5d20;
        uVar26 = *(undefined8 *)(param_1 + _DAT_112767ae4);
        _objc_retain(uVar26);
        _objc_alloc(puVar18);
        uVar20 = uVar26;
        func_0x000108f27718(uVar26);
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x00010bf162c0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar26;
        func_0x000108f277a0(uVar26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar26);
        uVar26 = uVar19;
        func_0x00010bf162c0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfeff60(puVar18);
        _objc_release(uVar26);
        _objc_release(uVar19);
        _objc_release(uVar21);
        _objc_release(uVar20);
        func_0x000108f27630();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x000107d70788();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20d920(puVar18);
        _objc_release(uVar21);
        _objc_release(uVar20);
        func_0x000108f276a4();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x000107d70788();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ad9e0(puVar18);
        _objc_release(uVar21);
        _objc_release(uVar20);
        uVar19 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010bf1d860();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar19;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = *(undefined8 *)(param_1 + _DAT_112767ae8);
        func_0x00010bf44980();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar26;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c038960();
        lVar23 = (long)_DAT_112767b98;
        uVar24 = *(undefined8 *)(param_1 + lVar23);
        *(undefined **)(param_1 + lVar23) = puVar16;
        _objc_release(uVar24);
        _objc_release(uVar21);
        _objc_release(uVar26);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(puVar18);
        _objc_release(uVar17);
        func_0x00010c203880(*(undefined8 *)(param_1 + lVar23));
        func_0x00010c21f160(*(undefined8 *)(param_1 + lVar23));
        func_0x00010c187fc0(*(undefined8 *)(param_1 + lVar23));
        func_0x00010c1d9e80(*(undefined8 *)(param_1 + lVar23));
        func_0x00010c1cba60(*(undefined8 *)(param_1 + lVar23));
        func_0x00010c167ec0(*(undefined8 *)(param_1 + lVar23));
        func_0x00010c171b20(*(undefined8 *)(param_1 + lVar23));
        func_0x00010c17df40(*(undefined8 *)(param_1 + lVar23));
        puVar18 = PTR_PTR_1126b0e90;
        _objc_alloc(PTR_PTR_1126b0e90);
        uVar20 = *(undefined8 *)(param_1 + _DAT_112767b6c);
        func_0x00010c269d40(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c011c80(puVar18);
        func_0x00010c20fd40(*(undefined8 *)(param_1 + lVar23));
        _objc_release(puVar18);
        _objc_release(uVar20);
        lVar7 = param_1;
        func_0x00010c08bd80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b9720(*(undefined8 *)(param_1 + lVar23));
        _objc_release(lVar7);
        uVar21 = *(undefined8 *)(param_1 + _DAT_112767b78);
        func_0x00010c269d40(uVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar21;
        func_0x00010c0b7620();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c161e00(*(undefined8 *)(param_1 + lVar23));
        _objc_release(uVar20);
        _objc_release(uVar21);
        puVar18 = PTR_PTR_1126d5d00;
        _objc_alloc();
        func_0x00010c061d40();
        uVar20 = *(undefined8 *)(param_1 + _DAT_112767b9c);
        *(undefined **)(param_1 + _DAT_112767b9c) = puVar18;
        _objc_release(uVar20);
        _objc_initWeak(auStack_e8,param_1);
        uVar26 = *(undefined8 *)(param_1 + _DAT_112767b00);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar26;
        func_0x00010c241380();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
        func_0x00010c0b6ba0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x00010c0e0e80();
        _objc_retainAutoreleasedReturnValue();
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0xc2000000;
        pcStack_100 = FUN_1079f955c;
        puStack_f8 = &UNK_1108531d0;
        _objc_copyWeak(auStack_f0,auStack_e8);
        uVar19 = uVar21;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + _DAT_112767b90);
        *(undefined8 *)(param_1 + _DAT_112767b90) = uVar19;
        _objc_release(uVar17);
        _objc_release(uVar21);
        _objc_release(puVar18);
        _objc_release(uVar20);
        _objc_release(uVar26);
        puVar18 = PTR_PTR_1126afcd0;
        _objc_alloc();
        func_0x00010c0601e0();
        uVar20 = *(undefined8 *)(param_1 + _DAT_112767ba0);
        *(undefined **)(param_1 + _DAT_112767ba0) = puVar18;
        _objc_release(uVar20);
        func_0x00010c1c1bc0(puVar14);
        uVar21 = *(undefined8 *)(param_1 + _DAT_112767aec);
        func_0x00010c269d40(uVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar21;
        func_0x00010bf55ba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18a1e0(*(undefined8 *)(param_1 + lVar23));
        _objc_release(uVar20);
        _objc_release(uVar21);
        lVar7 = param_1;
        func_0x00010bec4d20();
        if ((int)lVar7 != 0) {
          uVar19 = *(undefined8 *)(param_1 + _DAT_112767b88);
          func_0x00010c0d4220(uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar19;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar20;
          func_0x00010c272120();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ca740(*(undefined8 *)(param_1 + lVar23));
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar19);
          _objc_copyWeak(auStack_118,auStack_b8);
          func_0x00010c1d3ba0(*(undefined8 *)(param_1 + lVar23));
          _objc_destroyWeak(auStack_118);
        }
        puVar18 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
        _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
        func_0x00010c0402e0();
        func_0x00010c1c8b80();
        func_0x00010bef7700(param_1);
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar18;
        func_0x00010c29bf00(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(puVar16);
        _objc_release(param_1);
        func_0x00010bf77e80(puVar18);
        _objc_release(puVar18);
        _objc_destroyWeak(auStack_f0);
        _objc_destroyWeak(auStack_e8);
      }
      _objc_release(lVar25);
    }
    _objc_release();
    _objc_release(lVar2);
    _objc_release(puVar15);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar22);
    _objc_release(lVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1079f94e8; end: 1079f955b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f94e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112767b50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079f955c; end: 1079f95eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f955c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if ((int)puVar1 != 0) {
      func_0x00010bdce560(param_1);
      lVar3 = (long)_DAT_112767b9c;
      if (*(long *)(param_1 + lVar3) != 0) {
        lVar2 = param_1;
        func_0x00010bdd6ee0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112767afc));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
        _objc_release(lVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079f95ec; end: 1079f9603;  */

void FUN_1079f95ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_1109f4938);
  return;
}



/* Entry: 1079f9604; end: 1079f966b;  */

void FUN_1079f9604(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be61ae0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079f966c; end: 1079f968b; -[SCImpalaSnapInsightsV3ViewController _storyReplyMutingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f966c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767ae4),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dc4858,0,0);
  return;
}



/* Entry: 1079f968c; end: 1079f969b; -[SCImpalaSnapInsightsV3ViewController _muteStoryRepliesFromUserId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f968c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767b88),
             PTR_s_muteRepliesFrom_completionHandle_112612a10);
  return;
}



/* Entry: 1079f969c; end: 1079f9c87; -[SCImpalaSnapInsightsV3ViewController _buildViewModelWithSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f969c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  long lStack_340;
  undefined *puStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  ulong uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_240;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined4 uStack_154;
  ulong uStack_150;
  long lStack_148;
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
  _objc_retain(param_3);
  lVar19 = *(long *)(param_1 + _DAT_112767b40);
  uVar24 = (ulong)_DAT_112767af0;
  uVar21 = *(undefined8 *)(param_1 + uVar24);
  _objc_retain(uVar21);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar19;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar22);
  lVar19 = lVar22;
  func_0x00010bf52a60();
  lStack_148 = param_1;
  if (lVar19 == 0) {
    uVar20 = 0;
  }
  else {
    lVar25 = *plStack_130;
    uStack_150 = uVar24;
    do {
      lVar26 = 0;
      do {
        if (*plStack_130 != lVar25) {
          _objc_enumerationMutation(lVar22);
        }
        uVar20 = *(ulong *)(lStack_138 + lVar26 * 8);
        uVar24 = uVar20;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar24;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        _objc_release(uVar24);
        if ((uVar4 & 1) != 0) {
          _objc_retain(uVar20);
          uVar24 = uStack_150;
          goto LAB_1079f9818;
        }
        lVar26 = lVar26 + 1;
      } while (lVar19 != lVar26);
      lVar19 = lVar22;
      func_0x00010bf52a60();
    } while (lVar19 != 0);
    uVar20 = 0;
    uVar24 = uStack_150;
  }
LAB_1079f9818:
  lVar19 = lStack_148;
  _objc_release(lVar22);
  _objc_release(lVar22);
  _objc_release(uVar21);
  lVar22 = lVar19 + _DAT_112767ae0;
  _objc_loadWeakRetained();
  lVar25 = lVar22;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar20;
  func_0x00010c1164a0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c0720c0();
  uStack_150 = CONCAT44(uStack_150._4_4_,(int)lVar26);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar25);
  _objc_release(lVar22);
  uVar3 = uVar20;
  func_0x00010bfa3500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25ac80();
  if ((int)uVar4 != 0) {
    uVar4 = uVar20;
    func_0x00010c227f80(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a460();
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  func_0x00010c2911c0(uVar20);
  uVar3 = uVar20;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = uVar20;
    func_0x00010c1164a0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e7a0();
    _objc_release(uVar3);
  }
  uVar3 = uVar20;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c237760();
  uStack_154 = (undefined4)uVar4;
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126d5d08;
  _objc_alloc();
  uStack_168 = *(undefined8 *)(lVar19 + uVar24);
  lVar22 = *(long *)(lVar19 + _DAT_112767af8);
  if (lVar22 == 0) {
    lVar22 = *(long *)(lVar19 + _DAT_112767af4);
  }
  puStack_160 = puVar5;
  _objc_retain(param_3);
  _objc_retain(lVar22);
  uVar24 = param_3;
  func_0x00010bf529e0();
  if (uVar24 == 0) {
    dVar27 = 0.0;
  }
  else {
    uVar24 = 0;
    do {
      uVar3 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar6 & 1) != 0) goto LAB_1079f9a24;
      uVar24 = uVar24 + 1;
      uVar3 = param_3;
      func_0x00010bf529e0();
    } while (uVar24 < uVar3);
    uVar24 = 0;
LAB_1079f9a24:
    dVar27 = (double)uVar24;
  }
  _objc_release(lVar22);
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_178 = puVar5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_180 = puVar7;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar24 = uVar20;
  puStack_170 = puVar8;
  func_0x00010bfa3500();
  _objc_retainAutoreleasedReturnValue();
  uStack_150 = uVar24;
  func_0x00010c25ae00();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_188 = puVar5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_190 = puVar9;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_198 = puVar10;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2911c0(uVar20);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_170;
  puVar1 = puStack_178;
  puVar8 = puStack_180;
  puVar7 = puStack_188;
  puVar13 = puStack_160;
  puStack_1c0 = puVar9;
  puStack_1b8 = puVar10;
  puStack_1b0 = puVar11;
  puStack_1a8 = puVar5;
  puStack_1a0 = puVar12;
  func_0x00010c03b080(dVar27);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(puVar7);
  _objc_release(uStack_150);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar1);
  uVar21 = *(undefined8 *)(lStack_148 + _DAT_112767b84);
  FUN_1079f2904();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00(puVar13);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_1079f9c88;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_112767ba4;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if (*(long *)(param_3 + lVar22) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar21 = *(undefined8 *)(param_3 + lVar22);
    *(undefined **)(param_3 + lVar22) = puVar5;
    _objc_release(uVar21);
  }
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  lVar19 = *(long *)(param_3 + (long)_DAT_112767afc);
  _objc_retain(lVar19);
  lVar25 = lVar19;
  lStack_308 = lVar19;
  func_0x00010bf52a60();
  if (lVar25 != 0) {
    lVar26 = *plStack_2f0;
    uStack_310 = param_3;
    do {
      lVar19 = 0;
      do {
        if (*plStack_2f0 != lVar26) {
          _objc_enumerationMutation(lStack_308);
        }
        lVar23 = *(long *)(lStack_2f8 + lVar19 * 8);
        uVar24 = *(ulong *)(param_3 + lVar22);
        lVar14 = lVar23;
        func_0x00010c241220(lVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(lVar14);
        lVar14 = lVar23;
        func_0x00010c078680();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar14;
        func_0x00010bf1f3c0();
        if ((int)lVar15 == 0) {
LAB_1079f9f44:
          _objc_release(lVar14);
        }
        else {
          lVar15 = lVar23;
          func_0x00010c0ccc20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar14);
          if (lVar15 == 0 || (uVar24 & 1) != 0) {
            lVar16 = *(long *)(param_3 + (long)_DAT_112767b00);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar23;
            func_0x00010c241220(lVar23);
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar16;
            func_0x00010c29f100();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar15);
            _objc_release(lVar16);
            if (lVar14 != 0) {
              uVar21 = *(undefined8 *)(param_3 + lVar22);
              lVar15 = lVar23;
              func_0x00010c241220(lVar23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar21);
              _objc_release(lVar15);
              puVar8 = PTR_PTR_1126b0ec8;
              _objc_alloc(PTR_PTR_1126b0ec8);
              lVar15 = lVar14;
              func_0x00010bfb91e0(lVar14);
              lVar16 = lVar14;
              func_0x00010c0edf40(lVar14);
              lVar17 = lVar14;
              func_0x00010bfb8ac0(lVar14);
              lVar18 = lVar14;
              func_0x00010c0edf20(lVar14);
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bf1f680(lVar14);
              func_0x00010c0df7c0(puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c22a980(lVar14);
              func_0x00010c0df7c0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0624a0((double)(lVar16 + lVar15),(double)(lVar18 + lVar17),puVar8);
              func_0x00010c1c77e0(lVar23);
              _objc_release(puVar8);
              param_3 = uStack_310;
              _objc_release(puVar7);
              _objc_release(puVar5);
            }
            goto LAB_1079f9f44;
          }
        }
        lVar19 = lVar19 + 1;
      } while (lVar25 != lVar19);
      lVar25 = lStack_308;
      func_0x00010bf52a60();
    } while (lVar25 != 0);
  }
  lVar22 = lStack_308;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_240) {
    ___stack_chk_fail();
    pcStack_318 = FUN_1079f9fbc;
    puStack_338 = PTR_PTR_1126f93d0;
    lStack_340 = lVar22;
    lStack_330 = lVar19;
    uStack_328 = param_3;
    ppuStack_320 = &puStack_1d0;
    _objc_msgSendSuper2(&lStack_340,PTR_s_viewWillLayoutSubviews_112526958);
    lVar19 = lVar22;
    func_0x00010c29bf00(lVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(lVar22 + _DAT_112767b9c));
    _objc_release(lVar19);
    return;
  }
  return;
}



/* Entry: 1079f9c88; end: 1079f9fbb; -[SCImpalaSnapInsightsV3ViewController _applyMyStoryViewCountsToSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f9c88(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
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
  lVar15 = (long)_DAT_112767ba4;
  if (*(long *)(param_1 + lVar15) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar10);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar11 = *(long *)(param_1 + _DAT_112767afc);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  lStack_148 = lVar11;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_130;
    lStack_150 = param_1;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lStack_148);
        }
        lVar13 = *(long *)(lStack_138 + lVar11 * 8);
        uVar14 = *(ulong *)(param_1 + lVar15);
        lVar3 = lVar13;
        func_0x00010c241220(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(lVar3);
        lVar3 = lVar13;
        func_0x00010c078680();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf1f3c0();
        if ((int)lVar4 == 0) {
LAB_1079f9f44:
          _objc_release(lVar3);
        }
        else {
          lVar4 = lVar13;
          func_0x00010c0ccc20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          if (lVar4 == 0 || (uVar14 & 1) != 0) {
            lVar5 = *(long *)(param_1 + _DAT_112767b00);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar13;
            func_0x00010c241220(lVar13);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar5;
            func_0x00010c29f100();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            _objc_release(lVar5);
            if (lVar3 != 0) {
              uVar10 = *(undefined8 *)(param_1 + lVar15);
              lVar4 = lVar13;
              func_0x00010c241220(lVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar10);
              _objc_release(lVar4);
              puVar6 = PTR_PTR_1126b0ec8;
              _objc_alloc(PTR_PTR_1126b0ec8);
              lVar4 = lVar3;
              func_0x00010bfb91e0(lVar3);
              lVar5 = lVar3;
              func_0x00010c0edf40(lVar3);
              lVar7 = lVar3;
              func_0x00010bfb8ac0(lVar3);
              lVar8 = lVar3;
              func_0x00010c0edf20(lVar3);
              puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bf1f680(lVar3);
              func_0x00010c0df7c0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c22a980(lVar3);
              func_0x00010c0df7c0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0624a0((double)(lVar5 + lVar4),(double)(lVar8 + lVar7),puVar6);
              func_0x00010c1c77e0(lVar13);
              _objc_release(puVar6);
              param_1 = lStack_150;
              _objc_release(puVar9);
              _objc_release(puVar1);
            }
            goto LAB_1079f9f44;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lStack_148;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  lVar15 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1079f9fbc;
  puStack_178 = PTR_PTR_1126f93d0;
  lStack_180 = lVar15;
  lStack_170 = lVar11;
  lStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_180,PTR_s_viewWillLayoutSubviews_112526958);
  lVar11 = lVar15;
  func_0x00010c29bf00(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(lVar15 + _DAT_112767b9c));
  _objc_release(lVar11);
  return;
}



/* Entry: 1079f9fbc; end: 1079fa02b; -[SCImpalaSnapInsightsV3ViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f9fbc(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112767b9c));
  _objc_release(lVar1);
  return;
}



/* Entry: 1079fa02c; end: 1079fa0a3; -[SCImpalaSnapInsightsV3ViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_1079fa02c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 1079fa0a4; end: 1079fa0eb; -[SCImpalaSnapInsightsV3ViewController viewWillAppear:] */

void FUN_1079fa0a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 1079fa0ec; end: 1079fa0f3; -[SCImpalaSnapInsightsV3ViewController prefersStatusBarHidden] */

undefined8 FUN_1079fa0ec(void)

{
  return 0;
}



/* Entry: 1079fa0f4; end: 1079fa0f7; -[SCImpalaSnapInsightsV3ViewController preferredStatusBarStyle] */

undefined8 FUN_1079fa0f4(long param_1)

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



/* Entry: 1079fa0f8; end: 1079fa157; -[SCImpalaSnapInsightsV3ViewController shouldBeginInteractiveDismissal] */

bool FUN_1079fa0f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 1;
}



/* Entry: 1079fa158; end: 1079fa15f; -[SCImpalaSnapInsightsV3ViewController pageViewName] */

undefined8 FUN_1079fa158(void)

{
  return 0xe2;
}



/* Entry: 1079fa160; end: 1079fa21f; -[SCImpalaSnapInsightsV3ViewController _buildValdiImageLoader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1079fa160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d5d10;
  _objc_alloc();
  func_0x00010c0034c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5d18;
  _objc_alloc(PTR_PTR_1126d5d18);
  func_0x00010c01cac0();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x5;
}



/* Entry: 1079fa220; end: 1079fa227; -[SCImpalaSnapInsightsV3ViewController modalPresentationStyle] */

undefined8 FUN_1079fa220(void)

{
  return 5;
}



/* Entry: 1079fa228; end: 1079fa233; -[SCImpalaSnapInsightsV3ViewController defaultProjectNameV2] */

void FUN_1079fa228(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_creators_1125b48c0);
  return;
}



/* Entry: 1079fa234; end: 1079fa243; -[SCImpalaSnapInsightsV3ViewController launchSnapPromote] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079fa234(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767ba8);
}



/* Entry: 1079fa244; end: 1079fa24f; -[SCImpalaSnapInsightsV3ViewController setLaunchSnapPromote:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fa244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079fa250; end: 1079fa567; -[SCImpalaSnapInsightsV3ViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fa250(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767ba8,0);
  _objc_storeStrong(param_1 + _DAT_112767ba4,0);
  _objc_storeStrong(param_1 + _DAT_112767b90,0);
  _objc_storeStrong(param_1 + _DAT_112767b94,0);
  _objc_storeStrong(param_1 + _DAT_112767b00,0);
  _objc_storeStrong(param_1 + _DAT_112767b8c,0);
  _objc_storeStrong(param_1 + _DAT_112767b88,0);
  _objc_storeStrong(param_1 + _DAT_112767b80,0);
  _objc_storeStrong(param_1 + _DAT_112767b70,0);
  _objc_destroyWeak(param_1 + _DAT_112767b5c);
  _objc_storeStrong(param_1 + _DAT_112767b60,0);
  _objc_storeStrong(param_1 + _DAT_112767b58,0);
  _objc_storeStrong(param_1 + _DAT_112767b98,0);
  _objc_storeStrong(param_1 + _DAT_112767b9c,0);
  _objc_storeStrong(param_1 + _DAT_112767aec,0);
  _objc_storeStrong(param_1 + _DAT_112767ae8,0);
  _objc_storeStrong(param_1 + _DAT_112767b7c,0);
  _objc_storeStrong(param_1 + _DAT_112767b78,0);
  _objc_storeStrong(param_1 + _DAT_112767b6c,0);
  _objc_storeStrong(param_1 + _DAT_112767b68,0);
  _objc_storeStrong(param_1 + _DAT_112767ba0,0);
  _objc_storeStrong(param_1 + _DAT_112767b48,0);
  _objc_storeStrong(param_1 + _DAT_112767b44,0);
  _objc_storeStrong(param_1 + _DAT_112767b40,0);
  _objc_storeStrong(param_1 + _DAT_112767b3c,0);
  _objc_storeStrong(param_1 + _DAT_112767b38,0);
  _objc_storeStrong(param_1 + _DAT_112767b30,0);
  _objc_storeStrong(param_1 + _DAT_112767b34,0);
  _objc_storeStrong(param_1 + _DAT_112767b2c,0);
  _objc_storeStrong(param_1 + _DAT_112767b28,0);
  _objc_storeStrong(param_1 + _DAT_112767b24,0);
  _objc_storeStrong(param_1 + _DAT_112767b20,0);
  _objc_storeStrong(param_1 + _DAT_112767b54,0);
  _objc_storeStrong(param_1 + _DAT_112767b1c,0);
  _objc_storeStrong(param_1 + _DAT_112767b50,0);
  _objc_storeStrong(param_1 + _DAT_112767b4c,0);
  _objc_storeStrong(param_1 + _DAT_112767b18,0);
  _objc_storeStrong(param_1 + _DAT_112767b14,0);
  _objc_storeStrong(param_1 + _DAT_112767b10,0);
  _objc_storeStrong(param_1 + _DAT_112767b0c,0);
  _objc_storeStrong(param_1 + _DAT_112767b08,0);
  _objc_storeStrong(param_1 + _DAT_112767b04,0);
  _objc_storeStrong(param_1 + _DAT_112767afc,0);
  _objc_storeStrong(param_1 + _DAT_112767af8,0);
  _objc_storeStrong(param_1 + _DAT_112767af4,0);
  _objc_storeStrong(param_1 + _DAT_112767af0,0);
  _objc_storeStrong(param_1 + _DAT_112767ae4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112767ae0);
  return;
}



/* Entry: 1079fa568; end: 1079fa7cf;  */

void FUN_1079fa568(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain();
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010bf25280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b200();
    _objc_release(ppuVar1);
  }
  puVar2 = PTR_PTR_1126c27c0;
  _objc_alloc();
  ppuVar1 = param_1;
  func_0x00010bf25000(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000108f498a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3f40();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  FUN_107a0478c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010c07f5e0();
  if ((int)ppuVar4 == 0) {
    ppuVar8 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e43098;
  }
  ppuVar5 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_1;
  func_0x00010be36bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010c105860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f5e0(param_1);
  _objc_retain(param_3);
  func_0x00010bf6c880(ppuVar3);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  if (((ulong)ppuVar4 & 1) == 0) {
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 1079fa7d0; end: 1079fa7eb;  */

void FUN_1079fa7d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001079fa7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,PTR____NSArray0__struct_11034ab48);
    return;
  }
  return;
}



/* Entry: 1079fa7ec; end: 1079fa887; -[SCSwipeInteractionUIContainer initWithPresentingViewController:swipeInteractionPresenterDelegate:performHapticFeedbackWhenPresented:] */

undefined1 *
FUN_1079fa7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f93d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x28) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079fa888; end: 1079fa9bb; -[SCSwipeInteractionUIContainer attachUI:] */

void FUN_1079fa888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d5d28;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _objc_opt_isKindOfClass(param_3,puVar1);
  func_0x00010c1c8b80(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126b0ee0;
  _objc_alloc();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf84f40();
  func_0x00010c039540();
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c10eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentWithAnimated_completion__112621618,1,0);
  return;
}



/* Entry: 1079fa9bc; end: 1079faaab; -[SCSwipeInteractionUIContainer detachUI:] */

void FUN_1079fa9bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c06d1a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 == 0) {
      func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84b00();
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_1079faa94;
    }
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_1079faa94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079faaac; end: 1079faafb; -[SCSwipeInteractionUIContainer providedViewControllerWithProvidedViewControllerBlock:] */

void FUN_1079faaac(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079faafc; end: 1079fab13; -[SCSwipeInteractionUIContainer presentingViewController] */

void FUN_1079faafc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079fab14; end: 1079fab4f; -[SCSwipeInteractionUIContainer .cxx_destruct] */

void FUN_1079fab14(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079fab50; end: 1079fabe3; -[SCSwipeInteractiveViewController initWithDismissalSwipeDirection:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1079fab50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f93e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767bc0) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112767bc4),param_4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079fabe4; end: 1079fac17; -[SCSwipeInteractiveViewController initWithCoder:] */

void FUN_1079fabe4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f93e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithCoder__1125dd730);
  return;
}



/* Entry: 1079fac18; end: 1079fac27; -[SCSwipeInteractiveViewController dismissalSwipeDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079fac18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767bc0);
}



/* Entry: 1079fac28; end: 1079fac37; -[SCSwipeInteractiveViewController setDismissalSwipeDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fac28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112767bc0) = param_3;
  return;
}



/* Entry: 1079fac38; end: 1079fac57; -[SCSwipeInteractiveViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fac38(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112767bc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079fac58; end: 1079fac6b; -[SCSwipeInteractiveViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fac58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112767bc4,param_3);
  return;
}



/* Entry: 1079fac6c; end: 1079fac7b; -[SCSwipeInteractiveViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fac6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112767bc4);
  return;
}



/* Entry: 1079fac7c; end: 1079fad0f; -[SCSwipeInteractiveViewControllerWrapper initWithContentViewController:dismissalSwipeDirection:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1079fac7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f93e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithDismissalSwipeDirection__112531540,param_4,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112767bcc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079fad10; end: 1079fae4f; -[SCSwipeInteractiveViewControllerWrapper viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fad10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f93e8;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  lVar3 = (long)_DAT_112767bcc;
  func_0x00010bef7700(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(uVar2);
  func_0x00010bf77e80(*(undefined8 *)(param_5 + lVar3));
  return;
}



/* Entry: 1079fae50; end: 1079faeab; -[SCSwipeInteractiveViewControllerWrapper viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fae50(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010bf17b00(*(undefined8 *)(param_1 + _DAT_112767bcc));
  return;
}



/* Entry: 1079faeac; end: 1079faefb; -[SCSwipeInteractiveViewControllerWrapper viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079faeac(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf941a0(*(undefined8 *)(param_1 + _DAT_112767bcc));
  return;
}



/* Entry: 1079faefc; end: 1079faf57; -[SCSwipeInteractiveViewControllerWrapper viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079faefc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf17b00(*(undefined8 *)(param_1 + _DAT_112767bcc));
  return;
}



/* Entry: 1079faf58; end: 1079fafa7; -[SCSwipeInteractiveViewControllerWrapper viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079faf58(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010bf941a0(*(undefined8 *)(param_1 + _DAT_112767bcc));
  return;
}



/* Entry: 1079fafa8; end: 1079fafb7; -[SCSwipeInteractiveViewControllerWrapper preferredStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fafa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767bcc),PTR_s_preferredStatusBarStyle_11261f5d0);
  return;
}



/* Entry: 1079fafb8; end: 1079fafc7; -[SCSwipeInteractiveViewControllerWrapper prefersStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fafb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767bcc),PTR_s_prefersStatusBarHidden_11261f658);
  return;
}



/* Entry: 1079fafc8; end: 1079fafd7; -[SCSwipeInteractiveViewControllerWrapper supportedInterfaceOrientations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fafc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2631d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767bcc),
             PTR_s_supportedInterfaceOrientations_112676698);
  return;
}



/* Entry: 1079fafd8; end: 1079fafe7; -[SCSwipeInteractiveViewControllerWrapper shouldAutorotate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fafd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767bcc),PTR_s_shouldAutorotate_112669270);
  return;
}



/* Entry: 1079fafe8; end: 1079fb047; -[SCSwipeInteractiveViewControllerWrapper backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fafe8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112767bcc;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_backgroundExitBehavior_1125a2980);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf9b840(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf13f60(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079fb048; end: 1079fb067; -[SCSwipeInteractiveViewControllerWrapper attachedUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fb048(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112767bd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079fb068; end: 1079fb07b; -[SCSwipeInteractiveViewControllerWrapper setAttachedUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fb068(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112767bd0,param_3);
  return;
}



/* Entry: 1079fb07c; end: 1079fb08b; -[SCSwipeInteractiveViewControllerWrapper contentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079fb07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767bcc);
}



/* Entry: 1079fb08c; end: 1079fb0c7; -[SCSwipeInteractiveViewControllerWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fb08c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767bcc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112767bd0);
  return;
}



/* Entry: 1079fb0c8; end: 1079fb227; -[SCComposerPeopleBridgeUserInfoServiceProvider provide] */

void FUN_1079fb0c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1079fb228;
  puStack_68 = &UNK_1109f4a18;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5d30;
  _objc_alloc(PTR_PTR_1126d5d30);
  func_0x00010c007a60();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079fb228; end: 1079fb2a7;  */

void FUN_1079fb228(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1079fb2a8; end: 1079fb573; -[SCComposerPeopleBridgeUserInfoServiceProvider _makeUserInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fb2a8(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d5d38;
  _objc_alloc();
  lVar24 = (long)_DAT_112767bd4;
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112767bd8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf534e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112767bdc;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112767be0;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c15afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf1b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112767be4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar18 = lVar24;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112767be8;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112767bec;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112767bf0;
  _objc_loadWeakRetained();
  lVar23 = param_1;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7980(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,lVar18,
                      lVar20,lVar22,lVar23);
  _objc_release(lVar23);
  _objc_release(param_1);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar24);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


