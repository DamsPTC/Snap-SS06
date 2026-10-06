/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a46ad8; end: 107a46adb; -[SCLongformShowOperaPlugin setExtraInfo:] */

void FUN_107a46ad8(void)

{
  return;
}



/* Entry: 107a46adc; end: 107a46b2b; -[SCLongformShowOperaPlugin addEventListenersWithEventAnnouncing:] */

void FUN_107a46adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c197680(uVar1,param_2,param_3);
  func_0x00010c197680(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a46b2c; end: 107a46b7b; -[SCLongformShowOperaPlugin setPlaylistItemController:] */

void FUN_107a46b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c1ddde0(uVar1,param_2,param_3);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a46b7c; end: 107a46b7f; -[SCLongformShowOperaPlugin extraPropertiesProvider] */

void FUN_107a46b7c(void)

{
  return;
}



/* Entry: 107a46b80; end: 107a46c0b; -[SCLongformShowOperaPlugin setOperaControlling:] */

void FUN_107a46b80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  lVar1 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c08f5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ebe0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a46c0c; end: 107a46e4b; -[SCLongformShowOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107a46c0c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR_PTR_1126c9a80;
    _objc_opt_class(PTR_PTR_1126c9a80);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar1 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      func_0x00010bf9ea80(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(puVar4);
      _objc_retain(puVar3);
      func_0x00010bf9ea80(uVar7);
      puVar5 = puVar3;
      func_0x00010bf51e00(puVar3);
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      (**(code **)(param_6 + 0x10))(param_6,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_107a46e08;
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,0,0);
LAB_107a46e08:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a46e4c; end: 107a46ef3;  */

void FUN_107a46e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bef7f60(uVar1);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a46ef4; end: 107a46efb; -[SCLongformShowOperaPlugin longformShowSession] */

undefined8 FUN_107a46ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a46efc; end: 107a46f03; -[SCLongformShowOperaPlugin operaDataSource] */

undefined8 FUN_107a46efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a46f04; end: 107a46f4b; -[SCLongformShowOperaPlugin .cxx_destruct] */

void FUN_107a46f04(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a46f4c; end: 107a46f57; +[SCLongformShowOperaSession announcerIdentifier] */

undefined ** FUN_107a46f4c(void)

{
  return &PTR____CFConstantStringClassReference_110eaa618;
}



/* Entry: 107a46f58; end: 107a46f5f; -[SCLongformShowOperaSession addListener:] */

void FUN_107a46f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a46f60; end: 107a46f67; -[SCLongformShowOperaSession removeListener:] */

void FUN_107a46f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a46f68; end: 107a477f7; -[SCLongformShowOperaSession initWithUserSession:storySessionId:viewLocation:readReceiptCoordinator:bitmojiImageFetcher:notificationsPermissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:circumstanceEngine:legacyStoriesTooltipsService:discoverBlizzardLogger:lazyDiscoverFeedEventsController:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:lazyDiscoverFeedDataFetcher:grapheneRegistry:offPlatformLinkGenerationService:grapheneMetricsEmitter:deeplinkSendToScopeExposer:sendToScopeExposer:sendToScopeLauncher:sendToScopeServices:imageDownloader:lazyUserTrackedLogger:boostCoordinator:subscriptionWorkflowStarter:interactionHistoryManager:premiumStoryShareSender:premiumStoryConversationResolver:offPlatformShareServices:shareNotificationService:businessProfileScopeExposer:triggeringSection:storiesConfigProvider:] */

undefined8 *
FUN_107a46f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,long param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_37);
  puStack_70 = PTR_PTR_1126f9760;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    lVar4 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_14;
      func_0x00010c269d40(param_14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980(puVar1);
      _objc_release(lVar4);
    }
    puVar1[10] = 0;
    puVar1[0xe] = 0;
    _objc_retain(param_6);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ceec0;
    _objc_alloc();
    func_0x00010c055000();
    uVar2 = puVar1[0x45];
    puVar1[0x45] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x22,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_34;
    _objc_release(uVar2);
    uVar2 = param_33;
    func_0x00010bfa2a40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x2d];
    puVar1[0x2d] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_21);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_25;
    _objc_release(uVar2);
    puVar1[0x14] = param_5;
    _objc_retain(param_26);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_28;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x32];
    puVar1[0x32] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_35;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0x35];
    puVar1[0x35] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_14;
    _objc_release(uVar2);
    puVar1[0x15] = param_36;
    uVar2 = param_37;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c25a560();
    *(char *)(puVar1 + 0x3e) = (char)uVar5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x40];
    puVar1[0x40] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x41];
    puVar1[0x41] = puVar3;
    _objc_release(uVar2);
    puVar1[0x42] = 0;
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_37);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a477f8; end: 107a47873;  */

void FUN_107a477f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x110;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x000108f5431c();
    func_0x00010c0df6e0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a47874; end: 107a478eb; -[SCLongformShowOperaSession setEventAnnouncing:] */

void FUN_107a47874(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a478ec; end: 107a4795f; -[SCLongformShowOperaSession setOperaControlling:] */

void FUN_107a478ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_storeWeak(param_1 + 0x298,param_3);
  func_0x00010bec7f60(param_1);
  lVar1 = param_1;
  func_0x00010c0ea860();
  if (lVar1 == 1) {
    *(undefined1 *)(param_1 + 0x120) = 0;
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdbc20();
  *(byte *)(param_1 + 0x120) = (byte)uVar3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a47960; end: 107a47967; -[SCLongformShowOperaSession userDidTakeScreenshot] */

void FUN_107a47960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logScreenshot_112609550);
  return;
}



/* Entry: 107a47968; end: 107a479a7; -[SCLongformShowOperaSession _teardown] */

