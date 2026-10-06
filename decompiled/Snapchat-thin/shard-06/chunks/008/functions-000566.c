/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ed594c; end: 104ed595b; -[SCMapPlaceDiscoveryTrayRouter onSharingWorkflowComplete] */

void FUN_104ed594c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed595c; end: 104ed5a47; -[SCMapPlaceDiscoveryTrayRouter .cxx_destruct] */

void FUN_104ed595c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 104ed5a48; end: 104ed5e03; -[SCMapPlaceDiscoveryContextCreator initWithUserLocationHelpers:locationProvider:mapSession:mapPlacesContentServices:placeDiscoveryScope:placeStoryThumbnailSubject:storyPlaybackScopeExposer:storyPlaybackScopeServices:placeDiscoveryController:composerServices:mapStoryFetcher:circumstanceEngine:placeStoryPlayerVendor:reloadPlacesSubject:blizzardLogger:webBrowserScopeExposer:] */

undefined8 *
FUN_104ed5a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_70 = PTR_PTR_1126e4dc8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    uVar2 = param_15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    func_0x00010c0eafc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b75c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x10];
    puVar1[0x10] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
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



/* Entry: 104ed5e04; end: 104ed60ab; -[SCMapPlaceDiscoveryContextCreator createPlacesVisualTrayResultsContextWithDelegate:trayPositionUpdateObservable:trayHeightObservable:visualTrayMetrics:] */

