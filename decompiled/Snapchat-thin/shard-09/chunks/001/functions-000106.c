/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069f7a00; end: 1069f7a0b; -[SCChatInputMediaSendEvent location] */

undefined1  [16] FUN_1069f7a00(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 1069f7a0c; end: 1069f7a13; -[SCChatInputMediaSendEvent setLocation:] */

void FUN_1069f7a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  return;
}



/* Entry: 1069f7a14; end: 1069f7a1b; -[SCChatInputMediaSendEvent information] */

undefined8 FUN_1069f7a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069f7a1c; end: 1069f7a4b; -[SCChatInputMediaSendEvent setInformation:] */

void FUN_1069f7a1c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1069f7a4c; end: 1069f7a53; -[SCChatInputMediaSendEvent replyAllGroupId] */

undefined8 FUN_1069f7a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1069f7a54; end: 1069f7a83; -[SCChatInputMediaSendEvent setReplyAllGroupId:] */

void FUN_1069f7a54(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1069f7a84; end: 1069f7a8b; -[SCChatInputMediaSendEvent additionalTextMessage] */

undefined8 FUN_1069f7a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1069f7a8c; end: 1069f7abb; -[SCChatInputMediaSendEvent setAdditionalTextMessage:] */

void FUN_1069f7a8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1069f7abc; end: 1069f7ac3; -[SCChatInputMediaSendEvent botMetadata] */

undefined8 FUN_1069f7abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1069f7ac4; end: 1069f7af3; -[SCChatInputMediaSendEvent setBotMetadata:] */

void FUN_1069f7ac4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1069f7af4; end: 1069f7b47; -[SCChatInputMediaSendEvent .cxx_destruct] */

void FUN_1069f7af4(long param_1)

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



/* Entry: 1069f7b48; end: 1069f83df; -[SCChatInputMemoriesMediaController initWithDataObjectContext:parameterProvider:cameraRollAlbumPickerScopeExposer:chatLogger:blizzardLogger:snapVideoFilterFactory:videoImporter:imageImporter:previewScopeExposer:previewScopeBuilderServices:previewVideoProviderServices:previewFilterDataProviderFactory:cloudFS:encryptedContentManager:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:circumstanceEngine:photoPermissionCoordinator:mediaTranscodingLogger:snapVideoFilterScopeExposer:memoriesPreviewPresenterBuilder:cloudSync:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:memoriesTranscodingHelper:snapDocDownloadingService:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:userPreferences:downloader:snapDocEditorServices:memoriesSnapDocTranscodingManager:chatMediaPreviewDataManager:textSender:activeConversationInformation:chatMediaPreviewScopeExposer:chatMediaPreviewScopeServices:legacyStoryMediaCache:stickerInjector:] */

undefined8 *
FUN_1069f7b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_45,undefined8 param_46)

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
  _objc_retain(param_45);
  _objc_retain(param_46);
  puStack_70 = PTR_PTR_1126f42f0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1d,param_4);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1f,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[10];
    puVar1[10] = param_16;
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
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_23;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1e,param_24);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_37;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x22,param_5);
    _objc_retain(param_26);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_42;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x36,param_43);
    _objc_retain(param_44);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_46;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x32];
    puVar1[0x32] = puVar3;
    _objc_release(uVar2);
  }
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069f83e0; end: 1069f83e3; -[SCChatInputMemoriesMediaController setMediaAccessoryDelegate:] */

void FUN_1069f83e0(void)

{
  return;
}



/* Entry: 1069f83e4; end: 1069f840b; -[SCChatInputMemoriesMediaController mediaSendEvents] */

void FUN_1069f83e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069f840c; end: 1069f840f; -[SCChatInputMemoriesMediaController didDeselectInputItem:] */

void FUN_1069f840c(void)

{
  return;
}



/* Entry: 1069f8410; end: 1069f8723; -[SCChatInputMemoriesMediaController didSelectInputItem:] */

void FUN_1069f8410(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar2 = param_1 + 0x1d8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40();
  uVar7 = *(undefined8 *)(param_1 + 0x140);
  *(undefined **)(param_1 + 0x140) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126cfae0;
  _objc_alloc();
  lVar2 = param_1 + 0xe8;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x110;
  _objc_loadWeakRetained();
  lVar4 = param_1 + 0xf8;
  _objc_loadWeakRetained();
  lVar5 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  lVar6 = param_1 + 0x1b0;
  _objc_loadWeakRetained();
  func_0x00010c0089e0();
  uVar7 = *(undefined8 *)(param_1 + 0x170);
  *(undefined **)(param_1 + 0x170) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bec8880(param_1);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055640();
  uVar7 = *(undefined8 *)(param_1 + 0x168);
  *(undefined **)(param_1 + 0x168) = puVar1;
  _objc_release(uVar7);
  func_0x00010c219e20(*(undefined8 *)(param_1 + 0x168));
  func_0x00010c167420(*(undefined8 *)(param_1 + 0x168));
  func_0x00010c219d60(*(undefined8 *)(param_1 + 0x168));
  func_0x00010c201b60(*(undefined8 *)(param_1 + 0x168));
  func_0x00010c10c720(0x3fe999999999999a,*(undefined8 *)(param_1 + 0x168));
  func_0x00010c2a5980(*(undefined8 *)(param_1 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bf72850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x170),PTR_s_didBecomeActive_1125ba3b8);
  return;
}



