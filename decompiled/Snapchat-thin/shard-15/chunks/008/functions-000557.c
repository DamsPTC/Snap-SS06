/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcb978c; end: 10bcb979f; -[SCDoOnDisposeObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb978c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966a0,0);
  return;
}



/* Entry: 10bcb97a0; end: 10bcb97fb; -[SCObservable doOnDispose:] */

void FUN_10bcb97a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2eb0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033ae0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb97fc; end: 10bcb9803; -[SCFilteredObserver complete] */

void FUN_10bcb97fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcb9804; end: 10bcb9833; -[SCFilteredObserver .cxx_destruct] */

void FUN_10bcb9804(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb9834; end: 10bcb98c3; -[SCFlatMappedLatestObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bcb9834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e4a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127966b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127966b4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb98c4; end: 10bcb995f; -[SCFlatMappedLatestObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb98c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0f3c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126e2ed8;
  _objc_alloc(PTR_PTR_1126e2ed8);
  func_0x00010c030e60();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c25fd20(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bcb9960; end: 10bcb9973; -[SCFlatMappedLatestObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb9960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966b4,0);
  return;
}



/* Entry: 10bcb9974; end: 10bcb99cf; -[SCObservable flatMapLatest:] */

void FUN_10bcb9974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2ee0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033ac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb99d0; end: 10bcb9a07; -[SCMappedObserver .cxx_destruct] */

void FUN_10bcb99d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bcb9a08; end: 10bcb9aff; -[SCMultiDisposable dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb9a08(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + _DAT_1127966cc);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bf86d40(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + _DAT_1127966cc,0);
  return;
}



/* Entry: 10bcb9b00; end: 10bcb9b13; -[SCMultiDisposable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb9b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966cc,0);
  return;
}



/* Entry: 10bcb9b14; end: 10bcb9b7b;  */

void FUN_10bcb9b14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcb9b7c; end: 10bcb9bb3; -[SCQueuePerformerObserver .cxx_destruct] */

void FUN_10bcb9b7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bcb9bb4; end: 10bcb9c2f;  */

void FUN_10bcb9bb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f3c20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25fd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c190960(lVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10bcb9c30; end: 10bcb9c5f; -[SCObservable publish] */

void FUN_10bcb9c30(void)

{
  _objc_alloc(PTR_PTR_1126e2f30);
  func_0x00010c033a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb9c60; end: 10bcb9ddf; -[SCPublishedObservable initWithParentObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10bcb9c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_11270e4e0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b7e38;
    func_0x00010c131720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127966f0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127966f0) = puVar3;
    _objc_release(uVar4);
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    uVar4 = param_3;
    func_0x00010c25ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127966f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127966f4) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10bcb9de0; end: 10bcb9df3;  */

void FUN_10bcb9de0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 10bcb9df4; end: 10bcb9e03; -[SCPublishedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb9df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127966f4),PTR_s_subscribe__112675970);
  return;
}



/* Entry: 10bcb9e04; end: 10bcb9e43; -[SCPublishedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb9e04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127966f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966f4,0);
  return;
}



/* Entry: 10bcb9e44; end: 10bcb9eb7; -[SCObservable scanWithinInitialValue:accumulator:] */

void FUN_10bcb9e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2f38;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033a80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb9eb8; end: 10bcb9f7f; -[SCScanObservable initWithParentObservable:initialValue:accumulator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bcb9eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270e4f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127966fc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796700);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796700) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb9f80; end: 10bcba023; -[SCScanObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb9f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0f3c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126e2f40;
  _objc_alloc(PTR_PTR_1126e2f40);
  func_0x00010c030e20();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c25fd20(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bcba024; end: 10bcba063; -[SCScanObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba024(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127966fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796700,0);
  return;
}



/* Entry: 10bcba064; end: 10bcba137; -[SCScanObserver initWithObserver:initialValue:accumulator:] */

undefined1 *
FUN_10bcba064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270e4f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcba138; end: 10bcba1af; -[SCScanObserver next:] */

void FUN_10bcba138(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x18),param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10bcba1b0; end: 10bcba1b7; -[SCScanObserver complete] */

void FUN_10bcba1b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcba1b8; end: 10bcba1f3; -[SCScanObserver .cxx_destruct] */

void FUN_10bcba1b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcba1f4; end: 10bcba257; -[SCObservable share] */

void FUN_10bcba1f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2f48;
  _objc_alloc(PTR_PTR_1126e2f48);
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  func_0x00010c033ba0(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcba258; end: 10bcba2cb; -[SCObservable shareReplay:] */

void FUN_10bcba258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2f48;
  _objc_alloc(PTR_PTR_1126e2f48);
  puVar2 = PTR_PTR_1126b7e38;
  func_0x00010c131720(PTR_PTR_1126b7e38,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033ba0(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcba2cc; end: 10bcba363; -[SCShareObservable initWithParentObservable:subject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bcba2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112796714;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112796718) = 0;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcba364; end: 10bcba3a7; -[SCShareObservable dealloc] */

void FUN_10bcba364(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05240();
  puStack_28 = PTR_PTR_11270e500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bcba3a8; end: 10bcba453; -[SCShareObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796714);
  func_0x00010c25fd20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112796718;
  _os_unfair_lock_lock(param_1 + lVar3);
  lVar2 = *(long *)(param_1 + _DAT_11279671c);
  *(long *)(param_1 + _DAT_11279671c) = lVar2 + 1;
  if (lVar2 == 0) {
    func_0x00010bec70a0(param_1);
  }
  _os_unfair_lock_unlock(param_1 + lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcba454; end: 10bcba4e3; -[SCShareObservable unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c282a00(*(undefined8 *)(param_1 + _DAT_112796714),param_2,param_3);
  lVar2 = (long)_DAT_112796718;
  _os_unfair_lock_lock(param_1 + lVar2);
  lVar1 = *(long *)(param_1 + _DAT_11279671c) + -1;
  *(long *)(param_1 + _DAT_11279671c) = lVar1;
  if (lVar1 == 0) {
    func_0x00010be05240(param_1);
  }
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcba4e4; end: 10bcba61b; -[SCShareObservable _subscribeParent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba4e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x00010c0f3c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10bcba61c;
  puStack_58 = &UNK_1108485e8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  lVar2 = lVar1;
  func_0x00010c25ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112796720);
  *(long *)(param_1 + _DAT_112796720) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10bcba61c; end: 10bcba6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba61c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112796714));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcba6a8; end: 10bcba6db; -[SCShareObservable _disposeParent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba6a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112796720;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcba6dc; end: 10bcba71b; -[SCShareObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba6dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112796720,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796714,0);
  return;
}



/* Entry: 10bcba71c; end: 10bcba723; -[SCStartWithObserver complete] */

void FUN_10bcba71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcba724; end: 10bcba72f; -[SCStartWithObserver .cxx_destruct] */

void FUN_10bcba724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcba730; end: 10bcba7b3; -[SCObservable throttle:onPerformer:] */

void FUN_10bcba730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeea8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26d5c0(param_1,param_2,param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10bcba7b4; end: 10bcba837; -[SCObservable throttle:onPerformer:timeProvider:] */

void FUN_10bcba7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2f80;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c033b60(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcba838; end: 10bcba90f; -[SCThrottleObservable initWithParentObservable:performer:throttle:timeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bcba838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_11270e528;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithParentObservable__1125ea888,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112796734;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796738) = param_1;
    lVar3 = (long)_DAT_11279673c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcba910; end: 10bcba9bb; -[SCThrottleObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba910(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f3c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e2f88;
  _objc_alloc(PTR_PTR_1126e2f88);
  func_0x00010c030ea0(*(undefined8 *)(param_1 + _DAT_112796738));
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c25fd20(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10bcba9bc; end: 10bcba9fb; -[SCThrottleObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcba9bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279673c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796734,0);
  return;
}



/* Entry: 10bcba9fc; end: 10bcbaad7; -[SCThrottleObserver initWithObserver:performer:throttle:timeProvider:] */

undefined1 *
FUN_10bcba9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270e530;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbaad8; end: 10bcbabaf; -[SCThrottleObserver next:] */

void FUN_10bcbaad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10bcbabb0; end: 10bcbabeb;  */

void FUN_10bcbabb0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be9baa0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10bcbabec; end: 10bcbac93; -[SCThrottleObserver complete] */

void FUN_10bcbabec(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10bcbac94; end: 10bcbacc7;  */

void FUN_10bcbac94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be17740(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbacc8; end: 10bcbadef; -[SCThrottleObserver _scheduledNext:] */

void FUN_10bcbacc8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = param_4;
  _objc_release(uVar1);
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x20));
    param_1 = param_1 - *(double *)(param_2 + 0x28);
    _objc_initWeak(auStack_48,param_2);
    dVar2 = *(double *)(param_2 + 0x10);
    if (param_1 <= dVar2) {
      *(undefined1 *)(param_2 + 0x30) = 1;
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c0f7fe0(dVar2 - param_1,uVar1);
      _objc_destroyWeak(auStack_50);
    }
    else {
      func_0x00010be179e0(param_2);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10bcbadf0; end: 10bcbae23;  */

void FUN_10bcbadf0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be179e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbae24; end: 10bcbae83; -[SCThrottleObserver _fireNext] */

void FUN_10bcbae24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 0x30) = 0;
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x28) = param_1;
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 8));
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  _objc_release(uVar1);
  if (*(char *)(param_2 + 0x40) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 8),PTR_s_complete_1125ae760);
    return;
  }
  return;
}



/* Entry: 10bcbae84; end: 10bcbae9f; -[SCThrottleObserver _fireComplete] */

void FUN_10bcbae84(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbaea0; end: 10bcbaee7; -[SCThrottleObserver .cxx_destruct] */

void FUN_10bcbaea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcbaee8; end: 10bcbaf27; -[SCObservable timeoutInterval:] */

void FUN_10bcbaee8(undefined8 param_1)

{
  _objc_alloc(PTR_PTR_1126e2f90);
  func_0x00010c033c00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcbaf28; end: 10bcbaf77; -[SCTimeoutObservable initWithParentObservable:timeoutInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbaf28(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e538;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithParentObservable__1125ea888);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796760) = param_1;
  }
  return;
}



/* Entry: 10bcbaf78; end: 10bcbb017; -[SCTimeoutObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbaf78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f3c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e2f98;
  _objc_alloc(PTR_PTR_1126e2f98);
  func_0x00010c030b60(*(undefined8 *)(param_1 + _DAT_112796760));
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c25fd20(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10bcbb018; end: 10bcbb083; -[SCObservable timerInterval:performer:] */

void FUN_10bcbb018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2fa0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c033c20(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbb084; end: 10bcbb127; -[SCTimerObservable initWithParentObservable:timerInterval:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bcbb084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270e540;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__1125ea888,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796764) = param_1;
    lVar3 = (long)_DAT_112796768;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbb128; end: 10bcbb1cb; -[SCTimerObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f3c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e2fa8;
  _objc_alloc(PTR_PTR_1126e2fa8);
  func_0x00010c030f40(*(undefined8 *)(param_1 + _DAT_112796764));
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c25fd20(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10bcbb1cc; end: 10bcbb1df; -[SCTimerObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796768,0);
  return;
}



/* Entry: 10bcbb1e0; end: 10bcbb207; -[SCWithLatestFromObserver complete] */

void FUN_10bcbb1e0(long param_1)

{
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbb208; end: 10bcbb24f; -[SCWithLatestFromObserver .cxx_destruct] */

void FUN_10bcbb208(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcbb250; end: 10bcbb29b; +[SCDisposableCreate create:] */

void FUN_10bcbb250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2fc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff8d00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbb29c; end: 10bcbb2d7; -[SCDisposableCreate dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb29c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112796788;
  uVar1 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcbb2d8; end: 10bcbb2eb; -[SCDisposableCreate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796788,0);
  return;
}



/* Entry: 10bcbb2ec; end: 10bcbb33b; -[SCDisposableDeferred dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb2ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11279678c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796790);
  *(undefined8 *)(param_1 + _DAT_112796790) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcbb33c; end: 10bcbb37b; -[SCDisposableDeferred .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb33c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112796790,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279678c,0);
  return;
}



/* Entry: 10bcbb37c; end: 10bcbb39b; -[SCDisposableObserver dispose] */

void FUN_10bcbb37c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
             &PTR____CFConstantStringClassReference_11102e1d8);
  return;
}



/* Entry: 10bcbb39c; end: 10bcbb423; -[SCDisposableSink dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb39c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = (long)_DAT_11279679c;
  _os_unfair_lock_lock(param_1 + lVar2);
  lVar3 = (long)_DAT_112796798;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_112796794;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 10bcbb424; end: 10bcbb463; -[SCDisposableSink .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb424(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112796798,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796794,0);
  return;
}



/* Entry: 10bcbb464; end: 10bcbb4f7; -[SCObserverAsyncUnsubscriber dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb464(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_1127967ac;
  _os_unfair_lock_lock(param_1 + lVar2);
  lVar3 = (long)_DAT_1127967b0;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf86d40();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127967a4);
  *(undefined8 *)(param_1 + _DAT_1127967a4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_1127967a8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 10bcbb4f8; end: 10bcbb543; -[SCObserverAsyncUnsubscriber .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb4f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127967b0,0);
  _objc_storeStrong(param_1 + _DAT_1127967a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127967a0);
  return;
}



/* Entry: 10bcbb544; end: 10bcbb553; -[SCObservableCreate unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127967c0),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 10bcbb554; end: 10bcbb5d7; -[SCFromObservable initWithArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bcbb554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e590;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127967c8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbb5d8; end: 10bcbb71b; -[SCFromObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb5d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + _DAT_1127967c8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c0d9840(param_3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  func_0x00010bf436e0(param_3);
  puVar3 = PTR_PTR_1126e2fe0;
  _objc_alloc(PTR_PTR_1126e2fe0);
  func_0x00010c030ae0();
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_1127967c8,0);
  return;
}



/* Entry: 10bcbb71c; end: 10bcbb72f; -[SCFromObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127967c8,0);
  return;
}



/* Entry: 10bcbb730; end: 10bcbb77b; +[SCObservable from:] */

void FUN_10bcbb730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2ff0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff4000();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbb77c; end: 10bcbb843; -[SCFutureObservable initWithFuture:performer:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bcbb77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_11270e598;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127967cc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127967d0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127967d4) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbb844; end: 10bcbb91b; -[SCFutureObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_58 = FUN_10bcbb91c;
  puStack_50 = &UNK_11084e010;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127967cc);
  uStack_60 = 0xc2000000;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127967d0);
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127967d4);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c297280(uVar3,param_2,&puStack_68,uVar4,uVar1);
  puVar2 = PTR_PTR_1126e2fe0;
  _objc_alloc(PTR_PTR_1126e2fe0);
  func_0x00010c030ae0();
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bcbb91c; end: 10bcbb98b;  */

void FUN_10bcbb91c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbb98c; end: 10bcbb9cb; -[SCFutureObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbb98c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127967d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127967cc,0);
  return;
}



/* Entry: 10bcbb9cc; end: 10bcbba1f; +[SCObservable future:] */

void FUN_10bcbb9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2ff8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016a60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbba20; end: 10bcbba93; +[SCObservable future:performer:preferSynchronous:] */

void FUN_10bcbba20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2ff8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016a60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbba94; end: 10bcbbb17; -[SCJustObservable initWithValues:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bcbba94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e5a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127967d8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbbb18; end: 10bcbbb63; +[SCObservable justAll:] */

void FUN_10bcbbb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e3000;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbbb64; end: 10bcbbbbf; -[SCNeverObservable subscribe:] */

void FUN_10bcbbb64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2fe0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030ae0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbbbc0; end: 10bcbbbdb; +[SCObservable never] */

void FUN_10bcbbbc0(void)

{
  _objc_alloc_init(PTR_PTR_1126e3008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcbbbdc; end: 10bcbbc0f; -[SCProxyObserver .cxx_destruct] */

void FUN_10bcbbbdc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcbbc10; end: 10bcbbc8b; -[SCObservable subscribeOnComplete:] */

void FUN_10bcbbc10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df718;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02f960();
  _objc_release(param_3);
  func_0x00010c25fd20(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bcbbc8c; end: 10bcbbc8f; -[SCObservable unsubscribe:] */

void FUN_10bcbbc8c(void)

{
  return;
}



/* Entry: 10bcbbc90; end: 10bcbbcdf; -[SCBehaviorSubject dealloc] */

void FUN_10bcbbc90(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c06eda0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf436e0(param_1);
  }
  puStack_28 = PTR_PTR_11270e5b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bcbbce0; end: 10bcbbd0f; -[SCBehaviorSubject complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbce0(long param_1,undefined8 param_2)

{
  func_0x00010c1b00e0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127967f8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbbd10; end: 10bcbbd1f; -[SCBehaviorSubject setIsComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbd10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127967f0) = param_3;
  return;
}



/* Entry: 10bcbbd20; end: 10bcbbd6f; -[SCBehaviorSubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbd20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127967fc,0);
  _objc_storeStrong(param_1 + _DAT_1127967f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127967f4,0);
  return;
}



/* Entry: 10bcbbd70; end: 10bcbbd73; -[SCSubject next:] */

void FUN_10bcbbd70(void)

{
  return;
}



/* Entry: 10bcbbd74; end: 10bcbbd77; -[SCSubject complete] */

void FUN_10bcbbd74(void)

{
  return;
}



/* Entry: 10bcbbd78; end: 10bcbbdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbd78(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_112796820;
    __ZNSt3__15mutex4lockEv(param_1 + lVar1);
    *(long *)(param_1 + _DAT_112796824) = *(long *)(param_1 + _DAT_112796824) + 1;
    func_0x00010c27cc60(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbbdec; end: 10bcbbdfb; -[SCLatestCombinedMultiObserver dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbdec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279681c),PTR_s_disposeAll_1125bf508);
  return;
}



/* Entry: 10bcbbdfc; end: 10bcbbe53; -[SCLatestCombinedMultiObserver tryComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbdfc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11279680c);
  func_0x00010bf529e0();
  if (lVar1 == *(long *)(param_1 + _DAT_112796824)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112796814),PTR_s_complete_1125ae760);
    return;
  }
  return;
}


