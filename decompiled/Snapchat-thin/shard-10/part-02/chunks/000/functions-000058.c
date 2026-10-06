/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107aca610; end: 107aca837; -[SCPublisherStoryReportSession _startBloopsReportFlowWithPage:] */

void FUN_107aca610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c9310;
  _objc_retain(param_3);
  func_0x00010c11b200(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c11b700(PTR_PTR_1126c9310,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9310;
  func_0x00010bf8c9a0(PTR_PTR_1126c9310,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9310;
  func_0x00010c259760(PTR_PTR_1126c9310,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar4;
  _objc_release(uVar12);
  puVar4 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126d62e8;
  _objc_alloc(PTR_PTR_1126d62e8);
  puVar6 = puVar1;
  func_0x00010c25d700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c0c0(puVar5,param_2,puVar6,puVar2,puVar3,puVar4,PTR____NSArray0__struct_11034ab48,0
                     );
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126d62f0;
  func_0x00010c25bb40(PTR_PTR_1126d62f0,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar8 = param_1 + 8;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar7,param_2,lVar10,1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  puVar11 = PTR_PTR_1126d62f8;
  _objc_alloc(PTR_PTR_1126d62f8);
  func_0x00010c0338e0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aca838; end: 107acac63; -[SCPublisherStoryReportSession _onReportSubmittedWithReasonId:] */

void FUN_107aca838(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb6898);
  uVar1 = 0xf;
  if ((int)param_3 != 0) {
    uVar1 = 0x10;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00010c282800();
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      uVar2 = param_1;
      func_0x00010c0feba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar10 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar10);
      uVar5 = uVar2;
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      if (uVar5 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        uVar3 = uVar2;
        func_0x00010bfa4340(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126b1118;
        _objc_alloc(PTR_PTR_1126b1118);
        uVar4 = uVar3;
        func_0x00010c282800(uVar3);
        func_0x000108f53fe8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c043160(puVar10);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar2);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = param_1;
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      FUN_107cb55f8(uVar1,lVar8,puVar10,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar9);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar10);
    }
  }
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x107acaa74;
  puStack_70 = &UNK_110844b80;
  lStack_68 = lVar7;
  lStack_60 = lVar8;
  uStack_58 = uVar1;
  _objc_retain(lVar8);
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(lStack_60);
  _objc_release(lVar8);
  _objc_release(lVar7);
  return;
}



/* Entry: 107acac64; end: 107acacdf; -[SCPublisherStoryReportSession _autoAdvanceToNextStory] */

void FUN_107acac64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c98a0;
  func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6060(lVar1,param_2,1,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107acace0; end: 107acad67; -[SCPublisherStoryReportSession _removeStoryFromPlaylist] */

void FUN_107acace0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      param_1 = param_1 + 0x58;
      _objc_loadWeakRetained(param_1);
      func_0x00010c12b960(lVar1,param_2,uVar2,param_1);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 107acad68; end: 107acad6f; -[SCPublisherStoryReportSession playableDataModel] */

undefined8 FUN_107acad68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107acad70; end: 107acad9f; -[SCPublisherStoryReportSession setPlayableDataModel:] */

void FUN_107acad70(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107acada0; end: 107acae43; -[SCPublisherStoryReportSession .cxx_destruct] */

void FUN_107acada0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107acae44; end: 107acae4f; +[SCSingleDiscoverPublisherOperaSession announcerIdentifier] */

undefined ** FUN_107acae44(void)

{
  return &PTR____CFConstantStringClassReference_110eac378;
}



/* Entry: 107acae50; end: 107acae57; -[SCSingleDiscoverPublisherOperaSession addListener:] */

void FUN_107acae50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107acae58; end: 107acae5f; -[SCSingleDiscoverPublisherOperaSession removeListener:] */

void FUN_107acae58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107acae60; end: 107acae67; -[SCSingleDiscoverPublisherOperaSession didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107acae60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe8),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 107acae68; end: 107acba37; -[SCSingleDiscoverPublisherOperaSession initWithOperaEventAnnouncing:viewContext:storyPlayableDataModel:userSession:operaControlling:playlistItemController:loggingContext:subscriptionStore:snapDocConfigurer:publisherPagePropertiesManager:cachedViewStateProvider:legacyStoriesTooltipsService:readReceiptCoordinator:videoFilterAdaptor:permissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:storiesGrapheneMetricsEmitter:previewFilterDataProviderCreator:networkConnectivityMonitor:notificationPool:circumstanceEngine:imageDownloader:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:lazyDiscoverFeedEventsLogger:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:bitmojiImageFetcher:discoverFeedNotificationOptInRequestManager:discoverBlizzardLogger:offPlatformLinkGenerationService:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:externalLinkSendingService:lazyUserTrackedLogger:grapheneRegistry:boostCoordinator:subscriptionWorkflowStarter:offPlatformShareServices:snapDocEditorFactory:previewSnapSenderFactory:triggeringSection:storiesConfigProvider:] */

undefined8 *
FUN_107acae68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain();
  _objc_retain(param_48);
  _objc_retain(param_50);
  puStack_70 = PTR_PTR_1126f9ae0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar7 = puVar1[0x1d];
    puVar1[0x1d] = puVar2;
    _objc_release(uVar7);
    puVar1[0x49] = param_4;
    _objc_storeWeak(puVar1 + 0x10,param_3);
    _objc_retain();
    puVar3 = puVar1;
    func_0x00010c127820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_3);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_retain(param_5);
    uVar7 = puVar1[0x4f];
    puVar1[0x4f] = param_5;
    _objc_release(uVar7);
    _objc_storeWeak(puVar1 + 1,param_6);
    _objc_storeWeak(puVar1 + 0x11,param_7);
    _objc_storeWeak(puVar1 + 4,param_11);
    puVar2 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar7 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar7 = puVar1[0x14];
    puVar1[0x14] = puVar2;
    _objc_release(uVar7);
    _objc_storeWeak(puVar1 + 0x12,param_8);
    _objc_retain(param_9);
    uVar7 = puVar1[0x45];
    puVar1[0x45] = param_9;
    _objc_release(uVar7);
    puVar3 = puVar1 + 3;
    _objc_storeWeak(puVar3,param_10);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x44];
    puVar1[0x44] = puVar3;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x4b];
    puVar1[0x4b] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x19];
    puVar1[0x19] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x1a];
    puVar1[0x1a] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x1b];
    puVar1[0x1b] = puVar2;
    _objc_release(uVar7);
    puVar1[0x47] = 0x7fffffffffffffff;
    uVar7 = puVar1[0x48];
    puVar1[0x48] = 0;
    _objc_release(uVar7);
    _objc_storeWeak(puVar1 + 5,param_15);
    _objc_storeWeak(puVar1 + 6,param_13);
    _objc_storeWeak(puVar1 + 7,param_14);
    _objc_retain(param_12);
    uVar7 = puVar1[0x1c];
    puVar1[0x1c] = param_12;
    _objc_release(uVar7);
    _objc_retain(param_17);
    uVar7 = puVar1[0x1f];
    puVar1[0x1f] = param_17;
    _objc_release(uVar7);
    _objc_retain(param_18);
    uVar7 = puVar1[0x20];
    puVar1[0x20] = param_18;
    _objc_release(uVar7);
    _objc_retain(param_19);
    uVar7 = puVar1[0x21];
    puVar1[0x21] = param_19;
    _objc_release(uVar7);
    _objc_retain(param_20);
    uVar7 = puVar1[0x22];
    puVar1[0x22] = param_20;
    _objc_release(uVar7);
    _objc_retain(param_16);
    uVar7 = puVar1[0x23];
    puVar1[0x23] = param_16;
    _objc_release(uVar7);
    _objc_retain(param_21);
    uVar7 = puVar1[0x24];
    puVar1[0x24] = param_21;
    _objc_release(uVar7);
    _objc_storeWeak(puVar1 + 8,param_22);
    _objc_retain(param_23);
    uVar7 = puVar1[9];
    puVar1[9] = param_23;
    _objc_release(uVar7);
    _objc_retain(param_24);
    uVar7 = puVar1[0xb];
    puVar1[0xb] = param_24;
    _objc_release(uVar7);
    _objc_retain(param_26);
    uVar7 = puVar1[0x2a];
    puVar1[0x2a] = param_26;
    _objc_release(uVar7);
    _objc_retain(param_27);
    uVar7 = puVar1[0xc];
    puVar1[0xc] = param_27;
    _objc_release(uVar7);
    _objc_retain(param_28);
    uVar7 = puVar1[0x2b];
    puVar1[0x2b] = param_28;
    _objc_release(uVar7);
    _objc_retain(param_29);
    uVar7 = puVar1[0x2c];
    puVar1[0x2c] = param_29;
    _objc_release(uVar7);
    _objc_retain(param_30);
    uVar7 = puVar1[0x2d];
    puVar1[0x2d] = param_30;
    _objc_release(uVar7);
    _objc_retain(param_31);
    uVar7 = puVar1[0x2e];
    puVar1[0x2e] = param_31;
    _objc_release(uVar7);
    _objc_retain(param_32);
    uVar7 = puVar1[0x2f];
    puVar1[0x2f] = param_32;
    _objc_release(uVar7);
    _objc_retain(param_33);
    uVar7 = puVar1[0x30];
    puVar1[0x30] = param_33;
    _objc_release(uVar7);
    _objc_retain(param_34);
    uVar7 = puVar1[0x31];
    puVar1[0x31] = param_34;
    _objc_release(uVar7);
    _objc_retain(param_35);
    uVar7 = puVar1[0x32];
    puVar1[0x32] = param_35;
    _objc_release(uVar7);
    _objc_retain(param_36);
    uVar7 = puVar1[10];
    puVar1[10] = param_36;
    _objc_release(uVar7);
    _objc_retain(param_37);
    uVar7 = puVar1[0x33];
    puVar1[0x33] = param_37;
    _objc_release(uVar7);
    _objc_retain(param_46);
    uVar7 = puVar1[0x34];
    puVar1[0x34] = param_46;
    _objc_release(uVar7);
    _objc_retain(param_38);
    uVar7 = puVar1[0x35];
    puVar1[0x35] = param_38;
    _objc_release(uVar7);
    _objc_retain(param_39);
    uVar7 = puVar1[0x36];
    puVar1[0x36] = param_39;
    _objc_release(uVar7);
    _objc_retain(param_41);
    uVar7 = puVar1[0x38];
    puVar1[0x38] = param_41;
    _objc_release(uVar7);
    _objc_retain(param_42);
    uVar7 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = puVar1[0x29];
    puVar1[0x29] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar7 = puVar1[0x26];
    puVar1[0x26] = puVar2;
    _objc_release(uVar7);
    _objc_retain(param_25);
    uVar7 = puVar1[0x27];
    puVar1[0x27] = param_25;
    _objc_release(uVar7);
    _objc_retain(param_40);
    uVar7 = puVar1[0x37];
    puVar1[0x37] = param_40;
    _objc_release(uVar7);
    _objc_retain(param_43);
    uVar7 = puVar1[0x39];
    puVar1[0x39] = param_43;
    _objc_release(uVar7);
    _objc_retain(param_44);
    uVar7 = puVar1[0x3a];
    puVar1[0x3a] = param_44;
    _objc_release(uVar7);
    _objc_retain(param_45);
    uVar7 = puVar1[0x3b];
    puVar1[0x3b] = param_45;
    _objc_release(uVar7);
    _objc_retain(param_48);
    uVar7 = puVar1[0x3d];
    puVar1[0x3d] = param_48;
    _objc_release(uVar7);
    puVar1[0x3e] = param_49;
    uVar8 = param_50;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c25a560();
    *(char *)(puVar1 + 0x3f) = (char)uVar7;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = puVar1[0x41];
    puVar1[0x41] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = puVar1[0x40];
    puVar1[0x40] = puVar2;
    _objc_release(uVar7);
    puVar1[0x42] = 0;
    func_0x00010bec7f60(puVar1);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = puVar1 + 8;
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010c0d7de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    puVar6 = puVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010beb0120(puVar1);
    func_0x00010bdc7960(puVar1);
    uVar8 = puVar1[0x49];
    uVar7 = puVar1[0x4f];
    func_0x00010c11b3a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_107ab8ba8(uVar8,uVar7);
    _objc_release(uVar7);
    _objc_retain(param_47);
    uVar7 = puVar1[0x3c];
    puVar1[0x3c] = param_47;
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_50);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107acba38; end: 107acba7f;  */

