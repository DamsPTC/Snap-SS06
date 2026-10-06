/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcbbe54; end: 10bcbbecf; -[SCLatestCombinedMultiObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbe54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279681c,0);
  _objc_storeStrong(param_1 + _DAT_112796818,0);
  _objc_storeStrong(param_1 + _DAT_11279680c,0);
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_112796820);
  _objc_storeStrong(param_1 + _DAT_112796814,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796810,0);
  return;
}



/* Entry: 10bcbbed0; end: 10bcbbf3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbed0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_112796830;
    __ZNSt3__15mutex4lockEv(param_1 + lVar1);
    *(undefined1 *)(param_1 + _DAT_112796838) = 1;
    func_0x00010c27cc60(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbbf40; end: 10bcbbfaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbf40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_112796830;
    __ZNSt3__15mutex4lockEv(param_1 + lVar1);
    *(undefined1 *)(param_1 + _DAT_112796844) = 1;
    func_0x00010c27cc60(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbbfb0; end: 10bcbbfe7; -[SCLatestCombinedObserver dispose] */

/* WARNING: Possible PIC construction at 0x00010bcbbfd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcbbfd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbfb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279683c),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10bcbbfe8; end: 10bcbc023; -[SCLatestCombinedObserver tryComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbbfe8(long param_1)

{
  if ((*(char *)(param_1 + _DAT_112796838) == '\x01') &&
     (*(char *)(param_1 + _DAT_112796844) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11279682c),PTR_s_complete_1125ae760);
    return;
  }
  return;
}



/* Entry: 10bcbc024; end: 10bcbc0af; -[SCLatestCombinedObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbc024(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112796848,0);
  _objc_storeStrong(param_1 + _DAT_112796840,0);
  _objc_storeStrong(param_1 + _DAT_11279683c,0);
  _objc_storeStrong(param_1 + _DAT_112796834,0);
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_112796830);
  _objc_storeStrong(param_1 + _DAT_11279682c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796828,0);
  return;
}



/* Entry: 10bcbc0b0; end: 10bcbc0b7; -[SCDistinctUntilChangedObserver complete] */

void FUN_10bcbc0b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbc0b8; end: 10bcbc107; -[SCDistinctUntilChangedObserver .cxx_destruct] */

void FUN_10bcbc0b8(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcbc108; end: 10bcbc19b; -[SCFlatMapObserver complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbc108(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_112796868;
  __ZNSt3__15mutex4lockEv(param_1 + lVar1);
  if ((*(byte *)(param_1 + _DAT_112796878) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + lVar1);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112796878) = 1;
  lVar2 = *(long *)(param_1 + _DAT_11279686c);
  __ZNSt3__15mutex6unlockEv(param_1 + lVar1);
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796860),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbc19c; end: 10bcbc39b; -[SCFlatMapObserver dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbc19c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_1 + _DAT_112796874);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,plVar1[2]);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112796868;
  __ZNSt3__15mutex4lockEv(param_1 + lVar7);
  *(undefined1 *)(param_1 + _DAT_112796870) = 1;
  plVar9 = (long *)*plVar1;
  while (plVar9 != plVar1 + 1) {
    if (plVar9[5] != 0) {
      func_0x00010befa120(puVar4);
    }
    plVar2 = (long *)plVar9[1];
    plVar10 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar10[2];
        bVar3 = plVar10 != (long *)*plVar9;
        plVar10 = plVar9;
      } while (bVar3);
    }
    else {
      do {
        plVar9 = plVar2;
        plVar2 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  func_0x00010bcbc3f8(plVar1[1]);
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = (long)(plVar1 + 1);
  __ZNSt3__15mutex6unlockEv(param_1 + lVar7);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar4);
      }
      func_0x00010bf86d40(*(undefined8 *)((long)puVar8 * 8));
      puVar8 = puVar8 + 1;
    } while (puVar5 != puVar8);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar5 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    __Unwind_Resume();
    func_0x00010bcbc3f8(*(undefined8 *)(puVar5 + (long)_DAT_112796874 + 8));
    __ZNSt3__15mutexD1Ev(puVar5 + _DAT_112796868);
    _objc_storeStrong(puVar5 + _DAT_112796864,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar5 + _DAT_112796860,0);
    return;
  }
  return;
}