/* Entry: 1069f8724; end: 1069f8727; -[SCChatInputMemoriesMediaController didCollapseInputItem:] */

void FUN_1069f8724(void)

{
  return;
}



/* Entry: 1069f8728; end: 1069f872b; -[SCChatInputMemoriesMediaController didUncollapseInputItem:] */

void FUN_1069f8728(void)

{
  return;
}



/* Entry: 1069f872c; end: 1069f873f; -[SCChatInputMemoriesMediaController inputViewDidDisappear] */

void FUN_1069f872c(long param_1)

{
  if (*(long *)(param_1 + 0x140) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x140),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 1069f8740; end: 1069f8743; -[SCChatInputMemoriesMediaController tray:positionDidChange:] */

void FUN_1069f8740(void)

{
  return;
}



/* Entry: 1069f8744; end: 1069f882f; -[SCChatInputMemoriesMediaController _subscribeTosendEvents] */

void FUN_1069f8744(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c0c6620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1069f8830; end: 1069f88cb;  */

void FUN_1069f8830(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xd8));
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1069f88cc;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1069f88cc; end: 1069f88db;  */

void FUN_1069f88cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 1069f88dc; end: 1069f88f3; -[SCChatInputMemoriesMediaController inputItem] */

void FUN_1069f88dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f88f4; end: 1069f88ff; -[SCChatInputMemoriesMediaController setInputItem:] */

void FUN_1069f88f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1d0,param_3);
  return;
}



/* Entry: 1069f8900; end: 1069f8917; -[SCChatInputMemoriesMediaController inputController] */

void FUN_1069f8900(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f8918; end: 1069f8923; -[SCChatInputMemoriesMediaController setInputController:] */

void FUN_1069f8918(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1d8,param_3);
  return;
}



/* Entry: 1069f8924; end: 1069f8bb3; -[SCChatInputMemoriesMediaController .cxx_destruct] */

