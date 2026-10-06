/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063840b4; end: 1063840bf; -[SCOperaPlaylistAdPlugin type] */

void FUN_1063840b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1015f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c9a78,PTR_s_playlistItemType_11261df98);
  return;
}



/* Entry: 1063840c0; end: 106384187; -[SCOperaPlaylistAdPlugin teardown] */

void FUN_1063840c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010c26ab80(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  func_0x00010c26ac40(*(undefined8 *)(param_1 + 0x130));
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4ea0();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bef3ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca190;
  func_0x00010c26ab80(PTR_PTR_1126ca190);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106384188; end: 10638418b; -[SCOperaPlaylistAdPlugin extraPropertiesProvider] */

void FUN_106384188(void)

{
  return;
}



/* Entry: 10638418c; end: 106384253; -[SCOperaPlaylistAdPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_10638418c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_6 != 0) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010be6f4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf9e7c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    (**(code **)(param_6 + 0x10))(param_6,lVar1,uVar2);
    _objc_release(param_6);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106384254; end: 1063842f7; -[SCOperaPlaylistAdPlugin adPlaybackDidRegisterFeaturePlugIns:] */

void FUN_106384254(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x120) = 1;
  lVar2 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    param_1 = param_1 + 0xe0;
    _objc_loadWeakRetained(param_1);
    puVar3 = PTR_PTR_1126b5b08;
    func_0x00010c1008a0(PTR_PTR_1126b5b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(param_1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063842f8; end: 10638433f; -[SCOperaPlaylistAdPlugin reloadPageWithItemId:] */

void FUN_1063842f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106384340; end: 1063843b7; -[SCOperaPlaylistAdPlugin dismissViewFromCloseButton] */

void FUN_106384340(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c98a0;
  func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84d40(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063843b8; end: 106384467; -[SCOperaPlaylistAdPlugin pausePlaybackWithOverride:] */

void FUN_1063843b8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar1 = param_1 + 0xe8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0340();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1 + 0xe8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,0,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106384468; end: 1063844eb; -[SCOperaPlaylistAdPlugin resumePlaybackWithResetOverride:] */

void FUN_106384468(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar1 = param_1 + 0xe8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0360();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063844ec; end: 106384547; -[SCOperaPlaylistAdPlugin overridePauseStateWithPause:] */

void FUN_1063844ec(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c0f0360();
  }
  else {
    func_0x00010c0f0340();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106384548; end: 10638460f; -[SCOperaPlaylistAdPlugin _pagePropertiesForDataModel:item:] */

void FUN_106384548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9ea60(uVar2,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be6f720(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bef7f60(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106384610; end: 10638477f; -[SCOperaPlaylistAdPlugin _pagePropertiesFromAdPlaybackFeaturesForItem:] */

void FUN_106384610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0720c0(uVar5,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar5);
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if ((int)uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106384780;
    puStack_58 = &UNK_11091f888;
    _objc_retain(param_3);
    uStack_50 = param_3;
    puStack_48 = puVar3;
    func_0x00010bf97e80(uVar5,param_2,&puStack_70);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined1 *)(param_1 + 0x120));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bfe00;
    func_0x00010bef3d20(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,puVar1,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(uStack_50);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106384780; end: 10638480b;  */

void FUN_106384780(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0f1a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10638480c; end: 106384943; -[SCOperaPlaylistAdPlugin adTrackInfoContextForAdResponse:snapIndex:isExitingAd:] */

void FUN_10638480c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106384944;
  uStack_50 = 0x106384954;
  puVar1 = PTR_PTR_1126ca198;
  _objc_alloc();
  func_0x00010c04fc20();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  puStack_48 = puVar1;
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar2);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106384944; end: 10638495b;  */

void FUN_106384944(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10638495c; end: 1063849af;  */

void FUN_10638495c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bef5c40(param_2,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                      *(undefined1 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063849b0; end: 1063849b7; -[SCOperaPlaylistAdPlugin fireProfileOpenTerminalTrackForPageId:swipeStartLocation:swipeEndLocation:] */

void FUN_1063849b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_triggerProfileOpenTerminalAdTrac_11267ca80);
  return;
}



/* Entry: 1063849b8; end: 1063849bf; -[SCOperaPlaylistAdPlugin setChromeInteractionSession:] */

void FUN_1063849b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf0),PTR_s_setChromeInteractionSession__11263cb58);
  return;
}



/* Entry: 1063849c0; end: 1063849c7; -[SCOperaPlaylistAdPlugin setAdPageRegistry:] */

void FUN_1063849c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c163d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x130),PTR_s_setAdPageRegistry__112636970);
  return;
}



/* Entry: 1063849c8; end: 1063849cf; -[SCOperaPlaylistAdPlugin setOperaEventSubscriber:] */

void FUN_1063849c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c197b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setEventSubscriber__1126438f0);
  return;
}



/* Entry: 1063849d0; end: 1063849d7; -[SCOperaPlaylistAdPlugin operaAdapter] */

undefined8 FUN_1063849d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 1063849d8; end: 1063849df; -[SCOperaPlaylistAdPlugin adDataSource] */

undefined8 FUN_1063849d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 1063849e0; end: 1063849e7; -[SCOperaPlaylistAdPlugin adTrackerHelper] */

undefined8 FUN_1063849e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1063849e8; end: 106384ba3; -[SCOperaPlaylistAdPlugin .cxx_destruct] */

void FUN_1063849e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
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



/* Entry: 106384ba4; end: 106384bc3;  */

void FUN_106384ba4(long param_1)

{
  func_0x00010bfc34c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106384bc4; end: 106384f6b; -[SCSnapAdTrackHandler initWithAdDataSource:adConfigProvider:adConfigProviderV2:adTrackerHelper:operaEventStateTracker:chromeInteractionSession:sharingSession:dismissTracker:sKViewThroughImpressionTracker:trackSeqNumProvider:playbackSessionObservableRepository:applicationLifecycleEvents:operaAdaptor:adTrackFunnelEventTracker:navigationStyle:crashLogger:analyticsSession:] */

undefined8 *
FUN_106384bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126f10b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
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
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    puVar1[0xe] = param_18;
    _objc_retain(param_19);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_20;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_16);
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



/* Entry: 106384f6c; end: 106385247; -[SCSnapAdTrackHandler beginObservationWithAdUnifiedEventStreams:] */

void FUN_106384f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  uVar2 = param_3;
  func_0x00010bef3280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106385248;
  puStack_88 = &UNK_110887e20;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef65c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x106385290;
  puStack_b0 = &UNK_110887e80;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef6680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1063852d8;
  puStack_d8 = &UNK_110888860;
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef2720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 106385248; end: 106385367;  */

void FUN_106385248(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106385368; end: 10638546f; -[SCSnapAdTrackHandler beginObservationWithAdInstantPageEventStreams:] */

void FUN_106385368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef30a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106385470; end: 1063854b7;  */

void FUN_106385470(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69a00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063854b8; end: 1063855b3; -[SCSnapAdTrackHandler _onWebviewUserEvent:] */

void FUN_1063854b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if ((((lVar1 != 0) && (*(long *)(lVar1 + 0x10) == 3)) && (*(long *)(lVar1 + 0x18) == 0x17)) &&
     (*(long *)(lVar1 + 0x20) - 1U < 2)) {
    puVar2 = PTR_PTR_1126b8da0;
    func_0x00010c115b80(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x48);
    }
    _objc_retain(uVar4);
    func_0x00010c27bc60(param_1,param_2,10,puVar2,&PTR____CFConstantStringClassReference_110daafd8,
                        uVar4);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063855b4; end: 106385717; -[SCSnapAdTrackHandler _onInstantPageEvent:] */

void FUN_1063855b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bd86870(lVar2,PTR____kCFBooleanFalse_11034ab60,&PTR___NSConcreteGlobalBlock_11091f908)
  ;
  lVar4 = lVar3;
  func_0x00010bf1f3c0();
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126b8da0;
    func_0x00010c115b80(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c2804a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_retain(0);
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + 0x28);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(lVar1 + 0x48);
    }
    _objc_retain(uVar9);
    func_0x00010c27bc60(param_1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106385718; end: 106385783;  */

void FUN_106385718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106385784; end: 1063858f3; -[SCSnapAdTrackHandler triggerProfileOpenTerminalAdTrackForPageId:swipeStartLocation:swipeEndLocation:] */

void FUN_106385784(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c98a0;
  _objc_retain(param_5);
  if ((param_6 == 0) || (param_7 == 0)) {
    _objc_alloc(puVar1);
    func_0x00010c055880();
  }
  else {
    func_0x00010bdc1060(param_6);
    uVar3 = param_1;
    uVar2 = param_2;
    func_0x00010bdc1060(param_7);
    func_0x00010c0689c0(param_1,param_2,uVar3,uVar2,puVar1,param_4,7,0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0ea260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8f80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ec0c0();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becfa80(param_3,param_4,5,puVar4,param_5,0,uVar3);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1063858f4; end: 1063858fb; -[SCSnapAdTrackHandler triggerAdTrack:option:pageId:collectionItemIndex:] */

void FUN_1063858f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becfa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerAdTrack_option_pageId_co_112591848);
  return;
}



/* Entry: 1063858fc; end: 106385dd3; -[SCSnapAdTrackHandler _triggerAdTrack:option:pageId:collectionItemIndex:isProfileOpen:] */

void FUN_1063858fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bdf6ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
    lVar11 = lVar1;
    func_0x00010be36bc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
  }
  _objc_release(lVar2);
  lVar2 = lVar9;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c08fa60();
  if (lVar11 == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    _objc_opt_respondsToSelector(uVar3,PTR_s_adResponseForAdRequestClientId__11259ac50);
    if ((uVar3 & 1) == 0) goto LAB_106385aec;
    lVar4 = param_1;
    func_0x00010bdc5be0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010bef2c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010c08fa60();
    _objc_release(lVar11);
    lVar11 = 0;
    if (lVar5 != 0) {
      lVar8 = *(long *)(param_1 + 8);
      lVar11 = lVar4;
      func_0x00010bef2c60(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      lVar11 = lVar8;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010c08fa60();
      _objc_release(lVar11);
      if (lVar5 == 0) {
        lVar11 = 0;
      }
      else {
        _objc_retain(lVar8);
        _objc_release(lVar9);
        lVar11 = lVar8;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_retain(lVar4);
        lVar9 = lVar8;
        lVar2 = lVar11;
        lVar11 = lVar4;
      }
      _objc_release(lVar8);
    }
    _objc_release(lVar4);
  }
  else {
LAB_106385aec:
    lVar11 = 0;
  }
  lVar4 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 == 0) goto LAB_106385d58;
  }
  else {
    _objc_release();
  }
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar6);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(uVar6);
  }
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if (lVar4 == 0) goto LAB_106385d58;
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e180();
  _objc_release(uVar6);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 - 2U < 4) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010bef4240();
    if ((lVar4 != 0x16) || (lVar4 = lVar9, func_0x00010bef60a0(), lVar4 != 5)) {
      uVar3 = *(ulong *)(param_1 + 0x90);
      func_0x00010bf4b900();
      if ((uVar3 & 1) != 0) goto LAB_106385d50;
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x90));
LAB_106385ce0:
    if (lVar11 == 0) {
      _objc_retain(lVar1);
      func_0x00010bef53c0();
      lVar4 = lVar1;
    }
    else {
      _objc_retain(0);
      func_0x00010c2415a0();
      lVar4 = 0;
    }
    func_0x00010becfaa0(param_1);
    _objc_release(lVar4);
  }
  else {
    if (((3 < param_3 - 7U) && (param_3 != 0)) || (param_6 != 0)) {
      puVar10 = (undefined *)0x0;
      goto LAB_106385ce0;
    }
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(ulong *)(param_1 + 0x90);
    func_0x00010bf4b900();
    if ((uVar3 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x90));
      goto LAB_106385ce0;
    }
  }
LAB_106385d50:
  _objc_release(puVar10);
LAB_106385d58:
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106385dd4; end: 106385ecf; -[SCSnapAdTrackHandler _adaptorIdentityCommonForPageId:collectionItemIndex:] */

void FUN_106385dd4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bf5f800();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      lVar2 = param_3;
    }
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bef5c20(uVar4,param_2,lVar2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106385ed0; end: 10638613f; -[SCSnapAdTrackHandler _onAdLifecycleEventV2:] */

void FUN_106385ed0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x18);
    _objc_release();
    lVar4 = param_3;
    if (lVar3 == 10) {
      lVar3 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = 1;
        if (*(char *)(lVar3 + 8) != '\0') {
          uVar5 = 2;
        }
      }
      _objc_release();
      puVar1 = PTR_PTR_1126b8f38;
      func_0x00010c277e00(PTR_PTR_1126b8f38,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf428e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bdc58a0(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdf00(param_1,param_2,puVar1,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(puVar1);
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        bVar6 = 0;
      }
      else {
        bVar6 = *(byte *)(lVar4 + 8);
      }
      lVar3 = param_3;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar3 + 0x80);
      }
      _objc_retain(uVar5);
      func_0x00010be69060(param_1,param_2,bVar6 & 1,uVar5);
      _objc_release(uVar5);
    }
    else if (lVar3 == 3) {
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 0x48);
      }
      _objc_retain(uVar5);
      lVar3 = *(long *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = uVar5;
    }
    else {
      if (lVar3 != 1) goto LAB_1063860f8;
      puVar1 = PTR_PTR_1126b8f38;
      func_0x00010c274d80(PTR_PTR_1126b8f38);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf428e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bdc58a0(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdf00(param_1,param_2,puVar1,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(puVar1);
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(lVar4 + 0x28);
      }
      _objc_retain(lVar3);
      func_0x00010be6c060(param_1,param_2,lVar3);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar4);
LAB_1063860f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106386140; end: 106386497; -[SCSnapAdTrackHandler _onAdDeeplinkEventV2:] */

void FUN_106386140(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(lVar10 + 0x58) == 6;
  }
  _objc_release();
  lVar10 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x58) != 10)) {
    bVar2 = false;
  }
  else {
    lVar9 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(long *)(lVar9 + 0x60) == 5;
    }
    _objc_release();
  }
  _objc_release(lVar10);
  lVar10 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x58) != 5)) {
    bVar11 = 0;
  }
  else {
    lVar9 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x60) != 5)) {
      bVar11 = 0;
    }
    else {
      lVar3 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) != 2)) {
        bVar11 = 0;
      }
      else {
        lVar4 = param_3;
        func_0x00010bf99b20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          bVar11 = 0;
        }
        else {
          bVar11 = *(byte *)(lVar4 + 9);
        }
        _objc_release();
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar9);
  }
  _objc_release(lVar10);
  if ((!bVar1 && !bVar2) && ((bVar11 & 1) == 0)) goto LAB_10638645c;
  lVar10 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    lVar10 = 0;
LAB_1063863e0:
    uVar8 = 5;