/* Entry: 10bcbc39c; end: 10bcbc43f; -[SCFlatMapObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbc39c(long param_1)

{
  func_0x00010bcbc3f8(*(undefined8 *)(param_1 + _DAT_112796874 + 8));
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_112796868);
  _objc_storeStrong(param_1 + _DAT_112796864,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796860,0);
  return;
}



/* Entry: 10bcbc440; end: 10bcbc513; -[SCFlatMapLatestObserver initWithObserver:mapper:] */

undefined1 *
FUN_10bcbc440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e5f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbc514; end: 10bcbc65b; -[SCFlatMapLatestObserver next:] */

void FUN_10bcbc514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e3018;
  _objc_alloc();
  func_0x00010c017680();
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x69) = 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x18);
  lVar3 = lVar1;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010bf86d40();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
  }
  *(long *)(param_1 + 0x60) = lVar3;
  _objc_retain(lVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar3);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x18);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcbc65c; end: 10bcbc6bf; -[SCFlatMapLatestObserver complete] */

void FUN_10bcbc65c(long param_1)

{
  byte bVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x18);
    return;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  bVar1 = *(byte *)(param_1 + 0x69);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x18);
  if ((bVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbc6c0; end: 10bcbc72b; -[SCFlatMapLatestObserver proxyObserverDidComplete:] */

void FUN_10bcbc6c0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x69) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar2);
  cVar1 = *(char *)(param_1 + 0x68);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x18);
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
    return;
  }
  return;
}



/* Entry: 10bcbc72c; end: 10bcbc77b; -[SCFlatMapLatestObserver .cxx_destruct] */

void FUN_10bcbc72c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcbc77c; end: 10bcbc7a3; -[SCFlatMapLatestObserver .cxx_construct] */

long FUN_10bcbc77c(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x18);
  return param_1;
}



/* Entry: 10bcbc7a4; end: 10bcbc7af; -[SCMergedObserver .cxx_destruct] */

void FUN_10bcbc7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bcbc7b0; end: 10bcbc813; -[SCSwitchMapObserver complete] */

void FUN_10bcbc7b0(long param_1)

