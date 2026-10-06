/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00614a40; end: 00614a73;  */

void FUN_00614a40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x007806e0(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00614a74; end: 00614aab; -[SCAsyncObserver .cxx_destruct] */

void FUN_00614a74(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 8);
  return;
}



/* Entry: 00614aac; end: 00614ab3; -[SCObservable observeOn:] */

void FUN_00614aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_observeOn_preferSynchronous__00abd4f0,param_3,0);
  return;
}



/* Entry: 00614ab4; end: 00614b17; -[SCObservable observeOn:preferSynchronous:] */

void FUN_00614ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3390;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786320();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00614b18; end: 00614bd7; -[SCLatestCombinedMultiObservable initWithObservables:combiner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00614b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac41e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_00ac583c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5840);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5840) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00614bd8; end: 00614c43; -[SCLatestCombinedMultiObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00614bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3398;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785f80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00614c44; end: 00614c83; -[SCLatestCombinedMultiObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00614c44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5840,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac583c,0);
  return;
}



/* Entry: 00614c84; end: 00614d6f; -[SCLatestCombinedObservable initWithFirstObservable:secondObservable:combiner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00614c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac41f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_00ac5844;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_00ac5848;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac584c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac584c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00614d70; end: 00614de3; -[SCLatestCombinedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00614d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac33a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785660();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00614de4; end: 00614e33; -[SCLatestCombinedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00614de4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac584c,0);
  _objc_storeStrong(param_1 + _DAT_00ac5848,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5844,0);
  return;
}



/* Entry: 00614e34; end: 00614e9f; +[SCObservable combineLatest:combiner:] */

void FUN_00614e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac33a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785f60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00614ea0; end: 00614f13; -[SCObservable combineLatest:combiner:] */

void FUN_00614ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac33b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785640();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00614f14; end: 00614fa3; -[SCCompactMappedObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00614f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac41f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5850);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5850) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00614fa4; end: 00615043; -[SCCompactMappedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00614fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac33b8;
  _objc_alloc(PTR_PTR_00ac33b8);
  func_0x00785e80();
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



/* Entry: 00615044; end: 00615057; -[SCCompactMappedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00615044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5850,0);
  return;
}



/* Entry: 00615058; end: 0061511f; -[SCCompactMappedObserver initWithObservable:observer:mapper:] */

undefined1 *
FUN_00615058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_00ac4200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00615120; end: 0061516b; -[SCCompactMappedObserver next:] */

void FUN_00615120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00789920(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0061516c; end: 00615173; -[SCCompactMappedObserver complete] */

void FUN_0061516c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 00615174; end: 006151ab; -[SCCompactMappedObserver .cxx_destruct] */

void FUN_00615174(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 8);
  return;
}



/* Entry: 006151ac; end: 0061520b; -[SCObservable compactMap] */

void FUN_006151ac(void)

{
  _objc_alloc(PTR_PTR_00ac33c0);
  func_0x00786260();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0061520c; end: 00615267; -[SCObservable compactMap:] */

void FUN_0061520c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac33c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00615268; end: 0061530b; -[SCDebounceObservable initWithParentObservable:timeout:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00615268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac4208;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__00abc578,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5860) = param_1;
    lVar3 = (long)_DAT_00ac5864;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 0061530c; end: 006153af; -[SCDebounceObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061530c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac33c8;
  _objc_alloc(PTR_PTR_00ac33c8);
  func_0x007860c0(*(undefined8 *)(param_1 + _DAT_00ac5860));
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



/* Entry: 006153b0; end: 006153c3; -[SCDebounceObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006153b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5864,0);
  return;
}



/* Entry: 006153c4; end: 0061547b; -[SCDebounceObserver initWithObserver:timeout:performer:] */

undefined1 *
FUN_006153c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac4210;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0061547c; end: 006155d7; -[SCDebounceObserver next:] */

void FUN_0061547c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    _dispatch_block_cancel();
  }
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 8));
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_006155d8;
  puStack_60 = &UNK_00a0afa8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar1 = 0;
  uStack_58 = param_3;
  _dispatch_block_create(0,&puStack_78);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 0x10) * 1000000000.0));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0078ace0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(uVar1,uVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_3);
  return;
}



/* Entry: 006155d8; end: 0061560b;  */

void FUN_006155d8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00789920();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0061560c; end: 00615647; -[SCDebounceObserver complete] */

void FUN_0061560c(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    _dispatch_block_cancel();
  }
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 00615648; end: 00615683; -[SCDebounceObserver .cxx_destruct] */

