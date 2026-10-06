/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054578b0; end: 1054578f7;  */

undefined8 FUN_1054578b0(long param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined8 *)(&UNK_10ddaf218 + (param_1 - 1U) * 8);
  }
  return 6;
}



/* Entry: 1054578f8; end: 105457977; -[SCAdCreativeViewingHistoryTracker init] */

undefined1 * FUN_1054578f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8518;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105457978; end: 105457b7f; -[SCAdCreativeViewingHistoryTracker trackLastViewedAd:] */

void FUN_105457978(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar1 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5ac40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,puVar5,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar5);
  }
  lVar1 = param_3;
  func_0x00010bef1b20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    func_0x00010bef1b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,puVar5,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar5);
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105457b80; end: 105457caf; -[SCAdCreativeViewingHistoryTracker creativeIdLastViewedTimestamp:] */

void FUN_105457b80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5ac40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105457cb0; end: 105457daf; -[SCAdCreativeViewingHistoryTracker adAccountIdLastViewedTimestamp:] */

void FUN_105457cb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef1b20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    func_0x00010bef1b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105457db0; end: 105457ddf; -[SCAdCreativeViewingHistoryTracker .cxx_destruct] */

void FUN_105457db0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105457de0; end: 105457e43; -[SCAdLensCarouselInteractionHistoryTracker init] */

undefined1 * FUN_105457de0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8520;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105457e44; end: 105457f07; -[SCAdLensCarouselInteractionHistoryTracker adShow:snapIndex:] */

void FUN_105457e44(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0dff20(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b9298;
      _objc_alloc(PTR_PTR_1126b9298);
      func_0x00010bff17c0();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar4);
    func_0x00010bef5120(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105457f08; end: 105457f0f; -[SCAdLensCarouselInteractionHistoryTracker adLensCarouselViewingStatusForAdIdentifier:] */

void FUN_105457f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 105457f10; end: 105457f17; -[SCAdLensCarouselInteractionHistoryTracker onLensCarouselViewed:] */

void FUN_105457f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addLensCarouselImpression__11259bf80);
  return;
}



/* Entry: 105457f18; end: 105457f1f; -[SCAdLensCarouselInteractionHistoryTracker adIdentifierToLenCarouselMap] */

undefined8 FUN_105457f18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105457f20; end: 105457f4f; -[SCAdLensCarouselInteractionHistoryTracker setAdIdentifierToLenCarouselMap:] */

void FUN_105457f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105457f50; end: 105457f57; -[SCAdLensCarouselInteractionHistoryTracker currentAdLensCarouselViewingStatus] */

undefined8 FUN_105457f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105457f58; end: 105457f87; -[SCAdLensCarouselInteractionHistoryTracker setCurrentAdLensCarouselViewingStatus:] */

