/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068bb624; end: 1068bb6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bb624(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110947cb8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae970;
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112752cd4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010c0c7320(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0d3e0(lVar1,param_2,puVar2,uVar5,uVar4,puVar3);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068bb6e8; end: 1068bb71f;  */

void FUN_1068bb6e8(void)

{
  _objc_opt_new(PTR_PTR_1126cebc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068bb720; end: 1068bb77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bb720(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112752cb0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010bf21f60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068bb77c; end: 1068bb797;  */

void FUN_1068bb77c(void)

{
  _objc_opt_new(PTR_PTR_1126cebd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068bb798; end: 1068bb7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bb798(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112752cb4;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010bf21f60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068bb7f4; end: 1068bb913; -[SCUserNavStartupCompletedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bb7f4(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar1 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar7 = *(long *)(param_1 + _DAT_112752c98);
  _objc_retain(lVar7);
  lVar4 = lVar7;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lStack_108 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar7;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar7);
  puStack_118 = PTR_PTR_1126f3b08;
  puVar6 = PTR_s_end_1125c29d0;
  lStack_120 = param_1;
  _objc_msgSendSuper2();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  if (((ulong)puVar6 & 1) != 0) {
    return;
  }
  puVar2 = (undefined1 *)((long)plVar1 + 0x28);
  _objc_loadWeakRetained();
  if (((puVar2 != (undefined1 *)0x0) && (puVar3 = puVar2, func_0x00010c071800(), (int)puVar3 != 0))
     && (lVar4 = *(long *)((long)plVar1 + 0x20), lVar4 != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)((long)plVar1 + 0x20);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(puVar2);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1068bb914; end: 1068bb9a7;  */

void FUN_1068bb914(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c071800(), (int)lVar2 != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(lVar1);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068bb9a8; end: 1068bbaeb; -[SCUserNavStartupCompletedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bb9a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112752ce0,0);
  _objc_storeStrong(param_1 + _DAT_112752cdc,0);
  _objc_storeStrong(param_1 + _DAT_112752cd8,0);
  _objc_storeStrong(param_1 + _DAT_112752cd4,0);
  _objc_storeStrong(param_1 + _DAT_112752cd0,0);
  _objc_storeStrong(param_1 + _DAT_112752ccc,0);
  _objc_storeStrong(param_1 + _DAT_112752cc8,0);
  _objc_storeStrong(param_1 + _DAT_112752cc4,0);
  _objc_storeStrong(param_1 + _DAT_112752cc0,0);
  _objc_storeStrong(param_1 + _DAT_112752cbc,0);
  _objc_storeStrong(param_1 + _DAT_112752cb8,0);
  _objc_destroyWeak(param_1 + _DAT_112752cb4);
  _objc_destroyWeak(param_1 + _DAT_112752cb0);
  _objc_destroyWeak(param_1 + _DAT_112752cac);
  _objc_destroyWeak(param_1 + _DAT_112752ca8);
  _objc_destroyWeak(param_1 + _DAT_112752ca4);
  _objc_destroyWeak(param_1 + _DAT_112752c9c);
  _objc_destroyWeak(param_1 + _DAT_112752ca0);
  _objc_storeStrong(param_1 + _DAT_112752c98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752c94,0);
  return;
}



/* Entry: 1068bbaec; end: 1068bbb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bbaec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112752ce4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112752ce8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf777c0();
    func_0x00010bf18f80(uVar1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068bbb70; end: 1068bbbe7; -[SCLegacyWarmStartupServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bbb70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112752cf8,0);
  _objc_storeStrong(param_1 + _DAT_112752cf4,0);
  _objc_destroyWeak(param_1 + _DAT_112752ce8);
  _objc_destroyWeak(param_1 + _DAT_112752cf0);
  _objc_storeStrong(param_1 + _DAT_112752cec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752ce4,0);
  return;
}



/* Entry: 1068bbbe8; end: 1068bbcab; -[SCBoostCleanupEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bbbe8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + _DAT_112752cfc;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c07c8c0();
  _objc_release(lVar1);
  _objc_release(param_1);
  if ((int)lVar2 != 0) {
    uVar3 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 1068bbcac; end: 1068bbd77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bbcac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112752d00;
  lVar1 = *(long *)(param_1 + 0x20) + lVar4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c08d300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bc80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar4 = *(long *)(param_1 + 0x20) + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c08d300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1382c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1068bbd78; end: 1068bbdbb; -[SCBoostCleanupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bbd78(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752d00);
  _objc_destroyWeak(param_1 + _DAT_112752cfc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752d04);
  return;
}



/* Entry: 1068bbdbc; end: 1068bbf9f; -[SCBoostCoordinator initWithDocObjectContext:currentUserId:requestManager:snapTokenProvider:attestationProvider:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_1068bbdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_68 = PTR_PTR_1126f3b10;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068bbfa0; end: 1068bc02b; -[SCBoostCoordinator observableBoostStatesWithStoryId:snapId:observationQueue:] */

void FUN_1068bbfa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  FUN_1068bdfe4(uVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068bc02c; end: 1068bc0a7; -[SCBoostCoordinator observableBoostStatesWithItemIds:observationQueue:] */

void FUN_1068bc02c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  FUN_1068bdca0(uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068bc0a8; end: 1068bc203; -[SCBoostCoordinator fetchBoostStatesWithItemIds:completionQueue:completionBlock:] */

void FUN_1068bc0a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1068bc204;
  uStack_60 = 0x1068bc214;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068bc204; end: 1068bc21b;  */

void FUN_1068bc204(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068bc21c; end: 1068bc27b;  */

void FUN_1068bc21c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_1068bdca0(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068bc27c; end: 1068bc293;  */

void FUN_1068bc27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068bc290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 1068bc294; end: 1068bc41f; -[SCBoostCoordinator fetchBoostStatesWithStoryId:snapId:completionQueue:completionBlock:] */

void FUN_1068bc294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1068bc204;
  uStack_70 = 0x1068bc214;
  uStack_68 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f8500(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068bc420; end: 1068bc47f;  */

void FUN_1068bc420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_1068bdfe4(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068bc480; end: 1068bc497;  */

void FUN_1068bc480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068bc494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 1068bc498; end: 1068bc603; -[SCBoostCoordinator saveBoostAction:completion:] */

void FUN_1068bc498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1068bc604;
  puStack_68 = &UNK_11085adb8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = param_3;
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068bc604; end: 1068bc613;  */

void FUN_1068bc604(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(param_2 + 0x20);
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar8);
  puVar1 = PTR_PTR_1126cec28;
  FUN_1068c1d68(PTR_PTR_1126cec28,lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_1068be8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar8;
  func_0x00010c25e5c0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_1068be1c0(lVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_1068bdca0(param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar5);
  lVar2 = lVar8;
  func_0x00010beef1e0();
  if (1 < lVar2 - 1U) goto LAB_1068be6b4;
  _objc_retain(param_3);
  _objc_retain(lVar8);
  _objc_retain(lVar6);
  lVar2 = lVar8;
  func_0x00010bf45460(lVar8);
  _objc_retainAutoreleasedReturnValue();
  unaff_x25 = lVar2;
  FUN_1068be8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar8;
  func_0x00010c25e5c0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  unaff_x26 = unaff_x25;
  FUN_1068be1c0(unaff_x25,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_retain(lVar8);
  _objc_retain(lVar6);
  _objc_retain(unaff_x25);
  _objc_retain(unaff_x26);
  lVar2 = lVar8;
  func_0x00010bf1f9c0();
  uVar11 = 0;
  if (lVar2 == 1) {
    func_0x00010beef1c0(lVar8);
    uVar13 = param_1;
    func_0x00010c1178c0(lVar8);
    uVar10 = uVar13;
    func_0x00010beef1e0(lVar8);
LAB_1068be4e4:
    uVar12 = 0;
    uVar11 = param_1;
  }
  else {
    if (lVar2 != 2) {
      uVar13 = 0;
      uVar10 = param_1;
      param_1 = uVar11;
      goto LAB_1068be4e4;
    }
    func_0x00010beef1c0(lVar8);
    uVar10 = param_1;
    func_0x00010beef1e0(lVar8);
    uVar13 = 0;
    uVar12 = param_1;
  }
  if (lVar6 != 0) {
    lVar2 = lVar8;
    func_0x00010bf1f9c0();
    if (lVar2 == 1) {
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123160();
      _objc_release(lVar2);
      func_0x00010c07bea0(lVar6);
      uVar12 = uVar10;
    }
    else if (lVar2 == 2) {
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f9a0();
      uVar13 = uVar10;
      _objc_release(lVar2);
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f740();
      _objc_release(lVar2);
      func_0x00010c06d760(lVar6);
      uVar11 = uVar10;
    }
  }
  puVar5 = PTR_PTR_1126b5b20;
  _objc_alloc(PTR_PTR_1126b5b20);
  lVar2 = lVar8;
  func_0x00010c25e5c0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d920(uVar11,uVar13,uVar12,puVar5);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b5b98;
  _objc_alloc();
  lVar2 = lVar8;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c080();
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(lVar8);
  puVar5 = puVar7;
  FUN_1068c3d48(puVar7,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(param_3);
LAB_1068be6b4:
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(lVar8);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf52680();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c298be0();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068bc614; end: 1068bc667;  */

void FUN_1068bc614(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be0f0c0();
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068bc658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1068bc668; end: 1068bc773; -[SCBoostCoordinator saveBoostActionLocally:completion:] */

void FUN_1068bc668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1068bc774;
  puStack_60 = &UNK_11085adb8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1068bc784;
  puStack_88 = &UNK_110842508;
  uStack_80 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar3,param_2,&puStack_78,uVar2,&puStack_a0);
  _objc_release(uVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068bc774; end: 1068bc797;  */

void FUN_1068bc774(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(param_2 + 0x20);
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar8);
  puVar1 = PTR_PTR_1126cec28;
  FUN_1068c1d68(PTR_PTR_1126cec28,lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_1068be8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar8;
  func_0x00010c25e5c0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_1068be1c0(lVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_1068bdca0(param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar5);
  lVar2 = lVar8;
  func_0x00010beef1e0();
  if (1 < lVar2 - 1U) goto LAB_1068be6b4;
  _objc_retain(param_3);
  _objc_retain(lVar8);
  _objc_retain(lVar6);
  lVar2 = lVar8;
  func_0x00010bf45460(lVar8);
  _objc_retainAutoreleasedReturnValue();
  unaff_x25 = lVar2;
  FUN_1068be8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar8;
  func_0x00010c25e5c0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  unaff_x26 = unaff_x25;
  FUN_1068be1c0(unaff_x25,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_retain(lVar8);
  _objc_retain(lVar6);
  _objc_retain(unaff_x25);
  _objc_retain(unaff_x26);
  lVar2 = lVar8;
  func_0x00010bf1f9c0();
  uVar11 = 0;
  if (lVar2 == 1) {
    func_0x00010beef1c0(lVar8);
    uVar13 = param_1;
    func_0x00010c1178c0(lVar8);
    uVar10 = uVar13;
    func_0x00010beef1e0(lVar8);
LAB_1068be4e4:
    uVar12 = 0;
    uVar11 = param_1;
  }
  else {
    if (lVar2 != 2) {
      uVar13 = 0;
      uVar10 = param_1;
      param_1 = uVar11;
      goto LAB_1068be4e4;
    }
    func_0x00010beef1c0(lVar8);
    uVar10 = param_1;
    func_0x00010beef1e0(lVar8);
    uVar13 = 0;
    uVar12 = param_1;
  }
  if (lVar6 != 0) {
    lVar2 = lVar8;
    func_0x00010bf1f9c0();
    if (lVar2 == 1) {
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123160();
      _objc_release(lVar2);
      func_0x00010c07bea0(lVar6);
      uVar12 = uVar10;
    }
    else if (lVar2 == 2) {
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f9a0();
      uVar13 = uVar10;
      _objc_release(lVar2);
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f740();
      _objc_release(lVar2);
      func_0x00010c06d760(lVar6);
      uVar11 = uVar10;
    }
  }
  puVar5 = PTR_PTR_1126b5b20;
  _objc_alloc(PTR_PTR_1126b5b20);
  lVar2 = lVar8;
  func_0x00010c25e5c0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d920(uVar11,uVar13,uVar12,puVar5);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b5b98;
  _objc_alloc();
  lVar2 = lVar8;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c080();
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(lVar8);
  puVar5 = puVar7;
  FUN_1068c3d48(puVar7,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(param_3);
LAB_1068be6b4:
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(lVar8);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf52680();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c298be0();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068bc798; end: 1068bc803; -[SCBoostCoordinator deleteExpiredStatesWithCompletion:] */

void FUN_1068bc798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110947e58,uVar2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068bc804; end: 1068bc80b;  */

undefined8 * FUN_1068bc804(double param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined4 uStack_ba4;
  long lStack_ba0;
  long lStack_b98;
  undefined8 uStack_b90;
  undefined **ppuStack_b88;
  undefined4 uStack_b80;
  undefined4 uStack_b70;
  double dStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  long lStack_b40;
  long lStack_b38;
  undefined8 uStack_b30;
  long *plStack_b28;
  long *plStack_b20;
  undefined1 uStack_b11;
  undefined **ppuStack_b10;
  undefined4 uStack_b08;
  undefined2 uStack_af8;
  undefined2 uStack_af6;
  undefined1 *puStack_ad8;
  undefined ***pppuStack_ad0;
  long lStack_ac8;
  long lStack_ac0;
  undefined8 uStack_ab8;
  long *plStack_ab0;
  long *plStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  long lStack_968;
  undefined4 uStack_8bc;
  long lStack_8b8;
  long lStack_8b0;
  undefined8 uStack_8a8;
  undefined **ppuStack_8a0;
  undefined4 uStack_898;
  undefined4 uStack_888;
  double dStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  long lStack_858;
  long lStack_850;
  undefined8 uStack_848;
  long *plStack_840;
  long *plStack_838;
  undefined **ppuStack_830;
  undefined4 uStack_828;
  undefined2 uStack_818;
  byte bStack_816;
  byte bStack_815;
  undefined ***pppuStack_7f8;
  undefined ***pppuStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  undefined8 uStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  undefined **ppuStack_7c0;
  undefined4 uStack_7b8;
  undefined4 uStack_7a8;
  double dStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long lStack_778;
  long lStack_770;
  undefined8 uStack_768;
  long *plStack_760;
  long *plStack_758;
  undefined **ppuStack_750;
  undefined4 uStack_748;
  undefined2 uStack_738;
  byte bStack_736;
  byte bStack_735;
  undefined ***pppuStack_718;
  undefined ***pppuStack_710;
  long lStack_708;
  long lStack_700;
  undefined8 uStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  undefined **ppuStack_6e0;
  undefined4 uStack_6d8;
  undefined2 uStack_6c8;
  byte bStack_6c6;
  byte bStack_6c5;
  undefined ***pppuStack_6a8;
  undefined ***pppuStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long *plStack_680;
  long *plStack_678;
  undefined **ppuStack_670;
  undefined4 uStack_668;
  undefined4 uStack_658;
  double dStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long lStack_620;
  undefined8 uStack_618;
  long *plStack_610;
  long *plStack_608;
  undefined **ppuStack_600;
  undefined4 uStack_5f8;
  undefined2 uStack_5e8;
  byte bStack_5e6;
  byte bStack_5e5;
  undefined ***pppuStack_5c8;
  undefined ***pppuStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  undefined8 uStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined **ppuStack_590;
  undefined4 uStack_588;
  undefined4 uStack_578;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long lStack_540;
  undefined8 uStack_538;
  long *plStack_530;
  long *plStack_528;
  undefined **ppuStack_520;
  undefined4 uStack_518;
  undefined2 uStack_508;
  byte bStack_506;
  byte bStack_505;
  undefined ***pppuStack_4e8;
  undefined ***pppuStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  undefined **ppuStack_4b0;
  undefined4 uStack_4a8;
  undefined2 uStack_498;
  byte bStack_496;
  byte bStack_495;
  undefined ***pppuStack_478;
  undefined ***pppuStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  long *plStack_448;
  undefined **ppuStack_440;
  undefined4 uStack_438;
  undefined4 uStack_428;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3b8;
  byte bStack_3b6;
  byte bStack_3b5;
  undefined ***pppuStack_398;
  undefined ***pppuStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_348;
  double dStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined2 uStack_2d8;
  byte bStack_2d6;
  byte bStack_2d5;
  undefined ***pppuStack_2b8;
  undefined ***pppuStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined **ppuStack_280;
  undefined4 uStack_278;
  undefined2 uStack_268;
  byte bStack_266;
  byte bStack_265;
  undefined ***pppuStack_248;
  undefined ***pppuStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  byte bStack_186;
  byte bStack_185;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    dVar12 = -604800000.0;
  }
  else {
    func_0x00010c26f320(puVar2);
    dVar12 = (double)(long)(param_1 * 1000.0) + -604800000.0;
  }
  _objc_release(puVar2);
  pppuVar3 = &ppuStack_1a0;
  FUN_1068c3220();
  pppuVar4 = &ppuStack_1a0;
  FUN_1068c33f0();
  _objc_opt_class(PTR_PTR_1126b5b98);
  if (param_3 == (undefined8 *)0x0) {
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_3);
  }
  uStack_358 = 0xf;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_DAT_11086d7d0;
  uStack_320 = 0;
  uStack_328 = 0;
  lStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2d6 = *(byte *)((long)pppuVar3 + 0x1a);
  bStack_2d5 = *(byte *)((long)pppuVar3 + 0x1b);
  uStack_2e8 = 6;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_11089b010;
  pppuStack_2b0 = &ppuStack_360;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  uStack_438 = 0xf;
  uStack_428 = 0x100;
  ppuStack_440 = &PTR_DAT_11086d7d0;
  uStack_400 = 0;
  uStack_408 = 0;
  lStack_3f0 = 0;
  lStack_3f8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3e8 = 0;
  uStack_410 = 0;
  plStack_3d8 = (long *)0x0;
  bStack_3b6 = *(byte *)((long)pppuVar4 + 0x1a);
  bStack_3b5 = *(byte *)((long)pppuVar4 + 0x1b);
  uStack_3c8 = 7;
  uStack_3b8 = 0x100;
  ppuStack_3d0 = &PTR_DAT_11089b010;
  pppuStack_390 = &ppuStack_440;
  lStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  bStack_266 = bStack_3b6 | bStack_2d6;
  bStack_265 = bStack_3b5 & bStack_2d5;
  uStack_278 = 4;
  uStack_268 = 0x100;
  ppuStack_280 = &PTR_DAT_1108629c8;
  pppuStack_248 = &ppuStack_2f0;
  pppuStack_240 = &ppuStack_3d0;
  plStack_218 = (long *)0x0;
  plStack_220 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_238 = 0;
  uStack_588 = 0xf;
  uStack_578 = 0x100;
  ppuStack_590 = &PTR_DAT_11086d7d0;
  uStack_550 = 0;
  uStack_558 = 0;
  lStack_540 = 0;
  lStack_548 = 0;
  plStack_530 = (long *)0x0;
  uStack_538 = 0;
  uStack_560 = 0;
  plStack_528 = (long *)0x0;
  bStack_506 = *(byte *)((long)pppuVar3 + 0x1a);
  bStack_505 = *(byte *)((long)pppuVar3 + 0x1b);
  uStack_518 = 7;
  uStack_508 = 0x100;
  ppuStack_520 = &PTR_DAT_11089b010;
  pppuStack_4e0 = &ppuStack_590;
  lStack_4d0 = 0;
  lStack_4d8 = 0;
  plStack_4c0 = (long *)0x0;
  uStack_4c8 = 0;
  plStack_4b8 = (long *)0x0;
  uStack_668 = 0xf;
  uStack_658 = 0x100;
  ppuStack_670 = &PTR_DAT_11086d7d0;
  uStack_630 = 0;
  uStack_638 = 0;
  lStack_620 = 0;
  lStack_628 = 0;
  plStack_610 = (long *)0x0;
  uStack_618 = 0;
  plStack_608 = (long *)0x0;
  bStack_5e6 = *(byte *)((long)pppuVar4 + 0x1a);
  bStack_5e5 = *(byte *)((long)pppuVar4 + 0x1b);
  uStack_5f8 = 6;
  uStack_5e8 = 0x100;
  ppuStack_600 = &PTR_DAT_11089b010;
  pppuStack_5c0 = &ppuStack_670;
  lStack_5b0 = 0;
  lStack_5b8 = 0;
  plStack_5a0 = (long *)0x0;
  uStack_5a8 = 0;
  plStack_598 = (long *)0x0;
  bStack_496 = bStack_5e6 | bStack_506;
  bStack_495 = bStack_5e5 & bStack_505;
  uStack_4a8 = 4;
  uStack_498 = 0x100;
  ppuStack_4b0 = &PTR_DAT_1108629c8;
  pppuStack_478 = &ppuStack_520;
  pppuStack_470 = &ppuStack_600;
  plStack_448 = (long *)0x0;
  plStack_450 = (long *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  lStack_468 = 0;
  bStack_1f6 = bStack_496 | bStack_266;
  bStack_1f5 = bStack_495 | bStack_265;
  uStack_208 = 5;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_DAT_1108629c8;
  pppuStack_1d8 = &ppuStack_280;
  pppuStack_1d0 = &ppuStack_4b0;
  plStack_1a8 = (long *)0x0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1c8 = 0;
  uStack_7b8 = 0xf;
  uStack_7a8 = 0x100;
  ppuStack_7c0 = &PTR_DAT_11086d7d0;
  uStack_780 = 0;
  uStack_788 = 0;
  lStack_770 = 0;
  lStack_778 = 0;
  plStack_760 = (long *)0x0;
  uStack_768 = 0;
  plStack_758 = (long *)0x0;
  ppuStack_750 = &PTR_DAT_11089b010;
  bStack_736 = *(byte *)((long)pppuVar3 + 0x1a);
  bStack_735 = *(byte *)((long)pppuVar3 + 0x1b);
  uStack_748 = 6;
  uStack_738 = 0x100;
  pppuStack_710 = &ppuStack_7c0;
  lStack_700 = 0;
  lStack_708 = 0;
  plStack_6f0 = (long *)0x0;
  uStack_6f8 = 0;
  plStack_6e8 = (long *)0x0;
  uStack_898 = 0xf;
  uStack_888 = 0x100;
  ppuStack_8a0 = &PTR_DAT_11086d7d0;
  uStack_860 = 0;
  uStack_868 = 0;
  lStack_850 = 0;
  lStack_858 = 0;
  plStack_840 = (long *)0x0;
  uStack_848 = 0;
  plStack_838 = (long *)0x0;
  ppuStack_830 = &PTR_DAT_11089b010;
  bStack_816 = *(byte *)((long)pppuVar4 + 0x1a);
  bStack_815 = *(byte *)((long)pppuVar4 + 0x1b);
  uStack_828 = 6;
  uStack_818 = 0x100;
  pppuStack_7f0 = &ppuStack_8a0;
  lStack_7e0 = 0;
  lStack_7e8 = 0;
  plStack_7d0 = (long *)0x0;
  uStack_7d8 = 0;
  plStack_7c8 = (long *)0x0;
  bStack_6c6 = bStack_816 | bStack_736;
  bStack_6c5 = bStack_815 & bStack_735;
  uStack_6d8 = 4;
  uStack_6c8 = 0x100;
  ppuStack_6e0 = &PTR_DAT_1108629c8;
  pppuStack_6a8 = &ppuStack_750;
  pppuStack_6a0 = &ppuStack_830;
  plStack_678 = (long *)0x0;
  plStack_680 = (long *)0x0;
  uStack_688 = 0;
  uStack_690 = 0;
  lStack_698 = 0;
  bStack_186 = bStack_6c6 | bStack_1f6;
  bStack_185 = bStack_6c5 | bStack_1f5;
  uStack_198 = 5;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_DAT_1108629c8;
  pppuStack_168 = &ppuStack_210;
  pppuStack_160 = &ppuStack_6e0;
  plStack_138 = (long *)0x0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_158 = 0;
  lStack_8b8 = 0;
  lStack_8b0 = 0;
  uStack_8a8 = 0;
  uStack_8bc = 0;
  puVar5 = &uStack_130;
  dStack_870 = dVar12;
  pppuStack_7f8 = pppuVar4;
  dStack_790 = dVar12;
  pppuStack_718 = pppuVar3;
  dStack_640 = dVar12;
  pppuStack_5c8 = pppuVar4;
  pppuStack_4e8 = pppuVar3;
  pppuStack_398 = pppuVar4;
  dStack_330 = dVar12;
  pppuStack_2b8 = pppuVar3;
  func_0x0001000e77a0(puVar5,&ppuStack_1a0,&lStack_8b8,&uStack_8bc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_8b8 != 0) {
    lStack_8b0 = lStack_8b8;
    __ZdlPv();
  }
  plVar8 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_1108629c8;
  plStack_138 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_158 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_678;
  ppuStack_6e0 = &PTR_DAT_1108629c8;
  plStack_678 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_680;
  plStack_680 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_698 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_7c8;
  ppuStack_830 = &PTR_DAT_11089b010;
  plStack_7c8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_7d0;
  plStack_7d0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_7e8 != 0) {
    lStack_7e0 = lStack_7e8;
    __ZdlPv();
  }
  plVar8 = plStack_838;
  ppuStack_8a0 = &PTR_DAT_11086d7d0;
  plStack_838 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_840;
  plStack_840 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_858 != 0) {
    lStack_850 = lStack_858;
    __ZdlPv();
  }
  plVar8 = plStack_6e8;
  ppuStack_750 = &PTR_DAT_11089b010;
  plStack_6e8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_6f0;
  plStack_6f0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_708 != 0) {
    lStack_700 = lStack_708;
    __ZdlPv();
  }
  plVar8 = plStack_758;
  ppuStack_7c0 = &PTR_DAT_11086d7d0;
  plStack_758 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_760;
  plStack_760 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_778 != 0) {
    lStack_770 = lStack_778;
    __ZdlPv();
  }
  plVar8 = plStack_1a8;
  ppuStack_210 = &PTR_DAT_1108629c8;
  plStack_1a8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_1c8 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_448;
  ppuStack_4b0 = &PTR_DAT_1108629c8;
  plStack_448 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_450;
  plStack_450 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_468 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_598;
  ppuStack_600 = &PTR_DAT_11089b010;
  plStack_598 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_5a0;
  plStack_5a0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_5b8 != 0) {
    lStack_5b0 = lStack_5b8;
    __ZdlPv();
  }
  plVar8 = plStack_608;
  ppuStack_670 = &PTR_DAT_11086d7d0;
  plStack_608 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_610;
  plStack_610 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_628 != 0) {
    lStack_620 = lStack_628;
    __ZdlPv();
  }
  plVar8 = plStack_4b8;
  ppuStack_520 = &PTR_DAT_11089b010;
  plStack_4b8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_4c0;
  plStack_4c0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_4d8 != 0) {
    lStack_4d0 = lStack_4d8;
    __ZdlPv();
  }
  plVar8 = plStack_528;
  ppuStack_590 = &PTR_DAT_11086d7d0;
  plStack_528 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_530;
  plStack_530 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_548 != 0) {
    lStack_540 = lStack_548;
    __ZdlPv();
  }
  plVar8 = plStack_218;
  ppuStack_280 = &PTR_DAT_1108629c8;
  plStack_218 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_220;
  plStack_220 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_238 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_368;
  ppuStack_3d0 = &PTR_DAT_11089b010;
  plStack_368 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  plVar8 = plStack_3d8;
  ppuStack_440 = &PTR_DAT_11086d7d0;
  plStack_3d8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_3e0;
  plStack_3e0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_3f8 != 0) {
    lStack_3f0 = lStack_3f8;
    __ZdlPv();
  }
  plVar8 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_11089b010;
  plStack_288 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar8 = plStack_2f8;
  ppuStack_360 = &PTR_DAT_11086d7d0;
  plStack_2f8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  dVar12 = 0.0;
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      puVar2 = PTR_PTR_1126cec30;
      FUN_1068c3cd4(PTR_PTR_1126cec30,*(undefined8 *)((long)puVar9 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar6 != puVar9);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_968 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b5b38);
  if (puVar6 == (undefined8 *)0x0) {
    uStack_a70 = 0;
    dVar12 = 0.0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a98 = 0;
    uStack_aa0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_aa0,puVar6);
  }
  puVar7 = &uStack_b11;
  FUN_1068c17fc();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    dStack_b58 = -604800000.0;
  }
  else {
    func_0x00010c26f320(puVar2);
    dStack_b58 = (double)(long)(dVar12 * 1000.0) + -604800000.0;
  }
  uStack_b80 = 0xf;
  uStack_b70 = 0x100;
  ppuStack_b88 = &PTR_DAT_11086d7d0;
  uStack_b48 = 0;
  uStack_b50 = 0;
  lStack_b38 = 0;
  lStack_b40 = 0;
  plStack_b28 = (long *)0x0;
  uStack_b30 = 0;
  plStack_b20 = (long *)0x0;
  uStack_af6 = *(undefined2 *)(puVar7 + 0x1a);
  uStack_b08 = 6;
  uStack_af8 = 0x100;
  ppuStack_b10 = &PTR_DAT_11089b010;
  pppuStack_ad0 = &ppuStack_b88;
  lStack_ac0 = 0;
  lStack_ac8 = 0;
  plStack_ab0 = (long *)0x0;
  uStack_ab8 = 0;
  plStack_aa8 = (long *)0x0;
  lStack_ba0 = 0;
  lStack_b98 = 0;
  uStack_b90 = 0;
  uStack_ba4 = 0;
  puVar5 = &uStack_aa0;
  puStack_ad8 = puVar7;
  func_0x0001000e77a0(puVar5,&ppuStack_b10,&lStack_ba0,&uStack_ba4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_ba0 != 0) {
    lStack_b98 = lStack_ba0;
    __ZdlPv();
  }
  plVar8 = plStack_aa8;
  ppuStack_b10 = &PTR_DAT_11089b010;
  plStack_aa8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_ab0;
  plStack_ab0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_ac8 != 0) {
    lStack_ac0 = lStack_ac8;
    __ZdlPv();
  }
  plVar8 = plStack_b20;
  ppuStack_b88 = &PTR_DAT_11086d7d0;
  plStack_b20 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_b28;
  plStack_b28 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_b40 != 0) {
    lStack_b38 = lStack_b40;
    __ZdlPv();
  }
  _objc_release(puVar2);
  func_0x0001000e76e0(&uStack_a78);
  _objc_release(uStack_a88);
  _objc_release(uStack_a90);
  _objc_retain(puVar5);
  puVar9 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      puVar2 = PTR_PTR_1126cec28;
      FUN_1068c2548(PTR_PTR_1126cec28,*(undefined8 *)((long)puVar11 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar9 != puVar11);
    puVar9 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126b5b38);
  if (puVar6 == (undefined8 *)0x0) {
    uStack_a70 = 0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a98 = 0;
    uStack_aa0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_aa0,puVar6);
  }
  puVar7 = &uStack_b11;
  FUN_1068c1948();
  uStack_b80 = 0xf;
  uStack_b70 = 0x100;
  ppuStack_b88 = &PTR_DAT_110948000;
  uStack_b48 = 0;
  uStack_b50 = 0;
  lStack_b38 = 0;
  lStack_b40 = 0;
  plStack_b28 = (long *)0x0;
  uStack_b30 = 0;
  dStack_b58 = 4.94065645841247e-324;
  plStack_b20 = (long *)0x0;
  uStack_af6 = *(undefined2 *)(puVar7 + 0x1a);
  uStack_b08 = 10;
  uStack_af8 = 0x100;
  ppuStack_b10 = &PTR_FUN_110947fa0;
  pppuStack_ad0 = &ppuStack_b88;
  lStack_ac0 = 0;
  lStack_ac8 = 0;
  plStack_ab0 = (long *)0x0;
  uStack_ab8 = 0;
  plStack_aa8 = (long *)0x0;
  lStack_ba0 = 0;
  lStack_b98 = 0;
  uStack_b90 = 0;
  uStack_ba4 = 0;
  puVar9 = &uStack_aa0;
  puStack_ad8 = puVar7;
  func_0x0001000e77a0(puVar9,&ppuStack_b10,&lStack_ba0,&uStack_ba4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_ba0 != 0) {
    lStack_b98 = lStack_ba0;
    __ZdlPv();
  }
  plVar8 = plStack_aa8;
  ppuStack_b10 = &PTR_FUN_110947fa0;
  plStack_aa8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_ab0;
  plStack_ab0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_ac8 != 0) {
    lStack_ac0 = lStack_ac8;
    __ZdlPv();
  }
  plVar8 = plStack_b20;
  ppuStack_b88 = &PTR_DAT_110948000;
  plStack_b20 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_b28;
  plStack_b28 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_b40 != 0) {
    lStack_b38 = lStack_b40;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_a78);
  _objc_release(uStack_a88);
  _objc_release(uStack_a90);
  _objc_retain(puVar9);
  puVar11 = puVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar11 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar9);
      }
      puVar2 = PTR_PTR_1126cec28;
      FUN_1068c2058(PTR_PTR_1126cec28,*(undefined8 *)((long)puVar10 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        *(undefined8 *)(puVar2 + 0x48) = 0;
      }
      func_0x00010c25ed40(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    } while (puVar11 != puVar10);
    puVar11 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar5);
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_968) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  func_0x000104d96620(&uStack_aa0);
  _objc_release(puVar6);
  __Unwind_Resume();
  *puVar5 = &PTR_FUN_110947fa0;
  plVar8 = (long *)puVar5[0xd];
  puVar5[0xd] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = (long *)puVar5[0xc];
  puVar5[0xc] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (puVar5[9] != 0) {
    puVar5[10] = puVar5[9];
    __ZdlPv();
  }
  return puVar5;
}



/* Entry: 1068bc80c; end: 1068bc82b; -[SCBoostCoordinator resetBoostActionsForUploading] */

void FUN_1068bc80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_performChanges_completionQueue_c_11261bb60,
             &PTR___NSConcreteGlobalBlock_110947e78,0,0);
  return;
}



/* Entry: 1068bc82c; end: 1068bc9ab; -[SCBoostCoordinator _fetchAccessTokenAndUploadBoostActionToServer:] */

void FUN_1068bc82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010bfa48e0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1068bc9ac; end: 1068bc9ff;  */

void FUN_1068bc9ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068bca00; end: 1068bca03;  */

void FUN_1068bca00(void)

{
  return;
}



/* Entry: 1068bca04; end: 1068bcbbb; -[SCBoostCoordinator _fetchArgosTokenAndUploadBoostActionToServer:accessToken:] */

void FUN_1068bca04(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010beef1e0();
  ppuVar1 = &PTR_PTR_110947f50;
  if (lVar2 != 2) {
    ppuVar1 = &PTR_PTR_110947f48;
  }
  puVar5 = *ppuVar1;
  _objc_retain(puVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfa4ec0(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068bcbbc; end: 1068bcc0f;  */

void FUN_1068bcbbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068bcc10; end: 1068bcc13;  */

void FUN_1068bcc10(void)

{
  return;
}



/* Entry: 1068bcc14; end: 1068bcdf3; -[SCBoostCoordinator _uploadBoostActionToServerWithRetryLogic:accessToken:attestationHeaders:] */

void FUN_1068bcc14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1068bcdf4;
  puStack_90 = &UNK_110947eb8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_a8;
  uStack_78 = param_5;
  _objc_retainBlock(ppuVar2);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
  puVar3 = PTR_PTR_1126c0dd0;
  _objc_alloc();
  puVar4 = PTR_PTR_1126c0dc8;
  func_0x00010bf09ec0(0x3ff0000000000000,PTR_PTR_1126c0dc8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ffe0();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar3;
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(puVar4);
  func_0x00010c150080(*(undefined8 *)(param_1 + 0x38));
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068bcdf4; end: 1068bce2b;  */

void FUN_1068bcdf4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee56e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068bce2c; end: 1068bcfdf; -[SCBoostCoordinator _uploadBoostActionToServer:accessToken:attestationHeaders:] */

void FUN_1068bce2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010beef1e0();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = param_3;
  FUN_1068bd1d4(param_3,*(undefined8 *)(param_1 + 0x10),param_4,param_5,
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  _objc_release(param_5);
  _objc_release(param_4);
  uVar4 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c25f660(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1068bcfe0; end: 1068bd143;  */

void FUN_1068bcfe0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  param_1 = param_1 - *(double *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) == 2) {
    func_0x00010c252ee0(param_4);
    func_0x0001068c5114(param_1);
  }
  else if (*(long *)(param_2 + 0x30) == 1) {
    func_0x00010c252ee0(param_4);
    FUN_1068c5034(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068bd144; end: 1068bd1d3; -[SCBoostCoordinator .cxx_destruct] */

void FUN_1068bd144(long param_1)

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



/* Entry: 1068bd1d4; end: 1068bd9bf;  */

undefined *
FUN_1068bd1d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf1f9c0();
  puVar1 = PTR_PTR_1126c0f00;
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d64a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar1);
  _objc_release(puVar2);
  uVar3 = param_2;
  func_0x00010057694c(param_2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  func_0x00010c17cd40(puVar1);
  _objc_release(uVar3);
  lVar4 = param_1;
  func_0x00010beef1e0();
  if (lVar4 == 2) {
    puVar2 = PTR_PTR_1126cebf8;
    _objc_opt_new();
    lVar4 = param_1;
    func_0x00010c25e7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20ee40(puVar2);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf45460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52680();
    puVar5 = puVar2;
    func_0x00010bf454e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1843a0();
    _objc_release(puVar5);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf45460(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bfe5d80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf454e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar5);
    _objc_release(lVar7);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf45460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    puVar5 = puVar2;
    func_0x00010bf454e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220e20();
    _objc_release(puVar5);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c25e5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20(puVar2);
    _objc_release(lVar4);
    func_0x00010c1178c0(param_1);
    func_0x00010c1e47e0(puVar2);
    func_0x00010beef1c0(param_1);
    func_0x00010c17d2a0(puVar2);
    func_0x00010c173180(puVar2);
    puVar5 = PTR_PTR_1126cec00;
    _objc_opt_new();
    func_0x00010c1c73c0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0d3c80();
    func_0x00010c18b980(puVar5);
  }
  else {
    puVar2 = PTR_PTR_1126cec08;
    _objc_opt_new();
    lVar4 = param_1;
    func_0x00010c25e7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20ee40(puVar2);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf45460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52680();
    puVar5 = puVar2;
    func_0x00010bf1f6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1843a0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf45460(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bfe5d80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf1f6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar7);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf45460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    puVar5 = puVar2;
    func_0x00010bf1f6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220e20();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c25e5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf1f6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20();
    _objc_release(puVar5);
    _objc_release(lVar4);
    func_0x00010c1178c0(param_1);
    puVar5 = puVar2;
    func_0x00010bf1f6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e47e0();
    _objc_release(puVar5);
    func_0x00010beef1c0(param_1);
    puVar5 = puVar2;
    func_0x00010bf1f6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d2a0();
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010bf1f6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173180();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126cec10;
    _objc_opt_new();
    func_0x00010c1c73c0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0d3c80();
    func_0x00010c1730c0(puVar5);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  _objc_release(param_3);
  ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar9 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar5);
  }
  puVar10 = puVar5;
  func_0x00010bef7f60(puVar5);
  puVar8 = PTR_PTR_1126b4960;
  puVar14 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar10;
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b19f8;
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar14);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained(puVar1);
  puVar2 = puVar1;
  func_0x00010bdeb6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 1068bd9c0; end: 1068bd9ff;  */

void FUN_1068bd9c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068bda00; end: 1068bdc2b; -[SCBoostServiceProvider _createBoostCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bda00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = (long)_DAT_112752d30;
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112752d34;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112752d38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112752d3c;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126cec20;
  _objc_alloc();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar7 = lVar11;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112752d40;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112752d44;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010bf0dd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d940(puVar6,param_2,lVar4,lVar3,lVar8,lVar9,lVar10,lVar2,lVar5);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1068bdc2c; end: 1068bdc9f; -[SCBoostServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bdc2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752d3c);
  _objc_destroyWeak(param_1 + _DAT_112752d38);
  _objc_destroyWeak(param_1 + _DAT_112752d44);
  _objc_destroyWeak(param_1 + _DAT_112752d40);
  _objc_destroyWeak(param_1 + _DAT_112752d30);
  _objc_destroyWeak(param_1 + _DAT_112752d34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752d48);
  return;
}



/* Entry: 1068bdca0; end: 1068bdfe3;  */

void FUN_1068bdca0(undefined ***param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined ***pppuVar8;
  long *plVar9;
  undefined ***pppuVar10;
  ulong unaff_x23;
  long unaff_x24;
  long lVar11;
  undefined4 uStack_23c;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  long lStack_1b0;
  undefined ***pppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *apuStack_98 [3];
  long *plStack_80;
  long *plStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_opt_class(PTR_PTR_1126b5b98);
    if (param_1 == (undefined ***)0x0) {
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      ppuStack_e0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_e0,param_1);
    }
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    plStack_120 = (long *)0x0;
    uStack_170 = (undefined **)((ulong)uStack_170._4_4_ << 0x20);
    pppuVar6 = &ppuStack_e0;
    pppuVar3 = &ppuStack_e0;
    pppuVar8 = &ppuStack_130;
    pppuVar10 = (undefined ***)&uStack_170;
    func_0x00010054c81c(pppuVar3);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_b8);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
  }
  else {
    _objc_opt_class(PTR_PTR_1126b5b98);
    if (param_1 == (undefined ***)0x0) {
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_170 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&uStack_170,param_1);
    }
    puVar1 = &uStack_171;
    FUN_1068c30a8(puVar1);
    _objc_retain(param_2);
    uStack_188 = 0;
    uStack_180 = 0;
    puStack_190 = (undefined *)0x0;
    lVar2 = param_2;
    func_0x00010bf529e0(param_2);
    func_0x0001004c2bb4(&puStack_190,lVar2);
    ppuStack_128 = (undefined **)0x0;
    ppuStack_130 = (undefined **)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      unaff_x24 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != unaff_x24) {
            _objc_enumerationMutation(param_2);
          }
          unaff_x23 = *(ulong *)((long)ppuStack_128 + lVar11 * 8);
          _objc_retain(unaff_x23);
          uStack_e8 = unaff_x23;
          func_0x0001004c2d3c(&puStack_190,&uStack_e8);
          _objc_release(uStack_e8);
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = param_2;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    pppuVar6 = (undefined ***)0x0;
    _objc_release(param_2);
    _objc_release(param_2);
    func_0x0001004c2e3c(&ppuStack_e0,0xc,puVar1,&puStack_190);
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    plStack_120 = (long *)0x0;
    uStack_e8 = uStack_e8 & 0xffffffff00000000;
    pppuVar3 = (undefined ***)&uStack_170;
    pppuVar8 = &ppuStack_e0;
    pppuVar10 = &ppuStack_130;
    func_0x0001000e77a0(pppuVar3,pppuVar8,pppuVar10,&uStack_e8);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    plVar9 = plStack_78;
    ppuStack_e0 = &PTR_SUB_110862700;
    plStack_78 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = plStack_80;
    plStack_80 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    ppuStack_130 = apuStack_98;
    func_0x000100105004(&ppuStack_130);
    ppuStack_130 = &puStack_190;
    func_0x000100105004(&ppuStack_130);
    func_0x0001000e76e0(&uStack_148);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
  }
  _objc_release(param_2);
  pppuVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(pppuVar4);
    pppuVar5 = pppuVar4;
    func_0x000104bd46a0();
    pcStack_198 = FUN_1068bdfe4;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1d0 = unaff_x24;
    uStack_1c8 = unaff_x23;
    pppuStack_1c0 = pppuVar6;
    pppuStack_1b8 = pppuVar4;
    lStack_1b0 = param_2;
    pppuStack_1a8 = param_1;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar8);
    _objc_retain(pppuVar10);
    if (pppuVar8 == (undefined ***)0x0) {
      _objc_opt_class(PTR_PTR_1126b5b98);
      if (pppuVar5 == (undefined ***)0x0) {
        uStack_1f0 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_218 = 0;
        ppuStack_220 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_220,pppuVar5);
      }
      lStack_238 = 0;
      lStack_230 = 0;
      uStack_228 = 0;
      uStack_23c = 0;
      pppuVar3 = &ppuStack_220;
      plVar9 = &lStack_238;
      func_0x00010054c81c(pppuVar3,plVar9,&uStack_23c);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_238 != 0) {
        lStack_230 = lStack_238;
        __ZdlPv();
      }
      func_0x0001000e76e0(&uStack_1f8);
      _objc_release(uStack_208);
      _objc_release(uStack_210);
    }
    else {
      pppuVar6 = pppuVar8;
      FUN_1068be1c0(pppuVar8,pppuVar10);
      _objc_retainAutoreleasedReturnValue();
      plVar7 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_1e0 = pppuVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar5;
      plVar9 = plVar7;
      FUN_1068bdca0(pppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(plVar7);
      _objc_release(pppuVar6);
    }
    _objc_release(pppuVar10);
    _objc_release(pppuVar8);
    pppuVar6 = pppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(pppuVar10);
      _objc_release(pppuVar8);
      _objc_release(pppuVar5);
      __Unwind_Resume();
      _objc_retain();
      _objc_retain(plVar9);
      plVar7 = plVar9;
      func_0x00010c08fa60();
      if (plVar7 == (long *)0x0) {
        _objc_retain(pppuVar6);
        pppuVar3 = pppuVar6;
      }
      else {
        pppuVar3 = (undefined ***)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(plVar9);
      _objc_release(pppuVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar3);
  return;
}



/* Entry: 1068bdfe4; end: 1068be1bf;  */

void FUN_1068bdfe4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    _objc_opt_class(PTR_PTR_1126b5b98);
    if (param_1 == (undefined8 *)0x0) {
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_90,param_1);
    }
    lStack_a8 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_ac = 0;
    puVar3 = &uStack_90;
    plVar5 = &lStack_a8;
    func_0x00010054c81c(puVar3,plVar5,&uStack_ac);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_68);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
  }
  else {
    lVar1 = param_2;
    FUN_1068be1c0(param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    plVar2 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    plVar5 = plVar2;
    FUN_1068bdca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    _objc_retain();
    _objc_retain(plVar5);
    plVar2 = plVar5;
    func_0x00010c08fa60();
    if (plVar2 == (long *)0x0) {
      _objc_retain(puVar4);
      puVar3 = puVar4;
    }
    else {
      puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(plVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068be1c0; end: 1068be277;  */

void FUN_1068be1c0(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_retain(param_1);
    puVar2 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068be278; end: 1068be8cf;  */

void FUN_1068be278(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cec28;
  FUN_1068c1d68(PTR_PTR_1126cec28,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_1068be8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c25e5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_1068be1c0(lVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  FUN_1068bdca0(param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar5);
  lVar2 = param_3;
  func_0x00010beef1e0();
  if (1 < lVar2 - 1U) goto LAB_1068be6b4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(lVar6);
  lVar2 = param_3;
  func_0x00010bf45460(param_3);
  _objc_retainAutoreleasedReturnValue();
  unaff_x25 = lVar2;
  FUN_1068be8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c25e5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  unaff_x26 = unaff_x25;
  FUN_1068be1c0(unaff_x25,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_retain(param_3);
  _objc_retain(lVar6);
  _objc_retain(unaff_x25);
  _objc_retain(unaff_x26);
  lVar2 = param_3;
  func_0x00010bf1f9c0();
  uVar10 = 0;
  if (lVar2 == 1) {
    func_0x00010beef1c0(param_3);
    uVar12 = param_1;
    func_0x00010c1178c0(param_3);
    uVar9 = uVar12;
    func_0x00010beef1e0(param_3);
LAB_1068be4e4:
    uVar11 = 0;
    uVar10 = param_1;
  }
  else {
    if (lVar2 != 2) {
      uVar12 = 0;
      uVar9 = param_1;
      param_1 = uVar10;
      goto LAB_1068be4e4;
    }
    func_0x00010beef1c0(param_3);
    uVar9 = param_1;
    func_0x00010beef1e0(param_3);
    uVar12 = 0;
    uVar11 = param_1;
  }
  if (lVar6 != 0) {
    lVar2 = param_3;
    func_0x00010bf1f9c0();
    if (lVar2 == 1) {
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123160();
      _objc_release(lVar2);
      func_0x00010c07bea0(lVar6);
      uVar11 = uVar9;
    }
    else if (lVar2 == 2) {
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f9a0();
      uVar12 = uVar9;
      _objc_release(lVar2);
      lVar2 = lVar6;
      func_0x00010c0cc0c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f740();
      _objc_release(lVar2);
      func_0x00010c06d760(lVar6);
      uVar10 = uVar9;
    }
  }
  puVar5 = PTR_PTR_1126b5b20;
  _objc_alloc(PTR_PTR_1126b5b20);
  lVar2 = param_3;
  func_0x00010c25e5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d920(uVar10,uVar12,uVar11,puVar5);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b5b98;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c080();
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(param_3);
  puVar5 = puVar7;
  FUN_1068c3d48(puVar7,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_release(param_2);
LAB_1068be6b4:
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf52680();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c298be0();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068be8d0; end: 1068bea13;  */

void FUN_1068be8d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf52680();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110db1798);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c298be0();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db1798);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e641b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068bea14; end: 1068bf4d7;  */

undefined8 * FUN_1068bea14(double param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined4 uStack_ba4;
  long lStack_ba0;
  long lStack_b98;
  undefined8 uStack_b90;
  undefined **ppuStack_b88;
  undefined4 uStack_b80;
  undefined4 uStack_b70;
  double dStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  long lStack_b40;
  long lStack_b38;
  undefined8 uStack_b30;
  long *plStack_b28;
  long *plStack_b20;
  undefined1 uStack_b11;
  undefined **ppuStack_b10;
  undefined4 uStack_b08;
  undefined2 uStack_af8;
  undefined2 uStack_af6;
  undefined1 *puStack_ad8;
  undefined ***pppuStack_ad0;
  long lStack_ac8;
  long lStack_ac0;
  undefined8 uStack_ab8;
  long *plStack_ab0;
  long *plStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  long lStack_968;
  undefined4 uStack_8bc;
  long lStack_8b8;
  long lStack_8b0;
  undefined8 uStack_8a8;
  undefined **ppuStack_8a0;
  undefined4 uStack_898;
  undefined4 uStack_888;
  double dStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  long lStack_858;
  long lStack_850;
  undefined8 uStack_848;
  long *plStack_840;
  long *plStack_838;
  undefined **ppuStack_830;
  undefined4 uStack_828;
  undefined2 uStack_818;
  byte bStack_816;
  byte bStack_815;
  undefined ***pppuStack_7f8;
  undefined ***pppuStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  undefined8 uStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  undefined **ppuStack_7c0;
  undefined4 uStack_7b8;
  undefined4 uStack_7a8;
  double dStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long lStack_778;
  long lStack_770;
  undefined8 uStack_768;
  long *plStack_760;
  long *plStack_758;
  undefined **ppuStack_750;
  undefined4 uStack_748;
  undefined2 uStack_738;
  byte bStack_736;
  byte bStack_735;
  undefined ***pppuStack_718;
  undefined ***pppuStack_710;
  long lStack_708;
  long lStack_700;
  undefined8 uStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  undefined **ppuStack_6e0;
  undefined4 uStack_6d8;
  undefined2 uStack_6c8;
  byte bStack_6c6;
  byte bStack_6c5;
  undefined ***pppuStack_6a8;
  undefined ***pppuStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long *plStack_680;
  long *plStack_678;
  undefined **ppuStack_670;
  undefined4 uStack_668;
  undefined4 uStack_658;
  double dStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long lStack_620;
  undefined8 uStack_618;
  long *plStack_610;
  long *plStack_608;
  undefined **ppuStack_600;
  undefined4 uStack_5f8;
  undefined2 uStack_5e8;
  byte bStack_5e6;
  byte bStack_5e5;
  undefined ***pppuStack_5c8;
  undefined ***pppuStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  undefined8 uStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined **ppuStack_590;
  undefined4 uStack_588;
  undefined4 uStack_578;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long lStack_540;
  undefined8 uStack_538;
  long *plStack_530;
  long *plStack_528;
  undefined **ppuStack_520;
  undefined4 uStack_518;
  undefined2 uStack_508;
  byte bStack_506;
  byte bStack_505;
  undefined ***pppuStack_4e8;
  undefined ***pppuStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  undefined **ppuStack_4b0;
  undefined4 uStack_4a8;
  undefined2 uStack_498;
  byte bStack_496;
  byte bStack_495;
  undefined ***pppuStack_478;
  undefined ***pppuStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  long *plStack_448;
  undefined **ppuStack_440;
  undefined4 uStack_438;
  undefined4 uStack_428;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3b8;
  byte bStack_3b6;
  byte bStack_3b5;
  undefined ***pppuStack_398;
  undefined ***pppuStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_348;
  double dStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined2 uStack_2d8;
  byte bStack_2d6;
  byte bStack_2d5;
  undefined ***pppuStack_2b8;
  undefined ***pppuStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined **ppuStack_280;
  undefined4 uStack_278;
  undefined2 uStack_268;
  byte bStack_266;
  byte bStack_265;
  undefined ***pppuStack_248;
  undefined ***pppuStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  byte bStack_186;
  byte bStack_185;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    dVar12 = -604800000.0;
  }
  else {
    func_0x00010c26f320(puVar2);
    dVar12 = (double)(long)(param_1 * 1000.0) + -604800000.0;
  }
  _objc_release(puVar2);
  pppuVar3 = &ppuStack_1a0;
  FUN_1068c3220();
  pppuVar4 = &ppuStack_1a0;
  FUN_1068c33f0();
  _objc_opt_class(PTR_PTR_1126b5b98);
  if (param_2 == (undefined8 *)0x0) {
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_2);
  }
  uStack_358 = 0xf;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_DAT_11086d7d0;
  uStack_320 = 0;
  uStack_328 = 0;
  lStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2d6 = *(byte *)((long)pppuVar3 + 0x1a);
  bStack_2d5 = *(byte *)((long)pppuVar3 + 0x1b);
  uStack_2e8 = 6;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_11089b010;
  pppuStack_2b0 = &ppuStack_360;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  uStack_438 = 0xf;
  uStack_428 = 0x100;
  ppuStack_440 = &PTR_DAT_11086d7d0;
  uStack_400 = 0;
  uStack_408 = 0;
  lStack_3f0 = 0;
  lStack_3f8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3e8 = 0;
  uStack_410 = 0;
  plStack_3d8 = (long *)0x0;
  bStack_3b6 = *(byte *)((long)pppuVar4 + 0x1a);
  bStack_3b5 = *(byte *)((long)pppuVar4 + 0x1b);
  uStack_3c8 = 7;
  uStack_3b8 = 0x100;
  ppuStack_3d0 = &PTR_DAT_11089b010;
  pppuStack_390 = &ppuStack_440;
  lStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  bStack_266 = bStack_3b6 | bStack_2d6;
  bStack_265 = bStack_3b5 & bStack_2d5;
  uStack_278 = 4;
  uStack_268 = 0x100;
  ppuStack_280 = &PTR_DAT_1108629c8;
  pppuStack_248 = &ppuStack_2f0;
  pppuStack_240 = &ppuStack_3d0;
  plStack_218 = (long *)0x0;
  plStack_220 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_238 = 0;
  uStack_588 = 0xf;
  uStack_578 = 0x100;
  ppuStack_590 = &PTR_DAT_11086d7d0;
  uStack_550 = 0;
  uStack_558 = 0;
  lStack_540 = 0;
  lStack_548 = 0;
  plStack_530 = (long *)0x0;
  uStack_538 = 0;
  uStack_560 = 0;
  plStack_528 = (long *)0x0;
  bStack_506 = *(byte *)((long)pppuVar3 + 0x1a);
  bStack_505 = *(byte *)((long)pppuVar3 + 0x1b);
  uStack_518 = 7;
  uStack_508 = 0x100;
  ppuStack_520 = &PTR_DAT_11089b010;
  pppuStack_4e0 = &ppuStack_590;
  lStack_4d0 = 0;
  lStack_4d8 = 0;
  plStack_4c0 = (long *)0x0;
  uStack_4c8 = 0;
  plStack_4b8 = (long *)0x0;
  uStack_668 = 0xf;
  uStack_658 = 0x100;
  ppuStack_670 = &PTR_DAT_11086d7d0;
  uStack_630 = 0;
  uStack_638 = 0;
  lStack_620 = 0;
  lStack_628 = 0;
  plStack_610 = (long *)0x0;
  uStack_618 = 0;
  plStack_608 = (long *)0x0;
  bStack_5e6 = *(byte *)((long)pppuVar4 + 0x1a);
  bStack_5e5 = *(byte *)((long)pppuVar4 + 0x1b);
  uStack_5f8 = 6;
  uStack_5e8 = 0x100;
  ppuStack_600 = &PTR_DAT_11089b010;
  pppuStack_5c0 = &ppuStack_670;
  lStack_5b0 = 0;
  lStack_5b8 = 0;
  plStack_5a0 = (long *)0x0;
  uStack_5a8 = 0;
  plStack_598 = (long *)0x0;
  bStack_496 = bStack_5e6 | bStack_506;
  bStack_495 = bStack_5e5 & bStack_505;
  uStack_4a8 = 4;
  uStack_498 = 0x100;
  ppuStack_4b0 = &PTR_DAT_1108629c8;
  pppuStack_478 = &ppuStack_520;
  pppuStack_470 = &ppuStack_600;
  plStack_448 = (long *)0x0;
  plStack_450 = (long *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  lStack_468 = 0;
  bStack_1f6 = bStack_496 | bStack_266;
  bStack_1f5 = bStack_495 | bStack_265;
  uStack_208 = 5;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_DAT_1108629c8;
  pppuStack_1d8 = &ppuStack_280;
  pppuStack_1d0 = &ppuStack_4b0;
  plStack_1a8 = (long *)0x0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1c8 = 0;
  uStack_7b8 = 0xf;
  uStack_7a8 = 0x100;
  ppuStack_7c0 = &PTR_DAT_11086d7d0;
  uStack_780 = 0;
  uStack_788 = 0;
  lStack_770 = 0;
  lStack_778 = 0;
  plStack_760 = (long *)0x0;
  uStack_768 = 0;
  plStack_758 = (long *)0x0;
  ppuStack_750 = &PTR_DAT_11089b010;
  bStack_736 = *(byte *)((long)pppuVar3 + 0x1a);
  bStack_735 = *(byte *)((long)pppuVar3 + 0x1b);
  uStack_748 = 6;
  uStack_738 = 0x100;
  pppuStack_710 = &ppuStack_7c0;
  lStack_700 = 0;
  lStack_708 = 0;
  plStack_6f0 = (long *)0x0;
  uStack_6f8 = 0;
  plStack_6e8 = (long *)0x0;
  uStack_898 = 0xf;
  uStack_888 = 0x100;
  ppuStack_8a0 = &PTR_DAT_11086d7d0;
  uStack_860 = 0;
  uStack_868 = 0;
  lStack_850 = 0;
  lStack_858 = 0;
  plStack_840 = (long *)0x0;
  uStack_848 = 0;
  plStack_838 = (long *)0x0;
  ppuStack_830 = &PTR_DAT_11089b010;
  bStack_816 = *(byte *)((long)pppuVar4 + 0x1a);
  bStack_815 = *(byte *)((long)pppuVar4 + 0x1b);
  uStack_828 = 6;
  uStack_818 = 0x100;
  pppuStack_7f0 = &ppuStack_8a0;
  lStack_7e0 = 0;
  lStack_7e8 = 0;
  plStack_7d0 = (long *)0x0;
  uStack_7d8 = 0;
  plStack_7c8 = (long *)0x0;
  bStack_6c6 = bStack_816 | bStack_736;
  bStack_6c5 = bStack_815 & bStack_735;
  uStack_6d8 = 4;
  uStack_6c8 = 0x100;
  ppuStack_6e0 = &PTR_DAT_1108629c8;
  pppuStack_6a8 = &ppuStack_750;
  pppuStack_6a0 = &ppuStack_830;
  plStack_678 = (long *)0x0;
  plStack_680 = (long *)0x0;
  uStack_688 = 0;
  uStack_690 = 0;
  lStack_698 = 0;
  bStack_186 = bStack_6c6 | bStack_1f6;
  bStack_185 = bStack_6c5 | bStack_1f5;
  uStack_198 = 5;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_DAT_1108629c8;
  pppuStack_168 = &ppuStack_210;
  pppuStack_160 = &ppuStack_6e0;
  plStack_138 = (long *)0x0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_158 = 0;
  lStack_8b8 = 0;
  lStack_8b0 = 0;
  uStack_8a8 = 0;
  uStack_8bc = 0;
  puVar5 = &uStack_130;
  dStack_870 = dVar12;
  pppuStack_7f8 = pppuVar4;
  dStack_790 = dVar12;
  pppuStack_718 = pppuVar3;
  dStack_640 = dVar12;
  pppuStack_5c8 = pppuVar4;
  pppuStack_4e8 = pppuVar3;
  pppuStack_398 = pppuVar4;
  dStack_330 = dVar12;
  pppuStack_2b8 = pppuVar3;
  func_0x0001000e77a0(puVar5,&ppuStack_1a0,&lStack_8b8,&uStack_8bc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_8b8 != 0) {
    lStack_8b0 = lStack_8b8;
    __ZdlPv();
  }
  plVar8 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_1108629c8;
  plStack_138 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_158 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_678;
  ppuStack_6e0 = &PTR_DAT_1108629c8;
  plStack_678 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_680;
  plStack_680 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_698 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_7c8;
  ppuStack_830 = &PTR_DAT_11089b010;
  plStack_7c8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_7d0;
  plStack_7d0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_7e8 != 0) {
    lStack_7e0 = lStack_7e8;
    __ZdlPv();
  }
  plVar8 = plStack_838;
  ppuStack_8a0 = &PTR_DAT_11086d7d0;
  plStack_838 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_840;
  plStack_840 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_858 != 0) {
    lStack_850 = lStack_858;
    __ZdlPv();
  }
  plVar8 = plStack_6e8;
  ppuStack_750 = &PTR_DAT_11089b010;
  plStack_6e8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_6f0;
  plStack_6f0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_708 != 0) {
    lStack_700 = lStack_708;
    __ZdlPv();
  }
  plVar8 = plStack_758;
  ppuStack_7c0 = &PTR_DAT_11086d7d0;
  plStack_758 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_760;
  plStack_760 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_778 != 0) {
    lStack_770 = lStack_778;
    __ZdlPv();
  }
  plVar8 = plStack_1a8;
  ppuStack_210 = &PTR_DAT_1108629c8;
  plStack_1a8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_1c8 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_448;
  ppuStack_4b0 = &PTR_DAT_1108629c8;
  plStack_448 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_450;
  plStack_450 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_468 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_598;
  ppuStack_600 = &PTR_DAT_11089b010;
  plStack_598 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_5a0;
  plStack_5a0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_5b8 != 0) {
    lStack_5b0 = lStack_5b8;
    __ZdlPv();
  }
  plVar8 = plStack_608;
  ppuStack_670 = &PTR_DAT_11086d7d0;
  plStack_608 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_610;
  plStack_610 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_628 != 0) {
    lStack_620 = lStack_628;
    __ZdlPv();
  }
  plVar8 = plStack_4b8;
  ppuStack_520 = &PTR_DAT_11089b010;
  plStack_4b8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_4c0;
  plStack_4c0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_4d8 != 0) {
    lStack_4d0 = lStack_4d8;
    __ZdlPv();
  }
  plVar8 = plStack_528;
  ppuStack_590 = &PTR_DAT_11086d7d0;
  plStack_528 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_530;
  plStack_530 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_548 != 0) {
    lStack_540 = lStack_548;
    __ZdlPv();
  }
  plVar8 = plStack_218;
  ppuStack_280 = &PTR_DAT_1108629c8;
  plStack_218 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_220;
  plStack_220 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_238 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_368;
  ppuStack_3d0 = &PTR_DAT_11089b010;
  plStack_368 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  plVar8 = plStack_3d8;
  ppuStack_440 = &PTR_DAT_11086d7d0;
  plStack_3d8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_3e0;
  plStack_3e0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_3f8 != 0) {
    lStack_3f0 = lStack_3f8;
    __ZdlPv();
  }
  plVar8 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_11089b010;
  plStack_288 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar8 = plStack_2f8;
  ppuStack_360 = &PTR_DAT_11086d7d0;
  plStack_2f8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  dVar12 = 0.0;
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      puVar2 = PTR_PTR_1126cec30;
      FUN_1068c3cd4(PTR_PTR_1126cec30,*(undefined8 *)((long)puVar9 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar6 != puVar9);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_968 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b5b38);
  if (puVar6 == (undefined8 *)0x0) {
    uStack_a70 = 0;
    dVar12 = 0.0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a98 = 0;
    uStack_aa0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_aa0,puVar6);
  }
  puVar7 = &uStack_b11;
  FUN_1068c17fc();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    dStack_b58 = -604800000.0;
  }
  else {
    func_0x00010c26f320(puVar2);
    dStack_b58 = (double)(long)(dVar12 * 1000.0) + -604800000.0;
  }
  uStack_b80 = 0xf;
  uStack_b70 = 0x100;
  ppuStack_b88 = &PTR_DAT_11086d7d0;
  uStack_b48 = 0;
  uStack_b50 = 0;
  lStack_b38 = 0;
  lStack_b40 = 0;
  plStack_b28 = (long *)0x0;
  uStack_b30 = 0;
  plStack_b20 = (long *)0x0;
  uStack_af6 = *(undefined2 *)(puVar7 + 0x1a);
  uStack_b08 = 6;
  uStack_af8 = 0x100;
  ppuStack_b10 = &PTR_DAT_11089b010;
  pppuStack_ad0 = &ppuStack_b88;
  lStack_ac0 = 0;
  lStack_ac8 = 0;
  plStack_ab0 = (long *)0x0;
  uStack_ab8 = 0;
  plStack_aa8 = (long *)0x0;
  lStack_ba0 = 0;
  lStack_b98 = 0;
  uStack_b90 = 0;
  uStack_ba4 = 0;
  puVar5 = &uStack_aa0;
  puStack_ad8 = puVar7;
  func_0x0001000e77a0(puVar5,&ppuStack_b10,&lStack_ba0,&uStack_ba4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_ba0 != 0) {
    lStack_b98 = lStack_ba0;
    __ZdlPv();
  }
  plVar8 = plStack_aa8;
  ppuStack_b10 = &PTR_DAT_11089b010;
  plStack_aa8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_ab0;
  plStack_ab0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_ac8 != 0) {
    lStack_ac0 = lStack_ac8;
    __ZdlPv();
  }
  plVar8 = plStack_b20;
  ppuStack_b88 = &PTR_DAT_11086d7d0;
  plStack_b20 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_b28;
  plStack_b28 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_b40 != 0) {
    lStack_b38 = lStack_b40;
    __ZdlPv();
  }
  _objc_release(puVar2);
  func_0x0001000e76e0(&uStack_a78);
  _objc_release(uStack_a88);
  _objc_release(uStack_a90);
  _objc_retain(puVar5);
  puVar9 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      puVar2 = PTR_PTR_1126cec28;
      FUN_1068c2548(PTR_PTR_1126cec28,*(undefined8 *)((long)puVar11 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar9 != puVar11);
    puVar9 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126b5b38);
  if (puVar6 == (undefined8 *)0x0) {
    uStack_a70 = 0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a98 = 0;
    uStack_aa0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_aa0,puVar6);
  }
  puVar7 = &uStack_b11;
  FUN_1068c1948();
  uStack_b80 = 0xf;
  uStack_b70 = 0x100;
  ppuStack_b88 = &PTR_DAT_110948000;
  uStack_b48 = 0;
  uStack_b50 = 0;
  lStack_b38 = 0;
  lStack_b40 = 0;
  plStack_b28 = (long *)0x0;
  uStack_b30 = 0;
  dStack_b58 = 4.94065645841247e-324;
  plStack_b20 = (long *)0x0;
  uStack_af6 = *(undefined2 *)(puVar7 + 0x1a);
  uStack_b08 = 10;
  uStack_af8 = 0x100;
  ppuStack_b10 = &PTR_FUN_110947fa0;
  pppuStack_ad0 = &ppuStack_b88;
  lStack_ac0 = 0;
  lStack_ac8 = 0;
  plStack_ab0 = (long *)0x0;
  uStack_ab8 = 0;
  plStack_aa8 = (long *)0x0;
  lStack_ba0 = 0;
  lStack_b98 = 0;
  uStack_b90 = 0;
  uStack_ba4 = 0;
  puVar9 = &uStack_aa0;
  puStack_ad8 = puVar7;
  func_0x0001000e77a0(puVar9,&ppuStack_b10,&lStack_ba0,&uStack_ba4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_ba0 != 0) {
    lStack_b98 = lStack_ba0;
    __ZdlPv();
  }
  plVar8 = plStack_aa8;
  ppuStack_b10 = &PTR_FUN_110947fa0;
  plStack_aa8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_ab0;
  plStack_ab0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_ac8 != 0) {
    lStack_ac0 = lStack_ac8;
    __ZdlPv();
  }
  plVar8 = plStack_b20;
  ppuStack_b88 = &PTR_DAT_110948000;
  plStack_b20 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = plStack_b28;
  plStack_b28 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_b40 != 0) {
    lStack_b38 = lStack_b40;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_a78);
  _objc_release(uStack_a88);
  _objc_release(uStack_a90);
  _objc_retain(puVar9);
  puVar11 = puVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar11 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar9);
      }
      puVar2 = PTR_PTR_1126cec28;
      FUN_1068c2058(PTR_PTR_1126cec28,*(undefined8 *)((long)puVar10 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        *(undefined8 *)(puVar2 + 0x48) = 0;
      }
      func_0x00010c25ed40(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    } while (puVar11 != puVar10);
    puVar11 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar5);
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_968) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  func_0x000104d96620(&uStack_aa0);
  _objc_release(puVar6);
  __Unwind_Resume();
  *puVar5 = &PTR_FUN_110947fa0;
  plVar8 = (long *)puVar5[0xd];
  puVar5[0xd] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = (long *)puVar5[0xc];
  puVar5[0xc] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (puVar5[9] != 0) {
    puVar5[10] = puVar5[9];
    __ZdlPv();
  }
  return puVar5;
}