void FUN_104ed5e04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_storeWeak(param_1 + 8,param_3);
  uVar1 = param_4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  _objc_release(uVar5);
  uVar1 = param_5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126b1e88;
  _objc_alloc(PTR_PTR_1126b1e88);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0fd080(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104ed60ac;
  puStack_88 = &UNK_1108591e0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c000a80(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b1e98;
  _objc_alloc_init(PTR_PTR_1126b1e98);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201bc0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000109021f88(*(undefined8 *)(param_1 + 0x88));
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195400(puVar3);
  _objc_release(puVar4);
  func_0x00010c180820(puVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ed60ac; end: 104ed6103;  */

void FUN_104ed60ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b1e90;
    _objc_alloc_init(PTR_PTR_1126b1e90);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf5f380(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ed6104; end: 104ed615b;  */

void FUN_104ed6104(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010bfc5c40(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ed615c; end: 104ed61f7; -[SCMapPlaceDiscoveryContextCreator createPlaceDiscoverySessionIdsProviderWithOpenSource:sourceSessionId:footerActionId:] */

void FUN_104ed615c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1ea0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0285a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed61f8; end: 104ed6257; -[SCMapPlaceDiscoveryContextCreator getFormattedDistanceToLocationWithLat:lng:] */

void FUN_104ed61f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc5c20(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104ed6258; end: 104ed6327; -[SCMapPlaceDiscoveryContextCreator onPlaceCellVisibleWithPlaceId:] */

void FUN_104ed6258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ed6328;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ed6328; end: 104ed6363;  */

void FUN_104ed6328(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ed6364; end: 104ed6413; -[SCMapPlaceDiscoveryContextCreator currentMapState] */

void FUN_104ed6364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1e90;
  _objc_alloc_init(PTR_PTR_1126b1e90);
  uVar2 = param_1;
  func_0x00010bfc4720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2232a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfc47a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227be0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bfc46e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21eb20(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed6414; end: 104ed64c7; -[SCMapPlaceDiscoveryContextCreator getCurrentViewport] */

void FUN_104ed6414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bfc4740(*(undefined8 *)(param_5 + 0x50));
  puVar1 = PTR_PTR_1126b1eb8;
  _objc_alloc(PTR_PTR_1126b1eb8);
  puVar2 = PTR_PTR_1126b1d80;
  _objc_alloc(PTR_PTR_1126b1d80);
  func_0x00010c0219a0(param_1,param_2);
  puVar3 = PTR_PTR_1126b1d80;
  _objc_alloc(PTR_PTR_1126b1d80);
  func_0x00010c0219a0(param_3,param_4);
  func_0x00010c04faa0(puVar1,param_6,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed64c8; end: 104ed64cf; -[SCMapPlaceDiscoveryContextCreator getCurrentZoomLevel] */

void FUN_104ed64c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc47b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_getCurrentZoomLevel_1125ceb90);
  return;
}



/* Entry: 104ed64d0; end: 104ed656b; -[SCMapPlaceDiscoveryContextCreator getCurrentUserLocation] */

void FUN_104ed64d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf51c80();
  iVar1 = (int)uVar2;
  _CLLocationCoordinate2DIsValid();
  if (iVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010bf51c80(uVar3);
    puVar4 = PTR_PTR_1126b1d80;
    _objc_alloc(PTR_PTR_1126b1d80);
    func_0x00010c0219a0(param_1,param_2);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104ed656c; end: 104ed662f; -[SCMapPlaceDiscoveryContextCreator handleVisualPlaceTapWithPlace:placeTapSource:] */

void FUN_104ed656c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c08aca0(param_4);
  uVar2 = param_1;
  func_0x00010c09abe0(param_4);
  _CLLocationCoordinate2DMake(param_1,uVar2);
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  uVar1 = param_4;
  func_0x00010bf20ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08bc00(param_1,uVar2,param_2,param_3,param_4,uVar1,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ed6630; end: 104ed6677; -[SCMapPlaceDiscoveryContextCreator handleEditSearchWithSearchQuery:] */

void FUN_104ed6630(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0f40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed6678; end: 104ed66a3; -[SCMapPlaceDiscoveryContextCreator handleCloseTray] */

void FUN_104ed6678(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed66a4; end: 104ed66b3; -[SCMapPlaceDiscoveryContextCreator handleReloadPlaces] */

void FUN_104ed66a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 104ed66b4; end: 104ed679b; -[SCMapPlaceDiscoveryContextCreator handleOpenHtmlDebug] */

void FUN_104ed66b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c11fa80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0eafc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar3);
    _objc_release(uVar4);
    lVar2 = lVar1;
    FUN_104ef14f4(lVar1,puVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x78));
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ed679c; end: 104ed68b3; -[SCMapPlaceDiscoveryContextCreator handlePlacePivotTapWithPivot:traySourceSessionId:] */

void FUN_104ed679c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfd0ea0();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104ed68b4;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ed68b4; end: 104ed6963;  */

void FUN_104ed68b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b1e18;
    _objc_alloc(PTR_PTR_1126b1e18);
    func_0x00010c0366e0(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                        *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0fcf80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fcfc0();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed6964; end: 104ed6a2f; -[SCMapPlaceDiscoveryContextCreator handlePlaceLongPressWithPlace:placePivots:trayFilter:] */

void FUN_104ed6964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c0fc8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0720c0();
  _objc_release(param_5);
  if ((int)uVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104ed6a30;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ed6a30; end: 104ed6a67;  */

void FUN_104ed6a30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c08bfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ed6a68; end: 104ed6abf; -[SCMapPlaceDiscoveryContextCreator handleShareVisitedByPlacesWithPivot:numPlaces:] */

void FUN_104ed6a68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c08bfc0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ed6ac0; end: 104ed6bdb; -[SCMapPlaceDiscoveryContextCreator createNativeThumbnailViewFactory] */

void FUN_104ed6ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c295440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_opt_class(PTR_PTR_1126b1ea8);
  uVar2 = uVar3;
  func_0x00010c0b7ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104ed6bdc; end: 104ed6c1b;  */

void FUN_104ed6bdc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf57a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ed6c1c; end: 104ed6c7b; -[SCMapPlaceDiscoveryContextCreator _createVideoView] */

void FUN_104ed6c1c(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be23c40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1ea8;
  _objc_alloc(PTR_PTR_1126b1ea8);
  func_0x00010c028720();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed6c7c; end: 104ed6d7b; -[SCMapPlaceDiscoveryContextCreator _getVenueStoryAnalytics] */

void FUN_104ed6c7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1eb0;
  _objc_alloc(PTR_PTR_1126b1eb0);
  uVar2 = 0x22;
  func_0x00010baf2e2c(0x22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0620a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15ffa0(uVar2);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c25a0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bac20(uVar2);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2900(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar2 = 0xb;
  func_0x00010bb01b4c(0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c26e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed6d7c; end: 104ed6dc3; -[SCMapPlaceDiscoveryContextCreator mapStoryDidDismiss] */

void FUN_104ed6d7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ed6dc4; end: 104ed6dcb; -[SCMapPlaceDiscoveryContextCreator getPrefetchedRankedStoryPlaylistForPlaceID:] */

undefined8 FUN_104ed6dc4(void)

{
  return 0;
}



/* Entry: 104ed6dcc; end: 104ed6e13; -[SCMapPlaceDiscoveryContextCreator webBrowserDidDismiss:] */

void FUN_104ed6dcc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ed6e14; end: 104ed6e1b; -[SCMapPlaceDiscoveryContextCreator shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104ed6e14(void)

{
  return 0;
}



/* Entry: 104ed6e1c; end: 104ed6e23; -[SCMapPlaceDiscoveryContextCreator onTrayPositionChanged] */

undefined8 FUN_104ed6e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 104ed6e24; end: 104ed6e53; -[SCMapPlaceDiscoveryContextCreator setOnTrayPositionChanged:] */

void FUN_104ed6e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed6e54; end: 104ed6e5b; -[SCMapPlaceDiscoveryContextCreator trayHeightObservable] */

undefined8 FUN_104ed6e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104ed6e5c; end: 104ed6e8b; -[SCMapPlaceDiscoveryContextCreator setTrayHeightObservable:] */

void FUN_104ed6e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed6e8c; end: 104ed6e93; -[SCMapPlaceDiscoveryContextCreator nativeVenueStoryPlayer] */

undefined8 FUN_104ed6e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 104ed6e94; end: 104ed6ec3; -[SCMapPlaceDiscoveryContextCreator setNativeVenueStoryPlayer:] */

void FUN_104ed6e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed6ec4; end: 104ed6fbb; -[SCMapPlaceDiscoveryContextCreator .cxx_destruct] */

void FUN_104ed6ec4(long param_1)

{
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



/* Entry: 104ed6fbc; end: 104ed71cb; -[SCMapPlaceDiscoveryResultsTray initWithTrayConfiguration:chromeConfiguration:multiTrayServices:composerServices:controller:trayDelegate:placeDiscoveryContextCreator:searchStatusButton:halfTrayHeightRatio:] */

undefined1 *
FUN_104ed6fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126e4dd0;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_9);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x80) = param_1;
    func_0x00010beadca0(puVar1);
    func_0x00010beaffa0(puVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104ed71cc; end: 104ed74e7; -[SCMapPlaceDiscoveryResultsTray presentTrayWithTrayDetails:] */

void FUN_104ed71cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x88) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = param_3;
    func_0x00010c0e9800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c247b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bfb4260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57900();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    lVar1 = param_1;
    func_0x00010be74140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar1;
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0fd300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    FUN_104ed74e8();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b1ec0;
    _objc_alloc();
    func_0x00010c05fb80();
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar2;
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0d26a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf2a440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf59b80(0x4056800000000000,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c27b360(*(undefined8 *)(param_1 + 0x88));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar2);
    func_0x00010c0e51a0(*(undefined8 *)(param_1 + 0x70));
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0ba2e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar5 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7e00(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ed74e8; end: 104ed75b7;  */

void FUN_104ed74e8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (param_1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db9ef8;
  }
  else {
    func_0x000106876ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0720c0();
    ppuVar2 = &PTR____CFConstantStringClassReference_110db9ef8;
    if ((uVar1 & 1) == 0) {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110db9f38);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104ed75b8; end: 104ed75ef; -[SCMapPlaceDiscoveryResultsTray dismissKeyboard] */

void FUN_104ed75b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed75f0; end: 104ed7617; -[SCMapPlaceDiscoveryResultsTray sessionIdsProvider] */

void FUN_104ed75f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ed7618; end: 104ed7703; -[SCMapPlaceDiscoveryResultsTray viewportSessionData] */

void FUN_104ed7618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b1ec8;
    _objc_alloc_init(PTR_PTR_1126b1ec8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c1600a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0640();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc6c0(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c1600a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0680();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c223520(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ed7704; end: 104ed7837; -[SCMapPlaceDiscoveryResultsTray logTapPlacePoiActionForPlaceID:] */

void FUN_104ed7704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar1 = *(undefined **)(param_1 + 0x40);
    func_0x00010c29ffc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104ed7838;
    puStack_50 = &UNK_110858fe0;
    _objc_retain(param_3);
    puVar2 = puVar1;
    uStack_48 = param_3;
    func_0x00010bfb2040(puVar1,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = puVar2;
    func_0x00010c0fd340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar1 = puVar4;
    }
    _objc_retain(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c0e5140(*(undefined8 *)(param_1 + 0x70),param_2,param_3,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(uStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ed7838; end: 104ed787f;  */

undefined8 FUN_104ed7838(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104ed7880; end: 104ed7887;  */

void FUN_104ed7880(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fc8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_pivotName_11261cc58);
  return;
}



/* Entry: 104ed7888; end: 104ed78af; -[SCMapPlaceDiscoveryResultsTray logVisualTrayClose:] */

void FUN_104ed7888(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 == 0xffffffffffffffff) {
    param_3 = 7;
    if (*(long *)(param_1 + 0x78) != 0) {
      param_3 = (ulong)(*(long *)(param_1 + 0x78) != 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e5170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_onMapVisualTrayClose__112616e70,param_3);
  return;
}



/* Entry: 104ed78b0; end: 104ed79a3; -[SCMapPlaceDiscoveryResultsTray _setupLoadStateObservable] */

void FUN_104ed78b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c09c2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104ed79a4; end: 104ed79eb;  */

void FUN_104ed79a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69da0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed79ec; end: 104ed7b37; -[SCMapPlaceDiscoveryResultsTray _onLoadStateChange:] */

void FUN_104ed79ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c27b240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c09c260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c067ec0();
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar4 = lVar1;
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0d8020(uVar5);
    func_0x00010c28c2a0(uVar2,param_2,uVar5);
    lVar4 = lVar1;
    func_0x00010c0fd300();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    FUN_104ed74e8();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar6;
    _objc_release(uVar5);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29ffc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee3980(param_1,param_2,param_3,uVar5,lVar1);
    _objc_release(uVar5);
    if (((int)uVar3 == 0) && (uVar5 = param_3, func_0x00010c067ec0(), (int)uVar5 == 2)) {
      func_0x00010c0e5180(*(undefined8 *)(param_1 + 0x70));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ed7b38; end: 104ed7c2b; -[SCMapPlaceDiscoveryResultsTray _setupStoriesLoadedObservable] */

void FUN_104ed7b38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2587a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104ed7c2c; end: 104ed7c73;  */

void FUN_104ed7c2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6baa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed7c74; end: 104ed7cef; -[SCMapPlaceDiscoveryResultsTray _onStoriesLoadedWithEvent:] */

void FUN_104ed7c74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c27b240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((lVar2 != 0) && (param_3 != 0)) && (*(long *)(param_1 + 0x70) != 0)) {
    func_0x00010c0e51c0(*(long *)(param_1 + 0x70),param_2,param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ed7cf0; end: 104ed7ddf; -[SCMapPlaceDiscoveryResultsTray _updateViewModelWithLoadState:places:trayDetails:] */

void FUN_104ed7cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = param_5;
    func_0x00010c0fd300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b1ed0;
      _objc_alloc(PTR_PTR_1126b1ed0);
      lVar1 = param_5;
      func_0x00010c0fd300(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c036100(puVar2,param_2,lVar1);
      _objc_release(lVar1);
      func_0x00010c1be860(puVar2,param_2,param_3);
      func_0x00010c1dcd00(puVar2,param_2,param_4);
      func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x38),param_2,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ed7de0; end: 104ed7e7b; -[SCMapPlaceDiscoveryResultsTray _handleTrayEvent:] */

void FUN_104ed7de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ed7e7c;
  puStack_20 = &UNK_1108592e0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ed7e90;
  puStack_48 = &UNK_1108484c8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ed7f78;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c1800(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 104ed7e7c; end: 104ed7e8f;  */

void FUN_104ed7e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be324d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleTrayWillChangeToPosition__11256a2d0,
             param_2);
  return;
}



/* Entry: 104ed7e90; end: 104ed7f77;  */

void FUN_104ed7e90(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2 - 2U >> 1;
  if ((uVar1 | param_2 << 0x3f) < 8) {
    uVar3 = *(undefined4 *)(&UNK_10dd8d600 + uVar1 * 4);
  }
  else {
    uVar3 = 0;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c27b360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88));
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar2);
  if (param_2 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be763b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__positionSearchStatusButton_11257b288);
    return;
  }
  return;
}



/* Entry: 104ed7f78; end: 104ed7f7f;  */

void FUN_104ed7f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddfb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanupTray_112555868);
  return;
}



/* Entry: 104ed7f80; end: 104ed7fd7; -[SCMapPlaceDiscoveryResultsTray _cleanupTray] */

void FUN_104ed7f80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf79ae0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ed7fd8; end: 104ed8073; -[SCMapPlaceDiscoveryResultsTray _handleTrayWillChangeToPosition:] */

void FUN_104ed7fd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c1b5220(*(undefined8 *)(param_1 + 0x70),param_2,param_3 - 3U < 0xfffffffffffffffe);
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010bf5fb20();
  if ((param_3 != 2) && (lVar1 == 2)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    func_0x00010c28c2c0(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010c1dcd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_setPlacesBrowsingContext_112654d78);
    return;
  }
  return;
}



/* Entry: 104ed8074; end: 104ed81d3; -[SCMapPlaceDiscoveryResultsTray _placeDiscoveryResultsTrayViewWithTrayDetails:] */

void FUN_104ed8074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b1ed0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0fd300(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c036100(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1be860(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be2e8);
  func_0x00010c1dcd00(puVar1,param_2,PTR____NSArray0__struct_11034ab48);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf57920(uVar7,param_2,lVar3,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b1ed8;
  _objc_alloc(PTR_PTR_1126b1ed8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c295440(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar4,param_2,puVar1,uVar7,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104ed81d4; end: 104ed8263; -[SCMapPlaceDiscoveryResultsTray _positionSearchStatusButton] */

void FUN_104ed81d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289820(uVar4,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104ed8264; end: 104ed826b; -[SCMapPlaceDiscoveryResultsTray trayLifecycle] */

undefined8 FUN_104ed8264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 104ed826c; end: 104ed8273; -[SCMapPlaceDiscoveryResultsTray trayFeatureName] */

undefined8 FUN_104ed826c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 104ed8274; end: 104ed8347; -[SCMapPlaceDiscoveryResultsTray .cxx_destruct] */

void FUN_104ed8274(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104ed8348; end: 104ed8833; -[SCMapPlaceDiscoverySearchStatusButton init] */

/* WARNING: Possible PIC construction at 0x000104ed87c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ed886c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ed87c4) */
/* WARNING: Removing unreachable block (ram,0x000104ed8870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ed8348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126e4dd8;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return 0;
    }
    ___stack_chk_fail();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_112716398);
    _objc_retain(param_3);
    uVar14 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4031000000000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    func_0x00010c17d4c0(puVar1);
    func_0x00010c160fc0(puVar1);
    func_0x00010bea26e0(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar18 = (long)_DAT_112716388;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar19 = (long)_DAT_11271638c;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar16);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf494e0(0x4041000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar16;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar14;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar15;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar17);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar15);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar16);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + (long)_DAT_112716390);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112716390) = uVar16;
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112716394;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined8 *)((long)puVar1 + lVar18) = uVar16;
    _objc_release(uVar15);
    _objc_release(puVar3);
    _objc_release(uVar14);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    uVar14 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s_setActive__112636340,uVar14);
  return uVar16;
}



/* Entry: 104ed8834; end: 104ed88d3; -[SCMapPlaceDiscoverySearchStatusButton updateSearchButtonPositionWithTopAnchor:] */

/* WARNING: Possible PIC construction at 0x000104ed886c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ed8870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed8834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112716398);
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 104ed88d4; end: 104ed88e7; -[SCMapPlaceDiscoverySearchStatusButton deactivateSearchButtonConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed88d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112716398),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 104ed88e8; end: 104ed891b; -[SCMapPlaceDiscoverySearchStatusButton updateSearchButtonWithVisibility:trayPosition:] */

void FUN_104ed88e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_4 == 4) {
    uVar1 = param_3;
  }
  func_0x00010bee0720(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea26f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setButtonVisible__112586360,uVar1);
  return;
}



/* Entry: 104ed891c; end: 104ed899f; -[SCMapPlaceDiscoverySearchStatusButton _updateSpinnerAndConstraintsWithIsLoading:] */

/* WARNING: Possible PIC construction at 0x000104ed8944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104ed8984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ed8948) */
/* WARNING: Removing unreachable block (ram,0x00010c24dbc0) */
/* WARNING: Removing unreachable block (ram,0x000104ed8988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed891c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11271638c));
    uVar1 = *(undefined8 *)(param_1 + _DAT_112716390);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112716394);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 104ed89a0; end: 104ed8a03; -[SCMapPlaceDiscoverySearchStatusButton _setButtonVisible:] */

void FUN_104ed89a0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  func_0x00010c1a7f60(param_1,param_2,param_3 ^ 1);
  uVar1 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  func_0x00010c1677c0(uVar1,param_1);
  if (((param_3 ^ 1) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyShadow_112551420);
    return;
  }
  return;
}



/* Entry: 104ed8a04; end: 104ed8a73; -[SCMapPlaceDiscoverySearchStatusButton _applyShadow] */

void FUN_104ed8a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b08d8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x4024000000000000,0x3fd0000000000000,*(undefined8 *)PTR__CGSizeZero_110347620
                      ,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,param_1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ed8a74; end: 104ed8ae3; -[SCMapPlaceDiscoverySearchStatusButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed8a74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716398,0);
  _objc_storeStrong(param_1 + _DAT_112716394,0);
  _objc_storeStrong(param_1 + _DAT_112716390,0);
  _objc_storeStrong(param_1 + _DAT_11271638c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716388,0);
  return;
}



/* Entry: 104ed8ae4; end: 104ed8c53; -[SCMapPlaceDiscoveryTrayDataProvider initWithMapPlacesContentServices:mapStoryFetchingServices:mapViewServices:locationProvider:circumstanceEngine:currentUserId:grapheneLogger:] */

undefined1 *
FUN_104ed8ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e4de0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ed8c54; end: 104ed8c9b; -[SCMapPlaceDiscoveryTrayDataProvider dealloc] */

void FUN_104ed8c54(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1126e4de0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ed8c9c; end: 104ed903f; -[SCMapPlaceDiscoveryTrayDataProvider fetchDiscoveryPlacesForTrayDetails:networkSessionId:completion:] */

void FUN_104ed8c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_b0;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_8);
  puVar1 = param_7;
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0fd320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c071f40();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar3 == 0) {
    uStack_b0 = (undefined *)0x0;
  }
  else {
    uStack_b0 = puVar1;
    func_0x00010c0fc8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1ee0;
    _objc_alloc(PTR_PTR_1126b1ee0);
    func_0x00010c036140();
  }
  puVar2 = param_7;
  func_0x00010c0fd300(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0fd320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc600(puVar1,param_6,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_5 + 8);
  func_0x00010c0fcf60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + 0x18);
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf200();
  uVar9 = *(undefined8 *)(param_5 + 0x18);
  uVar20 = param_1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29fd40();
  puVar2 = param_7;
  uVar21 = uVar20;
  uVar22 = param_2;
  func_0x00010c0640a0();
  uVar12 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  puVar3 = param_7;
  func_0x00010c13b640(param_7);
  puVar14 = param_7;
  func_0x00010c1545c0(param_7);
  uVar15 = *(undefined8 *)(param_5 + 0x18);
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bfcae40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c25e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9400(param_1,uVar20,param_2,param_3,param_4,uVar21,uVar22,uVar5,param_6,puVar1,
                      (ulong)puVar2 & 0xffffffff,puVar3,puVar14,uStack_b0,param_8,uVar19,param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uStack_b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 104ed9040; end: 104ed9147; -[SCMapPlaceDiscoveryTrayDataProvider fetchInitialVisualTrayPlacesDataForDiscoveryPlaces:currentPivot:completion:] */

void FUN_104ed9040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf86d80(uVar2);
  func_0x00010be20e80(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ed9148;
  puStack_50 = &UNK_110859310;
  uStack_48 = param_5;
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c25ff60(param_1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar1);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_1);
  return;
}



/* Entry: 104ed9148; end: 104ed9153;  */

void FUN_104ed9148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ed9150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104ed9154; end: 104ed921f; -[SCMapPlaceDiscoveryTrayDataProvider fetchPlaceStoryThumbnailsDataForPlaceID:completion:] */

void FUN_104ed9154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010be21820(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ed9220;
  puStack_40 = &UNK_110859340;
  uStack_38 = param_4;
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c25ff60(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 104ed9220; end: 104ed922b;  */

void FUN_104ed9220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ed9228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104ed922c; end: 104ed92b7; -[SCMapPlaceDiscoveryTrayDataProvider removeVisitationForPlace:completion:] */

void FUN_104ed922c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0fd6e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f1e0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ed92b8; end: 104ed92bf; -[SCMapPlaceDiscoveryTrayDataProvider cancelInFlightRequests] */

void FUN_104ed92b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 104ed92c0; end: 104ed9477; -[SCMapPlaceDiscoveryTrayDataProvider _getObservableOfNumOfRankedSnapsAndPlacePivotsForDiscoveryPlaces:currentPivot:] */

void FUN_104ed92c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be13180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  uVar3 = param_1;
  func_0x00010be13320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_initWeak(auStack_58,param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010bf41860(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104ed9478; end: 104ed957b;  */

void FUN_104ed9478(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf529e0();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 == lVar1) {
    lVar1 = param_2;
    func_0x00010c14da60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c14da60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if ((lVar3 == 0) && (lVar3 = lVar1, func_0x00010bf529e0(), lVar3 == 0)) {
      lVar3 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar3);
    }
    else {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010bde70e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104ed957c; end: 104ed97b7; -[SCMapPlaceDiscoveryTrayDataProvider _fetchPreviewRankedSnapsObservableForDiscoveryPlaces:currentPivot:] */

void FUN_104ed957c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010c0fd320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071f40();
  _objc_release(uVar2);
  uVar5 = param_4;
  if (((int)uVar3 == 0) || (uVar4 = param_4, func_0x00010bf529e0(), uVar4 < 0x15)) {
    _objc_retain(param_4);
  }
  else {
    func_0x00010c25e980(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_68,param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104ed97b8;
  puStack_78 = &UNK_1108593a0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar5;
  func_0x00010c0b8600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_98,param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_4);
  _objc_copyWeak(auStack_a8,auStack_98);
  uStack_a0 = param_1;
  func_0x00010bf41860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed97b8; end: 104ed983f;  */

void FUN_104ed97b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010be21a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104ed9840; end: 104ed99cb;  */

void FUN_104ed9840(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        func_0x00010c0fd0e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar1);
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_2;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c0aba00(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar2 + 0x28));
  }
  _objc_release(lVar2);
  lVar6 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_104ed99cc;
    lStack_160 = lVar2;
    lStack_158 = param_1;
    puStack_150 = puVar1;
    lStack_148 = param_2;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puVar3 = (undefined1 *)puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_168,lVar6);
    puVar1 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_170,auStack_168);
    _objc_retain(puVar3);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed99cc; end: 104ed9adb; -[SCMapPlaceDiscoveryTrayDataProvider _fetchPlacePivotsObservableForDiscoveryPlaces:] */

void FUN_104ed99cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ed9adc; end: 104ed9ae3;  */

void FUN_104ed9adc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_placeId_11261ce58);
  return;
}



/* Entry: 104ed9ae4; end: 104ed9b47;  */

void FUN_104ed9ae4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13140();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 104ed9b48; end: 104ed9cab; -[SCMapPlaceDiscoveryTrayDataProvider _fetchPlacePivotsForPlaceIDs:observer:] */

void FUN_104ed9b48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0fcf60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_1;
  func_0x00010bfa9360(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104ed9cac; end: 104ed9d67;  */

void FUN_104ed9cac(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c0ac4a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar2 + 0x28));
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ed9d68; end: 104ed9e5b; -[SCMapPlaceDiscoveryTrayDataProvider _getPreviewThumbnailObservableForPlaceID:useAlternateRanking:] */

void FUN_104ed9d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed9e5c; end: 104ed9f3b;  */

void FUN_104ed9e5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010be13200(lVar1);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ed9f3c; end: 104ed9ffb;  */

void FUN_104ed9f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1ee8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c2827c0(param_3);
  _objc_release(param_3);
  func_0x00010c0365a0(puVar1);
  _objc_release(param_2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ed9ffc; end: 104eda0eb; -[SCMapPlaceDiscoveryTrayDataProvider _fetchPlaceStoryPreviewThumbnailForPlaceID:useAlternateRanking:completion:] */

void FUN_104ed9ffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c110e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104eda0ec;
  puStack_50 = &UNK_1108594d0;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa9680(uVar1,param_2,param_3,param_4,2,&puStack_68);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 104eda0ec; end: 104eda17f;  */

void FUN_104eda0ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_4 == 0) {
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,0);
    _objc_release(param_2);
  }
  else {
    (**(code **)(lVar1 + 0x10))(lVar1,0,0,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eda180; end: 104eda23f; -[SCMapPlaceDiscoveryTrayDataProvider _getPlaceThumbnailsDataObservableForPlaceID:] */

void FUN_104eda180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be21a80(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104eda240;
  puStack_40 = &UNK_110859500;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