void FUN_105457f58(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105457f88; end: 105457fb7; -[SCAdLensCarouselInteractionHistoryTracker .cxx_destruct] */

void FUN_105457f88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105457fb8; end: 105458047; -[SCAdLensCarouselViewingStatus initWithAdIdentifier:] */

undefined1 * FUN_105457fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8528;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105458048; end: 10545806f; -[SCAdLensCarouselViewingStatus lensCarouselViewingStatusList] */

void FUN_105458048(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105458070; end: 1054580ef; -[SCAdLensCarouselViewingStatus adShowAtSnapIndex:] */

void FUN_105458070(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c2415a0(), lVar2 != param_3)) {
    puVar3 = PTR_PTR_1126b92a0;
    _objc_alloc(PTR_PTR_1126b92a0);
    func_0x00010c048060();
    func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054580f0; end: 10545813f; -[SCAdLensCarouselViewingStatus addLensCarouselImpression:] */

void FUN_1054580f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9760();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105458140; end: 105458147; -[SCAdLensCarouselViewingStatus resetForSwipeBack] */

void FUN_105458140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105458148; end: 10545814f; -[SCAdLensCarouselViewingStatus adIdentifier] */

undefined8 FUN_105458148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105458150; end: 10545818b; -[SCAdLensCarouselViewingStatus .cxx_destruct] */

void FUN_105458150(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10545818c; end: 1054581f7; -[SCAdSnapLensCarouselViewingStatus initWithSnapIndex:] */

undefined1 * FUN_10545818c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8530;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054581f8; end: 10545821f; -[SCAdSnapLensCarouselViewingStatus lensCarouselAdTackInfoList] */

void FUN_1054581f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105458220; end: 10545822f; -[SCAdSnapLensCarouselViewingStatus addLensCarouselImpression:] */

void FUN_105458220(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 105458230; end: 105458237; -[SCAdSnapLensCarouselViewingStatus snapIndex] */

undefined8 FUN_105458230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105458238; end: 105458267; -[SCAdSnapLensCarouselViewingStatus .cxx_destruct] */

void FUN_105458238(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105458268; end: 1054587e3; -[SCAdTracker initWithRequestInfoProvider:configAdapter:adConfigProviderV2:serveResponseDataStore:networkManager:recentViewReceipts:isPrimary:commonMetricsManager:trackMetricsManager:lifecycleTracker:adsPreferencesProvider:persistedDataAdapter:webviewMetricsValidator:appInstallMetricsValidator:trackRequestProcessor:spectrumLogger:backgroundTaskProcessor:flipper:trackFunnelEventTracker:dpaConfigProvider:trackSeqNumProvider:valdiRuntimeProvider:userBlizzard:impressionBuilder:adCrashLogger:shadowDiffPerformer:unifiedAdTrackValidator:] */

undefined8 *
FUN_105458268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  puStack_70 = PTR_PTR_1126e8538;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xc,param_4);
    _objc_storeWeak(puVar1 + 0xd,param_5);
    _objc_retain(param_7);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 10) = param_9;
    _objc_storeWeak(puVar1 + 0x10,param_11);
    _objc_storeWeak(puVar1 + 0x11,param_12);
    _objc_storeWeak(puVar1 + 0x12,param_13);
    _objc_retain(param_6);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x14,param_14);
    _objc_storeWeak(puVar1 + 0x15,param_15);
    _objc_retain(param_16);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[1];
    puVar1[1] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_20;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1a,param_21);
    uVar2 = param_18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    func_0x00010c164420(puVar1[0x17]);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[3];
    puVar1[3] = param_23;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b92a8;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[4];
    puVar1[4] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[5];
    puVar1[5] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[6];
    puVar1[6] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[7];
    puVar1[7] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[8];
    puVar1[8] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[2];
    puVar1[2] = param_30;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b92b0;
    _objc_alloc();
    uVar2 = param_26;
    func_0x00010c269d40(param_26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a8e0(0x3eb0c6f7a0b5ed8d);
    uVar4 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
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
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054587e4; end: 1054588fb; -[SCAdTracker trackSnapAd:] */

void FUN_1054587e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    param_1 = param_1 + 0x80;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ae200();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c115560(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1054588fc; end: 10545899f;  */

undefined8 FUN_1054588fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bef4a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bece080(param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1054589a0; end: 1054589a3;  */

void FUN_1054589a0(void)

{
  return;
}



/* Entry: 1054589a4; end: 105458afb; -[SCAdTracker _trackProtoSnapAdWithBackgroundTask:adResponse:trackSequenceNumber:spectrumTrackSequenceNumber:viewSeqNum:completion:] */

void FUN_1054589a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_68 = param_5;
  uStack_60 = param_7;
  func_0x00010bece060(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105458afc; end: 105458bcb;  */

void FUN_105458afc(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) goto LAB_105458bb4;
    pcVar6 = *(code **)(lVar5 + 0x10);
    bVar1 = false;
  }
  else {
    func_0x00010becdec0(lVar2);
    if (param_2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 200);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfe5ec0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf757a0(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) goto LAB_105458bb4;
    bVar1 = param_2 == 0;
    pcVar6 = *(code **)(lVar5 + 0x10);
  }
  (*pcVar6)(lVar5,bVar1);
LAB_105458bb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105458bcc; end: 1054591e7; -[SCAdTracker _trackProtoSnapAd:adResponse:trackSequenceNumber:spectrumTrackSequenceNumber:viewSeqNum:completion:] */

void FUN_105458bcc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  lVar1 = param_2 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1f480();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b92b8;
  if ((int)lVar2 == 0) {
    lVar4 = param_5;
    func_0x00010bef4240();
    func_0x00010c15eee0(param_5);
    lVar1 = param_2 + 0x60;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_2 + 0x68;
    _objc_loadWeakRetained(lVar2);
    lVar5 = param_2 + 0x88;
    _objc_loadWeakRetained(lVar5);
    func_0x000105e8318c(param_1,lVar4,0,lVar1,lVar2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) goto LAB_105458e8c;
  }
  else {
    func_0x00010bef4240(param_5);
    func_0x00010c15eee0(param_5);
    lVar1 = param_2 + 0x60;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_2 + 0x68;
    _objc_loadWeakRetained(lVar2);
    lVar5 = param_2 + 0x88;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c234980(param_1);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (((ulong)puVar3 & 1) != 0) {
LAB_105458e8c:
      (**(code **)(param_9 + 0x10))(param_9,5);
      goto LAB_105459190;
    }
  }
  lVar1 = param_4;
  func_0x00010bef5de0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar2 = lVar1;
    func_0x00010bef60a0();
    if (lVar2 != 7) {
      param_2 = param_2 + 0x80;
      _objc_loadWeakRetained(param_2);
      lVar2 = param_4;
      func_0x00010bef2c60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ae200(param_2);
      _objc_release(lVar2);
      _objc_release(param_2);
    }
    pcVar9 = *(code **)(param_9 + 0x10);
    uVar10 = 1;
LAB_105458f04:
    (*pcVar9)(param_9,uVar10);
  }
  else {
    lVar2 = param_5;
    func_0x00010c120400();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
LAB_105458d2c:
      lVar2 = param_2 + 0x88;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0a8ea0();
      _objc_release(lVar2);
    }
    else {
      lVar5 = param_5;
      func_0x00010c120400();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar2);
      if (lVar4 == 0) goto LAB_105458d2c;
    }
    lVar2 = param_5;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
LAB_105458d8c:
      lVar2 = param_2 + 0x88;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0a8e00();
      _objc_release(lVar2);
    }
    else {
      lVar5 = param_5;
      func_0x00010c11ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar2);
      if (lVar4 == 0) goto LAB_105458d8c;
    }
    lVar2 = param_5;
    func_0x00010c29e0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar10 = *(undefined8 *)(param_2 + 0x70);
      lVar2 = param_5;
      func_0x00010c29e0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96500(uVar10);
      _objc_release(lVar2);
    }
    lVar2 = lVar1;
    func_0x00010bef60a0();
    if ((0 < param_6) && (lVar2 == 7)) {
      pcVar9 = *(code **)(param_9 + 0x10);
      uVar10 = 2;
      goto LAB_105458f04;
    }
    lVar2 = lVar1;
    func_0x00010c2590a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c26ec80();
    _objc_release(lVar2);
    if (0x7fffffff < lVar5) {
      lVar2 = param_2 + 0x88;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0ad0e0();
      _objc_release(lVar2);
    }
    lVar5 = param_5;
    func_0x00010c119560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + 0x60;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c235640();
    _objc_release(lVar2);
    lVar2 = lVar5;
    if ((int)lVar4 != 0) {
      lVar4 = param_2 + 0x60;
      _objc_loadWeakRetained();
      lVar2 = lVar4;
      func_0x00010bf6a4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    lVar5 = param_4;
    func_0x00010c28b400();
    puVar3 = PTR_PTR_1126b8cd8;
    lVar4 = lVar2;
    if ((int)lVar5 != 0) {
      lVar5 = param_5;
      func_0x00010c26a3a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240();
      func_0x00010c25d840(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = param_5;
      func_0x00010c26a3a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c06a4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_5;
      func_0x00010c26a3a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c06a440();
      func_0x00010848cffc(lVar2,lVar6,lVar8,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(puVar3);
    }
    lVar2 = lVar4;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      (**(code **)(param_9 + 0x10))(param_9,3);
    }
    else {
      _objc_initWeak(auStack_80,param_2);
      _objc_copyWeak(auStack_a0,auStack_80);
      _objc_retain(param_9);
      _objc_retain(param_4);
      _objc_retain(param_5);
      lStack_98 = param_6;
      uStack_90 = param_7;
      uStack_88 = param_8;
      _objc_retain(lVar4);
      func_0x00010bdd63c0(param_2);
      _objc_release(lVar4);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_9);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
LAB_105459190:
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054591e8; end: 10545926f;  */

void FUN_1054591e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),4);
  }
  else {
    func_0x00010bde8a40(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105459270; end: 105459dff; -[SCAdTracker _continueTrackProtoSnapAdWithImpression:trackRequest:adResponse:trackSequenceNumber:spectrumTrackSequenceNumber:viewSeqNum:finalTrackURL:completion:] */

void FUN_105459270(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puStackY_320;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar3 = param_5;
  func_0x00010bef5de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    param_2 = param_2 + 0x80;
    _objc_loadWeakRetained();
    puVar5 = (undefined *)0x3;
    puVar21 = (undefined *)0x1;
    puVar17 = puVar4;
    func_0x00010c0ae200();
    _objc_release(param_2);
    (**(code **)(param_11 + 0x10))(param_11,4);
    goto LAB_105459d7c;
  }
  puVar5 = *(undefined **)(param_2 + 0x58);
  func_0x00010c292860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfcbcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar7 = param_2 + 0x60;
  _objc_loadWeakRetained();
  func_0x00010bf90160();
  _objc_release(lVar7);
  uVar23 = *(undefined8 *)(param_2 + 0x58);
  lVar7 = param_2 + 0x80;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_2 + 0x60;
  _objc_loadWeakRetained();
  lVar9 = param_2 + 0xa0;
  _objc_loadWeakRetained();
  puVar5 = puVar3;
  func_0x00010c075be0();
  uVar10 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010bf5ac60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010bef1b40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_6;
  puVar21 = puVar6;
  func_0x0001084b8030(param_6,uVar23,param_4,param_5,puVar6,param_7,param_9,lVar7,lVar8,lVar9,
                      (char)puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar17 = param_6;
  func_0x00010be4ff40(param_2);
  puVar5 = puVar3;
  func_0x00010c082180();
  if ((int)puVar5 != 0) {
    lVar7 = param_2 + 0x88;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bef4240(puVar3);
    func_0x00010c0a3820(lVar7);
    _objc_release(lVar7);
  }
  puVar5 = param_5;
  func_0x00010bef5e40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010bf4b4c0();
  if ((int)puVar14 == 0) {
    puVar14 = param_5;
    func_0x00010bef5e40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b8da0;
    func_0x00010c229f00(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf4b4c0();
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar5);
    if ((int)puVar16 != 0) goto LAB_1054595cc;
  }
  else {
    _objc_release(puVar13);
    _objc_release(puVar5);
LAB_1054595cc:
    lVar7 = param_2 + 0x80;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c0b1e00();
    _objc_release(lVar7);
    lVar7 = param_2 + 0x80;
    _objc_loadWeakRetained(lVar7);
    puVar21 = (undefined *)(ulong)*(byte *)(param_2 + 0x50);
    func_0x00010c0a0dc0();
    _objc_release(lVar7);
    lVar7 = param_2 + 0x88;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c278640();
    _objc_release(lVar7);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    if (*(char *)(param_2 + 0x50) == '\x01') {
      lVar7 = param_2 + 0x90;
      uVar10 = param_1;
      _objc_loadWeakRetained(lVar7);
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010be3dfa0(param_2);
      puVar21 = (undefined *)0x1;
      func_0x00010c0a06e0(param_1,uVar10,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar7);
    }
    uVar10 = *(undefined8 *)(param_2 + 200);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_6;
    func_0x00010bfe5ec0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf757a0(uVar10);
    _objc_release(puVar5);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_2 + 0xb0);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b92c0;
    puVar17 = param_6;
    func_0x00010bfe5ec0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c278660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c78a0(uVar10);
    _objc_release(puVar5);
    _objc_release(puVar17);
    _objc_release(uVar10);
    if (*(char *)(param_2 + 0x50) == '\x01') {
      puVar17 = puVar12;
      func_0x00010c06a480();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar17;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar21 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(puVar17);
          }
          lVar18 = *(long *)((long)puVar21 * 8);
          func_0x00010c084fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar18;
          func_0x00010bf52a60();
          lVar9 = lRam0000000000000000;
          while (lVar8 != 0) {
            lVar24 = 0;
            do {
              if (lRam0000000000000000 != lVar9) {
                _objc_enumerationMutation(lVar18);
              }
              uVar11 = *(undefined8 *)(lVar24 * 8);
              uVar10 = uVar11;
              func_0x00010bfea8e0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c15ebe0();
              _objc_release(uVar10);
              func_0x00010bf939a0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08fa60();
              _objc_release(uVar11);
              lVar24 = lVar24 + 1;
            } while (lVar8 != lVar24);
            lVar8 = lVar18;
            func_0x00010bf52a60();
          }
          _objc_release(lVar18);
          puVar21 = puVar21 + 1;
        } while (puVar21 != puVar5);
        puVar5 = puVar17;
        func_0x00010bf52a60();
      }
      _objc_release(puVar17);
      lVar7 = param_2 + 0x88;
      _objc_loadWeakRetained(lVar7);
      puVar5 = puVar12;
      func_0x00010bf93ca0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c0ad940(lVar7);
      _objc_release(puVar5);
      _objc_release(lVar7);
      puVar21 = param_6;
      func_0x00010be4ff80(param_2);
      func_0x00010be5a900(param_2);
    }
    uVar10 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_6;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar5;
    func_0x00010c296820(uVar10);
    _objc_release(puVar5);
    _objc_release(uVar10);
    if (*(char *)(param_2 + 0x50) == '\x01') {
      lVar7 = param_2 + 0x68;
      _objc_loadWeakRetained();
      lVar8 = lVar7;
      func_0x00010c0ec0c0();
      _objc_release(lVar7);
      if ((int)lVar8 != 0) {
        uVar10 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_6;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar5;
        func_0x00010c296ae0(uVar10);
        _objc_release(puVar5);
        _objc_release(uVar10);
      }
    }
    lVar7 = param_2 + 0x68;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf1f480();
    _objc_release(lVar7);
    if ((int)lVar8 != 0) {
      uVar10 = *(undefined8 *)(param_2 + 0xb0);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2517c0();
      _objc_release(uVar10);
    }
  }
  puVar13 = param_5;
  func_0x00010bef5e40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar13;
  func_0x00010bf4b4c0();
  if ((int)puVar5 == 0) {
    puVar15 = param_5;
    func_0x00010bef5e40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b8da0;
    func_0x00010c229f00();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar15;
    puVar5 = puVar16;
    func_0x00010bf4b4c0();
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    if ((int)puVar19 != 0) goto LAB_105459b4c;
  }
  else {
    _objc_release(puVar14);
    _objc_release(puVar13);
LAB_105459b4c:
    uVar23 = *(undefined8 *)(param_2 + 0x58);
    lVar7 = param_2 + 0x80;
    _objc_loadWeakRetained(lVar7);
    lVar8 = param_2 + 0x60;
    _objc_loadWeakRetained();
    lVar9 = param_2 + 0xa0;
    _objc_loadWeakRetained();
    puVar5 = puVar3;
    func_0x00010c075be0();
    uVar10 = *(undefined8 *)(param_2 + 0xe0);
    func_0x00010bf5ac60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + 0xe0);
    func_0x00010bef1b40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_6;
    func_0x0001084b8030(param_6,uVar23,param_4,param_5,puVar6,param_8,param_9,lVar7,lVar8,lVar9,
                        (char)puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    uVar10 = *(undefined8 *)(param_2 + 0xc0);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f680();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_2 + 0xc0);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfca920();
    _objc_release(uVar10);
    lVar7 = param_2 + 0x88;
    _objc_loadWeakRetained(lVar7);
    puVar5 = param_6;
    func_0x00010bef4240();
    puVar17 = param_5;
    func_0x00010c27c360();
    puVar21 = (undefined *)(ulong)((*(byte *)(param_2 + 0x50) ^ 0xffffffff) & 1);
    func_0x00010c0b0300(lVar7);
    _objc_release(lVar7);
    _objc_release(puVar13);
  }
  puVar13 = param_5;
  func_0x00010c27c360();
  bVar2 = 0;
  if ((puVar13 < (undefined *)0xc) && ((1L << ((ulong)puVar13 & 0x3f) & 0xc3cU) != 0)) {
    puVar5 = param_6;
    func_0x00010c278060(*(undefined8 *)(param_2 + 0xe0));
    bVar2 = 1;
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    puVar13 = param_6;
    func_0x00010bef4240();
    bVar1 = (bool)(bVar2 ^ 1);
    if (puVar13 != (undefined *)0x16) {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar10 = *(undefined8 *)(param_2 + 0xe8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfec9c0();
      _objc_release(uVar10);
    }
  }
  (**(code **)(param_11 + 0x10))(param_11,0);
  _objc_release(puVar12);
  _objc_release(puVar6);
LAB_105459d7c:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    _objc_retain(puVar17);
    _objc_retain(puVar21);
    puVar3 = puVar5;
    func_0x00010c29c0c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be23da0();
    _objc_release(puVar3);
    puVar3 = puVar5;
    func_0x00010c075be0();
    puStackY_320 = puVar21;
    puVar4 = puVar21;
    if ((int)puVar3 == 0) {
      lVar22 = param_4;
      func_0x00010be3dfa0();
      if ((int)lVar22 != 0) {
        lVar22 = param_4 + 0x88;
        _objc_loadWeakRetained(lVar22);
        func_0x00010bef4240();
        func_0x00010bef60a0();
        puVar3 = puVar21;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar6;
        func_0x00010c242040();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c274c60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20();
        puVar14 = puVar21;
        func_0x00010bef52c0(puVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c242040();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar16;
        func_0x00010bf20540();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar17;
        func_0x00010c29c0c0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0d4e0();
        func_0x00010c0a08a0(lVar22);
        _objc_release(puVar20);
        _objc_release(puVar19);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar6);
        _objc_release(puVar3);
        _objc_release(lVar22);
      }
      param_4 = param_4 + 0x88;
      _objc_loadWeakRetained(param_4);
      func_0x00010bef4240();
      func_0x00010bef60a0();
      func_0x00010bef60a0();
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puStackY_320;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20();
      func_0x00010bef52c0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0980(param_4);
    }
    else {
      param_4 = param_4 + 0x88;
      _objc_loadWeakRetained();
      func_0x00010bef4240();
      func_0x00010bef60a0();
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puStackY_320;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20();
      func_0x00010bef52c0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a8d20();
    }
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puStackY_320);
    _objc_release(param_4);
    _objc_release(puVar21);
    _objc_release(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 105459e00; end: 10545a20b; -[SCAdTracker _logAdViewAndSwipeFromAdTrack:impressionData:adResponse:] */

void FUN_105459e00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c29c0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be23da0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c075be0();
  uStack_70 = param_5;
  uVar16 = param_5;
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be3dfa0(param_1,param_2,param_3);
    if ((int)lVar1 != 0) {
      lVar1 = param_1 + 0x88;
      _objc_loadWeakRetained(lVar1);
      lVar3 = param_3;
      func_0x00010bef4240();
      lVar4 = param_3;
      func_0x00010bef60a0();
      uVar5 = param_5;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0c6c20();
      uVar10 = param_5;
      func_0x00010bef52c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_4;
      func_0x00010c29c0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010bf0d4e0();
      func_0x00010c0a08a0(lVar1,param_2,lVar3,lVar4,uVar9,uVar13,(int)uVar15 == 2,lVar2);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar1);
    }
    param_1 = param_1 + 0x88;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_3;
    func_0x00010bef4240();
    lVar3 = param_3;
    func_0x00010bef60a0();
    lVar4 = param_3;
    func_0x00010bef60a0();
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uStack_70;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0c6c20();
    func_0x00010bef52c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0980(param_1,param_2,lVar1,lVar3,lVar4 != 7,uVar8,uVar11,lVar2);
  }
  else {
    param_1 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar1 = param_3;
    func_0x00010bef4240();
    lVar3 = param_3;
    func_0x00010bef60a0();
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uStack_70;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0c6c20();
    func_0x00010bef52c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a8d20(param_1,param_2,lVar1,lVar3,uVar8,uVar11,lVar2);
  }
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_70);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10545a20c; end: 10545a333; -[SCAdTracker _getViewLocationFromViewContext:] */