void FUN_107a47968(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a479a8; end: 107a47eab; -[SCLongformShowOperaSession registeredEventsForOperaSession] */

void FUN_107a479a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *in_x4;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined1 auStack_3b8 [8];
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [8];
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined1 auStack_340 [8];
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined **ppuStack_308;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6160;
  func_0x00010c277180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6160;
  puStack_1b0 = puVar1;
  puStack_1a8 = puVar1;
  func_0x00010bf3d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9400;
  puStack_1b8 = puVar2;
  puStack_1a0 = puVar2;
  func_0x00010c15b3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9400;
  puStack_1c0 = puVar1;
  puStack_198 = puVar1;
  func_0x00010c157400();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9400;
  puStack_1c8 = puVar2;
  puStack_190 = puVar2;
  func_0x00010c269700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_180 = &PTR____CFConstantStringClassReference_110eb0218;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110e50dd8;
  puVar2 = PTR_PTR_1126b2330;
  puStack_1d0 = puVar1;
  puStack_188 = puVar1;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_1d8 = puVar2;
  puStack_170 = puVar2;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_1e0 = puVar1;
  puStack_168 = puVar1;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_1e8 = puVar2;
  puStack_160 = puVar2;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_1f0 = puVar1;
  puStack_158 = puVar1;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9460;
  puStack_1f8 = puVar2;
  puStack_150 = puVar2;
  func_0x00010c29ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_200 = puVar1;
  puStack_148 = puVar1;
  func_0x00010bf7a500();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2338;
  puStack_208 = puVar2;
  puStack_140 = puVar2;
  func_0x00010c23c600();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ebd138;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ebd178;
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_210 = puVar1;
  puStack_138 = puVar1;
  func_0x00010c22d420();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2ea8;
  puStack_218 = puVar2;
  puStack_120 = puVar2;
  func_0x00010c22d440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_220 = puVar1;
  puStack_118 = puVar1;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2ea8;
  puStack_228 = puVar2;
  puStack_110 = puVar2;
  func_0x00010c0b4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_230 = puVar1;
  puStack_108 = puVar1;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2ea8;
  puStack_238 = puVar2;
  puStack_100 = puVar2;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_240 = puVar1;
  puStack_f8 = puVar1;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  puStack_248 = puVar2;
  puStack_f0 = puVar2;
  func_0x00010c0dc460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_250 = puVar1;
  puStack_e8 = puVar1;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  puStack_258 = puVar2;
  puStack_e0 = puVar2;
  func_0x00010bfdffe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_d8 = puVar1;
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d30;
  puStack_d0 = puVar2;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2d30;
  puStack_c8 = puVar3;
  func_0x00010bf52060();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ebeb98;
  puVar5 = PTR_PTR_1126c9c10;
  puStack_c0 = puVar4;
  func_0x00010bf3de20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2ce8;
  puStack_b0 = puVar5;
  func_0x00010c25fe20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110eb0258;
  puVar7 = PTR_PTR_1126b2638;
  puStack_a8 = puVar6;
  func_0x00010bf7a540();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2638;
  puStack_98 = puVar7;
  func_0x00010bf7a560();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9460;
  puStack_90 = puVar8;
  func_0x00010c269c80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9460;
  puStack_88 = puVar9;
  func_0x00010c269c60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ebebb8;
  ppuVar16 = &puStack_1a8;
  uVar18 = 0x27;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = puVar11;
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_258);
  _objc_release(puStack_250);
  _objc_release(puStack_248);
  _objc_release(puStack_240);
  _objc_release(puStack_238);
  _objc_release(puStack_230);
  _objc_release(puStack_228);
  _objc_release(puStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  _objc_release(puStack_208);
  _objc_release(puStack_200);
  _objc_release(puStack_1f8);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  puVar11 = puStack_1b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_260);
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_107a47eac;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = puVar8;
  puStack_2b8 = puVar7;
  puStack_2b0 = puVar6;
  puStack_2a8 = puVar5;
  puStack_2a0 = puVar4;
  puStack_298 = puVar2;
  puStack_290 = puVar1;
  puStack_288 = puVar3;
  puStack_280 = puVar10;
  puStack_278 = puVar9;
  puStack_270 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar16);
  _objc_retain(uVar18);
  _objc_retain(in_x4);
  puVar1 = PTR_PTR_1126b2340;
  uVar13 = uVar18;
  func_0x00010c118b40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077200();
  _objc_release(uVar13);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010bf17ae0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar16;
  func_0x00010c0720c0();
  if ((int)ppuVar12 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf96940(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar16;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)ppuVar12 != 0) goto LAB_107a47fa4;
    ppuVar12 = ppuVar16;
    func_0x00010c0720c0();
    if ((int)ppuVar12 == 0) {
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar16;
      func_0x00010c0720c0();
      puVar2 = PTR_PTR_1126b2340;
      if (((ulong)ppuVar12 & 1) == 0) goto LAB_107a48344;
      uVar13 = uVar18;
      func_0x00010c118b40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771c0();
      _objc_release(uVar13);
      _objc_release(puVar3);
      if ((int)puVar2 != 0) {
        func_0x00010be501a0(puVar11);
      }
    }
    else {
      puVar3 = in_x4;
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010bee37a0(puVar11);
LAB_107a48344:
      _objc_release(puVar3);
    }
  }
  else {
    _objc_release(puVar2);
LAB_107a47fa4:
    func_0x00010be09980(puVar11);
  }
  if (((ulong)puVar1 & 1) == 0) {
    uVar20 = *(undefined8 *)(puVar11 + 0x1d8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar20;
    func_0x00010bf1f3c0();
    _objc_release(uVar20);
    if ((int)uVar13 != 0) {
      func_0x00010bebfde0(puVar11);
    }
    goto LAB_107a48754;
  }
  ppuVar12 = ppuVar16;
  FUN_107b27f14(ppuVar16,uVar18,in_x4);
  if (((ulong)ppuVar12 & 1) != 0) goto LAB_107a48754;
  puVar1 = PTR_PTR_1126b6160;
  func_0x00010bf3d9e0(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar16;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar12 == 0) {
    puVar1 = PTR_PTR_1126b6160;
    func_0x00010c277180(PTR_PTR_1126b6160);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar16;
    func_0x00010c0720c0();
    if ((int)ppuVar12 == 0) {
      puVar2 = PTR_PTR_1126b2d30;
      func_0x00010bfdffe0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar16;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((int)ppuVar12 == 0) {
        puVar1 = PTR_PTR_1126c9400;
        func_0x00010c15b3c0(PTR_PTR_1126c9400);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar16;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)ppuVar12 == 0) {
          puVar1 = PTR_PTR_1126b2d30;
          func_0x00010c15c9e0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar16;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)ppuVar12 == 0) {
            puVar1 = PTR_PTR_1126b2d30;
            func_0x00010bf52060(PTR_PTR_1126b2d30);
            ppuVar12 = ppuVar16;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            if ((int)ppuVar12 == 0) {
              puVar1 = PTR_PTR_1126b2ea8;
              func_0x00010c268600(PTR_PTR_1126b2ea8);
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar16;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((int)ppuVar12 == 0) {
                puVar1 = PTR_PTR_1126b2ea8;
                func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = ppuVar16;
                func_0x00010c0720c0();
                if ((int)ppuVar12 == 0) {
                  puVar2 = PTR_PTR_1126b2ea8;
                  func_0x00010c235940(PTR_PTR_1126b2ea8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar12 = ppuVar16;
                  func_0x00010c0720c0();
                  _objc_release(puVar2);
                  _objc_release(puVar1);
                  if ((int)ppuVar12 != 0) goto LAB_107a48940;
                  puVar1 = PTR_PTR_1126b2d30;
                  func_0x00010bf940a0(PTR_PTR_1126b2d30);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar12 = ppuVar16;
                  func_0x00010c0720c0();
                  _objc_release(puVar1);
                  if ((int)ppuVar12 == 0) {
                    puVar1 = PTR_PTR_1126c9400;
                    func_0x00010c157400(PTR_PTR_1126c9400);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar12 = ppuVar16;
                    func_0x00010c0720c0();
                    if ((int)ppuVar12 == 0) {
                      puVar2 = PTR_PTR_1126c9400;
                      func_0x00010c269700(PTR_PTR_1126c9400);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar12 = ppuVar16;
                      func_0x00010c0720c0();
                      _objc_release(puVar2);
                      _objc_release(puVar1);
                      if ((int)ppuVar12 == 0) {
                        ppuVar12 = ppuVar16;
                        func_0x00010c0720c0();
                        if (((ulong)ppuVar12 & 1) == 0) {
                          puVar1 = PTR_PTR_1126b2d30;
                          func_0x00010c25fd00(PTR_PTR_1126b2d30);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar12 = ppuVar16;
                          func_0x00010c0720c0();
                          if ((int)ppuVar12 == 0) {
                            puVar2 = PTR_PTR_1126b2ce8;
                            func_0x00010c25fe20(PTR_PTR_1126b2ce8);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar12 = ppuVar16;
                            func_0x00010c0720c0();
                            _objc_release(puVar2);
                            _objc_release(puVar1);
                            if ((int)ppuVar12 == 0) {
                              ppuVar12 = ppuVar16;
                              func_0x00010c0720c0();
                              if ((int)ppuVar12 == 0) {
                                puVar1 = PTR_PTR_1126b2d30;
                                func_0x00010bfa1100(PTR_PTR_1126b2d30);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar12 = ppuVar16;
                                func_0x00010c0720c0();
                                _objc_release(puVar1);
                                if ((int)ppuVar12 == 0) {
                                  puVar1 = PTR_PTR_1126b2d30;
                                  func_0x00010c0dc460(PTR_PTR_1126b2d30);
                                  _objc_retainAutoreleasedReturnValue();
                                  ppuVar12 = ppuVar16;
                                  func_0x00010c0720c0();
                                  if (((ulong)ppuVar12 & 1) == 0) {
                                    ppuVar12 = ppuVar16;
                                    func_0x00010c0720c0();
                                    _objc_release(puVar1);
                                    if (((ulong)ppuVar12 & 1) == 0) goto LAB_107a481e8;
                                  }
                                  else {
                                    _objc_release(puVar1);
                                  }
                                  _objc_initWeak(auStack_2f8,puVar11);
                                  puVar1 = puVar11;
                                  func_0x00010be5aec0();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar13 = 0;
                                  func_0x0001000819a8(0,0);
                                  _objc_retainAutoreleasedReturnValue();
                                  puStack_3f0 = PTR___NSConcreteStackBlock_11034bd00;
                                  uStack_3e8 = 0xc2000000;
                                  uStack_3e0 = 0x107a49068;
                                  puStack_3d8 = &UNK_110850cf8;
                                  _objc_copyWeak(auStack_3b8,auStack_2f8);
                                  _objc_retain(uVar18);
                                  uStack_3d0 = uVar18;
                                  _objc_retain(in_x4);
                                  puStack_3c8 = in_x4;
                                  puStack_3c0 = puVar1;
                                  _objc_retain(puVar1);
                                  func_0x00010007380c(uVar13,&puStack_3f0);
                                  _objc_release(uVar13);
                                  _objc_release(puStack_3c0);
                                  _objc_release(puStack_3c8);
                                  _objc_release(uStack_3d0);
                                  _objc_release(puVar1);
                                  _objc_destroyWeak(auStack_3b8);
                                  _objc_destroyWeak(auStack_2f8);
                                }
                                else {
                                  _objc_initWeak(auStack_2f8,puVar11);
                                  uVar13 = 0;
                                  func_0x0001000819a8(0,0);
                                  _objc_retainAutoreleasedReturnValue();
                                  puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
                                  uStack_3a8 = 0xc2000000;
                                  uStack_3a0 = 0x107a49034;
                                  puStack_398 = &UNK_110848218;
                                  _objc_copyWeak(auStack_380,auStack_2f8);
                                  _objc_retain(uVar18);
                                  uStack_390 = uVar18;
                                  _objc_retain(in_x4);
                                  puStack_388 = in_x4;
                                  func_0x00010007380c(uVar13,&puStack_3b0);
                                  _objc_release(uVar13);
                                  _objc_release(puStack_388);
                                  _objc_release(uStack_390);
                                  _objc_destroyWeak(auStack_380);
                                  _objc_destroyWeak(auStack_2f8);
                                }
                              }
                              else {
                                func_0x00010be27500(puVar11);
                              }
                              goto LAB_107a481e8;
                            }
                          }
                          else {
                            _objc_release(puVar1);
                          }
                        }
                        _objc_initWeak(auStack_2f8,puVar11);
                        puVar1 = puVar11;
                        func_0x00010be5aec0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar13 = 0;
                        func_0x0001000819a8(0,0);
                        _objc_retainAutoreleasedReturnValue();
                        puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
                        uStack_370 = 0xc2000000;
                        uStack_368 = 0x107a48ffc;
                        puStack_360 = &UNK_110850cf8;
                        _objc_copyWeak(auStack_340,auStack_2f8);
                        _objc_retain(uVar18);
                        uStack_358 = uVar18;
                        _objc_retain(in_x4);
                        puStack_350 = in_x4;
                        puStack_348 = puVar1;
                        _objc_retain(puVar1);
                        func_0x00010007380c(uVar13,&puStack_378);
                        _objc_release(uVar13);
                        _objc_release(puStack_348);
                        _objc_release(puStack_350);
                        _objc_release(uStack_358);
                        _objc_release(puVar1);
                        _objc_destroyWeak(auStack_340);
                        _objc_destroyWeak(auStack_2f8);
                        goto LAB_107a481e8;
                      }
                    }
                    else {
                      _objc_release(puVar1);
                    }
                    _objc_initWeak(auStack_2f8,puVar11);
                    puVar1 = puVar11;
                    func_0x00010be5aec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = 0;
                    func_0x0001000819a8(0,0);
                    _objc_retainAutoreleasedReturnValue();
                    puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_330 = 0xc2000000;
                    pcStack_328 = FUN_107a48fc4;
                    puStack_320 = &UNK_110850cf8;
                    _objc_copyWeak(auStack_300,auStack_2f8);
                    puStack_318 = puVar1;
                    _objc_retain(in_x4);
                    puStack_310 = in_x4;
                    _objc_retain(ppuVar16);
                    ppuStack_308 = ppuVar16;
                    _objc_retain(puVar1);
                    func_0x00010007380c(uVar13,&puStack_338);
                    _objc_release(uVar13);
                    _objc_release(ppuStack_308);
                    _objc_release(puStack_310);
                    _objc_release(puStack_318);
                    _objc_release(puVar1);
                    _objc_destroyWeak(auStack_300);
                    _objc_destroyWeak(auStack_2f8);
                    goto LAB_107a481e8;
                  }
                  puVar1 = puVar11 + 0x298;
                  _objc_loadWeakRetained(puVar1);
                  puVar2 = puVar1;
                  func_0x00010c2bf380();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  _objc_release(puVar1);
LAB_107a48940:
                  puVar1 = puVar11 + 0x298;
                  _objc_loadWeakRetained(puVar1);
                  puVar2 = puVar1;
                  func_0x00010c2bf380();
                  _objc_retainAutoreleasedReturnValue();
                }
                func_0x00010c2bf1c0();
                goto LAB_107a48054;
              }
              puVar1 = puVar11 + 0x110;
              _objc_loadWeakRetained();
              puVar2 = puVar1;
              func_0x000108faa964();
              _objc_release(puVar1);
              if ((int)puVar2 != 0) {
                func_0x00010be7e4e0(puVar11);
              }
            }
            else {
              func_0x00010be27960(puVar11);
            }
            goto LAB_107a481e8;
          }
        }
        else {
          func_0x00010be09da0(puVar11);
        }
        func_0x00010bea0240(puVar11);
        goto LAB_107a481e8;
      }
    }
    else {
      _objc_release(puVar1);
    }
    func_0x00010be04de0(puVar11);
  }
  else {
    puVar1 = puVar11 + 0x298;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84d40(puVar2);
    _objc_release(puVar3);
LAB_107a48054:
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
LAB_107a481e8:
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c29ae40(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar16;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar12 == 0) {
    ppuVar12 = ppuVar16;
    func_0x00010c0720c0();
    if ((int)ppuVar12 == 0) {
      ppuVar12 = ppuVar16;
      func_0x00010c0720c0();
      if ((int)ppuVar12 == 0) {
        puVar1 = PTR_PTR_1126b2338;
        func_0x00010c23c600(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar16;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)ppuVar12 == 0) {
          puVar1 = PTR_PTR_1126b2330;
          func_0x00010c0e9c40(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar16;
          func_0x00010c0720c0();
          if ((int)ppuVar12 == 0) {
            puVar2 = PTR_PTR_1126b2330;
            func_0x00010c0e9cc0(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar16;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            _objc_release(puVar1);
            if ((int)ppuVar12 == 0) {
              puVar1 = PTR_PTR_1126b2330;
              func_0x00010bf3df00(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar16;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              puVar1 = PTR_PTR_1126b2340;
              if ((int)ppuVar12 == 0) {
                puVar1 = PTR_PTR_1126b2330;
                func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = ppuVar16;
                func_0x00010c0720c0();
                _objc_release(puVar1);
                if ((int)ppuVar12 == 0) {
                  puVar1 = PTR_PTR_1126b2638;
                  func_0x00010bf7a500(PTR_PTR_1126b2638);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar12 = ppuVar16;
                  func_0x00010c0720c0();
                  _objc_release(puVar1);
                  if ((int)ppuVar12 != 0) {
                    lVar17 = *(long *)(puVar11 + 0x30);
                    func_0x00010c245680();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = *(undefined8 *)(puVar11 + 0x38);
                    func_0x00010bfe5ec0(uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    lVar15 = lVar17;
                    FUN_107a539dc(lVar17,uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar13);
                    _objc_release(lVar17);
                    lVar17 = lVar15;
                    func_0x00010c08fa60();
                    if (lVar17 != 0) {
                      puVar1 = puVar11 + 0x2a0;
                      _objc_loadWeakRetained(puVar1);
                      func_0x00010c101400();
                      _objc_release(puVar1);
                    }
                    _objc_release(lVar15);
                  }
                }
                else {
                  puVar11[0x88] = 1;
                }
              }
              else {
                uVar13 = uVar18;
                func_0x00010c118b40(uVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c076c60();
                _objc_release(uVar13);
                if ((int)puVar1 != 0) {
                  uVar13 = *(undefined8 *)(puVar11 + 0x228);
                  func_0x00010c29d360(uVar13);
                  func_0x000108534a80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000107d04cb0();
                  _objc_release(uVar13);
                }
                puVar11[0x88] = 0;
              }
              goto LAB_107a48540;
            }
          }
          else {
            _objc_release(puVar1);
          }
          func_0x00010bebfdc0(puVar11);
          puVar11[0x218] = 0;
        }
        else if (*(long *)(puVar11 + 0x18) != 0) {
          func_0x00010be09980(puVar11);
        }
      }
      else {
        puVar19 = (undefined8 *)(puVar11 + 0x18);
        uVar13 = *puVar19;
        func_0x00010bf51e00();
        uVar20 = *(undefined8 *)(puVar11 + 0x38);
        *(undefined8 *)(puVar11 + 0x38) = uVar13;
        _objc_release(uVar20);
        uVar13 = *puVar19;
        *puVar19 = 0;
        _objc_release(uVar13);
        func_0x00010bebfdc0(puVar11);
      }
    }
    else {
      uVar13 = *(undefined8 *)(puVar11 + 0x38);
      func_0x00010bf51e00();
      uVar20 = *(undefined8 *)(puVar11 + 0x18);
      *(undefined8 *)(puVar11 + 0x18) = uVar13;
      _objc_release(uVar20);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    puVar1 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0b4ca0();
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(puVar1);
      uVar13 = *(undefined8 *)(puVar11 + 0x90);
      *(undefined **)(puVar11 + 0x90) = puVar1;
      _objc_release(uVar13);
    }
    ppuVar14 = (undefined **)PTR_PTR_1126c9310;
    func_0x00010bf8c9a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar12 = ppuVar14;
    }
    _objc_retain(ppuVar12);
    uVar13 = *(undefined8 *)(puVar11 + 0x98);
    *(undefined ***)(puVar11 + 0x98) = ppuVar12;
    _objc_release(uVar13);
    _objc_release(ppuVar14);
    func_0x00010be2bd20(puVar11);
    _objc_release(puVar1);
  }
LAB_107a48540:
  puVar1 = PTR_PTR_1126c9c10;
  func_0x00010bf3de20(PTR_PTR_1126c9c10);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar16;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar12 != 0) {
    uVar13 = *(undefined8 *)(puVar11 + 0x118);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6c40();
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)(puVar11 + 0x118);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa8a0();
    _objc_release(uVar13);
    puVar1 = puVar11 + 0x298;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c08f5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ebe0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar13 = uVar18;
    func_0x00010be36bc0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedfe40(puVar11);
    _objc_release(uVar13);
  }
  lVar15 = *(long *)(puVar11 + 0x30);
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 != 0) {
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010bf7a540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2638;
    puStack_2f0 = puVar1;
    func_0x00010bf7a560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9460;
    puStack_2e8 = puVar2;
    func_0x00010c269c80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9460;
    puStack_2e0 = puVar3;
    func_0x00010c269c60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2d8 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf4b900();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar15);
    if ((int)puVar6 != 0) {
      uVar20 = *(undefined8 *)(puVar11 + 400);
      uVar13 = *(undefined8 *)(puVar11 + 0x30);
      func_0x00010c280580(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar20);
      _objc_release(uVar13);
    }
  }
  ppuVar12 = ppuVar16;
  func_0x00010c0720c0();
  if ((int)ppuVar12 != 0) {
    puVar11[0x218] = 1;
  }
  func_0x00010be14fc0(puVar11);
