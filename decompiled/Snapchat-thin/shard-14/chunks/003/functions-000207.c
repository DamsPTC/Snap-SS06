/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0d5b7c; end: 10b0d5bcb; -[SCLensDataFetcher removeListener:] */

void FUN_10b0d5b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d5bcc; end: 10b0d5c1b; -[SCLensDataFetcher addProgressListener:] */

void FUN_10b0d5bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c117740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d5c1c; end: 10b0d5c6b; -[SCLensDataFetcher removeProgressListener:] */

void FUN_10b0d5c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c117740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d5c6c; end: 10b0d5c6f; -[SCLensDataFetcher applicationDidEnterBackground:] */

void FUN_10b0d5c6c(void)

{
  return;
}



/* Entry: 10b0d5c70; end: 10b0d5cfb; -[SCLensDataFetcher applicationDidReceiveMemoryWarning:] */

void FUN_10b0d5c70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfe6360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ab80();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf73970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_didClearIconsForLensDataFetcher__1125ba800,param_1
              );
    return;
  }
  return;
}



/* Entry: 10b0d5cfc; end: 10b0d5cff; -[SCLensDataFetcher willDisplayLens:withContext:] */

void FUN_10b0d5cfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleLensVisibilityChanged_112568720);
  return;
}



/* Entry: 10b0d5d00; end: 10b0d5d03; -[SCLensDataFetcher didUpdateDisplayedLens:withContext:] */

void FUN_10b0d5d00(void)

{
  return;
}



/* Entry: 10b0d5d04; end: 10b0d5d07; -[SCLensDataFetcher didEndDisplayingLens:withContext:] */

void FUN_10b0d5d04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleLensVisibilityChanged_112568720);
  return;
}



/* Entry: 10b0d5d08; end: 10b0d5d0b; -[SCLensDataFetcher didDrawIcon:forLens:atIndex:withContext:] */

void FUN_10b0d5d08(void)

{
  return;
}



/* Entry: 10b0d5d0c; end: 10b0d5e73; -[SCLensDataFetcher didActivateLens:withContext:] */

