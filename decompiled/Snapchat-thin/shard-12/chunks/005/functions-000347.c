/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091e29f4; end: 1091e2a73; -[SCSingleLensCameraLensDataProvider initWithLensFuture:placeholderLens:dataFetcher:applicableContext:lensDataConfig:] */

long FUN_1091e29f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  func_0x00010c022760(param_1,param_2,param_4,param_5,param_6,param_7);
  if (param_1 != 0) {
    func_0x00010be66480(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1091e2a74; end: 1091e2a7b; -[SCSingleLensCameraLensDataProvider addListener:] */

void FUN_1091e2a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1091e2a7c; end: 1091e2a83; -[SCSingleLensCameraLensDataProvider removeListener:] */

void FUN_1091e2a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1091e2a84; end: 1091e2a8b; -[SCSingleLensCameraLensDataProvider addProgressListener:] */

void FUN_1091e2a84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addProgressListener__11259c4a8);
  return;
}



/* Entry: 1091e2a8c; end: 1091e2a93; -[SCSingleLensCameraLensDataProvider removeProgressListener:] */

void FUN_1091e2a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeProgressListener__112629188);
  return;
}



/* Entry: 1091e2a94; end: 1091e2a9b; -[SCSingleLensCameraLensDataProvider addEventsListener:] */

void FUN_1091e2a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef8110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addEventsListener__11259b9e8);
  return;
}



/* Entry: 1091e2a9c; end: 1091e2aa3; -[SCSingleLensCameraLensDataProvider removeEventsListener:] */

void FUN_1091e2a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeEventsListener__112628aa0);
  return;
}



/* Entry: 1091e2aa4; end: 1091e2b63; -[SCSingleLensCameraLensDataProvider fetchLens:fetchSourceType:] */

void FUN_1091e2aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfa7f80(param_1,param_2,puVar1,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1091e2b64; end: 1091e2b67; -[SCSingleLensCameraLensDataProvider fetchLensesIfNeededWithFetchSourceType:] */

void FUN_1091e2b64(void)

{
  return;
}



/* Entry: 1091e2b68; end: 1091e2b6b; -[SCSingleLensCameraLensDataProvider prefetchLensesIfNeededWithFetchSourceType:] */

void FUN_1091e2b68(void)

{
  return;
}



/* Entry: 1091e2b6c; end: 1091e2b87; -[SCSingleLensCameraLensDataProvider isFetchingLens:] */

byte FUN_1091e2b6c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x11);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 1091e2b88; end: 1091e2b8f; -[SCSingleLensCameraLensDataProvider clearCacheWithCompletionBlock:] */

void FUN_1091e2b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearCacheWithCompletionBlock__1125ac4c8);
  return;
}



/* Entry: 1091e2b90; end: 1091e2b97; -[SCSingleLensCameraLensDataProvider fetchAsset:lens:fetchSourceType:completionPerformer:completion:] */

void FUN_1091e2b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchAsset_lens_fetchSourceType__1125c6d68);
  return;
}



/* Entry: 1091e2b98; end: 1091e2b9f; -[SCSingleLensCameraLensDataProvider fetchLenses:fetchSourceType:] */

void FUN_1091e2b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchLenses_fetchSourceType__1125c7988);
  return;
}



/* Entry: 1091e2ba0; end: 1091e2ba7; -[SCSingleLensCameraLensDataProvider fetchLenses:requestTiming:fetchSourceType:] */

void FUN_1091e2ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchLenses_requestTiming_fetchS_1125c7990);
  return;
}



/* Entry: 1091e2ba8; end: 1091e2baf; -[SCSingleLensCameraLensDataProvider fetchCachedLenses:fetchSourceType:] */

void FUN_1091e2ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa56f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchCachedLenses_fetchSourceTyp_1125c6f60);
  return;
}



/* Entry: 1091e2bb0; end: 1091e2bb7; -[SCSingleLensCameraLensDataProvider fetchIconsForLenses:requestTiming:fetchSourceType:] */

void FUN_1091e2bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa77d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchIconsForLenses_requestTimin_1125c7798);
  return;
}



/* Entry: 1091e2bb8; end: 1091e2bbf; -[SCSingleLensCameraLensDataProvider cancelDownloads] */