void FUN_107acba38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107acba80; end: 107acba8f; -[SCSingleDiscoverPublisherOperaSession viewWillEnterForeground] */

void FUN_107acba80(long param_1)

{
  if (*(long *)(param_1 + 0x278) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startSessionTimer_11258dfb8);
    return;
  }
  return;
}



/* Entry: 107acba90; end: 107acbc1f; -[SCSingleDiscoverPublisherOperaSession beginViewingEdition:] */

void FUN_107acba90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  func_0x00010bec1840(param_1);
  lVar9 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar1 = lVar9;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
    _objc_release(lVar9);
  }
  else {
    lVar2 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27dd80();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar9);
    if (lVar5 == 5) {
      puVar6 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(param_1 + 0xb0);
      *(undefined **)(param_1 + 0xb0) = puVar6;
      goto LAB_107acbbbc;
    }
  }
  lVar9 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar1 = lVar9;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar2;
  _objc_release(uVar7);
  _objc_release(lVar1);
LAB_107acbbbc:
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x00010c08fa60();
  if ((lVar9 != 0) && (*(long *)(param_1 + 0x280) == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x278);
    FUN_107ab8350(uVar7,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x280) = uVar7;
    _objc_release(uVar8);
  }
  func_0x00010bede900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107acbc20; end: 107acbdaf; -[SCSingleDiscoverPublisherOperaSession endSession] */

void FUN_107acbc20(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x98));
  *(undefined8 *)(param_2 + 0x230) = param_1;
  func_0x00010c137fe0(*(undefined8 *)(param_2 + 0x98));
  lVar5 = *(long *)(param_2 + 0x278);
  uVar2 = *(undefined8 *)(param_2 + 0x228);
  bVar1 = *(byte *)(param_2 + 0xc2);
  func_0x00010c25b040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar5 != 0) && ((bVar1 & 1) == 0)) {
    func_0x00010c0a55a0(*(undefined8 *)(param_2 + 0x50),param_3,uVar2);
  }
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 600);
  *(undefined **)(param_2 + 600) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 200);
  *(undefined **)(param_2 + 200) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined **)(param_2 + 0xd0) = puVar3;
  _objc_release(uVar2);
  if (*(long *)(param_2 + 0x278) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x280);
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_2 + 0x280);
    func_0x00010bef60a0(lVar4);
    lVar5 = param_2;
    func_0x00010bf60120(param_2);
    func_0x00010bf78480(*(undefined8 *)(param_2 + 0x50),param_3,uVar2,lVar4 != 0,
                        &PTR____CFConstantStringClassReference_110daafd8,lVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x278);
  }
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010bf8c980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8ca00(puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained(param_2);
  func_0x00010c12ba20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107acbdb0; end: 107acbdb3; -[SCSingleDiscoverPublisherOperaSession teardown] */

void FUN_107acbdb0(void)

{
  return;
}



/* Entry: 107acbdb4; end: 107acc0bb; -[SCSingleDiscoverPublisherOperaSession extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107acbdb4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  if (uVar4 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,0);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c23ffa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000107ab8788(uVar3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar6 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
    }
    iVar13 = (int)*(undefined8 *)(param_1 + 0xd8);
    uVar3 = uVar1;
    func_0x00010bfe5ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar3);
    if (iVar13 != 0) {
      func_0x00010c1d0640(puVar2);
      func_0x00010c1d0640(puVar12);
    }
    lVar7 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0d6c60();
    _objc_release(lVar8);
    _objc_release(lVar7);
    if (lVar9 == 0) {
      uVar3 = param_1 + 0x38;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfdb860();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar5 & 1) == 0) {
        puVar10 = PTR_PTR_1126c9ae8;
        func_0x00010bfc1ca0(PTR_PTR_1126c9ae8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar10);
      }
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar10);
    }
    if (param_6 != 0) {
      puVar10 = puVar2;
      func_0x00010bf51e00(puVar2);
      puVar11 = puVar12;
      func_0x00010bf51e00(puVar12);
      (**(code **)(param_6 + 0x10))(param_6,puVar10,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
    _objc_release(puVar12);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107acc0bc; end: 107acc113; -[SCSingleDiscoverPublisherOperaSession _addNotifications] */

void FUN_107acc0bc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107acc114; end: 107acc13f; -[SCSingleDiscoverPublisherOperaSession userDidTakeScreenshot] */

void FUN_107acc114(long param_1)

{
  func_0x00010c0aed00(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010be8f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportCurationSnapReadReceitptI_112581718,1)
  ;
  return;
}



/* Entry: 107acc140; end: 107acc18b; -[SCSingleDiscoverPublisherOperaSession _fetchMediaIfNecessaryFromConnectivityUpdate:] */

void FUN_107acc140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x00010bf5e480(param_3);
  func_0x00010c06f020();
  if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be12710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMediaIfNecessary_112562360);
    return;
  }
  return;
}



