/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006175b4; end: 006176ab;  */

void FUN_006175b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0078a2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x007923c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x0078db00(lVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 006176ac; end: 006176bf; -[SCQueuePerformerSubscriptionObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006176ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58e0,0);
  return;
}



/* Entry: 006176c0; end: 006176ef; -[SCObservable publish] */

void FUN_006176c0(void)

{
  _objc_alloc(PTR_PTR_00ac3480);
  func_0x007861c0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006176f0; end: 0061786f; -[SCPublishedObservable initWithParentObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_006176f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_00ac4290;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac3488;
    func_0x0078b5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___SCDisposableObserverLifecycle_00ac3158;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58e8);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac58e8) = puVar3;
    _objc_release(uVar4);
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    uVar4 = param_3;
    func_0x00792400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fa40();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58ec);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac58ec) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 00617870; end: 00617883;  */

void FUN_00617870(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00789930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__00abd358,param_2);
  return;
}



/* Entry: 00617884; end: 00617893; -[SCPublishedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00617884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007923d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac58ec),PTR_s_subscribe__00abf600);
  return;
}



/* Entry: 00617894; end: 006178d3; -[SCPublishedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00617894(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac58e8,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58ec,0);
  return;
}



/* Entry: 006178d4; end: 00617957; -[SCDerivedObservable initWithParentObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_006178d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4298;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac58f0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00617958; end: 00617967; -[SCDerivedObservable parentObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00617958(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac58f0);
}



/* Entry: 00617968; end: 0061797b; -[SCDerivedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00617968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58f0,0);
  return;
}



/* Entry: 0061797c; end: 006179ef; -[SCObservable scanWithinInitialValue:accumulator:] */