LAB_107a48754:
  _objc_release(in_x4);
  _objc_release(uVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_2f8);
    __Unwind_Resume();
    ppuVar16 = ppuVar16 + 7;
    _objc_loadWeakRetained(ppuVar16);
    func_0x00010be592e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar16);
    return;
  }
  return;
}



/* Entry: 107a47eac; end: 107a48fc3; -[SCLongformShowOperaSession operaViewDidSendEvent:page:params:] */

void FUN_107a47eac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2340;
  uVar6 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077200();
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010bf17ae0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    puVar5 = PTR_PTR_1126b2330;
    func_0x00010bf96940(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar3);
    if ((int)uVar4 != 0) goto LAB_107a47fa4;
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      puVar5 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0();
      puVar3 = PTR_PTR_1126b2340;
      if ((uVar4 & 1) == 0) goto LAB_107a48344;
      uVar6 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771c0();
      _objc_release(uVar6);
      _objc_release(puVar5);
      if ((int)puVar3 != 0) {
        func_0x00010be501a0(param_1);
      }
    }
    else {
      puVar5 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010bee37a0(param_1);
LAB_107a48344:
      _objc_release(puVar5);
    }
  }
  else {
    _objc_release(puVar3);
LAB_107a47fa4:
    func_0x00010be09980(param_1);
  }
  if (((ulong)puVar2 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x1d8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar14;
    func_0x00010bf1f3c0();
    _objc_release(uVar14);
    if ((int)uVar6 != 0) {
      func_0x00010bebfde0(param_1);
    }
    goto LAB_107a48754;
  }
  uVar4 = param_3;
  FUN_107b27f14(param_3,param_4,param_5);
  if ((uVar4 & 1) != 0) goto LAB_107a48754;
  puVar2 = PTR_PTR_1126b6160;
  func_0x00010bf3d9e0(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar4 == 0) {
    puVar2 = PTR_PTR_1126b6160;
    func_0x00010c277180(PTR_PTR_1126b6160);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      puVar3 = PTR_PTR_1126b2d30;
      func_0x00010bfdffe0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)uVar4 == 0) {
        puVar2 = PTR_PTR_1126c9400;
        func_0x00010c15b3c0(PTR_PTR_1126c9400);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)uVar4 == 0) {
          puVar2 = PTR_PTR_1126b2d30;
          func_0x00010c15c9e0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)uVar4 == 0) {
            puVar2 = PTR_PTR_1126b2d30;
            func_0x00010bf52060(PTR_PTR_1126b2d30);
            uVar4 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)uVar4 == 0) {
              puVar2 = PTR_PTR_1126b2ea8;
              func_0x00010c268600(PTR_PTR_1126b2ea8);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)uVar4 == 0) {
                puVar2 = PTR_PTR_1126b2ea8;
                func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = param_3;
                func_0x00010c0720c0();
                if ((int)uVar4 == 0) {
                  puVar3 = PTR_PTR_1126b2ea8;
                  func_0x00010c235940(PTR_PTR_1126b2ea8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = param_3;
                  func_0x00010c0720c0();
                  _objc_release(puVar3);
                  _objc_release(puVar2);
                  if ((int)uVar4 != 0) goto LAB_107a48940;
                  puVar2 = PTR_PTR_1126b2d30;
                  func_0x00010bf940a0(PTR_PTR_1126b2d30);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = param_3;
                  func_0x00010c0720c0();
                  _objc_release(puVar2);
                  if ((int)uVar4 == 0) {
                    puVar2 = PTR_PTR_1126c9400;
                    func_0x00010c157400(PTR_PTR_1126c9400);
                    _objc_retainAutoreleasedReturnValue();
                    uVar4 = param_3;
                    func_0x00010c0720c0();
                    if ((int)uVar4 == 0) {
                      puVar3 = PTR_PTR_1126c9400;
                      func_0x00010c269700(PTR_PTR_1126c9400);
                      _objc_retainAutoreleasedReturnValue();
                      uVar4 = param_3;
                      func_0x00010c0720c0();
                      _objc_release(puVar3);
                      _objc_release(puVar2);
                      if ((int)uVar4 == 0) {
                        uVar4 = param_3;
                        func_0x00010c0720c0();
                        if ((uVar4 & 1) == 0) {
                          puVar2 = PTR_PTR_1126b2d30;
                          func_0x00010c25fd00(PTR_PTR_1126b2d30);
                          _objc_retainAutoreleasedReturnValue();
                          uVar4 = param_3;
                          func_0x00010c0720c0();
                          if ((int)uVar4 == 0) {
                            puVar3 = PTR_PTR_1126b2ce8;
                            func_0x00010c25fe20(PTR_PTR_1126b2ce8);
                            _objc_retainAutoreleasedReturnValue();
                            uVar4 = param_3;
                            func_0x00010c0720c0();
                            _objc_release(puVar3);
                            _objc_release(puVar2);
                            if ((int)uVar4 == 0) {
                              uVar4 = param_3;
                              func_0x00010c0720c0();
                              if ((int)uVar4 == 0) {
                                puVar2 = PTR_PTR_1126b2d30;
                                func_0x00010bfa1100(PTR_PTR_1126b2d30);
                                _objc_retainAutoreleasedReturnValue();
                                uVar4 = param_3;
                                func_0x00010c0720c0();
                                _objc_release(puVar2);
                                if ((int)uVar4 == 0) {
                                  puVar2 = PTR_PTR_1126b2d30;
                                  func_0x00010c0dc460(PTR_PTR_1126b2d30);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar4 = param_3;
                                  func_0x00010c0720c0();
                                  if ((uVar4 & 1) == 0) {
                                    uVar4 = param_3;
                                    func_0x00010c0720c0();
                                    _objc_release(puVar2);
                                    if ((uVar4 & 1) == 0) goto LAB_107a481e8;
                                  }
                                  else {
                                    _objc_release(puVar2);
                                  }
                                  _objc_initWeak(auStack_98,param_1);
                                  lVar8 = param_1;
                                  func_0x00010be5aec0();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar6 = 0;
                                  func_0x0001000819a8(0,0);
                                  _objc_retainAutoreleasedReturnValue();
                                  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
                                  uStack_188 = 0xc2000000;
                                  uStack_180 = 0x107a49068;
                                  puStack_178 = &UNK_110850cf8;
                                  _objc_copyWeak(auStack_158,auStack_98);
                                  _objc_retain(param_4);
                                  uStack_170 = param_4;
                                  _objc_retain(param_5);
                                  puStack_168 = param_5;
                                  lStack_160 = lVar8;
                                  _objc_retain(lVar8);
                                  func_0x00010007380c(uVar6,&puStack_190);
                                  _objc_release(uVar6);
                                  _objc_release(lStack_160);
                                  _objc_release(puStack_168);
                                  _objc_release(uStack_170);
                                  _objc_release(lVar8);
                                  _objc_destroyWeak(auStack_158);
                                  _objc_destroyWeak(auStack_98);
                                }
                                else {
                                  _objc_initWeak(auStack_98,param_1);
                                  uVar6 = 0;
                                  func_0x0001000819a8(0,0);
                                  _objc_retainAutoreleasedReturnValue();
                                  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
                                  uStack_148 = 0xc2000000;
                                  uStack_140 = 0x107a49034;
                                  puStack_138 = &UNK_110848218;
                                  _objc_copyWeak(auStack_120,auStack_98);
                                  _objc_retain(param_4);
                                  uStack_130 = param_4;
                                  _objc_retain(param_5);
                                  puStack_128 = param_5;
                                  func_0x00010007380c(uVar6,&puStack_150);
                                  _objc_release(uVar6);
                                  _objc_release(puStack_128);
                                  _objc_release(uStack_130);
                                  _objc_destroyWeak(auStack_120);
                                  _objc_destroyWeak(auStack_98);
                                }
                              }
                              else {
                                func_0x00010be27500(param_1);
                              }
                              goto LAB_107a481e8;
                            }
                          }
                          else {
                            _objc_release(puVar2);
                          }
                        }
                        _objc_initWeak(auStack_98,param_1);
                        lVar8 = param_1;
                        func_0x00010be5aec0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar6 = 0;
                        func_0x0001000819a8(0,0);
                        _objc_retainAutoreleasedReturnValue();
                        puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
                        uStack_110 = 0xc2000000;
                        uStack_108 = 0x107a48ffc;
                        puStack_100 = &UNK_110850cf8;
                        _objc_copyWeak(auStack_e0,auStack_98);
                        _objc_retain(param_4);
                        uStack_f8 = param_4;
                        _objc_retain(param_5);
                        puStack_f0 = param_5;
                        lStack_e8 = lVar8;
                        _objc_retain(lVar8);
                        func_0x00010007380c(uVar6,&puStack_118);
                        _objc_release(uVar6);
                        _objc_release(lStack_e8);
                        _objc_release(puStack_f0);
                        _objc_release(uStack_f8);
                        _objc_release(lVar8);
                        _objc_destroyWeak(auStack_e0);
                        _objc_destroyWeak(auStack_98);
                        goto LAB_107a481e8;
                      }
                    }
                    else {
                      _objc_release(puVar2);
                    }
                    _objc_initWeak(auStack_98,param_1);
                    lVar8 = param_1;
                    func_0x00010be5aec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = 0;
                    func_0x0001000819a8(0,0);
                    _objc_retainAutoreleasedReturnValue();
                    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_d0 = 0xc2000000;
                    pcStack_c8 = FUN_107a48fc4;
                    puStack_c0 = &UNK_110850cf8;
                    _objc_copyWeak(auStack_a0,auStack_98);
                    lStack_b8 = lVar8;
                    _objc_retain(param_5);
                    puStack_b0 = param_5;
                    _objc_retain(param_3);
                    uStack_a8 = param_3;
                    _objc_retain(lVar8);
                    func_0x00010007380c(uVar6,&puStack_d8);
                    _objc_release(uVar6);
                    _objc_release(uStack_a8);
                    _objc_release(puStack_b0);
                    _objc_release(lStack_b8);
                    _objc_release(lVar8);
                    _objc_destroyWeak(auStack_a0);
                    _objc_destroyWeak(auStack_98);
                    goto LAB_107a481e8;
                  }
                  lVar8 = param_1 + 0x298;
                  _objc_loadWeakRetained(lVar8);
                  lVar12 = lVar8;
                  func_0x00010c2bf380();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  _objc_release(puVar2);
LAB_107a48940:
                  lVar8 = param_1 + 0x298;
                  _objc_loadWeakRetained(lVar8);
                  lVar12 = lVar8;
                  func_0x00010c2bf380();
                  _objc_retainAutoreleasedReturnValue();
                }
                func_0x00010c2bf1c0();
                goto LAB_107a48054;
              }
              lVar8 = param_1 + 0x110;
              _objc_loadWeakRetained();
              lVar12 = lVar8;
              func_0x000108faa964();
              _objc_release(lVar8);
              if ((int)lVar12 != 0) {
                func_0x00010be7e4e0(param_1);
              }
            }
            else {
              func_0x00010be27960(param_1);
            }
            goto LAB_107a481e8;
          }
        }
        else {
          func_0x00010be09da0(param_1);
        }
        func_0x00010bea0240(param_1);
        goto LAB_107a481e8;
      }
    }
    else {
      _objc_release(puVar2);
    }
    func_0x00010be04de0(param_1);
  }
  else {
    lVar8 = param_1 + 0x298;
    _objc_loadWeakRetained(lVar8);
    lVar12 = lVar8;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84d40(lVar12);
    _objc_release(puVar2);
LAB_107a48054:
    _objc_release(lVar12);
    _objc_release(lVar8);
  }