/* Entry: 107acc18c; end: 107acc47f; -[SCSingleDiscoverPublisherOperaSession registeredEventsForOperaSession] */

undefined * FUN_107acc18c(void)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  ulong uVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
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
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_108 = puVar25;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_100 = puVar1;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_f8 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9460;
  puStack_f0 = puVar3;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9460;
  puStack_e8 = puVar4;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9460;
  puStack_e0 = puVar5;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9460;
  puStack_d8 = puVar6;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9c10;
  puStack_d0 = puVar7;
  func_0x00010bf3de20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c95c8;
  puStack_c8 = puVar8;
  func_0x00010c09d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c95c8;
  puStack_c0 = puVar9;
  func_0x00010c09cce0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9c10;
  puStack_b8 = puVar10;
  func_0x00010bf1d800();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c9c10;
  puStack_b0 = puVar11;
  func_0x00010bf1d6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ca2c0;
  puStack_a8 = puVar12;
  func_0x00010c0ebf60();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2338;
  puStack_a0 = puVar13;
  func_0x00010c2612e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b2638;
  puStack_98 = puVar14;
  func_0x00010bf7b7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2338;
  puStack_90 = puVar15;
  func_0x00010c0f60e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b2338;
  puStack_88 = puVar16;
  func_0x00010c13d9e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ebebb8;
  ppuVar23 = &puStack_108;
  lVar24 = 0x13;
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
    return puVar18;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar23);
  _objc_retain(lVar24);
  uVar19 = *(undefined8 *)(puVar25 + 0x278);
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010c2805a0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  _objc_release(uVar19);
  if ((int)uVar20 == 0) {
    puVar25 = (undefined *)0x0;
    goto LAB_107acc5bc;
  }
  if (lVar24 == 0) {
    puVar25 = (undefined *)0x1;
    goto LAB_107acc5bc;
  }
  lVar26 = *(long *)(puVar25 + 0x278);
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ab8350(lVar26,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar26 == 0) {
LAB_107acc590:
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar23;
    func_0x00010c0720c0();
    if ((int)ppuVar21 == 0) {
      _objc_release(puVar1);
    }
    else {
      uVar22 = *(ulong *)(puVar25 + 0x280);
      func_0x00010c071ae0();
      _objc_release(puVar1);
      if ((uVar22 & 1) == 0) goto LAB_107acc590;
    }
    puVar25 = (undefined *)0x1;
  }
  _objc_release(lVar26);
LAB_107acc5bc:
  _objc_release(lVar24);
  _objc_release(ppuVar23);
  return puVar25;
}



/* Entry: 107acc480; end: 107acc5e7; -[SCSingleDiscoverPublisherOperaSession _shouldHandleEvent:page:params:] */

undefined8 FUN_107acc480(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c2805a0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar4 = 0;
    goto LAB_107acc5bc;
  }
  if (param_4 == 0) {
    uVar4 = 1;
    goto LAB_107acc5bc;
  }
  lVar5 = *(long *)(param_1 + 0x278);
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ab8350(lVar5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar5 == 0) {
LAB_107acc590:
    uVar4 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      _objc_release(puVar2);
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x280);
      func_0x00010c071ae0();
      _objc_release(puVar2);
      if ((uVar3 & 1) == 0) goto LAB_107acc590;
    }
    uVar4 = 1;
  }
  _objc_release(lVar5);
LAB_107acc5bc:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107acc5e8; end: 107acd213; -[SCSingleDiscoverPublisherOperaSession operaViewDidSendEvent:page:params:] */