void FUN_00615648(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00615684; end: 006156ef; -[SCObservable debounceWithTimeInterval:performer:] */

void FUN_00615684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac33d0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00786380(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006156f0; end: 006157b3; -[SCDistinctUntilChangedObservable initWithParentObservable:keySelector:keyComparer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_006156f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_00ac4218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac587c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac587c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5880);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5880) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 006157b4; end: 00615857; -[SCDistinctUntilChangedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006157b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac33d8;
  _objc_alloc(PTR_PTR_00ac33d8);
  func_0x00786020();
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



/* Entry: 00615858; end: 00615897; -[SCDistinctUntilChangedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00615858(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5880,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac587c,0);
  return;
}



/* Entry: 00615898; end: 006158ff; -[SCObservable distinctUntilChanged] */

void FUN_00615898(void)

{
  _objc_alloc(PTR_PTR_00ac33e0);
  func_0x00786240();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00615900; end: 00615907;  */

void FUN_00615900(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_2,PTR_s_isEqual__00abcb00);
  return;
}



/* Entry: 00615908; end: 0061596b; -[SCObservable distinctUntilChangedWithKeySelector:] */

void FUN_00615908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac33e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0061596c; end: 00615973;  */

void FUN_0061596c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_2,PTR_s_isEqual__00abcb00);
  return;
}



/* Entry: 00615974; end: 006159d7; -[SCObservable distinctUntilChangedWithComparer:] */

void FUN_00615974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac33e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006159d8; end: 006159ff;  */

void FUN_006159d8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_2);
  return;
}



/* Entry: 00615a00; end: 00615ac3; -[SCDoObservable initWithParentObservable:onNext:onComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00615a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_00ac4220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5884);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5884) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5888);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5888) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00615ac4; end: 00615b67; -[SCDoObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00615ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_00ac33e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786060();
  _objc_release(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x007923c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00615b68; end: 00615ba7; -[SCDoObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00615b68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5888,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5884,0);
  return;
}



/* Entry: 00615ba8; end: 00615c7b; -[SCDoObserver initWithObserver:onNext:onComplete:] */

undefined1 *
FUN_00615ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_00ac4228;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00615c7c; end: 00615cc7; -[SCDoObserver next:] */

void FUN_00615c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  }
  func_0x00789920(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00615cc8; end: 00615cf7; -[SCDoObserver complete] */

void FUN_00615cc8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 00615cf8; end: 00615d33; -[SCDoObserver .cxx_destruct] */

void FUN_00615cf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00615d34; end: 00615d3b; -[SCObservable doOnNext:] */

void FUN_00615d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__doOnNext_onComplete__00ab9ef8,param_3,0);
  return;
}



/* Entry: 00615d3c; end: 00615d47; -[SCObservable doOnComplete:] */

void FUN_00615d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__doOnNext_onComplete__00ab9ef8,0,param_3);
  return;
}



/* Entry: 00615d48; end: 00615dbb; -[SCObservable _doOnNext:onComplete:] */