LAB_107a481e8:
  puVar2 = PTR_PTR_1126c9460;
  func_0x00010c29ae40(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar4 == 0) {
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        puVar2 = PTR_PTR_1126b2338;
        func_0x00010c23c600(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)uVar4 == 0) {
          puVar2 = PTR_PTR_1126b2330;
          func_0x00010c0e9c40(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) {
            puVar3 = PTR_PTR_1126b2330;
            func_0x00010c0e9cc0(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            _objc_release(puVar2);
            if ((int)uVar4 == 0) {
              puVar2 = PTR_PTR_1126b2330;
              func_0x00010bf3df00(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              puVar2 = PTR_PTR_1126b2340;
              if ((int)uVar4 == 0) {
                puVar2 = PTR_PTR_1126b2330;
                func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar2);
                if ((int)uVar4 == 0) {
                  puVar2 = PTR_PTR_1126b2638;
                  func_0x00010bf7a500(PTR_PTR_1126b2638);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = param_3;
                  func_0x00010c0720c0();
                  _objc_release(puVar2);
                  if ((int)uVar4 != 0) {
                    lVar12 = *(long *)(param_1 + 0x30);
                    func_0x00010c245680();
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = *(undefined8 *)(param_1 + 0x38);
                    func_0x00010bfe5ec0(uVar6);
                    _objc_retainAutoreleasedReturnValue();
                    lVar8 = lVar12;
                    FUN_107a539dc(lVar12,uVar6);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar6);
                    _objc_release(lVar12);
                    lVar12 = lVar8;
                    func_0x00010c08fa60();
                    if (lVar12 != 0) {
                      lVar12 = param_1 + 0x2a0;
                      _objc_loadWeakRetained(lVar12);
                      func_0x00010c101400();
                      _objc_release(lVar12);
                    }
                    _objc_release(lVar8);
                  }
                }
                else {
                  *(undefined1 *)(param_1 + 0x88) = 1;
                }
              }
              else {
                uVar6 = param_4;
                func_0x00010c118b40(param_4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c076c60();
                _objc_release(uVar6);
                if ((int)puVar2 != 0) {
                  uVar6 = *(undefined8 *)(param_1 + 0x228);
                  func_0x00010c29d360(uVar6);
                  func_0x000108534a80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000107d04cb0();
                  _objc_release(uVar6);
                }
                *(undefined1 *)(param_1 + 0x88) = 0;
              }
              goto LAB_107a48540;
            }
          }
          else {
            _objc_release(puVar2);
          }
          func_0x00010bebfdc0(param_1);
          *(undefined1 *)(param_1 + 0x218) = 0;
        }
        else if (*(long *)(param_1 + 0x18) != 0) {
          func_0x00010be09980(param_1);
        }
      }
      else {
        puVar13 = (undefined8 *)(param_1 + 0x18);
        uVar6 = *puVar13;
        func_0x00010bf51e00();
        uVar14 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x38) = uVar6;
        _objc_release(uVar14);
        uVar6 = *puVar13;
        *puVar13 = 0;
        _objc_release(uVar6);
        func_0x00010bebfdc0(param_1);
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf51e00();
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      _objc_release(uVar14);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar2 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c0b4ca0();
    if (puVar3 != (undefined *)0x0) {
      _objc_retain(puVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar2;
      _objc_release(uVar6);
    }
    ppuVar7 = (undefined **)PTR_PTR_1126c9310;
    func_0x00010bf8c9a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar1 = ppuVar7;
    }
    _objc_retain(ppuVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    *(undefined ***)(param_1 + 0x98) = ppuVar1;
    _objc_release(uVar6);
    _objc_release(ppuVar7);
    func_0x00010be2bd20(param_1);
    _objc_release(puVar2);
  }
LAB_107a48540:
  puVar2 = PTR_PTR_1126c9c10;
  func_0x00010bf3de20(PTR_PTR_1126c9c10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6c40();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa8a0();
    _objc_release(uVar6);
    lVar8 = param_1 + 0x298;
    _objc_loadWeakRetained(lVar8);
    lVar12 = lVar8;
    func_0x00010c08f5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ebe0();
    _objc_release(lVar12);
    _objc_release(lVar8);
    uVar6 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedfe40(param_1);
    _objc_release(uVar6);
  }
  lVar8 = *(long *)(param_1 + 0x30);
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010bf7a540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2638;
    puStack_90 = puVar2;
    func_0x00010bf7a560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9460;
    puStack_88 = puVar3;
    func_0x00010c269c80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c9460;
    puStack_80 = puVar5;
    func_0x00010c269c60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf4b900();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar8);
    if ((int)puVar11 != 0) {
      uVar14 = *(undefined8 *)(param_1 + 400);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c280580(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar14);
      _objc_release(uVar6);
    }
  }
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar4 != 0) {
    *(undefined1 *)(param_1 + 0x218) = 1;
  }
  func_0x00010be14fc0(param_1);
LAB_107a48754:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_98);
    __Unwind_Resume();
    lVar8 = param_3 + 0x38;
    _objc_loadWeakRetained(lVar8);
    func_0x00010be592e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
  return;
}



/* Entry: 107a48fc4; end: 107a4909f;  */

void FUN_107a48fc4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be592e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a490a0; end: 107a49213; -[SCLongformShowOperaSession _fetchThumbnailUrlFromPage:] */

void FUN_107a490a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010be5aec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf82000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x140);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf82000(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      lVar4 = lVar3;
      func_0x00010c25bac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar3);
      lVar2 = lVar4;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c2a2900(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010847dea8(lVar2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar2);
        lVar2 = lVar6;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x1c8);
        *(long *)(param_1 + 0x1c8) = lVar2;
        _objc_release(uVar7);
        _objc_release(lVar6);
      }
      _objc_release(lVar3);
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a49214; end: 107a49303; -[SCLongformShowOperaSession _updateShouldShowTapTooltipsForCurrentPage:currentPageId:] */