void FUN_107acc5e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010beb3ee0();
  if ((int)lVar1 == 0) goto LAB_107acc99c;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar12 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar12 != 0) {
      func_0x00010bec2120(param_1);
      puVar2 = PTR_PTR_1126b2348;
      func_0x00010c0c5ec0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x270);
      *(ulong *)(param_1 + 0x270) = uVar10;
      _objc_release(uVar12);
      _objc_release(puVar2);
      func_0x00010c1c4ee0(*(undefined8 *)(param_1 + 0x78));
      puVar2 = PTR_PTR_1126b2340;
      uVar10 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c077260();
      _objc_release(uVar10);
      if ((int)puVar2 != 0) {
        lVar1 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c0f5c60();
        _objc_release(lVar1);
      }
      uVar10 = param_1 + 0x10;
      _objc_loadWeakRetained(uVar10);
      uVar12 = *(undefined8 *)(param_1 + 0x280);
      func_0x00010bfe5ec0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf49920(uVar10);
      _objc_release(uVar12);
      goto LAB_107acc998;
    }
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar12 != 0) {
      func_0x00010be09f60(param_1);
      *(undefined1 *)(param_1 + 0x218) = 0;
      goto LAB_107acc99c;
    }
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar12 != 0) {
      _objc_release(puVar2);
LAB_107acca88:
      uVar10 = *(ulong *)(param_1 + 0xb8);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x280);
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar5;
        func_0x00010c08fa60();
        _objc_release(lVar5);
        _objc_release(uVar3);
        _objc_release(uVar10);
        if (lVar1 != 0) {
          uVar13 = *(undefined8 *)(param_1 + 0xd8);
          uVar12 = *(undefined8 *)(param_1 + 0x280);
          func_0x00010bfe5ec0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar13);
          _objc_release(uVar12);
          func_0x00010bed6680(param_1);
        }
        goto LAB_107acc99c;
      }
      goto LAB_107acc870;
    }
    puVar9 = PTR_PTR_1126c9460;
    func_0x00010c0f2560(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar9);
    _objc_release(puVar2);
    if ((int)uVar12 != 0) goto LAB_107acca88;
    uVar12 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar12 != 0) {
      *(undefined1 *)(param_1 + 0xc3) = 1;
      func_0x00010be09f60(param_1);
      goto LAB_107acc99c;
    }
    uVar12 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar12 != 0) {
      *(undefined1 *)(param_1 + 0xc3) = 0;
      func_0x00010bec2120(param_1);
      goto LAB_107acc99c;
    }
    puVar2 = PTR_PTR_1126ca2c0;
    func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar12 != 0) {
      *(undefined1 *)(param_1 + 0xc2) = 0;
      goto LAB_107acc99c;
    }
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c2612e0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar12 == 0) {
      puVar2 = PTR_PTR_1126c95c8;
      func_0x00010c09d2c0(PTR_PTR_1126c95c8);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)uVar12 != 0) {
        func_0x00010be12700(param_1);
        goto LAB_107acc99c;
      }
      puVar2 = PTR_PTR_1126c95c8;
      func_0x00010c09cce0(PTR_PTR_1126c95c8);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)uVar12 != 0) {
        _objc_initWeak(auStack_b0,param_1);
        uVar12 = *(undefined8 *)(param_1 + 0x280);
        param_1 = param_1 + 0x20;
        _objc_loadWeakRetained(param_1);
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0xc2000000;
        pcStack_c8 = FUN_107acd228;
        puStack_c0 = &UNK_1109f9848;
        _objc_copyWeak(auStack_b8,auStack_b0);
        FUN_107ab6994(uVar12,param_1,&puStack_d8);
        _objc_release(param_1);
        _objc_destroyWeak(auStack_b8);
        _objc_destroyWeak(auStack_b0);
        goto LAB_107acc99c;
      }
      puVar2 = PTR_PTR_1126c9c10;
      func_0x00010bf1d800(PTR_PTR_1126c9c10);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)uVar12 == 0) {
        puVar2 = PTR_PTR_1126c9c10;
        func_0x00010bf1d6c0(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126b2340;
        if ((int)uVar12 == 0) {
          puVar2 = PTR_PTR_1126c9c10;
          func_0x00010bf3de20(PTR_PTR_1126c9c10);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)uVar12 == 0) {
            puVar2 = PTR_PTR_1126b2638;
            func_0x00010bf7b7a0(PTR_PTR_1126b2638);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)uVar12 == 0) {
              puVar2 = PTR_PTR_1126b2338;
              func_0x00010c0f60e0(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)uVar12 == 0) {
                puVar2 = PTR_PTR_1126b2338;
                func_0x00010c13d9e0(PTR_PTR_1126b2338);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar2);
                if ((int)uVar12 == 0) {
                  uVar12 = param_3;
                  func_0x00010c0720c0();
                  if ((int)uVar12 != 0) {
                    *(undefined1 *)(param_1 + 0x218) = 1;
                  }
                }
                else {
                  func_0x00010c24d960(*(undefined8 *)(param_1 + 0x98));
                }
              }
              else {
                func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x98));
              }
            }
            else {
              puVar2 = PTR_PTR_1126b6008;
              func_0x00010c122f60(PTR_PTR_1126b6008);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              uVar4 = uVar3;
              _objc_opt_isKindOfClass(uVar3,puVar2);
              uVar10 = uVar3;
              if ((uVar4 & 1) == 0) {
                uVar10 = 0;
              }
              _objc_retain(uVar10);
              _objc_release(uVar3);
              puVar2 = PTR_PTR_1126b6008;
              func_0x00010bfcf840(PTR_PTR_1126b6008);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = param_5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              uVar11 = uVar4;
              _objc_opt_isKindOfClass(uVar4,puVar2);
              uVar3 = uVar4;
              if ((uVar11 & 1) == 0) {
                uVar3 = 0;
              }
              _objc_retain(uVar3);
              _objc_release(uVar4);
              if (uVar10 != 0 || uVar3 != 0) {
                uVar4 = uVar10;
                func_0x00010c0b4ca0();
                uVar11 = uVar3;
                func_0x00010c0b4ca0();
                *(ulong *)(param_1 + 0xf0) = uVar11 + uVar4 + *(long *)(param_1 + 0xf0);
              }
              _objc_release(uVar3);
              _objc_release(uVar10);
            }
          }
          else {
            lVar1 = param_1 + 0x38;
            _objc_loadWeakRetained(lVar1);
            lVar5 = lVar1;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a6c40();
            _objc_release(lVar5);
            _objc_release(lVar1);
            lVar1 = param_1 + 0x38;
            _objc_loadWeakRetained(lVar1);
            lVar5 = lVar1;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fa8a0();
            _objc_release(lVar5);
            _objc_release(lVar1);
            lVar1 = param_1 + 0x88;
            _objc_loadWeakRetained(lVar1);
            lVar5 = lVar1;
            func_0x00010c08f5e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18ebe0();
            _objc_release(lVar5);
            _objc_release(lVar1);
            func_0x00010bebb600(param_1);
          }
          goto LAB_107acc99c;
        }
        uVar10 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0771a0();
        if ((int)puVar2 != 0) goto LAB_107acc998;
        uVar3 = param_1 + 0x38;
        _objc_loadWeakRetained();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x00010bfdbc40();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar10);
        if ((uVar11 & 1) != 0) goto LAB_107acc99c;
      }
      func_0x00010bebb600(param_1);
      goto LAB_107acc99c;
    }
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c2612c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9448;
    _objc_opt_class(PTR_PTR_1126c9448);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar10 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c293fe0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar11 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar11 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    func_0x00010bf1f3c0(uVar3);
    _objc_release(uVar3);
    uVar3 = uVar10;
    func_0x00010bf125a0();
    if ((int)uVar3 != 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
    uVar3 = uVar10;
    func_0x00010bf926c0();
    if ((int)uVar3 != 0) {
      *(undefined1 *)(param_1 + 0xc1) = 1;
      uVar3 = uVar10;
      func_0x00010bef0a00();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x260);
      *(ulong *)(param_1 + 0x260) = uVar3;
      _objc_release(uVar12);
    }
    func_0x00010bf926c0(uVar10);
    func_0x00010c0b1480(*(undefined8 *)(param_1 + 0x50));
  }
  else {
    func_0x00010be2d660(param_1);
    uVar3 = *(ulong *)(param_1 + 0x278);
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf51e00();
    _objc_release(uVar3);
    uVar4 = *(ulong *)(param_1 + 0x280);
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf51e00();
    _objc_release(uVar4);
    lVar5 = *(long *)(param_1 + 0x280);
    func_0x00010bef60a0();
    uVar6 = *(undefined8 *)(param_1 + 0x280);
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0f0b40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    func_0x00010c0f0b20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf51e00();
    _objc_release(uVar7);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar6);
    uVar13 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar13);
    uVar12 = *(undefined8 *)(param_1 + 0x280);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107acd214;
    puStack_90 = &UNK_1109f9818;
    uStack_88 = uVar10;
    uStack_80 = uVar3;
    uStack_78 = uVar8;
    uStack_70 = uVar13;
    uStack_68 = lVar5 != 0;
    _objc_retain(uVar13);
    _objc_retain(uVar8);
    _objc_retain(uVar3);
    _objc_retain(uVar10);
    FUN_107ab6994(uVar12,lVar1,&puStack_a8);
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x270);
    *(ulong *)(param_1 + 0x270) = uVar4;
    _objc_release(uVar12);
    _objc_release(puVar2);
    func_0x00010c1c4ee0(*(undefined8 *)(param_1 + 0x78));
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uVar13);
    _objc_release(uVar8);
LAB_107acc870:
    _objc_release(uVar3);
  }
LAB_107acc998:
  _objc_release(uVar10);
LAB_107acc99c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107acd214; end: 107acd227;  */

void FUN_107acd214(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ac630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_logPlaybackItemActionForEditionI_112608b98,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,
             *(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107acd228; end: 107acd25b;  */

void FUN_107acd228(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed6680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107acd25c; end: 107acd263; -[SCSingleDiscoverPublisherOperaSession _showTapTooltipsForCurrentPage:] */

void FUN_107acd25c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x128) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed6690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCurrentPlaylistItem_112593348);
  return;
}



/* Entry: 107acd264; end: 107acd343; -[SCSingleDiscoverPublisherOperaSession _fetchMediaIfNecessary] */

void FUN_107acd264(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x280);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x278);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107acd344;
  puStack_58 = &UNK_1109f9878;
  _objc_copyWeak(auStack_50,auStack_48);
  FUN_107ab72fc(uVar3,lVar1,uVar4,uVar2,&puStack_70);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107acd344; end: 107acd36f;  */