LAB_1063863e4:
    _objc_release(lVar10);
  }
  else {
    lVar9 = *(long *)(lVar10 + 0x18);
    _objc_release();
    uVar8 = 5;
    lVar10 = param_3;
    if (lVar9 < 4) {
      if (lVar9 == 1) {
        func_0x00010bf428e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be68a20(param_1,param_2,lVar10);
        goto LAB_1063863e0;
      }
      if (lVar9 != 2) {
        if (lVar9 != 3) goto LAB_1063863ec;
        uVar5 = *(ulong *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1063863ac;
      }
      func_0x00010bf428e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be68a80(param_1,param_2,lVar10);
      uVar8 = 4;
      goto LAB_1063863e4;
    }
    if (lVar9 == 4) {
      uVar5 = *(ulong *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
LAB_1063863ac:
      uVar6 = uVar5;
      func_0x00010bf1f480();
      _objc_release(uVar5);
      if ((uVar6 & 1) != 0) goto LAB_10638645c;
      func_0x00010bf428e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be68a60(param_1,param_2,lVar10);
      goto LAB_1063863e0;
    }
    if (lVar9 == 5) {
      uVar5 = *(ulong *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063863ac;
    }
    if (lVar9 == 9) goto LAB_10638645c;
  }
LAB_1063863ec:
  puVar7 = PTR_PTR_1126b8f38;
  func_0x00010c277e00(PTR_PTR_1126b8f38,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010bf428e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bdc58a0(param_1,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becdf00(param_1,param_2,puVar7,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(puVar7);
LAB_10638645c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106386498; end: 1063865e7; -[SCSnapAdTrackHandler _onWebviewEventV2:] */

void FUN_106386498(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) goto LAB_1063865ac;
  if (*(long *)(lVar2 + 0x10) == 10) {
    puVar3 = PTR_PTR_1126b8f38;
    func_0x00010c277e00(PTR_PTR_1126b8f38,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bdc58a0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdf00(param_1,param_2,puVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    if (lVar1 == 0) {
      _objc_retain(0);
      uVar6 = 0;
      uVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 0x28);
      _objc_retain(uVar6);
      uVar4 = *(undefined8 *)(lVar1 + 0x58);
    }
    func_0x00010be690e0(param_1,param_2,uVar6,uVar4);
  }
  else {
    if (*(long *)(lVar2 + 0x10) != 2) goto LAB_1063865ac;
    lVar5 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x58);
      _objc_release();
      if (lVar5 == 3) {
        func_0x00010be6c9c0(param_1,param_2,lVar1);
      }
      goto LAB_1063865ac;
    }
  }
  _objc_release();
LAB_1063865ac:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063865e8; end: 10638667f; -[SCSnapAdTrackHandler _onWebviewEvent:] */

void FUN_1063865e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25e900();
  if (lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef60a0();
    _objc_release(lVar1);
    if (lVar2 == 3) {
      lVar1 = param_3;
      func_0x00010bf428e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6c9a0(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106386680; end: 1063866ef; -[SCSnapAdTrackHandler _onTopSnapPresent:] */

void FUN_106386680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8da0;
  _objc_retain(param_3);
  func_0x00010c2499a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27bc60(param_1,param_2,0,puVar1,param_3,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063866f0; end: 10638679f; -[SCSnapAdTrackHandler _onExbOpened:adType:] */

void FUN_1063866f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((param_4 == 3) && ((int)uVar2 != 0)) {
    puVar3 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27bc60(param_1,param_2,2,puVar3,param_3,0);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063867a0; end: 1063869f3; -[SCSnapAdTrackHandler _onEnterBackground:source:] */

void FUN_1063867a0(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf5f800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bef3ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ca190;
    func_0x00010bf13c20(PTR_PTR_1126ca190);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar3);
  }
  lVar5 = *(long *)(param_1 + 0x60);
  func_0x00010bef5c20(lVar5,param_2,lVar2,*(undefined8 *)(param_1 + 0x98));
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1f480();
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      puVar4 = PTR_PTR_1126b8f40;
      _objc_alloc(PTR_PTR_1126b8f40);
      puVar8 = PTR_PTR_1126b8f38;
      func_0x00010bf13c20(PTR_PTR_1126b8f38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000140(puVar4,param_2,lVar5,puVar8);
      _objc_release(puVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9fc0();
      _objc_release(uVar9);
      _objc_release(puVar4);
    }
    if ((int)param_3 == 0) {
      iVar1 = 0;
    }
    else {
      param_3 = param_4;
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e4c858);
      uVar7 = param_4;
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ddf398);
      iVar1 = (int)uVar7;
    }
    uVar6 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1f480();
    _objc_release(uVar6);
    if ((((uVar7 & 1) != 0) || ((param_3 & 1) != 0)) || (iVar1 != 0)) {
      puVar4 = PTR_PTR_1126b8da0;
      func_0x00010c2499a0(PTR_PTR_1126b8da0);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar5;
      func_0x00010bf3fe80(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27bc60(param_1,param_2,4,puVar4,lVar2,lVar10);
      _objc_release(lVar10);
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063869f4; end: 106386ae7; -[SCSnapAdTrackHandler _onWebviewViewDidAppear:] */

void FUN_1063869f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8da0;
  _objc_retain(param_3);
  func_0x00010c115b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2804a0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0f12c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf3fe80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27bc60(param_1,param_2,7,puVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106386ae8; end: 106386be3; -[SCSnapAdTrackHandler _onWebviewViewDidAppearV2:] */

void FUN_106386ae8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8da0;
  _objc_retain(param_3);
  func_0x00010c115b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2804a0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    _objc_retain(0);
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_3 + 0x48);
  }
  _objc_retain(uVar5);
  _objc_release(param_3);
  func_0x00010c27bc60(param_1,param_2,7,puVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106386be4; end: 106386d27; -[SCSnapAdTrackHandler _onDeeplinkAttemptV2:] */

void FUN_106386be4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf8f200();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x48);
    }
    _objc_retain(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b8da0;
    func_0x00010c115b80(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2804a0(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      _objc_retain(0);
      uVar5 = 0;
      uVar1 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(uVar5);
      uVar1 = *(undefined8 *)(param_3 + 0x48);
    }
    _objc_retain(uVar1);
    func_0x00010c27bc60(param_1,param_2,8,puVar4,uVar5,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106386d28; end: 106386e6b; -[SCSnapAdTrackHandler _onDeeplinkOpenedV2:] */

void FUN_106386d28(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf8f240();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x48);
    }
    _objc_retain(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b8da0;
    func_0x00010c115b80(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2804a0(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      _objc_retain(0);
      uVar5 = 0;
      uVar1 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(uVar5);
      uVar1 = *(undefined8 *)(param_3 + 0x48);
    }
    _objc_retain(uVar1);
    func_0x00010c27bc60(param_1,param_2,3,puVar4,uVar5,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106386e6c; end: 106386faf; -[SCSnapAdTrackHandler _onDeeplinkFallbackV2:] */

void FUN_106386e6c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf8f220();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x48);
    }
    _objc_retain(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b8da0;
    func_0x00010c115b80(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2804a0(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      _objc_retain(0);
      uVar5 = 0;
      uVar1 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(uVar5);
      uVar1 = *(undefined8 *)(param_3 + 0x48);
    }
    _objc_retain(uVar1);
    func_0x00010c27bc60(param_1,param_2,9,puVar4,uVar5,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106386fb0; end: 106387287; -[SCSnapAdTrackHandler _triggerAdTrackWithCurrentItem:adResponse:adIdentifier:triggerType:option:pageId:snapIndex:isProfileOpen:] */

void FUN_106386fb0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar9 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_9);
  _objc_retain(param_6);
  func_0x00010bef6240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0ea260(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bef4ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0f1220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0f3960(uVar5,uVar4,param_6,param_10,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c276e40(*(undefined8 *)(param_2 + 0x40));
  func_0x00010643afcc(uVar4);
  func_0x00010be3d280();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c27dd80(uVar2);
  func_0x00010becdee0(param_2);
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010c079320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  lVar8 = param_2;
  func_0x00010be448c0();
  if ((int)lVar8 != 0) {
    func_0x00010c188060(*(undefined8 *)(param_2 + 0x28));
  }
  func_0x00010c277b80(param_1,*(undefined8 *)(param_2 + 0x20));
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106387288; end: 10638729f; -[SCSnapAdTrackHandler _isTerminalTrack:] */

uint FUN_106387288(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0xc) & 0x83cU >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 1063872a0; end: 1063874c7; -[SCSnapAdTrackHandler _interactionResultTypeWithPanel:adResponse:lastInteraction:triggerType:option:pageId:isProfileOpen:] */

undefined8
FUN_1063872a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,byte param_9)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_6 < 0xc) && ((0xf9dU >> (ulong)((uint)param_6 & 0x1f) & 1) != 0)) {
    uVar8 = *(undefined8 *)(&UNK_10dddbb10 + param_6 * 8);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0ea180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c298f80();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0ea260();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010bf4e680();
    _objc_release(uVar8);
    _objc_release(uVar4);
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c07aca0();
    uVar2 = *(ulong *)(param_1 + 0x38);
    func_0x00010c07acc0();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010c07ab60();
      if ((uVar2 & 1) == 0) {
        func_0x00010c07ac40();
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar8 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b8c0(uVar9);
    _objc_release(uVar8);
    uVar8 = param_5;
    func_0x00010c27dd80(param_5);
    uVar4 = param_4;
    func_0x00010bef60a0(param_4);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befdf60();
    FUN_10643b070(uVar8,param_3,uVar7,uVar3 & 0xffffffff,uVar4,param_9 | uVar1,uVar9,uVar6,
                  (char)uVar5);
    _objc_release(uVar6);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar8;
}



/* Entry: 1063874c8; end: 106387673; -[SCSnapAdTrackHandler _currentItemForPageId:] */

void FUN_1063874c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 in_x7;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_retain(lVar2);
    lVar1 = lVar2;
    goto LAB_106387644;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
LAB_106387630:
    _objc_retain(lVar3);
    lVar1 = lVar3;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar1 = lVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    lVar10 = lVar1;
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4c898);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar4,param_2,0,puVar5,puVar6,
                        &PTR____CFConstantStringClassReference_110e4c8b8,2,in_x7,lVar9,lVar10);
    _objc_release(puVar6);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar7 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf7fa20();
    _objc_release(uVar7);
    lVar1 = 0;
    if ((uVar8 & 1) == 0) goto LAB_106387630;
  }
  _objc_release(lVar3);
LAB_106387644:
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106387674; end: 10638773b; -[SCSnapAdTrackHandler _trackFunnelEventWithType:common:] */

void FUN_106387674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    func_0x00010c000140();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9fc0();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10638773c; end: 106387887; -[SCSnapAdTrackHandler _trackFunnelEventWithTriggerType:lastInteractionType:pageId:] */

void FUN_10638773c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b8f38;
    if ((param_3 == 0xd) || (param_3 == 5)) {
      func_0x00010c277e00(PTR_PTR_1126b8f38,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 1) goto LAB_106387870;
      uVar6 = 1;
      if (param_4 == 0xc || param_4 == 10) {
        uVar6 = 2;
      }
      func_0x00010bf0d5c0(PTR_PTR_1126b8f38,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    if (puVar3 != (undefined *)0x0) {
      lVar4 = *(long *)(param_1 + 0x60);
      func_0x00010bef5c20(lVar4,param_2,param_5,0);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        puVar5 = PTR_PTR_1126b8f40;
        _objc_alloc(PTR_PTR_1126b8f40);
        func_0x00010c000140();
        uVar6 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9fc0();
        _objc_release(uVar6);
        _objc_release(puVar5);
      }
      _objc_release(lVar4);
      _objc_release(puVar3);
    }
  }
LAB_106387870:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106387888; end: 106387a2f; -[SCSnapAdTrackHandler _adTrackCommon:] */

void FUN_106387888(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR_PTR_1126b8e38;
  _objc_retain(param_3);
  _objc_alloc();
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar2 = 0;
    uVar8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uStack_80 = 0;
    uVar6 = 0;
    uStack_98 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_3 + 0x48);
    uStack_80 = *(undefined8 *)(param_3 + 0x50);
    _objc_retain(uVar4);
    uVar11 = *(undefined8 *)(param_3 + 0x78);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar6);
    uStack_98 = *(undefined8 *)(param_3 + 0x38);
    uStack_90 = *(undefined8 *)(param_3 + 0x58);
    uVar9 = *(undefined8 *)(param_3 + 0x70);
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    uStack_88 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    uVar2 = *(undefined8 *)(param_3 + 0x68);
    uVar10 = *(undefined8 *)(param_3 + 0x80);
  }
  _objc_retain(uVar10);
  _objc_release(param_3);
  func_0x00010bff1840(uVar11,puVar1,param_2,uVar3,uStack_80,uVar4,uVar5,uVar6,uStack_88,uStack_98,
                      uStack_90,uVar9,uVar8,uVar7,uVar2,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106387a30; end: 106387b1f; -[SCSnapAdTrackHandler .cxx_destruct] */

void FUN_106387a30(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 106387b20; end: 106387c8b;  */

void FUN_106387b20(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = (undefined *)0x0;
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) goto LAB_106387c64;
  puVar1 = PTR_PTR_1126ca1a0;
  func_0x00010c084640(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
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
  if (puVar1 != (undefined *)0x0) {
    lVar4 = param_2;
    func_0x00010c067fc0();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar4 != 0) goto LAB_106387c64;
    func_0x00010c067fc0(puVar2);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1;
    if (puVar1 != (undefined *)0x0) goto LAB_106387c64;
  }
  puVar2 = PTR_PTR_1126ca1a8;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
LAB_106387c64:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106387c8c; end: 1063882c3; -[SCAdTrackOperaAdaptor initWithAdDataSource:adConfigProvider:adConfigProviderV2:trackSeqNumProvider:adTrackerHelper:timeProvider:navigationStyle:applicationLifecycleEvents:operaEventStateTracker:trackEventSubject:adLifecycleEventV2Subject:adReminderEventV2Subject:adStickersEventV2Subject:adReportEventV2Subject:adSubscribeEventV2Subject:adCaptionCtaEventV2Subject:adLiveReviewEventV2Subject:adCrashLogger:mainQueuePerformer:dpaConfigProvider:chromeSession:] */

undefined8 *
FUN_106387c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
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
  puStack_80 = PTR_PTR_1126f10c0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar1[7] = param_9;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[10];
    puVar1[10] = param_20;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_23);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca1b0;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_10;
    func_0x00010c2a6a00(param_10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1063882c4;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf72840(param_10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1063882c4; end: 10638831b;  */

void FUN_1063882c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10638831c; end: 10638858f; -[SCAdTrackOperaAdaptor initWithAdDataSource:adConfigProvider:adConfigProviderV2:trackSeqNumProvider:adTrackerHelper:timeProvider:applicationLifecycleEvents:operaEventStateTracker:navigationStyle:adCrashLogger:mainQueuePerformer:dpaConfigProvider:chromeSession:] */

undefined8
FUN_10638831c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_retain();
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar8 = PTR_PTR_1126ae568;
  _objc_opt_new();
  func_0x00010bff1540(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,
                      param_9,param_10,puVar1,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8,
                      param_12,param_13,param_14,param_15);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106388590; end: 10638867f; -[SCAdTrackOperaAdaptor setAdLifecycleEventObservable:] */

void FUN_106388590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106388680; end: 1063886c7;  */

void FUN_106388680(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063886c8; end: 1063887bb; -[SCAdTrackOperaAdaptor setAdAppInstallEventObservable:] */

void FUN_1063886c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1063887bc; end: 106388803;  */

void FUN_1063887bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be637a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106388804; end: 1063888f7; -[SCAdTrackOperaAdaptor setAdAdToMessageEventObservable:] */

void FUN_106388804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1063888f8; end: 10638893f;  */

void FUN_1063888f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be63760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106388940; end: 106388a33; -[SCAdTrackOperaAdaptor setAdDeepLinkEventObservable:] */

void FUN_106388940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106388a34; end: 106388a7b;  */

void FUN_106388a34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27ee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106388a7c; end: 106388b6f; -[SCAdTrackOperaAdaptor setAdDeepLinkEventObservableV2:] */

void FUN_106388a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106388b70; end: 106388bb7;  */

void FUN_106388b70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27f00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106388bb8; end: 106388bdf; -[SCAdTrackOperaAdaptor adTrackEventObservable] */

void FUN_106388bb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106388be0; end: 106388be7; -[SCAdTrackOperaAdaptor streamsType] */

undefined8 FUN_106388be0(void)

{
  return 1;
}



/* Entry: 106388be8; end: 106388bef; -[SCAdTrackOperaAdaptor adLifecycleEventObservable] */

undefined8 FUN_106388be8(void)

{
  return 0;
}



/* Entry: 106388bf0; end: 106388bf7; -[SCAdTrackOperaAdaptor adInteractionEventObservable] */

undefined8 FUN_106388bf0(void)

{
  return 0;
}



/* Entry: 106388bf8; end: 106388c1f; -[SCAdTrackOperaAdaptor adLifecycleEventObservableV2] */

void FUN_106388bf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106388c20; end: 106388c47; -[SCAdTrackOperaAdaptor adReportEventObservableV2] */

void FUN_106388c20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106388c48; end: 106388c6f; -[SCAdTrackOperaAdaptor adReminderEventObservableV2] */

void FUN_106388c48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106388c70; end: 106388c97; -[SCAdTrackOperaAdaptor adStickersEventObservableV2] */

void FUN_106388c70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106388c98; end: 106388cbf; -[SCAdTrackOperaAdaptor adSubscribeEventObservableV2] */

void FUN_106388c98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106388cc0; end: 106388ce7; -[SCAdTrackOperaAdaptor adCaptionCtaImpressionEventObservable] */

void FUN_106388cc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106388ce8; end: 106388d0f; -[SCAdTrackOperaAdaptor adLiveReviewEventObservable] */

void FUN_106388ce8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106388d10; end: 106389483; -[SCAdTrackOperaAdaptor registeredEventsForOperaSession] */

void FUN_106388d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
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
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  ulong uVar54;
  long lVar55;
  ulong uVar56;
  undefined **ppuVar57;
  undefined **ppuVar58;
  ulong uVar59;
  undefined8 uVar60;
  ulong uVar61;
  ulong uVar62;
  undefined **ppuVar63;
  undefined *puVar64;
  ulong in_x4;
  undefined8 uVar65;
  byte bVar66;
  uint uVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  undefined8 uVar71;
  ulong uStack_4a8;
  undefined1 auStack_430 [8];
  byte bStack_428;
  byte bStack_427;
  undefined1 auStack_420 [16];
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
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
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
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c29e700();
  _objc_retainAutoreleasedReturnValue();
  puVar70 = PTR_PTR_1126b2330;
  puStack_220 = puVar4;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_218 = puVar70;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar69 = PTR_PTR_1126b2330;
  puStack_210 = puVar5;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar68 = PTR_PTR_1126b2330;
  puStack_208 = puVar69;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_200 = puVar68;
  func_0x00010c29e020();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_1f8 = puVar6;
  func_0x00010c29e3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2330;
  puStack_1f0 = puVar7;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ca1b8;
  puStack_1e8 = puVar8;
  func_0x00010bf76da0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ca1b8;
  puStack_1e0 = puVar9;
  func_0x00010bf76760();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9460;
  puStack_1d8 = puVar10;
  func_0x00010c27c060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126ca1c0;
  puStack_1d0 = puVar11;
  func_0x00010bf7c600();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2638;
  puStack_1c8 = puVar12;
  func_0x00010bf0a200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b5b08;
  puStack_1c0 = puVar13;
  func_0x00010c27bce0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b5b08;
  puStack_1b8 = puVar14;
  func_0x00010bf4f3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126ca1c8;
  puStack_1b0 = puVar15;
  func_0x00010bf7c8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b5b08;
  puStack_1a8 = puVar16;
  func_0x00010bf11e20();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126ca1c8;
  puStack_1a0 = puVar17;
  func_0x00010bf7b640();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126ca1c8;
  puStack_198 = puVar18;
  func_0x00010bf7b660();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126ca1d0;
  puStack_190 = puVar19;
  func_0x00010bf7c2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126ca1c8;
  puStack_188 = puVar20;
  func_0x00010bf7c820();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126ca1c8;
  puStack_180 = puVar21;
  func_0x00010c0e2d00();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126ca1c0;
  puStack_178 = puVar22;
  func_0x00010bf7c360();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126ca1d0;
  puStack_170 = puVar23;
  func_0x00010bf72920();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126ca1d0;
  puStack_168 = puVar24;
  func_0x00010bf73ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126ca1d0;
  puStack_160 = puVar25;
  func_0x00010bf761a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126ca1d0;
  puStack_158 = puVar26;
  func_0x00010bf72660();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126ca1d8;
  puStack_150 = puVar27;
  func_0x00010bf726c0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126ca1e0;
  puStack_148 = puVar28;
  func_0x00010bf0d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126ca1e0;
  puStack_140 = puVar29;
  func_0x00010bf685a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR_PTR_1126ca1e0;
  puStack_138 = puVar30;
  func_0x00010bf9a9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR_PTR_1126ca1e8;
  puStack_130 = puVar31;
  func_0x00010bf7e1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126ca1e0;
  puStack_128 = puVar32;
  func_0x00010c2a4340();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR_PTR_1126ca1e0;
  puStack_120 = puVar33;
  func_0x00010c2a3fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR_PTR_1126c9460;
  puStack_118 = puVar34;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR_PTR_1126b2638;
  puStack_110 = puVar35;
  func_0x00010bf7dc80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110eb0258;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110eb0218;
  puVar37 = PTR_PTR_1126b5b08;
  puStack_108 = puVar36;
  func_0x00010bf4f3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = PTR_PTR_1126b5b08;
  puStack_f0 = puVar37;
  func_0x00010bf4f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = PTR_PTR_1126ca1f0;
  puStack_e8 = puVar38;
  func_0x00010c2a1740();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR_PTR_1126ca1f8;
  puStack_e0 = puVar39;
  func_0x00010bef57c0();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR_PTR_1126ca1f8;
  puStack_d8 = puVar40;
  func_0x00010bef57a0();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR_PTR_1126b2d30;
  puStack_d0 = puVar41;
  func_0x00010c133ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = PTR_PTR_1126b2d30;
  puStack_c8 = puVar42;
  func_0x00010bf6b1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = PTR_PTR_1126b2d30;
  puStack_c0 = puVar43;
  func_0x00010bfc65c0();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = PTR_PTR_1126ca200;
  puStack_b8 = puVar44;
  func_0x00010bf943a0();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = PTR_PTR_1126ca200;
  puStack_b0 = puVar45;
  func_0x00010bf943e0();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = PTR_PTR_1126ca208;
  puStack_a8 = puVar46;
  func_0x00010c103560();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = PTR_PTR_1126ca210;
  puStack_a0 = puVar47;
  func_0x00010c09aac0();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = PTR_PTR_1126ca210;
  puStack_98 = puVar48;
  func_0x00010c09aae0();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR_PTR_1126b2338;
  puStack_90 = puVar49;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar51 = PTR_PTR_1126b2338;
  puStack_88 = puVar50;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = PTR_PTR_1126b2338;
  puStack_80 = puVar51;
  func_0x00010c23c620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar63 = &puStack_220;
  puVar64 = (undefined *)0x36;
  puVar53 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar52;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar52);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
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
  _objc_release(puVar68);
  _objc_release(puVar69);
  _objc_release(puVar5);
  _objc_release(puVar70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar53);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar63);
  _objc_retain(puVar64);
  _objc_retain(in_x4);
  puVar70 = puVar64;
  func_0x00010c06b7e0();
  puVar5 = puVar64;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar69 = (undefined *)0x0;
  }
  else {
    puVar68 = puVar4 + 0x100;
    _objc_loadWeakRetained();
    puVar69 = puVar68;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar68);
  }
  puVar68 = puVar69;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar68 == (undefined *)0x0) goto LAB_10638a2f8;
  if (puVar69 == (undefined *)0x0) {
    puVar68 = (undefined *)0x0;
  }
  else {
    puVar68 = puVar4 + 0x100;
    _objc_loadWeakRetained();
    puVar6 = puVar68;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar68);
    puVar68 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    puVar7 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar68);
    puVar68 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar68 = (undefined *)0x0;
    }
    _objc_retain(puVar68);
    _objc_release(puVar6);
  }
  puVar6 = puVar68;
  func_0x00010bf3fd80();
  _objc_retainAutoreleasedReturnValue();
  uVar65 = *(undefined8 *)(puVar4 + 0xc0);
  *(undefined **)(puVar4 + 0xc0) = puVar6;
  _objc_release(uVar65);
  uVar54 = in_x4;
  FUN_106387b20(in_x4,*(undefined8 *)(puVar4 + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bef5c20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    if ((int)puVar70 != 0) {
      func_0x00010be4ff20(puVar4);
    }
    puVar6 = (undefined *)0x0;
    goto LAB_10638a2e0;
  }
  FUN_10638baf8();
  lVar55 = *(long *)(puVar4 + 0xb8);
  func_0x00010bf9a440(lVar55);
  uVar56 = *(ulong *)(puVar4 + 0x48);
  func_0x00010c0e2980();
  if (((uVar56 & 1) == 0) &&
     (ppuVar57 = ppuVar63, func_0x000106441ad0(ppuVar63,puVar64,lVar55 == 2,puVar70),
     (int)ppuVar57 != 0)) {
    puVar70 = PTR_PTR_1126b8e58;
    _objc_alloc(PTR_PTR_1126b8e58);
    puVar7 = PTR_PTR_1126b8e40;
    func_0x00010c274a60(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000140(puVar70);
    func_0x00010be639a0(puVar4);
    _objc_release(puVar70);
    _objc_release(puVar7);
    func_0x00010be639c0(puVar4);
  }
  puVar70 = puVar6;
  func_0x00010bef60a0();
  if ((puVar70 == (undefined *)0x6) ||
     ((puVar70 = puVar6, func_0x00010bef60a0(), puVar70 == (undefined *)0x5 &&
      (puVar70 = puVar6, func_0x00010c106900(), puVar70 == (undefined *)0x5)))) {
    uVar67 = 1;
  }
  else {
    puVar70 = puVar6;
    func_0x00010bef60a0();
    if (puVar70 == (undefined *)0xa) {
      puVar70 = puVar6;
      func_0x00010c106900();
      uVar67 = (uint)(puVar70 == (undefined *)0x5);
    }
    else {
      uVar67 = 0;
    }
  }
  puVar70 = PTR_PTR_1126b2338;
  func_0x00010c23c620(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  ppuVar57 = ppuVar63;
  func_0x00010c0720c0();
  _objc_release(puVar70);
  puVar70 = PTR_PTR_1126b2330;
  func_0x00010c29e700(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar58 = ppuVar63;
  func_0x00010c0720c0();
  _objc_release(puVar70);
  if ((int)ppuVar58 != 0) {
    puVar70 = puVar64;
    FUN_10638bb44();
    puVar4[0xc9] = (char)puVar70;
    uVar65 = *(undefined8 *)(puVar4 + 0x48);
    FUN_10638bb44(puVar64);
    func_0x00010c1d15a0(uVar65);
    uVar56 = *(ulong *)(puVar4 + 0x48);
    func_0x00010c0e2980();
    if ((uVar56 & 1) == 0) {
      puVar70 = PTR_PTR_1126b2330;
      func_0x00010c29e700(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar57 = ppuVar63;
      func_0x00010c0720c0();
      _objc_release(puVar70);
      if (((ulong)ppuVar57 & 1) != 0) goto LAB_10638a2e0;
    }
    puVar70 = PTR_PTR_1126b8e58;
    _objc_alloc(PTR_PTR_1126b8e58);
    puVar7 = PTR_PTR_1126b8e40;
    func_0x00010bf0d780(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000140(puVar70);
    func_0x00010be639a0(puVar4);
    _objc_release(puVar70);
    _objc_release(puVar7);
    goto LAB_106389888;
  }
  puVar70 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar58 = ppuVar63;
  func_0x00010c0720c0();
  _objc_release(puVar70);
  if ((((ulong)ppuVar58 & 1) == 0) && (((uint)ppuVar57 & uVar67) == 0)) {
    puVar70 = PTR_PTR_1126ca1b8;
    func_0x00010bf76da0(PTR_PTR_1126ca1b8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar57 = ppuVar63;
    func_0x00010c0720c0();
    _objc_release(puVar70);
    if ((int)ppuVar57 == 0) {
      puVar70 = PTR_PTR_1126ca1b8;
      func_0x00010bf76760(PTR_PTR_1126ca1b8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar57 = ppuVar63;
      func_0x00010c0720c0();
      _objc_release(puVar70);
      if ((int)ppuVar57 == 0) {
        puVar70 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar57 = ppuVar63;
        func_0x00010c0720c0();
        _objc_release(puVar70);
        if ((int)ppuVar57 == 0) {
          puVar70 = PTR_PTR_1126b2330;
          func_0x00010bf96940(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          ppuVar57 = ppuVar63;
          func_0x00010c0720c0();
          _objc_release(puVar70);
          if ((int)ppuVar57 == 0) {
            puVar70 = PTR_PTR_1126b2330;
            func_0x00010bf96a00(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            ppuVar57 = ppuVar63;
            func_0x00010c0720c0();
            _objc_release(puVar70);
            if ((int)ppuVar57 == 0) {
              puVar70 = PTR_PTR_1126ca1e0;
              func_0x00010bf0d8e0(PTR_PTR_1126ca1e0);
              _objc_retainAutoreleasedReturnValue();
              ppuVar57 = ppuVar63;
              func_0x00010c0720c0();
              _objc_release(puVar70);
              if ((int)ppuVar57 == 0) {
                puVar70 = PTR_PTR_1126ca1e0;
                func_0x00010bf9a9c0(PTR_PTR_1126ca1e0);
                _objc_retainAutoreleasedReturnValue();
                ppuVar57 = ppuVar63;
                func_0x00010c0720c0();
                _objc_release(puVar70);
                if ((int)ppuVar57 != 0) {
                  puVar4[0xca] = 1;
                  puVar70 = PTR_PTR_1126b8e58;
                  _objc_alloc(PTR_PTR_1126b8e58);
                  puVar7 = PTR_PTR_1126b8e40;
                  func_0x00010bf68a40(PTR_PTR_1126b8e40);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c000140(puVar70);
                  func_0x00010be639a0(puVar4);
                  _objc_release(puVar70);
                  _objc_release(puVar7);
                  goto LAB_106389d58;
                }
                puVar70 = PTR_PTR_1126ca1d0;
                func_0x00010bf72920(PTR_PTR_1126ca1d0);
                _objc_retainAutoreleasedReturnValue();
                ppuVar57 = ppuVar63;
                func_0x00010c0720c0();
                if (((ulong)ppuVar57 & 1) == 0) {
                  puVar7 = PTR_PTR_1126ca1d0;
                  func_0x00010bf73ca0(PTR_PTR_1126ca1d0);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar57 = ppuVar63;
                  func_0x00010c0720c0();
                  if (((ulong)ppuVar57 & 1) != 0) {
LAB_10638a3f8:
                    _objc_release(puVar7);
                    goto LAB_10638a400;
                  }
                  puVar8 = PTR_PTR_1126ca1d0;
                  func_0x00010bf761a0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar57 = ppuVar63;
                  func_0x00010c0720c0();
                  if (((ulong)ppuVar57 & 1) != 0) {
LAB_10638a3f0:
                    _objc_release(puVar8);
                    goto LAB_10638a3f8;
                  }
                  puVar9 = PTR_PTR_1126ca1d0;
                  func_0x00010bf72660(PTR_PTR_1126ca1d0);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar57 = ppuVar63;
                  func_0x00010c0720c0();
                  if (((ulong)ppuVar57 & 1) != 0) {
                    _objc_release(puVar9);
                    goto LAB_10638a3f0;
                  }
                  puVar10 = PTR_PTR_1126ca1d8;
                  func_0x00010bf726c0(PTR_PTR_1126ca1d8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar57 = ppuVar63;
                  func_0x00010c0720c0();
                  _objc_release(puVar10);
                  _objc_release(puVar9);
                  _objc_release(puVar8);
                  _objc_release(puVar7);
                  _objc_release(puVar70);
                  if (((ulong)ppuVar57 & 1) == 0) {
                    puVar70 = PTR_PTR_1126c9460;
                    func_0x00010c0f25a0(PTR_PTR_1126c9460);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar57 = ppuVar63;
                    func_0x00010c0720c0();
                    _objc_release(puVar70);
                    if ((int)ppuVar57 == 0) {
                      puVar70 = PTR_PTR_1126b2638;
                      func_0x00010bf7dc80(PTR_PTR_1126b2638);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar57 = ppuVar63;
                      func_0x00010c0720c0();
                      _objc_release(puVar70);
                      if ((int)ppuVar57 == 0) {
                        puVar70 = PTR_PTR_1126ca1e8;
                        func_0x00010bf7e1e0(PTR_PTR_1126ca1e8);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar57 = ppuVar63;
                        func_0x00010c0720c0();
                        _objc_release(puVar70);
                        if ((int)ppuVar57 == 0) {
                          puVar70 = PTR_PTR_1126b2330;
                          func_0x00010c29e020(PTR_PTR_1126b2330);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar57 = ppuVar63;
                          func_0x00010c0720c0();
                          _objc_release(puVar70);
                          if ((int)ppuVar57 == 0) {
                            puVar70 = PTR_PTR_1126b2330;
                            func_0x00010c29e3c0(PTR_PTR_1126b2330);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar57 = ppuVar63;
                            func_0x00010c0720c0();
                            _objc_release(puVar70);
                            if ((int)ppuVar57 == 0) {
                              ppuVar57 = ppuVar63;
                              func_0x00010c0720c0();
                              puVar70 = puVar64;
                              if ((int)ppuVar57 == 0) {
                                ppuVar57 = ppuVar63;
                                func_0x00010c0720c0();
                                if ((int)ppuVar57 != 0) {
                                  puVar7 = PTR_PTR_1126ca230;
                                  _objc_alloc(PTR_PTR_1126ca230);
                                  puVar8 = PTR_PTR_1126ca238;
                                  func_0x00010c2829e0(PTR_PTR_1126ca238);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c000140(puVar7);
                                  func_0x00010be63c60(puVar4);
                                  _objc_release(puVar7);
                                  _objc_release(puVar8);
                                  func_0x00010be36bc0(puVar64);
                                  _objc_retainAutoreleasedReturnValue();
                                  goto LAB_10638ab24;
                                }
                                puVar7 = PTR_PTR_1126ca200;
                                func_0x00010bf943a0(PTR_PTR_1126ca200);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar57 = ppuVar63;
                                func_0x00010c0720c0();
                                _objc_release(puVar7);
                                if ((int)ppuVar57 != 0) {
                                  puVar70 = PTR_PTR_1126b8e58;
                                  _objc_alloc(PTR_PTR_1126b8e58);
                                  puVar7 = PTR_PTR_1126b8e40;
                                  func_0x00010bf943a0(PTR_PTR_1126b8e40);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c000140(puVar70);
                                  func_0x00010be639a0(puVar4);
                                  _objc_release(puVar70);
                                  _objc_release(puVar7);
                                  goto LAB_106389888;
                                }
                                puVar7 = PTR_PTR_1126ca200;
                                func_0x00010bf943e0(PTR_PTR_1126ca200);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar57 = ppuVar63;
                                func_0x00010c0720c0();
                                _objc_release(puVar7);
                                if ((int)ppuVar57 != 0) {
                                  puVar70 = PTR_PTR_1126b8e58;
                                  _objc_alloc(PTR_PTR_1126b8e58);
                                  puVar7 = PTR_PTR_1126b8e40;
                                  func_0x00010bf943e0(PTR_PTR_1126b8e40);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c000140(puVar70);
                                  func_0x00010be639a0(puVar4);
                                  _objc_release(puVar70);
                                  _objc_release(puVar7);
                                  goto LAB_106389888;
                                }
                                puVar7 = PTR_PTR_1126b5b08;
                                func_0x00010bf4f3a0(PTR_PTR_1126b5b08);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar57 = ppuVar63;
                                func_0x00010c0720c0();
                                _objc_release(puVar7);
                                if ((int)ppuVar57 != 0) {
                                  puVar70 = PTR_PTR_1126b8e58;
                                  _objc_alloc(PTR_PTR_1126b8e58);
                                  puVar7 = PTR_PTR_1126b8e40;
                                  func_0x00010c27ce00(PTR_PTR_1126b8e40);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c000140(puVar70);
                                  func_0x00010be639a0(puVar4);
                                  _objc_release(puVar70);
                                  _objc_release(puVar7);
                                  goto LAB_106389888;
                                }
                                puVar7 = PTR_PTR_1126ca1f0;
                                func_0x00010c2a1740(PTR_PTR_1126ca1f0);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar57 = ppuVar63;
                                func_0x00010c0720c0();
                                _objc_release(puVar7);
                                if ((int)ppuVar57 != 0) {
                                  func_0x00010be36bc0(puVar64);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010be334c0(puVar4);
LAB_10638b0a8:
                                  _objc_release(puVar70);
                                  goto LAB_10638a2e0;
                                }
                                puVar7 = PTR_PTR_1126ca1f8;
                                func_0x00010bef57c0(PTR_PTR_1126ca1f8);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar57 = ppuVar63;
                                func_0x00010c0720c0();
                                _objc_release(puVar7);
                                if ((int)ppuVar57 != 0) {
                                  func_0x00010be36bc0(puVar64);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010be25540(puVar4);
                                  _objc_release(puVar70);
                                  goto LAB_10638a2e0;
                                }
                                puVar7 = PTR_PTR_1126ca1f8;
                                func_0x00010bef57a0(PTR_PTR_1126ca1f8);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar57 = ppuVar63;
                                func_0x00010c0720c0();
                                _objc_release(puVar7);
                                if ((int)ppuVar57 != 0) {
                                  func_0x00010be36bc0(puVar64);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010be25520(puVar4);
                                  goto LAB_10638b0a8;
                                }
                                puVar7 = PTR_PTR_1126b5b08;
                                func_0x00010bf4f2a0(PTR_PTR_1126b5b08);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar57 = ppuVar63;
                                func_0x00010c0720c0();
                                _objc_release(puVar7);
                                if ((int)ppuVar57 == 0) {
                                  puVar7 = PTR_PTR_1126b2d30;
                                  func_0x00010c133ba0(PTR_PTR_1126b2d30);
                                  _objc_retainAutoreleasedReturnValue();
                                  ppuVar57 = ppuVar63;
                                  func_0x00010c0720c0();
                                  _objc_release(puVar7);
                                  if ((int)ppuVar57 == 0) {
                                    puVar7 = PTR_PTR_1126b2d30;
                                    func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
                                    _objc_retainAutoreleasedReturnValue();
                                    ppuVar57 = ppuVar63;
                                    func_0x00010c0720c0();
                                    _objc_release(puVar7);
                                    if ((int)ppuVar57 == 0) {
                                      puVar7 = PTR_PTR_1126b2d30;
                                      func_0x00010bfc65c0(PTR_PTR_1126b2d30);
                                      _objc_retainAutoreleasedReturnValue();
                                      ppuVar57 = ppuVar63;
                                      func_0x00010c0720c0();
                                      _objc_release(puVar7);
                                      if ((int)ppuVar57 == 0) {
                                        puVar7 = PTR_PTR_1126ca1c8;
                                        func_0x00010bf7b640(PTR_PTR_1126ca1c8);
                                        _objc_retainAutoreleasedReturnValue();
                                        ppuVar57 = ppuVar63;
                                        func_0x00010c0720c0();
                                        _objc_release(puVar7);
                                        if ((int)ppuVar57 == 0) {
                                          puVar7 = PTR_PTR_1126ca1c8;
                                          func_0x00010bf7b660(PTR_PTR_1126ca1c8);
                                          _objc_retainAutoreleasedReturnValue();
                                          ppuVar57 = ppuVar63;
                                          func_0x00010c0720c0();
                                          _objc_release(puVar7);
                                          if ((int)ppuVar57 == 0) {
                                            puVar7 = PTR_PTR_1126ca1c8;
                                            func_0x00010c0e2d00(PTR_PTR_1126ca1c8);
                                            _objc_retainAutoreleasedReturnValue();
                                            ppuVar57 = ppuVar63;
                                            func_0x00010c0720c0();
                                            _objc_release(puVar7);
                                            if ((int)ppuVar57 == 0) {
                                              puVar7 = PTR_PTR_1126ca1e0;
                                              func_0x00010bf685a0(PTR_PTR_1126ca1e0);
                                              _objc_retainAutoreleasedReturnValue();
                                              ppuVar57 = ppuVar63;
                                              func_0x00010c0720c0();
                                              _objc_release(puVar7);
                                              if ((int)ppuVar57 != 0) {
                                                puVar4[200] = 1;
                                                goto LAB_10638a2e0;
                                              }
                                              puVar7 = PTR_PTR_1126ca208;
                                              func_0x00010c103560(PTR_PTR_1126ca208);
                                              _objc_retainAutoreleasedReturnValue();
                                              ppuVar57 = ppuVar63;
                                              func_0x00010c0720c0();
                                              _objc_release(puVar7);
                                              if ((int)ppuVar57 == 0) {
                                                puVar7 = PTR_PTR_1126ca210;
                                                func_0x00010c09aac0(PTR_PTR_1126ca210);
                                                _objc_retainAutoreleasedReturnValue();
                                                ppuVar57 = ppuVar63;
                                                func_0x00010c0720c0();
                                                _objc_release(puVar7);
                                                if ((int)ppuVar57 == 0) {
                                                  puVar7 = PTR_PTR_1126ca210;
                                                  func_0x00010c09aae0(PTR_PTR_1126ca210);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  ppuVar57 = ppuVar63;
                                                  func_0x00010c0720c0();
                                                  _objc_release(puVar7);
                                                  if ((int)ppuVar57 == 0) {
                                                    ppuVar57 = ppuVar63;
                                                    FUN_106442134(ppuVar63,in_x4);
                                                    if (ppuVar57 == (undefined **)0x0)
                                                    goto LAB_10638a2e0;
                                                    puVar70 = puVar4;
                                                    func_0x00010be23760();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar7 = puVar6;
                                                    func_0x00010c0f12c0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar8 = puVar68;
                                                    func_0x00010bef5620();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar9 = puVar8;
                                                    func_0x00010bf66880();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar10 = puVar9;
                                                    func_0x00010c253c20();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar11 = puVar10;
                                                    func_0x00010c253c40();
                                                    bVar1 = false;
                                                    if ((ppuVar57 == (undefined **)0x2) &&
                                                       (puVar11 == (undefined *)0x4)) {
                                                      puVar11 = puVar70;
                                                      func_0x00010c269360();
                                                      bVar1 = puVar11 == (undefined *)0x3;
                                                    }
                                                    _objc_release(puVar10);
                                                    _objc_release(puVar9);
                                                    _objc_release(puVar8);
                                                    puVar8 = puVar4;
                                                    func_0x00010be432e0();
                                                    if (((int)puVar8 != 0) && (!bVar1)) {
                                                      puVar8 = PTR_PTR_1126ca258;
                                                      func_0x00010c1294a0(PTR_PTR_1126ca258);
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar9 = PTR_PTR_1126ca260;
                                                      _objc_alloc();
                                                      func_0x00010c000140();
                                                      func_0x00010be63aa0(puVar4);
                                                      puVar10 = puVar64;
                                                      func_0x00010be36bc0(puVar64);
                                                      _objc_retainAutoreleasedReturnValue();
                                                      func_0x00010be63ac0(puVar4);
                                                      _objc_release(puVar10);
                                                      puVar10 = puVar68;
                                                      func_0x00010bef5620();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar11 = puVar10;
                                                      func_0x00010bf66880();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar12 = puVar11;
                                                      func_0x00010c253c20();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar13 = puVar12;
                                                      func_0x00010c253c40();
                                                      _objc_release(puVar12);
                                                      _objc_release(puVar11);
                                                      _objc_release(puVar10);
                                                      if (puVar13 == (undefined *)0x4) {
                                                        puVar10 = puVar64;
                                                        func_0x00010be36bc0(puVar64);
                                                        _objc_retainAutoreleasedReturnValue();
                                                        func_0x00010be63ae0(puVar4);
                                                        _objc_release(puVar10);
                                                        _objc_release(puVar9);
                                                        _objc_release(puVar8);
                                                        _objc_release(puVar7);
                                                        goto LAB_10638b0a8;
                                                      }
                                                      _objc_release(puVar9);
                                                      _objc_release(puVar8);
                                                    }
                                                    uVar56 = uVar54;
                                                    if (uVar54 == 0) {
                                                      puVar8 = puVar6;
                                                      func_0x00010bef60a0();
                                                      if (puVar8 == (undefined *)0xa) {
                                                        uVar56 = *(ulong *)(puVar4 + 0xc0);
                                                      }
                                                      else {
                                                        uVar56 = 0;
                                                      }
                                                    }
                                                    uVar65 = *(undefined8 *)(puVar4 + 0x48);
                                                    _objc_retain(uVar56);
                                                    func_0x00010c1b7a00(uVar65);
                                                    puVar8 = puVar4;
                                                    func_0x00010bdc58e0(puVar4);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar9 = PTR_PTR_1126b6168;
                                                    func_0x00010bfbad60(PTR_PTR_1126b6168);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    uVar61 = in_x4;
                                                    func_0x00010c0e00e0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    _objc_release(puVar9);
                                                    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                                                    _objc_opt_class(
                                                  PTR__OBJC_CLASS___NSNumber_1126ae570);
                                                  uVar62 = uVar61;
                                                  _objc_opt_isKindOfClass(uVar61,puVar9);
                                                  uVar59 = uVar61;
                                                  if ((uVar62 & 1) == 0) {
                                                    uVar59 = 0;
                                                  }
                                                  _objc_retain(uVar59);
                                                  _objc_release(uVar61);
                                                  func_0x00010bf1f3c0(uVar59);
                                                  _objc_release(uVar59);
                                                  puVar4[0xca] = 0;
                                                  puVar4[0xd8] = 1;
                                                  puVar9 = PTR_PTR_1126b8e58;
                                                  _objc_alloc(PTR_PTR_1126b8e58);
                                                  puVar10 = PTR_PTR_1126b8e40;
                                                  func_0x00010bf0d500(PTR_PTR_1126b8e40);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  func_0x00010c000140(puVar9);
                                                  func_0x00010be639a0(puVar4);
                                                  _objc_release(puVar9);
                                                  _objc_release(puVar10);
                                                  func_0x00010be639c0(puVar4);
                                                  _objc_release(uVar56);
                                                  _objc_release(puVar8);
                                                  _objc_release(puVar7);
                                                  goto LAB_10638ab3c;
                                                  }
                                                  func_0x00010be36bc0(puVar64);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  func_0x00010be2b760(puVar4);
                                                }
                                                else {
                                                  func_0x00010be36bc0(puVar64);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  func_0x00010be2b740(puVar4);
                                                }
                                              }
                                              else {
                                                func_0x00010be36bc0(puVar64);
                                                _objc_retainAutoreleasedReturnValue();
                                                func_0x00010be2e3c0(puVar4);
                                              }
                                            }
                                            else {
                                              func_0x00010be36bc0(puVar64);
                                              _objc_retainAutoreleasedReturnValue();
                                              func_0x00010be2d2a0(puVar4);
                                            }
                                            goto LAB_10638b0a8;
                                          }
                                          func_0x00010be28660(puVar4);
                                        }
                                        else {
                                          func_0x00010be28640(puVar4);
                                        }
                                        goto LAB_10638a2e0;
                                      }
                                      puVar70 = PTR_PTR_1126ca248;
                                      _objc_alloc(PTR_PTR_1126ca248);
                                      puVar7 = PTR_PTR_1126ca250;
                                      func_0x00010c235aa0(PTR_PTR_1126ca250);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010c000140(puVar70);
                                      func_0x00010be63720(puVar4);
                                      _objc_release(puVar70);
                                      _objc_release(puVar7);
                                    }
                                    else {
                                      puVar70 = PTR_PTR_1126ca248;
                                      _objc_alloc(PTR_PTR_1126ca248);
                                      puVar7 = PTR_PTR_1126ca250;
                                      func_0x00010bfe16e0(PTR_PTR_1126ca250);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010c000140(puVar70);
                                      func_0x00010be63720(puVar4);
                                      _objc_release(puVar70);
                                      _objc_release(puVar7);
                                    }
                                  }
                                  else {
                                    puVar70 = PTR_PTR_1126ca248;
                                    _objc_alloc(PTR_PTR_1126ca248);
                                    puVar7 = PTR_PTR_1126ca250;
                                    func_0x00010c132520(PTR_PTR_1126ca250);
                                    _objc_retainAutoreleasedReturnValue();
                                    func_0x00010c000140(puVar70);
                                    func_0x00010be63720(puVar4);
                                    _objc_release(puVar70);
                                    _objc_release(puVar7);
                                  }
                                  func_0x00010be63740(puVar4);
                                  goto LAB_10638a2e0;
                                }
                                puVar70 = PTR_PTR_1126ca1a0;
                                func_0x00010c269160(PTR_PTR_1126ca1a0);
                                _objc_retainAutoreleasedReturnValue();
                                uVar59 = in_x4;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(puVar70);
                                puVar70 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                                _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
                                uVar61 = uVar59;
                                _objc_opt_isKindOfClass(uVar59,puVar70);
                                uVar56 = uVar59;
                                if ((uVar61 & 1) == 0) {
                                  uVar56 = 0;
                                }
                                _objc_retain(uVar56);
                                _objc_release(uVar59);
                                func_0x00010bdc1060(uVar56);
                                uVar65 = param_1;
                                _objc_release(uVar56);
                                puVar70 = PTR__OBJC_CLASS___UIScreen_1126aea10;
                                func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c14c760();
                                _objc_release(puVar70);
                                puVar70 = PTR_PTR_1126afec0;
                                func_0x00010beec800(*(undefined8 *)(puVar4 + 0x30));
                                func_0x00010c155420(puVar70);
                                puVar70 = PTR_PTR_1126ca240;
                                func_0x00010c268d60(PTR_PTR_1126ca240);
                                _objc_retainAutoreleasedReturnValue();
                                uVar59 = in_x4;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(puVar70);
                                puVar70 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                                uVar61 = uVar59;
                                _objc_opt_isKindOfClass(uVar59,puVar70);
                                uVar56 = uVar59;
                                if ((uVar61 & 1) == 0) {
                                  uVar56 = 0;
                                }
                                _objc_retain(uVar56);
                                _objc_release(uVar59);
                                func_0x00010c067fc0(uVar56);
                                _objc_release(uVar56);
                                puVar70 = PTR_PTR_1126b8e48;
                                uVar60 = param_1;
                                func_0x00010be98540(param_1,param_3,puVar4);
                                uVar71 = param_2;
                                func_0x00010be98540(param_2,param_4,puVar4);
                                func_0x00010c2697e0(param_1,param_2,uVar60,uVar71,uVar65,puVar70);
                                _objc_retainAutoreleasedReturnValue();
                                puVar7 = PTR_PTR_1126b8e58;
                                _objc_alloc(PTR_PTR_1126b8e58);
                                puVar8 = PTR_PTR_1126b8e40;
                                func_0x00010c254500(PTR_PTR_1126b8e40);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c000140(puVar7);
                                func_0x00010be639a0(puVar4);
                                _objc_release(puVar7);
                                _objc_release(puVar8);
                                func_0x00010be639c0(puVar4);
                              }
                              else {
                                puVar7 = PTR_PTR_1126ca230;
                                _objc_alloc(PTR_PTR_1126ca230);
                                puVar8 = PTR_PTR_1126ca238;
                                func_0x00010c25fd00(PTR_PTR_1126ca238);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c000140(puVar7);
                                func_0x00010be63c60(puVar4);
                                _objc_release(puVar7);
                                _objc_release(puVar8);
                                func_0x00010be36bc0(puVar64);
                                _objc_retainAutoreleasedReturnValue();
LAB_10638ab24:
                                func_0x00010be63c80(puVar4);
                              }
LAB_10638ab3c:
                              _objc_release(puVar70);
                              goto LAB_10638a2e0;
                            }
                            puVar70 = puVar64;
                            FUN_10638bb44();
                            if (((ulong)puVar70 & 1) != 0) goto LAB_10638a2e0;
                            lVar55 = *(long *)(puVar4 + 0x48);
                            func_0x00010bf5f800();
                            _objc_retainAutoreleasedReturnValue();
                            if (lVar55 == 0) {
LAB_10638a92c:
                              puVar4[0xcb] = 0;
                            }
                            else {
                              puVar70 = puVar64;
                              func_0x00010be36bc0();
                              _objc_retainAutoreleasedReturnValue();
                              uVar65 = *(undefined8 *)(puVar4 + 0x48);
                              func_0x00010bf5f800(uVar65);
                              _objc_retainAutoreleasedReturnValue();
                              puVar7 = puVar70;
                              func_0x00010c0720c0();
                              _objc_release(uVar65);
                              _objc_release(puVar70);
                              _objc_release(lVar55);
                              if ((int)puVar7 != 0) goto LAB_10638a92c;
                            }
                            uVar60 = *(undefined8 *)(puVar4 + 0xf0);
                            func_0x00010c0f7800();
                            _objc_retainAutoreleasedReturnValue();
                            puVar70 = puVar64;
                            func_0x00010be36bc0(puVar64);
                            _objc_retainAutoreleasedReturnValue();
                            uVar65 = uVar60;
                            func_0x00010c0720c0();
                            _objc_release(puVar70);
                            _objc_release(uVar60);
                            if ((int)uVar65 != 0) {
                              func_0x00010bf42760(*(undefined8 *)(puVar4 + 0xf0));
                            }
                            puVar70 = PTR_PTR_1126b8e58;
                            _objc_alloc(PTR_PTR_1126b8e58);
                            puVar7 = PTR_PTR_1126b8e40;
                            func_0x00010c2749e0(PTR_PTR_1126b8e40);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c000140(puVar70);
                            func_0x00010be639a0(puVar4);
                            _objc_release(puVar70);
                            _objc_release(puVar7);
                          }
                          else {
                            puVar70 = puVar64;
                            FUN_10638bb44();
                            if (((ulong)puVar70 & 1) != 0) goto LAB_10638a2e0;
                            puVar70 = PTR_PTR_1126b8e58;
                            _objc_alloc(PTR_PTR_1126b8e58);
                            puVar7 = PTR_PTR_1126b8e40;
                            func_0x00010c2749c0(PTR_PTR_1126b8e40);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c000140(puVar70);
                            func_0x00010be639a0(puVar4);
                            _objc_release(puVar70);
                            _objc_release(puVar7);
                          }
                        }
                        else {
                          puVar70 = PTR_PTR_1126ca228;
                          func_0x00010bf5efc0(PTR_PTR_1126ca228);
                          _objc_retainAutoreleasedReturnValue();
                          uVar59 = in_x4;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar70);
                          puVar70 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                          uVar61 = uVar59;
                          _objc_opt_isKindOfClass(uVar59,puVar70);
                          uVar56 = uVar59;
                          if ((uVar61 & 1) == 0) {
                            uVar56 = 0;
                          }
                          _objc_retain(uVar56);
                          _objc_release(uVar59);
                          puVar7 = PTR_PTR_1126b8e58;
                          _objc_alloc(PTR_PTR_1126b8e58);
                          puVar70 = PTR_PTR_1126b8e40;
                          func_0x00010c067ec0(uVar56);
                          _objc_release(uVar56);
                          func_0x00010bfb35c0(puVar70);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c000140(puVar7);
                          func_0x00010be639a0(puVar4);
                          _objc_release(puVar7);
                          _objc_release(puVar70);
                        }
LAB_106389888:
                        func_0x00010be639c0(puVar4);
                      }
                      else {
                        puVar70 = puVar64;
                        FUN_10638bb44();
                        if (((ulong)puVar70 & 1) == 0) {
                          puVar70 = puVar4;
                          func_0x00010c0ea260();
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = puVar70;
                          func_0x00010c0f1b80();
                          _objc_retainAutoreleasedReturnValue();
                          puVar8 = puVar7;
                          func_0x00010bf5f7a0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          _objc_release(puVar7);
                          _objc_release(puVar70);
                          puVar70 = PTR_PTR_1126b6008;
                          func_0x00010c128140(PTR_PTR_1126b6008);
                          _objc_retainAutoreleasedReturnValue();
                          uVar59 = in_x4;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar70);
                          puVar70 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                          uVar61 = uVar59;
                          _objc_opt_isKindOfClass(uVar59,puVar70);
                          uVar56 = uVar59;
                          if ((uVar61 & 1) == 0) {
                            uVar56 = 0;
                          }
                          _objc_retain(uVar56);
                          _objc_release(uVar59);
                          uVar59 = uVar56;
                          func_0x00010c067fc0();
                          _objc_release(uVar56);
                          if ((uVar59 == 4) && (puVar8 != (undefined *)0x0)) {
                            puVar70 = PTR_PTR_1126b8e58;
                            _objc_alloc(PTR_PTR_1126b8e58);
                            puVar7 = PTR_PTR_1126b8e40;
                            func_0x00010bf0d4a0(PTR_PTR_1126b8e40);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c000140(puVar70);
                            func_0x00010be639a0(puVar4);
                            _objc_release(puVar70);
                            _objc_release(puVar7);
                            goto LAB_106389888;
                          }
                        }
                      }
                    }
                    else {
                      puVar70 = puVar4;
                      func_0x00010be08c20();
                      if ((((int)puVar70 != 0) && ((puVar4[0xd8] & 1) == 0)) &&
                         (puVar70 = puVar4, func_0x00010be412a0(), (int)puVar70 != 0)) {
                        uVar56 = uVar54;
                        if (uVar54 == 0) {
                          puVar70 = puVar6;
                          func_0x00010bef60a0();
                          if (puVar70 == (undefined *)0xa) {
                            uVar56 = *(ulong *)(puVar4 + 0xc0);
                          }
                          else {
                            uVar56 = 0;
                          }
                        }
                        uVar65 = *(undefined8 *)(puVar4 + 0x48);
                        _objc_retain(uVar56);
                        func_0x00010c1b7a00(uVar65);
                        puVar70 = puVar4;
                        func_0x00010be23760();
                        _objc_retainAutoreleasedReturnValue();
                        puVar7 = puVar4;
                        func_0x00010bdc58c0(puVar4);
                        _objc_retainAutoreleasedReturnValue();
                        puVar8 = PTR_PTR_1126b8e58;
                        _objc_alloc(PTR_PTR_1126b8e58);
                        puVar9 = PTR_PTR_1126b8e40;
                        func_0x00010bf0d500(PTR_PTR_1126b8e40);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c000140(puVar8);
                        func_0x00010be639a0(puVar4);
                        _objc_release(puVar8);
                        _objc_release(puVar9);
                        func_0x00010be639c0(puVar4);
                        _objc_release(uVar56);
                        _objc_release(puVar7);
                        _objc_release(puVar70);
                      }
                      func_0x00010be637c0(puVar4);
                      puVar70 = puVar6;
                      func_0x00010bef60a0();
                      if (puVar70 != (undefined *)0x6) {
                        func_0x00010be639c0(puVar4);
                      }
                      puVar70 = puVar6;
                      func_0x00010bef60a0();
                      if (puVar70 == (undefined *)0xa) {
                        puVar7 = PTR_PTR_1126b8e58;
                        _objc_alloc(PTR_PTR_1126b8e58);
                        puVar70 = PTR_PTR_1126b8e40;
                        func_0x00010c2a4a00(PTR_PTR_1126b8e40);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c000140(puVar7);
                        _objc_release(puVar70);
                        func_0x00010be639a0(puVar4);
                        puVar70 = PTR_PTR_1126b8e50;
                        uVar65 = *(undefined8 *)(puVar4 + 0x58);
                        puVar4 = PTR_PTR_1126b8e70;
                        _objc_alloc(PTR_PTR_1126b8e70);
                        puVar8 = PTR_PTR_1126b8e68;
                        func_0x00010bf0d520(PTR_PTR_1126b8e68);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c000140(puVar4);
                        func_0x00010c2a4a20(puVar70);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0d9840(uVar65);
                        _objc_release(puVar70);
                        _objc_release(puVar4);
                        _objc_release(puVar8);
                        _objc_release(puVar7);
                      }
                    }
                    goto LAB_10638a2e0;
                  }
                }
                else {
LAB_10638a400:
                  _objc_release(puVar70);
                }
                func_0x00010be67d80(puVar4);
              }
              else {
                puVar70 = PTR_PTR_1126b8e58;
                _objc_alloc(PTR_PTR_1126b8e58);
                puVar7 = PTR_PTR_1126b8e40;
                func_0x00010bf68a40(PTR_PTR_1126b8e40);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c000140(puVar70);
                func_0x00010be639a0(puVar4);
                _objc_release(puVar70);
                _objc_release(puVar7);
                puVar4[200] = 0;
              }
            }
            else {
              uVar59 = *(ulong *)(puVar4 + 0x18);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar56 = uVar59;
              func_0x00010bf1f480();
              if ((uVar56 & 1) != 0) goto LAB_106389cd4;
              puVar70 = puVar4;
              func_0x00010be412a0();
              _objc_release(uVar59);
              if (((ulong)puVar70 & 1) == 0) {
                func_0x00010be38a80(puVar4);
                func_0x00010be38aa0(puVar4);
                puVar70 = puVar4;
                func_0x00010becddc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar6);
                func_0x00010be67d20(puVar4);
                puVar6 = PTR_PTR_1126b8e58;
                _objc_alloc(PTR_PTR_1126b8e58);
                puVar7 = PTR_PTR_1126b8e40;
                func_0x00010bfb5460(PTR_PTR_1126b8e40);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c000140(puVar6);
                func_0x00010be639a0(puVar4);
                _objc_release(puVar6);
                _objc_release(puVar7);
                func_0x00010be639c0(puVar4);
                puVar7 = puVar70;
                func_0x00010bef60a0();
                puVar6 = puVar70;
                if ((puVar7 == (undefined *)0x6) && (puVar4[0xc9] == '\x01')) {
                  puVar70 = PTR_PTR_1126b8e88;
                  _objc_alloc(PTR_PTR_1126b8e88);
                  puVar7 = PTR_PTR_1126b8e80;
                  func_0x00010bf0d5e0(PTR_PTR_1126b8e80);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c000140(puVar70);
                  func_0x00010be63800(puVar4);
                  _objc_release(puVar70);
                  _objc_release(puVar7);
                }
              }
            }
          }
          else {
            func_0x00010bf42760(*(undefined8 *)(puVar4 + 0xf0));
            puVar4[200] = 0;
            uVar59 = *(ulong *)(puVar4 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar56 = uVar59;
            func_0x00010bf1f480();
            if ((uVar56 & 1) == 0) {
              puVar70 = puVar4;
              func_0x00010be412a0();
              _objc_release(uVar59);
              if (((ulong)puVar70 & 1) == 0) {
                func_0x00010be67d20(puVar4);
                puVar70 = PTR_PTR_1126b8e58;
                _objc_alloc(PTR_PTR_1126b8e58);
                puVar7 = PTR_PTR_1126b8e40;
                func_0x00010bf141c0(PTR_PTR_1126b8e40);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c000140(puVar70);
                func_0x00010be639a0(puVar4);
                _objc_release(puVar70);
                _objc_release(puVar7);
                goto LAB_106389d58;
              }
            }
            else {
LAB_106389cd4:
              _objc_release(uVar59);
            }
          }
        }
        else {
          puVar70 = puVar64;
          FUN_10638bb44();
          lVar55 = *(long *)(puVar4 + 0xb8);
          if (((ulong)puVar70 & 1) != 0) {
            func_0x00010c068280();
            if (lVar55 == 4) {
              puVar4[200] = 0;
            }
            else {
              puVar70 = PTR_PTR_1126b8e58;
              _objc_alloc(PTR_PTR_1126b8e58);
              puVar7 = PTR_PTR_1126b8e40;
              func_0x00010bf0cd40(PTR_PTR_1126b8e40);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c000140(puVar70);
              func_0x00010be639a0(puVar4);
              _objc_release(puVar70);
              _objc_release(puVar7);
LAB_106389d58:
              func_0x00010be639c0(puVar4);
            }
            goto LAB_10638a2e0;
          }
          if (lVar55 == 0) {
            bVar66 = 0;
          }
          else {
            func_0x00010c068280();
            if (lVar55 + 1U < 0xc) {
              bVar66 = (byte)(0xa6 >> (ulong)((uint)(lVar55 + 1U) & 0x1f));
            }
            else {
              bVar66 = 1;
            }
          }
          lVar55 = *(long *)(puVar4 + 0xb8);
          func_0x00010bf9a440();
          puVar70 = puVar64;
          if (lVar55 == 0x11) {
            puVar7 = puVar4 + 0xa8;
            _objc_loadWeakRetained();
            func_0x00010be36bc0(puVar64);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c234f20();
            bVar2 = (byte)puVar8;
LAB_106389e98:
            bVar2 = bVar2 ^ 1;
            _objc_release(puVar70);
            _objc_release(puVar7);
          }
          else {
            lVar55 = *(long *)(puVar4 + 0xb8);
            func_0x00010bf9a440();
            if (lVar55 == 0x18) {
              puVar7 = puVar4 + 0xa8;
              _objc_loadWeakRetained();
              func_0x00010be36bc0(puVar64);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c234f00();
              bVar2 = (byte)puVar8;
              goto LAB_106389e98;
            }
            bVar2 = 0;
          }
          puVar70 = puVar4 + 0xa8;
          _objc_loadWeakRetained();
          puVar7 = puVar70;
          func_0x00010c07aca0();
          if (((ulong)puVar7 & 1) == 0) {
            _objc_release(puVar70);
          }
          else {
            uVar60 = *(undefined8 *)(puVar4 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar65 = uVar60;
            func_0x00010c0ec0c0();
            _objc_release(uVar60);
            _objc_release(puVar70);
            if ((int)uVar65 != 0) {
              puVar4[200] = 0;
            }
          }
          puVar70 = puVar4 + 0xa8;
          _objc_loadWeakRetained();
          puVar7 = puVar70;
          func_0x00010c07aca0();
          if ((int)puVar7 == 0) {
            uStack_4a8 = 0;
          }
          else {
            uVar56 = *(ulong *)(puVar4 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uStack_4a8 = uVar56;
            func_0x00010c0ec0c0();
            uStack_4a8 = uStack_4a8 & 0xffffffff;
            _objc_release(uVar56);
          }
          _objc_release(puVar70);
          puVar70 = PTR_PTR_1126ca220;
          func_0x00010c0f1420();
          if (((int)puVar70 == 0) || ((uStack_4a8 & 1) != 0)) {
            func_0x00010be08520(puVar4);
          }
          else {
            _objc_initWeak(auStack_420,puVar4);
            uVar65 = *(undefined8 *)(puVar4 + 0xf0);
            puVar70 = puVar6;
            func_0x00010bef2c60(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf181a0(uVar65);
            _objc_release(puVar70);
            uVar65 = *(undefined8 *)(puVar4 + 0xf0);
            _objc_copyWeak(auStack_430,auStack_420);
            _objc_retain(puVar6);
            _objc_retain(ppuVar63);
            _objc_retain(in_x4);
            _objc_retain(puVar64);
            bStack_428 = bVar66 & 1;
            bStack_427 = bVar2;
            func_0x00010bf069a0(uVar65);
            _objc_release(puVar64);
            _objc_release(in_x4);
            _objc_release(ppuVar63);
            _objc_release(puVar6);
            _objc_destroyWeak(auStack_430);
            _objc_destroyWeak(auStack_420);
          }
        }
      }
      else {
        puVar4[0xcb] = 0;
        uVar56 = *(ulong *)(puVar4 + 0x48);
        func_0x00010c0e2980();
        if ((uVar56 & 1) == 0) {
          puVar70 = puVar64;
          FUN_10638bb44();
joined_r0x000106389c3c:
          if (((ulong)puVar70 & 1) == 0) {
            func_0x00010be08540(puVar4);
          }
        }
      }
    }
    else {
      puVar4[0xcb] = 1;
      puVar4[200] = 0;
    }
  }
  else {
    uVar65 = *(undefined8 *)(puVar4 + 0xf0);
    puVar70 = puVar6;
    func_0x00010bef2c60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a920(uVar65);
    _objc_release(puVar70);
    puVar70 = PTR_PTR_1126ca220;
    func_0x00010c0f1420();
    if ((int)puVar70 == 0) {
      puVar70 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar6;
      func_0x00010bef2c60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar70 = puVar4;
      func_0x00010be45880();
      _objc_release(puVar7);
    }
    iVar3 = (int)*(undefined8 *)(puVar4 + 8);
    func_0x00010c07ac40();
    if (iVar3 == 0) {
      if ((puVar4[0xcb] != '\x01') ||
         (puVar7 = puVar4, func_0x00010be44760(), ((ulong)puVar7 & 1) == 0)) {
        uVar56 = *(ulong *)(puVar4 + 0x48);
        func_0x00010c0e2980();
        if (((uVar56 & 1) == 0) && (puVar7 = puVar64, FUN_10638bb44(), ((ulong)puVar7 & 1) == 0))
        goto joined_r0x000106389c3c;
        puVar70 = PTR_PTR_1126b8e58;
        _objc_alloc(PTR_PTR_1126b8e58);
        puVar7 = PTR_PTR_1126b8e40;
        func_0x00010bf0cce0(PTR_PTR_1126b8e40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000140(puVar70);
        func_0x00010be639a0(puVar4);
        _objc_release(puVar70);
        _objc_release(puVar7);
        func_0x00010be639c0(puVar4);
      }
    }
    else {
      func_0x00010c1e1500(*(undefined8 *)(puVar4 + 8));
    }
  }
LAB_10638a2e0:
  _objc_release(puVar6);
  _objc_release(uVar54);
  _objc_release(puVar68);
LAB_10638a2f8:
  _objc_release(puVar69);
  _objc_release(puVar5);
  _objc_release(in_x4);
  _objc_release(puVar64);
  _objc_release(ppuVar63);
  return;
}



/* Entry: 106389484; end: 10638baf7; -[SCAdTrackOperaAdaptor operaViewDidSendEvent:page:params:] */

void FUN_106389484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,ulong param_7,undefined *param_8,
                  ulong param_9)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  byte bVar21;
  uint uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  ulong uStack_128;
  undefined1 auStack_b0 [8];
  byte bStack_a8;
  byte bStack_a7;
  undefined1 auStack_a0 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar25 = param_8;
  func_0x00010c06b7e0();
  puVar4 = param_8;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar23 = param_5 + 0x100;
    _objc_loadWeakRetained();
    puVar24 = puVar23;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
  }
  puVar23 = puVar24;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar23 == (undefined *)0x0) goto LAB_10638a2f8;
  if (puVar24 == (undefined *)0x0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar23 = param_5 + 0x100;
    _objc_loadWeakRetained();
    puVar5 = puVar23;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
    puVar23 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar23);
    puVar23 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar23 = (undefined *)0x0;
    }
    _objc_retain(puVar23);
    _objc_release(puVar5);
  }
  puVar5 = puVar23;
  func_0x00010bf3fd80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_5 + 0xc0);
  *(undefined **)(param_5 + 0xc0) = puVar5;
  _objc_release(uVar20);
  uVar7 = param_9;
  FUN_106387b20(param_9,*(undefined8 *)(param_5 + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_5;
  func_0x00010bef5c20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    if ((int)puVar25 != 0) {
      func_0x00010be4ff20(param_5);
    }
    puVar5 = (undefined *)0x0;
    goto LAB_10638a2e0;
  }
  FUN_10638baf8();
  lVar8 = *(long *)(param_5 + 0xb8);
  func_0x00010bf9a440(lVar8);
  uVar9 = *(ulong *)(param_5 + 0x48);
  func_0x00010c0e2980();
  if (((uVar9 & 1) == 0) &&
     (uVar9 = param_7, func_0x000106441ad0(param_7,param_8,lVar8 == 2,puVar25), (int)uVar9 != 0)) {
    puVar25 = PTR_PTR_1126b8e58;
    _objc_alloc(PTR_PTR_1126b8e58);
    puVar6 = PTR_PTR_1126b8e40;
    func_0x00010c274a60(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000140(puVar25);
    func_0x00010be639a0(param_5);
    _objc_release(puVar25);
    _objc_release(puVar6);
    func_0x00010be639c0(param_5);
  }
  puVar25 = puVar5;
  func_0x00010bef60a0();
  if ((puVar25 == (undefined *)0x6) ||
     ((puVar25 = puVar5, func_0x00010bef60a0(), puVar25 == (undefined *)0x5 &&
      (puVar25 = puVar5, func_0x00010c106900(), puVar25 == (undefined *)0x5)))) {
    uVar22 = 1;
  }
  else {
    puVar25 = puVar5;
    func_0x00010bef60a0();
    if (puVar25 == (undefined *)0xa) {
      puVar25 = puVar5;
      func_0x00010c106900();
      uVar22 = (uint)(puVar25 == (undefined *)0x5);
    }
    else {
      uVar22 = 0;
    }
  }
  puVar25 = PTR_PTR_1126b2338;
  func_0x00010c23c620(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b2330;
  func_0x00010c29e700(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar25);
  if ((int)uVar10 != 0) {
    puVar25 = param_8;
    FUN_10638bb44();
    param_5[0xc9] = (char)puVar25;
    uVar20 = *(undefined8 *)(param_5 + 0x48);
    FUN_10638bb44(param_8);
    func_0x00010c1d15a0(uVar20);
    uVar9 = *(ulong *)(param_5 + 0x48);
    func_0x00010c0e2980();
    if ((uVar9 & 1) == 0) {
      puVar25 = PTR_PTR_1126b2330;
      func_0x00010c29e700(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_7;
      func_0x00010c0720c0();
      _objc_release(puVar25);
      if ((uVar9 & 1) != 0) goto LAB_10638a2e0;
    }
    puVar25 = PTR_PTR_1126b8e58;
    _objc_alloc(PTR_PTR_1126b8e58);
    puVar6 = PTR_PTR_1126b8e40;
    func_0x00010bf0d780(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000140(puVar25);
    func_0x00010be639a0(param_5);
    _objc_release(puVar25);
    _objc_release(puVar6);
    goto LAB_106389888;
  }
  puVar25 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar25);
  if (((uVar10 & 1) == 0) && (((uint)uVar9 & uVar22) == 0)) {
    puVar25 = PTR_PTR_1126ca1b8;
    func_0x00010bf76da0(PTR_PTR_1126ca1b8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_7;
    func_0x00010c0720c0();
    _objc_release(puVar25);
    if ((int)uVar9 == 0) {
      puVar25 = PTR_PTR_1126ca1b8;
      func_0x00010bf76760(PTR_PTR_1126ca1b8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_7;
      func_0x00010c0720c0();
      _objc_release(puVar25);
      if ((int)uVar9 == 0) {
        puVar25 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_7;
        func_0x00010c0720c0();
        _objc_release(puVar25);
        if ((int)uVar9 == 0) {
          puVar25 = PTR_PTR_1126b2330;
          func_0x00010bf96940(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_7;
          func_0x00010c0720c0();
          _objc_release(puVar25);
          if ((int)uVar9 == 0) {
            puVar25 = PTR_PTR_1126b2330;
            func_0x00010bf96a00(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar25);
            if ((int)uVar9 == 0) {
              puVar25 = PTR_PTR_1126ca1e0;
              func_0x00010bf0d8e0(PTR_PTR_1126ca1e0);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = param_7;
              func_0x00010c0720c0();
              _objc_release(puVar25);
              if ((int)uVar9 == 0) {
                puVar25 = PTR_PTR_1126ca1e0;
                func_0x00010bf9a9c0(PTR_PTR_1126ca1e0);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = param_7;
                func_0x00010c0720c0();
                _objc_release(puVar25);
                if ((int)uVar9 != 0) {
                  param_5[0xca] = 1;
                  puVar25 = PTR_PTR_1126b8e58;
                  _objc_alloc(PTR_PTR_1126b8e58);
                  puVar6 = PTR_PTR_1126b8e40;
                  func_0x00010bf68a40(PTR_PTR_1126b8e40);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c000140(puVar25);
                  func_0x00010be639a0(param_5);
                  _objc_release(puVar25);
                  _objc_release(puVar6);
                  goto LAB_106389d58;
                }
                puVar25 = PTR_PTR_1126ca1d0;
                func_0x00010bf72920(PTR_PTR_1126ca1d0);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = param_7;
                func_0x00010c0720c0();
                if ((uVar9 & 1) == 0) {
                  puVar6 = PTR_PTR_1126ca1d0;
                  func_0x00010bf73ca0(PTR_PTR_1126ca1d0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = param_7;
                  func_0x00010c0720c0();
                  if ((uVar9 & 1) != 0) {
LAB_10638a3f8:
                    _objc_release(puVar6);
                    goto LAB_10638a400;
                  }
                  puVar12 = PTR_PTR_1126ca1d0;
                  func_0x00010bf761a0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = param_7;
                  func_0x00010c0720c0();
                  if ((uVar9 & 1) != 0) {
LAB_10638a3f0:
                    _objc_release(puVar12);
                    goto LAB_10638a3f8;
                  }
                  puVar13 = PTR_PTR_1126ca1d0;
                  func_0x00010bf72660(PTR_PTR_1126ca1d0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = param_7;
                  func_0x00010c0720c0();
                  if ((uVar9 & 1) != 0) {
                    _objc_release(puVar13);
                    goto LAB_10638a3f0;
                  }
                  puVar14 = PTR_PTR_1126ca1d8;
                  func_0x00010bf726c0(PTR_PTR_1126ca1d8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = param_7;
                  func_0x00010c0720c0();
                  _objc_release(puVar14);
                  _objc_release(puVar13);
                  _objc_release(puVar12);
                  _objc_release(puVar6);
                  _objc_release(puVar25);
                  if ((uVar9 & 1) == 0) {
                    puVar25 = PTR_PTR_1126c9460;
                    func_0x00010c0f25a0(PTR_PTR_1126c9460);
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = param_7;
                    func_0x00010c0720c0();
                    _objc_release(puVar25);
                    if ((int)uVar9 == 0) {
                      puVar25 = PTR_PTR_1126b2638;
                      func_0x00010bf7dc80(PTR_PTR_1126b2638);
                      _objc_retainAutoreleasedReturnValue();
                      uVar9 = param_7;
                      func_0x00010c0720c0();
                      _objc_release(puVar25);
                      if ((int)uVar9 == 0) {
                        puVar25 = PTR_PTR_1126ca1e8;
                        func_0x00010bf7e1e0(PTR_PTR_1126ca1e8);
                        _objc_retainAutoreleasedReturnValue();
                        uVar9 = param_7;
                        func_0x00010c0720c0();
                        _objc_release(puVar25);
                        if ((int)uVar9 == 0) {
                          puVar25 = PTR_PTR_1126b2330;
                          func_0x00010c29e020(PTR_PTR_1126b2330);
                          _objc_retainAutoreleasedReturnValue();
                          uVar9 = param_7;
                          func_0x00010c0720c0();
                          _objc_release(puVar25);
                          if ((int)uVar9 == 0) {
                            puVar25 = PTR_PTR_1126b2330;
                            func_0x00010c29e3c0(PTR_PTR_1126b2330);
                            _objc_retainAutoreleasedReturnValue();
                            uVar9 = param_7;
                            func_0x00010c0720c0();
                            _objc_release(puVar25);
                            if ((int)uVar9 == 0) {
                              uVar9 = param_7;
                              func_0x00010c0720c0();
                              puVar25 = param_8;
                              if ((int)uVar9 == 0) {
                                uVar9 = param_7;
                                func_0x00010c0720c0();
                                if ((int)uVar9 != 0) {
                                  puVar6 = PTR_PTR_1126ca230;
                                  _objc_alloc(PTR_PTR_1126ca230);
                                  puVar12 = PTR_PTR_1126ca238;
                                  func_0x00010c2829e0(PTR_PTR_1126ca238);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c000140(puVar6);
                                  func_0x00010be63c60(param_5);
                                  _objc_release(puVar6);
                                  _objc_release(puVar12);
                                  func_0x00010be36bc0(param_8);
                                  _objc_retainAutoreleasedReturnValue();
                                  goto LAB_10638ab24;
                                }
                                puVar6 = PTR_PTR_1126ca200;
                                func_0x00010bf943a0(PTR_PTR_1126ca200);
                                _objc_retainAutoreleasedReturnValue();
                                uVar9 = param_7;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)uVar9 != 0) {
                                  puVar25 = PTR_PTR_1126b8e58;
                                  _objc_alloc(PTR_PTR_1126b8e58);
                                  puVar6 = PTR_PTR_1126b8e40;
                                  func_0x00010bf943a0(PTR_PTR_1126b8e40);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c000140(puVar25);
                                  func_0x00010be639a0(param_5);
                                  _objc_release(puVar25);
                                  _objc_release(puVar6);
                                  goto LAB_106389888;
                                }
                                puVar6 = PTR_PTR_1126ca200;
                                func_0x00010bf943e0(PTR_PTR_1126ca200);
                                _objc_retainAutoreleasedReturnValue();
                                uVar9 = param_7;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)uVar9 != 0) {
                                  puVar25 = PTR_PTR_1126b8e58;
                                  _objc_alloc(PTR_PTR_1126b8e58);
                                  puVar6 = PTR_PTR_1126b8e40;
                                  func_0x00010bf943e0(PTR_PTR_1126b8e40);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c000140(puVar25);
                                  func_0x00010be639a0(param_5);
                                  _objc_release(puVar25);
                                  _objc_release(puVar6);
                                  goto LAB_106389888;
                                }
                                puVar6 = PTR_PTR_1126b5b08;
                                func_0x00010bf4f3a0(PTR_PTR_1126b5b08);
                                _objc_retainAutoreleasedReturnValue();
                                uVar9 = param_7;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)uVar9 != 0) {
                                  puVar25 = PTR_PTR_1126b8e58;
                                  _objc_alloc(PTR_PTR_1126b8e58);
                                  puVar6 = PTR_PTR_1126b8e40;
                                  func_0x00010c27ce00(PTR_PTR_1126b8e40);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c000140(puVar25);
                                  func_0x00010be639a0(param_5);
                                  _objc_release(puVar25);
                                  _objc_release(puVar6);
                                  goto LAB_106389888;
                                }
                                puVar6 = PTR_PTR_1126ca1f0;
                                func_0x00010c2a1740(PTR_PTR_1126ca1f0);
                                _objc_retainAutoreleasedReturnValue();
                                uVar9 = param_7;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)uVar9 != 0) {
                                  func_0x00010be36bc0(param_8);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010be334c0(param_5);
LAB_10638b0a8:
                                  _objc_release(puVar25);
                                  goto LAB_10638a2e0;
                                }
                                puVar6 = PTR_PTR_1126ca1f8;
                                func_0x00010bef57c0(PTR_PTR_1126ca1f8);
                                _objc_retainAutoreleasedReturnValue();
                                uVar9 = param_7;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)uVar9 != 0) {
                                  func_0x00010be36bc0(param_8);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010be25540(param_5);
                                  _objc_release(puVar25);
                                  goto LAB_10638a2e0;
                                }
                                puVar6 = PTR_PTR_1126ca1f8;
                                func_0x00010bef57a0(PTR_PTR_1126ca1f8);
                                _objc_retainAutoreleasedReturnValue();
                                uVar9 = param_7;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)uVar9 != 0) {
                                  func_0x00010be36bc0(param_8);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010be25520(param_5);
                                  goto LAB_10638b0a8;
                                }
                                puVar6 = PTR_PTR_1126b5b08;
                                func_0x00010bf4f2a0(PTR_PTR_1126b5b08);
                                _objc_retainAutoreleasedReturnValue();
                                uVar9 = param_7;
                                func_0x00010c0720c0();
                                _objc_release(puVar6);
                                if ((int)uVar9 == 0) {
                                  puVar6 = PTR_PTR_1126b2d30;
                                  func_0x00010c133ba0(PTR_PTR_1126b2d30);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar9 = param_7;
                                  func_0x00010c0720c0();
                                  _objc_release(puVar6);
                                  if ((int)uVar9 == 0) {
                                    puVar6 = PTR_PTR_1126b2d30;
                                    func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar9 = param_7;
                                    func_0x00010c0720c0();
                                    _objc_release(puVar6);
                                    if ((int)uVar9 == 0) {
                                      puVar6 = PTR_PTR_1126b2d30;
                                      func_0x00010bfc65c0(PTR_PTR_1126b2d30);
                                      _objc_retainAutoreleasedReturnValue();
                                      uVar9 = param_7;
                                      func_0x00010c0720c0();
                                      _objc_release(puVar6);
                                      if ((int)uVar9 == 0) {
                                        puVar6 = PTR_PTR_1126ca1c8;
                                        func_0x00010bf7b640(PTR_PTR_1126ca1c8);
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar9 = param_7;
                                        func_0x00010c0720c0();
                                        _objc_release(puVar6);
                                        if ((int)uVar9 == 0) {
                                          puVar6 = PTR_PTR_1126ca1c8;
                                          func_0x00010bf7b660(PTR_PTR_1126ca1c8);
                                          _objc_retainAutoreleasedReturnValue();
                                          uVar9 = param_7;
                                          func_0x00010c0720c0();
                                          _objc_release(puVar6);
                                          if ((int)uVar9 == 0) {
                                            puVar6 = PTR_PTR_1126ca1c8;
                                            func_0x00010c0e2d00(PTR_PTR_1126ca1c8);
                                            _objc_retainAutoreleasedReturnValue();
                                            uVar9 = param_7;
                                            func_0x00010c0720c0();
                                            _objc_release(puVar6);
                                            if ((int)uVar9 == 0) {
                                              puVar6 = PTR_PTR_1126ca1e0;
                                              func_0x00010bf685a0(PTR_PTR_1126ca1e0);
                                              _objc_retainAutoreleasedReturnValue();
                                              uVar9 = param_7;
                                              func_0x00010c0720c0();
                                              _objc_release(puVar6);
                                              if ((int)uVar9 != 0) {
                                                param_5[200] = 1;
                                                goto LAB_10638a2e0;
                                              }
                                              puVar6 = PTR_PTR_1126ca208;
                                              func_0x00010c103560(PTR_PTR_1126ca208);
                                              _objc_retainAutoreleasedReturnValue();
                                              uVar9 = param_7;
                                              func_0x00010c0720c0();
                                              _objc_release(puVar6);
                                              if ((int)uVar9 == 0) {
                                                puVar6 = PTR_PTR_1126ca210;
                                                func_0x00010c09aac0(PTR_PTR_1126ca210);
                                                _objc_retainAutoreleasedReturnValue();
                                                uVar9 = param_7;
                                                func_0x00010c0720c0();
                                                _objc_release(puVar6);
                                                if ((int)uVar9 == 0) {
                                                  puVar6 = PTR_PTR_1126ca210;
                                                  func_0x00010c09aae0(PTR_PTR_1126ca210);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  uVar9 = param_7;
                                                  func_0x00010c0720c0();
                                                  _objc_release(puVar6);
                                                  if ((int)uVar9 == 0) {
                                                    uVar9 = param_7;
                                                    FUN_106442134(param_7,param_9);
                                                    if (uVar9 == 0) goto LAB_10638a2e0;
                                                    puVar25 = param_5;
                                                    func_0x00010be23760();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar6 = puVar5;
                                                    func_0x00010c0f12c0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar12 = puVar23;
                                                    func_0x00010bef5620();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar13 = puVar12;
                                                    func_0x00010bf66880();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar14 = puVar13;
                                                    func_0x00010c253c20();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar15 = puVar14;
                                                    func_0x00010c253c40();
                                                    bVar1 = false;
                                                    if ((uVar9 == 2) &&
                                                       (puVar15 == (undefined *)0x4)) {
                                                      puVar15 = puVar25;
                                                      func_0x00010c269360();
                                                      bVar1 = puVar15 == (undefined *)0x3;
                                                    }
                                                    _objc_release(puVar14);
                                                    _objc_release(puVar13);
                                                    _objc_release(puVar12);
                                                    puVar12 = param_5;
                                                    func_0x00010be432e0();
                                                    if (((int)puVar12 != 0) && (!bVar1)) {
                                                      puVar12 = PTR_PTR_1126ca258;
                                                      func_0x00010c1294a0(PTR_PTR_1126ca258);
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar13 = PTR_PTR_1126ca260;
                                                      _objc_alloc();
                                                      func_0x00010c000140();
                                                      func_0x00010be63aa0(param_5);
                                                      puVar14 = param_8;
                                                      func_0x00010be36bc0(param_8);
                                                      _objc_retainAutoreleasedReturnValue();
                                                      func_0x00010be63ac0(param_5);
                                                      _objc_release(puVar14);
                                                      puVar14 = puVar23;
                                                      func_0x00010bef5620();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar15 = puVar14;
                                                      func_0x00010bf66880();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar16 = puVar15;
                                                      func_0x00010c253c20();
                                                      _objc_retainAutoreleasedReturnValue();
                                                      puVar17 = puVar16;
                                                      func_0x00010c253c40();
                                                      _objc_release(puVar16);
                                                      _objc_release(puVar15);
                                                      _objc_release(puVar14);
                                                      if (puVar17 == (undefined *)0x4) {
                                                        puVar14 = param_8;
                                                        func_0x00010be36bc0(param_8);
                                                        _objc_retainAutoreleasedReturnValue();
                                                        func_0x00010be63ae0(param_5);
                                                        _objc_release(puVar14);
                                                        _objc_release(puVar13);
                                                        _objc_release(puVar12);
                                                        _objc_release(puVar6);
                                                        goto LAB_10638b0a8;
                                                      }
                                                      _objc_release(puVar13);
                                                      _objc_release(puVar12);
                                                    }
                                                    uVar9 = uVar7;
                                                    if (uVar7 == 0) {
                                                      puVar12 = puVar5;
                                                      func_0x00010bef60a0();
                                                      if (puVar12 == (undefined *)0xa) {
                                                        uVar9 = *(ulong *)(param_5 + 0xc0);
                                                      }
                                                      else {
                                                        uVar9 = 0;
                                                      }
                                                    }
                                                    uVar20 = *(undefined8 *)(param_5 + 0x48);
                                                    _objc_retain(uVar9);
                                                    func_0x00010c1b7a00(uVar20);
                                                    puVar12 = param_5;
                                                    func_0x00010bdc58e0(param_5);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar13 = PTR_PTR_1126b6168;
                                                    func_0x00010bfbad60(PTR_PTR_1126b6168);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    uVar18 = param_9;
                                                    func_0x00010c0e00e0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    _objc_release(puVar13);
                                                    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                                                    _objc_opt_class(
                                                  PTR__OBJC_CLASS___NSNumber_1126ae570);
                                                  uVar19 = uVar18;
                                                  _objc_opt_isKindOfClass(uVar18,puVar13);
                                                  uVar10 = uVar18;
                                                  if ((uVar19 & 1) == 0) {
                                                    uVar10 = 0;
                                                  }
                                                  _objc_retain(uVar10);
                                                  _objc_release(uVar18);
                                                  func_0x00010bf1f3c0(uVar10);
                                                  _objc_release(uVar10);
                                                  param_5[0xca] = 0;
                                                  param_5[0xd8] = 1;
                                                  puVar13 = PTR_PTR_1126b8e58;
                                                  _objc_alloc(PTR_PTR_1126b8e58);
                                                  puVar14 = PTR_PTR_1126b8e40;
                                                  func_0x00010bf0d500(PTR_PTR_1126b8e40);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  func_0x00010c000140(puVar13);
                                                  func_0x00010be639a0(param_5);
                                                  _objc_release(puVar13);
                                                  _objc_release(puVar14);
                                                  func_0x00010be639c0(param_5);
                                                  _objc_release(uVar9);
                                                  _objc_release(puVar12);
                                                  _objc_release(puVar6);
                                                  goto LAB_10638ab3c;
                                                  }
                                                  func_0x00010be36bc0(param_8);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  func_0x00010be2b760(param_5);
                                                }
                                                else {
                                                  func_0x00010be36bc0(param_8);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  func_0x00010be2b740(param_5);
                                                }
                                              }
                                              else {
                                                func_0x00010be36bc0(param_8);
                                                _objc_retainAutoreleasedReturnValue();
                                                func_0x00010be2e3c0(param_5);
                                              }
                                            }
                                            else {
                                              func_0x00010be36bc0(param_8);
                                              _objc_retainAutoreleasedReturnValue();
                                              func_0x00010be2d2a0(param_5);
                                            }
                                            goto LAB_10638b0a8;
                                          }
                                          func_0x00010be28660(param_5);
                                        }
                                        else {
                                          func_0x00010be28640(param_5);
                                        }
                                        goto LAB_10638a2e0;
                                      }
                                      puVar25 = PTR_PTR_1126ca248;
                                      _objc_alloc(PTR_PTR_1126ca248);
                                      puVar6 = PTR_PTR_1126ca250;
                                      func_0x00010c235aa0(PTR_PTR_1126ca250);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010c000140(puVar25);
                                      func_0x00010be63720(param_5);
                                      _objc_release(puVar25);
                                      _objc_release(puVar6);
                                    }
                                    else {
                                      puVar25 = PTR_PTR_1126ca248;
                                      _objc_alloc(PTR_PTR_1126ca248);
                                      puVar6 = PTR_PTR_1126ca250;
                                      func_0x00010bfe16e0(PTR_PTR_1126ca250);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010c000140(puVar25);
                                      func_0x00010be63720(param_5);
                                      _objc_release(puVar25);
                                      _objc_release(puVar6);
                                    }
                                  }
                                  else {
                                    puVar25 = PTR_PTR_1126ca248;
                                    _objc_alloc(PTR_PTR_1126ca248);
                                    puVar6 = PTR_PTR_1126ca250;
                                    func_0x00010c132520(PTR_PTR_1126ca250);
                                    _objc_retainAutoreleasedReturnValue();
                                    func_0x00010c000140(puVar25);
                                    func_0x00010be63720(param_5);
                                    _objc_release(puVar25);
                                    _objc_release(puVar6);
                                  }
                                  func_0x00010be63740(param_5);
                                  goto LAB_10638a2e0;
                                }
                                puVar25 = PTR_PTR_1126ca1a0;
                                func_0x00010c269160(PTR_PTR_1126ca1a0);
                                _objc_retainAutoreleasedReturnValue();
                                uVar10 = param_9;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(puVar25);
                                puVar25 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                                _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
                                uVar18 = uVar10;
                                _objc_opt_isKindOfClass(uVar10,puVar25);
                                uVar9 = uVar10;
                                if ((uVar18 & 1) == 0) {
                                  uVar9 = 0;
                                }
                                _objc_retain(uVar9);
                                _objc_release(uVar10);
                                func_0x00010bdc1060(uVar9);
                                uVar20 = param_1;
                                _objc_release(uVar9);
                                puVar25 = PTR__OBJC_CLASS___UIScreen_1126aea10;
                                func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c14c760();
                                _objc_release(puVar25);
                                puVar25 = PTR_PTR_1126afec0;
                                func_0x00010beec800(*(undefined8 *)(param_5 + 0x30));
                                func_0x00010c155420(puVar25);
                                puVar25 = PTR_PTR_1126ca240;
                                func_0x00010c268d60(PTR_PTR_1126ca240);
                                _objc_retainAutoreleasedReturnValue();
                                uVar10 = param_9;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(puVar25);
                                puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                                uVar18 = uVar10;
                                _objc_opt_isKindOfClass(uVar10,puVar25);
                                uVar9 = uVar10;
                                if ((uVar18 & 1) == 0) {
                                  uVar9 = 0;
                                }
                                _objc_retain(uVar9);
                                _objc_release(uVar10);
                                func_0x00010c067fc0(uVar9);
                                _objc_release(uVar9);
                                puVar25 = PTR_PTR_1126b8e48;
                                uVar11 = param_1;
                                func_0x00010be98540(param_1,param_3,param_5);
                                uVar26 = param_2;
                                func_0x00010be98540(param_2,param_4,param_5);
                                func_0x00010c2697e0(param_1,param_2,uVar11,uVar26,uVar20,puVar25);
                                _objc_retainAutoreleasedReturnValue();
                                puVar6 = PTR_PTR_1126b8e58;
                                _objc_alloc(PTR_PTR_1126b8e58);
                                puVar12 = PTR_PTR_1126b8e40;
                                func_0x00010c254500(PTR_PTR_1126b8e40);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c000140(puVar6);
                                func_0x00010be639a0(param_5);
                                _objc_release(puVar6);
                                _objc_release(puVar12);
                                func_0x00010be639c0(param_5);
                              }
                              else {
                                puVar6 = PTR_PTR_1126ca230;
                                _objc_alloc(PTR_PTR_1126ca230);
                                puVar12 = PTR_PTR_1126ca238;
                                func_0x00010c25fd00(PTR_PTR_1126ca238);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c000140(puVar6);
                                func_0x00010be63c60(param_5);
                                _objc_release(puVar6);
                                _objc_release(puVar12);
                                func_0x00010be36bc0(param_8);
                                _objc_retainAutoreleasedReturnValue();
LAB_10638ab24:
                                func_0x00010be63c80(param_5);
                              }
LAB_10638ab3c:
                              _objc_release(puVar25);
                              goto LAB_10638a2e0;
                            }
                            puVar25 = param_8;
                            FUN_10638bb44();
                            if (((ulong)puVar25 & 1) != 0) goto LAB_10638a2e0;
                            lVar8 = *(long *)(param_5 + 0x48);
                            func_0x00010bf5f800();
                            _objc_retainAutoreleasedReturnValue();
                            if (lVar8 == 0) {
LAB_10638a92c:
                              param_5[0xcb] = 0;
                            }
                            else {
                              puVar25 = param_8;
                              func_0x00010be36bc0();
                              _objc_retainAutoreleasedReturnValue();
                              uVar20 = *(undefined8 *)(param_5 + 0x48);
                              func_0x00010bf5f800(uVar20);
                              _objc_retainAutoreleasedReturnValue();
                              puVar6 = puVar25;
                              func_0x00010c0720c0();
                              _objc_release(uVar20);
                              _objc_release(puVar25);
                              _objc_release(lVar8);
                              if ((int)puVar6 != 0) goto LAB_10638a92c;
                            }
                            uVar11 = *(undefined8 *)(param_5 + 0xf0);
                            func_0x00010c0f7800();
                            _objc_retainAutoreleasedReturnValue();
                            puVar25 = param_8;
                            func_0x00010be36bc0(param_8);
                            _objc_retainAutoreleasedReturnValue();
                            uVar20 = uVar11;
                            func_0x00010c0720c0();
                            _objc_release(puVar25);
                            _objc_release(uVar11);
                            if ((int)uVar20 != 0) {
                              func_0x00010bf42760(*(undefined8 *)(param_5 + 0xf0));
                            }
                            puVar25 = PTR_PTR_1126b8e58;
                            _objc_alloc(PTR_PTR_1126b8e58);
                            puVar6 = PTR_PTR_1126b8e40;
                            func_0x00010c2749e0(PTR_PTR_1126b8e40);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c000140(puVar25);
                            func_0x00010be639a0(param_5);
                            _objc_release(puVar25);
                            _objc_release(puVar6);
                          }
                          else {
                            puVar25 = param_8;
                            FUN_10638bb44();
                            if (((ulong)puVar25 & 1) != 0) goto LAB_10638a2e0;
                            puVar25 = PTR_PTR_1126b8e58;
                            _objc_alloc(PTR_PTR_1126b8e58);
                            puVar6 = PTR_PTR_1126b8e40;
                            func_0x00010c2749c0(PTR_PTR_1126b8e40);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c000140(puVar25);
                            func_0x00010be639a0(param_5);
                            _objc_release(puVar25);
                            _objc_release(puVar6);
                          }
                        }
                        else {
                          puVar25 = PTR_PTR_1126ca228;
                          func_0x00010bf5efc0(PTR_PTR_1126ca228);
                          _objc_retainAutoreleasedReturnValue();
                          uVar10 = param_9;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar25);
                          puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                          uVar18 = uVar10;
                          _objc_opt_isKindOfClass(uVar10,puVar25);
                          uVar9 = uVar10;
                          if ((uVar18 & 1) == 0) {
                            uVar9 = 0;
                          }
                          _objc_retain(uVar9);
                          _objc_release(uVar10);
                          puVar6 = PTR_PTR_1126b8e58;
                          _objc_alloc(PTR_PTR_1126b8e58);
                          puVar25 = PTR_PTR_1126b8e40;
                          func_0x00010c067ec0(uVar9);
                          _objc_release(uVar9);
                          func_0x00010bfb35c0(puVar25);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c000140(puVar6);
                          func_0x00010be639a0(param_5);
                          _objc_release(puVar6);
                          _objc_release(puVar25);
                        }
LAB_106389888:
                        func_0x00010be639c0(param_5);
                      }
                      else {
                        puVar25 = param_8;
                        FUN_10638bb44();
                        if (((ulong)puVar25 & 1) == 0) {
                          puVar25 = param_5;
                          func_0x00010c0ea260();
                          _objc_retainAutoreleasedReturnValue();
                          puVar6 = puVar25;
                          func_0x00010c0f1b80();
                          _objc_retainAutoreleasedReturnValue();
                          puVar12 = puVar6;
                          func_0x00010bf5f7a0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          _objc_release(puVar6);
                          _objc_release(puVar25);
                          puVar25 = PTR_PTR_1126b6008;
                          func_0x00010c128140(PTR_PTR_1126b6008);
                          _objc_retainAutoreleasedReturnValue();
                          uVar10 = param_9;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar25);
                          puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                          uVar18 = uVar10;
                          _objc_opt_isKindOfClass(uVar10,puVar25);
                          uVar9 = uVar10;
                          if ((uVar18 & 1) == 0) {
                            uVar9 = 0;
                          }
                          _objc_retain(uVar9);
                          _objc_release(uVar10);
                          uVar10 = uVar9;
                          func_0x00010c067fc0();
                          _objc_release(uVar9);
                          if ((uVar10 == 4) && (puVar12 != (undefined *)0x0)) {
                            puVar25 = PTR_PTR_1126b8e58;
                            _objc_alloc(PTR_PTR_1126b8e58);
                            puVar6 = PTR_PTR_1126b8e40;
                            func_0x00010bf0d4a0(PTR_PTR_1126b8e40);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c000140(puVar25);
                            func_0x00010be639a0(param_5);
                            _objc_release(puVar25);
                            _objc_release(puVar6);
                            goto LAB_106389888;
                          }
                        }
                      }
                    }
                    else {
                      puVar25 = param_5;
                      func_0x00010be08c20();
                      if ((((int)puVar25 != 0) && ((param_5[0xd8] & 1) == 0)) &&
                         (puVar25 = param_5, func_0x00010be412a0(), (int)puVar25 != 0)) {
                        uVar9 = uVar7;
                        if (uVar7 == 0) {
                          puVar25 = puVar5;
                          func_0x00010bef60a0();
                          if (puVar25 == (undefined *)0xa) {
                            uVar9 = *(ulong *)(param_5 + 0xc0);
                          }
                          else {
                            uVar9 = 0;
                          }
                        }
                        uVar20 = *(undefined8 *)(param_5 + 0x48);
                        _objc_retain(uVar9);
                        func_0x00010c1b7a00(uVar20);
                        puVar25 = param_5;
                        func_0x00010be23760();
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = param_5;
                        func_0x00010bdc58c0(param_5);
                        _objc_retainAutoreleasedReturnValue();
                        puVar12 = PTR_PTR_1126b8e58;
                        _objc_alloc(PTR_PTR_1126b8e58);
                        puVar13 = PTR_PTR_1126b8e40;
                        func_0x00010bf0d500(PTR_PTR_1126b8e40);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c000140(puVar12);
                        func_0x00010be639a0(param_5);
                        _objc_release(puVar12);
                        _objc_release(puVar13);
                        func_0x00010be639c0(param_5);
                        _objc_release(uVar9);
                        _objc_release(puVar6);
                        _objc_release(puVar25);
                      }
                      func_0x00010be637c0(param_5);
                      puVar25 = puVar5;
                      func_0x00010bef60a0();
                      if (puVar25 != (undefined *)0x6) {
                        func_0x00010be639c0(param_5);
                      }
                      puVar25 = puVar5;
                      func_0x00010bef60a0();
                      if (puVar25 == (undefined *)0xa) {
                        puVar6 = PTR_PTR_1126b8e58;
                        _objc_alloc(PTR_PTR_1126b8e58);
                        puVar25 = PTR_PTR_1126b8e40;
                        func_0x00010c2a4a00(PTR_PTR_1126b8e40);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c000140(puVar6);
                        _objc_release(puVar25);
                        func_0x00010be639a0(param_5);
                        puVar25 = PTR_PTR_1126b8e50;
                        uVar20 = *(undefined8 *)(param_5 + 0x58);
                        puVar12 = PTR_PTR_1126b8e70;
                        _objc_alloc(PTR_PTR_1126b8e70);
                        puVar13 = PTR_PTR_1126b8e68;
                        func_0x00010bf0d520(PTR_PTR_1126b8e68);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c000140(puVar12);
                        func_0x00010c2a4a20(puVar25);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0d9840(uVar20);
                        _objc_release(puVar25);
                        _objc_release(puVar12);
                        _objc_release(puVar13);
                        _objc_release(puVar6);
                      }
                    }
                    goto LAB_10638a2e0;
                  }
                }
                else {
LAB_10638a400:
                  _objc_release(puVar25);
                }
                func_0x00010be67d80(param_5);
              }
              else {
                puVar25 = PTR_PTR_1126b8e58;
                _objc_alloc(PTR_PTR_1126b8e58);
                puVar6 = PTR_PTR_1126b8e40;
                func_0x00010bf68a40(PTR_PTR_1126b8e40);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c000140(puVar25);
                func_0x00010be639a0(param_5);
                _objc_release(puVar25);
                _objc_release(puVar6);
                param_5[200] = 0;
              }
            }
            else {
              uVar10 = *(ulong *)(param_5 + 0x18);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar10;
              func_0x00010bf1f480();
              if ((uVar9 & 1) != 0) goto LAB_106389cd4;
              puVar25 = param_5;
              func_0x00010be412a0();
              _objc_release(uVar10);
              if (((ulong)puVar25 & 1) == 0) {
                func_0x00010be38a80(param_5);
                func_0x00010be38aa0(param_5);
                puVar25 = param_5;
                func_0x00010becddc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                func_0x00010be67d20(param_5);
                puVar5 = PTR_PTR_1126b8e58;
                _objc_alloc(PTR_PTR_1126b8e58);
                puVar6 = PTR_PTR_1126b8e40;
                func_0x00010bfb5460(PTR_PTR_1126b8e40);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c000140(puVar5);
                func_0x00010be639a0(param_5);
                _objc_release(puVar5);
                _objc_release(puVar6);
                func_0x00010be639c0(param_5);
                puVar6 = puVar25;
                func_0x00010bef60a0();
                puVar5 = puVar25;
                if ((puVar6 == (undefined *)0x6) && (param_5[0xc9] == '\x01')) {
                  puVar25 = PTR_PTR_1126b8e88;
                  _objc_alloc(PTR_PTR_1126b8e88);
                  puVar6 = PTR_PTR_1126b8e80;
                  func_0x00010bf0d5e0(PTR_PTR_1126b8e80);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c000140(puVar25);
                  func_0x00010be63800(param_5);
                  _objc_release(puVar25);
                  _objc_release(puVar6);
                }
              }
            }
          }
          else {
            func_0x00010bf42760(*(undefined8 *)(param_5 + 0xf0));
            param_5[200] = 0;
            uVar10 = *(ulong *)(param_5 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar10;
            func_0x00010bf1f480();
            if ((uVar9 & 1) == 0) {
              puVar25 = param_5;
              func_0x00010be412a0();
              _objc_release(uVar10);
              if (((ulong)puVar25 & 1) == 0) {
                func_0x00010be67d20(param_5);
                puVar25 = PTR_PTR_1126b8e58;
                _objc_alloc(PTR_PTR_1126b8e58);
                puVar6 = PTR_PTR_1126b8e40;
                func_0x00010bf141c0(PTR_PTR_1126b8e40);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c000140(puVar25);
                func_0x00010be639a0(param_5);
                _objc_release(puVar25);
                _objc_release(puVar6);
                goto LAB_106389d58;
              }
            }
            else {
LAB_106389cd4:
              _objc_release(uVar10);
            }
          }
        }
        else {
          puVar25 = param_8;
          FUN_10638bb44();
          lVar8 = *(long *)(param_5 + 0xb8);
          if (((ulong)puVar25 & 1) != 0) {
            func_0x00010c068280();
            if (lVar8 == 4) {
              param_5[200] = 0;
            }
            else {
              puVar25 = PTR_PTR_1126b8e58;
              _objc_alloc(PTR_PTR_1126b8e58);
              puVar6 = PTR_PTR_1126b8e40;
              func_0x00010bf0cd40(PTR_PTR_1126b8e40);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c000140(puVar25);
              func_0x00010be639a0(param_5);
              _objc_release(puVar25);
              _objc_release(puVar6);
LAB_106389d58:
              func_0x00010be639c0(param_5);
            }
            goto LAB_10638a2e0;
          }
          if (lVar8 == 0) {
            bVar21 = 0;
          }
          else {
            func_0x00010c068280();
            if (lVar8 + 1U < 0xc) {
              bVar21 = (byte)(0xa6 >> (ulong)((uint)(lVar8 + 1U) & 0x1f));
            }
            else {
              bVar21 = 1;
            }
          }
          lVar8 = *(long *)(param_5 + 0xb8);
          func_0x00010bf9a440();
          puVar25 = param_8;
          if (lVar8 == 0x11) {
            puVar6 = param_5 + 0xa8;
            _objc_loadWeakRetained();
            func_0x00010be36bc0(param_8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar6;
            func_0x00010c234f20();
            bVar2 = (byte)puVar12;
LAB_106389e98:
            bVar2 = bVar2 ^ 1;
            _objc_release(puVar25);
            _objc_release(puVar6);
          }
          else {
            lVar8 = *(long *)(param_5 + 0xb8);
            func_0x00010bf9a440();
            if (lVar8 == 0x18) {
              puVar6 = param_5 + 0xa8;
              _objc_loadWeakRetained();
              func_0x00010be36bc0(param_8);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar6;
              func_0x00010c234f00();
              bVar2 = (byte)puVar12;
              goto LAB_106389e98;
            }
            bVar2 = 0;
          }
          puVar25 = param_5 + 0xa8;
          _objc_loadWeakRetained();
          puVar6 = puVar25;
          func_0x00010c07aca0();
          if (((ulong)puVar6 & 1) == 0) {
            _objc_release(puVar25);
          }
          else {
            uVar11 = *(undefined8 *)(param_5 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar11;
            func_0x00010c0ec0c0();
            _objc_release(uVar11);
            _objc_release(puVar25);
            if ((int)uVar20 != 0) {
              param_5[200] = 0;
            }
          }
          puVar25 = param_5 + 0xa8;
          _objc_loadWeakRetained();
          puVar6 = puVar25;
          func_0x00010c07aca0();
          if ((int)puVar6 == 0) {
            uStack_128 = 0;
          }
          else {
            uVar9 = *(ulong *)(param_5 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uStack_128 = uVar9;
            func_0x00010c0ec0c0();
            uStack_128 = uStack_128 & 0xffffffff;
            _objc_release(uVar9);
          }
          _objc_release(puVar25);
          puVar25 = PTR_PTR_1126ca220;
          func_0x00010c0f1420();
          if (((int)puVar25 == 0) || ((uStack_128 & 1) != 0)) {
            func_0x00010be08520(param_5);
          }
          else {
            _objc_initWeak(auStack_a0,param_5);
            uVar20 = *(undefined8 *)(param_5 + 0xf0);
            puVar25 = puVar5;
            func_0x00010bef2c60(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf181a0(uVar20);
            _objc_release(puVar25);
            uVar20 = *(undefined8 *)(param_5 + 0xf0);
            _objc_copyWeak(auStack_b0,auStack_a0);
            _objc_retain(puVar5);
            _objc_retain(param_7);
            _objc_retain(param_9);
            _objc_retain(param_8);
            bStack_a8 = bVar21 & 1;
            bStack_a7 = bVar2;
            func_0x00010bf069a0(uVar20);
            _objc_release(param_8);
            _objc_release(param_9);
            _objc_release(param_7);
            _objc_release(puVar5);
            _objc_destroyWeak(auStack_b0);
            _objc_destroyWeak(auStack_a0);
          }
        }
      }
      else {
        param_5[0xcb] = 0;
        uVar9 = *(ulong *)(param_5 + 0x48);
        func_0x00010c0e2980();
        if ((uVar9 & 1) == 0) {
          puVar25 = param_8;
          FUN_10638bb44();
joined_r0x000106389c3c:
          if (((ulong)puVar25 & 1) == 0) {
            func_0x00010be08540(param_5);
          }
        }
      }
    }
    else {
      param_5[0xcb] = 1;
      param_5[200] = 0;
    }
  }
  else {
    uVar20 = *(undefined8 *)(param_5 + 0xf0);
    puVar25 = puVar5;
    func_0x00010bef2c60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a920(uVar20);
    _objc_release(puVar25);
    puVar25 = PTR_PTR_1126ca220;
    func_0x00010c0f1420();
    if ((int)puVar25 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar5;
      func_0x00010bef2c60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = param_5;
      func_0x00010be45880();
      _objc_release(puVar6);
    }
    iVar3 = (int)*(undefined8 *)(param_5 + 8);
    func_0x00010c07ac40();
    if (iVar3 == 0) {
      if ((param_5[0xcb] != '\x01') ||
         (puVar6 = param_5, func_0x00010be44760(), ((ulong)puVar6 & 1) == 0)) {
        uVar9 = *(ulong *)(param_5 + 0x48);
        func_0x00010c0e2980();
        if (((uVar9 & 1) == 0) && (puVar6 = param_8, FUN_10638bb44(), ((ulong)puVar6 & 1) == 0))
        goto joined_r0x000106389c3c;
        puVar25 = PTR_PTR_1126b8e58;
        _objc_alloc(PTR_PTR_1126b8e58);
        puVar6 = PTR_PTR_1126b8e40;
        func_0x00010bf0cce0(PTR_PTR_1126b8e40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000140(puVar25);
        func_0x00010be639a0(param_5);
        _objc_release(puVar25);
        _objc_release(puVar6);
        func_0x00010be639c0(param_5);
      }
    }
    else {
      func_0x00010c1e1500(*(undefined8 *)(param_5 + 8));
    }
  }
LAB_10638a2e0:
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(puVar23);
LAB_10638a2f8:
  _objc_release(puVar24);
  _objc_release(puVar4);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 10638baf8; end: 10638bb43;  */

undefined * FUN_10638baf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca2b0;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072640(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10638bb44; end: 10638bbe7;  */

undefined * FUN_10638bb44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = param_1;
  func_0x00010c118b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0(puVar2,param_2,uVar1);
  puVar4 = PTR_PTR_1126ca2b0;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c118b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c400(puVar4,param_2,uVar3);
    _objc_release(uVar3);
  }
  else {
    puVar4 = (undefined *)0x1;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 10638bbe8; end: 10638bc27;  */

void FUN_10638bbe8(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be08520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10638bc28; end: 10638bc6b; -[SCAdTrackOperaAdaptor _onAttachment] */

byte FUN_10638bc28(long param_1)

{
  int iVar1;
  byte bVar2;
  
  if ((*(byte *)(param_1 + 0xc9) & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010c0e2980();
    if (iVar1 == 0) {
      bVar2 = 0;
      goto LAB_10638bc5c;
    }
  }
  bVar2 = *(byte *)(param_1 + 0xca) ^ 1;
LAB_10638bc5c:
  return bVar2 & 1;
}



/* Entry: 10638bc6c; end: 10638bdbf; -[SCAdTrackOperaAdaptor _isReminderAdForPageId:] */

bool FUN_10638bc6c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = param_1 + 0x100;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar7 = *(long *)(param_1 + 8);
  lVar2 = lVar6;
  func_0x00010be36bc0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_1 + 0x100;
    _objc_loadWeakRetained();
    uVar3 = uVar8;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puVar4 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar8 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar3);
  }
  lVar2 = lVar7;
  func_0x00010bef60a0();
  if (lVar2 == 0x14) {
    bVar1 = true;
  }
  else {
    uVar3 = uVar8;
    func_0x00010bef60a0(uVar8);
    bVar1 = uVar3 == 0x14;
  }
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10638bdc0; end: 10638bdcb; -[SCAdTrackOperaAdaptor _adTrackCommon:withCollectionItemIndex:] */

void FUN_10638bdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2aa8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_withCollectionItemIndex__112688458,param_4);
  return;
}



/* Entry: 10638bdcc; end: 10638bdd7; -[SCAdTrackOperaAdaptor _adTrackCommon:source:] */

void FUN_10638bdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2b9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_withSource__11268c108,param_4);
  return;
}



/* Entry: 10638bdd8; end: 10638c023; -[SCAdTrackOperaAdaptor _willResignActive] */

void FUN_10638bdd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  func_0x00010bf42760(*(undefined8 *)(param_1 + 0xf0));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5f800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be412a0();
  uVar3 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  if (((uVar4 & 1) != 0) || ((int)lVar2 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf5f780(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(ulong *)(param_1 + 0x48);
    func_0x00010bf5f8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ca1a8;
    func_0x00010c089020(PTR_PTR_1126ca1a8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar7);
    uVar4 = uVar3;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010bef5c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf5f780();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c06b7e0();
    _objc_release(uVar9);
    if (lVar2 == 0) {
      if ((int)uVar10 != 0) {
        func_0x00010be4ff20(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 200) = 0;
      func_0x00010be67d20(param_1);
      puVar7 = PTR_PTR_1126b8e58;
      _objc_alloc(PTR_PTR_1126b8e58);
      puVar11 = PTR_PTR_1126b8e40;
      func_0x00010bf141c0(PTR_PTR_1126b8e40);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000140(puVar7);
      func_0x00010be639a0(param_1);
      _objc_release(puVar7);
      _objc_release(puVar11);
      puVar7 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be639c0(param_1);
      _objc_release(puVar7);
    }
    _objc_release(lVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10638c024; end: 10638c34f; -[SCAdTrackOperaAdaptor _didBecomeActive] */

void FUN_10638c024(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5f800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be412a0();
  uVar4 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f480();
  _objc_release(uVar4);
  if (((uVar5 & 1) == 0) && ((int)lVar3 == 0)) goto LAB_10638c334;
  uVar6 = *(ulong *)(param_1 + 0x48);
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(ulong *)(param_1 + 0x48);
  func_0x00010bf5f8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ca1a8;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar8);
  uVar5 = uVar4;
  if ((uVar9 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010c06b7e0();
  _objc_release(uVar10);
  lVar3 = param_1;
  func_0x00010bef5c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar6;
  FUN_10638baf8();
  if ((uVar5 & 1) == 0) {
    if (lVar3 == 0) goto LAB_10638c304;
LAB_10638c184:
    func_0x00010be38a80(param_1);
    func_0x00010be38aa0(param_1);
    lVar13 = param_1;
    func_0x00010becddc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010be67d20(param_1);
    puVar8 = PTR_PTR_1126b8e58;
    _objc_alloc(PTR_PTR_1126b8e58);
    puVar11 = PTR_PTR_1126b8e40;
    func_0x00010bfb5460(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000140(puVar8);
    func_0x00010be639a0(param_1);
    _objc_release(puVar8);
    _objc_release(puVar11);
    puVar8 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf5f8c0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be639c0(param_1);
    _objc_release(uVar12);
    _objc_release(puVar8);
    lVar3 = lVar13;
    func_0x00010bef60a0();
    if (lVar3 == 6) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x00010c0e2980();
      if (iVar1 != 0) {
        puVar8 = PTR_PTR_1126b8e88;
        _objc_alloc(PTR_PTR_1126b8e88);
        puVar11 = PTR_PTR_1126b8e80;
        func_0x00010bf0d5e0(PTR_PTR_1126b8e80);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000140(puVar8);
        func_0x00010be63800(param_1);
        _objc_release(puVar8);
        _objc_release(puVar11);
      }
    }
  }
  else {
    if (lVar3 != 0) goto LAB_10638c184;
LAB_10638c304:
    if ((int)uVar12 != 0) {
      func_0x00010be4ff20(param_1);
    }
    lVar13 = 0;
  }
  _objc_release(lVar13);
  _objc_release(uVar7);
  _objc_release(uVar6);
LAB_10638c334:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10638c350; end: 10638c46b; -[SCAdTrackOperaAdaptor _emitTopSnapDisappearWithTrackCommon:event:params:page:isExitAd:isOpenProfile:] */

void FUN_10638c350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,int param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8e58;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8e40;
  func_0x00010c2749a0(PTR_PTR_1126b8e40,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000140(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  func_0x00010be639a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010be639c0(param_1,param_2,param_4,param_5,param_6,2,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (((param_7 & 1) != 0) || (param_8 != 0)) {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 10638c46c; end: 10638ca9b; -[SCAdTrackOperaAdaptor _getTouchPointWithTriggerType:event:params:] */

void FUN_10638c46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,ulong param_9)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
  if (param_7 == 1) {
    puVar2 = PTR_PTR_1126c9a28;
    func_0x00010c29d180(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010bdc1060(uVar1);
    uVar12 = param_1;
    uVar10 = param_2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126c9a28;
    func_0x00010c29d200(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010bdc1060(uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126c9a28;
    func_0x00010c29d1e0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126afec0;
    func_0x00010beec800(*(undefined8 *)(param_5 + 0x30));
    func_0x00010bf5fd80(*(undefined8 *)(param_5 + 0x30));
    func_0x00010bf885a0(uVar1);
    func_0x00010c155420(puVar2);
    puVar2 = PTR_PTR_1126c9a28;
    func_0x00010c29d260(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126afec0;
    uVar4 = uVar1;
    if (uVar3 != 0) {
      uVar4 = uVar3;
    }
    func_0x00010bf885a0(uVar4);
    _objc_release(uVar3);
    func_0x00010bf885a0(uVar1);
    _objc_release(uVar1);
    func_0x00010c155420(puVar2);
    puVar2 = PTR_PTR_1126b5b08;
    func_0x00010bf4f3c0(PTR_PTR_1126b5b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b8e48;
    uVar11 = param_1;
    func_0x00010be98540(param_1,param_3,param_5);
    uVar7 = param_2;
    func_0x00010be98540(param_2,param_4,param_5);
    uVar8 = uVar12;
    func_0x00010be98540(uVar12,param_3,param_5);
    uVar9 = uVar10;
    func_0x00010be98540(uVar10,param_4,param_5);
    func_0x00010c2653e0(param_1,param_2,uVar11,uVar7,uVar12,uVar10,uVar8,uVar9,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ca1a0;
    func_0x00010c269160(PTR_PTR_1126ca1a0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ca240;
    func_0x00010c268d60(PTR_PTR_1126ca240);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    func_0x00010c067fc0(uVar4);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      puVar2 = PTR_PTR_1126b6168;
      func_0x00010c247d60(PTR_PTR_1126b6168);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
      _objc_opt_class(PTR__OBJC_CLASS___UIEvent_1126c5f58);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      uVar3 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010bf00c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (uVar3 == 0) {
        uVar12 = *(undefined8 *)PTR__CGPointZero_110347540;
        param_2 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
      }
      else {
        func_0x00010c09ef00(uVar3);
        uVar12 = param_1;
      }
      _objc_release(uVar3);
    }
    else {
      func_0x00010bdc1060(uVar3);
      uVar12 = param_1;
    }
    puVar2 = PTR_PTR_1126afec0;
    func_0x00010beec800(*(undefined8 *)(param_5 + 0x30));
    func_0x00010c155420(puVar2);
    puVar2 = PTR_PTR_1126b8e48;
    uVar10 = uVar12;
    func_0x00010be98540(uVar12,param_3,param_5);
    uVar11 = param_2;
    func_0x00010be98540(param_2,param_4,param_5);
    func_0x00010c2697e0(uVar12,param_2,uVar10,uVar11,param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10638ca9c; end: 10638d623; -[SCAdTrackOperaAdaptor _getTouchPointV2WithEventId:event:triggerType:params:operaViewInteraction:eventType:] */

void FUN_10638ca9c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined **param_10,long param_11,long param_12)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_f8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar10);
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_9 == 2) {
    puVar10 = PTR_PTR_1126ca240;
    func_0x00010c268d60(PTR_PTR_1126ca240);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar11 = ppuVar9;
    _objc_opt_isKindOfClass(ppuVar9,puVar10);
    ppuVar8 = ppuVar9;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain();
    _objc_release(ppuVar9);
    puVar10 = PTR_PTR_1126ca1a0;
    func_0x00010c269160(PTR_PTR_1126ca1a0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    ppuVar2 = ppuVar9;
    _objc_opt_isKindOfClass(ppuVar9,puVar10);
    ppuVar11 = ppuVar9;
    if (((ulong)ppuVar2 & 1) == 0) {
      ppuVar11 = (undefined **)0x0;
    }
    _objc_retain(ppuVar11);
    _objc_release(ppuVar9);
    if (ppuVar11 == (undefined **)0x0) {
      puVar10 = PTR_PTR_1126b6168;
      func_0x00010c247d60(PTR_PTR_1126b6168);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
      _objc_opt_class(PTR__OBJC_CLASS___UIEvent_1126c5f58);
      ppuVar2 = ppuVar11;
      _objc_opt_isKindOfClass(ppuVar11,puVar10);
      ppuVar9 = ppuVar11;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar9 = (undefined **)0x0;
      }
      _objc_retain(ppuVar9);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar9;
      func_0x00010bf00c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar2 = ppuVar11;
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSValue_1126afdf8;
      if (ppuVar2 == (undefined **)0x0) {
        ppuVar9 = (undefined **)0x0;
      }
      else {
        func_0x00010c09ef00(ppuVar2);
        func_0x00010c297180();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar8);
      _objc_release(ppuVar2);
      ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c59e0;
    }
    puVar10 = PTR_PTR_1126afec0;
    puStack_a0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010beec800(*(undefined8 *)(param_5 + 0x30));
    func_0x00010c155420(puVar10);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = (undefined **)0x0;
    ppuStack_b0 = (undefined **)0x0;
    ppuStack_90 = (undefined **)0x0;
    ppuVar11 = (undefined **)0x0;
    puStack_a8 = (undefined *)0x0;
    ppuStack_d0 = (undefined **)0x0;
    ppuStack_c8 = (undefined **)0x0;
  }
  else if (param_9 == 1) {
    puVar10 = PTR_PTR_1126c9a28;
    func_0x00010c29d180(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    ppuVar11 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar10);
    ppuVar9 = ppuVar8;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar9 = (undefined **)0x0;
    }
    _objc_retain();
    _objc_release(ppuVar8);
    puVar10 = PTR_PTR_1126c9a28;
    func_0x00010c29d200(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    ppuVar11 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar10);
    ppuStack_d0 = ppuVar8;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuStack_d0 = (undefined **)0x0;
    }
    _objc_retain();
    _objc_release(ppuVar8);
    puVar10 = PTR_PTR_1126c9a28;
    func_0x00010c29d1e0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar2 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar10);
    ppuVar8 = ppuVar11;
    if (((ulong)ppuVar2 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar11);
    puVar10 = PTR_PTR_1126c9a28;
    func_0x00010c29d260(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar2 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar10);
    ppuStack_c8 = ppuVar11;
    if (((ulong)ppuVar2 & 1) == 0) {
      ppuStack_c8 = (undefined **)0x0;
    }
    _objc_retain(ppuStack_c8);
    _objc_release(ppuVar11);
    puVar10 = PTR_PTR_1126afec0;
    puStack_a0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010beec800(*(undefined8 *)(param_5 + 0x30));
    dVar14 = param_1;
    func_0x00010bf5fd80(*(undefined8 *)(param_5 + 0x30));
    dVar15 = dVar14;
    func_0x00010bf885a0(ppuVar8);
    param_1 = param_1 - (dVar14 - dVar15);
    func_0x00010c155420(param_1,puVar10);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126afec0;
    puStack_a8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar11 = ppuVar8;
    if (ppuStack_c8 != (undefined **)0x0) {
      ppuVar11 = ppuStack_c8;
    }
    func_0x00010bf885a0(ppuVar11);
    dVar14 = param_1;
    func_0x00010bf885a0(ppuVar8);
    _objc_release(ppuVar8);
    param_1 = param_1 - dVar14;
    func_0x00010c155420(param_1,puVar10);
    func_0x00010c0df740((int)param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b5b08;
    func_0x00010bf4f3c0(PTR_PTR_1126b5b08);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_8;
    func_0x00010c0720c0();
    ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c59b0;
    if ((int)uVar1 == 0) {
      ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c59c8;
    }
    _objc_retain();
    _objc_release(puVar10);
    ppuStack_b0 = (undefined **)0x0;
    ppuVar8 = (undefined **)0x0;
    ppuStack_90 = (undefined **)0x0;
    ppuVar11 = (undefined **)0x0;
  }
  else {
    if (param_11 == 0) {
      puVar10 = PTR_PTR_1126c9a28;
      func_0x00010c29d180(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
      ppuVar11 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar10);
      ppuVar9 = ppuVar8;
      if (((ulong)ppuVar11 & 1) == 0) {
        ppuVar9 = (undefined **)0x0;
      }
      _objc_retain(ppuVar9);
      _objc_release(ppuVar8);
      puVar10 = PTR_PTR_1126c9a28;
      func_0x00010c29d1a0(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar10);
      ppuVar11 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar11 = (undefined **)0x0;
      }
      _objc_retain(ppuVar11);
      _objc_release(ppuVar8);
      puVar10 = PTR_PTR_1126c9a28;
      func_0x00010c29d1c0(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar10);
      ppuStack_90 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuStack_90 = (undefined **)0x0;
      }
      _objc_retain();
      _objc_release(ppuVar8);
      puVar10 = PTR_PTR_1126ca240;
      func_0x00010c2648c0(PTR_PTR_1126ca240);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar2 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar10);
      ppuStack_b0 = ppuVar8;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuStack_b0 = (undefined **)0x0;
      }
      _objc_retain();
      _objc_release(ppuVar8);
    }
    else {
      func_0x00010c24f200(param_11);
      func_0x00010c297180();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c24f260(param_11);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_90 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c24f280(param_11);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b0 = (undefined **)0x0;
    }
    ppuVar8 = (undefined **)0x0;
    puStack_a8 = (undefined *)0x0;
    puStack_a0 = (undefined *)0x0;
    ppuStack_d0 = (undefined **)0x0;
    ppuStack_c8 = (undefined **)0x0;
    ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c59f8;
  }
  ppuVar2 = ppuVar8;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_12 == 0x15) && (ppuVar9 == (undefined **)0x0)) {
    puVar10 = PTR_PTR_1126ca1a0;
    func_0x00010c269160(PTR_PTR_1126ca1a0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    ppuVar3 = ppuVar2;
    _objc_opt_isKindOfClass(ppuVar2,puVar10);
    ppuVar9 = ppuVar2;
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar9 = (undefined **)0x0;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar2);
    puVar10 = PTR_PTR_1126ca240;
    func_0x00010c268d60(PTR_PTR_1126ca240);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar4 = ppuVar3;
    _objc_opt_isKindOfClass(ppuVar3,puVar10);
    ppuVar2 = ppuVar3;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar2 = (undefined **)0x0;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar3);
    _objc_release(ppuVar8);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  PTR__OBJC_CLASS___NSNumber_1126ae570 = (undefined *)ppuVar3;
  if (ppuVar9 == (undefined **)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    if (ppuVar11 == (undefined **)0x0) {
      func_0x00010bdc1060(ppuVar9);
      param_2 = param_3;
      func_0x00010be98540(param_5);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar3;
    }
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_2;
    if (ppuStack_90 == (undefined **)0x0) {
      func_0x00010bdc1060(ppuVar9);
      uVar1 = param_4;
      func_0x00010be98540(param_2,param_4,param_5);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_90 = ppuVar8;
    }
    puStack_f8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuStack_d0 == (undefined **)0x0) {
      puVar7 = (undefined *)0x0;
      puStack_f8 = (undefined *)0x0;
    }
    else {
      func_0x00010bdc1060(ppuStack_d0);
      func_0x00010be98540(param_5);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bdc1060(ppuStack_d0);
      func_0x00010be98540(param_3,param_4,param_5);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_4;
    }
    puVar10 = PTR_PTR_1126b8fb0;
    _objc_alloc(PTR_PTR_1126b8fb0);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bdc1060(ppuVar9);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bdc1060(ppuVar9);
    func_0x00010c0df720(uVar1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuStack_d0 == (undefined **)0x0) {
      puVar12 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
    }
    else {
      func_0x00010bdc1060(ppuStack_d0);
      func_0x00010c0df720(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bdc1060(ppuStack_d0);
      func_0x00010c0df720(uVar1,puVar13);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar8 = ppuVar2;
    func_0x00010c067ec0();
    ppuVar3 = ppuStack_b0;
    func_0x00010c067ec0();
    ppuVar4 = ppuStack_b8;
    func_0x00010c067ec0();
    func_0x00010b8937ec(puVar10,param_7,puVar5,puVar6,ppuVar11,ppuStack_90,puVar12,puVar13,
                        puStack_f8,puVar7,puStack_a8,puStack_a0,(long)(int)ppuVar8,
                        (long)(int)ppuVar3,(long)(int)ppuVar4);
    if (ppuStack_d0 != (undefined **)0x0) {
      _objc_release(puVar13);
      _objc_release(puVar12);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puStack_f8);
  }
  _objc_release(ppuStack_b8);
  _objc_release(ppuStack_b0);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_90);
  _objc_release(ppuVar11);
  _objc_release(puStack_a8);
  _objc_release(ppuStack_c8);
  _objc_release(puStack_a0);
  _objc_release(ppuStack_d0);
  _objc_release(ppuVar9);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10638d624; end: 10638d637; -[SCAdTrackOperaAdaptor _safeDivideWithNumerator:denominator:] */

double FUN_10638d624(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_1 / param_2;
  }
  return dVar1;
}



/* Entry: 10638d638; end: 10638d777; -[SCAdTrackOperaAdaptor setOperaControlling:] */

void FUN_10638d638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x108,param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0688c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0687c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10638d778; end: 10638d813;  */

void FUN_10638d778(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0f1b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c06b7e0(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a820();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10638d814; end: 10638d97b; -[SCAdTrackOperaAdaptor _handleLifecycleEvent:] */

void FUN_10638d814(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25e900();
  if (lVar1 == 0xc) {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  lVar1 = param_3;
  func_0x00010c25e900();
  if (lVar1 == 7) {
    *(undefined1 *)(param_1 + 0xc9) = 1;
  }
  lVar1 = param_3;
  func_0x00010c25e900();
  if (lVar1 == 8) {
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  lVar1 = param_3;
  func_0x00010c25e900();
  if (lVar1 == 4) {
    lVar6 = *(long *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f12c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef37e0(lVar6,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c09c880();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef60a0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0xd) {
      lVar1 = param_3;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bef19e0();
      _objc_release(lVar1);
      if (lVar2 != 0xe) goto LAB_10638d954;
    }
    *(undefined1 *)(param_1 + 200) = 0;
  }
LAB_10638d954:
  func_0x00010be639a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