/* Entry: 1068bf4d8; end: 1068bfb0b;  */

undefined8 * FUN_1068bf4d8(double param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_2a4;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined4 uStack_270;
  double dStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_211;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b5b38);
  if (param_2 == (undefined8 *)0x0) {
    uStack_170 = 0;
    param_1 = 0.0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1a0,param_2);
  }
  puVar2 = &uStack_211;
  FUN_1068c17fc();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    dStack_258 = -604800000.0;
  }
  else {
    func_0x00010c26f320(puVar3);
    dStack_258 = (double)(long)(param_1 * 1000.0) + -604800000.0;
  }
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  ppuStack_288 = &PTR_DAT_11086d7d0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  uStack_1f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_208 = 6;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_DAT_11089b010;
  pppuStack_1d0 = &ppuStack_288;
  lStack_1c0 = 0;
  lStack_1c8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  plStack_1a8 = (long *)0x0;
  lStack_2a0 = 0;
  lStack_298 = 0;
  uStack_290 = 0;
  uStack_2a4 = 0;
  puVar4 = &uStack_1a0;
  puStack_1d8 = puVar2;
  func_0x0001000e77a0(puVar4,&ppuStack_210,&lStack_2a0,&uStack_2a4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2a0 != 0) {
    lStack_298 = lStack_2a0;
    __ZdlPv();
  }
  plVar6 = plStack_1a8;
  ppuStack_210 = &PTR_DAT_11089b010;
  plStack_1a8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  plVar6 = plStack_220;
  ppuStack_288 = &PTR_DAT_11086d7d0;
  plStack_220 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  _objc_release(puVar3);
  func_0x0001000e76e0(&uStack_178);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      puVar3 = PTR_PTR_1126cec28;
      FUN_1068c2548(PTR_PTR_1126cec28,*(undefined8 *)((long)puVar8 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar5 != puVar8);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126b5b38);
  if (param_2 == (undefined8 *)0x0) {
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1a0,param_2);
  }
  puVar2 = &uStack_211;
  FUN_1068c1948();
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  ppuStack_288 = &PTR_DAT_110948000;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  dStack_258 = 4.94065645841247e-324;
  plStack_220 = (long *)0x0;
  uStack_1f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_208 = 10;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_FUN_110947fa0;
  pppuStack_1d0 = &ppuStack_288;
  lStack_1c0 = 0;
  lStack_1c8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  plStack_1a8 = (long *)0x0;
  lStack_2a0 = 0;
  lStack_298 = 0;
  uStack_290 = 0;
  uStack_2a4 = 0;
  puVar5 = &uStack_1a0;
  puStack_1d8 = puVar2;
  func_0x0001000e77a0(puVar5,&ppuStack_210,&lStack_2a0,&uStack_2a4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2a0 != 0) {
    lStack_298 = lStack_2a0;
    __ZdlPv();
  }
  plVar6 = plStack_1a8;
  ppuStack_210 = &PTR_FUN_110947fa0;
  plStack_1a8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  plVar6 = plStack_220;
  ppuStack_288 = &PTR_DAT_110948000;
  plStack_220 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_178);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_retain(puVar5);
  puVar8 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      puVar3 = PTR_PTR_1126cec28;
      FUN_1068c2058(PTR_PTR_1126cec28,*(undefined8 *)((long)puVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        *(undefined8 *)(puVar3 + 0x48) = 0;
      }
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar8 != puVar7);
    puVar8 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  func_0x000104d96620(&uStack_1a0);
  _objc_release(param_2);
  __Unwind_Resume();
  *puVar4 = &PTR_FUN_110947fa0;
  plVar6 = (long *)puVar4[0xd];
  puVar4[0xd] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)puVar4[0xc];
  puVar4[0xc] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (puVar4[9] != 0) {
    puVar4[10] = puVar4[9];
    __ZdlPv();
  }
  return puVar4;
}



