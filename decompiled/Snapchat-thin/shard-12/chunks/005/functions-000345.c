/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091de508; end: 1091de567; -[SCAdsCameraLensDataProvider updateLenses:] */

void FUN_1091de508(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar2);
  func_0x00010c2853e0(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 8));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c28d800();
  if (iVar1 != 0) {
    func_0x00010c287380(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091de568; end: 1091de57f; -[SCAdsCameraLensDataProvider clearLenses] */

void FUN_1091de568(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = PTR____NSArray0__struct_11034ab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091de580; end: 1091de62f; -[SCAdsCameraLensDataProvider lensForId:] */

void FUN_1091de580(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110f2bef8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098240(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1091de630; end: 1091de63f; -[SCAdsCameraLensDataProvider updateDownloadableData] */

void FUN_1091de630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2853f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateDownloadableLenses__11267ef20,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1091de640; end: 1091de643; -[SCAdsCameraLensDataProvider setDevicePosition:] */

void FUN_1091de640(void)

{
  return;
}



/* Entry: 1091de644; end: 1091de673; -[SCAdsCameraLensDataProvider applicableContext] */

void FUN_1091de644(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1133c92d0;
  _objc_retain(PTR_PTR_1133c92d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091de674; end: 1091de67b; -[SCAdsCameraLensDataProvider originalLens] */

undefined8 FUN_1091de674(void)

{
  return 0;
}



/* Entry: 1091de67c; end: 1091de683; -[SCAdsCameraLensDataProvider firstApplicableLens] */

undefined8 FUN_1091de67c(void)

{
  return 0;
}



/* Entry: 1091de684; end: 1091de68b; -[SCAdsCameraLensDataProvider addListener:] */

void FUN_1091de684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1091de68c; end: 1091de693; -[SCAdsCameraLensDataProvider removeListener:] */

void FUN_1091de68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1091de694; end: 1091de69b; -[SCAdsCameraLensDataProvider addProgressListener:] */

void FUN_1091de694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addProgressListener__11259c4a8);
  return;
}



/* Entry: 1091de69c; end: 1091de6a3; -[SCAdsCameraLensDataProvider removeProgressListener:] */

void FUN_1091de69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeProgressListener__112629188);
  return;
}



/* Entry: 1091de6a4; end: 1091de6ab; -[SCAdsCameraLensDataProvider addEventsListener:] */

void FUN_1091de6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef8110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addEventsListener__11259b9e8);
  return;
}



/* Entry: 1091de6ac; end: 1091de6b3; -[SCAdsCameraLensDataProvider removeEventsListener:] */

void FUN_1091de6ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeEventsListener__112628aa0);
  return;
}



/* Entry: 1091de6b4; end: 1091de6db; -[SCAdsCameraLensDataProvider selectedLens] */

void FUN_1091de6b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091de6dc; end: 1091de70b; -[SCAdsCameraLensDataProvider setSelectedLens:] */

void FUN_1091de6dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091de70c; end: 1091de70f; -[SCAdsCameraLensDataProvider setStartVisibleIndex:endVisibleIndex:selectedIndex:] */

void FUN_1091de70c(void)

{
  return;
}



/* Entry: 1091de710; end: 1091de717; -[SCAdsCameraLensDataProvider fetchLens:fetchSourceType:] */

void FUN_1091de710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchLens_fetchSourceType__1125c7948);
  return;
}



/* Entry: 1091de718; end: 1091de71f; -[SCAdsCameraLensDataProvider fetchLensesIfNeededWithFetchSourceType:] */

void FUN_1091de718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchLensesIfNeededWithFetchSour_1125c7998);
  return;
}



/* Entry: 1091de720; end: 1091de727; -[SCAdsCameraLensDataProvider prefetchLensesIfNeededWithFetchSourceType:] */

void FUN_1091de720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_prefetchLensesIfNeededWithFetchS_11261f880);
  return;
}



/* Entry: 1091de728; end: 1091de72f; -[SCAdsCameraLensDataProvider lensUIStateListener] */

void FUN_1091de728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0978f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_lensUIStateListener_112603848);
  return;
}