void FUN_107acd344(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107acd370; end: 107acd777; -[SCSingleDiscoverPublisherOperaSession _setupSubSessions] */

void FUN_107acd370(undefined *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if (*(long *)(param_1 + 0x68) == 0) {
    puVar2 = PTR_PTR_1126d6420;
    _objc_alloc();
    func_0x00010c0271a0();
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar2;
    _objc_release(uVar12);
    puVar2 = param_1 + 0x80;
    _objc_loadWeakRetained(puVar2);
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c127820(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar2);
    _objc_release(uVar12);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126d6428;
    _objc_alloc();
    uVar13 = *(undefined8 *)(param_1 + 0x278);
    puVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    puVar4 = param_1 + 0x88;
    _objc_loadWeakRetained();
    puVar5 = param_1 + 0x90;
    _objc_loadWeakRetained();
    uVar14 = *(undefined8 *)(param_1 + 0x228);
    puVar6 = PTR_PTR_1126cecb8;
    func_0x00010c22b6a0(PTR_PTR_1126cecb8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0xf8);
    uVar10 = *(undefined8 *)(param_1 + 0x100);
    uVar15 = *(undefined8 *)(param_1 + 0x108);
    uVar9 = *(undefined8 *)(param_1 + 0x118);
    uVar1 = *(undefined8 *)(param_1 + 0x120);
    puVar7 = param_1 + 0x80;
    _objc_loadWeakRetained();
    uVar16 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x228);
    func_0x00010c29d360();
    func_0x00010c04de80(puVar3,*(undefined8 *)(param_1 + 0x198),uVar13,puVar2,puVar4,puVar5,uVar14,
                        puVar6,uVar9,uVar12,uVar10,uVar15,uVar1,puVar7,uVar16,uVar8,
                        *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x150),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x158),
                        *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
                        *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178),
                        *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
                        *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                        *(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0),
                        *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8),
                        *(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8),
                        *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x220),
                        *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),
                        *(undefined8 *)(param_1 + 0x1f0),0,0);
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar3;
    _objc_release(uVar12);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x78));
    puVar2 = param_1 + 0x80;
    _objc_loadWeakRetained(puVar2);
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c127820(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar2);
    _objc_release(uVar12);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d6068;
    _objc_alloc();
    uVar12 = *(undefined8 *)(param_1 + 0x278);
    func_0x00010c11b3a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(puVar4);
    uVar9 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x278);
    func_0x00010bf8c980(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c120();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar4);
    _objc_release(uVar12);
    puVar4 = param_1 + 0x90;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c1ddde0(puVar2);
    _objc_release(puVar4);
    puVar4 = param_1 + 0x80;
    _objc_loadWeakRetained();
    puVar5 = puVar2;
    func_0x00010c127820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uStack_88 = *(undefined8 *)(param_1 + 0x70);
    uStack_78 = *(undefined8 *)(param_1 + 0x78);
    param_3 = &uStack_88;
    param_4 = 3;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar4;
    _objc_release(uVar12);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar11 = param_3;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined8 **)(puVar2 + 0xb8) = puVar11;
  _objc_release(uVar12);
  func_0x00010c137fe0(*(undefined8 *)(puVar2 + 0xa0));
  func_0x00010c24d960(*(undefined8 *)(puVar2 + 0xa0));
  *(undefined2 *)(puVar2 + 0xc0) = 0;
  uVar12 = *(undefined8 *)(puVar2 + 0x260);
  *(undefined8 *)(puVar2 + 0x260) = 0;
  _objc_release(uVar12);
  uVar10 = *(undefined8 *)(puVar2 + 0xb8);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a78;
  func_0x00010bef5400(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010bf1f3c0();
  puVar2[0x219] = (char)uVar9;
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(uVar10);
  uVar12 = *(undefined8 *)(puVar2 + 0x278);
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x268);
  *(undefined8 *)(puVar2 + 0x268) = uVar12;
  _objc_release(uVar9);
  if (param_4 != 0) {
    uVar17 = *(ulong *)(puVar2 + 600);
    uVar12 = *(undefined8 *)(puVar2 + 0x280);
    func_0x00010bfe5ec0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    if ((uVar17 & 1) == 0) {
      iVar19 = (int)*(undefined8 *)(puVar2 + 200);
      uVar9 = *(undefined8 *)(puVar2 + 0x280);
      func_0x00010bfe5ec0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      if (iVar19 == 0) {
        uVar17 = *(ulong *)(puVar2 + 0xd0);
        uVar10 = *(undefined8 *)(puVar2 + 0x280);
        func_0x00010bfe5ec0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar12);
        if ((uVar17 & 1) != 0) goto LAB_107acd950;
        uVar12 = *(undefined8 *)(puVar2 + 0x280);
        func_0x00010bfe5ec0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef60a0(*(undefined8 *)(puVar2 + 0x280));
        func_0x00010bf60120(puVar2);
        func_0x00010bf7eb40(*(undefined8 *)(puVar2 + 0x50));
      }
      else {
        _objc_release(uVar9);
      }
    }
    _objc_release(uVar12);
  }
LAB_107acd950:
  puVar4 = PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 != (undefined *)0x0) {
    puVar11 = param_3;
    FUN_107acda08();
    puVar5 = PTR_PTR_1126b2340;
    if (((ulong)puVar11 & 1) == 0) {
      puVar11 = param_3;
      func_0x00010c118b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      _objc_release(puVar11);
      if ((int)puVar5 == 0) goto LAB_107acd9e8;
      lVar18 = 200;
    }
    else {
      lVar18 = 600;
    }
    uVar12 = *(undefined8 *)(puVar2 + lVar18);
    func_0x00010c174bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar2 + lVar18);
    *(undefined8 *)(puVar2 + lVar18) = uVar12;
    _objc_release(uVar9);
  }
LAB_107acd9e8:
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107acd778; end: 107acda07; -[SCSingleDiscoverPublisherOperaSession _startViewWithPage:logWaitTime:] */

void FUN_107acd778(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  *(ulong *)(param_1 + 0xb8) = uVar7;
  _objc_release(uVar5);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c24d960(*(undefined8 *)(param_1 + 0xa0));
  *(undefined2 *)(param_1 + 0xc0) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = 0;
  _objc_release(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9a78;
  func_0x00010bef5400(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + 0x219) = (char)uVar6;
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = uVar5;
  _objc_release(uVar6);
  if (param_4 != 0) {
    uVar7 = *(ulong *)(param_1 + 600);
    uVar5 = *(undefined8 *)(param_1 + 0x280);
    func_0x00010bfe5ec0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar7,param_2,uVar5);
    if ((uVar7 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 200);
      uVar6 = *(undefined8 *)(param_1 + 0x280);
      func_0x00010bfe5ec0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar1,param_2,uVar6);
      if ((int)uVar1 == 0) {
        uVar7 = *(ulong *)(param_1 + 0xd0);
        uVar1 = *(undefined8 *)(param_1 + 0x280);
        func_0x00010bfe5ec0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar7,param_2,uVar1);
        _objc_release(uVar1);
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((uVar7 & 1) != 0) goto LAB_107acd950;
        uVar5 = *(undefined8 *)(param_1 + 0x280);
        func_0x00010bfe5ec0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = *(long *)(param_1 + 0x280);
        func_0x00010bef60a0(lVar3);
        lVar8 = param_1;
        func_0x00010bf60120(param_1);
        func_0x00010bf7eb40(*(undefined8 *)(param_1 + 0x50),param_2,uVar5,lVar8,lVar3 != 0,
                            &PTR____CFConstantStringClassReference_110daafd8);
      }
      else {
        _objc_release(uVar6);
      }
    }
    _objc_release(uVar5);
  }
LAB_107acd950:
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    uVar7 = param_3;
    FUN_107acda08();
    puVar4 = PTR_PTR_1126b2340;
    if ((uVar7 & 1) == 0) {
      uVar7 = param_3;
      func_0x00010c118b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0(puVar4,param_2,uVar7);
      _objc_release(uVar7);
      if ((int)puVar4 == 0) goto LAB_107acd9e8;
      lVar8 = 200;
    }
    else {
      lVar8 = 600;
    }
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c174bc0(uVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar5;
    _objc_release(uVar6);
  }
LAB_107acd9e8:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107acda08; end: 107acdaa7;  */