{
  byte bVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x20);
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  bVar1 = *(byte *)(param_1 + 0x61);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x20);
  if ((bVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbc814; end: 10bcbc857; -[SCSwitchMapObserver .cxx_destruct] */

void FUN_10bcbc814(long param_1)

{
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcbc858; end: 10bcbc8ab; -[SCTakeObserver complete] */

void FUN_10bcbc858(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  if (uVar2 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
    return;
  }
  return;
}



/* Entry: 10bcbc8ac; end: 10bcbc8d7; -[SCTakeObserver .cxx_destruct] */

void FUN_10bcbc8ac(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcbc8d8; end: 10bcbc9b7; -[SCTimeoutObserver initWithObservable:observer:timeoutInterval:] */

undefined1 *
FUN_10bcbc8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270e610;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    func_0x00010bec1c40(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbc9b8; end: 10bcbca83; -[SCTimeoutObserver next:] */

void FUN_10bcbc9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bec1c40(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcbca84; end: 10bcbcad3; -[SCTimeoutObserver complete] */

void FUN_10bcbca84(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  func_0x00010bde2800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10bcbcad4; end: 10bcbcb4b; -[SCTimeoutObserver dealloc] */

void FUN_10bcbcad4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_11270e610;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bcbcb4c; end: 10bcbcc0b; -[SCTimeoutObserver _onError] */

void FUN_10bcbcb4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,PTR_PTR_1134041c8,
                      (long)iRam00000001134041d0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
  return;
}



/* Entry: 10bcbcc0c; end: 10bcbcc33; -[SCTimeoutObserver _complete] */

void FUN_10bcbcc0c(long param_1)

{
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbcc34; end: 10bcbcd63; -[SCTimeoutObserver _startTimer] */

void FUN_10bcbcc34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = uVar2;
  func_0x00010c270920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10bcbcd64; end: 10bcbcddf;  */

void FUN_10bcbcd64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    __ZNSt3__15mutex4lockEv(lVar1 + 0x28);
    if (*(long *)(lVar1 + 0x68) == *(long *)(param_1 + 0x28)) {
      func_0x00010be69080(lVar1);
    }
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10bcbcde0; end: 10bcbce1f; -[SCTimeoutObserver .cxx_destruct] */

void FUN_10bcbcde0(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bcbce20; end: 10bcbce3f; -[SCTimeoutObserver .cxx_construct] */

void FUN_10bcbce20(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10bcbce40; end: 10bcbcf0f; -[SCTimerObserver initWithObserver:timerInterval:performer:] */

undefined1 *
FUN_10bcbce40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270e618;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbcf10; end: 10bcbd0bb; -[SCTimerObserver next:] */

void FUN_10bcbcf10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
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
  if (*(double *)(param_1 + 0x10) <= 0.0) {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10bcbd0bc;
    puStack_50 = &UNK_110896d48;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c0f88c0(uVar1);
    _objc_release(uStack_48);
    puVar3 = auStack_40;
  }
  else {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 8));
    uVar1 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x10) * 1000000000.0));
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10bcbd104;
    puStack_80 = &UNK_110896d48;
    _objc_copyWeak(auStack_70,auStack_38);
    _objc_retain(param_3);
    uStack_78 = param_3;
    func_0x000107c27d84(uVar1,uVar2,&puStack_98);
    _objc_release(uVar2);
    _objc_release(uStack_78);
    puVar3 = auStack_70;
  }
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10bcbd0bc; end: 10bcbd103;  */

void FUN_10bcbd0bc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d9840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbd104; end: 10bcbd14b;  */

void FUN_10bcbd104(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d9840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbd14c; end: 10bcbd153; -[SCTimerObserver complete] */

void FUN_10bcbd14c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbd154; end: 10bcbd183; -[SCTimerObserver .cxx_destruct] */

void FUN_10bcbd154(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcbd184; end: 10bcbd1ab;  */

void FUN_10bcbd184(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined *puStack_48;
  
  func_0x000104bd47e8(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar2 = puVar1;
  func_0x00010c06eda0();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010bf436e0(puVar1);
  }
  puStack_48 = PTR_PTR_11270e630;
  puStack_50 = puVar1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bcbd1ac; end: 10bcbd227; -[SCClearableReplaySubject dealloc] */

void FUN_10bcbd1ac(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c06eda0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf436e0(param_1);
  }
  puStack_28 = PTR_PTR_11270e630;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bcbd228; end: 10bcbd287; -[SCClearableReplaySubject clear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd228(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112796918;
  __ZNSt3__15mutex4lockEv(param_1 + lVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11279690c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + lVar1);
  return;
}



/* Entry: 10bcbd288; end: 10bcbd39f; -[SCClearableReplaySubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd288(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112796918;
  __ZNSt3__15mutex4lockEv(param_1 + lVar6);
  lVar5 = (long)_DAT_112796910;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar3 = (long)_DAT_11279690c;
    uVar1 = *(ulong *)(param_1 + lVar3);
    func_0x00010bf529e0();
    if (*(ulong *)(param_1 + lVar5) <= uVar1) {
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + lVar3),param_2,0);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    puVar2 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010befa120(uVar4,param_2,puVar2);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + lVar6);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112796914),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcbd3a0; end: 10bcbd3cf; -[SCClearableReplaySubject complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd3a0(long param_1,undefined8 param_2)

{
  func_0x00010c1b00e0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796914),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbd3d0; end: 10bcbd62f; -[SCClearableReplaySubject subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd3d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010befa200(*(undefined8 *)(param_1 + _DAT_112796908));
  lVar7 = (long)_DAT_112796918;
  __ZNSt3__15mutex4lockEv(param_1 + lVar7);
  lVar3 = *(long *)(param_1 + _DAT_11279690c);
  func_0x00010bf51e00();
  __ZNSt3__15mutex6unlockEv(param_1 + lVar7);
  _objc_retain(lVar3);
  lVar7 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c071ae0();
      uVar1 = 0;
      if ((int)uVar5 == 0) {
        uVar1 = uVar8;
      }
      _objc_retain(uVar1);
      _objc_release(puVar4);
      func_0x00010c0d9840(param_3);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar7 != lVar9);
    lVar7 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c06eda0();
  if ((int)param_1 != 0) {
    func_0x00010bf436e0(param_3);
  }
  puVar4 = PTR_PTR_1126e2fe0;
  _objc_alloc(PTR_PTR_1126e2fe0);
  func_0x00010c030ae0();
  _objc_release(lVar3);
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(param_3);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar7 + _DAT_112796908),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 10bcbd630; end: 10bcbd63f; -[SCClearableReplaySubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796908),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 10bcbd640; end: 10bcbd653; -[SCClearableReplaySubject isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10bcbd640(long param_1)

{
  return *(byte *)(param_1 + _DAT_112796904) & 1;
}



/* Entry: 10bcbd654; end: 10bcbd663; -[SCClearableReplaySubject setIsComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd654(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112796904) = param_3;
  return;
}



/* Entry: 10bcbd664; end: 10bcbd6bf; -[SCClearableReplaySubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd664(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_112796918);
  _objc_storeStrong(param_1 + _DAT_11279690c,0);
  _objc_storeStrong(param_1 + _DAT_112796914,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796908,0);
  return;
}



/* Entry: 10bcbd6c0; end: 10bcbd73b; -[SCReplaySubject dealloc] */

void FUN_10bcbd6c0(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c06eda0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf436e0(param_1);
  }
  puStack_28 = PTR_PTR_11270e638;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bcbd73c; end: 10bcbd84b; -[SCReplaySubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd73c(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112796930;
  __ZNSt3__15mutex4lockEv(param_1 + lVar5);
  lVar3 = (long)_DAT_112796924;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (*(ulong *)(param_1 + _DAT_112796928) <= uVar1) {
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  puVar2 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa120(uVar4,param_2,puVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + lVar5);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11279692c),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcbd84c; end: 10bcbd87b; -[SCReplaySubject complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd84c(long param_1,undefined8 param_2)

{
  func_0x00010c1b00e0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279692c),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcbd87c; end: 10bcbdaab; -[SCReplaySubject subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbd87c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010befa200(*(undefined8 *)(param_1 + _DAT_112796920));
  lVar9 = (long)_DAT_112796930;
  __ZNSt3__15mutex4lockEv(param_1 + lVar9);
  lVar7 = *(long *)(param_1 + _DAT_112796924);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(undefined8 *)(lVar10 * 8);
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c071ae0();
      uVar1 = 0;
      if ((int)uVar5 == 0) {
        uVar1 = uVar8;
      }
      _objc_retain(uVar1);
      _objc_release(puVar4);
      func_0x00010c0d9840(param_3);
      _objc_release(uVar1);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  __ZNSt3__15mutex6unlockEv(param_1 + lVar9);
  func_0x00010c06eda0();
  if ((int)param_1 != 0) {
    func_0x00010bf436e0(param_3);
  }
  puVar4 = PTR_PTR_1126e2fe0;
  _objc_alloc(PTR_PTR_1126e2fe0);
  func_0x00010c030ae0();
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  __ZNSt3__15mutex6unlockEv(puVar4 + lVar9);
  _objc_release(param_3);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + _DAT_112796920),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 10bcbdaac; end: 10bcbdabb; -[SCReplaySubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbdaac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796920),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 10bcbdabc; end: 10bcbdacb; -[SCReplaySubject buffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bcbdabc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112796924);
}



/* Entry: 10bcbdacc; end: 10bcbdb0b; -[SCReplaySubject setBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbdacc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112796924;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcbdb0c; end: 10bcbdb1b; -[SCReplaySubject bufferSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bcbdb0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112796928);
}



/* Entry: 10bcbdb1c; end: 10bcbdb2b; -[SCReplaySubject setBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbdb1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112796928) = param_3;
  return;
}



/* Entry: 10bcbdb2c; end: 10bcbdb3f; -[SCReplaySubject isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10bcbdb2c(long param_1)

{
  return *(byte *)(param_1 + _DAT_11279691c) & 1;
}



/* Entry: 10bcbdb40; end: 10bcbdb4f; -[SCReplaySubject setIsComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbdb40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11279691c) = param_3;
  return;
}



/* Entry: 10bcbdb50; end: 10bcbdbab; -[SCReplaySubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbdb50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112796924,0);
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_112796930);
  _objc_storeStrong(param_1 + _DAT_11279692c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796920,0);
  return;
}



/* Entry: 10bcbdbac; end: 10bcbdc97;  */

void FUN_10bcbdbac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lRam0000000113847058 != -1) {
    func_0x000107c27d9c(0x113847058,&PTR___NSConcreteGlobalBlock_110d98ce8);
  }
  lVar1 = param_2;
  if ((lVar2 == lRam0000000113847060) && (*(long *)(param_1 + 0x20) == 0xd159b10c)) {
    lVar2 = 0x10;
    func_0x000107c27d90(0x10,param_2);
    if (*(long *)(lVar2 + 0x20) == 0xd159b10c) {
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
      lVar1 = lVar2;
    }
    _objc_retainBlock(lVar1);
    _objc_release(lVar2);
  }
  else {
    _objc_retainBlock(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10bcbdc98; end: 10bcbdcc3;  */

void FUN_10bcbdc98(void)

{
  long lVar1;
  
  lVar1 = 0x10;
  func_0x000107c27d90(0x10,&PTR___NSConcreteGlobalBlock_110d98d08);
  uRam0000000113847060 = *(undefined8 *)(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcbdcc4; end: 10bcbdcc7;  */

void FUN_10bcbdcc4(void)

{
  return;
}



/* Entry: 10bcbdcc8; end: 10bcbde97; -[SCFuture map:] */

void FUN_10bcbdcc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f30738,0x66,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10bcbddec;
    puStack_48 = &UNK_1108fe3e0;
    puStack_40 = puVar1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(puVar1);
    func_0x00010c297260(param_1,param_2,&puStack_60,0);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(puStack_40);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bcbde98; end: 10bcbe0bb; -[SCFuture flatMap:] */

void FUN_10bcbde98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f30738,0x66,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10bcbdfbc;
    puStack_48 = &UNK_1108fe3e0;
    puStack_40 = puVar1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(puVar1);
    func_0x00010c297260(param_1,param_2,&puStack_60,0);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(puStack_40);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bcbe0bc; end: 10bcbe0cf;  */

void FUN_10bcbe0bc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10bcbe0d0; end: 10bcbe117; +[SCLazyFuture withFetch:] */

void FUN_10bcbe0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c012880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bcbe118; end: 10bcbe197; -[SCLazyFuture initWithFetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bcbe118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e640;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s__init_11256be78);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796934);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796934) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcbe198; end: 10bcbe28b; -[SCLazyFuture valueWithCompletion:performer:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbe198(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270e640;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_valueWithCompletion_performer_pr_1126836c8);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar3 = (long)_DAT_112796934;
  lVar1 = *(long *)(param_1 + lVar3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 != 0) {
    _objc_retain(param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10bcbe28c;
    puStack_50 = &UNK_1108e2d08;
    pcVar4 = *(code **)(lVar1 + 0x10);
    lStack_48 = param_1;
    _objc_retain(param_1);
    (*pcVar4)(lVar1,&puStack_68);
    _objc_release(lStack_48);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10bcbe28c; end: 10bcbe29f;  */

void FUN_10bcbe28c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde3670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__completeWithError__112556738,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde38d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeWithValue__1125567d0);
  return;
}



/* Entry: 10bcbe2a0; end: 10bcbe2b3; -[SCLazyFuture .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcbe2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796934,0);
  return;
}



/* Entry: 10bcbe2b4; end: 10bcbe2c3; -[SCPromise completeWithError:] */

void FUN_10bcbe2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde36b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s__completeWithError_ignoreRedunda_112556748,param_3,
             *(undefined1 *)(param_1 + 0x10));
  return;
}



/* Entry: 10bcbe2c4; end: 10bcbe367;  */

void FUN_10bcbe2c4(long param_1)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c312c4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10bcbe368;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_1);
    lStack_28 = param_1;
    func_0x000107c27da4(PTR___dispatch_main_q_11034be20,&puStack_48);
    _objc_release(lStack_28);
  }
  else {
    (**(code **)(param_1 + 0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbe368; end: 10bcbe37f;  */

void FUN_10bcbe368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcbe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10bcbe380; end: 10bcbe48f;  */

void FUN_10bcbe380(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c312c4(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 == 0) {
    if (*param_2 == -1) goto LAB_10bcbe414;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10bcbe49c;
    puStack_60 = &UNK_110860cf8;
    plStack_50 = param_2;
    _objc_retain(param_1);
    uStack_58 = param_1;
    func_0x000107c27da4(PTR___dispatch_main_q_11034be20,&puStack_78);
    uVar2 = uStack_58;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10bcbe490;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_1);
    uVar2 = param_1;
    uStack_28 = param_1;
    if (*param_2 != -1) {
      func_0x000107c27d9c(param_2,&puStack_48);
      uVar2 = uStack_28;
    }
  }
  _objc_release(uVar2);
LAB_10bcbe414:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcbe490; end: 10bcbe49b;  */

void FUN_10bcbe490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcbe498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10bcbe49c; end: 10bcbe51b;  */

void FUN_10bcbe49c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10bcbe51c;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  plVar2 = *(long **)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  if (*plVar2 != -1) {
    func_0x000107c27d9c(plVar2,&puStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_28);
  return;
}



/* Entry: 10bcbe51c; end: 10bcbe527;  */

void FUN_10bcbe51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcbe524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10bcbe528; end: 10bcbe533; -[SCFuture _completeWithError:] */

void FUN_10bcbe528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeWithItem_tag_assertIfAl_112556778,param_3,2,1);
  return;
}



/* Entry: 10bcbe534; end: 10bcbe53f; -[SCFuture _completeWithError:ignoreRedundantCompletions:] */

void FUN_10bcbe534(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeWithItem_tag_assertIfAl_112556778,param_3,2,param_4 ^ 1);
  return;
}



/* Entry: 10bcbe540; end: 10bcbe563; -[SCFuture copyWithZone:] */

undefined8 FUN_10bcbe540(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bcbe564; end: 10bcbe5db; +[SCFuture immediateFutureWithError:] */

void FUN_10bcbe564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae558;
  _objc_alloc(PTR_PTR_1126ae558);
  func_0x00010be39360();
  func_0x00010bde3660();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbe5dc; end: 10bcbe5ef;  */

undefined8 FUN_10bcbe5dc(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  _objc_release();
  return 0;
}



/* Entry: 10bcbe5f0; end: 10bcbe607; -[sc_async_queue init] */

undefined8 FUN_10bcbe5f0(void)

{
  _objc_release();
  return 0;
}



/* Entry: 10bcbe608; end: 10bcbe60f; -[sc_async_queue isEqual:] */

undefined8 FUN_10bcbe608(void)

{
  return 0;
}



/* Entry: 10bcbe610; end: 10bcbe617; -[sc_async_queue hash] */

undefined8 FUN_10bcbe610(void)

{
  return 0;
}



/* Entry: 10bcbe618; end: 10bcbe627; -[sc_async_queue copyWithZone:] */

undefined8 FUN_10bcbe618(void)

{
  return 0;
}



/* Entry: 10bcbe628; end: 10bcbe69b;  */

void FUN_10bcbe628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c11de00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d98(param_1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bcbe69c; end: 10bcbe69f; -[sc_async_queue assertQueue] */

void FUN_10bcbe69c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcf610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__assertIsCurrentQueue_112551720);
  return;
}



/* Entry: 10bcbe6a0; end: 10bcbe6a3; -[sc_async_queue assertNotQueue] */

void FUN_10bcbe6a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcf630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__assertIsNotCurrentQueue_112551728);
  return;
}



/* Entry: 10bcbe6a4; end: 10bcbe6a7; -[sc_async_queue queue] */

void FUN_10bcbe6a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed1e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unsafeRawQueue_112592140);
  return;
}



/* Entry: 10bcbe6a8; end: 10bcbe6ab; -[sc_async_queue performImmediatelyIfCurrentPerformer:] */

void FUN_10bcbe6a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be36d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__ifCurrentQueueInvokeOtherwiseAs_11256b500);
  return;
}



/* Entry: 10bcbe6ac; end: 10bcbe6af; -[sc_async_queue isCurrentPerformer] */

void FUN_10bcbe6ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCurrentQueue_11256d720);
  return;
}



/* Entry: 10bcbe6b0; end: 10bcbe6b7; +[SCMainThreadTracer sharedInstance] */

undefined8 FUN_10bcbe6b0(void)

{
  return 0;
}



/* Entry: 10bcbe6b8; end: 10bcbe6cf; -[SCMainThreadTracer init] */

undefined8 FUN_10bcbe6b8(void)

{
  _objc_release();
  return 0;
}



/* Entry: 10bcbe6d0; end: 10bcbe6d7; -[SCMainThreadTracer grapheneLogger] */

undefined8 FUN_10bcbe6d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bcbe6d8; end: 10bcbe6df; -[SCMainThreadTracer setGrapheneLogger:] */

void FUN_10bcbe6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10bcbe6e0; end: 10bcbe6e7; -[SCMainThreadTracer concurrency] */

undefined4 FUN_10bcbe6e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10bcbe6e8; end: 10bcbe6ef; -[SCMainThreadTracer setConcurrency:] */

void FUN_10bcbe6e8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10bcbe6f0; end: 10bcbe6f7; -[SCMainThreadTracer inTransition] */

undefined1 FUN_10bcbe6f0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