/* Entry: 1091de730; end: 1091de737; -[SCAdsCameraLensDataProvider cancelDownloads] */

void FUN_1091de730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_cancelDownloads_1125a9258);
  return;
}



/* Entry: 1091de738; end: 1091de73f; -[SCAdsCameraLensDataProvider clearCacheWithCompletionBlock:] */

void FUN_1091de738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_clearCacheWithCompletionBlock__1125ac4c8);
  return;
}



/* Entry: 1091de740; end: 1091de747; -[SCAdsCameraLensDataProvider fetchAsset:lens:fetchSourceType:completionPerformer:completion:] */

void FUN_1091de740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchAsset_lens_fetchSourceType__1125c6d68);
  return;
}



/* Entry: 1091de748; end: 1091de74f; -[SCAdsCameraLensDataProvider fetchLenses:fetchSourceType:] */

void FUN_1091de748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchLenses_fetchSourceType__1125c7988);
  return;
}



/* Entry: 1091de750; end: 1091de757; -[SCAdsCameraLensDataProvider fetchLenses:requestTiming:fetchSourceType:] */

void FUN_1091de750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchLenses_requestTiming_fetchS_1125c7990);
  return;
}



/* Entry: 1091de758; end: 1091de75f; -[SCAdsCameraLensDataProvider fetchCachedLenses:fetchSourceType:] */

void FUN_1091de758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa56f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchCachedLenses_fetchSourceTyp_1125c6f60);
  return;
}



/* Entry: 1091de760; end: 1091de767; -[SCAdsCameraLensDataProvider fetchIconsForLenses:requestTiming:fetchSourceType:] */

void FUN_1091de760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa77d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchIconsForLenses_requestTimin_1125c7798);
  return;
}



/* Entry: 1091de768; end: 1091de76f; -[SCAdsCameraLensDataProvider pauseDownloads] */

void FUN_1091de768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_pauseDownloads_11261b160);
  return;
}



/* Entry: 1091de770; end: 1091de777; -[SCAdsCameraLensDataProvider resumeDownloads] */

void FUN_1091de770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_resumeDownloads_11262cf38);
  return;
}



/* Entry: 1091de778; end: 1091de77f; -[SCAdsCameraLensDataProvider isFetchingLens:] */

void FUN_1091de778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isFetchingLens__1125fa580);
  return;
}



/* Entry: 1091de780; end: 1091de787; -[SCAdsCameraLensDataProvider startUpdatingLensData] */

void FUN_1091de780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2515b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_startUpdatingLensData_112671f90);
  return;
}



/* Entry: 1091de788; end: 1091de78f; -[SCAdsCameraLensDataProvider stopUpdatingLensDataWithToken:] */

void FUN_1091de788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_stopUpdatingLensDataWithToken__112673590);
  return;
}



/* Entry: 1091de790; end: 1091de793; -[SCAdsCameraLensDataProvider fetchMoreLensesIfNeeded] */

void FUN_1091de790(void)

{
  return;
}



/* Entry: 1091de794; end: 1091de79b; -[SCAdsCameraLensDataProvider suggestedLoadMoreTriggerDistance] */

undefined8 FUN_1091de794(void)

{
  return 0;
}



/* Entry: 1091de79c; end: 1091de7b3; -[SCAdsCameraLensDataProvider lensDataFetchingMediator:didUpdateContentForLens:contentUpdateType:] */

void FUN_1091de79c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_didUpdateLens_contentUpdateType__1125bd268,
             param_4,param_5,param_1);
  return;
}



/* Entry: 1091de7b4; end: 1091de7b7; -[SCAdsCameraLensDataProvider lensDataFetchingMediatorDidStartUpdatingLensData:] */

void FUN_1091de7b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2853d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateDownloadableData_11267ef18);
  return;
}



/* Entry: 1091de7b8; end: 1091de7bb; -[SCAdsCameraLensDataProvider lensDataFetchingMediatorDidStopUpdatingLensData:] */

void FUN_1091de7b8(void)

{
  return;
}



/* Entry: 1091de7bc; end: 1091de7bf; -[SCAdsCameraLensDataProvider lensDataFetchingMediatorUpdateLenses:] */

void FUN_1091de7bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateLenses_11267f708);
  return;
}