/* Entry: 1068bfb0c; end: 1068bfc57;  */

undefined8 * FUN_1068bfb0c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110947fa0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1068bfc58; end: 1068c0313;  */

void FUN_1068bfc58(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001068c02b8;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001068c02d8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001068c02d8;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001068c024c:
                    /* WARNING: Could not recover jumptable at 0x0001068c0270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001068c024c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001068c02d8;
    }
    goto code_r0x0001068c02cc;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001068c02cc;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001068c02d8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001068c02d8;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1068c02e8;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001068c02b8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001068c02cc:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001068c02d8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1068c02e8:
  return;
}



/* Entry: 1068c0314; end: 1068c039b;  */

void FUN_1068c0314(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001068c0388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1068c039c; end: 1068c04cf;  */

void FUN_1068c039c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001068c04c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1068c04d0; end: 1068c057f;  */

long FUN_1068c04d0(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068c0580; end: 1068c05bb;  */

undefined8 FUN_1068c0580(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1068c05bc(uVar1,param_1);
  return uVar1;
}



/* Entry: 1068c05bc; end: 1068c0767;  */

void FUN_1068c05bc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001068c07fc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001068c0768(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1068c06a8:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1068c08fc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1068c06a8;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110948000;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1068c0768; end: 1068c08fb;  */

undefined8 * FUN_1068c0768(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110948000;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1068c08fc; end: 1068c0993;  */

undefined8 * FUN_1068c08fc(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110948000;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1068c0994(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1068c0994; end: 1068c0a0b;  */

void FUN_1068c0994(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1068c0a0c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1068c0a0c; end: 1068c0a47;  */

void FUN_1068c0a0c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_1068c0a5c();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  FUN_1068c0a48();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110947fa0;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1068c0a48; end: 1068c0a5b;  */

void FUN_1068c0a48(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110947fa0;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1068c0a5c; end: 1068c0afb;  */

void FUN_1068c0a5c(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110947fa0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1068c0afc; end: 1068c11b7;  */

void FUN_1068c0afc(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001068c115c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001068c117c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001068c117c;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001068c10f0:
                    /* WARNING: Could not recover jumptable at 0x0001068c1114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001068c10f0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001068c117c;
    }
    goto code_r0x0001068c1170;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001068c1170;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001068c117c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001068c117c;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1068c118c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001068c115c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001068c1170:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001068c117c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1068c118c:
  return;
}



/* Entry: 1068c11b8; end: 1068c123f;  */

void FUN_1068c11b8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001068c122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1068c1240; end: 1068c1373;  */

void FUN_1068c1240(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001068c1368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1068c1374; end: 1068c157f;  */

uint FUN_1068c1374(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar9 = *(uint *)(param_1 + 8);
  if ((int)uVar9 < 0xe) {
    if (1 < uVar9 - 1) {
      if (uVar9 - 0xc < 2) {
        plVar10 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,param_4);
        puVar2 = *(undefined8 **)(param_1 + 0x48);
        puVar3 = *(undefined8 **)(param_1 + 0x50);
        if (uVar9 == 0xc) {
          if (puVar2 == puVar3) {
            uVar9 = 0;
          }
          else {
            do {
              puVar7 = puVar2 + 1;
              plVar8 = (long *)*puVar2;
              uVar9 = (uint)(plVar10 == plVar8);
              puVar2 = puVar7;
            } while (plVar10 != plVar8 && puVar7 != puVar3);
          }
        }
        else if (puVar2 == puVar3) {
          uVar9 = 1;
        }
        else {
          do {
            puVar7 = puVar2 + 1;
            plVar8 = (long *)*puVar2;
            uVar9 = (uint)(plVar10 != plVar8);
            puVar2 = puVar7;
          } while (plVar10 != plVar8 && puVar7 != puVar3);
        }
        _objc_release(param_3);
        goto LAB_1068c1558;
      }
      goto LAB_1068c14a4;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar5 = uVar9 != 1;
    bVar4 = bStack_43;
  }
  else {
    if (uVar9 - 0xf < 2) {
      *param_4 = 0;
      uVar9 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_1068c1558;
    }
    if (uVar9 == 0xe) {
      lVar1 = 0x28;
      lVar6 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar6 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar6,param_4);
      uVar9 = (uint)lVar6;
      goto LAB_1068c1558;
    }
LAB_1068c14a4:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_1068c1558;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    plVar8 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_41);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar5 = uVar9 == 0xb;
    bVar4 = plVar10 == plVar8;
  }
  uVar9 = (uint)(bVar5 ^ bVar4);
LAB_1068c1558:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1068c1580; end: 1068c17fb;  */

undefined8 * FUN_1068c1580(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_110947fa0;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1068c0994(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 3);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_110947fa0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_110947fa0;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_1068c16a8;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1068c16a8;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1068c16a8:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110947fa0;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1068c17fc; end: 1068c18b7;  */

undefined8 FUN_1068c17fc(void)

{
  int iVar1;
  
  if ((bRam000000011381af90 & 1) == 0) {
    iVar1 = 0x1381af90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381af28 = 0xe;
      puRam000000011381af30 = &UNK_10f39fab9;
      uRam000000011381af38 = 0x1010000;
      pcRam000000011381af40 = FUN_1068c18b8;
      pcRam000000011381af48 = FUN_1068c18ec;
      ppuRam000000011381af20 = &PTR_DAT_11086d7d0;
      uRam000000011381af60 = 0;
      uRam000000011381af58 = 0;
      uRam000000011381af70 = 0;
      uRam000000011381af68 = 0;
      uRam000000011381af80 = 0;
      uRam000000011381af78 = 0;
      uRam000000011381af88 = 0;
      ___cxa_atexit(&DAT_105187b98,0x11381af20,0x100000000);
      ___cxa_guard_release(0x11381af90);
    }
  }
  return 0x11381af20;
}



/* Entry: 1068c18b8; end: 1068c18eb;  */

undefined8 FUN_1068c18b8(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 1068c18ec; end: 1068c1947;  */

undefined8 FUN_1068c18ec(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010beef1c0(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068c1948; end: 1068c1a03;  */

undefined8 FUN_1068c1948(void)

{
  int iVar1;
  
  if ((bRam000000011381b008 & 1) == 0) {
    iVar1 = 0x1381b008;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381afa0 = 0xe;
      puRam000000011381afa8 = &UNK_10f39facb;
      uRam000000011381afb0 = 0x1010000;
      pcRam000000011381afb8 = FUN_1068c1a04;
      pcRam000000011381afc0 = FUN_1068c1a3c;
      ppuRam000000011381af98 = &PTR_DAT_110948000;
      uRam000000011381afd8 = 0;
      uRam000000011381afd0 = 0;
      uRam000000011381afe8 = 0;
      uRam000000011381afe0 = 0;
      uRam000000011381aff8 = 0;
      uRam000000011381aff0 = 0;
      uRam000000011381b000 = 0;
      ___cxa_atexit(0x1068bfb78,0x11381af98,0x100000000);
      ___cxa_guard_release(0x11381b008);
    }
  }
  return 0x11381af98;
}



/* Entry: 1068c1a04; end: 1068c1a3b;  */

undefined4 FUN_1068c1a04(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1068c1a3c; end: 1068c1a8f;  */

undefined8 FUN_1068c1a3c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c266620(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1068c1a90; end: 1068c1a9b; +[SCBoostAction table] */

undefined * FUN_1068c1a90(void)

{
  return &UNK_10f39fad5;
}



/* Entry: 1068c1a9c; end: 1068c1d43; +[SCBoostAction immutableObjectParse:bufferSize:] */

void FUN_1068c1a9c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126b5b38;
  _objc_alloc(PTR_PTR_1126b5b38);
  lVar10 = (long)*piVar1;
  uVar7 = *(ushort *)((long)piVar1 - lVar10);
  if (uVar7 < 5) {
    puVar12 = (undefined *)0x0;
    uVar15 = 0;
LAB_1068c1ba4:
    puVar13 = (undefined *)0x0;
LAB_1068c1ba8:
    lVar10 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar10))[2];
    if (uVar11 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - lVar10);
    }
    lVar10 = -lVar10;
    uVar15 = 0;
    if (uVar7 < 7) goto LAB_1068c1ba4;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 6);
    if (uVar11 != 0) {
      uVar15 = *(undefined8 *)((long)piVar1 + uVar11);
    }
    if (uVar7 < 9) goto LAB_1068c1ba4;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 8);
    if (uVar11 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar7 < 0xb) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 10), uVar11 == 0))
    goto LAB_1068c1ba8;
    puVar2 = (uint *)((long)piVar1 + uVar11);
    lVar10 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1068c2cdc(lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar7 = *puVar9;
  if (uVar7 < 0xd) {
    bVar3 = false;
    uVar5 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar14 = 0;
    goto LAB_1068c1c48;
  }
  if ((ulong)puVar9[6] == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)((long)piVar1 + (ulong)puVar9[6]);
  }
  if (uVar7 < 0xf) {
    uVar5 = 0;
LAB_1068c1c40:
    bVar3 = false;
    uVar6 = 0;
  }
  else {
    if ((ulong)puVar9[7] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[7]);
    }
    if (uVar7 < 0x11) goto LAB_1068c1c40;
    if ((ulong)puVar9[8] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[8]);
    }
    if (uVar7 < 0x13) {
      bVar3 = false;
    }
    else {
      if ((ulong)puVar9[9] == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)((long)piVar1 + (ulong)puVar9[9]) != '\0';
      }
      if (0x14 < uVar7) {
        uVar8 = 0;
        if ((ulong)puVar9[10] != 0) {
          uVar8 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[10]);
        }
        goto LAB_1068c1c48;
      }
    }
  }
  uVar8 = 0;
LAB_1068c1c48:
  func_0x00010c04ee20(uVar15,uVar14,puVar4,param_2,puVar12,puVar13,lVar10,uVar5,uVar6,bVar3,uVar8);
  _objc_release(lVar10);
  _objc_release(puVar13);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068c1d44; end: 1068c1d67; +[SCBoostAction objectClassFunctionPointer] */

undefined1  [16] FUN_1068c1d44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1068c1d60;
  auVar1._0_8_ = 0x1068c1d58;
  return auVar1;
}



/* Entry: 1068c1d68; end: 1068c1f0f;  */

void FUN_1068c1d68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar8 = PTR_PTR_1126cec28;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c25e7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef1c0(param_3);
    lVar2 = param_3;
    uVar9 = param_1;
    func_0x00010c25e5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf45460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1178c0(param_3);
    lVar4 = param_3;
    func_0x00010beef1e0(param_3);
    lVar5 = param_3;
    func_0x00010c266620(param_3);
    lVar6 = param_3;
    func_0x00010c082620(param_3);
    lVar7 = param_3;
    func_0x00010bf1f9c0();
    FUN_1068c1f10(param_1,uVar9,puVar8,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7)
    ;
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar8 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1068c1f10; end: 1068c2057;  */

undefined1 *
FUN_1068c1f10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_78 = PTR_PTR_1126f3b18;
    lStack_80 = param_3;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_5;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x38) = param_2;
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      *(undefined8 *)((long)plVar1 + 0x48) = param_9;
      *(undefined1 *)((long)plVar1 + 0x14) = param_10;
      *(undefined8 *)((long)plVar1 + 0x50) = param_11;
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 1068c2058; end: 1068c20cb;  */

void FUN_1068c2058(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1068c20cc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068c20cc; end: 1068c2547;  */

void FUN_1068c20cc(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c25e7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar10,&UNK_10f39fae3);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c25e7e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar10;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar10;
            _sqlite3_column_int64(puVar10,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b5b38);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_1068c2474;
            puVar10 = PTR_PTR_1126cec28;
            _objc_alloc(PTR_PTR_1126cec28);
            puVar2 = puVar3;
            func_0x00010c25e7e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef1c0(puVar3);
            puVar4 = puVar3;
            uVar11 = param_1;
            func_0x00010c25e5c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf45460(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1178c0(puVar3);
            puVar6 = puVar3;
            func_0x00010beef1e0(puVar3);
            puVar7 = puVar3;
            func_0x00010c266620(puVar3);
            puVar8 = puVar3;
            func_0x00010c082620(puVar3);
            puVar9 = puVar3;
            func_0x00010bf1f9c0();
            FUN_1068c1f10(param_1,uVar11,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,
                          puVar9);
            param_2 = puVar3;
            goto LAB_1068c2238;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b5b38);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126cec28;
        _objc_alloc(PTR_PTR_1126cec28);
        puVar2 = puVar3;
        func_0x00010c25e7e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef1c0(puVar3);
        puVar4 = puVar3;
        uVar11 = param_1;
        func_0x00010c25e5c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf45460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1178c0(puVar3);
        puVar6 = puVar3;
        func_0x00010beef1e0(puVar3);
        puVar7 = puVar3;
        func_0x00010c266620(puVar3);
        puVar8 = puVar3;
        func_0x00010c082620(puVar3);
        puVar9 = puVar3;
        func_0x00010bf1f9c0();
        FUN_1068c1f10(param_1,uVar11,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9
                     );
        param_2 = puVar3;
LAB_1068c2238:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1068c247c;
      }
LAB_1068c2474:
      param_2 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_1068c247c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1068c2548; end: 1068c25bb;  */

void FUN_1068c2548(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1068c20cc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068c25bc; end: 1068c263f;  */

void FUN_1068c25bc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5b38;
    _objc_alloc(PTR_PTR_1126b5b38);
    func_0x00010c04ee20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068c2640; end: 1068c267b; -[SCBoostActionChangeRequest .cxx_destruct] */

void FUN_1068c2640(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1068c267c; end: 1068c2687; -[SCBoostActionChangeRequest table] */

undefined * FUN_1068c267c(void)

{
  return &UNK_10f39fad5;
}



/* Entry: 1068c2688; end: 1068c26cf; -[SCBoostActionChangeRequest createTableWithSQLite:] */

void FUN_1068c2688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde2887,0x87,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1068c26d0; end: 1068c2a57; -[SCBoostActionChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1068c26d0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1068c25bc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1068c2a58(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f39fb4d);
    if (lVar6 == 0) goto LAB_1068c29f4;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1068c29f4;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b5b38);
    func_0x00010c21c9a0(puVar7);
LAB_1068c29dc:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f39fb24);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b5b38);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1068c2a00;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1068c2a00;
    }
    FUN_1068c25bc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1068c2a58(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f39fb89);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b5b38);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1068c29dc;
      }
    }