void FUN_107a49214(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  *(undefined1 *)(param_1 + 0x120) = param_3;
  _objc_retain(param_4);
  lVar1 = param_1 + 0x2a0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107a49304;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107a49304; end: 107a4935b;  */

void FUN_107a49304(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x2a0;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101400(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a4935c; end: 107a493ff; -[SCLongformShowOperaSession _updateViewLocationIfNeeded:withPage:] */

void FUN_107a4935c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  if (param_3 != -1) {
    lVar1 = *(long *)(param_1 + 0x228);
    func_0x00010c29d360();
    if (param_3 != lVar1) {
      puVar2 = PTR_PTR_1126d6048;
      func_0x00010bf826c0(PTR_PTR_1126d6048,param_2,*(undefined8 *)(param_1 + 0x228));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bc8c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x228);
      *(undefined **)(param_1 + 0x228) = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a49400; end: 107a49893; -[SCLongformShowOperaSession _reportLongFormStoryWatchStateWithPage:params:] */

void FUN_107a49400(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c9a80;
  _objc_opt_class(PTR_PTR_1126c9a80);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar11 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar11 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c0b4ca0();
    uVar11 = uVar4;
    if (uVar5 == 0) {
      uVar11 = *(ulong *)(param_1 + 0x90);
      _objc_retain(uVar11);
      _objc_release(uVar4);
    }
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010bfbbde0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c9310;
    func_0x00010c237ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9310;
    func_0x00010c259500();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c9310;
    func_0x00010c158320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(puVar7);
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_107a49894;
    uStack_78 = 0x107a498a4;
    uStack_70 = 0;
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    dVar12 = 1.60807493534087e-314;
    _objc_retain(puVar3);
    _objc_retain(puVar7);
    _objc_retain(uVar11);
    _objc_retain(uVar4);
    func_0x00010c0bebc0(uVar2);
    if (puStack_90[5] != 0) {
      puVar8 = PTR_PTR_1126c9310;
      func_0x00010c259760(PTR_PTR_1126c9310);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800(puVar8);
      puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c14ab80(dVar12 + 604800.0,uVar9);
      _objc_release(puVar10);
      _objc_release(uVar9);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      _objc_release(puVar8);
    }
    _objc_release(uVar4);
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar11);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a49894; end: 107a498ab;  */

void FUN_107a49894(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a498ac; end: 107a49de7;  */

void FUN_107a498ac(double param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double dVar17;
  undefined8 uStack_158;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_3;
  puVar16 = param_4;
  puVar4 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_2 + 0x60) == '\x01') {
    lVar8 = *(long *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20);
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_5;
    func_0x00010bf358a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x178);
    puVar3 = param_4;
    FUN_107a49de8(param_4,lVar8,uVar1,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *(long *)(*(long *)(param_2 + 0x48) + 8);
    uVar11 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 **)(lVar12 + 0x28) = puVar3;
    _objc_release(uVar11);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar16);
    _objc_release(uVar1);
    param_1 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    puVar2 = param_5;
    func_0x00010bf358a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = &uStack_140;
    puVar4 = auStack_100;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar12 = *plStack_130;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_130 != lVar12) {
            _objc_enumerationMutation(puVar2);
          }
          uVar1 = *(undefined8 *)(lStack_138 + (long)puVar16 * 8);
          uVar11 = *(undefined8 *)(param_2 + 0x30);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c720(uVar11);
          _objc_release(uVar1);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar3 != puVar16);
        puVar16 = &uStack_140;
        puVar4 = auStack_100;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
  }
  else {
    puVar2 = param_5;
    func_0x00010bf358a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    dVar17 = param_1;
    if (-1 < (long)puVar3 + -1) {
      do {
        puVar13 = (undefined8 *)((long)puVar3 + -1);
        puVar16 = param_5;
        func_0x00010bf358a0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar16;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x38));
        param_1 = dVar17;
        func_0x00010c250f20(puVar2);
        param_1 = param_1 * 1000.0;
        if (param_1 < dVar17) {
          puVar16 = param_5;
          func_0x00010bf358a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar16;
          func_0x00010bf529e0();
          _objc_release(puVar16);
          if (puVar4 == puVar3) {
            lVar8 = *(long *)(param_2 + 0x20);
            puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x28) + 0x20);
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = param_5;
            func_0x00010bf358a0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar3;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar15;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            uStack_158 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x178);
            puVar6 = param_4;
            puVar16 = puVar5;
            puVar4 = puVar9;
            FUN_107a49de8(param_4,lVar8,puVar5,puVar9);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = *(long *)(*(long *)(param_2 + 0x48) + 8);
            uVar1 = *(undefined8 *)(lVar12 + 0x28);
            *(undefined8 **)(lVar12 + 0x28) = puVar6;
            _objc_release(uVar1);
            _objc_release(puVar9);
          }
          else {
            uVar7 = *(ulong *)(param_2 + 0x40);
            func_0x00010bf1f3c0();
            if ((uVar7 & 1) == 0) {
              func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x38));
              dVar17 = param_1;
              func_0x00010bf8b340(param_5);
              param_1 = (double)NEON_fminnm((param_1 / dVar17) * 100.0,0x4059000000000000);
            }
            lVar8 = *(long *)(param_2 + 0x38);
            func_0x00010c067fc0();
            func_0x00010c250f20(puVar2);
            param_1 = (double)lVar8 + param_1 * -1000.0;
            lVar8 = *(long *)(param_2 + 0x20);
            puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x28) + 0x20);
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            uStack_158 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x178);
            puVar9 = param_4;
            puVar16 = puVar5;
            puVar4 = puVar3;
            FUN_107a49de8(param_4,lVar8,puVar5,puVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = *(long *)(*(long *)(param_2 + 0x48) + 8);
            puVar15 = *(undefined8 **)(lVar12 + 0x28);
            *(undefined8 **)(lVar12 + 0x28) = puVar9;
          }
          _objc_release(puVar15);
          _objc_release(puVar3);
          _objc_release(puVar5);
          _objc_release(puVar2);
          if (puVar13 < (undefined8 *)0x7fffffffffffffff) goto LAB_107a49d18;
          goto LAB_107a49d90;
        }
        _objc_release(puVar2);
        puVar3 = puVar13;
        dVar17 = param_1;
      } while (0 < (long)puVar13);
      puVar13 = (undefined8 *)0x0;
LAB_107a49d18:
      lVar12 = 0;
      do {
        puVar16 = param_5;
        func_0x00010bf358a0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar16;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        uVar1 = *(undefined8 *)(param_2 + 0x30);
        puVar3 = puVar2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar3;
        func_0x00010c14c720(uVar1);
        _objc_release(puVar3);
        _objc_release(puVar2);
        lVar12 = lVar12 + 1;
      } while ((long)puVar13 + 1 != lVar12);
    }
  }
LAB_107a49d90:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar8);
  _objc_retain(puVar16);
  _objc_retain(puVar4);
  _objc_retain(uStack_158);
  lVar12 = param_3;
  func_0x00010c08fa60();
  if (lVar12 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar12 = lVar8;
    func_0x00010c08fa60();
    if (lVar12 == 0) {
      func_0x00010c0b0e00(uStack_158);
    }
    puVar14 = PTR_PTR_1126d6060;
    _objc_alloc(PTR_PTR_1126d6060);
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c04da00(param_1 * 1000.0,puVar14);
    _objc_release(puVar10);
  }
  _objc_release(uStack_158);
  _objc_release(puVar4);
  _objc_release(puVar16);
  _objc_release(lVar8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107a49de8; end: 107a49f47;  */

void FUN_107a49de8(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_stack_00000008;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000008);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010c0b0e00(in_stack_00000008);
    }
    puVar3 = PTR_PTR_1126d6060;
    _objc_alloc(PTR_PTR_1126d6060);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c04da00(param_1 * 1000.0,puVar3);
    _objc_release(puVar2);
  }
  _objc_release(in_stack_00000008);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a49f48; end: 107a49f4b;  */

void FUN_107a49f48(void)

{
  return;
}



/* Entry: 107a49f4c; end: 107a4a0b7; -[SCLongformShowOperaSession extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107a49f4c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined ***param_4,
                  ulong param_5,long param_6)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if (((ulong)pppuVar1 & 1) == 0) {
LAB_107a4a060:
    uVar9 = 0;
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    puVar2 = PTR_PTR_1126c9a80;
    _objc_opt_class(PTR_PTR_1126c9a80);
    uVar9 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar9 & 1) == 0) goto LAB_107a4a060;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f0d298;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = &ppuStack_58;
    param_5 = 1;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  _objc_retain(pppuVar10);
  _objc_retain(param_5);
  uVar4 = param_5;
  func_0x00010c0720c0();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c0720c0();
  if ((int)uVar5 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((((uint)uVar5 | (uint)uVar4) & 1) == 0) goto LAB_107a4a354;
  }
  else {
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c0c5ec0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = pppuVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x290);
  *(undefined ****)(param_3 + 0x290) = pppuVar1;
  _objc_release(uVar11);
  _objc_release(puVar2);
  uVar6 = param_3;
  func_0x00010be5aec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar5 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar7);
  uVar7 = uVar5;
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  if (((uint)uVar7 == 0) || (((uint)(uVar6 != 0) & (uint)uVar7) != 0)) {
    uVar5 = uVar6;
    func_0x00010c237cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c237cc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar7 == 0) {
      _objc_release(uVar11);
      _objc_release(uVar5);
      func_0x00010c1872c0(*(undefined8 *)(param_3 + 0x28));
    }
    else {
      uVar7 = uVar6;
      func_0x00010bf8c980();
      uVar8 = *(ulong *)(param_3 + 0x30);
      func_0x00010bf8c980();
      _objc_release(uVar11);
      _objc_release(uVar5);
      func_0x00010c1872c0(*(undefined8 *)(param_3 + 0x28));
      if (uVar7 == uVar8 && (uVar4 & 1) == 0) goto LAB_107a4a34c;
    }
    if (*(long *)(param_3 + 0x30) != 0) {
      func_0x00010be09980(param_3);
    }
    if (uVar6 != 0) {
      func_0x00010c29d360(uVar6);
      func_0x00010bea1180(param_3);
      func_0x00010bebfda0(param_3);
    }
  }
LAB_107a4a34c:
  _objc_release(uVar6);
LAB_107a4a354:
  _objc_release(param_5);
  _objc_release(pppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107a4a0b8; end: 107a4a383; -[SCLongformShowOperaSession _startEditionViewIfNecessaryForPage:params:event:] */

void FUN_107a4a0b8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c0720c0();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(puVar2);
    if ((((uint)uVar3 | (uint)uVar1) & 1) == 0) goto LAB_107a4a354;
  }
  else {
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c0c5ec0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = uVar9;
  _objc_release(uVar12);
  _objc_release(puVar2);
  lVar5 = param_1;
  func_0x00010be5aec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar3 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if (((uint)uVar6 == 0) || (((uint)(lVar5 != 0) & (uint)uVar6) != 0)) {
    lVar8 = lVar5;
    func_0x00010c237cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c237cc0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c0720c0();
    if ((int)lVar10 == 0) {
      _objc_release(uVar9);
      _objc_release(lVar8);
      func_0x00010c1872c0(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      lVar10 = lVar5;
      func_0x00010bf8c980();
      lVar11 = *(long *)(param_1 + 0x30);
      func_0x00010bf8c980();
      _objc_release(uVar9);
      _objc_release(lVar8);
      func_0x00010c1872c0(*(undefined8 *)(param_1 + 0x28));
      if (lVar10 == lVar11 && (uVar1 & 1) == 0) goto LAB_107a4a34c;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010be09980(param_1);
    }
    if (lVar5 != 0) {
      func_0x00010c29d360(lVar5);
      func_0x00010bea1180(param_1);
      func_0x00010bebfda0(param_1);
    }
  }
LAB_107a4a34c:
  _objc_release(lVar5);
LAB_107a4a354:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4a384; end: 107a4a5f3; -[SCLongformShowOperaSession _startEditionViewIfNecessaryDeprecatedForPage:params:event:] */

void FUN_107a4a384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110ebd178);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0720c0(param_5,param_2,puVar2);
  if ((int)uVar3 == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0720c0(param_5,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    if ((((uint)uVar3 | (uint)uVar1) & 1) == 0) goto LAB_107a4a5c4;
  }
  else {
    _objc_release(puVar2);
  }
  lVar5 = param_1;
  func_0x00010be5aec0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c237cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c237cc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c0720c0(lVar6,param_2,uVar7);
  if ((int)lVar8 == 0) {
    _objc_release(uVar7);
    _objc_release(lVar6);
LAB_107a4a524:
    func_0x00010c1872c0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar7);
    func_0x00010be09980(param_1,param_2,param_3,param_4,param_5);
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x290) = uVar7;
    _objc_release(uVar10);
    _objc_release(puVar2);
    lVar6 = lVar5;
    func_0x00010c29d360(lVar5);
    func_0x00010bea1180(param_1,param_2,lVar6,param_3);
    func_0x00010bebfda0(param_1,param_2,param_3,lVar5);
  }
  else {
    lVar8 = lVar5;
    func_0x00010bf8c980();
    lVar9 = *(long *)(param_1 + 0x30);
    func_0x00010bf8c980();
    _objc_release(uVar7);
    _objc_release(lVar6);
    if (lVar8 != lVar9 || (uVar1 & 1) != 0) goto LAB_107a4a524;
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x290) = uVar7;
    _objc_release(uVar10);
    _objc_release(puVar2);
  }
  _objc_release(lVar5);
LAB_107a4a5c4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4a5f4; end: 107a4a70b; -[SCLongformShowOperaSession _sendViewLocationUpdateIfNeeded:withPage:] */