/* Entry: 1091de7c0; end: 1091de7c3; -[SCAdsCameraLensDataProvider setPrefetchMode:] */

void FUN_1091de7c0(void)

{
  return;
}



/* Entry: 1091de7c4; end: 1091de817; -[SCAdsCameraLensDataProvider updateLenses] */

void FUN_1091de7c4(long param_1)

{
  long lVar1;
  
  func_0x00010c28d800(*(undefined8 *)(param_1 + 0x18));
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf7dfa0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bfa6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchDownloadableLensesWithFetch_1125c7340,1);
    return;
  }
  return;
}



/* Entry: 1091de818; end: 1091de81f; -[SCAdsCameraLensDataProvider showBirthdayReplyLens] */

undefined1 FUN_1091de818(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1091de820; end: 1091de827; -[SCAdsCameraLensDataProvider setShowBirthdayReplyLens:] */

void FUN_1091de820(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1091de828; end: 1091de86f; -[SCAdsCameraLensDataProvider .cxx_destruct] */

void FUN_1091de828(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091de870; end: 1091de993; -[SCLensDataProviderCommonFactory initWithLensExplorerStudySettings:bundledLensProvider:lensDataProviderCreator:lensPerformerServices:lensDataConfigProvider:] */

undefined1 *
FUN_1091de870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112700dc0;
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



/* Entry: 1091de994; end: 1091deb67; -[SCLensDataProviderCommonFactory commonLensDataProviderWithConfiguration:metadataStore:] */

void FUN_1091de994(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b1b70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c023f00();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar8);
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1091deb68;
  puStack_68 = &UNK_110966950;
  puStack_60 = puVar1;
  uStack_58 = uVar8;
  _objc_retain(uVar8);
  _objc_retain(puVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ddcf8;
  _objc_alloc(PTR_PTR_1126ddcf8);
  func_0x00010c001ba0();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf55b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c18ccc0(uVar6,param_2,0xffffffffffffffff);
  puVar7 = PTR_PTR_1126ddd20;
  uVar5 = uVar6;
  _objc_opt_class(uVar6);
  func_0x00010bf640e0(puVar7,param_2,uVar6,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(uVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1091deb68; end: 1091deb97;  */

void FUN_1091deb68(void)

{
  _objc_alloc(PTR_PTR_1126b1b78);
  func_0x00010c012240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091deb98; end: 1091debeb; -[SCLensDataProviderCommonFactory .cxx_destruct] */

void FUN_1091deb98(long param_1)

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



/* Entry: 1091debec; end: 1091dec4b; +[SCLensDataProviderConfiguration defaultFeatureConfiguration] */

void FUN_1091debec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_opt_new(PTR_PTR_1126ddce8);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091dec4c; end: 1091dedaf; +[SCLensDataProviderConfiguration configurationForLensesInPreviewWithApplicableContext:] */

void FUN_1091dec4c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bf9ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf9ac20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a120(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92f0);
  if ((uVar4 & 1) == 0) {
    func_0x00010bf9ac40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,param_1);
    _objc_release(param_1);
  }
  puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ddce8;
  _objc_opt_new(PTR_PTR_1126ddce8);
  func_0x00010c2ae1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8640(puVar6,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1091dedb0; end: 1091def17; +[SCLensDataProviderConfiguration configurationForWorldLensesInPreview] */

void FUN_1091dedb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bf9ac00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_60 = uVar1;
  func_0x00010bf9ac40();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uVar2;
  func_0x00010c0e8b80();
  _objc_retainAutoreleasedReturnValue();
  iVar10 = 3;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ddce8;
  _objc_opt_new();
  func_0x00010c2ae1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1133c92c8;
  func_0x00010c2a8640(puVar3,param_2,PTR_PTR_1133c92c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    puVar3 = puVar4;
    if ((param_5 & 1) == 0) {
      func_0x00010c0e8ac0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf9ab00();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar4;
    func_0x00010bf9ab60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a120(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 != 0) {
      puVar5 = puVar4;
      func_0x00010bf9aba0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7,param_2,puVar5);
      _objc_release(puVar5);
    }
    if (iVar10 != 0) {
      func_0x00010bf9ab40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7,param_2,puVar4);
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126ddce8;
    _objc_opt_new(PTR_PTR_1126ddce8);
    func_0x00010c2ae1e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8640(puVar8,param_2,PTR_PTR_1133c92b8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf24d80(puVar9,param_2,&PTR____CFConstantStringClassReference_110def3b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5100(puVar8,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091def18; end: 1091df0fb; +[SCLensDataProviderConfiguration configurationForVideoChatWithBundledLensMetadataProvider:filterConnectedVideoLenses:filter3DBitmojiLenses:excludeExclusiveLenses:] */

void FUN_1091def18(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  ulong param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  if ((param_5 & 1) == 0) {
    func_0x00010c0e8ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf9ab00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010bf9ab60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != 0) {
    uVar4 = param_1;
    func_0x00010bf9aba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,uVar4);
    _objc_release(uVar4);
  }
  if (param_4 != 0) {
    func_0x00010bf9ab40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,param_1);
    _objc_release(param_1);
  }
  puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ddce8;
  _objc_opt_new(PTR_PTR_1126ddce8);
  func_0x00010c2ae1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8640(puVar6,param_2,PTR_PTR_1133c92b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf24d80(param_3,param_2,&PTR____CFConstantStringClassReference_110def3b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5100(puVar6,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1091df0fc; end: 1091df263; +[SCLensDataProviderConfiguration configurationForReplyCameraWithBundledLensMetadataProvider:bitmojiLinked:friendBitmojiLinked:explorerLensDisabled:] */

void FUN_1091df0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2b00(puVar1,param_2,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf24d80(param_3,param_2,&PTR____CFConstantStringClassReference_110e3d018);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2b5100(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2ad860(puVar1,param_2,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((param_4 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010bf9ab20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  if ((param_5 & 1) == 0) {
    func_0x00010bf9abc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_1;
  }
  func_0x00010c2ae1e0(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091df264; end: 1091df41b; +[SCLensDataProviderConfiguration configurationForReplyOnStoryWithBundledLensMetadataProvider:] */

void FUN_1091df264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1133c92e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(PTR_PTR_1133c92e0);
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf9ac00();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = uVar2;
  func_0x00010bf9ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ddce8;
  _objc_opt_new();
  func_0x00010c2ae1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8640(puVar3,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf24d80(param_3,param_2,&PTR____CFConstantStringClassReference_110f777d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar2;
  func_0x00010c2b5100(puVar3,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126ddce8;
    _objc_retain(uVar6);
    _objc_opt_new(puVar4);
    func_0x00010c2a8640();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf24d80(uVar6,param_2,&PTR____CFConstantStringClassReference_110e3d018);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c2b5100(puVar4,param_2,uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091df41c; end: 1091df4d7; +[SCLensDataProviderConfiguration configurationForSceneIntelligenceWithBundledLensMetadataProvider:] */

void FUN_1091df41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf24d80(param_3,param_2,&PTR____CFConstantStringClassReference_110e3d018);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2b5100(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091df4d8; end: 1091df537; +[SCLensDataProviderConfiguration configurationForLiveLensPreview] */

void FUN_1091df4d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_opt_new(PTR_PTR_1126ddce8);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091df538; end: 1091df597; +[SCLensDataProviderConfiguration configurationForLensCollection] */

void FUN_1091df538(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_opt_new(PTR_PTR_1126ddce8);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091df598; end: 1091df5f7; +[SCLensDataProviderConfiguration configurationForInfoCardSimilarLenses] */

void FUN_1091df598(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_opt_new(PTR_PTR_1126ddce8);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091df5f8; end: 1091df6b3; +[SCLensDataProviderConfiguration configurationForLensReplyCameraWithBundledLensMetadataProvider:] */

void FUN_1091df5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf24d80(param_3,param_2,&PTR____CFConstantStringClassReference_110e3d018);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2b5100(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091df6b4; end: 1091df773; +[SCLensDataProviderConfiguration configurationForDirectorModeWithBundledLensMetadataProvider:] */

void FUN_1091df6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bf24d80(param_3,param_2,&PTR____CFConstantStringClassReference_110e3d018);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2b5100(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2a8640(puVar1,param_2,PTR_PTR_1133c9378);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091df774; end: 1091df7d3; +[SCLensDataProviderConfiguration configurationForCameraRollCamera] */

void FUN_1091df774(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_opt_new(PTR_PTR_1126ddce8);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091df7d4; end: 1091df833; +[SCLensDataProviderConfiguration configurationForARBar] */

void FUN_1091df7d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_opt_new(PTR_PTR_1126ddce8);
  func_0x00010c2a8640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091df834; end: 1091df847; +[SCLensDataProviderConfiguration excludeMainCameraExclusiveLensesPredicate] */

void FUN_1091df834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0628);
  return;
}



/* Entry: 1091df848; end: 1091df8b3;  */

uint FUN_1091df848(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = param_2, func_0x00010c07f200(), (uVar2 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c070700(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091df8b4; end: 1091df8c7; +[SCLensDataProviderConfiguration excludeExclusiveLensesPredicate] */

void FUN_1091df8b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0648);
  return;
}



/* Entry: 1091df8c8; end: 1091df927;  */

uint FUN_1091df8c8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c07eda0(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091df928; end: 1091df93b; +[SCLensDataProviderConfiguration excludeDemoLensesPredicate] */

void FUN_1091df928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0668);
  return;
}



/* Entry: 1091df93c; end: 1091df99b;  */

uint FUN_1091df93c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c070700(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091df99c; end: 1091df9af; +[SCLensDataProviderConfiguration excludeLiveCameraLensesPredicate] */

void FUN_1091df99c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0688);
  return;
}



/* Entry: 1091df9b0; end: 1091dfa3b;  */

uint FUN_1091df9b0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf07540(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b900();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1091dfa3c; end: 1091dfa4f; +[SCLensDataProviderConfiguration excludeStudioLensesPredicate] */

void FUN_1091dfa3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae06a8);
  return;
}



/* Entry: 1091dfa50; end: 1091dfaaf;  */

uint FUN_1091dfa50(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c080040(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091dfab0; end: 1091dfac3; +[SCLensDataProviderConfiguration excludeBitmojiPredicate] */

void FUN_1091dfab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae06c8);
  return;
}



/* Entry: 1091dfac4; end: 1091dfb23;  */

uint FUN_1091dfac4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c137760(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091dfb24; end: 1091dfb37; +[SCLensDataProviderConfiguration excludeFriendmojiPredicate] */

void FUN_1091dfb24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae06e8);
  return;
}



/* Entry: 1091dfb38; end: 1091dfb97;  */

uint FUN_1091dfb38(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c1377c0(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091dfb98; end: 1091dfbab; +[SCLensDataProviderConfiguration excludeConnectedLensPredicate] */

void FUN_1091dfb98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0708);
  return;
}



/* Entry: 1091dfbac; end: 1091dfc0b;  */

uint FUN_1091dfbac(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c06f040(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091dfc0c; end: 1091dfc1f; +[SCLensDataProviderConfiguration exclude3DBitmojiLensesPredicate] */

void FUN_1091dfc0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0728);
  return;
}



/* Entry: 1091dfc20; end: 1091dfc7f;  */

uint FUN_1091dfc20(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c06b200(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091dfc80; end: 1091dfc93; +[SCLensDataProviderConfiguration only3DBitmojiLensesForVideoChatPredicate] */

void FUN_1091dfc80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0748);
  return;
}



/* Entry: 1091dfc94; end: 1091dfd07;  */

ulong FUN_1091dfc94(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c06b200();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_2;
      func_0x00010c083200(param_2);
    }
    else {
      uVar2 = 1;
    }
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1091dfd08; end: 1091dfd1b; +[SCLensDataProviderConfiguration excludePreviewWorldLensesPredicate] */

void FUN_1091dfd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0768);
  return;
}



/* Entry: 1091dfd1c; end: 1091dfd7b;  */

uint FUN_1091dfd1c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c083d80(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091dfd7c; end: 1091dfd8f; +[SCLensDataProviderConfiguration onlyPreviewWorldLensesPredicate] */

void FUN_1091dfd7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_110ae0788);
  return;
}



/* Entry: 1091dfd90; end: 1091dfdef;  */

ulong FUN_1091dfd90(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c083d80(param_2);
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1091dfdf0; end: 1091dfea7; +[SCLensDataProviderConfiguration onlyLensesSuitableForMemories] */

void FUN_1091dfdf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  func_0x00010c0309a0();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1091dfea8;
  puStack_30 = &UNK_110ae0418;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010c1063a0(puVar2,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091dfea8; end: 1091dff2f;  */

ulong FUN_1091dfea8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf07540(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c069880();
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1091dff30; end: 1091dff4b; +[SCLensDataProviderConfiguration excludeBloopsPredicate] */

void FUN_1091dff30(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091dff4c; end: 1091dfff3; -[SCLensDataProviderFactory .cxx_destruct] */

void FUN_1091dff4c(long param_1)

{
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



/* Entry: 1091dfff4; end: 1091e00cf;  */

void FUN_1091dfff4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = uVar5;
  func_0x00010be49be0(uVar5,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9ce0(uVar5,param_2,uVar4,puVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puVar2 = PTR_PTR_1126ddc88;
  func_0x00010c22ba80(PTR_PTR_1126ddc88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9ce0(uVar4,param_2,puVar2,puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ddcf0;
  _objc_alloc(PTR_PTR_1126ddcf0);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c02ba20(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091e00d0; end: 1091e0233; +[SCLensDataProviderV2AllStoresMockableDependencyProvider _mockedUnlockableLensMetadataStoreWithUnlockableServices:announcerPerformer:lensPerformerProvider:] */

void FUN_1091e00d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ddd08;
  _objc_alloc(PTR_PTR_1126ddd08);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1091e01c0;
  puStack_50 = &UNK_1108669a0;
  _objc_retain(param_3);
  uStack_48 = param_3;
  _objc_retain(param_4);
  uStack_40 = param_4;
  _objc_retain(param_5);
  uStack_38 = param_5;
  func_0x00010c01dea0(puVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091e0234; end: 1091e02b7; -[SCLensDataProviderAutoInvalidatingProxy initWithTarget:targetClass:] */

undefined1 *
FUN_1091e0234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700de0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091e02b8; end: 1091e031b; +[SCLensDataProviderAutoInvalidatingProxy dataProviderAutoInvalidatingProxyWithTarget:targetClass:] */

void FUN_1091e02b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010c050b00();
    _objc_release(param_3);
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e031c; end: 1091e0343; -[SCLensDataProviderAutoInvalidatingProxy forwardingTargetForSelector:] */

void FUN_1091e031c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e0344; end: 1091e0397; -[SCLensDataProviderAutoInvalidatingProxy methodSignatureForSelector:] */

void FUN_1091e0344(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113732918 != -1) {
    func_0x000107c27d9c(0x113732918,&PTR___NSConcreteGlobalBlock_110ae0898);
  }
  uVar1 = uRam0000000113732920;
  _objc_retain(uRam0000000113732920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e0398; end: 1091e03a7; -[SCLensDataProviderAutoInvalidatingProxy forwardInvocation:] */

void FUN_1091e0398(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_invokeWithTarget__1125f85a0,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1091e03a8; end: 1091e0417; -[SCLensDataProviderAutoInvalidatingProxy isKindOfClass:] */

uint FUN_1091e03a8(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    uVar1 = (uint)(lVar2 != 0);
    if (lVar2 != param_3 && lVar2 != 0) {
      do {
        func_0x00010c262c40();
        uVar1 = (uint)(lVar2 != 0);
        if (lVar2 == param_3) break;
      } while (lVar2 != 0);
    }
  }
  else {
    _objc_opt_isKindOfClass(lVar2,param_3);
    uVar1 = (uint)lVar2;
  }
  return uVar1 & 1;
}



/* Entry: 1091e0418; end: 1091e0427; -[SCLensDataProviderAutoInvalidatingProxy isMemberOfClass:] */

bool FUN_1091e0418(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + 0x10);
}



/* Entry: 1091e0428; end: 1091e044f; -[SCLensDataProviderAutoInvalidatingProxy class] */

void FUN_1091e0428(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