void FUN_1091e2bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelDownloads_1125a9258);
  return;
}



/* Entry: 1091e2bc0; end: 1091e2bc7; -[SCSingleLensCameraLensDataProvider pauseDownloads] */

void FUN_1091e2bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pauseDownloads_11261b160);
  return;
}



/* Entry: 1091e2bc8; end: 1091e2bcf; -[SCSingleLensCameraLensDataProvider resumeDownloads] */

void FUN_1091e2bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resumeDownloads_11262cf38);
  return;
}



/* Entry: 1091e2bd0; end: 1091e2bd3; -[SCSingleLensCameraLensDataProvider fetchMoreLensesIfNeeded] */

void FUN_1091e2bd0(void)

{
  return;
}



/* Entry: 1091e2bd4; end: 1091e2bdb; -[SCSingleLensCameraLensDataProvider suggestedLoadMoreTriggerDistance] */

undefined8 FUN_1091e2bd4(void)

{
  return 0;
}



/* Entry: 1091e2bdc; end: 1091e2bdf; -[SCSingleLensCameraLensDataProvider warmUp] */

void FUN_1091e2bdc(void)

{
  return;
}



/* Entry: 1091e2be0; end: 1091e2c33; -[SCSingleLensCameraLensDataProvider startUpdatingLensData] */

void FUN_1091e2be0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = param_1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dfa0(uVar4,param_2,lVar3,0,param_1);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091e2c34; end: 1091e2c37; -[SCSingleLensCameraLensDataProvider stopUpdatingLensDataWithToken:] */

void FUN_1091e2c34(void)

{
  return;
}



/* Entry: 1091e2c38; end: 1091e2caf; -[SCSingleLensCameraLensDataProvider lenses] */

void FUN_1091e2c38(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_20;
  long lStack_18;
  
  plVar3 = &lStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_20 = *(long *)(param_1 + 8);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)plVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(puVar1 + 8);
    _objc_retain(param_3);
    func_0x00010c094540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,uVar4);
    _objc_release(param_3);
    _objc_release(uVar4);
    if ((int)puVar2 != 0) {
      _objc_retain(*(undefined8 *)(puVar1 + 8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091e2cb0; end: 1091e2d33; -[SCSingleLensCameraLensDataProvider lensForId:] */

void FUN_1091e2cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e2d34; end: 1091e2d5b; -[SCSingleLensCameraLensDataProvider applicableContext] */

void FUN_1091e2d34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e2d5c; end: 1091e2d63; -[SCSingleLensCameraLensDataProvider selectedLens] */

undefined8 FUN_1091e2d5c(void)

{
  return 0;
}



/* Entry: 1091e2d64; end: 1091e2d8b; -[SCSingleLensCameraLensDataProvider originalLens] */

void FUN_1091e2d64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e2d8c; end: 1091e2d8f; -[SCSingleLensCameraLensDataProvider firstApplicableLens] */

void FUN_1091e2d8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ed610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_originalLens_112618f98);
  return;
}



/* Entry: 1091e2d90; end: 1091e2d93; -[SCSingleLensCameraLensDataProvider setSelectedLens:] */

void FUN_1091e2d90(void)

{
  return;
}



/* Entry: 1091e2d94; end: 1091e2d97; -[SCSingleLensCameraLensDataProvider setDevicePosition:] */

void FUN_1091e2d94(void)

{
  return;
}



/* Entry: 1091e2d98; end: 1091e2d9b; -[SCSingleLensCameraLensDataProvider setStartVisibleIndex:endVisibleIndex:selectedIndex:] */

void FUN_1091e2d98(void)

{
  return;
}



/* Entry: 1091e2d9c; end: 1091e2da3; -[SCSingleLensCameraLensDataProvider lensUIStateListener] */

void FUN_1091e2d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0978f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lensUIStateListener_112603848);
  return;
}