void FUN_107a4a5f4(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_3;
  lVar10 = param_4;
  _objc_retain(param_4);
  if (param_3 != (undefined **)0xffffffffffffffff) {
    ppuVar1 = *(undefined ***)(param_1 + 0x228);
    func_0x00010c29d360();
    if (param_3 != ppuVar1) {
      uVar11 = *(undefined8 *)(param_1 + 8);
      ppuVar12 = &PTR____CFConstantStringClassReference_110ebeb98;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_4;
      func_0x00010c0eb7c0(uVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar10);
  _objc_retain(ppuVar12);
  lVar8 = lVar10;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_4 + 0x30);
  *(long *)(param_4 + 0x30) = lVar8;
  _objc_release(uVar11);
  ppuVar1 = ppuVar12;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_4 + 0x48);
  *(undefined ***)(param_4 + 0x48) = ppuVar1;
  _objc_release(uVar11);
  ppuVar1 = ppuVar12;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126d53e8;
  _objc_opt_class(PTR_PTR_1126d53e8);
  ppuVar5 = ppuVar4;
  _objc_opt_isKindOfClass(ppuVar4,puVar2);
  ppuVar1 = ppuVar4;
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar1;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar4;
  func_0x00010bf529e0();
  *(undefined ***)(param_4 + 0x250) = ppuVar1;
  _objc_release(ppuVar4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf8c980();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_4 + 0x278);
  *(undefined **)(param_4 + 0x278) = puVar2;
  _objc_release(uVar11);
  lVar8 = lVar10;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_4 + 0x280);
  *(long *)(param_4 + 0x280) = lVar8;
  _objc_release(uVar11);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar11 = *(undefined8 *)(param_4 + 0x240);
  *(undefined **)(param_4 + 0x240) = puVar2;
  _objc_release(uVar11);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar11 = *(undefined8 *)(param_4 + 0x58);
  *(undefined **)(param_4 + 0x58) = puVar2;
  _objc_release();
  *(undefined8 *)(param_4 + 0x238) = 0;
  *(undefined8 *)(param_4 + 0x78) = 0;
  *(undefined8 *)(param_4 + 0x210) = 0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_4 + 0x220);
  *(undefined8 *)(param_4 + 0x220) = uVar11;
  _objc_release(uVar9);
  ppuVar1 = ppuVar12;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
  puVar2 = PTR_PTR_1126c9a78;
  func_0x00010bef5400(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar12;
  func_0x00010bf1f3c0();
  *(char *)(param_4 + 0x219) = (char)ppuVar4;
  _objc_release(ppuVar12);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  lVar8 = lVar10;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  uVar11 = *(undefined8 *)(param_4 + 0x288);
  *(long *)(param_4 + 0x288) = lVar8;
  _objc_release(uVar11);
  lVar10 = param_4;
  func_0x00010c0ea860();
  if (lVar10 == 1) {
    lVar10 = param_4 + 0x298;
    _objc_loadWeakRetained();
    lVar8 = lVar10;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar8;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c27dd80();
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar10);
    if (lVar7 == 5) {
      puVar2 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_4 + 0x80);
      *(undefined **)(param_4 + 0x80) = puVar2;
      goto LAB_107a4aa1c;
    }
  }
  lVar10 = param_4 + 0x298;
  _objc_loadWeakRetained();
  lVar8 = lVar10;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_4 + 0x80);
  *(long *)(param_4 + 0x80) = lVar6;
  _objc_release(uVar11);
  _objc_release(lVar8);
LAB_107a4aa1c:
  _objc_release(lVar10);
  func_0x00010c24d960(*(undefined8 *)(param_4 + 0x68));
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a4a70c; end: 107a4aa7f; -[SCLongformShowOperaSession _startEditionViewForPage:show:] */

void FUN_107a4a70c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar9 = param_4;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  _objc_release(uVar8);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar9);
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d53e8;
  _objc_opt_class(PTR_PTR_1126d53e8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf529e0();
  *(ulong *)(param_1 + 0x250) = uVar1;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf8c980();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x278);
  *(undefined **)(param_1 + 0x278) = puVar3;
  _objc_release(uVar9);
  uVar9 = param_4;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = uVar9;
  _objc_release(uVar8);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + 0x240);
  *(undefined **)(param_1 + 0x240) = puVar3;
  _objc_release(uVar9);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar3;
  _objc_release();
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = uVar9;
  _objc_release(uVar8);
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126c9a78;
  func_0x00010bef5400(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + 0x219) = (char)uVar4;
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
  uVar9 = param_4;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar8 = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = uVar9;
  _objc_release(uVar8);
  lVar10 = param_1;
  func_0x00010c0ea860();
  if (lVar10 == 1) {
    lVar10 = param_1 + 0x298;
    _objc_loadWeakRetained();
    lVar5 = lVar10;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c27dd80();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar10);
    if (lVar7 == 5) {
      puVar3 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_1 + 0x80);
      *(undefined **)(param_1 + 0x80) = puVar3;
      goto LAB_107a4aa1c;
    }
  }
  lVar10 = param_1 + 0x298;
  _objc_loadWeakRetained();
  lVar5 = lVar10;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar6;
  _objc_release(uVar9);
  _objc_release(lVar5);
LAB_107a4aa1c:
  _objc_release(lVar10);
  func_0x00010c24d960(*(undefined8 *)(param_1 + 0x68));
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a4aa80; end: 107a4adab; -[SCLongformShowOperaSession _handleLongformPlaybackEventForPage:params:event:] */

void FUN_107a4aa80(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9cf8;
  func_0x00010bfe5ec0(PTR_PTR_1126c9cf8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar8 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d53e8;
  _objc_opt_class(PTR_PTR_1126d53e8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar8);
  if (uVar3 != 0) {
    func_0x00010be09da0(param_1);
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x00010c280580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 400);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c280580(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar10);
      _objc_release(uVar7);
    }
    uVar8 = uVar4;
    func_0x00010bfecde0();
    *(ulong *)(param_1 + 0x50) = uVar8;
    _objc_retain(uVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar3;
    _objc_release(uVar7);
    uVar10 = *(undefined8 *)(param_1 + 0x240);
    func_0x00010c0d3c80();
    uVar8 = uVar3;
    func_0x00010bfe5ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar10);
    _objc_release(uVar8);
    uVar7 = uVar10;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x240) = uVar7;
    _objc_release(uVar9);
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x60));
    uVar8 = uVar3;
    func_0x00010bfe5ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfe5ec0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd6a0(param_1);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar10);
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4adac; end: 107a4af07; -[SCLongformShowOperaSession _endEditionViewForPage:params:event:] */

void FUN_107a4adac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_2 + 0x30);
  if (lVar3 != 0) {
    _objc_retain(lVar3);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010becaf20(param_2);
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x68));
    *(undefined8 *)(param_2 + 0x238) = param_1;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x228);
    func_0x00010c25b040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a55a0(uVar4,param_3,uVar1);
    _objc_release(uVar1);
    func_0x00010be09da0(param_2,param_3,param_4,param_5,param_6,lVar3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    func_0x00010c137fe0(*(undefined8 *)(param_2 + 0x68));
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    _objc_release(uVar1);
    lVar2 = lVar3;
    func_0x00010c280580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 400);
      lVar2 = lVar3;
      func_0x00010c280580(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar1,param_3,lVar2);
      _objc_release(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107a4af08; end: 107a4b353; -[SCLongformShowOperaSession _endSnapViewForPage:params:event:currentShow:] */

void FUN_107a4af08(float param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2340;
  uVar1 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077200();
  _objc_release(uVar1);
  if ((*(long *)(param_2 + 0x38) == 0 && ((ulong)puVar3 & 1) == 0) || ((uVar2 & 1) != 0))
  goto LAB_107a4b320;
  func_0x00010c0f5b20(*(undefined8 *)(param_2 + 0x60));
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c0f62c0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010bf67aa0(uVar9);
  _objc_release(lVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c9cf8;
  func_0x00010c27c520(PTR_PTR_1126c9cf8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    _objc_release(puVar3);
LAB_107a4b110:
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010bfbbde0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar5);
    _objc_release(puVar3);
  }
  else {
    puVar6 = PTR_PTR_1126c9cf8;
    func_0x00010c27c520(PTR_PTR_1126c9cf8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c067ec0();
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar3);
    if ((int)lVar8 != 1) goto LAB_107a4b110;
  }
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c0c4a80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar12 = (double)param_1 / 1000.0;
  dVar13 = dVar12 - *(double *)(param_2 + 0x70);
  _objc_release(lVar5);
  fVar11 = SUB84(dVar12,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c0c4a80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar12 = (double)fVar11 / 1000.0;
  *(double *)(param_2 + 0x70) = dVar12;
  _objc_release(lVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c24d6e0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar7 = lVar5;
  FUN_107ab8a38();
  *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + lVar7;
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becda60(param_2);
  _objc_release(uVar1);
  *(double *)(param_2 + 0x210) = dVar12 + *(double *)(param_2 + 0x210);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + 0x228);
  func_0x00010c25b040(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5300(dVar13,0,dVar12,uVar10);
  _objc_release(uVar9);
  func_0x00010be501a0(param_2);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = uVar9;
  _objc_release(uVar10);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  _objc_release(uVar9);
  func_0x00010c137fe0(*(undefined8 *)(param_2 + 0x60));
  if ((*(byte *)(param_2 + 0x218) & 1) == 0) {
    func_0x00010be8fc00(param_2);
  }
  _objc_release(lVar5);
LAB_107a4b320:
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a4b354; end: 107a4b35b; -[SCLongformShowOperaSession currentDSnapId] */

void FUN_107a4b354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_identifier_1125d7178)
  ;
  return;
}



/* Entry: 107a4b35c; end: 107a4b3af; -[SCLongformShowOperaSession currentLongformVideoId] */

void FUN_107a4b35c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a4b3b0; end: 107a4b3b7; -[SCLongformShowOperaSession currentSnapIndexPos] */

undefined8 FUN_107a4b3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107a4b3b8; end: 107a4b3cf; -[SCLongformShowOperaSession hasBeenFullyViewed] */

bool FUN_107a4b3b8(long param_1)

{
  return *(long *)(param_1 + 0x250) - 1U <= *(ulong *)(param_1 + 0x50);
}



/* Entry: 107a4b3d0; end: 107a4b3d7; -[SCLongformShowOperaSession hasEdition] */

undefined8 FUN_107a4b3d0(void)

{
  return 1;
}



/* Entry: 107a4b3d8; end: 107a4b3df; -[SCLongformShowOperaSession indexOfChunk:] */

undefined8 FUN_107a4b3d8(void)

{
  return 0x7fffffffffffffff;
}



/* Entry: 107a4b3e0; end: 107a4b48f; -[SCLongformShowOperaSession isSubscribed] */

undefined8 FUN_107a4b3e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c11b1e0();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf5b7e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c080120(uVar3);
  _objc_release(uVar3);
  return uVar1;
}



/* Entry: 107a4b490; end: 107a4b497; -[SCLongformShowOperaSession isViewingAd] */

void FUN_107a4b490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_isAd_1125f8808);
  return;
}



/* Entry: 107a4b498; end: 107a4b4e7; -[SCLongformShowOperaSession isViewingLongform] */

undefined * FUN_107a4b498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107a4b4e8; end: 107a4b537; -[SCLongformShowOperaSession isViewingLongformVideo] */