void FUN_1069f8924(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1d8);
  _objc_destroyWeak(param_1 + 0x1d0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_destroyWeak(param_1 + 0x1b0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_destroyWeak(param_1 + 0xe8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1069f8bb4; end: 1069f8d2f; -[SCMediaDrawerDataSourceListenerAnnouncer description] */

void FUN_1069f8bb4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_1069f8d30(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1069f8d30; end: 1069f8d8f;  */

void FUN_1069f8d30(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1069f8d90; end: 1069f903b; -[SCMediaDrawerDataSourceListenerAnnouncer addListener:] */

undefined8 FUN_1069f8d90(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110952ec0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_1069f903c(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_1069f917c(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_1069f8f44:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_1069f8f64;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_1069f903c(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_1069f903c(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_1069f917c(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_1069f8f44;
    }
  }
  uVar9 = 1;
LAB_1069f8f64:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 1069f903c; end: 1069f917b;  */

void FUN_1069f903c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_1069f9520();
LAB_1069f9178:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_1069f9178;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 1069f917c; end: 1069f91c3;  */

void FUN_1069f917c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 1069f91c4; end: 1069f93f3; -[SCMediaDrawerDataSourceListenerAnnouncer removeListener:] */

void FUN_1069f91c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_1069f9378;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_1069f922c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_1069f917c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_1069f9378;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_1069f922c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110952ec0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_1069f903c(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_1069f917c(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_1069f9378;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_1069f9378:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069f93f4; end: 1069f94d7; -[SCMediaDrawerDataSourceListenerAnnouncer mediaListDidChangeWithOnlyReloadedIndexPathes:] */

void FUN_1069f93f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_1069f8d30(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0c55a0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069f94d8; end: 1069f94ff; -[SCMediaDrawerDataSourceListenerAnnouncer .cxx_destruct] */

void FUN_1069f94d8(long param_1)

{
  FUN_1069f9534(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 1069f9500; end: 1069f951f; -[SCMediaDrawerDataSourceListenerAnnouncer .cxx_construct] */

void FUN_1069f9500(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1069f9520; end: 1069f9533;  */

undefined * FUN_1069f9520(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 1069f9534; end: 1069f958b;  */

long FUN_1069f9534(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1069f958c; end: 1069f959b;  */

void FUN_1069f958c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110952ec0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1069f959c; end: 1069f95bb;  */

void FUN_1069f959c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110952ec0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1069f95bc; end: 1069f9623;  */

void FUN_1069f95bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1069f9624; end: 1069f9627;  */

void FUN_1069f9624(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1069f9628; end: 1069f9653; +[SCGrapheneMediaImportMetric imageImport] */

void FUN_1069f9628(void)

{
  _objc_alloc(PTR_PTR_1126cf9d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f9654; end: 1069f96f3; -[SCGrapheneMediaImportMetric description] */

void FUN_1069f9654(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e67558;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e67558,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f42f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1069f96f4; end: 1069f9837; -[SCGrapheneRegistry mediaImportGraphene] */

void FUN_1069f96f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1069f977c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c4830 != -1) {
    func_0x00010002a2fc(0x1136c4830,&puStack_48);
  }
  uVar1 = uRam00000001136c4828;
  _objc_retain(uRam00000001136c4828);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069f9838; end: 1069f9abf; -[SCGalleryEntryViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1069f9838(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f4300;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar5 = (long)_DAT_112755ac8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar6 = (long)_DAT_112755acc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112755ad0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755ad4);
    *(undefined **)((long)puVar1 + (long)_DAT_112755ad4) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 1069f9ac0; end: 1069f9bbb;  */

void FUN_1069f9ac0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069f9bbc; end: 1069f9d27; -[SCGalleryEntryViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f9bbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f4300;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010bfec280(*(undefined8 *)(param_1 + _DAT_112755ad4));
  func_0x00010be3da40(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755ad8);
  *(undefined8 *)(param_1 + _DAT_112755ad8) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112755ad0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755adc);
  *(undefined8 *)(param_1 + _DAT_112755adc) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112755ae0;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
  lVar2 = (long)_DAT_112755ae4;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112755ae8));
  *(undefined1 *)(param_1 + _DAT_112755aec) = 0;
  func_0x00010c256060(param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c1a7f60(param_1);
  lVar2 = (long)_DAT_112755af0;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112755af4;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112755af8) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755afc);
  *(undefined8 *)(param_1 + _DAT_112755afc) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 1069f9d28; end: 1069f9d87; -[SCGalleryEntryViewCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f9d28(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256060();
  lVar2 = (long)_DAT_112755af0;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f4300;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069f9d88; end: 1069f9fcb; -[SCGalleryEntryViewCell setEntry:targetSize:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f9d88(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar5 = (long)_DAT_112755ad8;
  if (*(long *)(param_3 + lVar5) == param_5) {
    dVar9 = ((double *)(param_3 + _DAT_112755b00))[1];
    bVar1 = false;
    if ((*(double *)(param_3 + _DAT_112755b00) == param_1) &&
       (bVar1 = false, !NAN(dVar9) && !NAN(param_2))) {
      bVar1 = dVar9 == param_2;
    }
    if ((bVar1) && (*(char *)(param_3 + _DAT_112755b04) != '\x01')) goto LAB_1069f9f98;
  }
  func_0x00010bfec280(*(undefined8 *)(param_3 + _DAT_112755ad4));
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_3 + lVar5);
  *(long *)(param_3 + lVar5) = param_5;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112755b00;
  *(double *)(param_3 + lVar3) = param_1;
  ((double *)(param_3 + lVar3))[1] = param_2;
  lVar8 = (long)_DAT_112755b04;
  *(undefined1 *)(param_3 + lVar8) = 0;
  lVar7 = (long)_DAT_112755b08;
  *(undefined1 *)(param_3 + lVar7) = 0;
  lVar3 = (long)_DAT_112755ad0;
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar3),param_4,0);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_3 + lVar3));
  uVar2 = *(undefined8 *)(param_3 + _DAT_112755adc);
  *(undefined8 *)(param_3 + _DAT_112755adc) = 0;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112755ae0;
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar3),param_4,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar3),param_4,1);
  lVar6 = (long)_DAT_112755ae4;
  func_0x00010c18b5e0(*(undefined8 *)(param_3 + lVar6),param_4,0);
  func_0x00010c212f20(*(undefined8 *)(param_3 + _DAT_112755ae8),param_4,0);
  *(undefined1 *)(param_3 + _DAT_112755aec) = 0;
  func_0x00010c256060(param_3);
  uVar2 = *(undefined8 *)(param_3 + lVar6);
  *(undefined8 *)(param_3 + lVar6) = 0;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_3 + lVar5);
  if ((lVar3 != 0) && ((*(byte *)(param_3 + lVar8) & 1) == 0)) {
    func_0x00010b5fc5e4();
    *(char *)(param_3 + _DAT_112755b0c) = (char)lVar3;
    uVar2 = param_7;
    func_0x00010bf23100(param_7,param_4,*(undefined8 *)(param_3 + lVar5),
                        *(undefined1 *)(param_3 + lVar7));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + _DAT_112755af0);
    *(undefined8 *)(param_3 + _DAT_112755af0) = uVar2;
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bfbdda0(uVar2);
    func_0x00010bee50c0(param_3,param_4,uVar2);
    uVar2 = param_6;
    func_0x00010bf23120(param_1,param_2,param_6,param_4,*(undefined8 *)(param_3 + lVar5),0,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + lVar6);
    *(undefined8 *)(param_3 + lVar6) = uVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_3 + lVar6),param_4,param_3);
    func_0x00010c24eda0(*(undefined8 *)(param_3 + lVar6));
    func_0x00010bec1be0(param_3);
  }
LAB_1069f9f98:
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069f9fcc; end: 1069fa01f; -[SCGalleryEntryViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f9fcc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4300;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c141e20(param_1);
  return;
}



/* Entry: 1069fa020; end: 1069fa1a3; -[SCGalleryEntryViewCell roundCorner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa020(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  *(long *)(param_1 + _DAT_112755af8) = param_3;
  uVar1 = *(ulong *)(param_1 + _DAT_112755ad8);
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if ((7 < uVar1 || (1L << (uVar1 & 0x3f) & 0x91U) == 0) || param_3 == 0) {
    return;
  }
  lVar7 = (long)_DAT_112755af4;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    _objc_release(uVar6);
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar7));
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bf199e0(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar7),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069fa1a4; end: 1069fa1db; -[SCGalleryEntryViewCell startGeneratingUpdates] */

/* WARNING: Possible PIC construction at 0x0001069fa1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069fa1c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755ae4),PTR_s_startGeneratingUpdates_112671590);
  return;
}



/* Entry: 1069fa1dc; end: 1069fa213; -[SCGalleryEntryViewCell stopGeneratingUpdates] */

/* WARNING: Possible PIC construction at 0x0001069fa1fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069fa200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755ae4),PTR_s_stopGeneratingUpdates_112673240);
  return;
}



/* Entry: 1069fa214; end: 1069fa44f; -[SCGalleryEntryViewCell setSelected:selectOverlayImage:snapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa214(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_e0 [8];
  undefined1 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(char *)(param_1 + _DAT_112755b10) = (char)param_3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar4 = (long)_DAT_112755b14;
  if ((param_3 != 0) && (*(long *)(param_1 + lVar4) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    lVar5 = (long)_DAT_112755ac8;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1069fa450;
    puStack_88 = &UNK_1108471b0;
    lStack_80 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4));
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1069fa4c4;
    puStack_b0 = &UNK_1108471b0;
    lStack_a8 = param_1;
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  _objc_initWeak(auStack_d0,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_e0,auStack_d0);
  uStack_d8 = (char)param_3;
  func_0x00010bf03400(0x3fc999999999999a,puVar1);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d0);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1069fa450; end: 1069fa537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa450(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069fa538; end: 1069fa5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa538(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      _CGAffineTransformMakeScale(&uStack_50,0x3fee666666666666,0x3fee666666666666);
    }
    else {
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(lVar1 + _DAT_112755acc),param_2,&uStack_80);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1069fa5d4; end: 1069fa5db; -[SCGalleryEntryViewCell interactionMode] */

undefined8 FUN_1069fa5d4(void)

{
  return 3;
}



/* Entry: 1069fa5dc; end: 1069fa657; -[SCGalleryEntryViewCell animateLongTapForTouchLocation:reverse:] */

void FUN_1069fa5dc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uStack_18 = 0x3fee666666666666;
  }
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069fa658;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  return;
}



/* Entry: 1069fa658; end: 1069fa6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa658(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale
            (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755ac8),param_2,
                      &uStack_80);
  return;
}



/* Entry: 1069fa6b4; end: 1069fa6cf; -[SCGalleryEntryViewCell setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa6b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112755b08) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1facd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755af0),PTR_s_setSelectMode__11265c558);
  return;
}



/* Entry: 1069fa6d0; end: 1069fa6d3; -[SCGalleryEntryViewCell setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_1069fa6d0(void)

{
  return;
}



/* Entry: 1069fa6d4; end: 1069fa71f; -[SCGalleryEntryViewCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa6d4(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_112755adc) != 0) {
    func_0x00010c141a40(PTR_PTR_1126cfb18,param_2,*(long *)(param_1 + _DAT_112755adc),
                        (long)*(int *)(param_1 + _DAT_112755b18));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069fa720; end: 1069fa7cf; -[SCGalleryEntryViewCell transitioningImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa720(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112755ad0);
  func_0x00010bfe6ac0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + _DAT_112755ad8);
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (uVar2 < 9) {
    if ((1L << (uVar2 & 0x3f) & 0x195U) == 0) {
      param_1 = lVar1;
      func_0x00010bf5c7e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1069fa7a4;
    }
  }
  else if (uVar2 != 9999) goto LAB_1069fa7a4;
  _objc_retain(lVar1);
  param_1 = lVar1;
LAB_1069fa7a4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1069fa7d0; end: 1069fa7d3; -[SCGalleryEntryViewCell transitioningExpandingView] */

void FUN_1069fa7d0(void)

{
  return;
}



/* Entry: 1069fa7d4; end: 1069fa7e3; -[SCGalleryEntryViewCell setTransitioningInitialImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa7d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755ad0),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 1069fa7e4; end: 1069fa877; -[SCGalleryEntryViewCell _setFullImage:forSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa7e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112755ad0),param_2,param_3);
  lVar2 = (long)_DAT_112755adc;
  if (*(long *)(param_1 + lVar2) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c0ed100();
    *(int *)(param_1 + _DAT_112755b18) = (int)uVar1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069fa878; end: 1069faa5f; -[SCGalleryEntryViewCell _createLeftBottomLabelIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fa878(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar3 = (long)_DAT_112755ae8;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4000000000000000);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f19999a);
    _objc_release(uVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112755acc),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1069faa60;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069faa60; end: 1069fabe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069faa60(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069fabe8; end: 1069fac87; -[SCGalleryEntryViewCell _setupVideoThumbnailLabelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fabe8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112755ad8;
  lVar1 = *(long *)(param_2 + lVar3);
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar1 != 4) {
    lVar1 = *(long *)(param_2 + lVar3);
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar1 != 0) {
      return;
    }
  }
  func_0x00010bdef2c0(param_2);
  puVar2 = PTR_PTR_1126b6600;
  func_0x00010bfb6060(param_1,PTR_PTR_1126b6600);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + _DAT_112755ae8),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069fac88; end: 1069fad4b; -[SCGalleryEntryViewCell thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fac88(float param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  ulong param_6)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (*(long *)(param_2 + _DAT_112755ae4) == param_4)) {
    func_0x00010be3da40(param_2);
    func_0x00010bea41c0(param_2,param_3,param_5,param_6);
    uVar1 = param_6;
    func_0x00010b5fa088();
    if ((uVar1 < 0xd) && ((1L << (uVar1 & 0x3f) & 0x1566U) != 0)) {
      func_0x00010bf8b160(param_6);
      func_0x00010beb1100((double)param_1,param_2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069fad4c; end: 1069faed7; -[SCGalleryEntryViewCell thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fad4c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_2 + _DAT_112755ae4) == param_4) {
    func_0x00010be3da40(param_2);
    lVar5 = (long)_DAT_112755ad0;
    lVar3 = *(long *)(param_2 + lVar5);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112755aec;
    if ((lVar3 == 0) ||
       (cVar1 = *(char *)(param_2 + lVar7), _objc_release(),
       puVar2 = PTR__OBJC_CLASS___UIView_1126aec20, cVar1 != '\x01')) {
      *(undefined1 *)(param_2 + lVar7) = 1;
      func_0x00010bea41c0(param_2,param_3,param_5,param_6);
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + lVar5);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1069faed8;
      puStack_70 = &UNK_110848ba8;
      lStack_68 = param_2;
      _objc_retain(param_5);
      uStack_60 = param_5;
      _objc_retain(param_6);
      uStack_58 = param_6;
      func_0x00010c27ac60(0x3fd3333333333333,puVar2,param_3,uVar6,0x500000,&puStack_88,0);
      _objc_release(uStack_58);
      _objc_release(uStack_60);
    }
    uVar4 = param_6;
    func_0x00010b5fa088();
    if ((uVar4 < 0xd) && ((1L << (uVar4 & 0x3f) & 0x1566U) != 0)) {
      func_0x00010beb1100(param_1,param_2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1069faed8; end: 1069faee7;  */

void FUN_1069faed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setFullImage_forSnap__112586a18,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1069faee8; end: 1069fafab; -[SCGalleryEntryViewCell thumbnailGenerator:didLoadMiniThumbnail:snap:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069faee8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be3da40(param_2);
  lVar3 = (long)_DAT_112755ad0;
  lVar1 = *(long *)(param_2 + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar3),param_3,param_5);
  }
  uVar2 = param_6;
  func_0x00010b5fa088();
  if ((uVar2 < 0xd) && ((1L << (uVar2 & 0x3f) & 0x1566U) != 0)) {
    func_0x00010beb1100(param_1,param_2);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069fafac; end: 1069fb423; -[SCGalleryEntryViewCell _updateWrapperViewWithGalleryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fafac(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  double dStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar4 = &puStack_1d0;
  lVar7 = (long)_DAT_112755b0c;
  func_0x00010beb96a0(param_2,param_3,(*(byte *)(param_2 + lVar7) ^ 0xff) & 1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  if ((*(byte *)(param_2 + lVar7) & 1) == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1069fb424;
    puStack_70 = &UNK_1108471b0;
    lStack_68 = param_2;
    func_0x00010c0bbfe0(*(undefined8 *)(param_2 + _DAT_112755acc),param_3,&puStack_88);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112755b1c;
    func_0x00010befbb60(*(undefined8 *)(param_2 + _DAT_112755ac8),param_3,
                        *(undefined8 *)(param_2 + lVar7));
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1069fb498;
    puStack_98 = &UNK_1108471b0;
    lStack_90 = param_2;
    func_0x00010c0bbfc0(*(undefined8 *)(param_2 + lVar7),param_3,&puStack_b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    return;
  }
  func_0x00010b5fa33c();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 < 9) {
    if ((1L << (param_4 & 0x3f) & 0x6aU) == 0) {
      if ((1L << (param_4 & 0x3f) & 0x191U) == 0) {
        uVar2 = *(undefined8 *)(param_2 + _DAT_112755acc);
        puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a0 = 0xc2000000;
        pcStack_198 = FUN_1069fba74;
        puStack_190 = &UNK_1108471b0;
        ppuVar4 = &puStack_1a8;
        lStack_188 = param_2;
        goto LAB_1069fb414;
      }
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      uStack_148 = 0x1069fb804;
      puStack_140 = &UNK_1108471b0;
      lStack_138 = param_2;
      func_0x00010c0bbfe0(*(undefined8 *)(param_2 + _DAT_112755acc),param_3,&puStack_158);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + _DAT_112755ac8);
      lVar7 = (long)_DAT_112755af0;
      uVar2 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c2666e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar5,param_3,uVar2);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c2666e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_180 = puVar1;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_1069fb878;
      puStack_168 = &UNK_1108471b0;
      lStack_160 = param_2;
    }
    else {
      lVar6 = (long)_DAT_112755acc;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1069fb5dc;
      puStack_c0 = &UNK_1108471b0;
      lStack_b8 = param_2;
      func_0x00010c0bbfe0(*(undefined8 *)(param_2 + lVar6),param_3,&puStack_d8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar8 = (long)_DAT_112755ae0;
      lVar7 = *(long *)(param_2 + lVar8);
      if (lVar7 == 0) {
        puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc_init();
        uVar2 = *(undefined8 *)(param_2 + lVar8);
        *(undefined **)(param_2 + lVar8) = puVar3;
        _objc_release(uVar2);
        func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,
                            *(undefined8 *)(param_2 + lVar8));
        lVar7 = *(long *)(param_2 + lVar8);
      }
      func_0x00010c182220(lVar7,param_3,0);
      func_0x00010c17d4c0(*(undefined8 *)(param_2 + lVar8),param_3,0);
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar3);
      puStack_108 = puVar1;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_1069fb650;
      puStack_f0 = &UNK_11084fc28;
      lStack_e8 = param_2;
      dStack_e0 = 1.0 / param_1;
      func_0x00010c0bbfe0(*(undefined8 *)(param_2 + lVar8),param_3,&puStack_108);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126cfb20;
      func_0x00010c06a540(*(undefined8 *)(param_2 + _DAT_112755b00),
                          ((undefined8 *)(param_2 + _DAT_112755b00))[1],PTR_PTR_1126cfb20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar8),param_3,puVar3);
      _objc_release(puVar3);
      uVar2 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0);
      _objc_release(uVar2);
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar8),param_3,0);
      uVar5 = *(undefined8 *)(param_2 + lVar8);
      lVar7 = (long)_DAT_112755af0;
      uVar2 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c2666e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar5,param_3,uVar2);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c2666e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_130 = puVar1;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_1069fb714;
      puStack_118 = &UNK_1108471b0;
      lStack_110 = param_2;
    }
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c24eda0(*(undefined8 *)(param_2 + lVar7));
  }
  else {
    if (param_4 != 9999) {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + _DAT_112755acc);
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    uStack_1c0 = 0x1069fbae8;
    puStack_1b8 = &UNK_1108471b0;
    lStack_1b0 = param_2;
LAB_1069fb414:
    func_0x00010c0bbfe0(uVar2,param_3,ppuVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069fb424; end: 1069fb497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fb424(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069fb498; end: 1069fb5db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fb498(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069fb5dc; end: 1069fb64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fb5dc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069fb650; end: 1069fb713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fb650(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  dVar4 = -*(double *)(param_1 + 0x28);
  (**(code **)(lVar3 + 0x10))(dVar4,dVar4,dVar4,dVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069fb714; end: 1069fb877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fb714(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069fb878; end: 1069fba73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fb878(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112755ac8;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc018000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4018000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069fba74; end: 1069fbb5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fba74(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069fbb5c; end: 1069fbbbf; -[SCGalleryEntryViewCell _showIncompatibleIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fbb5c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112755b1c;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126cfb28;
    _objc_alloc();
    func_0x00010c01afa0();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 1069fbbc0; end: 1069fbc1f; -[SCGalleryEntryViewCell _startThumbnailLatencyTimers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fbbc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be3da40();
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x4024000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__thumbnailLatencyTimerDidFire__112532a10,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755b20);
  *(undefined **)(param_1 + _DAT_112755b20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069fbc20; end: 1069fbc53; -[SCGalleryEntryViewCell _invalidateTimers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fbc20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112755b20;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069fbc54; end: 1069fbc6f; -[SCGalleryEntryViewCell _thumbnailLatencyTimerDidFire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fbc54(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112755b20) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be3da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidateTimers_11256d030);
  return;
}



/* Entry: 1069fbc70; end: 1069fbca7; -[SCGalleryEntryViewCell setEditActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fbc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755b24);
  *(undefined8 *)(param_1 + _DAT_112755b24) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069fbca8; end: 1069fbe37; -[SCGalleryEntryViewCell animateSelectWithIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fbca8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = (long)_DAT_112755b14;
  if ((param_3 != 0x7fffffffffffffff) && (*(long *)(param_1 + lVar4) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    lVar5 = (long)_DAT_112755ac8;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + _DAT_112755b28);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + lVar5);
    _objc_release();
    if (lVar2 == lVar6) {
      func_0x00010c066fe0(*(undefined8 *)(param_1 + lVar5));
    }
    else {
      func_0x00010befbb60();
    }
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bfef4c0(param_1);
    func_0x00010bfee7a0(param_1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1abfe0(*(undefined8 *)(param_1 + _DAT_112755b28));
                    /* WARNING: Could not recover jumptable at 0x00010c1fb170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755b2c),PTR_s_setSelectedIndex__11265c680,param_3);
  return;
}



/* Entry: 1069fbe38; end: 1069fbeab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fbe38(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069fbeac; end: 1069fc077; -[SCGalleryEntryViewCell initSelectingBadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fbeac(undefined8 param_1,undefined8 param_2,double param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112755b28;
  if (*(long *)((long)param_4 + lVar9) == 0) {
    puVar1 = PTR_PTR_1126cf9f8;
    _objc_alloc();
    func_0x00010bfb68e0(param_4);
    func_0x00010c03cba0(param_3 / 10.0);
    uVar8 = *(undefined8 *)((long)param_4 + lVar9);
    *(undefined **)((long)param_4 + lVar9) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)param_4 + lVar9));
    lVar10 = (long)_DAT_112755ac8;
    func_0x00010befbb60(*(undefined8 *)((long)param_4 + lVar10));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(undefined ***)((long)param_4 + lVar9);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)param_4 + lVar10);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = unaff_x20;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)param_4 + lVar9);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)param_4 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(ppuVar6);
    _objc_release(uVar2);
    param_4 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112755b2c;
  ppuVar6 = param_4;
  if (*(long *)((long)param_4 + lVar7) == 0) {
    puVar1 = PTR_PTR_1126cf9f0;
    _objc_alloc();
    func_0x00010bfb68e0(param_4);
    func_0x00010c03cba0(param_3 / 10.0);
    uVar8 = *(undefined8 *)((long)param_4 + lVar7);
    *(undefined **)((long)param_4 + lVar7) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)param_4 + lVar7));
    lVar9 = (long)_DAT_112755b14;
    func_0x00010befbb60(*(undefined8 *)((long)param_4 + lVar9));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(undefined ***)((long)param_4 + lVar7);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)param_4 + lVar9);
    func_0x00010c274200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = unaff_x20;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)param_4 + lVar7);
    ppuStack_e8 = ppuVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)param_4 + lVar9);
    func_0x00010c08de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e0 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(ppuVar6);
    _objc_release(uVar2);
    _objc_release(unaff_x20);
    ppuVar6 = *(undefined ***)((long)param_4 + lVar7);
    func_0x00010c21e900();
    if (*(long *)((long)param_4 + (long)_DAT_112755b24) != 0) {
      _objc_initWeak(&puStack_f0,param_4);
      uVar8 = *(undefined8 *)((long)param_4 + lVar7);
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_1069fc2f4;
      puStack_100 = &UNK_1108434b0;
      unaff_x20 = &puStack_118;
      _objc_copyWeak(auStack_f8,&puStack_f0);
      func_0x00010c193520(uVar8);
      _objc_destroyWeak(auStack_f8);
      ppuVar6 = &puStack_f0;
      _objc_destroyWeak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 4);
  _objc_destroyWeak(&puStack_f0);
  __Unwind_Resume();
  ppuVar6 = ppuVar6 + 4;
  _objc_loadWeakRetained();
  if (ppuVar6 != (undefined **)0x0) {
    (**(code **)(*(long *)((long)ppuVar6 + (long)_DAT_112755b24) + 0x10))
              (*(long *)((long)ppuVar6 + (long)_DAT_112755b24),ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 1069fc078; end: 1069fc2f3; -[SCGalleryEntryViewCell initEditButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fc078(undefined8 param_1,undefined8 param_2,double param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined **unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112755b2c;
  puVar7 = param_4;
  if (*(long *)(param_4 + lVar10) == 0) {
    puVar1 = PTR_PTR_1126cf9f0;
    _objc_alloc();
    func_0x00010bfb68e0(param_4);
    func_0x00010c03cba0(param_3 / 10.0);
    uVar8 = *(undefined8 *)(param_4 + lVar10);
    *(undefined **)(param_4 + lVar10) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)(param_4 + lVar10));
    lVar9 = (long)_DAT_112755b14;
    func_0x00010befbb60(*(undefined8 *)(param_4 + lVar9));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(undefined ***)(param_4 + lVar10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010c274200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = unaff_x20;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + lVar10);
    ppuStack_78 = ppuVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010c08de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    _objc_release(uVar2);
    _objc_release(unaff_x20);
    puVar7 = *(undefined1 **)(param_4 + lVar10);
    func_0x00010c21e900();
    if (*(long *)(param_4 + _DAT_112755b24) != 0) {
      _objc_initWeak(auStack_80,param_4);
      uVar8 = *(undefined8 *)(param_4 + lVar10);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1069fc2f4;
      puStack_90 = &UNK_1108434b0;
      unaff_x20 = &puStack_a8;
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010c193520(uVar8);
      _objc_destroyWeak(auStack_88);
      puVar7 = auStack_80;
      _objc_destroyWeak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar7 + _DAT_112755b24) + 0x10))
              (*(long *)(puVar7 + _DAT_112755b24),puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1069fc2f4; end: 1069fc337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fc2f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + _DAT_112755b24) + 0x10))
              (*(long *)(param_1 + _DAT_112755b24),param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069fc338; end: 1069fc41f; -[SCGalleryEntryViewCell hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fc338(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar2 = &lStack_50;
  dVar4 = param_1;
  _objc_retain(param_5);
  lVar3 = (long)_DAT_112755b2c;
  func_0x00010bf01b40(*(undefined8 *)(param_3 + lVar3));
  if (dVar4 == 1.0) {
    iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
    func_0x00010c082800();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      if (iVar1 != 0) {
        plVar2 = *(long **)(param_3 + lVar3);
        func_0x00010bfe3a40(param_1,param_2,plVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1069fc3f8;
      }
    }
  }
  puStack_48 = PTR_PTR_1126f4300;
  lStack_50 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
  _objc_retainAutoreleasedReturnValue();
LAB_1069fc3f8:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 1069fc420; end: 1069fc42f; -[SCGalleryEntryViewCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1069fc420(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112755ac4);
}



/* Entry: 1069fc430; end: 1069fc43f; -[SCGalleryEntryViewCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fc430(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112755ac4) = param_3;
  return;
}



/* Entry: 1069fc440; end: 1069fc57f; -[SCGalleryEntryViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fc440(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755b24,0);
  _objc_storeStrong(param_1 + _DAT_112755b2c,0);
  _objc_storeStrong(param_1 + _DAT_112755b28,0);
  _objc_storeStrong(param_1 + _DAT_112755adc,0);
  _objc_storeStrong(param_1 + _DAT_112755ae8,0);
  _objc_storeStrong(param_1 + _DAT_112755b1c,0);
  _objc_storeStrong(param_1 + _DAT_112755af4,0);
  _objc_storeStrong(param_1 + _DAT_112755b20,0);
  _objc_storeStrong(param_1 + _DAT_112755af0,0);
  _objc_storeStrong(param_1 + _DAT_112755ae4,0);
  _objc_storeStrong(param_1 + _DAT_112755afc,0);
  _objc_storeStrong(param_1 + _DAT_112755ad8,0);
  _objc_storeStrong(param_1 + _DAT_112755ad4,0);
  _objc_storeStrong(param_1 + _DAT_112755b14,0);
  _objc_storeStrong(param_1 + _DAT_112755ae0,0);
  _objc_storeStrong(param_1 + _DAT_112755ad0,0);
  _objc_storeStrong(param_1 + _DAT_112755acc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755ac8,0);
  return;
}



/* Entry: 1069fc580; end: 1069fc62b; -[SCGalleryStoryCell initWithFrame:] */

undefined1 * FUN_1069fc580(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4308;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c245740(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cfb30);
    puVar3 = PTR_PTR_1126cfb30;
    _objc_opt_class(PTR_PTR_1126cfb30);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069fc62c; end: 1069fc85b; -[SCGalleryStoryCell collectionView:cellForItemAtIndexPath:] */

void FUN_1069fc62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126cfb30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0840e0(param_4);
  uVar6 = uVar4;
  func_0x00010c0dfd40(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1069fc7a0;
  puStack_58 = &UNK_110952f08;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  uStack_48 = param_1;
  func_0x00010c0bff00(uVar6,param_2,&puStack_70,&PTR___NSConcreteGlobalBlock_110952f58);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010be97860(param_1,param_2,uVar2,param_4);
  _objc_release(param_4);
  _objc_retain(uVar2);
  _objc_release(uStack_50);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069fc85c; end: 1069fc85f;  */

void FUN_1069fc85c(void)

{
  return;
}


