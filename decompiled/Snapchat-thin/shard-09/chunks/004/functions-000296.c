/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d5b8c4; end: 106d5b90b; +[SCFavoritesCatalogSourceType userProfile] */

void FUN_106d5b8c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b07a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b90c; end: 106d5b92f; -[SCFavoritesCatalogSourceType copyWithZone:] */

undefined8 FUN_106d5b90c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d5b930; end: 106d5b973; -[SCFavoritesCatalogSourceType internalInit] */

void FUN_106d5b930(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f6a58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5b974; end: 106d5b9f7; -[SCFavoritesCatalogSourceType matchUserProfile:pDP:] */

void FUN_106d5b974(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d5b9f8; end: 106d5ba03; -[SCFavoritesCatalogSourceType .cxx_destruct] */

void FUN_106d5b9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d5ba04; end: 106d5baf7; -[SCCommerceTopicPageScope initWithTopic:uiContainer:commerceOrigin:delegate:] */

undefined1 *
FUN_106d5ba04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f6a60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d5baf8; end: 106d5baff; -[SCCommerceTopicPageScope commerceOrigin] */

undefined8 FUN_106d5baf8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d5bb00; end: 106d5bb07; -[SCCommerceTopicPageScope topic] */

undefined8 FUN_106d5bb00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d5bb08; end: 106d5bb0f; -[SCCommerceTopicPageScope uiContainer] */

undefined8 FUN_106d5bb08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d5bb10; end: 106d5bb27; -[SCCommerceTopicPageScope delegate] */

void FUN_106d5bb10(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5bb28; end: 106d5bb6b; -[SCCommerceTopicPageScope .cxx_destruct] */

void FUN_106d5bb28(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d5bb6c; end: 106d5bc0f; -[SCCommerceTopic initWithTopicName:viewingContextInternal:] */

undefined1 *
FUN_106d5bb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6a68;
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



/* Entry: 106d5bc10; end: 106d5bc33; -[SCCommerceTopic copyWithZone:] */

undefined8 FUN_106d5bc10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d5bc34; end: 106d5bc3b; -[SCCommerceTopic topicName] */

undefined8 FUN_106d5bc34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d5bc3c; end: 106d5bc43; -[SCCommerceTopic viewingContextInternal] */

undefined8 FUN_106d5bc3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d5bc44; end: 106d5bc73; -[SCCommerceTopic .cxx_destruct] */

void FUN_106d5bc44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d5bc74; end: 106d5bd37; -[SCCommerceComposerScreenshopScope initWithEntryType:uiContainer:delegate:] */

undefined1 *
FUN_106d5bc74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6a70;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d5bd38; end: 106d5bd3f; -[SCCommerceComposerScreenshopScope entryType] */

undefined8 FUN_106d5bd38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d5bd40; end: 106d5bd47; -[SCCommerceComposerScreenshopScope uiContainer] */

undefined8 FUN_106d5bd40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d5bd48; end: 106d5bd5f; -[SCCommerceComposerScreenshopScope delegate] */

void FUN_106d5bd48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5bd60; end: 106d5bd97; -[SCCommerceComposerScreenshopScope .cxx_destruct] */

void FUN_106d5bd60(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d5bd98; end: 106d5be3b; +[SCCommerceComposerScreenshopEntryType deeplinkWithSource:sourceSessionId:assetIds:] */

void FUN_106d5bd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b5b88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5be3c; end: 106d5bed3; +[SCCommerceComposerScreenshopEntryType memoriesAssetsWithInitialAssetId:assetIds:] */

void FUN_106d5be3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5b88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5bed4; end: 106d5bff7; +[SCCommerceComposerScreenshopEntryType snapWithHeroBoltUrl:snapId:contextSessionId:key:iv:] */

void FUN_106d5bed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b5b88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5bff8; end: 106d5c01b; -[SCCommerceComposerScreenshopEntryType copyWithZone:] */

undefined8 FUN_106d5bff8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d5c01c; end: 106d5c05f; -[SCCommerceComposerScreenshopEntryType internalInit] */

void FUN_106d5c01c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f6a78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5c060; end: 106d5c123; -[SCCommerceComposerScreenshopEntryType matchSnap:memoriesAssets:deeplink:] */

void FUN_106d5c060(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x58));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d5c124; end: 106d5c1a7; -[SCCommerceComposerScreenshopEntryType .cxx_destruct] */

void FUN_106d5c124(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d5c1a8; end: 106d5c367; -[SCShoppingLensLauncherScope initWithUIContainer:lenses:selectedProductId:replySnapSource:shoppingLensLaunchSource:preloadedShowcaseResponse:dpaCtaViewModel:launchSourceAdId:launchSourceAdServeItemId:launchSourceTrackId:skipCameraLaunch:delegate:] */

undefined8 *
FUN_106d5c1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f6a80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_13;
    _objc_storeWeak(puVar1 + 0xc,param_15);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d5c368; end: 106d5c36f; -[SCShoppingLensLauncherScope uiContainer] */

undefined8 FUN_106d5c368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d5c370; end: 106d5c377; -[SCShoppingLensLauncherScope lenses] */

undefined8 FUN_106d5c370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d5c378; end: 106d5c37f; -[SCShoppingLensLauncherScope selectedProductId] */

undefined8 FUN_106d5c378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d5c380; end: 106d5c387; -[SCShoppingLensLauncherScope replySnapSource] */

undefined8 FUN_106d5c380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d5c388; end: 106d5c38f; -[SCShoppingLensLauncherScope shoppingLensLaunchSource] */

undefined8 FUN_106d5c388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d5c390; end: 106d5c397; -[SCShoppingLensLauncherScope preloadedShowcaseResponse] */

undefined8 FUN_106d5c390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d5c398; end: 106d5c39f; -[SCShoppingLensLauncherScope dpaCtaViewModel] */

undefined8 FUN_106d5c398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d5c3a0; end: 106d5c3a7; -[SCShoppingLensLauncherScope launchSourceAdId] */

undefined8 FUN_106d5c3a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d5c3a8; end: 106d5c3af; -[SCShoppingLensLauncherScope launchSourceAdServeItemId] */

undefined8 FUN_106d5c3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d5c3b0; end: 106d5c3b7; -[SCShoppingLensLauncherScope launchSourceTrackId] */

undefined8 FUN_106d5c3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106d5c3b8; end: 106d5c3c3; -[SCShoppingLensLauncherScope skipCameraLaunch] */

byte FUN_106d5c3b8(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 106d5c3c4; end: 106d5c3db; -[SCShoppingLensLauncherScope delegate] */

void FUN_106d5c3c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5c3dc; end: 106d5c44f; -[SCShoppingLensLauncherScope .cxx_destruct] */

void FUN_106d5c3dc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d5c450; end: 106d5c4c3;  */

undefined * FUN_106d5c450(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010b7a39ec();
  if ((int)uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b1068;
    _objc_alloc(PTR_PTR_1126b1068);
    func_0x00010c057c40();
    puVar3 = puVar2;
    func_0x00010c082c60();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 106d5c4c4; end: 106d5c663;  */

void FUN_106d5c4c4(undefined **param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b1068;
  _objc_alloc();
  ppuVar6 = param_1;
  func_0x00010c057c40();
  puVar2 = puVar1;
  func_0x00010c082c60();
  ppuVar8 = (undefined **)0x0;
  if ((int)puVar2 != 0) {
    puVar2 = puVar1;
    func_0x00010bf423e0();
    ppuVar8 = param_1;
    if (puVar2 == (undefined *)0x3) {
      _objc_retain(param_1);
      _objc_retain(param_2);
      ppuVar3 = param_1;
      func_0x00010c11d6a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110db43b8;
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar3);
      if ((ppuVar4 == (undefined **)0x0) && (lVar5 = param_2, func_0x00010c08fa60(), lVar5 != 0)) {
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar3;
        func_0x00010bdc2da0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
      }
      else {
        _objc_retain(param_1);
      }
      _objc_release(param_2);
      _objc_release(param_1);
    }
    else {
      _objc_retain(param_1);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    ppuVar8 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 106d5c664; end: 106d5c6f3; +[SCDeepLinkURL urlStringForProductId:] */

void FUN_106d5c664(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db1bb8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5c6f4; end: 106d5c76b; -[SCDeepLinkURL isValidCommerceDeeplink] */

long FUN_106d5c6f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if (((int)lVar2 != 0) && (lVar1 = param_1, func_0x00010bf423e0(), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c073590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isFormatValid_1125fa770);
    return param_1;
  }
  return 0;
}



/* Entry: 106d5c76c; end: 106d5c973; -[SCDeepLinkURL commerceDeeplinkType] */

undefined8 FUN_106d5c76c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c0f5820(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0720c0();
    _objc_release(param_1);
    if ((uVar2 & 1) != 0) {
LAB_106d5c8ac:
      uVar4 = 1;
      goto LAB_106d5c958;
    }
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110db1b18);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (uVar3 != 0) goto LAB_106d5c8ac;
    }
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110db1b38);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        uVar4 = 2;
        goto LAB_106d5c958;
      }
    }
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e01178);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        uVar4 = 4;
        goto LAB_106d5c958;
      }
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(param_1);
      if (uVar2 != 0) {
        uVar4 = 3;
        goto LAB_106d5c958;
      }
    }
  }
  uVar4 = 0;
LAB_106d5c958:
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106d5c974; end: 106d5c9eb; -[SCDeepLinkURL productId] */

void FUN_106d5c974(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf423e0();
  if ((lVar1 == 1) || (lVar1 = param_1, func_0x00010bf423e0(), lVar1 == 4)) {
    func_0x00010c11d6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d5c9ec; end: 106d5ca53; -[SCDeepLinkURL productURL] */

void FUN_106d5c9ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf423e0();
  if (lVar1 == 4) {
    func_0x00010c11d6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d5ca54; end: 106d5cb0f; -[SCDeepLinkURL storeId] */

void FUN_106d5ca54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf423e0();
  if (lVar1 == 2) {
LAB_106d5ca74:
    func_0x00010c11d6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    if ((int)lVar2 != 0) {
      lVar2 = param_1;
      func_0x00010bf423e0();
      _objc_release(lVar1);
      if (lVar2 != 1) {
        lVar2 = 0;
        goto LAB_106d5cafc;
      }
      goto LAB_106d5ca74;
    }
    lVar2 = 0;
  }
  _objc_release(lVar1);
LAB_106d5cafc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106d5cb10; end: 106d5cb87; -[SCDeepLinkURL productSetId] */

void FUN_106d5cb10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf423e0();
  if ((lVar1 == 3) || (lVar1 = param_1, func_0x00010bf423e0(), lVar1 == 4)) {
    func_0x00010c11d6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d5cb88; end: 106d5cbef; -[SCDeepLinkURL storeUrl] */

void FUN_106d5cb88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf423e0();
  if (lVar1 == 3) {
    func_0x00010c11d6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d5cbf0; end: 106d5cc67; -[SCDeepLinkURL brand] */

void FUN_106d5cbf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf423e0();
  if ((lVar1 == 3) || (lVar1 = param_1, func_0x00010bf423e0(), lVar1 == 4)) {
    func_0x00010c11d6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d5cc68; end: 106d5cccf; -[SCDeepLinkURL calloutText] */

void FUN_106d5cc68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf423e0();
  if (lVar1 == 3) {
    func_0x00010c11d6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d5ccd0; end: 106d5cd37; -[SCDeepLinkURL storeCategoryId] */

void FUN_106d5ccd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf423e0();
  if (lVar1 == 2) {
    func_0x00010c11d6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d5cd38; end: 106d5cdab; -[SCCommerceDeepLinkServices initWithCommerceDeepLinkParser:] */

undefined1 * FUN_106d5cd38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6a88;
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



/* Entry: 106d5cdac; end: 106d5cdb3; -[SCCommerceDeepLinkServices commerceDeepLinkParser] */

undefined8 FUN_106d5cdac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d5cdb4; end: 106d5cdbf; -[SCCommerceDeepLinkServices .cxx_destruct] */

void FUN_106d5cdb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d5cdc0; end: 106d5d13b; -[SCCommerceShowcaseViewController initWithDisplayName:shopNowUrl:showNowDeeplink:delegate:showcaseTracker:eventLogger:createInternalHeader:heroImage:resultTitle:configProvider:imageSourceProvider:imageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106d5cdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126f6a90;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_11275d674;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11275d678;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275d67c,param_6);
    lVar5 = (long)_DAT_11275d680;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11275d684;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275d688) = param_9;
    lVar8 = (long)_DAT_11275d68c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_11;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11275d690;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11275d694;
    _objc_storeWeak((long)puVar1 + lVar5,param_14);
    lVar6 = (long)_DAT_11275d698;
    _objc_storeWeak((long)puVar1 + lVar6,param_15);
    puVar3 = PTR_PTR_1126b0548;
    _objc_alloc();
    func_0x00010c010b80();
    if (*(long *)((long)puVar1 + lVar8) == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126d25d0;
      _objc_alloc();
      func_0x00010c23b020(param_13);
      func_0x00010c01c000();
    }
    puVar4 = PTR_PTR_1126b02f8;
    _objc_alloc();
    lVar5 = (long)puVar1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    lVar6 = (long)puVar1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf1cf80();
    func_0x00010c01cf60();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275d69c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275d69c) = puVar4;
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d5d13c; end: 106d5daf7; -[SCCommerceShowcaseViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5d13c(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_1126f6a90;
  puStack_e0 = param_1;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11275d69c;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010bef7700(param_1);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar15));
  puVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (param_1[_DAT_11275d688] == '\x01') {
    puVar1 = PTR_PTR_1126af078;
    _objc_alloc();
    dVar16 = *(double *)PTR__CGRectZero_110347608;
    func_0x00010c013de0(dVar16,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar14 = (long)_DAT_11275d6a0;
    uVar2 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    puStack_e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = *(undefined **)(param_1 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    puStack_f8 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + lVar14);
    puStack_128 = puVar3;
    puStack_a0 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    puStack_120 = puVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    puStack_118 = puVar4;
    puStack_98 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    uStack_138 = uVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    uStack_90 = uVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010bf1ff80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e8);
    puVar3 = puStack_128;
    _objc_release(puVar4);
    puVar9 = puStack_100;
    _objc_release(uVar13);
    puVar10 = puStack_108;
    _objc_release(uVar7);
    puVar8 = puStack_f8;
    _objc_release(uVar2);
    _objc_release(uVar6);
    puVar4 = puStack_120;
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(puStack_130);
    _objc_release(uStack_138);
    _objc_release(puStack_118);
    _objc_release(puStack_f0);
  }
  else {
    puVar8 = *(undefined **)(param_1 + lVar15);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    dVar16 = 95.0;
    puVar4 = puVar9;
    func_0x00010bf493c0(0x4057c00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
  }
  lStack_110 = lVar15;
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = *(undefined **)(param_1 + lVar15);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puStack_f8 = puVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  puStack_108 = puVar3;
  puStack_c0 = puVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = (undefined *)uVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puStack_128 = (undefined *)uVar5;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_b8 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b0 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_120);
  _objc_release(puVar9);
  _objc_release(uVar13);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puStack_128);
  _objc_release(puStack_118);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f0);
  _objc_release(puStack_f8);
  _objc_release(puStack_e8);
  func_0x00010c09bc80(*(undefined8 *)(param_1 + _DAT_11275d6a4));
  puVar1 = PTR_PTR_1126af080;
  _objc_alloc_init();
  func_0x00010c20eaa0();
  func_0x00010c216240(puVar1);
  func_0x00010c18f820(puVar1);
  func_0x00010c20eaa0(puVar1);
  func_0x00010c18b5e0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lStack_110);
  func_0x00010c152980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7d00(puVar1);
  _objc_release(uVar2);
  lVar15 = (long)_DAT_11275d6a8;
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar2);
  func_0x00010c187440(*(undefined8 *)(param_1 + _DAT_11275d6a0));
  if (*(long *)(param_1 + _DAT_11275d674) != 0) {
    puVar3 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11275d6ac;
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar3;
    _objc_release(uVar2);
    func_0x00010c16e480(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c216380(*(undefined8 *)(param_1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    puStack_e8 = puVar3;
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    ppuVar11 = &PTR____CFConstantStringClassReference_110e71bd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e71bd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar2);
    _objc_release(ppuVar11);
    puVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar12 = *(undefined **)(param_1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    puStack_f0 = puVar12;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(-(dVar16 + 5.0));
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar15);
    puStack_d0 = puVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puStack_f0);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release(puVar8);
    _objc_release(puStack_e8);
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar3);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106d5daf8;
  puStack_168 = PTR_PTR_1126f6a90;
  puStack_170 = puVar3;
  puStack_160 = puVar1;
  puStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_170,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c13c0e0(*(undefined8 *)(puVar3 + _DAT_11275d69c));
  return;
}



/* Entry: 106d5daf8; end: 106d5db47; -[SCCommerceShowcaseViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5daf8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6a90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c13c0e0(*(undefined8 *)(param_1 + _DAT_11275d69c));
  return;
}



/* Entry: 106d5db48; end: 106d5db97; -[SCCommerceShowcaseViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5db48(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6a90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bfaf120(*(undefined8 *)(param_1 + _DAT_11275d69c));
  return;
}



/* Entry: 106d5db98; end: 106d5dba7; -[SCCommerceShowcaseViewController showCalloutBarWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5db98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d69c),PTR_s_showCalloutBarWithText__11266b368);
  return;
}



/* Entry: 106d5dba8; end: 106d5dc0f; -[SCCommerceShowcaseViewController setViewModelProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5dba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d6a4);
  *(undefined8 *)(param_1 + _DAT_11275d6a4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1d8ba0(*(undefined8 *)(param_1 + _DAT_11275d69c),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d5dc10; end: 106d5dc1f; -[SCCommerceShowcaseViewController isCatalogViewScrolledToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5dc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d69c),PTR_s_isScrolledToTop_1125fcf20);
  return;
}



/* Entry: 106d5dc20; end: 106d5ddc3; -[SCCommerceShowcaseViewController handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d5dc20(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) goto LAB_106d5dda8;
      func_0x00010c257e80(*(undefined8 *)(param_1 + _DAT_11275d680));
      param_1 = param_1 + _DAT_11275d67c;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf15a20();
    }
    else {
      param_1 = param_1 + _DAT_11275d67c;
      _objc_loadWeakRetained(param_1);
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b02b0;
      _objc_opt_class(PTR_PTR_1126b02b0);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010c115d00(param_1);
      _objc_release(uVar1);
    }
    _objc_release(param_1);
  }
  else {
    func_0x00010c09bc80(*(undefined8 *)(param_1 + _DAT_11275d6a4));
  }
LAB_106d5dda8:
  _objc_release(param_4);
  return 1;
}



/* Entry: 106d5ddc4; end: 106d5de27; -[SCCommerceShowcaseViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5ddc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11275d67c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c23af80();
  _objc_release(lVar1);
  if (*(long *)(param_1 + _DAT_11275d69c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11275d69c),PTR_s_removeFromParentViewController_112628c58);
    return;
  }
  return;
}



/* Entry: 106d5de28; end: 106d5de2f; -[SCCommerceShowcaseViewController pageViewName] */

undefined8 FUN_106d5de28(void)

{
  return 0x12e;
}



/* Entry: 106d5de30; end: 106d5de37; -[SCCommerceShowcaseViewController blizzardPageType] */

undefined8 FUN_106d5de30(void)

{
  return 0x28;
}



/* Entry: 106d5de38; end: 106d5de47; -[SCCommerceShowcaseViewController blizzardPageTimeUntilReadySeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5de38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d69c),
             PTR_s_timeUntilFirstProductLoadedSecon_1126798e8);
  return;
}



/* Entry: 106d5de48; end: 106d5deab; -[SCCommerceShowcaseViewController _didTapShopNowButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5de48(long param_1,undefined8 param_2)

{
  func_0x00010c257e80(*(undefined8 *)(param_1 + _DAT_11275d680),param_2,
                      &PTR____CFConstantStringClassReference_110e85498);
  param_1 = param_1 + _DAT_11275d67c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d5deac; end: 106d5debb; -[SCCommerceShowcaseViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d5deac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d6a8);
}



/* Entry: 106d5debc; end: 106d5decb; -[SCCommerceShowcaseViewController productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d5debc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d670);
}



/* Entry: 106d5decc; end: 106d5dedb; -[SCCommerceShowcaseViewController storeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d5decc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d6b0);
}



/* Entry: 106d5dedc; end: 106d5deeb; -[SCCommerceShowcaseViewController viewModelProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d5dedc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d6a4);
}



/* Entry: 106d5deec; end: 106d5dfff; -[SCCommerceShowcaseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d5deec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d6a4,0);
  _objc_storeStrong(param_1 + _DAT_11275d6b0,0);
  _objc_storeStrong(param_1 + _DAT_11275d6a8,0);
  _objc_destroyWeak(param_1 + _DAT_11275d698);
  _objc_destroyWeak(param_1 + _DAT_11275d694);
  _objc_storeStrong(param_1 + _DAT_11275d690,0);
  _objc_storeStrong(param_1 + _DAT_11275d68c,0);
  _objc_storeStrong(param_1 + _DAT_11275d6b4,0);
  _objc_storeStrong(param_1 + _DAT_11275d684,0);
  _objc_storeStrong(param_1 + _DAT_11275d6a0,0);
  _objc_destroyWeak(param_1 + _DAT_11275d67c);
  _objc_storeStrong(param_1 + _DAT_11275d680,0);
  _objc_storeStrong(param_1 + _DAT_11275d69c,0);
  _objc_storeStrong(param_1 + _DAT_11275d6ac,0);
  _objc_storeStrong(param_1 + _DAT_11275d678,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d674,0);
  return;
}



/* Entry: 106d5e000; end: 106d5e0af;  */

long FUN_106d5e000(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return (long)(param_3 * 0.05);
}



/* Entry: 106d5e0b0; end: 106d5e0e3;  */

void FUN_106d5e0b0(double param_1)

{
  double dVar1;
  
  dVar1 = param_1;
  FUN_106d5e000();
                    /* WARNING: Could not recover jumptable at 0x00010c23d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((long)(param_1 + dVar1 * -2.0),PTR_PTR_1126d25d8,PTR_s_sizeForWidth__11266cf40);
  return;
}



/* Entry: 106d5e0e4; end: 106d5e14f;  */

undefined1  [16] FUN_106d5e0e4(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain();
  func_0x000106d5e058();
  dVar1 = param_1;
  func_0x000106d5e000();
  uVar3 = 0x3fe0000000000000;
  lVar2 = (long)((param_1 - dVar1) * 0.5);
  func_0x00010c23d740(lVar2,PTR_PTR_1126b0960,param_3,param_2);
  _objc_release(param_2);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 106d5e150; end: 106d5e173;  */

void FUN_106d5e150(undefined8 param_1)

{
  func_0x000106d5e058();
                    /* WARNING: Could not recover jumptable at 0x00010c23d130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x7fefffffffffffff,PTR_PTR_1126d25e0,PTR_s_sizeConstrainedToSize__11266ce70);
  return;
}



/* Entry: 106d5e174; end: 106d5e233;  */

undefined1  [16] FUN_106d5e174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_PTR_1126d25e8;
  _objc_retain();
  func_0x000106d5e058();
  uVar2 = 0x7fefffffffffffff;
  func_0x00010c23d6e0(puVar1,param_3,param_2);
  _objc_release(param_2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 106d5e234; end: 106d5e5c7;  */

void FUN_106d5e234(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  uStack_68 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_106d77ef4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  uVar3 = uStack_68;
  if ((param_4 == 0) || (uVar2 = uStack_68, uVar3 = uVar11, param_4 == 2)) {
    _objc_release(uVar2);
    uVar11 = 0;
    uStack_68 = uVar3;
  }
  puVar1 = PTR_PTR_1126b02c0;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_106d77d28(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000106d77d8c(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar6 = param_1;
  func_0x00010bfe9920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar8);
  _objc_retainAutoreleasedReturnValue();
  FUN_106d77df0();
  uVar9 = param_1;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a760();
  _objc_release(param_3);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uStack_68);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d5e5c8; end: 106d5e653;  */

void FUN_106d5e5c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010c078d80();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d5e654; end: 106d5e65f; +[SCCommerceCatalogPagingDataCoordinatorImpl announcerIdentifier] */

undefined ** FUN_106d5e654(void)

{
  return &PTR____CFConstantStringClassReference_110e85518;
}



/* Entry: 106d5e660; end: 106d5e667; -[SCCommerceCatalogPagingDataCoordinatorImpl addListener:] */

void FUN_106d5e660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106d5e668; end: 106d5e66f; -[SCCommerceCatalogPagingDataCoordinatorImpl removeListener:] */

void FUN_106d5e668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106d5e670; end: 106d5e7cb; -[SCCommerceCatalogPagingDataCoordinatorImpl initWithStoreFetcher:shouldExposeStoreItem:storeModel:] */

undefined1 *
FUN_106d5e670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f6a98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x31) = 0;
    *(undefined8 *)((long)puVar1 + 0x40) = 0x32;
    puVar2 = PTR_PTR_1126b7800;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    func_0x00010c184700(*(undefined8 *)((long)puVar1 + 0x18));
    puVar2 = PTR_PTR_1126b02d0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + 0x30) = param_4;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d5e7cc; end: 106d5e8b3; -[SCCommerceCatalogPagingDataCoordinatorImpl loadItemsForPage:] */

void FUN_106d5e7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x31) = 1;
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d5e8b4; end: 106d5e8ef;  */

void FUN_106d5e8b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be4dc00(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d5e8f0; end: 106d5e997; -[SCCommerceCatalogPagingDataCoordinatorImpl clearQuery] */

void FUN_106d5e8f0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106d5e998; end: 106d5e9f3;  */

void FUN_106d5e998(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    if ((int)puVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      _objc_release(uVar2);
      func_0x00010be4dc00(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c90b8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d5e9f4; end: 106d5ead3; -[SCCommerceCatalogPagingDataCoordinatorImpl updateQueryString:] */

void FUN_106d5e9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x31) = 1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d5ead4; end: 106d5eb3b;  */

void FUN_106d5ead4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(lVar1 + 0x28));
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = uVar3;
      _objc_release(uVar4);
      func_0x00010be4dc00(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c90b8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d5eb3c; end: 106d5ebcf; -[SCCommerceCatalogPagingDataCoordinatorImpl _loadItemsForPage:] */

void FUN_106d5eb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2827c0(param_3);
  lVar2 = param_1;
  func_0x00010bdd80c0(param_1,param_2,uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2827c0(param_3);
  _objc_release(param_3);
  if (lVar2 == 0) {
    func_0x00010be11f60(param_1,param_2,uVar1,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010be4cba0(param_1,param_2,lVar2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d5ebd0; end: 106d5ec27; -[SCCommerceCatalogPagingDataCoordinatorImpl _cachedItemsForPage:queryString:] */

void FUN_106d5ebd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_106d5e5c8(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0dff20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d5ec28; end: 106d5ec6b; -[SCCommerceCatalogPagingDataCoordinatorImpl _loadCachedItems:forPage:queryString:] */

void FUN_106d5ec28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    func_0x00010beda0a0();
    func_0x00010be42460(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcbfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__announceItemLoadingDidSucceedFo_112550990,param_4);
    return;
  }
  return;
}



/* Entry: 106d5ec6c; end: 106d5ed8f; -[SCCommerceCatalogPagingDataCoordinatorImpl _updateCachedItems:page:queryString:] */

void FUN_106d5ec6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500();
  if ((int)puVar1 == 0) {
LAB_106d5ecc8:
    uVar2 = param_5;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) goto LAB_106d5ed6c;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c06d500();
    if (((ulong)puVar1 & 1) == 0) goto LAB_106d5ecc8;
  }
  uVar2 = param_3;
  func_0x00010c1163e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beda0a0(param_1);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = param_3;
  func_0x00010c1163e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_106d5e5c8(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3);
  _objc_release(param_4);
  _objc_release(uVar2);
  func_0x00010be42460(param_1);
  func_0x00010bdcbfc0(param_1);
LAB_106d5ed6c:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d5ed90; end: 106d5ee7b; -[SCCommerceCatalogPagingDataCoordinatorImpl _fetchItemsForPageHelper:error:page:queryString:] */

void FUN_106d5ed90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106d5ee7c;
  puStack_70 = &UNK_110863fc8;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d5ee7c; end: 106d5ef8f;  */

void FUN_106d5ee7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x30) != 0)) {
    func_0x00010bdcbfe0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be42460(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    _objc_copyWeak(auStack_48,auStack_38);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d5ef90; end: 106d5efc7;  */

void FUN_106d5ef90(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed48c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