void FUN_10b0d5d0c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    if (param_4 != 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfa9a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be85da0(PTR_PTR_1126ddd38);
      func_0x00010c1bd5a0(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c0f88c0(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d5e74; end: 10b0d6113;  */

void FUN_10b0d5e74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5b40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9c720(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb800(uVar2,param_2,puVar4,1,uVar5,0,
                        &PTR____CFConstantStringClassReference_110f5db38,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc3360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27dd80();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b280(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9c720(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb800(uVar7,param_2,puVar4,uVar3,uVar9,uVar6,
                        &PTR____CFConstantStringClassReference_110f5daf8,uVar11);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d6114; end: 10b0d615f; -[SCLensDataFetcher didHideLensesWithContext:] */

void FUN_10b0d6114(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa9a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d6160; end: 10b0d6163; -[SCLensDataFetcher didUpdateActiveLensOrder:withContext:] */

void FUN_10b0d6160(void)

{
  return;
}



/* Entry: 10b0d6164; end: 10b0d61af; -[SCLensDataFetcher _notifyVisibleLensUpdatedEventWithDebounce] */

void FUN_10b0d6164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_s__didFinishUpdatingVisibleLens_112541ac8;
  func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                      PTR_s__didFinishUpdatingVisibleLens_112541ac8,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd0000000000000,param_1,PTR_s_performSelector_withObject_after_11261bdf0,puVar1,0);
  return;
}



/* Entry: 10b0d61b0; end: 10b0d6207; -[SCLensDataFetcher _didFinishUpdatingVisibleLens] */

void FUN_10b0d61b0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b0d6208;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 10b0d6208; end: 10b0d620f;  */

void FUN_10b0d6208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be155d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchVisibleLensesIfNeeded_112562f10);
  return;
}



/* Entry: 10b0d6210; end: 10b0d629f; -[SCLensDataFetcher cancelDownloadsAndClearInMemoryCacheWithCompletion:] */

void FUN_10b0d6210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0d62a0;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d62a0; end: 10b0d62ef;  */

void FUN_10b0d62a0(long param_1)

{
  func_0x00010bf2e2c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf3b560(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf72c40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0d62e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b0d62f0; end: 10b0d637f; -[SCLensDataFetcher handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_10b0d62f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _dispatch_group_enter(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0d6380;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c12c2e0(param_1,param_2,1,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d6380; end: 10b0d6387;  */

void FUN_10b0d6380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0d6388; end: 10b0d6417; -[SCLensDataFetcher removeExpiredContentAsyncForReason:dispatchGroup:] */

void FUN_10b0d6388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  _dispatch_group_enter(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0d6418;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c12c2e0(param_1,param_2,0,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0d6418; end: 10b0d641f;  */

void FUN_10b0d6418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0d6420; end: 10b0d643b; -[SCLensDataFetcher removeAllUserSessionDataAsync] */

void FUN_10b0d6420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_perform__11261ba10,
             &PTR___NSConcreteGlobalBlock_110cb91f8);
  return;
}



/* Entry: 10b0d643c; end: 10b0d6443; -[SCLensDataFetcher reportMetrics] */

undefined8 FUN_10b0d643c(void)

{
  return 0;
}



/* Entry: 10b0d6444; end: 10b0d64a3; -[SCLensDataFetcher _handleLensVisibilityChanged] */

void FUN_10b0d6444(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10b0d64a4;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 10b0d64a4; end: 10b0d64ab;  */

void FUN_10b0d64a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be652b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__notifyVisibleLensUpdatedEventWi_112576e48);
  return;
}



/* Entry: 10b0d64ac; end: 10b0d64af; -[SCLensDataFetcher _scheduleOperation:cacheOnly:scheduleQueue:] */

void FUN_10b0d64ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkCacheAndScheduleOperationI_112554ee8);
  return;
}



/* Entry: 10b0d64b0; end: 10b0d670f; -[SCLensDataFetcher _checkCacheAndScheduleOperationIfNeeded:cacheOnly:scheduleQueue:] */

void FUN_10b0d64b0(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_3;
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar6 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    _objc_opt_class(param_1);
    func_0x00010bed0da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar6);
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_68,param_5);
    _objc_initWeak(auStack_70,param_1);
    lVar3 = lVar2;
    func_0x00010c13ccc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_70);
    uStack_78 = param_4;
    _objc_retain(puVar1);
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_3);
    uVar5 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar4);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c2a2080(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa340();
    _objc_release(param_1);
    _objc_retain(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    puVar6 = puVar1;
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b0d6710; end: 10b0d68cb;  */

void FUN_10b0d6710(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar2 = param_2;
    func_0x00010c13cc60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
        lVar2 = param_1 + 0x38;
        _objc_loadWeakRetained();
        if (lVar2 != 0) {
          lVar3 = *(long *)(param_1 + 0x28);
          (**(code **)(lVar3 + 0x10))();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            uVar8 = *(undefined8 *)(param_1 + 0x20);
            lVar7 = lVar1;
            _objc_opt_class(lVar1);
            func_0x00010bed0da0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf43ca0(uVar8);
          }
          else {
            lVar4 = lVar3;
            func_0x00010c13ccc0(lVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bfbc3e0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = *(long *)(param_1 + 0x20);
            _objc_retain(lVar7);
            lVar6 = lVar1;
            func_0x00010c0f98a0(lVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c297260(lVar5);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar4);
            func_0x00010befa340(lVar2);
          }
          _objc_release(lVar7);
          _objc_release(lVar3);
          _objc_release(lVar2);
        }
        goto LAB_10b0d6780;
      }
    }
    else {
      _objc_release();
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
LAB_10b0d6780:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b0d68cc; end: 10b0d68df;  */

void FUN_10b0d68cc(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  return;
}



/* Entry: 10b0d68e0; end: 10b0d6a63; -[SCLensDataFetcher _fetchVisibleLensesIfNeeded] */

void FUN_10b0d68e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c29fe80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010be12220(param_1,param_2,lVar2,5,5,0,*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10b0d6a64; end: 10b0d6ca7; -[SCLensDataFetcher _scheduleContentDownloadingForLens:requestTiming:fetchSourceType:cacheOnly:] */

void FUN_10b0d6a64(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_5;
  _objc_retain(param_3);
  uStack_70 = param_4;
  _objc_retain(puVar1);
  puVar2 = param_1;
  func_0x00010bf4d0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010be9b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    _objc_opt_class(param_1);
    func_0x00010bed0da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar2);
    _objc_release(param_1);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar1;
  }
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0d6ca8; end: 10b0d6e3f;  */

void FUN_10b0d6ca8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x00010bdfbac0(lVar1);
    lVar2 = lVar1;
    func_0x00010c0ebc20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c094540(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0724c0(uVar6);
    lVar4 = lVar2;
    func_0x00010bf4c3e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010c1178e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b0d6e40; end: 10b0d6e9f;  */

void FUN_10b0d6e40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf4c520(*(undefined8 *)(param_1 + 0x60));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d6ea0; end: 10b0d6ea7;  */

void FUN_10b0d6ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 10b0d6ea8; end: 10b0d702b; -[SCLensDataFetcher _scheduleIconDownloadingForLens:requestTiming:cacheOnly:] */

void FUN_10b0d6ea8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  puVar1 = param_1;
  uStack_50 = param_4;
  func_0x00010bfe8860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be9b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae558;
  if (puVar2 == (undefined *)0x0) {
    _objc_opt_class(param_1);
    func_0x00010bed0da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    puVar1 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0d702c; end: 10b0d70b3;  */

void FUN_10b0d702c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0ebc20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe7540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c19b460(lVar2,param_2,0x400);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b0d70b4; end: 10b0d723f; -[SCLensDataFetcher _scheduleExternalDataDownloadingForLens:requestTiming:fetchSourceType:cacheOnly:] */

void FUN_10b0d70b4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_5;
  _objc_retain(param_3);
  puVar1 = param_1;
  uStack_50 = param_4;
  func_0x00010bf9e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be9b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae558;
  if (puVar2 == (undefined *)0x0) {
    _objc_opt_class(param_1);
    func_0x00010bed0da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    puVar1 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0d7240; end: 10b0d72cf;  */

void FUN_10b0d7240(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010bdfbac0(lVar1,param_2,*(undefined8 *)(param_1 + 0x30));
    lVar2 = lVar1;
    func_0x00010c0ebc20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf9dfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b0d72d0; end: 10b0d73af; +[SCLensDataFetcher _unableToCreateOperationError] */

undefined * FUN_10b0d72d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    puVar2 = *(undefined **)(param_1 + 0x48);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf5e960();
    _objc_release(puVar2);
    return puVar1;
  }
  puVar1 = PTR_PTR_1126ddd38;
                    /* WARNING: Could not recover jumptable at 0x00010be4ad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ddd38,PTR_s__lensFetchTypeFromLensFetchSourc_112570500);
  return puVar1;
}



/* Entry: 10b0d73b0; end: 10b0d7407; -[SCLensDataFetcher _determineCurrentFetchTypeWithFetchSourceType:] */

undefined * FUN_10b0d73b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    puVar1 = *(undefined **)(param_1 + 0x48);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf5e960();
    _objc_release(puVar1);
    return puVar2;
  }
  puVar2 = PTR_PTR_1126ddd38;
                    /* WARNING: Could not recover jumptable at 0x00010be4ad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ddd38,PTR_s__lensFetchTypeFromLensFetchSourc_112570500);
  return puVar2;
}



/* Entry: 10b0d7408; end: 10b0d7413; +[SCLensDataFetcher _rankingContextFromUIUpdateContext:] */

bool FUN_10b0d7408(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10b0d7414; end: 10b0d7423; +[SCLensDataFetcher _lensFetchTypeFromLensFetchSourceType:] */

long FUN_10b0d7414(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (4 < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 10b0d7424; end: 10b0d742b; -[SCLensDataFetcher performer] */

undefined8 FUN_10b0d7424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0d742c; end: 10b0d7433; -[SCLensDataFetcher operationsFactory] */

undefined8 FUN_10b0d742c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0d7434; end: 10b0d7463; -[SCLensDataFetcher setOperationsFactory:] */

void FUN_10b0d7434(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0d7464; end: 10b0d7493; -[SCLensDataFetcher setAnnouncer:] */

void FUN_10b0d7464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d7494; end: 10b0d749b; -[SCLensDataFetcher progressAnnouncer] */

undefined8 FUN_10b0d7494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b0d749c; end: 10b0d74cb; -[SCLensDataFetcher setProgressAnnouncer:] */

void FUN_10b0d749c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d74cc; end: 10b0d74d3; -[SCLensDataFetcher contentQueue] */

undefined8 FUN_10b0d74cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b0d74d4; end: 10b0d7503; -[SCLensDataFetcher setContentQueue:] */

void FUN_10b0d74d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d7504; end: 10b0d750b; -[SCLensDataFetcher imageQueue] */

undefined8 FUN_10b0d7504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b0d750c; end: 10b0d753b; -[SCLensDataFetcher setImageQueue:] */

void FUN_10b0d750c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0d753c; end: 10b0d7543; -[SCLensDataFetcher assetsQueue] */

undefined8 FUN_10b0d753c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b0d7544; end: 10b0d7573; -[SCLensDataFetcher setAssetsQueue:] */

void FUN_10b0d7544(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0d7574; end: 10b0d757b; -[SCLensDataFetcher externalDataLoadingQueue] */

undefined8 FUN_10b0d7574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b0d757c; end: 10b0d75ab; -[SCLensDataFetcher setExternalDataLoadingQueue:] */

void FUN_10b0d757c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0d75ac; end: 10b0d75b3; -[SCLensDataFetcher warmupQueue] */

undefined8 FUN_10b0d75ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b0d75b4; end: 10b0d75e3; -[SCLensDataFetcher setWarmupQueue:] */

void FUN_10b0d75b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d75e4; end: 10b0d75eb; -[SCLensDataFetcher allQueues] */

undefined8 FUN_10b0d75e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b0d75ec; end: 10b0d761b; -[SCLensDataFetcher setAllQueues:] */

void FUN_10b0d75ec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0d761c; end: 10b0d7623; -[SCLensDataFetcher requestManager] */

undefined8 FUN_10b0d761c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b0d7624; end: 10b0d7653; -[SCLensDataFetcher setRequestManager:] */

void FUN_10b0d7624(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0d7654; end: 10b0d765b; -[SCLensDataFetcher urlDataFetcher] */

undefined8 FUN_10b0d7654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0d765c; end: 10b0d768b; -[SCLensDataFetcher setUrlDataFetcher:] */

void FUN_10b0d765c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0d768c; end: 10b0d7693; -[SCLensDataFetcher throttler] */

undefined8 FUN_10b0d768c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b0d7694; end: 10b0d76c3; -[SCLensDataFetcher setThrottler:] */

void FUN_10b0d7694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d76c4; end: 10b0d76cb; -[SCLensDataFetcher ranker] */

undefined8 FUN_10b0d76c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b0d76cc; end: 10b0d76fb; -[SCLensDataFetcher setRanker:] */

void FUN_10b0d76cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d76fc; end: 10b0d7803; -[SCLensDataFetcher .cxx_destruct] */

void FUN_10b0d76fc(long param_1)

{
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



/* Entry: 10b0d7804; end: 10b0d7817; -[SCLensDataFetcherEventsTracker lensDataFetcher:didFinishLoadingContentForLens:successfully:] */

void FUN_10b0d7804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c14a7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_saveLastDownloadDateForLens__112630418,param_4);
    return;
  }
  return;
}



/* Entry: 10b0d7818; end: 10b0d787b; -[SCLensDataFetcherEventsTracker didClearCacheForLensDataFetcher:] */

void FUN_10b0d7818(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c12aca0(*(undefined8 *)(param_1 + 8));
  func_0x00010c278080(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8060();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d787c; end: 10b0d787f; -[SCLensDataFetcherEventsTracker didClearIconsForLensDataFetcher:] */

void FUN_10b0d787c(void)

{
  return;
}



/* Entry: 10b0d7880; end: 10b0d78a7; -[SCLensDataFetcherEventsTracker didClearCacheFromTweaksForLensDataFetcher:] */

void FUN_10b0d7880(long param_1)

{
  func_0x00010c12aca0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c138ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_resetLensCacheClearTracker_11262bdd0);
  return;
}



/* Entry: 10b0d78a8; end: 10b0d790b; -[SCLensDataFetcherEventsTracker didCancelDownloadsAndClearInMemoryCacheForLensDataFetcher:] */

void FUN_10b0d78a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c12aca0(*(undefined8 *)(param_1 + 8));
  func_0x00010c138ec0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8060();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d790c; end: 10b0d7947; -[SCLensDataFetcherEventsTracker .cxx_destruct] */

void FUN_10b0d790c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d7948; end: 10b0d7a0b; -[SCLensDataFetcherUIState visibleLenses] */

void FUN_10b0d7948(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b0d7a0c;
  uStack_30 = 0x10b0d7a1c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b0d7a24;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010be71ec0(param_1,param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0d7a0c; end: 10b0d7a23;  */

void FUN_10b0d7a0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b0d7a24; end: 10b0d7a67;  */

void FUN_10b0d7a24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b0d7a68; end: 10b0d7b3b; -[SCLensDataFetcherUIState isExplicitlyActivatedLensId:] */

undefined1 FUN_10b0d7a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010be71ec0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b0d7b3c; end: 10b0d7b6f;  */

void FUN_10b0d7b3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf4b900(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 10b0d7b70; end: 10b0d7c43; -[SCLensDataFetcherUIState isActiveLensId:] */

undefined1 FUN_10b0d7b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010be71ec0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b0d7c44; end: 10b0d7c77;  */

void FUN_10b0d7c44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0720c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 10b0d7c78; end: 10b0d7d6f; -[SCLensDataFetcherUIState lensById:] */

void FUN_10b0d7c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b0d7a0c;
  uStack_30 = 0x10b0d7a1c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010be71ec0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0d7d70; end: 10b0d7db3;  */

void FUN_10b0d7d70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b0d7db4; end: 10b0d7eab; -[SCLensDataFetcherUIState lensIndexById:] */

void FUN_10b0d7db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b0d7a0c;
  uStack_30 = 0x10b0d7a1c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010be71ec0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0d7eac; end: 10b0d7eef;  */

void FUN_10b0d7eac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b0d7ef0; end: 10b0d7f8f; -[SCLensDataFetcherUIState activeLensIndex] */

undefined8 FUN_10b0d7ef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b0d7f90;
  puStack_58 = &UNK_11084b9d0;
  uStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010be71ec0(param_1,param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10b0d7f90; end: 10b0d7ff7;  */

void FUN_10b0d7f90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067fc0();
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10b0d7ff8; end: 10b0d80d7; -[SCLensDataFetcherUIState didUpdateActiveLensOrder:withContext:] */

void FUN_10b0d7ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d80d8; end: 10b0d820b;  */

void FUN_10b0d80d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(lVar1 + 0x18));
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar7 = 0;
      do {
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x00010c0dfd40(lVar3,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c08fa60();
        _objc_release(lVar2);
        if (lVar4 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(lVar1 + 0x18);
          lVar2 = lVar3;
          func_0x00010c094540(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar8,param_2,puVar5,lVar2);
          _objc_release(lVar2);
          _objc_release(puVar5);
        }
        _objc_release(lVar3);
        uVar7 = uVar7 + 1;
        uVar6 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf529e0();
      } while (uVar7 < uVar6);
    }
    lVar2 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7df60();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d820c; end: 10b0d831b; -[SCLensDataFetcherUIState willDisplayLens:withContext:] */

void FUN_10b0d820c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d831c; end: 10b0d83b7;  */

void FUN_10b0d831c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = uVar5;
    func_0x00010c094540(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar4,param_2,uVar5,uVar2);
    _objc_release(uVar2);
    lVar3 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6160();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d83b8; end: 10b0d83bb; -[SCLensDataFetcherUIState didUpdateDisplayedLens:withContext:] */

void FUN_10b0d83b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_willDisplayLens_withContext__112687280);
  return;
}



/* Entry: 10b0d83bc; end: 10b0d84cb; -[SCLensDataFetcherUIState didEndDisplayingLens:withContext:] */

void FUN_10b0d83bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d84cc; end: 10b0d8557;  */

void FUN_10b0d84cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar4,param_2,uVar2);
    _objc_release(uVar2);
    lVar3 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75920();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d8558; end: 10b0d869b; -[SCLensDataFetcherUIState didDrawIcon:forLens:atIndex:withContext:] */

void FUN_10b0d8558(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_68 = param_5;
    uStack_60 = param_6;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d869c; end: 10b0d86fb;  */

void FUN_10b0d869c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75580();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d86fc; end: 10b0d880b; -[SCLensDataFetcherUIState didActivateLens:withContext:] */

void FUN_10b0d86fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d880c; end: 10b0d88eb;  */

void FUN_10b0d880c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(ulong *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar4,param_2,uVar2);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c094540(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5,param_2,uVar2);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      _objc_release(uVar5);
      lVar3 = lVar1;
      func_0x00010bf6b020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72240();
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