undefined * FUN_107a4b4e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077260(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107a4b538; end: 107a4b587; -[SCLongformShowOperaSession isViewingRemoteWebpage] */

undefined * FUN_107a4b538(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771c0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107a4b588; end: 107a4b5d7; -[SCLongformShowOperaSession isViewingStore] */

undefined * FUN_107a4b588(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ca2b0;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fba0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107a4b5d8; end: 107a4b5df; -[SCLongformShowOperaSession isViewingSubscriptionDSnap] */

undefined8 FUN_107a4b5d8(void)

{
  return 0;
}



/* Entry: 107a4b5e0; end: 107a4b62f; -[SCLongformShowOperaSession isViewingSubscriptionLongform] */

undefined * FUN_107a4b5e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080240(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107a4b630; end: 107a4b6c3; -[SCLongformShowOperaSession isViewingTopSnap] */

undefined * FUN_107a4b630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ca2b0;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081440(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010c081420(PTR_PTR_1126c9310,param_2,*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1f3c0();
    _objc_release(puVar2);
  }
  else {
    puVar3 = (undefined *)0x1;
  }
  return puVar3;
}



/* Entry: 107a4b6c4; end: 107a4b713; -[SCLongformShowOperaSession isViewingTopSnapImage] */

undefined * FUN_107a4b6c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075040(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107a4b714; end: 107a4b763; -[SCLongformShowOperaSession isViewingContentTopSnapRemoteWebpage] */

undefined * FUN_107a4b714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f4e0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107a4b764; end: 107a4b7b3; -[SCLongformShowOperaSession isViewingTopSnapVideo] */

undefined * FUN_107a4b764(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083240(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107a4b7b4; end: 107a4b7bb; -[SCLongformShowOperaSession isViewingShow] */

undefined8 FUN_107a4b7b4(void)

{
  return 1;
}



/* Entry: 107a4b7bc; end: 107a4b7c3; -[SCLongformShowOperaSession areSubtitlesAvailable] */

undefined8 FUN_107a4b7bc(void)

{
  return 0;
}



/* Entry: 107a4b7c4; end: 107a4b7cb; -[SCLongformShowOperaSession isShownWithSubtitles] */

undefined8 FUN_107a4b7c4(void)

{
  return 0;
}



/* Entry: 107a4b7cc; end: 107a4b7d3; -[SCLongformShowOperaSession subtitlesLocale] */

undefined8 FUN_107a4b7cc(void)

{
  return 0;
}



/* Entry: 107a4b7d4; end: 107a4b7db; -[SCLongformShowOperaSession isPromoted] */

undefined8 FUN_107a4b7d4(void)

{
  return 0;
}



/* Entry: 107a4b7dc; end: 107a4b7e3; -[SCLongformShowOperaSession isExplorationStory] */

undefined8 FUN_107a4b7dc(void)

{
  return 0;
}



/* Entry: 107a4b7e4; end: 107a4b80b; -[SCLongformShowOperaSession entryEvent] */

undefined8 FUN_107a4b7e4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x80);
  if (uVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x228);
                    /* WARNING: Could not recover jumptable at 0x00010c251ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_startingEntryEvent_112672220);
    return uVar2;
  }
  func_0x00010c27dd80();
  if (uVar1 < 0x15) {
    return *(undefined8 *)(&UNK_10dee1d28 + uVar1 * 8);
  }
  return 4;
}



/* Entry: 107a4b80c; end: 107a4b897; -[SCLongformShowOperaSession exitIntent] */

long FUN_107a4b80c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6c60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c089060(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27dd80();
  FUN_107cd46f8();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107a4b898; end: 107a4b92b; -[SCLongformShowOperaSession entryIntent] */

ulong FUN_107a4b898(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong unaff_x21;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar4 = param_1 + 0x298;
    _objc_loadWeakRetained();
    lVar1 = lVar4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d6c60();
    _objc_release(lVar1);
    _objc_release(lVar4);
    uVar3 = *(ulong *)(param_1 + 0x80);
    func_0x00010c27dd80();
    _objc_retain(0);
    if (uVar3 == 0) {
      unaff_x21 = 0;
      func_0x000107cd4574(0);
    }
    else if ((byte)((lVar2 != 0) + 1U) < 2) {
      func_0x000107cd48ac(uVar3,0);
      unaff_x21 = uVar3;
    }
    else if (lVar2 != 0) {
      func_0x000107cd4738(uVar3,0);
      unaff_x21 = uVar3;
    }
    _objc_release(0);
    return unaff_x21;
  }
  lVar4 = *(long *)(param_1 + 0x228);
  func_0x00010c251fe0(lVar4);
  return (ulong)(lVar4 == 1);
}



/* Entry: 107a4b92c; end: 107a4b933; -[SCLongformShowOperaSession storyTypeSpecific] */

void FUN_107a4b92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_storyTypeSpecific_112674818);
  return;
}



/* Entry: 107a4b934; end: 107a4b98f; -[SCLongformShowOperaSession operaNavigationType] */

bool FUN_107a4b934(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x298;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 107a4b990; end: 107a4ba17; -[SCLongformShowOperaSession lastInteraction] */

void FUN_107a4b990(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined *)(param_1 + 0x298);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar3 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,9);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a4ba18; end: 107a4ba1f; -[SCLongformShowOperaSession numLongformViewed] */

void FUN_107a4ba18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107a4ba20; end: 107a4ba27; -[SCLongformShowOperaSession numTopSnapsViewed] */

void FUN_107a4ba20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x240),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107a4ba28; end: 107a4ba2f; -[SCLongformShowOperaSession pageTimeViewedSec] */

void FUN_107a4ba28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 107a4ba30; end: 107a4ba6b; -[SCLongformShowOperaSession sessionTimeViewedSansLoadingTimeSec] */

double FUN_107a4ba30(long param_1)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    return *(double *)(param_1 + 0x210);
  }
  dVar1 = (*(double *)(param_1 + 0x238) * 1000.0 - (double)*(long *)(param_1 + 0x78)) / 1000.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return dVar1;
}



/* Entry: 107a4ba6c; end: 107a4ba73; -[SCLongformShowOperaSession bloopsMetadata] */

undefined8 FUN_107a4ba6c(void)

{
  return 0;
}



/* Entry: 107a4ba74; end: 107a4ba7b; -[SCLongformShowOperaSession currentChapterIdentifier] */

void FUN_107a4ba74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_identifier_1125d7178)
  ;
  return;
}



/* Entry: 107a4ba7c; end: 107a4baa3; -[SCLongformShowOperaSession lastPositionMs] */

void FUN_107a4ba7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a4baa4; end: 107a4bacb; -[SCLongformShowOperaSession lastWatchedEditionId] */

void FUN_107a4baa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a4bacc; end: 107a4bae7; -[SCLongformShowOperaSession shouldGeneratePreviewForShowWithId:] */

uint FUN_107a4bacc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 400);
  func_0x00010bf4b900(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 107a4bae8; end: 107a4be8f; -[SCLongformShowOperaSession _displayShowProfileForPage:] */

void FUN_107a4bae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be5aec0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf01420(), (int)lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c11b1e0();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf5b7e0(uVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b64b8;
    _objc_opt_new(PTR_PTR_1126b64b8);
    lVar2 = lVar1;
    func_0x00010c237cc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201be0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c116a20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174420(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    uVar3 = uVar5;
    func_0x00010c080120(uVar5);
    func_0x00010c20f460(puVar4,param_2,uVar3);
    uVar3 = uVar5;
    func_0x00010c079480(uVar5);
    func_0x00010c1d5c40(puVar4,param_2,uVar3);
    lVar2 = lVar1;
    func_0x00010c11b1e0(lVar1);
    func_0x00010c1e5b60(puVar4,param_2,lVar2);
    lVar2 = lVar1;
    func_0x00010c116fc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d74a0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126b0f10;
    _objc_alloc();
    func_0x00010c033440();
    puVar7 = PTR_PTR_1126ce808;
    func_0x00010c29d480(PTR_PTR_1126ce808,param_2,*(undefined8 *)(param_1 + 0xa0));
    if ((int)puVar7 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      puVar7 = puVar4;
      func_0x00010bf24ec0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 0x298;
      _objc_loadWeakRetained(lVar2);
      lVar9 = lVar2;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c27f020();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c0ea860(param_1);
      param_1 = param_1 + 0x298;
      _objc_loadWeakRetained();
      lVar12 = param_1;
      func_0x00010bf99b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfea020(uVar3,param_2,1,puVar7,1,puVar6,lVar10,lVar11 == 1,0,lVar12,param_3);
      _objc_release(lVar12);
      _objc_release(param_1);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar2);
    }
    else {
      puVar7 = PTR_PTR_1126b4158;
      _objc_alloc(PTR_PTR_1126b4158);
      puVar8 = puVar4;
      func_0x00010bf24ec0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 0x298;
      _objc_loadWeakRetained(lVar2);
      lVar9 = lVar2;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c27f020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0;
      func_0x00010bb0584c(0);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c0ea860();
      func_0x00010c03c180(puVar7,param_2,puVar8,param_1,lVar10,
                          &PTR____CFConstantStringClassReference_110eaa658,uVar3,0,lVar11 == 1);
      _objc_release(uVar3);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar2);
      _objc_release(puVar8);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xf8),param_2,puVar7);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4be90; end: 107a4c04b; -[SCLongformShowOperaSession _editionDeeplinkURLForPage:] */

void FUN_107a4be90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = param_1;
  func_0x00010be5aec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf8c980(lVar1);
    func_0x00010c0df7c0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc4658);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c116a20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c067fc0(uVar6);
    func_0x00010c0df780(puVar7,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5e360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfbf900(uVar5,param_2,lVar2,puVar4,&PTR____CFConstantStringClassReference_110dc1558,
                        puVar3,&PTR____CFConstantStringClassReference_110eaa6d8,param_1,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 107a4c04c; end: 107a4c19f; -[SCLongformShowOperaSession _presentScreenshotShareUpsellForPage:] */

void FUN_107a4c04c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be5aec0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x160) != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54840();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107a4c1a0; end: 107a4c1e7;  */

void FUN_107a4c1a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a4c1e8; end: 107a4c29f; -[SCLongformShowOperaSession _screenshotSharingConfigurationForPage:] */

void FUN_107a4c1e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010be070a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0e20(param_1,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b43b8;
  _objc_alloc(PTR_PTR_1126b43b8);
  func_0x00010c0538c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a4c2a0; end: 107a4c5bf; -[SCLongformShowOperaSession _sendShowProfileForPage:] */

void FUN_107a4c2a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be5aec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) goto LAB_107a4c570;
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar4 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_retain(puVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined **)(param_1 + 0x1c0) = puVar3;
  _objc_release(uVar7);
  lVar4 = param_1;
  func_0x00010be070a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b0810;
  _objc_alloc();
  func_0x00010c046120();
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x000107a59624();
  }
  puVar9 = PTR_PTR_1126b0818;
  _objc_alloc();
  puVar10 = puVar9;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf45500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044540();
  _objc_release(lVar5);
  _objc_release(puVar10);
  puVar10 = puVar9;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined **)(param_1 + 0x1d0) = puVar10;
  _objc_release(uVar7);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x000108534b70();
  if (iVar1 == 0) {
LAB_107a4c49c:
    uVar12 = 0;
    uStack_70 = 0;
  }
  else {
    lVar5 = param_1 + 0x110;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x000108faa874();
    _objc_release(lVar5);
    if ((int)lVar6 == 0) goto LAB_107a4c49c;
    uVar11 = param_1 + 0x110;
    _objc_loadWeakRetained();
    uVar12 = uVar11;
    func_0x000108faa888();
    _objc_release(uVar11);
    uStack_70 = 1;
  }
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(lVar4);
  _objc_retain(puVar9);
  func_0x00010bea0be0(param_1);
  if ((uVar12 & 1) == 0) {
    func_0x00010be70d80(param_1);
  }
  _objc_release(puVar9);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(puVar3);
LAB_107a4c570:
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107a4c5c0; end: 107a4c6e7;  */

void FUN_107a4c5c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x108);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15d5c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bea0e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23ee0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(uVar2);
    if (*(long *)(lVar1 + 0xf0) == 0) {
      if (*(long *)(lVar1 + 0x100) != 0) {
        func_0x00010c08b7c0();
      }
    }
    else {
      func_0x00010bf9d620();
    }
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a4c6e8; end: 107a4c8b3; -[SCLongformShowOperaSession _handleCopyLinkForPage:] */

