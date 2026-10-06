/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055704c0; end: 1055705ab;  */

void FUN_1055704c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    puVar5 = PTR_PTR_1126bada0;
    _objc_alloc(PTR_PTR_1126bada0);
    lVar1 = param_1;
    func_0x0001003ed054(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa46e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x0001003ed054(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c085220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012680(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055705ac; end: 105570663; -[CTPRepositoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055705ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725abc);
  _objc_destroyWeak(param_1 + _DAT_112725ab8);
  _objc_destroyWeak(param_1 + _DAT_112725ab4);
  _objc_destroyWeak(param_1 + _DAT_112725ad8);
  _objc_destroyWeak(param_1 + _DAT_112725ad4);
  _objc_destroyWeak(param_1 + _DAT_112725ad0);
  _objc_destroyWeak(param_1 + _DAT_112725acc);
  _objc_destroyWeak(param_1 + _DAT_112725ac8);
  _objc_destroyWeak(param_1 + _DAT_112725ac4);
  _objc_destroyWeak(param_1 + _DAT_112725ac0);
  _objc_storeStrong(param_1 + _DAT_112725ab0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725aac,0);
  return;
}



/* Entry: 105570664; end: 1055706df; -[CTPCacheClearingServiceImpl initWithFeedPersistenceService:itemPersistenceService:] */

long FUN_105570664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1055706e0; end: 10557081b; -[CTPCacheClearingServiceImpl clearCacheTokenForFeedTreesContext:clearChildNodes:] */

void FUN_1055706e0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf6bd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (param_4 == 0) {
    _objc_retain(puVar5);
    puVar1 = puVar5;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6cc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126ae6b8;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_58 = puVar5;
    uStack_50 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126b0cb0;
    _objc_alloc(PTR_PTR_1126b0cb0);
    func_0x00010c0559c0();
    puVar5 = *(undefined **)(puVar5 + 0x10);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010bf6cc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10557081c; end: 10557089f; -[CTPCacheClearingServiceImpl clearCacheTokenForFeedType:context:] */

void FUN_10557081c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6cc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1055708a0; end: 1055708cf; -[CTPCacheClearingServiceImpl .cxx_destruct] */

void FUN_1055708a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055708d0; end: 1055708fb; -[CTPRepositoryExperimentsABTweak customStickerSyncAttemptCount] */

long FUN_1055708d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110deabf8,10,0);
  return (long)(int)uVar1;
}



/* Entry: 1055708fc; end: 10557092b; -[CTPRepositoryExperimentsABTweak customStickerSyncAttemptMaxDurationSeconds] */

long FUN_1055708fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110deac18,0x15180,0);
  return (long)(int)uVar1;
}



/* Entry: 10557092c; end: 10557095b; -[CTPRepositoryExperimentsABTweak .cxx_destruct] */

void FUN_10557092c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10557095c; end: 1055709d7;  */