void FUN_0061797c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3490;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786220();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006179f0; end: 00617ab7; -[SCScanObservable initWithParentObservable:initialValue:accumulator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_006179f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_00ac42a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_00ac58f4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58f8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58f8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00617ab8; end: 00617b5b; -[SCScanObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00617ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac3498;
  _objc_alloc(PTR_PTR_00ac3498);
  func_0x00786000();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00617b5c; end: 00617b9b; -[SCScanObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00617b5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac58f4,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58f8,0);
  return;
}



/* Entry: 00617b9c; end: 00617c6f; -[SCScanObserver initWithObserver:initialValue:accumulator:] */

undefined1 *
FUN_00617b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_00ac42a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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
    func_0x00780e20();
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



/* Entry: 00617c70; end: 00617ce7; -[SCScanObserver next:] */

void FUN_00617c70(long param_1,undefined8 param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x00789930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_next__00abd358,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 00617ce8; end: 00617cef; -[SCScanObserver complete] */

void FUN_00617ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 00617cf0; end: 00617d2b; -[SCScanObserver .cxx_destruct] */

void FUN_00617cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00617d2c; end: 00617d8f; -[SCObservable share] */

void FUN_00617d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac34a0;
  _objc_alloc(PTR_PTR_00ac34a0);
  puVar2 = PTR_PTR_00ac34a8;
  _objc_opt_new(PTR_PTR_00ac34a8);
  func_0x00786340(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00617d90; end: 00617e03; -[SCObservable shareReplay:] */

void FUN_00617d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac34a0;
  _objc_alloc(PTR_PTR_00ac34a0);
  puVar2 = PTR_PTR_00ac3488;
  func_0x0078b5e0(PTR_PTR_00ac3488,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00786340(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00617e04; end: 00617e9b; -[SCShareObservable initWithParentObservable:subject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00617e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac42b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac590c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_00ac5910) = 0;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00617e9c; end: 00617edf; -[SCShareObservable dealloc] */

void FUN_00617e9c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x0077c7e0();
  puStack_28 = PTR_PTR_00ac42b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00617ee0; end: 00617f8b; -[SCShareObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00617ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac590c);
  func_0x007923c0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_00ac5910;
  _os_unfair_lock_lock(param_1 + lVar3);
  lVar2 = *(long *)(param_1 + _DAT_00ac5914);
  *(long *)(param_1 + _DAT_00ac5914) = lVar2 + 1;
  if (lVar2 == 0) {
    func_0x0077dcc0(param_1);
  }
  _os_unfair_lock_unlock(param_1 + lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00617f8c; end: 0061801b; -[SCShareObservable unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00617f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00793160(*(undefined8 *)(param_1 + _DAT_00ac590c),param_2,param_3);
  lVar2 = (long)_DAT_00ac5910;
  _os_unfair_lock_lock(param_1 + lVar2);
  lVar1 = *(long *)(param_1 + _DAT_00ac5914) + -1;
  *(long *)(param_1 + _DAT_00ac5914) = lVar1;
  if (lVar1 == 0) {
    func_0x0077c7e0(param_1);
  }
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061801c; end: 00618153; -[SCShareObservable _subscribeParent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061801c(long param_1)

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
  func_0x0078a2e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_00999f30;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_00618154;
  puStack_58 = &UNK_00a0b0e8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  lVar2 = lVar1;
  func_0x00792400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_00ac5918);
  *(long *)(param_1 + _DAT_00ac5918) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 00618154; end: 006181df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618154(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00789920(*(undefined8 *)(param_1 + _DAT_00ac590c));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 006181e0; end: 00618213; -[SCShareObservable _disposeParent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006181e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac5918;
  func_0x007822e0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00618214; end: 00618253; -[SCShareObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618214(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5918,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac590c,0);
  return;
}



/* Entry: 00618254; end: 006182af; -[SCObservable startWith:] */

void FUN_00618254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac34b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006182b0; end: 0061833b; -[SCStartWithObservable initWithParentObservable:initialValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_006182b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac42b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac591c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0061833c; end: 006183d7; -[SCStartWithObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061833c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac34b8;
  _objc_alloc(PTR_PTR_00ac34b8);
  func_0x00785fe0();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 006183d8; end: 006183eb; -[SCStartWithObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006183d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac591c,0);
  return;
}



/* Entry: 006183ec; end: 00618487; -[SCStartWithObserver initWithObserver:initialValue:] */

undefined1 *
FUN_006183ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac42c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00789920(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00618488; end: 0061848f; -[SCStartWithObserver next:] */

void FUN_00618488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_next__00abd358);
  return;
}



/* Entry: 00618490; end: 00618497; -[SCStartWithObserver complete] */

void FUN_00618490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 00618498; end: 006184a3; -[SCStartWithObserver .cxx_destruct] */

void FUN_00618498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 006184a4; end: 006184ff; -[SCObservable switchMap:] */

void FUN_006184a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac34c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00618500; end: 0061858f; -[SCSwitchMappedObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00618500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac42c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5924);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5924) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00618590; end: 0061862b; -[SCSwitchMappedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac34c8;
  _objc_alloc(PTR_PTR_00ac34c8);
  func_0x00786040();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0061862c; end: 0061863f; -[SCSwitchMappedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061862c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5924,0);
  return;
}



/* Entry: 00618640; end: 00618677; -[SCObservable take:] */

void FUN_00618640(void)

{
  _objc_alloc(PTR_PTR_00ac34d0);
  func_0x00786360();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00618678; end: 006186c7; -[SCTakeObservable initWithParentObservable:take:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac42d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithParentObservable__00abc578);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5928) = param_4;
  }
  return;
}



/* Entry: 006186c8; end: 00618763; -[SCTakeObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006186c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac34d8;
  _objc_alloc(PTR_PTR_00ac34d8);
  func_0x007860a0();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00618764; end: 006187e7; -[SCObservable throttle:onPerformer:] */

void FUN_00618764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCTimeProvider_00ac2a80;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00792860(param_1,param_2,param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_2);
  return;
}



/* Entry: 006187e8; end: 0061886b; -[SCObservable throttle:onPerformer:timeProvider:] */

void FUN_006187e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac34e0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00786300(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061886c; end: 00618943; -[SCThrottleObservable initWithParentObservable:performer:throttle:timeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0061886c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_00ac42d8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithParentObservable__00abc578,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac592c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5930) = param_1;
    lVar3 = (long)_DAT_00ac5934;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 00618944; end: 006189ef; -[SCThrottleObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac34e8;
  _objc_alloc(PTR_PTR_00ac34e8);
  func_0x00786080(*(undefined8 *)(param_1 + _DAT_00ac5930));
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x007923c0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 006189f0; end: 00618a2f; -[SCThrottleObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006189f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5934,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac592c,0);
  return;
}



/* Entry: 00618a30; end: 00618b0b; -[SCThrottleObserver initWithObserver:performer:throttle:timeProvider:] */

undefined1 *
FUN_00618a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_00ac42e0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
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



/* Entry: 00618b0c; end: 00618be3; -[SCThrottleObserver next:] */

void FUN_00618b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x0078a560(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 00618be4; end: 00618c1f;  */

void FUN_00618be4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x0077da60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 00618c20; end: 00618cc7; -[SCThrottleObserver complete] */

void FUN_00618c20(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0078a560(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 00618cc8; end: 00618cfb;  */

void FUN_00618cc8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x0077ca60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00618cfc; end: 00618e23; -[SCThrottleObserver _scheduledNext:] */

void FUN_00618cfc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
    func_0x007813c0(*(undefined8 *)(param_2 + 0x20));
    param_1 = param_1 - *(double *)(param_2 + 0x28);
    _objc_initWeak(auStack_48,param_2);
    dVar2 = *(double *)(param_2 + 0x10);
    if (param_1 <= dVar2) {
      *(undefined1 *)(param_2 + 0x30) = 1;
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x0078a580(dVar2 - param_1,uVar1);
      _objc_destroyWeak(auStack_50);
    }
    else {
      func_0x0077ca80(param_2);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 00618e24; end: 00618e57;  */

void FUN_00618e24(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x0077ca80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00618e58; end: 00618eb7; -[SCThrottleObserver _fireNext] */

void FUN_00618e58(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 0x30) = 0;
  func_0x007813c0(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x28) = param_1;
  func_0x00789920(*(undefined8 *)(param_2 + 8));
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  _objc_release(uVar1);
  if (*(char *)(param_2 + 0x40) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_2 + 8),PTR_s_complete_00abaeb0);
    return;
  }
  return;
}



/* Entry: 00618eb8; end: 00618ed3; -[SCThrottleObserver _fireComplete] */

void FUN_00618eb8(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 00618ed4; end: 00618f1b; -[SCThrottleObserver .cxx_destruct] */

void FUN_00618ed4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00618f1c; end: 00618f5b; -[SCObservable timeoutInterval:] */

void FUN_00618f1c(undefined8 param_1)

{
  _objc_alloc(PTR_PTR_00ac34f0);
  func_0x007863a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00618f5c; end: 00618fab; -[SCTimeoutObservable initWithParentObservable:timeoutInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618f5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac42e8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithParentObservable__00abc578);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5958) = param_1;
  }
  return;
}



/* Entry: 00618fac; end: 0061904b; -[SCTimeoutObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac34f8;
  _objc_alloc(PTR_PTR_00ac34f8);
  func_0x00785ee0(*(undefined8 *)(param_1 + _DAT_00ac5958));
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x007923c0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 0061904c; end: 006190b7; -[SCObservable timerInterval:performer:] */

void FUN_0061904c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3500;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x007863c0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006190b8; end: 0061915b; -[SCTimerObservable initWithParentObservable:timerInterval:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_006190b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac42f0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__00abc578,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac595c) = param_1;
    lVar3 = (long)_DAT_00ac5960;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 0061915c; end: 006191ff; -[SCTimerObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061915c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac3508;
  _objc_alloc(PTR_PTR_00ac3508);
  func_0x007860e0(*(undefined8 *)(param_1 + _DAT_00ac595c));
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x007923c0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 00619200; end: 00619213; -[SCTimerObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5960,0);
  return;
}



/* Entry: 00619214; end: 00619287; -[SCObservable withLatestFrom:combiner:] */

void FUN_00619214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3510;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007862c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00619288; end: 0061934f; -[SCWithLatestFromObservable initWithParentObservable:otherObservable:combiner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00619288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_00ac42f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_00ac5964;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5968);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5968) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00619350; end: 006193f3; -[SCWithLatestFromObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac3518;
  _objc_alloc(PTR_PTR_00ac3518);
  func_0x00785a80();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 006193f4; end: 00619433; -[SCWithLatestFromObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006193f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5968,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5964,0);
  return;
}



/* Entry: 00619434; end: 00619593; -[SCWithLatestFromObserver initWithLatestFromObservable:combiner:observer:] */

undefined8 *
FUN_00619434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac4300;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 5) = 0;
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar2 = param_3;
    func_0x007923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 00619594; end: 006195fb;  */

void FUN_00619594(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_2;
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 006195fc; end: 0061968b; -[SCWithLatestFromObserver next:] */

void FUN_006195fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789920(uVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061968c; end: 006196b3; -[SCWithLatestFromObserver complete] */

void FUN_0061968c(long param_1)

{
  func_0x007822e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 006196b4; end: 006196fb; -[SCWithLatestFromObserver .cxx_destruct] */

void FUN_006196b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 006196fc; end: 0061977b; -[SCDisposableCreate initWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_006196fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5980);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5980) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061977c; end: 006197c7; +[SCDisposableCreate create:] */

void FUN_0061977c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3520;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00784d80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006197c8; end: 00619803; -[SCDisposableCreate dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006197c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac5980;
  uVar1 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00619804; end: 00619817; -[SCDisposableCreate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5980,0);
  return;
}



/* Entry: 00619818; end: 006198d3; -[SCDisposableDeferred initWithSubscription:observable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00619818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac4310;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac5984;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_00ac5988;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 006198d4; end: 00619923; -[SCDisposableDeferred dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006198d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac5984;
  func_0x007822e0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac5988);
  *(undefined8 *)(param_1 + _DAT_00ac5988) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00619924; end: 00619963; -[SCDisposableDeferred .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619924(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5988,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5984,0);
  return;
}



/* Entry: 00619964; end: 006199af; +[SCDisposableObserver create:] */

void FUN_00619964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3520;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00784d80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006199b0; end: 006199cf; -[SCDisposableObserver dispose] */

void FUN_006199b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___NSException_00ac2f30,PTR_s_raise_format__00abd860,
             *(undefined8 *)PTR__NSInternalInconsistencyException_00999c88,
             &PTR____CFConstantStringClassReference_00a47800);
  return;
}



/* Entry: 006199d0; end: 006199ff; -[SCDisposableObserver bindTo:] */

void FUN_006199d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_addDisposable__00aba628,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0078ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___NSException_00ac2f30,PTR_s_raise_format__00abd860,
             &PTR____CFConstantStringClassReference_00a47820,
             &PTR____CFConstantStringClassReference_00a47840);
  return;
}



/* Entry: 00619a00; end: 00619ac3; -[SCDisposableSink initWithSink:subscription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00619a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac4318;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac598c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_00ac5990;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_00ac5994) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00619ac4; end: 00619b4b; -[SCDisposableSink dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619ac4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = (long)_DAT_00ac5994;
  _os_unfair_lock_lock(param_1 + lVar2);
  lVar3 = (long)_DAT_00ac5990;
  func_0x007822e0(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_00ac598c;
  func_0x007822e0(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(param_1 + lVar2);
  return;
}



/* Entry: 00619b4c; end: 00619b8b; -[SCDisposableSink .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619b4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5990,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac598c,0);
  return;
}



/* Entry: 00619b8c; end: 00619c4f; -[SCObserverAsyncUnsubscriber initWithObservable:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00619b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac4320;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_00ac5998),param_3);
    lVar3 = (long)_DAT_00ac599c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_00ac59a0) = 0;
    *(undefined4 *)((long)puVar1 + (long)_DAT_00ac59a4) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00619c50; end: 00619ceb; -[SCObserverAsyncUnsubscriber setDisposable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_00ac59a4;
  _os_unfair_lock_lock(param_1 + lVar2);
  if (*(char *)(param_1 + _DAT_00ac59a0) == '\x01') {
    func_0x007822e0(param_3);
  }
  else {
    lVar3 = (long)_DAT_00ac59a8;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
  }
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00619cec; end: 00619d7f; -[SCObserverAsyncUnsubscriber dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619cec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_00ac59a4;
  _os_unfair_lock_lock(param_1 + lVar2);
  lVar3 = (long)_DAT_00ac59a8;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x007822e0();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac599c);
  *(undefined8 *)(param_1 + _DAT_00ac599c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_00ac59a0) = 1;
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(param_1 + lVar2);
  return;
}



/* Entry: 00619d80; end: 00619dcb; -[SCObserverAsyncUnsubscriber .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619d80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac59a8,0);
  _objc_storeStrong(param_1 + _DAT_00ac599c,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + _DAT_00ac5998);
  return;
}



/* Entry: 00619dcc; end: 00619e77; -[SCObserverUnsubscriber initWithObservable:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00619dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4328;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_00ac59ac),param_3);
    lVar3 = (long)_DAT_00ac59b0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00619e78; end: 00619ecf; -[SCObserverUnsubscriber dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619e78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_00ac59ac;
  _objc_loadWeakRetained(lVar1);
  lVar3 = (long)_DAT_00ac59b0;
  func_0x00793160();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00619ed0; end: 00619f0b; -[SCObserverUnsubscriber .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619ed0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac59b0,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + _DAT_00ac59ac);
  return;
}



/* Entry: 00619f0c; end: 00619f57; +[SCObservable create:] */

void FUN_00619f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3528;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786100();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00619f58; end: 0061a003; -[SCObservableCreate initWithObserverBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00619f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4330;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59b4) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_00ac3530;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac59b8);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac59b8) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061a004; end: 0061a0eb; -[SCObservableCreate subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a004(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4330;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_subscribe__00abf600,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e7a0(*(undefined8 *)(param_1 + _DAT_00ac59b8));
  lVar2 = *(long *)(param_1 + _DAT_00ac59b4);
  if (lVar2 == 0) {
    _objc_retain(plVar1);
    puVar3 = (undefined *)plVar1;
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_00ac33f8;
    _objc_alloc(PTR_PTR_00ac33f8);
    func_0x00786820();
    _objc_release(lVar2);
  }
  _objc_release(plVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0061a0ec; end: 0061a0fb; -[SCObservableCreate unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac59b8),PTR_s_removeObserver__00abda48);
  return;
}



/* Entry: 0061a0fc; end: 0061a13b; -[SCObservableCreate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061a0fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac59b8,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac59b4,0);
  return;
}



/* Entry: 0061a13c; end: 0061a187; +[SCObservable deferred:] */

void FUN_0061a13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3538;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}


