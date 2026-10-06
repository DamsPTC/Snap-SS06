/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10576f6ec; end: 10576f763;  */

uint FUN_10576f6ec(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000106440ee4();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar1 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR_PTR_1126bdd30;
      _objc_opt_class(PTR_PTR_1126bdd30);
      uVar1 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar2);
      uVar3 = (uint)uVar1;
      goto LAB_10576f74c;
    }
  }
  uVar3 = 1;
LAB_10576f74c:
  _objc_release(param_1);
  return uVar3 & 1;
}



/* Entry: 10576f764; end: 10576f83f; -[SCAdEOVTimerProvider init] */

undefined1 * FUN_10576f764(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea180;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10576f840; end: 10576f8d7; -[SCAdEOVTimerProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10576f840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb64f8);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb6518);
    if ((int)uVar1 != 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 8));
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x10));
      func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x10));
      func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    func_0x00010c24d960(*(undefined8 *)(param_1 + 8));
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10576f8d8; end: 10576f993; -[SCAdEOVTimerProvider registeredEventsForOperaSession] */

void FUN_10576f8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained(puVar2);
  puVar3 = puVar2;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010c0720c0(ppuVar7,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar5 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar7;
    func_0x00010c0720c0(ppuVar7,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar5 != 0) {
      puVar2 = puVar3;
      func_0x000106440d04();
      if ((int)puVar2 == 0) {
        puVar2 = puVar3;
        FUN_10576f6ec();
        if ((int)puVar2 == 0) goto LAB_10576faf8;
        func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x28));
        uVar6 = *(undefined8 *)(puVar1 + 0x30);
      }
      else {
        func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x18));
        uVar6 = *(undefined8 *)(puVar1 + 0x20);
      }
      func_0x00010c0f5b20(uVar6);
    }
  }
  else {
    puVar2 = puVar3;
    func_0x000106440d04();
    if ((int)puVar2 == 0) {
      puVar2 = puVar3;
      FUN_10576f6ec();
      if ((int)puVar2 == 0) goto LAB_10576faf8;
      func_0x00010c24d960(*(undefined8 *)(puVar1 + 0x28));
      uVar6 = *(undefined8 *)(puVar1 + 0x30);
    }
    else {
      func_0x00010c24d960(*(undefined8 *)(puVar1 + 0x18));
      uVar6 = *(undefined8 *)(puVar1 + 0x20);
    }
    func_0x00010c24d960(uVar6);
  }
LAB_10576faf8:
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 10576f994; end: 10576fb23; -[SCAdEOVTimerProvider operaViewDidSendEvent:page:params:] */