undefined * FUN_107acda08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126ca2b0;
  uVar1 = param_1;
  func_0x00010c118b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081440(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010c081420(PTR_PTR_1126c9310,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1f3c0();
    _objc_release(puVar2);
  }
  else {
    puVar3 = (undefined *)0x1;
  }
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 107acdaa8; end: 107acdf17; -[SCSingleDiscoverPublisherOperaSession _endViewWithPage:params:] */

void FUN_107acdaa8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_2 + 0xa0);
  func_0x00010c07cd60();
  if (iVar1 != 0) {
    func_0x00010c0f5b20(*(undefined8 *)(param_2 + 0xa0));
    puVar2 = PTR_PTR_1126b2340;
    uVar11 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077180();
    _objc_release(uVar11);
    if (((ulong)puVar2 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_2 + 0xa0);
      puVar2 = PTR_PTR_1126b2348;
      func_0x00010c0f62c0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010bf67aa0(uVar11);
      _objc_release(lVar3);
      _objc_release(puVar2);
    }
    lVar3 = *(long *)(param_2 + 0x280);
    func_0x00010bef60a0();
    uVar11 = param_4;
    FUN_107acda08();
    puVar2 = PTR_PTR_1126b2340;
    if ((int)uVar11 == 0) {
      uVar11 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c077260();
      _objc_release(uVar11);
      puVar8 = PTR_PTR_1126b2340;
      if ((int)puVar2 == 0) {
        uVar11 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0771c0();
        _objc_release(uVar11);
        puVar2 = PTR_PTR_1126ca2b0;
        if ((int)puVar8 == 0) {
          uVar11 = param_4;
          func_0x00010c118b40(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07fba0();
          _objc_release(uVar11);
          puVar8 = PTR_PTR_1126b2340;
          if ((int)puVar2 == 0) {
            uVar11 = param_4;
            func_0x00010c118b40(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c080240();
            _objc_release(uVar11);
            puVar2 = PTR_PTR_1126b2340;
            if ((int)puVar8 == 0) {
              uVar11 = param_4;
              func_0x00010c118b40(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c077180();
              _objc_release(uVar11);
              if ((int)puVar2 == 0) {
                puVar2 = PTR_PTR_1126c9310;
                func_0x00010c06ec60();
                if ((int)puVar2 != 0) {
                  func_0x000107ab9504(*(undefined8 *)(param_2 + 0x50));
                }
              }
              else {
                func_0x000107ab9184(param_4,param_5,lVar3 != 0,*(undefined8 *)(param_2 + 0x50));
              }
            }
            else {
              func_0x000107ab94a8(lVar3 != 0,*(undefined8 *)(param_2 + 0x50));
            }
          }
          else {
            FUN_107ab9458(*(undefined8 *)(param_2 + 0x50));
          }
        }
        else {
          FUN_107ab90f8(param_4,param_5,*(undefined8 *)(param_2 + 0x50));
          func_0x00010be50180(param_2);
        }
      }
      else {
        lVar7 = param_2 + 0x10;
        _objc_loadWeakRetained(lVar7);
        func_0x00010c13d320();
        _objc_release(lVar7);
        FUN_107ab9218(param_4,param_5,*(undefined8 *)(param_2 + 0x70),
                      *(undefined8 *)(param_2 + 0x50));
      }
      if (lVar3 != 0) goto LAB_107acdef0;
    }
    else {
      if (lVar3 != 0) goto LAB_107acdef0;
      uVar4 = *(ulong *)(param_2 + 0x278);
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126c9870;
      _objc_opt_class(PTR_PTR_1126c9870);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      uVar4 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      if (uVar4 == 0) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        func_0x00010bef60a0();
        uVar11 = 2;
        if (uVar5 == 0) {
          uVar11 = 3;
        }
      }
      puVar2 = PTR_PTR_1126b2348;
      func_0x00010c24d6e0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      FUN_107ab8a38();
      *(long *)(param_2 + 0xa8) = *(long *)(param_2 + 0xa8) + lVar7;
      _objc_release(lVar3);
      _objc_release(puVar2);
      uVar9 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becda60(param_2);
      _objc_release(uVar9);
      *(double *)(param_2 + 0x210) = param_1 + *(double *)(param_2 + 0x210);
      puVar2 = PTR_PTR_1126b2340;
      uVar9 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040(puVar2);
      uVar10 = *(undefined8 *)(param_2 + 0x228);
      func_0x00010c25b040(uVar10);
      _objc_retainAutoreleasedReturnValue();
      FUN_107ab8cf8(param_1,param_4,param_5,puVar2,uVar11,uVar10,*(undefined8 *)(param_2 + 0x50),
                    *(undefined1 *)(param_2 + 0x1f8));
      _objc_release(uVar10);
      _objc_release(uVar9);
      func_0x00010be50180(param_2);
      _objc_release(uVar4);
    }
    if ((*(byte *)(param_2 + 0x218) & 1) == 0) {
      func_0x00010be900c0(param_2);
    }
  }
LAB_107acdef0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107acdf18; end: 107ace31f; -[SCSingleDiscoverPublisherOperaSession _reportPremiumStoryReadReceiptWithPage:params:] */

ulong FUN_107acdf18(double param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5
                   )

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  undefined8 uStack_80;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_2 + 0x278);
  if ((uVar1 != 0) && (func_0x00010c073600(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_2 + 0x278);
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9310;
    func_0x00010bf631e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x278);
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c298be0();
    _objc_release(uVar4);
    uVar1 = param_2;
    func_0x00010bf60120(param_2);
    uVar6 = *(ulong *)(param_2 + 0x278);
    func_0x00010c242500(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf529e0();
    _objc_release(uVar6);
    uVar4 = *(undefined8 *)(param_2 + 0x278);
    func_0x00010c158300();
    iVar15 = (int)*(undefined8 *)(param_2 + 0x278);
    func_0x00010c07dec0();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_80 = uVar2;
    if (iVar15 == 0) {
      func_0x00010c11b1e0(*(undefined8 *)(param_2 + 0x278));
      func_0x00010c0df7c0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      uVar9 = param_5;
      FUN_107ace320(param_5);
      uVar6 = param_2;
      func_0x00010bfd49e0();
      if ((uVar6 & 1) == 0) {
        param_1 = (double)NEON_fminnm((((double)uVar1 + 1.5) / (double)uVar7) * 100.0,
                                      0x4059000000000000);
        iVar15 = (int)param_1;
      }
      else {
        iVar15 = 100;
      }
      lVar11 = param_2 + 8;
      _objc_loadWeakRetained(lVar11);
      lVar12 = lVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_107ace43c(uVar2,puVar10,lVar12,puVar3,uVar9,iVar15,1,uVar5,uVar4,
                    *(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0x110));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _objc_release(lVar11);
      func_0x00010be8f5e0(param_2);
    }
    else {
      uVar6 = param_2;
      func_0x00010bfd49e0();
      if ((uVar6 & 1) == 0) {
        param_1 = (double)NEON_fminnm((((double)uVar1 + 1.5) / (double)uVar7) * 100.0,
                                      0x4059000000000000);
        iVar15 = (int)param_1;
      }
      else {
        iVar15 = 100;
      }
      uVar9 = param_5;
      FUN_107ace320(param_5);
      puVar10 = *(undefined **)(param_2 + 0x278);
      func_0x00010c237cc0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2 + 8;
      _objc_loadWeakRetained(lVar11);
      lVar12 = lVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_107ace43c(uVar2,puVar10,lVar12,puVar3,uVar9,iVar15,3,uVar5,uVar4,
                    *(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0x110));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _objc_release(lVar11);
    }
    _objc_release(puVar10);
    lVar11 = param_2 + 0x28;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740(*(undefined8 *)(param_2 + 0x278));
    puVar8 = puVar3;
    func_0x00010c08fa60();
    if (puVar8 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c14ab80(param_1 + 604800.0,lVar12);
    _objc_release(puVar13);
    if (puVar8 != (undefined *)0x0) {
      _objc_release(puVar10);
    }
    _objc_release(lVar12);
    _objc_release(lVar11);
    *(undefined8 *)(param_2 + 0xf0) = 0;
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uStack_80);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar8 = PTR_PTR_1126b2348;
  func_0x00010c0c4a80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar1 = uVar7;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  if (uVar1 == 0) {
    puVar8 = PTR_PTR_1126b2348;
    func_0x00010bfe74e0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar8);
    uVar7 = uVar1;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar1);
  }
  uVar1 = uVar7;
  func_0x00010c067ec0(uVar7);
  _objc_release(uVar7);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 107ace320; end: 107ace43b;  */

ulong FUN_107ace320(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c0c4a80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar4 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar2);
  if (uVar4 == 0) {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bfe74e0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    uVar2 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
  }
  uVar4 = uVar2;
  func_0x00010c067ec0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107ace43c; end: 107ace587;  */

void FUN_107ace43c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_stack_00000010;
  
  _objc_retain(in_stack_00000010);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c0b0e00(in_stack_00000010);
  }
  puVar2 = PTR_PTR_1126d6060;
  _objc_alloc(PTR_PTR_1126d6060);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c04da00(param_1 * 1000.0,puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(in_stack_00000010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ace588; end: 107ace6a3; -[SCSingleDiscoverPublisherOperaSession _reportCurationSnapReadReceitptIfNecessaryWithAction:] */

void FUN_107ace588(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x280);
  func_0x00010c082620();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x280);
    func_0x00010c0ed940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c080120(param_1);
      lVar6 = lVar2;
      FUN_107cd293c(lVar2,param_3,lVar4,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c259740(*(undefined8 *)(param_1 + 0x278));
      func_0x00010c14af00(lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 107ace6a4; end: 107ace84b; -[SCSingleDiscoverPublisherOperaSession _handleOpenViewEventWithPage:] */

void FUN_107ace6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x280);
  _objc_retain(lVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x278);
  FUN_107ab8350(uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  _objc_release(uVar5);
  if (lVar6 != *(long *)(param_1 + 0x280)) {
    func_0x00010bede900(param_1);
  }
  puVar3 = PTR_PTR_1126b2340;
  uVar2 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079440();
  *(char *)(param_1 + 0xc2) = (char)puVar3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b2340;
  uVar2 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076c60();
  _objc_release(uVar2);
  if ((int)puVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x280);
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c000(*(undefined8 *)(param_1 + 0x50));
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9310;
    func_0x00010bf631e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      uVar2 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c174bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xd0) = uVar2;
      _objc_release(uVar5);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ace84c; end: 107ace87b; -[SCSingleDiscoverPublisherOperaSession _startSessionTimer] */

void FUN_107ace84c(long param_1)

{
  *(undefined8 *)(param_1 + 0x230) = 0;
  func_0x00010c24d960(*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  return;
}



/* Entry: 107ace87c; end: 107ace9e3; -[SCSingleDiscoverPublisherOperaSession _updateRequestManagerContexts] */

void FUN_107ace87c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b19f8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010bf8c980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8ca00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar3;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b19f8;
  lVar6 = *(long *)(param_1 + 0x280);
  if (lVar6 != 0) {
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ad20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010befa120(puVar5);
    _objc_release(puVar3);
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1835e0();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_107ace9e4;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107acea3c;
  puStack_80 = &UNK_110842e18;
  puStack_78 = puVar2;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  return;
}



/* Entry: 107ace9e4; end: 107acea3b; -[SCSingleDiscoverPublisherOperaSession _updateCurrentPlaylistItem] */

void FUN_107ace9e4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107acea3c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107acea3c; end: 107acea97;  */

void FUN_107acea3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x90;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101400(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107acea98; end: 107aceb93; -[SCSingleDiscoverPublisherOperaSession _logAffiliateWebpageImpressionWithIsTopSnap:] */

void FUN_107acea98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x280);
  func_0x00010c23ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000108f57028();
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0308;
  if ((int)uVar6 != 0) {
    lVar3 = param_1;
    func_0x00010bf8c980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c11b1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x270);
    uVar5 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0de0(puVar1,param_2,lVar3,lVar4,uVar6,param_3,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107aceb94; end: 107acebe7; -[SCSingleDiscoverPublisherOperaSession currentLongformVideoId] */

void FUN_107aceb94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
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



/* Entry: 107acebe8; end: 107acebef; -[SCSingleDiscoverPublisherOperaSession currentDSnapId] */

void FUN_107acebe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x280),PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 107acebf0; end: 107acebf7; -[SCSingleDiscoverPublisherOperaSession pageTimeViewedSec] */

void FUN_107acebf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 107acebf8; end: 107acec33; -[SCSingleDiscoverPublisherOperaSession sessionTimeViewedSansLoadingTimeSec] */

double FUN_107acebf8(long param_1)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    return *(double *)(param_1 + 0x210);
  }
  dVar1 = (*(double *)(param_1 + 0x230) * 1000.0 - (double)*(long *)(param_1 + 0xa8)) / 1000.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return dVar1;
}



/* Entry: 107acec34; end: 107acec3b; -[SCSingleDiscoverPublisherOperaSession numTopSnapsViewed] */

void FUN_107acec34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 600),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107acec3c; end: 107acec83; -[SCSingleDiscoverPublisherOperaSession currentSnapIndexPos] */