/* Entry: 1091e2da4; end: 1091e2da7; -[SCSingleLensCameraLensDataProvider willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

void FUN_1091e2da4(void)

{
  return;
}



/* Entry: 1091e2da8; end: 1091e2ecb; -[SCSingleLensCameraLensDataProvider willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_1091e2da8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  if (param_3 == uVar1) {
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  else {
    if (uVar1 == 0) {
      _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    uVar2 = param_3;
    func_0x00010c071ae0();
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091e2ecc;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  return;
}



/* Entry: 1091e2ecc; end: 1091e2edb;  */

void FUN_1091e2ecc(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 1;
  return;
}



/* Entry: 1091e2edc; end: 1091e301f; -[SCSingleLensCameraLensDataProvider didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_1091e2edc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_1091e2fa0:
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1091e3020;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_70);
    uVar1 = uStack_48;
  }
  else {
    if (uVar2 != 0) {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) goto LAB_1091e3000;
      goto LAB_1091e2fa0;
    }
    _objc_release();
  }
  _objc_release(uVar1);
LAB_1091e3000:
  _objc_release(param_3);
  return;
}



/* Entry: 1091e3020; end: 1091e3037;  */

void FUN_1091e3020(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf7e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_didUpdateLens_contentUpdateType__1125bd268,*(undefined8 *)(param_1 + 0x28),2);
  return;
}



/* Entry: 1091e3038; end: 1091e315b; -[SCSingleLensCameraLensDataProvider willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_1091e3038(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  if (param_3 == uVar1) {
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  else {
    if (uVar1 == 0) {
      _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    uVar2 = param_3;
    func_0x00010c071ae0();
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091e315c;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  return;
}



/* Entry: 1091e315c; end: 1091e316b;  */

void FUN_1091e315c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x11) = 1;
  return;
}



/* Entry: 1091e316c; end: 1091e32af; -[SCSingleLensCameraLensDataProvider didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_1091e316c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_1091e3230:
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1091e32b0;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_70);
    uVar1 = uStack_48;
  }
  else {
    if (uVar2 != 0) {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) goto LAB_1091e3290;
      goto LAB_1091e3230;
    }
    _objc_release();
  }
  _objc_release(uVar1);
LAB_1091e3290:
  _objc_release(param_3);
  return;
}



/* Entry: 1091e32b0; end: 1091e32c7;  */

void FUN_1091e32b0(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x11) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf7e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_didUpdateLens_contentUpdateType__1125bd268,*(undefined8 *)(param_1 + 0x28),1);
  return;
}



/* Entry: 1091e32c8; end: 1091e32cb; -[SCSingleLensCameraLensDataProvider willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

void FUN_1091e32c8(void)

{
  return;
}



/* Entry: 1091e32cc; end: 1091e32cf; -[SCSingleLensCameraLensDataProvider didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

void FUN_1091e32cc(void)

{
  return;
}



/* Entry: 1091e32d0; end: 1091e32d3; -[SCSingleLensCameraLensDataProvider didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

void FUN_1091e32d0(void)

{
  return;
}



/* Entry: 1091e32d4; end: 1091e32d7; -[SCSingleLensCameraLensDataProvider willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

void FUN_1091e32d4(void)

{
  return;
}



/* Entry: 1091e32d8; end: 1091e32db; -[SCSingleLensCameraLensDataProvider setPrefetchMode:] */

void FUN_1091e32d8(void)

{
  return;
}



/* Entry: 1091e32dc; end: 1091e33bb; -[SCSingleLensCameraLensDataProvider updateLens:] */

void FUN_1091e32dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    *(undefined2 *)(param_1 + 0x10) = 0;
    unaff_x21 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = *(undefined8 *)(param_1 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dfa0(unaff_x21);
    _objc_release(unaff_x22);
    lVar4 = param_3;
    func_0x00010bfa7e80(param_1);
  }
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1091e33bc;
  puStack_70 = unaff_x22;
  uStack_68 = unaff_x21;
  lStack_60 = param_1;
  lStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(lVar4);
  _objc_initWeak(auStack_78,lVar2);
  puVar3 = auStack_80;
  _objc_copyWeak(puVar3,auStack_78);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar4);
  return;
}



/* Entry: 1091e33bc; end: 1091e3497; -[SCSingleLensCameraLensDataProvider _observeLensFuture:] */

void FUN_1091e33bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = auStack_40;
  _objc_copyWeak(puVar1,auStack_38);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1091e3498; end: 1091e34f7;  */