void FUN_00615d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac33f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007862a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00615dbc; end: 00615e4b; -[SCDoOnDisposeObservable initWithParentObservable:onDispose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00615dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4230;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5898);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5898) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00615e4c; end: 00615f1b; -[SCDoOnDisposeObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00615e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_00ac33f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_00ac2c18;
  func_0x007810a0(PTR_PTR_00ac2c18,param_2,*(undefined8 *)(param_1 + _DAT_00ac5898));
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x007923c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00786820(puVar1,param_2,puVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00615f1c; end: 00615f2f; -[SCDoOnDisposeObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00615f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5898,0);
  return;
}



/* Entry: 00615f30; end: 00615f8b; -[SCObservable doOnDispose:] */

void FUN_00615f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3400;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786280();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00615f8c; end: 0061601b; -[SCFilteredObservable initWithParentObservable:filter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00615f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4238;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac589c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac589c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0061601c; end: 006160b7; -[SCFilteredObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061601c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_00ac3408;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785fc0();
  _objc_release(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x007923c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 006160b8; end: 006160cb; -[SCFilteredObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006160b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac589c,0);
  return;
}



/* Entry: 006160cc; end: 00616173; -[SCFilteredObserver initWithObserver:filter:] */

undefined1 *
FUN_006160cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00616174; end: 006161bf; -[SCFilteredObserver next:] */

void FUN_00616174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  if ((int)lVar1 != 0) {
    func_0x00789920(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 006161c0; end: 006161c7; -[SCFilteredObserver complete] */

void FUN_006161c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 006161c8; end: 006161f7; -[SCFilteredObserver .cxx_destruct] */

void FUN_006161c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 006161f8; end: 00616253; -[SCObservable filter:] */

void FUN_006161f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3410;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007861e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00616254; end: 0061625b; -[SCObservable first] */

void FUN_00616254(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_take__00abf6d0,1);
  return;
}



/* Entry: 0061625c; end: 006162eb; -[SCFlatMappedObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0061625c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58a8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 006162ec; end: 006163b3; -[SCFlatMappedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006162ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_00ac3418;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786040();
  _objc_release(param_3);
  puVar2 = PTR_PTR_00ac33f8;
  _objc_alloc(PTR_PTR_00ac33f8);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x007923c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00786820(puVar2,param_2,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 006163b4; end: 006163c7; -[SCFlatMappedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006163b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58a8,0);
  return;
}



/* Entry: 006163c8; end: 00616423; -[SCObservable flatMap:] */

void FUN_006163c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3420;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00616424; end: 006164b3; -[SCFlatMappedLatestObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00616424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4250;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58ac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58ac) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 006164b4; end: 0061654f; -[SCFlatMappedLatestObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006164b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac3428;
  _objc_alloc(PTR_PTR_00ac3428);
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



/* Entry: 00616550; end: 00616563; -[SCFlatMappedLatestObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58ac,0);
  return;
}



/* Entry: 00616564; end: 006165bf; -[SCObservable flatMapLatest:] */

void FUN_00616564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3430;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006165c0; end: 0061664f; -[SCMappedObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_006165c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4258;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58b0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00616650; end: 006166ef; -[SCMappedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac3438;
  _objc_alloc(PTR_PTR_00ac3438);
  func_0x00785e80();
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



/* Entry: 006166f0; end: 00616703; -[SCMappedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006166f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58b0,0);
  return;
}



/* Entry: 00616704; end: 006167cb; -[SCMappedObserver initWithObservable:observer:mapper:] */

undefined1 *
FUN_00616704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_00ac4260;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 006167cc; end: 0061680f; -[SCMappedObserver next:] */

void FUN_006167cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar2 + 0x10))(lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789920(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar2);
  return;
}



/* Entry: 00616810; end: 00616817; -[SCMappedObserver complete] */

void FUN_00616810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 00616818; end: 0061684f; -[SCMappedObserver .cxx_destruct] */

void FUN_00616818(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 8);
  return;
}



/* Entry: 00616850; end: 006168ab; -[SCObservable map:] */

void FUN_00616850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3440;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006168ac; end: 0061692f; -[SCMergedObservable initWithObservables:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_006168ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4268;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac58c0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00616930; end: 00616af3; -[SCMergedObservable subscribe:] */

/* WARNING: Removing unreachable block (ram,0x00616a1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616930(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac3448;
  _objc_alloc(PTR_PTR_00ac3448);
  lVar7 = (long)_DAT_00ac58c0;
  func_0x00780e80(*(undefined8 *)(param_1 + lVar7));
  func_0x00785f20(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x00780e80(*(undefined8 *)(param_1 + lVar7));
  func_0x0077f1a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + lVar7);
  _objc_retain(lVar6);
  lVar7 = lVar6;
  func_0x00780ea0();
  while (lVar7 != 0) {
    lVar8 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar8 * 8);
      func_0x007923c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e720(puVar2);
      _objc_release(uVar3);
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar7 = lVar6;
    func_0x00780ea0();
  }
  _objc_release(lVar6);
  puVar4 = PTR_PTR_00ac3450;
  _objc_alloc(PTR_PTR_00ac3450);
  func_0x007853a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_0099adf0)(param_3 + _DAT_00ac58c0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 00616af4; end: 00616b07; -[SCMergedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58c0,0);
  return;
}



/* Entry: 00616b08; end: 00616b87; -[SCMultiDisposable initWithDisposables:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00616b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac58c4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00616b88; end: 00616c7f; -[SCMultiDisposable dispose] */

/* WARNING: Removing unreachable block (ram,0x00616c08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616b88(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar3 = *(long *)(param_1 + _DAT_00ac58c4);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00780ea0();
  while (lVar1 != 0) {
    lVar4 = 0;
    do {
      func_0x007822e0(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar4);
    lVar1 = lVar3;
    func_0x00780ea0();
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar2) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_0099adf0)(lVar3 + _DAT_00ac58c4,0);
    return;
  }
  return;
}



/* Entry: 00616c80; end: 00616c93; -[SCMultiDisposable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58c4,0);
  return;
}



/* Entry: 00616c94; end: 00616cdf; +[SCObservable merge:] */

void FUN_00616c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3458;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00785f40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00616ce0; end: 00616ce7; -[SCObservable observeOnPerformer:] */

void FUN_00616ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_observeOnPerformer_preferSynchro_00abd4f8,param_3,0);
  return;
}



/* Entry: 00616ce8; end: 00616d4b; -[SCObservable observeOnPerformer:preferSynchronous:] */

void FUN_00616ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3460;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007862e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00616d4c; end: 00616d53; -[SCObservable subscribeOnPerformer:] */

void FUN_00616d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_subscribeOnPerformer_preferSynch_00abf618,param_3,0);
  return;
}



/* Entry: 00616d54; end: 00616db7; -[SCObservable subscribeOnPerformer:preferSynchronous:] */

void FUN_00616d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3468;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007862e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00616db8; end: 00616e5b; -[SCQueuePerformerObservable initWithParentObservable:performer:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00616db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac4278;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac58c8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_00ac58cc) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00616e5c; end: 00616f03; -[SCQueuePerformerObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac3470;
  _objc_alloc(PTR_PTR_00ac3470);
  func_0x00785ea0();
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



/* Entry: 00616f04; end: 00616f17; -[SCQueuePerformerObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac58c8,0);
  return;
}



/* Entry: 00616f18; end: 00616feb; -[SCQueuePerformerObserver initWithObservable:observer:performer:preferSynchronous:] */

undefined1 *
FUN_00616f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac4280;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
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
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00616fec; end: 00617137; -[SCQueuePerformerObserver next:] */

void FUN_00616fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_00999f30;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_00617138;
    puStack_50 = &UNK_00a0afa8;
    ppuVar2 = &puStack_68;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x0078a5c0(uVar1);
    uVar1 = uStack_48;
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_98 = PTR___NSConcreteStackBlock_00999f30;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x617174;
    puStack_80 = &UNK_00a0afa8;
    ppuVar2 = &puStack_98;
    _objc_copyWeak(auStack_70,auStack_38);
    _objc_retain(param_3);
    uStack_78 = param_3;
    func_0x0078a560(uVar1);
    uVar1 = uStack_78;
  }
  _objc_release(uVar1);
  _objc_destroyWeak(ppuVar2 + 5);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 00617138; end: 006171af;  */

void FUN_00617138(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00789920(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 006171b0; end: 006172bb; -[SCQueuePerformerObserver complete] */

void FUN_006171b0(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_50 = PTR___NSConcreteStackBlock_00999f30;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_006172bc;
    puStack_38 = &UNK_00a0afd8;
    ppuVar2 = &puStack_50;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0078a5c0(uVar1);
  }
  else {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_78 = PTR___NSConcreteStackBlock_00999f30;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x6172f0;
    puStack_60 = &UNK_00a0afd8;
    ppuVar2 = &puStack_78;
    _objc_copyWeak(auStack_58,auStack_28);
    func_0x0078a560(uVar1);
  }
  _objc_destroyWeak(ppuVar2 + 4);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 006172bc; end: 00617323;  */

void FUN_006172bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x007806e0(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00617324; end: 0061735b; -[SCQueuePerformerObserver .cxx_destruct] */

void FUN_00617324(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 8);
  return;
}



/* Entry: 0061735c; end: 006173ff; -[SCQueuePerformerSubscriptionObservable initWithParentObservable:performer:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0061735c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac4288;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac58e0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_00ac58e4) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00617400; end: 006175b3; -[SCQueuePerformerSubscriptionObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00617400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac3478;
  _objc_alloc(PTR_PTR_00ac3478);
  lVar2 = param_1;
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00785e60(puVar1);
  _objc_release(lVar2);
  _objc_retain(puVar1);
  _objc_initWeak(auStack_48,puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_00ac58e0);
  if (*(char *)(param_1 + _DAT_00ac58e4) == '\x01') {
    puStack_80 = PTR___NSConcreteStackBlock_00999f30;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_006175b4;
    puStack_68 = &UNK_00a02400;
    puVar3 = auStack_50;
    _objc_copyWeak(puVar3,auStack_48);
    lStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x0078a5c0(uVar4);
    uVar4 = uStack_58;
  }
  else {
    puVar3 = auStack_88;
    _objc_copyWeak(puVar3,auStack_48);
    _objc_retain(param_3);
    func_0x0078a560(uVar4);
    uVar4 = param_3;
  }
  _objc_release(uVar4);
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}