void FUN_107a4c6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be5aec0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar7 = param_1 + 0x298;
    _objc_loadWeakRetained(lVar7);
    lVar3 = lVar7;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar2,param_2,lVar4,1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined **)(param_1 + 0x1c0) = puVar2;
    _objc_release(uVar5);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010be070a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bea0e20(param_1,param_2,lVar7,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar6 = PTR_PTR_1126b3ee8;
    _objc_alloc(PTR_PTR_1126b3ee8);
    func_0x00010c045aa0();
    lVar7 = *(long *)(param_1 + 0x170);
    if (lVar7 == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf57580();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x170);
      *(undefined8 *)(param_1 + 0x170) = uVar9;
      _objc_release(uVar10);
      _objc_release(uVar8);
      lVar7 = *(long *)(param_1 + 0x170);
    }
    func_0x00010bfd26e0(lVar7,param_2,0xf);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4c8b4; end: 107a4cbe3; -[SCLongformShowOperaSession _updateSubscribeStatusForPage:params:show:] */

void FUN_107a4c8b4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = param_4;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b5bf0;
    func_0x00010c25fd00(PTR_PTR_1126b5bf0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR_PTR_1126b5bf0;
      func_0x00010c25fd00(PTR_PTR_1126b5bf0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar1);
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      goto LAB_107a4ca38;
    }
    puVar4 = PTR_PTR_1126b2cf0;
    func_0x00010c260360(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) goto LAB_107a4ca90;
    puVar4 = PTR_PTR_1126b2cf0;
    func_0x00010c260360(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar1 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar4);
    puVar4 = puVar2;
    if (((ulong)puVar1 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf5b7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c080120(uVar6);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      goto LAB_107a4ca38;
    }
  }
  else {
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
LAB_107a4ca38:
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) goto LAB_107a4ca90;
    func_0x00010bf1f3c0(puVar2);
    uVar6 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7c60(param_1);
    _objc_release(uVar6);
    puVar4 = puVar2;
  }
  _objc_release(puVar4);
LAB_107a4ca90:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4cbe4; end: 107a4cd3f; -[SCLongformShowOperaSession _updateFavoriteStatusForPage:params:] */

void FUN_107a4cbe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  FUN_107b2883c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR_PTR_1126b5bf0;
  func_0x00010bfa1100(PTR_PTR_1126b5bf0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf1f3c0(uVar4);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010bf1f3c0();
  if ((int)puVar3 == 0) {
    func_0x000107b28768(*(undefined8 *)(param_1 + 0x198),uVar2,0,0,
                        &PTR___NSConcreteGlobalBlock_1109f7110);
  }
  else {
    FUN_107b28694(*(undefined8 *)(param_1 + 0x198),uVar2,0,0,&PTR___NSConcreteGlobalBlock_1109f70f0)
    ;
  }
  _objc_release(puVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a4cd40; end: 107a4cd47;  */

void FUN_107a4cd40(void)

{
  return;
}



/* Entry: 107a4cd48; end: 107a4cff3; -[SCLongformShowOperaSession _updateNotificationStatusWithPage:params:show:] */

void FUN_107a4cd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  uVar1 = 3;
  if ((int)uVar3 == 0) {
    uVar1 = 4;
  }
  puVar4 = PTR_PTR_1126b5bf0;
  func_0x00010c0ebe20(PTR_PTR_1126b5bf0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 != 0) {
    func_0x00010bf1f3c0();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)uVar3 != 0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107a4cff4;
      puStack_88 = &UNK_110842e18;
      uStack_80 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_a0);
    }
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107a4d000;
    puStack_c0 = &UNK_11084d5f8;
    _objc_retain(param_3);
    ppuVar6 = &puStack_d8;
    uStack_b8 = param_3;
    uStack_b0 = param_1;
    uStack_a8 = (char)uVar3;
    _objc_retainBlock();
    puVar4 = PTR_PTR_1126d6050;
    _objc_alloc(PTR_PTR_1126d6050);
    func_0x00010c11b1e0(param_5);
    func_0x00010c03c080(puVar4);
    _objc_initWeak(auStack_e0,param_1);
    _objc_retain(ppuVar6);
    _objc_copyWeak(auStack_f8,auStack_e0);
    _objc_retain(param_5);
    uStack_f0 = uVar1;
    uStack_e8 = (char)uVar3;
    func_0x00010c288320(puVar4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_f8);
    _objc_release(ppuVar6);
    _objc_destroyWeak(auStack_e0);
    _objc_release(puVar4);
    _objc_release(ppuVar6);
    _objc_release(uStack_b8);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a4cff4; end: 107a4cfff;  */

undefined8 FUN_107a4cff4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = uVar2;
  _objc_retain();
  func_0x00010c079e00();
  if ((int)uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126aed70;
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010c135f60(uVar1);
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      puVar4 = PTR_PTR_1126aed70;
      ppuVar6 = &PTR____CFConstantStringClassReference_110daf8b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      puVar5 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      ppuVar6 = &PTR____CFConstantStringClassReference_110ead038;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ead038,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &PTR____CFConstantStringClassReference_110e5f7f8;
      uVar11 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f7f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar5);
      _objc_release(puVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      uVar9 = 0;
      func_0x0001008cd514(0);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      func_0x00010c10eda0(uVar10);
      _objc_release(uVar10);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return uVar2;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar11,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_1109faa70);
  return uVar11;
}



/* Entry: 107a4d000; end: 107a4d0af;  */

void FUN_107a4d000(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010c11b700(PTR_PTR_1126c9310,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    FUN_107b00c44(puVar1,*(undefined1 *)(param_1 + 0x30),
                  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1a8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a4d0b0; end: 107a4d23b; -[SCLongformShowOperaSession _announceFeedItemActionEventForShowIfNecessary:actionType:interactionContext:] */

void FUN_107a4d0b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf82000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x140);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf82000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    lVar3 = lVar2;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
    FUN_107cb4cfc(param_4,lVar3,param_5,*(undefined8 *)(param_1 + 0xa8));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0d3c80();
    _objc_release(param_4);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c079c60(param_1);
    func_0x00010c0df6e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar5);
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar6);
      _objc_release(param_1);
    }
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4d23c; end: 107a4d4b3; -[SCLongformShowOperaSession _logStoryFeedItemActionForShow:params:event:] */

void FUN_107a4d23c(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) goto LAB_107a4d484;
  lVar3 = param_3;
  func_0x00010bf82000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) goto LAB_107a4d484;
  uVar4 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf82000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar5 = uVar4;
  func_0x00010c25bac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126c9400;
  func_0x00010c157400(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar6);
  if ((int)uVar4 == 0) {
    puVar6 = PTR_PTR_1126c9400;
    func_0x00010c269700(PTR_PTR_1126c9400);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    uVar4 = 0x44;
    if ((int)uVar9 == 0) {
      uVar4 = 0xffffffffffffffff;
    }
LAB_107a4d40c:
    uVar9 = 5;
  }
  else {
    puVar6 = PTR_PTR_1126c9408;
    func_0x00010c157060(PTR_PTR_1126c9408);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar1 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c067ec0();
    _objc_release(uVar1);
    uVar2 = (int)uVar7 - 1;
    if (3 < uVar2) {
      uVar4 = 0xffffffffffffffff;
      goto LAB_107a4d40c;
    }
    uVar9 = *(undefined8 *)(&UNK_10dee0c58 + (ulong)uVar2 * 8);
    uVar4 = *(undefined8 *)(&UNK_10dee0c78 + (ulong)uVar2 * 8);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cb4ebc(uVar4,uVar5,3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar10);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar5);
LAB_107a4d484:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4d4b4; end: 107a4d593; -[SCLongformShowOperaSession _longformShowOperaDataModelForPage:] */

void FUN_107a4d4b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010c2805a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    lVar3 = param_1 + 0x2a0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c1014c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar7 = param_1 + 0x2a0;
    _objc_loadWeakRetained();
    uVar5 = uVar7;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126bdd30;
    _objc_opt_class(PTR_PTR_1126bdd30);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar7 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 107a4d594; end: 107a4d667; -[SCLongformShowOperaSession _updatePlaylistItemIfNecessaryForCurrentChapter:previousChapter:] */

void FUN_107a4d594(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (lVar2 = param_1, func_0x00010beb6fc0(), (int)lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    FUN_107a539dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      param_1 = param_1 + 0x2a0;
      _objc_loadWeakRetained(param_1);
      func_0x00010c101400();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a4d668; end: 107a4d8ff; -[SCLongformShowOperaSession _shouldUpdatePlaylistItemForCurrentChapter:previousChapter:] */

uint FUN_107a4d668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar9 = *(long *)(param_1 + 0x30);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  FUN_107a53668();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar9);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  FUN_107a53668();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  _objc_retain(lVar3);
  if (lVar2 == lVar3) {
    _objc_release(lVar3);
    _objc_release(lVar2);
LAB_107a4d794:
    lVar4 = lVar1;
    func_0x00010c0ef980();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9;
    func_0x00010c0ef980();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar4);
    _objc_retain(lVar5);
    if (lVar4 == lVar5) {
      _objc_release(lVar5);
      _objc_release(lVar4);
LAB_107a4d820:
      lVar6 = lVar1;
      func_0x00010bfb1200();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar9;
      func_0x00010bfb1200();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar6);
      _objc_retain(lVar7);
      if (lVar6 == lVar7) {
        uVar10 = 0;
      }
      else if (lVar7 == 0) {
        uVar10 = 1;
      }
      else {
        lVar8 = lVar6;
        func_0x00010c071ae0(lVar6);
        uVar10 = (uint)lVar8 ^ 1;
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar7);
LAB_107a4d8a8:
      _objc_release(lVar6);
    }
    else {
      if (lVar5 == 0) {
        uVar10 = 1;
        lVar6 = lVar4;
        goto LAB_107a4d8a8;
      }
      lVar6 = lVar4;
      func_0x00010c071ae0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if ((int)lVar6 != 0) goto LAB_107a4d820;
      uVar10 = 1;
    }
    _objc_release(lVar5);
  }
  else {
    if (lVar3 != 0) {
      lVar4 = lVar2;
      func_0x00010c071ae0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)lVar4 == 0) {
        uVar10 = 1;
        goto LAB_107a4d8c0;
      }
      goto LAB_107a4d794;
    }
    uVar10 = 1;
    lVar4 = lVar2;
  }
  _objc_release(lVar4);
LAB_107a4d8c0:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar1);
  return uVar10;
}



/* Entry: 107a4d900; end: 107a4db2f; -[SCLongformShowOperaSession didDismissWithRecipientsCount:groupsCount:] */

void FUN_107a4d900(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar3 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  *(long *)(param_1 + 0xe0) = param_4 + param_3 + *(long *)(param_1 + 0xe0);
  func_0x00010c0a38a0(*(undefined8 *)(param_1 + 0x28));
  lVar3 = *(long *)(param_1 + 0xe8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c150520(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf6f440(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xe8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be95dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeOpera_112583110);
  return;
}



/* Entry: 107a4db30; end: 107a4db5b;  */

void FUN_107a4db30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a4db5c; end: 107a4dccf; -[SCLongformShowOperaSession didSendWithSelectionState:] */

void FUN_107a4db5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0xf0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xf0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_48,param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x100);
  func_0x00010c076220();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107a4dcd0;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf94c40(uVar3);
    _objc_destroyWeak(auStack_50);
  }
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107a4dcfc;
  puStack_88 = &UNK_110841fb0;
  _objc_copyWeak(auStack_78,auStack_48);
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_a0);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}