void FUN_1091e3498(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x00010c2870c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e34f8; end: 1091e34ff; -[SCSingleLensCameraLensDataProvider showBirthdayReplyLens] */

undefined1 FUN_1091e34f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 1091e3500; end: 1091e3507; -[SCSingleLensCameraLensDataProvider setShowBirthdayReplyLens:] */

void FUN_1091e3500(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1091e3508; end: 1091e354f; -[SCSingleLensCameraLensDataProvider .cxx_destruct] */

void FUN_1091e3508(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091e3550; end: 1091e37b3; -[SCGenericLensDataProviderSortStrategy executeWithLenses:cameraPosition:parameters:] */

void FUN_1091e3550(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c0ed600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c159a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar3 = param_3;
  func_0x00010bf529e0(param_3);
  uVar9 = (ulong)(lVar2 != 0);
  if (lVar1 != 0) {
    uVar9 = uVar9 + 1;
  }
  func_0x00010bf0a0e0(puVar4,param_2,uVar9 + lVar3);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar2 != lVar1)) {
    func_0x00010bef9740(PTR_PTR_1126ddd78,param_2,lVar2,puVar4,param_3);
  }
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010befa160(puVar4,param_2,param_3);
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110f2bf58);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfaea40(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c0d3c80();
    _objc_release(puVar6);
    func_0x00010c12d500(puVar4,param_2,puVar10);
    func_0x00010c246a60(PTR_PTR_1126ddd78,param_2,puVar4,param_4);
    func_0x00010c246a60(PTR_PTR_1126ddd78,param_2,puVar10,param_4);
    _objc_release(puVar5);
  }
  if (lVar1 != 0) {
    func_0x00010c066b00(puVar4,param_2,lVar1,0);
  }
  puVar5 = puVar10;
  func_0x00010bf529e0();
  puVar6 = puVar4;
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar10;
    func_0x00010c140180(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  puVar4 = PTR_PTR_1126ddca0;
  _objc_alloc(PTR_PTR_1126ddca0);
  puVar5 = puVar6;
  func_0x00010bf51e00(puVar6);
  func_0x00010c025d20(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091e37b4; end: 1091e386f; -[SCLensCameraRollCameraSortStrategy initWithFeatureStateProvider:bundledLensProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1091e37b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112700df8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127832bc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127832c0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091e3870; end: 1091e3a87; -[SCLensCameraRollCameraSortStrategy executeWithLenses:cameraPosition:parameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e3870(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_112700df8;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_executeWithLenses_cameraPosition_1125c45e8,param_3,param_4,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + _DAT_1127832bc);
  uVar2 = param_5;
  func_0x00010bf07500(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093d20();
  _objc_release(uVar2);
  puVar5 = (undefined *)plVar1;
  if (((lVar9 != 0) && (lVar9 = param_3, func_0x00010bf529e0(), lVar9 != 0)) &&
     (uVar2 = param_5, func_0x00010c23e140(), (uVar2 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127832c0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf24d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2a7480();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = (undefined *)plVar1;
    func_0x00010c098240(plVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    func_0x00010bef9740(PTR_PTR_1126ddd78);
    puVar5 = PTR_PTR_1126ddca0;
    _objc_alloc(PTR_PTR_1126ddca0);
    puVar8 = puVar6;
    func_0x00010bf51e00(puVar6);
    func_0x00010c025d20(puVar5);
    _objc_release(plVar1);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091e3a88; end: 1091e3ac7; -[SCLensCameraRollCameraSortStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e3a88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127832bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127832c0,0);
  return;
}



/* Entry: 1091e3ac8; end: 1091e3b6f; -[SCLensInsertionSortStrategy initWithBaseSortStartegy:insertedLensProvider:] */

undefined1 *
FUN_1091e3ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700e00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091e3b70; end: 1091e3c3b; -[SCLensInsertionSortStrategy executeWithLenses:cameraPosition:parameters:] */

void FUN_1091e3b70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  pcVar3 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_3);
  (*pcVar3)();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    param_1 = *(long *)(param_1 + 8);
    func_0x00010bf9b100(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be799c0(param_1,param_2,param_3,lVar2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091e3c3c; end: 1091e3cff; -[SCLensInsertionSortStrategy _prependSortWithLenses:insertedLenses:cameraPosition:parameters:] */

void FUN_1091e3c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be5cbc0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdc9480(param_1,param_2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9b100(uVar3,param_2,lVar2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1091e3d00; end: 1091e3ea7; -[SCLensInsertionSortStrategy _adjustPositionsWithLenses:injectedIds:] */

void FUN_1091e3d00(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    _objc_retain(param_3);
    uVar6 = param_3;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0d3c80();
    uVar6 = uVar2;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar3 = uVar2;
        func_0x00010c0dfd40(uVar2,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c076320();
        if ((uVar4 & 1) == 0) {
          uVar4 = uVar3;
          func_0x00010c094540(uVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_4;
          func_0x00010bf4b900(param_4,param_2,uVar4);
          _objc_release(uVar4);
          if ((int)lVar1 == 0) {
            lVar1 = param_4;
            func_0x00010bf529e0(param_4);
            uVar4 = param_1;
            func_0x00010bedaaa0(param_1,param_2,uVar3,lVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d04c0(uVar2,param_2,uVar4,uVar6);
          }
          else {
            uVar4 = uVar3;
            func_0x00010c094540(uVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar1 = param_4;
            func_0x00010bfecde0(param_4,param_2,uVar4);
            uVar5 = param_1;
            func_0x00010bedaa80(param_1,param_2,uVar3,lVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d04c0(uVar2,param_2,uVar5,uVar6);
            _objc_release(uVar5);
          }
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
        uVar3 = uVar2;
        func_0x00010bf529e0();
      } while (uVar6 < uVar3);
    }
    uVar6 = uVar2;
    func_0x00010bf51e00(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1091e3ea8; end: 1091e3ec3; -[SCLensInsertionSortStrategy _mapLensesToIds:] */

void FUN_1091e3ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ba1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_mapToOrderedSet_notFoundMarker__11260c290,
             &PTR___NSConcreteGlobalBlock_110ae09c8,0);
  return;
}



/* Entry: 1091e3ec4; end: 1091e3f27; -[SCLensInsertionSortStrategy _updateLens:absolutePosition:] */

void FUN_1091e3ec4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0820;
  func_0x00010c094120(PTR_PTR_1126b0820);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7480();
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



/* Entry: 1091e3f28; end: 1091e3fdf; -[SCLensInsertionSortStrategy _updateLens:absolutePositionOffset:] */

void FUN_1091e3f28(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010beec6c0();
  if ((long)puVar1 < 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010beec6c0();
    if (-1 < (long)puVar1) {
      puVar1 = param_3;
      func_0x00010beec6c0(param_3);
      func_0x00010c2a7480(puVar2,param_2,puVar1 + param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar1 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091e3fe0; end: 1091e400f; -[SCLensInsertionSortStrategy .cxx_destruct] */

void FUN_1091e3fe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091e4010; end: 1091e4057; -[SCLensModularReplyCameraSortStrategy initWithShouldDefineLensSides:] */

void FUN_1091e4010(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700e08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1091e4058; end: 1091e4167; -[SCLensModularReplyCameraSortStrategy executeWithLenses:cameraPosition:parameters:] */

void FUN_1091e4058(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar2 = param_5;
  func_0x00010c0ed600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  puVar1 = puVar3;
  if (*(char *)(param_1 + 8) == '\0') {
    puVar1 = PTR____NSArray0__struct_11034ab48;
  }
  _objc_retain(puVar1);
  if (lVar2 != 0) {
    func_0x00010c066b00(puVar3,param_2,lVar2,0);
  }
  puVar4 = PTR_PTR_1126ddca0;
  _objc_alloc(PTR_PTR_1126ddca0);
  lVar5 = param_5;
  func_0x00010c159a40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c025d80(puVar4,param_2,puVar3,PTR____NSArray0__struct_11034ab48,puVar1,lVar5,0);
  _objc_release(lVar5);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091e4168; end: 1091e41b3; -[SCLensNullSortStrategy executeWithLenses:cameraPosition:parameters:] */

void FUN_1091e4168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ddca0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c025d20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091e41b4; end: 1091e41b7; -[SCLensUnlockableDataProvider lensUIStateListener] */

void FUN_1091e41b4(void)

{
  return;
}



/* Entry: 1091e41b8; end: 1091e420f; -[SCLensUnlockableDataProvider willShowLensesWithContext:] */

void FUN_1091e41b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0924a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6ba0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e4210; end: 1091e4267; -[SCLensUnlockableDataProvider didHideLensesWithContext:] */

void FUN_1091e4210(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0924a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77380();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e4268; end: 1091e4393; -[SCLensUnlockableDataProvider didUpdateActiveLensOrder:withContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e4268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7df60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127832d8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1091e4394; end: 1091e43e7;  */

void FUN_1091e4394(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c25bde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7df40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e43e8; end: 1091e4513; -[SCLensUnlockableDataProvider didActivateLens:withContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e43e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72240();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127832d8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1091e4514; end: 1091e4567;  */

void FUN_1091e4514(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c25bde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7ab60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e4568; end: 1091e45df; -[SCLensUnlockableDataProvider didSelectLens:withContext:] */

void FUN_1091e4568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7ab80();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e45e0; end: 1091e4657; -[SCLensUnlockableDataProvider willDisplayLens:withContext:] */

void FUN_1091e45e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6160();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e4658; end: 1091e46cf; -[SCLensUnlockableDataProvider didUpdateDisplayedLens:withContext:] */

void FUN_1091e4658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e180();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e46d0; end: 1091e4747; -[SCLensUnlockableDataProvider didEndDisplayingLens:withContext:] */

void FUN_1091e46d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75920();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e4748; end: 1091e47e7; -[SCLensUnlockableDataProvider didDrawIcon:forLens:atIndex:withContext:] */

void FUN_1091e4748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0978e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75580();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e47e8; end: 1091e488b; -[SCLensUnlockableDataProvider lensUnlockableStrategy:didAddLens:] */

void FUN_1091e47e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091e488c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091e488c; end: 1091e48c7;  */

void FUN_1091e488c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0924c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e48c8; end: 1091e4993; -[SCLensUnlockableDataProvider lensUnlockableStrategy:didRemoveLens:withError:] */

void FUN_1091e48c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1091e4994;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1091e4994; end: 1091e49d3;  */

void FUN_1091e4994(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c092500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e49d4; end: 1091e4a77; -[SCLensUnlockableDataProvider lensUnlockableStrategy:didRemoveAllLensesWithError:] */

void FUN_1091e49d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091e4a78;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091e4a78; end: 1091e4ab3;  */

void FUN_1091e4a78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0924e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e4ab4; end: 1091e4b07; -[SCLensUnlockableDataProvider forwardInvocation:] */

void FUN_1091e4ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ae40(param_3,param_2,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e4b08; end: 1091e4b53; -[SCLensUnlockableDataProvider methodSignatureForSelector:] */

void FUN_1091e4b08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0924a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cca80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e4b54; end: 1091e4b73; -[SCLensUnlockableDataProvider delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e4b54(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127832dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091e4b74; end: 1091e4bcf; -[SCLensUnlockableDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e4b74(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127832dc);
  _objc_storeStrong(param_1 + _DAT_1127832d8,0);
  _objc_storeStrong(param_1 + _DAT_1127832d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127832d0,0);
  return;
}



/* Entry: 1091e4bd0; end: 1091e4c73; -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithConfiguration:lenses:prefetchCapacity:delegate:] */

void FUN_1091e4bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c097aa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097a00(param_1,param_2,param_3,uVar1,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091e4c74; end: 1091e4da3; -[SCLensUnlockableDataProviderFactory lensUnlockableMetadaStoreForLenses:] */

void FUN_1091e4c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1091e4d38;
  puStack_48 = &UNK_110ae09e8;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e4da4; end: 1091e4f7b; -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithConfiguration:lensMetadataStore:prefetchCapacity:delegate:] */

void FUN_1091e4da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126dda30;
  uVar1 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdecac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126dda30;
  func_0x00010bdf42c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_6);
  puVar4 = PTR_PTR_1126ae720;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091e4f7c; end: 1091e4fd3;  */

void FUN_1091e4f7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ddd80;
  _objc_alloc(PTR_PTR_1126ddd80);
  func_0x00010c0239a0();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091e4fd4; end: 1091e505f; +[SCLensUnlockableDataProviderFactory _createLensMetadataStoreWithLensesObservable:lensCarouselStudySettings:centralizedDataStore:] */

void FUN_1091e4fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ddcc0;
  func_0x00010bf27320(PTR_PTR_1126ddcc0,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ddc98;
  _objc_alloc(PTR_PTR_1126ddc98);
  puVar3 = PTR_PTR_1126dda30;
  func_0x00010bdf1260(PTR_PTR_1126dda30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025f40(puVar2,param_2,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091e5060; end: 1091e5443; +[SCLensUnlockableDataProviderFactory _createDataProviderWithConfiguration:lensMetadataStore:lensDataFetcherFactory:lensRemovalManager:circumstanceEngine:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:bundledLensProvider:networkConnectivityMonitor:networkBandwidthEstimator:lensContentCacheProvider:adaptiveLensFetcherFactory:] */

void FUN_1091e5060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  puVar2 = PTR_PTR_1126ddd88;
  _objc_retain(param_7);
  _objc_alloc();
  puVar3 = PTR_PTR_1126dda30;
  func_0x00010bdf1260(PTR_PTR_1126dda30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034960(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126ddd90;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126ae720;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1091e5444;
  puStack_98 = &UNK_110ae0a48;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_retain(puVar4);
  puStack_88 = puVar4;
  _objc_retain(puVar2);
  puStack_80 = puVar2;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf07500();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  ppuVar1 = &PTR_PTR_1126ddcc8;
  if ((int)uVar6 == 0) {
    ppuVar1 = &PTR_PTR_1126ddd98;
  }
  puVar7 = *ppuVar1;
  _objc_opt_new();
  puVar8 = PTR_PTR_1126ddd28;
  _objc_alloc();
  func_0x00010bffe1e0();
  _objc_release(param_7);
  puVar9 = PTR_PTR_1126ddd30;
  _objc_alloc();
  func_0x00010bff5880();
  puVar10 = PTR_PTR_1126ae720;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1091e5494;
  puStack_110 = &UNK_110ae0a78;
  uStack_108 = in_stack_00000030;
  uStack_c8 = param_9;
  uStack_c0 = param_10;
  uStack_b8 = in_stack_00000028;
  puStack_100 = puVar3;
  uStack_f8 = param_4;
  puStack_f0 = puVar7;
  uStack_e8 = param_6;
  puStack_e0 = puVar9;
  uStack_d8 = param_3;
  uStack_d0 = param_8;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(puVar9);
  _objc_retain(param_6);
  _objc_retain(puVar7);
  _objc_retain(param_4);
  _objc_retain(puVar3);
  _objc_retain(in_stack_00000030);
  func_0x00010bf11fe0(puVar10,param_2,&puStack_128);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(puStack_e0);
  _objc_release(uStack_e8);
  _objc_release(puStack_f0);
  _objc_release(uStack_f8);
  _objc_release(puStack_100);
  _objc_release(uStack_108);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puStack_80);
  _objc_release(puStack_88);
  _objc_release(uStack_90);
  _objc_release(in_stack_00000028);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(in_stack_00000030);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1091e5444; end: 1091e5493;  */

void FUN_1091e5444(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091e5494; end: 1091e55d7;  */

void FUN_1091e5494(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = 0;
  uVar5 = uVar4;
  func_0x00010bf54720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uStack_58;
  _objc_retain(uStack_58);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1091e55d8;
  puStack_68 = &UNK_110ae07a8;
  uStack_60 = uVar5;
  _objc_retain(uVar5);
  func_0x00010c0e33e0(uVar4,param_2,&puStack_80);
  puVar6 = PTR_PTR_1126ddd40;
  _objc_alloc(PTR_PTR_1126ddd40);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023700(puVar6,param_2,uVar4,uVar5,uVar2,uVar1,uVar7,*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar7);
  _objc_release(uStack_60);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