LAB_1068c29f4:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1068c2a00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068c2a58; end: 1068c2cdb;  */

ulong FUN_1068c2a58(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar12 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf45460(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    FUN_1068c2df8(param_2,uVar5);
    _objc_release(uVar5);
    uVar12 = uVar12 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c25e7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_1068c2f08(param_2,uVar4);
  func_0x00010beef1c0(param_3);
  uVar6 = param_3;
  uVar13 = param_1;
  func_0x00010c25e5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_1068c2f08(param_2,uVar6);
  func_0x00010c1178c0(param_3);
  uVar8 = param_3;
  func_0x00010beef1e0(param_3);
  uVar9 = param_3;
  func_0x00010c266620(param_3);
  uVar10 = param_3;
  func_0x00010c082620(param_3);
  uVar11 = param_3;
  func_0x00010bf1f9c0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce1c8(param_2,0x14,uVar11 & 0xffffffff,0);
  func_0x0001001ce1c8(param_2,0x10,uVar9 & 0xffffffff,0);
  func_0x0001001ce1c8(param_2,0xe,uVar8 & 0xffffffff,0);
  func_0x0001001ce11c(uVar13,0,param_2,0xc);
  func_0x0001001ce11c(param_1,0,param_2,6);
  FUN_1068c3038(param_2,10,uVar12);
  func_0x0001001ce2e4(param_2,8,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_2,0x12,uVar10,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1068c2cdc; end: 1068c2df7;  */

void FUN_1068c2cdc(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  ushort *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_1068c2dac;
  }
  puVar7 = PTR_PTR_1126b5b30;
  _objc_alloc(PTR_PTR_1126b5b30);
  lVar5 = (long)*param_1;
  puVar6 = (ushort *)((long)param_1 - lVar5);
  uVar3 = *puVar6;
  if (uVar3 < 5) {
    uVar9 = 0;
LAB_1068c2d88:
    puVar8 = (undefined *)0x0;
LAB_1068c2d8c:
    uVar2 = 0;
  }
  else {
    if ((ulong)puVar6[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)param_1 + (ulong)puVar6[2]);
    }
    if (uVar3 < 7) goto LAB_1068c2d88;
    if ((ulong)puVar6[3] == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar6[3]);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar5);
    }
    if ((uVar3 < 9) || (uVar4 = (ulong)*(ushort *)((long)param_1 + (8 - lVar5)), uVar4 == 0))
    goto LAB_1068c2d8c;
    uVar2 = *(undefined8 *)((long)param_1 + uVar4);
  }
  func_0x00010c005f80(puVar7,param_2,uVar9,puVar8,uVar2);
  _objc_release(puVar8);