undefined8 FUN_107acec3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c242500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107acec84; end: 107aced0f; -[SCSingleDiscoverPublisherOperaSession lastInteraction] */

void FUN_107acec84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(char *)(param_1 + 0xc3) == '\x01') {
    puVar3 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107aced10; end: 107aced17; -[SCSingleDiscoverPublisherOperaSession numLongformViewed] */

void FUN_107aced10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 200),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107aced18; end: 107aced7b; -[SCSingleDiscoverPublisherOperaSession indexOfChunk:] */

undefined8 FUN_107aced18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x278);
  _objc_retain(param_3);
  func_0x00010c242500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 107aced7c; end: 107aced83; -[SCSingleDiscoverPublisherOperaSession isViewingTopSnap] */

undefined * FUN_107aced7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain();
  puVar2 = PTR_PTR_1126ca2b0;
  uVar1 = uVar3;
  func_0x00010c118b40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081440(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010c081420(PTR_PTR_1126c9310,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf1f3c0();
    _objc_release(puVar2);
  }
  else {
    puVar4 = (undefined *)0x1;
  }
  _objc_release(uVar3);
  return puVar4;
}



/* Entry: 107aced84; end: 107acedd3; -[SCSingleDiscoverPublisherOperaSession isViewingTopSnapImage] */

undefined * FUN_107aced84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075040(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107acedd4; end: 107acee23; -[SCSingleDiscoverPublisherOperaSession isViewingTopSnapVideo] */

undefined * FUN_107acedd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083240(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107acee24; end: 107acee73; -[SCSingleDiscoverPublisherOperaSession isViewingLongform] */

undefined * FUN_107acee24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107acee74; end: 107aceec3; -[SCSingleDiscoverPublisherOperaSession isViewingLongformVideo] */

undefined * FUN_107acee74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077260(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107aceec4; end: 107acef13; -[SCSingleDiscoverPublisherOperaSession isViewingRemoteWebpage] */

undefined * FUN_107aceec4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771c0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107acef14; end: 107acef63; -[SCSingleDiscoverPublisherOperaSession isViewingContentTopSnapRemoteWebpage] */

undefined * FUN_107acef14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f4e0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107acef64; end: 107acefb3; -[SCSingleDiscoverPublisherOperaSession isViewingStore] */

undefined * FUN_107acef64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ca2b0;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fba0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107acefb4; end: 107acf003; -[SCSingleDiscoverPublisherOperaSession isViewingSubscriptionLongform] */

undefined * FUN_107acefb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080240(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 107acf004; end: 107acf023; -[SCSingleDiscoverPublisherOperaSession isViewingAd] */

bool FUN_107acf004(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x280);
  func_0x00010bef60a0(lVar1);
  return lVar1 != 0;
}



/* Entry: 107acf024; end: 107acf083; -[SCSingleDiscoverPublisherOperaSession isViewingSubscriptionDSnap] */

undefined8 FUN_107acf024(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  func_0x00010c23ffa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f56d38();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107acf084; end: 107acf08b; -[SCSingleDiscoverPublisherOperaSession isViewingShow] */

void FUN_107acf084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x278),PTR_s_isShow_1125fd1c0);
  return;
}



/* Entry: 107acf08c; end: 107acf48f; -[SCSingleDiscoverPublisherOperaSession hasBeenFullyViewed] */

bool FUN_107acf08c(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar14 = param_1 + 0x90;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c280580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c1014c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(uVar2);
  _objc_release(lVar14);
  lVar14 = lVar3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c242500(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar15;
  func_0x00010c0720c0();
  if ((int)lVar5 == 0) {
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(lVar15);
    _objc_release(lVar14);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x278);
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x000108f56d38();
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(lVar15);
    _objc_release(lVar14);
    if ((uVar9 & 1) != 0) {
      lVar15 = -1;
      lVar14 = -1;
      goto LAB_107acf2a0;
    }
  }
  lVar14 = *(long *)(param_1 + 0x228);
  func_0x00010c29d360();
  if (lVar14 != 0x2d) {
    uVar10 = *(undefined8 *)(param_1 + 0x278);
    func_0x00010c259c60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010c067ec0();
    _objc_release(uVar10);
    if ((int)uVar2 != 2) {
      lVar14 = 0;
      lVar15 = -1;
      goto LAB_107acf2a0;
    }
  }
  lVar14 = 0;
  lVar15 = -2;
LAB_107acf2a0:
  lVar11 = *(long *)(param_1 + 0x278);
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar11;
  func_0x00010bf529e0();
  _objc_release(lVar11);
  uVar7 = param_1;
  func_0x00010bf60120();
  if (uVar7 < (ulong)(lVar14 + lVar15 + lVar5)) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    uVar12 = *(ulong *)(param_1 + 0x278);
    func_0x00010c242500(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar12;
    func_0x000100504554();
    _objc_release(uVar12);
    lVar14 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    func_0x00010c121820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    _objc_release(lVar14);
    uVar2 = *(undefined8 *)(param_1 + 0x280);
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x280);
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bf4b900(uVar7);
    _objc_release(uVar2);
    lVar15 = lVar5;
    func_0x00010bf529e0(lVar5);
    uVar8 = uVar7;
    func_0x00010bf529e0(uVar7);
    uVar13 = 0;
    if (lVar14 == 0) {
      uVar13 = (uint)uVar12;
    }
    bVar1 = uVar8 <= lVar15 + (ulong)uVar13;
    _objc_release(lVar5);
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_80,8);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 107acf490; end: 107acf54f;  */

void FUN_107acf490(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bef60a0();
  if (uVar4 == 0) {
    uVar4 = param_2;
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108f56d38();
    _objc_release(uVar1);
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010bfe5ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107acf550; end: 107acf5ab; -[SCSingleDiscoverPublisherOperaSession isSubscribed] */

undefined8 FUN_107acf550(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x278);
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ab813c(uVar2,uVar3,uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107acf5ac; end: 107acf5bb; -[SCSingleDiscoverPublisherOperaSession hasEdition] */

bool FUN_107acf5ac(long param_1)

{
  return *(long *)(param_1 + 0x278) != 0;
}



/* Entry: 107acf5bc; end: 107acf5c3; -[SCSingleDiscoverPublisherOperaSession areSubtitlesAvailable] */

undefined1 FUN_107acf5bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



/* Entry: 107acf5c4; end: 107acf5cb; -[SCSingleDiscoverPublisherOperaSession isShownWithSubtitles] */

undefined1 FUN_107acf5c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc1);
}



/* Entry: 107acf5cc; end: 107acf5d3; -[SCSingleDiscoverPublisherOperaSession isPromoted] */

void FUN_107acf5cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_isPromoted_1125fc750);
  return;
}