void FUN_10557095c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  uVar1 = param_1;
  if (param_2 < 8) {
    func_0x00010c2ac460(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055709d8; end: 105570a4b; -[CTPRepositoryLoggerImplementation initWithGrapheneRegistry:] */

undefined1 * FUN_1055709d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8fc8;
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



/* Entry: 105570a4c; end: 105570b13; -[CTPRepositoryLoggerImplementation logFeedsTreeWithContext:] */

void FUN_105570a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126baca8;
  func_0x00010c2663c0(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  FUN_10557095c(puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105570b14; end: 105570bf7; -[CTPRepositoryLoggerImplementation logItemsWithFeedName:] */

void FUN_105570b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126baca8;
  _objc_retain(param_3);
  func_0x00010c2663c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105570bf8; end: 105570caf; -[CTPRepositoryLoggerImplementation logEmptyResultItemsForFeed:] */

void FUN_105570bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126baca8;
  _objc_retain(param_3);
  func_0x00010bf8ec60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105570cb0; end: 105570d67; -[CTPRepositoryLoggerImplementation logFailedItemsResultForFeed:] */

void FUN_105570cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126baca8;
  _objc_retain(param_3);
  func_0x00010bf98cc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105570d68; end: 105570e2f; -[CTPRepositoryLoggerImplementation logFeedsTreeResponseWithContext:] */

void FUN_105570d68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126baca8;
  func_0x00010c266480(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_10557095c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105570e30; end: 105570ef7; -[CTPRepositoryLoggerImplementation logFeedCacheHitWithContext:] */

void FUN_105570e30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126baca8;
  func_0x00010bf26720(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_10557095c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105570ef8; end: 105570fbf; -[CTPRepositoryLoggerImplementation logFeedCacheMissWithContext:] */

void FUN_105570ef8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126baca8;
  func_0x00010bf26ac0(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_10557095c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105570fc0; end: 1055710bf; -[CTPRepositoryLoggerImplementation logFailedDeltaSync:isInitialSync:] */

void FUN_105570fc0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126baca8;
  _objc_retain(param_3);
  func_0x00010bf9fc00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dead38,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1055710c0; end: 10557127b; -[CTPRepositoryLoggerImplementation logComputeLoaderFinalResult:context:feedType:] */

void FUN_1055710c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126baca8;
  func_0x00010bf458c0(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dead58,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dae878,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dad058,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10557127c; end: 105571287; -[CTPRepositoryLoggerImplementation .cxx_destruct] */

void FUN_10557127c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105571288; end: 105571307; -[CTPColdObservable initWithOnSubscribeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105571288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8fd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112725af0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725af0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105571308; end: 10557137f; -[CTPColdObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105571308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112725af0);
  pcVar3 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_3);
  (*pcVar3)(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105571380; end: 105571393; -[CTPColdObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105571380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725af0,0);
  return;
}



/* Entry: 105571394; end: 105571597; -[CTPFeedsRepositoryImplementation initWithNetworkFeedsClient:feedsPersistenceService:experiments:logger:circumstanceEngine:kmpFeedsPersistenceService:crashLogger:preferences:creativeToolsABProvider:] */

undefined1 *
FUN_105571394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e8fd8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
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



/* Entry: 105571598; end: 1055716b3; -[CTPFeedsRepositoryImplementation feedsTreeWithContext:supportedFeedTypes:] */

void FUN_105571598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6520();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126badb0;
  _objc_alloc(PTR_PTR_1126badb0);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055716b4;
  puStack_70 = &UNK_1108974c8;
  lStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  _objc_retain(param_4);
  func_0x00010c031700(puVar2,param_2,&puStack_88);
  puVar3 = puVar2;
  func_0x00010bf87460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_60);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055716b4; end: 105571707;  */

void FUN_1055716b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105571708; end: 10557179b;  */

void FUN_105571708(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2353c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be990c0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6500();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10557179c; end: 105571897; -[CTPFeedsRepositoryImplementation feedsTreeWithCacheLookupWithContext:supportedFeedTypes:] */

void FUN_10557179c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126badb0;
  _objc_alloc(PTR_PTR_1126badb0);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c031700(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105571898; end: 10557191f;  */

void FUN_105571898(long param_1,undefined8 param_2)

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
    lVar2 = lVar1;
    func_0x00010be42360(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20));
    lVar3 = lVar1;
    if ((int)lVar2 == 0) {
      func_0x00010bdd75e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x20),1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be4d340(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105571920; end: 1055719ef; -[CTPFeedsRepositoryImplementation feedsTreeForPreview] */

void FUN_105571920(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1055719f0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfa4780(param_1,param_2,2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105571a94;
  puStack_40 = &UNK_110849f28;
  lVar4 = lVar3;
  lStack_38 = param_1;
  func_0x00010bf87460(lVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1055719f0; end: 105571a93;  */

void FUN_1055719f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c0309a0();
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105571a94; end: 105571b03;  */

void FUN_105571a94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2353c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be990c0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105571b04; end: 105571b13; -[CTPFeedsRepositoryImplementation feedsTreeForComments] */

void FUN_105571b04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_feedsTreeWithCacheLookupWithCont_1125c6b88,6,
             &PTR__OBJC_CLASS___NSConstantArray_11117edd8);
  return;
}



/* Entry: 105571b14; end: 105571c0b; -[CTPFeedsRepositoryImplementation feedsTreeForChat] */

void FUN_105571b14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000105571b68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4780(param_1,param_2,3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105571c0c; end: 105571c17; -[CTPFeedsRepositoryImplementation feedNodeForContext:type:forceLoad:] */

void FUN_105571c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd75d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__cacheBasedFeedNodeWithContext_t_112553710,param_3,param_4,0,param_5);
  return;
}



/* Entry: 105571c18; end: 105571c77; -[CTPFeedsRepositoryImplementation _saveFeedResultToKmpStorage:context:] */

void FUN_105571c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105571c78;
  puStack_28 = &UNK_1108975a8;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0c0800(param_3,param_2,&puStack_40,&PTR___NSConcreteGlobalBlock_1108975d8);
  return;
}



/* Entry: 105571c78; end: 10557212b;  */

void FUN_105571c78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_2f0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar7 = param_2;
  func_0x00010bf38dc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2f0 = lVar7;
  func_0x00010bf52a60();
  if (lStack_2f0 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    lVar8 = *plStack_1c0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1c0 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        lVar12 = *(long *)(lStack_1c8 + lVar10 * 8);
        lVar1 = lVar12;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar1;
        func_0x00010c27dd80();
        _objc_release(lVar1);
        if (lVar11 == 0xb) {
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          lStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          plStack_200 = (long *)0x0;
          func_0x00010bf38dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar12;
          func_0x00010bf52a60();
          if (lVar1 != 0) {
            lVar11 = *plStack_200;
            do {
              lVar14 = 0;
              do {
                if (*plStack_200 != lVar11) {
                  _objc_enumerationMutation(lVar12);
                }
                lVar13 = *(long *)(lStack_208 + lVar14 * 8);
                lVar2 = lVar13;
                func_0x00010bfa3d00();
                _objc_retainAutoreleasedReturnValue();
                lVar3 = lVar2;
                func_0x00010c27dd80();
                _objc_release(lVar2);
                if (lVar3 == 5) {
                  _objc_retain(lVar13);
                  _objc_release(lVar9);
                  lVar9 = lVar13;
                  goto LAB_105571e48;
                }
                lVar14 = lVar14 + 1;
              } while (lVar1 != lVar14);
              lVar1 = lVar12;
              func_0x00010bf52a60();
            } while (lVar1 != 0);
          }
LAB_105571e48:
          _objc_release(lVar12);
        }
        if (lVar9 == 0) goto LAB_1055720a0;
        uStack_240 = 0;
        uStack_230 = 0x3032000000;
        pcStack_228 = FUN_10557212c;
        uStack_220 = 0x10557213c;
        uStack_218 = 0;
        lVar1 = lVar9;
        puStack_238 = &uStack_240;
        func_0x00010c247520(lVar9);
        _objc_retainAutoreleasedReturnValue();
        puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_260 = 0xc2000000;
        pcStack_258 = FUN_105572144;
        puStack_250 = &UNK_110897558;
        puStack_248 = &uStack_240;
        func_0x00010c0bd420();
        _objc_release(lVar1);
        if (puStack_238[5] == 0) {
          __Block_object_dispose(&uStack_240,8);
          _objc_release(uStack_218);
          goto LAB_1055720a0;
        }
        puStack_290 = &uStack_298;
        uStack_298 = 0;
        uStack_288 = 0x3032000000;
        pcStack_280 = FUN_10557212c;
        uStack_278 = 0x10557213c;
        uStack_270 = 0;
        uVar4 = puStack_238[5];
        func_0x00010bfe5ec0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bee80();
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puStack_238[5];
        func_0x00010c087060(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar9;
        func_0x00010bfa3d00(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        FUN_105582eb4(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef90e0(uVar4);
        _objc_release(uVar6);
        _objc_release(lVar1);
        _objc_release(uVar5);
        _objc_release(uVar4);
        __Block_object_dispose(&uStack_298,8);
        _objc_release(uStack_270);
        __Block_object_dispose(&uStack_240,8);
        _objc_release(uStack_218);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lStack_2f0);
      lStack_2f0 = lVar7;
      func_0x00010bf52a60();
    } while (lStack_2f0 != 0);
  }
LAB_1055720a0:
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    lVar7 = 8;
    __Block_object_dispose(&uStack_240);
    __Unwind_Resume();
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 10557212c; end: 105572143;  */

void FUN_10557212c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105572144; end: 1055721b3;  */

void FUN_105572144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055721b4; end: 1055721b7;  */

void FUN_1055721b4(void)

{
  return;
}



/* Entry: 1055721b8; end: 105572263;  */

void FUN_1055721b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  puVar2 = PTR_PTR_1126b3e98;
  func_0x00010bf60460(PTR_PTR_1126b3e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132d60(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105572264; end: 105572267;  */

void FUN_105572264(void)

{
  return;
}



/* Entry: 105572268; end: 10557235f; -[CTPFeedsRepositoryImplementation _cacheBasedFeedNodeWithContext:type:checkCacheDuration:network:] */

void FUN_105572268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010be4d320();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_68,auStack_48);
  uVar2 = uVar1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_6;
  func_0x00010bfb2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105572360; end: 1055724af;  */

void FUN_105572360(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10557212c;
    uStack_40 = 0x10557213c;
    uStack_38 = 0;
    func_0x00010c0c0800(param_2);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055724b0; end: 1055728a3;  */

undefined * FUN_1055724b0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  puVar5 = param_2;
  func_0x00010bf38dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar2 = puVar1;
  func_0x00010bf38dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar2);
      }
      lVar11 = *(long *)((long)puVar12 * 8);
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar11;
      func_0x00010c27dd80();
      lVar10 = *(long *)(param_1 + 0x38);
      _objc_release(lVar11);
      puVar4 = PTR_PTR_1126ae6b8;
      if (lVar3 == lVar10) {
        puVar5 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar8 = *(undefined8 *)(lVar9 + 0x28);
        *(undefined **)(lVar9 + 0x28) = puVar4;
        _objc_release(uVar8);
        _objc_release(puVar5);
        goto LAB_105572640;
      }
      puVar12 = puVar12 + 1;
    } while (puVar5 != puVar12);
    puVar5 = puVar2;
    func_0x00010bf52a60();
  }
LAB_105572640:
  _objc_release(puVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
    puVar2 = param_2;
    func_0x00010bf38dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(puVar2);
        }
        lVar11 = *(long *)((long)puVar12 * 8);
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar11;
        func_0x00010c27dd80();
        lVar10 = *(long *)(param_1 + 0x38);
        _objc_release(lVar11);
        puVar4 = PTR_PTR_1126ae6b8;
        if (lVar3 == lVar10) {
          puVar5 = PTR_PTR_1126af5d0;
          func_0x00010c2619e0(PTR_PTR_1126af5d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0860a0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          uVar8 = *(undefined8 *)(lVar9 + 0x28);
          *(undefined **)(lVar9 + 0x28) = puVar4;
          _objc_release(uVar8);
          _objc_release(puVar5);
          goto LAB_105572770;
        }
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar2;
      func_0x00010bf52a60();
    }
LAB_105572770:
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126ae6b8;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        if (*(long *)(param_1 + 0x40) == 3) {
          func_0x000105571b68();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x20);
          func_0x00010c269d40(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar5;
          FUN_1055719f0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
        }
        puVar5 = *(undefined **)(param_1 + 0x28);
        func_0x00010be4d340();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar2 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar8 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined **)(lVar9 + 0x28) = puVar5;
      _objc_release(uVar8);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010bfa3d00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c27dd80();
  _objc_release(puVar6);
  return (undefined *)(ulong)(puVar5 == (undefined *)0xb);
}



/* Entry: 1055728a4; end: 1055728e7;  */

bool FUN_1055728a4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c27dd80();
  _objc_release(param_2);
  return lVar1 == 0xb;
}



/* Entry: 1055728e8; end: 1055729eb;  */

void FUN_1055728e8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ae6b8;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(long *)(param_1 + 0x38) == 3) {
      func_0x000105571b68();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010c269d40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      FUN_1055719f0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010be4d340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055729ec; end: 105572aff; -[CTPFeedsRepositoryImplementation _cacheBasedFeedTreeWithContext:supportedFeedTypes:checkCacheDuration:] */

void FUN_1055729ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be4d320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010bfb2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105572b00; end: 105572c67;  */

void FUN_105572b00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10557212c;
  uStack_50 = 0x10557213c;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105572c68;
  puStack_88 = &UNK_1108976c8;
  puStack_68 = puStack_78;
  _objc_retain(param_2);
  uStack_80 = param_2;
  _objc_copyWeak(auStack_b0,param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_80);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105572c68; end: 105572d07;  */

void FUN_105572c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105572d08; end: 105572d9f; -[CTPFeedsRepositoryImplementation _setNewSupportedFeedTypesForContext:supportedFeedTypes:] */

void FUN_105572d08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dead78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105572da0; end: 105572e8f; -[CTPFeedsRepositoryImplementation _isNewSupportedFeedTypesForContext:supportedFeedTypes:] */

uint FUN_105572da0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c071b60(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(puVar1);
  return (uint)uVar3 ^ 1;
}



/* Entry: 105572e90; end: 105572fcf; -[CTPFeedsRepositoryImplementation _loadFeedFromCacheForContext:checkCacheDuration:] */

void FUN_105572e90(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa4000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(puVar1);
  func_0x00010c297260(uVar3);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105572fd0; end: 105573157;  */

void FUN_105572fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10557312c;
  if ((*(char *)(param_1 + 0x40) == '\x01') &&
     (lVar2 = lVar1, func_0x00010be40660(), (int)lVar2 == 0)) {
LAB_1055730d4:
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6060();
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = *(long *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfa3be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar3);
    if (lVar2 == 0) goto LAB_1055730d4;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6040();
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar5);
LAB_10557312c:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105573158; end: 1055732cf; -[CTPFeedsRepositoryImplementation _saveFeedToCacheForContext:feedResponse:] */

void FUN_105573158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126bacb0;
  _objc_alloc(PTR_PTR_1126bacb0);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c004280(puVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055732d0; end: 1055733eb;  */

void FUN_1055732d0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar5 = PTR_PTR_1126af5d0;
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bf63640(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfa3be0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(uVar2);
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055733ec; end: 10557351b; -[CTPFeedsRepositoryImplementation _loadFeedFromNetworkAndSaveToDBForContext:supportedFeedTypes:] */

void FUN_1055733ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uVar1 = uVar2;
  func_0x00010bfb2660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10557351c; end: 105573703;  */

void FUN_10557351c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10557212c;
  uStack_40 = 0x10557213c;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10557212c;
  uStack_70 = 0x10557213c;
  uStack_68 = 0;
  func_0x00010c0c0800(param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  if (puStack_88[5] == 0) {
    puVar1 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010be990e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea5de0();
    _objc_release(param_1);
    puVar1 = puVar2;
    func_0x00010c0b8600(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105573704; end: 105573773;  */

void FUN_105573704(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105573774; end: 10557386f;  */

void FUN_105573774(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10557212c;
  uStack_30 = 0x10557213c;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105573870; end: 1055738ff;  */

void FUN_105573870(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105573900; end: 105573993; -[CTPFeedsRepositoryImplementation _isFeedValid:] */

bool FUN_105573900(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + 0x38);
    _objc_retain(param_4);
    func_0x00010c0b5020(lVar1,param_3,&PTR____CFConstantStringClassReference_110dead98,0x93a80,0);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    dVar2 = param_1;
    func_0x00010c08a800(param_4);
    _objc_release(param_4);
    return param_1 - dVar2 <= (double)lVar1;
  }
  return false;
}



/* Entry: 105573994; end: 105573a23; -[CTPFeedsRepositoryImplementation .cxx_destruct] */

void FUN_105573994(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105573a24; end: 105573b73; -[CTPItemsRepositoryImplementation initWithNetworkItemsClient:itemsLoaders:itemsPersistenceService:experiments:logger:] */

undefined1 *
FUN_105573a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e8fe0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010be89900(puVar1);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
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



/* Entry: 105573b74; end: 105573d27; -[CTPItemsRepositoryImplementation _registerLoaders:] */

void FUN_105573b74(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
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
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_128 + lVar11 * 8);
        lVar3 = lVar9;
        func_0x00010c09cb00();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar3 != 0) {
          func_0x00010c09cb00(lVar9);
          func_0x00010c0df840(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar1);
          }
          _objc_release(puVar4);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar4;
  _objc_release(uVar8);
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105573d28;
  uStack_160 = unaff_x22;
  puStack_158 = puVar1;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  puVar6 = (undefined1 *)puVar7;
  func_0x00010c247520(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd420();
  _objc_release(puVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 105573d28; end: 105573e7f; -[CTPItemsRepositoryImplementation _loaderForFeed:] */

void FUN_105573d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd420();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105573e80; end: 105573ebb;  */

void FUN_105573e80(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 105573ebc; end: 105573f53; -[CTPItemsRepositoryImplementation itemsForFeed:itemFetchStrategy:] */

void FUN_105573ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 unaff_x21;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
    func_0x00010bde8a80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
  }
  else {
    if (param_4 == 1) {
      uVar1 = 1;
    }
    else {
      if (param_4 != 0) goto LAB_105573f38;
      uVar1 = 0;
    }
    func_0x00010be46160(param_1,param_2,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
  }
LAB_105573f38:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 105573f54; end: 105573f6b; -[CTPItemsRepositoryImplementation itemsForFeed:pageToken:pageSize:itemFetchStrategy:] */

void FUN_105573f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be46190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__itemsForFeed_returnCachedFirst__11256f200,param_3,param_6 == 1,param_4,
             param_5);
  return;
}



/* Entry: 105573f6c; end: 105573f77; -[CTPItemsRepositoryImplementation _itemsForFeed:returnCachedFirst:] */

void FUN_105573f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be46190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__itemsForFeed_returnCachedFirst__11256f200,param_3,param_4,0,0);
  return;
}



/* Entry: 105573f78; end: 105574183; -[CTPItemsRepositoryImplementation _itemsForFeed:returnCachedFirst:pageToken:pageSize:] */

void FUN_105573f78(long param_1,undefined8 param_2,undefined *param_3,undefined1 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110deadf8,2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a90a0(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126badb0;
    _objc_alloc(PTR_PTR_1126badb0);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105574184;
    puStack_90 = &UNK_110897838;
    lStack_88 = param_1;
    _objc_retain(param_3);
    puStack_80 = param_3;
    uStack_68 = 0 < param_6;
    _objc_retain(param_5);
    uStack_78 = param_5;
    lStack_70 = param_6;
    uStack_67 = param_4;
    func_0x00010c031700(puVar3,param_2,&puStack_a8);
    puStack_d8 = puVar2;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_105574388;
    puStack_c0 = &UNK_11088c530;
    lStack_b8 = param_1;
    _objc_retain(param_3);
    puVar4 = puVar3;
    puStack_b0 = param_3;
    func_0x00010bf87460(puVar3,param_2,&puStack_d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_b0);
    _objc_release(puVar3);
    _objc_release(uStack_78);
    puVar2 = puStack_80;
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105574184; end: 105574387;  */

void FUN_105574184(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010be4f000(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar9);
  }
  else {
    puVar7 = puVar1;
    if (*(char *)(param_1 + 0x40) == '\x01') {
      param_2 = PTR_PTR_1126bad88;
      _objc_opt_class(PTR_PTR_1126bad88);
      puVar9 = puVar1;
      _objc_opt_isKindOfClass(puVar1,param_2);
      if (((ulong)puVar9 & 1) != 0) {
        func_0x00010c0850e0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105574348;
      }
    }
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    if (lVar3 != 0x11) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      _objc_release(uVar4);
    }
    _objc_release(lVar2);
    func_0x00010c085100();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105574348:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(puVar1 + 0x28);
    _objc_retain(*(undefined8 *)(puVar1 + 0x28));
    uVar10 = *(undefined8 *)(puVar1 + 0x28);
    _objc_retain(*(undefined8 *)(puVar1 + 0x28));
    func_0x00010c0c0800(param_2);
    _objc_release(uVar10);
    _objc_release(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105574388; end: 105574457;  */

void FUN_105574388(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c0800(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105574458; end: 10557452f;  */

void FUN_105574458(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf529e0();
  if (param_2 != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d4f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5720(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105574530; end: 1055746f7; -[CTPItemsRepositoryImplementation _continuouslyUpdatingItemsForFeed:] */

void FUN_105574530(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x22;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110deadf8,2,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae6b8;
    puVar4 = unaff_x22;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be4f000(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
      puVar4 = param_3;
      func_0x00010bf4fe40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1055746b0;
    }
    ppuStack_58 = &PTR____CFConstantStringClassReference_110deae18;
    unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110deadf8,1,unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae6b8;
    puVar4 = puVar3;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(unaff_x22);
LAB_1055746b0:
  _objc_release(param_1);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_1055746f8;
    puStack_90 = unaff_x22;
    puStack_88 = puVar1;
    puStack_80 = param_1;
    puStack_78 = param_3;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puVar1 = PTR_PTR_1126badb0;
    _objc_alloc(PTR_PTR_1126badb0);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10557479c;
    puStack_a8 = &UNK_110897868;
    puStack_a0 = puVar2;
    puStack_98 = puVar4;
    _objc_retain(puVar4);
    func_0x00010c031700(puVar1,param_2,&puStack_c0);
    _objc_release(puStack_98);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055746f8; end: 10557479b; -[CTPItemsRepositoryImplementation deprecated_cameoItemsWithSession:] */

void FUN_1055746f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126badb0;
  _objc_alloc(PTR_PTR_1126badb0);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10557479c;
  puStack_48 = &UNK_110897868;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c031700(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10557479c; end: 1055747ef;  */

void FUN_10557479c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6db40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055747f0; end: 105574993; -[CTPItemsRepositoryImplementation _checkValidityAndLoadItemsFromCacheForFeed:withSession:] */

void FUN_1055747f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfa4280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar4);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105574994; end: 105574a53;  */

void FUN_105574994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be40660();
    if ((int)lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar3);
    }
    else {
      func_0x00010be4dc20(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105574a54; end: 105574bcf; -[CTPItemsRepositoryImplementation _loadItemsFromCacheForFeed:withSession:withSubject:] */

void FUN_105574a54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c085120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c297260(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105574bd0; end: 105574cf7;  */

void FUN_105574bd0(long param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
    }
    else {
      puVar3 = param_2;
      func_0x00010c0b8600(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105574cf8; end: 105574d87;  */

void FUN_105574cf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010bf5d7e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105574d88; end: 105574ea7; -[CTPItemsRepositoryImplementation _persistedItemsWithIndexRankFromRawItems:feed:] */

void FUN_105574d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = param_4;
  func_0x00010c247520(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105574eac;
  puStack_68 = &UNK_110897938;
  uStack_60 = param_3;
  uStack_58 = param_1;
  uStack_50 = param_4;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bd420(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110897918,&puStack_80,
                      &PTR___NSConcreteGlobalBlock_110897968);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105574ea8; end: 105574eab;  */

void FUN_105574ea8(void)

{
  return;
}



/* Entry: 105574eac; end: 10557501b;  */

void FUN_105574eac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar9 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar2,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf5d7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126bacd0;
      _objc_alloc(PTR_PTR_1126bacd0);
      uVar3 = uVar4;
      func_0x00010c0844e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126badb8;
      func_0x00010c11fda0(PTR_PTR_1126badb8,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfa3d00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ffe0(puVar5,param_2,uVar3,puVar6,uVar2,0,uVar7,0,0,0,0);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(uVar3);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      uVar9 = uVar9 + 1;
      uVar8 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
    } while (uVar9 < uVar8);
  }
  return;
}



/* Entry: 10557501c; end: 10557501f;  */

void FUN_10557501c(void)

{
  return;
}



/* Entry: 105575020; end: 10557511b; -[CTPItemsRepositoryImplementation _saveItemsToCacheObservableForFeed:items:] */

void FUN_105575020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be73680(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be993e0(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10557511c;
  puStack_50 = &UNK_1108979b8;
  uStack_48 = uVar1;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10557511c; end: 105575287;  */

void FUN_10557511c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105575288;
  uStack_60 = 0x105575298;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105575288; end: 10557529f;  */

void FUN_105575288(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055752a0; end: 105575347;  */

void FUN_1055752a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105575348;
  puStack_30 = &UNK_1108978c8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b8600(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105575348; end: 1055753d7;  */

void FUN_105575348(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010bf5d7e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055753d8; end: 10557541f;  */

void FUN_1055753d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105575420; end: 1055755a3; -[CTPItemsRepositoryImplementation _saveItemsToCacheForFeed:items:] */

void FUN_105575420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  uVar3 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1055755a4;
  puStack_78 = &UNK_1108979e8;
  uStack_70 = param_1;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(puVar2);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1055756f0;
  puStack_b8 = &UNK_110897938;
  uStack_b0 = param_1;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  puStack_98 = puVar2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bd420(uVar3,param_2,&puStack_90,&puStack_d0,&PTR___NSConcreteGlobalBlock_110897a18);
  _objc_release(uVar3);
  puVar1 = puStack_98;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055755a4; end: 105575697;  */

void FUN_1055755a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c28f160(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30),0,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105575698;
  puStack_50 = &UNK_11084e010;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uStack_48 = uVar4;
  func_0x00010c297260(uVar3,param_2,&puStack_68,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105575698; end: 1055756ef;  */

void FUN_105575698(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055756f0; end: 1055757e3;  */

void FUN_1055756f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c1b6480(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30),0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055757e4;
  puStack_50 = &UNK_11084e010;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uStack_48 = uVar4;
  func_0x00010c297260(uVar3,param_2,&puStack_68,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1055757e4; end: 10557583b;  */

void FUN_1055757e4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10557583c; end: 10557583f;  */

void FUN_10557583c(void)

{
  return;
}



/* Entry: 105575840; end: 1055758b3; -[CTPItemsRepositoryImplementation _isFeedValid:] */

bool FUN_105575840(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010c26f3c0(puVar1);
    dVar2 = param_1;
    func_0x00010c08a800(param_4);
    _objc_release(param_4);
    return param_1 - dVar2 <= 86400.0;
  }
  return false;
}