LAB_1068c2dac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068c2df8; end: 1068c2f07;  */

ulong FUN_1068c2df8(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf52680(param_2);
  uVar5 = param_2;
  func_0x00010bfe5d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_1068c2f08(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010c298be0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,8,uVar7,0);
  func_0x0001001ce1c8(param_1,4,uVar4 & 0xffffffff,0);
  func_0x0001001ce2e4(param_1,6,uVar6 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068c2f08; end: 1068c3037;  */

undefined8 FUN_1068c2f08(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1068c2fe8;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1068c2fe8;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1068c2fa8;
    param_1 = 0;
  }
  else {
LAB_1068c2fa8:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_1068c2fe8:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068c3038; end: 1068c30a7;  */

void FUN_1068c3038(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 1068c30a8; end: 1068c310b;  */

undefined ** FUN_1068c30a8(void)

{
  int iVar1;
  
  if ((bRam000000011381b010 & 1) == 0) {
    iVar1 = 0x1381b010;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113169090,0x100000000);
      ___cxa_guard_release(0x11381b010);
    }
  }
  return &PTR_PTR_113169090;
}



/* Entry: 1068c310c; end: 1068c3193;  */

void FUN_1068c310c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068c3194; end: 1068c321f;  */

void FUN_1068c3194(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c252600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c252600(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068c3220; end: 1068c32db;  */

undefined8 FUN_1068c3220(void)

{
  int iVar1;
  
  if ((bRam000000011381b088 & 1) == 0) {
    iVar1 = 0x1381b088;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381b020 = 0xe;
      puRam000000011381b028 = &UNK_10f39fbd7;
      uRam000000011381b030 = 0x1010000;
      pcRam000000011381b038 = FUN_1068c32dc;
      pcRam000000011381b040 = FUN_1068c3348;
      ppuRam000000011381b018 = &PTR_DAT_11086d7d0;
      uRam000000011381b058 = 0;
      uRam000000011381b050 = 0;
      uRam000000011381b068 = 0;
      uRam000000011381b060 = 0;
      uRam000000011381b078 = 0;
      uRam000000011381b070 = 0;
      uRam000000011381b080 = 0;
      ___cxa_atexit(&DAT_105187b98,0x11381b018,0x100000000);
      ___cxa_guard_release(0x11381b088);
    }
  }
  return 0x11381b018;
}



/* Entry: 1068c32dc; end: 1068c3347;  */

undefined8 FUN_1068c32dc(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    puVar2 = (uint *)((long)piVar1 + uVar3);
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 != 0)) {
      return *(undefined8 *)((long)piVar1 + uVar3);
    }
  }
  return 0;
}