void FUN_10576f994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar4);
  _objc_release(puVar4);
  if ((int)uVar5 == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar4);
    _objc_release(puVar4);
    if ((int)uVar5 != 0) {
      lVar1 = lVar2;
      func_0x000106440d04();
      if ((int)lVar1 == 0) {
        lVar1 = lVar2;
        FUN_10576f6ec();
        if ((int)lVar1 == 0) goto LAB_10576faf8;
        func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x28));
        uVar5 = *(undefined8 *)(param_1 + 0x30);
      }
      else {
        func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x18));
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
      func_0x00010c0f5b20(uVar5);
    }
  }
  else {
    lVar1 = lVar2;
    func_0x000106440d04();
    if ((int)lVar1 == 0) {
      lVar1 = lVar2;
      FUN_10576f6ec();
      if ((int)lVar1 == 0) goto LAB_10576faf8;
      func_0x00010c24d960(*(undefined8 *)(param_1 + 0x28));
      uVar5 = *(undefined8 *)(param_1 + 0x30);
    }
    else {
      func_0x00010c24d960(*(undefined8 *)(param_1 + 0x18));
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    func_0x00010c24d960(uVar5);
  }
LAB_10576faf8:
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10576fb24; end: 10576fb4f; -[SCAdEOVTimerProvider fourthTabTotalTimeSpentMillis] */

void FUN_10576fb24(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010beed820(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 10576fb50; end: 10576fb7b; -[SCAdEOVTimerProvider fourthTabSessionTimeSpentMillis] */

void FUN_10576fb50(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 10576fb7c; end: 10576fba7; -[SCAdEOVTimerProvider fourthTabFriendStoriesTotalTimeSpentMillis] */

void FUN_10576fb7c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 10576fba8; end: 10576fbd3; -[SCAdEOVTimerProvider fourthTabFriendStoriesSessionTimeSpentMillis] */

void FUN_10576fba8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 10576fbd4; end: 10576fbff; -[SCAdEOVTimerProvider fourthTabNonFriendStoriesTotalTimeSpentMillis] */

void FUN_10576fbd4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 10576fc00; end: 10576fc2b; -[SCAdEOVTimerProvider fourthTabNonFriendStoriesSessionTimeSpentMillis] */

void FUN_10576fc00(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 10576fc2c; end: 10576fc43; -[SCAdEOVTimerProvider playlistItemController] */

void FUN_10576fc2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10576fc44; end: 10576fc4f; -[SCAdEOVTimerProvider setPlaylistItemController:] */

void FUN_10576fc44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10576fc50; end: 10576fd2b; -[SCAdEOVTimerProvider .cxx_destruct] */

void FUN_10576fc50(long param_1)

{
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



/* Entry: 10576fd2c; end: 10576fda3; -[SCAdEOVTimerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10576fd2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729034);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729038);
  return;
}



/* Entry: 10576fda4; end: 10576fefb; -[SCSKStoreProductPrefetchServiceProvider _createPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10576fda4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2f3936);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0x10);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bdd60;
  _objc_alloc(PTR_PTR_1126bdd60);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112729040;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c085740(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112729044;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010bef2520(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0208a0(puVar2,param_2,lVar3,lVar5,lVar6,puVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10576fefc; end: 10576ff3f; -[SCSKStoreProductPrefetchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10576fefc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729044);
  _objc_destroyWeak(param_1 + _DAT_112729040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272903c);
  return;
}



/* Entry: 10576ff40; end: 10576ffff; +[SCSKStoreProductPrefetchJob prefetchJobWithItemIdentifier:prefetchedAppIds:queuePerformer:prefetchQueuePerformer:jobCompletion:] */

void FUN_10576ff40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c020100();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105770000; end: 10577001b;  */

void FUN_105770000(void)

{
  _objc_alloc_init(PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577001c; end: 105770197; -[SCSKStoreProductPrefetchJob initWithItemIdentifier:prefetchedAppIds:queuePerformer:prefetchQueuePerformer:jobCompletion:storeViewControllerFactory:] */

undefined1 *
FUN_10577001c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ea188;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105770198; end: 105770273; -[SCSKStoreProductPrefetchJob start:] */

void FUN_105770198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdddb60(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105770274; end: 1057702b7;  */

void FUN_105770274(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ad20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057702b8; end: 1057703c7; -[SCSKStoreProductPrefetchJob _checkIfPrefetched:completion:] */

void FUN_1057702b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c268560(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057703c8;
  puStack_58 = &UNK_1108b0480;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1057703c8; end: 1057703f7;  */

void FUN_1057703c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf4b900(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001057703f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return;
}



/* Entry: 1057703f8; end: 1057705bf; -[SCSKStoreProductPrefetchJob _onPrefetchCheckCompleted:completion:] */

void FUN_1057703f8(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined1 *unaff_x22;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar6 = &puStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  if ((int)param_3 == 0) {
    _objc_initWeak(auStack_50,param_1);
    uStack_48 = *(undefined8 *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = (long *)(param_1 + 0x30);
    lVar4 = *plVar5;
    *plVar5 = lVar1;
    _objc_release(lVar4);
    lVar1 = *plVar5;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1057705c0;
    puStack_68 = &UNK_11088fbf8;
    _objc_copyWeak(auStack_58,auStack_50);
    _objc_retain(param_4);
    puVar3 = puVar2;
    lStack_60 = param_4;
    func_0x00010c09bf80(lVar1);
    _objc_release(lStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      puVar3 = (undefined *)0x0;
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    }
    ppuVar6 = (undefined **)unaff_x22;
    if (param_4 != 0) {
      puVar3 = (undefined *)0x1;
      (**(code **)(param_4 + 0x10))(param_4,param_1,1,0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)ppuVar6 + 0x28));
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume();
  _objc_retain(puVar3);
  param_4 = param_4 + 0x28;
  _objc_loadWeakRetained(param_4);
  func_0x00010be6ae60();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057705c0; end: 10577061b;  */

void FUN_1057705c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ae60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10577061c; end: 10577069b; -[SCSKStoreProductPrefetchJob _onProductFetched:error:completion:] */

void FUN_10577061c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,(uint)param_3 ^ 1,param_4);
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_1,param_3,param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10577069c; end: 1057706a3; -[SCSKStoreProductPrefetchJob itemIdentifier] */

undefined8 FUN_10577069c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1057706a4; end: 1057706ab; -[SCSKStoreProductPrefetchJob jobCompletion] */

undefined8 FUN_1057706a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1057706ac; end: 105770723; -[SCSKStoreProductPrefetchJob .cxx_destruct] */

void FUN_1057706ac(long param_1)

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



/* Entry: 105770724; end: 10577072f; -[SCSKStoreProductPrefetchJobFactory createPrefetchJobWithItemIdentifier:prefetchedAppIds:queuePerformer:prefetchQueuePerformer:jobCompletion:] */

void FUN_105770724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bdd68,PTR_s_prefetchJobWithItemIdentifier_pr_11261f860);
  return;
}



/* Entry: 105770730; end: 1057707eb; -[SCSKStoreProductPrefetcher initWithJobScheduler:adConfigProviderV2:mainQueuePerformer:queuePerformer:] */

undefined8
FUN_105770730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bdd70;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c0208c0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1057707ec; end: 1057709c7; -[SCSKStoreProductPrefetcher initWithJobScheduler:adConfigProviderV2:mainQueuePerformer:queuePerformer:jobFactory:] */

undefined1 *
FUN_1057707ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ea190;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057709c8; end: 105770c27; -[SCSKStoreProductPrefetcher prefetchStoreProductWithItemIdentifier:] */

void FUN_1057709c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b7228);
    puVar3 = PTR_PTR_1126b7228;
    _objc_opt_new(PTR_PTR_1126b7228);
    puVar4 = puVar2;
    func_0x00010c119620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b7228;
    _objc_opt_class(PTR_PTR_1126b7228);
    puVar2 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b7228;
      _objc_opt_new(PTR_PTR_1126b7228);
      func_0x00010c198180();
      func_0x00010c1b6780(puVar4);
      func_0x00010c1b6740(puVar4);
      puVar3 = PTR_PTR_1126b7230;
      _objc_opt_new(PTR_PTR_1126b7230);
      func_0x00010c1edbc0();
      func_0x00010c1c35c0(puVar3);
      func_0x00010c1edae0(puVar3);
      func_0x00010c1ed860(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b7240;
      _objc_opt_new(PTR_PTR_1126b7240);
      func_0x00010c168b40();
      func_0x00010c1cc140(puVar3);
      puVar2 = PTR_PTR_1126ae740;
      _objc_opt_new(PTR_PTR_1126ae740);
      func_0x00010befc800();
      func_0x00010befc800(puVar2);
      func_0x00010c169200(puVar3);
      _objc_release(puVar2);
      func_0x00010c1b66e0(puVar4);
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126bdd58;
    func_0x00010c085940(PTR_PTR_1126bdd58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6840(puVar4);
    _objc_release(puVar3);
    func_0x00010c1b67a0(puVar4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf64920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f200(lVar1);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105770c28; end: 105770e13; -[SCSKStoreProductPrefetcher cancelPrefetchForStoreProductsWithItemIdentifiers:] */

void FUN_105770c28(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar7;
  long lVar8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar3 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          lVar4 = param_1 + 8;
          _objc_loadWeakRetained(lVar4);
          lVar5 = lVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126bdd58;
          func_0x00010c085940(PTR_PTR_1126bdd58);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2e5c0(lVar5,param_2,puVar6,unaff_x22,0,0,0);
          _objc_release(puVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
    unaff_x21 = *(undefined8 *)(param_1 + 0x40);
    param_1 = *(long *)(param_1 + 0x20);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_105770e14;
    puStack_148 = &UNK_110841f80;
    uStack_140 = unaff_x21;
    _objc_retain(param_3);
    lStack_138 = param_3;
    _objc_retain(unaff_x21);
    func_0x00010c0f7fc0(param_1,param_2,&puStack_160);
    _objc_release(lStack_138);
    _objc_release(unaff_x21);
  }
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  pcStack_168 = FUN_105770e14;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_105770eb4;
  puStack_1a0 = &UNK_1108b04b0;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  uStack_190 = unaff_x22;
  uStack_188 = unaff_x21;
  lStack_180 = param_1;
  lStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(uVar2);
  uStack_198 = uVar2;
  func_0x00010c1063a0(puVar6,param_2,&puStack_1b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae5e0(uVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uStack_198);
  return;
}



/* Entry: 105770e14; end: 105770eb3;  */

void FUN_105770e14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105770eb4;
  puStack_40 = &UNK_1108b04b0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010c1063a0(puVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae5e0(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uStack_38);
  return;
}



/* Entry: 105770eb4; end: 105770eff;  */

uint FUN_105770eb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0845a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105770f00; end: 105771033; -[SCSKStoreProductPrefetcher processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_105770f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 105771034; end: 10577109b;  */

void FUN_105771034(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  func_0x00010bdc7e80(lVar1,param_2,puVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10577109c; end: 1057711b3; -[SCSKStoreProductPrefetcher _addPrefetchJobForItemWithIdentifier:onComplete:] */

void FUN_10577109c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar4);
  lVar1 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c108980();
  lVar3 = 0x20;
  if ((int)lVar2 == 0) {
    lVar3 = 0x18;
  }
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar5);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf57da0(uVar4,param_2,param_3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x20),uVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c107be0();
  _objc_release(lVar3);
  if ((int)lVar1 == 2) {
    func_0x00010c066b00();
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x40),param_2,uVar4);
  }
  _objc_release(uVar5);
  func_0x00010bec0880(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1057711b4; end: 1057712f7; -[SCSKStoreProductPrefetcher _startNextJob] */

void FUN_1057711b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  lVar2 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c1ec0();
  if (lVar1 != 0 || (int)lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c089820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x50));
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x40));
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c24d9a0(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 1057712f8; end: 105771367;  */

void FUN_1057712f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69ae0();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105771368; end: 1057714db; -[SCSKStoreProductPrefetcher _onJobCompleted:result:error:] */

void FUN_105771368(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c268560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1057714dc; end: 105771533;  */

void FUN_1057714dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105771534; end: 105771623; -[SCSKStoreProductPrefetcher _onJobCompleted:prefetchedAppIds:result:error:] */

void FUN_105771534(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  if (param_5 != 0) {
    uVar1 = param_3;
    func_0x00010c0845a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf4b900(param_4,param_2,uVar1);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar1 = param_3;
      func_0x00010c0845a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c174bc0(param_4,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
  func_0x00010bec0880(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105771624; end: 10577171b; -[SCSKStoreProductPrefetcher config] */

void FUN_105771624(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bdd78);
  puVar2 = PTR_PTR_1126bdd78;
  _objc_opt_new(PTR_PTR_1126bdd78);
  puVar3 = puVar1;
  func_0x00010c119620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126bdd78;
  _objc_opt_class(PTR_PTR_1126bdd78);
  puVar1 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126bdd78;
    _objc_opt_new(PTR_PTR_1126bdd78);
    func_0x00010c1c30a0();
    func_0x00010c21d760(puVar3);
    func_0x00010c1e05c0(puVar3);
  }
  else {
    _objc_retain(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10577171c; end: 105771723; -[SCSKStoreProductPrefetcher prefetchedAppIds] */

undefined8 FUN_10577171c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105771724; end: 1057717af; -[SCSKStoreProductPrefetcher .cxx_destruct] */

void FUN_105771724(long param_1)

{
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



/* Entry: 1057717b0; end: 1057718af; -[SCCameraAttachmentOperaPageResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1057717b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d820();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf0d0a0();
    if ((int)lVar1 == 4) {
      lVar1 = lVar3;
      func_0x00010bf28f40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f19c0(param_1,param_2,lVar1,param_5);
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057718b0; end: 105771d47; -[SCCameraAttachmentOperaPageResolver pagePropertiesForCameraAttachment:attachmentProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057718b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) goto LAB_105771cfc;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bdd88;
  func_0x00010bf2aee0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bdd88;
  func_0x00010bf2af00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar6 = param_3;
  func_0x00010c15cf40();
  puVar2 = PTR_PTR_1126bdd88;
  if ((int)lVar6 == 2) {
    if (*(char *)(param_1 + 8) == '\x01') {
      func_0x00010bf2af00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf2aee0();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_105771a98:
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else if ((int)lVar6 == 1) {
    func_0x00010bf2aee0();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105771a98;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar6 = param_3;
  func_0x00010bf323e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c098320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      lVar12 = *(long *)(lVar11 * 8);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lVar8 = lVar12;
      func_0x00010c096900();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c08fa60();
      _objc_release(lVar8);
      if (lVar9 != 0) {
        lVar8 = lVar12;
        func_0x00010c096900(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar8);
      }
      lVar8 = lVar12;
      func_0x00010c14f6e0();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)lVar8 != 0) {
        func_0x00010c14f6e0(lVar12);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar4);
      }
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c14c720(puVar2);
      }
      _objc_release(puVar3);
      lVar11 = lVar11 + 1;
    } while (lVar6 != lVar11);
    lVar6 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  func_0x00010c1d0760(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_105771cfc:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_112729098,0);
  _objc_destroyWeak(param_3 + _DAT_11272909c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3 + _DAT_112729094);
  return;
}



/* Entry: 105771d48; end: 105771d8f; -[SCCameraAttachmentOperaPageResolverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105771d48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112729098,0);
  _objc_destroyWeak(param_1 + _DAT_11272909c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729094);
  return;
}



/* Entry: 105771d90; end: 105771dc7; -[SCCameraAttachmentOperaPageResolverPlugInEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105771d90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127290a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127290a0);
  return;
}



/* Entry: 105771dc8; end: 105771e9b; -[SCThirdPartyAccessServiceClient initWithGRPCClientFactory:userId:] */

undefined1 *
FUN_105771dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea1a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be5c4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105771e9c; end: 105772067; -[SCThirdPartyAccessServiceClient createLoginDataForLoginSource:withAuthCode:authCodeVerifier:] */

void FUN_105771e9c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar4 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126bddc0;
    func_0x00010bf87dc0(PTR_PTR_1126bddc0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3,param_2,puVar2,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bfe9c80(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126bdda0;
    _objc_opt_new(PTR_PTR_1126bdda0);
    func_0x00010c21e620();
    uVar5 = 1;
    if (param_3 == 2) {
      uVar5 = 2;
    }
    func_0x00010c1d9420(puVar3,param_2,uVar5);
    func_0x00010c16cac0(puVar3,param_2,param_4);
    func_0x00010c16cae0(puVar3,param_2,param_5);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010be5ba40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105772068;
    puStack_68 = &UNK_1108b0540;
    puStack_60 = puVar2;
    lStack_58 = param_1;
    _objc_retain(puVar2);
    func_0x00010bf597a0(uVar6,param_2,puVar3,lVar1,&puStack_80);
    _objc_release(lVar1);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_60);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105772068; end: 1057721d7;  */

void FUN_105772068(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = param_2;
    func_0x00010bfdd700();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar1 != 0) {
      puVar1 = param_2;
      func_0x00010c272ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_1057721d8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR_PTR_1126bddc0;
        func_0x00010bf87dc0(PTR_PTR_1126bddc0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        func_0x00010bf43ca0(uVar3);
        _objc_release(puVar1);
        puVar2 = (undefined *)0x0;
      }
      else {
        func_0x00010bf43d60(uVar3);
      }
      goto LAB_105772158;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126bddc0;
    func_0x00010bf87dc0(PTR_PTR_1126bddc0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010be70100(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43ca0(uVar3);
LAB_105772158:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057721d8; end: 1057722c3;  */

void FUN_1057721d8(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c0f4c80();
  cVar1 = '\x02';
  if ((int)lVar2 != 2) {
    cVar1 = (int)lVar2 == 1;
  }
  puVar5 = (undefined *)0x0;
  if (cVar1 == '\0') goto LAB_1057722a4;
  lVar2 = param_1;
  func_0x00010beecce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if ((lVar3 == 0) || (lVar3 = param_1, func_0x00010bfdd720(), (int)lVar3 == 0)) {
LAB_105772298:
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c273080();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) goto LAB_105772298;
    puVar5 = PTR_PTR_1126bddc8;
    _objc_alloc(PTR_PTR_1126bddc8);
    func_0x00010c027a60();
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
LAB_1057722a4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057722c4; end: 10577259b; -[SCThirdPartyAccessServiceClient getLoginDataForLoginSource:] */

void FUN_1057722c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar4 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126bddc0;
    func_0x00010bf87dc0(PTR_PTR_1126bddc0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3,param_2,puVar2,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bfe9c80(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126bdda8;
    func_0x00010c0cb140(PTR_PTR_1126bdda8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620();
    uVar5 = 1;
    if (param_3 == 2) {
      uVar5 = 2;
    }
    func_0x00010c1d9420(puVar3,param_2,uVar5);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010be5ba40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x105772450;
    puStack_58 = &UNK_1108b0570;
    puStack_50 = puVar2;
    lStack_48 = param_1;
    _objc_retain(puVar2);
    func_0x00010bfcb220(uVar6,param_2,puVar3,lVar1,&puStack_70);
    _objc_release(lVar1);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_50);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10577259c; end: 105772727; -[SCThirdPartyAccessServiceClient deleteLoginDataForLoginSource:] */

void FUN_10577259c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar4 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126bddc0;
    func_0x00010bf87dc0(PTR_PTR_1126bddc0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3,param_2,puVar2,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bfe9c80(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126bddb0;
    func_0x00010c0cb140(PTR_PTR_1126bddb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620();
    uVar5 = 1;
    if (param_3 == 2) {
      uVar5 = 2;
    }
    func_0x00010c1d9420(puVar3,param_2,uVar5);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010be5ba40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105772728;
    puStack_58 = &UNK_1108b05a0;
    puStack_50 = puVar2;
    lStack_48 = param_1;
    _objc_retain(puVar2);
    func_0x00010bf6cce0(uVar6,param_2,puVar3,lVar1,&puStack_70);
    _objc_release(lVar1);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_50);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105772728; end: 105772793;  */

void FUN_105772728(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2,param_2,puVar1);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010be70100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2,param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105772794; end: 1057728b3; -[SCThirdPartyAccessServiceClient _makeThirdPartyAccessServiceWithGRPCClientFactory:] */

void FUN_105772794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,30000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  uVar3 = param_3;
  func_0x00010bf56360(param_3,param_2,&PTR____CFConstantStringClassReference_110dfd418,puVar1,puVar2
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126bddb8;
  _objc_alloc(PTR_PTR_1126bddb8);
  func_0x00010c058f80();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057728b4; end: 1057728f7; -[SCThirdPartyAccessServiceClient _makeGRPCCallOptionsBuilder] */

void FUN_1057728b4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057728f8; end: 105772a47; -[SCThirdPartyAccessServiceClient _parseError:] */

void FUN_1057728f8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
LAB_105772a20:
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar2 = param_3;
    func_0x00010bf3ec40();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar2 == (undefined *)0x2) {
      puVar2 = PTR_PTR_1126bddc0;
      func_0x00010bf87dc0(PTR_PTR_1126bddc0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0x7d5;
    }
    else {
      puVar2 = param_3;
      func_0x00010bf3ec40();
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar2 == (undefined *)0x5) {
        puVar2 = PTR_PTR_1126bddc0;
        func_0x00010bf87dc0(PTR_PTR_1126bddc0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = 0x7d4;
      }
      else {
        puVar2 = param_3;
        func_0x00010bf3ec40();
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (puVar2 != (undefined *)0xd) goto LAB_105772a20;
        puVar2 = PTR_PTR_1126bddc0;
        func_0x00010bf87dc0(PTR_PTR_1126bddc0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = 0x7d3;
      }
    }
    func_0x00010bf99240(puVar1,param_2,puVar2,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105772a48; end: 105772a77; -[SCThirdPartyAccessServiceClient .cxx_destruct] */

void FUN_105772a48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105772a78; end: 105772aeb; -[UNISCThirdPartyAccessPbThirdPartyAccessService initWithUnifiedGrpcService:] */

undefined1 * FUN_105772a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea1a8;
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



/* Entry: 105772aec; end: 105772bcf; -[UNISCThirdPartyAccessPbThirdPartyAccessService createThirdPartyAccessDataWithRequest:callOptionsBuilder:handler:] */

void FUN_105772aec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bddd0;
  _objc_opt_class(PTR_PTR_1126bddd0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dfd478,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105772bd0; end: 105772cb3; -[UNISCThirdPartyAccessPbThirdPartyAccessService getThirdPartyAccessDataWithRequest:callOptionsBuilder:handler:] */

void FUN_105772bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bddd8;
  _objc_opt_class(PTR_PTR_1126bddd8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dfd498,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105772cb4; end: 105772d97; -[UNISCThirdPartyAccessPbThirdPartyAccessService deleteThirdPartyAccessDataWithRequest:callOptionsBuilder:handler:] */

void FUN_105772cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bdde0;
  _objc_opt_class(PTR_PTR_1126bdde0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dfd4b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105772d98; end: 105772da3; -[UNISCThirdPartyAccessPbThirdPartyAccessService .cxx_destruct] */

void FUN_105772d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105772da4; end: 105772e1f;  */

undefined * FUN_105772da4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfe08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dfd4d8,
                        &UNK_10ddbd060,&UNK_10ddbd074,3,FUN_105772e20,0);
    do {
      if (puRam00000001136bfe08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfe08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfe08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfe08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfe08;
}



/* Entry: 105772e20; end: 105772e2b;  */

bool FUN_105772e20(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105772e2c; end: 105772ea7;  */

undefined * FUN_105772e2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfe10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dfd4f8,
                        &UNK_10ddbd080,&UNK_10ddbd0b0,6,FUN_105772ea8,0);
    do {
      if (puRam00000001136bfe10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfe10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfe10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfe10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfe10;
}



/* Entry: 105772ea8; end: 105772eb3;  */

bool FUN_105772ea8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 105772eb4; end: 105772f1b; +[SCThirdPartyAccessPbAction descriptor] */

void FUN_105772eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a61750,
                        &PTR____CFConstantStringClassReference_110dfd518,&PTR_DAT_1130f9fd8,0,0,4,
                        0x1c);
    puRam00000001136bfe18 = puVar1;
  }
  return;
}



/* Entry: 105772f1c; end: 105772f83; +[SCThirdPartyAccessPbPartner descriptor] */

void FUN_105772f1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a617a0,
                        &PTR____CFConstantStringClassReference_110dfd538,&PTR_DAT_1130f9fd8,0,0,4,
                        0x1c);
    puRam00000001136bfe20 = puVar1;
  }
  return;
}



/* Entry: 105772f84; end: 105772feb; +[SCThirdPartyAccessPbAccessTokenData descriptor] */

void FUN_105772f84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a617f0,
                        &PTR____CFConstantStringClassReference_110dfd558,&PTR_DAT_1130f9fd8,
                        &PTR_s_accessToken_1130fa190,6,0x30,0x1c);
    puRam00000001136bfe28 = puVar1;
  }
  return;
}



/* Entry: 105772fec; end: 105773053; +[SCThirdPartyAccessPbCreateThirdPartyAccessDataRequest descriptor] */

void FUN_105772fec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a61840,
                        &PTR____CFConstantStringClassReference_110dfd578,&PTR_DAT_1130f9fd8,
                        &PTR_s_userId_1130fa250,7,0x38,0x1c);
    puRam00000001136bfe30 = puVar1;
  }
  return;
}



/* Entry: 105773054; end: 1057730bb; +[SCThirdPartyAccessPbCreateThirdPartyAccessDataResponse descriptor] */

void FUN_105773054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a61890,
                        &PTR____CFConstantStringClassReference_110dfd598,&PTR_DAT_1130f9fd8,
                        &PTR_s_token_1130f9ff0,1,0x10,0x1c);
    puRam00000001136bfe38 = puVar1;
  }
  return;
}



/* Entry: 1057730bc; end: 105773123; +[SCThirdPartyAccessPbGetThirdPartyAccessDataRequest descriptor] */

void FUN_1057730bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a618e0,
                        &PTR____CFConstantStringClassReference_110dfd5b8,&PTR_DAT_1130f9fd8,
                        &PTR_s_userId_1130fa090,4,0x20,0x1c);
    puRam00000001136bfe40 = puVar1;
  }
  return;
}



/* Entry: 105773124; end: 10577318b; +[SCThirdPartyAccessPbGetThirdPartyAccessDataResponse descriptor] */

void FUN_105773124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a61930,
                        &PTR____CFConstantStringClassReference_110dfd5d8,&PTR_DAT_1130f9fd8,
                        &PTR_DAT_1130fa010,1,0x10,0x1c);
    puRam00000001136bfe48 = puVar1;
  }
  return;
}



/* Entry: 10577318c; end: 1057731f3; +[SCThirdPartyAccessPbDeleteThirdPartyAccessDataRequest descriptor] */

void FUN_10577318c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a61980,
                        &PTR____CFConstantStringClassReference_110dfd5f8,&PTR_DAT_1130f9fd8,
                        &PTR_s_userId_1130fa110,4,0x20,0x1c);
    puRam00000001136bfe50 = puVar1;
  }
  return;
}



/* Entry: 1057731f4; end: 10577325b; +[SCThirdPartyAccessPbDeleteThirdPartyAccessDataResponse descriptor] */

void FUN_1057731f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a619d0,
                        &PTR____CFConstantStringClassReference_110dfd618,&PTR_DAT_1130f9fd8,0,0,4,
                        0x1c);
    puRam00000001136bfe58 = puVar1;
  }
  return;
}



/* Entry: 10577325c; end: 1057732c3; +[SCThirdPartyAccessPbRecordThirdPartyAccessActionRequest descriptor] */

void FUN_10577325c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a61a20,
                        &PTR____CFConstantStringClassReference_110dfd638,&PTR_DAT_1130f9fd8,
                        &PTR_s_userId_1130fa030,3,0x18,0x1c);
    puRam00000001136bfe60 = puVar1;
  }
  return;
}



/* Entry: 1057732c4; end: 10577332b; +[SCThirdPartyAccessPbRecordThirdPartyAccessActionResponse descriptor] */

void FUN_1057732c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a61a70,
                        &PTR____CFConstantStringClassReference_110dfd658,&PTR_DAT_1130f9fd8,0,0,4,
                        0x1c);
    puRam00000001136bfe68 = puVar1;
  }
  return;
}



/* Entry: 10577332c; end: 1057735bf; -[SCAuthenticatedWebBrowsingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10577332c(long param_1)

{
  undefined *puVar1;
  long lVar2;
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
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126bdde8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127290b4;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127290dc;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar20;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127290b8;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127290bc;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127290c0;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_1127290c4;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bef2160();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_1127290c8;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_1127290cc;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_1127290d0;
  lVar17 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bef64c0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar19 = lVar22;
  func_0x00010bef5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062ce0();
  lVar23 = (long)_DAT_1127290d4;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar21);
  _objc_release(lVar19);
  _objc_release(lVar22);
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
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfd0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar23),PTR_s_handleBegin_1125d1b00);
  return;
}



/* Entry: 1057735c0; end: 105773647; -[SCAuthenticatedWebBrowsingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057735c0(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar2 = &lStack_30;
  puVar1 = *(undefined1 **)(param_1 + _DAT_1127290d4);
  func_0x00010bfd1000();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) {
    puStack_28 = PTR_PTR_1126ea1b0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    plVar2 = (long *)puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 105773648; end: 1057736fb; -[SCAuthenticatedWebBrowsingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105773648(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127290c0);
  _objc_destroyWeak(param_1 + _DAT_1127290e0);
  _objc_destroyWeak(param_1 + _DAT_1127290dc);
  _objc_destroyWeak(param_1 + _DAT_1127290b8);
  _objc_destroyWeak(param_1 + _DAT_1127290bc);
  _objc_destroyWeak(param_1 + _DAT_1127290d0);
  _objc_destroyWeak(param_1 + _DAT_1127290cc);
  _objc_destroyWeak(param_1 + _DAT_1127290c8);
  _objc_destroyWeak(param_1 + _DAT_1127290c4);
  _objc_destroyWeak(param_1 + _DAT_1127290b4);
  _objc_destroyWeak(param_1 + _DAT_1127290d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127290d4,0);
  return;
}



/* Entry: 1057736fc; end: 10577387b; -[SCUnauthenticatedWebBrowsingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057736fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bdde8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127290e4;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_1127290f8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar10;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127290e8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127290ec;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062cc0();
  lVar12 = (long)_DAT_1127290f0;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfd0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar12),PTR_s_handleBegin_1125d1b00);
  return;
}



/* Entry: 10577387c; end: 105773903; -[SCUnauthenticatedWebBrowsingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10577387c(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar2 = &lStack_30;
  puVar1 = *(undefined1 **)(param_1 + _DAT_1127290f0);
  func_0x00010bfd1000();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) {
    puStack_28 = PTR_PTR_1126ea1b8;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    plVar2 = (long *)puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 105773904; end: 10577396f; -[SCUnauthenticatedWebBrowsingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105773904(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127290ec);
  _objc_destroyWeak(param_1 + _DAT_1127290f8);
  _objc_destroyWeak(param_1 + _DAT_1127290e8);
  _objc_destroyWeak(param_1 + _DAT_1127290e4);
  _objc_destroyWeak(param_1 + _DAT_1127290f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127290f0,0);
  return;
}



/* Entry: 105773970; end: 105773997; -[SCWebBrowsingEntryPointHandler initWithWebBrowsingScope:runtime:grapheneRegistry:circumstanceEngine:safeBrowsingServices:] */

void FUN_105773970(void)

{
  func_0x00010c062ce0();
  return;
}



/* Entry: 105773998; end: 105773bd7; -[SCWebBrowsingEntryPointHandler initWithWebBrowsingScope:runtime:grapheneRegistry:circumstanceEngine:safeBrowsingServices:adBrowserLifecycleService:adConfigProvider:webBrowsingConfigProvider:adWebviewConfigRepository:adTrackSeqNumProvider:] */

undefined8 *
FUN_105773998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  puStack_68 = PTR_PTR_1126ea1c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[10];
    puVar1[10] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 105773bd8; end: 10577448b; -[SCWebBrowsingEntryPointHandler handleBegin] */

void FUN_105773bd8(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  puVar10 = PTR_PTR_1126bddf0;
  func_0x00010bfe6000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  puVar4 = puVar10;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf9c2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c064340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010c2afe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(uVar5);
  puVar10 = puVar4;
  func_0x00010c2b0c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf8ba60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010c2acbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(uVar5);
  puVar10 = puVar4;
  func_0x00010c2baf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar10;
  func_0x00010c2af9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  lVar6 = *(long *)(param_1 + 8);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c247520();
  _objc_release(lVar6);
  puVar10 = puVar4;
  if (lVar7 == 1) {
    func_0x00010c2b0160();
    _objc_retainAutoreleasedReturnValue();
LAB_105773e34:
    _objc_release(puVar4);
    puVar4 = puVar10;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c247520();
    _objc_release(lVar6);
    if (lVar7 == 0x1a) {
      func_0x00010c2a82a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105773e34;
    }
  }
  puVar10 = puVar4;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar10;
  func_0x00010c08fa60();
  _objc_release(puVar10);
  puVar9 = puVar4;
  if (puVar8 == (undefined *)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a7bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar10);
  }
  puVar10 = puVar9;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010c08fa60();
  _objc_release(puVar10);
  puVar8 = puVar9;
  if (puVar4 == (undefined *)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a7ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar10);
  }
  puVar10 = puVar8;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = puVar8;
  if (puVar10 == (undefined *)0x0) {
    func_0x00010c2a7840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  lVar6 = *(long *)(param_1 + 8);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf96040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar7 != 0) {
    lVar6 = lVar7;
    func_0x00010bf96060(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010c2aee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar11);
    _objc_release(lVar6);
    lVar6 = lVar7;
    func_0x00010bf96060(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010bf45f80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010c2aee20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(lVar11);
    _objc_release(lVar6);
  }
  puVar10 = *(undefined **)(param_1 + 8);
  func_0x00010bf80740();
  if (((ulong)puVar10 & 1) == 0) {
    puVar10 = *(undefined **)(param_1 + 8);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010bf80020();
    if (((ulong)puVar8 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf83380();
      if ((int)uVar3 == 0) {
        uVar16 = *(ulong *)(param_1 + 8);
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar16;
        func_0x00010beee9a0();
        _objc_release(uVar16);
        _objc_release(uVar5);
        _objc_release(puVar10);
        if ((uVar17 & 1) == 0) {
          puVar8 = puVar4;
          func_0x00010bef47c0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar4;
          func_0x00010c2415a0(puVar4);
          puVar10 = puVar8;
          func_0x000107bb5e98(puVar8,puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          bVar2 = false;
          goto LAB_105774094;
        }
        goto LAB_10577407c;
      }
      _objc_release(uVar5);
    }
    _objc_release(puVar10);
  }
LAB_10577407c:
  bVar2 = true;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
LAB_105774094:
  puVar8 = puVar4;
  func_0x00010c2a99a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar11 = *(long *)(param_1 + 8);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  if (lVar6 == 0) {
    func_0x00010c2a77a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(lVar6);
  _objc_release(lVar11);
  lVar6 = *(long *)(param_1 + 8);
  func_0x00010c149100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar11 = *(long *)(param_1 + 0x20);
    func_0x00010c1490a0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
  }
  puVar4 = PTR_PTR_1126bddf8;
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bf9c2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07ed40();
  _objc_release(uVar5);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bfb4b40();
  uVar1 = (uint)uVar5 & ((uint)puVar4 ^ 1);
  _objc_release(uVar12);
  if (uVar1 == 1) {
    puVar4 = PTR_PTR_1126bde00;
    _objc_alloc();
    func_0x00010c000ec0();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf21640(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(puVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar4;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 == 0) {
      puVar4 = PTR_PTR_1126bde08;
      _objc_alloc();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010befd3e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040d60();
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      *(undefined **)(param_1 + 0x58) = puVar4;
      _objc_release(uVar12);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf21640(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + 8);
      func_0x00010c28f620(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 8);
      func_0x00010befd3e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      if (bVar2) {
        func_0x00010c1199a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c119840();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar18 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = uVar12;
      _objc_release(uVar18);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
    }
  }
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf217e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60();
  _objc_release(uVar5);
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ece0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(uVar5);
  }
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(puVar10);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10577448c; end: 105774603; -[SCWebBrowsingEntryPointHandler handleEnd] */

void FUN_10577448c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bec9780(param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1057745c0;
  }
  puVar2 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) goto LAB_105774530;
    func_0x00010bed0ce0(param_1);
  }
  else {
    _objc_release();
LAB_105774530:
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ece0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf6f440(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  func_0x00010c117720(*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
LAB_1057745c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105774604; end: 10577462f;  */

void FUN_105774604(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105774630; end: 105774667; -[SCWebBrowsingEntryPointHandler dismiss] */

void FUN_105774630(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105774668; end: 1057746a3; -[SCWebBrowsingEntryPointHandler didDismiss] */

void FUN_105774668(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf21640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a3120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057746a4; end: 1057746bb; -[SCWebBrowsingEntryPointHandler _syncCleanup] */

undefined8 FUN_1057746a4(void)

{
  func_0x00010bddf3e0();
  return 0;
}



/* Entry: 1057746bc; end: 1057746df; -[SCWebBrowsingEntryPointHandler _uiContainerDidFinishCleanup] */

void FUN_1057746bc(long param_1)

{
  func_0x00010bddf3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1057746e0; end: 105774757; -[SCWebBrowsingEntryPointHandler _cleanup] */

void FUN_1057746e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c075540();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010c138000(*(undefined8 *)(param_1 + 0x58),param_2,1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105774758; end: 10577477f; -[SCWebBrowsingEntryPointHandler _circumstanceEngine] */

void FUN_105774758(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