ulong FUN_10545a20c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c125020(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar4 == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c125020(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c067fc0(uVar1);
    _objc_release(uVar1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    func_0x0001084c0f40(uVar4,param_1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10545a334; end: 10545a693; -[SCAdTracker _buildImpressionDataForTrackRequest:adResponse:adTrackInfo:completion:] */

void FUN_10545a334(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_2 + 0x68;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b92d0;
  if (lVar1 == 0) {
    param_1 = 0.0;
    func_0x00010c13a960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c13aee0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c0cfd40();
  if (puVar3 == (undefined *)0x0) {
LAB_10545a4d4:
    func_0x00010be4a0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
LAB_10545a4f0:
    (**(code **)(param_7 + 0x10))(param_7,lVar4);
  }
  else {
    lVar4 = *(long *)(param_2 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b3e90;
      func_0x00010befdea0(PTR_PTR_1126b3e90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ad80(uVar5);
      _objc_release(puVar3);
      _objc_release(uVar5);
      goto LAB_10545a4d4;
    }
    lVar4 = param_2;
    if (puVar3 != (undefined *)0x1) {
      if (puVar3 != (undefined *)0x2) goto LAB_10545a50c;
      func_0x00010be37d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        puVar3 = puVar2;
        func_0x00010c149240();
        if ((int)puVar3 == 0) {
          uVar9 = *(undefined8 *)(param_2 + 0x38);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_5;
          func_0x00010bfe5ec0(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126b3e90;
          func_0x00010befdea0(PTR_PTR_1126b3e90);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0ad80(uVar9);
          _objc_release(puVar3);
          _objc_release(uVar5);
          _objc_release(uVar9);
          (**(code **)(param_7 + 0x10))(param_7,0);
        }
        else {
          func_0x00010be4a0a0(param_2);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(param_7 + 0x10))(param_7,param_2);
          _objc_release(param_2);
        }
        lVar4 = 0;
        goto LAB_10545a504;
      }
      goto LAB_10545a4f0;
    }
    func_0x00010be4a0a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,lVar4);
    func_0x00010c22a100(puVar2);
    if ((lVar4 != 0) && (0.0 < param_1)) {
      uVar6 = 10000;
      _arc4random_uniform();
      if ((float)(uVar6 & 0xffffffff) / 10000.0 < param_1) {
        lVar7 = lVar4;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c08fa60();
        if (lVar8 != 0) {
          func_0x00010beb1a20(param_2);
        }
        _objc_release(lVar7);
      }
    }
  }
LAB_10545a504:
  _objc_release(lVar4);
LAB_10545a50c:
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10545a694; end: 10545a82f; -[SCAdTracker _legacyImpressionDataForTrackRequest:adResponse:adTrackInfo:] */

void FUN_10545a694(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b92d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c26d2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26d260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c26d280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = param_1 + 0x60;
  _objc_loadWeakRetained(puVar5);
  puVar6 = param_1 + 0x68;
  _objc_loadWeakRetained();
  func_0x00010bff2060(puVar1,param_2,param_5,param_4,uVar2,uVar3,uVar4,puVar5,puVar6,
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    func_0x00010be0e540(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    param_1 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10545a830; end: 10545a8a3; -[SCAdTracker _fallbackImpressionDataForAdTrackInfo:] */

void FUN_10545a830(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b92e0;
    _objc_opt_new(PTR_PTR_1126b92e0);
    lVar1 = param_3;
    func_0x00010bef60a0();
    if (lVar1 != 0x17) {
      lVar1 = param_3;
      func_0x00010bef60a0(param_3);
      func_0x00010848f45c();
      func_0x00010c164dc0(puVar2,param_2,lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10545a8a4; end: 10545a9f3; -[SCAdTracker _buildParamsForTrackRequest:adTrackInfo:adResponse:] */

void FUN_10545a8a4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar4 = PTR_PTR_1126b92e8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar5 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126b92f0;
    func_0x00010bfe6000(PTR_PTR_1126b92f0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = param_3;
  func_0x00010c26d2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar6 != (undefined *)0x0) {
    puVar1 = puVar6;
  }
  puVar7 = param_3;
  func_0x00010c26d260();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  if (puVar7 != (undefined *)0x0) {
    puVar2 = puVar7;
  }
  puVar8 = param_3;
  func_0x00010c26d280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar8 != (undefined *)0x0) {
    puVar3 = puVar8;
  }
  func_0x00010bff2080(puVar4,param_2,puVar5,param_5,puVar1,puVar2,puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10545a9f4; end: 10545ad03; -[SCAdTracker _impressionDataForTrackRequest:adResponse:adTrackInfo:] */

void FUN_10545a9f4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
    goto LAB_10545aba8;
  }
  lVar1 = param_1;
  func_0x00010bdd6740(param_1,param_2,param_3,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf22160();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    puVar8 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puStack_70,param_2,&PTR____CFConstantStringClassReference_110ddef18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar4 = *(undefined **)(param_1 + 0x38);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b3e90;
    func_0x00010befdea0(PTR_PTR_1126b3e90,param_2,0x138a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(puVar4,param_2,puVar5,puVar8,puStack_70,
                        &PTR____CFConstantStringClassReference_110ddef38);
    _objc_release(puVar8);
LAB_10545ab70:
    _objc_release(puVar5);
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b92e0;
    _objc_alloc();
    puStack_70 = (undefined *)0x0;
    func_0x00010c008360();
    _objc_retain(0);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar8;
    if (puVar8 == (undefined *)0x0) {
      puVar8 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110ddef58);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b3e90;
      func_0x00010befdea0(PTR_PTR_1126b3e90,param_2,0x138a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ad80(uVar6,param_2,puVar8,puVar7,puVar5,
                          &PTR____CFConstantStringClassReference_110ddef78);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(uVar6);
      goto LAB_10545ab70;
    }
    _objc_retain(puVar8);
    puStack_70 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puStack_70);
  _objc_release(lVar3);
  _objc_release(0);
  _objc_release(lVar1);
LAB_10545aba8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10545ad04; end: 10545ae87; -[SCAdTracker _shadowDiffWithLegacyData:trackRequest:adResponse:adTrackInfo:] */

void FUN_10545ad04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bdd6740(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bf23520(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10545ae88; end: 10545afb3;  */

void FUN_10545ae88(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_2);
  if ((param_3 == 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10545afb4;
      puStack_58 = &UNK_11084c4a0;
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      lStack_50 = lVar1;
      _objc_retain(uVar4);
      uStack_48 = uVar4;
      _objc_retain(param_2);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      lStack_40 = param_2;
      _objc_retain(uVar4);
      uStack_38 = uVar4;
      _objc_retainBlock(&puStack_70);
      lVar3 = *(long *)(lVar1 + 0x40);
      if (lVar3 == 0) {
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010007380c();
        _objc_release(lVar3);
      }
      else {
        func_0x00010c0f7fc0();
      }
      _objc_release(ppuVar2);
      _objc_release(uStack_38);
      _objc_release(lStack_40);
      _objc_release(uStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10545afb4; end: 10545b03b;  */

void FUN_10545afb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfe5ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43440(uVar4,param_2,uVar2,uVar1,uVar3,
                      &PTR____CFConstantStringClassReference_110ddd398,
                      *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10545b03c; end: 10545b167; -[SCAdTracker _isAdSwiped:] */

bool FUN_10545b03c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bef60a0();
  bVar1 = false;
  if (0x15 < uVar2) goto LAB_10545b0c8;
  uVar5 = param_3;
  if ((1L << (uVar2 & 0x3f) & 0x2be24eU) == 0) {
    if (uVar2 != 5) {
      if (uVar2 != 10) goto LAB_10545b0c8;
      func_0x00010c23ce80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf400a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c068820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      bVar1 = uVar4 != 0;
      _objc_release(uVar3);
      goto LAB_10545b0b8;
    }
    func_0x00010c2590a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c276da0();
    bVar1 = 0 < (long)uVar2;
  }
  else {
    func_0x00010c23ce80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c264640();
    bVar1 = 0 < (long)uVar3;
LAB_10545b0b8:
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
LAB_10545b0c8:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10545b168; end: 10545b2cb; -[SCAdTracker _logWebViewUserInteractionInfoFromAdTrack:adResponse:] */

void FUN_10545b168(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bef60a0();
  if (lVar1 != 3) goto LAB_10545b26c;
  lVar1 = param_3;
  func_0x00010c23ce80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a4720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c292a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf4bd80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = lVar3;
    func_0x00010bf4bd40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      _objc_release(lVar2);
      goto LAB_10545b230;
    }
    lVar4 = lVar3;
    func_0x00010bfa24c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) goto LAB_10545b238;
  }
  else {
LAB_10545b230:
    _objc_release(lVar1);
LAB_10545b238:
    param_1 = param_1 + 0x88;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1513a0(param_3);
    func_0x00010c0b34e0(param_1,param_2,lVar3,param_4);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
LAB_10545b26c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10545b2cc; end: 10545b6ef; -[SCAdTracker _handleNetworkResponse:responseData:adResponse:error:request:requestStartTimestampMillis:trackSeqNum:] */

void FUN_10545b2cc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined *param_6,long param_7,ulong param_8,long param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  double dVar12;
  undefined *puStack_b0;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_5);
  uVar1 = param_8;
  func_0x00010c23f300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (uVar1 != 0) {
    uVar2 = param_8;
    func_0x00010c23f300();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  puVar4 = param_6;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puStack_b0 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puVar5 = param_6;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  uVar2 = param_8;
  func_0x00010bfc3140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar6 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  dVar12 = dVar12 + param_1 / -1000.0;
  lVar7 = param_2 + 0x80;
  _objc_loadWeakRetained();
  func_0x00010c252ee0();
  uVar2 = param_8;
  func_0x00010bfcbc40(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_8);
  func_0x00010c08fa60();
  _objc_release(uVar1);
  func_0x00010c08fa60();
  _objc_release(param_5);
  func_0x00010c1364a0(lVar7);
  _objc_release(uVar2);
  _objc_release(lVar7);
  if (param_7 != 0) {
    lVar7 = param_2 + 0x88;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c252ee0(param_4);
    func_0x00010bef4240(param_8);
    func_0x00010c0b1dc0(lVar7);
    _objc_release(lVar7);
  }
  lVar7 = param_2 + 0x88;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bef4240(param_8);
  func_0x00010c0a0920(lVar7);
  _objc_release(lVar7);
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar7 = param_2 + 0x90;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c277fe0(param_8);
    func_0x00010c0a06e0(param_1,dVar12,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    dVar12 = param_1;
  }
  uVar9 = *(undefined8 *)(param_2 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_6;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf757a0(uVar9);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(puStack_b0);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_9);
  puVar3 = puVar5;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    lVar11 = param_9;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x00010c08fa60();
    _objc_release(lVar11);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b8f38;
    if (lVar7 == 0) goto LAB_10545b97c;
    func_0x00010c15eee0(param_9);
    func_0x00010c0cc660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_9;
    func_0x00010bef52c0(param_9);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084c6f7c(param_9,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar11);
    puVar4 = puVar5;
    func_0x00010bef5de0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_4 + 0x60;
    _objc_loadWeakRetained(lVar11);
    func_0x000108498878(puVar10,lVar11);
    _objc_release(lVar11);
    _objc_release(puVar10);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b8e38;
    _objc_alloc(PTR_PTR_1126b8e38);
    puVar10 = puVar5;
    func_0x00010bef2c60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    lVar11 = param_9;
    func_0x00010c15ed20(param_9);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_9;
    func_0x00010bef2c20(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    func_0x00010bef4240();
    func_0x00010bff1840(dVar12,puVar4);
    _objc_release(lVar7);
    _objc_release(lVar11);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    func_0x00010c000140();
    uVar9 = *(undefined8 *)(param_4 + 0xd8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9fc0();
    _objc_release(uVar9);
    _objc_release(puVar10);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_10545b97c:
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10545b6f0; end: 10545b9ab; -[SCAdTracker _trackFunnelEventWithRequest:adResponse:trackSequenceNumber:viewSeqNum:metadataState:] */

void FUN_10545b6f0(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = param_5;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b8f38;
    if (lVar4 == 0) goto LAB_10545b97c;
    func_0x00010c15eee0(param_5);
    func_0x00010c0cc660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010bef52c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084c6f7c(param_5,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = param_4;
    func_0x00010bef5de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2 + 0x60;
    _objc_loadWeakRetained(lVar3);
    func_0x000108498878(puVar5,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b8e38;
    _objc_alloc(PTR_PTR_1126b8e38);
    puVar5 = param_4;
    func_0x00010bef2c60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    lVar3 = param_5;
    func_0x00010c15ed20(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010bef2c20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    func_0x00010bef4240();
    func_0x00010bff1840(param_1,puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b8f40;
    _objc_alloc(PTR_PTR_1126b8f40);
    func_0x00010c000140();
    uVar6 = *(undefined8 *)(param_2 + 0xd8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9fc0();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_10545b97c:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10545b9ac; end: 10545bc2b; -[SCAdTracker _logAdTrackRequestSent:adResponse:] */

void FUN_10545b9ac(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_4;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_4;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  uVar6 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  func_0x00010c195bc0(uVar6);
  func_0x00010c195be0(uVar6);
  uVar7 = uVar6;
  func_0x00010c06a480(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(uVar7);
  uVar7 = uVar6;
  func_0x00010bf660a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained();
  puVar2 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eeb40(param_1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c084fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10545bc2c; end: 10545bc67;  */

void FUN_10545bc2c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c084fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10545bc68; end: 10545bc73;  */

void FUN_10545bc68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setEncryptedAdTrackData__112643070,0);
  return;
}



/* Entry: 10545bc74; end: 10545bc7b; -[SCAdTracker requestInfoProvider] */

undefined8 FUN_10545bc74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10545bc7c; end: 10545bc93; -[SCAdTracker configAdapter] */

void FUN_10545bc7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545bc94; end: 10545bcab; -[SCAdTracker adConfigProviderV2] */

void FUN_10545bc94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545bcac; end: 10545bcb3; -[SCAdTracker recentViewReceipts] */

undefined8 FUN_10545bcac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10545bcb4; end: 10545bcbb; -[SCAdTracker networkManager] */

undefined8 FUN_10545bcb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10545bcbc; end: 10545bcc3; -[SCAdTracker isPrimary] */

undefined1 FUN_10545bcbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 10545bcc4; end: 10545bccb; -[SCAdTracker setIsPrimary:] */

void FUN_10545bcc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10545bccc; end: 10545bce3; -[SCAdTracker commonMetricsManager] */

void FUN_10545bccc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545bce4; end: 10545bcfb; -[SCAdTracker trackMetricsManager] */

void FUN_10545bce4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545bcfc; end: 10545bd13; -[SCAdTracker lifecycleTracker] */

void FUN_10545bcfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545bd14; end: 10545bd1b; -[SCAdTracker backupAdResponseDataStore] */

undefined8 FUN_10545bd14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10545bd1c; end: 10545bd33; -[SCAdTracker adsPreferencesProvider] */

void FUN_10545bd1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545bd34; end: 10545bd4b; -[SCAdTracker persistedDataAdapter] */

void FUN_10545bd34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545bd4c; end: 10545bd53; -[SCAdTracker webviewMetricsValidator] */

undefined8 FUN_10545bd4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10545bd54; end: 10545bd5b; -[SCAdTracker trackRequestProcessor] */

undefined8 FUN_10545bd54(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10545bd5c; end: 10545bd63; -[SCAdTracker spectrumLogger] */

undefined8 FUN_10545bd5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10545bd64; end: 10545bd6b; -[SCAdTracker backgroundTaskProcessor] */

undefined8 FUN_10545bd64(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10545bd6c; end: 10545bd83; -[SCAdTracker flipper] */

void FUN_10545bd6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545bd84; end: 10545bd8b; -[SCAdTracker trackFunnelEventTracker] */

undefined8 FUN_10545bd84(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10545bd8c; end: 10545bd93; -[SCAdTracker creativeViewingHistoryTracker] */

undefined8 FUN_10545bd8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10545bd94; end: 10545bd9b; -[SCAdTracker trackSeqNumProvider] */

undefined8 FUN_10545bd94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10545bd9c; end: 10545bee3; -[SCAdTracker .cxx_destruct] */

void FUN_10545bd9c(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 10545bee4; end: 10545c08b; -[SCAdTrackEventBlizzardLogger initWithConfigProvider:adConfigProviderV2:adTrackParser:adTrackEventRepositoryV2:crashLogger:webviewMetricsValidator:blizzardLogger:performer:] */

undefined1 *
FUN_10545bee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e8540;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10545c08c; end: 10545c2ef; -[SCAdTrackEventBlizzardLogger logWithProdTrackRequest:parseTrackRequest:adTrackEventSymbols:viewSeqNum:trackSeqNum:] */

void FUN_10545c08c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bef3300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c24a900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar4);
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if ((lVar1 != 0) || (lVar3 != 0)) {
      _objc_initWeak(auStack_68,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      uStack_78 = param_6;
      uStack_70 = param_7;
      func_0x00010c0f7fc0(uVar5);
      _objc_release(uVar5);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10545c2f0; end: 10545c33b;  */

void FUN_10545c2f0(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5aa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10545c33c; end: 10545c653; -[SCAdTrackEventBlizzardLogger _sendS2RForMismatchedSwipeCount:parseTrackRequest:adTrackEventSymbols:] */

void FUN_10545c33c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef60a0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bef5de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = param_4;
  if (lVar2 == 5) {
    lVar3 = lVar1;
    func_0x00010c2590a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c276da0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010bef5de0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c2590a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c276da0();
  }
  else {
    lVar3 = lVar1;
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c264640();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010bef5de0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c264640();
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(lVar6);
  if (lVar4 != lVar5) {
    lVar1 = param_4;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar10,param_2,&PTR____CFConstantStringClassReference_110ddeff8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90,param_2,7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar11,param_2,lVar6,puVar7,puVar10,
                        &PTR____CFConstantStringClassReference_110ddf018,2);
    _objc_release(puVar7);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(lVar3);
    _objc_release(lVar6);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10545c654; end: 10545ccef; -[SCAdTrackEventBlizzardLogger _logWithProdTrackRequest:parseTrackRequest:adLifecycleEvents:sqlSponsoredSnapEvents:adTrackEventSymbols:viewSeqNum:trackSeqNum:] */

void FUN_10545c654(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bef60a0();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bef4240();
  _objc_release(lVar3);
  lVar3 = param_5;
  FUN_105464740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c08fa60();
  if (((lVar7 != 0) && (lVar7 = lVar2, func_0x00010c08fa60(), lVar7 != 0)) &&
     (lVar7 = lVar4, func_0x00010c08fa60(), puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570,
     puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0, lVar7 != 0)) {
    uVar21 = param_4;
    func_0x00010bef5de0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075be0();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar15 = param_4;
    func_0x00010bef4a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067c20();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(uVar15);
    _objc_release(puVar8);
    _objc_release(uVar21);
    puVar8 = PTR_PTR_1126b8f58;
    _objc_opt_new();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar13 = param_5;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    if (lVar13 == 0) {
      lVar20 = 0;
      lVar23 = 0;
      lVar19 = 0;
    }
    else {
      lVar20 = 0;
      lVar23 = 0;
      lVar19 = 0;
      do {
        lVar18 = 0;
        lVar24 = lVar23;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(param_5);
          }
          lVar22 = *(long *)(lVar18 * 8);
          lVar23 = lVar22;
          func_0x00010bf99b20();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar22;
          if (lVar23 == 0) {
            _objc_release();
LAB_10545c998:
            lVar23 = lVar22;
            func_0x00010bf99b20();
            _objc_retainAutoreleasedReturnValue();
            if (lVar23 == 0) {
              _objc_release();
LAB_10545c9bc:
              func_0x0001084b9f80(lVar22);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar11;
              goto LAB_10545c9d4;
            }
            lVar23 = *(long *)(lVar23 + 0x20);
            _objc_release();
            if (lVar23 != -1) goto LAB_10545c9bc;
            lVar22 = 0;
            if (lVar19 == 0) goto LAB_10545ca10;
LAB_10545c9fc:
            if (lVar20 != 0) goto LAB_10545ca00;
LAB_10545ca20:
            if (lVar22 == 0) {
              lVar20 = 0;
              lVar17 = 0;
              lVar23 = 0;
              if (lVar24 != 0) goto LAB_10545ca34;
              goto LAB_10545ca48;
            }
            lVar20 = *(long *)(lVar22 + 0x60);
            if (lVar24 != 0) goto LAB_10545ca2c;
LAB_10545ca40:
            if (lVar22 == 0) {
              lVar23 = 0;
            }
            else {
              lVar23 = *(long *)(lVar22 + 0x68);
            }
          }
          else {
            lVar23 = *(long *)(lVar23 + 0x18);
            _objc_release();
            if (lVar23 == 0) goto LAB_10545c998;
            func_0x0001084b9d40(lVar22);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar9;
LAB_10545c9d4:
            func_0x00010befa120(puVar14);
            _objc_release(lVar17);
            func_0x00010bf428e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar19 != 0) goto LAB_10545c9fc;
LAB_10545ca10:
            lVar19 = lVar22;
            _objc_retain(lVar19);
            lVar22 = lVar19;
            if (lVar20 == 0) goto LAB_10545ca20;
LAB_10545ca00:
            if (lVar24 == 0) goto LAB_10545ca40;
LAB_10545ca2c:
            if (lVar22 == 0) {
              lVar17 = 0;
            }
            else {
              lVar17 = *(long *)(lVar22 + 0x68);
            }
LAB_10545ca34:
            lVar23 = lVar24;
            if (lVar24 != lVar17) goto LAB_10545ca40;
          }
LAB_10545ca48:
          _objc_release(lVar22);
          lVar18 = lVar18 + 1;
          lVar24 = lVar23;
        } while (lVar13 != lVar18);
        lVar13 = param_5;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(param_5);
    uVar21 = param_6;
    func_0x00010c0b8600(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x0001084ba338(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar12);
    _objc_release(lVar7);
    uVar15 = param_4;
    func_0x0001084ba338(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar12);
    _objc_release(uVar15);
    func_0x00010c163720(puVar8);
    func_0x00010c1fd160(puVar8);
    func_0x0001084baa08(lVar5);
    func_0x00010c164dc0(puVar8);
    func_0x0001084b952c(lVar6);
    func_0x00010c163f80(puVar8);
    func_0x00010c219120(puVar8);
    func_0x00010c222b20(puVar8);
    func_0x0001084b94a8(lVar20);
    func_0x00010c1dfe40(puVar8);
    func_0x0001084b94a8(lVar23);
    func_0x00010c162ea0(puVar8);
    func_0x00010c1bd940(puVar8);
    func_0x00010c1ae0e0(puVar8);
    func_0x00010c208300(puVar8);
    func_0x00010c1d9240(puVar8);
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar15);
    _objc_release(uVar21);
    _objc_release(lVar19);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar10);
  }
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126d9d40;
  _objc_retain();
  _objc_opt_new(puVar10);
  lVar1 = param_2;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar21);
  func_0x00010c197860(puVar10);
  _objc_release(uVar21);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197d00(puVar10);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = 0;
  if (lVar1 != 0) {
    uVar21 = *(undefined8 *)(lVar1 + 0x48);
  }
  func_0x0001084c0d70();
  _objc_release(lVar1);
  func_0x000108534aa8(uVar21);
  func_0x00010c222c00(puVar10);
  lVar1 = param_2;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211ba0(puVar10);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c215e20(puVar10);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10545ccf0; end: 10545ccf7;  */

void FUN_10545ccf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d9d40;
  _objc_retain();
  _objc_opt_new(puVar1);
  lVar2 = param_2;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  _objc_retain(uVar3);
  func_0x00010c197860(puVar1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197d00(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
  }
  func_0x0001084c0d70();
  _objc_release(lVar2);
  func_0x000108534aa8(uVar3);
  func_0x00010c222c00(puVar1);
  lVar2 = param_2;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211ba0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c215e20(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10545ccf8; end: 10545cd6f; -[SCAdTrackEventBlizzardLogger .cxx_destruct] */

void FUN_10545ccf8(long param_1)

{
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



/* Entry: 10545cd70; end: 10545d057; -[SCAdTrackParseResultProcessorV2 initWithConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:adTrackEventRepository:adTrackEventRepositoryV2:adTrackParser:adTrackParserV2:adTrackPerformer:adTrackRequestMigrator:adTrackSeqNumProvider:backgroundTaskProcessor:blizzardLogger:crashLogger:] */

undefined8 *
FUN_10545cd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126e8548;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
  }
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



/* Entry: 10545d058; end: 10545d5f3; -[SCAdTrackParseResultProcessorV2 processTrackRequest:completion:] */

void FUN_10545d058(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if ((param_4 == 0) || (uVar2 == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bef4a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if ((uVar2 == 0) || (uVar2 = uVar3, func_0x00010c08fa60(), uVar2 == 0)) goto LAB_10545d534;
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c278840();
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c249c40();
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c29e180();
  _objc_release(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf1f480();
  _objc_release(uVar11);
  uVar2 = param_3;
  func_0x00010bef5e40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf4b4c0();
  if ((int)uVar10 == 0) {
    _objc_release(puVar6);
    _objc_release(uVar2);
    if ((int)uVar5 != 0) goto LAB_10545d2cc;
  }
  else {
    if ((int)uVar5 == 0) {
      uVar5 = param_3;
      func_0x00010bef5e40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b8da0;
      func_0x00010c2499a0(PTR_PTR_1126b8da0);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010bf4b4c0();
      _objc_release(puVar7);
      _objc_release(uVar5);
      _objc_release(puVar6);
      _objc_release(uVar2);
      if ((uVar12 & 1) == 0) goto LAB_10545d2f0;
    }
    else {
      _objc_release(puVar6);
      _objc_release(uVar2);
    }
LAB_10545d2cc:
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec940();
    _objc_release(uVar10);
  }
LAB_10545d2f0:
  uVar2 = param_3;
  func_0x00010bef5e40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf4b4c0();
  _objc_release(puVar6);
  _objc_release(uVar2);
  if ((int)uVar5 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec8a0();
    _objc_release(uVar10);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf1f480();
  _objc_release(uVar11);
  if ((int)uVar10 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17ce0();
    _objc_release(uVar10);
  }
  uVar2 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    _objc_initWeak(auStack_70,param_1);
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10545d5f4;
    puStack_b0 = &UNK_11088a840;
    _objc_retain(param_3);
    uStack_a8 = param_3;
    _objc_copyWeak(auStack_90,auStack_70);
    _objc_retain(uVar1);
    uStack_a0 = uVar1;
    uStack_88 = uVar4;
    uStack_80 = uVar8;
    uStack_78 = uVar9;
    _objc_retain(param_4);
    lStack_98 = param_4;
    func_0x00010bef4b00(uVar10);
    _objc_release(lStack_98);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_release(uStack_a8);
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_e8,auStack_70);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    uStack_e0 = uVar4;
    uStack_d8 = uVar8;
    uStack_d0 = uVar9;
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar10);
    _objc_release(param_4);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_e8);
  }
  _objc_destroyWeak(auStack_70);
LAB_10545d534:
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10545d5f4; end: 10545d65b;  */

void FUN_10545d5f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a7c40(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82720();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10545d65c; end: 10545d69b;  */

void FUN_10545d65c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10545d69c; end: 10545dd83; -[SCAdTrackParseResultProcessorV2 _processTrackRequest:adIdentifier:trackSeqNum:spectrumTrackSeqNum:viewSeqNum:completion:] */

void FUN_10545d69c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  uint uVar22;
  undefined8 *puStack_a8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = param_5;
  ppuVar20 = param_6;
  ppuVar21 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  puVar14 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar14;
  func_0x00010bef60a0();
  _objc_release(puVar14);
  puVar14 = param_3;
  func_0x00010bef5de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar14;
  func_0x00010c23ce80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108498878(puVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar14);
  puVar14 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar14;
  func_0x0001084c6f7c(puVar14,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar14);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf8f020();
  _objc_release(uVar8);
  uVar22 = 0;
  if (puVar7 == (undefined8 *)0x5) {
    uVar22 = (uint)(puVar2 == (undefined8 *)0xa);
  }
  if (puVar2 == (undefined8 *)0xa) {
    puVar14 = param_3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010c067c20();
    uVar1 = (uint)puVar3;
    _objc_release(puVar14);
  }
  else {
    uVar1 = 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf8f280();
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf1f480();
  _objc_release(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010c277d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  if (param_7 < (undefined **)0x2) {
    puStack_90 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puVar12 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar12;
    func_0x00010c277d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
  uVar1 = puVar2 == (undefined8 *)0x3 | uVar1 | (uint)uVar8;
  if (((uVar1 | (uint)uVar4) & 1) == 0) {
    puVar12 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 == (undefined8 *)0x6 || uVar22 != 0) {
      puVar13 = *(undefined **)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)0x0;
      puVar12 = puVar13;
      func_0x00010c277c40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10545d9e8;
    }
  }
  else {
    puVar13 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010c2a41a0();
    _objc_retainAutoreleasedReturnValue();
LAB_10545d9e8:
    _objc_release(puVar13);
  }
  puVar14 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar14;
  func_0x00010c067c20();
  puVar13 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar3 == 0) {
    puStack_a8 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
LAB_10545da8c:
    _objc_release(puVar14);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf908c0();
    _objc_release(uVar8);
    _objc_release(puVar14);
    if ((int)uVar4 != 0) {
      puVar14 = *(undefined8 **)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar14;
      ppuVar19 = param_7;
      func_0x00010c067c40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10545da8c;
    }
    puStack_a8 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
  }
  puStack_80 = puStack_90;
  puStack_78 = puVar13;
  if (puVar12 != (undefined *)0x0) {
    puStack_78 = puVar12;
  }
  puVar14 = &uStack_88;
  ppuVar18 = (undefined **)0x3;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf529e0();
  if (puVar15 != (undefined *)0x3) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = (undefined **)PTR_PTR_1126b3e90;
    func_0x00010befde80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf529e0();
    func_0x00010c14de00(ppuVar17);
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = &PTR____CFConstantStringClassReference_110ddf0f8;
    puVar14 = puVar5;
    ppuVar18 = ppuVar16;
    ppuVar19 = ppuVar17;
    func_0x00010bf0ad80(uVar4);
    _objc_release(ppuVar17);
    _objc_release(ppuVar16);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  puVar15 = puVar13;
  func_0x00010bf529e0();
  if (puVar15 == (undefined *)0x3) {
    _objc_retain(param_3);
    puVar3 = param_3;
    if (((uVar1 | puVar2 == (undefined8 *)0x6 |
          puVar2 == (undefined8 *)0x1 | uVar22 |
          (uint)(puVar2 == (undefined8 *)0xa && puVar7 == (undefined8 *)0x4) | (uint)uVar9) & 1) !=
        0) {
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_3;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067c20();
      uVar4 = uVar8;
      func_0x00010c0f4580(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(uVar8);
      puVar14 = *(undefined8 **)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar14;
      func_0x00010c28d640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(puVar14);
      _objc_release(uVar4);
    }
    puVar14 = puVar3;
    ppuVar21 = param_8;
    func_0x00010be82740(param_1);
    _objc_release(puVar3);
    ppuVar18 = param_5;
    ppuVar19 = param_6;
    ppuVar20 = param_7;
  }
  _objc_release(puStack_a8);
  _objc_release(puStack_90);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(puVar13);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  _objc_retain(ppuVar21);
  uVar8 = param_3[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf1f480();
  _objc_release(uVar8);
  if ((int)uVar4 != 0) {
    puVar2 = puVar14;
    func_0x00010bef5e40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4b4c0();
    _objc_release(puVar12);
    _objc_release(puVar2);
    if ((int)puVar3 == 0) goto LAB_10545df74;
  }
  uVar8 = param_3[7];
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0f4780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar2 = puVar14;
  func_0x00010bef5e40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b4c0();
  _objc_release(puVar12);
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    uVar10 = param_3[7];
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bef28e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar10);
    uVar8 = param_3[0xb];
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35e0();
    _objc_release(uVar8);
    _objc_release(uVar9);
  }
  (*(code *)ppuVar21[2])(ppuVar21,uVar4,ppuVar18,ppuVar19,ppuVar20);
  _objc_release(uVar4);
LAB_10545df74:
  _objc_release(ppuVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 10545dd84; end: 10545df9b; -[SCAdTrackParseResultProcessorV2 _processTrackRequestV2:trackSeqNum:spectrumTrackSeqNum:viewSeqNum:completion:] */

void FUN_10545dd84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010bef5e40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf4b4c0();
    _objc_release(puVar3);
    _objc_release(uVar2);
    if ((int)uVar1 == 0) goto LAB_10545df74;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f4780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bef5e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4b4c0();
  _objc_release(puVar3);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bef28e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35e0();
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  (**(code **)(param_7 + 0x10))(param_7,uVar2,param_4,param_5,param_6);
  _objc_release(uVar2);
LAB_10545df74:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10545df9c; end: 10545dfa3; -[SCAdTrackParseResultProcessorV2 adResponseProvider] */

undefined8 FUN_10545df9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10545dfa4; end: 10545dfd3; -[SCAdTrackParseResultProcessorV2 setAdResponseProvider:] */

void FUN_10545dfa4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10545dfd4; end: 10545e093; -[SCAdTrackParseResultProcessorV2 .cxx_destruct] */

void FUN_10545dfd4(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10545e094; end: 10545e18f; -[SCAdTrackRequestMigratorM0 initWithConfigProvider:adConfigProviderV2:adTrackEventRepository:trackSeqNumProvider:] */

undefined1 *
FUN_10545e094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e8550;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10545e190; end: 10545e193; -[SCAdTrackRequestMigratorM0 updatedTrackRequest:fromParseResult:] */

void FUN_10545e190(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTrackRequest_parseResult__1125963a8);
  return;
}



/* Entry: 10545e194; end: 10545f22f; -[SCAdTrackRequestMigratorM0 _updateTrackRequest:parseResult:] */

void FUN_10545e194(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
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
  int iVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puStack_108;
  undefined *puStack_f0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf90200();
  _objc_release(uVar4);
  puVar6 = param_4;
  func_0x00010bef5de0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar6;
  func_0x00010bef60a0();
  _objc_release(puVar6);
  puVar6 = param_4;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = param_4;
  func_0x00010bef4a60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar34;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x0001084c6f7c(puVar6,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar34);
  _objc_release(puVar6);
  uVar10 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010bf8f2c0();
  _objc_release(uVar10);
  uVar11 = *(ulong *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1f480();
  _objc_release(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar13;
  func_0x00010bf8f020();
  _objc_release(uVar13);
  bVar1 = puVar9 == (undefined *)0x5 && puVar32 == (undefined *)0xa;
  if (puVar32 == (undefined *)0xa) {
    puVar6 = param_4;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar6;
    func_0x00010c067c20();
    uVar3 = (uint)puVar34;
    _objc_release(puVar6);
  }
  else {
    uVar3 = 0;
  }
  uVar14 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010bf8f280();
  _objc_release(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x00010bf1f480();
  _objc_release(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010bf1f480();
  _objc_release(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar17;
  func_0x00010bf1f480();
  _objc_release(uVar17);
  uVar18 = *(ulong *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar18;
  func_0x00010bf1f480();
  _objc_release(uVar18);
  puVar6 = param_4;
  func_0x00010bef5de0();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar6;
  func_0x00010c23ce80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar34 == (undefined *)0x0) {
    puStack_108 = PTR_PTR_1126b92f8;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar34);
    puStack_108 = puVar34;
  }
  _objc_release(puVar34);
  puVar34 = puVar6;
  func_0x00010c23ce80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar34;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puStack_f0 = PTR_PTR_1126b9300;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar7);
    puStack_f0 = puVar7;
  }
  uVar2 = (uint)uVar13 | uVar3;
  _objc_release(puVar7);
  _objc_release(puVar34);
  puVar34 = puVar6;
  func_0x00010c29c0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar34;
  func_0x00010c0d3c80();
  _objc_release(puVar34);
  puVar34 = param_4;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar34;
  func_0x00010c067c20();
  _objc_release(puVar34);
  puVar34 = PTR_PTR_1126b9308;
  iVar31 = 0;
  if (puVar32 != (undefined *)0xd) {
    iVar31 = (int)uVar16;
  }
  if (iVar31 == 1) {
    puVar19 = puVar6;
    func_0x00010c23ce80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bef3340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef33c0(puVar34);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    puVar19 = param_5;
    func_0x00010c098e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275ca0();
    func_0x00010c2bb540(puVar34);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = param_5;
    func_0x00010c098e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d5a0();
    func_0x00010c2a89c0(puVar34);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar19);
    if ((uVar11 & 1) == 0) {
      puVar19 = param_4;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      func_0x00010c067c20();
      _objc_release(puVar19);
      if ((int)puVar20 != 0) goto LAB_10545e670;
    }
    else {
LAB_10545e670:
      puVar19 = param_5;
      func_0x00010c098e60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c275bc0();
      func_0x00010c2bb500(puVar34);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar19);
      puVar19 = param_5;
      func_0x00010c098e60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0d220();
      func_0x00010c2a88e0(puVar34);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar19);
      puVar19 = param_5;
      func_0x00010c098e60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0cdc0();
      func_0x00010c2a88a0(puVar34);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar19);
    }
    puVar19 = puVar34;
    func_0x00010bf21f60(puVar34);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puStack_f0;
    func_0x00010c2a79c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_f0);
    _objc_release(puVar19);
    _objc_release(puVar34);
    puStack_f0 = puVar20;
  }
  if (((puVar32 == (undefined *)0x6 || puVar32 == (undefined *)0x3) || (uVar2 & 1) != 0) ||
      ((puVar32 == (undefined *)0x1 || bVar1) ||
      puVar32 == (undefined *)0xa && puVar9 == (undefined *)0x4)) {
    if ((((int)uVar5 == 0) || (puVar34 = param_5, func_0x00010c06cec0(), (int)puVar34 == 0)) ||
       (puVar34 = param_5, func_0x00010c264640(), puVar34 != (undefined *)0x1)) {
      func_0x00010c264640(param_5);
    }
    else {
      puVar34 = puVar6;
      func_0x00010c23ce80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar9 = puVar34;
      func_0x00010c2a4720();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar9;
      func_0x00010bf21840();
      _objc_release(puVar9);
      if (puVar19 != (undefined *)0x3) {
        puVar9 = puVar34;
        func_0x00010c2a4720(puVar34);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf688e0();
        _objc_release(puVar9);
      }
      _objc_release(puVar34);
      _objc_release(puVar34);
    }
    puVar34 = puStack_f0;
    func_0x00010c2bab40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_f0);
    func_0x00010bf1fe60(param_5);
    puVar9 = puVar34;
    func_0x00010c2b3360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar34);
    func_0x00010c275d20(param_5);
    puVar34 = puVar9;
    func_0x00010c2bb740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c13fc60(param_5);
    puStack_f0 = puVar34;
    func_0x00010c2b74e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar34);
    puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf0d4e0(param_5);
    func_0x00010c0df780(puVar34);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b92c8;
    func_0x00010bf0d4e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar34);
  }
  puVar34 = puStack_108;
  if (puVar32 == (undefined *)0x3) {
    puVar32 = param_5;
    func_0x00010c2a4320(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c23ce80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar9;
    func_0x00010c2a4720();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_4;
    func_0x00010bef4a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bef52e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c07dde0();
    puVar23 = puVar32;
    FUN_10545f230(puVar32,puVar19,uVar4,uVar12 & 0xffffffff,(int)uVar10,(int)puVar8,puVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar9);
    _objc_release(puVar32);
    puVar32 = param_4;
    func_0x00010bef2c60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_2;
    func_0x00010beeada0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar32);
    puVar32 = puVar9;
    func_0x00010bfb1920(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    puVar19 = puVar23;
    func_0x00010c2b7b60(puVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
    _objc_release(puVar32);
    puVar20 = puVar9;
    func_0x00010c089820(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    puVar32 = puVar19;
    func_0x00010c2bac40(puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar20);
    func_0x00010c2bce60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_108);
    puStack_108 = puVar9;
  }
  else {
    if (puVar32 != (undefined *)0x6) goto LAB_10545ec60;
    puVar32 = puVar6;
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar32;
    func_0x00010bf68240();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar9;
    func_0x00010bf056e0();
    _objc_release(puVar9);
    _objc_release(puVar32);
    if (puVar19 != (undefined *)0x0) {
      puVar32 = puVar6;
      func_0x00010c23ce80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar32;
      func_0x00010bf68240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf056e0();
      _objc_release(puVar9);
      _objc_release(puVar32);
    }
    _objc_retain(param_5);
    puVar32 = param_5;
    func_0x00010bf686a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar32 == (undefined *)0x0) {
      puVar32 = (undefined *)0x0;
    }
    else {
      puVar9 = param_5;
      func_0x00010bf686a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = PTR_PTR_1126b9320;
      _objc_alloc(PTR_PTR_1126b9320);
      func_0x00010bf68200(puVar9);
      func_0x00010bf68220(puVar9);
      func_0x00010bf67da0(puVar9);
      func_0x00010bf67d80(puVar9);
      puVar19 = puVar9;
      func_0x00010bf68340(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf61aa0(puVar9);
      func_0x00010c009c00(puVar32);
      _objc_release(puVar19);
      _objc_release(puVar9);
    }
    _objc_release(param_5);
    func_0x00010c2ac040();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puStack_108);
  _objc_release(puVar32);
  puStack_108 = puVar34;
LAB_10545ec60:
  puVar32 = puStack_108;
  if (bVar1 || (uVar2 & 1) != 0) {
    puVar9 = puVar6;
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_4;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bef52e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c07dde0();
    _objc_retain(param_5);
    _objc_retain(puVar9);
    puVar22 = param_5;
    func_0x00010bf3ffc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar34 = (undefined *)0x0;
    if (puVar22 != (undefined *)0x0) {
      puVar22 = param_5;
      func_0x00010bf3ffc0();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar34 = puVar22;
      func_0x00010bf3fea0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar34;
      func_0x00010bf529e0();
      _objc_release(puVar34);
      if (puVar24 != (undefined *)0x0) {
        puVar34 = (undefined *)0x0;
        do {
          puVar24 = puVar22;
          func_0x00010bf3fea0();
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar24;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar24);
          puVar24 = puVar25;
          func_0x00010bf686a0();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar25;
          func_0x00010bf05680();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar9;
          func_0x00010bf400a0();
          _objc_retainAutoreleasedReturnValue();
          puVar28 = puVar27;
          func_0x00010c068820();
          _objc_retainAutoreleasedReturnValue();
          puVar33 = puVar28;
          func_0x00010bf529e0();
          if (puVar34 < puVar33) {
            puVar29 = puVar9;
            func_0x00010bf400a0();
            _objc_retainAutoreleasedReturnValue();
            puVar30 = puVar29;
            func_0x00010c068820();
            _objc_retainAutoreleasedReturnValue();
            puVar33 = puVar30;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar30);
            _objc_release(puVar29);
          }
          else {
            puVar33 = (undefined *)0x0;
          }
          _objc_release(puVar28);
          _objc_release(puVar27);
          puVar27 = puVar25;
          func_0x00010c2a4320();
          _objc_retainAutoreleasedReturnValue();
          puVar28 = puVar33;
          func_0x00010c2a3d20(puVar33);
          _objc_retainAutoreleasedReturnValue();
          puVar29 = puVar27;
          FUN_10545f230(puVar27,puVar28,((uint)uVar14 | uVar3) & 1,(int)uVar15,(int)uVar10,
                        (int)puVar8,(int)puVar21);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar28);
          _objc_release(puVar27);
          puVar27 = PTR_PTR_1126b9328;
          _objc_alloc();
          func_0x00010bf0d600();
          func_0x00010bf3fe80();
          func_0x00010bf1fe40(puVar25);
          uVar5 = param_1;
          func_0x00010bf67da0();
          func_0x00010bf68220(puVar24);
          func_0x00010bf68200(puVar24);
          func_0x00010bf67d80();
          puVar28 = puVar24;
          func_0x00010bf68340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09c980();
          func_0x00010c09c9a0();
          func_0x00010c29ff80(puVar26);
          func_0x00010bff4c80(param_1,uVar5,puVar27);
          _objc_release(puVar28);
          func_0x00010befa120(puVar23);
          _objc_release(puVar27);
          _objc_release(puVar29);
          _objc_release(puVar33);
          _objc_release(puVar26);
          _objc_release(puVar24);
          _objc_release(puVar25);
          puVar34 = puVar34 + 1;
          puVar24 = puVar22;
          func_0x00010bf3fea0();
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar24;
          func_0x00010bf529e0();
          _objc_release(puVar24);
        } while (puVar34 < puVar25);
      }
      puVar34 = PTR_PTR_1126b9330;
      _objc_alloc(PTR_PTR_1126b9330);
      puVar8 = puVar9;
      func_0x00010bf400a0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf056e0();
      func_0x00010c01e740(puVar34);
      _objc_release(puVar8);
      _objc_release(puVar23);
      _objc_release(puVar22);
    }
    _objc_release(puVar9);
    _objc_release(param_5);
    func_0x00010c2aa980(puStack_108);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_108);
    _objc_release(puVar34);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar9);
  }
  puVar34 = puVar32;
  func_0x00010c2aaae0(puVar32);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar32);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0ec0c0();
  _objc_release(uVar4);
  puVar32 = puVar34;
  if ((int)uVar5 != 0) {
    func_0x00010c2a7e20(puVar34);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar34);
  }
  puVar34 = puVar6;
  func_0x00010c2b9060(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010bf51e00(puVar7);
  puVar8 = puVar34;
  func_0x00010c2bc840(puVar34);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar34);
  _objc_release(puVar6);
  puVar6 = param_4;
  func_0x00010c2a7de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puStack_f0);
  _objc_release(puVar32);
  _objc_release(puVar8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10545f230; end: 10545f80b;  */

void FUN_10545f230(long param_1,undefined *param_2,int param_3,ulong param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined *puVar22;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b9310;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  puVar2 = puVar1;
  func_0x00010c2b0c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2b1520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_70 = puVar1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) goto LAB_10545f77c;
  if ((param_4 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010c2a40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) goto LAB_10545f320;
  }
  else {
LAB_10545f320:
    lVar3 = param_1;
    func_0x00010c2a40e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b9318;
    _objc_alloc();
    lVar4 = lVar3;
    func_0x00010bf87c80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf87d60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bfb1020();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bfbb900();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c09bfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010bfdce60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c291200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c0f1ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar3;
    func_0x00010c0d6c00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010c13bca0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar3;
    func_0x00010bf87d20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar3;
    func_0x00010bf87be0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar3;
    func_0x00010bf87ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar3;
    func_0x00010c13b060();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar3;
    func_0x00010c15f4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar3;
    func_0x00010c15f4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar3;
    func_0x00010c15f500();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar3;
    func_0x00010bfda6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e280();
    _objc_release(lVar21);
    param_4 = param_4 & 0xffffffff;
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
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
    _objc_release(uStack_70);
    _objc_release(lVar3);
    uStack_70 = puVar2;
  }
  lVar3 = param_1;
  func_0x00010c2a4800();
  _objc_retainAutoreleasedReturnValue();
  if (((param_4 & 1) != 0) || (puVar2 = puVar1, lVar3 != 0)) {
    lVar4 = lVar3;
    func_0x00010bfbca00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2aea40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bfb1440(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c2ae2c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bfb1480(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ae300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar4);
    func_0x00010bfd75c0(lVar3);
    puVar1 = puVar2;
    func_0x00010c2af260(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bfd75e0(lVar3);
    puVar22 = puVar1;
    func_0x00010c2af280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = lVar3;
    func_0x00010bfbca00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar22;
    func_0x00010c2aea20(puVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    _objc_release(puVar1);
    _objc_release(lVar4);
  }
  puVar1 = puVar2;
  func_0x00010c2bcd20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar3);
LAB_10545f77c:
  puVar2 = puVar1;
  if (param_5 != 0) {
    func_0x00010c2bcd20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  func_0x00010bf9b8c0(param_1);
  puVar1 = puVar2;
  func_0x00010c2ad6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10545f80c; end: 10545f9cb; -[SCAdTrackRequestMigratorM0 _webviewScrollAndTapCountForIdentifier:snapIndex:] */

void FUN_10545f80c(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar10 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e180();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2a49e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x000100817178(uVar2,&PTR___NSConcreteGlobalBlock_11088a8c0);
    param_2 = &PTR___NSConcreteGlobalBlock_11088a8e0;
    uVar4 = uVar2;
    func_0x000100817178(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(uVar3);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(uVar4);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    ppuVar7 = param_2;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar7 == (undefined **)0x0) || (ppuVar7[2] != (undefined *)0x2)) {
      puVar10 = (undefined *)0x0;
    }
    else {
      ppuVar8 = param_2;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 == (undefined **)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = ppuVar8[1];
      }
      _objc_retain(puVar10);
      _objc_release(ppuVar8);
    }
    _objc_release(ppuVar7);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10545f9cc; end: 10545fb0b;  */

void FUN_10545f9cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) != 2)) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10545fb0c; end: 10545fb53; -[SCAdTrackRequestMigratorM0 .cxx_destruct] */

void FUN_10545fb0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10545fb54; end: 10545fc4f; -[SCSnapAdTrackSpectrumLogger initWithConfigProvider:performer:spectrum:timeProvider:] */

undefined1 *
FUN_10545fb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e8558;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10545fc50; end: 10545fd7f; -[SCSnapAdTrackSpectrumLogger submitRequest:trackUrl:isShadowRequest:] */

void FUN_10545fc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