/* Entry: 107acf5d4; end: 107acf5db; -[SCSingleDiscoverPublisherOperaSession isExplorationStory] */

void FUN_107acf5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0724f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_isExplorationStory_1125fa348);
  return;
}



/* Entry: 107acf5dc; end: 107acf603; -[SCSingleDiscoverPublisherOperaSession entryEvent] */

undefined8 FUN_107acf5dc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0xb0);
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



/* Entry: 107acf604; end: 107acf697; -[SCSingleDiscoverPublisherOperaSession entryIntent] */

ulong FUN_107acf604(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong unaff_x21;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar4 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar1 = lVar4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d6c60();
    _objc_release(lVar1);
    _objc_release(lVar4);
    uVar3 = *(ulong *)(param_1 + 0xb0);
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



/* Entry: 107acf698; end: 107acf74b; -[SCSingleDiscoverPublisherOperaSession exitIntent] */

long FUN_107acf698(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6c60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  FUN_107cd46f8();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 107acf74c; end: 107acf753; -[SCSingleDiscoverPublisherOperaSession storyTypeSpecific] */

void FUN_107acf74c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_storyTypeSpecific_112674818);
  return;
}



/* Entry: 107acf754; end: 107acf7af; -[SCSingleDiscoverPublisherOperaSession operaNavigationType] */

bool FUN_107acf754(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x88;
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



/* Entry: 107acf7b0; end: 107acf7b7; -[SCSingleDiscoverPublisherOperaSession bloopsMetadata] */

undefined8 FUN_107acf7b0(void)

{
  return 0;
}



/* Entry: 107acf7b8; end: 107acf7bf; -[SCSingleDiscoverPublisherOperaSession actionMenuEntryEvent] */

void FUN_107acf7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeeb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_actionMenuEntryEvent_112599470);
  return;
}



/* Entry: 107acf7c0; end: 107acf7c7; -[SCSingleDiscoverPublisherOperaSession editionVersion] */

void FUN_107acf7c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c298bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x278),PTR_s_version_112683d20);
  return;
}



/* Entry: 107acf7c8; end: 107acf7cf; -[SCSingleDiscoverPublisherOperaSession editionId] */

void FUN_107acf7c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x278),PTR_s_editionId_1125c0c08)
  ;
  return;
}



/* Entry: 107acf7d0; end: 107acf7d7; -[SCSingleDiscoverPublisherOperaSession publisherId] */

void FUN_107acf7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_publisherName_112624708);
  return;
}



/* Entry: 107acf7d8; end: 107acf817; -[SCSingleDiscoverPublisherOperaSession numSnaps] */

undefined8 FUN_107acf7d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c242500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107acf818; end: 107acf927; -[SCSingleDiscoverPublisherOperaSession _subscribeToOperaAnalyticsEvents] */

void FUN_107acf818(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x88;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0e9f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar2 = lVar1;
    func_0x00010c25ff60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107acf928; end: 107acf9e3;  */

void FUN_107acf928(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0be740(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107acf9e4; end: 107acfa3b;  */

void FUN_107acf9e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107acfa3c; end: 107acfa47;  */

void FUN_107acfa3c(void)

{
  return;
}



/* Entry: 107acfa48; end: 107acfb0f; -[SCSingleDiscoverPublisherOperaSession _handleOperaPlaybackEventPageId:isPlaying:] */

void FUN_107acfa48(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x208);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new(PTR_PTR_1126b46f0);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x208),param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x208);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c0f5b20();
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x200),param_2,param_3);
  }
  else {
    func_0x00010c24d960();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x200),param_2,param_3);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107acfb10; end: 107acfccb; -[SCSingleDiscoverPublisherOperaSession _totalViewTimeForPageId:] */

long FUN_107acfb10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x208);
    func_0x00010c0dff20(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x208);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed820();
      uVar3 = *(undefined8 *)(param_1 + 0x200);
      func_0x00010bf4b900(uVar3,param_2,param_3);
      if ((int)uVar3 == 0) {
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        lVar4 = *(long *)(param_1 + 0x208);
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar4;
        func_0x00010bf52a60();
        if (lVar1 != 0) {
          lVar6 = *plStack_130;
          do {
            lVar7 = 0;
            do {
              if (*plStack_130 != lVar6) {
                _objc_enumerationMutation(lVar4);
              }
              uVar3 = *(undefined8 *)(lStack_138 + lVar7 * 8);
              uVar5 = *(ulong *)(param_1 + 0x200);
              func_0x00010bf4b900(uVar5,param_2,uVar3);
              if ((uVar5 & 1) == 0) {
                func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x208),param_2,uVar3);
              }
              lVar7 = lVar7 + 1;
            } while (lVar1 != lVar7);
            lVar1 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_140,auStack_f8,0x10);
          } while (lVar1 != 0);
        }
        _objc_release(lVar4);
      }
      else {
        func_0x00010c138160(uVar2);
      }
      _objc_release(uVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    return *(long *)(param_3 + 0x220);
  }
  return param_3;
}



/* Entry: 107acfccc; end: 107acfcd3; -[SCSingleDiscoverPublisherOperaSession sessionID] */

undefined8 FUN_107acfccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}



/* Entry: 107acfcd4; end: 107acfcdb; -[SCSingleDiscoverPublisherOperaSession loggingContext] */

undefined8 FUN_107acfcd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 107acfcdc; end: 107acfce3; -[SCSingleDiscoverPublisherOperaSession sessionTimeViewedSec] */

undefined8 FUN_107acfcdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 107acfce4; end: 107acfceb; -[SCSingleDiscoverPublisherOperaSession channelIndex] */

undefined8 FUN_107acfce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}



/* Entry: 107acfcec; end: 107acfcf3; -[SCSingleDiscoverPublisherOperaSession sortOrderId] */

undefined8 FUN_107acfcec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



/* Entry: 107acfcf4; end: 107acfcfb; -[SCSingleDiscoverPublisherOperaSession context] */

undefined8 FUN_107acfcf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x248);
}



/* Entry: 107acfcfc; end: 107acfd03; -[SCSingleDiscoverPublisherOperaSession deepLinkId] */

undefined8 FUN_107acfcfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x250);
}



/* Entry: 107acfd04; end: 107acfd0b; -[SCSingleDiscoverPublisherOperaSession topSnapsViewed] */

undefined8 FUN_107acfd04(long param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



/* Entry: 107acfd0c; end: 107acfd13; -[SCSingleDiscoverPublisherOperaSession subtitlesLocale] */

undefined8 FUN_107acfd0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}



/* Entry: 107acfd14; end: 107acfd1b; -[SCSingleDiscoverPublisherOperaSession isPayToPromote] */

undefined1 FUN_107acfd14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x219);
}



/* Entry: 107acfd1c; end: 107acfd23; -[SCSingleDiscoverPublisherOperaSession hostUserId] */

undefined8 FUN_107acfd1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x268);
}


